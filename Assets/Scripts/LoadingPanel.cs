using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UIElements.Experimental;
using UnityEngine.SceneManagement;

public class LoadingPanel : ShowHidable {
    public float Speed
    {
        get { return anim.speed; }
        set { anim.speed = value; }
    }
    private void Start()
    {
        if (PlayerPrefs.GetInt("Splash") < 1)
        {
            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 3);
            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 4);
            PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 4);
            PlayerPrefs.SetInt(("Splash"), 1);
        }
    }
}
