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
	public class LightVolumeBehaviour : MonoBehaviour
	{
		public enum Shape
		{
			Cuboid = 0,
			Sphere = 1,
		}
		public enum Type
		{
			Normal = 0,
			Override = 1,
		}
		[SerializeField] private LightVolumeBehaviour.Type _volumeType;
		[SerializeField] private LightVolumeBehaviour.Shape _volumeShape;
		[SerializeField] private Color _highTone;
		[SerializeField] private Color _midTone;
		[SerializeField] private Color _lowTone;
		[SerializeField] private Color _dropShadowColour;
		[SerializeField] private float _burnModifier;
		[SerializeField] private float _blendDistance;
		public LightVolumeBehaviour.Type VolumeType { get => default; }
		public LightVolumeBehaviour.Shape VolumeShape { get => default; }
		public Color LowTone { get => default; }
		public Color MidTone { get => default; }
		public Color HighTone { get => default; }
		public float BlendDistance { get => default; }
		public LightVolume GenerateLightVolume() { return default; }
		public LightVolumeParams GenerateLightVolumeParams() { return default; }
		private void OnDrawGizmos() { }
	}
}
