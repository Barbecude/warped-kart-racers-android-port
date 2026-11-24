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
	public class ChapterPanelButtonBehaviour : MonoBehaviour
	{
		[SerializeField] private UIAtlasButton _button;
		[SerializeField] private UIIrregularElement _backgroundImage;
		[SerializeField] private UIIrregularElement _highlightImage;
		[SerializeField] private Image _overlayImage;
		[SerializeField] private Image _ipImage;
		[SerializeField] private UIFlagsBehaviour _flagsBehaviour;
		[SerializeField] private GameObject _completedGameObjectRoot;
		[SerializeField] private UISlantElement _challengePanel;
		[SerializeField] private Color _completeColor;
		[SerializeField] private GameObject _comingSoonGameObject;
		[SerializeField] private Material _lockedUIMaterial;
		private Material _lockedMaterialInstance;
		public UIAtlasButton Button { get => default; }
		public UIIrregularElement BackgroundImage { get => default; }
		public UIIrregularElement HighlightImage { get => default; }
		public Image OverlayImage { get => default; }
		public Image IpImage { get => default; }
		public UIFlagsBehaviour FlagsBehaviour { get => default; }
		public GameObject CompletedGameObjectRoot { get => default; }
		public GameObject ComingSoonGameObject { get => default; }
		public List<MaskableGraphic> GraphicsToTransitionToColour { get => default; }
		public void Set(int challengeCompletedCount, int totalChallengeCount, Sprite backgroundSprite, Sprite overlaySprite, Sprite ipImage, bool unlocked, bool unseen) { }
		public void TransitionToFromGreyscale(float greyscaleAmount, float duration) { }
		public void TransitionToColour(float duration) { }
		public void TransitionToGreyscale(float duration) { }
	}
}
