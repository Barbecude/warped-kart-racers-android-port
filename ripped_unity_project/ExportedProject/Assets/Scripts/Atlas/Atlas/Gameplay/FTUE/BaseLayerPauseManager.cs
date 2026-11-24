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

namespace Atlas.Gameplay.FTUE
{
	public class BaseLayerPauseManager
	{
		private PauseManager _pauseManager;
		private AtlasAudioManager _audioManager;
		private bool _isPaused;
		private float _pauseTimer;
		private float _currentPauseLength;
		private float _greyOutScreenFadeTime;
		private Color _greyOutStartingColour;
		private GameInProgressScreen _gameInProgressScreen;
		private bool _isResponsibleForDisablingInputs;
		private bool _controlsInputEnabled;
		private Action OnAfterUnPauseFinish;
		private Action OnAfterStartPauseFinish;
		public bool IsRequestingToDisableInputs { get => default; }
		public bool IsPaused { get => default; }
		public void Init(PauseManager pauseManager, AtlasAudioManager audioManager, bool controlsInputEnabled) { }
		public void DeInit() { }
		public void Update(float unscaledDT) { }
		public void OnInProgressScreenEntered(GameInProgressScreen gameInProgressScreen) { }
		public void OnAfterExitGameContextScreen() { }
		public void FTUEPause(float pauseOnEnter) { }
		public void FTUEUnPause() { }
		private void SetGreyOutAlpha(float t) { }
		public void OnExitInProgressState() { }
	}
}
