using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AnimController : MonoBehaviour
{
    public GameObject LevelCompleteMenu;
    public GameObject SyrupSelectionMenu;
    public GameObject Paint;
    public GameObject Customer1;
    public Animator InstructionAnim;

    private void Start()
    {
        InstructionAnim = GameObject.Find("Instructions").GetComponent<Animator>();
    }

    public void LevelComplete()
    {
        InstructionAnim.Play("Idle");
        if(transform.parent.GetComponent<Animator>() != null)
        {
            transform.parent.GetComponent<Animator>().enabled = false;
        }
        LevelCompleteMenu.SetActive(true);
    }

    public void BlenderAnimComplete()
    {
        Camera.main.GetComponent<Animator>().SetBool("CamAnim2", true);
        //Paint.SetActive(true);
        //SyrupSelectionMenu.SetActive(true);
        GameObject.Find("blender").GetComponent<Animator>().SetBool("phase2", true);
        FindObjectOfType<BlenderController>().Blend = false;
    }

    public void BlenderAnimComplete2()
    {
        BlenderController b = transform.GetComponentInChildren<BlenderController>();
        b.CanControl();
        InstructionAnim.Play("InstructionDragDown");
    }

    public void BlenderAnimComplete3()
    {
        BlenderController b = transform.GetComponentInChildren<BlenderController>();
        b.CantControl();
        InstructionAnim.Play("Idle");
    }

    public void BlenderAnimComplete3_1()
    {
        BlenderController b = transform.GetComponentInChildren<BlenderController>();
        b.transform.parent.GetComponent<Animator>().Play("BlenderOut");
        b.Control = false;
        b.pour.SetActive(false);
        GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
    }

    public void BlenderAnimComplete3_2()
    {
        BlenderController b = transform.GetComponentInChildren<BlenderController>();
        b.CantControl2();
        GameObject.Find("BobaController").GetComponent<BobaController>().MilkPour.SetActive(true);
    }

    public void BobaMilkPour()
    {
        GameObject.Find("BobaController").GetComponent<BobaController>().phase2 = true;
    }

    public void CustomerCycleComplete()
    {
        if(GetComponent<RectTransform>() != null)
        {
            gameObject.SetActive(false);
        }
        GameManager g = GameObject.Find("GameManager").GetComponent<GameManager>();
        g.Pos += 1;
        //Instantiate(Customer1, g.CharPos[0], Quaternion.identity);
        PlayerPrefs.SetInt("LevelNum", PlayerPrefs.GetInt("LevelNum") + 1);
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void CustomerCycleComplete2()
    {
        GetComponent<Animator>().speed = 0f;
        Animator PlayerAnim = GameObject.FindGameObjectWithTag("Player2").GetComponent<Animator>();
        PlayerAnim.Play("Win");
        Invoke("CustomerCycleComplete3", 1.5f);
    }

    public void CustomerCycleComplete3()
    {
        GameManager g = GameObject.Find("GameManager").GetComponent<GameManager>();
        if(g.UnlockItem == null)
        {
            CustomerCycleComplete();
        }
        else
        {
            g.UnlockItem.SetActive(true);
            g.UnlockScreen.SetActive(true);
        }
    }

    public void ScoopAnimComplete()
    {
        InstructionAnim.Play("Idle");
        GameObject.Find("Beans").GetComponent<Transform>().parent = GameObject.Find("MokaContainer").GetComponent<Transform>();
        GameObject.Find("CoffeeScoop").SetActive(false);
        CoffeeController c = GameObject.Find("CoffeeController").GetComponent<CoffeeController>();
        c.phase0 = false;
        c.CoffeeGrinder.SetActive(true);
    }
    
    public void TurnIntoPowder()
    {
        GameObject.Find("CoffeePowder").GetComponent<MeshRenderer>().enabled = true;
        GameObject.Find("Beans").SetActive(false);
        CoffeeController c = GameObject.Find("CoffeeController").GetComponent<CoffeeController>();
        c.phase0_5 = true;
    }

    public void TurnIntoPowderB()
    {
        CoffeeController c = GameObject.Find("CoffeeController").GetComponent<CoffeeController>();
        c.phase0_5 = false;
        GetComponent<Animator>().speed = 1;
    }

    public void AssemblePot1()
    {
        transform.parent.GetComponent<Animator>().enabled = true;
        GameObject.Find("Sounds_CoffeeGrinding").GetComponent<AudioSource>().Pause();
    }

    public void WaterPouringA()
    {
        InstructionAnim.Play("Idle");
        InstructionAnim.Play("InstructionInfinity");
        CoffeeController c = GameObject.Find("CoffeeController").GetComponent<CoffeeController>();
        c.WaterPouring.SetActive(true);
        GameObject.Find("Sounds_CoffeeGrinding").GetComponent<AudioSource>().Pause();
    }

    public void WaterPouring()
    {
        InstructionAnim.Play("InstructionInfinity");
        GetComponent<Animator>().enabled = false;
        CoffeeController c = GameObject.Find("CoffeeController").GetComponent<CoffeeController>();
        c.phase0 = true;
    }

    public void BobaPourComplete()
    {
        transform.GetChild(0).gameObject.SetActive(false);
        transform.GetChild(1).gameObject.SetActive(false);
        transform.GetChild(2).gameObject.SetActive(false);
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.DrinkMenu.SetActive(true);
        //GameObject.Find("BobaController").GetComponent<BobaController>().phase2 = true;
    }

    public void BobaComplete()
    {
        BobaController b = GameObject.Find("BobaController").GetComponent<BobaController>();
        b.MilkPour.GetComponent<Animator>().SetBool("Out", true);
        b.phase2 = false;
        b.pour.SetActive(false);
        GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
    }

    public void BobaCompleteB()
    {
        BobaController b = GameObject.Find("BobaController").GetComponent<BobaController>();
        b.phase3 = true;
        InstructionAnim.Play("Idle");
        gameObject.SetActive(false);
    }

    public void PowderPourComplete()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseB = false;
        c.pourCoffee.SetActive(false);
        c.CoffeeBottle.GetComponent<Animator>().SetBool("Out", true);
        c.WaterPourer.SetActive(true);
        c.WaterPourer.GetComponent<Animator>().SetBool("In", true);
        gameObject.SetActive(false);
    }

    public void PowderPourCompleteB()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseB1 = true;
    }

    public void PowderWaterPourComplete()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.WaterPourer.GetComponent<Animator>().SetBool("Out", true);
        c.phaseB1 = false;
        c.pourWater.SetActive(false);
    }

    public void PowderWaterPourCompleteB()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseB2 = true;
        gameObject.SetActive(false);
    }

    public void StirringSpoonInComplete()
    {
        GetComponent<Animator>().SetBool("Out", true);
        GetComponent<Animator>().enabled = false;
    }

    public void ColorChangeComplete()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.StirringSpoon.GetComponent<Animator>().enabled = true;
        c.phaseB2 = false;
        c.phaseB1 = false;
        c.phaseB = false;
        //c.StirringSpoon.SetActive(false);
        GetComponent<Animator>().Play("PourAnim3");
    }

    public void ColorChangeComplete2()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseB3 = true;
    }

    public void PourCompleteFrench()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseB2 = false;
        c.phaseB1 = false;
        c.phaseB = false;
        c.WaterPourer.SetActive(false);
        c.pourWater.SetActive(false);
        GetComponent<Animator>().Play("FrenchPressAnim");
    }

    public void PressAnimControl()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseC = true;
    }

    public void PressAnimComplete()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseC = false;
        GetComponent<Animator>().Play("FrenchPressPour");
    }

    public void FrenchPressPourStart()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseC1 = true;
    }

    public void PowderPourComplete2()
    {
        //transform.parent.gameObject.SetActive(false);
        GetComponent<Animator>().speed = 0;
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseD = true;
    }

    public void PowderPressed()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseD = false;
        c.phaseB = false;
        GetComponent<Animator>().speed = 1;
    }

    public void PowderPressComplete()
    {
        GetComponent<Animator>().Play("CoffeeMachineAnim1");
        Camera.main.GetComponent<Animator>().SetBool("CamAnim1", true);
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseD1 = true;
    }

    public void CupMoveComplete()
    {
        GetComponent<Animator>().speed = 0;
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseD1 = false;
        c.CoffeeNextButton();
    }

    public void EnableCup()
    {
        GameObject c = FindObjectOfType<ButtonController>().CoffeeCup;
        MeshRenderer[] m = c.GetComponentsInChildren<MeshRenderer>();
        foreach(MeshRenderer i in m)
        {
            i.enabled = true;
        }
    }

    public void PlayIdle()
    {
        GetComponent<Animator>().Play("Idle");
    }

    private void OnTriggerEnter(Collider other)
    {
        if(tag == "ParticleTrigger" && other.tag == "Blade")
        {
            transform.GetChild(0).gameObject.SetActive(true);
        }
    }
}
