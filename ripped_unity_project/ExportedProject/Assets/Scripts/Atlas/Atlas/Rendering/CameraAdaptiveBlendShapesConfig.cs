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

namespace Atlas.Rendering
{
	public class CameraAdaptiveBlendShapesConfig : ScriptableObject
	{
		[SerializeField] private CameraAdaptiveBlendShapesConfig.AdjustmentNamed[] _adjustments;
		[SerializeField] private CameraAdaptiveBlendShapesConfig.ClampedNamed[] _clamped;
		public CameraAdaptiveBlendShapesConfig.AdjustmentNamed[] Adjustments { get => default; }
		public CameraAdaptiveBlendShapesConfig.ClampedNamed[] Clamped { get => default; }
		public static CameraAdaptiveBlendShapes.Clamped[] ConvertNamed(CameraAdaptiveBlendShapesConfig.ClampedNamed[] clampedNamed, Mesh mesh) { return default; }
		public static CameraAdaptiveBlendShapes.Adjustment[] ConvertNamed(CameraAdaptiveBlendShapesConfig.AdjustmentNamed[] adjustmentNameds, Mesh mesh) { return default; }
	}
}
