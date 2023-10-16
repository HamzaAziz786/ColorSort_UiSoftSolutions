using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MainMenu
{
    public class UIManager : MonoBehaviour
    {
        public static UIManager Instance { get; private set; }

        [SerializeField] private LevelsPanel _levelsPanel;
        [SerializeField] private GameModePanel _gameModePanel;
       

        public GameModePanel GameModePanel => _gameModePanel;
        public LevelsPanel LevelsPanel => _levelsPanel;


        private void Awake()
        {
            Instance = this;
           
        }
        private void Start()
        {

            //if (PlayerPrefs.GetInt("FirsttimeGameOpen") < 1)
            //{

            //    PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 4);
            //    PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 2);
            //    PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 3);
            //    PlayerPrefs.SetInt("Restart", PlayerPrefs.GetInt("Restart") + 4);
            //    PlayerPrefs.SetInt("FirsttimeGameOpen", 1);
            //}
        }
    }
}