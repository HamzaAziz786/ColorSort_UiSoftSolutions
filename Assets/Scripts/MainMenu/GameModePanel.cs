

using UnityEngine;

namespace MainMenu
{
    public class GameModePanel : ShowHidable
    {

        public void OnClickButton()
        {
            int level = Random.Range(0,3);
            var levelsPanel = UIManager.Instance.LevelsPanel;
            levelsPanel.GameMode = (GameMode)level;
            //levelsPanel.Show();
           levelsPanel.Loadgame();
           
        }

    }
}