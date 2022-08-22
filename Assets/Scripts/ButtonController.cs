using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Obi;
using PaintIn3D;
using Tabtale.TTPlugins;

public class ButtonController : MonoBehaviour
{
    public Gradient[] Gradients;
    public GameObject[] Chunks;
    public GameObject[] DrinkFlavors;
    public GameObject[] InstantiateObjs;
    public Material[] DrinkMaterials;
    public Material[] Materials;
    public Material[] SleeveMats;

    public Color[] colors;

    public GameObject DrinkMenu;
    public GameObject FlavorMenu;
    public GameObject IcingMenu;
    public GameObject SprinkleMenu;
    public GameObject SleeveMenu;
    public GameObject CoffeeStepMenu;
    public GameObject NextButton0;
    public GameObject NextButton1;
    public GameObject NextButton2;
    public GameObject NextButton3;
    public GameObject NextButton4;

    public GameObject CoffeeLid;
    public GameObject CoffeeCup;
    public Transform CupPos;
    public int CurrentFlavor;
    public Animator CupAnim;

    public GameObject Customer;

    // Start is called before the first frame update
    void Start()
    {
        //Customer = GameObject.FindGameObjectWithTag("Player");
    }

    public void DrinkSelection()
    {
        if(GameObject.Find("BlenderPlaceholder") != null)
        {
            GameObject.Find("BlenderPlaceholder").SetActive(false);
        }

        foreach(GameObject g in DrinkFlavors)
        {
            g.SetActive(false);
        }
        DrinkFlavors[CurrentFlavor].SetActive(true);
        GameObject.Find("Cylinder.012").GetComponent<Renderer>().material = DrinkMaterials[CurrentFlavor];
        //NextButton0.SetActive(true);
        if(GameObject.Find("BobaController") == null)
        {
            FlavorNext0();
        }
        else
        {
            NextButton0.SetActive(true);
            //FlavorNextBoba();
        }
    }

    public void FlavorNext0()
    {
        if(GameObject.FindObjectOfType<ColorMatchingController>() != null)
        {
            FindObjectOfType<ColorMatchingController>().FlavorSelected = CurrentFlavor;
        }
        GameObject.FindObjectOfType<KnifeController>().enabled = true;
        GameManager g = GameObject.Find("GameManager").GetComponent<GameManager>();
        if(g.isAsmrLevel == true)
        {
            FindObjectOfType<SlicingMovement>().canMove = true;
        }
        DrinkMenu.SetActive(false);
    }

    public void FlavorNextBoba()
    {
        DrinkMenu.SetActive(false);
        GameObject.Find("blender").GetComponent<Animator>().SetBool("phase2", true);
        GameObject.Find("blender").GetComponent<Animator>().speed = 1;
    }

    public void ChunkSelection()
    {
        foreach(GameObject g in Chunks)
        {
            g.GetComponent<ChunkController>().ChunkObj.SetActive(false);
            g.SetActive(false);
        }
        Chunks[CurrentFlavor].SetActive(true);
        Chunks[CurrentFlavor].GetComponent<ChunkController>().ChunkObj.SetActive(true);
        //NextButton1.SetActive(true);
        FlavorNext();
    }

    public void ObjPourSelection()
    {
        foreach (GameObject g in InstantiateObjs)
        {
            g.SetActive(false);
        }
        InstantiateObjs[CurrentFlavor].SetActive(true);
        ObjPouring o = InstantiateObjs[CurrentFlavor].GetComponent<ObjPouring>();
        if(o != null)
            o.Invoke("StartPouring", 0.1f);
    }

    public void FlavorSelection1()
    {
        /*ObiFluidPropertyColorizer[] o = GameObject.FindObjectsOfType<ObiFluidPropertyColorizer>();
        foreach(ObiFluidPropertyColorizer i in o)
        {
            i.grad = Gradients[0];
        }*/

        GameObject.Find("Paint").GetComponent<P3dPaintSphere>().Color = colors[0];
        GameObject.Find("IcingBottle").GetComponent<Renderer>().material = Materials[0];
        NextButton1.SetActive(true);
    }

    public void FlavorStrawberry()
    {
        GameObject.Find("Paint").GetComponent<P3dPaintSphere>().Color = colors[1];
        GameObject.Find("IcingBottle").GetComponent<Renderer>().material = Materials[1];
        NextButton1.SetActive(true);
    }

    public void FlavorNext()
    {
        //GameObject.Find("Paint").GetComponent<SyrupController>().enabled = true;
        FlavorMenu.SetActive(false);

        //GameObject.FindGameObjectWithTag("Coffee").GetComponent<PlayerController>().enabled = true;
        Chunks[CurrentFlavor].GetComponent<ChunkController>().CanControl = true;
    }

    public void FlavorCoffee2()
    {
        GameObject.FindObjectOfType<ObiRope>().GetComponent<Renderer>().material = Materials[0];
        GameObject.Find("IcingBottle").GetComponent<Renderer>().material = Materials[0];
        NextButton2.SetActive(true);
    }

    public void FlavorStrawberry2()
    {
        GameObject.FindObjectOfType<ObiRope>().GetComponent<Renderer>().material = Materials[1];
        GameObject.Find("IcingBottle").GetComponent<Renderer>().material = Materials[1];
        NextButton2.SetActive(true);
    }

    public void FlavorNext2()
    {
        IcingMenu.SetActive(false);
        GameObject.Find("ChocolateController").GetComponent<ChocolateController>().enabled = true;
    }

    public void FlavorCoffee3()
    {
        GameObject.FindObjectOfType<ObiInstancedParticleRenderer>().material = Materials[0];
        NextButton3.SetActive(true);
    }

    public void FlavorStrawberry3()
    {
        GameObject.FindObjectOfType<ObiInstancedParticleRenderer>().material = Materials[1];
        NextButton3.SetActive(true);
    }

    public void FlavorNext3()
    {
        SprinkleMenu.SetActive(false);
        GameObject.FindObjectOfType<ObiInstancedParticleRenderer>().GetComponent<PlayerController>().enabled = true;
    }

    public void SleeveSelection1()
    {
        GameObject.FindGameObjectWithTag("Sleeve").GetComponent<Renderer>().material = SleeveMats[0];
        NextButton4.SetActive(true);
    }

    public void SleeveSelection2()
    {
        GameObject.FindGameObjectWithTag("Sleeve").GetComponent<Renderer>().material = SleeveMats[1];
        NextButton4.SetActive(true);
    }

    public void FlavorNext4()
    {
        DrinkMenu.SetActive(false);
        FlavorMenu.SetActive(false);
        IcingMenu.SetActive(false);
        SprinkleMenu.SetActive(false);
        CoffeeLid.SetActive(true);
        SleeveMenu.SetActive(false);
        GameObject.Find("Instructions").GetComponent<Animator>().Play("Idle");
    }

    public void FlavorNext5()
    {
        GameObject.Find("FlavorSelection3").SetActive(false);
        CoffeeController c = GameObject.Find("CoffeeController").GetComponent<CoffeeController>();
        c.LatteArtUnlocked = false;
        c.phase1 = false;
        c.phase2 = true;
        c.canControl = true;
    }

    public void LevelCompleteButton()
    {
        GameManager g = GameObject.Find("GameManager").GetComponent<GameManager>();
        SoundManager s = FindObjectOfType<SoundManager>();
        s.StopAllSounds();

        Dictionary<string, object> parameters = new Dictionary<string, object>();
        parameters.Add(transform.parent.name, PlayerPrefs.GetInt("Level", 1).ToString());
        TTPGameProgression.FirebaseEvents.MissionComplete(parameters);

        if (g.isExLevel == true)
        {
            Customer = GameObject.FindGameObjectWithTag("Enemy");
            Customer.GetComponent<Animator>().SetBool("ResultFail", true);
        }

        //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        GameObject.FindObjectOfType<Wobble>().enabled = false;
        if(GameObject.Find("Obi Rope") != null)
        {
            GameObject.Find("Obi Rope").GetComponent<CursorController>().enabled = false;
            GameObject.Find("Obi Rope").GetComponent<ObiRope>().enabled = false;
        }

        CoffeeLid.GetComponent<Animator>().enabled = false;
        CoffeeCup.GetComponent<Animator>().enabled = false;

        GameObject.Find("Obi Solver").transform.parent = CoffeeCup.transform;
        //GameObject.FindObjectOfType<IceCreamAnim>().transform.parent = CoffeeCup.transform;
        CoffeeLid.transform.parent = CoffeeCup.transform;
        GameObject[] x = GameObject.FindGameObjectsWithTag("Chunk");
        foreach (GameObject o in x)
        {
            o.transform.parent = CoffeeCup.transform;
            o.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
        }

        GameObject.Find("LevelCompleteMenu").SetActive(false);
        Customer.GetComponent<Animator>().SetBool("Drink", true);

        /*if(CurrentFlavor == g.TargetFlavor)
        {
            Customer.GetComponent<Animator>().SetBool("ResultSuccess", true);
        }
        else
        {
            Customer.GetComponent<Animator>().SetBool("ResultFail", true);
        }*/

        if (GameObject.FindObjectOfType<ColorMatchingController>() != null)
        {
            ColorMatchingController c = FindObjectOfType<ColorMatchingController>();
            if(c.FlavorSelected == c.TargetFlavor)
            {
                Customer.GetComponent<Animator>().SetBool("ResultSuccess", true);
            }
            else
            {
                Customer.GetComponent<Animator>().SetBool("ResultFail", true);
                StartCoroutine(c.FailDialogueRoutine());
            }
        }
        else if(GameObject.FindObjectOfType<ColorMatchingController>() == null && g.isExLevel == false)
        {
            Customer.GetComponent<Animator>().SetBool("ResultSuccess", true);
        }

        if (g.isExLevel == true)
        {
            CupPos = GameObject.Find("CupPos2").GetComponent<Transform>();
            Camera.main.GetComponent<Animator>().enabled = false;
            CoffeeCup.transform.parent = CupPos;
            CoffeeCup.transform.localPosition = new Vector3(0.00606000004f, -0.000530000019f, -0.000669999979f);
            CoffeeCup.transform.localRotation = new Quaternion(0.694692194f, -0.718231618f, 0.0380079821f, -0.0100761624f);
            CoffeeCup.transform.localScale = new Vector3(0.00300666108f, 0.00300922175f, 0.00300781429f);
            Transform t = Camera.main.transform;
            t.localPosition = new Vector3(3.44000006f, 1.12f, -35.9000015f);
            t.localRotation = new Quaternion(0.103296265f, 0.699521184f, -0.103296265f, 0.699521184f);
        }
        else
        {
            CupPos = GameObject.Find("CupPos").GetComponent<Transform>();

            if (CoffeeCup.name == "coffediy1")
            {
                StartCoroutine(CupRoutine2());
            }
            else
            {
                StartCoroutine(CupRoutine());
            }
        }
    }

    public IEnumerator CupRoutine()
    {
        yield return new WaitForSeconds(0.5f);
        CoffeeCup.transform.parent = CupPos;
        /*CoffeeCup.transform.localPosition = new Vector3(0.104414441f,0.185070068f,0.246427417f);
        CoffeeCup.transform.localRotation = new Quaternion(-0.0960910246f,-0.165111452f,0.848371923f,0.493730515f);
        CoffeeCup.transform.localScale = new Vector3(0.35f,0.35f,0.35f);*/
        CoffeeCup.transform.localPosition = new Vector3(0, 0, 0);
        CoffeeCup.transform.localRotation = new Quaternion(0.694692194f, -0.718231618f, 0.0380079821f, -0.0100761624f);
        CoffeeCup.transform.localScale = new Vector3(0.00300666108f, 0.00300922175f, 0.00300781429f);
        Camera.main.GetComponent<Animator>().SetBool("CamAnim3", true);
    }

    public IEnumerator CupRoutine2()
    {
        yield return new WaitForSeconds(0.5f);
        CoffeeCup.transform.parent = CupPos;
        CoffeeCup.transform.localPosition = new Vector3(0.00606000004f, -0.000530000019f, -0.000669999979f);
        CoffeeCup.transform.localRotation = new Quaternion(0.694692194f, -0.718231618f, 0.0380079821f, -0.0100761624f);
        CoffeeCup.transform.localScale = new Vector3(0.00300666108f, 0.00300922175f, 0.00300781429f);
        Camera.main.GetComponent<Animator>().SetBool("CamAnim3", true);
    }
}
