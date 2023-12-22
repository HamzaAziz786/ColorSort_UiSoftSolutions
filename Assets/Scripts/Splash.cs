

using System;
using System.Collections;
using dotmob;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using UnityEngine.UI;

public class Splash : MonoBehaviour
{
    public Image icon;
    public Image loadingbar;
    public GameObject loadingpanel;
    public static Splash instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    private void Start()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        Firebase_Analytics.Instance.LogEvent("Splash_Screen");

        if (PlayerPrefs.GetInt("FirsttimeGameOpen") < 1)
        {

            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 3);
            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 2);
            PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 2);
            PlayerPrefs.SetInt("Restart", PlayerPrefs.GetInt("Restart") + 2);
            PlayerPrefs.SetInt("FirsttimeGameOpen", 1);
        }

        icon.transform.DOLocalMoveY(0, 1.5f);
        loadingbar.transform.DOScaleX(1, 2)/*.OnComplete(() => loadingpanel.SetActive(false))*/;
        //if (PlayerPrefs.GetInt("FirsttimeGameOpen") >= 1)
        //    StartCoroutine(nameof(StartScene));
      
        
    }
    IEnumerator StartScene()
    {
        yield return new WaitForSeconds(3);
        //loadingpanel.SetActive(false);

        GameManager.LoadScene("Main",true,10f);
    }
}