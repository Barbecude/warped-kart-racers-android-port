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
	public class CharacterRepresentationViewBehaviour : RepresentationViewBehaviour<CharacterMetagameData>
	{
		[SerializeField] private Image _headshot;
		[SerializeField] private Image _thumbnail;
		[SerializeField] private Image _lockedIcon;
		[SerializeField] private TMP_Text _displayName;
		[SerializeField] private TMP_Text _skinDisplayName;
		[SerializeField] private UIAtlasButton _button;
		[SerializeField] private GameObject _localPlayerIndicator;
		[SerializeField] private TMP_Text _playerName;
		[SerializeField] private Material _lockedUIMaterial;
		[SerializeField] private Color _lockedBGColour;
		[SerializeField] private UIIrregularElement _lockedBG;
		[SerializeField] private Image _characterRankIconSmall;
		[SerializeField] private Image _characterRankIconLarge;
		[SerializeField] private RectTransform _maxRankTarget;
		[SerializeField] private Image _playerColorTiedImage;
		[SerializeField] private UIFillBarBehaviour _xpFillBar;
		[SerializeField] private Mask _imageMask;
		private Material _lockedMaterialInstance;
		public Image Headshot { get => default; }
		public Image Thumbnail { get => default; }
		public Image LockedIcon { get => default; }
		public UIAtlasButton Button { get => default; }
		public GameObject LocalPlayerIndicator { get => default; }
		public Image PlayerColorTiedImage { get => default; }
		public TMP_Text PlayerName { get => default; }
		public CharacterMetagameData Data { set { } }
		public void TransitionToColour(float duration) { }
		public void ResetLockedMatParams() { }
		private void ResetMaterial() { }
	}
}
