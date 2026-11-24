using System;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	[Serializable]
	public struct KartHandlingTurningModifiers
	{
		public float rotSpeedFromKartSpeedModifier;
		public float rotSpeedFromSteerAngleModifier;
		public float tireGripModifier;
		public float turnSpeedCompensationModifier;

		public static KartHandlingTurningModifiers CreateDefault()
		{
			KartHandlingTurningModifiers result = default;
			result.Reset();
			return result;
		}

		public void Reset()
		{
			rotSpeedFromKartSpeedModifier = 1f;
			rotSpeedFromSteerAngleModifier = 1f;
			tireGripModifier = 1f;
			turnSpeedCompensationModifier = 1f;
		}
	}

	[Serializable]
	public struct KartHandlingSurfaceType
	{
		public FloorSurfaceType SurfaceType;
		public KartHandlingSurfaceModifiers KartHandlingSurfaceModifiers;
	}

	[Serializable]
	public class KartHandlingSurfaceModifiers
	{
		[Header("Speed")]
		public float speedModifier = 1f;
		public float reverseSpeedModifier = 1f;
		public float brakingModifier = 1f;
		public float driftSpeedMinModifier = 1f;
		public float surfaceDecelerationFactor = 1f;
		public KartHandlingTurningModifiers turningModifiers = KartHandlingTurningModifiers.CreateDefault();
		[Header("Drift")]
		public float turnSpeedDriftCompensationModifier = 1f;
		public float rotSpeedDriftRatioModifier = 1f;
		public float tireGripDriftMinModifier = 1f;
		public float tireGripDriftMaxModifier = 1f;
		[Header("Hop")]
		public float HopForceModifier = 1f;

		public KartHandlingSurfaceModifiers()
		{
			speedModifier = 1f;
			reverseSpeedModifier = 1f;
			brakingModifier = 1f;
			driftSpeedMinModifier = 1f;
			surfaceDecelerationFactor = 1f;
			turningModifiers.Reset();
			turnSpeedDriftCompensationModifier = 1f;
			rotSpeedDriftRatioModifier = 1f;
			tireGripDriftMinModifier = 1f;
			tireGripDriftMaxModifier = 1f;
			HopForceModifier = 1f;
		}
	}
}
