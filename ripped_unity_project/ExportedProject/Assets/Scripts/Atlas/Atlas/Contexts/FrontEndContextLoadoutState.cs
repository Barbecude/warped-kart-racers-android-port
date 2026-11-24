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

namespace Atlas.Contexts
{
	public class FrontEndContextLoadoutState : State<FrontEndContextLoadoutState.LoadoutStateData, FrontEndContextLoadoutState.LoadoutTransitionData>
	{
		public enum LoadoutType
		{
			Character = 0,
			Kart = 1,
			Glider = 2,
			Antenna = 3,
			Wheels = 4,
			Boost = 5,
		}
		private AtlasUIManager _uiManager;
		private TopBarManager _topBarManager;
		private AtlasDefinitions _atlasDefinitions;
		private FrontEndScene _frontEndScene;
		private UnlockManager _unlockManager;
		private SaveManager _saveManager;
		private Network _network;
		private ServicesManager _services;
		private MatchMakingManager _matchMakingManager;
		public void Init(DependencyManager dependencyManager, FrontEndScene frontEndScene) { }
		protected virtual void OnDeInit() { }
		protected virtual void OnEnter() { }
		protected virtual void OnExit() { }
		private bool ShowCharacterSelect() { return default; }
		private void ShowRankRewardScreen() { }
		private void OnLoadoutTypeSelected(FrontEndContextLoadoutState.LoadoutType loadoutType, DefinitionID definitionID) { }
		private void OnMatchStarted(Match match) { }
		private void SinglePlayerFallback() { }
		private bool CharacterSelectBackPressed() { return default; }
		private void DeclineToQuitLobby() { }
		private void BackOutOfState() { }
		private void ShowKartSelect() { }
		private bool KartSelectBackPressed() { return default; }
		private void KartSelected() { }
	}
}
