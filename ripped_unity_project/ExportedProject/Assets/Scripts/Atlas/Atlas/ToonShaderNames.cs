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

namespace Atlas
{
	public class ToonShaderNames
	{
		public static readonly int RegionMapMaterialParamId;
		public const string SURFACE_TEXTURE = "_ToonMap";
		public static readonly int SURFACE_TEXTURE_ID;
		public const string SURFACE_COLOUR = "_ToonColour";
		public const string LOW_TONE_PLACEMENT = "_LowTonePlacement";
		public const string REGION_TEXTURE = "_RegionMap";
		public const string REGION_ID = "_RegionId";
		public static readonly int REGION_ID_ID;
		public const string ALPHA_CLIP_FEATURE = "ALPHA_CLIP";
		public const string ALPHA_CLIP_THRESHOLD = "_AlphaClipThreshold";
		public const string BENDABLE_FEATURE = "BENDABLE";
		public const string BLACKHOLE_FEATURE = "BLACKHOLE";
		public const string BLACKHOLE_PARAMS = "_BlackHoleParams";
		public const string RECEIVE_DYNAMIC_SHADOWS_FEATURE = "RECEIVE_DYNAMIC_SHADOWS";
		public const string LIGHTMAP_FEATURE = "LIGHTMAP_ON";
	}
}
