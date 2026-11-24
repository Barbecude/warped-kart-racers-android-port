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
	public class FTUEScreenBehaviour : MonoBehaviour
	{
		[SerializeField] private PlayableDirector _playableDirector;
		[SerializeField] private TimelineAsset _joystickSequence;
		[SerializeField] private TimelineAsset _joystickSequenceReset;
		[SerializeField] private TimelineAsset _useDriftSequence;
		[SerializeField] private TimelineAsset _useDriftSequenceReset;
		[SerializeField] private TimelineAsset _pickupSequence;
		[SerializeField] private TimelineAsset _pickupSequenceReset;
		[SerializeField] private TimelineAsset _useUsableSequence;
		[SerializeField] private TimelineAsset _useUsableSequenceReset;
		[SerializeField] private TimelineAsset _showTimerSequence;
		[SerializeField] private TimelineAsset _battleBoxSequence;
		[SerializeField] private TimelineAsset _showPointsSequence;
		[SerializeField] private TimelineAsset _showPointsSequenceReset;
		[SerializeField] private TimelineAsset _hopBoostSequence;
		[SerializeField] private TimelineAsset _hopBoostSequenceReset;
		[SerializeField] private GameObject _greyOutScreen;
		[SerializeField] private Image _greyOutImage;
		[SerializeField] private float _greyOutScreenFadeTime;
		[SerializeField] private GraphicRaycaster _usableGraphicRaycaster;
		[SerializeField] private GraphicRaycaster _driftGraphicRaycaster;
		[SerializeField] private SupportedInputIconsBehaviour _supportedInputIcons;
		public PlayableDirector PlayableDirector { get => default; }
		public TimelineAsset JoystickSequence { get => default; }
		public TimelineAsset JoystickSequenceReset { get => default; }
		public TimelineAsset UseDriftSequence { get => default; }
		public TimelineAsset UseDriftSequenceReset { get => default; }
		public TimelineAsset PickupSequence { get => default; }
		public TimelineAsset PickupSequenceReset { get => default; }
		public TimelineAsset UseUsableSequence { get => default; }
		public TimelineAsset UseUsableSequenceReset { get => default; }
		public TimelineAsset ShowTimerSequence { get => default; }
		public TimelineAsset BattleBoxSequence { get => default; }
		public TimelineAsset ShowPointsSequence { get => default; }
		public TimelineAsset ShowPointsSequenceReset { get => default; }
		public TimelineAsset HopBoostSequence { get => default; }
		public TimelineAsset HopBoostSequenceReset { get => default; }
		public GameObject GreyOutScreen { get => default; }
		public Image GreyOutImage { get => default; }
		public float GreyOutScreenFadeTime { get => default; }
		public SupportedInputIconsBehaviour SupportedInputIcons { get => default; }
		public void SetInputsEnabled(bool enableInputs) { }
	}
}
