using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OnClickEffect : MonoBehaviour
{
    public List<Image> sprites;
    public List<Sprite> asses;

    private void Awake() {

        for (int i = 0; i < sprites.Count; i++) {
            sprites[i].sprite = asses[ES3.Load<int>("playerID")];
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void over(){
        Destroy(gameObject.transform.parent.gameObject);
    }
}
