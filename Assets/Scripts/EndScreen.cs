using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndScreen : MonoBehaviour
{
    public int LikesNum;
    public int LerpNum;
    public Text LikesTxt;
    public List<GameObject> CoffeeObjs = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {
        if(FindObjectOfType<CoffeeController>() != null)
        {
            CoffeeController c = FindObjectOfType<CoffeeController>();
            CoffeeObjs.Add(c.pour);
            CoffeeObjs.Add(c.pour2);
            CoffeeObjs.Add(c.MilkPour);
            CoffeeObjs.Add(c.WaterPouring);
            CoffeeObjs.Add(c.WaterPouring2);
            CoffeeObjs.Add(c.WaterPourer);
            foreach(GameObject g in CoffeeObjs)
            {
                if(g != null)
                {
                    g.SetActive(false);
                }
            }
            c.enabled = false;
        }

        if (FindObjectOfType<BobaController>() != null)
            FindObjectOfType<BobaController>().enabled = false;

        GameObject.Find("Sounds_Pouring").GetComponent<AudioSource>().Pause();
        GameObject.Find("Sounds_Sprinkles").GetComponent<AudioSource>().Pause();
        GameObject.Find("ProgressBar").SetActive(false);
        LerpNum = PlayerPrefs.GetInt("Level") + 1 * 100 + Random.Range(0, 15);
    }

    // Update is called once per frame
    void Update()
    {
        LikesNum = (int) Mathf.Lerp(LikesNum, LerpNum, 2f * Time.deltaTime);
        LikesTxt.text = LikesNum.ToString();
    }
}
