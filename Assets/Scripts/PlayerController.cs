using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Obi;

public class PlayerController : MonoBehaviour
{
    [SerializeField]
    private float touchSpeed;
    public GameObject FlavorUI;
    public GameObject SleeveUI;
    ObiEmitter emitter;
    public GameObject Icing;
    public GameObject Sleeve;

    // Start is called before the first frame update
    void Start()
    {
        emitter = GetComponent<ObiEmitter>();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (tag == "Milk")
                emitter.speed = 2.43f;
            else if (tag == "Coffee")
                emitter.speed = 1.73f;
            else
                emitter.speed = 1.73f;

            this.transform.position = new Vector3(transform.position.x + touch.deltaPosition.x * touchSpeed, transform.position.y, transform.position.z + touch.deltaPosition.y * touchSpeed);
        }
        else
        {
            emitter.speed = 0;
        }

        //bounds
        if(tag == "Milk" || tag == "Coffee")
            transform.position = new Vector3(Mathf.Clamp(transform.position.x, -0.38f, 0.38f),
                transform.position.y,
                Mathf.Clamp(transform.position.z, -0.13f, 0.13f));
        else
            transform.position = new Vector3(Mathf.Clamp(transform.position.x, -0.3f, 0.38f),
                transform.position.y,
                Mathf.Clamp(transform.position.z, 0.5f, 1.14f));

        if (emitter.activeParticleCount == 150)
        {
            if(tag == "Milk")
            {
                transform.GetChild(0).gameObject.SetActive(false);
                GameObject c = GameObject.FindWithTag("Coffee");
                c.transform.GetChild(0).gameObject.SetActive(true);
                FlavorUI.SetActive(true);
                GetComponent<PlayerController>().enabled = false;
            }
            else
            {
                transform.GetChild(0).gameObject.SetActive(false);
                Icing.SetActive(true);
            }
        }

        if(tag == "Sprinkles" && emitter.activeParticleCount == 100)
        {
            //Sleeve.SetActive(true);
            transform.GetChild(0).gameObject.SetActive(false);
            //SleeveUI.SetActive(true);
            GetComponent<PlayerController>().enabled = false;
            ButtonController b = GameObject.Find("ButtonController").GetComponent<ButtonController>();
            b.FlavorNext4();
        }
    }
}
