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
}
