using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioSource[] Sounds;

    // Start is called before the first frame update
    void Start()
    {
        Sounds = GetComponentsInChildren<AudioSource>();
        Invoke("InitSounds", 0.2f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void InitSounds()
    {
        foreach (AudioSource a in Sounds)
        {
            a.Play();
            a.Pause();
        }
    }

    public void StopAllSounds()
    {
        foreach (AudioSource a in Sounds)
        {
            a.Stop();
        }
    }
}
