// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour.<DeInit>d__71

// ============================================================
// RVA: 0x1531c4c | Atlas.ApplicationBehaviour.<DeInit>d__71..ctor
// ============================================================

void Atlas_ApplicationBehaviour__DeInit_d__71___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1531c78 | Atlas.ApplicationBehaviour.<DeInit>d__71.System.IDisposable.Dispose
// ============================================================

void Atlas_ApplicationBehaviour__DeInit_d__71__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1531c7c | Atlas.ApplicationBehaviour.<DeInit>d__71.MoveNext
// ============================================================

undefined8 Atlas_ApplicationBehaviour__DeInit_d__71__MoveNext(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003eb4eb0 & 1) == 0) {
    func_0x00f78a20(0x3d436b0);
    func_0x00f78a20(0x3d436a8);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d26848);
    bRam0000000003eb4eb0 = 1;
  }
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x1c8) != '\0') {
        return 0;
      }
      *(undefined1 *)(lVar5 + 0x1c8) = 1;
      uVar2 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
      /*System.Func<bool>$$.ctor*/ func_0x02163070(uVar2,lVar5,uRam0000000003d436a8,uRam0000000003d35530);
      uVar2 = /*Core.Extensions.CoroutineExtensions$$WaitFor*/ func_0x016466ec(uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x30) = 0;
      uVar2 = func_0x00f78aec(/*UnityEngine.Application.LowMemoryCallback_TypeInfo*/ uRam0000000003d26848);
      /*UnityEngine.Application.LowMemoryCallback$$.ctor*/ func_0x0327e28c(uVar2,lVar5,uRam0000000003d436b0,0);
      /*UnityEngine.Application$$remove_lowMemory*/ func_0x03218ae8(uVar2,0);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*DG.Tweening.DOTween$$Clear*/ func_0x01693978(1,0);
      if (*(long *)(lVar5 + 0xa8) != 0) {
        uVar2 = /*Core.Contexts.ContextManager$$DeInit*/ func_0x0163d020(*(long *)(lVar5 + 0xa8),0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        uVar3 = 2;
code_r0x015320b4:
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        return 1;
      }
    }
    break;
  default:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x58) != 0)) {
      if (*(char *)(*(long *)(lVar5 + 0x58) + 0x50) != '\0') {
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar3 = 3;
        goto code_r0x015320b4;
      }
      if (*(long *)(lVar5 + 0x128) != 0) {
        /*Atlas.Input.KartInputManager$$DeInit*/ func_0x015cd020(*(long *)(lVar5 + 0x128),0);
        Atlas_ApplicationBehaviour__DeInitNetwork(lVar5,0);
        if (*(long *)(lVar5 + 0x118) != 0) {
          /*Atlas.Networking.MPErrorManager$$DeInit*/ func_0x0148b0dc(*(long *)(lVar5 + 0x118),0);
          Atlas_ApplicationBehaviour__DeInitUI(lVar5,0);
          if (*(long *)(lVar5 + 0x98) != 0) {
            Atlas_Rendering_PostProcessingManager__DeInit(*(long *)(lVar5 + 0x98),0);
            Atlas_ApplicationBehaviour__DeInitCameras(lVar5,0);
            if (*(long *)(lVar5 + 0x78) != 0) {
              /*Atlas.Settings.AtlasQualitySettings$$DeInit*/ func_0x0145e888(*(long *)(lVar5 + 0x78),0);
              if (*(long *)(lVar5 + 0xe0) != 0) {
                Atlas_Gameplay_PauseManager__DeInit(*(long *)(lVar5 + 0xe0),0);
                if (*(long *)(lVar5 + 0xb8) != 0) {
                  Atlas_Gameplay_AtlasPoolCreator__DeInit(*(long *)(lVar5 + 0xb8),0);
                  if (*(long *)(lVar5 + 0xb0) != 0) {
                    /*Core.Containers.PoolManager$$DeInit*/ func_0x0163c8a0(*(long *)(lVar5 + 0xb0),0);
                    if (*(long *)(lVar5 + 0xc0) != 0) {
                      /*Core.Actors.ActorManager$$DeInit*/ func_0x01630218(*(long *)(lVar5 + 0xc0),0);
                      if (*(long *)(lVar5 + 200) != 0) {
                        /*Core.Actors.PooledActorManager$$DeInit*/ func_0x01630ccc(*(long *)(lVar5 + 200),0);
                        lVar4 = *(long *)(lVar5 + 0xd0);
                        if (lVar4 != 0) {
                          *(undefined8 *)(lVar4 + 0x18) = 0;
                          *(undefined8 *)(lVar4 + 0x10) = 0;
                          *(undefined8 *)(lVar4 + 0x28) = 0;
                          *(undefined8 *)(lVar4 + 0x20) = 0;
                          *(undefined8 *)(lVar4 + 0x40) = 0;
                          *(undefined8 *)(lVar4 + 0x48) = 0;
                          *(undefined8 *)(lVar4 + 0x38) = 0;
                          if (*(long *)(lVar5 + 0x80) != 0) {
                            Atlas_Definitions_AtlasDefinitions__DeInit(*(long *)(lVar5 + 0x80),0);
                            if (*(long *)(lVar5 + 0x120) != 0) {
                              Atlas_Gameplay_Kart_KartCompositeFactory__DeInit
                                        (*(long *)(lVar5 + 0x120),0);
                              if (*(long *)(lVar5 + 0x140) != 0) {
                                Atlas_Audio_UIAudio__DeInit(*(long *)(lVar5 + 0x140),0);
                                if (*(long *)(lVar5 + 0x138) != 0) {
                                  Atlas_Audio_MusicManager__DeInit(*(long *)(lVar5 + 0x138),0);
                                  plVar1 = *(long **)(lVar5 + 0x130);
                                  if (plVar1 != (long *)0x0) {
                                    (**(code **)(*plVar1 + 0x188))
                                              (plVar1,*(undefined8 *)(*plVar1 + 400));
                                    lVar4 = *(long *)(lVar5 + 0x148);
                                    if (lVar4 != 0) {
                                      *(undefined8 *)(lVar4 + 0xb0) = 0;
                                      *(undefined8 *)(lVar4 + 0xd0) = 0;
                                      *(undefined8 *)(lVar4 + 0x28) = 0;
                                      *(undefined8 *)(lVar4 + 0x30) = 0;
                                      *(undefined8 *)(lVar4 + 0x20) = 0;
                                      if (*(long *)(lVar5 + 0x150) != 0) {
                                        /*Core.Localisation.LocalisationManager$$DeInit*/ func_0x0164f5e0(*(long *)(lVar5 + 0x150),0);
                                        if (*(long *)(lVar5 + 0x158) != 0) {
                                          Atlas_Stats_UnlockManager__DeInit
                                                    (*(long *)(lVar5 + 0x158),0);
                                          if (*(long *)(lVar5 + 0x160) != 0) {
                                            Atlas_Rendering_AtlasShaders__DeInit
                                                      (*(long *)(lVar5 + 0x160),0);
                                            if (*(long *)(lVar5 + 0x180) != 0) {
                                              /*Core.Input.InputManager$$DeInit*/ func_0x01649e28(*(long *)(lVar5 + 0x180),0);
                                              if (*(long *)(lVar5 + 0x188) != 0) {
                                                Atlas_FrontEnd_FTUEManager__DeInit
                                                          (*(long *)(lVar5 + 0x188),0);
                                                if (*(long *)(lVar5 + 0x70) != 0) {
                                                  Core_Application_CoroutineRunner__DeInit
                                                            (*(long *)(lVar5 + 0x70),0);
                                                  if (*(long *)(lVar5 + 0x58) != 0) {
                                                    Atlas_Save_SaveManager__DeInit
                                                              (*(long *)(lVar5 + 0x58),0);
                                                    if (*(long *)(lVar5 + 0x50) != 0) {
                                                      Atlas_Stats_AtlasStats__DeInit
                                                                (*(long *)(lVar5 + 0x50),0);
                                                      if (*(long *)(lVar5 + 0x60) != 0) {
                                                        Atlas_Stats_AchievementManager__DeInit
                                                                  (*(long *)(lVar5 + 0x60),0);
                                                        if (*(long *)(lVar5 + 0x68) != 0) {
                                                          Atlas_Stats_DailyChallengeManager__DeInit
                                                                    (*(long *)(lVar5 + 0x68),0);
                                                          if (*(long *)(lVar5 + 0x198) != 0) {
                                                            Atlas_Stats_SeasonsManager__DeInit
                                                                      (*(long *)(lVar5 + 0x198),0);
                                                            if (*(long *)(lVar5 + 0x1a0) != 0) {
                                                                                                                            
                                                  Atlas_Analytics_AtlasAnalyticsManager__DeInit
                                                            (*(long *)(lVar5 + 0x1a0),0);
                                                  if (*(long *)(lVar5 + 0x88) != 0) {
                                                    uVar2 = /*Core.Assets.AssetManager$$DeInit*/ func_0x0163415c(*(long *)(lVar5 + 0x88),
                                                                            0);
                                                    *(undefined8 *)(param_1 + 0x18) = uVar2;
                                                    uVar3 = 4;
                                                    goto code_r0x015320b4;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x48) != 0)) {
      /*Core.Services.ServicesManager$$DeInit*/ func_0x016856cc(*(long *)(lVar5 + 0x48),0);
      *(undefined8 *)(lVar5 + 0x118) = 0;
      *(undefined8 *)(lVar5 + 0xe0) = 0;
      *(undefined8 *)(lVar5 + 0x1a0) = 0;
      *(undefined8 *)(lVar5 + 0x48) = 0;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined8 *)(lVar5 + 0x68) = 0;
      *(undefined8 *)(lVar5 + 0x60) = 0;
      *(undefined8 *)(lVar5 + 0x78) = 0;
      *(undefined8 *)(lVar5 + 0x70) = 0;
      *(undefined8 *)(lVar5 + 0x88) = 0;
      *(undefined8 *)(lVar5 + 0x80) = 0;
      *(undefined8 *)(lVar5 + 0x98) = 0;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(undefined8 *)(lVar5 + 0xb0) = 0;
      *(undefined8 *)(lVar5 + 0xb8) = 0;
      *(undefined8 *)(lVar5 + 0xa8) = 0;
      *(undefined8 *)(lVar5 + 0x130) = 0;
      *(undefined8 *)(lVar5 + 0x128) = 0;
      *(undefined8 *)(lVar5 + 0x140) = 0;
      *(undefined8 *)(lVar5 + 0x138) = 0;
      *(undefined8 *)(lVar5 + 0x150) = 0;
      *(undefined8 *)(lVar5 + 0x148) = 0;
      *(undefined8 *)(lVar5 + 0x160) = 0;
      *(undefined8 *)(lVar5 + 0x158) = 0;
      *(undefined8 *)(lVar5 + 0x180) = 0;
      *(undefined8 *)(lVar5 + 0x188) = 0;
      Atlas_ApplicationBehaviour__StopHandlingLogs(lVar5,0);
      Atlas_ApplicationBehaviour__StopLoggingToFile(lVar5,0);
      return 0;
    }
  }
  lVar5 = func_0x00f78af4();
  return *(undefined8 *)(lVar5 + 0x18);
}



// ============================================================
// RVA: 0x15320d4 | Atlas.ApplicationBehaviour.<DeInit>d__71.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__DeInit_d__71__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15320dc | Atlas.ApplicationBehaviour.<DeInit>d__71.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_ApplicationBehaviour__DeInit_d__71__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61fc0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x153211c | Atlas.ApplicationBehaviour.<DeInit>d__71.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__DeInit_d__71__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



