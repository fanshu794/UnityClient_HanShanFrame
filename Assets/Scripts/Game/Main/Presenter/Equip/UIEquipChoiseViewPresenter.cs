using Game.Frame;
using Game.Main.Config;
using UnityEngine;

namespace Game.Main
{
    public class UIEquipChoiseView : MainViewPresenter
    {
        public override void OnCreate()
        {
            this.AddButtonEvent("btnDetail_C", delegate(GameObject arg0)
            {
                HsClient.Mediator.OpenMainView<UIEquipDetailView>(GameUIConfig.DicUIConfigs[GameUIConfig.UIID.EquipDetail], null);
            });
            this.AddButtonEvent("btnClose_C", delegate(GameObject arg0)
            {
                HsClient.Mediator.UISystem.CloseSelf(this);
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
