﻿using System.Collections;
using dotmob;
using UnityEngine;
using UnityEngine.UI;


namespace Game
{
    public class UIManager : MonoBehaviour
    {
        public static UIManager Instance { get; private set; }

        [SerializeField] private LevelCompletePanel _levelCompletePanel;
        //[SerializeField] private TutorialPanel _tutorialPanel;
        [SerializeField] private GameObject _winEffect;

       

        //public static bool IsFirstTime
        //{
        //    get => PrefManager.GetBool(nameof(IsFirstTime), true);
        //    set => PrefManager.SetBool(nameof(IsFirstTime), value);
        //}

        private void Awake()
        {
            Instance = this;
            
        }

        private void OnEnable()
        {
            LevelManager.LevelCompleted += LevelManagerOnLevelCompleted;
        }


        private void OnDisable()
        {
            LevelManager.LevelCompleted -= LevelManagerOnLevelCompleted;
        }

        private void LevelManagerOnLevelCompleted()
        {
            StartCoroutine(LevelCompletedEnumerator());
        }

        private IEnumerator LevelCompletedEnumerator()
        {
           
            yield return new WaitForSeconds(0.2f);
            var point = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width / 2f, Screen.height / 2f)).WithZ(0);
            Instantiate(_winEffect, point, Quaternion.identity);
            yield return new WaitForSeconds(0.5f);
            FirebaseAnaLytics.instance.LevelsEvent("Level_", "Complete_", PlayerPrefs.GetInt("level"));
            _levelCompletePanel.Show();
        }


        public void LoadNextLevel()
        {
            var gameMode = LevelManager.Instance.GameMode;
            var levelNo = LevelManager.Instance.Level.no;
            //if (!ResourceManager.HasLevel(gameMode, levelNo + 1))
            //{
            //    SharedUIManager.PopUpPanel.ShowAsInfo("Congratulations!", "You have successfully completed this Game Mode",
            //        () =>
            //        {
            //            GameManager.LoadScene("MainMenu");
            //        });
            //    return;
            //}
            Debug.Log("call times");
            PlayerPrefs.SetInt("level", PlayerPrefs.GetInt("level") + 1);
            FirebaseAnaLytics.instance.LevelsEvent("Level_", "Start_", PlayerPrefs.GetInt("level"));
            GameManager.LoadGame(new LoadGameData
            {
                //Level = ResourceManager.GetLevel(gameMode, levelNo + 1),
                Level = ResourceManager.GetLevel(gameMode, PlayerPrefs.GetInt("level")),

            GameMode = gameMode
            });
        }
    }
}