using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioClick : MonoBehaviour
{

    public AudioSource Click;
    public static AudioClick Instance;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(gameObject.name);
        Instance = this;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Click_Play()
    {
        Click.Play();
    }
}
