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

    int currentindex = 0;
    public GameObject Roller;
    public TMP_Text rewardamount;
    public TMP_Text Progression;
    int currentprogression;
    public Image Progressioniamge;
    public GameObject ProgressionRewardPanel;
    float loadingtween;
    public GameObject ClaimButton;
    public GameObject ContinueButton;
    public int[] RewardList;
    public int RenadomlyReward;
    public TMP_Text ProgressionText;
    public GameObject RewardGiftPanel;
    public GameObject CoongratualtionsPanel;
    public GameObject ClaimBtn_VideoIcon;
    private void OnEnable()
    {
        ClaimButton.transform.DOLocalMove(new Vector3(0, 0, 0), .4f).OnComplete(() => OnEnableClaimBtn());

        InvokeRepeating(nameof(Scroller), .2f, .2f);
        Debug.Log("h" + PlayerPrefs.GetFloat("Pregression"));
        //Pregression
        if (PlayerPrefs.GetFloat("Pregression") >= 1)
        {
            PlayerPrefs.SetFloat("Pregression", 0);
            Progressioniamge.fillAmount = 1;
            ProgressionRewardPanel.SetActive(true);
        }
        else
        {
            currentprogression = (int)PlayerPrefs.GetFloat("Pregression");
            Progression.text = (PlayerPrefs.GetFloat("Pregression") * 100).ToString("00");
            Progressioniamge.fillAmount -= PlayerPrefs.GetFloat("Pregression");

            //  Debug.Log(PlayerPrefs.GetFloat("Pregression"));
        }
        if (PlayerPrefs.GetInt("level") > 3)
        {
            ContinueButton.gameObject.SetActive(true);
            ClaimBtn_VideoIcon.gameObject.SetActive(true);
        }
        else
        {
            ClaimBtn_VideoIcon.gameObject.SetActive(false);
            ContinueButton.gameObject.SetActive(false);
        }

    }
    //private void Start()
    //{
    //    InvokeRepeating(nameof(Scroller), .2f, .2f);
    //}
    public void OnEnableClaimBtn()
    {
        // ContinueButton.transform.DOLocalMove(new Vector3(0, 0, 0), .5f).SetDelay(.2f);

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
        if (PlayerPrefs.GetInt("level") > 3)
        {

            //if (AdsController.instance.admobController.IsRewardedAdLoaded())
            //{
            //    AdsController.instance.LoadingPanel.SetActive(true);
            //    Invoke(nameof(TimeBaseReward), 8f);
            //}
            //else
            //{
            //    AdsController.instance.LoadingPanel.SetActive(true);
            //    AdsController.instance.admobController.RequestRewardedAd();
            //    Invoke(nameof(TimeBaseReward), 8f);
            //}
            RewardGiftPanel.SetActive(false);

            CancelInvoke(nameof(Scroller));
        }
        else
        {
            GiveReward();
            RewardGiftPanel.SetActive(false);
            //CoongratualtionsPanel.SetActive(true);
            CancelInvoke(nameof(Scroller));
        }

        Debug.Log(Reward[currentindex]);
    }

    public void TimeBaseReward()
    {
        //AdsController.instance.ShowAd(AdNetwork.ADMOB, AdType.REWARDED, GiveReward);
    }

    public void GiveReward()
    {
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + Reward[currentindex]);
        CoongratualtionsPanel.SetActive(true);

    }
    public void Continue()
    {

        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 200);
        // CoongratualtionsPanel.SetActive(true);
        RewardGiftPanel.SetActive(false);




    }
    public void ProgressionCLaimReward()
    {
        //if (AdsController.instance.admobController.IsRewardedAdLoaded())
        //{
        //    AdsController.instance.LoadingPanel.SetActive(true);
        //    Invoke(nameof(ProgressionClaimREwardAd), 8f);
        //}
        //else
        //{
        //    AdsController.instance.LoadingPanel.SetActive(true);
        //    AdsController.instance.admobController.RequestRewardedAd();
        //    Invoke(nameof(ProgressionClaimREwardAd), 8f);
        //}


    }
    public void ProgressionClaimREwardAd()
    {
        //AdsController.instance.ShowAd(AdNetwork.ADMOB, AdType.REWARDED, ProgressionReward);
    }
    public void ProgressionReward()
    {
        RenadomlyReward = (int)UnityEngine.Random.Range(0, RewardList.Length);
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + RewardList[RenadomlyReward]);
        ProgressionText.text = RewardList[RenadomlyReward].ToString();
    }
}
