using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Analytics;
public class FirebaseAnaLytics : MonoBehaviour
{
    // Start is called before the first frame update
    private Firebase.FirebaseApp app;
    public static FirebaseAnaLytics instance;

    private void Awake()
    {
        DontDestroyOnLoad(this);
        if(instance==null)
            instance = this;
    }
    void Start()
    {
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            var dependencystatus = task.Result;
            if (dependencystatus == Firebase.DependencyStatus.Available)
            {
                FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
                app = Firebase.FirebaseApp.DefaultInstance;
                Debug.Log("Available");
                StringEvent("Splash");
            }
            else
            {
                UnityEngine.Debug.LogError("Not Available");
            }
        });

    }

    public void StringEvent(string Name)
    {
        Debug.Log(Name);
        FirebaseAnalytics.LogEvent(Name);
    }
    public void LevelsEvent(string Level , string LevelStatus ,  int LevelNumber)
    {
        Debug.Log(Level + LevelStatus+ LevelNumber);
        FirebaseAnalytics.LogEvent(Level, LevelStatus,LevelNumber);
    }
    
}
