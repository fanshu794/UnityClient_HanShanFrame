
using System.IO;
using System.Text;
using Game.Frame;
using Unity.VisualScripting;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

public class UITool : EditorWindow
{
    private const string MAIN_PRESENTER_TEMP =
        @"using Game.Frame;

namespace Game.Main
{
    public class @ClassName : @BaseType
    {
        public override void OnCreate()
        {
        }

        public override void RegisterEvent()
        {

        }

        public override void UnRegisterEvent()
        {

        }

        public override void SetData()
        {

        }

        public override void LinkModels()
        {
            
        }

        public override void OnRefreshAll()
        {

        }

        public override void OnFocusRefresh()
        {

        }

        public override void OnFocus()
        {

        }

        public override void OnLostFocus()
        {

        }

        public override void OnDispose()
        {
            base.OnDispose();
        }
    }
}
";
    
    private const string NODE_BING_TAG = "_C";
    private const string NODE_IGNORE_TAG = "_IGNORE";
    
    /// <summary>
    /// 做两件事 1.节点名字后缀为_C挂载NodeBind组件 2.节点名字含有_IGNORE挂载IgnoreNodeBind组件
    /// </summary>
    [MenuItem("GameObject/UITool/UINodeBind")]
    public static void UINodeBind()
    {
        var stage = PrefabStageUtility.GetCurrentPrefabStage();
        if (stage == null)
        {
            GameLog.Error("请打开prefab进入编辑模式");
            return;
        }
        
        var curObj = stage.prefabContentsRoot;
        var children  = curObj.GetComponentsInChildren<Transform>();
        foreach (var child in children)
        {
            if (child.name.EndsWith(NODE_BING_TAG))
            {
                if (!child.GetComponent<NodeBind>())
                {
                    child.AddComponent<NodeBind>();
                }
            }
            else
            {
                var com = child.GetComponent<NodeBind>();
                if (com != null)
                {
                    DestroyImmediate(com);
                }
            }

            if (child.name.Contains(NODE_IGNORE_TAG))
            {
                if (!child.GetComponent<IgnoreChildrenNode>())
                {
                    child.AddComponent<IgnoreChildrenNode>();
                }
            }
            else
            {
                var com = child.GetComponent<IgnoreChildrenNode>();
                if (com != null)
                {
                    DestroyImmediate(com);
                }
            }
        }
        GameLog.Log("节点绑定成功");
    }

    private static string _savePath = Path.Combine(Application.dataPath, "Scripts/Game/UI/Presenter");
    
    [MenuItem("GameObject/UITool/CreateMainPresenter")]
    public static void CreatePanelPresenter()
    {
        CreateMainPresenter(ViewType.Panel);
    }
    
    [MenuItem("GameObject/UITool/CreateSubviewPresenter")]
    public static void CreateSubviewPresenter()
    {
        CreateMainPresenter(ViewType.Subview);
    }
    
    private static void CreateMainPresenter(ViewType viewType)
    {
        var stage = PrefabStageUtility.GetCurrentPrefabStage();
        if (stage == null)
        {
            GameLog.Error("请打开prefab进入编辑模式");
            return;
        }

        var curObj = stage.prefabContentsRoot;
        var presenterName = curObj.name;
        var presenterContent = MAIN_PRESENTER_TEMP.Replace("@ClassName", presenterName);
        if (viewType == ViewType.Panel)
        {
            presenterContent = presenterContent.Replace("@BaseType", "MainViewPresenter");
        }
        else if (viewType == ViewType.Subview)
        {
            presenterContent = presenterContent.Replace("@BaseType", "SubviewPresenter");
        }
        _savePath = EditorUtility.SaveFolderPanel("请选择保存路径", _savePath, "");
        var savePath = Path.Combine(_savePath, $"{presenterName}Presenter.cs");
        if (!File.Exists(savePath))
        {
            File.WriteAllText(savePath, presenterContent, Encoding.UTF8);
            GameLog.Log("cs文件生成成功");
            AssetDatabase.Refresh();
        }
        else
        {
            GameLog.Error($"{presenterName}.cs 已存在");
        }
    }

    [InitializeOnLoadMethod]
    static void RegisterPrefabStageEvents()
    {
        PrefabStage.prefabStageClosing += OnClosingPrefab;
        EditorApplication.hierarchyChanged += OnHierarchyWindowChanged;
    }
    
    
    static void OnHierarchyWindowChanged()
    {
        if (Selection.activeGameObject && Selection.activeGameObject.GetComponent<IgnoreChildrenNode>())
        {
            if (!Selection.activeGameObject.name.EndsWith("_IGO"))
            {
                Selection.activeGameObject.name = Selection.activeGameObject.name + "_IGO";
            }
        }
    }

    static void OnClosingPrefab(PrefabStage stage)
    {
        if (stage.prefabContentsRoot.name.Contains("Subview"))
        {
            if (!stage.prefabContentsRoot.GetComponent<IgnoreChildrenNode>())
            {
                var obj = GameObject.Instantiate(stage.prefabContentsRoot);
                obj.AddComponent<IgnoreChildrenNode>();
                PrefabUtility.SaveAsPrefabAsset(obj, stage.assetPath);
                DestroyImmediate(obj);
            }
        }
    }
}
