using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
//using Microsoft.Unity.VisualStudio.Editor;
using UnityEngine.UI;
using System;
using System.Reflection;

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
            if (PlayerPrefs.GetInt("Coins") >= LockBottlesPrice[currentspriteselect] )
            {
                LockBottles[currentspriteselect].gameObject.SetActive(false);
                PlayerPrefs.SetInt("b" + currentspriteselect, 1);
                PlayerPrefs.SetInt("Coins",PlayerPrefs.GetInt("Coins") - LockBottlesPrice[currentspriteselect]);
            }
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

    
}
