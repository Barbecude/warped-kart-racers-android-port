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

namespace Atlas.Networking
{
	public class NetworkHostSession : NetworkSession
	{
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void LateUpdate() { }
		public virtual void CastVote(NetworkPlayer fromPlayer, short data) { }
		public virtual void RespondToUsableRequest(short usableDefinitionKey, NetworkPlayer toPlayer) { }
		public virtual void RequestGameModeLoaded() { }
		public virtual void RequestOwnedPlayerFinished(NetworkPlayer player, float splinePosition, uint finalScore, bool dnf, NetworkSessionTime timeStamp) { }
		public virtual void SetVoteOptions(short firstMapKey, short firstGameModeKey, short secondMapKey, short secondGameModeKey, int voteDurationInMs) { }
		public virtual void SetVoteResult(short mapKey, short gameModeKey) { }
		public virtual void RequestResultsFinished() { }
		public virtual void SendHostMigrationState() { }
		protected virtual void OnSessionPlayerDisconnected(Player player) { }
		private void SetVote(NetworkVote vote) { }
		private void AddAndCheckResultsDone(uint syncId) { }
		private void CheckResultsDone() { }
		private void CheckAndAdvanceFinish() { }
		private void InternalGameModeLoaded(NetworkGameMode networkGameMode) { }
		private void InternalSendVotesAndCheckAdvance() { }
		private void CheckAndAdvanceGameMode() { }
		private void CheckAndAdvanceHostMigration() { }
		private void OnClientCarUpdate(ClientUpdateHolder clientUpdate, uint syncId) { }
		private void OnClientVote(ClientUpdateHolder clientUpdate) { }
		private void OnClientStanding(ClientUpdateHolder clientUpdate) { }
		private void OnClientGameModeData(ClientUpdateHolder clientUpdate) { }
		private void OnClientRequestUsable(ClientUpdateHolder clientUpdate, uint syncId) { }
		private void OnClientUpdate(ClientUpdateHolder clientUpdate, uint syncId) { }
	}
}
