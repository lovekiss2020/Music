using System.Collections;
using System.Collections.Generic;
using RhythmTool;
using UnityEngine;
using UnityEngine.UIElements;
using DG.Tweening;
using UnityEngine.Events;
namespace GameScrip{
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
    //判断该点位是否点击true 表示已经点击
    private bool isOnclick=true;
    //玩家数据
    private float hp=400;

    void Start(){
        creatPlayer();
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
       
        //入队保存入队
        Debug.Log("====>入队");
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
        //取队列元素
        Onset onset= onsetQueue.Peek();
        if(player.time>onset.timestamp){
            //TODO检验是否有屏幕输入

            //TODO 有问题可能出现大量的节点，使用一个变量保存是不现实的。优化
            ScreenClick(onset);
            //出队
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

        //判断上一个序列是否点击，未点击扣血
        if(isOnclick==false){
            //扣血
            changeHp(-3);
        }else{
            isOnclick=false;
        }


    }

    private void changeHp(float hp){
        this.hp+=4*hp;
        if(this.hp>400) this.hp=400;
        if(this.hp<0){
            this.hp=0;
            //TODO 游戏结束
        } 
        uIController.changeHp(this.hp);
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
        float hp=0;
        if(clickTime-onset.timestamp>0.2f){
            //超时游戏失败或者没有分数
            return 0;
        }
        float len=0.2f;
        if(clickTime-onset.timestamp<0.2f){
            //完美特效
            GameObject game=Instantiate(perfectEffectPrefab,block.transform.position,Quaternion.identity);
            game.GetComponent<PerfectEffect>().Init(block.GetComponent<SpriteRenderer>().color);
            uIController.CreatText("完美");
            //加血
            hp+=1.5f*len/(clickTime-onset.timestamp+0.1f);
            changeHp(hp);
            isOnclick=true;
        }else if(clickTime-onset.timestamp<0.2f&&clickTime-onset.timestamp>0.1f){
            //普通分数
            //血量不变
            isOnclick=true;
        }
        Debug.Log("血量变化："+hp);
        //TODO 改变血量

        float score=len/(clickTime-onset.timestamp+0.1f)*100;
        uIController.CreatText((int)score);
        //显示分数,分数越高数字越大。
        return (int)score;

    }

    private void updateCamera(GameObject block,GameObject MainCamera){
        Vector3 vector3=block.transform.position;
       vector3.z=-10;
       MainCamera.transform.position=Vector3.Lerp(MainCamera.transform.position,vector3,0.2f);
    }

}
}