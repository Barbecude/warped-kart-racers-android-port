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

namespace Atlas.UI.Screens
{
	public class MultiplayerLobbyScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private RectTransform _statusRoot;
		[SerializeField] private TMP_Text _statusText;
		[SerializeField] private UITimer _timerParent;
		[SerializeField] private GameContextRepresentationViewBehaviour _gameContextRepresentationViewBehaviour;
		[SerializeField] private GameObject _modeIcon;
		[SerializeField] private Image _lobbyTypeIcon;
		[SerializeField] private LoadingDotsBehaviour _loadingDotsBehaviour;
		[SerializeField] private Sprite _quickPlaySprite;
		[SerializeField] private Sprite _tournamentSprite;
		[SerializeField] private NamePlateBehaviour[] _namePlateBehaviours;
		[SerializeField] private UIAtlasButton _lobbySettingsButton;
		[SerializeField] private float _portalSpawnStartDelay;
		[SerializeField] private float _totalPortalSpawnDuration;
		[SerializeField] private UIGroupCodeBehaviour _groupCodeBehaviour;
		[SerializeField] private string _groupHostAudioEvent;
		[SerializeField] private GameObject _lockHostOptionsIcon;
		public RectTransform StatusRoot { get => default; }
		public UITimer Timer { get => default; }
		public GameContextRepresentationViewBehaviour GameContextRep { get => default; }
		public GameObject ModeIcon { get => default; }
		public LoadingDotsBehaviour LoadingDotsBehaviour { get => default; }
		public NamePlateBehaviour[] NamePlateBehaviours { get => default; }
		public UIAtlasButton LobbySettingsButton { get => default; }
		public float TotalPortalSpawnDuration { get => default; }
		public float PortalSpawnStartDelay { get => default; }
		public UIGroupCodeBehaviour GroupCodeBehaviour { get => default; }
		public string GroupHostAudioEvent { get => default; }
		public GameObject LockHostOptionsIcon { get => default; }
		public void SetStatusText(string status) { }
		public void SetAndActivateQuickPlayIcon() { }
		public void SetAndActivateTournamentIcon() { }
	}
}
