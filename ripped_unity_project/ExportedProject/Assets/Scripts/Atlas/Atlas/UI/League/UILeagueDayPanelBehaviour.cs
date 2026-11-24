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

namespace Atlas.UI.League
{
	public class UILeagueDayPanelBehaviour : MonoBehaviour
	{
		[SerializeField] private MapRepresentationViewBehaviour _mapRepresentation;
		[SerializeField] private UIAtlasButton _button;
		[SerializeField] private TMP_Text _dayText;
		[SerializeField] private Image _tick;
		[SerializeField] private UIIrregularElement _mapBanner;
		[SerializeField] private UIIrregularElement _mapThumbnail;
		[SerializeField] private Material _lockedMaterial;
		[SerializeField] private UIAtlasButton _uiAtlasButton;
		[SerializeField] private LeagueDayBestPlacementBehaviour _bestPlacementTag;
		public MapRepresentationViewBehaviour MapRepresentation { get => default; }
		public UIAtlasButton Button { get => default; }
		public LeagueDayBestPlacementBehaviour BestPlacementTag { get => default; }
		public void SetData(bool isEventPlayable, bool hasPlayedEvent, string localisedText) { }
	}
}
