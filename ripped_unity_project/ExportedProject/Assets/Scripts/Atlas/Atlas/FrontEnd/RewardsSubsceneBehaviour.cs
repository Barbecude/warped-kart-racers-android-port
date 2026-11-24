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

namespace Atlas.FrontEnd
{
	public class RewardsSubsceneBehaviour : FrontEndSubsceneBehaviourBase
	{
		private static readonly int ToonColourID;
		[SerializeField] private Transform _characterRankLocator;
		[SerializeField] private GameObject _characterRankFloorSpotObject;
		[SerializeField] private MeshRenderer _characterRankFloorSpotRenderer;
		[SerializeField] private MeshRenderer _backgroundRenderer;
		[SerializeField] private Transform _kartLocator;
		[SerializeField] private Transform _characterLocator;
		[SerializeField] private Transform _antennaLocator;
		[SerializeField] private Transform _gliderLocator;
		[SerializeField] private Transform _wheelLocator;
		[SerializeField] private Material _yellowMaterial;
		[SerializeField] private Material _purpleMaterial;
		public Transform CharacterRankLocator { get => default; }
		public GameObject CharacterRankFloorSpotObject { get => default; }
		public MeshRenderer CharacterRankFloorSpotRenderer { get => default; }
		public Transform KartLocator { get => default; }
		public Transform CharacterLocator { get => default; }
		public Transform AntennaLocator { get => default; }
		public Transform GliderLocator { get => default; }
		public Transform WheelLocator { get => default; }
		public void SetupUI(bool isForCharacterRank) { }
		protected virtual void OnIPChanged(IPDefinition newIP) { }
	}
}
