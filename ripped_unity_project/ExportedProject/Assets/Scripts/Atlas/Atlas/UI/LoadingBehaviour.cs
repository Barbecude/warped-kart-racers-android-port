using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Atlas.UI
{
	public class LoadingBehaviour : MonoBehaviour
	{
		public enum ProgressStage
		{
			AppInit = 0,
			SceneLoading = 1
		}

		private enum State
		{
			Invisible = 0,
			AnimatingIn = 1,
			FullyVisible = 2,
			AnimatingOut = 3
		}

		private const float AppInitLoadingContribution = 0.6f;
		private const float MinimumProgress = 0.02f;
		private const float InvMinimumProgress = 0.98f;

		private static int EnterStateId;
		private static int ExitStateId;
		private static int FinishedEnterStateId;
		private static int FinishedExitStateId;

		[SerializeField]
		private Animator _animator;

		[SerializeField]
		private SlantFillBar _slantFillBar;

		[SerializeField]
		private TMP_Text _buildInfoText;

		[SerializeField]
		private GameObject _supportedInputIconsRoot;

		private State _state;

		private static bool _requestedLoading;
		private static bool _requestShow;
		private static AsyncOperationHandle<GameObject> _loadingPrefabHandle;
		private static LoadingBehaviour _loadingBehaviour;
		private static string _buildInfo;

		public bool FullyVisible => _state == State.FullyVisible;

		public bool FullyInvisible => _state == State.Invisible;

		public float Progress
		{
			set
			{
				_slantFillBar.SetTargetProgress(value, null);
			}
		}

		public string BuildInfo
		{
			set
			{
				_buildInfoText.text = value;
			}
		}

		public GameObject SupportedInputIconsRoot => _supportedInputIconsRoot;

		static LoadingBehaviour()
		{
			EnterStateId = Animator.StringToHash("Enter");
			ExitStateId = Animator.StringToHash("Exit");
			FinishedEnterStateId = Animator.StringToHash("FinishedEnter");
			FinishedExitStateId = Animator.StringToHash("FinishedExit");
			_requestedLoading = false;
			_requestShow = false;
			_loadingBehaviour = null;
			_buildInfo = null;
		}

		public void RequestShow()
		{
			if (_state != State.FullyVisible)
			{
				Progress = 0f;
				gameObject.SetActive(true);
				_animator.Play(EnterStateId, 0, 0f);
				_animator.Update(0f);
				_state = State.AnimatingIn;
			}
		}

		public void RequestHide()
		{
			if (_state != State.Invisible)
			{
				gameObject.SetActive(true);
				_animator.Play(ExitStateId, 0, 0f);
				_animator.Update(0f);
				_state = State.AnimatingOut;
			}
		}

		public void Update()
		{
			AnimatorStateInfo currentAnimatorStateInfo = _animator.GetCurrentAnimatorStateInfo(0);
			if (_state == State.AnimatingIn)
			{
				if (currentAnimatorStateInfo.shortNameHash == FinishedEnterStateId)
				{
					_state = State.FullyVisible;
				}
			}
			else if (_state == State.AnimatingOut)
			{
				if (currentAnimatorStateInfo.shortNameHash == FinishedExitStateId)
				{
					_slantFillBar.SetProgress(0f);
					_state = State.Invisible;
					gameObject.SetActive(false);
				}
			}
		}

		public static void SetSupportedInputIconsVisible(bool visible)
		{
			if (_loadingBehaviour != null)
			{
				_loadingBehaviour._supportedInputIconsRoot.SetActive(visible);
			}
		}

		[RuntimeInitializeOnLoadMethod]
		private static void Init()
		{
			_requestedLoading = false;
			_requestShow = false;
			_loadingBehaviour = null;
		}

		public static void RequestLoad(AtlasBuildInfo buildInfo)
		{
			if (!_requestedLoading)
			{
				string text = Application.version + " (" + buildInfo.DisplayChangelist + ")";
				RequestLoad(text);
			}
		}

		public static void RequestLoad(string buildInfo)
		{
			if (!_requestedLoading)
			{
				_buildInfo = buildInfo;
				_loadingPrefabHandle = Addressables.LoadAssetAsync<GameObject>("P_Loading");
				_loadingPrefabHandle.Completed += FinishedLoading;
				_requestedLoading = true;
			}
		}

		private static void FinishedLoading(AsyncOperationHandle<GameObject> prefab)
		{
			GameObject gameObject = Object.Instantiate(prefab.Result);
			Object.DontDestroyOnLoad(gameObject);
			_loadingBehaviour = gameObject.GetComponent<LoadingBehaviour>();
			_loadingBehaviour.gameObject.SetActive(false);
			_loadingBehaviour.BuildInfo = _buildInfo;
			if (_requestShow)
			{
				_loadingBehaviour.RequestShow();
				SetProgress(0f, ProgressStage.AppInit);
			}
		}

		public static bool HasFinishedLoading()
		{
			if (!_requestedLoading)
			{
				return false;
			}
			return _loadingPrefabHandle.IsDone;
		}

		public static void Show()
		{
			_requestShow = true;
			if (_loadingBehaviour != null)
			{
				_loadingBehaviour.RequestShow();
				SetProgress(0f, ProgressStage.AppInit);
			}
		}

		public static void SetProgress(float progress, ProgressStage stage)
		{
			if (_loadingBehaviour == null)
			{
				return;
			}

			float num = (stage == ProgressStage.AppInit)
				? (progress * AppInitLoadingContribution)
				: (AppInitLoadingContribution + progress * (1f - AppInitLoadingContribution));

			float value = Mathf.Clamp01(num * InvMinimumProgress + MinimumProgress);
			_loadingBehaviour.Progress = value;
		}

		public static bool IsFullyVisible()
		{
			if (_loadingBehaviour == null)
			{
				return false;
			}
			return _loadingBehaviour.FullyVisible;
		}

		public static void Hide()
		{
			_requestShow = false;
			if (_loadingBehaviour != null)
			{
				_loadingBehaviour.RequestHide();
			}
		}
	}
}
