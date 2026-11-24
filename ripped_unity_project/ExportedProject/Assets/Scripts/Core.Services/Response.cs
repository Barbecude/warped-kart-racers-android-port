using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct Response : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public int RequestId { get => default; }
		public ErrorCode ErrorCode { get => default; }
		public ResponsePayload PayloadType { get => default; }
	}
}
