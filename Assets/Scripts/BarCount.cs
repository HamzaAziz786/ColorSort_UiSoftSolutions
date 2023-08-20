using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BarCount : MonoBehaviour
{
    public TextMeshProUGUI Count;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void One()
    {
        {
            Count.text = "50".ToString();
        }
    }
    public void Two()
    {
        {
            Count.text = "100".ToString();
        }
    }
    public void Three()
    {
        {
            Count.text = "150".ToString();
        }
    }
}
