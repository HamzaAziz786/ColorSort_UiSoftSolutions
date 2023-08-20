using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class privacyshow : MonoBehaviour
{
    public GameObject privacypnl, menupnl;
    // Start is called before the first frame update
    void Start()
    {
        if(PlayerPrefs.GetInt("privacy")==0)
        {
            privacypnl.SetActive(true);
            PlayerPrefs.SetInt("privacy", 1);
        }
        else
        {
            menupnl.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
