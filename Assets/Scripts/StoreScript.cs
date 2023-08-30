using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
//using Microsoft.Unity.VisualStudio.Editor;
using UnityEngine.UI;
using System;
using System.Reflection;
using TMPro;

public class StoreScript : MonoBehaviour
{
    public static StoreScript Instance;
    public GameObject Store;
    public Sprite selectedsprite;
    public Sprite unselectedsprite;
    public Image[] BottlesImages;
    public Image[] WallPaperImages;
    // Start is called before the first frame update

    public static int selectbottlenumber;
    public static int selectwallPapernumber;

    public Image[] LockBottles;
    public Image[] LockBg;
    public int[] LockBottlesPrice;
    public int[] LockBackgorundPrice;
    int currentindexbottle; 
    int currentindexbg;
    public Text coins;



    public GameObject NotificationPanel;
    public Image NotificationPAnelIamge;
    public TMP_Text NotificationPrice;
    public int CoinIndex;
    public Sprite[] notificationbottle;
    public GameObject Flare;
    public void Start()
    {
        Instance = this;
        
    }
    public void OnEnable()
    {
        for (int i = 0; i < LockBottles.Length; i++)
        {
            if(PlayerPrefs.GetInt("b" + i) == 0)
                LockBottles[i].gameObject.SetActive(true);
            else
                LockBottles[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < LockBg.Length; i++)
        {
            if(PlayerPrefs.GetInt("w" + i) == 0)
                LockBg[i].gameObject.SetActive(true);
            else
                LockBg[i].gameObject.SetActive(false);
        }
    }
    public void Storepnl()
    {
        Store.SetActive(true);
        AudioClick.Instance.Click_Play();
         
    }
    public void ShowRewarded(int i)
    {
        AudioClick.Instance.Click_Play();
        PlayerPrefs.SetInt("reward", i);
        if (i != 1)
        {
            
            Store.SetActive(false);
           
     
        }
        else
        {
            Invoke("Waitfor", 3f);


        }
    }

    public void Waitfor()
    {
       // Store.SetActive(false);
       
    }
    public void SelectBottle(int selectbottle)
    {
        currentindexbottle = selectbottle;
       


    }
    public void SelectedSprite(int currentspriteselect)
    {

        if (PlayerPrefs.GetInt("b" + currentspriteselect) == 0)
        {
            CoinIndex = currentspriteselect;
            showNotificationPanel(BottlesImages[currentspriteselect], LockBottlesPrice[currentspriteselect]);
            
        }
        else
        {
            selectbottlenumber = currentindexbottle;
            for (int i = 0; i < BottlesImages.Length; i++)
            {

                BottlesImages[i].sprite = unselectedsprite;
            }
            BottlesImages[currentspriteselect].sprite = selectedsprite;
        }





       
    }



    public void SelectWallPaperSprite(int selectbottle)
    {
        selectwallPapernumber = selectbottle; 


    }
    public void SelectedPapers(int currentspriteselect)
    {
        if (PlayerPrefs.GetInt("b" + currentspriteselect) == 0)
        {
            if (PlayerPrefs.GetInt("Coins") >= LockBackgorundPrice[currentspriteselect])
            {
                LockBg[currentspriteselect].gameObject.SetActive(false);
                PlayerPrefs.SetInt("w" + currentspriteselect, 1);
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - LockBackgorundPrice[currentspriteselect]);
                coins.text = PlayerPrefs.GetInt("Coins").ToString();
            }
        }


        else
        {
            selectwallPapernumber = currentindexbg;


            for (int i = 0; i < WallPaperImages.Length; i++)
            {

                WallPaperImages[i].sprite = unselectedsprite;
            }
            WallPaperImages[currentspriteselect].sprite = selectedsprite;
        }
       
    }

    public void showNotificationPanel(Image giftimage,int PriceCoins)
    {
        NotificationPanel.SetActive(true);

        NotificationPanel.transform.DOScale(1, 0.2f);
        Flare.transform.DORotate(new Vector3(0, 360, 0), 4).SetEase(Ease.InQuad).SetLoops(2, LoopType.Yoyo); 
        NotificationPAnelIamge.sprite = notificationbottle[CoinIndex];
        NotificationPrice.text = PriceCoins.ToString();
    }
    public void CoinsBaseREward()
    {
        if (PlayerPrefs.GetInt("Coins") >= LockBottlesPrice[CoinIndex])
        {
            LockBottles[CoinIndex].gameObject.SetActive(false);
            PlayerPrefs.SetInt("b" + CoinIndex, 1);
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - LockBottlesPrice[CoinIndex]);
            coins.text = PlayerPrefs.GetInt("Coins").ToString();
            ClosePurchasePanel();
        }
        else
        {

        }
    }

    public void RewardedVideoReward()
    {
        MyAdmobAds_Manager.Instance.ShowRewardBasedVideo();
        MyAdmobAds_Manager.ClaimReward += GiveReward;
    }
    public void GiveReward()
    {
        LockBottles[CoinIndex].gameObject.SetActive(false);
        PlayerPrefs.SetInt("b" + CoinIndex, 1);
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - LockBottlesPrice[CoinIndex]);
        coins.text = PlayerPrefs.GetInt("Coins").ToString();
        ClosePurchasePanel();
    }
    public void ClosePurchasePanel()
    {
        NotificationPanel.SetActive(false);
        NotificationPanel.transform.DOScale(0, 0.4f);
    }
}
