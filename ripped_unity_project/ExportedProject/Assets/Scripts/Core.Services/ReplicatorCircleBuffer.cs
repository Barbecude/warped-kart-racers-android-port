using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct ReplicatorCircleBuffer
	{
		private uint[] _buffer;
		private uint _capacity;
		private int _index;
		private uint _capacityUsed;
		public bool IsReady { get => default; }
	}
}
