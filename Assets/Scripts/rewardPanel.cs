using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using DG.Tweening;
using System;
using TMPro;
using UnityEngine.UI;

public class rewardPanel : MonoBehaviour
{
    public List<float> positions;
    public List<int> Reward;
   
    int currentindex=0;
    public GameObject Roller;
    public TMP_Text rewardamount;
    public TMP_Text Progression;
    int currentprogression;
    public Image Progressioniamge;
    public GameObject ProgressionRewardPanel;
    private void OnEnable()
    {
        InvokeRepeating(nameof(Scroller), .2f, .2f);
        //Pregression
        if (PlayerPrefs.GetFloat("Pregression") == 1)
        {
            PlayerPrefs.SetFloat("Pregression", 0);
            Progressioniamge.fillAmount =1;
            ProgressionRewardPanel.SetActive(true);
        }
        else
        {
            currentprogression = (int)PlayerPrefs.GetFloat("Pregression");
            Progression.text = (PlayerPrefs.GetFloat("Pregression") * 100).ToString();
            Progressioniamge.fillAmount -= PlayerPrefs.GetFloat("Pregression");
            Debug.Log(PlayerPrefs.GetFloat("Pregression"));
        }
       
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
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 200);
        InvokeRepeating(nameof(Scroller), .2f, .2f);

    }

}
