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
	public class MiniMapBehaviour : MonoBehaviour
	{
		[SerializeField] private Image _background;
		[SerializeField] private MiniMapPlayerBehaviour _localMinimapPlayer;
		[SerializeField] private RectTransform _localPlayerIconRoot;
		[SerializeField] private RectTransform _localPlayerIconArrow;
		[SerializeField] private float _localPlayerIconScale;
		[SerializeField] private GameObject _minimapPlayerPrefab;
		[SerializeField] private RectTransform _playerIcons;
		[SerializeField] private RectTransform _crownPlayerIcon;
		[SerializeField] private RectTransform _crownPlayerAttachTransform;
		[SerializeField] private Image _culturePodIcon;
		[SerializeField] private Image _collectibleIcon;
		private bool _isBattleMode;
		private Rect _worldBounds;
		private Vector2 _minimapSize;
		private bool _areAxesRotated;
		private bool _allowCrown;
		private bool _hideRespawningPlayers;
		private MiniMapPlayerBehaviour _crownPlayer;
		private GameContextBase _gameContextBase;
		private GameContextPlayerManager _gameContextPlayerManager;
		private UsableManager _usableManager;
		private PlacementHomingProjectile _trackedCulturePod;
		public bool AllowCrown { set { } }
		public bool HideRespawningPlayers { set { } }
		public void Init(GameContextBase gameContext, MapDefinition mapDefinition, UsableManager usableManager) { }
		public void DeInit() { }
		private Vector2 MapPosition(in Vector3 worldPos) { return default; }
		private Vector3 MapRotation(in Quaternion rotation) { return default; }
		private void OnPlayerHitByUsable(GameContextPlayer hitPlayer, GameContextPlayer throwingPlayer, UsableDefinition usable) { }
		private void OnUsableSpawned(Usable usable) { }
		private void LateUpdate() { }
		private void UpdatePlayers() { }
		private bool ShouldPlayerHaveCrown(GameContextPlayer player) { return default; }
		private void UpdateUsables() { }
		private void OnCollectibleCollected(CollectibleBehaviour collectibleBehaviour) { }
	}
}
