using Core.Services;
using FlatBuffers;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public class NetworkServicesOutput
	{
		private ServicesManager _services;
		private byte[] _buffer;
		public void Init(ServicesManager servicesManager) { }
		public void WriteVoteToHost(FlatBufferBuilder builder, NetworkVote networkVote) { }
		public void WriteStartVoting(FlatBufferBuilder builder, short firstMapIndex, short firstGameModeKey, short secondMapIndex, short secondGameModeKey, NetworkSessionTime endVoteTimeStamp) { }
		public void WriteVoteResult(FlatBufferBuilder builder, short mapIndex, short gameModeKey) { }
		public void WriteUsableRequestToHost(FlatBufferBuilder builder, short usableTableKey) { }
		public void WriteUsableResponseToPlayer(FlatBufferBuilder builder, NetworkPlayer toPlayer, short usableDefinitionKey) { }
		public void WriteGameModeDataToHost(FlatBufferBuilder builder, NetworkGameMode gameMode) { }
		public void WriteGameMode(FlatBufferBuilder builder, NetworkGameMode gameMode) { }
		public void WriteEventStandingToHost(FlatBufferBuilder builder, NetworkEventStanding standing) { }
		public void WriteHostMigrationState(FlatBufferBuilder builder, NetworkMigrationState state) { }
		public void WriteHostMigrationDone(FlatBufferBuilder builder, NetworkSessionTime resumeTime, uint delta) { }
		private void WriteToHost(byte[] data, uint size, bool reliable) { }
		private void WriteToOtherPlayers(byte[] data, uint size, bool reliable) { }
		private void WriteToSingleOtherPlayer(byte[] data, uint size, bool reliable, FixedString64Bytes playerId) { }
	}
}
