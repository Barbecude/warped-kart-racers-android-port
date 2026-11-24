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
	public class SeasonRepresentationViewBehaviour : RepresentationViewBehaviour<SeasonMetagameData>
	{
		private static readonly float REWARD_BAR_PORTION;
		[SerializeField] private SlantFillBar _flagsFillBar;
		[SerializeField] private UIRewardBehaviour[] _rewardBehaviours;
		[SerializeField] private UIRewardBehaviour _focusedReward;
		[SerializeField] private IPRepresentationViewBehaviour _IPRepresentationView;
		[SerializeField] private MapRepresentationViewBehaviour _mapRepresentationView;
		[SerializeField] private CharacterRepresentationViewBehaviour _charRepresentationView;
		[SerializeField] private Image _ipLogoRepresentation;
		[SerializeField] private TMP_Text _displayName;
		[SerializeField] private TMP_Text _displayNameShort;
		[SerializeField] private bool _animated;
		[SerializeField] private TMP_Text _timeText;
		[SerializeField] private TMP_Text _totalStarsText;
		[SerializeField] private Graphic _totalStarsBG;
		[SerializeField] private Color _completedColor;
		[SerializeField] private PaginationDotController _paginationDotController;
		[SerializeField] private float _scrollStartPostAdjustment;
		public SeasonMetagameData Data { set { } }
	}
}
