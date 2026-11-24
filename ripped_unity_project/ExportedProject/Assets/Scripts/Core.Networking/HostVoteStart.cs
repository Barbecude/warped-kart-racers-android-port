using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct HostVoteStart : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public short Map1 { get => default; }
		public short Type1 { get => default; }
		public short Map2 { get => default; }
		public short Type2 { get => default; }
		public int CompleteTimeStamp { get => default; }
	}
}
