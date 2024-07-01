using System.Collections;
using System.Collections.Generic;
using RhythmTool;
using UnityEngine;
namespace GameScrip{
public class MusicController : MonoBehaviour
{
    public RhythmAnalyzer analyzer;
    public RhythmPlayer player;
    public List<RhythmData> songs;


    void Awake(){
        LoadMusic(ES3.Load<int>("songID"));
        
        analyzer.Initialized+=OnInitialized;
        analyzer.IsDone +=OnDone;
    }
    // Start is called before the first frame update
    void Start()
    {

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
//歌曲被解析时触发的事件
    private void OnInitialized(RhythmData rhythmData){

        //
       
    }
    //资源加载结束时触发的
    private void OnDone(RhythmData rhythmData){
        Debug.Log("==============>资源加载结束");
        //player.Play();

    }


    
    //加载音乐资源并解析
    public void LoadMusic(int index){
        player.rhythmData = songs[index];
        //Invoke("PlayMusic",5);
        player.Play();
    }

    //
    public void PlayMusic(){
        
        player.Play();
    }
    //
    public void StopMusic(){
        player.Stop();
    }

    public void PauseMusic(){
        player.Pause();
    }

    
}
}