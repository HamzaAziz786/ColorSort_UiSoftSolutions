using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Enable_Button : MonoBehaviour
{
    public GameObject rewardbtn;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    private void OnEnable()
    {
       // rewardbtn.GetComponent<Button>().interactable = true;
    }
    public void Disablebtn()
        {
        rewardbtn.gameObject.GetComponent<Button>().interactable = false;
    }
}
