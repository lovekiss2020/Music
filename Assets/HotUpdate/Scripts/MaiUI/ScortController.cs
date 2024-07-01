using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
namespace MainUiScrip{
public class ScortController : MonoBehaviour
{
    public Button button;
    public GameObject sortObj;
    public GameObject Content;
    public TextMeshProUGUI textMeshPro;

    private bool isSelect = true;
    void Awake()
    {
        button.onClick.AddListener(onClick);
        Animation("<<", "<<<");
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    private void Animation(string s1, string s2)
    {
        DOTween.Kill("qwe");
        Sequence sequence = DOTween.Sequence();
        sequence.AppendCallback(() =>
        {
            textMeshPro.text = s1;
        }).AppendInterval(0.5f).AppendCallback(() =>
        {
            textMeshPro.text = s2;
        }).AppendInterval(0.5f).SetLoops(-1).SetId("qwe");
    }
    private void onClick()
    {
        DOTween.Kill(gameObject);
        Vector3 vector3;
        Vector3 offect;
        if (isSelect)
        {
            vector3 = new Vector3(-221, -460, 0);
            offect = new Vector3(-20, 0, 0);
            textMeshPro.text = ">>";
            Animation(">>", ">>>");
        }
        else
        {
            vector3 = new Vector3(221, -460, 0);
            offect = new Vector3(20, 0, 0);
            textMeshPro.text = "<<";
            Animation("<<", "<<<");

        }
        isSelect = !isSelect;
        Sequence sequence = DOTween.Sequence();
        sequence.Append(sortObj.transform.GetComponent<RectTransform>()
        .DOLocalMove(button.transform.localPosition + vector3 + offect, 0.3f))
        .Append(sortObj.transform.GetComponent<RectTransform>()
        .DOLocalMove(button.transform.localPosition + vector3, 0.1f)).SetId(gameObject);


    }
    private void OnDestroy()
    {
        button.onClick.RemoveAllListeners();
    }
}
}