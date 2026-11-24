namespace Core.Services
{
	public enum DisconnectCause
	{
		None = 0,
		Requested = 1,
		InternetNotReachable = 2,
		Interrupted = 3,
		Timeout = 4,
		Internal_MultiplayerRestricted = 5,
		Internal_Unauthenticated = 6,
		Internal_DisconnectByServerUserLimit = 7,
		Internal_ExceptionOnConnect = 8,
		Internal_DisconnectByServer = 9,
		Internal_DisconnectByServerLogic = 10,
		Internal_TimeoutDisconnect = 11,
		Internal_Exception = 12,
		Internal_InvalidAuthentication = 13,
		Internal_MaxCCUReached = 14,
		Internal_InvalidRegion = 15,
		Internal_OperationNotAllowedInCurrentState = 16,
		Internal_CustomAuthenticationFailed = 17,
	}
}
