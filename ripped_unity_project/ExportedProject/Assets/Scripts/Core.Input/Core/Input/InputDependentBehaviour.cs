using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Input
{
	public class InputDependentBehaviour : MonoBehaviour, IInputFamilyChangeListener
	{
		[SerializeField] private bool _showForKeyboard;
		[SerializeField] private bool _showForController;
		[SerializeField] private bool _showForTouchOnly;
		public bool ShowForKeyboard { get => default; }
		public bool ShowForController { get => default; }
		public bool ShowForTouchOnly { get => default; }
		private void Awake() { }
		private void OnDestroy() { }
		public void OnInputFamilyChanged(InputFamily input, InputGlyphMapping[] mappings) { }
	}
}
