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
	public class SaveSlotBehaviour : MonoBehaviour
	{
		[SerializeField] private UIAtlasButton _deleteButton;
		[SerializeField] private UIAtlasButton _slotButton;
		[SerializeField] private TMP_Text _saveDateText;
		[SerializeField] private TMP_Text _saveTimeText;
		[SerializeField] private TMP_Text _unlockAmountText;
		[SerializeField] private TMP_Text _flagsAmountText;
		[SerializeField] private TMP_Text _goldMedalsAmountText;
		[SerializeField] private TMP_Text _playTimeText;
		[SerializeField] private GameObject _usedSlotInfo;
		[SerializeField] private GameObject _unUsedSlotInfo;
		[SerializeField] private UIIrregularElement _currentSlotToColour;
		[SerializeField] private Color _currentSlotColour;
		[SerializeField] private Color _defaultSlotColour;
		[SerializeField] private RectTransform _flagsContainer;
		[SerializeField] private RectTransform _medalsContainer;
		[SerializeField] private RectTransform _numberContainer;
		public UIAtlasButton DeleteButton { get => default; }
		public UIAtlasButton SlotButton { get => default; }
		public TMP_Text SaveDateText { get => default; }
		public TMP_Text SaveTimeText { get => default; }
		public TMP_Text UnlockAmountText { get => default; }
		public TMP_Text FlagsAmountText { get => default; }
		public TMP_Text GoldMedalsAmountText { get => default; }
		public TMP_Text PlayTimeText { get => default; }
		public GameObject UsedSlotInfo { get => default; }
		public GameObject UnUsedSlotInfo { get => default; }
		public UIIrregularElement CurrentSlotToColour { get => default; }
		public Color CurrentSlotColour { get => default; }
		public Color DefaultSlotColour { get => default; }
		public RectTransform FlagsContainer { get => default; }
		public RectTransform MedalsContainer { get => default; }
		public RectTransform NumberContainer { get => default; }
	}
}
