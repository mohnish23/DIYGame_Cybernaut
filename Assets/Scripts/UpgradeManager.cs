using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UpgradeManager : MonoBehaviour
{
    public GameObject CustomizeBtn;
    public GameObject CustomizeMenu;
    public GameObject StartMenu;

    public GameObject[] DecorUpgrades;
    public GameObject[] WallUpgrades;
    public GameObject[] TableUpgrades;

    public bool DebugMode;

    // Start is called before the first frame update
    void Start()
    {
        if (name == "UpgradeManager")
        {
            Upgrade();
            if(PlayerPrefs.GetInt("LevelNum") != 1)
                Invoke("EnableButton", 1.3f);
        }

        Text CoinTxt = GameObject.Find("CoinAmt").GetComponent<Text>();
        CoinTxt.text = PlayerPrefs.GetInt("Coins", 100).ToString();

        PlayerPrefs.SetInt("DecorPurchaseAmt", PlayerPrefs.GetInt("DecorPurchaseAmt", 50));
        PlayerPrefs.SetInt("WallPurchaseAmt", PlayerPrefs.GetInt("WallPurchaseAmt", 50));
        PlayerPrefs.SetInt("TablePurchaseAmt", PlayerPrefs.GetInt("TablePurchaseAmt", 50));

        if (transform.Find("CustomLvTxt1") != null)
        {
            Text LvText = transform.Find("CustomLvTxt1").GetComponent<Text>();
            Text PurchaseAmtTxt = transform.Find("PurchaseAmtTxt1").GetComponent<Text>();
            PurchaseAmtTxt.text = PlayerPrefs.GetInt("DecorPurchaseAmt", 50).ToString();
            LvText.text = "LEVEL " + PlayerPrefs.GetInt("DecorNum", 1);
        }

        if (transform.Find("CustomLvTxt2") != null)
        {
            Text LvText = transform.Find("CustomLvTxt2").GetComponent<Text>();
            Text PurchaseAmtTxt = transform.Find("PurchaseAmtTxt2").GetComponent<Text>();
            PurchaseAmtTxt.text = PlayerPrefs.GetInt("WallPurchaseAmt", 50).ToString();
            LvText.text = "LEVEL " + PlayerPrefs.GetInt("WallNum", 1);
        }
        
        if (transform.Find("CustomLvTxt3") != null)
        {
            Text LvText = transform.Find("CustomLvTxt3").GetComponent<Text>();
            Text PurchaseAmtTxt = transform.Find("PurchaseAmtTxt3").GetComponent<Text>();
            PurchaseAmtTxt.text = PlayerPrefs.GetInt("TablePurchaseAmt", 50).ToString();
            LvText.text = "LEVEL " + PlayerPrefs.GetInt("TableNum", 1);
        }
    }

    public void EnableButton()
    {
        CustomizeBtn.SetActive(true);
    }

    private void Update()
    {
        if(DebugMode == true)
        {
            PlayerPrefs.SetInt("Coins", 999);
        }

        if (transform.Find("CustomLvTxt1") != null)
        {
            if (PlayerPrefs.GetInt("DecorPurchaseAmt") > PlayerPrefs.GetInt("Coins", 100))
            {
                GetComponent<Button>().interactable = false;
            }
        }

        if (transform.Find("CustomLvTxt2") != null)
        {
            if (PlayerPrefs.GetInt("WallPurchaseAmt") > PlayerPrefs.GetInt("Coins", 100))
            {
                GetComponent<Button>().interactable = false;
            }
        }

        if (transform.Find("CustomLvTxt3") != null)
        {
            if (PlayerPrefs.GetInt("TablePurchaseAmt") > PlayerPrefs.GetInt("Coins", 100))
            {
                GetComponent<Button>().interactable = false;
            }
        }
    }

    public void CustomizeButton()
    {
        Camera.main.GetComponent<Animator>().enabled = false;
        Camera.main.transform.position = new Vector3(10.4f, 1.6f, -14.6f);
        CustomizeBtn.SetActive(false);
        CustomizeMenu.SetActive(true);
        StartMenu = GameObject.Find("StartMenu");
        StartMenu.SetActive(false);
    }

    public void BackButton()
    {
        Camera.main.transform.position = new Vector3(3.29999995f, -0.620000005f, -11.71f);
        CustomizeBtn.SetActive(true);
        CustomizeMenu.SetActive(false);
        StartMenu.SetActive(true);
        Camera.main.GetComponent<Animator>().enabled = true;
    }

    public void BackButton2()
    {
        PlayerPrefs.SetInt("LevelNum", PlayerPrefs.GetInt("LevelNum") + 1);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void UpgradeDecor()
    {
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins", 100) - PlayerPrefs.GetInt("DecorPurchaseAmt", 50));
        Debug.Log("Coins: " + PlayerPrefs.GetInt("Coins"));
        Debug.Log("PurchaseAmt: " + PlayerPrefs.GetInt("DecorPurchaseAmt"));
        Text LvText = transform.Find("CustomLvTxt1").GetComponent<Text>();
        Text PurchaseAmtTxt = transform.Find("PurchaseAmtTxt1").GetComponent<Text>();
        PlayerPrefs.SetInt("DecorPurchaseAmt", PlayerPrefs.GetInt("DecorPurchaseAmt", 50) + 50);
        PurchaseAmtTxt.text = PlayerPrefs.GetInt("DecorPurchaseAmt", 50).ToString();
        PlayerPrefs.SetInt("DecorNum", PlayerPrefs.GetInt("DecorNum", 1) + 1);
        LvText.text = "LEVEL " + PlayerPrefs.GetInt("DecorNum", 1);
        Text CoinTxt = GameObject.Find("CoinAmt").GetComponent<Text>();
        CoinTxt.text = PlayerPrefs.GetInt("Coins", 100).ToString();
    }

    public void UpgradeWall()
    {

        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins", 100) - PlayerPrefs.GetInt("WallPurchaseAmt", 50));
        Text LvText = transform.Find("CustomLvTxt2").GetComponent<Text>();
        Text PurchaseAmtTxt = transform.Find("PurchaseAmtTxt2").GetComponent<Text>();
        PlayerPrefs.SetInt("WallPurchaseAmt", PlayerPrefs.GetInt("WallPurchaseAmt", 50) + 50);
        PurchaseAmtTxt.text = PlayerPrefs.GetInt("WallPurchaseAmt", 50).ToString();
        PlayerPrefs.SetInt("WallNum", PlayerPrefs.GetInt("WallNum", 1) + 1);
        LvText.text = "LEVEL " + PlayerPrefs.GetInt("WallNum", 1);
        Text CoinTxt = GameObject.Find("CoinAmt").GetComponent<Text>();
        CoinTxt.text = PlayerPrefs.GetInt("Coins", 100).ToString();
    }

    public void UpgradeTables()
    {
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins", 100) - PlayerPrefs.GetInt("TablePurchaseAmt", 50));
        Text LvText = transform.Find("CustomLvTxt3").GetComponent<Text>();
        Text PurchaseAmtTxt = transform.Find("PurchaseAmtTxt3").GetComponent<Text>();
        PlayerPrefs.SetInt("TablePurchaseAmt", PlayerPrefs.GetInt("TablePurchaseAmt", 50) + 50);
        PurchaseAmtTxt.text = PlayerPrefs.GetInt("TablePurchaseAmt", 50).ToString();
        PlayerPrefs.SetInt("TableNum", PlayerPrefs.GetInt("TableNum", 1) + 1);
        LvText.text = "LEVEL " + PlayerPrefs.GetInt("TableNum", 1);
        Text CoinTxt = GameObject.Find("CoinAmt").GetComponent<Text>();
        CoinTxt.text = PlayerPrefs.GetInt("Coins", 100).ToString();
    }

    public void Upgrade()
    {
        foreach (GameObject g in DecorUpgrades)
        {
            g.SetActive(false);
        }

        foreach (GameObject g in WallUpgrades)
        {
            g.SetActive(false);
        }

        foreach(GameObject g in TableUpgrades)
        {
            g.SetActive(false);
        }

        if(PlayerPrefs.GetInt("DecorNum", 1) >= DecorUpgrades.Length)
        {
            DecorUpgrades[DecorUpgrades.Length - 1].SetActive(true);
        }
        else
        {
            DecorUpgrades[PlayerPrefs.GetInt("DecorNum", 1)].SetActive(true);
        }

        if (PlayerPrefs.GetInt("WallNum", 1) >= WallUpgrades.Length)
        {
            WallUpgrades[WallUpgrades.Length - 1].SetActive(true);
        }
        else
        {
            WallUpgrades[PlayerPrefs.GetInt("WallNum", 1)].SetActive(true);
        }

        if (PlayerPrefs.GetInt("TableNum", 1) >= TableUpgrades.Length)
        {
            TableUpgrades[TableUpgrades.Length - 1].SetActive(true);
        }
        else
        {
            TableUpgrades[PlayerPrefs.GetInt("TableNum", 1)].SetActive(true);
        }
    }
}
