using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scoreboard : MonoBehaviour
{
    [SerializeField] private GamePlayerInfoUI _prfab;
    [SerializeField] private Transform _parents;

    public static Scoreboard _scoreboard;

    private List<GamePlayerInfoUI> _players = new List<GamePlayerInfoUI>();

    private void Awake()
    {
        _scoreboard = this;
    }

    public int AddPlayer()
    {
        GamePlayerInfoUI player = Instantiate(_prfab, _parents);
        player.StartingSetting(_players.Count);
        _players.Add(player);
        return player.ID;
    }

    public void SetName(int id, string name)
    {
        foreach (var player in _players)
        {
            if (player.ID == id)
            {
                player.SetName(name);
            }
        }
    }
    public void SetWin(int id, int win)
    {
        foreach (var player in _players)
        {
            if (player.ID == id)
            {
                player.SetWin(win);
            }
        }
    }

    public void DestrouPlayer(int id)
    {
        foreach(var player in _players)
        {
            if(player.ID == id)
            {
                Destroy(player.gameObject);
                _players.Remove(player);
            }
        }
    }
}
