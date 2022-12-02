using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.SceneManagement;
using System;

public class NetMan : NetworkManager
{
    [SerializeField, Scene] private string _waitingSceneName;

    public int _id;

    public static NetMan _netMan;
    public event Action OnGameSceneLoaded;


    public override void Awake()
    {
        _netMan = this;
    }

    #region NetManager

    public override void OnStartServer()
    {
        base.OnStartServer();

        NetworkServer.RegisterHandler<CustomMessages.CreateRoom>(CreateRoom);
        NetworkServer.RegisterHandler<CustomMessages.AddToRoom>(AddToRoom);
    }
    public override void OnClientConnect()
    {
        base.OnClientConnect();
        var operation = SceneManager.LoadSceneAsync(_waitingSceneName, LoadSceneMode.Single);
    }
    public override void OnClientSceneChanged()
    {
        base.OnClientSceneChanged();
        if (NetworkClient.connection.identity != null && NetworkClient.connection.identity.gameObject.scene.name == "PlayingScene")
        {
            OnGameSceneLoaded?.Invoke();
        }
    }
    public override void OnClientChangeScene(string newSceneName, SceneOperation sceneOperation, bool customHandling)
    {
        if (sceneOperation == SceneOperation.LoadAdditive)
        {
            StartCoroutine(LoadSceneAdditive(newSceneName));
        }
    }
    public override void OnServerDisconnect(NetworkConnectionToClient conn)
    {

        ExitToRoom(conn.connectionId);

        base.OnServerDisconnect(conn);
    }

    #endregion

    #region Server

    [Server]
    private void ExitToRoom(int id)
    {
        LobbyManager._instance.DisconectPlayer(id);
    }
    [Server]
    public void AddPlayerToGame(int matchId, int connectionId)
    {
        StartCoroutine(OnServerAddPlayerDelayed(matchId, connectionId));
    }

    #endregion

    #region Client

    [Client]
    private IEnumerator LoadSceneAdditive(string sceneName)
    {
        if (mode == NetworkManagerMode.ClientOnly)
        {
            loadingSceneAsync = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);

            while (loadingSceneAsync != null && loadingSceneAsync.isDone == false)
            {
                yield return null;
            }
        }

        Scene scene = SceneManager.GetSceneAt(SceneManager.sceneCount - 1);
        SceneManager.MoveGameObjectToScene(NetworkClient.localPlayer.gameObject, scene);

        Scene oldScene = SceneManager.GetSceneAt(0);
        SceneManager.UnloadSceneAsync(oldScene);

        NetworkClient.isLoadingScene = false;
        OnClientSceneChanged();
    }

    #endregion

    #region Messages

    private void CreateRoom(NetworkConnection connection, CustomMessages.CreateRoom message)
    {
        LobbyManager._instance.CreateLobby();
        LobbyManager._instance.StartGame(connection.connectionId, LobbyManager._instance._matches[LobbyManager._instance._matches.Count - 1]._id);
    }
    private void AddToRoom(NetworkConnection connection, CustomMessages.AddToRoom message)
    {
        LobbyManager._instance.AddPlayerToMatch(connection.connectionId, message.Id);
    }

    #endregion

    private IEnumerator OnServerAddPlayerDelayed(int matchId, int connectionId)
    {
        NetworkConnectionToClient connection = NetworkServer.connections[connectionId];
        Scene scene = LobbyManager._instance._Game[matchId];
        yield return new WaitForSeconds(1);

        GameObject player = Instantiate(playerPrefab);
        NetworkServer.AddPlayerForConnection(connection, player);
        player.transform.position = GetStartPosition().position;


        while (NetworkServer.spawned.ContainsKey(connection.identity.netId) == false)
        {
            yield return null;
        }

        SceneManager.MoveGameObjectToScene(player, scene);
        connection.Send(new SceneMessage { sceneName = scene.name, sceneOperation = SceneOperation.LoadAdditive, customHandling = true });

        if (player.TryGetComponent(out Player playerComp))
        {
            playerComp.SetMatchId(matchId);
            LobbyManager._instance.AddPlayer(playerComp, matchId);
        }
    }
}
