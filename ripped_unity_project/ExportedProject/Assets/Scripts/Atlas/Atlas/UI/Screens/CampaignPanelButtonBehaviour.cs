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
	public class CampaignPanelButtonBehaviour : MonoBehaviour
	{
		[SerializeField] private UIAtlasButton _button;
		[SerializeField] private UIFlagsBehaviour _flagsBehaviour;
		[SerializeField] private UIIrregularElement _namePanel;
		[SerializeField] private TMP_Text _nameText;
		[SerializeField] private UIIrregularElement _highlightImage;
		[SerializeField] private UIIrregularElement _borderImage;
		[SerializeField] private UIIrregularElement _backgroundImage;
		[SerializeField] private GameObject _lockIcon;
		[SerializeField] private CanvasGroup _lockCanvasGroup;
		[SerializeField] private CampaignPanelButtonBehaviour.UnlockImage[] _unlockImages;
		[SerializeField] private UISlantElement _challengePanel;
		[SerializeField] private Color _completeColor;
		[SerializeField] private Image _difficultyImage;
		public Material LockedMaterial;
		public UIAtlasButton Button { get => default; }
		public UIFlagsBehaviour FlagsBehaviour { get => default; }
		public UIIrregularElement NamePanel { get => default; }
		public TMP_Text NameText { get => default; }
		public UIIrregularElement HighlightImage { get => default; }
		public UIIrregularElement BorderImage { get => default; }
		public UIIrregularElement BackgroundImage { get => default; }
		public GameObject LockIcon { get => default; }
		public CanvasGroup LockCanvasGroup { get => default; }
		public CampaignPanelButtonBehaviour.UnlockImage[] UnlockImages { get => default; }
		public UISlantElement ChallengePanel { get => default; }
		public Color CompleteColor { get => default; }
		public Image DifficultyImage { get => default; }
		public List<MaskableGraphic> GraphicsToTransitionToColour { get => default; }
		public void TransitionToColour(float duration) { }
	}
}
