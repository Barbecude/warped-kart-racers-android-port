using UnityEngine;

namespace FMODUnity
{
	public class RuntimeManager : MonoBehaviour
	{
		public static FMOD.System CoreSystem => default(FMOD.System);

		public static FMOD.Studio.EventInstance CreateInstance(string path)
		{
			return default(FMOD.Studio.EventInstance);
		}
	}
}
