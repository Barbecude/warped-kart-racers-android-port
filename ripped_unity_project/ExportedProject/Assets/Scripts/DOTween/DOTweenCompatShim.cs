namespace DG.Tweening
{
	public enum LogBehaviour
	{
		Default = 0,
		Verbose = 1,
		ErrorsOnly = 2
	}

	public class DOTweenConfig
	{
		public DOTweenConfig SetCapacity(int tweenersCapacity, int sequencesCapacity) => this;
	}

	public static class DOTween
	{
		public static DOTweenConfig Init(bool? recycleAllByDefault = null, bool? useSafeMode = null, LogBehaviour? logBehaviour = null)
		{
			return new DOTweenConfig();
		}
	}
}
