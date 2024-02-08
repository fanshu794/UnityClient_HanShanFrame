using System;
using Game.Frame;
using UnityEngine;

namespace Game.Main
{
    public class GameMono: MonoSingleton<GameMono>
    {
        private GameRuner _gameRuner = null;

        protected override void OnCreate()
        {
            DontDestroyOnLoad(this);
        }

        public void Init(GameRuner gameRuner)
        {
            _gameRuner = gameRuner;
        }

        private void Update( )
        {
            _gameRuner?.Update(Time.deltaTime);
        }
        
        private void FixedUpdate()
        {
            _gameRuner?.FixedUpdate();
        }
    }
}