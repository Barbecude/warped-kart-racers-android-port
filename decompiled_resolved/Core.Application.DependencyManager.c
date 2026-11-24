// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Application.DependencyManager

// ============================================================
// RVA: 0x1633ca8 | Core.Application.DependencyManager.AddDependency
// ============================================================

long Core_Application_DependencyManager__AddDependency(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lStack_68;
  
  if ((bRam0000000003eb5672 & 1) == 0) {
    func_0x00f78a20(0x3d30188);
    bRam0000000003eb5672 = 1;
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar2 = /*System.Object$$GetType*/ func_0x02959198(param_2,0);
    if (lVar3 != 0) {
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar3,uVar2,param_2,uRam0000000003d30188);
      return param_2;
    }
  }
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5673 & 1) == 0) {
    func_0x00f78a20(0x3d30190);
    bRam0000000003eb5673 = 1;
  }
  lStack_68 = 0;
  lVar3 = *(long *)(auVar4._0_8_ + 0x10);
  if (lVar3 != 0) {
    iVar1 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar3,auVar4._8_8_,&lStack_68,uRam0000000003d30190);
    if (iVar1 == 0) {
      lStack_68 = 0;
    }
    return lStack_68;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5674 & 1) == 0) {
    func_0x00f78a20(0x3d30180);
    func_0x00f78a20(0x3d1c598);
    bRam0000000003eb5674 = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, object>_TypeInfo*/ uRam0000000003d1c598);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar2,uRam0000000003d30180);
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  return lVar3;
}



// ============================================================
// RVA: 0x1633d2c | Core.Application.DependencyManager.GetDependency
// ============================================================

long Core_Application_DependencyManager__GetDependency(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam0000000003eb5673 & 1) == 0) {
    func_0x00f78a20(0x3d30190);
    bRam0000000003eb5673 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2,&lStack_38,uRam0000000003d30190);
    if (iVar1 == 0) {
      lStack_38 = 0;
    }
    return lStack_38;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb5674 & 1) == 0) {
    func_0x00f78a20(0x3d30180);
    func_0x00f78a20(0x3d1c598);
    bRam0000000003eb5674 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, object>_TypeInfo*/ uRam0000000003d1c598);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar3,uRam0000000003d30180);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  return lVar2;
}



// ============================================================
// RVA: 0x1633db0 | Core.Application.DependencyManager..ctor
// ============================================================

undefined1  [16] Core_Application_DependencyManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5674 & 1) == 0) {
    func_0x00f78a20(0x3d30180);
    func_0x00f78a20(0x3d1c598);
    bRam0000000003eb5674 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, object>_TypeInfo*/ uRam0000000003d1c598);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d30180);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x1842d78 | Core.Application.DependencyManager.AddDependency<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AchievementManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<ActorManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AssetManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasAnalyticsManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasAudioManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasCameras>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasDefinitions>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasPoolCreator>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasQualitySettings>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasShaders>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasStats>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<AtlasUIManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<CameraManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<ContextManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<ContextManagerTransitions>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<CoroutineRunner>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<DailyChallengeManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<FTUEManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<HostMigrationTransitionManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<InputManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<KartCompositeFactory>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<KartInputManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<LeagueManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<LeagueModeUIManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<LeagueStarsBoxManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<LocalisationManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<MPErrorManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<MatchMakingManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<MessageBoxManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<MusicManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<Network>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<NetworkIdentifiers>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<NotificationBoxManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<PauseManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<PoolManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<PooledActorManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<PostProcessingManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<SaveManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<SeasonsManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<ServicesManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<ToastManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<ToolTipManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<TopBarManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<TransitionManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<UIAudio>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<UnlockManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<UsableManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<VotingManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842de4 | Core.Application.DependencyManager.CreateAndAddDependency<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AchievementManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<ActorManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AssetManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasAnalyticsManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasAudioManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasDefinitions>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasPoolCreator>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasQualitySettings>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasShaders>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasStats>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<AtlasUIManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<CameraManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<ContextManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<CoroutineRunner>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<DailyChallengeManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<DebugMenu>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<FTUEManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<GameContextDebugBinding>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<InputManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<KartCompositeFactory>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<KartInputManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<LeagueManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<LeagueModeUIManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<LeagueStarsBoxManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<LocalisationManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<MPErrorManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<MatchMakingManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<MessageBoxManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<MusicManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<Network>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<NetworkIdentifiers>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<NotificationBoxManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<PauseManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<PoolManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<PooledActorManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<PostProcessingManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<SaveManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<SeasonsManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<ServicesManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<ToastManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<ToolTipManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<TopBarManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<TransitionManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<UnlockManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<UsableManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<VotingManager>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842e30 | Core.Application.DependencyManager.GetDependency<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1842f04 | Core.Application.DependencyManager.TryGetDependency<object>
// ============================================================
// [DECOMPILE_FAILED]

