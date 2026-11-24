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
	public class IPDefinition : Definition
	{
		[SerializeField] private string _displayNameLocKey;
		[SerializeField] private bool _isGenericIP;
		[SerializeField] private AssetManagerAtlasedSpriteRef _logoSprite;
		[SerializeField] private AssetManagerAtlasedSpriteRef _frontEndLogoSprite;
		[SerializeField] private AssetManagerAtlasedSpriteRef _otherFrontEndLogoSprite;
		[SerializeField] private AssetManagerAtlasedSpriteRef _chapterBackground;
		[SerializeField] private AssetManagerSpriteRef _tiledBannerBackground;
		[SerializeField] private HomeScreenIPSetup _homeScreenIPSetup;
		[SerializeField] private Color _buttonColor;
		public string DisplayNameLocKey { get => default; }
		public bool IsGenericIP { get => default; }
		public AssetManagerAtlasedSpriteRef LogoSprite { get => default; }
		public AssetManagerAtlasedSpriteRef FrontEndLogoSprite { get => default; }
		public AssetManagerAtlasedSpriteRef OtherFrontEndLogoSprite { get => default; }
		public AssetManagerAtlasedSpriteRef ChapterBackground { get => default; }
		public AssetManagerSpriteRef TiledBannerBackground { get => default; }
		public HomeScreenIPSetup HomeScreenIPSetup { get => default; }
		public Color ButtonColor { get => default; }
	}
}
