using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

public class PlayerInfoUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _name;
    [SerializeField] private TextMeshProUGUI _win;

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

        await Task.WhenAll(n, w);

        _canvas.enabled = true;
        _name.text = n.Result;
        _win.text = "Win:  " + w.Result;
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
