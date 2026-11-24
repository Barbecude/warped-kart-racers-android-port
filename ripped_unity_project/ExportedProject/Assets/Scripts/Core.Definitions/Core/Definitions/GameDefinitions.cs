using Core.Assets;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Definitions
{
	public class GameDefinitions
	{
		private const int InitialDataListCapacity = 10;
		private const string AssetBucketName = "Definitions";
		private AssetManager _assetManager;
		public void Init(AssetManager assetManager) { }
		public void DeInit() { }
		public void RequestLoad() { }
		public IEnumerator WaitOnLoad() { return default; }
		public IDefinition GetDefinitionById(DefinitionID id) { return default; }
		public bool IsValidID(DefinitionID id) { return default; }
	}
}
