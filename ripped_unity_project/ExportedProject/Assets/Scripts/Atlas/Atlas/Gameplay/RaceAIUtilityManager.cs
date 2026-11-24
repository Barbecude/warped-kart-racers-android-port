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

namespace Atlas.Gameplay
{
	public class RaceAIUtilityManager
	{
		private GameContextBase _gameContext;
		private RaceKartAIDefinition _raceKartAiDefinition;
		private bool _inited;
		private bool _isValidData;
		private RaceAIGroupCache[] _aiGroupsCache;
		private RaceAIGroupCache[] _aiGroupsPlacementCache;
		private GameContextPlayer _referenceHumanPlayerCache;
		private float _referenceHumanPlayerProgress;
		public void Init(GameContextBase gameContext, RaceKartAIDefinition raceKartAiDefinition) { }
		public void PostInit() { }
		public RaceAIGroupCache GetAIGroupBasedOnRacePlacement(int aiRacePlacement) { return default; }
		public RaceAIGroupCache GetAIGroupBasedOnCharacter(DefinitionID characterID, SaveManager saveManager) { return default; }
		public RaceAIGroupCache GetAiGroupBasedOnAlternateCharacter(DefinitionID characterID, SaveManager saveManager, GameDefinitions gameDefinition) { return default; }
		public float GetReferenceHumanPlayerProgress() { return default; }
		private void UpdateValidData() { }
		public void LateUpdate() { }
		public void DeInit() { }
	}
}
