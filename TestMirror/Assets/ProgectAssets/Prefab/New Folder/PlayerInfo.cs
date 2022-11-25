using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

public class PlayerInfo : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _name;
    [SerializeField] private TextMeshProUGUI _win;
    [SerializeField] private TextMeshProUGUI _lost;

    private Canvas _canvas;

    private void Start()
    {
        _canvas = GetComponent<Canvas>();
        _canvas.enabled = false;
    }

    public async void Open()
    {
        var n = Database.ReadName();
        var w = Database.ReadWin();
        var l = Database.ReadLost();

        await Task.WhenAll(n, w, l);

        _canvas.enabled = true;
        _name.text = n.Result;
        _win.text = "Win:  " + w.Result;
        _lost.text = "Lost:  " + l.Result;
    }

    public void Close()
    {
        _canvas.enabled = false;
    }

    public void SingOut()
    {
        Auth._auth.SignOut();
        _canvas.enabled = false;
    }
}
