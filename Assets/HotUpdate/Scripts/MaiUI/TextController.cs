using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class TextController : MonoBehaviour
{


    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    private void OnDestroy() {
        DOTween.Kill(gameObject);
    }
}
