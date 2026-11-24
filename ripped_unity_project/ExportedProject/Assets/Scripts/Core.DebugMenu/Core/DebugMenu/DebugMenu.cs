using UnityEngine.UI;
using Unity.Profiling;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugMenu
	{
		public enum InstantiateUIResult { Success = 0, Failed = 1 }
		public class Element { }
		public enum ElementType
		{
			Canvas = 0,
			Panel = 1,
			Button = 2,
			RootButton = 3,
			Label = 4,
			Slider = 5,
			Dropdown = 6,
			Toggle = 7,
			HorizontalLayout = 8,
		}
		public const int InvalidId = -1;
		public const int MaxStringLength = 14000;
		public const float DefaultPanelWidthPerc = 40;
		private const float _cellHeight = 50;
		public const float _cellPadding = 3;
		private const float _horizontalCellSpacing = 15;
		private const float _dPanelAlpha = 15;
		private const float _delayedShowTime = 0.15f;
		private const float _defaultLabelPerc = 20;
		private const float _defaultToggleLabelPerc = 70;
		private const float _rootPanelWidth = 500;
		private const float _rootPanelHeight = 500;
		private const float _rootButtonDoubleClickTimeMs = 750;
		private static readonly string[] _prefabPaths;
		private RectTransform _rootRectTransform;
		private Canvas _rootCanvas;
		private CanvasGroup _rootCanvasGroup;
		private int _debugMenuPanelId;
		private int _rootPanelId;
		private int _nextId;
		private int _minimisedPanelId;
		private DateTime _lastRootButtonPressedTime;
		private int _consecutiveRootButtonPressed;
		private DebugMenuControllerInputSupport _controllerSupport;
		private bool _inited;
		private static ProfilerMarker _updateProfilerMarker;
		private bool IsControllerSupported { get => default; }
		public int DebugMenuPanelId { get => default; }
		public int RootPanelId { get => default; }
		public RectTransform RootRectTransform { get => default; }
		public bool Visible { get => default; set { } }
		public float Opacity { get => default; set { } }
		public bool IsInited { get => default; }
		public IEnumerator Init(Transform rootTransform) { return default; }
		public void DeInit() { }
		public void Update(float dt) { }
		public bool IsPanelShowing(int panelId) { return default; }
		public bool IsOnlyPanelShowing(int panelId) { return default; }
		public void ShowRootPanel() { }
		public void HideAllPanels() { }
		public void HideLastPanel() { }
		public int AddButtonAndPanel(int parentPanelId, string name, object owner, float widthPerc) { return default; }
		private void UpdateMouse() { }
		private void UpdateTouch() { }
		private void TryPressRootButton(Vector2 normPos) { }
		public int AddPanelByScreenPercentage(float topLeftXPerc, float topLeftYPerc, float widthPerc, bool showHeader, string title, object createdBy, int parentPanelId) { return default; }
		public int AddPanel(float topLeftX, float topLeftY, float width, bool showHeader, string title, object createdBy, int parentPanelId) { return default; }
		public void RemoveElement(int elementId) { }
		public int RemoveAllElementsCreatedBy(object createdBy) { return default; }
		public int AddLabel(int panelId, string labelText, object createdBy, string optionalLabel, float optionalLabelWidthPerc) { return default; }
		public DebugUIButtonBehaviour GetButton(int id) { return default; }
		public bool ConfigureButton(int id, string buttonText, bool interactable) { return default; }
		public bool SetButtonInteractable(int id, bool interactable) { return default; }
		public bool ConfigureSlider(int id, float value) { return default; }
		public bool ConfigureLabel(int id, string labelText, bool raycastTarget) { return default; }
		public void SetDropdownIndex(int id, int newIndex) { }
		public bool ConfigureDropdown(int id, int optionIndex) { return default; }
		public bool ConfigureToggle(int id, bool toggled) { return default; }
		public float SyncSliderValue(int sliderId, float value) { return default; }
		private DebugMenu.InstantiateUIResult InstantiateUIWithOptionalLabel(DebugMenu.ElementType elementType, string name, float width, float height, string label, float labelWidthPerc) { return default; }
		private DebugMenu.InstantiateUIResult InstantiateUI(DebugMenu.ElementType elementType, string name, float width, float height) { return default; }
		private DebugMenu.InstantiateUIResult InstantiateComponentUIWithLabel(DebugMenu.ElementType elementType, string name, float width, float height, string label, float labelWidthPerc) { return default; }
		private GameObject InstantiatePrefab(GameObject prefab, string name) { return default; }
		private bool TryGetElementCopy(int id, DebugMenu.ElementType elementType, out DebugMenu.Element outElement) { outElement = default; return default; }
		private bool IsValidId(int id) { return default; }
		private void PushPanel(int panelId, int fromPanelId) { }
		private void PopPanel(int panelId) { }
		private void PopAll(int panelId) { }
		private void PopPanelToFirst(int panelId) { }
		private void PopPanels(int panelId, int stackCountOffset) { }
		public void ShowPanel(int panelId, float delayTime) { }
		public void HidePanel(int panelId, float delayTime) { }
		private void ButtonPressed(int id) { }
		private void MinimiseButtonPressed(int id) { }
		private void BackButtonPressed(int id) { }
		private void CloseButtonPressed(int id) { }
		private void RootButtonPressed() { }
		private int GetNextIdAndIncrement() { return default; }
		private void OnOpacitySliderChange(int elementId, float value) { }
	}
}
