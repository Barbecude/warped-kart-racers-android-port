using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public abstract class NetworkSession
	{
		public NetworkDelegates Delegates;
		public NetworkServicesOutput NetworkOutput;
		public NetworkServicesInput NetworkInput;
		private ServicesManager Services;
		protected FlatBufferBuilder Builder;
		protected NetworkState State;
		protected NetworkMigrationManager NetworkMigrationManager;
		protected NetworkGameMode CurrentNetworkGameMode;
		protected NetworkTournament Tournament;
		protected bool IsVoteActive;
		protected NetworkSessionTime EndOfVoteTimeStamp;
		protected NetworkSessionTime LocalPlayerFinishedCallTime;
		protected NetworkSessionTime ForceEventEndTimeStamp;
		protected NetworkEventStanding LocalPlayerFinishStanding;
		protected bool HasLocalPlayerFinished;
		protected bool HasRequestedLocalPlayerFinished;
		protected bool HasRequestedResults;
		protected bool HasRequestedLoadingDone;
		protected NetworkEventResult NetworkEventResult;
		protected NetworkVoteUpdate NetworkVoteUpdate;
		protected bool EventComplete;
		protected bool IsSinglePlayer;
		private int _localPlayerIndexCache;
		private bool _isValid;
		private int _epoch;
		private int _previousTick;
		private int _previousLocalTick;
		private NetworkSessionId _id;
		public bool PauseTime { get => default; set { } }
		public bool PauseTimeOverride { get => default; set { } }
		public int LocalPlayerIndexCache { get => default; }
		public void Init(ServicesManager servicesManager) { }
		public void Init(bool singlePlayer) { }
		private void InitInternal(string description, string id, int epoch) { }
		private void InitDisconnectHandlers() { }
		private void DeInitDisconnectHandlers() { }
		public void Init(NetworkSession session, ServicesManager services) { }
		public virtual string ToString() { return default; }
		public void DeInit() { }
		public virtual void Ping(bool reliable) { }
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void LateUpdate() { }
		public NetworkSessionTime Now() { return default; }
		private NetworkSessionTime UpdateNow(int tick) { return default; }
		public NetworkSessionTime CreateTime(int tick) { return default; }
		public NetworkSessionTime CreateInvalidTime() { return default; }
		public bool IsValid() { return default; }
		public NetworkStateType GetNetworkStateType() { return default; }
		public bool IsEventCompleted() { return default; }
		public NetworkMigrationManager GetNetworkMigrationManager() { return default; }
		public void SetToHostConfigCompletedState() { }
		public void SetToEventStartedState() { }
		public NetworkTournament GetTournamentData() { return default; }
		public bool IsFirstRoundOfTournament() { return default; }
		public bool IsLastRoundOfTournament() { return default; }
		public NetworkVoteHistory GetTournamentVoteHistory(int round) { return default; }
		public NetworkSessionTime GetEventForceEndTimeStamp() { return default; }
		public NetworkEventResult GetEventResults() { return default; }
		public void AddOutgoingCarUpdate(NetworkCar carUpdate) { }
		public void AddOutgoingUsableUpdate(NetworkUsable networkUsable) { }
		public bool IsHost() { return default; }
		public NetworkPlayer GetLocalPlayer() { return default; }
		public NetworkPlayer GetPlayer(uint syncId) { return default; }
		public int NumberOfRealPlayers() { return default; }
		public bool IsOnlyHumanPlayer() { return default; }
		public virtual void SendHostMigrationState() { }
		public virtual void SetVoteOptions(short firstMapKey, short firstGameModeKey, short secondMapKey, short secondGameModeKey, int voteDurationInMs) { }
		public virtual void CastVote(NetworkPlayer fromPlayer, short data) { }
		public virtual void SetVoteResult(short mapKey, short gameModeKey) { }
		public void AddEventScore(NetworkScore score) { }
		public virtual void RequestUsableFromHost(short usableTableKey) { }
		public virtual void RespondToUsableRequest(short usableDefinitionKey, NetworkPlayer toPlayer) { }
		public virtual void RequestResultsFinished() { }
		public virtual void RequestGameModeLoaded() { }
		public NetworkSessionTime GetVoteEndTime() { return default; }
		public void SetMigrationStartTime(NetworkSessionTime time) { }
		public void DebugResetFinishedPlayers(int placement) { }
		protected virtual void OnSessionPlayerDisconnected(Player player) { }
		protected void OnMigrationSynced(NetworkSessionTime resumeTime, uint delta) { }
		protected void AddScoreToTournament(NetworkScore score) { }
		private void SortNetworkPlayers() { }
		private void OnDisconnected(DisconnectCause disconnectCause) { }
		public void Invalidate(string reason) { }
		public void SetTimePaused(bool paused) { }
		public void OnSinglePlayerApplicationUnpaused() { }
		protected void OnClientUsable(ClientUpdateHolder clientUpdate, uint syncId) { }
	}
}
