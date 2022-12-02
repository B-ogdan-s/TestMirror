using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RoomUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _idRoom;
    [SerializeField] private TextMeshProUGUI _numPlayer;
    [SerializeField] private Image _buttonImage;
    [SerializeField] private Color _enableColor;
    [SerializeField] private Color _disableColor;
    [SerializeField] private Color _applyColor;

    public int _idMatch = -1;

    public Action _Click;

    public void Click()
    {
        _Click?.Invoke();
        _buttonImage.color = _applyColor;
        RoomManager._instance._idMatch = _idMatch;
    }
    public void PanelEnable()
    {
        if(_buttonImage.color != _disableColor)
            _buttonImage.color = _enableColor;
    }
    public void SetId(string id)
    {
        _idRoom.text = id;
    }
    public void SetNumPlayer(int num, int max)
    {
        _numPlayer.text = num + " / " + max;
        if(num < max)
        {
            _buttonImage.color = _enableColor;
        }
        else
        {
            _buttonImage.color = _disableColor;
            GetComponent<Button>().interactable = false;
        }
    }
}
