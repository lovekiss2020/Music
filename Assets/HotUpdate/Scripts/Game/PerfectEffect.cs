using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class PerfectEffect : MonoBehaviour
{
    public List<GameObject> effects;
    private System.Random random= new System.Random();



    private void Awake() {
        
    }

    // Start is called before the first frame update
    void Start()
    {
        
        
    }

    public void Init(Color color){
        for(int i=0; i<effects.Count; i++){
            AddSequence(effects[i],color);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void AddSequence(GameObject effect,Color color){
        int scale=random.Next(-100,100 );
        effect.transform.localRotation=Quaternion.Euler(new Vector3(0,0,scale));
        SpriteRenderer spriteRenderer=effect.transform.GetComponent<SpriteRenderer>();
        //spriteRenderer.color=color;
        Sequence sequence=DOTween.Sequence();
        sequence
        .Append(effect.transform.DOScaleY(0,0.2f).SetEase(Ease.Linear)).OnComplete(()=>{
            Destroy(gameObject);
        });
    }
}
