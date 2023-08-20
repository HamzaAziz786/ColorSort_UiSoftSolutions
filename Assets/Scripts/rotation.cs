using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotation : MonoBehaviour
{
    public float valuerotate;
    public bool stopthat;
    // Start is called before the first frame update
    void Start()
    {
         
    }

    // Update is called once per frame
    void Update()
    {
        if(stopthat)
        this.gameObject.transform.Rotate(new Vector3(0, 0, valuerotate));
    }
    public IEnumerator Spineron()
    {
        stopthat = true;
        yield return new WaitForSeconds(2f);
        stopthat = false;

    }
    public void callspinner()
    {
        
        StartCoroutine(Spineron());

    }
}
