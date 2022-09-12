using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KnifeController : MonoBehaviour
{
    public Animator anim;
    public Transform[] nextPos;
    public Transform SlidePos;
    public int Pos;
    public bool Choppable = true;
    public bool SlidingPhase;
    public bool canSlide;
    public float SlideSpeed;
    public float WaitTime1 = 0.4f;
    public float WaitTime2 = 0.6f;
    public Animator InstructionAnim;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        InstructionAnim = GameObject.Find("Instructions").GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (SlidingPhase == false)
        {
            GameObject.Find("ProgressBarFill").GetComponent<Image>().fillAmount = (float) Pos / nextPos.Length;
            InstructionAnim.Play("InstructionSwipeDown");
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                if (Choppable == true && touch.phase == TouchPhase.Moved)
                {
                    anim.SetTrigger("Chop1");
                    StartCoroutine("ChangePos");
                    Choppable = false;
                    GameObject.Find("Sounds_KnifeCut").GetComponent<AudioSource>().Play();
                }
            }
            else
            {
                anim.ResetTrigger("Chop1");
            }

            transform.position = new Vector3(Mathf.Lerp(transform.position.x, nextPos[Pos].position.x, Time.deltaTime * 3f), transform.position.y, transform.position.z);
        }
        else
        {
            InstructionAnim.Play("InstructionSwipeRight");
            StartCoroutine(SlideKnife());
            
            if(canSlide == true)
            {
                if (Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);
                    if(touch.phase == TouchPhase.Moved)
                    {
                        SlideSpeed = Time.deltaTime * 5f;
                        GameObject.Find("Sounds_KnifeSlide").GetComponent<AudioSource>().UnPause();
                    }
                    else
                    {
                        SlideSpeed = 0;
                    }
                }
                else
                {
                    //SlideSpeed = 0;
                    GameObject.Find("Sounds_KnifeSlide").GetComponent<AudioSource>().Pause();
                }

                GameObject.Find("ProgressBarFill").GetComponent<Image>().fillAmount = transform.localPosition.x / 0.892f;
                SlidePos.localPosition = new Vector3(Mathf.Lerp(SlidePos.localPosition.x, 0.892f, SlideSpeed), SlidePos.localPosition.y, SlidePos.localPosition.z);
            }
        }
    }

    public IEnumerator ChangePos()
    {
        yield return new WaitForSeconds(WaitTime1);
        if (Pos < nextPos.Length - 1)
            Pos += 1;
        else if (Pos == nextPos.Length - 1)
        {
            SlidingPhase = true;
            GameObject.Find("ProgressBarFill").GetComponent<Image>().fillAmount = 1;
        }
        yield return new WaitForSeconds(WaitTime2);
        Choppable = true;
    }

    public IEnumerator SlideKnife()
    {
        transform.Find("Knife (1)").gameObject.SetActive(false);
        transform.position = new Vector3(Mathf.Lerp(transform.position.x, SlidePos.position.x, Time.deltaTime * 3f), Mathf.Lerp(transform.position.y, SlidePos.position.y, Time.deltaTime * 3f), transform.position.z);
        yield return new WaitForSeconds(0.5f);
        transform.Find("Blade").GetComponent<BoxCollider>().enabled = true;
        canSlide = true;
    }
}
