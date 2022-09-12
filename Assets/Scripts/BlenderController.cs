using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BlenderController : MonoBehaviour
{
    public Animator anim;
    public Animator CamAnim;
    public Animator BlenderAnim;
    public Animator CupAnim;
    private int CollisionCount;
    public List<GameObject> CollidingObjs = new List<GameObject>();
    public GameObject CuttingObjs;
    public bool Control = false;
    public bool Blend;
    bool loop = true;
    public GameObject pour;
    public GameObject Icing;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        CamAnim = Camera.main.GetComponent<Animator>();
        BlenderAnim = transform.parent.GetComponent<Animator>();
        anim.speed = 0;
        BlenderAnim.speed = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(Control == true)
        {
            GameObject.Find("ProgressBarFill").GetComponent<Image>().fillAmount = BlenderAnim.GetCurrentAnimatorStateInfo(0).normalizedTime / BlenderAnim.GetCurrentAnimatorClipInfo(0).Length;
            GameObject.Find("Sounds_Blender").GetComponent<AudioSource>().Pause();
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if(touch.phase == TouchPhase.Moved)
                {
                    BlenderAnim.speed = 1;
                    CupAnim.speed = 1;
                    pour.SetActive(true);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
                }
            }
            /*else
            {
                BlenderAnim.speed = 0;
                CupAnim.speed = 0;
                pour.SetActive(false);
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
            }*/
        }

        if(Blend == true)
        {
            GameObject.Find("ProgressBarFill").GetComponent<Image>().fillAmount = BlenderAnim.GetCurrentAnimatorStateInfo(0).normalizedTime / BlenderAnim.GetCurrentAnimatorClipInfo(0).Length;
            if (Input.touchCount > 0)
            {
                GameObject.Find("Instructions").GetComponent<Animator>().Play("Idle");
                loop = true;
                GameObject.Find("Sounds_Blender").GetComponent<AudioSource>().UnPause();
            }
            else
            {
                GameObject.Find("Instructions").GetComponent<Animator>().Play("InstructionTapHold");
                loop = false;
                BlenderAnim.speed = 0;
                GameObject.Find("Sounds_Blender").GetComponent<AudioSource>().Pause();
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "MixerObj")
        {
            CollidingObjs.Add(other.gameObject);

            int objLen = GameObject.FindGameObjectsWithTag("MixerObj").Length;
            Debug.Log("Total Objects: " + objLen);
            Debug.Log("Colliding Objects: " + CollidingObjs.Count);
            if (CollidingObjs.Count >= objLen)
            {
                GameObject.Find("Instructions").GetComponent<Animator>().Play("Idle");
                CuttingObjs.SetActive(false);
                CamAnim.SetBool("CamAnim1", true);
                foreach(GameObject g in CollidingObjs)
                {
                    g.transform.parent = this.transform.parent;
                }
                anim.speed = 1;
                StartCoroutine(StrawberryAnim());
                Blend = true;
                GetComponent<Collider>().enabled = false;
            }
        }
    }

    public IEnumerator StrawberryAnim()
    {
        while(true)
        {
            yield return new WaitForSeconds(0.5f);
            if(loop == true)
            {
                BlenderAnim.speed = 1;
                for (int i = 0; i < CollidingObjs.Count; i++)
                {
                    if (CollidingObjs[i].transform.position.y < -0.9f)
                    {
                        CollidingObjs[i].GetComponent<Rigidbody>().AddForce(0, Random.Range(100f, 120f), 0);
                        if (CollidingObjs[i].transform.localScale.x >= 0)
                            CollidingObjs[i].transform.localScale = new Vector3(CollidingObjs[i].transform.localScale.x - 0.1f, CollidingObjs[i].transform.localScale.y - 0.1f, CollidingObjs[i].transform.localScale.z - 0.1f);
                    }
                }
            }
        }
    }

    public void CanControl()
    {
        loop = false;
        BlenderAnim.speed = 0;
        CupAnim.speed = 0;        
        CupAnim.Play("CupFill");
        Control = true;
    }

    public void CantControl()
    {
        //Icing.SetActive(true);
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.FlavorMenu.SetActive(true);
        transform.parent.parent.gameObject.SetActive(false);
        GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
    }

    public void CantControl2()
    {
        transform.parent.parent.gameObject.SetActive(false);
    }
}
