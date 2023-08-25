using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using DG.Tweening;
using System;
using TMPro;

public class rewardPanel : MonoBehaviour
{
    public List<float> positions;
    public List<int> Reward;
   
    int currentindex=0;
    public GameObject Roller;
    public TMP_Text rewardamount;
    private void Start()
    {
        InvokeRepeating(nameof(Scroller), .2f, .2f);
    }

    public void Scroller()
    {

        Roller.transform.DOLocalMoveX(positions[currentindex], .2f);
        currentindex++;

        if (currentindex >= positions.Count)
            currentindex = 0;

        rewardamount.text = Reward[currentindex].ToString();
    }

    public void OnClickReward()
    {
        CancelInvoke(nameof(Scroller));
        Debug.Log(Reward[currentindex]);
    }
}
