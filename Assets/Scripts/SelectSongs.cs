
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SelectSongs : MonoBehaviour
{
    public Button sleect;
    public TextMeshProUGUI textMeshPro;
    public TMP_Dropdown dropdown;
    public GameObject dropdownObj;

    private bool isSelect = true;


    void Awake()
    {
        sleect.onClick.AddListener(onClick);
        Animation(">>", ">>>");
        dropdown.onValueChanged.AddListener(onValueChanged);
        ES3.Save("songID", dropdown.value);
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    private void onValueChanged(int value)
    {
       ES3.Save("songID",value);
    }


    private void Animation(string s1, string s2)
    {
        DOTween.Kill("qweq");
        Sequence sequence = DOTween.Sequence();
        sequence.AppendCallback(() =>
        {
            textMeshPro.text = s1;
        }).AppendInterval(0.5f).AppendCallback(() =>
        {
            textMeshPro.text = s2;
        }).AppendInterval(0.5f).SetLoops(-1).SetId("qweq");
    }

    private void onClick()
    {
        DOTween.Kill(gameObject);
        Vector3 vector3;
        Vector3 offect;
        if (isSelect)
        {
            vector3 = new Vector3(233, -72, 0);
            offect = new Vector3(20, 0, 0);
            textMeshPro.text = "<<";
            Animation("<<", "<<<");
        }
        else
        {
            vector3 = new Vector3(-240, -72, 0);
            offect = new Vector3(-20, 0, 0);
            textMeshPro.text = ">>";
            Animation(">>", ">>>");
        }
        isSelect = !isSelect;
        Sequence sequence = DOTween.Sequence();
        sequence.Append(dropdownObj.transform.GetComponent<RectTransform>()
        .DOLocalMove(sleect.transform.localPosition + vector3 + offect, 0.3f))
        .Append(dropdownObj.transform.GetComponent<RectTransform>()
        .DOLocalMove(sleect.transform.localPosition + vector3, 0.1f)).SetId(gameObject);


    }

    private void OnDestroy()
    {
        sleect.onClick.RemoveAllListeners();
    }
}
