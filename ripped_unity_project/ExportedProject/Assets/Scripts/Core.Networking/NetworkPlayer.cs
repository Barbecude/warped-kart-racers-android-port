namespace Core.Networking
{
	public struct NetworkPlayer
	{
		public enum NetworkPlayerType
		{
			Local = 0,
			Remote = 1,
			LocalAi = 2,
			RemoteAi = 3
		}

		public string Id;
		public NetworkPlayerType Type;
		public uint SyncId;
		public string DisplayName;
		public uint FallbackSyncId;

		public bool IsLocal() => Type == NetworkPlayerType.Local;
		public bool IsRemote() => Type == NetworkPlayerType.Remote;
		public bool IsAI() => Type == NetworkPlayerType.LocalAi || Type == NetworkPlayerType.RemoteAi;
	}
}