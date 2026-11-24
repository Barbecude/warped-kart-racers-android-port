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

namespace Atlas.Gameplay.FTUE
{
	public class BaseLayerFTUEDriving : BaseLayerFTUEManager
	{
		public enum Condition
		{
			None = 0,
			EngageJoyStick = 1,
			DriftForLength = 2,
		}
		private HitVolumeBehaviour _enterStartJoystickTrigger;
		private HitVolumeBehaviour _enterEndJoystickTrigger;
		private HitVolumeBehaviour _enterStartDriftTrigger;
		private HitVolumeBehaviour _enterEndDriftTrigger;
		private BaseLayerFTUEDriving.Condition _state;
		private int _driftDistStart;
		private bool _joystickConditionCompleted;
		private bool _driftConditionCompleted;
		private FTUEDrivingDefinition BaseLayerFtueDrivingDefinition { get => default; }
		public virtual void Init(BaseLayerFTUEDefinition baseLayerFtueDefinition, GameContextBase gameContextBase, GameContextBaseInProgressState inProgressState, GameContextBaseOutroState outroState, MapBehaviour mapBehaviour) { }
		public virtual void DeInit() { }
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void OnEnterInProgressScreen(GameInProgressScreen inProgressScreen) { }
		private void OnEnterOutroState() { }
		private void OnEnterEngageJoyStickStartTrigger(Collider collider, HitVolumeBehaviour triggeredVolume) { }
		private void OnEnterEngageJoystickEndTrigger(Collider collider, HitVolumeBehaviour triggeredVolume) { }
		private void OnEnterDriftForLengthStartTrigger(Collider collider, HitVolumeBehaviour triggeredVolume) { }
		private void OnEnterDriftForLengthEndTrigger(Collider collider, HitVolumeBehaviour triggeredVolume) { }
	}
}
