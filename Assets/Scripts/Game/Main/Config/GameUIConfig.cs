using System.Collections.Generic;
using Game.Frame;

namespace Game.Main.Config
{
    public class GameUIConfig
    {
        public enum UIID
        {
            TestPanel1 = 1,
            TestPanel2,
            TestSubview1,
            HeroView,
            EquipChoise,
            EquipDetail,
        }
        
        public static Dictionary<UIID, UIConfig> DicUIConfigs = new Dictionary<UIID, UIConfig>()
        {
            [UIID.TestPanel1] = new UIConfig()
            {
                uiID = (int)UIID.TestPanel1,
                viewType = ViewType.Panel,
                path = "Assets/Res/OneInOne/UI/Prefab/Panel_Test.prefab",
                isLobby = true
            },
            [UIID.TestPanel2] = new UIConfig()
            {
                uiID = (int)UIID.TestPanel2,
                viewType = ViewType.Panel,
                path = "Assets/Res/OneInOne/UI/Prefab/Panel_Test2.prefab",
                isLobby = true
            },
            [UIID.TestSubview1] = new UIConfig()
            {
                uiID = (int)UIID.TestSubview1,
                viewType = ViewType.Subview,
                path = "Assets/Res/OneInOne/UI/Prefab/Subview_Test2.prefab",
            },
            [UIID.HeroView] = new UIConfig()
            {
                uiID = (int)UIID.HeroView,
                viewType = ViewType.Panel,
                path = "Assets/Res/OneInOne/UI/Prefab/Hero/UIHeroView.prefab",
            },
            [UIID.EquipChoise] = new UIConfig()
            {
                uiID = (int)UIID.EquipChoise,
                viewType = ViewType.Panel,
                path = "Assets/Res/OneInOne/UI/Prefab/Equip/UIEquipChoiseView.prefab",
            },
            [UIID.EquipDetail] = new UIConfig()
            {
                uiID = (int)UIID.EquipDetail,
                viewType = ViewType.Dialog,
                path = "Assets/Res/OneInOne/UI/Prefab/Equip/UIEquipDetailView.prefab",
            }
        };
    }
}