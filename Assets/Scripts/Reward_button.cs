using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Reward_button : MonoBehaviour
{
    public Button Adsvideo;
    public static Reward_button Instance;
    public GameObject spin;
    // Start is called before the first frame update
    void Start()
    {
        Instance = this;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Ads_btn_off()
    {


        Adsvideo.gameObject.GetComponent<Button>().interactable = false;
    }
    public void Ads_btn_on()
    {


        Adsvideo.gameObject.GetComponent<Button>().interactable = true;
    }
    public void OnDisable()
    {
        spin.gameObject.GetComponent<rotation>().enabled = false;
    }
}
