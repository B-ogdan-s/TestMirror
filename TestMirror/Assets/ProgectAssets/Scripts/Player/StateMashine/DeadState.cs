using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeadState : PlayerState
{
    public static System.Action _Enter;
    public static System.Action _Exit;

    private PlayerAnimator _animator;

    public DeadState(PlayerAnimator animator)
    {
        _animator = animator;
    }

    public override void Enter()
    {
        CustomPlayerController._instance.enabled = false;
        _animator.Dead();
        _Enter?.Invoke();
    }

    public override void Exit()
    {
        CustomPlayerController._instance.enabled = true;
        _animator.Restart();
        _Exit?.Invoke();
    }
}
