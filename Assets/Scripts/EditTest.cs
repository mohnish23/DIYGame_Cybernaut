using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[ExecuteInEditMode]
public class EditTest : MonoBehaviour
{
    public Text[] txt;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        txt = FindObjectsOfType<Text>();
        foreach (Text t in txt)
        {
            if (t.text == "Get Creative!")
            {
                t.gameObject.name = "StartText";
                t.transform.parent.name = "StartButton";
                t.transform.parent.GetChild(1).gameObject.SetActive(false);
            }
        }
    }
}
