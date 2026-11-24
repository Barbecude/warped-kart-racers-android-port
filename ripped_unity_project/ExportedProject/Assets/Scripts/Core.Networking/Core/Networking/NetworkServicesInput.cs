using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public class NetworkServicesInput
	{
		private int _atIndex;
		private ServicesManager _services;
		public void Clear() { }
		public void Init(ServicesManager services) { }
		public void DeInit() { }
		public void OnReceive(string fromPlayerId, uint fromPlayerSyncId, IntPtr buffer, uint size, bool reliable) { }
		private void InitList() { }
	}
}
