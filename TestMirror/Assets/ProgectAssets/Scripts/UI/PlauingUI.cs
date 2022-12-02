using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlauingUI : MonoBehaviour
{
    [SerializeField] private Canvas _exitPlayerCanvas;
    [SerializeField] private Canvas _loseCanvas;

    [SerializeField] private TextMeshProUGUI _winText;

    public static PlauingUI _instance { get; private set; }

    private void Awake()
    {
        _instance = this;

        _exitPlayerCanvas.enabled = false;
        _loseCanvas.enabled = false;

        DeadState._Enter += OpenLose;
        DeadState._Exit += CloseLose;
    }
    public void OpenExitPanelPlayer()
    {
        if (!_loseCanvas.enabled)
            _exitPlayerCanvas.enabled = true;
    } 
    public void CloseExitPanelPlayer()
    {
        _exitPlayerCanvas.enabled = false;
    }

    public void ExitToGame()
    {
        NetMan._netMan.StopClient();
    }
    public void CloseLose()
    {
        _loseCanvas.enabled = false;
    }
    public void OpenLose()
    {
        _loseCanvas.enabled = true;
    }

    public void TextWin(int value)
    {
        _winText.text = value.ToString();
    }
    private void OnDestroy()
    {
        DeadState._Enter -= OpenLose;
        DeadState._Exit -= CloseLose;
    }

}
