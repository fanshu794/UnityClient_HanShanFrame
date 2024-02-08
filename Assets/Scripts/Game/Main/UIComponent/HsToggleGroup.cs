using System;
using Game.Frame;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Main
{
    [Serializable]
    struct ToggleData
    {
        public HsButton Button;
        public Sprite SelectImg;
        public Sprite NormalImg;
    }

    public class HsToggleGroup : MonoBehaviour
    {
        [SerializeField] private ToggleData[] _toggleDatas = null;
        [SerializeField] private Color _selectTextColor = Color.red;
        [SerializeField] private Color _normalTextColor = Color.black;

        private int _curIndex = -1;
        public int CurIndex => _curIndex;
        public void AddListener(Action<int> onToggle)
        {
            int index = 0;
            foreach (var data in _toggleDatas)
            {
                if (data.Button == null || data.SelectImg == null || data.NormalImg == null)
                {
                    GameLog.Error("HsToggleGroup Error");
                    return;
                }

                ResetSelectImg();
                int selectIndex = index;
                index++;
                data.Button.AddClick(delegate(GameObject arg0)
                {
                    if (selectIndex == _curIndex)
                    {
                        return;
                    }

                    _curIndex = selectIndex;
                    ResetSelectImg();
                    data.Button.ChangeBtnImage(data.SelectImg);
                    data.Button.ChangeBtnTextColor(_selectTextColor);
                    onToggle.Invoke(selectIndex);
                });
            }
        }

        //每次界面打开时调用一次即可
        public void ForthRefresh(int targetIndex)
        {
            if (targetIndex >= _toggleDatas.Length)
            {
                targetIndex = _toggleDatas.Length - 1;
            }

            if (targetIndex < 0)
            {
                targetIndex = 0;
            }

            _curIndex = targetIndex;
            ResetSelectImg();
            var data = _toggleDatas[targetIndex];
            data.Button.ChangeBtnImage(data.SelectImg);
            data.Button.ChangeBtnTextColor(_selectTextColor);
            data.Button.InvokeClickEvent();
        }

        private void ResetSelectImg()
        {
            foreach (var data in _toggleDatas)
            {
                if (data.Button == null || data.SelectImg == null || data.NormalImg == null)
                {
                    GameLog.Error("HsToggleGroup Error");
                    return;
                }
                data.Button.ChangeBtnImage(data.NormalImg);
                data.Button.ChangeBtnTextColor(_normalTextColor);
            }
        }

        private void OnDestroy()
        {
            _toggleDatas = null;
        }
    }
}