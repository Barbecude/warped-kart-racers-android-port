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
	public class EndOfRoundScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private TMP_Text _titleText;
		[SerializeField] private TMP_Text _titleTextMeasurement;
		[SerializeField] private Transform _leaderboardRoot;
		[SerializeField] private VerticalLayoutGroup _leftLeaderboardList;
		[SerializeField] private VerticalLayoutGroup _rightLeaderboardList;
		[SerializeField] private LeaderboardEntryBehaviour[] _leaderboardEntries;
		[SerializeField] private float _endWaitingTime;
		[SerializeField] private float _starEmphasisDuration;
		[SerializeField] private float _starEmphasisStaggerInterval;
		[SerializeField] private float _starEmphasisScaleIncrease;
		[SerializeField] private Ease _starEmphasisEase;
		[SerializeField] private float _crownSpawnDuration;
		[SerializeField] private float _crownSpawnScale;
		[SerializeField] private float _crownSpawnDelay;
		[SerializeField] private Ease _crownSpawnEase;
		[SerializeField] private float _starDeltaSpawnDuration;
		[SerializeField] private float _starDeltaSpawnStaggerInterval;
		[SerializeField] private float _starDeltaSpawnScale;
		[SerializeField] private Ease _starDeltaSpawnEase;
		[SerializeField] private float _starDeltaEnterDuration;
		[SerializeField] private float _starDeltaEnterStaggerInterval;
		[SerializeField] private Ease _starDeltaEnterEase;
		[SerializeField] private float _starUpdateSpawnDelay;
		[SerializeField] private float _starUpdateSpawnDuration;
		[SerializeField] private float _starUpdateSpawnStaggerInterval;
		[SerializeField] private float _starUpdateSpawnScale;
		[SerializeField] private Ease _starUpdateSpawnEase;
		[SerializeField] private float _hideStarDuration;
		[SerializeField] private float _hideStarStaggerInterval;
		[SerializeField] private float _hideStarAlpha;
		[SerializeField] private Ease _hideStarEase;
		public TMP_Text TitleText { get => default; }
		public TMP_Text TitleTextMeasurement { get => default; }
		public VerticalLayoutGroup LeftLeaderboardList { get => default; }
		public VerticalLayoutGroup RightLeaderboardList { get => default; }
		public float StarEmphasisDuration { get => default; }
		public float StarEmphasisStaggerInterval { get => default; }
		public float StarEmphasisScaleIncrease { get => default; }
		public Ease StarEmphasisEase { get => default; }
		public float CrownSpawnDuration { get => default; }
		public float CrownSpawnScale { get => default; }
		public float CrownSpawnDelay { get => default; }
		public Ease CrownSpawnEase { get => default; }
		public float StarDeltaSpawnDuration { get => default; }
		public float StarDeltaSpawnStaggerInterval { get => default; }
		public float StarDeltaSpawnScale { get => default; }
		public Ease StarDeltaSpawnEase { get => default; }
		public float StarDeltaEnterDuration { get => default; }
		public float StarDeltaEnterStaggerInterval { get => default; }
		public Ease StarDeltaEnterEase { get => default; }
		public float StarUpdateSpawnDuration { get => default; }
		public float StarUpdateSpawnStaggerInterval { get => default; }
		public float StarUpdateSpawnScale { get => default; }
		public Ease StarUpdateSpawnEase { get => default; }
		public float HideStarDuration { get => default; }
		public float HideStarStaggerInterval { get => default; }
		public float HideStarAlpha { get => default; }
		public Ease HideStarEase { get => default; }
		public float StarUpdateSpawnDelay { get => default; }
		public float EndWaitingTime { get => default; }
		public Transform LeaderboardRoot { get => default; }
		public void SetPlacementIconsActive(bool active) { }
		public void SetHideStarsActive(bool active) { }
		public void SetDeltaStarsActive(bool active) { }
		public void SetStatIconAndTextActive(bool active) { }
	}
}
