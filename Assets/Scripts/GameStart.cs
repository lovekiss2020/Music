using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameStart : MonoBehaviour
{
    public Button statrGame;
    // Start is called before the first frame update
    void Start()
    {
        statrGame.onClick.AddListener(startGame);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void startGame(){
        SceneManager.LoadScene("Game");
    }
}
