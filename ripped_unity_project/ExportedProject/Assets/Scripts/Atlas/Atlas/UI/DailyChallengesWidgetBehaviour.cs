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
	public class DailyChallengesWidgetBehaviour : MonoBehaviour
	{
		[SerializeField] private DailyChallengeElementBehaviour[] _dailyChallengeElementBehaviour;
		[SerializeField] private TMP_Text _timerLeftText;
		[SerializeField] private TMP_Text _timeText;
		[SerializeField] private GameObject _topBanner;
		[SerializeField] private GameObject _bottomBanner;
		private DailyChallengeManager _dailyChallengeManager;
		private SaveManager _saveManager;
		private LocalisationManager _localisationManager;
		private AtlasDefinitions _atlasDefinitions;
		private TimeSpan _cachedRefreshTimeSpan;
		private float _timeToNegate;
		private int _lastTotalSeconds;
		private readonly TimeSpan _oneSecond;
		public void Init(DailyChallengeManager dailyChallengeManager, SaveManager saveManager, LocalisationManager localisationManager, AtlasDefinitions atlasDefinitions, bool animate) { }
		public void DeInit() { }
		public void StartAnimations() { }
		private void AnimateProgressBars() { }
		private void SetData(bool animate) { }
		private void SetRefreshTime() { }
		private void Update() { }
	}
}
