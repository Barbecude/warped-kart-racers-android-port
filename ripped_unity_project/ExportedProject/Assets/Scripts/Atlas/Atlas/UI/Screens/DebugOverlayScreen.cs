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

namespace Atlas.UI.Screens
{
	public class DebugOverlayScreen : AtlasScreen<DebugOverlayScreenBehaviour, DebugOverlayScreen.TransitionData>
	{
		private const int ReusableStringBuilderLength = 256;
		private ServicesManager _servicesManager;
		private string _photonAppVersion;
		private StringBuilder _reusableStringBuilder;
		private string _lastPhotonAppVersion;
		private FixedString64Bytes _lastConnectionRegion;
		private FixedString64Bytes _lastConnectionProtocol;
		private bool _lastIsHost;
		private bool _lastIsHostIsValid;
		private int _highestBytesIn;
		private int _highestPacketsIn;
		private int _highestUnreliableCommandsIn;
		private int _highestReliableCommandsIn;
		private int _highestFragmentCommandsIn;
		private int _highestBytesOut;
		private int _highestPacketsOut;
		private int _highestUnreliableCommandsOut;
		private int _highestReliableCommandsOut;
		private int _highestFragmentCommandsOut;
		private int _lastBytesIn;
		private int _lastBytesOut;
		private bool _lastShowServicesInfo;
		private const int UpdateFPSFrequency = 30;
		private int _fpsFrameCount;
		private Stopwatch _fpsStopWatch;
		private static readonly string[] _ignoreErrorsEndingList;
		private static readonly string[] _ignoreStackTraceStarting;
		private const int _errorListSize = 5;
		private const int _errorTextBuilderSize = 1024;
		private const int _stackTraceLineCount = 4;
		private string[] _errorList;
		private string[] _stackTraceList;
		private int _lastErrorListIndex;
		private bool _captureErrorMessages;
		private StringBuilder _errorTextStringBuilder;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterExit() { }
		protected virtual void OnUpdate(float dt) { }
		private int ExtractInt(FixedString512Bytes text, FixedString32Bytes parameter) { return default; }
		private void OnLogMessageRecieved(string logString, string stackTrace, LogType type) { }
		private void AddErrorMessage(string errorMsg, string stackTrace) { }
		private void CaptureErrorMessages(bool enabled) { }
		private void HideErrorMessage() { }
	}
}
