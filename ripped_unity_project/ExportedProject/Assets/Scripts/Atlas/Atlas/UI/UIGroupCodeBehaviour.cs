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
	public class UIGroupCodeBehaviour : MonoBehaviour
	{
		[SerializeField] private GameObject _groupCodeObject;
		[SerializeField] private TMP_Text _groupCodeText;
		[SerializeField] private UIAtlasButton _copyCodeButton;
		[SerializeField] private UIAtlasButton _shareButton;
		[SerializeField] private Image _shareImage;
		private AtlasSharedScreenParams _sharedScreenParams;
		private string _roomCode;
		public void Init(AtlasSharedScreenParams sharedScreenParameters) { }
		public void DeInit() { }
		public void OnGroupJoined(Group group) { }
		public void OnGroupLeft(GroupLeftReason groupLeftReason) { }
		public void SetCode(Group group) { }
		public void TrySetGroupCode() { }
		private void OnCopyCodeButton() { }
		private void OnShareButtonPressed() { }
		private string AddGapInMiddleOfString(string value) { return default; }
	}
}
