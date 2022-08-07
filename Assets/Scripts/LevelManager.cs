using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public List<GameObject> Levels;

    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.GetInt("LevelNum") > Levels.Count - 1)
        {
            PlayerPrefs.SetInt("LevelNum", 0);
        }
        Levels[PlayerPrefs.GetInt("LevelNum", 0)].SetActive(true);
    }
}
