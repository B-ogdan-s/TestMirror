using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class MirrorButton : MonoBehaviour
{
    public void LoginServer()
    {
        NetMan._netMan.StartClient();
    }
    public void LogoutLobby()
    {
        NetMan._netMan.StopClient();
    }
    public void Exit()
    {
        Application.Quit();
    }
}
