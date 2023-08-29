using System.Collections.Generic;
using UnityEngine;
using System;
using GoogleMobileAds.Api;
using UnityEngine.Events;
using Firebase.RemoteConfig;

public class MyAdmobAds_Manager : MonoBehaviour
{
    public static MyAdmobAds_Manager Instance;
    private string appID = "ca-app-pub-4889903564798906~5957674423";
    private string bannerID = "ca-app-pub-4889903564798906/4644592750";
    private string interstitialID = "ca-app-pub-4889903564798906/6279176423";
    private string rewardedVideoID = "ca-app-pub-4889903564798906/1826857722";
    private BannerView smallbannerView;
    private BannerView largebannerView;
    private InterstitialAd interstitial;
    private RewardedAd rewardedAd;
    private bool SmallBannerOnceLoaded;
    private bool LargeBannerOnceLoaded;
    private bool isInternet = false;
    private bool isAdInitialized = false;
    public bool enableTestMode;
    [SerializeField]

    [HideInInspector]
    public string AdFromScene;
    public delegate void ClaimEvent();
    public static ClaimEvent ClaimReward;
    [HideInInspector] public bool RewrdedClam = false;
    public GameObject AdBreak;
    public bool OncOmplete = false;
    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Instance = this;
        DontDestroyOnLoad(this.gameObject);
       // FirebaseAnaLytics.instance.StringEvent("Appopen");
         Screen.sleepTimeout = SleepTimeout.NeverSleep;
        //if (Instance != null)
        //{
        //    Destroy(this.gameObject);
        //}
        //else
        //{
        //    Instance = this;
        //    DontDestroyOnLoad(this.gameObject);
        //}
    }
    private bool CheckInitialization()
    {
        if (isAdInitialized)
        {
            isAdInitialized = true;
            return isAdInitialized;
        }
        else
        {
            isAdInitialized = false;
            InitializeAds();
            return false;
        }

    }
    public bool IsInternetConnection()
    {
        if (Application.internetReachability != NetworkReachability.NotReachable || Application.internetReachability == NetworkReachability.ReachableViaCarrierDataNetwork || Application.internetReachability == NetworkReachability.ReachableViaLocalAreaNetwork)
        {
            isInternet = true;
        }
        else
            isInternet = false;

        return isInternet;
    }
    private void Start()
    {
        //if (enableTestMode)
        //{

        //    bannerID = "ca-app-pub-4889903564798906/4644592750";
        //    interstitialID = "ca-app-pub-4889903564798906/6279176423";
        //    rewardedVideoID = "ca-app-pub-4889903564798906/1826857722";
        //}
        SmallBannerOnceLoaded = false;
        LargeBannerOnceLoaded = false;
        if (IsInternetConnection())
        {
            InitializeAds();
        }
        else
            isAdInitialized = false;
    }
    void InitializeAds()
    {
        isAdInitialized = true;
        try
        {
            // Initialize the Google Mobile Ads SDK.
            MobileAds.Initialize(initStatus => { });

            RequestBanner();
            RequestLargeBanner();
            RequestInterstitial();
            RequestRewardedVideo();
        }
        catch
        {

        }

    }
    public void IntializationOfMediation()
    {
        // Initialize the Mobile Ads SDK.
        MobileAds.Initialize((initStatus) =>
        {
            Dictionary<string, AdapterStatus> map = initStatus.getAdapterStatusMap();
            foreach (KeyValuePair<string, AdapterStatus> keyValuePair in map)
            {
                string className = keyValuePair.Key;
                AdapterStatus status = keyValuePair.Value;
                switch (status.InitializationState)
                {
                    case AdapterState.NotReady:
                        // The adapter initialization did not complete.
                        MonoBehaviour.print("Adapter: " + className + " not ready.");
                        break;
                    case AdapterState.Ready:
                        // The adapter was successfully initialized.
                        MonoBehaviour.print("Adapter: " + className + " is initialized.");
                        break;
                }
            }
        });
    }
    private AdRequest CreateAdRequest()
    {
        return new AdRequest.Builder().Build();
    }
    private void RequestBanner()
    {
        if (PlayerPrefs.GetInt("MyAds").Equals(0))
        {
            if (smallbannerView == null)
            {
                this.smallbannerView = new BannerView(bannerID, AdSize.Banner, AdPosition.TopRight);
                this.smallbannerView.OnAdLoaded += this.HandleAdLoaded;
                this.smallbannerView.LoadAd(this.CreateAdRequest());
            }
        }
    }
    private void RequestLargeBanner()
    {
        if (PlayerPrefs.GetInt("MyAds").Equals(0))
        {
            if (largebannerView == null)
            {
                this.largebannerView = new BannerView(bannerID, AdSize.MediumRectangle, AdPosition.BottomLeft);
                this.largebannerView.OnAdLoaded += this.HandleLargeBannerAdLoaded;
                this.largebannerView.LoadAd(this.CreateAdRequest());
                this.largebannerView.Hide();
            }
        }
    }
    public void ShowSmallAdmobBanner()
    {
        if (PlayerPrefs.GetInt("MyAds").Equals(0))
        {
            if (IsInternetConnection())
            {
                if (CheckInitialization())
                {


                    if (FirebaseManagement.Instance.isDataFetched)
                    {
                        Debug.Log("1");

                        if (FirebaseRemoteConfig.DefaultInstance.GetValue("show_banner").BooleanValue)
                        {
                            Debug.Log("2");

                            if (SmallBannerOnceLoaded)
                            {
                                smallbannerView.Show();
                                smallbannerView.SetPosition(AdPosition.Top);
                            }

                        }

                    }
                    else
                    {
                        Debug.Log("Banner not Show Because Firebasse Config Is Not Allowed");

                    }

                    //if (SmallBannerOnceLoaded)
                    //    smallbannerView.Show();
                }
            }
        }
    }
    public void ShowLargeAdmobBanner()
    {
        largebannerView.Show();
        //if (PlayerPrefs.GetInt("MyAds").Equals(0))
        //{
        //    if (IsInternetConnection())
        //    {
        //        if (CheckInitialization())
        //        {
        //            if (LargeBannerOnceLoaded)
        //                largebannerView.Show();
        //        }
        //    }
        //}
    }

    public void HideSmallAdmobBanner()
    {
        if (PlayerPrefs.GetInt("MyAds").Equals(0))
        {
            if (SmallBannerOnceLoaded && CheckInitialization())
                smallbannerView.Hide();
        }
    }
    public void HideLargeAdmobBanner()
    {
        if (PlayerPrefs.GetInt("MyAds").Equals(0))
        {
            if (LargeBannerOnceLoaded && CheckInitialization())
                largebannerView.Hide();
        }
    }

    private void RequestInterstitial()
    {
        if (PlayerPrefs.GetInt("MyAds").Equals(0))
        {
            // Create an interstitial.
            this.interstitial = new InterstitialAd(interstitialID);
            // Register for ad events.
            this.interstitial.OnAdLoaded += this.HandleInterstitialLoaded;
            this.interstitial.OnAdClosed += this.HandleInterstitialClosed;
            // Load an interstitial ad.
            this.interstitial.LoadAd(this.CreateAdRequest());
        }
    }
    void Intersitiol_admob()
    {
        interstitial.Show();
    }
    GameObject AdBreakPanel;
    public void ShowInterstitial()
    {
        if (PlayerPrefs.GetInt("MyAds").Equals(0))
        {
            if (IsInternetConnection())
            {
                if (CheckInitialization())
                {
                    if (interstitial.IsLoaded())
                    {




                        if (FirebaseManagement.Instance.isDataFetched)
                        {
                            Debug.Log("1");

                            if (FirebaseRemoteConfig.DefaultInstance.GetValue("show_interstitial_panels").BooleanValue)
                            {
                                Debug.Log("2");
                                AdBreakPanel = Instantiate(AdBreak);
                                Invoke(nameof(AdBreakDisable), 4f);
                                // interstitial.Show();
                                Invoke(nameof(Intersitiol_admob), 3f);
                            }
                        }

                    }
                    else
                    {
                        //Unity.ShowAd();
                    }
                }
            }
        }
    }
    void AdBreakDisable()
    {
        Destroy(AdBreakPanel);
    }
    private void RequestRewardedVideo()
    {

        this.rewardedAd = new RewardedAd(rewardedVideoID);

        // Called when an ad request has successfully loaded.
        this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when the ad is closed.
        this.rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
    }
    public void ShowRewardBasedVideo()
    {
        if (IsInternetConnection())
        {
            if (CheckInitialization())
            {

                if (rewardedAd.IsLoaded())
                {
                    rewardedAd.Show();
                   
                    AdBreakPanel = Instantiate(AdBreak);
                    Invoke(nameof(AdBreakDisable), 4f);
                }
                else
                {
                    RequestRewardedVideo();
                    //UnityRewarded.ShowAd();
                }
                //if (!rewardedAd.IsLoaded())
                //    RequestRewardedVideo();
            }
        }

    }
    #region Small Banner callback handlers

    public void HandleAdLoaded(object sender, EventArgs args)
    {

        SmallBannerOnceLoaded = true;
    }
    #endregion

    #region LargeBanner callback handlers

    public void HandleLargeBannerAdLoaded(object sender, EventArgs args)
    {
        if (!LargeBannerOnceLoaded)
            this.largebannerView.Hide();
        LargeBannerOnceLoaded = true;
    }
    #endregion

    #region Interstitial callback handlers

    public void HandleInterstitialLoaded(object sender, EventArgs args)
    {
    }
    public void HandleInterstitialClosed(object sender, EventArgs args)
    {
        RequestInterstitial();
    }
    #endregion


    #region RewardedVideo callback handlers
    public void HandleRewardedAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdLoaded event received");
    }
    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        RequestRewardedVideo();
        ClaimReward();
        //if (RewrdedClam && ClaimReward != null)
        //    ClaimReward();
       
        MonoBehaviour.print("HandleRewardedAdClosed event received");
    }
    public void HandleUserEarnedReward(object sender, Reward args)
    {
         //GiveReward();
        
       
        MonoBehaviour.print(
            "HandleRewardedAdRewarded event received for ");
    }
    #endregion
    
}

