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
	public class MapDefinition : ContentDefinition
	{
		[SerializeField] private DefinitionID _proxyOfMapID;
		[SerializeField] private int _freePlayOrder;
		[SerializeField] private bool _playerFacing;
		[SerializeField] private AssetManagerSpriteRef _largeMapSpriteRef;
		[SerializeField] private AssetManagerAtlasedSpriteRef _smallMapSpriteRef;
		[SerializeField] private AssetManagerAtlasedSpriteRef _smallMinimapSpriteRef;
		[SerializeField] private AssetManagerSpriteRef _largeMinimapSpriteRef;
		[SerializeField] private string _musicEvent;
		[SerializeField] private bool _musicUseAlternativeIntro;
		[SerializeField] private bool _preferred;
		public DefinitionID ProxyOfMapID { get => default; }
		public int FreePlayOrder { get => default; }
		public bool PlayerFacing { get => default; }
		public List<SceneInfo> SceneInfoList { get => default; }
		public AssetManagerSpriteRef LargeMapSpriteRef { get => default; }
		public AssetManagerAtlasedSpriteRef SmallMapSpriteRef { get => default; }
		public AssetManagerAtlasedSpriteRef SmallMinimapSpriteRef { get => default; }
		public AssetManagerSpriteRef LargeMinimapSpriteRef { get => default; }
		public DefinitionRef<GameContextDefinition> GameContextDefinitionDefinitionRef { get => default; }
		public string MusicEvent { get => default; }
		public bool MusicUseAlternativeIntro { get => default; }
		public bool Preferred { get => default; }
	}
}
