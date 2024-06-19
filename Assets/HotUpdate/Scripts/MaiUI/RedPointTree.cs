using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;

public class RedPointTree : MonoBehaviour
{

    public GameObject point;
    [SerializeField] private bool notUpworld;
    private RedPointTree redParent;
    private List<RedPointTree> redChilds = new List<RedPointTree>();

    //当前节点状态
    private bool redState = true;
    //红点状态切换时触发的委托
    [SerializeField] UnityAction<bool> redOpenAction;

    //只有当全部子节点为false时，才允许该节点为false;
    public bool RedState
    {
        get { return redState; }
        set
        {
            //只有孩子为0时能直接修改
            if (redChilds.Count == 0)
            {
                redState = value;
                //更新父节点的状态
                if (notUpworld == false && redParent != null)
                {
                    redParent.RedState = redState;
                    Debug.Log(redParent.transform.name);
                }

                redOpenAction(redState);
                return;
            }
            //只有当子节点全部为false 时才允许更改
            if (getChildState(this))
            {
                redState = true;
            }
            else
            {
                redState = value;
            }
            //更新父节点的状态
            if (notUpworld == false && redParent != null)
                redParent.RedState = redState;
            redOpenAction(redState);
            return;
        }


    }


    private bool getChildState(RedPointTree redPointTree)
    {
        if (redPointTree.redChilds.Count == 0)
        {
            return redPointTree.redState;
        }

        foreach (RedPointTree redPoint in redPointTree.redChilds)
        {
            if (getChildState(redPoint)) return true;
        }
        return false;
    }

    private void Awake()
    {
        RefreshTree();
    }


    //刷新节点
    public void RefreshTree()
    {
        redOpenAction += changePoint;
        redParent = GetParentRedPointTree(transform);
        redChilds = getRedChilds();
    }

    private List<RedPointTree> getRedChilds()
    {
        List<RedPointTree> redList = new List<RedPointTree>();
        for (int i = 0; i < transform.childCount; i++)
        {
            if (transform.GetChild(i).GetComponent<RedPointTree>())
            {
                redList.Add(transform.GetChild(i).GetComponent<RedPointTree>());
            }
        }
        return redList;
    }


    private RedPointTree GetParentRedPointTree(Transform trans)
    {
        if (trans.parent == null) return null;
        if (trans.parent.GetComponent<RedPointTree>() == null)
        {
            return GetParentRedPointTree(trans.parent);
        }
        else
        {
            return trans.parent.GetComponent<RedPointTree>();
        }
    }

    private void changePoint(bool state)
    {
        point.SetActive(state);
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
