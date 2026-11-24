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

namespace Atlas.Contexts
{
	public class GameContextBaseIntroState : State
	{
		private GameContextBase _gameContextBase;
		private AtlasUIManager _uiManager;
		private VirtualCamera _virtualIntroOutroCam;
		private StateMachine _introSequenceStateMachine;
		private IntroSequenceMapPanState _mapPanState;
		private IntroSequencePlayerPanState _playerPanState;
		private IntroSequenceWaitingState _waitingState;
		private IntroSequenceCountdownState _countdownState;
		private IntroSequenceFinishedState _finishedState;
		public GameContextBase GameContextBase { get => default; }
		public IntroSequenceCountdownState CountDownState { get => default; }
		public void Init(GameContextBase gameContextBase, EventDefinition eventDefinition, DependencyManager dependencyManager) { }
		protected virtual void OnEnter() { }
		protected virtual void OnUpdate(IUpdateParams updateParams) { }
		protected virtual void OnLateUpdate(IUpdateParams updateParams) { }
		protected virtual void OnFixedUpdate(IUpdateParams updateParams) { }
		protected virtual void OnExit() { }
		private void TransitionToMapPan() { }
		private void TransitionToPlayerPan() { }
		private void TransitionToWaiting() { }
		private void TransitionToCountdown() { }
		private void TransitionToFinish() { }
		protected virtual void OnDeInit() { }
	}
}
