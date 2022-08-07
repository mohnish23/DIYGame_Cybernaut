using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IceCubeController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void IceFloat()
    {
        GameObject[] g = GameObject.FindGameObjectsWithTag("Chunk");
        foreach(GameObject o in g)
        {
            o.GetComponent<Rigidbody>().useGravity = false;
        }
        
        Invoke("IceFreeze", 4f);
    }

    public void IceFreeze()
    {
        if (GameObject.Find("BobaController") == null && FindObjectOfType<ObjPouring>() == null)
        {
            GameObject[] g = GameObject.FindGameObjectsWithTag("Chunk");
            foreach (GameObject o in g)
            {
                o.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePosition;
            }
            Invoke("IceFreeze2", 1f);
        }
    }

    public void IceFreeze2()
    {
        if(GameObject.Find("BobaController") == null && FindObjectOfType<ObjPouring>() == null)
        {
            GameObject[] g = GameObject.FindGameObjectsWithTag("Chunk");
            foreach (GameObject o in g)
            {
                o.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
            }
        }

        this.enabled = false;
    }
}
