using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugUIDropdownBehaviour : MonoBehaviour
	{
		[SerializeField] private Dropdown _dropdown;
		[SerializeField] private Text _text;
		[SerializeField] private RectTransform _templateContent;
		[SerializeField] private RectTransform _templateItem;
		public Dropdown Dropdown { get => default; }
		public string Text { set { } }
		public List<string> Options { get => default; set { } }
		public float TemplateItemHeight { set { } }
		public void SetIndex(int newIndex) { }
	}
}
