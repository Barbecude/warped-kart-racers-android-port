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
	public class SatelliteUsableDefinition : UsableDefinition
	{
		[SerializeField] private SatelliteUsableDefinition.SatelliteUsableData _satelliteUsableData;
		[SerializeField] private KartTriggerEffectParameters _kartTriggerEffectParametersDefault;
		[SerializeField] private SatelliteUsableDefinition.DistanceBasedTriggerEffect[] _distanceBasedKartTriggerEffects;
		public UsableType UsableType { get => default; }
		public SatelliteUsableDefinition.SatelliteUsableData SatelliteData { get => default; }
		public KartTriggerEffectParameters KartTriggerEffectParameters { get => default; }
		public SatelliteUsableDefinition.DistanceBasedTriggerEffect[] DistanceBasedKartTriggerEffects { get => default; }
		public virtual UsableDefinition.UseType PrimaryUseType() { return default; }
		public KartTriggerEffectParameters GetTriggerEffectFromDistanceToFirst(float distanceToFirst) { return default; }
	}
}
