using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[ExecuteInEditMode]
public class EditTest : MonoBehaviour
{
    //public Text[] txt;
    public List<GameObject> LevelArray = new List<GameObject>();
    public int Num;
    public GameObject testobj;

    // Start is called before the first frame update
    void Start()
    {
        LevelArray = GetComponent<LevelManager>().Levels;
        Debug.Log("Unlock " + "(" + Num + ")");
        for(Num = 0; Num < LevelArray.Count; Num++)
        {
            int x = Num + 1;
            string s = "Unlock " + "(" + x.ToString() + ")";
            testobj = GameObject.Find(s);
            LevelArray[Num].GetComponentInChildren<GameManager>().UnlockItem = GameObject.Find(s);
        }
    }

    // Update is called once per frame
    void Update()
    {
       /*
        * Previous Edit : "Get creative" to "Tap to start"
        * 
        * 
        * txt = FindObjectsOfType<Text>();
        foreach (Text t in txt)
        {
            if (t.text == "Get Creative!")
            {
                t.gameObject.name = "StartText";
                t.transform.parent.name = "StartButton";
                t.transform.parent.GetChild(1).gameObject.SetActive(false);
            }
        }*/
    }
}
