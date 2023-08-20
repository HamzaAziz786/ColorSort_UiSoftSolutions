using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.RemoteConfig;
using System;
using System.Threading.Tasks;

[Serializable]
public class RemoteConfigKeys
{
    public string name;
    public string defaultValue;
}
public class FirebaseManagement : MonoBehaviour
{
    public static FirebaseManagement Instance;
    public bool ShowDebugLogs;
    private FirebaseApp app;
    [HideInInspector] public bool isDataFetched = true;
    [Space]
    public RemoteConfigKeys[] remoteConfigKeys;
    [Space]
    protected bool isFirebaseInitialized = false;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
            if (Instance != this)
        {
            Destroy(gameObject);
        }
        DontDestroyOnLoad(gameObject);
    }
    public void Start()
    {
        try
        {
            FireBaseInitilization();
        }
        catch (Exception ex)
        {
            if (ShowDebugLogs)
            {
                Debug.Log("Exception Generated" + ex);
            }
        }
       
    }






    private void FireBaseInitilization()
    {

        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            var dependencyStatus = task.Result;
            if (dependencyStatus ==Firebase.DependencyStatus.Available)
            {
                // Create and hold a reference to your FirebaseApp,
                // where app is a Firebase.FirebaseApp property of your application class.
                app = FirebaseApp.DefaultInstance;

                // Set a flag here to indicate whether Firebase is ready to use by your app.
            }
            else
            {
                Debug.LogError(String.Format(
                  "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }

            Dictionary<string, object> defaults =
            new Dictionary<string, object>();

            //// These are the values that are used if we haven't fetched data from the
            //// server
            //// yet, or if we ask for values that the server doesn't have:

            ////ADEEL
            foreach (RemoteConfigKeys key in remoteConfigKeys)
                defaults.Add(key.name, key.defaultValue);

            FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults);

            Debug.Log("RemoteConfig configured and ready!");
            isFirebaseInitialized = true;

            FetchDataAsync();
        });



        
    }


    //public void DisplayAllKeys()
    //{
    //    IEnumerable<string> keys =
    //         FirebaseRemoteConfig.DefaultInstance.Keys;
    //    foreach (string key in keys)
    //    {
            
    //    }
    //    keys = FirebaseRemoteConfig.DefaultInstance.GetKeysByPrefix("ShowBannerAd");
    //    foreach (string key in keys)
    //    {
    //    }
    //}

    
    public Task FetchDataAsync()
    {
        Debug.Log("Fetching data...");
       
        Task fetchTask = FirebaseRemoteConfig.DefaultInstance.FetchAsync(
            TimeSpan.Zero);
        return fetchTask.ContinueWith(FetchComplete);
    }

    void FetchComplete(Task fetchTask)
    {
        if (fetchTask.IsCanceled)
        {
            Debug.Log("Fetch canceled.");
        }
        else if (fetchTask.IsFaulted)
        {
            Debug.Log("Fetch encountered an error.");
        }
        else if (fetchTask.IsCompleted)
        {
            Debug.Log("Fetch completed successfully!");
        }

        var info = FirebaseRemoteConfig.DefaultInstance.Info;
        switch (info.LastFetchStatus)
        {
            case LastFetchStatus.Success:
                FirebaseRemoteConfig.DefaultInstance.FetchAndActivateAsync();


                isDataFetched = true;
                Debug.Log(String.Format("Remote data loaded and ready (last fetch time {0}).",
                info.FetchTime));
                break;
            case LastFetchStatus.Failure:
                switch (info.LastFetchFailureReason)
                {
                    case FetchFailureReason.Error:
                        Debug.Log("Fetch failed for unknown reason");
                        isDataFetched = false;
                        break;
                    case FetchFailureReason.Throttled:
                        Debug.Log("Fetch throttled until " + info.ThrottledEndTime);
                        break;
                }
                FetchDataAsync();
                break;
            case LastFetchStatus.Pending:
                Debug.Log("Latest Fetch call still pending.");
                break;
        }
    }

}
