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
	public class NetworkClientSession : NetworkSession
	{
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void LateUpdate() { }
		public virtual void CastVote(NetworkPlayer player, short data) { }
		public virtual void RequestUsableFromHost(short usableTableKey) { }
		public virtual void RequestResultsFinished() { }
		public virtual void RequestGameModeLoaded() { }
		public virtual void RequestOwnedPlayerFinished(NetworkPlayer player, float splinePosition, uint finalScore, bool dnf, NetworkSessionTime timeStamp) { }
		private void OnHostCarUpdate(HostUpdateHolder hostUpdate) { }
		private void OnHostVoteUpdate(HostUpdateHolder hostUpdate) { }
		private void OnHostHostVoteStart(HostUpdateHolder hostUpdate) { }
		private void OnHostVoteResult(HostUpdateHolder hostUpdate) { }
		private void OnHostUsable(HostUpdateHolder hostUpdate) { }
		private void OnHostGameModeUpdate(HostUpdateHolder hostUpdate) { }
		private void OnHostStanding(HostUpdateHolder hostUpdate) { }
		private void OnHostEventResults(HostUpdateHolder hostUpdate) { }
		private void OnHostMigration(HostUpdateHolder hostUpdate) { }
		private void OnHostMigrationDone(HostUpdateHolder hostUpdate) { }
		private void OnHostUsableResponse(HostUpdateHolder hostUpdate) { }
		private void OnClientUpdate(ClientUpdateHolder clientUpdate, uint syncId) { }
		private void OnHostUpdate(HostUpdateHolder hostUpdate) { }
	}
}
