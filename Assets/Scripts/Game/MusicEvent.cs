using System.Collections;
using System.Collections.Generic;
using RhythmTool;
using UnityEngine;
using UnityEngine.UIElements;
using DG.Tweening;
using UnityEngine.Events;
public class MusicEvent : MonoBehaviour
{
    public RhythmAnalyzer analyzer;
    public RhythmPlayer player;
    public RhythmEventProvider eventProvider;

    public GameObject MainCamera;

    //玩家
    public GameObject block;
    public List<GameObject> players;

    public GameObject linePrefab;
    public GameObject pointPrefab;

    public UIController uIController;
    public GameObject cavas;

    public GameObject beatPrefab;

    public GameObject perfectEffectPrefab;
    //保存歌曲的音符信息
    private List<Onset> chromaFeatures=new List<Onset>();

    //保存歌曲时间戳队列信息
    private Queue<Onset> onsetQueue = new Queue<Onset>();
    //保存歌曲节奏队列
    private Queue<Beat> beatQueue = new Queue<Beat>();
    private System.Random random= new System.Random();

    private GameObject line;
    private GameObject point;
    private bool init=false;
    void Awake(){
        creatPlayer();
        //注册事件
        analyzer.Initialized+=OnInitialized;
        player.Reset+=OnReset;
        eventProvider.Register<Beat>(OnBeat);
        eventProvider.Register<Onset>(OnOnset);
        eventProvider.Register<Value>(OnSegment, "Segments");
        clickEvent+=Onclick;
    }

    //实例化玩家
    private void creatPlayer(){
        int index=ES3.Load<int>("playerID");
        block=Instantiate(players[index]);
        block.name="player";
    }

    //处理beat的触发事件
    public void OnBeat(Beat beat){
       beatQueue.Enqueue(beat);
    }
    //处理onset的触发事件
    public void OnOnset(Onset onset){
       
        //入队保存
        onsetQueue.Enqueue(onset);
        if(init==false){
            Vector3 vector3=RandomPosition(block,onsetQueue.Peek().timestamp-player.time);
            SetSequence(block,vector3,player.time,onsetQueue.Peek().timestamp);
            init=true;
        }
        
    }

    //处理segment的触发事件
    public void OnSegment(Value segment){

    }
    //关联队列
    private void OnTriggerOnset(RhythmPlayer player,Queue<Onset> onsetQueue){
        if(onsetQueue.Count==0)return;
        Onset onset= onsetQueue.Peek();
        if(player.time>onset.timestamp){
            //TODO检验是否有屏幕输入
            ScreenClick(onset);

            onsetQueue.Dequeue();
            //TODO设置下一个序列。 
            if(onsetQueue.Count>0){
                Vector3 vector3=RandomPosition(block,onsetQueue.Peek().timestamp-player.time);
                SetSequence(block,vector3,player.time,onsetQueue.Peek().timestamp);
            }
        }
    

    }

    private void OnTriggerBeat(RhythmPlayer player,Queue<Beat> beatQueue){
        if(beatQueue.Count==0)return;
        Beat beat= beatQueue.Peek();
        if(player.time>beat.timestamp){
            //TODO播放节奏特效
            Vector3 vector3=MainCamera.GetComponent<Camera>().ScreenToWorldPoint(new Vector3(-771,357,0));
            GameObject game=Instantiate(beatPrefab,vector3,Quaternion.identity,cavas.transform);
            game.transform.localPosition=new Vector3(-771,357,0);
            beatQueue.Dequeue();
        }
    }



    //player的播放时间改变时触发的事件
    private void OnReset(){

    }

    //歌曲被解析时触发的事件
    private void OnInitialized(RhythmData rhythmData){
        player.Play();
       
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }
    //随机一个点位
    private Vector3 RandomPosition(GameObject block,float curtime){
        Vector3 vector3=Vector3.one;
        vector3.z=0;
        vector3.x= random.Next(-20,20);
        vector3.y= random.Next(-20,20);
        vector3=vector3.normalized;
        vector3=vector3*curtime*20;
        vector3.z=0f;
        return new Vector3(block.transform.position.x+vector3.x,block.transform.position.y+vector3.y,vector3.z);
    }
    //设置序列
    private void SetSequence(GameObject block,Vector3 position,float curTime ,float nextTime){
        DOTween.Kill(block);
        Sequence sequence=DOTween.Sequence();
        sequence.Append(block.transform.DOMove(position,nextTime-curTime).SetEase(Ease.Linear)).SetId(block);
        //TODO生成点位以及连线。
        if(point!=null) Destroy(point);

        point=Instantiate(pointPrefab,new Vector3(position.x,position.y,0.002f),Quaternion.identity);
        if(line!=null) Destroy(line);
        Vector3 pos=Vector3.zero;
        pos.z=0.003f;
        line=Instantiate(linePrefab,pos,Quaternion.identity);
        line.GetComponent<LineRenderer>().SetPosition(1,position);
        Color color=new Color(1,1,1,0.1f);
        line.GetComponent<LineRenderer>().material.SetColor("_Color",color);
        UpdateLine(block.transform.position,line);


    }

    //更新连线
    private void UpdateLine(Vector3 position,GameObject line){
        line.GetComponent<LineRenderer>().SetPosition(0,position);
    }

    // Update is called once per frame
    void Update()
    {
        OnTriggerOnset(player,onsetQueue);
        OnTriggerBeat(player,beatQueue); 
        if(line!=null){
            UpdateLine(block.transform.position,line);
        }
        
    }
    void LateUpdate() {
       // MainCamera.transform.position=block.transform.position;

        updateCamera(block,MainCamera);
    }

    //检测是否屏幕点击

    private Onset onset1;
    public UnityAction clickEvent;
    private void ScreenClick(Onset onset){
        onset1=null;
        DOTween.Kill(gameObject);
        onset1=onset;
        Sequence sequence=DOTween.Sequence();
        sequence.AppendInterval(0.2f).AppendCallback(()=>{
            onset1=null;
        }).SetId(gameObject);
           
    }



    private void Onclick(){
        if(onset1==null)return;
        int f=getScore(player.time,onset1);
        uIController.unityAction?.Invoke(f);
        onset1=null;
    }

    
    //获取分数
    /// <summary>
    /// 获取分数
    /// </summary>
    /// <param name="clickTime">点击屏幕时间</param>
    /// <param name="onset">音乐节点出现时间戳</param>
    private int getScore(float clickTime,Onset onset){
        if(clickTime-onset.timestamp>0.2f){
            //超时游戏失败或者没有分数
            return 0;
        }
        float len=0.2f;
        if(clickTime-onset.timestamp<0.1f){
            //TODO 完美特效
            GameObject game=Instantiate(perfectEffectPrefab,block.transform.position,Quaternion.identity);
            game.GetComponent<PerfectEffect>().Init(block.GetComponent<SpriteRenderer>().color);
            uIController.CreatText("完美");
        }
        float score=len/(clickTime-onset.timestamp)*100;
        uIController.CreatText((int)score);
        //TODO 显示分数,分数越高数字越大。
        return (int)score;

    }

    private void updateCamera(GameObject block,GameObject MainCamera){
        Vector3 vector3=block.transform.position;
       vector3.z=-10;
       MainCamera.transform.position=Vector3.Lerp(MainCamera.transform.position,vector3,0.2f);
    }

}
