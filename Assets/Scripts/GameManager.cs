using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Tabtale.TTPlugins;

public class GameManager : MonoBehaviour
{
    public GameObject StartMenu;
    public Vector3[] CharPos;
    public Transform CurrentPos;
    public int Pos;

    public GameObject[] CupDisplay;
    public GameObject[] FlavorDisplay;
    public GameObject[] Customers;
    public int TargetFlavor;

    public bool isExLevel;
    public bool isAsmrLevel;

    public Canvas mainCanvas;

    public GameObject UnlockScreen;
    public GameObject UnlockItem;
    public GameObject InstructionAnim;

    // Start is called before the first frame update
    void Start()
    {
        Application.targetFrameRate = 60;
        mainCanvas.worldCamera = Camera.main;
        int rnd = Random.Range(0, Customers.Length);
        Customers[rnd].SetActive(true);
        GameObject.Find("ButtonController").GetComponent<ButtonController>().Customer = Customers[rnd].transform.parent.gameObject;
        TargetFlavor = Random.Range(0, FlavorDisplay.Length);
        FlavorDisplay[TargetFlavor].SetActive(true);
        CurrentPos = GameObject.FindWithTag("Player").GetComponent<Transform>();
        InstructionAnim = GameObject.Find("Instructions");
        StartCoroutine(StartMenuDelay());
        Pos = 1;
    }

    private void Awake()
    {
        // Initialize CLIK Plugin
        TTPCore.Setup();
        // Your code here
        Dictionary<string, object> parameters = new Dictionary<string, object>();
        parameters.Add("missionName","First Level");
        TTPGameProgression.FirebaseEvents.MissionStarted(1, parameters);
    }

    // Update is called once per frame
    void Update()
    {
        //CurrentPos.position = Vector3.Lerp(CurrentPos.position, CharPos[Pos], 5f * Time.deltaTime);
        
        if(isAsmrLevel == true && FindObjectOfType<LineRenderer>() != null)
        {
            LineRenderer L = GameObject.FindObjectOfType<LineRenderer>();
            L.material.SetTextureOffset("_MainTex", Vector2.right * 0.2f * Time.time);
        }
    }

    public void StartButton()
    {
        StartMenu.SetActive(false);
        Camera.main.GetComponent<Animator>().SetBool("CamAnim0", true);
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.DrinkMenu.SetActive(true);
    }

    public void StartButtonCoffee()
    {
        Invoke("StartInstruction", 1f);
        StartMenu.SetActive(false);
        Camera.main.GetComponent<Animator>().SetBool("CamAnim0", true);
        GameObject.Find("CoffeeController").GetComponent<CoffeeController>().canControl = true;
    }

    void StartInstruction()
    {
        GameObject.Find("Instructions").GetComponent<Animator>().Play("InstructionDragDown");
    }

    public void StartButtonBoba()
    {
        StartMenu.SetActive(false);
        Camera.main.GetComponent<Animator>().SetBool("CamAnim0", true);
        GameObject.Find("BobaController").GetComponent<BobaController>().canControl = true;
    }

    public IEnumerator StartMenuDelay()
    {
        StartMenu.SetActive(false);
        yield return new WaitForSeconds(0.1f);
        InstructionAnim.SetActive(false);
        yield return new WaitForSeconds(0.65f);
        StartMenu.SetActive(true);
        InstructionAnim.SetActive(true);
    }
}
