namespace Core.UI2
{
	public enum UITweenPhase { In = 0, Out = 1 }
	public enum UITweenFillDirection { Horizontal = 0, Vertical = 1 }
	public enum UITweenAnimationDirection { Forward = 0, Backward = 1 }
	public class UITweenAnimation { }
	public struct PlannedTweenData { }
	public delegate void TweenAnimPlannedCallback(UITweenAnimation anim);
	public delegate void TweenPhaseStartedCallback(UITweenPhase phase);
}
