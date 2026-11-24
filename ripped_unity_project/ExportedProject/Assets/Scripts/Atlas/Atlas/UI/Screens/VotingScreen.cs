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

namespace Atlas.UI.Screens
{
	public class VotingScreen : AtlasScreen<VotingScreenBehaviour, VotingScreen.TransitionData>
	{
		private static readonly uint DEFAULT_SYNC_ID;
		private AssetManager _assetManager;
		private CoroutineRunner _coroutineRunner;
		private AtlasDefinitions _definitions;
		private Coroutine _setDataRoutine;
		private VotingManager _votingManager;
		private Network _network;
		private VotingScreen.VotingPlayerInfo[] _votingPlayerInfos;
		private AssetManagerHandle _prefabHandle;
		private GameObject _voteIconPrefab;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterEnter() { }
		private void SetMapData(VotingScreenBehaviour.VoteOptions voteOption, DefinitionID mapID, DefinitionID typeID) { }
		private IEnumerator SetupData() { return default; }
		private void VoteMade(VotingScreenBehaviour.VoteChoice voteChoice) { }
		private void HideInput() { }
		private void OnHostMigrationStarted(bool isHost) { }
		protected virtual void OnUpdate(float dt) { }
		protected virtual void OnAfterExit() { }
		private void OnVoteUpdate(NetworkVoteUpdate voteUpdate) { }
		private void SetNewVote(NetworkVote vote) { }
		private int GetVoteInfoIndex(uint syncID) { return default; }
		private void OnVoteStageChanged(VotingManager.Stage stage) { }
		private void ShowTie() { }
		private void ShowWinner() { }
		private void SetTitleText(string text) { }
		private void OnTweenComplete() { }
		private void PopOffVotes() { }
	}
}
