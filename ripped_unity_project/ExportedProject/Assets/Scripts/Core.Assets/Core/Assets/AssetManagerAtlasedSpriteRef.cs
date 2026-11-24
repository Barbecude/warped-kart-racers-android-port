using UnityEngine.AddressableAssets;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Assets
{
	public class AssetManagerAtlasedSpriteRef
	{
		[SerializeField] private AssetReferenceAtlasedSprite _atlasSpriteRef;
		private Sprite _sprite;
		public Sprite Sprite { get => default; }
		public void RequestLoad(AssetManager assetManager, string bucketName) { }
		private void OnAssetLoadSuccessfully(object asset, string path, AssetManagerHandle handle) { }
	}
}
