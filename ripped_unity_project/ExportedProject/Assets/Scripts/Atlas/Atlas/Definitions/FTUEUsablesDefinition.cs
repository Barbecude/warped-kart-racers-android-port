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

namespace Atlas.Definitions
{
	public class FTUEUsablesDefinition : BaseLayerFTUEDefinition
	{
		[SerializeField] private BaseLayerFTUEDefinition.Reaction _onPickup;
		[SerializeField] private BaseLayerFTUEDefinition.Reaction _onUse;
		[SerializeField] private BaseLayerFTUEDefinition.Reaction _onHit;
		[SerializeField] private BaseLayerFTUEDefinition.Section _pickupUsableSection;
		[SerializeField] private BaseLayerFTUEDefinition.Section _useUsableSection;
		[SerializeField] private BaseLayerFTUEDefinition.Section _hitPlayerSection;
		public BaseLayerFTUEType BaseLayerFtueType { get => default; }
		public BaseLayerFTUEDefinition.Reaction OnPickup { get => default; }
		public BaseLayerFTUEDefinition.Reaction OnUse { get => default; }
		public BaseLayerFTUEDefinition.Reaction OnHit { get => default; }
		public BaseLayerFTUEDefinition.Section PickupUsableSection { get => default; }
		public BaseLayerFTUEDefinition.Section UseUsableSection { get => default; }
		public BaseLayerFTUEDefinition.Section HitPlayerSection { get => default; }
		public List<ToolTipManager.ToolTipData> ToolTipDatas { get => default; }
	}
}
