using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlayerUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _text;
    [SerializeField] private Slider _healBar;
    [SerializeField] private Color _healColor;
    [SerializeField] private Image _SliderImage;

    public void SetName(string name)
    {
        _text.text = name;
    }
    public void SetHealColor()
    {
        _SliderImage.color = _healColor;
        _text.color = _healColor;
    }
    public void SetHealValue(float value)
    {
        _healBar.value = value;
    }
}
