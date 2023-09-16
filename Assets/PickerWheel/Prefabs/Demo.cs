using UnityEngine;
using EasyUI.PickerWheelUI;
using UnityEngine.UI;
using TMPro;

public class Demo : MonoBehaviour
{
    [SerializeField] private Button uiSpinButton;
    [SerializeField] private TMP_Text uiSpinButtonText;
    [SerializeField] private TMP_Text Label;
    [SerializeField] private TMP_Text Amount;
    [SerializeField] private Button AfterSpinButton;
    string tmplebel;
    [SerializeField] private PickerWheel pickerWheel;
    public GameObject CoinsAnim;

    private void Start()
    {

        uiSpinButton.onClick.AddListener(() =>
        {

            uiSpinButton.gameObject.SetActive(false);
           
            
            

            pickerWheel.OnSpinEnd(wheelPiece =>
            {
                //Debug.Log (
                //   @" <b>Index:</b> " + wheelPiece.Index + "           <b>Label:</b> " + wheelPiece.Label
                //   + "\n <b>Amount:</b> " + wheelPiece.Amount + "      <b>Chance:</b> " + wheelPiece.Chance + "%"
                //) ;
                tmplebel = wheelPiece.Label;
                ShowValue(wheelPiece.Label);

                AfterSpinButton.gameObject.SetActive(true);
                //uiSpinButtonText.text = "Spin" ;

            });

            pickerWheel.Spin();

        });
        AfterSpinButton.onClick.AddListener(() =>
        {
            AfterSpinButton.interactable = false;
            
                if (AdsController.instance.admobController.IsRewardedAdLoaded())
                {
                    AdsController.instance.LoadingPanel.SetActive(true);
                    Invoke(nameof(SpinRewardVideo), 8f);
                }
                else
                {
                    AdsController.instance.LoadingPanel.SetActive(true);
                    AdsController.instance.admobController.RequestRewardedAd();
                    Invoke(nameof(SpinRewardVideo), 8f);
                }
            



        });

    }

    public void SpinRewardVideo()
    {
        AdsController.instance.ShowAd(AdNetwork.ADMOB, AdType.REWARDED, SpinRewardVideo_Given);
    }
    public void SpinRewardVideo_Given()
    {
        AddValue(tmplebel);
        
        uiSpinButton.gameObject.SetActive(true);
        AfterSpinButton.gameObject.SetActive(false);
        AfterSpinButton.interactable = true;
        CoinsAnim.SetActive(true);
    }
    public void AddValue(string Name)
    {
        switch (Name)
        {
            case "25coin":
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 25);
                break;
            case "15gem":
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 15);
                break;
            case "2hint":
                PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 2);
                break;
            case "1gem":
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 1);
                break;
            case "5undo":
                PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 5);
                break;
            case "125coin":
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 125);
                break;
            case "100coin":
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 100);
                break;
            case "50gem":
                PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 50);
                break;
            default:
                break;
        }
    }

    public void ShowValue(string Name)
    {
        switch (Name)
        {
            case "25coin":
                Label.text = "Coins";
                Amount.text = "25";
                break;
            case "15gem":
                Label.text = "Gems";
                Amount.text = "15";
                break;
            case "2hint":
                Label.text = "Hints";
                Amount.text = "2";
                break;
            case "1gem":
                Label.text = "Gem";
                Amount.text = "1";
                break;
            case "5undo":
                Label.text = "Undo";
                Amount.text = "5";
                break;
            case "125coin":
                Label.text = "Coins";
                Amount.text = "125";
                break;
            case "100coin":
                Label.text = "Coins";
                Amount.text = "100";
                break;
            case "50gem":
                Label.text = "Gems";
                Amount.text = "50";
                break;
            default:
                break;
        }
    }

}
