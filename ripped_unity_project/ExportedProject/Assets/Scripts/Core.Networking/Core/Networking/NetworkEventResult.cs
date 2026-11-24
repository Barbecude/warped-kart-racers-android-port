using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public class NetworkEventResult
	{
		public void Set(HostEventResults results, NetworkSession session) { }
		public NetworkEventFinishStanding FindStandingBySyncId(uint syncId) { return default; }
		public NetworkScore FindPositionScoreBySyncId(uint syncId) { return default; }
		public void Clear() { }
		public bool IsValid() { return default; }
	}
}
