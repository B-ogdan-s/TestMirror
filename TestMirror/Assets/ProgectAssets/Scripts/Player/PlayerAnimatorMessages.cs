using Mirror;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimatorMessages : MonoBehaviour
{

    [SerializeField] private Player _player;

    public static event Action _Dead;
    [ClientCallback]
    public void StopAtack()
    {
        _player.StopAttack();
    }
    [ClientCallback]
    public void Dead()
    {
        _Dead?.Invoke();
    }
}
