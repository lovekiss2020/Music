using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
namespace MainUiScrip{
public class SelectPlayer : MonoBehaviour
{
    private int offset = 218;
    private Vector3 centerPos = new Vector3(340.9f, -82.11f, 0);
    private Vector3 leftPos = new Vector3(-96.9f, -82.11f, 0);
    private Vector3 rightPos = new Vector3(776.9f, -82.11f, 0);
    private Vector3 offsetVector = new Vector3(218, 0, 0);

    private int index = 2;
    public Button left;
    public Button right;

    public List<GameObject> players;
    // Start is called before the first frame update
    void Start()
    {
        left.onClick.AddListener(playerMoveLeft);
        right.onClick.AddListener(playerMoveReight);
        ES3.Save("playerID", index);

    }

    // Update is called once per frame
    void Update()
    {
        updateScanle();
        updatePosi();
    }


    public void playerMoveLeft()
    {

        index++;
        if (index > 4) index = 0;
        left.interactable = false;
        ES3.Save("playerID", index);
        foreach (GameObject player in players)
        {
            Sequence sequence = DOTween.Sequence();
            sequence.Append(player.transform.DOLocalMove(player.transform.localPosition + offsetVector * -1 + Vector3.left * 20, 0.4f))
            .Append(player.transform.DOLocalMove(player.transform.localPosition + offsetVector * -1, 0.1f))
            .OnComplete(() =>
            {
                left.interactable = true;
            });
        }
    }
    public void playerMoveReight()
    {
        index--;
        if (index < 0) index = 4;
        right.interactable = false;
        ES3.Save("playerID", index);
        foreach (GameObject player in players)
        {
            Sequence sequence = DOTween.Sequence();
            sequence.Append(player.transform.DOLocalMove(player.transform.localPosition + offsetVector + Vector3.right * 20, 0.4f))
            .Append(player.transform.DOLocalMove(player.transform.localPosition + offsetVector, 0.1f))
            .OnComplete(() =>
            {
                right.interactable = true;
            });
        }
    }

    private float getScanle(float x, float y)
    {
        float a = Math.Abs(x - y);
        if (a > 217)
        {

            return 1;
        }
        else
        {

            return (167f + 51f / 218f * (218f - a)) * (1.3f / 218f);
        }

    }


    private void updateScanle()
    {
        foreach (GameObject player in players)
        {
            float scale = getScanle(player.transform.GetComponent<RectTransform>().anchoredPosition.x, centerPos.x);
            player.transform.localScale = new Vector3(scale, scale, scale);
        }
    }


    private void updatePosi()
    {
        foreach (GameObject player in players)
        {
            if (player.transform.GetComponent<RectTransform>().anchoredPosition.x < -96.9f)
            {
                player.transform.GetComponent<RectTransform>().anchoredPosition = rightPos;
            }
            if (player.transform.GetComponent<RectTransform>().anchoredPosition.x > 776.9f)
            {
                player.transform.GetComponent<RectTransform>().anchoredPosition = leftPos;
            }
        }
    }
}
}