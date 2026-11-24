using System.Collections;
using Core.Application;
using Core.Contexts;

namespace Atlas.Contexts
{
	public class BattleGameContext : IContext
	{
		public const string ContextName = "BattleGameContext";

		private DependencyManager _dependencyManager;
		private bool _allowFrenzy;
		private int _frenzyScoreMultiplier = 2;
		private int _frenzyDurationMs = 30000;
		private bool _isFrenzyActive;

		public bool AllowFrenzy
		{
			set { _allowFrenzy = value; }
		}

		public int ScorePerHit => _isFrenzyActive ? _frenzyScoreMultiplier : 1;

		public bool IsFrenzyActive() => _isFrenzyActive;

		public string GetContextName()
		{
			return ContextName;
		}

		public IEnumerator OnInit(IContextInfo info, DependencyManager dependencyManager)
		{
			_dependencyManager = dependencyManager;
			yield break;
		}

		public IEnumerator OnPostInit(IContextInfo info, DependencyManager dependencyManager)
		{
			yield break;
		}

		public void OnUpdate(IUpdateParams updateParams)
		{
		}

		public void OnPreLateUpdate(IUpdateParams updateParams)
		{
		}

		public void OnLateUpdate(IUpdateParams updateParams)
		{
		}

		public void OnFixedUpdate(IUpdateParams updateParams)
		{
		}

		public IEnumerator OnDeInit()
		{
			yield break;
		}

		public void DeInitEditor()
		{
		}
	}
}
