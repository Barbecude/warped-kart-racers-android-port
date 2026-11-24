using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct SessionInfo : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public byte GameType { get => default; }
		public ClientSessionInfo? ClientInfo { get => default; }
		public HostSessionInfo? HostInfo { get => default; }
	}
}
