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
	public class PortalVFXBehaviour : MonoBehaviour, IPoolableObject
	{
		public const float EnterTime = 0.5;
		public const float ExitTime = 0.5;
		public const int InitialDuplicateMaterialsCapacity = 20;
		[SerializeField] private Animator _animator;
		private readonly int PortalRespawnAnim;
		private static readonly int BlackholeParams;
		private const string BlackholeKeyword = "BLACKHOLE";
		public const float AnimationTime = 1.5;
		public bool HasTargets { get => default; }
		public bool IsAnimationFinished { get => default; }
		public void OnLeavePool() { }
		public void OnEnterPool() { }
		public void Reset() { }
		private void Awake() { }
		public void PlayRespawnAnim() { }
		public void StartEnteringPortal(KartVisualComposite kartVisualComposite, KartUsableManager kartUsableManager) { }
		public void StartExitingPortal(KartVisualComposite kartVisualComposite, KartUsableManager kartUsableManager) { }
		public bool SetEnteringTimeForKart(KartVisualComposite kartVisualComposite, float kartInfoPortalTime, KartUsableManager kartUsableManager) { return default; }
		public bool SetExitingTimeForKart(KartVisualComposite kartVisualComposite, float kartInfoPortalTime, KartUsableManager kartUsableManager) { return default; }
		public void DisableShaderKeywordForKart(KartVisualComposite kartVisualComposite, KartUsableManager kartUsableManager) { }
		private void UpdateEnterPortal(float deltaTime) { }
		private void UpdateExitPortal(float deltaTime) { }
		private float GetMaxW(float distance, float vertexBounds) { return default; }
		private float GetMinW(float distance, float vertexBounds) { return default; }
		public void OnUpdate(IUpdateParams updateParams) { }
		private void RemoveFromExitPortal(int i, bool disableShader) { }
		private void RemoveFromEnterPortal(int i, bool disableShader) { }
		private void RemoveAllBlackHoleTargets() { }
	}
}
