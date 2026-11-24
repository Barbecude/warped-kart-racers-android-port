using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct ClientSessionInfo : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public bool IsInLobby { get => default; }
		public bool IsReady { get => default; }
		public SessionKartVisuals? Visuals { get => default; }
	}
}
