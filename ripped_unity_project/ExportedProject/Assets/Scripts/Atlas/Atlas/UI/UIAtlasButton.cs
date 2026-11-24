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
	public class UIAtlasButton : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler
	{
		public static readonly int IdleStateName;
		public static readonly int LockedAnimStateName;
		public static readonly int UnlockedAnimStateName;
		public static readonly int RewardsUnlockedAnimStateName;
		public static readonly int CompletedAnimStateName;
		public static readonly int CTAAnimStateName;
		public static readonly int FinishCTATriggerName;
		[SerializeField] private string _buttonSelectAudioEvent;
		[SerializeField] private string _lockedButtonSelectAudioEvent;
		[SerializeField] private string _buttonPressAudioEvent;
		[SerializeField] private string _lockedButtonPressAudioEvent;
		[SerializeField] private UIAtlasButtonGroup _group;
		[SerializeField] private Graphic[] _disabledColourTintTargetGraphics;
		[SerializeField] private InputGlyphBehaviour _inputGlyphBehaviour;
		[SerializeField] private Animator _stateAnimator;
		[SerializeField] private UIAtlasButtonStateListener _stateListener;
		[SerializeField] private bool _mouseTouchSelectGroupViaPress;
		private Action Selected;
		private Action Deselected;
		private Action Pressed;
		private Action SelectedOrPressed;
		private bool _shouldPlayLockedSound;
		private int _screenLayer;
		public bool IsButtonAudiblyLocked { get => default; set { } }
		protected virtual void Start() { }
		public void SelectButton(BaseEventData eventData, bool silently, bool isClickOrTouch) { }
		public void DeselectButton(BaseEventData eventData, bool silently) { }
		public void PressButton(BaseEventData eventData, bool silently) { }
		public void PlayButtonSelectSound() { }
		public void PlayButtonPressSound() { }
		public void PlaySound(string eventName) { }
		public void RemoveAllEventListeners() { }
		public void SubscribeToGroup(UIAtlasButtonGroup buttonGroup) { }
		public void OnPointerClick(PointerEventData eventData) { }
		public void OnSubmit(BaseEventData eventData) { }
		private void OnSubmit(BaseEventData eventData, bool isHumanInput) { }
		public virtual void OnSelect(BaseEventData eventData) { }
		public virtual void OnDeselect(BaseEventData eventData) { }
		public virtual void OnMove(AxisEventData eventData) { }
		public void PlayAnimation(int anim) { }
		public bool IsPlayingAnimation() { return default; }
		public void SetTrigger(int trigger) { }
		private bool HasValidAnimator() { return default; }
		protected virtual void DoStateTransition(Selectable.SelectionState state, bool instant) { }
		private void ButtonLog(string log) { }
	}
}
