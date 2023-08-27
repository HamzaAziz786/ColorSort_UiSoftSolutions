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
    private void OnEnable()
    {
        InvokeRepeating(nameof(Scroller), .2f, .2f);
    }
    //private void Start()
    //{
    //    InvokeRepeating(nameof(Scroller), .2f, .2f);
    //}

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
        MyAdmobAds_Manager.Instance.ShowRewardBasedVideo();
        MyAdmobAds_Manager.ClaimReward += GiveReward;
        CancelInvoke(nameof(Scroller));
       
        Debug.Log(Reward[currentindex]);
    }
    public void GiveReward()
    {
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + Reward[currentindex]);
    }
    public void Continue()
    {
        InvokeRepeating(nameof(Scroller), .2f, .2f);
    }

}
