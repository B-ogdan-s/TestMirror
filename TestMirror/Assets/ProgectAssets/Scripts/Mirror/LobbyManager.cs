using Mirror;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LobbyManager : NetworkBehaviour
{
    [SerializeField] private int _maxClient;
    [SerializeField, Scene] private string _gameScene;

    public readonly SyncList<Match> _matches = new SyncList<Match>();

    public Queue<int> _players = new Queue<int>();
    public Dictionary<int, Scene> _Game { get; private set; } = new Dictionary<int, Scene>();


    public static LobbyManager _instance;

    private void Awake()
    {
        _instance = this;
        NetworkServer.RegisterHandler<CustomMessages.DestroyLobbyMessage>(ExitPlayer);
    }

    [Server]
    public void AddPlayer(int id)
    {
        _players.Enqueue(id);

        if(_players.Count >= _maxClient)
        {
            List<int> pley = new List<int>();
            CreateLobby();


            for (int i = 0; i < _maxClient; i++)
            {
                AddPlayerToMatch(_matches[_matches.Count - 1]._id, _players.Peek());
                pley.Add(_players.Dequeue());
            }


            StartGame(_matches[_matches.Count - 1]._id, pley);
        }
    }

    [Server]
    public void CreateLobby()
    {
        int id = 0;

        for(int i = 0; i < _matches.Count; i++)
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
    public void AddPlayerToMatch(int id, int playerId)
    {
        int index = -1;
        for(int i = 0; i < _matches.Count; i++)
        {
            if(_matches[i]._id == id)
            {
                index = i;
                break;
            }
        }

        if(index == -1)
        {
            return;
        }

        Match match = _matches[index];

        Debug.Log(match);

        _matches.RemoveAt(index);
        match._playersId.Add(playerId);
        _matches.Add(match);
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
    public void StartGame(int id, List<int> players)
    {
        if(_Game.ContainsKey(id))
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

            _Game.Add(id, scene);
            if (TryGetMatch(id, out Match match))
            {
                foreach (int player in players)
                {
                    NetMan._netMan.AddPlayerToGame(match._id, player);
                }
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
    public void DisconectPlayer(int id, int playerId)
    {
        Match mat = null;
        foreach (Match matche in _matches)
        {
            if (matche._id == id)
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

                break;
            }
        }

        if(mat._players.Count == 0)
        {
            SceneManager.UnloadScene(_Game[mat._id]);
            _Game.Remove(mat._id);
            _matches.Remove(mat);
            return;
        }

        if (mat != null)
        {
            foreach (var j in mat._players)
            {
                Debug.Log("Show message");
                OnPlayerExitMessage onPlayerExitMessage;
                onPlayerExitMessage.PlayerId = playerId;
                j.GetComponent<NetworkIdentity>().connectionToClient.Send(onPlayerExitMessage);
            }
        }
    }
    [Server]
    private void ExitPlayer(NetworkConnection connection, CustomMessages.DestroyLobbyMessage message)
    {
        if(connection.connectionId == _players.Peek())
            _players.Dequeue();
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
