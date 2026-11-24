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

namespace Atlas.Audio
{
	public class AudioTrigger : MonoBehaviour
	{
		public enum TYPE
		{
			Reverb = 0,
			SOS = 1,
			SoundObject = 2,
			Crowd = 3,
		}
		public enum SHAPE
		{
			None = 0,
			Sphere = 1,
			Box = 2,
		}
		private const string CROWD_DISTANCE_PARAM = "Distance";
		private const float CROWD_LERP_SPEED = 1;
		private readonly string PARAM_DOPPLER;
		private readonly string EVENT_SOS_WHOOSHES;
		private readonly string EVENT_CROWD;
		private readonly string PATH_REVERB;
		private readonly string PARAM_SPEED;
		private readonly float CROWD_MAX_DISTANCE;
		[SerializeField] private string _eventName;
		[SerializeField] private bool _globalSound;
		[SerializeField] private string _reverbName;
		[SerializeField] private AudioTrigger.TYPE _type;
		[SerializeField] private float _radius;
		[SerializeField] private bool _globalReverb;
		[SerializeField] private Vector3 _boxSize;
		[SerializeField] private Collider _collider;
		[SerializeField] private AudioTrigger.SHAPE _shape;
		[SerializeField] private Vector3 _offset;
		[SerializeField] private float _alpha;
		[SerializeField] private bool _doppler;
		[SerializeField] private float _dopplerMultiplier;
		[SerializeField] private bool _showInEditor;
		[SerializeField] private float _crowdRange;
		private EventInstance _reverbHandle;
		private AudioEvent _eventHandle;
		private AudioEvent _sosHandle;
		private float _sosDelay;
		private float _sosSpeed;
		private float _lifeTime;
		private float _lastDistance;
		private float _crowdDist;
		private float _crowdDistTarget;
		public bool Doppler { get => default; }
		public float DopplerMultiplier { get => default; }
		public AudioTrigger.TYPE GetMode() { return default; }
		public void SetMode(AudioTrigger.TYPE t) { }
		public string GetReverbName() { return default; }
		public void SetReverbName(string rn) { }
		public bool GetGlobalReverb() { return default; }
		public void SetGlobalReverb(bool b) { }
		public bool GetGlobalSound() { return default; }
		public void Play(Transform transform) { }
		public void Stop() { }
		public void PlaySOS(float speed) { }
		private void internalPlaySOS(float speed) { }
		public void SetParameter(string param, float val) { }
		private void Update() { }
		public void ProcessCrowd(Vector3 listenerposition, float delta) { }
		private void OnEnable() { }
		private void OnDisable() { }
		private EventInstance StartReverb(string name, Transform transform) { return default; }
		private void StopReverb(EventInstance ReverbHandle) { }
		private void CreateCollider() { }
		public void CalcDoppler(Vector3 kartPosition, float delta) { }
		private float Remap(float value, float originalStart, float originalEnd, float newStart, float newEnd) { return default; }
	}
}
