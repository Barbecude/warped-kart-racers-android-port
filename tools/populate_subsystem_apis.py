import glob
import os

ROOT = os.path.abspath("ripped_unity_project/ExportedProject/Assets/Scripts")

# 1. Remove duplicate global IContext.cs
for dup in ["Core.Contexts/IContext.cs", "Core.Contexts/IContext.cs.meta"]:
    p = os.path.join(ROOT, dup)
    if os.path.exists(p):
        os.remove(p)

def write(rel, content):
    p = os.path.join(ROOT, rel)
    os.makedirs(os.path.dirname(p), exist_ok=True)
    with open(p, "w", encoding="utf-8") as f:
        f.write(content.lstrip("\n"))

# 2. Specific Core/External/UI2/Build/Settings classes
write("DOTween/DOTweenCompatShim.cs", """
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
""")

write("Atlas.Build.Runtime/Atlas/AtlasBuildInfo.cs", """
using UnityEngine;

namespace Atlas
{
	public class AtlasBuildInfo : ScriptableObject
	{
		private static AtlasBuildInfo _current;
		public static AtlasBuildInfo Current => _current != null ? _current : (_current = CreateInstance<AtlasBuildInfo>());
		public string DisplayChangelist => "offline-android";
	}
}
""")

write("Atlas.Settings/Atlas/Settings/AtlasQualitySettings.cs", """
using System.Collections;

namespace Atlas.Settings
{
	public class AtlasQualitySettings
	{
		public static void BeginBoostLoadingBeforeSettingsLoaded() { }
		public IEnumerator Init() { yield break; }
		public void SetCameraManager(object cameraManager) { }
	}
}
""")

write("Core.Audio/Core/Audio/AudioEvent.cs", """
namespace Core.Audio
{
	public class AudioEvent
	{
		public string EventPath { get; private set; }
		public AudioEvent() { }
		public AudioEvent(string eventPath, bool preload = false, bool allowFadeout = false)
		{
			EventPath = eventPath;
		}
		public void Play() { }
		public void Stop(bool allowFadeout = false) { }
		public void SetParameter(string name, float value, bool ignoreSeekSpeed = false) { }
	}
}
""")

write("UI2/Core/UI2/UISlantElement.cs", """
using UnityEngine;
using UnityEngine.UI;

namespace Core.UI2
{
	public class UISlantElement : MaskableGraphic
	{
		public float StartFillPercentage { get; set; }
		public float EndfillPercentage { get; set; }
		public Vector2 BottomRightPosition => rectTransform != null ? new Vector2(rectTransform.rect.xMax, rectTransform.rect.yMin) : Vector2.zero;
	}
}
""")

write("Core.Assets/Core/Assets/AssetManager.cs", """
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Core.Assets
{
	public class AssetManager
	{
		private readonly Dictionary<string, AsyncOperationHandle<Object>> _handles = new Dictionary<string, AsyncOperationHandle<Object>>();
		public void Init() { }
		public void Update() { }
		public void RequestAsset(string key, string bucket = "Default")
		{
			if (!_handles.ContainsKey(key))
			{
				_handles[key] = Addressables.LoadAssetAsync<Object>(key);
			}
		}
		public IEnumerator WaitForAsset(string key)
		{
			AsyncOperationHandle<Object> h;
			if (_handles.TryGetValue(key, out h))
			{
				yield return h;
			}
		}
		public T GetLoadedAsset<T>(string key) where T : Object
		{
			AsyncOperationHandle<Object> h;
			if (_handles.TryGetValue(key, out h) && h.IsValid() && h.Status == AsyncOperationStatus.Succeeded)
			{
				return h.Result as T;
			}
			return null;
		}
	}
}
""")

# Ensure Core.Assets.asmdef references Addressables & ResourceManager
write("Core.Assets/Core.Assets.asmdef", """
{
  "name": "Core.Assets",
  "references": [
    "Unity.Addressables",
    "Unity.ResourceManager"
  ],
  "allowUnsafeCode": true
}
""")

write("Core.Actors/Core/Actors/ActorManager.cs", """
using System.Collections.Generic;

namespace Core.Actors
{
	public class ActorManager
	{
		public void Init(object groups = null) { }
		public void EarlyUpdate(object updateParams) { }
		public void Update(object updateParams) { }
		public void LateUpdate(object updateParams) { }
		public void FixedUpdate(object updateParams) { }
	}
}
""")

write("Core.Actors/Core/Actors/PooledActorManager.cs", """
namespace Core.Actors
{
	public class PooledActorManager
	{
		public void Init(object actorManager, object poolManager) { }
	}
}
""")

write("Core.Cameras/Core/Cameras/CameraManager.cs", """
using UnityEngine;

namespace Core.Cameras
{
	public class CameraManager
	{
		public void Init(GameObject root) { }
		public void DeInit() { }
	}
}
""")

write("Core.Containers/Core/Containers/PoolManager.cs", """
namespace Core.Containers
{
	public class PoolManager
	{
		public void Init() { }
		public void Update() { }
	}
}
""")

write("Core.Input/Core/Input/InputManager.cs", """
namespace Core.Input
{
	public class InputManager
	{
		public void Init(string glyphTag, object assetManager) { }
		public void Update() { }
	}
}
""")

write("Core.Localisation/Core/Localisation/LocalisationManager.cs", """
using System.Collections;

namespace Core.Localisation
{
	public class LocalisationManager
	{
		public IEnumerator Init(string keys, string data, string fontMappings) { yield break; }
		public void PostInit() { }
	}
}
""")

write("Atlas/Atlas/Assets/AtlasAssetBucketUtils.cs", """
using Core.Assets;

namespace Atlas.Assets
{
	public static class AtlasAssetBucketUtils
	{
		public static void CreateBuckets(AssetManager assetManager) { }
	}
}
""")

write("Atlas/Atlas/UI/Screens/CharacterRewardScreen.cs", """
namespace Atlas.UI.Screens
{
	public class CharacterRewardScreen { }
}
""")

write("Atlas/Atlas/UI/AtlasSharedScreenParams.cs", """
using Core.Application;

namespace Atlas.UI
{
	public class AtlasSharedScreenParams
	{
		public DependencyManager DependencyManager { get; private set; }
		public AtlasSharedScreenParams() { }
		public AtlasSharedScreenParams(DependencyManager dependencyManager)
		{
			DependencyManager = dependencyManager;
		}
	}
}
""")

write("Atlas/Atlas/UI/AtlasUIManager.cs", """
using UnityEngine;

namespace Atlas.UI
{
	public class AtlasUIManager
	{
		public void Init(GameObject prefab, Transform root, AtlasSharedScreenParams sharedParams) { }
		public void DeInit() { }
		public void RegisterScreen<T>(string prefabPath) { }
		public void Update(object updateParams) { }
		public void LateUpdate(object updateParams) { }
	}
}
""")

# 3. Remaining Atlas subsystem stubs with exact Init/DeInit/Update signatures
atlas_files = {
    "Atlas/Atlas/Debugging/LogHandler.cs": ("Atlas.Debugging", "LogHandler", """
		public void Init() { }
		public void DeInit() { }
"""),
    "Atlas/Atlas/Stats/AchievementManager.cs": ("Atlas.Stats", "AchievementManager", """
		public System.Collections.IEnumerator Init(string config, object servicesManager) { yield break; }
		public void SubmitAchievementProgress() { }
"""),
    "Atlas/Atlas/Stats/AtlasStats.cs": ("Atlas.Stats", "AtlasStats", """
		public void Init(object definitions, object servicesManager) { }
		public void Update() { }
"""),
    "Atlas/Atlas/Stats/DailyChallengeManager.cs": ("Atlas.Stats", "DailyChallengeManager", """
		public System.Collections.IEnumerator Init(string config, object saveManager, object definitions) { yield break; }
		public void Update() { }
"""),
    "Atlas/Atlas/Stats/UnlockManager.cs": ("Atlas.Stats", "UnlockManager", """
		public void Init(object saveManager, object definitions) { }
"""),
    "Atlas/Atlas/Stats/SeasonsManager.cs": ("Atlas.Stats", "SeasonsManager", """
		public void Init(object saveManager, object definitions) { }
"""),
    "Atlas/Atlas/Definitions/AtlasDefinitions.cs": ("Atlas.Definitions", "AtlasDefinitions", """
		public void Init(object assetManager) { }
		public System.Collections.IEnumerator RequestLoad() { yield break; }
		public System.Collections.Generic.IEnumerable<T> GetDefinitions<T>() { return System.Array.Empty<T>(); }
"""),
    "Atlas/Atlas/Definitions/FTUEStageDefinition.cs": ("Atlas.Definitions", "FTUEStageDefinition", """
		public GameContextDefinition GameContextDefinition;
		public EventDefinition EventDefinition;
"""),
    "Atlas/Atlas/Definitions/GameContextDefinition.cs": ("Atlas.Definitions", "GameContextDefinition", """
		public string ContextName;
"""),
    "Atlas/Atlas/Definitions/EventDefinition.cs": ("Atlas.Definitions", "EventDefinition", """
		public object MapDefinitionRef;
"""),
    "Atlas/Atlas/Rendering/PostProcessingManager.cs": ("Atlas.Rendering", "PostProcessingManager", """
		public void Init(object qualitySettings) { }
"""),
    "Atlas/Atlas/Rendering/AtlasShaders.cs": ("Atlas.Rendering", "AtlasShaders", """
		public System.Collections.IEnumerator Init() { yield break; }
"""),
    "Atlas/Atlas/AtlasCameras.cs": ("Atlas", "AtlasCameras", """
		public void Init(object cameraManager, object assetManager) { }
		public void DeInit() { }
		public void RequestCameraPrefabs() { }
		public System.Collections.IEnumerator WaitOnLoad() { yield break; }
"""),
    "Atlas/Atlas/AtlasActorGroupCreator.cs": ("Atlas", "AtlasActorGroupCreator", """
		public static object CreateGroups() { return null; }
"""),
    "Atlas/Atlas/Gameplay/AtlasPoolCreator.cs": ("Atlas.Gameplay", "AtlasPoolCreator", """
		public void Init(object poolManager, object assetManager) { }
"""),
    "Atlas/Atlas/Gameplay/PauseManager.cs": ("Atlas.Gameplay", "PauseManager", """
		public void Init(object uiManager, object audioManager) { }
		public void LateUpdate() { }
"""),
    "Atlas/Atlas/Gameplay/Kart/KartCompositeFactory.cs": ("Atlas.Gameplay.Kart", "KartCompositeFactory", """
		public void Init(object definitions, object assetManager) { }
"""),
    "Atlas/Atlas/Gameplay/Usables/UsableManager.cs": ("Atlas.Gameplay.Usables", "UsableManager", """
		public void Init(object definitions, object pooledActorManager) { }
"""),
    "Atlas/Atlas/Input/KartInputManager.cs": ("Atlas.Input", "KartInputManager", """
		public void Init(object inputManager) { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/Input/AtlasInputManagerExtensions.cs": ("Atlas.Input", "AtlasInputManagerExtensions", """
		public static void AddGlyphMappingsFromDefinitions(object inputManager, object definitions) { }
"""),
    "Atlas/Atlas/Audio/AtlasAudioManager.cs": ("Atlas.Audio", "AtlasAudioManager", """
		public void Init() { }
		public void SetMusicVolume(float v) { }
		public void SetSfxVolume(float v) { }
		public void SetVOVolume(float v) { }
"""),
    "Atlas/Atlas/Audio/MusicManager.cs": ("Atlas.Audio", "MusicManager", """
		public void Init(object audioManager) { }
		public void PlayBaseLayerMusic(object mapDef) { }
		public void PlayFrontEndMusic() { }
"""),
    "Atlas/Atlas/Audio/UIAudio.cs": ("Atlas.Audio", "UIAudio", """
		public void Init(object audioManager) { }
"""),
    "Atlas/Atlas/Networking/Network.cs": ("Atlas.Networking", "Network", """
		public void Init(object servicesManager, object networkIdentifiers) { }
		public void DeInit() { }
		public void EarlyUpdate() { }
		public void Update() { }
		public void LateUpdate() { }
"""),
    "Atlas/Atlas/Networking/MPErrorManager.cs": ("Atlas.Networking", "MPErrorManager", """
		public void Init(object network, object messageBoxManager) { }
		public void Update() { }
"""),
    "Atlas/Atlas/Networking/MatchMakingManager.cs": ("Atlas.Networking", "MatchMakingManager", """
		public void Init(object servicesManager, object network) { }
		public void Update() { }
"""),
    "Atlas/Atlas/Analytics/AtlasAnalyticsManager.cs": ("Atlas.Analytics", "AtlasAnalyticsManager", """
		public void Init(object buildInfo) { }
		public void Update() { }
"""),
    "Atlas/Atlas/FrontEnd/FTUEManager.cs": ("Atlas.FrontEnd", "FTUEManager", """
		public void Init(object saveManager, object definitions) { }
		public Atlas.Definitions.FTUEStageDefinition GetCurrentStage() { return null; }
"""),
    "Atlas/Atlas/League/LeagueManager.cs": ("Atlas.League", "LeagueManager", """
		public void Init(object saveManager, object definitions, object servicesManager) { }
"""),
    "Atlas/Atlas/League/LeagueStarsBoxManager.cs": ("Atlas.League", "LeagueStarsBoxManager", """
		public void Init(object uiManager) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/Contexts/ContextManagerTransitions.cs": ("Atlas.Contexts", "ContextManagerTransitions", """
		public void Init(object contextManager, object transitionManager) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/Contexts/ContextManagerExtensions.cs": ("Atlas.Contexts", "ContextManagerExtensions", """
		public static Core.Contexts.IContextInfo ContextToInfoBase(object gameContextDef, object eventDef) { return null; }
"""),
    "Atlas/Atlas/UI/TransitionManager.cs": ("Atlas.UI", "TransitionManager", """
		public void Init(object uiManager, string loadingKey) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/UI/HostMigrationTransitionManager.cs": ("Atlas.UI", "HostMigrationTransitionManager", """
		public void Init(object uiManager, string reconnectingKey) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/UI/TopBarManager.cs": ("Atlas.UI", "TopBarManager", """
		public void Init(object uiManager) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/UI/VotingManager.cs": ("Atlas.UI", "VotingManager", """
		public void Init(object network, object definitions) { }
		public void Update() { }
"""),
    "Atlas/Atlas/UI/ToolTipManager.cs": ("Atlas.UI", "ToolTipManager", """
		public void Init(object uiManager) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/UI/MessageBoxManager.cs": ("Atlas.UI", "MessageBoxManager", """
		public void Init(object uiManager) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/UI/NotificationBoxManager.cs": ("Atlas.UI", "NotificationBoxManager", """
		public void Init(object uiManager) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
    "Atlas/Atlas/UI/ToastManager.cs": ("Atlas.UI", "ToastManager", """
		public void Init(object uiManager) { }
		public void DeInit() { }
		public void Update(object updateParams) { }
"""),
}

# Match actual file path on disk (preserve existing folder if different)
all_cs = {os.path.splitext(os.path.basename(p))[0]: p for p in glob.glob(ROOT + "/**/*.cs", recursive=True)}

for rel, (ns, cls, body) in atlas_files.items():
    target = all_cs.get(cls, os.path.join(ROOT, rel))
    base = " : UnityEngine.ScriptableObject" if cls.endswith("Definition") else ""
    static_kw = "static " if cls.endswith(("Creator", "Extensions", "Utils")) else ""
    src = f"namespace {ns}\n{{\n\tpublic {static_kw}class {cls}{base}\n\t{{{body}\t}}\n}}\n"
    os.makedirs(os.path.dirname(target), exist_ok=True)
    with open(target, "w", encoding="utf-8") as f:
        f.write(src)

print("Populated all subsystem APIs successfully!")
