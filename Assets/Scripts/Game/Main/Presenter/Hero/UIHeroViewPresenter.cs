using Game.Frame;
using Game.Main.Config;
using UnityEngine;

namespace Game.Main
{
    public class UIHeroView : MainViewPresenter
    {
        public override void OnCreate()
        {
            //初始化组件
            GetCom<HsToggleGroup>("ToggleGroup_C").AddListener(delegate(int selectIndex)
            {
                GameLog.Log("select index = " + selectIndex);
            });
            this.AddButtonEvent("btnCommon_C", delegate(GameObject arg0)
            {
                HsClient.Mediator.OpenMainView<UIEquipDetailView>(GameUIConfig.DicUIConfigs[GameUIConfig.UIID.EquipDetail], null);
            });
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
            GetCom<HsToggleGroup>("ToggleGroup_C").ForthRefresh(2);
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
