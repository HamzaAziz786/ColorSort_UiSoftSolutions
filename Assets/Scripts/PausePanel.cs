using System.Collections;
using System.Collections.Generic;
using dotmob;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PausePanel : ShowHidable
{
    [SerializeField] private Button _removeAdsBtn;
    [SerializeField] private Button _menuBtn;
    [SerializeField] private Button _restorePurchaseBtn;


    private void Awake()
    {

    }

    public void Start()
    {
        
    }
   
    public void OnClickCloseButton()
    {
        SharedUIManager.PausePanel.Hide();
        AudioClick.Instance.Click_Play();
        //AdmobAdsManager.instance.ShowInterstitial();
    }

    public void OnClickMenuButton()
    {
        SharedUIManager.PausePanel.Hide();
        AudioClick.Instance.Click_Play();
        GameManager.LoadScene("MainMenu");
       
    }

    public void OnClickRemoveAds()
    {

    }

public void OnClickRestore()
    {
        SharedUIManager.PausePanel.Hide();
        SceneManager.LoadScene(2);
    }


    public void NoAds()
    {
        SharedUIManager.Instance.Noads.gameObject.SetActive(true);
        AudioClick.Instance.Click_Play();
    }

    


}
