using System.Collections;
using Core.Application;
using Core.Contexts;

namespace Atlas.Contexts
{
	public class RaceGameContext : IContext
	{
		public const string ContextName = "RaceGameContext";

		private int _numberOfLaps = 3;
		private DependencyManager _dependencyManager;

		public int NumberOfLaps => _numberOfLaps;

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
