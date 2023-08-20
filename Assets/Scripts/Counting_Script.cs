using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class Counting_Script : MonoBehaviour
{
    public int count = 0;
    public TextMeshProUGUI couting;
    bool stopthat;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(Countings());
    }


    public IEnumerator Countings()
    {
        
        while (count >= 0 && stopthat!=true)
        {
            
            count += 3;
            couting.text = count.ToString();
            yield return new WaitForSeconds(0.3f);
            

        }
    }
    public void OnDisablecount()
    {
        stopthat = true;
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
