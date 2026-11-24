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
	public class LeaderboardEntryBehaviour : MonoBehaviour
	{
		public enum Side
		{
			Left = 0,
			Right = 1,
		}
		[SerializeField] private RectTransform _rectTransform;
		[SerializeField] private CanvasGroup _rootCanvasGroup;
		[SerializeField] private CharacterRepresentationViewBehaviour _characterRepresentation;
		[SerializeField] private TMP_Text _positionText;
		[SerializeField] private Image _placingIcon;
		[SerializeField] private GameObject _autoDriveHighlight;
		[SerializeField] private UISlantElement _background;
		[SerializeField] private UISlantElement _border;
		[SerializeField] private float _regularWidth;
		[SerializeField] private UITweenLeaf _tweenLeaf;
		[SerializeField] private LeaderboardEntryBehaviour.LeaderboardStatVisualInfo _currentStatVisualInfo;
		[SerializeField] private LeaderboardEntryBehaviour.LeaderboardStatVisualInfo _hitCounterVisualInfo;
		[SerializeField] private LeaderboardEntryBehaviour.LeaderboardStatVisualInfo _timeVisualInfo;
		[SerializeField] private LeaderboardEntryBehaviour.LeaderboardStatVisualInfo _starsVisualInfo;
		[SerializeField] private GameObject _statRoot;
		[SerializeField] private GameObject _statIconTextContainer;
		[SerializeField] private UISlantElement _statsBackground;
		[SerializeField] private TMP_Text _statText;
		[SerializeField] private Image _leftIcon;
		[SerializeField] private Image _rightIcon;
		[SerializeField] private GameObject _starDeltaRoot;
		[SerializeField] private TMP_Text _starDeltaText;
		[SerializeField] private Image _hideStarsImage;
		[SerializeField] private Sprite _standardSprite;
		[SerializeField] private Sprite _highlightedSprite;
		public CanvasGroup RootCanvasGroup { get => default; }
		public CharacterRepresentationViewBehaviour CharacterRepresentation { get => default; }
		public TMP_Text PositionText { get => default; }
		public GameObject AutoDriveHighlight { get => default; }
		public UISlantElement Background { get => default; }
		public Sprite StandardSprite { get => default; }
		public Sprite HighlightedSprite { get => default; }
		public UITweenLeaf TweenLeaf { get => default; }
		public void SetUp() { }
		public void SetDeltaStarsActive(bool active) { }
		public void SetDeltaStarsText(int numDeltaStars) { }
		public void SetPlacingIconActive(Sprite icon, bool active) { }
		public Tween PlayCrownSpawnTween(float startingScaleMagnitude, float duration, float delay, Ease ease) { return default; }
		public Tween PlayStatIconContainerEmphasisTween(float punchScaleMagnitude, float duration, float delay, Ease ease) { return default; }
		public Tween PlayStarDeltaSpawnTween(float startingScaleMagnitude, float duration, float delay, Ease ease) { return default; }
		public Tween PlayStatIconContainerSpawnTween(float startingScaleMagnitude, float duration, float delay, Ease ease) { return default; }
		public Tween PlayEnterStatsStarDeltaTween(float duration, float delay, Ease ease) { return default; }
		public Tween PlayHideStarsTween(float endAlpha, float duration, float delay, Ease ease) { return default; }
		public void SetPlacingIconActive(bool active) { }
		public void SetPositionHidden(bool hidden) { }
		public void SetHitCounterActive(bool active) { }
		private void SetStatActive(LeaderboardEntryBehaviour.LeaderboardStatVisualInfo hitCounterVisualInfo, int text, bool active) { }
		public void SetTimerActive(bool active) { }
		public void SetStarsActive(bool active, int numStars) { }
		public void SetStatText(string stat) { }
		public void SetStatText(int stat) { }
		public void PlayChangeHitCountTween() { }
		public void PlayChangePositionTween() { }
		public void OnDestroy() { }
		public void KillTweens() { }
		public void SetStatIconAndTextActive(bool active) { }
		public void UpdatePanelSizes() { }
		public void SetHideStarsActive(bool active) { }
		private void UpdateStatPanel(LeaderboardEntryBehaviour.LeaderboardStatVisualInfo statVisualInfo) { }
		private void SetStatActive(LeaderboardEntryBehaviour.LeaderboardStatVisualInfo statVisualInfo, bool active) { }
		private void SetStatActive(LeaderboardEntryBehaviour.LeaderboardStatVisualInfo statVisualInfo, string text, bool active) { }
		private Tween StartLargeThenGoNormal(RectTransform rect, float startingScaleMagnitude, float duration, float delay, Ease ease) { return default; }
	}
}
