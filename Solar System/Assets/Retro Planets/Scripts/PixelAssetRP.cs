﻿using UnityEngine;
using System.Collections;

[RequireComponent (typeof (SpriteRenderer))]
public abstract class PixelAssetRP : MonoBehaviour {

	public bool GenerateAtRuntime = false;
	[HideInInspector]
	public Texture2D texture;
	protected int texDimensions = 32;
	protected int offset;

	void Start () {
		if(GenerateAtRuntime){
			GenerateAsset();
		}
	}

	protected virtual void SetupTexture(){
		if(GetComponent<SpriteRenderer>().sprite != null){
			Texture2D.DestroyImmediate(GetComponent<SpriteRenderer>().sprite.texture);
			Sprite.DestroyImmediate(GetComponent<SpriteRenderer>().sprite);
		}
		texture = PixelToolRP.SetupTexture(texDimensions, texDimensions);
		offset = texture.width/2;
	}
	
	protected void GenerateSprite(){
		texture = PixelToolRP.ClampTexture(texture);
		texture.Apply();
		GetComponent<SpriteRenderer>().sprite = Sprite.Create(texture, new Rect(new Vector2(0f,0f), new Vector2(texture.width, texture.height)), new Vector2(0.5f, 0.0f));
	}
	
	public void GenerateAsset(){
		SetupTexture();
		Draw();
		GenerateSprite();
	}

	public abstract void Draw();

}
