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
	public class ResultsScreen : AtlasScreen<ResultsScreenViewBehaviour, ResultsScreen.TransitionData>
	{
		private const string HoorayUIAudioName = "event:/UI/Front_End/ResultHooray";
		private const string CelebrationFirejetsAudioName = "event:/Gameplay_SFX/FireJets2D";
		private const float TimeToPlayFireJets = 3.9;
		private const float TimeToShowNextButton = 1;
		private FrontEndScene _frontEndScene;
		private MultiplayerCeremonyBehaviour _multiplayerCeremonyBehaviour;
		private bool _waitingOnCameraFlyThru;
		private bool _cameraFlyThruHasFinished;
		private int _waitToSettleFrames;
		private WaitForSeconds _labelPopWait;
		private WaitForSeconds _continuePopWait;
		private Coroutine _labelPopCoroutine;
		private bool _waitingOnLoad;
		private float _playFirejetsAudioTimer;
		private float _showNextButtonTimer;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnUpdate(float dt) { }
		protected virtual void OnAfterExit() { }
		private void OnCameraFlyThruComplete() { }
		private void HideAllUI() { }
		private IEnumerator AnimateUIInRoutine() { return default; }
		private bool ContinuePressed() { return default; }
	}
}
