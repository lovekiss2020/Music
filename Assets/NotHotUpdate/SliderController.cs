using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour
{

    public Slider slider;
    public TextMeshProUGUI textMeshProUGUI;
    public Action<string,float> sliderAction;
    private void Awake() {
        sliderAction+=updateSlider;
    }
    private void OnDestroy() {
        sliderAction -= updateSlider;
    }


    private void updateSlider(string resName,float value){
        slider.value=value;
        textMeshProUGUI.text=$"{resName}下载进度：{value}%";
    }
}
