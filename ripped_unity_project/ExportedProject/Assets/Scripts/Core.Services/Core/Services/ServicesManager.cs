using System;
using System.IO;
using Unity.Profiling;
using UnityEngine;

namespace Core.Services
{
	public class ServicesManager
	{
		private const float PartyInviteInvalidateTime = 300f;
		private const string _partyCodeQueryName = "partycode";
		private const string _partyCodeLocalPath = "/games/warped-kart-racers/";

		public const int SaveStorageSize = 409600;
		public const int SaveCount = 3;
		public const string AssociatedDomain = "electricsquare.com";

		private bool _wasLateUpdated;
		private string _photonAppVersion;
		private string _lastReceivedPartyCode;
		private float _timeSinceReceivedPartyCode;

		private static Action<string, uint, IntPtr, uint, bool> OnMatchDataReceived;

		public readonly TimeSpan DefaultMatchmakingCountdownTimeout = TimeSpan.FromSeconds(30);

		public Action<Client> OnClientCreated;
		public Action<string> OnPartyInvite;

		private static readonly ProfilerMarker _earlyUpdateProfilerMarker = new ProfilerMarker("ServicesManager.EarlyUpdate");
		private static readonly ProfilerMarker _updateProfilerMarker = new ProfilerMarker("ServicesManager.Update");
		private static readonly ProfilerMarker _lateUpdateProfilerMarker = new ProfilerMarker("ServicesManager.LateUpdate");

		public Client Client { get; private set; }

		public string AppVersion => _photonAppVersion;

		public string LastReceivedPartyCode => _lastReceivedPartyCode;

		public void Init(string photonAppVersion)
		{
			_photonAppVersion = photonAppVersion;
			// Android Offline Mode: local storage directory for the 3 save slots (400 KB each)
			string saveDir = Path.Combine(UnityEngine.Application.persistentDataPath, "OfflineSaves");
			Directory.CreateDirectory(saveDir);

			Client = new Client();
			OnClientCreated?.Invoke(Client);
		}

		public bool HasAccessPointSupport()
		{
			// Apple Game Center Access Point is iOS-only; disabled for offline Android
			return false;
		}

		public void ShowAccessPoint()
		{
		}

		public void HideAccessPoint()
		{
		}

		public static bool IsLoggingEnabled()
		{
			return false;
		}

		private string GetGuestName()
		{
			return "Player";
		}

		public void AddMatchDataFunc(Action<string, uint, IntPtr, uint, bool> func)
		{
			OnMatchDataReceived += func;
		}

		public void RemoveMatchDataFunc(Action<string, uint, IntPtr, uint, bool> func)
		{
			OnMatchDataReceived -= func;
		}

		public void DeInit()
		{
			Client = null;
			OnMatchDataReceived = null;
		}

		public void EarlyUpdate()
		{
			using (_earlyUpdateProfilerMarker.Auto())
			{
			}
		}

		public void Update()
		{
			using (_updateProfilerMarker.Auto())
			{
				if (!string.IsNullOrEmpty(_lastReceivedPartyCode))
				{
					_timeSinceReceivedPartyCode += Time.unscaledDeltaTime;
					if (_timeSinceReceivedPartyCode >= PartyInviteInvalidateTime)
					{
						ClearLastReceivedPartyCode();
					}
				}
			}
		}

		public void LateUpdate()
		{
			using (_lateUpdateProfilerMarker.Auto())
			{
				if (!_wasLateUpdated)
				{
					_wasLateUpdated = true;
				}
			}
		}

		public void SharePartyInvite(string prefixMessage, string partyCode)
		{
		}

		public void ClearLastReceivedPartyCode()
		{
			_lastReceivedPartyCode = null;
			_timeSinceReceivedPartyCode = 0f;
		}

		public static string GetOfflineSavePath(uint slotIndex)
		{
			return Path.Combine(UnityEngine.Application.persistentDataPath, "OfflineSaves", $"slot_{slotIndex}.sav");
		}
	}
}
