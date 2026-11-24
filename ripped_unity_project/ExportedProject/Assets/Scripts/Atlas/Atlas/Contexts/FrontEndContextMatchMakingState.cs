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
	public class FrontEndContextMatchMakingState : State<FrontEndContextMatchMakingState.MatchMakingStateData, FrontEndContextMatchMakingState.MatchMakingTransitionData>
	{
		private ServicesManager _services;
		private Network _network;
		private AtlasUIManager _uiManager;
		private TopBarManager _topBarManager;
		private ContextManager _contextManager;
		private MatchMakingManager _matchMakingManager;
		private MPErrorManager _mpErrorManager;
		private MessageBoxManager _messageBoxManager;
		public void Init(DependencyManager dependencyManager) { }
		public void ShowLobbyScreen() { }
		protected virtual void OnEnter() { }
		protected virtual void OnLateUpdate(IUpdateParams updateParams) { }
		protected virtual void OnFixedUpdate(IUpdateParams updateParams) { }
		protected virtual void OnExit() { }
		protected virtual void OnDeInit() { }
		private void ExitState() { }
		private void RemoveDelegates() { }
		private void OnMatchStarted(Match match) { }
		private void OnSinglePlayerFallback() { }
		private void MatchStarted() { }
		private void OnVoteStarted(NetworkVoteStart networkVoteStart) { }
		private void BackOut() { }
		private bool BackToLoadout(bool startOnCharSelect) { return default; }
		private bool StartGroupMatch() { return default; }
	}
}
