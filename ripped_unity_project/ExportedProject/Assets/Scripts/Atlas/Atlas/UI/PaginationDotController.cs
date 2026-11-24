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
	public class PaginationDotController : MonoBehaviour
	{
		[SerializeField] private ScrollRect _targetScroller;
		[SerializeField] private int _numberOfDots;
		[SerializeField] private bool _awaitDotCount;
		[SerializeField] private GameObject _initialDot;
		[SerializeField] private GameObject _dotPrefab;
		[SerializeField] private bool _useDynamicSpeed;
		[SerializeField] private Button _nextButton;
		[SerializeField] private UIAtlasButtonGroup _uISingleSelectionAtlasButtonGroup;
		[SerializeField] private Button _leftTabButton;
		[SerializeField] private Button _rightTabButton;
		[SerializeField] private LayoutGroup _layoutGroup;
		private float _normalizedScrollerPos;
		private int _dotToHighlight;
		private bool _autoScroll;
		private float _normalizedScrollTarget;
		private float _normalizedStartPos;
		private float _startTime;
		private bool _setupCalled;
		private UIAtlasButton _lastSelected;
		private int _dotsContainerSize;
		[SerializeField] private float _scrollSpeed;
		private float _initialScrollSpeed;
		[SerializeField] private bool _autoScrollToSelectionInGroup;
		[SerializeField] private UIAtlasButtonGroup _contentButtonGroup;
		public ScrollRect TargetScroller { get => default; }
		public int DotToHighlight { get => default; }
		public int DotsContainerSize { get => default; }
		public void SetDotAmount(int count) { }
		public void DisablePagination() { }
		public void ScrollToTarget(float normalizedScrollTarget) { }
		public void SnapToTarget(float normalizedScrollTarget) { }
		private void Start() { }
		private void Setup() { }
		private void OnDotPressed(int index) { }
		private float GetHorizontalPadding() { return default; }
		private float GetLeftPadding() { return default; }
		public void MoveScrollerExternal(int index) { }
		private void Update() { }
		public void StartAutoScroll() { }
		private void SetDotHighlightStates() { }
		private void InitDot(UIAtlasButton dot, int index) { }
		private float SetDynamicSpeed(float speed) { return default; }
		private void OnButtonSelected(UIAtlasButton button) { }
		private void OnTabButtonPressed(bool left) { }
	}
}
