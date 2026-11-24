using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugUIButtonBehaviour : MonoBehaviour
	{
		[SerializeField] private Button _button;
		[SerializeField] private Text _text;
		private int _pushPanelId;
		private int _showPanelId;
		public Button Button { get => default; }
		public string Text { set { } }
		public bool Interactable { set { } }
		public int ShowPanelId { get => default; set { } }
		public int PushPanelId { get => default; set { } }
	}
}
