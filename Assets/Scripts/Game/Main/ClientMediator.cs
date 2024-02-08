using System;
using System.Collections.Generic;
using Game.Frame;
using Game.Main.Config;
using Game.Main.GameTable;

namespace Game.Main
{
    public class HSMediator: BaseMediator
    {
        private GameRuner _gameRuner = null;

        private Dictionary<Type, BaseSystem> _dicSystem = null;

        public UISystem UISystem => GetSystem<UISystem>();
        public HSMediator(GameRuner gameRuner)
        {
            _dicSystem = new Dictionary<Type, BaseSystem>();
            _gameRuner = gameRuner;
        }

        public void Init()
        {
            RegisterSystem();
            RegisterUpdate();
        }

        protected override void RegisterSystem()
        {
            _dicSystem.Add(typeof(TimerSystem), new TimerSystem());
            _dicSystem.Add(typeof(ResourceSystem), new ResourceSystem());
            _dicSystem.Add(typeof(UISystem), new UISystem());
            _dicSystem.Add(typeof(ModelSystem), new ModelSystem());
            _dicSystem.Add(typeof(GameTableSystem), new GameTableSystem());
            _dicSystem.Add(typeof(ReddotSystem), new ReddotSystem());
        }
        
        protected override void RegisterUpdate()
        {
            _gameRuner.RegisterUpdate(GetSystem<TimerSystem>());
            _gameRuner.RegisterFixUpdate(GetSystem<TimerSystem>());
            _gameRuner.RegisterFixUpdate(GetSystem<UISystem>());
        }

        public override T GetSystem<T>()
        {
            var type = typeof(T);
            if (_dicSystem.ContainsKey(type))
            {
                return _dicSystem[type] as T;
            }
            else
            {
                GameLog.Error($"请注册system{type.ToString()}");
                return null;
            }
        }

        public override T GetModel<T>()
        {
            var sys = GetSystem<ModelSystem>();
            if (sys != null)
            {
                return sys.GetModel<T>();
            }
            else
            {
                return null;
            }
        }

        public cfg.Tables GameTables()
        {
            var sys = GetSystem<GameTableSystem>();
            if (sys != null)
            {
                return sys.Tables;
            }

            return null;
        }
        
        //打开MainView
        public void OpenMainView<T>(UIConfig uiConfig, BaseUIParam uiParam, bool isAsync = false) where T : MainViewPresenter, new()
        {
            var sys = GetSystem<UISystem>();
            if (sys != null)
            {
                sys.ShowMainPresenter<T>(uiConfig, uiParam, isAsync);
            }
        }
    }
}