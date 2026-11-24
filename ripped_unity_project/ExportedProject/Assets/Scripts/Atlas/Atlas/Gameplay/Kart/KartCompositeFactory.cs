using NetworkPlayer = Core.Networking.NetworkPlayer;
using System;
using System.Collections;
using System.Collections.Generic;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Core.Application;
using Core.Assets;
using Core.Cameras;
using Core.Definitions;
using Core.Networking;
using UnityEngine;
using Network = Atlas.Networking.Network;

namespace Atlas.Gameplay.Kart
{
	public class KartCompositeFactory
	{
		private struct SpawnLocation
		{
			public Vector3 Position;
			public Quaternion Orientation;
		}

		private struct NetworkKartLoadout
		{
			public NetworkPlayer NetworkPlayer;
			public KartLoadout KartLoadout;
		}

		private struct PlayerLoadoutSet
		{
			public NetworkKartLoadout NetworkKartLoadout;
			public KartLoadout Loadout;
			public int SpawnIndex;
			public AssetManagerHandle KartRootHandle;
			public AssetManagerHandle CharacterHandle;
			public AssetManagerHandle GliderHandle;
			public AssetManagerHandle AntennaHandle;
			public AssetManagerHandle FrontWheelHandle;
			public AssetManagerHandle RearWheelHandle;
			public AssetManagerHandle BoostHandle;
			public KartAudio.EngineType EngineType;

			public bool IsValid()
			{
				return KartRootHandle != AssetManagerHandle.Invalid;
			}
		}

		public const string DefaultKartHandlingDefinitionID = "KartPhysicsHandlingDefault";
		public const string BattleKartHandlingDefinitionID = "KartPhysicsHandlingBattle";
		public const string KartHandlingRaceAIDefaultDefinitionID = "KartPhysicsHandlingRaceAI";
		public const string KartVisualSettingsDefinitionID = "KartVisualSettingsDefault";
		public const string FollowCameraAssetPath = "Common/Prefabs/P_KartFollowCamera.prefab";
		public const string KartRootPath = "Common/Prefabs/P_KART_ROOT.prefab";

		private AssetManager _assetManager;
		private AtlasDefinitions _atlasDefinitions;
		private KartInputManager _kartInputManager;
		private CameraManager _cameraManager;
		private PauseManager _pauseManager;
		private SaveManager _saveManager;
		private UsableManager _usableManager;
		private AtlasShaders _atlasShaders;
		private Network _network;
		private NetworkIdentifiers _networkIdentifiers;

		private SpawnLocation[] _spawnLocations;
		private List<PlayerLoadoutSet> _playerLoadoutSets;
		private List<AssetManagerHandle> _assetManagerHandles;
		private RaceAIUtilityManager _raceAiUtilityManager;
		private KartDefinition _kart;
		private GameObject _kartRootPrefab;
		private int _kartsInited;
		private Queue<DefinitionID> _leagueCharacterIDs;
		private DefinitionID _playerIDCharacterID;

		public IEnumerator Init(DependencyManager dependencyManager)
		{
			_assetManager = dependencyManager.GetDependency<AssetManager>();
			_atlasDefinitions = dependencyManager.GetDependency<AtlasDefinitions>();
			_kartInputManager = dependencyManager.GetDependency<KartInputManager>();
			_cameraManager = dependencyManager.GetDependency<CameraManager>();
			_pauseManager = dependencyManager.GetDependency<PauseManager>();
			_network = dependencyManager.GetDependency<Network>();
			_networkIdentifiers = dependencyManager.GetDependency<NetworkIdentifiers>();
			_usableManager = dependencyManager.GetDependency<UsableManager>();
			_atlasShaders = dependencyManager.GetDependency<AtlasShaders>();
			_saveManager = dependencyManager.GetDependency<SaveManager>();

			_playerLoadoutSets = new List<PlayerLoadoutSet>(12);
			_assetManagerHandles = new List<AssetManagerHandle>(36);

			AssetManagerHandle handle = _assetManager.RequestAsset(KartRootPath, "Karts");
			yield return _assetManager.WaitForAsset(handle);

			_assetManager.TryGetLoadedAsset<GameObject>(handle, out _kartRootPrefab);
			_raceAiUtilityManager = new RaceAIUtilityManager();
			_kartsInited = 0;
		}

		public void DeInit()
		{
			foreach (PlayerLoadoutSet set in _playerLoadoutSets)
			{
				_assetManager.Release(set.KartRootHandle);
				_assetManager.Release(set.CharacterHandle);
				_assetManager.Release(set.GliderHandle);
				_assetManager.Release(set.AntennaHandle);
				_assetManager.Release(set.FrontWheelHandle);
				_assetManager.Release(set.RearWheelHandle);
				_assetManager.Release(set.BoostHandle);
			}
			_playerLoadoutSets.Clear();
			_raceAiUtilityManager = null;
			_kartsInited = 0;
			_assetManager = null;
		}

		public void RequestLoadKarts(Transform[] spawnLocations, GameContextInfoBase gameContextInfoBase)
		{
			_playerLoadoutSets.Clear();
			_assetManagerHandles.Clear();

			if (spawnLocations != null && spawnLocations.Length > 0)
			{
				_spawnLocations = new SpawnLocation[spawnLocations.Length];
				for (int i = 0; i < spawnLocations.Length; i++)
				{
					_spawnLocations[i] = new SpawnLocation
					{
						Position = spawnLocations[i].position,
						Orientation = spawnLocations[i].rotation
					};
				}
			}

			List<NetworkPlayer> networkPlayers = _network.Session.NetworkPlayers;
			List<NetworkSpawnPosition> networkSpawnPositions = _network.Session.GetSpawnPositions();

			SetupLeagueCharacterQueue();
			List<NetworkKartLoadout> networkKartLoadouts = CreateNetworkKartLoadouts(gameContextInfoBase, networkPlayers);

			foreach (NetworkKartLoadout loadout in networkKartLoadouts)
			{
				if (loadout.NetworkPlayer.Type == NetworkPlayer.NetworkPlayerType.Local)
				{
					_playerIDCharacterID = loadout.KartLoadout.CharacterID;
				}
			}

			foreach (NetworkKartLoadout netLoadout in networkKartLoadouts)
			{
				KartLoadout kartLoadout = netLoadout.KartLoadout;
				bool isMultiplayer = _network.IsMultiplayer;
				int spawnIndex = GetSpawnIndexBySyncId(netLoadout.NetworkPlayer, networkPlayers, isMultiplayer, gameContextInfoBase.SinglePlayerStartPositionIndex);
				spawnIndex = OverwriteSpawnIndexFromNetwork(spawnIndex, netLoadout.NetworkPlayer, networkSpawnPositions);

				KartDefinition kartDef = _atlasDefinitions.GameDefinitions.GetDefinition<KartDefinition>(kartLoadout.KartID);
				GliderDefinition gliderDef = _atlasDefinitions.GameDefinitions.GetDefinition<GliderDefinition>(kartLoadout.GliderID);
				WheelsDefinition wheelsDef = _atlasDefinitions.GameDefinitions.GetDefinition<WheelsDefinition>(kartLoadout.WheelsID);

				DefinitionID charId = kartLoadout.CharacterID;
				if (netLoadout.NetworkPlayer.Type != NetworkPlayer.NetworkPlayerType.Local && gameContextInfoBase.GameMode == GameMode.League)
				{
					DefinitionID nextLeagueChar = GetNextLeagueCharacterID();
					if (!string.IsNullOrEmpty(nextLeagueChar))
					{
						charId = nextLeagueChar;
						if (charId == _playerIDCharacterID && !string.IsNullOrEmpty(_playerIDCharacterID))
						{
							charId = GetAlternateCharacterID(charId);
						}
					}
				}

				CharacterDefinition charDef = _atlasDefinitions.GameDefinitions.GetDefinition<CharacterDefinition>(charId);
				_atlasDefinitions.GameDefinitions.TryGetDefinition<AntennaDefinition>(kartLoadout.AntennaID, out AntennaDefinition antennaDef);
				_atlasDefinitions.GameDefinitions.TryGetDefinition<BoostDefinition>(kartLoadout.BoostID, out BoostDefinition boostDef);

				AssetManagerHandle kartRootHandle = AssetManagerHandle.Invalid;
				AssetManagerHandle charHandle = AssetManagerHandle.Invalid;
				AssetManagerHandle gliderHandle = AssetManagerHandle.Invalid;
				AssetManagerHandle antennaHandle = AssetManagerHandle.Invalid;
				AssetManagerHandle frontWheelHandle = AssetManagerHandle.Invalid;
				AssetManagerHandle rearWheelHandle = AssetManagerHandle.Invalid;
				AssetManagerHandle boostHandle = AssetManagerHandle.Invalid;

				if (kartDef != null)
				{
					kartRootHandle = _assetManager.RequestAsset(kartDef.AssetRef, "Karts");
				}
				if (charDef != null)
				{
					charHandle = _assetManager.RequestAsset(charDef.AssetRef, "Characters");
				}
				if (gliderDef != null)
				{
					gliderHandle = _assetManager.RequestAsset(gliderDef.AssetRef, "Gliders");
				}
				if (antennaDef != null)
				{
					antennaHandle = _assetManager.RequestAsset(antennaDef.AssetRef, "Antennas");
				}
				if (wheelsDef != null)
				{
					frontWheelHandle = _assetManager.RequestAsset(wheelsDef.AssetRef, "Wheels");
					rearWheelHandle = _assetManager.RequestAsset(wheelsDef.RearWheelAssetRef, "Wheels");
				}
				if (boostDef != null)
				{
					boostHandle = _assetManager.RequestAsset(boostDef.AssetRef, "Boosts");
				}

				kartLoadout.CharacterID = charId;

				PlayerLoadoutSet set = new PlayerLoadoutSet
				{
					NetworkKartLoadout = netLoadout,
					Loadout = kartLoadout,
					SpawnIndex = spawnIndex,
					KartRootHandle = kartRootHandle,
					CharacterHandle = charHandle,
					GliderHandle = gliderHandle,
					AntennaHandle = antennaHandle,
					FrontWheelHandle = frontWheelHandle,
					RearWheelHandle = rearWheelHandle,
					BoostHandle = boostHandle,
					EngineType = kartDef != null ? kartDef.EngineType : KartAudio.EngineType.GENERIC
				};
				_playerLoadoutSets.Add(set);

				if (kartRootHandle.IsValid()) _assetManagerHandles.Add(kartRootHandle);
				if (charHandle.IsValid()) _assetManagerHandles.Add(charHandle);
				if (gliderHandle.IsValid()) _assetManagerHandles.Add(gliderHandle);
				if (antennaHandle.IsValid()) _assetManagerHandles.Add(antennaHandle);
				if (frontWheelHandle.IsValid()) _assetManagerHandles.Add(frontWheelHandle);
				if (rearWheelHandle.IsValid()) _assetManagerHandles.Add(rearWheelHandle);
				if (boostHandle.IsValid()) _assetManagerHandles.Add(boostHandle);
			}
		}

		public IEnumerator WaitOnLoad()
		{
			if (_assetManagerHandles != null)
			{
				yield return _assetManager.WaitForAssets(_assetManagerHandles);
			}
		}

		public void CreateRequestedKartComposites(List<KartComposite> outputList, DefinitionID kartAIHandlingID, DefinitionID kartAIDefinitionID, GameContextBase gameContext)
		{
			outputList.Clear();
			_kartsInited = 0;

			KartVisualSettingsDefinition visualSettings = _atlasDefinitions.GameDefinitions.GetDefinition<KartVisualSettingsDefinition>((DefinitionID)KartVisualSettingsDefinitionID);

			foreach (PlayerLoadoutSet set in _playerLoadoutSets)
			{
				bool isAI = set.NetworkKartLoadout.NetworkPlayer.Type == NetworkPlayer.NetworkPlayerType.LocalAi ||
							set.NetworkKartLoadout.NetworkPlayer.Type == NetworkPlayer.NetworkPlayerType.RemoteAi;
				KartPhysicsHandling handling = CreateKartPhysicsHandling(kartAIHandlingID, gameContext, isAI);
				if (handling == null)
				{
					continue;
				}
				handling.Init();
				KartComposite composite = CreateInGameKartComposite(set, handling, gameContext, visualSettings, kartAIDefinitionID);
				outputList.Add(composite);
			}
		}

		public void OnDeInitContext()
		{
			ReleaseHandles();
		}

		public void ReleaseHandles()
		{
			if (_assetManagerHandles == null)
			{
				return;
			}
			foreach (AssetManagerHandle handle in _assetManagerHandles)
			{
				_assetManager?.Release(handle);
			}
			_assetManagerHandles.Clear();
		}

		public KartComposite CreateFrontEndKartComposite()
		{
			GameObject rootGo = UnityEngine.Object.Instantiate(_kartRootPrefab);
			KartRootBehaviour rootBehaviour = rootGo.GetComponent<KartRootBehaviour>();

			KartVisualComposite visualComposite = new KartVisualComposite();
			visualComposite.Init(rootGo, rootBehaviour.VisualRoot.gameObject, _atlasShaders);

			KartComposite kartComposite = new KartComposite();
			InitialiseKartCompositeCommon(kartComposite, rootBehaviour, visualComposite, null, KartInputType.None, null, null, null, null, null);
			kartComposite.SetKartInFrontEnd();
			return kartComposite;
		}

		private List<NetworkKartLoadout> CreateNetworkKartLoadouts(GameContextInfoBase gameContextInfoBase, List<NetworkPlayer> networkPlayers)
		{
			List<NetworkKartLoadout> result = new List<NetworkKartLoadout>();
			foreach (NetworkPlayer player in networkPlayers)
			{
				if (player.Type == NetworkPlayer.NetworkPlayerType.Local)
				{
					result.Add(new NetworkKartLoadout
					{
						NetworkPlayer = player,
						KartLoadout = gameContextInfoBase.LocalPlayerLoadout
					});
				}
				else if (player.Type == NetworkPlayer.NetworkPlayerType.Remote)
				{
					foreach (RemoteKartLoadout remote in gameContextInfoBase.RemotePlayerLoadouts)
					{
						if (remote.SyncId == player.SyncId)
						{
							result.Add(new NetworkKartLoadout
							{
								NetworkPlayer = player,
								KartLoadout = remote.KartLoadout
							});
							break;
						}
					}
				}
				else if (player.Type == NetworkPlayer.NetworkPlayerType.LocalAi || player.Type == NetworkPlayer.NetworkPlayerType.RemoteAi)
				{
					if (player.SyncId <= gameContextInfoBase.AIPlayerLoadouts.Count)
					{
						result.Add(new NetworkKartLoadout
						{
							NetworkPlayer = player,
							KartLoadout = gameContextInfoBase.AIPlayerLoadouts[(int)player.SyncId - 1]
						});
					}
					else
					{
						bool found = false;
						foreach (RemoteKartLoadout remote in gameContextInfoBase.RemotePlayerLoadouts)
						{
							if (remote.SyncId == player.SyncId)
							{
								result.Add(new NetworkKartLoadout
								{
									NetworkPlayer = player,
									KartLoadout = remote.KartLoadout
								});
								found = true;
								break;
							}
						}
						if (!found)
						{
							foreach (RemoteKartLoadout remote in gameContextInfoBase.RemotePlayerLoadouts)
							{
								if (remote.OriginalSyncId == player.OriginalSyncId && remote.OriginalSyncId != 0)
								{
									result.Add(new NetworkKartLoadout
									{
										NetworkPlayer = player,
										KartLoadout = remote.KartLoadout
									});
									break;
								}
							}
						}
					}
				}
			}
			return result;
		}

		private KartComposite CreateInGameKartComposite(PlayerLoadoutSet set, KartPhysicsHandling kartHandling, GameContextBase gameContext, KartVisualSettingsDefinition kartVisualSettings, DefinitionID KartAiDefinitionID)
		{
			if (!set.IsValid())
			{
				return null;
			}

			bool okKart = GetLoadedAssetOrLogError(set.KartRootHandle, set.Loadout.KartID, out GameObject kartPrefab);
			bool okChar = GetLoadedAssetOrLogError(set.CharacterHandle, set.Loadout.CharacterID, out GameObject charPrefab);
			bool okGlider = GetLoadedAssetOrLogError(set.GliderHandle, set.Loadout.GliderID, out GameObject gliderPrefab);
			GetLoadedAssetOptional(set.AntennaHandle, set.Loadout.AntennaID, out GameObject antennaPrefab);
			bool okFrontWheel = GetLoadedAssetOrLogError(set.FrontWheelHandle, set.Loadout.WheelsID, out GameObject frontWheelPrefab);
			bool okRearWheel = GetLoadedAssetOrLogError(set.RearWheelHandle, set.Loadout.WheelsID, out GameObject rearWheelPrefab);
			GetLoadedAssetOptional(set.BoostHandle, set.Loadout.BoostID, out GameObject boostPrefab);

			if (!okKart || !okChar || !okGlider || !okFrontWheel || !okRearWheel)
			{
				return null;
			}

			GameObject rootGo = UnityEngine.Object.Instantiate(_kartRootPrefab);
			KartRootBehaviour rootBehaviour = rootGo.GetComponent<KartRootBehaviour>();

			KartVisualComposite visualComposite = new KartVisualComposite();
			visualComposite.Init(rootGo, rootBehaviour.VisualRoot.gameObject, kartPrefab, charPrefab, gliderPrefab, antennaPrefab, frontWheelPrefab, rearWheelPrefab, boostPrefab, _atlasShaders);

			KartComposite kartComposite = new KartComposite();

			KartInputType inputType;
			switch (set.NetworkKartLoadout.NetworkPlayer.Type)
			{
				case NetworkPlayer.NetworkPlayerType.Local:
					inputType = KartInputType.LocalPlayerInput;
					break;
				case NetworkPlayer.NetworkPlayerType.Remote:
				case NetworkPlayer.NetworkPlayerType.RemoteAi:
					inputType = KartInputType.RemotePlayerInput;
					break;
				case NetworkPlayer.NetworkPlayerType.LocalAi:
					inputType = KartInputType.AiInput;
					break;
				default:
					inputType = KartInputType.None;
					break;
			}

			KartUsableManager usableManager = new KartUsableManager();
			CharacterDefinition charDef = _atlasDefinitions.GameDefinitions.GetDefinition<CharacterDefinition>(set.Loadout.CharacterID);
			KartAI kartAI = CreateAIForGameContextName(gameContext, kartComposite, KartAiDefinitionID, set.Loadout.CharacterID, charDef.IsBaseSkin);

			InitialiseKartCompositeCommon(kartComposite, rootBehaviour, visualComposite, kartHandling, inputType, set.NetworkKartLoadout.NetworkPlayer, usableManager, gameContext, kartAI, kartVisualSettings);

			kartComposite.KartVisualComposite.KartVisualBehaviour.ConfigureEffectsForPlayer(inputType == KartInputType.LocalPlayerInput);
			usableManager.Init(_atlasDefinitions, _usableManager, _pauseManager, kartComposite, gameContext);

			int spawnIdx = set.SpawnIndex;
			if (_spawnLocations != null && spawnIdx >= 0 && spawnIdx < _spawnLocations.Length)
			{
				kartComposite.KartPhysics.Rigidbody.position = _spawnLocations[spawnIdx].Position;
				kartComposite.KartPhysics.Rigidbody.rotation = _spawnLocations[spawnIdx].Orientation;
				kartComposite.KartPhysics.RayCastRBToGround();
			}
			kartComposite.SpawnIndex = spawnIdx;

			if (kartComposite.KartAudio != null)
			{
				kartComposite.KartAudio.StartEngine(set.EngineType);
			}

			return kartComposite;
		}

		private KartComposite InitialiseKartCompositeCommon(
			KartComposite kartComposite,
			KartRootBehaviour kartRootBehaviour,
			KartVisualComposite kartVisual,
			KartPhysicsHandling kartHandling,
			KartInputType kartInputType = KartInputType.None,
			NetworkPlayer? netPlayer = null,
			KartUsableManager kartUsableManager = null,
			GameContextBase gameContext = null,
			KartAI kartAI = null,
			KartVisualSettingsDefinition kartVisualSettingsDefinition = null)
		{
			if (kartHandling == null)
			{
				kartHandling = CreateKartPhysicsHandling(DefinitionID.Invalid, null, false);
			}

			if (kartVisualSettingsDefinition == null)
			{
				kartVisualSettingsDefinition = _atlasDefinitions.GameDefinitions.GetDefinition<KartVisualSettingsDefinition>((DefinitionID)KartVisualSettingsDefinitionID);
			}

			KartPhysicsInput physicsInput = new KartPhysicsInput();
			KartPhysics physics = new KartPhysics();
			KartVisualAnimation visualAnim = new KartVisualAnimation();
			KartAudio kartAudio = new KartAudio();

			kartComposite.Init(kartRootBehaviour, physicsInput, physics, kartVisual, visualAnim, kartUsableManager, netPlayer, kartAI, gameContext, kartAudio, kartInputType, kartVisualSettingsDefinition);

			physicsInput.Init(kartComposite, _kartInputManager, kartHandling.InputConfig, kartAI);
			physicsInput.InputType = kartInputType;
			physics.Init(kartComposite, kartRootBehaviour, physicsInput, kartHandling, kartVisualSettingsDefinition, _kartsInited);
			visualAnim.Init(kartComposite, _cameraManager, kartVisualSettingsDefinition, kartAudio);

			_kartsInited++;
			return kartComposite;
		}

		private KartPhysicsHandling CreateKartPhysicsHandling(DefinitionID kartAIHandlingID, GameContextBase context, bool isAI = false)
		{
			DefinitionID id = isAI ? kartAIHandlingID : DefinitionID.Invalid;
			if (!id.IsValid)
			{
				id = (DefinitionID)DefaultKartHandlingDefinitionID;
				if (context != null)
				{
					if (context is RaceGameContext)
					{
						id = (DefinitionID)(isAI ? KartHandlingRaceAIDefaultDefinitionID : DefaultKartHandlingDefinitionID);
					}
					if (context is BattleGameContext)
					{
						id = (DefinitionID)BattleKartHandlingDefinitionID;
					}
				}
			}
			return _atlasDefinitions.GameDefinitions.GetDefinition<KartPhysicsHandling>(id);
		}

		private KartAI CreateAIForGameContextName(GameContextBase gameContext, KartComposite kartComposite, DefinitionID KartAIDefinitionID, DefinitionID characterID, bool isBaseCharacter)
		{
			if (gameContext == null)
			{
				return null;
			}

			string contextName = gameContext.GetContextName();
			if (contextName == "RaceGameContext")
			{
				DefinitionID id = KartAIDefinitionID;
				if (!id.IsValid)
				{
					id = (DefinitionID)"RaceKartAIDefinitionDefault";
				}
				RaceKartAIDefinition def = _atlasDefinitions.GameDefinitions.GetDefinition<RaceKartAIDefinition>(id);
				RaceKartAI ai = new RaceKartAI();
				int aiGroup = 0;
				if (gameContext.GameContextInfo.GameMode == GameMode.League)
				{
					aiGroup = isBaseCharacter
						? _raceAiUtilityManager.GetAIGroupBasedOnCharacter(characterID, _saveManager)
						: _raceAiUtilityManager.GetAiGroupBasedOnAlternateCharacter(characterID, _saveManager, _atlasDefinitions.GameDefinitions);
				}
				ai.Init(kartComposite, gameContext, def, _raceAiUtilityManager, (_kartsInited & 1) == 0, aiGroup);
				return ai;
			}

			if (contextName == "BattleGameContext")
			{
				DefinitionID id = KartAIDefinitionID;
				if (!id.IsValid)
				{
					id = (DefinitionID)"BattleKartAIDefinitionDefault";
				}
				BattleKartAIDefinition def = _atlasDefinitions.GameDefinitions.GetDefinition<BattleKartAIDefinition>(id);
				BattleKartAI ai = new BattleKartAI();
				ai.Init(kartComposite, gameContext, def, (_kartsInited & 1) == 0);
				return ai;
			}

			return null;
		}

		private bool GetLoadedAssetOrLogError(AssetManagerHandle handle, DefinitionID defId, out GameObject prefab)
		{
			return _assetManager.TryGetLoadedAsset<GameObject>(handle, out prefab);
		}

		private bool GetLoadedAssetOptional(AssetManagerHandle handle, DefinitionID defId, out GameObject prefab)
		{
			_assetManager.TryGetLoadedAsset<GameObject>(handle, out prefab);
			return true;
		}

		private int GetSpawnIndexBySyncId(NetworkPlayer currentPlayer, List<NetworkPlayer> sortedPlayers, bool isMultiplayer, int singlePlayerStartPosIndex = -1)
		{
			if (singlePlayerStartPosIndex < 0 && !isMultiplayer)
			{
				singlePlayerStartPosIndex = sortedPlayers.Count - 1;
			}

			if (singlePlayerStartPosIndex >= 0 && singlePlayerStartPosIndex < sortedPlayers.Count)
			{
				int localIdx = sortedPlayers.FindIndex(p => p.Type == NetworkPlayer.NetworkPlayerType.Local);
				if (localIdx >= 0)
				{
					NetworkPlayer localPlayer = sortedPlayers[localIdx];
					NetworkPlayer swapPlayer = sortedPlayers[singlePlayerStartPosIndex];
					sortedPlayers[localIdx] = swapPlayer;
					sortedPlayers[singlePlayerStartPosIndex] = localPlayer;
				}
			}

			for (int i = 0; i < sortedPlayers.Count; i++)
			{
				if (currentPlayer.SyncId == sortedPlayers[i].SyncId)
				{
					return i;
				}
			}
			return 0;
		}

		private int OverwriteSpawnIndexFromNetwork(int spawnIndexGiven, NetworkPlayer player, List<NetworkSpawnPosition> positions)
		{
			if (positions.Count > 0)
			{
				foreach (NetworkSpawnPosition pos in positions)
				{
					if (player.SyncId == pos.SyncId)
					{
						return pos.SpawnIndex;
					}
				}
			}
			return spawnIndexGiven;
		}

		private DefinitionID GetNextLeagueCharacterID()
		{
			if (_leagueCharacterIDs.Count > 0)
			{
				return _leagueCharacterIDs.Dequeue();
			}
			return (DefinitionID)"";
		}

		private void SetupLeagueCharacterQueue()
		{
			_leagueCharacterIDs.Clear();
			List<LeagueCharacterPosition> positions = LeagueModeSave.GetCharacterPositions(11, _saveManager);
			for (int i = 0; i < positions.Count; i++)
			{
				_leagueCharacterIDs.Enqueue(positions[i].CharacterID);
			}
		}

		private DefinitionID GetAlternateCharacterID(DefinitionID characterID)
		{
			CharacterDefinition def = _atlasDefinitions.GameDefinitions.GetDefinition<CharacterDefinition>(characterID);
			return def.AlternateID;
		}

		public KartCompositeFactory()
		{
			_leagueCharacterIDs = new Queue<DefinitionID>();
		}
	}
}
