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
	public class UILobbyInfoPanelBehaviour : MonoBehaviour
	{
		[SerializeField] private UITimer _timer;
		[SerializeField] private TMP_Text _playerAmountText;
		[SerializeField] private GameObject _container;
		[SerializeField] private GameContextRepresentationViewBehaviour _gameContextRepresentation;
		[SerializeField] private Image _gameTypeImage;
		[SerializeField] private Sprite _tournamentSprite;
		[SerializeField] private Sprite _quickPlaySprite;
		[SerializeField] private UIGroupCodeBehaviour _groupCodeBehaviour;
		[SerializeField] private GameObject _hostIndicator;
		[SerializeField] private string _groupHostAudioEvent;
		private AtlasSharedScreenParams _sharedScreenParams;
		private int _cachedNumPlayers;
		public void Init(AtlasSharedScreenParams sharedScreenParameters) { }
		public void DeInit() { }
		private void Update() { }
		public void SetIcon(GameType gameType, string gameContextId) { }
		private void OnGroupLeaderChangedJoined(Player player) { }
	}
}
