using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct NetworkVote
	{
		public enum VoteType
		{
			Valid = 0,
			Discarded = 1,
		}
		public uint SyncId;
		public short Data;
		public NetworkVote.VoteType Type;
	}
}
