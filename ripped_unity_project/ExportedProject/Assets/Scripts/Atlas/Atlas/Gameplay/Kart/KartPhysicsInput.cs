using Atlas.Input;
using Core.Application;
using Core.Input;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartPhysicsInput
	{
		protected KartInputType _inputType;
		protected KartPhysicsInputConfig _inputConfig;
		protected bool _disableBrakeOnDrift;
		protected bool _disableReverse;
		protected bool _extraSteerEnabled;
		protected bool _disableItemUse;
		protected bool _disableAutoThrottle;
		protected KartComposite _kartComposite;
		protected KartAI _kartAI;
		private float _maxVirtualSteeringAngle;
		private Vector2 _leftStick = Vector2.zero;
		private float _leftStickAngle;
		private KartPhysicsInputData _data;
		private AtlasInput.KartPhysicsActions _kartActions;
		private bool _inited;
		private float _steerTimer;
		private int _prevSteerSign;

		public KartInputType InputType
		{
			get => _inputType;
			set => _inputType = value;
		}

		public KartPhysicsInputData Data
		{
			get => _data;
			set => _data = value;
		}

		public bool IsFrozen => GameplayFreeze || LogicFreeze;
		public bool GameplayFreeze { get; set; }
		public bool LogicFreeze { get; set; }
		public bool ForceBrake { get; set; }

		public bool DisableReverse
		{
			get => _disableReverse;
			set => _disableReverse = value;
		}

		public bool DisableAutoThrottle
		{
			get => _disableAutoThrottle;
			set => _disableAutoThrottle = value;
		}

		public bool DisableBrakeOnDrift
		{
			get => _disableBrakeOnDrift;
			set => _disableBrakeOnDrift = value;
		}

		public KartPhysicsInput()
		{
			_leftStick = Vector2.zero;
			_data = default;
			_data.Yoke = Vector2.zero;
		}

		public void SetDisableItemUse(bool disable)
		{
			_disableItemUse = disable;
		}

		public void Init(KartComposite kartComposite, KartInputManager inputManager, KartPhysicsInputConfig inputConfig, KartAI kartAI)
		{
			_inputConfig = inputConfig;
			_kartActions = inputManager.KartPhysicsAction;
			_maxVirtualSteeringAngle = _inputConfig.MaxVirtualSteeringAngleDeg * Mathf.Deg2Rad;
			_kartComposite = kartComposite;
			_kartAI = kartAI;
			_disableBrakeOnDrift = inputConfig.DisableBrakeOnDrift;
			_disableReverse = inputConfig.DisableReverse;
			_extraSteerEnabled = inputConfig.ExtraSteerEnabled;
			_inited = true;
		}

		public void DeInit()
		{
			_kartComposite = null;
			_inited = false;
		}

		public void SetGamePlayFreezeAndBrake(bool freeze)
		{
			GameplayFreeze = freeze;
			ForceBrake = freeze || LogicFreeze;
		}

		public void SetLogicFreeze(bool freeze)
		{
			LogicFreeze = freeze;
			ForceBrake = GameplayFreeze || freeze;
		}

		public void ResetInput()
		{
			_leftStick = Vector2.zero;
			_data.Drift = 0f;
			_data.Hop = false;
			_data.Use = false;
		}

		protected AtlasRawInput GetInput()
		{
			Vector2 left = _kartActions.LeftJoystick.ReadValue<Vector2>();
			var driftAction = _kartActions.Drift;
			var useAction = _kartActions.Use;

			if (InputManager.JoystickRotatedLeft)
			{
				left = new Vector2(-left.y, left.x);
				driftAction = _kartActions.Use;
				useAction = _kartActions.Drift;
			}
			else if (InputManager.JoystickRotatedRight)
			{
				left = new Vector2(left.y, -left.x);
				driftAction = _kartActions.Use;
				useAction = _kartActions.Drift;
			}

			float2 leftStick = left;
			float2 rightStick = _kartActions.RightJoystick.ReadValue<Vector2>();
			float driftVal = driftAction.ReadValue<float>();

			return new AtlasRawInput
			{
				LeftStick = leftStick,
				RightStick = rightStick,
				Drift = driftVal > 0f,
				Use = useAction.triggered,
				Hop = driftAction.triggered
			};
		}

		protected void GetPlayerInput(float deltaTime)
		{
			float driftTimer = _kartComposite.KartPhysics.Body.DriftTimer;
			AtlasRawInput raw = GetInput();

			_leftStick.x = Mathf.Clamp(raw.LeftStick.x, -1f, 1f);
			_leftStick.y = Mathf.Clamp(raw.LeftStick.y, -1f, 1f);
			_data.Drift = raw.Drift ? 1f : 0f;
			_data.Use = !_disableItemUse && raw.Use;
			_data.Hop = raw.Hop;
			_data.RawSteer = _leftStick.x;

			_leftStickAngle = Mathf.Atan2(_leftStick.x, _leftStick.y);
			float halfPi = Mathf.PI * 0.5f;
			bool inExtraSteerRange = Mathf.Abs(_leftStickAngle) > halfPi && Mathf.Abs(_leftStickAngle) < _maxVirtualSteeringAngle;
			float mag = _leftStick.magnitude;

			float extraFactor = 0f;
			if (driftTimer > 0f && _extraSteerEnabled)
			{
				extraFactor = Mathf.Clamp(Mathf.InverseLerp(halfPi, _maxVirtualSteeringAngle, Mathf.Abs(_leftStickAngle)), 0f, 1f);
			}

			float steer = _leftStick.x;
			if (inExtraSteerRange && driftTimer > 0f && _extraSteerEnabled)
			{
				steer = mag * (extraFactor + 1f) * Mathf.Sign(steer);
			}

			int steerSign = (int)Mathf.Sign(steer);
			if (_prevSteerSign != steerSign)
			{
				_steerTimer = 0f;
			}

			KartPhysicsHandling handling = _kartComposite.KartPhysics.PhysicsHandling;
			if (Mathf.Abs(steer) <= handling.InitialSteerValue)
			{
				_steerTimer = 0f;
			}
			else
			{
				_steerTimer += deltaTime;
				if (_steerTimer < handling.InitialSteerTime && driftTimer <= 0f)
				{
					steer = Mathf.Sign(steer) * handling.InitialSteerValue;
				}
			}

			_prevSteerSign = (int)Mathf.Sign(steer);

			if (driftTimer > 0f)
			{
				float minSteer = handling.DriftMinSteer;
				float maxSteer = handling.DriftMaxSteer;
				float neutralSteer = handling.DriftNeutralSteer;

				DriftBoostLevel boostLevel = _kartComposite.KartPhysics.Body.CurrentDriftBoostLevel;
				if (boostLevel.IsValid())
				{
					minSteer = boostLevel.MinSteer;
					maxSteer = boostLevel.MaxSteer;
					neutralSteer = boostLevel.NeutralSteer;
				}

				float clampedSteer = Mathf.Clamp(steer, -1f, 1f);
				float driftDir = _kartComposite.KartPhysics.Body.DriftDirection;

				float posRange = driftDir >= 0f ? (maxSteer - neutralSteer) : -(neutralSteer - minSteer);
				float negBase = driftDir >= 0f ? minSteer : maxSteer;
				float negRange = driftDir >= 0f ? (neutralSteer - minSteer) : -(maxSteer - neutralSteer);

				float driftedSteer = clampedSteer < 0f
					? negBase + (1f - Mathf.Abs(clampedSteer)) * negRange
					: neutralSteer + clampedSteer * posRange;

				steer = driftDir * Mathf.Max(driftedSteer, minSteer);
			}

			_data.Steer = steer;
			_data.Throttle = _disableAutoThrottle ? Mathf.Clamp01(_leftStick.y) : 1f;
			_data.Engine = 1f;
			_data.RawStick = _leftStick;

			float glideDeadzone = _leftStick.y >= 0f ? _inputConfig.GlideUpDeadzone : _inputConfig.GlideDownDeadzone;
			float glideAngle = _leftStick.y >= 0f ? _inputConfig.GlideUpAngleDeg : _inputConfig.GlideDownAngleDeg;

			float yOver = Mathf.Abs(_leftStick.y) - glideDeadzone;
			if (yOver > 0f && Mathf.Abs(_leftStick.x) < yOver * Mathf.Tan(glideAngle * Mathf.Deg2Rad))
			{
				_data.RawStick.y = Mathf.Sign(_leftStick.y) * Mathf.Clamp(Mathf.InverseLerp(glideDeadzone, 1f, Mathf.Abs(_leftStick.y)), 0f, 1f);
			}

			float downAmount = Mathf.Max(-_leftStick.y, 0f);
			if (downAmount <= _inputConfig.BrakeDeadzone)
			{
				return;
			}

			float maxX = (downAmount - _inputConfig.BrakeDeadzone) * Mathf.Tan(_inputConfig.BrakeAngleDeg * Mathf.Deg2Rad);
			if (maxX <= Mathf.Abs(_leftStick.x))
			{
				return;
			}

			float brakeVal = Mathf.Clamp(Mathf.InverseLerp(_inputConfig.BrakeDeadzone, 1f, downAmount), 0f, 1f);
			if (_kartComposite.KartPhysics.Body.ForwardSpeed > 0.5f || _disableReverse)
			{
				_data.Brake = brakeVal;
			}
			else
			{
				_data.Reverse = brakeVal;
			}

			if (driftTimer > 0f && _disableBrakeOnDrift)
			{
				_data.Brake = 0f;
			}

			if (_data.Brake > 0f || _data.Reverse > 0f)
			{
				_data.Throttle = 0f;
			}
		}

		protected void GetInputAI()
		{
			if (_kartAI != null)
			{
				KartAIInputData aiInput = _kartAI.InputData;
				_data.Throttle = aiInput.Throttle;
				_data.Brake = aiInput.Brake;
				_data.RawSteer = aiInput.Steer;
				_data.Steer = aiInput.Steer;
				_data.Reverse = Mathf.Min(aiInput.Throttle, 0f);
				float throttlePos = aiInput.Throttle < 0f ? 0f : aiInput.Throttle;
				_data.Throttle = throttlePos;
				_data.Engine = throttlePos;
				_data.Drift = aiInput.Drift ? 1f : 0f;
				_data.Hop = aiInput.Hop;
				_data.RawStick.x = aiInput.Steer;
				_data.Use = !_disableItemUse && aiInput.Use;
			}
		}

		protected void GetLimitedSteering()
		{
			if (_inputType == KartInputType.Player)
			{
				AtlasRawInput raw = GetInput();
				float clamped = Mathf.Clamp(raw.LeftStick.x, -1f, 1f);
				_data.RawSteer = clamped;
				_data.Steer = clamped;
			}
			else if (_inputType == KartInputType.AI && _kartAI != null)
			{
				float aiSteer = _kartAI.InputData.Steer;
				_data.RawSteer = aiSteer;
				_data.Steer = aiSteer;
			}

			KartPhysicsHandling handling = _kartComposite.KartPhysics.PhysicsHandling;
			float s = _data.Steer;
			float sign = (s > 0f ? 1f : 0f) - (s < 0f ? 1f : 0f);
			float limited = math.clamp(math.abs(s), 0f, handling.LimitedSteerValue);
			_data.Steer = sign * limited;
		}

		public void Update(IUpdateParams updateParams)
		{
			if (!_inited)
			{
				return;
			}

			_data.Reset();

			if (GameplayFreeze)
			{
				_data.Brake = 1f;
				if (!LogicFreeze)
				{
					GetLimitedSteering();
				}
				return;
			}

			if (LogicFreeze)
			{
				_data.Brake = 1f;
				return;
			}

			if (IsInputBlocked())
			{
				return;
			}

			if (_inputType == KartInputType.Player)
			{
				GetPlayerInput(updateParams.DeltaTime);
			}
			else if (_inputType == KartInputType.AI)
			{
				GetInputAI();
			}

			if (ForceBrake)
			{
				_data.Brake = 1f;
				_data.Throttle = 0f;
			}

			if (_disableReverse)
			{
				_data.Reverse = 0f;
			}
		}

		protected bool IsInputBlocked()
		{
			if (_kartComposite.GameContext.TransitionManager.IsTransitionVisible)
			{
				return true;
			}

			KartPhysicsHandlingModifiersManager modMgr = _kartComposite.KartPhysics.HandlingModifiersManager;
			return modMgr.IsRespawning;
		}
	}
}
