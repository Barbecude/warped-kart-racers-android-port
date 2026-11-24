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

namespace Atlas.UI
{
	public abstract class ModalManager
	{
		private bool _inited;
		protected AtlasSharedScreenParams _sharedScreenParams;
		protected TUIScreen _screen;
		protected string _screenID;
		protected AtlasScreenLayer _atlasScreenLayer;
		protected ModalData _currentShowing;
		public bool IsInited { get => default; }
		public TUIScreen Screen { get => default; set { } }
		public TModalScreenViewBehaviour ModalScreenViewBehaviour { get => default; }
		public bool HasScreen { get => default; }
		public virtual void Init(AtlasSharedScreenParams sharedScreenParams, string screenID, AtlasScreenLayer atlasScreenLayer) { }
		public void DeInit() { }
		protected void ShowScreen(UIScreenParameters transitionData) { }
		public void Update(float dt) { }
		public virtual bool CanShowModal() { return default; }
		public void HideCurrentModal() { }
		public void QueueModal(ModalData modalData) { }
		public bool QueueModalIfNotAlready(ModalData modalData) { return default; }
		private bool TryGetHighestPriortyDataIndex(out int outDataIndex) { outDataIndex = default; return default; }
		public bool IsModalQueuedOrShowing() { return default; }
		public bool IsModalQueuedOrShowing(string id) { return default; }
		public bool IsModalShowing() { return default; }
		public void DismissAndRemoveQueued(string ID) { }
		public void RemoveAllQueuedAndShowing(bool callDismiss) { }
		public void ClearQueuedMessages() { }
		protected virtual void OnModalHidden(ModalData modalData) { }
		private void ShowModal(ModalData modalData) { }
		private void HideScreen() { }
		protected void DebugLog(string log) { }
	}
}
