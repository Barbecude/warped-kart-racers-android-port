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

namespace Atlas.Geometry
{
	public class RangedWidthHeightSampler : IWidthHeightSampler
	{
		private FloatRange[] _widthRangeOffsets;
		private FloatRange[] _heightRangeOffsets;
		private int maxRangeCount;
		private int _nextRangeIndex;
		private float _changeTargetAuthoredStepRcp;
		private float _prevWidthOffset;
		private float _prevHeightOffset;
		private float _targetWidthOffset;
		private float _targetHeightOffset;
		private int _prevSection;
		private RandomWithState _random;
		public void Init(FloatRange[] widthRangeOffsets, FloatRange[] heightRangeOffsets, int changeTargetAuthoredStep, int randomSeed) { }
		public bool TryGetNext(int authoredIndex, out float outWidth, out float outHeight) { outWidth = default; outHeight = default; return default; }
		private float PickFromRange(FloatRange floatRange) { return default; }
		private void NextOffsets() { }
	}
}
