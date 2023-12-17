
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using dotmob;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

using UnityEngine.UI;
using DG.Tweening;

public class LevelManager : MonoBehaviour
{
    public static LevelManager Instance { get; private set; }
    public static event Action LevelCompleted;

    [SerializeField] private float _minXDistanceBetweenHolders;
    [SerializeField] private Camera _camera;
    [SerializeField] private Holder _holderPrefab, _addholderprefab;
    public GameObject[] storetube;
    public int addtubenum = 0;
    public int AddTube;
    public int AddHint;
    public int AddUndo;
    
    public int addinttext ;
    public int hinttextnum ;
    public int arratlength = 0;
    public TextMeshProUGUI addtubetext, hinttext, undotext , Restart;
    [SerializeField] private AudioClip _winClip;
    public int comapretube = 0;
    public GameMode GameMode { get; private set; } = GameMode.Easy;

    public Level Level { get; private set; }

    private readonly List<Holder> _holders = new List<Holder>();


    private readonly Stack<MoveData> _undoStack = new Stack<MoveData>();


    public State CurrentState { get; private set; } = State.None;


    public bool HaveUndo => _undoStack.Count > 0;


    public bool IsTransfer { get; set; }

    public bool hintbool;
    public Sprite[] holdersprites;
    public Sprite[] contetnsprites;
    public Image CurrentBackground;
    public Sprite[] BakcgroundsSprites;
    
    public GameObject RewardPanel;
    public GameObject HintVideoIcon;
    public GameObject RestartVideoIcon;
    public GameObject undoVideoIcon;
   
    public bool IsDoUndo=false;
    public Text GamePlayLevelNumber;
    public int HolderSpriteNo;
    public AudioSource Winnignsound;
    public AudioClip[] clips_win;
    public GameObject[] bottombuttons;
    
    private void Awake()
    {
        Instance = this;
        var loadGameData = GameManager.LoadGameData;
        GameMode = loadGameData.GameMode;
        int randomylsprite = UnityEngine.Random.Range(0, BakcgroundsSprites.Length);
       // CurrentBackground.sprite = BakcgroundsSprites[randomylsprite];
        //Level = loadGameData.Level;
        if (PlayerPrefs.GetInt("levellock") == 0)
        {
            PlayerPrefs.SetInt("level", PlayerPrefs.GetInt("level") + 1);
            PlayerPrefs.SetInt("levellock", 1);
        }
       
        if (PlayerPrefs.GetInt("level") < 100)
        {
            Level = ResourceManager.GetLevel(loadGameData.GameMode, PlayerPrefs.GetInt("level"));
        }
        else
        {
            int randoms = UnityEngine.Random.Range(0, 90);
            Level = ResourceManager.GetLevel(loadGameData.GameMode, randoms);
        }
        
        Firebase_Analytics.Instance.LogEvent("Level_Start:" + PlayerPrefs.GetInt("level"));
        LoadLevel();
       
        CurrentState = State.Playing;


    }
    public void ClickSound()
    {
        Winnignsound.PlayOneShot(clips_win[4]);
    }
    private void Start()
    {
        // MyAdmobAds_Manager.Instance.ShowSmallAdmobBanner();

        AdsController.instance.ShowAd(AdType.BANNER, 0);
        GamePlayLevelNumber.text = "Level : "+PlayerPrefs.GetInt("level").ToString();
        //AddTube = PlayerPrefs.GetInt("Tube");
        //AddHint = PlayerPrefs.GetInt("Hints");
        //AddUndo = PlayerPrefs.GetInt("Undo");

        addtubetext.text = PlayerPrefs.GetInt("Tube").ToString();
        hinttext.text = PlayerPrefs.GetInt("Hints").ToString();
        undotext.text = PlayerPrefs.GetInt("Undo").ToString();
        Restart.text = PlayerPrefs.GetInt("Restart").ToString();
        Debug.Log(PlayerPrefs.GetInt("Restart"));
        if (PlayerPrefs.GetInt("Hints")<=0)
        {
            HintVideoIcon.SetActive(true);
        }
        else
        {
            HintVideoIcon.SetActive(false);
        }

        if (PlayerPrefs.GetInt("Undo") <= 0)
        {
            RestartVideoIcon.SetActive(true);
        }
        else
        {
            RestartVideoIcon.SetActive(false);
        }

        if (PlayerPrefs.GetInt("Restart") <= 0)
        {
            undoVideoIcon.SetActive(true);
        }
        else
        {
            undoVideoIcon.SetActive(false);
        }




    }
   

   

  
    public void LoadLevel()
    {

        //if (PlayerPrefs.GetInt("level") <= 10)
        //    HolderSpriteNo = 2;
        //else
        //    HolderSpriteNo = 5 ;

        //HolderSpriteNo = UnityEngine.Random.Range(0, holdersprites.Length);
        HolderSpriteNo = 9;
        if (PlayerPrefs.GetInt("level")<3)
        {
            foreach (var item in bottombuttons)
            {
                item.SetActive(false);
            }
        }
        else if (PlayerPrefs.GetInt("level") >=3)
        {
            foreach (var item in bottombuttons)
            {
                item.SetActive(true);
            }
        }
        if (PlayerPrefs.GetInt("level") % 2 == 0)
        {

            Debug.Log("ITS TWO");
            arratlength = 6;
            _camera.transform.position = new Vector3(0f, 3f, -10f);
        }
        else
        {
            Debug.Log("ITS THREE");

            arratlength = 4;
            _camera.transform.position = new Vector3(0f, 3f, -10f);
        }
        
       
        var list = PositionsForHolders(Level.map.Count, out var width).ToList();
        _camera.orthographicSize = 0.5f * width * Screen.height / Screen.width;

        var levelMap = Level.LiquidDataMap;
        
        for (var i = 0; i < levelMap.Count; i++)
        {
            var levelColumn = levelMap[i];
            var holder = Instantiate(_holderPrefab, list[i], Quaternion.identity);
            holder.transform.GetChild(1).GetComponent<SpriteRenderer>().sprite = holdersprites[HolderSpriteNo];
            holder.transform.GetChild(2).GetComponent<SpriteMask>().sprite = contetnsprites[HolderSpriteNo];
           
              storetube[addtubenum] = holder.gameObject;
            if (addtubenum > 4 && AddTube == 4)
            {

                storetube[addtubenum].gameObject.SetActive(false);

            }
            else if (addtubenum > 6 && AddTube == 2)
            {
                storetube[addtubenum].gameObject.SetActive(false);
            }
            holder.Init(levelColumn);
            _holders.Add(holder);
            addtubenum++;
        }

    }

    public void Tube_Hint()
    {

        if (PlayerPrefs.GetInt("Hints") > 0)
        {
            hintbool = false;
            for (int i = 0; i < arratlength; i++)
            {

                if (storetube[comapretube].gameObject.GetComponent<Holder>().TopLiquid != null && i != comapretube && storetube[i].gameObject.GetComponent<Holder>().TopLiquid != null)
                {
                    //    // Debug.Log("its running top liquid"+  i);
                    // Debug.Log("its running top liquid");
                    if (storetube[comapretube].gameObject.GetComponent<Holder>().TopLiquid.GroupId == storetube[i].gameObject.GetComponent<Holder>().TopLiquid.GroupId && !storetube[i].gameObject.GetComponent<Holder>().IsFull)
                    {
                        storetube[comapretube].gameObject.GetComponent<Animator>().Rebind();
                        storetube[comapretube].gameObject.GetComponent<Animator>().enabled = true;
                        storetube[i].gameObject.GetComponent<Animator>().Rebind();
                        storetube[i].gameObject.GetComponent<Animator>().enabled = true;
                        hintbool = true;
                        //hinttextnum--;
                        PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") - 1);
                        hinttext.text = PlayerPrefs.GetInt("Hints").ToString();
                        if (PlayerPrefs.GetInt("Hints") <= 0)
                        {
                            HintVideoIcon.SetActive(true);
                        }
                        else
                        {
                            HintVideoIcon.SetActive(false);
                        }

                        Debug.Log("its running anim true");
                       

                    }

                }
                if (i == arratlength - 1 && hintbool == false)
                {
                    Debug.Log("its running  match the null tube");


                    Incremethintvalue();
                }

            }









            AudioClick.Instance.Click_Play();


        }
        else
        {
            if (AdsController.instance.admobController.IsRewardedAdLoaded())
            {
                AdsController.instance.LoadingPanel.SetActive(true);
                Invoke(nameof(HintRewardAD), 8f);
            }
            else
            {
                AdsController.instance.LoadingPanel.SetActive(true);
                AdsController.instance.admobController.RequestRewardedAd();
                Invoke(nameof(HintRewardAD), 8f);
            }

        }
        Firebase_Analytics.Instance.LogEvent("Hint_Level_Powerup");
    }

    public void HintRewardAD()
    {
        AdsController.instance.ShowAd(AdNetwork.ADMOB, AdType.REWARDED, HintReward);
    }

    public void HintReward()
    {
        PlayerPrefs.SetInt("Hints", 1);
        hinttext.text = PlayerPrefs.GetInt("Hints").ToString();
        HintVideoIcon.SetActive(false);
        //hinttextnum++;
    }
    public void Incremethintvalue()
    {
        for (int j = 0; j < arratlength; j++)
        {
            if (storetube[j].gameObject.GetComponent<Holder>().TopLiquid == null && storetube[comapretube].gameObject.GetComponent<Holder>().TopLiquid != null)
            {
                Debug.Log("its called null tube");
                storetube[comapretube].gameObject.GetComponent<Animator>().Rebind();
                storetube[comapretube].gameObject.GetComponent<Animator>().enabled = true;
                storetube[j].gameObject.GetComponent<Animator>().Rebind();
                storetube[j].gameObject.GetComponent<Animator>().enabled = true;
                hintbool = true;
                //hinttextnum--;
                //hinttext.text = hinttextnum.ToString();
            }
            if (j == arratlength - 1 && hintbool == false)
            {
                comapretube++;

                if (comapretube == arratlength - 1)
                    comapretube = 0;
                Tube_Hint();
            }

        }



    }

    public void Addtube()
    {



        if (AddTube > 0)
        {


            storetube[addtubenum - AddTube].gameObject.SetActive(true);
            arratlength = arratlength + 1;



            AddTube--;

            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") - 1);

            addtubetext.text = AddTube.ToString();

        }
        else
        {

        }
        //Debug.Log("value of add int" + AddTube);
        //AudioClick.Instance.Click_Play();
        // _camera.transform.position = new Vector3(0f, -0.09f, -10f);
    }

    public void SkipLevel()
    {
       
        if (PlayerPrefs.GetInt("Undo") <=0)
        {

            if (AdsController.instance.admobController.IsRewardedAdLoaded())
            {
                AdsController.instance.LoadingPanel.SetActive(true);
                Invoke(nameof(SkipLevelAd), 8f);
            }
            else
            {
                AdsController.instance.LoadingPanel.SetActive(true);
                AdsController.instance.admobController.RequestRewardedAd();
                Invoke(nameof(SkipLevelAd), 8f);
            }
        }
        else
        {
            PlayerPrefs.SetInt("level", PlayerPrefs.GetInt("level") + 1);
            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") - 1);
            undotext.text = PlayerPrefs.GetInt("Undo").ToString();
            SceneManager.LoadScene(1);
            if (PlayerPrefs.GetInt("Undo") == 0)
            {
                RestartVideoIcon.SetActive(true);
            }
            else
            {
                RestartVideoIcon.SetActive(false);
            }
        }
        Firebase_Analytics.Instance.LogEvent("Skip_Level_Powerup");
        //Reward()
    }
    public void SkipLevelAd()
    {
        AdsController.instance.ShowAd(AdNetwork.ADMOB, AdType.REWARDED, Reward);
    }
    public void Reward()
    {
        PlayerPrefs.SetInt("level", PlayerPrefs.GetInt("level") + 1);
        PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 1);

        SceneManager.LoadScene(1);
    }
    public void OnClickUndo()
    {
        Debug.Log("UNDO :" + _undoStack.Count);
        //if (CurrentState != State.Playing || _undoStack.Count <= 0 || HaveUndo)
        //    return;
        if (PlayerPrefs.GetInt("Undo") < 1 && (CurrentState != State.Playing || _undoStack.Count <= 0))
            return;



        _undoStack.Pop();
    }

    private void Update()
    {
        if (CurrentState != State.Playing)
            return;

        if (Input.GetMouseButtonDown(0))
        {
            var collider = Physics2D.OverlapPoint(_camera.ScreenToWorldPoint(Input.mousePosition));
            if (collider != null)
            {
                var holder = collider.GetComponent<Holder>();

                if (holder != null)

                    OnClickHolder(holder);
               
                //Debug.Log("its clicked");
            }
        }
    }
   
    // ReSharper disable Unity.PerformanceAnalysis
    private void OnClickHolder(Holder holder)
    {
        //if (IsTransfer)
        //    return;

        //Debug.Log("is transfer");

        var pendingHolder = _holders.FirstOrDefault(h => h.IsPending);

        if (pendingHolder != null && pendingHolder != holder)
        {
            if (holder.TopLiquid == null ||
                (pendingHolder.TopLiquid.GroupId == holder.TopLiquid.GroupId && !holder.IsFull))
            {


                IsTransfer = true;
                IsDoUndo = true;
                StartCoroutine(SimpleCoroutine.CoroutineEnumerator(pendingHolder.MoveAndTransferLiquid(holder, CheckAndGameOver), () =>
                {

                    IsTransfer = false;
                    
                }));
                holder.transform.DOScale(1.6f, 0.6f).SetEase(Ease.Linear).SetDelay(.3f);
                holder.transform.DOScale(1.4f, 01f).SetEase(Ease.Linear).SetDelay(.8f);
               
            }
            else
            {
                pendingHolder.ClearPending();
                holder.StartPending();
                Debug.Log("Full");

                holder.transform.DOScale(2f, 0.6f).SetEase(Ease.Linear).SetDelay(.3f);
                holder.transform.DOScale(1.4f, 01f).SetEase(Ease.Linear).SetDelay(.5f);


                //holder.GetComponent<BoxCollider>().isTrigger = true;
            }
        }
        else if (holder.Liquids.Any())
        {
            if (!holder.IsPending)
            {
                holder.StartPending();
               
            }
                
            else
            {
                
                holder.ClearPending();

            }
        }

    }



    private void CheckAndGameOver()
    {





        if (
            _holders.All(holder =>
        {
            var liquids = holder.Liquids.ToList();
            
            return liquids.Count == 0 || liquids.Count == 1;
        })
            &&
        _holders.Where(holder => holder.Liquids.Any()).GroupBy(holder => holder.Liquids.First().GroupId)
            .All(holders => holders.Count() == 1))
        {
            //Debug.Log("Xong 1 chai");
            OverTheGame();
        }


    }

    private void OverTheGame()
    {
        if (CurrentState != State.Playing)
            return;
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 20);
        GamePlayPanel.instance.Coins.text = PlayerPrefs.GetInt("Coins").ToString();
        Debug.Log("Coins" + PlayerPrefs.GetInt("Coins").ToString());
        PlayClipIfCan(_winClip);
        CurrentState = State.Over;
        for (int i = 0; i < storetube.Length; i++)
        {
            if (storetube[i] != null)
            {
                //Destroy(storetube[i]);
                storetube[i].gameObject.SetActive(false);
            }
               
        }
        PlayerPrefs.SetFloat("Pregression", PlayerPrefs.GetFloat("Pregression") + 0.1f);
        StartCoroutine(nameof(RewardSounds));
        RewardPanel.SetActive(true);
        ResourceManager.CompleteLevel(GameMode, Level.no);
        Firebase_Analytics.Instance.LogEvent("Level_Complete:" + PlayerPrefs.GetInt("level"));
        LevelCompleted?.Invoke();
    }
    IEnumerator RewardSounds()
    {
        Winnignsound.PlayOneShot(clips_win[3]);
        yield return new WaitForSeconds(.2f);
        Winnignsound.PlayOneShot(clips_win[0]);
        yield return new WaitForSeconds(.3f);
        Winnignsound.PlayOneShot(clips_win[1]);
        yield return new WaitForSeconds(.6f);
        Winnignsound.PlayOneShot(clips_win[2]);
    }
    private void PlayClipIfCan(AudioClip clip, float volume = 0.35f)
    {
        if (!AudioManager.IsSoundEnable || clip == null)
            return;
        AudioSource.PlayClipAtPoint(clip, Camera.main.transform.position, volume);
    }

    public IEnumerable<Vector2> PositionsForHolders(int count, out float expectWidth)
    {
        expectWidth = 4 * _minXDistanceBetweenHolders;
        if (count <= 6)
        {
            var minPoint = transform.position - ((count - 1) / 2f) * _minXDistanceBetweenHolders * Vector3.right -
                           Vector3.up * 1f;

            expectWidth = Mathf.Max(count * _minXDistanceBetweenHolders, expectWidth);

            return Enumerable.Range(0, count)
                .Select(i => (Vector2)minPoint + i * _minXDistanceBetweenHolders * Vector2.right);
        }

        var aspect = (float)Screen.width / Screen.height;

        var maxCountInRow = Mathf.CeilToInt(count / 2f);

        if ((maxCountInRow + 1) * _minXDistanceBetweenHolders > expectWidth)
        {
            expectWidth = (maxCountInRow + 1) * _minXDistanceBetweenHolders;
        }

        var height = expectWidth / aspect;


        var list = new List<Vector2>();
        var topRowMinPoint = transform.position + Vector3.up * height / 6f -
                             ((maxCountInRow - 1) / 2f) * _minXDistanceBetweenHolders * Vector3.right - Vector3.up * 1f;
        list.AddRange(Enumerable.Range(0, maxCountInRow)
            .Select(i => (Vector2)topRowMinPoint + i * _minXDistanceBetweenHolders * Vector2.right));

        var lowRowMinPoint = transform.position - Vector3.up * height / 6f -
                             (((count - maxCountInRow) - 1) / 2f) * _minXDistanceBetweenHolders * Vector3.right -
                             Vector3.up * 1f;
        list.AddRange(Enumerable.Range(0, count - maxCountInRow)
            .Select(i => (Vector2)lowRowMinPoint + i * _minXDistanceBetweenHolders * Vector2.right));

        return list;
    }


    public enum State
    {
        None,
        Playing,
        Over
    }

    public struct MoveData
    {
        public Holder FromHolder { get; set; }
        public Holder ToHolder { get; set; }
        public Liquid Liquid { get; set; }
    }







    public void UndoLevel()
    {
        if(IsDoUndo)
        {
            IsDoUndo = false;
            if (PlayerPrefs.GetInt("Restart") <= 0)
            {
                if (AdsController.instance.admobController.IsRewardedAdLoaded())
                {
                    AdsController.instance.LoadingPanel.SetActive(true);
                    Invoke(nameof(UndoSkipLevel), 8f);
                }
                else
                {
                    AdsController.instance.LoadingPanel.SetActive(true);
                    AdsController.instance.admobController.RequestRewardedAd();
                    Invoke(nameof(UndoSkipLevel), 8f);
                }

            }
            else
            {
                PlayerPrefs.SetInt("level", PlayerPrefs.GetInt("level"));
                PlayerPrefs.SetInt("Restart", PlayerPrefs.GetInt("Restart") - 1);
                undotext.text = PlayerPrefs.GetInt("Undo").ToString();
                SceneManager.LoadScene(1);
                if (PlayerPrefs.GetInt("Restart") == 0)
                {
                    undoVideoIcon.SetActive(true);
                }
                else
                {
                    undoVideoIcon.SetActive(false);
                }
            }
        }
        Firebase_Analytics.Instance.LogEvent("Undo_Level_Powerup");
        //Reward()
    }
    public void UndoSkipLevel()
    {
        AdsController.instance.ShowAd(AdNetwork.ADMOB, AdType.REWARDED, UndoReward);
    }
    public void UndoReward()
    {
        PlayerPrefs.SetInt("level", PlayerPrefs.GetInt("level") );
        PlayerPrefs.SetInt("Restart", PlayerPrefs.GetInt("Restart") + 1);
        undoVideoIcon.SetActive(false);
        Restart.text = PlayerPrefs.GetInt("Restart").ToString();
        SceneManager.LoadScene(1);
    }














}

[Serializable]
public struct LevelGroup : IEnumerable<Level>
{
    public List<Level> levels;

    public IEnumerator<Level> GetEnumerator()
    {
        return levels?.GetEnumerator() ?? Enumerable.Empty<Level>().GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }
}

[Serializable]
public struct Level
{
    public int no;
    public List<LevelColumn> map;

    public List<IEnumerable<LiquidData>> LiquidDataMap => map.Select(GetLiquidDatas).ToList();

    public static IEnumerable<LiquidData> GetLiquidDatas(LevelColumn column)
    {
        var list = column.ToList();

        for (var j = 0; j < list.Count; j++)
        {
            var currentGroup = list[j];
            var count = 0;
            for (; j < list.Count; j++)
            {
                if (currentGroup == list[j])
                {
                    count++;
                }
                else
                {
                    j--;
                    break;
                }
            }

            yield return new LiquidData
            {
                groupId = currentGroup,
                value = count
            };
        }
    }
}

public struct LiquidData
{
    public int groupId;
    public float value;
}

[Serializable]
public struct LevelColumn : IEnumerable<int>
{
    public List<int> values;

    public IEnumerator<int> GetEnumerator()
    {
        return values?.GetEnumerator() ?? Enumerable.Empty<int>().GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }
}

