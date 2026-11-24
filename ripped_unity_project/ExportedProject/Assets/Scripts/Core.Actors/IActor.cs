using Core.Application;

namespace Core.Actors
{
	public interface IActor
	{
		void EarlyUpdate(IUpdateParams updateParams);
		void Update(IUpdateParams updateParams);
		void LateUpdate(IUpdateParams updateParams);
		void PreFixedUpdate(IUpdateParams updateParams);
		void FixedUpdate(IUpdateParams updateParams);
		void PostFixedUpdate(IUpdateParams updateParams);
	}
}
