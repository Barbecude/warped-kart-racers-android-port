using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct EventFinishStanding : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public EventStanding? Standing { get => default; }
		public short TotalScore { get => default; }
	}
}
