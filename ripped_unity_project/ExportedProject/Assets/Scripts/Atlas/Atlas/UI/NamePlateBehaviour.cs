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

namespace Atlas.UI
{
	public class NamePlateBehaviour : MonoBehaviour
	{
		[SerializeField] private RectTransform _rootTransform;
		[SerializeField] private TMP_Text _pedestalText;
		[SerializeField] private UISlantElement _backingPlate;
		[SerializeField] private GameObject _awayIndicator;
		[SerializeField] private GameObject _hostIndicator;
		private static readonly float AWAY_INDICATOR_REFRESH_RATE_IN_SECONDS;
		private float _msSincelastAwayIndicatorChange;
		private bool _cachedLastAwayStatus;
		public TMP_Text PedestalText { get => default; }
		public GameObject AwayIndicator { get => default; }
		public GameObject HostIndicator { get => default; }
		public void Set(string displayName, bool isLocalPlayer, bool isGroupLeader, bool isAway) { }
		public void SetPositionBasedOn3D(Transform target, Camera camera, Canvas canvas, float yOffset) { }
		private void Update() { }
	}
}
