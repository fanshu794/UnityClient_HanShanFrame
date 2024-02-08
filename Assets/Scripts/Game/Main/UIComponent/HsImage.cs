using System;
using Game.Frame;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Main
{
    public class HsImage : Image
    {
        private LoaderHandler<Sprite> _loader = null;

        public void SetImage(string path)
        {
            if (_loader != null)
            {
                _loader.Unload();
                _loader = null;
            }
            var resSys = HsClient.Mediator.GetSystem<ResourceSystem>();
            _loader = resSys.LoadSync<Sprite>(path);
            sprite = _loader.asset;
        }

        public void SetImage(Sprite sprite)
        {
            this.sprite = sprite;
        }

        private void OnDestroy()
        {
            if (_loader != null)
            {
                _loader.Unload();
                _loader = null;
            }
        }
    }
}