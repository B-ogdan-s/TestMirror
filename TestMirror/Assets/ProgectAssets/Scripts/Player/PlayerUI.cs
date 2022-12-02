using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerUI : MonoBehaviour
{
    [SerializeField] private Slider _healBar;
    [SerializeField] private Color _healColor;
    [SerializeField] private Image _SliderImage;

    public void SetHealColor()
    {
        _SliderImage.color = _healColor;
    }
    public void SetHealValue(float value)
    {
        _healBar.value = value;
    }
}
