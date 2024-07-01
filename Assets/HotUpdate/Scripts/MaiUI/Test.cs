using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace MainUiScrip
{
    public class Test : MonoBehaviour
    {
        public Button button;

        private void Awake()
        {
            button.onClick.AddListener(Change);
        }

        void Change()
        {
            GetComponent<RedPointTree>().RedState = !GetComponent<RedPointTree>().RedState;
        }
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}