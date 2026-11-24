using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Pickups;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Audio;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Networking;
using Core.Scenes;
using Core.Services;
using Core.Settings;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;
using Network = Atlas.Networking.Network;
using NetworkPlayer = Core.Networking.NetworkPlayer;

namespace Atlas.Rendering
{
	public class MaterialDuplicator
	{
		public List<Material> DuplicateMaterialList { get => default; }
		public IReadOnlyList<MaterialDuplicator.MaterialPair> MaterialPairs { get => default; }
		public void Init(int initialMaterialCapacity, int initialMeshRenderCapacity, int initialMeshRenderMaterialCapacity) { }
		public void DeInit() { }
		public void Clear() { }
		public Material GetCachedOrDuplicate(Material original, int id) { return default; }
		private bool ShouldSkipBasedOnTag(string gameObjectTag, string tagFilter) { return default; }
	}
}
