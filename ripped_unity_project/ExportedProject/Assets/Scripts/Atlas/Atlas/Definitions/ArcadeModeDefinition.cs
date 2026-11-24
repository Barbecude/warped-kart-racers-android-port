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
	public class ArcadeModeDefinition : Definition
	{
		[SerializeField] private string _displayNameLocKey;
		[SerializeField] private GameType _gameType;
		[SerializeField] private AssetManagerAtlasedSpriteRef _iconSpriteRef;
		[SerializeField] private AssetManagerSpriteRef _tiledBannerBackground;
		[SerializeField] private bool _disablePickupBoxes;
		[SerializeField] private DefinitionID _equipUsableOnStart;
		[SerializeField] private DefinitionID _battleEventDefinition;
		[SerializeField] private DefinitionID _raceEventDefinition;
		[SerializeField] private ArcadeModeDefinition.Setting[] _settings;
		[SerializeField] private string _modeDescriptionLocKey;
		public string DisplayNameLocKey { get => default; }
		public GameType GameType { get => default; }
		public AssetManagerAtlasedSpriteRef IconSpriteRef { get => default; }
		public AssetManagerSpriteRef TiledBannerBackground { get => default; }
		public bool DisablePickupBoxes { get => default; }
		public DefinitionID EquipUsableOnStart { get => default; }
		public DefinitionID BattleEventDefinition { get => default; }
		public DefinitionID RaceEventDefinition { get => default; }
		public string ModeDescriptionLocKey { get => default; }
		public int GetSetting(string key) { return default; }
	}
}
