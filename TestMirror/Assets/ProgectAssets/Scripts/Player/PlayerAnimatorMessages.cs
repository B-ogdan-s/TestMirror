using Mirror;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimatorMessages : MonoBehaviour
{

    [SerializeField] private Player _player;
    //[SerializeField] private Animator _animator;

    public static event Action _Dead;
    /*
    [ClientCallback]
    public void HookAttack()
    {
        _player.CmdSetAttack(true);
    }
    */
    [ClientCallback]
    public void StopAtack()
    {
        //_player.CmdSetAttack(false);
        _player.StopAttack();
        //_animator.SetBool("IsAttack", false);
    }
    [ClientCallback]
    public void Dead()
    {
        _Dead?.Invoke();
    }
}
