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
	public class UIAnimatingFlagsBehaviour : MonoBehaviour
	{
		[SerializeField] private TMP_Text _descriptionText;
		[SerializeField] private Image _completeFlagImage;
		[SerializeField] private Image _incompleteFlagImage;
		[SerializeField] private Image _flagsImageGlowEffect;
		[SerializeField] private float _initialFlagGrowDuration;
		[SerializeField] private float initialFlagGrowScale;
		[SerializeField] private Ease _initialFlagGrowScaleEase;
		[SerializeField] private Ease _initialFlagGrowCrossFadeEase;
		[SerializeField] private float _initialFlagShrinkDuration;
		[SerializeField] private Ease _initialFlagShrinkScaleEase;
		[SerializeField] private Ease _initialFlagShrinkCrossFadeEase;
		private RectTransform _rectTransform;
		private Vector2 _startingSizeDelta;
		public TMP_Text DescriptionText { get => default; }
		private void Awake() { }
		public Sequence PlayCompleteAnimation(float delay, string audioEvent) { return default; }
		public void SetCompleted() { }
		private void OnDestroy() { }
		public void Reset() { }
	}
}
