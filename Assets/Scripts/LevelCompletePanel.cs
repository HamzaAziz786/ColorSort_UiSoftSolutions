using System.Collections;
using System.Collections.Generic;
using Game;
using dotmob;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using DG.Tweening;


public class LevelCompletePanel : ShowHidable
{
    //[SerializeField] private Text _toastTxt;
    [SerializeField] private TMP_Text _levelTxt;
    [SerializeField]private List<string> _toasts = new List<string>();
    //public GameObject collect;
    public GameObject loading;
    public GameObject bgShining;
    public ParticleSystem[] Complete_p;
  
    private void OnEnable()
    {
       
        bgShining.transform.DORotate(new Vector3(0, 0, 180), 4).SetEase(Ease.InOutSine).SetLoops(-1, LoopType.Yoyo);
    }

    private void Awake()
    {
        _levelTxt.text = PlayerPrefs.GetInt("level").ToString();
        
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
       
       
    }
    public void OnCoinsClick()
    {
        PlayerPrefs.SetInt("reward", 2);

    }

    public IEnumerator OnClickContinue()
    {
        loading.SetActive(true);
        yield return new WaitForSeconds(1.2f);
        loading.SetActive(false);
        UIManager.Instance.LoadNextLevel();
       
           
    }

    public void Comp_next()
    {

        //AdsController.instance.ShowAd(AdNetwork.ADMOB, AdType.INTERSTITIAL);
        foreach (var item in Complete_p)
        {
            item.Stop();
        }
        
        if (PlayerPrefs.GetInt("level") >=3 && PlayerPrefs.GetInt("level")%2==0 /*&& PlayerPrefs.GetInt("level") % 2 == 0*/ /*PlayerPrefs.GetInt("level") != 3 && PlayerPrefs.GetInt("level") != 1 && PlayerPrefs.GetInt("level") != 2*/)
        {
            AdsController.instance.ShowAd(AdType.INTERSTITIAL);
           
        }
       

        StartCoroutine(OnClickContinue());
    }
   

  
    public void OnClickMainMenu()
    {
        GameManager.LoadScene("MainMenu");
        SharedUIManager.PausePanel.Hide();
    }
}