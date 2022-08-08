using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BobaController : MonoBehaviour
{
    public bool phase2;
    public bool phase3;
    public bool canControl;
    public Animator ScoopAnim;
    public GameObject MilkPour;
    public GameObject Liquid;
    public Animator CupAnim;
    public GameObject pour;
    public float speed = 0;
    public GameObject ObjectPourMenu;
    public GameObject ObjectPourSurface;
    public GameObject ObjPourer;

    void Start()
    {
        ScoopAnim.speed = 0;
        ObjectPourMenu = FindObjectOfType<ButtonController>().SprinkleMenu;
    }

    // Update is called once per frame
    void Update()
    {
        if(phase3 == true)
        {
            //ObjectPourSurface.SetActive(true);
            GameObject.Find("SprinkleBase").GetComponent<BoxCollider>().enabled = true;
            GameObject.Find("SprinkleBase").transform.GetChild(0).gameObject.SetActive(true);
            ObjectPourMenu.SetActive(true);
        }
        else if (phase2 == true)
        {
            MilkPour.SetActive(true);
            Material m = Liquid.GetComponent<Renderer>().material;
            float h;
            float s;
            float v;
            Color.RGBToHSV(m.GetVector("_Colour"), out h, out s, out v);
            m.SetVector("_Colour", Color.HSVToRGB(h, Mathf.Lerp(s, 0.34f, speed), Mathf.Lerp(v, 0.8f, speed)));
            CupAnim.Play("CupFill 2");

            if (Input.touchCount > 0)
            {
                speed = Time.deltaTime * 2;
                CupAnim.speed = 1;
                pour.SetActive(true);
            }
            else
            {
                speed = 0;
                CupAnim.speed = 0;
                pour.SetActive(false);
            }
        }
        else
        {
            if (canControl == true)
            {
                if (Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);
                    if(touch.phase == TouchPhase.Moved)
                        ScoopAnim.speed = 1;
                }
            }
        }
    }

    public void BobaNextButton()
    {
        //ObjectPourMenu.SetActive(false);
        phase3 = false;
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.FlavorNext4();
    }
}
