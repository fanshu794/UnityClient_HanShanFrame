using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Threading.Tasks;
using Game.Main;
using UnityEngine;
using UnityEngine.Networking;

public abstract class BaseHotUpdater : IDisposable
{
    public string HotNetBasePath = string.Empty;

    private string _bigVersion = string.Empty;
    protected string SmallVersion = string.Empty;
    private const string _netVersionPath = Enviroment.HotNetBasePath + Enviroment.VersionFileName;
    private Dictionary<string, string> _dicNetNameToMD5 = new Dictionary<string, string>();
    private Dictionary<string, string> _dicLocalNameToMD5 = new Dictionary<string, string>();
    private StringBuilder _downLoadSb = new StringBuilder();
    private UIHorUpdateRoot _uiHorUpdateRoot = null;

    public Dictionary<string, string> DicNetNameToMD5 => _dicNetNameToMD5;
    public BaseHotUpdater(string bigVersion, string updateIp, UIHorUpdateRoot uiHorUpdateRoot)
    {
        _bigVersion = bigVersion;
        HotNetBasePath = updateIp;
        _uiHorUpdateRoot = uiHorUpdateRoot;
    }
    
    
    protected abstract string GetMd5FileName();

    protected abstract string GetRootName();

    //例如 ip/1/dlls/3/dllList.txt
    private string GetNetFilePath()
    {
        return $"{HotNetBasePath}/{_bigVersion}/{GetRootName()}/{SmallVersion}/{GetMd5FileName()}";
    }

    private string GetDownLoadFilePath(string fileName)
    {
        _downLoadSb.Clear();
        _downLoadSb.Append(HotNetBasePath);
        _downLoadSb.Append("/");
        _downLoadSb.Append(_bigVersion);
        _downLoadSb.Append("/");
        _downLoadSb.Append(GetRootName());
        _downLoadSb.Append("/");
        _downLoadSb.Append(SmallVersion);
        _downLoadSb.Append(fileName);
        return _downLoadSb.ToString();
    }

    public void Dispose()
    {
        _dicNetNameToMD5.Clear();
        _dicNetNameToMD5 = null;
        _dicLocalNameToMD5.Clear();
        _dicLocalNameToMD5 = null;
        _downLoadSb = null;
        _uiHorUpdateRoot = null;
    }
    
     public async Task<bool> StarUpdate()
    {
        //进行热更资源比较
        string netFileListPath = GetNetFilePath();
        UnityWebRequest hotRequest = UnityWebRequest.Get(netFileListPath);
        await hotRequest.SendWebRequest();
        var lineArray = hotRequest.downloadHandler.text.Split('\n');
        if(hotRequest.isNetworkError || hotRequest.isHttpError) {
            _uiHorUpdateRoot.UpdateInfo($"download failed {GetRootName()}{hotRequest.error}");
            Debug.LogError($"download failed {GetRootName()}{netFileListPath}");
            return false;
        }
        else
        {
            foreach (var line in lineArray)
            {
                if (line.Equals(string.Empty))
                {
                    continue;
                }

                var newLine = line.Trim('\r');
                var fileArray = newLine.Split(',');
                _dicNetNameToMD5.Add(fileArray[0], fileArray[1]);
            }

            var downLoadFiles = GetDownLoadFileNames();
            if (downLoadFiles.Count == 0)
            {
                _uiHorUpdateRoot.UpdateInfo($"check complete");
                Debug.Log("check complete");
                return true;
            }
            else
            {
                foreach (var file in downLoadFiles)
                {
                    string path = GetDownLoadFilePath(file);
                    UnityWebRequest downRequest = UnityWebRequest.Get(path);
                    await downRequest.SendWebRequest();
                    if(downRequest.isNetworkError || downRequest.isHttpError) {
                        _uiHorUpdateRoot.UpdateInfo($"download failed{file}");
                        Debug.LogError($"download failed{file}");
                        return false;
                    }
                    else
                    {
                        _downLoadSb.Clear();
                        _downLoadSb.Append(Application.persistentDataPath);
                        _downLoadSb.Append(file);
                        File.WriteAllBytes(_downLoadSb.ToString(), downRequest.downloadHandler.data);
                        _uiHorUpdateRoot.UpdateInfo($"{file}download finished");
                        Debug.Log($"{file}download finished");
                    }
                }
            }
        }
        return true;
    }

    private List<string> GetDownLoadFileNames()
    {
        //初始化本地文件的MD5
        _dicLocalNameToMD5.Clear();
        string localFilePath = $"{Application.persistentDataPath}/{GetMd5FileName()}";
        if (File.Exists(localFilePath))
        {
            var localLines = File.ReadAllLines(localFilePath);
            foreach (var line in localLines)
            {
                if (line.Equals(string.Empty))
                {
                    continue;
                }
                var lineArray = line.Split(',');
                _dicLocalNameToMD5.Add(lineArray[0], lineArray[1]);
            }
        }
        
        StringBuilder sb = new StringBuilder(10);
        List<string> fileList = new List<string>();
        foreach (var keyVal in _dicNetNameToMD5)
        {
            sb.Clear();
            sb.Append(Application.persistentDataPath);
            sb.Append(keyVal.Key);
            if (File.Exists(sb.ToString()) && _dicLocalNameToMD5.ContainsKey(keyVal.Key))
            {
                //如果存在，判断本地MD5是否一致
                if (!keyVal.Value.Equals(_dicLocalNameToMD5[keyVal.Key]))
                {
                    fileList.Add(keyVal.Key);
                }
            }
            //如果本地没有这个资源，需要加入
            else
            {
                fileList.Add(keyVal.Key);
                //是否需要建立新文件夹
                if (keyVal.Key.Contains('/'))
                {
                    int last = keyVal.Key.LastIndexOf('/');
                    var directoryPath = keyVal.Key.Substring(0, last);
                    sb.Clear();
                    sb.Append(Application.persistentDataPath);
                    sb.Append(directoryPath);
                    if (!Directory.Exists(sb.ToString()))
                    {
                        Directory.CreateDirectory(sb.ToString());
                    }
                }
            }
        }

        if (fileList.Count > 0)
        {
            //下载最新的FileList
            fileList.Add("/" + GetMd5FileName());
        }
        return fileList;
    }
}
   

