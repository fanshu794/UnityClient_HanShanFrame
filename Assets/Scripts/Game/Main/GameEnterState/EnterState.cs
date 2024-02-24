using System.IO;
using Game.Frame;
using UnityEngine;

namespace Game.Main
{
    public class EnterState : BaseState
    {

        public override void OnEnterState()
        {
            Content.ChangeState(new LoginState());
        }

        public override void OnExitState()
        {
        }
    }
}