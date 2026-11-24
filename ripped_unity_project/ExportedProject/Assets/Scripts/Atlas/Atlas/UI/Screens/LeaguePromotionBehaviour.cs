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
	public class LeaguePromotionBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private TMP_Text _header;
		[SerializeField] private TMP_Text _subHeader;
		[SerializeField] private RectTransform _headerContainer;
		[SerializeField] private float _headerAnimDuration;
		[SerializeField] private float _headerAnimTargetY;
		[SerializeField] private Ease _headerAnimEase;
		[SerializeField] private Color _colorNoChange;
		[SerializeField] private Color _colorPromotion;
		[SerializeField] private Color _colorDemotion;
		[SerializeField] private int _placementFontSize;
		[SerializeField] private int _placementSubFontSize;
		[SerializeField] private int _congratulationsFontSize;
		[SerializeField] private int _congratulationsSubFontSize;
		[SerializeField] private LeagueBadgeRepresentationBehaviour _leagueBadge;
		public void Setup(LeaguePromotionFrontEndSubsceneBehaviour promotionBehaviour, AtlasSharedScreenParams sharedScreenParameters) { }
		public void AnimateHeader() { }
		private void HidePromotionObjects(LeaguePromotionFrontEndSubsceneBehaviour promotionBehaviour) { }
		private void SetUIElements(string text, string subText, Color color) { }
		private void SetTextToPosition(AtlasSharedScreenParams sharedScreenParameters) { }
		private string GetPositionText(int position, AtlasSharedScreenParams sharedScreenParams) { return default; }
	}
}
