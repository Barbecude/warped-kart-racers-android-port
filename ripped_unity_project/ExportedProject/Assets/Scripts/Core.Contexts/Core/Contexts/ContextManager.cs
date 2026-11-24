using System;
using System.Collections;
using System.Collections.Generic;
using Core.Application;
using Unity.Profiling;
using UnityEngine;

namespace Core.Contexts
{
	public class ContextManager
	{
		public delegate bool CanProgressDelegate();

		public event Action OnInitFinished;

		private Dictionary<string, IContext> _allContexts;
		private CoroutineRunner _coroutineRunner;
		private DependencyManager _dependencyManager;
		private string _currentContextName;
		private IContextInfo _currentInfo;
		private string _requestedContextName;
		private IContextInfo _requestedContextInfo;
		private bool _isContextChangeRequested;
		private bool _updateCurrentContext;
		private List<CanProgressDelegate> _canDeInitContext;
		private Coroutine _runContextChangeCoroutine;
		private IContext _currentContext;

		private static readonly ProfilerMarker _updateProfilerMarker = new ProfilerMarker("ContextManager.Update");
		private static readonly ProfilerMarker _fixedUpdateProfilerMarker = new ProfilerMarker("ContextManager.FixedUpdate");
		private static readonly ProfilerMarker _preLateUpdateProfilerMarker = new ProfilerMarker("ContextManager.PreLateUpdate");
		private static readonly ProfilerMarker _lateUpdateProfilerMarker = new ProfilerMarker("ContextManager.LateUpdate");

		public bool IsContextChanging => _isContextChangeRequested || _runContextChangeCoroutine != null;

		public bool UpdatingCurrentContext => _updateCurrentContext;

		public ContextManager()
		{
			_allContexts = new Dictionary<string, IContext>();
			_canDeInitContext = new List<CanProgressDelegate>();
		}

		public void Init(List<IContext> allContexts, DependencyManager dependencyManager)
		{
			_dependencyManager = dependencyManager;
			_coroutineRunner = dependencyManager.GetDependency<CoroutineRunner>();
			_allContexts.Clear();
			if (allContexts != null)
			{
				foreach (IContext context in allContexts)
				{
					_allContexts[context.GetContextName()] = context;
				}
			}
		}

		public IEnumerator DeInit()
		{
			_updateCurrentContext = false;
			if (_runContextChangeCoroutine != null && _coroutineRunner != null)
			{
				_coroutineRunner.StopCoroutine(_runContextChangeCoroutine);
				_runContextChangeCoroutine = null;
			}
			if (_currentContext != null)
			{
				yield return _currentContext.OnDeInit();
				_currentContext = null;
				_currentContextName = null;
				_currentInfo = null;
			}
		}

		public void DeInitEditor()
		{
			if (_currentContext != null)
			{
				_currentContext.DeInitEditor();
			}
		}

		public void Update(IUpdateParams updateParams)
		{
			using (_updateProfilerMarker.Auto())
			{
				if (_isContextChangeRequested && _runContextChangeCoroutine == null)
				{
					_runContextChangeCoroutine = _coroutineRunner.StartCoroutine(RunContextChange());
				}

				if (_updateCurrentContext && _currentContext != null)
				{
					_currentContext.OnUpdate(updateParams);
				}
			}
		}

		public void PreLateUpdate(IUpdateParams updateParams)
		{
			using (_preLateUpdateProfilerMarker.Auto())
			{
				if (_updateCurrentContext && _currentContext != null)
				{
					_currentContext.OnPreLateUpdate(updateParams);
				}
			}
		}

		public void LateUpdate(IUpdateParams updateParams)
		{
			using (_lateUpdateProfilerMarker.Auto())
			{
				if (_updateCurrentContext && _currentContext != null)
				{
					_currentContext.OnLateUpdate(updateParams);
				}
			}
		}

		public void FixedUpdate(IUpdateParams updateParams)
		{
			using (_fixedUpdateProfilerMarker.Auto())
			{
				if (_updateCurrentContext && _currentContext != null)
				{
					_currentContext.OnFixedUpdate(updateParams);
				}
			}
		}

		public bool RequestContextChange(string newContextName, IContextInfo newInfo)
		{
			if (string.IsNullOrEmpty(newContextName) || !_allContexts.ContainsKey(newContextName))
			{
				return false;
			}
			_requestedContextName = newContextName;
			_requestedContextInfo = newInfo;
			_isContextChangeRequested = true;
			return true;
		}

		public IEnumerator RunContextChange()
		{
			while (!CanProgress(_canDeInitContext))
			{
				yield return null;
			}

			_updateCurrentContext = false;

			if (_currentContext != null)
			{
				yield return _currentContext.OnDeInit();
				_currentContext = null;
			}

			_currentContextName = _requestedContextName;
			_currentInfo = _requestedContextInfo;
			_requestedContextName = null;
			_requestedContextInfo = null;
			_isContextChangeRequested = false;

			IContext nextContext;
			if (_allContexts.TryGetValue(_currentContextName, out nextContext))
			{
				_currentContext = nextContext;
				yield return _currentContext.OnInit(_currentInfo, _dependencyManager);
				OnInitFinished?.Invoke();
				yield return _currentContext.OnPostInit(_currentInfo, _dependencyManager);
				_updateCurrentContext = true;
			}

			_runContextChangeCoroutine = null;
		}

		public string GetCurrentContextInfo(out IContextInfo contextInfo)
		{
			contextInfo = _currentInfo;
			return _currentContextName;
		}

		public IContext GetCurrentContext()
		{
			return _currentContext;
		}

		public IContext GetContext(string contextName)
		{
			IContext context;
			_allContexts.TryGetValue(contextName, out context);
			return context;
		}

		public TContext GetContext<TContext>(string contextName) where TContext : class, IContext
		{
			return GetContext(contextName) as TContext;
		}

		public bool TryGetRequestedContext(out IContextInfo contextInfo)
		{
			contextInfo = _requestedContextInfo;
			return _isContextChangeRequested;
		}

		public void AddCanDeInitContextCallback(CanProgressDelegate canProgress)
		{
			if (canProgress != null && !_canDeInitContext.Contains(canProgress))
			{
				_canDeInitContext.Add(canProgress);
			}
		}

		public void RemoveCanDeInitContextCallback(CanProgressDelegate canProgress)
		{
			_canDeInitContext.Remove(canProgress);
		}

		private bool CanProgress(List<CanProgressDelegate> canProgressList)
		{
			for (int i = 0; i < canProgressList.Count; i++)
			{
				if (canProgressList[i] != null && !canProgressList[i]())
				{
					return false;
				}
			}
			return true;
		}
	}
}
