namespace Core.UI2
{
	public abstract class UIScreen
	{
		public enum State { Hidden = 0, Showing = 1, Shown = 2, Hiding = 3 }
	}
	public abstract class UIScreen<TScreenBehaviour, TScreenParameters, TSharedScreenParameters> : UIScreen
	{
		protected TScreenBehaviour _screenBehaviour;
		protected TScreenParameters _screenParameters;
		protected TSharedScreenParameters _sharedScreenParameters;
	}
}
