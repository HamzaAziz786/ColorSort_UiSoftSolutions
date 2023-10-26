using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

using DG.Tweening;


namespace MainMenu
{
  
    public class MenuPanel : MonoBehaviour
    {//4790 6530
        public GameObject[] bottomsbuttons;
        public GameObject[] Panels;
        public GameObject content;
        public Text coins,diamonds;
       public TextMeshProUGUI SpinTime, pigtime;
        public TextMeshProUGUI levels;
        public static MenuPanel Instance;
        public float sec = 60f;
        public int mins=60, hours=24;
       
        public GameObject UnlockAllBottlesObg;
        public GameObject WatchBtn, Txt;
        public void OnClickPlay()
        {

            UIManager.Instance.GameModePanel.Show();
            AudioClick.Instance.Click_Play();

        }


        public void Update()
        {
            sec -= Time.deltaTime;
            int intsec = (int)sec;
            //   timerrem.text = sec.ToString("0");
            SpinTime.text = string.Format("{0} {1} {2}", hours, mins, intsec).ToString();
            pigtime.text = string.Format("{0} {1} {2}", hours, mins, intsec).ToString();
            if (intsec == 0)
            {
                mins--;
                sec = 60;
                Debug.Log("sec hain" + sec);

            }
            if (mins == 0)
            {
                hours--;
                mins = 60;

            }
            if(mins==10)
            {
                Reward_button.Instance.Ads_btn_on();

            }

            if (hours == 0)
            {
                hours = 24;
            }
           
        }
        public void Start()
        {
            Instance = this;
          
            levels.text = PlayerPrefs.GetInt("level").ToString();
            //if (PlayerPrefs.GetInt("level") % 2 == 0)
            //{
            //    StartCoroutine(InitReview());
            //}
            // StartCoroutine(TimerSec());
            CoinsUpdate();
            
           

        }
        public void  CoinsUpdate()
        {
            coins.text = PlayerPrefs.GetInt("Coins").ToString();
            diamonds.text= PlayerPrefs.GetInt("Diamonds").ToString();

        }
        //public IEnumerator TimerSec()
        //{
        //    while (timeremiaing >= 0)
        //    {
        //        timeremiaing -= Time.deltaTime;
        //        // timeremiaing=Mathf.FloorToInt(timeremiaing );
        //        // double b = System.Math.Round(timeremiaing, 2);
        //        trm.text = timeremiaing.ToString();
        //        term.text = timeremiaing.ToString();
        //        yield return new WaitForSeconds(0.3f);
        //    }
        //     //   TimerSec();
        //}
        public void No_Ads()
        {

            SharedUIManager.Instance.Noads.gameObject.SetActive(true);
            AudioClick.Instance.Click_Play();
        }
        public void Show_Ad()
        {
            
        }
        public void Show_Instertial()
        {
           // AdmobAdsManager.instance.ShowInterstitial();
        }

        public void CurrentSelected(int currentselect)
        {
            for (int i = 0; i < bottomsbuttons.Length; i++)
            {
                bottomsbuttons[i].transform.DOScale(1, .5f);
                //Panels[i].transform.DOScale(0, .1f);
            }

            bottomsbuttons[currentselect].transform.DOScale(1.2f, .5f);
            Panels[currentselect].SetActive(true);
            Panels[currentselect].transform.DOScale(0, 0);
            Panels[currentselect].transform.DOScale(1, .5f)/*.SetEase(Ease.InOutBounce)*/;
            if (currentselect == 3)
            {
                content.transform.DOLocalMoveY(0, 1f);
            }
        }

        public void SelectCoinDiamond(int index)
        {
            if (index == 0)
            {
                content.transform.DOLocalMoveY(4790, 1f);
            }
            if (index == 1)
            {
                content.transform.DOLocalMoveY(6530, 1f);
            }
        }
        public void Buy_PremiumPackage()
        {
            ////Purchaser.instance.PremiumPackage();
            UpdateText();
        }
        public void Buy_LegendaryPackage()
        {
            ////Purchaser.instance.LegendaryPackage();
            UpdateText();
        }
        public void Buy_GiantPackage()
        {
            //Purchaser.instance.GiantPackage();
            UpdateText();
        }
        public void Buy_MasterPackage()
        {
            //Purchaser.instance.MasterBundle();
            UpdateText();
        }
        public void Buy_SuperPackage()
        {
            //Purchaser.instance.SuperBundle();
            UpdateText();
        }
        public void Buy_DiamondFirstPacakge()
        {
            //Purchaser.instance.Diamonds_1st();
            UpdateText();
        }
        public void Buy_DiamondSecondPacakge()
        {
            //Purchaser.instance.Diamonds_2nd();
            UpdateText();
        }
        public void Buy_DiamondThirdPackage()
        {
            //Purchaser.instance.Diamonds_3rd();
            UpdateText();
        }
        public void Buy_DiamondFourthPackage()
        {
            //Purchaser.instance.Diamonds_4th();
            UpdateText();
        }
        public void Buy_DiamondFiFthPackage()
        {
            //Purchaser.instance.Diamonds_5th();
            UpdateText();
        }
        
        public void PurchaseCoins_First()
        {
            if(PlayerPrefs.GetInt("Diamonds")>=200)
            {
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 2500);
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") - 200);
                UpdateText();
            }
        }
        public void PurchaseCoins_Second()
        {
            if (PlayerPrefs.GetInt("Diamonds") >= 300)
            {
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 3500);
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") - 300);
                UpdateText();
            }
            
        }
        public void PurchaseCoins_Third()
        {
            if (PlayerPrefs.GetInt("Diamonds") >= 400)
            {
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 4500);
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") - 400);
                UpdateText();
            }
            //4500 coin      :    400 Gems
        }


        public void PurchaseFirst_Powerup()
        {
            if(PlayerPrefs.GetInt("Diamonds") >= 1000)
            {
                PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 150);
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") - 1000);

                UpdateText();
            }
        }
        public void PurchaseSecond_Powerup()
        {
            if (PlayerPrefs.GetInt("Diamonds") >= 1500)
            {
                PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 150);
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") - 1500);


                UpdateText();
            }
        }
        public void PurchaseThird_Powerup()
        {
            if (PlayerPrefs.GetInt("Diamonds") >= 2000)
            {
                PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 150);
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") - 2000);
                UpdateText();
            }
        }
        public void UpdateText()
        {
            coins.text = PlayerPrefs.GetInt("Coins").ToString();
            diamonds.text = PlayerPrefs.GetInt("Diamonds").ToString();
        }





      

        public void UnlockAllBottles()
        {
            UnlockAllBottlesObg.SetActive(true);

            UnlockAllBottlesObg.transform.DOScale(1, 0.2f);
        }
        public void UnlockBottlesVideoBtn()
        {
            

        }

        public void Reward()
        {
           
        }



        public void GiveReward()
        {
            for (int i = 0; i < 10; i++)
            {
                PlayerPrefs.SetInt("b" + i, 1);
            }

            WatchBtn.gameObject.SetActive(false);
            Txt.gameObject.SetActive(true);
            //ClosePurchasePanel();
        }
        public void ClosePurchasePanel()
        {
            UnlockAllBottlesObg.SetActive(false);
            UnlockAllBottlesObg.transform.DOScale(0, 0.4f);
        }
    }
}