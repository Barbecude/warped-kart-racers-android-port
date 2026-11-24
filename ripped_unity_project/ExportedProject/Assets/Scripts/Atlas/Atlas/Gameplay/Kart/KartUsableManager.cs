using System.Collections.Generic;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay.Usables;
using Atlas.Networking;
using Core.Application;
using Core.Definitions;
using Core.Networking;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartUsableManager
	{
		public enum KartUsableAction
		{
			StartEquip = 0,
			StartUse = 1,
			UnEquip = 2,
			Consume = 3
		}

		public struct KartUsableCommand
		{
			public int UsableGroupID;

			public KartUsableAction UsableAction;

			public DefinitionID UsableDefinitionID;

			public int UsesRemaining;

			public NetworkSessionTime ExecutionTime;

			public bool IsRemoteCommand;

			public Vector3 Position;

			public bool HasPosition => Position != Vector3.zero;
		}

		public struct UsableStatus
		{
			public int UsableGroupID;

			public Usable CurrentlyHeldUsable;

			public UsableDefinition CurrentlyHeldUsableDefinition;

			public NetworkSessionTime EquipStartTime;

			public bool IsValid => EquipStartTime.IsValid;

			public static UsableStatus CreateDefault(Network network)
			{
				return new UsableStatus
				{
					UsableGroupID = -1,
					CurrentlyHeldUsable = null,
					CurrentlyHeldUsableDefinition = null,
					EquipStartTime = network.Session.CreateInvalidTime()
				};
			}
		}

		private struct CommandsReceived
		{
			public bool Equip;

			public int NumOfStartUse;
		}

		private NetworkSessionTime _prevNetworkTime;

		private AtlasDefinitions _definitions;

		private UsableManager _usableManager;

		private PauseManager _pauseManager;

		private Network _network;

		private NetworkIdentifiers _networkIdentifiers;

		private KartComposite _kartComposite;

		private bool _useFlag;

		private GameContextBase _context;

		private UsableStatus _currentlyHeldStatus;

		private DefinitionID _shuffledUsableDefinitionID;

		private int _shuffleTimer = -1;

		private int _shuffleGroupId;

		private int _shuffleDuration;

		private int _equippingTimer = -1;

		private int _activatingTimer = -1;

		private int _reequipTimer = -1;

		private Dictionary<int, CommandsReceived> _usableGroupHistory;

		private bool _ignoreUseCount;

		public int CurrentGroupId { get; private set; }

		public int UsesRemaining
		{
			get
			{
				if (_currentlyHeldStatus.CurrentlyHeldUsable == null)
				{
					return 0;
				}
				return GetUsesLeft(_currentlyHeldStatus.UsableGroupID, _currentlyHeldStatus.CurrentlyHeldUsableDefinition.GeneralData.NumberOfUses);
			}
		}

		public Usable CurHeldUsable => _currentlyHeldStatus.CurrentlyHeldUsable;

		public bool HasUsableEquipped => _currentlyHeldStatus.CurrentlyHeldUsable != null;

		public bool CanStartUseLocal
		{
			get
			{
				if (UsesRemaining < 1 || _currentlyHeldStatus.CurrentlyHeldUsable == null || _shuffleTimer > 0 || _activatingTimer > 0)
				{
					return false;
				}
				if (!_kartComposite.NetworkPlayer.IsLocal())
				{
					return false;
				}
				return _reequipTimer < 1;
			}
		}

		public bool IsEquipping => _currentlyHeldStatus.CurrentlyHeldUsable != null && _equippingTimer > 0;

		public bool IsActivating => _currentlyHeldStatus.CurrentlyHeldUsable != null && _activatingTimer > 0;

		public bool IsShuffling => _shuffleTimer > 0;

		public bool HasUsableEquippedOrShuffling => _currentlyHeldStatus.CurrentlyHeldUsable != null || _shuffleTimer > 0;

		public bool IsReEquipping => _reequipTimer > 0;

		public bool IgnoreUseCount
		{
			get => _ignoreUseCount;
			set => _ignoreUseCount = value;
		}

		private int IncrementGroupID()
		{
			CurrentGroupId++;
			return CurrentGroupId;
		}

		public void Init(AtlasDefinitions definitions, UsableManager usableManager, PauseManager pauseManager, KartComposite kartComposite, GameContextBase context, Network network, NetworkIdentifiers networkIdentifiers)
		{
			_definitions = definitions;
			_usableManager = usableManager;
			_pauseManager = pauseManager;
			_kartComposite = kartComposite;
			_context = context;
			_network = network;
			_networkIdentifiers = networkIdentifiers;
			_currentlyHeldStatus = UsableStatus.CreateDefault(_network);
			_usableGroupHistory = new Dictionary<int, CommandsReceived>();
			_prevNetworkTime = _network.Session.Now();
			_network.Session.HostMigration.OnHostMigrationStarted += OnHostMigrationStarted;
			_reequipTimer = -1;
			_shuffleTimer = -1;
		}

		public void DeInit()
		{
			if (_network != null && _network.Session != null && _network.Session.HostMigration != null)
			{
				_network.Session.HostMigration.OnHostMigrationStarted -= OnHostMigrationStarted;
			}
		}

		public void Update(IUpdateParams updateParams)
		{
			UpdateTimers();
			if (_kartComposite.KartPhysicsInput.Use && !_pauseManager.IsPaused && _shuffleTimer <= 0)
			{
				StartUseLocal();
			}
			_prevNetworkTime = _network.Session.Now();
		}

		private void UpdateTimers()
		{
			int delta = _prevNetworkTime.Delta(_network.Session.Now());
			if (_currentlyHeldStatus.CurrentlyHeldUsable != null)
			{
				if (_equippingTimer > 0)
				{
					_equippingTimer -= delta;
					if (_equippingTimer <= 0 && _useFlag)
					{
						_equippingTimer = -1;
						StartUseLocal();
					}
				}
				if (_currentlyHeldStatus.CurrentlyHeldUsable != null && _activatingTimer > 0)
				{
					_activatingTimer -= delta;
					if (_activatingTimer <= 0)
					{
						_activatingTimer = -1;
						FinishUse();
					}
				}
			}

			if (_reequipTimer > 0)
			{
				_reequipTimer -= delta;
				if (_reequipTimer <= 0)
				{
					_reequipTimer = -1;
					ReEquip();
				}
			}

			if (_shuffleTimer > 0)
			{
				_shuffleTimer -= delta;
				bool isEmpty = string.IsNullOrEmpty(_shuffledUsableDefinitionID);
				if (!isEmpty && _shuffleTimer <= _shuffleDuration / 2)
				{
					int nextGroupId = CurrentGroupId + 1;
					if (CurrentGroupId == _shuffleGroupId && CanEquipLocal() && HasUsesRemaining(_shuffledUsableDefinitionID))
					{
						UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(_shuffledUsableDefinitionID);
						KartUsableCommand cmd = CreateEquipCommand(nextGroupId, def);
						AddNetworkUsableCommand(cmd, UsableType.Ricochet, false);
					}
					_shuffleGroupId = nextGroupId;
				}
				if (_shuffleTimer <= 0)
				{
					if (isEmpty)
					{
						CancelShuffle();
					}
					else
					{
						StartEquipLocal(_shuffledUsableDefinitionID);
					}
				}
			}
		}

		public void StartShuffleLocal(DefinitionID definitionID)
		{
			if (!_kartComposite.NetworkPlayer.IsLocal())
			{
				return;
			}
			if (!string.IsNullOrEmpty(definitionID))
			{
				UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(definitionID);
				if (def == null || !_usableManager.AreAnyUsablesLeftInPool(def.UsableType))
				{
					return;
				}
			}
			if (_currentlyHeldStatus.CurrentlyHeldUsable != null || _shuffleTimer > 0)
			{
				return;
			}
			if (_kartComposite.GameContextPlayer.HasFinished)
			{
				return;
			}
			GameContextDefinition contextDef = _definitions.GameDefinitions.GetDefinition<GameContextDefinition>(_context.GameContextInfoBase.GameContextDefinitionID);
			_shuffleGroupId = CurrentGroupId;
			int duration = contextDef.UsableShuffleDuration;
			_shuffleDuration = duration;
			_shuffleTimer = duration;
			_shuffledUsableDefinitionID = definitionID;
			_context.PlayerManager.FireOnUsablePickedUp(_kartComposite.GameContextPlayer, duration);
			_kartComposite.KartAudio.StartShuffle();
		}

		public void UpdateShuffleData(DefinitionID definitionID)
		{
			if (_shuffleTimer < 0)
			{
				return;
			}
			UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(definitionID);
			if (def != null && _usableManager.AreAnyUsablesLeftInPool(def.UsableType))
			{
				_shuffledUsableDefinitionID = definitionID;
			}
		}

		private bool HasUsesRemaining(DefinitionID definitionID)
		{
			UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(definitionID);
			return def != null && def.GeneralData.NumberOfUses > 0;
		}

		private bool CanEquipLocal()
		{
			if (_currentlyHeldStatus.CurrentlyHeldUsable != null)
			{
				return false;
			}
			if (!_kartComposite.NetworkPlayer.IsLocal())
			{
				return false;
			}
			return !_kartComposite.GameContextPlayer.HasFinished;
		}

		private KartUsableCommand CreateEquipCommand(int groupId, UsableDefinition usableDef)
		{
			return new KartUsableCommand
			{
				UsableGroupID = groupId,
				UsableAction = KartUsableAction.StartEquip,
				UsableDefinitionID = _shuffledUsableDefinitionID,
				UsesRemaining = usableDef.GeneralData.NumberOfUses,
				ExecutionTime = _network.Session.Now(),
				IsRemoteCommand = false,
				Position = Vector3.zero
			};
		}

		public void ForceEquipLocal(DefinitionID definitionID)
		{
			_shuffledUsableDefinitionID = definitionID;
			StartEquipLocal(definitionID);
		}

		private void StartEquipLocal(DefinitionID definitionID)
		{
			if (!CanEquipLocal())
			{
				return;
			}
			_useFlag = false;
			IncrementGroupID();
			UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(_shuffledUsableDefinitionID);
			KartUsableCommand cmd = CreateEquipCommand(CurrentGroupId, def);
			ExecuteCommand(cmd);
			if (HasUsesRemaining(definitionID))
			{
				_kartComposite.KartAudio.StopShuffleFinished();
			}
		}

		public void ConsumeLocal()
		{
			ShieldUsable shield = _kartComposite.KartPhysics.HandlingModifiersManager.CurrentShieldUsable;
			if (shield == null)
			{
				return;
			}
			KartUsableCommand cmd = new KartUsableCommand
			{
				UsableGroupID = shield.Behaviour.UsableGroupId,
				UsableAction = KartUsableAction.Consume,
				UsableDefinitionID = shield.UsableDefinition.ID,
				UsesRemaining = 0,
				ExecutionTime = _network.Session.Now(),
				IsRemoteCommand = false,
				Position = Vector3.zero
			};
			AddNetworkUsableCommand(cmd, UsableType.Ricochet, true);
		}

		public void StartUseLocal()
		{
			if (!CanStartUseLocal)
			{
				return;
			}
			if (IsEquipping || IsReEquipping)
			{
				_useFlag = true;
				return;
			}
			_useFlag = false;
			KartUsableCommand cmd = new KartUsableCommand
			{
				UsableGroupID = _currentlyHeldStatus.UsableGroupID,
				UsableAction = KartUsableAction.StartUse,
				UsableDefinitionID = _currentlyHeldStatus.CurrentlyHeldUsableDefinition.ID,
				UsesRemaining = UsesRemaining,
				ExecutionTime = _network.Session.Now(),
				IsRemoteCommand = false,
				Position = _currentlyHeldStatus.CurrentlyHeldUsable.Behaviour.transform.position
			};
			AddNetworkUsableCommand(cmd, _currentlyHeldStatus.CurrentlyHeldUsableDefinition.UsableType, true);
		}

		public void UnEquipLocal(bool unEquipImmediately = false)
		{
			DefinitionID defId = default(DefinitionID);
			int usesRemaining = 0;
			if (_currentlyHeldStatus.CurrentlyHeldUsable != null && _shuffleTimer < 1)
			{
				defId = _currentlyHeldStatus.CurrentlyHeldUsableDefinition.ID;
				usesRemaining = UsesRemaining;
			}
			else if (_shuffleTimer >= 1)
			{
				if (_shuffledUsableDefinitionID.IsValid)
				{
					UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(_shuffledUsableDefinitionID);
					defId = _shuffledUsableDefinitionID;
					usesRemaining = def.GeneralData.NumberOfUses;
				}
			}
			else
			{
				return;
			}

			KartUsableCommand cmd = new KartUsableCommand
			{
				UsableGroupID = _currentlyHeldStatus.UsableGroupID,
				UsableAction = KartUsableAction.UnEquip,
				UsableDefinitionID = defId,
				UsesRemaining = usesRemaining,
				ExecutionTime = _network.Session.Now(),
				IsRemoteCommand = false,
				Position = Vector3.zero
			};
			UnEquip(cmd, unEquipImmediately);
		}

		private void AddNetworkUsableCommand(KartUsableCommand command, UsableType type = UsableType.Ricochet, bool execute = true)
		{
			if (!_networkIdentifiers.TryGetKeyFromIdentifier(command.UsableDefinitionID, out ushort key))
			{
				return;
			}
			if (execute)
			{
				ExecuteCommand(command);
			}
			Vector3 pos = Vector3.zero;
			if (type == UsableType.GoldenTurd && command.UsableAction == KartUsableAction.StartUse)
			{
				pos = command.Position;
			}
			NetworkUsableUpdate update = new NetworkUsableUpdate
			{
				PlayerSyncId = _kartComposite.NetworkPlayer.SyncId,
				UsableGroupID = (short)command.UsableGroupID,
				UsesRemaining = (byte)command.UsesRemaining,
				UsableDefinitionKey = key,
				UsableAction = (byte)command.UsableAction,
				ExecutionTime = command.ExecutionTime,
				Position = pos
			};
			_network.Session.AddOutgoingUsableUpdate(update);
		}

		public void MigrationForceEquip(DefinitionID definition, int usesLeft, NetworkSessionTime time)
		{
			if (_shuffleTimer >= 1)
			{
				CancelShuffle();
			}
			IncrementGroupID();
			KartUsableCommand cmd = new KartUsableCommand
			{
				UsableGroupID = CurrentGroupId,
				UsableAction = KartUsableAction.StartEquip,
				UsableDefinitionID = definition,
				UsesRemaining = usesLeft,
				ExecutionTime = _network.Session.Now(),
				IsRemoteCommand = false,
				Position = Vector3.zero
			};
			EquipUsable(cmd, false);
		}

		public void ExecuteCommand(KartUsableCommand command)
		{
			if (!_networkIdentifiers.TryGetKeyFromIdentifier(command.UsableDefinitionID, out ushort _))
			{
				return;
			}
			switch (command.UsableAction)
			{
				case KartUsableAction.StartEquip:
					EquipUsable(command, false);
					break;
				case KartUsableAction.StartUse:
					StartUse(command);
					break;
				case KartUsableAction.UnEquip:
					UnEquip(command, false);
					break;
				case KartUsableAction.Consume:
					Consume(command);
					break;
			}
		}

		private void ReEquip()
		{
			if (_currentlyHeldStatus.CurrentlyHeldUsable == null)
			{
				return;
			}
			Usable spawned = SpawnUsable(_currentlyHeldStatus);
			_currentlyHeldStatus.CurrentlyHeldUsable = spawned;
			AttachToHandVisuals(spawned);
			_kartComposite.KartVisualAnimation.PlayItemPickup(_currentlyHeldStatus.CurrentlyHeldUsable.UsableDefinition.GeneralData.IgnoreItemPickupAnimOnReequip);
			_equippingTimer = _currentlyHeldStatus.CurrentlyHeldUsableDefinition.GeneralData.EquippingTime;
		}

		private void EquipUsable(KartUsableCommand command, bool equipImmediate = false)
		{
			if (_currentlyHeldStatus.IsValid && command.ExecutionTime < _currentlyHeldStatus.EquipStartTime && command.UsableGroupID != _currentlyHeldStatus.UsableGroupID)
			{
				return;
			}
			if (_usableGroupHistory.TryGetValue(command.UsableGroupID, out CommandsReceived existing) && existing.Equip)
			{
				if (_currentlyHeldStatus.UsableGroupID == command.UsableGroupID)
				{
					_currentlyHeldStatus.EquipStartTime = command.ExecutionTime;
				}
				return;
			}
			if (_currentlyHeldStatus.CurrentlyHeldUsable != null)
			{
				_currentlyHeldStatus.CurrentlyHeldUsable.MarkForDestroy(false);
			}
			int numStartUse = 0;
			if (_usableGroupHistory.ContainsKey(_currentlyHeldStatus.UsableGroupID))
			{
				numStartUse = _usableGroupHistory[_currentlyHeldStatus.UsableGroupID].NumOfStartUse;
			}
			_usableGroupHistory[command.UsableGroupID] = new CommandsReceived
			{
				Equip = true,
				NumOfStartUse = numStartUse
			};
			UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(command.UsableDefinitionID);
			UsableStatus status = new UsableStatus
			{
				UsableGroupID = command.UsableGroupID,
				CurrentlyHeldUsableDefinition = def,
				EquipStartTime = command.ExecutionTime
			};
			status.CurrentlyHeldUsable = SpawnUsable(status);
			_currentlyHeldStatus = status;
			if (def == null)
			{
				return;
			}
			_context.PlayerManager.FireOnUsableAttached(_kartComposite.GameContextPlayer, _currentlyHeldStatus.CurrentlyHeldUsableDefinition, UsesRemaining);
			AttachToHandVisuals(_currentlyHeldStatus.CurrentlyHeldUsable);
			_kartComposite.KartVisualAnimation.PlayItemPickup(false);
			if (equipImmediate)
			{
				_equippingTimer = 0;
			}
			else
			{
				int elapsed = command.ExecutionTime.Delta(_network.Session.Now());
				_equippingTimer = _currentlyHeldStatus.CurrentlyHeldUsableDefinition.GeneralData.EquippingTime - elapsed;
			}
		}

		private Usable SpawnUsable(UsableStatus status)
		{
			UsableDefinition def = status.CurrentlyHeldUsableDefinition;
			int usesLeft = GetUsesLeft(status.UsableGroupID, def.GeneralData.NumberOfUses);
			return _usableManager.SpawnAndSetUpUsable(def, _kartComposite, status.UsableGroupID, usesLeft);
		}

		private void StartUse(KartUsableCommand command)
		{
			RegisterStartUseReceived(command);
			bool hasHistory = _usableGroupHistory.TryGetValue(command.UsableGroupID, out CommandsReceived history);
			bool matchesCurrent = command.UsableGroupID == _currentlyHeldStatus.UsableGroupID;
			if (hasHistory && !matchesCurrent)
			{
				if (history.Equip)
				{
					if (command.IsRemoteCommand && command.HasPosition && _currentlyHeldStatus.CurrentlyHeldUsable != null)
					{
						_currentlyHeldStatus.CurrentlyHeldUsable.SetRemoteUseParams(command.HasPosition, command.Position);
					}
					SpawnAndUseImmediate(command);
					return;
				}
			}
			else if (matchesCurrent)
			{
				_kartComposite.KartVisualAnimation.PlayItemUse(_currentlyHeldStatus.CurrentlyHeldUsableDefinition.PrimaryUseType(), 0f);
				_currentlyHeldStatus.CurrentlyHeldUsable.OnCharacterStartUse();
				int elapsed = command.ExecutionTime.Delta(_network.Session.Now());
				_activatingTimer = _currentlyHeldStatus.CurrentlyHeldUsableDefinition.GeneralData.ActivatingTime - elapsed;
				if (_activatingTimer <= 0 && _currentlyHeldStatus.CurrentlyHeldUsable != null)
				{
					_activatingTimer = -1;
					if (command.IsRemoteCommand && command.HasPosition)
					{
						_currentlyHeldStatus.CurrentlyHeldUsable.SetRemoteUseParams(command.HasPosition, command.Position);
					}
					FinishUse();
				}
				return;
			}

			UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(command.UsableDefinitionID);
			int elapsedTime = command.ExecutionTime.Delta(_network.Session.Now());
			int remainingActivation = def.GeneralData.ActivatingTime - elapsedTime;
			int usesLeft = GetUsesLeft(command.UsableGroupID, def.GeneralData.NumberOfUses);
			if (remainingActivation <= 0 && usesLeft < 1)
			{
				SpawnAndUseImmediate(command);
				return;
			}
			KartUsableCommand syntheticEquip = new KartUsableCommand
			{
				UsableGroupID = command.UsableGroupID,
				UsableAction = KartUsableAction.StartEquip,
				UsableDefinitionID = command.UsableDefinitionID,
				UsesRemaining = command.UsesRemaining,
				ExecutionTime = command.ExecutionTime - _equippingTimer,
				IsRemoteCommand = command.IsRemoteCommand,
				Position = command.Position
			};
			EquipUsable(syntheticEquip, true);
			if (_currentlyHeldStatus.CurrentlyHeldUsable == null)
			{
				return;
			}
			if (remainingActivation >= 1)
			{
				_kartComposite.KartVisualAnimation.PlayItemUse(def.PrimaryUseType(), 0f);
				_currentlyHeldStatus.CurrentlyHeldUsable.OnCharacterStartUse();
				_activatingTimer = remainingActivation;
			}
			else
			{
				_activatingTimer = -1;
				if (command.IsRemoteCommand && command.HasPosition)
				{
					_currentlyHeldStatus.CurrentlyHeldUsable.SetRemoteUseParams(command.HasPosition, command.Position);
				}
				FinishUse();
			}
		}

		private void Consume(KartUsableCommand command)
		{
			ShieldUsable shield = _kartComposite.KartPhysics.HandlingModifiersManager.CurrentShieldUsable;
			if (shield != null && command.UsableGroupID == shield.Behaviour.UsableGroupId)
			{
				shield.Consume(false);
			}
		}

		private void SpawnAndUseImmediate(KartUsableCommand command)
		{
			UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(command.UsableDefinitionID);
			int usesLeft = GetUsesLeft(command.UsableGroupID, def.GeneralData.NumberOfUses);
			Usable spawned = _usableManager.SpawnAndSetUpUsable(def, _kartComposite, command.UsableGroupID, usesLeft);
			if (command.IsRemoteCommand && command.HasPosition)
			{
				spawned.SetRemoteUseParams(command.HasPosition, command.Position);
			}
			spawned.Use();
		}

		private void FinishUse()
		{
			if (_currentlyHeldStatus.CurrentlyHeldUsable == null)
			{
				return;
			}
			_currentlyHeldStatus.CurrentlyHeldUsable.Use();
			_context.PlayerManager.FireOnUsableUsed(_kartComposite.GameContextPlayer, _currentlyHeldStatus.CurrentlyHeldUsableDefinition, UsesRemaining);
			if (UsesRemaining >= 1)
			{
				_reequipTimer = _currentlyHeldStatus.CurrentlyHeldUsableDefinition.GeneralData.ReequipTime;
			}
			else
			{
				UnEquipLocal(false);
			}
		}

		private void CancelShuffle()
		{
			if (_shuffledUsableDefinitionID.IsValid)
			{
				UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(_shuffledUsableDefinitionID);
				_context.PickupManager.OnUsableDespawned(def, def.GeneralData.NumberOfUses);
			}
			_shuffleTimer = -1;
			_kartComposite.KartAudio.StopShuffleCancelled();
			if (_context.PlayerManager != null)
			{
				_context.PlayerManager.FireOnUsableShuffleCancelled(_kartComposite.GameContextPlayer);
			}
		}

		private void UnEquip(KartUsableCommand command, bool immediate = false)
		{
			if (!command.UsableDefinitionID.IsValid)
			{
				if (_shuffleTimer > 0)
				{
					CancelShuffle();
				}
				_currentlyHeldStatus = UsableStatus.CreateDefault(_network);
				return;
			}
			UsableDefinition def = _definitions.GameDefinitions.GetDefinition<UsableDefinition>(command.UsableDefinitionID);
			int usesRemaining = command.UsesRemaining;
			if (_shuffleTimer >= 1)
			{
				CancelShuffle();
			}
			else
			{
				if (_context.PlayerManager != null)
				{
					_context.PlayerManager.FireOnUsableDetached(_kartComposite.GameContextPlayer, _currentlyHeldStatus.CurrentlyHeldUsableDefinition, 0, immediate);
				}
				if (!_currentlyHeldStatus.CurrentlyHeldUsable.IsUsed)
				{
					usesRemaining--;
					if (immediate)
					{
						_currentlyHeldStatus.CurrentlyHeldUsable.DestroyImmediately(false);
					}
					else
					{
						_currentlyHeldStatus.CurrentlyHeldUsable.MarkForDestroy(false);
					}
				}
			}
			_context.PickupManager.OnUsableDespawned(def, usesRemaining);
			_kartComposite.KartVisualAnimation.UnEquipItem();
			_currentlyHeldStatus = UsableStatus.CreateDefault(_network);
		}

		private void AttachToHandVisuals(Usable toHold)
		{
			toHold.AttachToTransform(_kartComposite.KartVisualAnimation.CharacterVisualBehaviour.HandTransform);
		}

		private void RegisterStartUseReceived(KartUsableCommand command)
		{
			if (_ignoreUseCount)
			{
				return;
			}
			if (_usableGroupHistory.ContainsKey(command.UsableGroupID))
			{
				CommandsReceived entry = _usableGroupHistory[command.UsableGroupID];
				entry.NumOfStartUse++;
				_usableGroupHistory[command.UsableGroupID] = entry;
			}
			else
			{
				_usableGroupHistory.Add(command.UsableGroupID, new CommandsReceived
				{
					Equip = false,
					NumOfStartUse = 1
				});
			}
		}

		private int GetUsesLeft(int usableGroupID, int numberOfUses)
		{
			return numberOfUses - _usableGroupHistory[usableGroupID].NumOfStartUse;
		}

		private void OnHostMigrationStarted(bool isHost)
		{
			UnEquipLocal(true);
		}

		private string CommandToString(KartUsableCommand command)
		{
			return string.Concat(new string[]
			{
				"Kart: ",
				_kartComposite.NetworkPlayer.Name,
				" Group No: ",
				command.UsableGroupID.ToString(),
				" Sequence No ",
				command.UsesRemaining.ToString(),
				" ExTime: ",
				command.ExecutionTime.ToString()
			});
		}
	}
}
