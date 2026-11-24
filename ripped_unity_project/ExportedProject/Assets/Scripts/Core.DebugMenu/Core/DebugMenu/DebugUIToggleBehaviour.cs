using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugUIToggleBehaviour : MonoBehaviour
	{
		[SerializeField] private Toggle _toggle;
		public Toggle Toggle { get => default; }
		public bool Toggled { get => default; set { } }
		public bool Interactable { set { } }
	}
}
