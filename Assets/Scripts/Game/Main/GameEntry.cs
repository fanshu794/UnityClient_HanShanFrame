using System;
using System.Collections;
using System.Collections.Generic;
using FlowCanvas;
using Game.Frame;
using Game.Main;
using Game.Main.Config;
using UnityEngine;

public class GameEntry : MonoBehaviour
{
    [SerializeField] private ResourceSystem.LoadType _loadType = ResourceSystem.LoadType.Editor;
    
    private void Start()
    {
        Enviroment.SetLoadType(_loadType);
        DontDestroyOnLoad(this);
        HsClient.CreateInstance();
       // GetComponent<FlowScriptController>().StartBehaviour();
       
       HsClient.Mediator.OpenMainView<UIHeroView>(GameUIConfig.DicUIConfigs[GameUIConfig.UIID.HeroView], null, true);
    }

    // private void OnGUI()
    // {
    //     GUIStyle labelStyle = new GUIStyle();
    //     // 设置字体大小
    //     labelStyle.fontSize = 24;
    //     GUILayout.Label(HsClient.Mediator.GetSystem<ResourceSystem>().ToString(), labelStyle);
    // }
}
