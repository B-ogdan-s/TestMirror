using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class PlayerAnimator : MonoBehaviour
{
    [SerializeField] private Animator _playerAnimator;
    [SerializeField] private Player _player;

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
    public void Move()
    {
        _playerAnimator.SetBool("Speed", true);
    }
    public void StopMove()
    {
        _playerAnimator.SetBool("Speed", false);

    }
    public void Attack()
    {
        _playerAnimator.SetBool("IsAttack", true);
    }
    public void StopAttack()
    {
        _playerAnimator.SetBool("IsAttack", false);
    }

    public void Flip()
    {
        transform.localScale = new Vector3(transform.localScale.x * -1, 1, 1);
    }
}
