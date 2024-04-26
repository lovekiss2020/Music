using System.Collections;
using System.Collections.Generic;
using System.Text;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class UIController : MonoBehaviour
{
    public TextMeshProUGUI textTime;
    public TextMeshProUGUI scoreStr;
    public MusicEvent musicEvent;

    public UnityAction<int> unityAction;

    public GameObject textPrefab;
    public Camera mainCamera;

    public GameObject onClickEffectprefab;
    
    public LineRenderer hp;

    private int score=0;

    // Start is called before the first frame update


    public void changeHp(float hp){

        this.hp.SetPosition(0,new Vector3(hp,0,0));
        this.hp.SetPosition(1,new Vector3(-hp,0,0));
    }
    void Awake(){
        unityAction+=UpdateScore;
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        textTime.text=getTimeStr(musicEvent.player.time);

    }

    //获取格式化时间
    public string getTimeStr(float time)
    {
        StringBuilder f;
        StringBuilder m;
        StringBuilder s=new StringBuilder("时间：");
        int times = (int)time;
        long ff = times / 60;
        if (ff < 10)
        {
            f = new StringBuilder("0" + ff.ToString());
        }
        else
        {
            f = new StringBuilder(ff.ToString());
        }
        long mm = times - 60 * ff;
        if (mm < 10)
        {
            m = new StringBuilder("0" + mm.ToString());
        }
        else
        {
            m = new StringBuilder(mm.ToString());
        }
        return s+""+f + ":" + m;
    }

    private void UpdateScore(int score){
        this.score+=score;
        //TODO 分数渐变
        scoreStr.text="分数："+this.score.ToString();
    }


    //监听点击事件
    public void Trigger(){
        musicEvent.clickEvent?.Invoke();
        //创建点击特效
        Vector2 vector3;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(transform.parent.GetComponent<RectTransform>(), Input.mousePosition, mainCamera, out vector3);
        GameObject game=Instantiate(onClickEffectprefab,vector3,Quaternion.identity,transform.parent);
        game.transform.GetComponent<RectTransform>().anchoredPosition=new Vector3(vector3.x,vector3.y);

    }

    //监听鼠标按下并获取鼠标位置
    //分数数字
    public void CreatText(int score){
        Vector3 vector3=mainCamera.WorldToScreenPoint(musicEvent.block.transform.position);
        GameObject text=Instantiate(textPrefab,new Vector3(vector3.x,vector3.y,0),Quaternion.identity,transform);
        text.transform.localPosition=new Vector3(100,0,0);
        text.GetComponent<TextMeshProUGUI>().text=score.ToString();
        text.transform.localScale=Vector3.one*0.5f;
        Sequence sequence=DOTween.Sequence();
        sequence.Append(text.transform.DOScale(Vector3.one*1.5f,0.1f).SetEase(Ease.Linear)).Join(text.transform.DOMove(text.transform.position+new Vector3(0,5,0),0.1f).SetEase(Ease.Linear)).AppendInterval(0.2f).OnComplete(()=>{
            Destroy(text);
        }).SetId(gameObject);
    }
    //文字
    public void CreatText(string str){
        Vector3 vector3=mainCamera.WorldToScreenPoint(musicEvent.block.transform.position);
        GameObject text=Instantiate(textPrefab,new Vector3(vector3.x,vector3.y,0),Quaternion.identity,transform);
        text.transform.localPosition=new Vector3(-100,0,0);
        text.GetComponent<TextMeshProUGUI>().text=str;
        text.transform.localScale=Vector3.one*0.5f;
        text.GetComponent<TextMeshProUGUI>().color = new Color(0.8396226f,0.2869447f, 0.1465379f, 1);
        Sequence sequence=DOTween.Sequence();
        sequence.Append(text.transform.DOScale(Vector3.one*1.5f,0.1f).SetEase(Ease.Linear)).Join(text.transform.DOMove(text.transform.position+new Vector3(0,4,0),0.1f).SetEase(Ease.Linear)).AppendInterval(0.2f).OnComplete(()=>{
            Destroy(text);
        }).SetId(gameObject);
    }
}
