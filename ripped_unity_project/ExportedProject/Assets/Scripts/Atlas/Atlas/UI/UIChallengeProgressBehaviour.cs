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
	public class UIChallengeProgressBehaviour : MonoBehaviour
	{
		private const string ChallengeCompleteAudioEvent = "event:/UI/HUD/ChallengeComplete";
		[SerializeField] private Transform _progressContainer;
		[SerializeField] private TMP_Text _text;
		[SerializeField] private SlantFillBar _slantFillBar;
		[SerializeField] private TMP_Text _progressBarText;
		[SerializeField] private Image _completeFlagImage;
		[SerializeField] private UIAnimatingFlagsBehaviour _animatingFlagsBehaviour;
		[SerializeField] private float _progressBarRetractDuration;
		[SerializeField] private Ease _progressBarRetractEase;
		[SerializeField] private float _postBarRetractionWaitTime;
		[SerializeField] private float _flagGrowBeforeDisappearDuration;
		[SerializeField] private float _flagGrowBeforeDisappearScale;
		[SerializeField] private Ease _flagGrowBeforeDisappearEase;
		[SerializeField] private float _flagDisappearDuration;
		[SerializeField] private float _flagDisappearCellGrowthOffset;
		[SerializeField] private Ease _flagDisappearCellGrowthEase;
		[SerializeField] private Ease _flagDisappearShrinkEase;
		[SerializeField] private float _cellShrinksDuration;
		[SerializeField] private float _cellShrinksOvershoot;
		[SerializeField] private Ease _cellShrinkEase;
		private float _perc;
		private bool _completed;
		private Sequence _currentSequence;
		private RectTransform _rectTransform;
		public bool Completed { get => default; }
		public SlantFillBar SlantFillBar { get => default; }
		private void Awake() { }
		public void SetVisible(bool visible) { }
		public void Set(string text, LocalisationManager localisationManager) { }
		public void Set(string text, float perc, LocalisationManager localisationManager) { }
		public void UpdateFillBar(float perc, bool animate) { }
		public void SetComplete(float layoutGroupSpacing, bool playTweenOnChallengeComplete) { }
		public void ShowCompletedFlag() { }
		public void OnDestroy() { }
		public void ResetValues() { }
		private void InvokeOnStartResize() { }
		private void InvokeOnCompleteResize() { }
	}
}
