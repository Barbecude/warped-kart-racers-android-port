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

namespace Atlas.UI
{
	public class UIChallengeController
	{
		private DefinitionID _eventDefinitionID;
		private EventDefinition _eventDefinition;
		private LocalisationManager _localisationManager;
		private GameDefinitions _definitions;
		private StatsManager _statsManager;
		private UnlockManager _unlockManager;
		private UIChallengeProgressBehaviourContainer _challengeContainer;
		private bool _playTweenOnChallengeComplete;
		private bool _challengesVisible;
		private bool _challengesAreValid;
		private bool _challenge1Completed;
		private bool _challenge2Completed;
		private bool _challenge3Completed;
		public void Init(UIChallengeProgressBehaviourContainer container, DefinitionID eventDefinitionID, AtlasSharedScreenParams sharedScreenParams, bool playTweenOnChallengeComplete) { }
		public void DeInit() { }
		public void SetUpChallenges(bool animateOnFirstUpdate) { }
		public void TearDownChallenges() { }
		public void OnUpdate() { }
		public void ResetSetAllChallengeVisuals() { }
		private void SetUpChallengeProgress(string name, StatCondition refStatCondition, bool hideProgressBar, UIChallengeProgressBehaviour challengeProgressBehaviour, bool challengeAlreadyCompleted) { }
		private void UpdateChallengeProgress(StatCondition refStatCondition, UIChallengeProgressBehaviour challengeProgressBehaviour, bool animate) { }
		private void UpdateAllChallengeProgress(bool animate) { }
	}
}
