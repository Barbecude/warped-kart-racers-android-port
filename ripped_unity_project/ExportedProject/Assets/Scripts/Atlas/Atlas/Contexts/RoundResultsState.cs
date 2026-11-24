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
	public class RoundResultsState : State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>
	{
		private const float _fallbackTime = 20;
		private Network _network;
		private AtlasUIManager _uiManager;
		private TopBarManager _topBarManager;
		private AtlasDefinitions _atlasDefinitions;
		private VotingManager _votingManager;
		private ContextManager _contextManager;
		private EndOfRoundScreen.TransitionData _endOfRoundtransitionData;
		private bool _hasRequestedResultsFinished;
		private float _fallbackTimer;
		public void Init(DependencyManager dependencyManager) { }
		protected virtual void OnDeInit() { }
		protected virtual void OnEnter() { }
		protected virtual void OnExit() { }
		protected virtual void OnUpdate(IUpdateParams updateParams) { }
		private void ShowRoundResultsScreen() { }
		public void RequestResultsFinish(Network network) { }
		private void BackOut() { }
		private void RemoveDelegates() { }
		private void OnResultsFinished() { }
		private void OnVoteStarted(NetworkVoteStart networkVoteStart) { }
		private bool IsTournamentOver() { return default; }
	}
}
