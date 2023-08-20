

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

        icon.transform.DOLocalMoveY(0, 1.5f);
        loadingbar.transform.DOScaleX(1, 2)/*.OnComplete(() => loadingpanel.SetActive(false))*/;
        StartCoroutine(nameof(StartScene));

        
    }
    IEnumerator StartScene()
    {
        yield return new WaitForSeconds(3);
        //loadingpanel.SetActive(false);
        GameManager.LoadScene("MainMenu",true,10f);
    }
}