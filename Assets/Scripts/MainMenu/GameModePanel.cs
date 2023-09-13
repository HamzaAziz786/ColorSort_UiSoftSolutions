

using UnityEngine;

namespace MainMenu
{
    public class GameModePanel : ShowHidable
    {

        public void OnClickButton()
        {
            Firebase_Analytics.Instance.LogEvent("LevelStart");
            int level = Random.Range(0,3);
            var levelsPanel = UIManager.Instance.LevelsPanel;
            int a = 0; 
            levelsPanel.GameMode = (GameMode)a;
            //levelsPanel.Show();
           levelsPanel.Loadgame();
           
        }

    }
}