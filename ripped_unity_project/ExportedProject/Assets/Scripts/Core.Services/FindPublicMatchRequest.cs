using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct FindPublicMatchRequest : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public int PropertiesLength { get => default; }
		public long MatchStartTimeout { get => default; }
	}
}
