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
	public class TopBarScreen : AtlasScreen<TopBarScreenBehaviour, TopBarScreen.TransitionData>
	{
		public enum ElementType
		{
			Invalid = -1,
			BackButton = 0,
			SettingsButton = 1,
			GameCenterButton = 2,
			TransparentGameCenterButton = 3,
			NextButton = 4,
			PadlockButton = 5,
			BackPanel = 6,
			NextPanel = 7,
			TitlePanel = 8,
			Count = 9,
		}
		public enum ElementState
		{
			Hidden = 0,
			AnimatingIn = 1,
			Shown = 2,
			AnimatingOut = 3,
		}
		private static readonly Vector3 SidePanelScreenOffset;
		private static readonly Vector3 TopPanelScreenOffset;
		private TopBarScreen.Element[] _elements;
		private TopBarManager.TopBarButton _defaultSelectionButton;
		private float _nexxtPanelEnabledVisuals;
		private bool _nextPanelEnabled;
		private string _nextTitleLocKey;
		private Sprite _nextTitleIcon;
		private Material _nextButtonMaterial;
		public void SetNextPanelEnabledVisuals(bool disabled) { }
		protected virtual void OnUpdate(float dt) { }
		public void SetNextTitle(string titleLocKey, Sprite icon) { }
		public void ReLayoutTitle() { }
		private TopBarScreen.ElementType GetElementType(TopBarManager.TopBarButton topBarButton) { return default; }
		private TopBarScreen.ElementState VisibleToElementState(bool visible) { return default; }
		public void RequestButtonVisible(TopBarManager.TopBarButton topBarButton, bool visible, bool animate) { }
		public void RequestElementVisible(TopBarScreen.ElementType elementType, bool visible, bool animate) { }
		public TopBarScreen.ElementState GetElementState(TopBarManager.TopBarButton topBarButton) { return default; }
		private void ForceButtonState(TopBarScreen.ElementType elementType, bool visible) { }
		private void AnimateInSlash(TopBarScreen.Element element) { }
		private void AnimateOutSlash(TopBarScreen.Element element) { }
		private void AnimateInTitle(TopBarScreen.Element element) { }
		private void AnimateOutTitle(TopBarScreen.Element element) { }
		private void AnimateInButton(TopBarScreen.Element element) { }
		private void AnimateOutButton(TopBarScreen.Element element) { }
		private void UpdateElement(TopBarScreen.ElementType elementType) { }
		private void OnElementAnimatingOutComplete(TopBarScreen.ElementType elementType) { }
		private void OnElementAnimatingInComplete(TopBarScreen.ElementType elementType) { }
		public void ShowBackingPanelsIfRequired(bool ignoreBackPanel, bool ignoreNextPanel) { }
		public void HideNextPanel(bool animate) { }
		public void HideAll(bool animate) { }
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterExit() { }
		private void OnButtonPressed(TopBarManager.TopBarButton topBarButton) { }
		public void OnTransparentGameCenterButtonSelected() { }
		public void OnTransparentGameCenterButtonDeselected() { }
	}
}
