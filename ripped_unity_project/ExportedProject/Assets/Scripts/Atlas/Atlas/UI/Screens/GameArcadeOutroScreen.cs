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
	public class GameArcadeOutroScreen : AtlasScreen<GameArcadeOutroScreenBehaviour, GameArcadeOutroScreen.TransitionData>
	{
		private OutroSequenceBeginRoundCompleteState _beginRoundCompleteState;
		private OutroSequenceShowPlacementsState _showPlacementsState;
		private GameArcadeOutroScreen.TransitionData _transitionData;
		private bool _newBest;
		private ArcadeEventDefinition.Medal _medalAchieved;
		private bool _endButtonShown;
		private bool _playerInfoFinishedEntryAnimation;
		private float _playerInfoExitAnimationStartDelayTimer;
		private bool _playerInfoExitAnimationPlayingOrPlayed;
		private bool _placementSequenceEnterStarted;
		private AudioEvent _noMedalEvent;
		private AudioEvent _bronzeEvent;
		private AudioEvent _silverEvent;
		private AudioEvent _goldEvent;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterExit() { }
		private void OnEnterOutroState() { }
		private void OnExitOutroState() { }
		protected virtual void OnUpdate(float dt) { }
		public virtual void OnInputFamilyChanged(InputFamily family, InputGlyphMapping[] glyphMappings) { }
		private void OnEntryAnimationComplete() { }
		private void OnCompletePlayerFinishedExitAnimation() { }
		private bool IsResultsAnimationComplete() { return default; }
		private void StartShowPlacement() { }
		private void OnCompleteShowResultsAnim() { }
		private bool EndGame() { return default; }
		private void OnPlayPlacementSequenceExitComplete() { }
		private void OnPreEnterBeginRoundCompleteState() { }
	}
}
