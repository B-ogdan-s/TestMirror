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

    public override void OnStartServer()
    {
        base.OnStartServer();

        NetworkServer.RegisterHandler<CustomMessages.CreateLobbyMessage>(CreateLobbyHandler);
    }

    public override void OnClientConnect()
    {
        base.OnClientConnect();
        var operation = SceneManager.LoadSceneAsync(_waitingSceneName, LoadSceneMode.Single);

        operation.completed += (_) =>
        {
            NetworkClient.connection.Send(new CustomMessages.CreateLobbyMessage());
        };

    }
    private void CreateLobbyHandler(NetworkConnection connection, CustomMessages.CreateLobbyMessage message)
    {
        LobbyManager._instance.AddPlayer(connection.connectionId);
    }
    [Server]
    public void AddPlayerToGame(int matchId, int connectionId)
    {
        StartCoroutine(OnServerAddPlayerDelayed(matchId, connectionId));
    }

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

    public override void OnServerDisconnect(NetworkConnectionToClient conn)
    {
        if (conn.identity.gameObject.TryGetComponent(out Player player))
        {
            LobbyManager._instance.DisconectPlayer(player.CurrentMatchId, conn.connectionId);

            NetworkClient.connection.Send(new CustomMessages.DestroyLobbyMessage());
        }
        base.OnServerDisconnect(conn);

    }
}
