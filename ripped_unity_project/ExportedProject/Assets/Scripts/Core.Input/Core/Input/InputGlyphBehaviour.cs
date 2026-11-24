using UnityEngine.UI;
using Core.Assets;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Input
{
	public class InputGlyphBehaviour : MonoBehaviour, IInputFamilyChangeListener
	{
		[SerializeField] private string _controllerInputMapping;
		[SerializeField] private string _keyboardInputMapping;
		[SerializeField] private Selectable _targetButton;
		[SerializeField] private Image _glyphImage;
		[SerializeField] private bool _controlGameObjectInsteadOfComponent;
		private Action OnBoundInputPressed;
		private AssetManagerAtlasedSpriteRef _pendingSpriteRef;
		private string _controllerChildActionPath;
		private bool _isControllerActionSubmit;
		private string _keyboardChildActionPath;
		private bool _isKeyboardActionSubmit;
		private int _screenLayer;
		public bool IsSubmitAction { get => default; }
		public int ScreenLayer { get => default; }
		public bool HasTarget { get => default; }
		public Selectable TargetButton { get => default; }
		private void Start() { }
		private void OnDestroy() { }
		private static string GetLastInputPathComponent(string fullPath) { return default; }
		private void Update() { }
		private void HandlePressedState() { }
		private void HandleSpriteLoading() { }
		private void SetGlyphEnabled(bool enabled) { }
		private void PressButton() { }
		private static bool TryGetSpriteRefFromMapping(InputGlyphMapping[] mappings, string input, out AssetManagerAtlasedSpriteRef spriteRef) { spriteRef = default; return default; }
		public void OnInputFamilyChanged(InputFamily input, InputGlyphMapping[] mappings) { }
	}
}
