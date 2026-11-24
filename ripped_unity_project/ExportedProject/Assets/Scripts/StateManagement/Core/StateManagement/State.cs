namespace Core.StateManagement
{
	public abstract class State<TStateData, TTransitionData>
	{
		protected TStateData _stateData;
		public virtual void OnEnter(TTransitionData data) { }
		public virtual void OnExit() { }
	}
}
