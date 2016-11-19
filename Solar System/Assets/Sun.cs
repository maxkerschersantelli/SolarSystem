using UnityEngine;
using System.Collections;

public class Sun : MonoBehaviour {


	public bool redraw = true;//used for animating sprite

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		//if its time ot redraw the sprite call update sprite
		if (redraw) {
			StartCoroutine ("UpdateSprite");
			redraw = false;
		}
	}

	//waits then redraws sprite
	IEnumerator UpdateSprite()
	{
		yield return new WaitForSeconds(0.1f);
		this.GetComponent<RetroPlanet>().Redraw();
		redraw = true;
	}
}
