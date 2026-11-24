using System;
using System.Collections;
using System.Collections.Generic;
using Atlas.Settings;
using Atlas.UI;
using FMOD.Studio;
using FMODUnity;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Video;

namespace Atlas
{
	public class SplashBehaviour : MonoBehaviour
	{
		public enum SplashPanelId
		{
			Launch = 0,
			ArcadeLogo = 1,
			ESLogo = 2,
			TwentiethCentryLogo = 3
		}

		private enum VideoState
		{
			Initialising = 0,
			Preparing = 1,
			Playing = 2,
			Finished = 3
		}

		[Serializable]
		public struct SplashPanelConfig
		{
			public bool Include;
			public SplashPanelId Id;
			public float FadeInDuration;
			public float FadeOutDuration;
			public float DisplayDuration;
			public bool IsVideo;
			public bool CanSkip;
			public bool IsAppleArcade;
			public Sprite[] Logos;
			public string AudioEventName;
		}

		[Serializable]
		public struct VideoData
		{
			public AssetReference _videoClipRef;
			public int Width;
			public float AspectRatioX;
			public float AspectRatioY;
		}

		private const string SeenSplashPlayerPref = "SeenSplash";
		private const float _exactAspectRatioTolerance = 0.01f;
		private const float _firstTryAspectRatioTolerance = 0.15f;
		private const float _secondTryAspectRatioTolerance = 0.25f;
		private const float _finalTryAspectRatioTolerance = 0.5f;

		[SerializeField]
		private VideoPlayer _videoPlayer;

		[SerializeField]
		private Image _companyLogo;

		[SerializeField]
		private float _companyLogoTargetPercScreenHeight = 0.8f;

		[SerializeField]
		private Image _companyLogoBackground;

		[SerializeField]
		private Button _skipbutton;

		[SerializeField]
		private SplashPanelConfig[] _allConfigs;

		[SerializeField]
		private List<VideoData> _videoDataList;

		private float _sequenceTimer;
		private int _currentIndex = -1;
		private AsyncOperationHandle<VideoClip> _asyncOperationHandle;
		private VideoState _videoState;
		private bool _hasInitialised;
		private bool _exiting;
		private bool _exited;
		private EventInstance _audioEvent;
		private string _lastEventName = string.Empty;
		private float _videoLastTime;
		private int _videoTimeStalledCount;
		private Coroutine _prepareVideoRoutine;

		private IEnumerator Start()
		{
			AtlasQualitySettings.BeginBoostLoadingBeforeSettingsLoaded();
			Application.targetFrameRate = 60;
			QualitySettings.vSyncCount = 1;
			yield return Addressables.InitializeAsync();
			LoadingBehaviour.RequestLoad(AtlasBuildInfo.Current);
			Init();
			StartConfig();
		}

		private void Init()
		{
			_videoPlayer.audioOutputMode = VideoAudioOutputMode.None;
			_videoPlayer.prepareCompleted += OnPrepareCompleted;
			_videoPlayer.errorReceived += OnErrorReceived;
			_videoPlayer.clip = null;
			_companyLogo.enabled = false;
			_companyLogoBackground.enabled = false;

			int width = Screen.width;
			int height = Screen.height;
			float aspectRatio = (float)width / (float)height;

			VideoData videoData;
			if (MatchVideoExact(width, aspectRatio, out videoData)
				|| MatchVideoClose(width, aspectRatio, _firstTryAspectRatioTolerance, out videoData)
				|| MatchVideoClose(width, aspectRatio, _secondTryAspectRatioTolerance, out videoData)
				|| MatchVideoClose(width, aspectRatio, _finalTryAspectRatioTolerance, out videoData))
			{
				_videoState = VideoState.Initialising;
				Log("videoSelected width " + videoData.Width + " Aspect " + videoData.AspectRatioX + "x" + videoData.AspectRatioY);
				_prepareVideoRoutine = StartCoroutine(PrepareVideoInternal(videoData._videoClipRef));
				_videoPlayer.source = VideoSource.VideoClip;
				_sequenceTimer = 0f;
			}
			else
			{
				Log("No video selected");
			}

			_currentIndex = GetNextConfigIndex();
			_skipbutton.onClick.AddListener(TrySkip);
			EventSystem.current.SetSelectedGameObject(_skipbutton.gameObject);
			_hasInitialised = true;
		}

		private bool MatchVideoExact(int width, float aspectRatio, out VideoData outVideoData)
		{
			foreach (VideoData data in _videoDataList)
			{
				if (data.Width == width && Mathf.Abs(data.AspectRatioX / data.AspectRatioY - aspectRatio) < _exactAspectRatioTolerance)
				{
					outVideoData = data;
					return true;
				}
			}
			outVideoData = default(VideoData);
			return false;
		}

		private bool MatchVideoClose(int width, float aspectRatio, float aspectRatioTolerance, out VideoData outVideoData)
		{
			bool found = false;
			VideoData best = default(VideoData);
			int bestWidthDiff = int.MaxValue;

			foreach (VideoData data in _videoDataList)
			{
				int widthDiff = Mathf.Abs(data.Width - width);
				float aspectDiff = Mathf.Abs(data.AspectRatioX / data.AspectRatioY - aspectRatio);
				if (aspectDiff < aspectRatioTolerance && widthDiff < bestWidthDiff)
				{
					found = true;
					best = data;
					bestWidthDiff = widthDiff;
				}
			}

			outVideoData = best;
			return found;
		}

		private void DeInit()
		{
			if (_prepareVideoRoutine != null)
			{
				StopCoroutine(_prepareVideoRoutine);
			}

			if (_hasInitialised)
			{
				if (_videoPlayer.isPlaying)
				{
					_videoPlayer.Stop();
				}
				Addressables.Release(_asyncOperationHandle);
				_videoPlayer.prepareCompleted -= OnPrepareCompleted;
				_videoPlayer.errorReceived -= OnErrorReceived;
			}

			_sequenceTimer = 0f;
			_currentIndex = 0;
		}

		private void Update()
		{
			if (_exited)
			{
				return;
			}

			if (_exiting)
			{
				FinishAndMoveToApplicationScene();
				return;
			}

			if (IsIndexValid(_currentIndex))
			{
				SplashPanelConfig config = _allConfigs[_currentIndex];
				if (config.IsVideo)
				{
					if (_videoState == VideoState.Preparing)
					{
						if (_videoPlayer.isPrepared)
						{
							_videoState = VideoState.Playing;
							_videoPlayer.Play();
							StartAudio(_allConfigs[_currentIndex].AudioEventName);
						}
					}
					else if (_videoState == VideoState.Playing)
					{
						float currentTime = (float)_videoPlayer.time;
						if (Mathf.Abs(currentTime - _videoLastTime) < 0.0001f || _videoPlayer.isPaused)
						{
							_videoTimeStalledCount++;
						}
						_videoLastTime = currentTime;

						bool stalled = false;
						if (_videoTimeStalledCount >= 15)
						{
							_videoPlayer.Stop();
							DeInitAudio();
							stalled = true;
						}

						if (stalled || !_videoPlayer.isPlaying)
						{
							_videoPlayer.clip = null;
							_videoState = VideoState.Finished;
							AdvanceToNextConfigOrExit();
						}
					}
				}
				else
				{
					StartAudio(config.AudioEventName);
					float fadeInEnd = config.FadeInDuration;
					float displayEnd = fadeInEnd + config.DisplayDuration;
					float totalDuration = displayEnd + config.FadeOutDuration;

					float alpha;
					if (_sequenceTimer < fadeInEnd)
					{
						alpha = _sequenceTimer / fadeInEnd;
					}
					else if (_sequenceTimer < displayEnd)
					{
						alpha = 1f;
					}
					else if (_sequenceTimer < totalDuration)
					{
						alpha = 1f - (_sequenceTimer - displayEnd) / config.FadeOutDuration;
					}
					else
					{
						alpha = 0f;
					}

					_companyLogo.color = new Color(1f, 1f, 1f, alpha);
					_companyLogo.enabled = true;
					_companyLogoBackground.enabled = true;

					if (_sequenceTimer >= totalDuration)
					{
						AdvanceToNextConfigOrExit();
					}
				}
			}

			if (Keyboard.current != null && Keyboard.current.anyKey.isPressed)
			{
				TrySkip();
			}

			_sequenceTimer += Time.deltaTime;
		}

		private void AdvanceToNextConfigOrExit()
		{
			_currentIndex = GetNextConfigIndex();
			if (IsIndexValid(_currentIndex))
			{
				StartConfig();
			}
			else
			{
				_exiting = true;
			}
		}

		private void RequestExit()
		{
			_exiting = true;
		}

		private void FinishAndMoveToApplicationScene()
		{
			_exited = true;
			if (PlayerPrefs.GetInt(SeenSplashPlayerPref, 0) == 0)
			{
				PlayerPrefs.SetInt(SeenSplashPlayerPref, 1);
				PlayerPrefs.Save();
			}
			DeInitAudio();
			DeInit();
			SceneManager.LoadScene("Application", LoadSceneMode.Single);
		}

		private int GetNextConfigIndex()
		{
			int next = _currentIndex + 1;
			while (next < _allConfigs.Length)
			{
				if (ShouldInclude(in _allConfigs[next]))
				{
					return next;
				}
				next++;
			}
			return -1;
		}

		private bool ShouldInclude(in SplashPanelConfig panel)
		{
			return panel.Include;
		}

		private bool StartConfig()
		{
			_sequenceTimer = 0f;
			if (!IsIndexValid(_currentIndex))
			{
				return false;
			}

			SplashPanelConfig config = _allConfigs[_currentIndex];
			if (config.IsVideo)
			{
				_companyLogo.enabled = false;
				_companyLogoBackground.enabled = false;
				return true;
			}

			float targetHeight = _companyLogoTargetPercScreenHeight * Screen.height;
			Sprite sprite = GetMaxHeightSprite(config.Logos, targetHeight);
			if (sprite == null)
			{
				sprite = GetMinHeightSprite(config.Logos);
			}

			Rect rect = sprite.rect;
			if (rect.height > targetHeight)
			{
				float scale = targetHeight / rect.height;
				rect.width *= scale;
				rect.height *= scale;
			}

			_companyLogo.rectTransform.sizeDelta = new Vector2(rect.width, rect.height);
			_companyLogo.color = new Color(1f, 1f, 1f, 0f);
			_companyLogo.sprite = sprite;
			_companyLogo.enabled = true;
			_companyLogoBackground.enabled = true;
			return true;
		}

		private bool IsIndexValid(int index)
		{
			return index >= 0 && index < _allConfigs.Length;
		}

		private void TrySkip()
		{
			if (PlayerPrefs.GetInt(SeenSplashPlayerPref, 0) != 0 && IsIndexValid(_currentIndex) && _allConfigs[_currentIndex].CanSkip)
			{
				_exiting = true;
			}
		}

		private void Log(string log)
		{
		}

		private void OnPrepareCompleted(VideoPlayer source)
		{
			Log("OnPrepareCompleted: " + source.clip.name);
		}

		private void OnErrorReceived(VideoPlayer source, string message)
		{
			Log("OnErrorReceived: URL: " + source.url + " Error MSG: " + message);
		}

		private IEnumerator PrepareVideoInternal(AssetReference assetReference)
		{
			yield return Addressables.InitializeAsync();
			_asyncOperationHandle = assetReference.LoadAssetAsync<VideoClip>();
			yield return _asyncOperationHandle;
			_videoPlayer.enabled = true;
			_videoPlayer.clip = _asyncOperationHandle.Result;
			_videoPlayer.Prepare();
			_videoState = VideoState.Preparing;
			_prepareVideoRoutine = null;
			Log("PrepareVideoInternal()");
		}

		private void StartAudio(string eventName)
		{
			if (eventName != _lastEventName)
			{
				if (_audioEvent.isValid())
				{
					_audioEvent.stop(FMOD.Studio.STOP_MODE.IMMEDIATE);
					_audioEvent.release();
				}

				if (eventName != string.Empty)
				{
					RuntimeManager.CoreSystem.mixerSuspend();
					_audioEvent = RuntimeManager.CreateInstance(eventName);
					RuntimeManager.CoreSystem.mixerResume();
					_audioEvent.start();
					_lastEventName = eventName;
				}
			}
		}

		private void DeInitAudio()
		{
			if (_audioEvent.isValid())
			{
				_audioEvent.stop(FMOD.Studio.STOP_MODE.IMMEDIATE);
				_audioEvent.release();
			}
		}

		private Sprite GetMaxHeightSprite(Sprite[] sprites, float maxHeight)
		{
			Sprite best = null;
			float bestHeight = float.MinValue;
			for (int i = 0; i < sprites.Length; i++)
			{
				float h = sprites[i].rect.height;
				if (h <= maxHeight && h > bestHeight)
				{
					bestHeight = h;
					best = sprites[i];
				}
			}
			return best;
		}

		private Sprite GetMinHeightSprite(Sprite[] sprites)
		{
			Sprite best = null;
			float bestHeight = float.MaxValue;
			for (int i = 0; i < sprites.Length; i++)
			{
				float h = sprites[i].rect.height;
				if (h < bestHeight)
				{
					bestHeight = h;
					best = sprites[i];
				}
			}
			return best;
		}
	}
}
