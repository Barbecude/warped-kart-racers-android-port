using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct HostConfig : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public string SessionId { get => default; }
		public short MapKey { get => default; }
		public int TimeLimit { get => default; }
		public short NumberOfLaps { get => default; }
		public sbyte NumberOfAi { get => default; }
	}
}
