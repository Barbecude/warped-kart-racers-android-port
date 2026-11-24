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
	public class CharacterDefinition : AssetDefinition
	{
		public const int XpRewardCount = 3;
		[SerializeField] private AssetManagerAtlasedSpriteRef _headshotAtlasedSpriteRef;
		[SerializeField] protected DefinitionID _ownerID;
		[SerializeField] protected DefinitionID _defaultAlternateSkinID;
		[SerializeField] private string _skinDisplayNameLocKey;
		[SerializeField] private bool _needsTallHeadRewardCamera;
		[SerializeField] private DefinitionID _xpRewardId1;
		[SerializeField] private DefinitionID _xpRewardId2;
		[SerializeField] private DefinitionID _xpRewardId3;
		[SerializeField] private int _fmodId;
		[SerializeField] private int _chanceOfSpeaking;
		[SerializeField] private Vector2Int _characterSelect;
		[SerializeField] private Vector2Int _characterRank;
		public AssetManagerAtlasedSpriteRef HeadshotAtlasedSpriteRef { get => default; }
		public string SkinDisplayNameLocKey { get => default; }
		public DefinitionID OwnerID { get => default; }
		public DefinitionID DefaultAlternateSkinID { get => default; }
		public DefinitionID AlternateID { get => default; }
		public bool NeedsTallHeadRewardCamera { get => default; }
		public DefinitionID XpRewardId1 { get => default; }
		public DefinitionID XpRewardId2 { get => default; }
		public DefinitionID XpRewardId3 { get => default; }
		public bool IsBaseSkin { get => default; }
		public int FmodId { get => default; }
		public Vector2 CharacterSelectGridPos { get => default; }
		public Vector2 CharacterRankGridPos { get => default; }
		public int ChanceOfSpeaking { get => default; }
		public DefinitionID GetXpRewardIdByIndex(int index) { return default; }
		public bool IsSkin() { return default; }
	}
}
