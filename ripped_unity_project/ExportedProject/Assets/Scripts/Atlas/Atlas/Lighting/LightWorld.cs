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

namespace Atlas.Lighting
{
	public class LightWorld
	{
		private const int InvalidIndex = -1;
		private const int InitialMemberCapacity = 100;
		private AtlasQualitySettings _atlasQualitySettings;
		private int _volumeCount;
		private int _overrideVolumeCount;
		private bool _volumeArraysCreated;
		private LightVolumeParams _globalLightVolumeParams;
		private LightVolumeParams _lastGlobalLightVolumeParams;
		private bool _inited;
		private static readonly ProfilerMarker UpdateProfilerMarker;
		public LightVolumeParams GlobalLightVolumeParams { get => default; set { } }
		public void Init(AtlasQualitySettings atlasQualitySettings) { }
		public void DeInit() { }
		public void SetLightVolumes(LightVolumeBehaviour[] lightVolumeBehaviours) { }
		public void Update() { }
		public void OverrideMemberCelShading(ILightWorldSample sample, LightVolumeParams.CelShadingParams celShadingParams, float blend) { }
		public void ClearOverrideMemberCelShading(ILightWorldSample sample) { }
		public void RegisterMember(KartComposite kartComposite) { }
		public void UnRegisterMember(ILightWorldSample sample) { }
		public void UnRegisterMember(KartComposite kartComposite) { }
		public void UnRegisterAllMembers() { }
		public static float4 ColorToFloat4(in Color colour, float w) { return default; }
		private bool HasMember(ILightWorldSample sample) { return default; }
		private int GetMemberIndex(ILightWorldSample sample) { return default; }
		private void CreateLightVolumeArray(LightVolumeBehaviour[] lightVolumeBehaviours) { }
		private void DestroyLightVolumeArrays() { }
		private bool CelShadingParamsEqual(ref LightVolumeParams.CelShadingParams left, ref LightVolumeParams.CelShadingParams right) { return default; }
		private void CelShadingBlend(ref LightVolumeParams.CelShadingParams left, ref LightVolumeParams.CelShadingParams right, float blend) { }
		private bool ShadowingParamsEqual(ref LightVolumeParams.ShadowParams left, ref LightVolumeParams.ShadowParams right) { return default; }
		private bool IncludeLightVolumeBehaviour(LightVolumeBehaviour behaviour) { return default; }
	}
}
