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
	public class KartSelectBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private AssetReference _loadoutGridIconRef;
		[SerializeField] private CharacterRepresentationViewBehaviour _characterNamePanelView;
		[SerializeField] private LoadoutRepresentationViewBehaviour _namePanelView;
		[SerializeField] private LoadoutRepresentationViewBehaviour _lockedDescView;
		[SerializeField] private Synced3DElementBehaviour _pedestalElementBehaviour;
		[SerializeField] private int _numColumnsOnPage;
		[SerializeField] private TabController _tabController;
		[SerializeField] private UILobbyInfoPanelBehaviour _lobbyInfoPanelBehaviour;
		public AssetReference LoadoutGridIconRef { get => default; }
		public CharacterRepresentationViewBehaviour CharacterNamePanelView { get => default; }
		public LoadoutRepresentationViewBehaviour NamePanelView { get => default; }
		public LoadoutRepresentationViewBehaviour LockedDescView { get => default; }
		public Synced3DElementBehaviour PedestalElementBehaviour { get => default; }
		public int NumColumnsOnPage { get => default; }
		public TabController TabController { get => default; }
		public UILobbyInfoPanelBehaviour LobbyInfoPanelBehaviour { get => default; }
	}
}
