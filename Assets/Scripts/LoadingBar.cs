using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class LoadingBar : MonoBehaviour
{
    public Image LoadingBarImg;

    private void OnEnable()
    {
        LoadingBarImg.transform.DOScaleX(1, 8f);
    }
}
