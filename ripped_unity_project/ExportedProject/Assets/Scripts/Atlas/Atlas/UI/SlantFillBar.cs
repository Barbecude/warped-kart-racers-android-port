using System;
using System.Collections.Generic;
using Core.Audio;
using Core.UI2;
using UnityEngine;
using UnityEngine.Events;

namespace Atlas.UI
{
	public class SlantFillBar : MonoBehaviour
	{
		private struct ThresholdEvent
		{
			public float ProgressThreshold;
			public UnityAction Action;
		}

		[Serializable]
		public struct Gap
		{
			public float VisualStartPerc;
			public float VisualEndPerc;
			public float StartPerc;
			public float EndPerc;
		}

		private const float MaxAnimationUpdateDt = 0.016949153f;
		private const float MinDiffProgressTarget = 0.001f;

		[SerializeField]
		private UISlantElement _fill;

		[SerializeField]
		private UISlantElement _glow;

		[SerializeField]
		private UISlantElement _endCap;

		[SerializeField]
		private float _endCapPercSize;

		[SerializeField]
		private float _minimumProgressToShow;

		[SerializeField]
		[Range(0f, 1f)]
		private float _progress;

		[SerializeField]
		private bool _playAudio;

		[Header("Glow & Shake")]
		[SerializeField]
		private float _glowMaxVelocity;

		[SerializeField]
		private float _shakeFrequency;

		[SerializeField]
		private float _shakeAmount;

		[Header("Target Animation")]
		[SerializeField]
		private float _targetStiffness;

		[SerializeField]
		private float _targetDamping;

		[SerializeField]
		private float _targetMaxVelocity;

		[Header("Gaps")]
		[SerializeField]
		private Gap[] _gaps;

		[Header("Debug")]
		[SerializeField]
		[Range(0f, 1f)]
		private float _debugAnimateToProgress;

		[SerializeField]
		private bool _debugPlayAnimation;

		private Color _glowColour;
		private Color _endCapColour;
		private Vector2 _localPosition;
		private bool _targetSet;
		private float _targetProgress;
		private UnityAction _targetOnComplete;
		private float _glowAndShakeIntensity;
		private float _lastProgress;
		private float _progressVelocity;
		private float _progressAcceleration;
		private float _shakeTimer;
		private AudioEvent _audioEvent;
		private List<ThresholdEvent> _thresholdEvents;
		private bool _inited;

		public Vector2 LocalPosition => _localPosition;

		public float Progress => _progress;

		public bool IsMovingToTarget => _targetSet;

		public Vector2 FillBotomRightPosition => _fill.BottomRightPosition;

		public void Init()
		{
			if (_inited)
			{
				return;
			}

			if (_playAudio)
			{
				_audioEvent = new AudioEvent("event:/UI/ProgressBar", false, false);
			}

			if (_glow != null)
			{
				_glowColour = _glow.color;
			}

			if (_endCap != null)
			{
				_endCapColour = _endCap.color;
			}

			UpdateCachedLocalPosition();
			UpdateVisualsForProgress(_progress, false);
			_inited = true;
		}

		public void UpdateCachedLocalPosition()
		{
			_localPosition = ((RectTransform)transform).anchoredPosition;
		}

		public void SetProgress(float progress)
		{
			_progress = progress;
			UpdateVisualsForProgress(_progress, false);
		}

		public void SetProgress(float value, float minValue, float maxValue)
		{
			_progress = CalculateProgress(value, minValue, maxValue);
			UpdateVisualsForProgress(_progress, false);
		}

		public void SetProgress(int value, int minValue, int maxValue)
		{
			_progress = CalculateProgress(value, minValue, maxValue);
			UpdateVisualsForProgress(_progress, false);
		}

		public void SetTargetProgress(float progress, UnityAction onComplete = null)
		{
			_targetSet = true;
			_targetProgress = progress;
			_targetOnComplete = onComplete;
			if (_playAudio)
			{
				_audioEvent.Play();
			}
		}

		public void AddThresholdEvent(float greaterOrEqualProgress, UnityAction action)
		{
			if (_thresholdEvents == null)
			{
				_thresholdEvents = new List<ThresholdEvent>();
			}
			_thresholdEvents.Add(new ThresholdEvent
			{
				ProgressThreshold = greaterOrEqualProgress,
				Action = action
			});
		}

		public void ClearThresholdEvents()
		{
			if (_thresholdEvents != null)
			{
				_thresholdEvents.Clear();
			}
		}

		public static float CalculateProgress(float value, float minValue, float maxValue)
		{
			return Mathf.Clamp01((value - minValue) / (maxValue - minValue));
		}

		public static float CalculateProgress(int value, int minValue, int maxValue)
		{
			return Mathf.Clamp01((float)(value - minValue) / (float)(maxValue - minValue));
		}

		public static float CalculateValue(float progress, float minValue, float maxValue)
		{
			return Mathf.Clamp((maxValue - minValue) * progress + minValue, minValue, maxValue);
		}

		public float CalculateValue(float minValue, float maxValue)
		{
			return CalculateValue(_progress, minValue, maxValue);
		}

		private void Awake()
		{
			Init();
		}

		private void OnDestroy()
		{
			_targetOnComplete = null;
			_thresholdEvents = null;
			if (_audioEvent != null)
			{
				_audioEvent.Stop(false);
			}
			_audioEvent = null;
		}

		private void Update()
		{
			if (_lastProgress == _progress && !_targetSet)
			{
				return;
			}

			UpdateAnimateProgressToTarget(Time.deltaTime);

			_glowAndShakeIntensity = Mathf.Clamp01(Mathf.Abs(_progressVelocity) / _glowMaxVelocity);
			if (_glowAndShakeIntensity > 0f)
			{
				_shakeTimer += Time.deltaTime;
				if (_shakeTimer >= _shakeFrequency)
				{
					float rx = UnityEngine.Random.value * _shakeAmount * _glowAndShakeIntensity;
					float ry = UnityEngine.Random.value * _shakeAmount * _glowAndShakeIntensity;
					((RectTransform)transform).anchoredPosition = new Vector2(_localPosition.x + rx, _localPosition.y + ry);
					_shakeTimer = 0f;
				}
			}

			UpdateVisualsForProgress(_progress, _glowAndShakeIntensity > 0f);
		}

		private void UpdateVisualsForProgress(float progress, bool glowingAndShaking)
		{
			float visualProgress = CalculateProgressRespectingGaps(_progress);

			if (_fill != null)
			{
				_fill.EndfillPercentage = visualProgress;
				_fill.enabled = _progress > _minimumProgressToShow;
			}

			if (_glow != null)
			{
				_glow.color = new Color(_glowColour.r, _glowColour.g, _glowColour.b, _glowColour.a * _glowAndShakeIntensity);
				_glow.EndfillPercentage = visualProgress;
				_glow.enabled = (_progress > _minimumProgressToShow) && glowingAndShaking;
			}

			if (_endCap != null)
			{
				_endCap.color = new Color(_endCapColour.r, _endCapColour.g, _endCapColour.b, _endCapColour.a * _glowAndShakeIntensity);
				_endCap.EndfillPercentage = visualProgress;
				_endCap.StartFillPercentage = Mathf.Max(visualProgress - _endCapPercSize, 0f);
				_endCap.enabled = (_progress > _minimumProgressToShow) && glowingAndShaking;
			}

			_lastProgress = progress;
		}

		private void UpdateAnimateProgressToTarget(float deltaTime)
		{
			if (!_targetSet)
			{
				return;
			}

			float prevProgress = _progress;
			float remainingDt = deltaTime;
			while (remainingDt > 0f)
			{
				float step = Mathf.Min(remainingDt, MaxAnimationUpdateDt);
				AnimateProgressToTarget(step);
				remainingDt -= MaxAnimationUpdateDt;
			}

			if (_playAudio)
			{
				_audioEvent.SetParameter("parameter:/ProgressPitch", _progress, false);
			}

			if (Mathf.Abs(_targetProgress - _progress) <= MinDiffProgressTarget)
			{
				_progress = _targetProgress;
				_progressVelocity = 0f;
				_progressAcceleration = 0f;
				if (_playAudio)
				{
					_audioEvent.Stop(false);
				}
				_targetSet = false;
				if (_targetOnComplete != null)
				{
					_targetOnComplete.Invoke();
				}
				_targetOnComplete = null;
			}

			if (_thresholdEvents != null)
			{
				for (int i = 0; i < _thresholdEvents.Count; i++)
				{
					ThresholdEvent te = _thresholdEvents[i];
					if (prevProgress < te.ProgressThreshold && _progress >= te.ProgressThreshold)
					{
						te.Action.Invoke();
						_thresholdEvents.RemoveAt(i);
						i--;
					}
				}
			}
		}

		private void AnimateProgressToTarget(float deltaTime)
		{
			float halfDt = deltaTime * 0.5f;
			_progress += _progressVelocity * deltaTime + halfDt * deltaTime * _progressAcceleration;
			float newAccel = -_targetDamping * _progressVelocity - _targetStiffness * (_progress - _targetProgress);
			_progressVelocity += halfDt * (_progressAcceleration + newAccel);
			_progressVelocity = Mathf.Clamp(_progressVelocity, -_targetMaxVelocity, _targetMaxVelocity);
			_progressAcceleration = newAccel;
		}

		private float CalculateProgressRespectingGaps(float progress)
		{
			if (_gaps == null || _gaps.Length == 0)
			{
				return progress;
			}

			float totalActive = 0f;
			float prevEnd = 0f;
			for (int i = 0; i < _gaps.Length; i++)
			{
				totalActive += _gaps[i].VisualStartPerc - prevEnd;
				prevEnd = _gaps[i].VisualEndPerc;
			}
			totalActive += 1f - _gaps[_gaps.Length - 1].VisualEndPerc;

			float scaled = totalActive * progress;
			float accum = 0f;
			float segStart = 0f;
			float visStart = 0f;

			for (int i = 0; i < _gaps.Length; i++)
			{
				float segLen = _gaps[i].VisualStartPerc - visStart;
				float t = (scaled - accum) / segLen;
				if (t <= 1f)
				{
					return segStart + t * (_gaps[i].StartPerc - segStart);
				}
				accum += segLen;
				visStart = _gaps[i].VisualEndPerc;
				segStart = _gaps[i].EndPerc;
			}

			float lastLen = 1f - visStart;
			float lastT = (scaled - accum) / lastLen;
			if (lastT <= 1f)
			{
				return segStart + lastT * (1f - segStart);
			}

			return progress;
		}
	}
}
