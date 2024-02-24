using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using Game.Frame;
using HybridCLR.Editor;
using HybridCLR.Editor.Commands;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class ClientTools : EditorWindow
{
    #region 打包工具
    [MenuItem("客户端工具/打包AB/全量打包 Windows")]
    public static void BuildABWindowsRebuild()
    {
        BuildAB(BuildTarget.StandaloneWindows64, false);
    }

    [MenuItem("客户端工具/打包AB/全量打包 Android")]
    public static void BuildABAndroidRebuild()
    {
        BuildAB(BuildTarget.Android, false);
    }

    [MenuItem("客户端工具/打包AB/全量打包 IOS")]
    public static void BuildABiOSRebuild()
    {
        BuildAB(BuildTarget.iOS, false);
    }
    
    [MenuItem("客户端工具/打包代码Dll")]
    public static void BuildAndCopyABAOTHotUpdateDlls()
    {
        BuildTarget target = EditorUserBuildSettings.activeBuildTarget;
        CompileDllCommand.CompileDll(target);
        CopyABAOTHotUpdateDlls(target);
        AssetDatabase.Refresh();
    }
    
    public static void CopyABAOTHotUpdateDlls(BuildTarget target)
    {
        Dictionary<string, string> dicMd5 = new Dictionary<string, string>();
        CopyAOTAssembliesToStreamingAssets(dicMd5);
        CopyHotUpdateAssembliesToStreamingAssets(dicMd5);
        string[] lines = new string[dicMd5.Count];
        int index = 0;
        foreach (var keyVal in dicMd5)
        {
            lines[index++] = $"/{keyVal.Key},{keyVal.Value}";
        }
        File.WriteAllLines($"{Application.streamingAssetsPath}/dlls/dllList.txt", lines);
    }
    
    public static void CopyAOTAssembliesToStreamingAssets(Dictionary<string, string> dicMd5)
    {
        var target = EditorUserBuildSettings.activeBuildTarget;
        string aotAssembliesSrcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(target);
        string aotAssembliesDstDir = Application.streamingAssetsPath;

        foreach (var dll in AOTGenericReferences.PatchedAOTAssemblyList)
        {
            string srcDllPath = $"{aotAssembliesSrcDir}/{dll}";
            if (!File.Exists(srcDllPath))
            {
                Debug.LogError($"ab中添加AOT补充元数据dll:{srcDllPath} 时发生错误,文件不存在。裁剪后的AOT dll在BuildPlayer时才能生成，因此需要你先构建一次游戏App后再打包。");
                continue;
            }

            if (!File.Exists($"{aotAssembliesDstDir}/dlls"))
            {
                Directory.CreateDirectory($"{aotAssembliesDstDir}/dlls");
            }
            string dllBytesPath = $"{aotAssembliesDstDir}/dlls/{dll}.bytes";
            dicMd5.Add($"{dll}.bytes", Md5Tool.GetMd5ByPath(dllBytesPath));
            File.Copy(srcDllPath, dllBytesPath, true);
            Debug.Log($"[CopyAOTAssembliesToStreamingAssets] copy AOT dll {srcDllPath} -> {dllBytesPath}");
        }
    }

    public static void CopyHotUpdateAssembliesToStreamingAssets(Dictionary<string, string> dicMd5)
    {
        var target = EditorUserBuildSettings.activeBuildTarget;

        string hotfixDllSrcDir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(target);
        string hotfixAssembliesDstDir = Application.streamingAssetsPath;
        foreach (var dll in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
        {
            string dllPath = $"{hotfixDllSrcDir}/{dll}";
            if (!File.Exists($"{hotfixAssembliesDstDir}/dlls"))
            {
                Directory.CreateDirectory($"{hotfixAssembliesDstDir}/dlls");
            }
            string dllBytesPath = $"{hotfixAssembliesDstDir}/dlls/{dll}.bytes";
            dicMd5.Add($"{dll}.bytes", Md5Tool.GetMd5ByPath(dllBytesPath));
            File.Copy(dllPath, dllBytesPath, true);
            Debug.Log($"[CopyHotUpdateAssembliesToStreamingAssets] copy hotfix dll {dllPath} -> {dllBytesPath}");
        }
    }
    
    public static void BuildABWindowsIncrement()
    {
        BuildAB(BuildTarget.StandaloneWindows64, true);
    }
    
    public static void BuildABAndroidIncrement()
    {
        BuildAB(BuildTarget.Android, true);
    }
    
    public static void BuildABiOSIncrement()
    {
        BuildAB(BuildTarget.iOS, true);
    }

    class ABMd5Info
    {
        public string fileName = string.Empty;
        public string md5 = string.Empty;
    }

    private static List<AssetBundleBuild> m_listAB = new List<AssetBundleBuild>();
    private static Dictionary<string, int> m_dependCount = new Dictionary<string, int>();
    private static Dictionary<string, ABMd5Info> m_FilesMd5 = new Dictionary<string, ABMd5Info>();

    public static void BuildAB(BuildTarget target, bool increment)
    {
        m_listAB.Clear();
        m_dependCount.Clear();
        m_FilesMd5.Clear();
        string resAbRoot = $"{Application.streamingAssetsPath}/resources";
        if (!increment)
        {
            if (Directory.Exists(resAbRoot))
            {
                Directory.Delete(resAbRoot, true);
            }

            Directory.CreateDirectory(resAbRoot);
        }


        _ProcessPrefab();

        _ProcessDepencies();

        _ProcessConfig();

        _ProcessPNG();

        BuildPipeline.BuildAssetBundles(resAbRoot, m_listAB.ToArray(), BuildAssetBundleOptions.ChunkBasedCompression, target);

        GenerateFileList();
        //copy
        AssetDatabase.Refresh();
        Debug.Log("AB打包成功");
    }

    private static void _ProcessPrefab()
    {
        string rootPath = "Assets/Res/AllInOne";
        _ProcessFoldersAllInOne(rootPath, "*.prefab");
        rootPath = "Assets/Res/OneInOne";
        _ProcessFoldersOneInOne(rootPath, "*.prefab");
    }

    private static void _ProcessDepencies()
    {
        foreach (var keyVal in m_dependCount)
        {
            if (keyVal.Value > 1)
            {
                AddBuildMap(keyVal.Key, new string[] {keyVal.Key}, true);
            }
        }
    }

    private static void _ProcessConfig()
    {
        string rootPath = "Assets/Res/AllInOne/LubanGen";
        _ProcessFoldersAllInOne(rootPath, "*.bytes");
    }

    private static void _ProcessPNG()
    {
        string rootPath = "Assets/Res/AllInOne";
        _ProcessFoldersAllInOne(rootPath, "*.png");
        rootPath = "Assets/Res/OneInOne";
        _ProcessFoldersOneInOne(rootPath, "*.png");
    }

    private static void _ProcessFoldersAllInOne(string path, string searchPattern)
    {
        string[] dirs = Directory.GetDirectories(path);
        string[] files = Directory.GetFiles(path);
        if (files.Length != 0)
        {
            string tmp_abName = String.Format("{0}{1}", path, ".unity3d");
            AddAllInOne(tmp_abName, searchPattern, path);
        }

        foreach (var dirName in dirs)
        {
            _ProcessFoldersAllInOne(dirName, searchPattern);
        }
    }
    
    private static void _ProcessFoldersOneInOne(string path, string searchPattern)
    {
        string[] dirs = Directory.GetDirectories(path);
        string[] files = Directory.GetFiles(path, searchPattern);
        foreach (var tmp_files in files)
        {
            string extName = Path.GetExtension(tmp_files);
            string tmp_abName = tmp_files.Replace(extName, ".unity3d");
            AddBuildMap(tmp_abName, new string[] {tmp_files});
        }

        foreach (var dirName in dirs)
        {
            _ProcessFoldersOneInOne(dirName, searchPattern);
        }
    }

    static void AddAllInOne(string bundleName, string pattern, string path)
    {
        string[] files = Directory.GetFiles(path, pattern);
        if (files.Length == 0)
        {
            return;
        }

        if (bundleName.ToLower().Contains("DS_Store") || bundleName.ToLower().Contains(".svn"))
        {
            return;
        }

        List<string> listFiles = new List<string>();
        for (int i = 0; i < files.Length; i++)
        {
            listFiles.Add(files[i]);
        }

        List<string> removeFiles = new List<string>();
        for (int i = 0; i < listFiles.Count; i++)
        {
            string file = listFiles[i];
            if (file.ToLower().Contains("DS_Store") || file.ToLower().Contains(".svn"))
            {
                removeFiles.Add(file);
            }
        }

        for (int i = 0; i < removeFiles.Count; i++)
        {
            listFiles.Remove(removeFiles[i]);
        }

        for (int i = 0; i < listFiles.Count; i++)
        {
            listFiles[i] = listFiles[i].Replace('\\', '/');
        }

        AddBuildMap(bundleName, listFiles.ToArray());
    }

    static void AddBuildMap(string bundleName, string[] param_files, bool isDepend = false)
    {
        AssetBundleBuild build = new AssetBundleBuild();
        build.assetBundleName = bundleName;
        build.assetNames = param_files;
        m_listAB.Add(build);

        if (!isDepend)
        {
            //处理依赖
            string[] dependencies = AssetDatabase.GetDependencies(build.assetNames, true);
            foreach (var path in dependencies)
            {
                if (path.EndsWith(".tga") ||
                    path.EndsWith(".TGA") ||
                    path.EndsWith(".png") ||
                    path.EndsWith(".PNG") ||
                    path.EndsWith(".jgp") ||
                    path.EndsWith(".JGP") ||
                    path.EndsWith(".fbx") ||
                    path.EndsWith(".FBX") ||
                    path.EndsWith(".shader"))
                {
                    if (m_dependCount.ContainsKey(path))
                    {
                        int count = m_dependCount[path];
                        m_dependCount[path] = count + 1;
                    }
                    else
                    {
                        m_dependCount.Add(path, 1);
                    }
                }
            }
        }
    }

    static void GenerateFileList()
    {
        string filePath = $"{Application.streamingAssetsPath}/resources/FileList.txt";

        if (File.Exists(filePath))
        {
            File.Delete(filePath);
        }

        string rootPath = $"{Application.streamingAssetsPath}/resources";
        _ProcessFileList(rootPath);
        string[] strs = new string[m_FilesMd5.Count];
        int i = 0;
        foreach (var value in m_FilesMd5)
        {
            strs[i++] = string.Format("{0},{1}", value.Key, value.Value.md5);
        }
        
        File.WriteAllLines(filePath, strs);
    }

    static void _ProcessFileList(string path)
    {
        string[] dirs = Directory.GetDirectories(path);
        string[] files = Directory.GetFiles(path);
        foreach (var tmp_file in files)
        {
            if (tmp_file.Contains(".manifest"))
            {
                continue;
            }
            string md5 = Md5Tool.GetMd5ByPath(tmp_file);
            var shortFileName = tmp_file.Replace("\\", "/");
            shortFileName = shortFileName.Replace($"{Application.streamingAssetsPath}/resources", "");

            ABMd5Info abMd5Info = new ABMd5Info();
            abMd5Info.fileName = shortFileName;
            abMd5Info.md5 = md5;
            m_FilesMd5.Add(abMd5Info.fileName, abMd5Info);
        }

        foreach (var dirName in dirs)
        {
            _ProcessFileList(dirName);
        }
    }
    

    #endregion

    #region PB工具
    [MenuItem("Tools/Proto2CS")]
    public static void AllProto2CS()
    {
        string rootDir = Environment.CurrentDirectory;
        string protoDir = Path.Combine(rootDir, "Proto/");

        string protoc;
        if (RuntimeInformation.IsOSPlatform(OSPlatform.Windows))
        {
            protoc = Path.Combine(protoDir, "protoc.exe");
        }
        else
        {
            protoc = Path.Combine(protoDir, "protoc");
        }

        string hotfixMessageCodePath = Path.Combine(rootDir, "Assets", "Scripts", "Game/Gen/ProtoMessage");

        string argument2 = $"--csharp_out=\"{hotfixMessageCodePath}\" --proto_path=\"{protoDir}\" monitorData.proto";

        Run(protoc, argument2, waitExit: true);

        UnityEngine.Debug.Log("proto2cs succeed!");

        AssetDatabase.Refresh();
    }
 
    public static Process Run(string exe, string arguments, string workingDirectory = ".", bool waitExit = false)
        {
            try
            {
                bool redirectStandardOutput = true;
                bool redirectStandardError = true;
                bool useShellExecute = false;
                if (RuntimeInformation.IsOSPlatform(OSPlatform.Windows))
                {
                    redirectStandardOutput = false;
                    redirectStandardError = false;
                    useShellExecute = true;
                }
 
                if (waitExit)
                {
                    redirectStandardOutput = true;
                    redirectStandardError = true;
                    useShellExecute = false;
                }
                
                ProcessStartInfo info = new ProcessStartInfo
                {
                    FileName = exe,
                    Arguments = arguments,
                    CreateNoWindow = true,
                    UseShellExecute = useShellExecute,
                    WorkingDirectory = workingDirectory,
                    RedirectStandardOutput = redirectStandardOutput,
                    RedirectStandardError = redirectStandardError,
                };
                
                Process process = Process.Start(info);
 
                if (waitExit)
                {
                    process.WaitForExit();
                    if (process.ExitCode != 0)
                    {
                        throw new Exception($"{process.StandardOutput.ReadToEnd()} {process.StandardError.ReadToEnd()}");
                    }
                }
 
                return process;
            }
            catch (Exception e)
            {
                throw new Exception($"dir: {Path.GetFullPath(workingDirectory)}, command: {exe} {arguments}", e);
            }
        }
    #endregion
}