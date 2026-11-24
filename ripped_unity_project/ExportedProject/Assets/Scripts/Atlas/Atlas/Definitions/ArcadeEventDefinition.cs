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
	public abstract class ArcadeEventDefinition : Definition
	{
		public enum Medal
		{
			None = 0,
			Bronze = 1,
			Silver = 2,
			Gold = 3,
		}
		[SerializeField] private DefinitionID _battleEventDefinition;
		[SerializeField] private DefinitionID _raceEventDefinition;
		[SerializeField] private AssetManagerAtlasedSpriteRef _eventIcon;
		[SerializeField] private int _bronzeThreshold;
		[SerializeField] private int _silverThreshold;
		[SerializeField] private int _goldThreshold;
		public DefinitionRef<MapDefinition> MapDefinitionRef { get => default; }
		public DefinitionID BattleEventDefinition { get => default; }
		public DefinitionID RaceEventDefinition { get => default; }
		public AssetManagerAtlasedSpriteRef EventIcon { get => default; }
		public int BronzeThreshold { get => default; }
		public int SilverThreshold { get => default; }
		public int GoldThreshold { get => default; }
		public int GetThreshold(ArcadeEventDefinition.Medal medal) { return default; }
	}
}
