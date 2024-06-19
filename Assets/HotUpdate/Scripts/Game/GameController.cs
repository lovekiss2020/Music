using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    

    public GraphicRaycaster graphicRaycaster;
    public MusicController musicController;
    public Button wait;
    public Button con;
    public Button exit;

    // Start is called before the first frame update
    void Start()
    {
        wait.onClick.AddListener(waitClick);
        con.onClick.AddListener(conClick);
        exit.onClick.AddListener(exitClick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void waitClick()
    {
        Time.timeScale = 0f;
        musicController.PauseMusic();
        graphicRaycaster.enabled = false;
    }

    public void conClick(){
        Time.timeScale = 1f;
        musicController.PlayMusic();
        graphicRaycaster.enabled = true;
    }

    public void exitClick(){
        Time.timeScale = 1f;
        SceneManager.LoadScene("MainUI");
    }
}
