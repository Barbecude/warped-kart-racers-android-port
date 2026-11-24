using System.Collections;
using Core.Application;

namespace Core.Contexts
{
	public interface IContext
	{
		string GetContextName();
		IEnumerator OnInit(IContextInfo info, DependencyManager dependencyManager);
		IEnumerator OnPostInit(IContextInfo info, DependencyManager dependencyManager);
		void OnUpdate(IUpdateParams updateParams);
		void OnPreLateUpdate(IUpdateParams updateParams);
		void OnLateUpdate(IUpdateParams updateParams);
		void OnFixedUpdate(IUpdateParams updateParams);
		IEnumerator OnDeInit();
		void DeInitEditor();
	}
}
