using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class AttackState : PlayerState
{
    public static System.Action _Enter;
    public static System.Action _Exit;

    public PlayerAnimator _animator;
    
    public AttackState(PlayerAnimator animator)
    {
        _animator = animator;
    }


    public override void Enter()
    {
        _animator.Attack();
        CustomPlayerController._instance.enabled = false;
        _Enter?.Invoke();
    }

    public override void Exit()
    {
        _animator.StopAttack();
        CustomPlayerController._instance.enabled = true;
        _Exit?.Invoke();
    }
}
