using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugUILabelBehaviour : MonoBehaviour
	{
		[SerializeField] private Text _text;
		public string Text { set { } }
		public bool RaycastTarget { set { } }
	}
}
