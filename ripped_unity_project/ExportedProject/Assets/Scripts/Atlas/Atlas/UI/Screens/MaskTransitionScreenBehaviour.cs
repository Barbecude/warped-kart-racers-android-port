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
	public class MaskTransitionScreenBehaviour : UIScreenBehaviour
	{
		private static int FinishedStateId;
		private static readonly int TextureSTParamID;
		[SerializeField] private MaskTransitionScreenBehaviour.Mask[] _maskList;
		[SerializeField] private MaskTransitionScreenBehaviour.LayerSequence[] _layerSequenceList;
		[SerializeField] private Animator _animator;
		[SerializeField] private GameObject _statusMessageRootObject;
		[SerializeField] private TMP_Text _statusMessageText;
		public GameObject StatusMessageRootObject { get => default; }
		public TMP_Text StatusMessageText { get => default; }
		public void HideMask() { }
		public void ShowMask() { }
		public void PlayEnter(int index, string statusLabelText, Sprite overrideSpriteMask) { }
		public void PlayExit(int index, Sprite overrideSpriteMask) { }
		public bool IsPlaying() { return default; }
		private void PlayLayers(MaskTransitionScreenBehaviour.Layer[] layerList, string animationState, Sprite overrideSpriteMask) { }
		private Vector4 CalculateScaleAndOffset(Sprite sprite, float screenSize, UIUtils.PreserveAspectRatioType aspectRatioType) { return default; }
		private void PlayAnimation(Animator animator, string animationState) { }
		private void SetMaskVisible(bool visible) { }
	}
}
