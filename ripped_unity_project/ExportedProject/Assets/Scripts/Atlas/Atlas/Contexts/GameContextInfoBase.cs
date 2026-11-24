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

namespace Atlas.Contexts
{
	public class GameContextInfoBase : IContextInfo
	{
		public string GameContextId;
		public GameType GameType;
		public DefinitionID KartFollowCameraConfigID;
		public int ActiveSceneIndex;
		public DefinitionID MapId;
		public DefinitionID EventId;
		public DefinitionID AiKartHandlingId;
		public DefinitionID AiDefinitionID;
		public DefinitionID PickupBoxDefinitionID;
		public DefinitionID PickupLimitsDefinitionID;
		public string MapDisplayNameLocKey;
		public int NumberOfAi;
		public int PlayerStartPosIndex;
		public KartLoadout LocalPlayerLoadout;
		public EventDefinition.EventDuration DurationType;
		public int Duration;
		public float ExitPortalDelayRespawnTime;
		public float TransitionOutRespawnTime;
		public float ExitPortalInvulnTime;
	}
}
