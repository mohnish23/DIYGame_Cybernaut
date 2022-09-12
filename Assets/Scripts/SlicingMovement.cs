using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlicingMovement : MonoBehaviour
{
    public Vector3 MoveToPos;
    public bool canMove;
    public float MvmtSpeed = 0.2f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position.y > 0.3f && canMove == true)
        {
            //transform.position = new Vector3(Mathf.Lerp(transform.position.x, MoveToPos.x, 0.5f * Time.deltaTime), transform.position.y, transform.position.z);
            transform.position = new Vector3(transform.position.x + MvmtSpeed * Time.deltaTime, transform.position.y, transform.position.z);
        }
    }
}
