using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class ColorChange : MonoBehaviour
{
    public Image image;
    public SpriteRenderer spriteRenderer;
    public float _Time;
    private void Awake()
    {
    }
    // Start is called before the first frame update
    void Start()
    {
        if (image != null)
        {
            Sequence sequence = DOTween.Sequence();
            sequence.Append(image.DOColor(new Color(0.65f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.80f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.88f, 0.78f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.88f, 0.63f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.80f, 0.44f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.88f, 0.44f, 0.64f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.88f, 0.44f, 0.77f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.83f, 0.44f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.68f, 0.44f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.52f, 0.44f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.44f, 0.54f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.44f, 0.70f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.44f, 0.88f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.44f, 0.88f, 0.74f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.44f, 0.88f, 0.57f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.48f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(image.DOColor(new Color(0.65f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .SetUpdate(true)
            .SetLoops(-1).SetId("colorChange");
        }
        if(spriteRenderer != null){
            Sequence sequence1 = DOTween.Sequence();
            sequence1
            .Append(spriteRenderer.DOColor(new Color(0.65f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.80f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.88f, 0.78f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.88f, 0.63f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.80f, 0.44f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.88f, 0.44f, 0.64f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.88f, 0.44f, 0.77f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.83f, 0.44f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.68f, 0.44f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.52f, 0.44f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.44f, 0.54f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.44f, 0.70f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.44f, 0.88f, 0.88f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.44f, 0.88f, 0.74f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.44f, 0.88f, 0.57f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.48f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .Append(spriteRenderer.DOColor(new Color(0.65f, 0.88f, 0.44f, 1), _Time).SetEase(Ease.Linear))
            .SetUpdate(true)
            .SetLoops(-1).SetId("colorChange");
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void OnDestroy()
    {
        DOTween.Kill("colorChange");
    }
}
