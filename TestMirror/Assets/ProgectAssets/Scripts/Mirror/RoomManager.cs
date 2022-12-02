using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.UI;

public class RoomManager : MonoBehaviour
{
    [SerializeField] private GameObject _prefab;
    [SerializeField] private Transform _parents;
    [SerializeField] private Button _joinButton;
    [SerializeField] private List<GameObject> _room = new List<GameObject>();

    public int _idMatch = -1;

    private int _max;

    private bool _isOnlyFree = false;

    public static RoomManager _instance;

    private void Start()
    {
        _instance = this;
        ClearRoom();
        NetworkClient.RegisterHandler<CustomMessages.GetMatchesResponceMessage>(CreateRoom);
    }
    public void ClearRoom()
    {
        for (int i = 0; i < _room.Count; i++)
        {
            Destroy(_room[i]);
        }
        _room.Clear();
        _joinButton.interactable = false;

        NetworkClient.connection.Send(new CustomMessages.GetMatchesMessage());
    }

    public void Join()
    {
        _joinButton.interactable = true;
    }

    private void CreateRoom(CustomMessages.GetMatchesResponceMessage get)
    {
        _max = get.Max;
        foreach(var f in get.Matches)
        {
            Spawn(f);
        }
    }

    public void ToggleCheck()
    {
        _isOnlyFree = !_isOnlyFree;
        ClearRoom();
    }

    private void Spawn(Match lob)
    {
        if (_isOnlyFree && lob._playersId.Count == _max)
        {
            return;
        }
        GameObject obj = Instantiate(_prefab, _parents);
        RoomUI ui = obj.GetComponent<RoomUI>();
        ui.SetId(lob._id.ToString("D8"));
        ui.SetNumPlayer(lob._playersId.Count, _max);
        ui._Click += Click;
        ui._Click += Join;
        ui._idMatch = lob._id;
        _room.Add(obj);
    }

    private void Click()
    {
        foreach(GameObject room in _room)
        {
            room.GetComponent<RoomUI>().PanelEnable();
        }
    }
}
