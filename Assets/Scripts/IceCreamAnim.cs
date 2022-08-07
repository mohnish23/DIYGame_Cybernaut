using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Obi;

public class IceCreamAnim : MonoBehaviour
{
    public List<GameObject> l1 = new List<GameObject>();
    public float delay;

    public GameObject Icing;
    public GameObject IcingController;
    public GameObject IcingMenu;

    // Start is called before the first frame update
    void Start()
    {
        for(int i = 0; i < transform.childCount; i++)
        {
            l1.Add(transform.GetChild(i).gameObject);
        }

        StartCoroutine(AnimRoutine());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public IEnumerator AnimRoutine()
    {
        for(int i = 0; i < l1.Count-1; i++)
        {
            if(i%2 == 0)
            {
                yield return null;
                if(i != 0)
                {
                    l1[i - 1].SetActive(false);
                }
                l1[i + 1].SetActive(true);
            }

            if (i == l1.Count - 2)
            {
                Icing.SetActive(true);
                IcingController.SetActive(true);
                IcingMenu.SetActive(true);
                ObiEmitter[] e = FindObjectsOfType<ObiEmitter>();
                foreach(ObiEmitter o in e)
                {
                    o.gameObject.SetActive(false);
                }

                //GameObject.Find("coffediy").transform.GetChild(1).GetComponent<Renderer>().material = GameObject.Find("coffediy").transform.GetChild(0).GetComponent<Renderer>().material;
                //GameObject.Find("coffeecupdst1").SetActive(false);
            }
        }
    }
}
