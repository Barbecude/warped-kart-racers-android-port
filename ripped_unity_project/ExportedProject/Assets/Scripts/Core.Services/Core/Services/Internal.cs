using Unity.Collections;
using UniRx.Async;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Services
{
	public class Internal : Client
	{
		public delegate void NativeFunc();
		public struct NativeRequest { }
		public struct HTTP { public struct Request { } public enum Method { GET = 0, POST = 1 } }
		public struct NativeConfig { }
		public struct BuilderBuffer { }
		public const int ReplicatorEnvelopeBufferSize = 1024;
		public const int ReplicatorDataBufferSize = 2048;
		private static TimeSpan lowFrequencyUpdateThreshold;
		private int requestId;
		private Internal.NativeConfig config;
		private Internal.BuilderBuffer replicatorBuffer;
		private byte[] replicatorDataBuffer;
		private ByteBuffer replicatorByteBuffer;
		private ByteBuffer replicatorDataByteBuffer;
		private ReplicatorOutput replicatorOutput;
		private bool replicatorDataUpdateEnabled;
		private int replicatorSerializationRate;
		private int replicatorMaxInputStreamCount;
		private Client.ReplicationStats previousReplicationStats;
		private Client.ReplicationStats currentReplicationStats;
		private TimeSpan replicatorElapsed;
		private TimeSpan repliactionStatsElapsed;
		private float realtimeSinceReplicationSend;
		private float realtimeSinceReplicationRecv;
		private MatchNetworkInputFuncs matchNetworkInputFuncs;
		private FlatBufferBuilder builder;
		private LogLevel logLevel;
		private ErrorCode lastErrorCode;
		private DisconnectCause lastDisconnectCause;
		private MatchQueueLeftReason lastMatchQueueLeftReason;
		private DateTime networkTime;
		private TimeSpan updateElapsed;
		private float realtimeSinceNetworkTime;
		private bool errorAsyncRequests;
		private static Internal client;
		private static int pid;
		private static Client.Config userConfig;
		private static string lastLog;
		private const string Library = "__Internal";
		public Internal Instance { get => default; }
		private TimeSpan dt { get => default; }
		public virtual void SetLogLevel(LogLevel logLevel) { }
		public virtual void SetErrorAsyncRequests(bool error) { }
		public virtual void Initialise(Client.Config userConfigIn) { }
		public virtual void Finalise() { }
		public virtual MatchNetworkInputFuncs GetMatchNetworkInputFuncs() { return default; }
		public virtual bool SendMatchDataToPlayers(IntPtr data, uint size, bool reliable) { return default; }
		public virtual bool SendMatchDataToPlayer(IntPtr data, uint size, FixedString64Bytes playerId, bool reliable) { return default; }
		public virtual bool SendMatchDataToHost(IntPtr data, uint size, bool reliable) { return default; }
		public virtual Client.ReplicationStats GetReplicationStats() { return default; }
		public virtual void UpdateReplicatorData() { }
		public virtual void SetReplicatorDataUpdateEnabled(bool enabled) { }
		public virtual bool GetReplicatorDataUpdateEnabled() { return default; }
		public virtual int GetReplicatorSerializationRate() { return default; }
		public virtual int GetReplicatorMaxOutputStreamCount() { return default; }
		public virtual int GetReplicatorMaxInputStreamCount() { return default; }
		public virtual void SetReplicatorSerializationRate(int rate) { }
		public virtual bool SendAllData() { return default; }
		public virtual bool ReceiveAllData() { return default; }
		public virtual bool IsMatchPlayerConnected(FixedString64Bytes playerId) { return default; }
		public virtual bool IsMatchStarted() { return default; }
		public bool SendReplicatorDataToPlayer(IntPtr data, uint size, FixedString64Bytes playerId, bool reliable) { return default; }
		public bool SendReplicatorDataToTarget(IntPtr data, uint size, bool reliable, bool all) { return default; }
		public virtual void Update() { }
		public virtual ErrorCode ShowLeaderboards() { return default; }
		public virtual ErrorCode AdvanceRecurringLeadeboards() { return default; }
		public virtual ErrorCode AddLeaderboardScores(FixedString64Bytes leaderboardId) { return default; }
		public virtual ErrorCode ClearLeaderboardScores(FixedString64Bytes leaderboardId) { return default; }
		public virtual uint GetMaxSaveSize() { return default; }
		public virtual bool AreRemoteSavesReachable() { return default; }
		public virtual bool AreRemoteSavesBackgroundSyncing() { return default; }
		public virtual void ClearLocalSaveStorage() { }
		public virtual string GetSaveAccountId() { return default; }
		public virtual SaveAccountStatus GetSaveAccountStatus() { return default; }
		public virtual SaveEnvironment GetSaveEnvironment() { return default; }
		public virtual FixedString64Bytes GetLocale() { return default; }
		public virtual FixedString64Bytes GetLanguage() { return default; }
		public virtual bool GetConnectionUseAlternativePorts() { return default; }
		public virtual void SetConnectionUseAlternativePorts(bool enabled) { }
		public virtual DisconnectCause GetPreviousDisconnectCause() { return default; }
		public virtual FixedString64Bytes GetConnectionRegion() { return default; }
		public virtual FixedString64Bytes GetConnectionProtocol() { return default; }
		public virtual int GetConnectionRTT() { return default; }
		public virtual int GetConnectionRTTVariance() { return default; }
		public virtual int GetConnectionErrorCount() { return default; }
		public virtual int GetConnectionWarningCount() { return default; }
		public virtual int GetConnectionId() { return default; }
		public virtual FixedString512Bytes GetConnectionStats() { return default; }
		public virtual FixedString512Bytes GetConnectionTrafficStatsInbound() { return default; }
		public virtual FixedString512Bytes GetConnectionTrafficStatsOutbound() { return default; }
		public virtual FixedString512Bytes GetConnectionTrafficStats() { return default; }
		public virtual FixedString64Bytes GetEncodedRegionCode(int region) { return default; }
		public virtual bool IsConnected() { return default; }
		public virtual bool IsConnecting() { return default; }
		public virtual string GetLastLog() { return default; }
		public virtual ErrorCode GetLastErrorCode() { return default; }
		public virtual DisconnectCause GetLastDisconnectCause() { return default; }
		public virtual MatchQueueLeftReason GetLastMatchQueueLeftReason() { return default; }
		public virtual bool IsGenuine() { return default; }
		public virtual bool HasFeature(OptionalFeature feature) { return default; }
		public virtual void RequestReview() { }
		public virtual void Share(FixedString512Bytes content, int x, int y) { }
		public virtual ErrorCode DeleteRemoteSave(uint index) { return default; }
		public virtual ErrorCode WriteRemoteSave(uint index, long fromAddress, uint size) { return default; }
		public virtual UniTask Connect() { return default; }
		public virtual void Disconnect() { }
		public virtual FixedString64Bytes GetSessionId() { return default; }
		public virtual bool IsMatchQueued() { return default; }
		public virtual TimeSpan GetMatchQueueMatchStartCountdown() { return default; }
		public virtual bool LeaveMatch() { return default; }
		public virtual UniTask LeaveMatchQueue() { return default; }
		public virtual UniTask FindPublicMatch() { return default; }
		public virtual UniTask FindPublicMatch(FindPublicMatchParams args) { return default; }
		public virtual UniTask CreatePrivateMatch() { return default; }
		public virtual ErrorCode ShowAchievements() { return default; }
		public virtual UniTask Logout() { return default; }
		public virtual uint GetPlayerSyncId() { return default; }
		public virtual ErrorCode AuthenticateLocalPlayer() { return default; }
		public virtual ErrorCode UnAuthenticateLocalPlayer() { return default; }
		public virtual ErrorCode SetLocalPlayerUnderAge(bool underAge) { return default; }
		public virtual ErrorCode SetLocalPlayerMultiplayerRestricted(bool restricted) { return default; }
		public virtual bool IsLocalPlayerAuthenticated() { return default; }
		public virtual bool IsLocalPlayerUnderAge() { return default; }
		public virtual bool IsLocalPlayerMultiplayerRestricted() { return default; }
		public virtual ErrorCode GetGroupLeaveMatchQueueError() { return default; }
		public virtual bool CanGroupLeaveMatchQueue() { return default; }
		public virtual bool IsInGroup() { return default; }
		public virtual bool IsGroupLeader() { return default; }
		public virtual bool IsPlayerGroupLeader(FixedString64Bytes playerId) { return default; }
		public virtual bool IsPlayerGroupMember(FixedString64Bytes playerId) { return default; }
		public virtual UniTask LeaveGroup() { return default; }
		public virtual ErrorCode CancelJoinGroup() { return default; }
		public virtual int GetSessionTime() { return default; }
		public virtual int GetSessionLocalTime() { return default; }
		public virtual int GetSessionTimeOffset() { return default; }
		public virtual uint GetMaxSessionDataSize() { return default; }
		public virtual ErrorCode SetOwnSessionData(IntPtr data, uint size, bool force) { return default; }
		public virtual void GetOwnSessionData(IntPtr targetBuffer, IntPtr outSize) { }
		public virtual ErrorCode ClearOwnSessionData() { return default; }
		public virtual ErrorCode RequestOtherPlayersSessionData() { return default; }
		public virtual ErrorCode ReadOtherPlayerSessionData(FixedString64Bytes playerId, IntPtr targetBuffer, IntPtr outSize) { return default; }
		public virtual bool IsInSession() { return default; }
		public virtual bool IsSessionHost() { return default; }
		public virtual bool IsSessionPlayerHost(FixedString64Bytes playerId) { return default; }
		public virtual bool IsSessionPlayerConnected(FixedString64Bytes playerId) { return default; }
		public virtual bool KickOtherSessionPlayer(FixedString64Bytes playerId) { return default; }
		public virtual string GetProtocolVersion() { return default; }
		public virtual bool IsBlockingNetworkTaskPending() { return default; }
		public virtual bool IsBlockingSaveTaskPending() { return default; }
		public virtual bool HasSyncedNetworkTime() { return default; }
		public virtual DateTime GetNetworkTime() { return default; }
		public virtual ErrorCode ShowGameCenterAccessPoint(GameCenterAccessPointLocation location, bool localeIndependant, bool showHighlights) { return default; }
		public virtual ErrorCode HideGameCenterAccessPoint() { return default; }
		public virtual ErrorCode SetGameCenterAccessPointFocused(bool focused) { return default; }
		public virtual ErrorCode SelectGameCenterAccessPoint() { return default; }
		public virtual NetworkReachability GetNetworkReachability() { return default; }
		public bool CanSerializeReplication(TimeSpan elapsed) { return default; }
		private bool CanTimeout(RequestPayload requestType) { return default; }
		private bool IsBlockingSaveTask(RequestPayload requestType) { return default; }
		private bool IsBlockingNetworkTask(RequestPayload requestType) { return default; }
		private void OnLocalPlayerAuthenticatedInternal(IntPtr buffer, int size) { }
		private void OnLocalPlayerUnauthenticatedInternal() { }
		private void OnGroupJoinedInternal(IntPtr buffer, int size) { }
		private void OnGroupJoinedUpdateInternal(IntPtr buffer, int size) { }
		private void OnGroupLeftInternal(IntPtr buffer, int size) { }
		private void OnGroupMemberJoinedInternal(IntPtr buffer, int size) { }
		private void OnGroupMemberLeftInternal(IntPtr buffer, int size) { }
		private void OnGroupLeaderChangedInternal(IntPtr buffer, int size) { }
		private void OnAchievementsUpdatedInternal(IntPtr buffer, int size) { }
		private void OnPlayerAuthenticatedInternal(IntPtr buffer, int size) { }
		private void OnPlayerUnauthenticatedInternal(IntPtr buffer, int size) { }
		private void OnMatchStartedInternal(IntPtr buffer, int size) { }
		private void OnMatchLeftInternal() { }
		private void OnMatchQueueJoinedInternal() { }
		private void OnMatchQueueUpdatedInternal(IntPtr buffer, int size) { }
		private void OnMatchQueueLeftInternal(IntPtr buffer, int size) { }
		private void OnConnectedInternal(IntPtr buffer, int size) { }
		private void OnDisconnectedInternal(IntPtr buffer, int size) { }
		private void OnLogInternal(IntPtr buffer, int size) { }
		private void OnSaveUpdatedInternal(IntPtr buffer, int size) { }
		private void OnSaveRecommendedInternal(IntPtr buffer, int size) { }
		private void OnSaveAccountStatusUpdatedInternal(IntPtr buffer, int size) { }
		private void OnSaveAccountAuthenticatedInternal(IntPtr buffer, int size) { }
		private void OnSaveAccountUnauthenticatedInternal(IntPtr buffer, int size) { }
		private void OnSaveAccountStorageFullInternal() { }
		private void OnSetKey(IntPtr buffer, int size) { }
		private string OnGetKey(IntPtr buffer, int size) { return default; }
		private void OnDeleteKey(IntPtr buffer, int size) { }
		private bool OnHasKey(IntPtr buffer, int size) { return default; }
		private void OnDeleteAllKeys() { }
		private void OnLeaderboardSetsUpdatedInternal(IntPtr buffer, int size) { }
		private void OnLeaderboardScoresUpdatedInternal(IntPtr buffer, int size) { }
		private void OnSessionOtherDataUpdatedInternal(IntPtr buffer, int size) { }
		private void OnSessionOwnDataUpdatedInternal() { }
		private void OnSessionPlayerConnectedInternal(IntPtr buffer, int size) { }
		private void OnSessionPlayerDisconnectedInternal(IntPtr buffer, int size) { }
		private void OnSessionPlayerActiveInternal(IntPtr buffer, int size) { }
		private void OnSessionPlayerInactiveInternal(IntPtr buffer, int size) { }
		private void OnSessionJoinedInternal() { }
		private void OnSessionLeftInternal() { }
		private void OnSessionHostChangedInternal(IntPtr buffer, int size) { }
		private void OnLinkedInternal(IntPtr buffer, int size) { }
		private void OnReplicatorDataInternal(IntPtr ptr, int size) { }
		private void OnResponse(IntPtr buffer, int size) { }
		private void StartRequest() { }
		private void StartEmptyRequest() { }
		private void FinishRequest() { }
		private ErrorCode InvokeSyncWithRequest(Internal.NativeFunc func) { return default; }
		private ErrorCode InvokeSync(Internal.NativeFunc func) { return default; }
		private ErrorCode Invoke(Internal.NativeFunc func, IntPtr buffer) { return default; }
		private Internal.NativeRequest CreateNativeRequest(RequestPayload requestType) { return default; }
		private void SetLastErrorCode(ErrorCode code) { }
		private void LogDebug(string message) { }
		private void LogInfo(string message) { }
		private void LogWarn(string message) { }
		private void LogError(string message) { }
		private void Log(LogLevel logLevel, string message) { }
		internal static void LogManaged(LogLevel logLevel, string message) { }
		private static void UnityLog(LogLevel logLevel, string message) { }
		public static uint HashImpl(FixedString64Bytes str) { return default; }
		private static Internal.HTTP.Request CreateXlIndexRequest(string name, Internal.HTTP.Method method, object data) { return default; }
		public static ErrorCode ServicesLogin(IntPtr buffer) { return default; }
		public static ErrorCode ServicesLogout(IntPtr buffer) { return default; }
		public static byte ServicesLeaveMatch() { return default; }
		public static byte ServicesIsMatchStarted() { return default; }
		public static byte ServicesSendAllData() { return default; }
		public static byte ServicesReceiveAllData() { return default; }
		public static ErrorCode ServicesGetAchievements(IntPtr buffer) { return default; }
		public static ErrorCode ServicesResetAchievements(IntPtr buffer) { return default; }
		public static ErrorCode ServicesShowAchievements() { return default; }
		public static ErrorCode ServicesProgressAchievements(IntPtr buffer) { return default; }
		public static ErrorCode ServicesGetGroup(IntPtr buffer) { return default; }
		public static ErrorCode ServicesGetGroupLeaveMatchQueueError() { return default; }
		public static ErrorCode ServicesCreateGroup(IntPtr buffer) { return default; }
		public static ErrorCode ServicesJoinGroup(IntPtr buffer) { return default; }
		public static ErrorCode ServicesLeaveGroup(IntPtr buffer) { return default; }
		public static ErrorCode ServicesCancelJoinGroup() { return default; }
		public static byte ServicesIsInGroup() { return default; }
		public static byte ServicesIsGroupLeader() { return default; }
		public static ErrorCode ServicesShowLeaderboards() { return default; }
		public static ErrorCode ServicesGetLeaderboardSets(IntPtr buffer) { return default; }
		public static ErrorCode ServicesGetLeaderboardScores(IntPtr buffer) { return default; }
		public static ErrorCode ServicesSubmitLeaderboardScores(IntPtr buffer) { return default; }
		public static ErrorCode ServicesAdvanceRecurringLeaderboards() { return default; }
		public static ErrorCode ServicesGetPlayer(IntPtr buffer) { return default; }
		public static uint ServicesGetPlayerSyncId() { return default; }
		public static ErrorCode ServicesGetLocalPlayer(IntPtr buffer) { return default; }
		public static ErrorCode ServicesAuthenticateLocalPlayer() { return default; }
		public static ErrorCode ServicesUnAuthenticateLocalPlayer() { return default; }
		public static ErrorCode ServicesSetLocalPlayerUnderAge(byte underAge) { return default; }
		public static ErrorCode ServicesSetLocalPlayerMultiplayerRestricted(byte restricted) { return default; }
		public static byte ServicesIsLocalPlayerAuthenticated() { return default; }
		public static byte ServicesIsLocalPlayerUnderAge() { return default; }
		public static byte ServicesIsLocalPlayerMultiplayerRestricted() { return default; }
		public static IntPtr ServicesGetSessionId() { return default; }
		public static long ServicesGetMatchQueueMatchStartCountdownMs() { return default; }
		public static byte ServicesIsMatchQueued() { return default; }
		public static ErrorCode ServicesConnect(IntPtr buffer) { return default; }
		public static ErrorCode ServicesDisconnect(IntPtr buffer) { return default; }
		public static ErrorCode ServicesLeaveMatchQueue(IntPtr buffer) { return default; }
		public static ErrorCode ServicesFindPublicMatch(IntPtr buffer) { return default; }
		public static ErrorCode ServicesCreatePrivateMatch(IntPtr buffer) { return default; }
		public static byte ServicesAreRemoteSavesReachable() { return default; }
		public static byte ServicesAreRemoteSavesBackgroundSyncing() { return default; }
		public static void ServicesClearLocalSaveStorage() { return default; }
		public static IntPtr ServicesGetSaveAccountId() { return default; }
		public static SaveAccountStatus ServicesGetSaveAccountStatus() { return default; }
		public static SaveEnvironment ServicesGetSaveEnvironment() { return default; }
		public static uint ServicesGetMaxSaveSize() { return default; }
		public static ErrorCode ServicesReadSave(IntPtr buffer) { return default; }
		public static ErrorCode ServicesWriteSave(IntPtr buffer) { return default; }
		public static ErrorCode ServicesGetSaves(IntPtr buffer) { return default; }
		public static ErrorCode ServicesResolveSave(IntPtr buffer) { return default; }
		public static ErrorCode ServicesDeleteSave(IntPtr buffer) { return default; }
		public static ErrorCode ServicesSyncSave(IntPtr buffer) { return default; }
		public static ErrorCode ServicesWriteRemoteSave(IntPtr buffer) { return default; }
		public static ErrorCode ServicesDeleteRemoteSave(uint index) { return default; }
		public static IntPtr ServicesGetLocale() { return default; }
		public static IntPtr ServicesGetLanguage() { return default; }
		public static byte ServicesGetConnectionUseAlternativePorts() { return default; }
		public static void ServicesSetConnectionUseAlternativePorts(byte enabled) { return default; }
		public static DisconnectCause ServicesGetPreviousDisconnectCause() { return default; }
		public static IntPtr ServicesGetConnectionRegion() { return default; }
		public static IntPtr ServicesGetConnectionProtocol() { return default; }
		public static int ServicesGetConnectionRTT() { return default; }
		public static int ServicesGetConnectionRTTVariance() { return default; }
		public static int ServicesGetConnectionErrorCount() { return default; }
		public static int ServicesGetConnectionWarningCount() { return default; }
		public static int ServicesGetConnectionId() { return default; }
		public static IntPtr ServicesGetConnectionStats() { return default; }
		public static IntPtr ServicesGetConnectionTrafficStatsInbound() { return default; }
		public static IntPtr ServicesGetConnectionTrafficStatsOutbound() { return default; }
		public static IntPtr ServicesGetConnectionTrafficStats() { return default; }
		public static IntPtr ServicesGetEncodedRegionCode(int region) { return default; }
		public static byte ServicesIsConnected() { return default; }
		public static byte ServicesIsConnecting() { return default; }
		public static byte ServicesIsGenuine() { return default; }
		public static byte ServicesHasFeature(OptionalFeature feature) { return default; }
		public static void ServicesRequestReview() { return default; }
		public static int ServicesGetSessionTime() { return default; }
		public static int ServicesGetSessionLocalTime() { return default; }
		public static int ServicesGetSessionTimeOffset() { return default; }
		public static uint ServicesGetMaxSessionDataSize() { return default; }
		public static ErrorCode ServicesClearOwnSessionData() { return default; }
		public static ErrorCode ServicesRequestOtherPlayersSessionData() { return default; }
		public static byte ServicesIsInSession() { return default; }
		public static byte ServicesIsSessionHost() { return default; }
		public static void ServicesInitialise(ref Internal.NativeConfig config) { return default; }
		public static void ServicesUpdate() { return default; }
		public static void ServicesFinalise() { return default; }
		public static void ServicesSetLogLevel(int logLevel) { return default; }
		public static ErrorCode ServicesShowGameCenterAccessPoint(GameCenterAccessPointLocation location, bool localeIndependant, bool showHighlights) { return default; }
		public static ErrorCode ServicesHideGameCenterAccessPoint() { return default; }
		public static ErrorCode ServicesSetGameCenterAccessPointFocused(bool focused) { return default; }
		public static ErrorCode ServicesSelectGameCenterAccessPoint() { return default; }
		public static void OnServicesResponse(IntPtr buffer, int size) { }
		public static void OnServicesLocalPlayerAuthenticated(IntPtr buffer, int size) { }
		public static void OnServicesLocalPlayerUnauthenticated(IntPtr buffer, int size) { }
		public static void OnServicesGroupJoined(IntPtr buffer, int size) { }
		public static void OnServicesGroupJoinedUpdate(IntPtr buffer, int size) { }
		public static void OnServicesGroupLeft(IntPtr buffer, int size) { }
		public static void OnServicesGroupMemberJoined(IntPtr buffer, int size) { }
		public static void OnServicesGroupMemberLeft(IntPtr buffer, int size) { }
		public static void OnServicesGroupLeaderChanged(IntPtr buffer, int size) { }
		public static void OnServicesAchievementsUpdated(IntPtr buffer, int size) { }
		public static void OnServicesPlayerAuthenticated(IntPtr buffer, int size) { }
		public static void OnServicesPlayerUnauthenticated(IntPtr buffer, int size) { }
		public static void OnServicesMatchStarted(IntPtr buffer, int size) { }
		public static void OnServicesMatchLeft(IntPtr buffer, int size) { }
		public static void OnServicesMatchQueueJoined(IntPtr buffer, int size) { }
		public static void OnServicesMatchQueueUpdated(IntPtr buffer, int size) { }
		public static void OnServicesMatchQueueLeft(IntPtr buffer, int size) { }
		public static void OnServicesConnected(IntPtr buffer, int size) { }
		public static void OnServicesDisconnected(IntPtr buffer, int size) { }
		public static void OnServicesLog(IntPtr buffer, int size) { }
		public static void OnServicesSaveUpdated(IntPtr buffer, int size) { }
		public static void OnServicesSaveRecommended(IntPtr buffer, int size) { }
		public static void OnServicesSaveAccountStatusUpdated(IntPtr buffer, int size) { }
		public static void OnServicesSaveAccountAuthenticated(IntPtr buffer, int size) { }
		public static void OnServicesSaveAccountUnauthenticated(IntPtr buffer, int size) { }
		public static void OnServicesSaveAccountStorageFull(IntPtr buffer, int size) { }
		public static void OnServicesSetKey(IntPtr buffer, int size) { }
		public static string OnServicesGetKey(IntPtr buffer, int size) { return default; }
		public static void OnServicesDeleteKey(IntPtr buffer, int size) { }
		public static byte OnServicesHasKey(IntPtr buffer, int size) { return default; }
		public static void OnServicesDeleteAllKeys(IntPtr _, int __) { }
		public static int OnServicesGetNetworkReachability(IntPtr buffer, int size) { return default; }
		public static void OnServicesLeaderboardSetsUpdated(IntPtr buffer, int size) { }
		public static void OnServicesLeaderboardScoresUpdated(IntPtr buffer, int size) { }
		public static void OnServicesSessionOtherDataUpdated(IntPtr buffer, int size) { }
		public static void OnServicesOwnSessionDataUpdated(IntPtr buffer, int size) { }
		public static void OnServicesSessionPlayerConnected(IntPtr buffer, int size) { }
		public static void OnServicesSessionPlayerDisconnected(IntPtr buffer, int size) { }
		public static void OnServicesSessionPlayerActive(IntPtr buffer, int size) { }
		public static void OnServicesSessionPlayerInactive(IntPtr buffer, int size) { }
		public static void OnServicesSessionLeft(IntPtr buffer, int size) { }
		public static void OnServicesSessionJoined(IntPtr buffer, int size) { }
		public static void OnServicesSessionHostChanged(IntPtr buffer, int size) { }
		public static void OnServicesLinked(IntPtr buffer, int size) { }
		public static void OnServicesReplicatorData(IntPtr buffer, int size) { }
		private static ByteBuffer ToByteBuffer(IntPtr buffer, int size) { return default; }
		private static Player AsPlayer(IntPtr buffer, int size) { return default; }
		private static Group AsGroup(IntPtr buffer, int size) { return default; }
		private static Achievements AsAchievements(IntPtr buffer, int size) { return default; }
		private static LeaderboardSets AsLeaderboardSets(IntPtr buffer, int size) { return default; }
		private static LeaderboardScores AsLeaderboardScores(IntPtr buffer, int size) { return default; }
		private static string GetDisplayName(Internal.NativeFunc func) { return default; }
		private static byte ToByte(bool value) { return default; }
		private static bool ToBool(byte value) { return default; }
	}
}
