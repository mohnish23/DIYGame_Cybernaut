using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UnlockScript : MonoBehaviour
{
    public float StartNum;
    public float EndNum;
    public float Delay = 2f;
    public GameObject BgRays;
    public Text DescText;

    // Start is called before the first frame update
    void Start()
    {
        if (EndNum == 0)
        {
            BgRays.SetActive(true);
        }

        if(EndNum != 0)
        {
            DescText.text = EndNum * 100 + "% " + "LEFT";
            BgRays.SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        GetComponent<Image>().fillAmount = StartNum; 
        StartNum = Mathf.Lerp(StartNum, EndNum, Time.deltaTime * Delay);
    }
}
