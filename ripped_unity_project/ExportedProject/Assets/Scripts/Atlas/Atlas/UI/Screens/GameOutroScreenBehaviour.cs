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
	public class GameOutroScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private GameObject _resultsContainer;
		[SerializeField] private GameObject _positionContainer;
		[SerializeField] private Transform _playerInfoRoot;
		[SerializeField] private TMP_Text _positionText;
		[SerializeField] private GameObject _scoreContainer;
		[SerializeField] private TMP_Text _numberOfPointsNumber;
		[SerializeField] private TMP_Text _numberOfPointsPoints;
		[SerializeField] private GameObject _timerContainer;
		[SerializeField] private TMP_Text _timerText;
		[SerializeField] private int _centiSecondSizePercentage;
		[SerializeField] private Image _playerInfoCrown;
		[SerializeField] private GameObject _buttonsContainer;
		[SerializeField] private UITimer _endGameTimer;
		[SerializeField] private GameObject _endGameTimerGameObject;
		[SerializeField] private VerticalLayoutGroup _leaderboardList;
		[SerializeField] private LeaderboardEntryBehaviour _playerEntry;
		[SerializeField] private UIChallengeProgressBehaviourContainer _challengeProgressBehaviourContainer;
		[SerializeField] private GameObject _tournamentResultRoot;
		[SerializeField] private TMP_Text _tournamentResultText;
		[SerializeField] private string _tournamentScorePrefix;
		[SerializeField] private string _pointLocKey;
		[SerializeField] private string _pointsLocKey;
		[SerializeField] private float _finishCameraHoldTime;
		[SerializeField] private float _autoDriveCameraChangeDelay;
		[SerializeField] private float _autoDriveCameraChangeIntervalMin;
		[SerializeField] private float _autoDriveCameraChangeIntervalMax;
		[SerializeField] private Sprite _firstPlaceIcon;
		[SerializeField] private Sprite _secondPlaceIcon;
		[SerializeField] private Sprite _thirdPlaceIcon;
		[SerializeField] private UITweenGroup _leaderboardTweenGroup;
		[SerializeField] private float _exitAnimationStartDelay;
		public float FinishCameraHoldTime { get => default; }
		public float AutoDriveCameraChangeDelay { get => default; }
		public float AutoDriveCameraChangeIntervalMin { get => default; }
		public float AutoDriveCameraChangeIntervalMax { get => default; }
		public GameObject ResultsContainer { get => default; }
		public GameObject PositionContainer { get => default; }
		public Transform PlayerInfoRoot { get => default; }
		public TMP_Text PositionText { get => default; }
		public GameObject ScoreContainer { get => default; }
		public TMP_Text NumberOfPointsNumber { get => default; }
		public TMP_Text NumberOfPointsPoints { get => default; }
		public GameObject TimerContainer { get => default; }
		public TMP_Text TimerText { get => default; }
		public int CentiSecondSizePercentage { get => default; }
		public GameObject ButtonsContainer { get => default; }
		public UITimer EndGameTimer { get => default; }
		public GameObject EndGameTimerGameObject { get => default; }
		public VerticalLayoutGroup LeaderboardList { get => default; }
		public LeaderboardEntryBehaviour PlayerEntry { get => default; }
		public UIChallengeProgressBehaviourContainer ChallengeProgressBehaviourContainer { get => default; }
		public string PointLocKey { get => default; }
		public string PointsLocKey { get => default; }
		public Sprite FirstPlaceIcon { get => default; }
		public Sprite SecondPlaceIcon { get => default; }
		public Sprite ThirdPlaceIcon { get => default; }
		public float ExitAnimationStartDelay { get => default; }
		public GameObject TournamentResultRoot { get => default; }
		public TMP_Text TournamentResultText { get => default; }
		public UITweenGroup LeaderboardTweenGroup { get => default; }
		public void SetTournamentresult(bool active, int score) { }
		public void SetPlayerInfoCrown(bool active, Sprite crownSprite) { }
		protected virtual void OnBeforeDestroyed() { }
		protected virtual bool PlayTweensOnStart() { return default; }
	}
}
