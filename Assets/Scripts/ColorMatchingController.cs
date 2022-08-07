using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorMatchingController : MonoBehaviour
{
    public int TargetFlavor;
    public int FlavorSelected;
    public GameObject FailDialogue;
    public AnimController CharAnim;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public IEnumerator FailDialogueRoutine()
    {
        yield return new WaitForSeconds(3f);
        FailDialogue.SetActive(true);
        yield return new WaitForSeconds(2f);
        FailDialogue.SetActive(false);
    }
}
