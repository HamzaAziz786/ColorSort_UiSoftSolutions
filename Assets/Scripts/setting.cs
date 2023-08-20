using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class setting : MonoBehaviour
{
    public Slider music, sound;
    public GameObject settings;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnEnable()
    {
       // AdmobAdsManager.instance.ShowInterstitial();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void music_controll()
    {

        AudioListener.volume = music.value;
    }

    public void sound_controll()
    {

        AudioListener.volume = sound.value;

    }
    public void Cross()
    {
        settings.SetActive(false);
        AudioClick.Instance.Click_Play();
    }
    public void Rateus()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.fungames.color.sort.water.puzzle.game");
    }
    public void Moregames()
    {
        Application.OpenURL("https://play.google.com/store/apps/developer?id=Infinity+Innovators");
    }
    public void Privacylink()
    {
        Application.OpenURL("https://sites.google.com/view/infinityinnovators/home");
    }
    public void Settingon()
    {
        settings.SetActive(true);
        AudioClick.Instance.Click_Play();
    }
}
