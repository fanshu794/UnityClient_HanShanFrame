using Game.Frame;
using Game.Main.Config;

namespace Game.Main
{
    public class LoginState : BaseState
    {
        public override void OnEnterState()
        {
            HsClient.CreateInstance();
            HsClient.Mediator.OpenMainView<UIHeroView>(GameUIConfig.DicUIConfigs[GameUIConfig.UIID.HeroView], null, true);
        }

        public override void OnExitState()
        {
        }
    }
}