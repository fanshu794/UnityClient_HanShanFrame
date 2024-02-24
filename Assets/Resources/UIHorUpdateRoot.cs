using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UIHorUpdateRoot : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _textMeshProUGUI;
    
    // Start is called before the first frame update
    void Start()
    {
        _textMeshProUGUI.text = "check update...";
    }

    public void UpdateInfo(string info)
    {
        _textMeshProUGUI.text = info;
    }
}
