using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public delegate void TweenCallback();
	public static class UITweener
	{
		private const int MaxLeavesInTotal = 512;
		private const int MaxLeavesPerGroup = 256;
		private const int MaxGroups = 32;
		private static readonly float[] OrderRankings;
		private static readonly PlannedTweenData[] PlannedTweenDatas;
		private static TweenAnimPlannedCallback OnTweensPlanned;
		private static TweenPhaseStartedCallback OnTweenPhaseStarted;
		public static void NotifyTweenPhaseStarted(UITweenPhase phase, bool muteAudio) { }
		private static void CalculateTweenDurationsAndDependencies(string key, int numPlannedTweens) { }
		private static void DiscoverDependencies(int dataIndex) { }
		public static void PlayTweenAnimOnLeaves(UITweenAnimation animation, UITweenLeaf[] leaves, int numLeaves, float overrideDelayTimeSecs, bool dontReactivateAnimatorsAfterwards, TweenCallback onComplete) { }
		private static bool TryCreateOnCompleteVirtualTween(float totalDuration, TweenCallback onComplete, Transform transform) { return default; }
		private static void CallAndSurfaceExceptions(TweenCallback callback) { }
		private static float CalculateOrderRankingForLeaf(UITweenLeaf leaf, UITweenFillDirection fillDirection) { return default; }
		private static int TryFindTweenDataByGroup(UITweenGroup group) { return default; }
		private static bool TryResolveTweenAnim(UITweenGroup group, string key, out UITweenAnimation anim) { anim = default; return default; }
		private static void TweenDebugLog(string what) { }
	}
}
