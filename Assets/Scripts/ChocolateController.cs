using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Obi;

public class ChocolateController : MonoBehaviour
{
    ObiRopeCursor cursor;
    [SerializeField]
    ObiRope rope;
    public float minLength = 0.1f;
    public float speed = 1;

    [SerializeField]
    private float touchSpeed;

    public GameObject SprinkleUI;
    public GameObject SprinkleObject;

    // Start is called before the first frame update
    void Start()
    {
        if(rope != null)
        {
            cursor = rope.GetComponent<ObiRopeCursor>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            this.transform.position = new Vector3(transform.position.x + touch.deltaPosition.x * touchSpeed, transform.position.y, transform.position.z + touch.deltaPosition.y * touchSpeed);
            cursor.ChangeLength(rope.restLength + speed * Time.deltaTime);
            if(rope.restLength > 6.65f)
            {
                rope.GetComponent<ObiParticleAttachment>().enabled = false;
                SprinkleUI.SetActive(true);
                SprinkleObject.SetActive(true);
                gameObject.SetActive(false);
            }
        }

        //bounds
        transform.position = new Vector3(Mathf.Clamp(transform.position.x, -0.3f, 0.38f), 
            transform.position.y, 
            Mathf.Clamp(transform.position.z, 0.5f, 1.14f));
    }
}
