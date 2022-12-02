using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomMessages
{
    internal struct CreateRoom : NetworkMessage { }
    internal struct AddToRoom : NetworkMessage 
    {
        public int Id;
    }
    public struct GetMatchesMessage : NetworkMessage { }
    public struct GetMatchesResponceMessage : NetworkMessage
    {
        public List<Match> Matches;
        public int Max;
    }
}
