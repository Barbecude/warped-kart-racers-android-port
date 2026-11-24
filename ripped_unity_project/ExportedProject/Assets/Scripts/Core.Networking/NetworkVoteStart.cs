using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct NetworkVoteStart
	{
		public short Map1;
		public short MapType1;
		public short Map2;
		public short MapType2;
		public NetworkSessionTime CompleteTimeStamp;
	}
}
