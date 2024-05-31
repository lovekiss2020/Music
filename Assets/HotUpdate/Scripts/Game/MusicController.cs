using System.Collections;
using System.Collections.Generic;
using RhythmTool;
using UnityEngine;

public class MusicController : MonoBehaviour
{
    public RhythmAnalyzer analyzer;
    public RhythmPlayer player;
    public List<AudioClip> songs;


    void Awake(){
    }
    // Start is called before the first frame update
    void Start()
    {

        LoadMusic(ES3.Load<int>("songID"));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    //加载音乐资源并解析
    public void LoadMusic(int index){
        AudioClip audioClip = songs[index];
        //解析歌曲
        RhythmData rhythmData = analyzer.Analyze(audioClip, 6);
        //设置player的RhythmData
        player.rhythmData = rhythmData;
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
