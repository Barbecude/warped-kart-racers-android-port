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

namespace Atlas.UI.Screens
{
	public class PlayWithFriendsCodeScreen : AtlasScreen<PlayWithFriendsCodeBehaviour, PlayWithFriendsCodeScreen.TransitionData>
	{
		private const float StartHideCursorTime = 1;
		private Keyboard _keyboard;
		private int _nextDigitIndex;
		private float _cursorFlashTimer;
		private string _inputtedCode;
		private bool _codeLockedAndExiting;
		private int _lastDigitButtonPressed;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterEnter() { }
		protected virtual void OnBeforeExit() { }
		protected virtual void OnAfterExit() { }
		private bool IsPlatformThatNeedsPhysicalKeyboard() { return default; }
		protected virtual void OnUpdate(float dt) { }
		private void UpdateNextButton(bool codeValid) { }
		private void UpdateKeyboard(Keyboard keyboard) { }
		private void OnKeyReceived(char c) { }
		private void AddNewDigit(char value) { }
		private void RemoveLastDigit() { }
		private void RemoveAllDigits() { }
		private bool TryCode(string code, bool ignoreInvalid) { return default; }
		private bool IsDigit(char c) { return default; }
		private bool IsCodeFormatValid(string code) { return default; }
		private void OnDigitsButtonPressed() { }
		private void ShowVirtualKeyboardIfAvailable() { }
		private void HideVirtualKeyboardIfAvailable() { }
		private bool IsVirtualKeyboardActive() { return default; }
		private void UpdateVirtualKeyboard() { }
		private bool OnNextButtonPressed() { return default; }
		private void JoinGroupFailed() { }
		private void TryPaste() { }
		private void OnNumPadDigitPressed(int digit) { }
		private void OnNumPadPastePressed() { }
		private void OnNumPadBackSpacePressed() { }
		private void SetNumPadButtonsEnabled(bool enabled) { }
		private void SetButtonEnabled(UIAtlasButton button, bool enabled) { }
		private void UpdateNumPadState() { }
		private bool AreAllDigitsFilled() { return default; }
		private bool AreNoDigitsFilled() { return default; }
		private void OnPartyInvite(string lobbyCode) { }
	}
}
