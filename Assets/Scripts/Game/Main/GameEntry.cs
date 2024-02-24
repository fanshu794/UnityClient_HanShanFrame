using System;
using System.Collections;
using System.Collections.Generic;
using FlowCanvas;
using Game.Frame;
using Game.Main;
using Game.Main.Config;
using UnityEngine;
using Object = UnityEngine.Object;

public class GameEntry : MonoBehaviour
{
    public ResourceSystem.LoadType LoadType = ResourceSystem.LoadType.Editor;

    public static void Init(int loadType)
    {
        GameObject go = new GameObject("GameEntry");
        DontDestroyOnLoad(go);
        var ge = go.AddComponent<GameEntry>();
        ge.LoadType = (ResourceSystem.LoadType)loadType;
    }

    private void Start()
    {
        Enviroment.SetLoadType(LoadType);
        GameLog.Log("进入GameEntry");
       var stareContent = new StateContent();
       stareContent.ChangeState(new EnterState());
    }

    // private void OnGUI()
    // {
    //     GUIStyle labelStyle = new GUIStyle();
    //     // 设置字体大小
    //     labelStyle.fontSize = 24;
    //     GUILayout.Label(HsClient.Mediator.GetSystem<ResourceSystem>().ToString(), labelStyle);
    // }
}
