using HybridCLR.Editor.Commands;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;

namespace HybridCLR.Editor
{
    public static class BuildAssetsCommand
    {
        public static string HybridCLRBuildCacheDir => Application.dataPath + "/HybridCLRBuildCache";

        public static string AssetBundleOutputDir => $"{HybridCLRBuildCacheDir}/AssetBundleOutput";

        public static string AssetBundleSourceDataTempDir => $"{HybridCLRBuildCacheDir}/AssetBundleSourceData";

        static string resourceDirectory = "D:/Unity/Music/Data";
        static string md5FileListPath = "D:/Unity/Music/Data/MD5";

        public static string GetAssetBundleOutputDirByTarget(BuildTarget target)
        {
            return $"{AssetBundleOutputDir}/{target}";
        }

        public static string GetAssetBundleTempDirByTarget(BuildTarget target)
        {
            return $"{AssetBundleSourceDataTempDir}/{target}";
        }

        public static string ToRelativeAssetPath(string s)
        {
            return s.Substring(s.IndexOf("Assets/"));
        }
        static void GenerateMD5ForAllFiles()
        {


            List<string> md5FileNames = new List<string>();
            // 确保输出目录存在
            if (!Directory.Exists(md5FileListPath))
            {
                Directory.CreateDirectory(md5FileListPath);
            }

            foreach (string filePath in Directory.GetFiles(resourceDirectory, "*", SearchOption.AllDirectories))
            {
                string relativePath = Path.GetRelativePath(resourceDirectory, filePath);
                string md5FileName = relativePath.Replace(Path.DirectorySeparatorChar, '_') + ".md5";
                string md5FilePath = Path.Combine(md5FileListPath, md5FileName);

                // 计算文件的 MD5 值
                string md5Hash = CalculateMD5(filePath);

                // 将 MD5 值写入到对应的 MD5 文件中
                File.WriteAllText(md5FilePath, $"{relativePath}:{md5Hash}");

                // 添加 MD5 文件名到列表
                md5FileNames.Add(md5FileName);

                Console.WriteLine($"Generated MD5 for {relativePath}: {md5Hash}");
            }

            // 将所有 MD5 文件名写入到文本文件中
            File.WriteAllLines(md5FileListPath + "/AllMD5.text", md5FileNames);
            Console.WriteLine($"Generated MD5 file list at: {md5FileListPath}");

        }
        static string CalculateMD5(string filePath)
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






        /// <summary>
        /// 将HotFix.dll和HotUpdatePrefab.prefab打入common包.
        /// 将HotUpdateScene.unity打入scene包.
        /// </summary>
        /// <param name="tempDir"></param>
        /// <param name="outputDir"></param>
        /// <param name="target"></param>
        private static void BuildAssetBundles(string tempDir, string outputDir, BuildTarget target)
        {
            Directory.CreateDirectory(tempDir);
            Directory.CreateDirectory(outputDir);
            List<string> resPath = new List<string>()
            {
                $"{Application.dataPath}/Res/prefab",
                $"{Application.dataPath}/Res/Scenes/Game.unity",
                 $"{Application.dataPath}/Res/Scenes/MainUI.unity"
            };
            List<AssetBundleBuild> abs = new List<AssetBundleBuild>();

            foreach (var path in resPath)
            {

                {
                    var res = new List<string>();
                    string testPrefab = path;
                    res.Add(testPrefab);
                    AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
                    abs.Add(new AssetBundleBuild
                    {
                        assetBundleName = Path.GetFileName(path),
                        assetNames = res.Select(s => ToRelativeAssetPath(s)).ToArray(),
                    });
                }

            }
            BuildPipeline.BuildAssetBundles(outputDir, abs.ToArray(), BuildAssetBundleOptions.None, target);
            AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);

        }

        public static void BuildAssetBundleByTarget(BuildTarget target)
        {
            BuildAssetBundles(GetAssetBundleTempDirByTarget(target), GetAssetBundleOutputDirByTarget(target), target);
        }

        [MenuItem("Build/BuildAssetsAndCopyToStreamingAssets")]
        public static void BuildAndCopyABAOTHotUpdateDlls()
        {
            BuildTarget target = EditorUserBuildSettings.activeBuildTarget;
            BuildAssetBundleByTarget(target);
            CompileDllCommand.CompileDll(target);
            CopyABAOTHotUpdateDlls(target);
            AssetDatabase.Refresh();
            DeleteFiles();
            //生成MD5码文件
            GenerateMD5ForAllFiles();
        }
        private static void DeleteFiles()
        {
            if (Directory.Exists(md5FileListPath))
            {
                // 获取文件夹中的所有文件
                string[] files = Directory.GetFiles(md5FileListPath);

                foreach (string file in files)
                {
                    // 删除每个文件
                    File.Delete(file);
                }

                Debug.Log("All files in the folder have been deleted.");
            }
            else
            {
                Debug.LogWarning($"The folder '{md5FileListPath}' does not exist.");
            }
        }

        public static void CopyABAOTHotUpdateDlls(BuildTarget target)
        {
            CopyAssetBundlesToStreamingAssets(target);
            CopyAOTAssembliesToStreamingAssets();
            CopyHotUpdateAssembliesToStreamingAssets();
        }


        [MenuItem("HybridCLR/Build/BuildAssetbundle")]
        public static void BuildSceneAssetBundleActiveBuildTargetExcludeAOT()
        {
            BuildAssetBundleByTarget(EditorUserBuildSettings.activeBuildTarget);
        }
        //补充元数据
        public static void CopyAOTAssembliesToStreamingAssets()
        {
            var target = EditorUserBuildSettings.activeBuildTarget;
            string aotAssembliesSrcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(target);
            string aotAssembliesDstDir = "D:/Unity/Music/Data";
            //Application.streamingAssetsPath;
            // "D:/Unity/Music/Data";
            foreach (var dll in SettingsUtil.AOTAssemblyNames)
            {
                string srcDllPath = $"{aotAssembliesSrcDir}/{dll}.dll";
                if (!File.Exists(srcDllPath))
                {
                    Debug.LogError($"ab中添加AOT补充元数据dll:{srcDllPath} 时发生错误,文件不存在。裁剪后的AOT dll在BuildPlayer时才能生成，因此需要你先构建一次游戏App后再打包。");
                    continue;
                }
                string dllBytesPath = $"{aotAssembliesDstDir}/{dll}.dll.bytes";
                File.Copy(srcDllPath, dllBytesPath, true);
                Debug.Log($"[CopyAOTAssembliesToStreamingAssets] copy AOT dll {srcDllPath} -> {dllBytesPath}");
            }
        }
        //拷贝热更新程序集
        public static void CopyHotUpdateAssembliesToStreamingAssets()
        {
            var target = EditorUserBuildSettings.activeBuildTarget;

            string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target);
            string hotfixAssembliesDstDir = "D:/Unity/Music/Data";
            //Application.streamingAssetsPath;
            foreach (var dll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
            {
                string dllPath = $"{hotfixDllSrcDir}/{dll}";
                string dllBytesPath = $"{hotfixAssembliesDstDir}/{dll}.bytes";
                File.Copy(dllPath, dllBytesPath, true);
                Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {dllPath} -> {dllBytesPath}");
            }
        }

        public static void CopyAssetBundlesToStreamingAssets(BuildTarget target)
        {
            string streamingAssetPathDst = "D:/Unity/Music/Data";
            // Application.streamingAssetsPath;
            Directory.CreateDirectory(streamingAssetPathDst);
            string outputDir = GetAssetBundleOutputDirByTarget(target);
            var abs = Directory.GetFiles(outputDir);
            foreach (var ab in abs)
            {
                Debug.Log("=====================>"+ab);
                if (Path.GetExtension(ab) == ".meta") break;
                string srcAb = ToRelativeAssetPath($"{outputDir}/{Path.GetFileName(ab)}");
                string dstAb = $"{streamingAssetPathDst}/{Path.GetFileName(ab)}";
                Debug.Log($"[CopyAssetBundlesToStreamingAssets] copy assetbundle {srcAb} -> {dstAb}");
                File.Copy(srcAb, dstAb, true);
            }
        }
    }
}
