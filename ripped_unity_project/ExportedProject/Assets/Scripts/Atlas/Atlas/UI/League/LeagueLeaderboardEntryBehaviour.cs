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
	public class LeagueLeaderboardEntryBehaviour : MonoBehaviour
	{
		[SerializeField] private CharacterRepresentationViewBehaviour _characterRepresentation;
		[SerializeField] private LeagueBadgeRepresentationBehaviour _leagueBadge;
		[SerializeField] private GameObject _bottomBackground;
		[SerializeField] private GameObject _topBackground;
		[SerializeField] private GameObject _normalBackground;
		[SerializeField] private GameObject _playerBackground;
		[SerializeField] private TMP_Text _rankText;
		[SerializeField] private TMP_Text _rankChangeText;
		[SerializeField] private GameObject _rankArrowUp;
		[SerializeField] private GameObject _rankArrowDown;
		[SerializeField] private TMP_Text _pointsText;
		[SerializeField] private Vector3 _playerScale;
		[SerializeField] private RectTransform _container;
		[SerializeField] private Color _circleColorPlayer;
		private LeagueLeaderboardData _data;
		private LeagueLeaderboardData[] _savedLeaderboardData;
		private int _currentPosition;
		private int _upperBracketHighlight;
		private int _lowerBracketHighlight;
		private const int _defaultUpperBracket = 3;
		private const int _defaultLowerBracket = 10;
		public void SetData(int position, LeagueLeaderboardData data, CharacterMetagameData characterMetagameData, LeagueDefinition leagueDefinition, LocalisationManager localisationManager, LeagueManager leagueManager, bool isPostPodium, LeagueLeaderboardData[] savedLeaderboardData) { }
		private void SetArrows() { }
		public void HideAllRankChangeIndicators() { }
	}
}
