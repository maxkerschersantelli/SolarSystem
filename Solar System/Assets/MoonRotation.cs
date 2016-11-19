using UnityEngine;
using System;

public class MoonRotation : MonoBehaviour {

	//center of orbit coordinates
	public float centerX = 0;
	public float centerY = 0;

	//size of orbit
	public float semimajor = 5;
	public float semiminor = 5;

	public float alpha = 1;//position in orbit
	public float speed = 0.001f;
	public GameObject planet;//planet this orbits around

	// Use this for initialization
	void Start () {
		//set center of orbit
		centerX = planet.transform.position.x;
		centerY = planet.transform.position.y;

		//calculate and set position 
		float x = (float)(centerX + (semimajor * Math.Cos(alpha)));
		float y = (float)(centerY + (semiminor * Math.Sin(alpha)));
		transform.position = new Vector2 (x, y);
	}
	
	// Update is called once per frame
	void Update () {
		//rotate toward sun
		transform.right = transform.position - (new Vector3 (0,0,0));

		//update center of orbit
		centerX = planet.transform.position.x;
		centerY = planet.transform.position.y;

		//update position in orbit
		alpha += speed;

		//keep alpha between 0 and 2pi
		if (alpha > (2 * Math.PI)) {
			alpha -= (float)(2.0 * Math.PI);
		}

		//update position
		float x = (float)(centerX + (semimajor * Math.Cos(alpha)));
		float y = (float)(centerY + (semiminor * Math.Sin(alpha)));
		transform.position = new Vector2 (x, y);
	}
}
