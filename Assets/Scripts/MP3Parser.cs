using UnityEngine;

public class MP3Parser : MonoBehaviour
{
    public string mp3FilePath; // MP3文件路径
    public string savePath; // 保存AudioClip的路径

    void Start()
    {
        // 从指定路径加载MP3文件为字节数据
        byte[] mp3Data = System.IO.File.ReadAllBytes(mp3FilePath);

        // // 创建一个新的AudioClip，并加载MP3数据
        // AudioClip audioClip = NAudio.WavFileReader.ToAudioClip(mp3Data, mp3FilePath);

        // // 将AudioClip保存为WAV格式
        // SavWav.Save(savePath, audioClip);
    }
}
