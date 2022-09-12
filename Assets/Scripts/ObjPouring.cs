using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ObjPouring : MonoBehaviour
{
    public GameObject PouringObj;
    public Transform SpawnPoint;
    public bool canPour;
    public float touchSpeed = 0.004f;
    public float SpawnTime = 0.2f;
    public GameObject g;
    public Material[] SpawnMats;
    public float ClampPosMinX = -0.3f;
    public float ClampPosMaxX = 0.38f;
    public float ClampPosMinZ = 0.5f;
    public float ClampPosMaxZ = 1.14f;

    // Start is called before the first frame update
    void Start()
    {
        //StartCoroutine(Pour());
        SpawnPoint = transform.Find("SpawnPoint");
        GameObject.Find("Instructions").GetComponent<Animator>().Play("InstructionInfinity");
        if(FindObjectOfType<IceCubeController>() != null)
            FindObjectOfType<IceCubeController>().enabled = false;
        GameObject.Find("ProgressBar").GetComponent<Image>().enabled = false;
        GameObject.Find("ProgressBarFill").GetComponent<Image>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount > 0)
        {
            canPour = true;
            Touch touch = Input.GetTouch(0);
            this.transform.position = new Vector3(transform.position.x + touch.deltaPosition.x * touchSpeed, transform.position.y, transform.position.z + touch.deltaPosition.y * touchSpeed);

            ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
            b.NextButton1.SetActive(true);
            b.NextButton3.SetActive(true);
            GameObject.Find("Sounds_Sprinkles").GetComponent<AudioSource>().UnPause();
        }
        else
        {
            canPour = false;
            GameObject.Find("Sounds_Sprinkles").GetComponent<AudioSource>().Pause();
        }

        transform.position = new Vector3(Mathf.Clamp(transform.position.x, ClampPosMinX, ClampPosMaxX),
            transform.position.y,
            Mathf.Clamp(transform.position.z, ClampPosMinZ, ClampPosMaxZ));
    }

    public void StartPouring()
    {
        StartCoroutine(Pour());
    }

    public IEnumerator Pour()
    {
        while(true)
        {
            yield return new WaitForSeconds(SpawnTime);
            if (canPour == true)
            {
                g = Instantiate(PouringObj, SpawnPoint.position, Quaternion.Euler(Random.Range(0, 360), Random.Range(0, 360), Random.Range(0, 360)));
                if(g.GetComponent<Renderer>() == null)
                {
                    g.GetComponentInChildren<Renderer>().material = SpawnMats[Random.Range(0, SpawnMats.Length)];
                }
            }
        }
    }
}
