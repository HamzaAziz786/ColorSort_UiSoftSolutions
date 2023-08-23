using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GiftAwardRoller : MonoBehaviour
{
    public TMP_Text Amount;
    int multiplay = 200;
    int currrentindex;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "2")
        {
            currrentindex = 2;
        }
        else if (collision.gameObject.tag == "3")
        {
            currrentindex = 3;
        }
        else if (collision.gameObject.tag == "5")
        {
            currrentindex = 5;
        }
        Amount.text = (currrentindex * multiplay).ToString();
    }
}
