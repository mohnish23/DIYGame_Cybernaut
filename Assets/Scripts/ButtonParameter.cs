using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonParameter : MonoBehaviour
{
    public int SelectionNumber;

    public void ButtonInitiation()
    {
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.CurrentFlavor = SelectionNumber;
        b.DrinkSelection();
    }

    public void ButtonInitiation2()
    {
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.CurrentFlavor = SelectionNumber;
        b.ChunkSelection();
    }

    public void CustomPourInitiation1()
    {
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.CurrentFlavor = SelectionNumber;
        b.ObjPourSelection();
    }

    public void SprinkleButtonActive()
    {
        ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
        b.NextButton3.SetActive(true);
    }

    public void SelectionLatteArt()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.LatteArtUnlocked = true;
        SelectionNext();
    }

    public void SelectionFrothing()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.FrothingUnlocked = true;
        SelectionNext();
    }

    public void SelectionNext()
    {
        CoffeeController c = FindObjectOfType<CoffeeController>();
        c.phaseC1 = false;
        c.Invoke("CoffeeNextButton", 0.2f);
        transform.parent.gameObject.SetActive(false);
    }

    public void FlavorNextInit()
    {
        if(FindObjectOfType<BobaController>() != null)
        {
            FindObjectOfType<BobaController>().BobaNextButton();
        }
        else
        {
            FindObjectOfType<ButtonController>().FlavorNext4();
        }
    }

    public void WhippedCreamSelection()
    {
        GameObject.Find("IcingAnimation").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("IcingAnimation").transform.GetChild(1).gameObject.SetActive(true);
        Transform t = FindObjectOfType<IceCreamAnim>().GetComponent<Transform>();
        ButtonController b = FindObjectOfType<ButtonController>();
        foreach(Renderer r in t.GetComponentsInChildren<Renderer>())
        {
            r.material = b.Materials[SelectionNumber];
        }
        GameObject.Find("IcingAnimation").transform.GetChild(1).GetComponentInChildren<Renderer>().material = b.Materials[SelectionNumber];
        b.IcingMenu.SetActive(false);
    }
}
