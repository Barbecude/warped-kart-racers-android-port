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
	public class LeagueLeaderboardBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private Transform _leaderboardRoot;
		[SerializeField] private UITweenGroup _rootUITweenGroup;
		[SerializeField] private CanvasGroup _contentCanvasGroup;
		[SerializeField] private GameObject _rowsContainer;
		[SerializeField] private UIAtlasButtonGroup _buttonGroup;
		[SerializeField] private LeagueLeaderboardEntryBehaviour[] _entries;
		[SerializeField] private LeagueBadgeRepresentationBehaviour _leagueBadge;
		[SerializeField] private TMP_Text _starsEarnedText;
		[SerializeField] private TMP_Text _timeRemainingText;
		[SerializeField] private string _timeRemainingLocKey;
		[SerializeField] private string _hoursLocKey;
		[SerializeField] private string _minutesLocKey;
		[SerializeField] private string _daysLocKey;
		[SerializeField] private UILeagueRewardBehaviour[] _rewardPanels;
		[SerializeField] private RankSpriteData _rankSpriteData;
		[SerializeField] private RankLocalisationData _rankLocalisationData;
		[SerializeField] private RankColorData _rankColorData;
		[SerializeField] private UIAtlasButton _infoButton;
		public Transform LeaderboardRoot { get => default; }
		public UITweenGroup RootUITweenGroup { get => default; }
		public CanvasGroup ContentCanvasGroup { get => default; }
		public GameObject RowsContainer { get => default; }
		public UIAtlasButtonGroup ButtonGroup { get => default; }
		public LeagueLeaderboardEntryBehaviour[] Entries { get => default; }
		public LeagueBadgeRepresentationBehaviour LeagueBadge { get => default; }
		public TMP_Text StarsEarnedText { get => default; }
		public TMP_Text TimeRemainingText { get => default; }
		public string TimeRemainingLocKey { get => default; }
		public string HoursLocKey { get => default; }
		public string MinutesLocKey { get => default; }
		public string DaysLocKey { get => default; }
		public UILeagueRewardBehaviour[] RewardPanels { get => default; }
		public RankSpriteData RankSpriteData { get => default; }
		public RankLocalisationData RankLocalisationData { get => default; }
		public RankColorData RankColorData { get => default; }
		public UIAtlasButton InfoButton { get => default; }
	}
}
