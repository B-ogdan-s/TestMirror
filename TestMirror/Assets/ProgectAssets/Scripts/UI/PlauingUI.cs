using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlauingUI : MonoBehaviour
{
    [SerializeField] private Canvas _exitOpponent;
    [SerializeField] private Canvas _exitPlayer;

    [SerializeField] private Canvas _win;
    [SerializeField] private Canvas _lose;

    public static PlauingUI _instance { get; private set; }

    private void Awake()
    {
        _instance = this;
        _exitOpponent.enabled = false;
        _exitPlayer.enabled = false;
        _win.enabled = false;
        _lose.enabled = false;
    }

    public void OpenExitPanelOpponent()
    {
        _exitOpponent.enabled = true;
    }
    public void OpenExitPanelPlayer()
    {
        _exitPlayer.enabled = true;
    }
    public void CloseExitPanelPlayer()
    {
        _exitPlayer.enabled = false;
    }

    public void ExitToGame()
    {
        NetMan._netMan.StopClient();
    }

    public void OpenWin()
    {
        _win.enabled = true;
    }
    public void OpenLose()
    {
        _lose.enabled = true;
    }

}
