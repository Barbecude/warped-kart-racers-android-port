using UnityEngine;

namespace Atlas.UI
{
	public class AtlasUIManager
	{
		public void Init(GameObject prefab, Transform root, AtlasSharedScreenParams sharedParams) { }
		public void DeInit() { }
		public void RegisterScreen<T>(string prefabPath) { }
		public void Update(object updateParams) { }
		public void LateUpdate(object updateParams) { }
	}
}
