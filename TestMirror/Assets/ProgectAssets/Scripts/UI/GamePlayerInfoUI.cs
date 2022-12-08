using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GamePlayerInfoUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _name;
    [SerializeField] private TextMeshProUGUI _win;

    private int _id = -5;
    public int ID => _id;

    public void StartingSetting(int id)
    {
        _name.text = "-----";
        _win.text ="0";
        _id = id;
    }
    public void SetName(string name)
    {
        _name.text = name;
    }
    public void SetWin(int value)
    {
        _win.text = value.ToString();
    }
}
