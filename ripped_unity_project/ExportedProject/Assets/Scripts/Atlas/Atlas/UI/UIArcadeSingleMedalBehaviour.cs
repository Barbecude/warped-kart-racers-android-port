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
	public class UIArcadeSingleMedalBehaviour : MonoBehaviour
	{
		[SerializeField] private Image _icon;
		[SerializeField] private TMP_Text _text;
		[SerializeField] private bool _noTextFormat;
		[SerializeField] private Color _goldColour;
		[SerializeField] private Color _shineColour;
		[SerializeField] private ArcadeMedalSprites _medalSprites;
		[SerializeField] private Animator _animator;
		[SerializeField] private Image _shineImage;
		public Image Icon { get => default; }
		public TMP_Text Text { get => default; }
		public List<Graphic> GraphicsToColour { get => default; }
		public Color GoldColour { get => default; }
		public void Set(int currentAmount, int maxAmount, ArcadeEventDefinition.Medal medal) { }
		public void DoMedalAnimation(float delay) { }
		private IEnumerator AnimateMedal(float delay) { return default; }
	}
}
