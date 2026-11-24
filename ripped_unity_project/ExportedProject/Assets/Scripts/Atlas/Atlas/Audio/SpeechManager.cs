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
	public class SpeechManager
	{
		public enum QueueType
		{
			NORMAL = 0,
			INSTANT_CLEARQUEUE = 1,
			INSTANT_KEEP_QUEUE = 2,
			PLAY_NEXT = 3,
			ONLY_IF_QUEUE_EMPTY = 4,
		}
		public const float SpeechFadeTime = 0.25;
		private AtlasAudioManager _audioManager;
		private AudioEvent _event;
		private SpeechRulesDefinition _speechRulesDefinition;
		private float _playTimer;
		private bool _isAI;
		private float _fadeTimer;
		private bool _fadeTriggered;
		private bool CanSpeak { get => default; }
		public void Init(AtlasAudioManager manager, SpeechRulesDefinition speechRulesDefinition) { }
		public void Init(AtlasAudioManager manager, SpeechManager other) { }
		public void DeInit() { }
		public void Reset() { }
		public bool TryPlay(KartAudio kart, string id, float character, Transform transform, float delay, string paramName, int val, SpeechManager.QueueType type) { return default; }
		public void Stop() { }
		public void ClearQueue() { }
		private void TriggerCurrentVOFadeOut() { }
		private void PrintInfo(SpeechManager.SpeechEvent e, bool playerOnly) { }
		public void Update(float dt) { }
		public bool IsPlaying() { return default; }
	}
}
