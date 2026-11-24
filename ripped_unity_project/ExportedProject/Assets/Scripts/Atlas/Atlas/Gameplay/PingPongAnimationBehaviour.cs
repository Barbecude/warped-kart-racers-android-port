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
	public class PingPongAnimationBehaviour : MonoBehaviour
	{
		public enum EasingFunction
		{
			Sine = 0,
			Cubic = 1,
			Quint = 2,
		}
		[SerializeField] private Vector3 _startPosition;
		[SerializeField] private Vector3 _endPosition;
		[SerializeField] private Vector3 _startRotation;
		[SerializeField] private Vector3 _endRotation;
		[SerializeField] private Vector3 _startScale;
		[SerializeField] private Vector3 _endScale;
		[SerializeField] private float _startOffset;
		[SerializeField] private float _loopDuration;
		[SerializeField] private PingPongAnimationBehaviour.EasingFunction _easingFunction;
		private Vector3 _dPosition;
		private Vector3 _dScale;
		private Quaternion _startRotationQuat;
		private Quaternion _endRotationQuat;
		private bool _updatePosition;
		private bool _updateRotation;
		private bool _updateScale;
		private float _time;
		private bool _reverse;
		private void Awake() { }
		private void OnValidate() { }
		private void LateUpdate() { }
		private void UpdateDerived() { }
		private void UpdateTransform(float t) { }
		private float EaseInOutSine(float x) { return default; }
		private float EaseInOutCubic(float x) { return default; }
		private float EaseInOutQuint(float x) { return default; }
	}
}
