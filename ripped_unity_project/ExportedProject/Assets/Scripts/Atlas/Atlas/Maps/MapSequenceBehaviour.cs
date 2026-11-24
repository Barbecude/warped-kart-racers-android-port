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

namespace Atlas.Maps
{
	public class MapSequenceBehaviour : MonoBehaviour
	{
		public enum TimelineEvent
		{
			IntroVO = 0,
		}
		[SerializeField] private Transform _introOutroCameraParentTransform;
		[SerializeField] private PlayableDirector _director;
		[SerializeField] private VirtualCamera _virtualCamera;
		[SerializeField] private TimelineAsset _mapPan;
		[SerializeField] private TimelineAsset _introPlayerPan;
		[SerializeField] private IntroTimings _introTimings;
		[SerializeField] private TimelineAsset _outroPlayerPan;
		public Transform IntroOutroCameraParentTransform { get => default; }
		public PlayableDirector Director { get => default; }
		public VirtualCamera VirtualCamera { get => default; }
		public TimelineAsset MapPan { get => default; }
		public TimelineAsset IntroPlayerPan { get => default; }
		public IntroTimings IntroTimings { get => default; }
		public TimelineAsset OutroPlayerPan { get => default; }
		public List<TimelineAsset> AutoDriveCameraChangePansPrimary { get => default; }
		public List<TimelineAsset> AutoDriveCameraChangePansSecondary { get => default; }
		public void TriggerVO(int timelineEventVlaue) { }
	}
}
