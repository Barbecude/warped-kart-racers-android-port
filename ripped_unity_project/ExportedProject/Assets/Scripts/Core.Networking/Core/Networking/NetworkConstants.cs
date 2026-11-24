using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public static class NetworkConstants
	{
		public const int MaxNetworkPlayers = 8;
		public const int MaxPlayersIncludingAi = 12;
		public const int DefaultBuilderSize = 1024;
		public const int MaxIncomingPacketsPerFrame = 512;
		public const uint AiSyncIdOffset = 1;
		public const int KartUpdatesPerSecond = 1;
		public const int TournamentRoundCapacity = 3;
		public const int DnfPosition = 0;
		public const int MaxLatencyCompensationInMs = 450;
		public const int QuickPlayMatchStartTimeoutInMs = 20000;
		public const int TournamentMatchStartTimeoutInMs = 40000;
		public const int QuickPlayVoteTimeoutInMs = 6000;
		public const int ForceEventEndTimeInMs = 20000;
		public const int EventAutoContinueTimeInMs = 7000;
		public const float LobbyToVotingDelaySec = 3;
		public const float MaxWaitForHostConfigInSec = 10;
		public static float MaxWaitForMatch;
		public const int MigrationLongWaitTime = 3000;
		public const int MigrationShortWaitTime = 1000;
		public const int SavedMigrationFrames = 200;
		public const float MaxGhostingTimeSec = 0.21f;
		public const int MaxMaps = 100;
	}
}
