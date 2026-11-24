using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;

namespace Core.Scenes
{
	public class AddressablesSceneLoader
	{
		private enum State
		{
			Idle = 0,
			Loading = 1,
			Loaded = 2,
			Unloading = 3
		}

		private struct SceneData
		{
			public string SceneName;
			public bool Addressable;
			public AsyncOperationHandle<SceneInstance> LoadHandle;
			public AsyncOperationHandle<SceneInstance> UnloadHandle;
		}

		private const int InitialSceneListCapacity = 10;

		private List<SceneData> _requestedSceneDatas;
		private List<Scene> _requestedScenes;
		private State _state;

		public List<Scene> RequestScenes => _requestedScenes;

		public bool TryGetScene(string name, out Scene outScene)
		{
			foreach (Scene scene in _requestedScenes)
			{
				if (scene.name == name)
				{
					outScene = scene;
					return true;
				}
			}
			outScene = default(Scene);
			return false;
		}

		public bool TryGetLastRequestedScene(out Scene outScene)
		{
			int count = _requestedScenes.Count;
			if (count > 0)
			{
				outScene = _requestedScenes[count - 1];
				return true;
			}
			outScene = default(Scene);
			return false;
		}

		public bool RequestLoadSceneAdditive(List<SceneInfo> sceneInfos)
		{
			if (_state == State.Unloading)
			{
				return false;
			}

			_state = State.Loading;
			bool allSucceeded = true;
			if (sceneInfos != null)
			{
				foreach (SceneInfo info in sceneInfos)
				{
					allSucceeded &= RequestLoadSceneAdditive(info.SceneName);
				}
			}
			return allSucceeded;
		}

		public IEnumerator WaitForScenesToLoad(int activeSceneIndex, bool clearLightProbeData, Action<float> onUpdateLoadPercentage)
		{
			if (_state != State.Loading || _requestedSceneDatas == null)
			{
				yield break;
			}

			bool anyPending = true;
			while (anyPending)
			{
				yield return null;
				anyPending = false;

				for (int i = 0; i < _requestedSceneDatas.Count; i++)
				{
					SceneData data = _requestedSceneDatas[i];
					if (data.LoadHandle.Status == AsyncOperationStatus.Succeeded && !_requestedScenes[i].IsValid())
					{
						_requestedScenes[i] = data.LoadHandle.Result.Scene;
					}

					if (!_requestedScenes[i].IsValid())
					{
						anyPending = true;
					}
				}

				onUpdateLoadPercentage?.Invoke(PercentageLoaded());
			}

			if (clearLightProbeData)
			{
				LightmapSettings.lightProbes = null;
			}

			SceneManager.SetActiveScene(_requestedScenes[activeSceneIndex]);
			onUpdateLoadPercentage?.Invoke(1f);
			_state = State.Loaded;
		}

		public IEnumerator UnloadScenesAndWait()
		{
			if (_state != State.Loaded)
			{
				yield break;
			}

			_state = State.Unloading;
			if (_requestedSceneDatas != null)
			{
				for (int i = 0; i < _requestedSceneDatas.Count; i++)
				{
					SceneData data = _requestedSceneDatas[i];
					data.UnloadHandle = Addressables.UnloadSceneAsync(data.LoadHandle.Result, true);
					Addressables.Release(data.LoadHandle);
					_requestedSceneDatas[i] = data;
				}

				bool allUnloaded = false;
				while (!allUnloaded)
				{
					yield return null;
					allUnloaded = true;
					foreach (SceneData data in _requestedSceneDatas)
					{
						if (data.UnloadHandle.IsValid() && data.UnloadHandle.Status == AsyncOperationStatus.Succeeded)
						{
							Addressables.Release(data.UnloadHandle);
						}
						if (data.UnloadHandle.IsValid())
						{
							allUnloaded = false;
						}
					}
				}

				_requestedSceneDatas.Clear();
				_requestedScenes.Clear();
			}

			_state = State.Idle;
		}

		public bool HasSceneBeenRequested(string sceneName)
		{
			if (_requestedSceneDatas == null)
			{
				return false;
			}

			foreach (SceneData data in _requestedSceneDatas)
			{
				if (data.SceneName.Equals(sceneName, StringComparison.OrdinalIgnoreCase))
				{
					return true;
				}
			}
			return false;
		}

		private bool RequestLoadSceneAdditive(string sceneName)
		{
			if (string.IsNullOrEmpty(sceneName) || HasSceneBeenRequested(sceneName))
			{
				return false;
			}

			if (_requestedSceneDatas == null)
			{
				_requestedSceneDatas = new List<SceneData>(InitialSceneListCapacity);
				_requestedScenes = new List<Scene>(InitialSceneListCapacity);
			}

			AsyncOperationHandle<SceneInstance> loadHandle = Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Additive, true, 100);
			_requestedSceneDatas.Add(new SceneData
			{
				SceneName = sceneName,
				Addressable = false,
				LoadHandle = loadHandle,
				UnloadHandle = default(AsyncOperationHandle<SceneInstance>)
			});
			_requestedScenes.Add(default(Scene));
			return true;
		}

		private float PercentageLoaded()
		{
			float totalValid = 0f;
			float sum = 0f;
			for (int i = 0; i < _requestedSceneDatas.Count; i++)
			{
				SceneData data = _requestedSceneDatas[i];
				if (data.LoadHandle.IsValid())
				{
					totalValid += 1f;
					sum += data.LoadHandle.PercentComplete;
				}
			}

			return (totalValid > 0f) ? (sum / totalValid) : 1f;
		}
	}
}
