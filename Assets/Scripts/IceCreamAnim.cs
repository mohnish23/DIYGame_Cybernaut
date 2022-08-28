using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using Obi;

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
                    l1[i - 1].GetComponent<MeshRenderer>().enabled = false;
                }
                l1[i + 1].GetComponent<MeshRenderer>().enabled = true;
                Transform t = Icing.GetComponent<Transform>();
                if(i < 117)
                {
                    t.eulerAngles = new Vector3(t.eulerAngles.x, t.eulerAngles.y - 5f, t.eulerAngles.z);
                }
                else if(i >= 117 && i < 177)
                {
                    t.eulerAngles = new Vector3(t.eulerAngles.x, t.eulerAngles.y - 7.5f, t.eulerAngles.z);
                }
                else if(i >= 177 && i < 220)
                {
                    t.eulerAngles = new Vector3(t.eulerAngles.x, t.eulerAngles.y - 7.8f, t.eulerAngles.z);
                }
                else
                {
                    t.eulerAngles = new Vector3(t.eulerAngles.x, t.eulerAngles.y - 8f, t.eulerAngles.z);
                }
            }

            if (i == l1.Count - 2)
            {
                //GameObject.Find("blender").GetComponent<Animator>().SetBool("phase2", true);

                transform.parent.GetComponent<Animator>().Play("IcingMachineOut");
                yield return new WaitForSeconds(2f);
                transform.parent = FindObjectOfType<ButtonController>().CoffeeCup.transform;

                //IcingMenu.SetActive(true);

                /*ObiEmitter[] e = FindObjectsOfType<ObiEmitter>();
                foreach(ObiEmitter o in e)
                {
                    o.gameObject.SetActive(false);
                }*/

                //GameObject.Find("coffediy").transform.GetChild(1).GetComponent<Renderer>().material = GameObject.Find("coffediy").transform.GetChild(0).GetComponent<Renderer>().material;
                //GameObject.Find("coffeecupdst1").SetActive(false);
            }
        }
    }
}
