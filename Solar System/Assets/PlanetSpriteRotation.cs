using UnityEngine;
using System.Collections;
using System;

public class PlanetSpriteRotation : MonoBehaviour {

	private bool update = true;//used for animating sprite
	private int sortingOrder;//used for determing sorting order
	private int radius;//radius before perspective

	// Use this for initialization
	void Start () {
		transform.localPosition = new Vector3(0.0f, -0.01f * GetComponent<RetroPlanet>().radius, 0.0f);
		sortingOrder = GetComponent<SpriteRenderer> ().sortingOrder;
		radius = GetComponent<RetroPlanet> ().radius;
	}
	
	// Update is called once per frame
	void Update () {
		//get location
		float parentAlpha = transform.parent.GetComponent<PlanetRotation> ().alpha;

		RetroPlanet retro = GetComponent<RetroPlanet> ();

		//calcuate and set amount of shadow
		float shadeWidth = (float)(Math.Sin (parentAlpha + Math.PI) + 1);
		retro.shadeWidth = shadeWidth;

		//calculate and set planet size
		retro.radius = (int)( (5 * Math.Sin (parentAlpha + Math.PI)) + radius);

		//calculate and set sorting order
		if (shadeWidth > 0 && shadeWidth < 1) {
			GetComponent<SpriteRenderer> ().sortingOrder = -1 * sortingOrder;
		} else if(shadeWidth >= 1){
			GetComponent<SpriteRenderer> ().sortingOrder = sortingOrder;
		}
			
		//if its time ot redraw the sprite call update sprite
		if (update) {
			StartCoroutine ("UpdateSprite");
			update = false;
		}
	}

	//waits then redraws sprite
	IEnumerator UpdateSprite(){
		yield return new WaitForSeconds(0.1f);
		this.GetComponent<RetroPlanet>().Redraw();
		update = true;
	}
}
