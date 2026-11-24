using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UIManagerBehaviour : MonoBehaviour
	{
		[SerializeField] private Canvas _canvas;
		[SerializeField] private CanvasScaler _canvasScaler;
		[SerializeField] private GraphicRaycaster _graphicRaycaster;
		[SerializeField] private EventSystem _eventSystem;
		[SerializeField] private InputSystemUIInputModule _inputSystemUIInputModule;
		public Canvas Canvas { get => default; }
		public CanvasScaler CanvasScaler { get => default; }
		public GraphicRaycaster GraphicRaycaster { get => default; }
		public EventSystem EventSystem { get => default; }
		public InputSystemUIInputModule InputSystemUIInputModule { get => default; }
	}
}
