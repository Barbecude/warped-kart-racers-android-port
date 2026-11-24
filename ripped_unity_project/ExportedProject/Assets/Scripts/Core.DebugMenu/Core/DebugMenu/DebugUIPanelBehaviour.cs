using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugUIPanelBehaviour : MonoBehaviour
	{
		[SerializeField] private Text _title;
		[SerializeField] private Button _minimiseButton;
		[SerializeField] private Button _backButton;
		[SerializeField] private Button _closeButton;
		[SerializeField] private RectTransform _headerRectTransform;
		[SerializeField] private RectTransform _contentRectTransform;
		[SerializeField] private RectTransform _viewportRectTransform;
		[SerializeField] private ScrollRect _scrollRect;
		[SerializeField] private CanvasGroup _canvasGroup;
		[SerializeField] private Image _image;
		private RectTransform _scrollRectTransform;
		private Vector2 _startPosition;
		public string TitleText { set { } }
		public Color ImageColour { set { } }
		public bool HeaderVisible { set { } }
		public bool BackButtonInteractable { set { } }
		public Button MinimiseButton { get => default; }
		public Button BackButton { get => default; }
		public Button CloseButton { get => default; }
		public CanvasGroup CanvasGroup { get => default; }
		public Vector2 StartPosition { get => default; set { } }
		public Stack<int> StackPanelIds { get => default; set { } }
		public List<int> ChildPanelIds { get => default; set { } }
		public float ContentHeight { get => default; }
		private void Awake() { }
		public void AddContent(RectTransform contentRectTransform) { }
		public void TryFocusFirstChild() { }
		public void UpdateRootHeightFromContent() { }
	}
}
