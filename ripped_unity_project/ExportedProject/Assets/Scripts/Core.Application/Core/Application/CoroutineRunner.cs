using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Application
{
	public class CoroutineRunner
	{
		private GameObject _rootGameObject;
		private CoroutineRunnerBehaviour _runnerBehaviour;
		private List<IEnumerator> _running;
		private List<string> _names;

		public void Init(Transform rootTransform)
		{
			_running = new List<IEnumerator>();
			_names = new List<string>();
			_rootGameObject = new GameObject("CoroutineRunner");
			if (rootTransform != null)
			{
				_rootGameObject.transform.SetParent(rootTransform, false);
			}
			_runnerBehaviour = _rootGameObject.AddComponent<CoroutineRunnerBehaviour>();
		}

		public void DeInit()
		{
			StopAllCoroutines();
			if (_rootGameObject != null)
			{
				UnityEngine.Object.Destroy(_rootGameObject);
				_rootGameObject = null;
				_runnerBehaviour = null;
			}
		}

		public Coroutine StartCoroutine(IEnumerator routine)
		{
			return _runnerBehaviour.StartCoroutine(routine);
		}

		public Coroutine StartTrackedCoroutine(IEnumerator routine, string routineName)
		{
			_running.Add(routine);
			_names.Add(routineName);
			return _runnerBehaviour.StartCoroutine(Runner(routine, () =>
			{
				int idx = _running.IndexOf(routine);
				if (idx >= 0)
				{
					_running.RemoveAt(idx);
					_names.RemoveAt(idx);
				}
			}));
		}

		public void LogRunningRoutines()
		{
		}

		public bool TrackedRoutinesStillRunning()
		{
			return _running != null && _running.Count > 0;
		}

		public void StopTrackedCoroutines()
		{
			if (_running != null)
			{
				for (int i = 0; i < _running.Count; i++)
				{
					if (_runnerBehaviour != null && _running[i] != null)
					{
						_runnerBehaviour.StopCoroutine(_running[i]);
					}
				}
				_running.Clear();
				_names.Clear();
			}
		}

		public void StopAllCoroutines()
		{
			if (_runnerBehaviour != null)
			{
				_runnerBehaviour.StopAllCoroutines();
			}
			_running?.Clear();
			_names?.Clear();
		}

		public void StopCoroutine(Coroutine routine)
		{
			if (_runnerBehaviour != null && routine != null)
			{
				_runnerBehaviour.StopCoroutine(routine);
			}
		}

		private IEnumerator Runner(IEnumerator routine, Action callback)
		{
			yield return routine;
			callback?.Invoke();
		}
	}
}
