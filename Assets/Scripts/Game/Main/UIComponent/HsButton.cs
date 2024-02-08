using System;
using DG.Tweening;
using Game.Frame;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Game.Main
{
    [RequireComponent(typeof(EventTriggerListener))]
    public class HsButton : MonoBehaviour
    {
        [SerializeField] private HsImage _image = null;
        [SerializeField] private HsText _text = null;
        [SerializeField] private Material _grayMaterial = null;
        
        private UnityEvent<GameObject> OnClickEvent = new UnityEvent<GameObject>();
        private UnityEvent<GameObject> OnLongClickEvent = new UnityEvent<GameObject>();
        private EventTriggerListener _trigger = null;
        private bool _isEnable = true;
        private void Awake()
        {
            _trigger = GetComponent<EventTriggerListener>();
            _trigger.onClick = OnClick;
            _trigger.onDown = OnDown;
            _trigger.onUp = OnUp;
            _trigger.onExit = OnExit;
        }
        
        private void OnClick(GameObject go)
        {
            if (!_isEnable)
            {
                return;
            }
            OnClickEvent.Invoke(go);
        }

        private void OnDown(GameObject go)
        {
            if (!_isEnable)
            {
                return;
            }
            transform.DOKill();
            transform.DOScale(0.8f, 0.1f);
        }
        
        private void OnUp(GameObject go)
        {
            if (!_isEnable)
            {
                return;
            }
            transform.DOKill();
            transform.DOScale(1f, 0.1f);
        }
        
        private void OnExit(GameObject go)
        {
            if (!_isEnable)
            {
                return;
            }
            transform.DOKill();
            transform.DOScale(1f, 0.1f);
        }

        protected void OnDestroy()
        {
            OnClickEvent.RemoveAllListeners();
            OnClickEvent = null;
        }

        #region public
        public void AddClick(UnityAction<GameObject> action)
        {
            if (OnClickEvent.GetPersistentEventCount() > 0)
            {
                GameLog.Error("重复注册按钮");
            }
            OnClickEvent.AddListener(action);
        }

        public void AddLongClick(UnityAction<GameObject> action)
        {
            if (OnLongClickEvent.GetPersistentEventCount() > 0)
            {
                GameLog.Error("重复注册按钮");
            }
            OnLongClickEvent.AddListener(action);
        }

        public void InvokeClickEvent()
        {
            OnClickEvent?.Invoke(null);
        }

        public void ChangeBtnImage(Sprite sprite)
        {
            if (_image == null)
            {
                GameLog.Error("_image is null");
                return;
            }
            _image.SetImage(sprite);
        }
        
        public void ChangeBtnImage(string imgPath)
        {
            if (_image == null)
            {
                GameLog.Error("_image is null");
                return;
            }
            _image.SetImage(imgPath);
        }

        public void ChangeBtnText(string text)
        {
            if (_text == null)
            {
                GameLog.Error("_text is null");
                return;
            }
            _text.SetText(text);
        }

        public void ChangeBtnTextColor(Color color)
        {
            if (_text == null)
            {
                GameLog.Error("_text is null");
                return;
            }
            _text.color = color;
        }

        public void SetGray(bool isGray)
        {
            if (_grayMaterial == null)
            {
                GameLog.Error("_grayMaterial is null");
                return;
            }

            _image.material = isGray ? _grayMaterial : null;
        }

        public void SetEnable(bool isEnable)
        {
            _isEnable = isEnable;
        }

        #endregion
       
    }
}