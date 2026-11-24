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
	public class VotingScreenBehaviour : AtlasUIScreenBehaviour
	{
		public enum VoteOptions
		{
			Left = 0,
			Right = 1,
			Count = 2,
		}
		[SerializeField] private TMP_Text _titleText;
		[SerializeField] private TMP_Text _titleTextMeasurement;
		[SerializeField] private VotingScreenBehaviour.VoteChoice[] _voteChoices;
		[SerializeField] private UITimer _timerParent;
		[SerializeField] private CanvasGroup _timerCanvas;
		[SerializeField] private GameObject _controllerGlyphObject;
		[SerializeField] private AssetReference _voteIconPrefab;
		[SerializeField] private AtlasTweenAnimations.SpinZoomParams _titleTieVoteAnimParams;
		[SerializeField] private Transform _tweenTarget;
		[SerializeField] private float _tweenTime;
		[SerializeField] private Ease _winningVoteCurve;
		[SerializeField] private float _fadeTime;
		[SerializeField] private AtlasTweenAnimations.JumpZoomParams _winningVoteAnimParams;
		[SerializeField] private float _voteMadeScale;
		[SerializeField] private float _voteMadeTweenTime;
		[SerializeField] private string _pickGameLocalisationKey;
		[SerializeField] private string _nextModeLocalisationKey;
		[SerializeField] private string _tieLocalisationKey;
		[SerializeField] private Color _tieTextColour;
		[SerializeField] private Color _normalTextColour;
		public UITimer Timer { get => default; }
		public AssetReference VoteIconRef { get => default; }
		public UITimer UITimer { set { } }
		public Transform TweenTarget { get => default; }
		public CanvasGroup TimerCanvas { get => default; }
		public GameObject ControllerGlyphObject { get => default; }
		public float FadeTime { get => default; }
		public float TweenTime { get => default; }
		public Ease WinningVoteCurve { get => default; }
		public AtlasTweenAnimations.JumpZoomParams WinningVoteAnimParams { get => default; }
		public AtlasTweenAnimations.SpinZoomParams TitleTieVoteAnimParams { get => default; }
		public TMP_Text TitleText { get => default; }
		public TMP_Text TitleTextMeasurement { get => default; }
		public string PickGameLocalisationKey { get => default; }
		public string NextModeLocalisationKey { get => default; }
		public string TieLocalisationKey { get => default; }
		public Color TieTextColour { get => default; }
		public Color NormalTextColour { get => default; }
		public float VoteMadeTweenTime { get => default; }
		public float VoteMadeScale { get => default; }
		public VotingScreenBehaviour.VoteChoice GetVoteChoice(VotingScreenBehaviour.VoteOptions voteOptions) { return default; }
	}
}
