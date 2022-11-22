using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimator : MonoBehaviour
{
    [SerializeField] private Animator _playerAnimator;
    [SerializeField] private Player _player;


    private int vector = 1;

    public void Dead()
    {
        _playerAnimator.SetBool("IsDead", true);
    }

    public void StartJump()
    {
        _playerAnimator.SetBool("IsJumping", true);
    }
    public void StopJump()
    {
        _playerAnimator.SetBool("IsJumping", false);
    }
    public void StartMove(int value)
    {
        _playerAnimator.SetBool("Speed", true);

        if (vector != value)
        {
            vector = value;
            _player.SetFlip(vector);
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
}
