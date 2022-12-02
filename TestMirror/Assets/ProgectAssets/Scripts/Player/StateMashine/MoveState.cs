using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveState : PlayerState
{
    public static System.Action _Enter;
    public static System.Action _Exit;

    private PlayerAnimator _animator;
    private int _value;

    public MoveState(PlayerAnimator animator, int value)
    {
        _animator = animator;
        _value = value;
    }

    public override void Enter()
    {
        _animator.Move();
        _Enter?.Invoke();
    }

    public override void Exit()
    {
        _animator.StopMove();
        _Exit?.Invoke();
    }
}
