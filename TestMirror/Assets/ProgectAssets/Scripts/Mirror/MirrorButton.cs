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
    public void LogoutServer()
    {
        NetMan._netMan.StopClient();
    }
    public void StartServer()
    {
        NetMan._netMan.StartServer();
    }
    public void StopServer()
    {
        NetMan._netMan.StopServer();
    }
    public void Exit()
    {
        Application.Quit();
    }
}
