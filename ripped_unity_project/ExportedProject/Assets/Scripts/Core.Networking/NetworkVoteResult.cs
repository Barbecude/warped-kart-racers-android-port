using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct NetworkVoteResult
	{
		public short Map;
		public short MapType;
	}
}
