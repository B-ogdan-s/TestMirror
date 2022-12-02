using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CustomPlayerController : MonoBehaviour
{

    public static CustomPlayerController _instance;

    public event Action<int> _StartMove;
    public event Action<int> _Move;
    public event Action _StopMove;
    public event Action _Jump;
    public event Action _AnimAttack;

    private int _value = 0;

    private void Awake()
    {
        _instance = this;
    }

    private void FixedUpdate()
    {
        if (_value != 0)
        {
            _Move?.Invoke(_value);
        }
        else
        {
            _StopMove?.Invoke();
        }
    }

    public void Jump()
    {
        _Jump?.Invoke();
    }

    public void MoveButtonDown(int value)
    {
        _StartMove?.Invoke(value);
        if(Mathf.Abs(_value) < 1)
            _value += value;
    }
    public void MoveButtonUp(int value)
    {
        _value -= value;
    }

    public void Attack()
    {
        _AnimAttack?.Invoke();
    }
}
