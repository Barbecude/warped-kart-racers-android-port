using System;
using Atlas.Definitions;
using Atlas.Gameplay.Kart;
using Atlas.Lighting;
using Core.Definitions;
using UnityEngine;

[CreateAssetMenu(fileName = "KartVisualSettingsDefinition", menuName = "Atlas/Definitions/KartVisualSettingsDefinition")]
public class KartVisualSettingsDefinition : Definition
{
	[Serializable]
	public struct KartShadingParams
	{
		public Color HighTone;
		public Color MidTone;
		public Color LowTone;
		public float FlashLengthInSecs;
		[Range(0f, 1f)]
		public float MaxBlend;
		[Range(0f, 1f)]
		public float MinBlend;
		public float BurnAmount;
	}

	[Serializable]
	public struct KartSteeringVisualParams
	{
		[Range(0f, 1f)]
		public float SteerInputToAnimMin;
		[Range(0f, 1f)]
		public float SteerInputToAnimMax;
		public float SteerInputDeltaSpeed;
		[Range(0f, 1f)]
		public float AnimationSteeringParamHardCap;

		public static KartSteeringVisualParams CreateDefault()
		{
			return new KartSteeringVisualParams
			{
				SteerInputToAnimMin = 0f,
				SteerInputToAnimMax = 1f,
				SteerInputDeltaSpeed = 10f,
				AnimationSteeringParamHardCap = 1f
			};
		}
	}

	[Serializable]
	public struct KartWheelAngleVisualParams
	{
		[Range(0f, 1f)]
		public float SteerInputToWheelAngleMin;
		[Range(0f, 1f)]
		public float SteerInputToWheelAngleMax;
		[Min(0f)]
		public float WheelMaxSteerAngle;
		[Min(0f)]
		public float WheelDriftMaxSteerAngleOut;
		[Min(0f)]
		public float WheelDriftMaxSteerAngleIn;
		public float SteerInputDeltaSpeed;

		public static KartWheelAngleVisualParams CreateDefault()
		{
			return new KartWheelAngleVisualParams
			{
				SteerInputToWheelAngleMin = 0f,
				SteerInputToWheelAngleMax = 1f,
				WheelMaxSteerAngle = 30f,
				WheelDriftMaxSteerAngleOut = 30f,
				WheelDriftMaxSteerAngleIn = 30f,
				SteerInputDeltaSpeed = 10f
			};
		}
	}

	[Serializable]
	public struct SmokeTrailColor
	{
		public AestheticSurfaceType SurfaceType;
		public Color TrailColor;
	}

	[Header("Wheels")]
	[SerializeField]
	private float _wheelRotationSpeedFactor = 1f;
	[SerializeField]
	private float _wheelVerticalMaxOffset = 0.1f;
	[SerializeField]
	private KartWheelAngleVisualParams _wheelAngleVisualParams = KartWheelAngleVisualParams.CreateDefault();
	[SerializeField]
	private Color _wheelSmokeTrailColorDefault = Color.white;
	[SerializeField]
	private SmokeTrailColor[] _wheelSmokeTrailColors;

	[Header("Visual Offset")]
	[Range(0f, 1f)]
	[SerializeField]
	private float _kartVisualOffsetSpeedLerpRatio = 0.5f;
	[SerializeField]
	private float _kartVisualMaxYOffset = 0.25f;

	[Header("Animation Cooldowns")]
	[Min(0f)]
	[SerializeField]
	private float _kartVisualAnimationSideSneerCooldown = 5f;
	[Min(0f)]
	[SerializeField]
	private float _kartVisualAnimationOvertakingCooldown = 5f;
	[Min(0f)]
	[SerializeField]
	private float _kartVisualAnimationOvertakenCooldown = 5f;
	[Min(0f)]
	[SerializeField]
	private float _maxLandingForceVerticalVelocity = 10f;

	[SerializeField]
	private KartShadingParams _hitInvulnShading;
	[SerializeField]
	private KartShadingParams _superShieldShading;
	[SerializeField]
	private float superShieldShadingRampUpTime = 0.5f;
	[SerializeField]
	private KartShadingParams _normalShieldShading;
	[SerializeField]
	private float _normalShieldShadingRampUpTime = 0.5f;
	[SerializeField]
	private KartSteeringVisualParams _kartSteeringVisualParams = KartSteeringVisualParams.CreateDefault();

	public float WheelRotationSpeedFactor => _wheelRotationSpeedFactor;
	public float WheelVerticalMaxOffset => _wheelVerticalMaxOffset;
	public KartWheelAngleVisualParams WheelAngleVisualParameters => _wheelAngleVisualParams;
	public float KartVisualOffsetSpeedLerpRatio => _kartVisualOffsetSpeedLerpRatio;
	public float KartVisualMaxYOffset => _kartVisualMaxYOffset;
	public float KartVisualAnimationSideSneerCooldown => _kartVisualAnimationSideSneerCooldown;
	public float KartVisualAnimationOvertakingCooldown => _kartVisualAnimationOvertakingCooldown;
	public float KartVisualAnimationOvertakenCooldown => _kartVisualAnimationOvertakenCooldown;
	public float MaxLandingForceVerticalVelocity => _maxLandingForceVerticalVelocity;
	public KartShadingParams HitInvulnShading => _hitInvulnShading;
	public KartShadingParams SuperShieldShading => _superShieldShading;
	public KartShadingParams NormalShieldShading => _normalShieldShading;
	public float SuperShieldShadingRampUpTime => superShieldShadingRampUpTime;
	public float NormalShieldShadingRampUpTime => _normalShieldShadingRampUpTime;
	public KartSteeringVisualParams KartSteeringVisualParameters => _kartSteeringVisualParams;

	public Color GetWheelSmokeTrailColor(in AestheticSurfaceType surfaceType)
	{
		if (_wheelSmokeTrailColors != null)
		{
			for (int i = 0; i < _wheelSmokeTrailColors.Length; i++)
			{
				if (_wheelSmokeTrailColors[i].SurfaceType == surfaceType)
				{
					return _wheelSmokeTrailColors[i].TrailColor;
				}
			}
		}
		return _wheelSmokeTrailColorDefault;
	}
}
