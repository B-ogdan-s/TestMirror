using Mirror;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class Player : NetworkBehaviour
{
    [SerializeField]
    [SyncVar(hook = nameof(NewHealth))] private int _health;
    [SyncVar(hook = nameof(FlipSprite))] private int _flip = 1;
    [SyncVar(hook = nameof(HookName))] private string _name;

    [SyncVar(hook = nameof(WinAction))][SerializeField] private int _wins = 0;

    [SerializeField][SyncVar] private bool _isLive = true;
    [SyncVar] private int _matchId;

    [SerializeField] private int _maxHealth = 10;
    [SerializeField] private int _healingValue = 3;
    [SerializeField][SyncVar] private int _damage;
    [SerializeField] private float _speed;
    [SerializeField] private float _jumpF;

    [SerializeField] private GameObject _attackTrigger;

    [SerializeField] private Rigidbody2D _rigidbody;
    [SerializeField] private PlayerAnimator _playerAnimator;
    [SerializeField] private PlayerUI _playerUI;

    [SerializeField] private CheckJumpTrigger _downTrigger;

    private int _varId = -5;

    [SyncVar]private bool _isGrounded = true;
    private StateMashine _mashine = null;
    private Player _attacking;

    public static Action<int> Won;

    #region NetBehaviour

    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();
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
            RestartPlayer._instance._Restart += CmdRestart;
            RestartPlayer._instance._Restart += Restart;

            if(isLocalPlayer)
                SetName();
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

        _downTrigger._Landing -= CmdCheckGround;
        _downTrigger._Jump -= CmdOutGround;
        RestartPlayer._instance._Restart -= CmdRestart;
        RestartPlayer._instance._Restart -= Restart;

        SetWin();

        base.OnStopLocalPlayer();
    }

    public override void OnStartClient()
    {
        base.OnStartClient();
        if (Scoreboard._scoreboard != null)
        {
            _varId = Scoreboard._scoreboard.AddPlayer();
            Scoreboard._scoreboard.SetName(_varId, _name);
            Scoreboard._scoreboard.SetWin(_varId, _wins);
        }
    }

    public override void OnStopClient()
    {
        Scoreboard._scoreboard.DestrouPlayer(_varId);
        base.OnStopClient();
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
        _attackTrigger.SetActive(value);
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

    [Command]
    private void CmdSetName(string name)
    {
        _name = name;
    }

    #endregion

    #region Server

    [Server]
    public void SetMatchId(int matchId)
    {
        _matchId = matchId;
    }


    [Server]
    private void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log($"Hit {collision.gameObject.name}");
        if (collision.TryGetComponent(out Damage damage))
        {
            Debug.Log($"Hit damagable {collision.gameObject.name}");
            Damage();
            _attacking = damage._player;
        }
    }

    #endregion

    #region Hook
    private void WinAction(int _, int newValue)
    {
        if (isLocalPlayer)
        {
            LosePanelUI._instance.TextWin(newValue);
        }
        else
        {
            Scoreboard._scoreboard.SetWin(_varId, newValue);
        }
    }
    public void FlipSprite(int _, int newValue)
    {
        _playerAnimator.Flip();
    }
    private void NewHealth(int _, int newHealth)
    {
        _playerUI.SetHealValue((float)newHealth / (float)_maxHealth);

        if (newHealth <= 0 && _isLive && isLocalPlayer)
        {
            Dead();
            CmdDead();
            SetWin();
        }
    }
    private void HookName(string old, string newValue)
    {
        _playerUI.SetName(newValue);

        if(!isLocalPlayer)
        {
            Scoreboard._scoreboard.SetName(_varId, newValue);
        }
    }

    #endregion

    private void Awake()
    {
        _mashine = new StateMashine(new IdelState(_playerAnimator));
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

        _attacking.CmdWin();
        _mashine.SetState(new DeadState(_playerAnimator));

        LosePanelUI._instance.OpenLose();
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
        if (_isLive && _isGrounded)
        {
            CmdSetAttack(true);
            _mashine.SetState(new AttackState(_playerAnimator));
            StartCoroutine(StopAttack());
        }
    }

    public IEnumerator StopAttack()
    {
        yield return new WaitForSeconds(0.15f);
        yield return new WaitForFixedUpdate();
        CmdSetAttack(false);

        int v = CustomPlayerController._instance.Value;
        if (v!= 0)
            _mashine.SetState(new MoveState(_playerAnimator, v));
        else
            StartIdel();
    }

    private void StartIdel()
    {
        _mashine.SetState(new IdelState(_playerAnimator));
    }
    [Server]
    public void Damage()
    {
        _health -= _damage;
    }

    private async void SetName()
    {
        var name = Database.ReadName();
        await Task.WhenAll(name);
        CmdSetName(name.Result);
    }

    private void SetWin()
    {
        Won?.Invoke(_wins);
    }
}