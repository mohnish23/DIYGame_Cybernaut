using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SyrupController : MonoBehaviour
{
    public Animator CupAnim;
    public Animator SyrupAnim;
    
    bool phase1 = true;

    // Start is called before the first frame update
    void Start()
    {
        SyrupAnim = GetComponent<Animator>();
        SyrupAnim.enabled = true;
        CupAnim.enabled = true;
        CupAnim.speed = 0;
        SyrupAnim.speed = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(phase1 == true)
        {
            if(Input.touchCount > 0)
            {
                CupAnim.speed = 1;
                SyrupAnim.speed = 1;
            }
            else
            {
                CupAnim.speed = 0;
                SyrupAnim.speed = 0;            
            }
        }
    }

    public void NextPhase()
    {
        phase1 = false;
        this.gameObject.SetActive(false);
        GameObject.Find("blender").GetComponent<Animator>().SetBool("phase2", true);
    }
}
