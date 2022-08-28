using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChunkController : MonoBehaviour
{
    public Animator anim;
    public GameObject ChunkObj;
    public bool CanControl;
    public GameObject Icing;
    public Animator InstructionAnim;

    // Start is called before the first frame update
    void Start()
    {
        ChunkObj.SetActive(true);
        anim = gameObject.GetComponent<Animator>();
        anim.enabled = true;
        anim.speed = 0;
        InstructionAnim = GameObject.Find("Instructions").GetComponent<Animator>();
        InstructionAnim.Play("InstructionDragDown");
    }

    // Update is called once per frame
    void Update()
    {
        if(CanControl == true)
        {
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if(touch.phase == TouchPhase.Moved)
                {
                    anim.speed = 1;
                    GameObject.Find("Sounds_Ice").GetComponent<AudioSource>().UnPause();
                }
            }
            else
            {
                anim.speed = 0;
                GameObject.Find("Sounds_Ice").GetComponent<AudioSource>().Pause();
            }
        }
    }

    public void NextPhase()
    {
        this.gameObject.SetActive(false);
        GameObject.Find("blender").GetComponent<Animator>().SetBool("phase2", true);
    }

    public IEnumerator PhaseChange()
    {
        yield return new WaitForSeconds(1.5f);
        this.gameObject.SetActive(false);

        if(FindObjectOfType<GameManager>().isWhippedCreamUnlocked == true)
        {
            Icing.SetActive(true);
        }
        else
        {
            //GameObject.Find("blender").GetComponent<Animator>().SetBool("phase2", true);
            GameObject.Find("SprinkleBase").GetComponent<BoxCollider>().enabled = true;
            GameObject.Find("SprinkleBase").transform.GetChild(0).gameObject.SetActive(true);
            ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
            b.SprinkleMenu.SetActive(true);
        }

        IceCubeController ic = GameObject.FindObjectOfType<IceCubeController>();
        InstructionAnim.Play("Idle");
        ic.Invoke("IceFloat", 1.3f);
    }
}
