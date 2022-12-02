using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RestartPlayer : MonoBehaviour
{
    [SerializeField] private Transform[] _pos = new Transform[0];

    public static  RestartPlayer _instance;

    public event System.Action _Restart;

    private void Awake()
    {
        _instance = this;
    }

    [Server]
    public void Restart(Transform transform)
    {
        int v = Random.Range(0, _pos.Length);
        Vector2 vector = _pos[v].position;
        transform.position = vector;
    }

    public void RestartButton()
    {
        _Restart?.Invoke();
    }
}
