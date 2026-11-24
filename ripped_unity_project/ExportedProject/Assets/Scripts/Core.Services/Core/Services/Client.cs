using System;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;

		public struct Config { }

namespace Core.Services
{
	public abstract class Client
	{
		public Action OnPlayerUnauthenticated;
		public Action OnLocalPlayerUnauthenticated;
		public Action OnMatchLeft;
		public Action OnMatchQueueJoined;
		public Action OnConnected;
		public Action OnSaveAccountAuthenticated;
		public Action OnSaveAccountUnauthenticated;
		public Action OnSaveAccountStorageFull;
		public Action OnSessionOwnDataUpdated;
		public Action OnSessionJoined;
		public Action OnSessionLeft;
		public static Client Create() { return default; }
		public static uint Hash(FixedString64Bytes str) { return default; }
	}
}
