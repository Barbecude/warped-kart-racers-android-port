using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Pickups;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Audio;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Networking;
using Core.Scenes;
using Core.Services;
using Core.Settings;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;
using Network = Atlas.Networking.Network;
using NetworkPlayer = Core.Networking.NetworkPlayer;

namespace Atlas.Networking
{
	public class NetworkLobbySessionData
	{
		private ServicesManager _services;
		private NetworkIdentifiers _networkIdentifiers;
		private ByteBuffer _byteBuffer;
		private FlatBufferBuilder _builder;
		private byte[] _bytes;
		public void Init(ServicesManager services, NetworkIdentifiers networkIdentifiers) { }
		public void ReadPlayerSessionData(NetworkLobbyPlayerData player, out bool isValidPlayerLoadout, out NetworkLoadout playerLoadout, out bool isValidHostConfig, out NetworkHostConfig hostConfig, out bool isReady, out bool isInLobby, out GameType gameType) { isValidPlayerLoadout = default; playerLoadout = default; isValidHostConfig = default; hostConfig = default; isReady = default; isInLobby = default; gameType = default; }
		public void SetLocalPlayerSessionData(NetworkLobbyPlayerData ownPlayer, byte gameType, bool force) { }
		public void SetHostSessionData(NetworkLobbyPlayerData ownPlayer, NetworkHostConfig hostConfig, byte gameType) { }
		public bool VerifyOwnSessionData(NetworkLobbyPlayerData player, byte gameType) { return default; }
		private string KeyToString(short key) { return default; }
		private short StringToKey(string identifier) { return default; }
	}
}
