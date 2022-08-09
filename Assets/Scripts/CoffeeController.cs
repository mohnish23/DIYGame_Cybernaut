using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoffeeController : MonoBehaviour
{
    public Animator ScoopAnim;
    public Animator BottleAnim;
    public Animator CupAnim;
    public Animator CupAnim2;
    public Animator MachineAnim;
    public GameObject pour;
    public GameObject pourCoffee;
    public GameObject CoffeeBottle;
    public GameObject pourWater;
    public GameObject pour2;
    public GameObject pour3;
    public GameObject CoffeeNextBtn;
    public GameObject Cup;
    public GameObject CoffeeGrinder;
    public GameObject WaterPouring;
    public GameObject WaterPouring2;
    public GameObject WaterPourer;
    public GameObject StirringSpoon;
    public Wobble CupLiquid;
    public GameObject FillTarget;
    public Color Color1;
    public bool canControl;
    public GameObject MilkPour;
    public float MilkPourXMin = 6.1f;
    public float MilkPourXMax = 7.1f;
    public float MilkPourZMin = -4.75f;
    public float MilkPourZMax = -3.75f;
    public float touchSpeed = 0.002f;

    public bool phase2;
    public bool phase1;
    public bool phase0_5;
    public bool phase0;
    public bool phaseB;
    public bool phaseB1;
    public bool phaseB2;
    public bool phaseB3;
    public bool phaseC;
    public bool phaseC1;
    public bool phaseD;
    public bool phaseD1;

    public bool LatteArtUnlocked;

    public Animator InstructionAnim;

    // Start is called before the first frame update
    void Start()
    {
        InstructionAnim = GameObject.Find("Instructions").GetComponent<Animator>();
        Cup = CupAnim.gameObject;
        CupAnim.speed = 0;
        CupAnim2.speed = 0;
        ScoopAnim.speed = 0;
        CupLiquid = Cup.GetComponentInChildren<Wobble>();
        FillTarget = Cup.transform.Find("FillTarget").gameObject;
        //CupAnim.gameObject.SetActive(false);
        //pour.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(phaseD1 == true)
        {
            GameObject.Find("Sounds_PowderPour").GetComponent<AudioSource>().Stop();
            InstructionAnim.Play("InstructionDragDown");
            CupAnim.gameObject.SetActive(true);
            if (canControl == true)
            {
                if (Input.touchCount > 0)
                {
                    CupAnim.speed = 1;
                    pour.SetActive(true);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
                }
                else
                {
                    CupAnim.speed = 0;
                    pour.SetActive(false);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
                }
            }

            if (CupLiquid.Fill <= 0.6f)
            {
                pour.SetActive(false);
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
                Camera.main.GetComponent<Animator>().SetBool("CamAnim2", true);
                InstructionAnim.Play("Idle");
                //ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
                //b.SprinkleMenu.SetActive(true);
                CupAnim.speed = 0;
                CupAnim.gameObject.SetActive(false);
                pour2.SetActive(false);
                canControl = false;
                CupAnim2.gameObject.SetActive(true);
                CupAnim2.transform.parent.GetComponent<Animator>().Play("CoffeeCupPosChange");
                //CupAnim2.speed = 1;
                //phaseD1 = false;
            }
        }
        else if(phaseD == true)
        {
            InstructionAnim.Play("InstructionDragDown");
            GameObject.Find("Sounds_PowderPour").GetComponent<AudioSource>().Pause();
            MachineAnim.Play("CoffeePress");
            pourCoffee.SetActive(false);
            CoffeeBottle.SetActive(false);

            if(Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if(touch.phase == TouchPhase.Moved)
                {
                    MachineAnim.speed = 1;
                }
            }
            else
            {
                MachineAnim.speed = 0;
            }    
        }
        else if(phaseC1 == true)
        {
            InstructionAnim.Play("InstructionDragDown");
            Animator WaterAnim = WaterPouring2.GetComponent<Animator>();
            CupAnim.gameObject.SetActive(true);
            if (canControl == true)
            {
                if (Input.touchCount > 0)
                {
                    CupAnim.speed = 1;
                    WaterAnim.speed = 1;
                    pour.SetActive(true);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
                }
                else
                {
                    CupAnim.speed = 0;
                    WaterAnim.speed = 0;
                    pour.SetActive(false);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
                }
            }

            if (CupLiquid.Fill <= 0.6f)
            {
                /*if (CoffeeNextBtn.activeSelf == false)
                    CoffeeNextBtn.SetActive(true);*/
                WaterPouring2.SetActive(false);
                pour.SetActive(false);
                phaseC1 = false;
                Camera.main.GetComponent<Animator>().SetBool("CamAnim1", true);
                Invoke("CoffeeNextButton", 0.2f);
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
            }
        }
        else if (phaseC == true)
        {
            InstructionAnim.Play("InstructionDragDown");
            Animator WaterAnim = WaterPouring2.GetComponent<Animator>();

            if(Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if(touch.phase == TouchPhase.Moved)
                {
                    WaterAnim.speed = 1;
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
                }
            }
            else
            {
                WaterAnim.speed = 0;
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
            }
        }
        else if (phaseB3 == true)
        {
            GameObject.Find("Sounds_Stirring").GetComponent<AudioSource>().Stop();
            InstructionAnim.Play("InstructionDragDown");
            CupAnim.gameObject.SetActive(true);
            Animator WaterAnim = WaterPouring2.GetComponent<Animator>();
            //WaterAnim.Play("PourAnim3");

            if (Input.touchCount > 0)
            {
                WaterAnim.speed = 1;
                CupAnim.speed = 1;
                pour3.SetActive(true);
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
            }
            else
            {
                WaterAnim.speed = 0;
                CupAnim.speed = 0;
                pour3.SetActive(false);
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
            }

            if (CupLiquid.Fill <= 0.3f)
            {
                WaterPouring2.GetComponent<AnimController>().LevelComplete();
                pour3.SetActive(false);
                WaterAnim.gameObject.SetActive(false);
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
                phaseB3 = false;
            }
        }
        else if (phaseB2 == true)
        {
            GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
            pourWater.SetActive(false);
            WaterPourer.SetActive(false);
            StirringSpoon.SetActive(true);
            InstructionAnim.Play("InstructionInfinity");
            Animator WaterAnim = WaterPouring2.GetComponent<Animator>();
            WaterAnim.Play("LiquidColorAnim");

            if (Input.touchCount > 0)
            {
                WaterAnim.speed = 1;
                Touch touch = Input.GetTouch(0);
                StirringSpoon.transform.position = new Vector3(StirringSpoon.transform.position.x + touch.deltaPosition.x * touchSpeed,
                    StirringSpoon.transform.position.y,
                    StirringSpoon.transform.position.z + touch.deltaPosition.y * touchSpeed);
                GameObject.Find("Sounds_Stirring").GetComponent<AudioSource>().UnPause();
            }
            else
            {
                WaterAnim.speed = 0;
                GameObject.Find("Sounds_Stirring").GetComponent<AudioSource>().Pause();
            }

            StirringSpoon.transform.position = new Vector3(Mathf.Clamp(StirringSpoon.transform.position.x, -0.4f, 0.4f),
                StirringSpoon.transform.position.y,
                Mathf.Clamp(StirringSpoon.transform.position.z, 0.85f, 1.5f));
        }
        else if (phaseB1 == true)
        {
            GameObject.Find("Sounds_PowderPour").GetComponent<AudioSource>().Stop();
            InstructionAnim.Play("InstructionDragDown");
            Animator WaterAnim = WaterPouring2.GetComponent<Animator>();
            WaterAnim.Play("PowderCupFillAnim");
            pourCoffee.SetActive(false);

            WaterPourer.SetActive(true);

            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Moved)
                {
                    WaterAnim.speed = 1;
                    pourWater.SetActive(true);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
                }
            }
            else
            {
                WaterAnim.speed = 0;
                pourWater.SetActive(false);
                GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
            }
        }
        else if (phaseB == true)
        {
            /*Animator WaterAnim = WaterPouring2.GetComponent<Animator>();
            WaterAnim.speed = 0;*/

            //InstructionAnim.Play("InstructionDragDown");

            GameObject.Find("Sounds_BeanPour").GetComponent<AudioSource>().Stop();

            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Moved)
                {
                    BottleAnim.speed = 1;
                    pourCoffee.SetActive(true);
                    GameObject.Find("Sounds_PowderPour").GetComponent<AudioSource>().UnPause();
                }
            }
            else
            {
                BottleAnim.speed = 0;
                pourCoffee.SetActive(false);
                GameObject.Find("Sounds_PowderPour").GetComponent<AudioSource>().Pause();
            }
        }
        else if (phase2 == true)
        {
            CoffeeGrinder.transform.parent.gameObject.SetActive(false);
            pour.SetActive(false);
            CupAnim.gameObject.SetActive(false);
            CupAnim2.gameObject.SetActive(true);
            MilkPour.SetActive(true);
            Camera.main.GetComponent<Animator>().SetBool("CamAnim2", true);
            if (canControl == true)
            {
                if (Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);
                    MilkPour.transform.position = new Vector3(MilkPour.transform.position.x + touch.deltaPosition.x * touchSpeed,
                        MilkPour.transform.position.y,
                        MilkPour.transform.position.z + touch.deltaPosition.y * touchSpeed);
                    CupAnim2.speed = 1;
                    pour2.SetActive(true);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
                }
                else
                {
                    CupAnim2.speed = 0;
                    pour2.SetActive(false);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
                }
            }

            MilkPour.transform.position = new Vector3(Mathf.Clamp(MilkPour.transform.position.x, MilkPourXMin, MilkPourXMax),
                MilkPour.transform.position.y,
                Mathf.Clamp(MilkPour.transform.position.z, MilkPourZMin, MilkPourZMax));

            CupAnim.speed = 0;
        }
        else if (phase1 == true)
        {
            InstructionAnim.Play("InstructionDragDown");
            CupAnim.gameObject.SetActive(true);
            if (canControl == true)
            {
                if (Input.touchCount > 0)
                {
                    CupAnim.speed = 1;
                    pour.SetActive(true);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
                }
                else
                {
                    CupAnim.speed = 0;
                    pour.SetActive(false);
                    GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
                }
            }

            if (CupLiquid.Fill <= 0.6f)
            {
                /*if (CoffeeNextBtn.activeSelf == false)
                    CoffeeNextBtn.SetActive(true);*/
                Invoke("CoffeeNextButton", 0.2f);
            }

            if (CupLiquid.Fill >= 0.5f && CupLiquid.Fill <= 0.6f)
            {
                FillTarget.GetComponent<Renderer>().material.color = Color.green;
            }
            else
            {
                FillTarget.GetComponent<Renderer>().material.color = Color.white;
            }

            FillTarget.GetComponent<Renderer>().material.SetTextureOffset("_MainTex", Vector2.right * 0.2f * Time.time);
        }
        else if(phase0_5 == true)
        {
            GameObject.Find("Sounds_BeanPour").GetComponent<AudioSource>().Stop();
            InstructionAnim.Play("InstructionInfinity");
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if(touch.phase == TouchPhase.Moved)
                {
                    CoffeeGrinder.GetComponent<Animator>().speed = 1;
                    GameObject.Find("Sounds_CoffeeGrinding").GetComponent<AudioSource>().UnPause();
                }
            }
            else
            {
                CoffeeGrinder.GetComponent<Animator>().speed = 0;
                GameObject.Find("Sounds_CoffeeGrinding").GetComponent<AudioSource>().Pause();
            }
        }
        else if (phase0 == true)
        {
            GameObject.Find("Sounds_BeanPour").GetComponent<AudioSource>().Pause();
            GameObject.Find("Sounds_CoffeeGrinding").GetComponent<AudioSource>().Pause();
            GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().UnPause();
            StartCoroutine(StopWater());

            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                WaterPouring.transform.position = new Vector3(WaterPouring.transform.position.x + touch.deltaPosition.x * touchSpeed,
                    WaterPouring.transform.position.y,
                    WaterPouring.transform.position.z + touch.deltaPosition.y * touchSpeed);

                WaterPouring.transform.position = new Vector3(Mathf.Clamp(WaterPouring.transform.position.x, 6.3f, 7.05f),
                    WaterPouring.transform.position.y,
                    Mathf.Clamp(WaterPouring.transform.position.z, -4.63f, -3.97f));
            }
        }
        else
        {
            //InstructionAnim.Play("InstructionDragDown");
            if (canControl == true)
            {
                if (Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);
                    if (touch.phase == TouchPhase.Moved)
                    {
                        ScoopAnim.speed = 1;
                        GameObject.Find("Sounds_BeanPour").GetComponent<AudioSource>().UnPause();
                    }
                }
                else
                {
                    ScoopAnim.speed = 0;
                    GameObject.Find("Sounds_BeanPour").GetComponent<AudioSource>().Pause();
                }
            }
        }
    }

    public void CoffeeNextButton()
    {
        phase1 = false;
        if(LatteArtUnlocked == true)
        {
            InstructionAnim.Play("Idle");
            ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
            b.SprinkleMenu.SetActive(true);
            CupAnim.speed = 0;
            pour2.SetActive(false);
            canControl = false;
            phase2 = true;
        }
        else
        {
            phase2 = true;
            InstructionAnim.Play("InstructionInfinity");
        }
        //Camera.main.GetComponent<Animator>().SetBool("CamAnim2_5", true);
        CoffeeNextBtn.SetActive(false);
    }

    public IEnumerator StopWater()
    {
        yield return new WaitForSeconds(6f);
        GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
        WaterPouring.SetActive(false);
        phase0 = false;
        Camera.main.GetComponent<Animator>().SetBool("CamAnim1", true);
        yield return new WaitForSeconds(0.35f);
        CoffeeGrinder.transform.parent.GetComponent<Animator>().SetBool("CoffeePot2", true);
        yield return new WaitForSeconds(0.45f);
        CoffeeGrinder.transform.parent.GetComponent<Animator>().SetBool("CoffeePot3", true);
        //Camera.main.GetComponent<Animator>().SetBool("CamAnim2", true);
        phase1 = true;
    }
}
