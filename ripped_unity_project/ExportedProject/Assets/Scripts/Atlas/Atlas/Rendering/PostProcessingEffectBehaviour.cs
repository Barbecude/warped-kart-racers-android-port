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
	public class PostProcessingEffectBehaviour : MonoBehaviour
	{
		public const string PostProcessingBoostEffectId = "Boost";
		private static readonly int _animatorStartStateId;
		private static readonly int _animatorEndStateId;
		private static readonly int _animatorRequestEndParamId;
		[SerializeField] private PostProcessingEffectBehaviour.Effect[] _effects;
		public PostProcessingEffectBehaviour.Effect[] Effects { get => default; }
		private void Awake() { }
		public void RegisterVolumesWithManger(PostProcessingManager postProcessingManager) { }
		public void UnRegisterVolumesWithManger(PostProcessingManager postProcessingManager) { }
		public void StartEffect(string id, bool forceRestart) { }
		public void EndEffect(string id, bool forceStop) { }
		public void SetEffectAmount(string id, float value) { }
		private void Update() { }
		private bool TryGetEffect(string id, out PostProcessingEffectBehaviour.Effect outEffect) { outEffect = default; return default; }
	}
}
