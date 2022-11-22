using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class Player : NetworkBehaviour
{
    [SyncVar(hook = nameof(NewHealth))] private int _health;
    [SyncVar(hook = nameof(FlipSprite))] private int _flip = 1;
    [SyncVar(hook = nameof(Attack))] private bool _isAttack = false;

    [SerializeField] private int _maxHealth = 7;
    [SerializeField] private int _damage;
    [SerializeField] private float _speed;
    [SerializeField] private float _jumpF;

    [SyncVar] private int _matchId;

    [SerializeField] private GameObject _player;
    [SerializeField] private GameObject _attack;

    [SerializeField] private Slider _slider;
    [SerializeField] private Color _color;
    [SerializeField] private Image _image;

    [SerializeField] private Rigidbody2D _rigidbody;
    [SerializeField] private PlayerAnimator _playerAnimator;

    [SerializeField] private CheckDownTrigger _downTrigger;
    [SerializeField] private bool _isGrounded = true;

    public int MatchId => _matchId;

    public int CurrentMatchId => _matchId;

    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();
        NetworkClient.ReplaceHandler<OnPlayerExitMessage>(ShowExitUI);
        GetComponentInChildren<SpriteRenderer>().color = new Color(0, 0, 0, 1f);

        _image.color = _color;

        NetMan._netMan.OnGameSceneLoaded += () => 
        {
            CmdSetHealth(_maxHealth);
            CustomPlayerController._instance._Move += Move;
            CustomPlayerController._instance._Jump += Jump;
            CustomPlayerController._instance._Move += _playerAnimator.StartMove;
            CustomPlayerController._instance._StopMove += _playerAnimator.StopMove;
            CustomPlayerController._instance._AnimAttack += _playerAnimator.Attack;
            PlayerAnimatorMessages._Dead += Dead;
        };
        SetAttack(false);

        _downTrigger._Check += CheckGround;
        _downTrigger._Up += OutGround;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.GetComponent<Damage>() != null)
        {
            Damage();
        }
    }

    private void Dead()
    {
        if(isLocalPlayer && _health > 0)
        {
            PlauingUI._instance.OpenWin();
        }
        else
        {
            PlauingUI._instance.OpenLose();
        }
    }

    [Command]
    private void CmdSetHealth(int healthAmount)
    {
        _health = healthAmount;
    }


    [Server]
    public void SetMatchId(int matchId)
    {
        _matchId = matchId;
        NetMan._netMan._id = matchId;
    }

    [Command]
    private void CheckGround()
    {
        _isGrounded = true;
    }

    [Client]
    private void ShowExitUI(NetworkConnection connection, OnPlayerExitMessage message)
    {
        Debug.Log($"Quited player id {message.PlayerId}");
        PlauingUI._instance.OpenExitPanelOpponent();
    }


    [Command]
    public void Move(int value)
    {
        transform.position += new Vector3(value, 0) * _speed * Time.deltaTime;
    }

    [Command]
    public void Jump()
    {
        if (_isGrounded)
        {
            _rigidbody.AddForce(new Vector2(0, _jumpF));
        }
    }
    [Command]
    public void OutGround()
    {
        _isGrounded = false;
    }

    [Command]
    public void SetFlip(int value)
    {
        _flip = value;
    }

    [Command]
    public void SetAttack(bool value)
    {
        _isAttack = value;
    }


    public void Attack(bool oldValue, bool newValue)
    {
        _attack.SetActive(newValue);
    }

    public void FlipSprite(int _, int newValue)
    {
        _player.transform.localScale = new Vector3(_player.transform.localScale.x * -1, 1, 1);
    }


    public void Damage()
    {
        CmdSetHealth(_health - _damage);
    }

    private void NewHealth(int _, int newHealth)
    {
        _slider.value = (float)newHealth / (float)_maxHealth;

        if(newHealth <= 0)
        {
            _playerAnimator.Dead();
            CustomPlayerController._instance._Move -= Move;
            CustomPlayerController._instance._Jump -= Jump;
            CustomPlayerController._instance._Move -= _playerAnimator.StartMove;
            CustomPlayerController._instance._StopMove -= _playerAnimator.StopMove;
            CustomPlayerController._instance._AnimAttack -= _playerAnimator.Attack;
            _downTrigger._Check -= CheckGround;
            _downTrigger._Up -= OutGround;

            CustomPlayerController._instance.enabled = false;
            _playerAnimator.enabled = false;
        }
    }

}


public struct OnPlayerExitMessage : NetworkMessage
{
    public int PlayerId;
}