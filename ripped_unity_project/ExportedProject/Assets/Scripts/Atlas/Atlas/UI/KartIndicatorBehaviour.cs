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
	public class KartIndicatorBehaviour : MonoBehaviour
	{
		[SerializeField] private RectTransform _kartIndicator;
		[SerializeField] private Image _kartArrow;
		[SerializeField] private TMP_Text _kartName;
		[SerializeField] private TMP_Text _pointsText;
		[SerializeField] private RectTransform _pointsRootTransform;
		[SerializeField] private Image _crownIconBattle;
		[SerializeField] private Image _crownIconRace;
		[SerializeField] private float _fadeTime;
		[SerializeField] private float _pointsRootOffsetFromName;
		[SerializeField] private float _raceCrownOffsetFromName;
		[SerializeField] private float _maxKartNameWidth;
		private float _fadeSpeed;
		private float _fadetimer;
		private float _alphaWanted;
		private Color _color;
		private GameContextPlayer _player;
		private float _targetTimer;
		private int _battlePointCached;
		private bool _battlePointVisible;
		private float _preferredWidthCached;
		public GameContextPlayer Player { get => default; }
		public bool CanUpdateTarget { get => default; }
		public void Start() { }
		private void SetActive(bool active) { }
		private void SetKartName(string kartName) { }
		private void UpdatePointsRootPosition() { }
		private float GetKartNameWidth() { return default; }
		public void SetTrackTime(float trackTime) { }
		public void SetTarget(GameContextPlayer player, float minTrackTime, bool showBattlePoints) { }
		public void SetScreenPos(Vector3 viewPortPos, Vector2 screenSize) { }
		public void SetBattlePoint(int point) { }
		public void SetBattlePointsVisible(bool visible) { }
		public void SetCrownIconVisible(bool visible, bool isBattle) { }
		public void Update() { }
	}
}
