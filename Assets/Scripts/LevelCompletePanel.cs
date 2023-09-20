using System.Collections;
using System.Collections.Generic;
using Game;
using dotmob;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using DG.Tweening;
using Google.Play.Review;

public class LevelCompletePanel : ShowHidable
{
    //[SerializeField] private Text _toastTxt;
    [SerializeField] private TMP_Text _levelTxt;
    [SerializeField]private List<string> _toasts = new List<string>();
    //public GameObject collect;
    public GameObject loading;
    public GameObject bgShining;
    private ReviewManager _reviewManager;
    private PlayReviewInfo _playReviewInfo;
    private void OnEnable()
    {
       
        bgShining.transform.DORotate(new Vector3(0, 0, 180), 4).SetEase(Ease.InOutSine).SetLoops(-1, LoopType.Yoyo);
    }

    private void Awake()
    {
        _levelTxt.text = LevelManager.Instance.Level.no.ToString();
        
    }
    public void Start()
    {

      //  Invoke("EnableBtn",3f);
       
       
        //StartCoroutine(Countings());
       
    }
   public void EnableBtn()
    {
       // collect.SetActive(true);

    }
    protected override void OnShowCompleted()
    {
       
        
        base.OnShowCompleted();
        //_toastTxt.text = _toasts.GetRandom();
        //_toastTxt.gameObject.SetActive(true);
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 50);
       
    }
    public void OnCoinsClick()
    {
        PlayerPrefs.SetInt("reward", 2);

    }

    public IEnumerator OnClickContinue()
    {
        loading.SetActive(true);
        yield return new WaitForSeconds(5f);
        loading.SetActive(false);
        UIManager.Instance.LoadNextLevel();
       
           
    }

    public void Comp_next()
    {
        Firebase_Analytics.Instance.LogEvent("Level_" + "Comp_" + PlayerPrefs.GetInt("level"));
        if (PlayerPrefs.GetInt("level")>5 && PlayerPrefs.GetInt("level") %2==0 /*PlayerPrefs.GetInt("level") != 3 && PlayerPrefs.GetInt("level") != 1 && PlayerPrefs.GetInt("level") != 2*/)
        {
            //  MyAdmobAds_Manager.Instance.ShowInterstitial();
            AdsController.instance.ShowAd(AdNetwork.ADMOB,AdType.INTERSTITIAL);
        }
        //else
        //{
        //    StartCoroutine(InitReview());
        //}
            
        StartCoroutine(OnClickContinue());
    }
    IEnumerator InitReview()
    {
        _reviewManager ??= new ReviewManager();
        var requestFlowOperation = _reviewManager.RequestReviewFlow();
        yield return requestFlowOperation;
        print("Requested for Review Flow");
        if (requestFlowOperation.Error != ReviewErrorCode.NoError)
        {
            yield break;
        }
        _playReviewInfo = requestFlowOperation.GetResult();
        ShowReviewScreen();
    }

    public void ShowReviewScreen()
    {
        StartCoroutine(LaunchReview());
    }

    IEnumerator LaunchReview()
    {
        var launchFlowOperation = _reviewManager.LaunchReviewFlow(_playReviewInfo);
        yield return launchFlowOperation;
        print("Review Screen Launch");
        _playReviewInfo = null;
        if (launchFlowOperation.Error != ReviewErrorCode.NoError)
        {
            yield break;
        }
    }
    public void OnClickMainMenu()
    {
        GameManager.LoadScene("MainMenu");
        SharedUIManager.PausePanel.Hide();
    }
}