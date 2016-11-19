using UnityEngine;
using System.Collections;
using System;

public class RandomGenerator : MonoBehaviour {

	int maxPlanets = 8;
	int minPlanets = 1;

	int maxMoons = 3;
	int minMoons = 1;

	float planetRotationSpeed = 0.002f;


	// Use this for initialization
	void Start () {

		GameObject newPlanet;

		for (int i = minPlanets; i <= maxPlanets; i++) {
			if (UnityEngine.Random.Range (0.0f, 2.0f) > 1) {//decides whether or not to make a new planet
				newPlanet = MakePlanet (i * 4);//make new random planet
				for(int j = minMoons; j <= maxMoons; j++){
					if (UnityEngine.Random.Range (0.0f, 4.0f) < 1) {//decides wether or not to make a new moon
						MakeMoon (newPlanet, j);//make new moon
					}
				}
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private GameObject MakePlanet ( int layer ) {
		GameObject planet = (GameObject)Instantiate(Resources.Load("OrbitingPlanet"));

		//planet visual settings
		planet.transform.GetChild (0).GetComponent<RetroPlanet> ().radius = (int)UnityEngine.Random.Range (25f, 80f);
		planet.transform.GetChild (0).GetComponent<RetroPlanet> ().highlightColor = new Color(UnityEngine.Random.Range(0.0f,1.0f),UnityEngine.Random.Range(0.0f,1.0f),UnityEngine.Random.Range(0.0f,1.0f));
		planet.transform.GetChild (0).GetComponent<RetroPlanet> ().shadeColor = Color.black;

		//set speed
		planet.GetComponent<PlanetRotation> ().speed = planetRotationSpeed;

		//set random inital location
		planet.GetComponent<PlanetRotation> ().alpha = UnityEngine.Random.Range (0.0f, 2 * Mathf.PI);

		//set sorting order
		planet.transform.GetChild (0).GetComponent<SpriteRenderer> ().sortingOrder = layer;

		//set orbit
		planet.GetComponent<PlanetRotation> ().semimajor = (float)(layer * 0.5);
		planet.GetComponent<PlanetRotation> ().semiminor = planet.GetComponent<PlanetRotation> ().semimajor * 0.15f;

		return planet;
	}

	private void MakeMoon ( GameObject planet, int layer ){
		GameObject moon = (GameObject)Instantiate(Resources.Load("OrbitingMoon"));

		//set planet moon rotates around
		moon.GetComponent<MoonRotation> ().planet = planet;
		moon.transform.GetChild (0).GetComponent<MoonSprite> ().planet = planet;

		//sets moon radius
		moon.transform.GetChild (0).GetComponent<RetroPlanet> ().radius = (int)UnityEngine.Random.Range (4f, 8f);

		//sets moon sorting order
		moon.transform.GetChild (0).GetComponent<MoonSprite> ().layer = layer;

		//set moon speed
		moon.GetComponent<MoonRotation> ().speed = UnityEngine.Random.Range (0.005f, 0.007f);

		//set random inital location
		moon.GetComponent<MoonRotation> ().alpha = UnityEngine.Random.Range (0.0f, 2 * Mathf.PI);

		//set moon orbit
		moon.GetComponent<MoonRotation> ().semimajor = (planet.transform.GetChild (0).GetComponent<RetroPlanet> ().radius * 0.01f) + (0.2f * layer);
		moon.GetComponent<MoonRotation> ().semiminor = moon.GetComponent<MoonRotation> ().semimajor * 0.15f;
	}

	public void NewRandomScene(){
		Application.LoadLevel(Application.loadedLevel);
	}
}
	