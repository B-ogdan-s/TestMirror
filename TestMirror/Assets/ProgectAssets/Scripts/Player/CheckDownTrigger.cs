using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckDownTrigger : MonoBehaviour
{
    [SerializeField] private PlayerAnimator _playerAnimator;
    public event Action _Check;
    public event Action _Up;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.GetComponent<BoxCollider2D>() != null)
        {
            _Check?.Invoke();
            _playerAnimator.StopJump();
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.GetComponent<BoxCollider2D>() != null)
        {
            _Up?.Invoke();
            _playerAnimator.StartJump();
        }
    }
}
