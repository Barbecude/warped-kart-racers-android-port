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

namespace Atlas.Gameplay.Usables
{
	public class PlacementHomingProjectileBehaviour : CollidableUsableBehaviour
	{
		[SerializeField] private Animator _animator;
		[SerializeField] private GameObject _inFlightVFX;
		public static readonly int TransformBoolProperty;
		public static readonly int InFlightAnim;
		public static readonly int SteerParam;
		public static readonly int ImpactBoolProperty;
		public static readonly int ParentToWorldBoolProperty;
		public void StartTransformAnim() { }
		public void ResetAnimState() { }
		public void SetInFlightVFXActive(bool active) { }
		public bool IsInFlightAnim() { return default; }
		public void SetSteerParam(float f) { }
		public void TriggerImpactAnim() { }
		public void TriggerParentToWorld() { }
	}
}
