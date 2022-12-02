using Mirror;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Text.RegularExpressions;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LobbyManager : NetworkBehaviour
{
    [SerializeField] private int _maxClient;
    [SerializeField, Scene] private string _gameScene;

    public readonly SyncList<Match> _matches = new SyncList<Match>();

    public Dictionary<int, Scene> _Game { get; private set; } = new Dictionary<int, Scene>();


    public static LobbyManager _instance;

    private void Awake()
    {
        _instance = this;
    }


    #region Server

    public override void OnStartServer()
    {
        base.OnStartServer();

        NetworkServer.RegisterHandler<CustomMessages.GetMatchesMessage>(GetMatch);
    }

    [Server]
    public void CreateLobby()
    {
        int id = 1;

        for (int i = 0; i < _matches.Count; i++)
        {
            if (_matches[i]._id == id)
            {
                id++;
                i = 0;
            }
        }
        _matches.Add(new Match(id));
    }

    [Server]
    public void AddPlayerToMatch(int playerId, int matchId)
    {
        int index = -1;
        for (int i = 0; i < _matches.Count; i++)
        {
            if (_matches[i]._id == matchId)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            return;
        }
        if(_matches[index]._playersId.Count >= _maxClient)
        {
            return;
            RoomManager._instance.ClearRoom();
        }

        Match match = _matches[index];

        Debug.Log(match);

        _matches.RemoveAt(index);
        match._playersId.Add(playerId);
        _matches.Add(match);

        NetMan._netMan.AddPlayerToGame(match._id, playerId);
    }

    [Server]
    public void AddPlayer(Player player, int matchId)
    {
        for (int i = 0; i < _matches.Count; i++)
        {
            if (_matches[i]._id == matchId)
            {
                _matches[i]._players.Add(player);
                break;
            }
        }
    }

    [Server]
    public void StartGame(int player, int matchId)
    {
        if (_Game.ContainsKey(matchId))
        {
            return;
        }

        LoadSceneParameters loadSceneParameters = new LoadSceneParameters();
        loadSceneParameters.loadSceneMode = LoadSceneMode.Additive;
        loadSceneParameters.localPhysicsMode = LocalPhysicsMode.Physics2D;
        var operation = SceneManager.LoadSceneAsync(_gameScene, loadSceneParameters);

        operation.completed += (_) =>
        {
            int index = SceneManager.sceneCount - 1;
            Scene scene = SceneManager.GetSceneAt(index);

            _Game.Add(matchId, scene);
            if (TryGetMatch(matchId, out Match match))
            {
                match._playersId.Add(player);
                NetMan._netMan.AddPlayerToGame(match._id, player);
            }

        };
    }
    [Server]
    private bool TryGetMatch(int matchId, out Match match)
    {
        for (int i = 0; i < _matches.Count; i++)
        {
            if (_matches[i]._id == matchId)
            {
                match = _matches[i];
                return true;
            }
        }

        match = null;
        return false;
    }
    [Server]
    public void DisconectPlayer(int playerId)
    {
        Match mat = null;
        foreach (Match matche in _matches)
        {
            for (int i = 0; i < matche._playersId.Count; i++)
            {
                if (matche._playersId[i] == playerId)
                {
                    matche._playersId.Remove(matche._playersId[i]);
                    matche._players.Remove(matche._players[i]);
                    mat = matche;
                    break;
                }
            }
        }

        if (mat._playersId.Count == 0)
        {
            SceneManager.UnloadScene(_Game[mat._id]);
            _Game.Remove(mat._id);
            _matches.Remove(mat);
            return;
        }
    }

    #endregion

    private void GetMatch(NetworkConnection connection, CustomMessages.GetMatchesMessage message)
    {
        List<Match> match = new List<Match>();
        for(int i = 0; i < _matches.Count; i++)
        {
            match.Add(_matches[i]);
        }
        CustomMessages.GetMatchesResponceMessage mes = new CustomMessages.GetMatchesResponceMessage();
        mes.Matches = match;
        mes.Max = _maxClient;
        connection.Send(mes);
    }

}

public class Match
{
    public int _id = 0;
    public List<int> _playersId = new List<int>();
    public List<Player> _players = new List<Player>();

    public Match() { }
    public Match(int id)
    {
        _id = id;
    }
}
