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
        _animator.Dead();
        CustomPlayerController._instance.enabled = false;
        _Enter?.Invoke();
    }

    public override void Exit()
    {
        _animator.Restart();
        CustomPlayerController._instance.enabled = true;
        _Exit?.Invoke();
    }
}
