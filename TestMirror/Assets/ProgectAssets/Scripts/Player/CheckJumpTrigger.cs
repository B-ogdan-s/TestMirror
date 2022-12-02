using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckJumpTrigger : MonoBehaviour
{
    [SerializeField] private PlayerAnimator _playerAnimator;
    public event Action _Landing;
    public event Action _Jump;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.GetComponent<BoxCollider2D>() != null)
        {
            _Landing?.Invoke();
            _playerAnimator.StopJump();
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.GetComponent<BoxCollider2D>() != null)
        {
            _Jump?.Invoke();
            _playerAnimator.StartJump();
        }
    }
}
