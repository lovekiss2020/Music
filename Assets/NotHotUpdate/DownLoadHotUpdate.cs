
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
public class DownLoadHotUpdate : MonoBehaviour
{

    public Action downloadSuccessAction;

    private void Awake()
    {

    }

    public void startDownLoad(List<string> assetsNames)
    {
        StartCoroutine(DownLoadAssets(assetsNames));
    }




    IEnumerator DownLoadAssets(List<string> assetsName)
    {
        var assets = assetsName;

        foreach (var asset in assets)
        {
             Debug.Log("下载热更新资源----->"+asset);
            UnityWebRequest www = UnityWebRequest.Get(asset);
            yield return www.SendWebRequest();

#if UNITY_2020_1_OR_NEWER
            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);

            }
#else
            if (www.isHttpError || www.isNetworkError)
            {
                Debug.Log(www.error);
            }
#endif
            else
            {


                // Or retrieve results as binary data
                byte[] assetData = www.downloadHandler.data;
                string persistentPath = Application.streamingAssetsPath+"/"+Path.GetFileName(asset);
                File.WriteAllBytes(persistentPath, assetData);
               
                Debug.Log($"dll:{asset}  size:{assetData.Length}");
            }
        }
        Debug.Log("====================资源下载成功=====================");
        downloadSuccessAction?.Invoke();
    }
}
