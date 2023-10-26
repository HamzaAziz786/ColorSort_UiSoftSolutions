

using System;
using Game;
using dotmob;
using UnityEngine;
using UnityEngine.UI;

public class GamePlayPanel : ShowHidable
{
    [SerializeField] private Text _lvlTxt;
    [SerializeField] private Text txtTutorial;
    public Text Coins;
    public static GamePlayPanel instance;
    private void Start()
    {
        instance = this;
        _lvlTxt.text = $" LEVEL {LevelManager.Instance.Level.no}";
        //if(LevelManager.Instance.Level.no == 1)
        //{
        //    txtTutorial.gameObject.SetActive(true);
        //}
        //else
        //{
        //    txtTutorial.gameObject.SetActive(false);
        //}
        Coins.text =PlayerPrefs.GetInt("Coins").ToString();
        //Debug.Log("Level :" + LevelManager.Instance.Level.no);
        //   AdmobAdsManager.instance.RequestInterstitial();
      //  AdmobAdsManager.instance.ShowBannerAd();
    }

    public void OnClickUndo()
    {
        LevelManager.Instance.OnClickUndo();
    }

    public void OnClickRestart()
    {
        GameManager.LoadGame(new LoadGameData
        {
            Level = LevelManager.Instance.Level,
            GameMode = LevelManager.Instance.GameMode,
        },false);
        AudioClick.Instance.Click_Play();
    }

    public void OnClickSkip()
    {
        //if (!AdsManager.IsVideoAvailable())
        //{
        //    SharedUIManager.PopUpPanel.ShowAsInfo("Notice", "Sorry no video ads available.Check your internet connection!");
        //    return;
        //}

        //SharedUIManager.PopUpPanel.ShowAsConfirmation("Skip Level","Do you want watch Video ads to skip this level", success =>
        //{
        //    if(!success)
        //        return;

        //    AdsManager.ShowVideoAds(true, s =>
        //    {
        //        if(!s)
        //            return;
        //        ResourceManager.CompleteLevel(LevelManager.Instance.GameMode, LevelManager.Instance.Level.no);
        //        UIManager.Instance.LoadNextLevel();
        //    });
          
        //});
    }

    public void OnClickMenu()
    {
     

        SharedUIManager.PausePanel.Show();
        // AdmobAdsManager.instance.ShowInterstitial();
        AudioClick.Instance.Click_Play();
    }

    private void Update()
    {
    }
}