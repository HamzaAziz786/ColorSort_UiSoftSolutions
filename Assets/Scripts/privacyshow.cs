using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class privacyshow : MonoBehaviour
{
    public GameObject privacypnl/*, menupnl*/;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(PlayerPrefs.GetInt("privacy"));
        if(PlayerPrefs.GetInt("privacy")==0)
        {
            privacypnl.SetActive(true);
            PlayerPrefs.SetInt("privacy", 1);
            //StartCoroutine(nameof(StartScene));
        }
        else
        {

            StartCoroutine(nameof(StartScene));

        }

    }
    IEnumerator StartScene()
    {
        yield return new WaitForSeconds(2);
        //loadingpanel.SetActive(false);
        privacypnl.SetActive(false);
        Splash.instance.loadingpanel.SetActive(false);
        SceneManager.LoadScene("Main");
    }
    // Update is called once per frame
    void Update()
    {

    }
    public void LoadScene()
    {
        privacypnl.SetActive(false);
        Splash.instance.loadingpanel.SetActive(false);
        SceneManager.LoadScene("Main");
    }
    public void PolicyLinkOpen()
    {
        Application.OpenURL("https://sites.google.com/view/infinityinnovators/home");
    }

}



