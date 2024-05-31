using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

public class BackGroundEffect : MonoBehaviour
{
    public GameObject cavas;
    int hight=Screen.height;
    int width=Screen.width;
    //背景掉落文字
    public List<string> strings;
    public GameObject textPrefab;

    public int textNums;

    private System.Random random=new System.Random();

    // Start is called before the first frame update
    void Start()
    {
        Init();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Init(){
        Sequence sequence=DOTween.Sequence();
        sequence.AppendCallback(()=>{
            creatText();
        }).AppendInterval(0.1f).SetLoops(textNums).SetId(gameObject);
        
    }

    private void creatText(){
        int index=random.Next(0,strings.Count);
        GameObject gameText=Instantiate(textPrefab);
        gameText.name=strings[index];
        gameText.transform.SetParent(cavas.transform);
        gameText.transform.localScale=getRandomScale();
        gameText.transform.GetComponent<RectTransform>().anchoredPosition=getRandomPosition();
        gameText.transform.GetComponent<TextMeshProUGUI>().text=strings[index];
        addSequence(gameText);

    }
    //获取随机位置

    private Vector3 getRandomPosition(){
        int x=random.Next(-width/2,width/2);
        int y=hight/2+30;
        return new Vector3(x,y,0);
    }

    //获取随机缩放

    private Vector3 getRandomScale(){
        int x=random.Next(-8,8);
        return new Vector3(1+x/10,1+x/10,0);//0.2-1.8
    }

    
    //添加动画
    private void addSequence(GameObject gameText){
        Sequence sequence=DOTween.Sequence();
        sequence.Append(gameText.transform.DOLocalMove(gameText.transform.localPosition+new Vector3(0,-hight+random.Next(20,100),0),4f).SetEase(Ease.Linear))
        .Join(gameText.transform.DOLocalRotate(new Vector3(0,0,random.Next(-300,300)),4).SetEase(Ease.Linear)).SetLoops(-1).SetId(gameText);
    }
}
