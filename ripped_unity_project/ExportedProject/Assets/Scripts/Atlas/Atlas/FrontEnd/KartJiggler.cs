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

namespace Atlas.FrontEnd
{
	public class KartJiggler
	{
		private const float AgitateTimeGap = 3;
		private const float AgitateTapCount = 4;
		private const int MaxHits = 4;
		private const float AntennaTapForce = 0.17;
		private const float AntennaTapForceOverFrames = 7;
		private const float KartAnimImpactForceMin = 0.5;
		private const float KartAnimImpactForceMax = 0.9;
		private CameraManager _cameraManager;
		private RaycastHit[] _hits;
		private bool _kartInteractionEnabled;
		private bool _antennaInteractionEnabled;
		private KartComposite _kartBeingAgitated;
		private int _agitatingCount;
		private float _lastAgitateTime;
		public bool KartInteractionEnabled { set { } }
		public bool AntennaInteractionEnabled { set { } }
		public void Init(CameraManager cameraManager) { }
		public void DeInit() { }
		public void Update(IUpdateParams updateParams) { }
	}
}
