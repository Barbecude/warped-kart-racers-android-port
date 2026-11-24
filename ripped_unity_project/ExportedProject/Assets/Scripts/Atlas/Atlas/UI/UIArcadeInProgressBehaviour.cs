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
	public class UIArcadeInProgressBehaviour : MonoBehaviour
	{
		public enum Medal
		{
			No = 0,
			Bronze = 1,
			Silver = 2,
			Gold = 3,
		}
		[SerializeField] private TMP_Text _bestTimeText;
		[SerializeField] private TMP_Text _progressText;
		[SerializeField] private TMP_Text _thresholdText;
		[SerializeField] private Image _thresholdImage;
		[SerializeField] private UIIrregularElement _thresholdPanel;
		[SerializeField] private Color _thresholdPanelDefaultColor;
		[SerializeField] private Color _thresholdPanelFlashColor;
		[SerializeField] private float _wobbleDuration;
		[SerializeField] private float _wobbleValue;
		[SerializeField] private Sprite _goldMedalSprite;
		[SerializeField] private Sprite _silverMedalSprite;
		[SerializeField] private Sprite _bronzeMedalSprite;
		[SerializeField] private Sprite _noMedalSprite;
		[SerializeField] private Sprite _lapIconSprite;
		[SerializeField] private Sprite _collectorIconSprite;
		[SerializeField] private Sprite _shooterIconSprite;
		[SerializeField] private Color _noMedalColour;
		[SerializeField] private float _progressRootWidthShooter;
		[SerializeField] private float _progressRootWidthCollector;
		private Sequence _wobbleAnimation;
		private Coroutine _flashAnimation;
		private bool _hasStartedFlashAnimation;
		public TMP_Text BestTimeText { get => default; }
		public TMP_Text ProgressText { get => default; }
		public TMP_Text ThresholdText { get => default; }
		public Image ProgressImage { get => default; }
		public Sprite LapIconSprite { get => default; }
		public Sprite CollectorIconSprite { get => default; }
		public Sprite ShooterIconSprite { get => default; }
		public Color NoMedalColour { get => default; }
		public float ProgressRootWidthShooter { get => default; }
		public float ProgressRootWidthCollector { get => default; }
		public void SetThresholdMedal(UIArcadeInProgressBehaviour.Medal medal) { }
		public void DoWobbleAnimation() { }
		public void DoFlashAnimation() { }
		private IEnumerator FlashAnimationCoroutine() { return default; }
		public void StopAnimations() { }
		private void StopFlashAnimation() { }
		private void StopWobbleAnimation() { }
		private Sprite GetMedalSprite(UIArcadeInProgressBehaviour.Medal medal) { return default; }
	}
}
