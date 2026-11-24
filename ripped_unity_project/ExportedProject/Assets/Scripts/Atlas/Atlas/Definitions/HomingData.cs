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

namespace Atlas.Definitions
{
	public class HomingData
	{
		[SerializeField] private float _fov;
		[SerializeField] private float _trackingRange;
		[SerializeField] private float _kartMaxSteer;
		[SerializeField] private float _waypointMaxSteer;
		[SerializeField] private float _inAirKartMaxSteer;
		[SerializeField] private float _steerTransitionTime;
		[SerializeField] private float _waypointLookAhead;
		[SerializeField] private float _startTrackingInAirTimer;
		[SerializeField] private float _targetWarningRangeMin;
		[SerializeField] private float _targetWarningRangeMax;
		[SerializeField] private bool _hasMinimumYOnTrack;
		[SerializeField] private float _minYGapOnTrack;
		public float FOV { get => default; }
		public float TrackingRange { get => default; }
		public float TrackingRangeSquared { get => default; }
		public float KartMaxSteer { get => default; }
		public float WaypointMaxSteer { get => default; }
		public float InAirKartMaxSteer { get => default; }
		public float SteerTransitionTime { get => default; }
		public float WaypointLookAhead { get => default; }
		public float StartTrackingInAirTimer { get => default; }
		public float TargetWarningRangeMin { get => default; }
		public float TargetWarningRangeMax { get => default; }
		public bool HasMinimumYOnTrack { get => default; }
		public float MinYGapOnTrack { get => default; }
		public static HomingData CreateDefault() { return default; }
	}
}
