using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Services
{
	public class ReplicatorOutput
	{
		private readonly Internal client;
		private readonly FlatBufferBuilder builder;
		private readonly int maxStreamCount;
		private int time;
		public int MaxOutputStreamCount { get => default; set { } }
		public void Add(ulong syncCookie, uint syncId, SyncCategory syncCategory, short syncInstanceId, QuantizedVector3UShort position, QuantizedQuaternionByte rotation, QuantizedVector3UShort velocity) { }
		public void Start() { }
		public int Finish() { return default; }
		private void SendEnvelope() { }
		private static int CalculateMaxStreamCount(int envelopeSize) { return default; }
	}
}
