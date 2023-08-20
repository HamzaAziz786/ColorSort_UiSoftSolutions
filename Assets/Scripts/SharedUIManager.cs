using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SharedUIManager : Singleton<SharedUIManager>
{

    [SerializeField] private LoadingPanel _loadingPanel;
    [SerializeField] private LoadingPanel _loadingPanelHamza;

    [SerializeField] private PausePanel _pausePanel;
    public GameObject Noads;
   

   
    public static LoadingPanel LoadingPanel => Instance?._loadingPanel;

    

    public static PausePanel PausePanel => Instance?._pausePanel;
}


