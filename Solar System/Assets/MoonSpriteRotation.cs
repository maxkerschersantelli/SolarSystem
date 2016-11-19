using UnityEngine;
using System.Collections;
using System;

public class MoonSpriteRotation : MonoBehaviour {

	public GameObject planet;

	private bool update = true;
	private int sortingOrder;

	// Use this for initialization
	void Start () {
		transform.localPosition = new Vector3(0.0f, -0.01f * GetComponent<RetroPlanet>().radius, 0.0f);
		GetComponent<SpriteRenderer> ().sortingOrder = transform.parent.GetComponent<SpriteRenderer> ().sortingOrder;
	}

	// Update is called once per frame
	void Update () {
		float planetAlpha = planet.GetComponent<PlanetRotation> ().alpha;

		float shadeWidth = (float)(Math.Sin (((2 * Math.PI * planetAlpha) / 6) + Math.PI) + 1);
		this.GetComponent<RetroPlanet> ().shadeWidth = shadeWidth;

		float parentAlpha = transform.parent.GetComponent<MoonRotation> ().alpha;

		if (parentAlpha > 0 && parentAlpha < Math.PI) {
			GetComponent<SpriteRenderer> ().sortingOrder = transform.parent.GetComponent<SpriteRenderer> ().sortingOrder - 1;
			print ("peep");
		} else {
			GetComponent<SpriteRenderer> ().sortingOrder = transform.parent.GetComponent<SpriteRenderer> ().sortingOrder + 1;
			print ("poop");
		}

		if (update) {
			StartCoroutine ("UpdateSprite");
			update = false;
		}
	}

	IEnumerator UpdateSprite(){
		yield return new WaitForSeconds(0.25f);
		this.GetComponent<RetroPlanet>().Redraw();
		update = true;
	}
}