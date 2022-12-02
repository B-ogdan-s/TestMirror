using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbyButton : MonoBehaviour
{
    public void Create()
    {
        NetworkClient.connection.Send(new CustomMessages.CreateRoom());
        RoomManager._instance._idMatch = LobbyManager._instance._matches[LobbyManager._instance._matches.Count - 1]._id;
    }
    public void Join()
    {
        CustomMessages.AddToRoom room = new CustomMessages.AddToRoom();
        room.Id = RoomManager._instance._idMatch;
        NetworkClient.connection.Send(room);
    }
}
