using Game.Frame;
using UnityEngine;

namespace Game.Main
{
    public class HsClient: Singleton<HsClient>
    {
        private GameRuner _gameRuner = null;
        private HSMediator _clientMediator = null;
        private EventDispatch _eventDispatch = null;

        public static EventDispatch EventDispatch => Instance._eventDispatch;
        public static GameRuner GameRuner => Instance._gameRuner;
        public static HSMediator Mediator => Instance._clientMediator;
        
        protected override void OnCreate()
        {
            _gameRuner = new GameRuner();
            GameMono.CreateInstance();
            GameMono.Instance.Init(_gameRuner);
            _clientMediator = new HSMediator(_gameRuner);
            _clientMediator.Init();
            _eventDispatch = new EventDispatch();
        }
    }
}