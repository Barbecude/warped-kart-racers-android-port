using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct HostStanding : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public int StandingsLength { get => default; }
		public int ForceEventEndTimeStamp { get => default; }
		public bool HasEventEndTimeStamp { get => default; }
	}
}
