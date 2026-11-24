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

namespace Atlas.Definitions
{
	public class PickupBoxDefinition : Definition
	{
		[SerializeField] private string _assetKey;
		[SerializeField] private DefinitionID _playerTable;
		[SerializeField] private DefinitionID _aiTable;
		[SerializeField] private string _locKey;
		[SerializeField] private AssetManagerAtlasedSpriteRef _pickupAtlasedSpriteRef;
		[SerializeField] private AssetManagerAtlasedSpriteRef _pickupSmallAtlasedSpriteRef;
		[SerializeField] private float _pickBoxHeuristicValue;
		public string AssetKey { get => default; }
		public DefinitionID PlayerTable { get => default; }
		public DefinitionID AiTable { get => default; }
		public string LocKey { get => default; }
		public AssetManagerAtlasedSpriteRef PickupAtlasedSpriteRef { get => default; }
		public AssetManagerAtlasedSpriteRef PickupSmallAtlasedSpriteRef { get => default; }
		public bool HasLocKeyAndSprite { get => default; }
		public float PickBoxHeuristicValue { get => default; }
	}
}
