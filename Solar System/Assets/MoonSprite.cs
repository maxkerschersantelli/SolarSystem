using UnityEngine;
using System.Collections;
using System;

public class MoonSprite : MonoBehaviour {

	public GameObject planet;//planet moon rotates around
	public int layer = 0;//used for determining sorting order

	private bool update = true;//used for redrawing sprite

	// Use this for initialization
	void Start () {
		transform.localPosition = new Vector3(0.0f, -0.01f * GetComponent<RetroPlanet>().radius, 0.0f);
		GetComponent<SpriteRenderer> ().sortingOrder = transform.parent.GetComponent<SpriteRenderer> ().sortingOrder;
	}

	// Update is called once per frame
	void Update () {
		float planetAlpha = planet.GetComponent<PlanetRotation> ().alpha;//get location relative to sun

		//calculate and set shadow based on planets position relative to sun
		float shadeWidth = (float)(Math.Sin (((2 * Math.PI * planetAlpha) / 6) + Math.PI) + 1);
		GetComponent<RetroPlanet> ().shadeWidth = shadeWidth;

		//Get position relative to planet
		float parentAlpha = transform.parent.GetComponent<MoonRotation> ().alpha;

		//if behind planet go behind planet else go infornt of planet
		if (parentAlpha > 0 && parentAlpha < Math.PI) {
			GetComponent<SpriteRenderer> ().sortingOrder = planet.transform.GetChild(0).GetComponent<SpriteRenderer> ().sortingOrder - layer;
		} else {
			GetComponent<SpriteRenderer> ().sortingOrder = planet.transform.GetChild(0).GetComponent<SpriteRenderer> ().sortingOrder + layer;
		}

		//if its time ot redraw the sprite call update sprite
		if (update) {
			StartCoroutine ("UpdateSprite");
			update = false;
		}
	}

	//waits then redraws sprite
	IEnumerator UpdateSprite(){
		yield return new WaitForSeconds(0.25f);
		this.GetComponent<RetroPlanet>().Redraw();
		update = true;
	}
}
