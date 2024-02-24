using HybridCLR;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Serialization;
using Assembly = System.Reflection.Assembly;


static class Extend
{
    public static TaskAwaiter GetAwaiter(this UnityWebRequestAsyncOperation asyncOp)
    {
        var tcs = new TaskCompletionSource<object>();
        asyncOp.completed += obj => { tcs.SetResult(null); };
        return ((Task)tcs.Task).GetAwaiter();
    }
}

public class LoadDlls : MonoBehaviour
{
    enum EditLoadType
    {
        Edit,
        AssetBundle
    }
    
    private const string _updateIp = "";
    [Header("编辑器环境是否开启热更新")]
    [SerializeField]
    private bool IsEnableHotUpdateInEditor = false;
    
    [FormerlySerializedAs("EditorLoadType")]
    [Header("编辑器环境加载模式")]
    [SerializeField]
    private EditLoadType LoadType = EditLoadType.Edit;
    private GameObject _uiUpdateRoot = null;
    async void Start()
    {
#if UNITY_EDITOR
        //编辑器关闭热更新
        if (!IsEnableHotUpdateInEditor)
        {
            _hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Game");
            Type entryType = _hotUpdateAss.GetType("GameEntry");
            object[] parameters = new object[1];
            parameters[0] = (int)LoadType;
            entryType.GetMethod("Init").Invoke(null, parameters);
            return;
        }
#endif
        _uiUpdateRoot = GameObject.Instantiate(Resources.Load<GameObject>("UIHotUpdateRoot"));
        UnityWebRequest versionRequest = UnityWebRequest.Get($"{_updateIp}version.txt");
        await versionRequest.SendWebRequest();
        if (versionRequest.isHttpError || versionRequest.isNetworkError)
        {
            Debug.LogError(versionRequest.error);
            return;
        }

        var strArray = versionRequest.downloadHandler.text.Split('.');
        var bigVersion = strArray[0];
        var resVersionArray = strArray[1].Split(':');
        var resVersion = resVersionArray[1];
        var dllVersionArray = strArray[2].Split(':');
        var dllVersion = dllVersionArray[1];
        //更新Dll
        DllUpdater dllUpdater = new DllUpdater(bigVersion, dllVersion, _updateIp, _uiUpdateRoot.GetComponent<UIHorUpdateRoot>());
        var bVal = await dllUpdater.StarUpdate();
        if (bVal)
        {
            //补充APT元数据
            List<string> aotList = new List<string>();
            List<byte[]> aotByteList = new List<byte[]>();
            foreach (var key in dllUpdater.DicNetNameToMD5.Keys)
            {
                aotList.Add(key.Replace("/", ""));
                aotByteList.Add(File.ReadAllBytes(Application.persistentDataPath + key));
            }

            LoadMetadataForAOTAssemblies(aotList, aotByteList);
            dllUpdater.Dispose();
            dllUpdater = null;
            //更新资源
            ResourceUpdater resUpdater = new ResourceUpdater(bigVersion, resVersion, _updateIp, _uiUpdateRoot.GetComponent<UIHorUpdateRoot>());
            await resUpdater.StarUpdate();
            Destroy(_uiUpdateRoot);
            _uiUpdateRoot = null;
            //热更界面非AB加载，所以需要手动释放资源
            Resources.UnloadUnusedAssets();
            StartGame();
        }
    }

    private static Assembly _hotUpdateAss;

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies(List<string> aotMetaAssemblyFiles, List<byte[]> dllBytesList)
    {
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        for (int i = 0; i < aotMetaAssemblyFiles.Count; i++)
        {
            byte[] dllBytes = dllBytesList[i];
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotMetaAssemblyFiles[i]}. mode:{mode} ret:{err}");
        }
    }

    void StartGame()
    {
#if !UNITY_EDITOR
        
        _hotUpdateAss = Assembly.Load(File.ReadAllBytes(Application.persistentDataPath + "/Game.dll.bytes"));
#else
        _hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Game");
#endif
        Type entryType = _hotUpdateAss.GetType("GameEntry");
        object[] parameters = new object[1];
        parameters[0] = (int)LoadType;
        entryType.GetMethod("Init").Invoke(null, parameters);
    }
}
