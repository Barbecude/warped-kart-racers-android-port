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
	public class AtlasScreen
	{
		private GameObject _initiallySelectedGameObject;
		private InputFamily _currentFamily;
		public virtual void OnInputFamilyChanged(InputFamily family, InputGlyphMapping[] glyphMappings) { }
		protected IEnumerator ShowFullScreenTransition() { return default; }
		protected IEnumerator HideFullScreenTransition() { return default; }
		protected void ReLayoutLayoutAndContentSizeFitters(RectTransform rectTransform) { }
		protected void ReLayoutLayoutAndContentSizeFitters(Transform trans) { }
		protected void ReadyToHideLoadingScreenAfterInit() { }
		protected void SetScreenHandlePartyInvite(bool handlePartyInvite) { }
		protected void SelectGameObjectIfGamepad(GameObject gameObject) { }
		protected void SelectComponentIfGamepad(Component component) { }
		protected void SelectGameObject(GameObject gameObject) { }
		protected void SelectComponent(Component component) { }
		protected void ClearSelected() { }
		protected void ClearSelectedIfGamepad() { }
		protected bool HasCurrentSelected() { return default; }
		protected GameObject GetCurrentlySelectedObject() { return default; }
		protected bool IsCurrentSelectedGameObject(GameObject gameObject) { return default; }
		protected virtual bool CanProgressToNextScreen() { return default; }
		private bool HasGamepadOrKeyboardAttached() { return default; }
	}
}
