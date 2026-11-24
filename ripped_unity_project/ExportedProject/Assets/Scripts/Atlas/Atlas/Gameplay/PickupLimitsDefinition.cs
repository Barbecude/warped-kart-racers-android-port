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

namespace Atlas.Gameplay
{
	public class PickupLimitsDefinition : Definition
	{
		public const string DefaultPickupLimitRace = "PickupLimitsRaceDefault";
		public const string DefaultPickupLimitBattle = "PickupLimitsBattleDefault";
		[SerializeField] private int _ricochetProjectile;
		[SerializeField] private int _proximityHomingProjectile;
		[SerializeField] private int _placementHomingProjectile;
		[SerializeField] private int _normalShieldUsable;
		[SerializeField] private int _superShieldUsable;
		[SerializeField] private int _boostUsable;
		[SerializeField] private int _goldenTurdProjectile;
		[SerializeField] private int _satelliteUsable;
		[SerializeField] private int _ricochetProjectileHitVFXPerc;
		[SerializeField] private int _proximityHomingProjectileHitVFXPerc;
		[SerializeField] private int _placementHomingProjectileHitVFXPerc;
		[SerializeField] private int _normalShieldUsableHitVFXPerc;
		[SerializeField] private int _goldenTurdProjectileHitVFXPerc;
		public int RicochetProjectile { get => default; }
		public int ProximityHomingProjectile { get => default; }
		public int PlacementHomingProjectile { get => default; }
		public int NormalShieldUsable { get => default; }
		public int SuperShieldUsable { get => default; }
		public int BoostUsable { get => default; }
		public int GoldenTurdProjectile { get => default; }
		public int SatelliteUsable { get => default; }
		public int RicochetProjectileHitVFXPerc { get => default; }
		public int ProximityHomingProjectileHitVFXPerc { get => default; }
		public int PlacementHomingProjectileHitVFXPerc { get => default; }
		public int NormalShieldUsableHitVFXPerc { get => default; }
		public int GoldenTurdProjectileHitVFXPerc { get => default; }
		public int GetCapacityByUsableType(UsableType usableType) { return default; }
	}
}
