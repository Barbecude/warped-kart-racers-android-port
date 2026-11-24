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

namespace Atlas.Gameplay.FTUE
{
	public class BaseLayerToolTipManager : IInputFamilyChangeListener
	{
		private ToolTipManager _toolTipManager;
		private string _currentDefaultLocKey;
		private float _curTimer;
		private int _curIndex;
		public void Init(ToolTipManager toolTipManager) { }
		public void DeInit() { }
		public virtual void Update(float unscaledTime) { }
		public void OnInputFamilyChanged(InputFamily family, InputGlyphMapping[] mappings) { }
		public void OnExitInProgressState() { }
		private void QueueToolTip() { }
		private string GetCurrentToolTipLocalisationKey() { return default; }
		private void ChangeCurrentToolTipLocKey() { }
		private void HideCurrentModal() { }
		private void DebugLog(string log) { }
	}
}
