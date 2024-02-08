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
    private void Start()
    {
        DontDestroyOnLoad(this);
        HsClient.CreateInstance();
       // GetComponent<FlowScriptController>().StartBehaviour();
       
       HsClient.Mediator.OpenMainView<UIHeroView>(GameUIConfig.DicUIConfigs[GameUIConfig.UIID.HeroView], null);
    }
}
