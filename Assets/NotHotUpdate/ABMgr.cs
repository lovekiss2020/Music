
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ABMgr : MonoBehaviour
{
    private AssetBundle mainAb = null;
    private AssetBundleManifest mainManifest = null;
    private Dictionary<string,AssetBundle> abDic = new Dictionary<string,AssetBundle>();

    private string PathUrl
    {
        get
        {
            return Application.streamingAssetsPath + "/";
        }
    }
    
    /// <summary>
    /// 主包名
    /// </summary>
    private string MainAbName
    {
        get
        {
#if UNITY_IOS
return "IOS";
#elif UNITY_ANDROID
return "Android";
#else
            return "PC";
#endif
        }
    }

    #region 同步加载
    /// <summary>
    /// 加载AB包
    /// </summary>
    /// <param name="abName">AB包名</param>
    public void LoadAb(string abName)
    {
        //加载AB包
        if (mainAb == null)
        {
            mainAb = AssetBundle.LoadFromFile(PathUrl + MainAbName);
            mainManifest = mainAb.LoadAsset<AssetBundleManifest>("AssetBundleManifest");
        }
        //获取依赖相关信息
        AssetBundle ab = null;
        string[] strs = mainManifest.GetAllDependencies(abName);
        foreach (string str in strs)
        {
            if (!abDic.ContainsKey(str))
            {
                ab = AssetBundle.LoadFromFile(PathUrl + str);
                abDic.Add(str, ab);
            }
        }
        //加载资源来源包
        if (!abDic.ContainsKey(abName))
        {
            ab = AssetBundle.LoadFromFile(PathUrl + abName);
            abDic.Add(abName, ab);
        }
    }
    /// <summary>
    /// 同步加载,不指定类型
    /// </summary>
    /// <param name="abName">AB包名</param>
    /// <param name="resName">AB包中资源名</param>
    /// <returns></returns>
    public Object LoadRes(string abName,string resName)
    {

        LoadAb(abName);
        Object obj = abDic[abName].LoadAsset(resName);
        if(obj is GameObject)
        {
            return Instantiate(obj);
        }
        else
        {
            return obj;
        }
    }
    /// <summary>
    /// 同步加载,不指定类型
    /// </summary>
    /// <param name="abName">AB包名</param>
    /// <param name="resName">AB包中资源名</param>
    /// <param name="type">类型</param>
    /// <returns></returns>
    public Object LoadRes(string abName,string resName, System.Type type)
    {
        LoadAb(abName);
        LoadAb(abName);
        Object obj = abDic[abName].LoadAsset(resName, type);
        if (obj is GameObject)
        {
            return Instantiate(obj);
        }
        else
        {
            return obj;
        }
    }
    /// <summary>
    /// 
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="abName">AB包名</param>
    /// <param name="resName">AB包中资源名</param>
    /// <returns></returns>
    public T LoadRes<T>(string abName, string resName) where T : Object
    {
        LoadAb(abName);
        T obj= abDic[abName].LoadAsset<T>(resName);
        if (obj is GameObject)
        {
            return Instantiate(obj);
        }
        else
        {
            return obj;
        }
    }

    #endregion

    #region AB包的卸载
    //单个包卸载
    public void UnLoad(string abName)
    {
        if (abDic.ContainsKey(abName))
        {
            abDic[abName].Unload(false);
            abDic.Remove(abName);
        }
    }
    //所有包卸载
    public void ClearAB()
    {
        AssetBundle.UnloadAllAssetBundles(false);
        abDic.Clear();
        mainAb= null;
        mainManifest= null;
    }
    #endregion

    #region 异步加载
    /// <summary>
    /// 异步加载
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="resName"></param>
    /// <param name="callBack"></param>
    public void  LoadResAsync(string abName,string resName, System.Action<Object> callBack) { 

        StartCoroutine(ReallyLoadResAsync(abName,resName,callBack));
    }
    private IEnumerator ReallyLoadResAsync(string abName, string resName, System.Action<Object> callBack)
    {
        LoadAb(abName);
        AssetBundleRequest abr = abDic[abName].LoadAssetAsync(resName);
        yield return abr;

        if(abr.asset is GameObject)
        {
            callBack(Instantiate(abr.asset));
        }else
        {
            callBack(abr.asset);
        }
    }


    public void LoadResAsync(string abName, string resName, System.Action<Object> callBack,System.Type type)
    {

        StartCoroutine(ReallyLoadResAsync(abName, resName, callBack, type));
    }
    private IEnumerator ReallyLoadResAsync(string abName, string resName, System.Action<Object> callBack, System.Type type)
    {
        LoadAb(abName);
        AssetBundleRequest abr = abDic[abName].LoadAssetAsync(resName, type);
        yield return abr;

        if (abr.asset is GameObject)
        {
            callBack(Instantiate(abr.asset));
        }
        else
        {
            callBack(abr.asset);
        }
    }

    public void LoadResAsync<T>(string abName, string resName, System.Action<T> callBack) where T : Object
    {

        StartCoroutine(ReallyLoadResAsync<T>(abName, resName, callBack));
    }
    private IEnumerator ReallyLoadResAsync<T>(string abName, string resName, System.Action<T> callBack) where T:Object
    {
        LoadAb(abName);
        AssetBundleRequest abr = abDic[abName].LoadAssetAsync<T>(resName);
        yield return abr;

        if (abr.asset is GameObject)
        {
            callBack(Instantiate(abr.asset) as T);
        }
        else
        {
            callBack(abr.asset as T);
        }
    }


    #endregion
}
