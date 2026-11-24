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
	public class UpdateMessageDefinition : Definition
	{
		[SerializeField] private AssetManagerSpriteRef _tiledBannerBackground;
		[SerializeField] private HomeScreenIPSetup _homeScreenIPSetup;
		[SerializeField] private AssetManagerAtlasedSpriteRef _topImageAtlasedSpriteRef;
		[SerializeField] private AssetManagerAtlasedSpriteRef _bottomImageAtlasedSpriteRef;
		[SerializeField] private Color _topImageBGColor;
		[SerializeField] private Color _bottomImageBGColor;
		private MapDefinition _mapFocus;
		public AssetManagerSpriteRef TiledBannerBackground { get => default; }
		public HomeScreenIPSetup HomeScreenIPSetup { get => default; }
		public DefinitionRef<MapDefinition> MapFocusDefRef { get => default; }
		public MapDefinition MapFocus { get => default; }
		public AssetManagerAtlasedSpriteRef TopImageAtlasedSpriteRef { get => default; }
		public AssetManagerAtlasedSpriteRef BottomImageAtlasedSpriteRef { get => default; }
		public Color TopImageBGColor { get => default; }
		public Color BottomImageBGColor { get => default; }
		public void SetMapDef(MapDefinition definition) { }
	}
}
