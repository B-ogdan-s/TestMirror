using Mirror;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Player : NetworkBehaviour
{
    [SyncVar(hook = nameof(NewHealth))] private int _health;
    [SyncVar(hook = nameof(FlipSprite))] private int _flip = 1;
    [SyncVar(hook = nameof(HookAttack))] private bool _isAttack = false;

    [SyncVar(hook = nameof(WinAction))][SerializeField] private int _wins = 0;

    [SerializeField][SyncVar] private bool _isLive = true;
    [SyncVar] private int _matchId;

    [SerializeField] private int _maxHealth = 10;
    [SerializeField] private int _healingValue = 3;
    [SerializeField] private int _damage;
    [SerializeField] private float _speed;
    [SerializeField] private float _jumpF;

    [SerializeField] private GameObject _attackTrigger;

    [SerializeField] private Rigidbody2D _rigidbody;
    [SerializeField] private PlayerAnimator _playerAnimator;
    [SerializeField] private PlayerUI _playerUI;

    [SerializeField] private CheckJumpTrigger _downTrigger;
    
    private bool _isGrounded = true;
    private StateMashine _mashine = null;
    private Player _attacking;

    public static Action<int> Won;

    #region NetBehaviour

    public override void OnStartLocalPlayer()
    {
        _playerUI.SetHealColor();
        GetComponentInChildren<SpriteRenderer>().color = new Color(0, 0, 0, 1f);

        NetMan._netMan.OnGameSceneLoaded += () =>
        {
            CmdSetHealth(_maxHealth);
            CustomPlayerController._instance._StartMove += StartMove;
            CustomPlayerController._instance._Jump += CmdJump;
            CustomPlayerController._instance._Move += Move;
            CustomPlayerController._instance._StopMove += StartIdel;
            CustomPlayerController._instance._AnimAttack += Attack;
            PlayerAnimatorMessages._Dead += Dead;
            RestartPlayer._instance._Restart += CmdRestart;
            RestartPlayer._instance._Restart += Restart;
        };

        _downTrigger._Landing += CmdCheckGround;
        _downTrigger._Jump += CmdOutGround;
    }
    
    public override void OnStopLocalPlayer()
    {
        CustomPlayerController._instance._Jump -= CmdJump;
        CustomPlayerController._instance._StartMove -= StartMove;
        CustomPlayerController._instance._Move -= Move;
        CustomPlayerController._instance._StopMove -= StartIdel;
        CustomPlayerController._instance._AnimAttack -= Attack;
        PlayerAnimatorMessages._Dead -= Dead;

        _downTrigger._Landing -= CmdCheckGround;
        _downTrigger._Jump -= CmdOutGround;
        RestartPlayer._instance._Restart -= CmdRestart;
        RestartPlayer._instance._Restart -= Restart;

        SetWin();

        base.OnStopLocalPlayer();
    }

    #endregion

    #region Command


    [Command(requiresAuthority = false)]
    private void CmdRestart()
    {
        _health = _maxHealth;
        _isLive = true;
        _wins = 0;
        RestartPlayer._instance.Restart(gameObject.transform);
    }
    [Command(requiresAuthority =false)]
    public void CmdWin()
    {
        _wins++;
        AddHealth();
    }
    [Command]
    private void CmdSetHealth(int healthAmount)
    {
        _health = healthAmount;
    }
    [Command]
    private void CmdSetAttack(bool value)
    {
        _isAttack = value;
    }
    [Command]
    private void CmdCheckGround()
    {
        _isGrounded = true;
    }
    [Command]
    public void CmdMove(int value)
    {
        transform.position += new Vector3(value, 0) * _speed * Time.fixedDeltaTime;
    }
    [Command]
    public void CmdJump()
    {
        if (_isGrounded)
        {
            _rigidbody.AddForce(new Vector2(0, _jumpF));
        }
    }
    [Command]
    public void CmdOutGround()
    {
        _isGrounded = false;
    }
    [Command]
    public void CmdSetFlip(int value)
    {
        _flip = value;
    }
    [Command]
    private void CmdDead()
    {
        _isLive = false;
    }

    #endregion

    #region Server

    [Server]
    public void SetMatchId(int matchId)
    {
        _matchId = matchId;
        NetMan._netMan._id = matchId;
    }

    #endregion

    #region Hook
    private void WinAction(int _, int newValue)
    {
        if (isLocalPlayer)
            LosePanelUI._instance.TextWin(newValue);
    }
    public void HookAttack(bool oldValue, bool newValue)
    {
        _attackTrigger.SetActive(newValue);
    }
    public void FlipSprite(int _, int newValue)
    {
        _playerAnimator.Flip();
    }
    private void NewHealth(int _, int newHealth)
    {
        _playerUI.SetHealValue((float)newHealth / (float)_maxHealth);

        if (newHealth <= 0 && _isLive)
        {

            if (isLocalPlayer)
                _attacking.CmdWin();

            _mashine.SetState(new DeadState(_playerAnimator));
            CmdDead();
            SetWin();
        }
    }
    #endregion

    private void Awake()
    {
        _mashine = new StateMashine(new IdelState(_playerAnimator));
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.TryGetComponent(out Damage damage))
        {
            _attacking = damage._player;
            Damage();
        }
    }
    private void ClientMove(int value)
    {
        transform.position += new Vector3(value, 0) * _speed * Time.fixedDeltaTime;
    }

    private void AddHealth()
    {
        if(_health + _healingValue >= _maxHealth)
        {
            _health = _maxHealth;
        }
        else
        {
            _health += _healingValue;
        }
    }


    private void Restart()
    {
        if(isLocalPlayer)
        {
            LosePanelUI._instance.CloseLose();
        }    
        StartIdel();
    }

    private void Dead()
    {
        if (_health > 0)
        {
            LosePanelUI._instance.CloseLose();
        }
        if (isLocalPlayer && _health <= 0)
        {
            LosePanelUI._instance.OpenLose();
        }
    }

    private void Move(int value)
    {
        ClientMove(value);
        CmdMove(value);
    }

    private void StartMove(int value)
    {
        CmdSetFlip(value);
        _mashine.SetState(new MoveState(_playerAnimator, value));
    }

    private void Attack()
    {
        CmdSetAttack(true);
        _mashine.SetState(new AttackState(_playerAnimator, this));
    }
    public void StopAttack()
    {
        CmdSetAttack(false);
        StartIdel();
    }

    private void StartIdel()
    {
        _mashine.SetState(new IdelState(_playerAnimator));
    }

    public void Damage()
    {
        CmdSetHealth(_health - _damage);
    }

    private void SetWin()
    {
        Won?.Invoke(_wins);
    }
}