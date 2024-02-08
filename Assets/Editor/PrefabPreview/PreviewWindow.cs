using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Game.Frame;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.WSA;
using Application = UnityEngine.Application;

public class PrefabPreviewWindow : EditorWindow
{
    public struct PathData
    {
        public string FullPath;
        public string ShortName;
    }
    
    public struct PreviewData
    {
        public GameObject obj;
        public Texture2D shortRender;
    }
    
    private List<PathData> _pathDataList = new List<PathData>();
    private Dictionary<string, List<PreviewData>> _dicRenderData = new Dictionary<string, List<PreviewData>>();
    private string curRenderSelectPath = string.Empty;
    private int HORI_NUM = 6;
    private Vector2           _scrollPosition;
    private Vector2 _resolution = new Vector2(720, 1560); //这里设置自己项目的标准分辨率，这个参数会决定最后渲染的尺寸比例
    private int zoomInPram = 1;
    private GameObject _objRenderCanvas = null;
    private GameObject _objRenderCamera = null;
    private static string _savePath = string.Empty;
    
    [MenuItem("客户端工具/PrefabPreview")]
    static void Open()
    {
        var window = EditorWindow.GetWindow<PrefabPreviewWindow>();
        _savePath = Application.dataPath + "/Editor/PrefabPreview/pathConfig.txt";
        window.Init();
        window.Show();
    }

    public void Init()
    {
        _pathDataList.Clear();
        if (File.Exists(_savePath))
        {
            var paths = File.ReadAllText(_savePath);
            foreach (var path in paths.Split('|'))
            {
                if (path.Equals(string.Empty))
                {
                    continue;
                }
                _pathDataList.Add(new PathData()
                {
                    FullPath = path,
                    ShortName = path.Split('/').Last()
                });
            }
        }
    }

    private void OnGUI()
    {
        RefreshSlider();
        RefreshSelectPath();
        RefreshBtnForthRefresh();
        _scrollPosition = EditorGUILayout.BeginScrollView(_scrollPosition, GUILayout.Width(position.width), GUILayout.Height(position.height - 200));  
        RefreshRender();
        EditorGUILayout.EndScrollView();
    }

    private void OnDestroy()
    {
        _pathDataList.Clear();
        _pathDataList = null;
        _dicRenderData.Clear();
        _dicRenderData = null;
        _objRenderCanvas = null;
        _objRenderCamera = null;
    }

    private void RefreshSlider()
    {
        EditorGUILayout.Space(10);
        zoomInPram = EditorGUILayout.IntSlider("调整缩放大小", zoomInPram, 1, 10);
        EditorGUILayout.Space(10);
        HORI_NUM = EditorGUILayout.IntSlider("调整每行显示个数", HORI_NUM, 1, 10);
        EditorGUILayout.Space(10);
    }

    private void RefreshSelectPath()
    {
        if (GUILayout.Button("添加路径"))   
        {
            string selectPath = string.Empty;
            selectPath = EditorUtility.OpenFolderPanel("打开文件夹", Application.dataPath + "Res", "");
            if (selectPath.Equals(string.Empty))
            {
                return;   
            }
            foreach (var pathData in _pathDataList)
            {
                if (pathData.FullPath.Equals(selectPath))
                {
                    return;
                }
            }

            var data = new PathData()
            {
                FullPath = selectPath,
                ShortName = selectPath.Split('/').Last()
            };
            _pathDataList.Add(data);
            SavePath();
        }
        GUILayout.BeginHorizontal();
        for (int i = 0; i < _pathDataList.Count; i++)
        {
            if (GUILayout.Button(_pathDataList[i].ShortName, GUILayout.Width(100)))
            {
                curRenderSelectPath = _pathDataList[i].FullPath;
            }
            if (GUILayout.Button("X", GUILayout.Width(30)))
            {
                _pathDataList.Remove(_pathDataList[i]);
                SavePath();
            }
            GUILayout.Space(20);
        }
        GUILayout.EndHorizontal();
    }

    private void SavePath()
    {
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < _pathDataList.Count; i++)
        {
            sb.Append(_pathDataList[i].FullPath);
            if (i != _pathDataList.Count - 1)
            {
                sb.Append("|");
            }
        }
        File.WriteAllText(_savePath, sb.ToString());
    }

    private void RefreshBtnForthRefresh()
    {
        if (GUILayout.Button("强制刷新(当预制体资源变更可点击)"))
        {
            if (_dicRenderData.ContainsKey(curRenderSelectPath))
            {
                _dicRenderData.Remove(curRenderSelectPath);
            }
        }
    }

    private void RefreshRender()
    {
        if (_dicRenderData.TryGetValue(curRenderSelectPath, out var renderList))
        {
            for (int i = 0; i < renderList.Count; i++)
            {
                if (i % HORI_NUM == 0)
                {
                    GUILayout.BeginHorizontal();
                }
                GUILayout.BeginVertical();
                GUILayout.Label(renderList[i].obj.name);
                if (GUILayout.Button("Add", GUILayout.Width(40)))
                {
                    if (Selection.activeObject == null)
                    {
                        GameLog.Error("没有选中节点");
                        return;
                    }

                    var selectObj = Selection.activeObject as GameObject;
                    if (selectObj == null)
                    {
                        GameLog.Error("选中错误的节点");
                        return;
                    }
                    GameObject.Instantiate(renderList[i].obj, selectObj.transform, false);
                }
                GUILayout.Box(renderList[i].shortRender, GUILayout.Width(_resolution.x * zoomInPram / 10), GUILayout.Height(_resolution.y * zoomInPram / 10));
                GUILayout.Space(20);
                GUILayout.EndVertical();
                if (i % HORI_NUM == HORI_NUM - 1 || i == renderList.Count - 1)
                {
                    GUILayout.EndHorizontal();
                }
            }
        }
        else
        {
            if (curRenderSelectPath == string.Empty)
            {
                return;
            }
            renderList = new List<PreviewData>();
            var filePaths = Directory.GetFiles(curRenderSelectPath, "*.prefab", SearchOption.AllDirectories);
            foreach (var path in filePaths)
            {
                var fileName = Path.GetFileName(path);
                if (fileName.EndsWith(".meta"))
                {
                    continue;
                }

                string prefabPath = path.Substring(path.IndexOf("Assets"));
                var prefab = AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath);
                if (!prefab)
                {
                    continue;
                }

                var shortRender = (Texture2D)GetAssetPreview(prefab);
                PreviewData previewData = new PreviewData()
                {
                    obj = prefab,
                    shortRender = shortRender,
                };
                renderList.Add(previewData);
            }
            _dicRenderData.Add(curRenderSelectPath, renderList);
        }
        DestroyImmediate(_objRenderCamera);
        DestroyImmediate(_objRenderCanvas);
        _objRenderCamera = null;
        _objRenderCanvas = null;
    }

    /// <summary>
    /// 获取预览图象
    /// </summary>
    /// <param name="obj"></param>
    /// <returns></returns>
    private Texture GetAssetPreview(GameObject obj)
    {
        GameObject clone          = GameObject.Instantiate(obj);
        Transform  cloneTransform = clone.transform;
        if (_objRenderCamera == null)
        {
            _objRenderCamera = new GameObject("renderCamera");
        }
        Camera     renderCamera = _objRenderCamera.GetComponent<Camera>();
        if (renderCamera == null)
        {
            renderCamera = _objRenderCamera.AddComponent<Camera>();
            renderCamera.backgroundColor = new Color(0.8f, 0.8f, 0.8f, 0f);
            renderCamera.clearFlags      = CameraClearFlags.Color;
            renderCamera.cameraType      = CameraType.SceneView;
            renderCamera.cullingMask     = 1 << 21;
            renderCamera.nearClipPlane   = -100;
            renderCamera.farClipPlane    = 100;
            renderCamera.orthographic    = true;
        }
        if (_objRenderCanvas == null)
        {
            _objRenderCanvas = new GameObject("renderCanvas", typeof(Canvas));
            Canvas canvas = _objRenderCanvas.GetComponent<Canvas>();
            canvas.renderMode  = RenderMode.ScreenSpaceCamera;
            canvas.worldCamera = renderCamera;
        }
        cloneTransform.SetParent(_objRenderCanvas.transform, false);
        cloneTransform.localPosition = Vector3.zero;
        cloneTransform.localScale = Vector3.one;
        _objRenderCanvas.layer   = 21;
        var canvasScaler = _objRenderCanvas.GetComponent<CanvasScaler>();
        if (canvasScaler == null)
        {
            canvasScaler = _objRenderCanvas.AddComponent<CanvasScaler>();
            canvasScaler.uiScaleMode         = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            canvasScaler.referenceResolution = _resolution;
        }
        Transform[] all = clone.GetComponentsInChildren<Transform>();
        foreach (Transform trans in all)
        {
            trans.gameObject.layer = 21;
        }
        RenderTexture texture = new RenderTexture((int)_resolution.x, (int)_resolution.y, 0, RenderTextureFormat.Default);
        renderCamera.targetTexture = texture;
        var tex = RTImage(renderCamera);
        DestroyImmediate(clone);
        return tex;
    }

    private Texture2D RTImage(Camera camera)
    {
        var curRt = RenderTexture.active;
        RenderTexture.active = camera.targetTexture;
        camera.Render();
        Texture2D img = new Texture2D(camera.targetTexture.width, camera.targetTexture.height);
        img.ReadPixels(new Rect(0, 0, camera.targetTexture.width, camera.targetTexture.height), 0, 0);
        img.Apply();
        RenderTexture.active = curRt;
        return img;
    }
}
