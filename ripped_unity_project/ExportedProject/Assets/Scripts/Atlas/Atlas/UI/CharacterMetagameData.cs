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

namespace Atlas.UI
{
	public class CharacterMetagameData : LoadoutMetagameData
	{
		private NetworkPlayer _networkplayer;
		private CharacterDefinition _characterDefinition;
		private bool _useRankOverride;
		private int _overrideRankIndex;
		public bool IsSkin { get => default; }
		public Vector2 CharacterSelectGridPos { get => default; }
		public Vector2 CharacterRankGridPos { get => default; }
		public int FmodId { get => default; }
		public AssetManagerAtlasedSpriteRef HeadShotRef() { return default; }
		public void UpdateDefinitionAndPlayer(CharacterDefinition definition, NetworkPlayer player) { }
		public string SkinDisplayName() { return default; }
		public string PlayerName() { return default; }
		public bool IsLocalHuman() { return default; }
		public Sprite GetCharacterRankSprite(bool large) { return default; }
		public DefinitionID GetOwnerID() { return default; }
		public int GetCharacterRank() { return default; }
		public bool IsMaxRank() { return default; }
		public float GetRankCompletionPercentage() { return default; }
	}
}
