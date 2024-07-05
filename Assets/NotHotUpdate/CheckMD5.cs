using UnityEngine;
using System.Collections;
using System.IO;
using System.Security.Cryptography;
using System;
using UnityEngine.Networking;
using System.Collections.Generic;

public class CheckMD5 : MonoBehaviour
{
    public DownLoadHotUpdate downLoadHotUpdate;
    public LoadAssembly loadAssembly;
    public SliderController sliderController;
    private string downLoadMD5Path = Application.streamingAssetsPath + "/MD5";
    private static string md5Name = "AllMD5.text";
    private string md5Message = $"/MD5/{md5Name}";
    //服务器地址。
    private string severUrl = "D:/Unity/Music/Data";
    private void Awake()
    {
        downLoadHotUpdate.downloadSuccessAction += CheckForUpdates;
    }
    private void OnDestroy()
    {
        downLoadHotUpdate.downloadSuccessAction -= CheckForUpdates;
    }
    void Start()
    {
        //清理本地MD5
        DeleteFiles();
        //下载远程MD5码
        StartCoroutine(DownloadMd5ListFile());

    }
    private void DeleteFiles()
    {
        if (Directory.Exists(downLoadMD5Path))
        {
            // 获取文件夹中的所有文件
            string[] files = Directory.GetFiles(downLoadMD5Path);

            foreach (string file in files)
            {
                // 删除每个文件
                File.Delete(file);
            }

            Debug.Log("All files in the folder have been deleted.");
        }
        else
        {
            Debug.LogWarning($"The folder '{downLoadMD5Path}' does not exist.");
        }
    }

    string CalculateMD5(string filePath)
    {
        if (!File.Exists(filePath))
            return null;

        using (var md5 = System.Security.Cryptography.MD5.Create())
        {
            using (var stream = File.OpenRead(filePath))
            {
                byte[] hash = md5.ComputeHash(stream);
                return System.BitConverter.ToString(hash).Replace("-", "").ToLowerInvariant();
            }
        }
    }

    //下载所有MD5文件

    private List<string> md5FileNames = new List<string>(); // 假定你已经知道所有的 MD5 文件名


    IEnumerator DownloadMd5ListFile()
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(severUrl + "/" + md5Message))
        {
            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.ConnectionError ||
                webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError(webRequest.error);
            }
            else
            {
                // 下载成功，解析文件名列表
                string content = webRequest.downloadHandler.text;
                md5FileNames.AddRange(content.Split(new[] { '\n', '\r' }, System.StringSplitOptions.RemoveEmptyEntries));
                Debug.Log($"下载MD5列表文件: {content}");

                // 开始下载所有的 MD5 文件
                StartCoroutine(DownloadAllMd5Files());
            }
        }
    }

    IEnumerator DownloadAllMd5Files()
    {
        foreach (string fileName in md5FileNames)
        {

            string remoteFileUrl = $"{severUrl}/MD5/{fileName}";
            string localFilePath = downLoadMD5Path + "/" + fileName;
            using (UnityWebRequest webRequest = UnityWebRequest.Get(remoteFileUrl))
            {
                yield return webRequest.SendWebRequest();

                if (webRequest.result == UnityWebRequest.Result.ConnectionError ||
                    webRequest.result == UnityWebRequest.Result.ProtocolError)
                {
                    Debug.LogError(webRequest.error);
                }
                else
                {
                    // 下载成功，将内容保存到本地文件
                    Directory.CreateDirectory(Path.GetDirectoryName(localFilePath));
                    File.WriteAllText(localFilePath, webRequest.downloadHandler.text);
                    
                }
            }
        }
        Debug.Log("MD5文件下载成功");
        // 所有 MD5 文件下载完成后，开始进行更新校验
        CheckForUpdates();
    }

    void CheckForUpdates()
    {
        List<string> fileurl = new List<string>();
        foreach (string fileName in md5FileNames)
        {
            string localMd5FilePath = Path.Combine(downLoadMD5Path, fileName);
            if (!File.Exists(localMd5FilePath))
            {
                Debug.LogError("Local MD5 file not found: " + localMd5FilePath);
                continue;
            }

            // 读取本地和远程 MD5 文件内容
            string[] lines = File.ReadAllLines(localMd5FilePath);

            foreach (string line in lines)
            {


                string[] parts = line.Split(':');
                if (parts.Length == 2)
                {
                    string relativePath = parts[0].Trim();
                    string remoteMd5 = parts[1].Trim();
                    if (Path.GetFileName(relativePath).Equals(md5Name)) break;//MD5Name文件不需要校验直接跳过
                    // 本地文件路径
                    string localFilePath = Application.streamingAssetsPath + "/" + relativePath;

                    // 计算本地文件的 MD5
                    string localMd5 = CalculateMD5(localFilePath);

                    // 比较远程和本地 MD5 值
                    if (localMd5 != remoteMd5)
                    {
                        Debug.Log("需要热更新: " + relativePath);
                        // 生成远程文件 URL
                        string remoteFileUrl = $"{severUrl}/{relativePath}";
                        fileurl.Add(remoteFileUrl);
                    }
                }
            }
        }
        if (fileurl.Count == 0)
        {
            //文件全部更新完成,加载程序集
            Debug.Log("文件更新完成，加载程序集");
            loadAssembly.action?.Invoke();
            return;
        }
        downLoadHotUpdate.startDownLoad(fileurl,sliderController.sliderAction);
    }



}
