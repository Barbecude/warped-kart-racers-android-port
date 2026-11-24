using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct NetworkSessionTime
	{
		public readonly int Value;
		public readonly bool IsValid;
		public static bool LogErrorsAsWarnings;
		private readonly int _epoch;
		private readonly NetworkSessionId _sessionId;
		public uint ValueUnsigned { get => default; }
	}
}
