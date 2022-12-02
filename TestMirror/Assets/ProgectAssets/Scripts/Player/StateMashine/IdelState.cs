using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdelState : PlayerState
{
    public static System.Action _Enter;
    public static System.Action _Exit;

    private PlayerAnimator _animator;

    public IdelState(PlayerAnimator animator)
    {
        _animator = animator;
    }

    public override void Enter()
    {
        _animator.Restart();
        _Enter?.Invoke();
    }

    public override void Exit()
    {
        _Exit?.Invoke();
    }
}
