using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class PlayerAnimator : MonoBehaviour
{
    [SerializeField] private Animator _playerAnimator;
    [SerializeField] private Player _player;


    private int vector = 1;

    private void Awake()
    {
        DeadState._Exit += Restart;
        //DeadState._Enter += Dead;
    }
    private void OnDestroy()
    {
        DeadState._Exit -= Restart;
        //DeadState._Enter -= Dead;
    }
    public void Dead()
    {
        _playerAnimator.SetBool("IsDead", true);
    }

    public void Restart()
    {
        _playerAnimator.SetBool("IsDead", false);
    }

    public void StartJump()
    {
        _playerAnimator.SetBool("IsJumping", true);
    }
    public void StopJump()
    {
        _playerAnimator.SetBool("IsJumping", false);
    }
    public void Move(int value)
    {
        _playerAnimator.SetBool("Speed", true);

        if (vector != value)
        {
            vector = value;
            _player.CmdSetFlip(vector);
        }
    }
    public void StopMove()
    {
        _playerAnimator.SetBool("Speed", false);

    }
    public void Attack()
    {
        _playerAnimator.SetBool("IsAttack", true);
    }

    public void Flip()
    {
        transform.localScale = new Vector3(transform.localScale.x * -1, 1, 1);
    }
}
