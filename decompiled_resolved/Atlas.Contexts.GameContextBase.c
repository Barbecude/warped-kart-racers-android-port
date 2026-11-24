// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBase

// ============================================================
// RVA: 0x15982d0 | Atlas.Contexts.GameContextBase.GetContextName
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__GetContextName(void)

{
  if ((bRam0000000003eb519c & 1) == 0) {
    func_0x00f78a20(0x3d6d1c0);
    bRam0000000003eb519c = 1;
  }
  return /*STR('GameContextBase')*/ uRam0000000003d6d1c0;
}



// ============================================================
// RVA: 0x1598314 | Atlas.Contexts.GameContextBase.get_MapBehaviour
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_MapBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



// ============================================================
// RVA: 0x159831c | Atlas.Contexts.GameContextBase.set_MapBehaviour
// ============================================================

void Atlas_Contexts_GameContextBase__set_MapBehaviour(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1d0) = param_2;
  return;
}



// ============================================================
// RVA: 0x1598324 | Atlas.Contexts.GameContextBase.get_UIManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_UIManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x159832c | Atlas.Contexts.GameContextBase.get_KartManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_KartManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



// ============================================================
// RVA: 0x1598334 | Atlas.Contexts.GameContextBase.get_KartFollowCamera
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_KartFollowCamera(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



// ============================================================
// RVA: 0x159833c | Atlas.Contexts.GameContextBase.get_SequenceController
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_SequenceController(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



// ============================================================
// RVA: 0x1598344 | Atlas.Contexts.GameContextBase.get_GameContextPlayerManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_GameContextPlayerManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x159834c | Atlas.Contexts.GameContextBase.get_GameInProgressScreen
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_GameInProgressScreen(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1598354 | Atlas.Contexts.GameContextBase.get_CurrentContextInfo
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_CurrentContextInfo(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



// ============================================================
// RVA: 0x159835c | Atlas.Contexts.GameContextBase.get_CurrentGameContextDefinition
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_CurrentGameContextDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



// ============================================================
// RVA: 0x1598364 | Atlas.Contexts.GameContextBase.get_PickupManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_PickupManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



// ============================================================
// RVA: 0x159836c | Atlas.Contexts.GameContextBase.get_ActorManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_ActorManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x1598374 | Atlas.Contexts.GameContextBase.get_DependencyManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_DependencyManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x159837c | Atlas.Contexts.GameContextBase.get_TransitionManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_TransitionManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x1598384 | Atlas.Contexts.GameContextBase.get_AudioManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_AudioManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



// ============================================================
// RVA: 0x159838c | Atlas.Contexts.GameContextBase.get_PostProcessingEffectBehaviour
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_PostProcessingEffectBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



// ============================================================
// RVA: 0x1598394 | Atlas.Contexts.GameContextBase.get_Network
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_Network(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x159839c | Atlas.Contexts.GameContextBase.get_VfxHitVolumeManager
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_VfxHitVolumeManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



// ============================================================
// RVA: 0x15983a4 | Atlas.Contexts.GameContextBase.get_ArcadeEvent
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_ArcadeEvent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



// ============================================================
// RVA: 0x15983ac | Atlas.Contexts.GameContextBase.get_DisableEndConditions
// ============================================================

undefined1 Atlas_Contexts_GameContextBase__get_DisableEndConditions(long param_1)

{
  return *(undefined1 *)(param_1 + 0x238);
}



// ============================================================
// RVA: 0x15983b4 | Atlas.Contexts.GameContextBase.set_DisableEndConditions
// ============================================================

void Atlas_Contexts_GameContextBase__set_DisableEndConditions(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x238) = param_2;
  return;
}



// ============================================================
// RVA: 0x15983bc | Atlas.Contexts.GameContextBase.get_ScorePerHit
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__get_ScorePerHit(void)

{
  return 1;
}



// ============================================================
// RVA: 0x15983c4 | Atlas.Contexts.GameContextBase.get_IsUserPauseAllowed
// ============================================================

undefined1 Atlas_Contexts_GameContextBase__get_IsUserPauseAllowed(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b8);
}



// ============================================================
// RVA: 0x15983cc | Atlas.Contexts.GameContextBase.set_IsUserPauseAllowed
// ============================================================

void Atlas_Contexts_GameContextBase__set_IsUserPauseAllowed(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b8) = param_2;
  return;
}



// ============================================================
// RVA: 0x15983d4 | Atlas.Contexts.GameContextBase.OnInit
// ============================================================

long Atlas_Contexts_GameContextBase__OnInit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam0000000003eb519d & 1) == 0) {
    func_0x00f78a20(0x3d276e0);
    bRam0000000003eb519d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnInit>d__125_TypeInfo*/ uRam0000000003d276e0);
  /*Atlas.Contexts.GameContextBase.<OnInit>d__125$$.ctor*/ func_0x01550b38(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x198);
}



// ============================================================
// RVA: 0x159845c | Atlas.Contexts.GameContextBase.GetResultUpdater
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__GetResultUpdater(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



// ============================================================
// RVA: 0x1598464 | Atlas.Contexts.GameContextBase.OnPostInit
// ============================================================

long Atlas_Contexts_GameContextBase__OnPostInit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb519e & 1) == 0) {
    func_0x00f78a20(0x3d276e8);
    bRam0000000003eb519e = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnPostInit>d__127_TypeInfo*/ uRam0000000003d276e8);
  /*Atlas.Contexts.GameContextBase.<OnPostInit>d__127$$.ctor*/ func_0x01551f50(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined8 *)(lVar2 + 0x30) = param_3;
    return lVar2;
  }
  auVar11 = func_0x00f78af4();
  plVar5 = auVar11._8_8_;
  lVar2 = auVar11._0_8_;
  if ((bRam0000000003eb519f & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb519f = 1;
  }
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
  if (*(long *)(lVar2 + 0xc0) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
    if (lVar6 == 0) {
      func_0x00f78af4();
    }
    else {
      if ((*(char *)(lVar6 + 0x19c) == '\0') && (*(char *)(lVar2 + 0x249) != '\0')) {
        /*Atlas.Contexts.GameContextBase$$OnDisconnect*/ func_0x015987d0(lVar2);
        *(undefined2 *)(lVar2 + 0x249) = 0x100;
code_r0x015986e8:
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar2 = (*pcRam0000000003ec05a0)(uVar10);
        return lVar2;
      }
      if (*(long *)(lVar2 + 0x188) == 0) {
        func_0x00f78af4();
      }
      else {
        /*Atlas.Networking.NetworkTimelineManager$$Update*/ func_0x014b0890(*(long *)(lVar2 + 0x188),0);
        /*Atlas.Contexts.GameContextBase$$MapBehaviourUpdate*/ func_0x0159882c(lVar2,plVar5);
        if (*(long *)(lVar2 + 0x20) == 0) {
          func_0x00f78af4();
        }
        else {
          /*Core.StateManagement.StateMachine$$Update*/ func_0x02b9521c(*(long *)(lVar2 + 0x20),plVar5,0);
          if (*(long *)(lVar2 + 400) == 0) {
            func_0x00f78af4();
          }
          else {
            /*NetworkCarUpdater$$Update*/ func_0x0149f390(*(long *)(lVar2 + 400),0);
            if (*(long *)(lVar2 + 0x1e8) == 0) {
              func_0x00f78af4();
            }
            else {
              /*Atlas.Gameplay.Pickups.PickupManager$$Update*/ func_0x014b9cd0(*(long *)(lVar2 + 0x1e8),plVar5,0);
              if (*(long *)(lVar2 + 0x1a0) == 0) {
                func_0x00f78af4();
              }
              else {
                /*Atlas.Networking.NetworkMigrationUpdater$$Update*/ func_0x014aca7c(*(long *)(lVar2 + 0x1a0),plVar5,0);
                if (*(long *)(lVar2 + 0x130) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_KartManager__Update(*(long *)(lVar2 + 0x130),plVar5,0);
                  if (*(long *)(lVar2 + 0x40) != 0) {
                    /*Atlas.Gameplay.Player.GameContextPlayerManager$$Update*/ func_0x01598910();
                    plVar3 = *(long **)(lVar2 + 0x178);
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x198))(plVar3,plVar5,*(undefined8 *)(*plVar3 + 0x1a0))
                      ;
                    }
                    if (*(long *)(lVar2 + 0x18) != 0) {
                      /*Atlas.Stats.AtlasStats$$UpdateGameContextKartTracking*/ func_0x0146ea3c(*(long *)(lVar2 + 0x18),0);
                    }
                    if (*(long *)(lVar2 + 0x208) != 0) {
                      /*Atlas.Gameplay.VfxHitVolumeManager$$Update*/ func_0x01528118(*(long *)(lVar2 + 0x208),plVar5,0);
                    }
                    lVar6 = *(long *)(lVar2 + 0x230);
                    if (lVar6 != 0) {
                      if (plVar5 == (long *)0x0) {
                        func_0x00f78af4();
                        goto code_r0x0159874c;
                      }
                      lVar7 = *plVar5;
                      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                      if (uVar8 != 0) {
                        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                            goto code_r0x015986c4;
                          }
                          piVar9 = piVar9 + 4;
                          uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                      }
                      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015986c4:
                      (*(code *)*puVar4)(plVar5,puVar4[1]);
                      /*Atlas.Arcade.ArcadeEvent$$Update*/ func_0x0144d298(lVar6,0);
                    }
                    /*Atlas.Contexts.GameContextBase$$UpdateFrameTiming*/ func_0x01598a18(lVar2,plVar5);
                    goto code_r0x015986e8;
                  }
                  func_0x00f78af4();
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0159874c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1598750);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15984ec | Atlas.Contexts.GameContextBase.OnUpdate
// ============================================================

void Atlas_Contexts_GameContextBase__OnUpdate(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((bRam0000000003eb519f & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb519f = 1;
  }
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
  if (*(long *)(param_1 + 0xc0) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20);
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else {
      if ((*(char *)(lVar4 + 0x19c) == '\0') && (*(char *)(param_1 + 0x249) != '\0')) {
        /*Atlas.Contexts.GameContextBase$$OnDisconnect*/ func_0x015987d0(param_1);
        *(undefined2 *)(param_1 + 0x249) = 0x100;
code_r0x015986e8:
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ec05a0)(uVar8);
        return;
      }
      if (*(long *)(param_1 + 0x188) == 0) {
        func_0x00f78af4();
      }
      else {
        /*Atlas.Networking.NetworkTimelineManager$$Update*/ func_0x014b0890(*(long *)(param_1 + 0x188),0);
        /*Atlas.Contexts.GameContextBase$$MapBehaviourUpdate*/ func_0x0159882c(param_1,param_2);
        if (*(long *)(param_1 + 0x20) == 0) {
          func_0x00f78af4();
        }
        else {
          /*Core.StateManagement.StateMachine$$Update*/ func_0x02b9521c(*(long *)(param_1 + 0x20),param_2,0);
          if (*(long *)(param_1 + 400) == 0) {
            func_0x00f78af4();
          }
          else {
            /*NetworkCarUpdater$$Update*/ func_0x0149f390(*(long *)(param_1 + 400),0);
            if (*(long *)(param_1 + 0x1e8) == 0) {
              func_0x00f78af4();
            }
            else {
              /*Atlas.Gameplay.Pickups.PickupManager$$Update*/ func_0x014b9cd0(*(long *)(param_1 + 0x1e8),param_2,0);
              if (*(long *)(param_1 + 0x1a0) == 0) {
                func_0x00f78af4();
              }
              else {
                /*Atlas.Networking.NetworkMigrationUpdater$$Update*/ func_0x014aca7c(*(long *)(param_1 + 0x1a0),param_2,0);
                if (*(long *)(param_1 + 0x130) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_KartManager__Update(*(long *)(param_1 + 0x130),param_2,0);
                  if (*(long *)(param_1 + 0x40) != 0) {
                    /*Atlas.Gameplay.Player.GameContextPlayerManager$$Update*/ func_0x01598910();
                    plVar2 = *(long **)(param_1 + 0x178);
                    if (plVar2 != (long *)0x0) {
                      (**(code **)(*plVar2 + 0x198))
                                (plVar2,param_2,*(undefined8 *)(*plVar2 + 0x1a0));
                    }
                    if (*(long *)(param_1 + 0x18) != 0) {
                      /*Atlas.Stats.AtlasStats$$UpdateGameContextKartTracking*/ func_0x0146ea3c(*(long *)(param_1 + 0x18),0);
                    }
                    if (*(long *)(param_1 + 0x208) != 0) {
                      /*Atlas.Gameplay.VfxHitVolumeManager$$Update*/ func_0x01528118(*(long *)(param_1 + 0x208),param_2,0);
                    }
                    lVar4 = *(long *)(param_1 + 0x230);
                    if (lVar4 != 0) {
                      if (param_2 == (long *)0x0) {
                        func_0x00f78af4();
                        goto code_r0x0159874c;
                      }
                      lVar5 = *param_2;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                            goto LAB_015986c4;
                          }
                          piVar7 = piVar7 + 4;
                          uVar6 = uVar6 - 1;
                        } while (uVar6 != 0);
                      }
                      puVar3 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_015986c4:
                      (*(code *)*puVar3)(param_2,puVar3[1]);
                      /*Atlas.Arcade.ArcadeEvent$$Update*/ func_0x0144d298(lVar4,0);
                    }
                    /*Atlas.Contexts.GameContextBase$$UpdateFrameTiming*/ func_0x01598a18(param_1,param_2);
                    goto code_r0x015986e8;
                  }
                  func_0x00f78af4();
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0159874c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1598750);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15987d0 | Atlas.Contexts.GameContextBase.OnDisconnect
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__OnDisconnect
                (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int extraout_w1;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  uint uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar16;
  undefined8 unaff_x25;
  long lVar17;
  undefined8 unaff_x26;
  undefined1 *puVar18;
  float fVar19;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar20;
  float extraout_s0_01;
  undefined4 uVar21;
  undefined8 unaff_d8;
  float fVar22;
  undefined8 unaff_d9;
  float fVar23;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 ****ppppuStack_110;
  undefined *puStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uVar26;
  undefined *puVar27;
  
  if ((bRam0000000003eb51a8 & 1) == 0) {
    func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb51a8 = 1;
  }
  uVar26 = /*STR('DC')*/ uRam0000000003d6b3d8;
  uVar7 = *(ulong *)(param_4 + 0x108);
  if (uVar7 != 0) {
    uVar5 = uVar7;
    if ((bRam0000000003eb496d & 1) == 0) {
      func_0x00f78a20(0x3d3e0f8);
      uVar5 = func_0x00f78a20(0x3d6d050);
      bRam0000000003eb496d = 1;
    }
    if (*(char *)(uVar7 + 0x40) != '\0') {
      return uVar5;
    }
    *(undefined2 *)(uVar7 + 0x40) = 0x101;
    *(undefined8 *)(uVar7 + 0x48) = uVar26;
    *(undefined4 *)(uVar7 + 0x50) = 0;
    *(undefined8 *)(uVar7 + 0x58) = 0;
    *(undefined8 *)(uVar7 + 0x60) = 0;
    if (*(long *)(uVar7 + 0x20) != 0) {
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(uVar7 + 0x20),0,uRam0000000003d3e0f8);
      uVar26 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
      uVar5 = *(ulong *)(uVar7 + 0x28);
      if (uVar5 != 0) {
        if (*(char *)(uVar5 + 0x50) != '\0') {
          *(undefined1 *)(uVar7 + 0x42) = 1;
          return uVar5;
        }
        cVar2 = *(char *)(uVar5 + 0x50);
        if (cVar2 == '\0') {
          *(undefined1 *)(uVar5 + 0x50) = 1;
          *(undefined8 *)(uVar5 + 0x40) = uVar26;
          *(undefined8 *)(uVar5 + 0x48) = 0;
        }
        return (ulong)(cVar2 == '\0');
      }
    }
    uVar7 = func_0x00f78af4();
    *(undefined1 *)(uVar7 + 0x40) = 0;
    return uVar7;
  }
  auVar24 = func_0x00f78af4();
  plVar8 = auVar24._8_8_;
  lVar10 = auVar24._0_8_;
  puVar4 = &stack0xffffffffffffffb0;
  uVar26 = 0x3eb5000;
  puVar27 = &Atlas_Contexts_GameContextBase__MapBehaviourUpdate;
  if ((bRam0000000003eb51ae & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51ae = 1;
  }
  uVar14 = *(undefined8 *)(lVar10 + 0x1d0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,0,0);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  if (*(long *)(lVar10 + 0x1d0) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(lVar10 + 0x1d0) + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if ((*(long *)(lVar10 + 0x1d0) != 0) &&
       (uVar7 = *(ulong *)(*(long *)(lVar10 + 0x1d0) + 0x40), uVar7 != 0)) {
      puVar18 = &stack0xffffffffffffffd0;
      uVar14 = 0x3eb4000;
      if ((bRam0000000003eb4bbc & 1) == 0) {
        func_0x00f78a20(0x3d22618,plVar8,0);
        bRam0000000003eb4bbc = 1;
      }
      if (plVar8 == (long *)0x0) {
        puVar27 = &Atlas_Gameplay_RaceSplineRootBehaviour__OnUpdateSplineSwitchLoops;
        uVar5 = func_0x00f78af4();
        uVar26 = 0;
        fVar19 = extraout_s0;
      }
      else {
        lVar10 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014dabc8;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014dabc8:
        fVar19 = (float)(*(code *)*puVar6)(plVar8,puVar6[1]);
        puVar4 = &stack0xffffffffffffffe0;
        uVar5 = uVar7;
        uVar7 = param_4;
        uVar14 = unaff_x21;
        puVar18 = &stack0xfffffffffffffff0;
      }
      *(undefined8 *)(puVar4 + -0x70) = unaff_d11;
      *(undefined8 *)(puVar4 + -0x68) = unaff_d10;
      *(undefined8 *)(puVar4 + -0x60) = unaff_d9;
      *(undefined8 *)(puVar4 + -0x58) = unaff_d8;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x28) = uVar14;
      *(undefined8 *)(puVar4 + -0x20) = uVar26;
      *(ulong *)(puVar4 + -0x18) = uVar7;
      *(undefined1 **)(puVar4 + -0x10) = puVar18;
      *(undefined **)(puVar4 + -8) = puVar27;
      uVar7 = uVar5;
      if ((bRam0000000003eb4bbd & 1) == 0) {
        uVar7 = func_0x00f78a20(0x3d23990);
        bRam0000000003eb4bbd = 1;
      }
      if (*(char *)(uVar5 + 0x5c) != '\0') {
        lVar10 = *(long *)(uVar5 + 0x38);
        if (lVar10 == 0) {
code_r0x014dad60:
          uVar7 = func_0x00f78af4();
          fVar19 = *(float *)(uVar7 + 0x1c) + extraout_s0_00;
          *(float *)(uVar7 + 0x1c) = fVar19;
          if (*(float *)(uVar7 + 0x18) <= fVar19) {
            *(float *)(uVar7 + 0x1c) = fVar19 - *(float *)(uVar7 + 0x18);
          }
          return uVar7;
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          uVar15 = 0;
          do {
            if (uVar1 <= uVar15) {
code_r0x014dad54:
              uVar26 = func_0x00f78b24();
              func_0x00f78ac0(uVar26,0);
              goto code_r0x014dad60;
            }
            lVar11 = *(long *)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
            if (lVar11 == 0) goto code_r0x014dad60;
            fVar22 = *(float *)(lVar11 + 0x1c) + fVar19;
            *(float *)(lVar11 + 0x1c) = fVar22;
            if (*(float *)(lVar11 + 0x18) <= fVar22) {
              fVar22 = fVar22 - *(float *)(lVar11 + 0x18);
              *(float *)(lVar11 + 0x1c) = fVar22;
            }
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 == 0) goto code_r0x014dad60;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (0 < (int)uVar1) {
              uVar16 = 0;
              do {
                if (uVar1 <= uVar16) goto code_r0x014dad54;
                lVar17 = *(long *)(lVar11 + (long)(int)uVar16 * 8 + 0x20);
                if (lVar17 == 0) goto code_r0x014dad60;
                fVar23 = *(float *)(lVar17 + 0x18);
                uVar26 = *(undefined8 *)(lVar17 + 0x10);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                fVar23 = fVar22 - fVar23;
                uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar26,0,0);
                if ((int)uVar7 != 0) {
                  *(bool *)(*(long *)(uVar5 + 0x80) + (long)*(int *)(lVar17 + 0x1c)) =
                       fVar23 <= 0.0 && 0.0 < fVar22;
                }
                uVar16 = uVar16 + 1;
                uVar1 = *(uint *)(lVar11 + 0x18);
                fVar22 = fVar23;
              } while ((int)uVar16 < (int)uVar1);
            }
            uVar15 = uVar15 + 1;
            uVar1 = *(uint *)(lVar10 + 0x18);
          } while ((int)uVar15 < (int)uVar1);
        }
      }
      return uVar7;
    }
  }
  uVar7 = func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Player_GameContextPlayerManager__Update;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  if (*(char *)(uVar7 + 0x50) == '\0') {
    lVar10 = *(long *)(uVar7 + 0x30);
    puStack_60 = &stack0xffffffffffffffd0;
    if (lVar10 != 0) {
      lVar11 = 0;
      uVar5 = 0;
      do {
        uVar21 = (undefined4)param_2;
        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar5) goto code_r0x015989d0;
        if (*(uint *)(lVar10 + 0x18) <= uVar5) {
code_r0x01598a0c:
          uVar26 = func_0x00f78b24();
          auVar24 = func_0x00f78ac0(uVar26,0);
          plVar8 = auVar24._8_8_;
          lVar17 = auVar24._0_8_;
          puStack_b8 = &Atlas_Contexts_GameContextBase__UpdateFrameTiming;
          lStack_e0 = lVar10;
          lStack_d8 = lVar11;
          uStack_d0 = uVar5;
          uStack_c8 = uVar7;
          ppuStack_c0 = &puStack_60;
          if ((bRam0000000003eb51ba & 1) == 0) {
            func_0x00f78a20(0x3d57088);
            func_0x00f78a20(0x3d22618);
            bRam0000000003eb51ba = 1;
          }
          uVar7 = /*Atlas.Contexts.GameContextBase$$IsActiveState<object>*/ func_0x0185c060(lVar17,uRam0000000003d57088);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          if (plVar8 != (long *)0x0) {
            lVar10 = *plVar8;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar7 == 0) goto code_r0x01598ab0;
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto code_r0x01598a98;
          }
          auVar25 = func_0x00f78af4();
          uVar26 = auVar25._8_8_;
          lVar10 = auVar25._0_8_;
          puStack_e8 = &Atlas_Contexts_GameContextBase__OnPreLateUpdate;
          lStack_f8 = lVar17;
          pppuStack_f0 = &ppuStack_c0;
          if (*(long *)(lVar10 + 0x138) != 0) {
            plStack_100 = plVar8;
            Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate(*(long *)(lVar10 + 0x138),uVar26,0);
            auVar24._8_8_ = plStack_100;
            auVar24._0_8_ = uVar26;
            uVar7 = *(ulong *)(lVar10 + 0x130);
            if (uVar7 != 0) {
              ppppuStack_110 = (undefined1 ****)0x3d57088;
              puStack_108 = (undefined *)0x3eb5000;
              uVar5 = uVar7;
              if ((bRam0000000003eb534d & 1) == 0) {
                func_0x00f78a20(0x3d57f90,uVar26,0);
                func_0x00f78a20(0x3d3ae30);
                func_0x00f78a20(0x3d3ae38);
                uVar5 = func_0x00f78a20(0x3d23990);
                bRam0000000003eb534d = 1;
              }
              if (*(int *)(uVar7 + 0xa0) < 1) {
                return uVar5;
              }
              if (*(long *)(uVar7 + 0x40) == 0) goto LAB_015cf5d8;
              lVar10 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(uVar7 + 0x40),0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0,0);
              if ((uVar5 & 1) != 0) {
                return uVar5;
              }
              if ((lVar10 == 0) || (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0), lVar10 == 0))
              goto LAB_015cf5d8;
              /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar10,0);
              uStack_140 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
              uStack_128 = *(undefined8 *)(uVar7 + 0x80);
              uStack_130 = *(undefined8 *)(uVar7 + 0x78);
              lStack_120 = *(undefined8 *)(uVar7 + 0x98);
              uStack_118 = *(undefined8 *)(uVar7 + 0xa0);
              uStack_134 = 0;
              uStack_13c = uVar21;
              uStack_138 = param_3;
              uVar5 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_140,uRam0000000003d57f90);
              lVar10 = *(long *)(uVar7 + 0x10);
              if (lVar10 == 0) goto LAB_015cf5d8;
              lVar11 = 0;
              goto code_r0x015cf594;
            }
          }
          plStack_100 = auVar24._8_8_;
          auVar25 = func_0x00f78af4();
          plVar8 = auVar25._8_8_;
          lVar11 = auVar25._0_8_;
          uStack_130 = 0x3d57088;
          uStack_128 = 0x3eb5000;
          puStack_108 = &Atlas_Contexts_GameContextBase__OnLateUpdate;
          lStack_120 = lVar10;
          uStack_118 = auVar24._0_8_;
          ppppuStack_110 = &pppuStack_f0;
          if ((bRam0000000003eb51a0 & 1) == 0) {
            func_0x00f78a20(0x3d21b08);
            func_0x00f78a20(0x3d22618);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb51a0 = 1;
          }
          if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x18);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar26,0);
          if (*(long *)(lVar11 + 400) == 0) {
            func_0x00f78af4();
          }
          else {
            /*NetworkCarUpdater$$LateUpdate*/ func_0x0149fc44(*(long *)(lVar11 + 400),plVar8,0);
            if (*(long *)(lVar11 + 0x1a0) == 0) {
              func_0x00f78af4();
            }
            else {
              /*Atlas.Networking.NetworkMigrationUpdater$$LateUpdate*/ func_0x014ad028(*(long *)(lVar11 + 0x1a0),0);
              uVar14 = *(undefined8 *)(lVar11 + 0x1d8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
              if ((uVar7 & 1) != 0) {
                if (*(long *)(lVar11 + 0x1d8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01598d2c;
                }
                if (*(long *)(lVar11 + 0x1f8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01598d2c;
                }
                _memmove(*(long *)(lVar11 + 0x1f8) + 0x5c,*(long *)(lVar11 + 0x1d8) + 0xf8,0x44);
              }
              if (*(long *)(lVar11 + 0x1f8) == 0) {
                func_0x00f78af4();
              }
              else {
                /*Atlas.Lighting.LightWorld$$Update*/ func_0x014850cc(*(long *)(lVar11 + 0x1f8),0);
                lVar10 = *(long *)(lVar11 + 0x230);
                if (lVar10 == 0) goto code_r0x01598ce8;
                if (plVar8 != (long *)0x0) {
                  lVar11 = *plVar8;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar7 == 0) goto code_r0x01598cb4;
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  goto code_r0x01598c9c;
                }
                func_0x00f78af4();
              }
            }
          }
code_r0x01598d2c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1598d30);
          (*pcVar3)();
        }
        plVar8 = *(long **)(uVar7 + 0x18);
        if (plVar8 == (long *)0x0) break;
        uVar20 = (**(code **)(*plVar8 + 0x2b8))
                           (plVar8,*(undefined8 *)(lVar10 + lVar11 + 0x20),&uStack_a8,
                            *(undefined8 *)(*plVar8 + 0x2c0));
        uVar21 = (undefined4)param_2;
        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto code_r0x01598a0c;
        *(undefined4 *)(lVar10 + lVar11 + 0x28) = uVar20;
        lVar17 = *(long *)(uVar7 + 0x30);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar5) goto code_r0x01598a0c;
        lVar17 = lVar17 + lVar11;
        lVar11 = lVar11 + 0x28;
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar17 + 0x40) = uStack_98;
        *(undefined8 *)(lVar17 + 0x38) = uStack_a0;
        *(undefined8 *)(lVar17 + 0x30) = uStack_a8;
        lVar10 = *(long *)(uVar7 + 0x30);
      } while (lVar10 != 0);
    }
    func_0x00f78af4();
code_r0x015989d0:
    /*Atlas.Gameplay.Player.GameContextPlayerManager$$SortPlayers*/ func_0x015a634c(uVar7);
    if (*(long *)(uVar7 + 0x58) != 0) {
      /*Atlas.Audio.AtlasAudioManager$$UpdateRanking*/ func_0x01459790(*(long *)(uVar7 + 0x58),*(undefined8 *)(uVar7 + 0x28),0);
    }
    uVar7 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$UpdatePlayerTypeArrays*/ func_0x015a6494(uVar7);
  }
  return uVar7;
  while( true ) {
    *(undefined4 *)(lVar10 + 0xf4) = *(undefined4 *)(*(long *)(uVar7 + 0x98) + lVar11 * 4);
    lVar10 = *(long *)(uVar7 + 0x10);
    lVar11 = lVar11 + 1;
    if (lVar10 == 0) break;
code_r0x015cf594:
    if ((int)*(uint *)(lVar10 + 0x18) <= (int)(uint)lVar11) {
      return uVar5;
    }
    if (*(uint *)(lVar10 + 0x18) <= (uint)lVar11) {
      uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + lVar11 * 8 + 0x20);
    if (lVar10 == 0) break;
  }
LAB_015cf5d8:
  uVar26 = func_0x00f78af4();
  if ((bRam0000000003eb5341 & 1) == 0) {
    func_0x00f78a20(0x3d27d08);
    bRam0000000003eb5341 = 1;
  }
  uVar7 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
  uVar14 = 0;
  Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39___ctor(uVar7,0);
  if (uVar7 != 0) {
    *(undefined8 *)(uVar7 + 0x20) = uVar26;
    return uVar7;
  }
  auVar24 = func_0x00f78af4();
  plVar8 = auVar24._8_8_;
  lVar10 = auVar24._0_8_;
  puVar6 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_1c0 = 0;
  if (*(long *)(lVar10 + 0x18) == 0) goto LAB_015cf85c;
  Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
            (*(long *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x10),plVar8,uVar14,
             *(undefined8 *)(lVar10 + 0x20));
  if (*(long *)(lVar10 + 0x10) == 0) goto LAB_015cf85c;
  plVar8 = (long *)0x3d1feb0;
  puVar6 = (undefined8 *)0x3d328c8;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1e8,*(long *)(lVar10 + 0x10),uRam0000000003d3ae20);
  uStack_1c8 = uStack_1e0;
  uStack_1d0 = uStack_1e8;
  lStack_1c0 = lStack_1d8;
  while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d0,uRam0000000003d328d0), lVar11 = lStack_1c0,
        (uVar7 & 1) != 0) {
    if (*(long *)(lVar10 + 0x28) == 0) {
      func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x15cf85c);
      (*pcVar3)();
    }
    /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar10 + 0x28),lStack_1c0,uRam0000000003d43370);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    if (*(long *)(lVar11 + 0x18) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar11 + 0x18),0);
    if (lVar17 == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0);
    if (*(long *)(lVar11 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    if (*(int *)(*(long *)(lVar11 + 0x20) + 0x10) == 2) {
      *(long *)(lVar10 + 0x48) = lVar11;
    }
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar10 + 0x38),lVar11,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d328c8);
  do {
    Atlas_Gameplay_Kart_KartManager__InitKartSideOnTimeRelationships(lVar10);
    if (((*(ushort *)(*plVar8 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Gameplay_Kart_KartManager__ApplyVFXSettings(lVar10);
    uVar7 = Atlas_Gameplay_Kart_KartManager__ApplyOutlineSettings(lVar10);
    if (*(long *)(lVar10 + 0x10) != 0) {
      *(undefined4 *)(lVar10 + 0x11c) = *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x18);
      return uVar7;
    }
LAB_015cf85c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015cf8b4;
    plVar9 = (long *)___cxa_begin_catch();
    lVar11 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,*puVar6);
  } while (lVar11 == 0);
  func_0x00f78ac0(lVar11,0);
code_r0x015cf8b4:
  lVar10 = __Unwind_Resume();
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(lVar10 + 0x10) != 0) {
    uVar7 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x18));
    *(ulong *)(lVar10 + 0x70) = uVar7;
    if (*(long *)(lVar10 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(lVar10 + 0x10) + 0x18)) {
        uVar5 = 0;
        do {
          plVar8 = *(long **)(lVar10 + 0x70);
          lVar11 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar8 == (long *)0x0) goto LAB_015cfa18;
          uVar7 = 0;
          if ((lVar11 != 0) &&
             (uVar7 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar8 + 0x40)), uVar7 == 0))
          goto LAB_015cfa28;
          if (*(uint *)(plVar8 + 3) <= uVar5) goto LAB_015cfa1c;
          plVar8[uVar5 + 4] = lVar11;
          lVar11 = *(long *)(lVar10 + 0x10);
          if (lVar11 == 0) goto LAB_015cfa18;
          lVar17 = 0;
          uVar12 = 0;
          while ((long)uVar12 < (long)*(int *)(lVar11 + 0x18)) {
            lVar11 = *(long *)(lVar10 + 0x70);
            if (lVar11 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_015cfa1c;
            lVar11 = *(long *)(lVar11 + uVar5 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_015cfa1c;
            lVar11 = lVar11 + lVar17;
            lVar17 = lVar17 + 0xc;
            uVar12 = uVar12 + 1;
            *(undefined8 *)(lVar11 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar11 + 0x28) = 0;
            lVar11 = *(long *)(lVar10 + 0x10);
            if (lVar11 == 0) goto LAB_015cfa18;
          }
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)*(int *)(lVar11 + 0x18));
      }
      return uVar7;
    }
  }
LAB_015cfa18:
  func_0x00f78af4();
LAB_015cfa1c:
  uVar26 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar26,0);
LAB_015cfa28:
    uVar26 = func_0x00f78b14();
  } while( true );
  while( true ) {
    piVar13 = piVar13 + 4;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) break;
code_r0x01598a98:
    if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
      goto code_r0x01598ad0;
    }
  }
code_r0x01598ab0:
  puVar6 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,1);
code_r0x01598ad0:
  uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
  fVar19 = extraout_s0_01;
  if (_UNK_033f8144 < extraout_s0_01) {
    fVar19 = _UNK_033f8144;
  }
  *(double *)(lVar17 + 0x220) = *(double *)(lVar17 + 0x220) + (double)fVar19;
  *(int *)(lVar17 + 0x228) = *(int *)(lVar17 + 0x228) + 1;
  return uVar7;
  while( true ) {
    piVar13 = piVar13 + 4;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) break;
code_r0x01598c9c:
    if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto code_r0x01598cd0;
    }
  }
code_r0x01598cb4:
  puVar6 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x01598cd0:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  /*Atlas.Arcade.ArcadeEvent$$LateUpdate*/ func_0x0144d2a4(lVar10,0);
code_r0x01598ce8:
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*pcRam0000000003ec05a0)(uVar26);
  return uVar7;
}



// ============================================================
// RVA: 0x159882c | Atlas.Contexts.GameContextBase.MapBehaviourUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__MapBehaviourUpdate
                (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,long param_4,
                long *param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int extraout_w1;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar14;
  uint uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar16;
  undefined8 unaff_x25;
  long lVar17;
  undefined8 unaff_x26;
  undefined1 *puVar18;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar19;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar20;
  float extraout_s0_01;
  undefined4 uVar21;
  undefined8 unaff_d8;
  float fVar22;
  undefined8 unaff_d9;
  float fVar23;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar3 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb51ae & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51ae = 1;
  }
  uVar14 = *(undefined8 *)(param_4 + 0x1d0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  if (*(long *)(param_4 + 0x1d0) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x1d0) + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if ((*(long *)(param_4 + 0x1d0) != 0) &&
       (uVar5 = *(ulong *)(*(long *)(param_4 + 0x1d0) + 0x40), uVar5 != 0)) {
      puVar18 = &stack0xfffffffffffffff0;
      uVar14 = 0x3eb4000;
      if ((bRam0000000003eb4bbc & 1) == 0) {
        func_0x00f78a20(0x3d22618,param_5,0);
        bRam0000000003eb4bbc = 1;
      }
      if (param_5 == (long *)0x0) {
        unaff_x30 = &Atlas_Gameplay_RaceSplineRootBehaviour__OnUpdateSplineSwitchLoops;
        uVar12 = func_0x00f78af4();
        unaff_x20 = 0;
        fVar19 = extraout_s0;
      }
      else {
        lVar9 = *param_5;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014dabc8;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014dabc8:
        fVar19 = (float)(*(code *)*puVar4)(param_5,puVar4[1]);
        puVar3 = (undefined1 *)register0x00000008;
        uVar12 = uVar5;
        uVar5 = unaff_x19;
        uVar14 = unaff_x21;
        puVar18 = unaff_x29;
      }
      *(undefined8 *)(puVar3 + -0x70) = unaff_d11;
      *(undefined8 *)(puVar3 + -0x68) = unaff_d10;
      *(undefined8 *)(puVar3 + -0x60) = unaff_d9;
      *(undefined8 *)(puVar3 + -0x58) = unaff_d8;
      *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x28) = uVar14;
      *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
      *(ulong *)(puVar3 + -0x18) = uVar5;
      *(undefined1 **)(puVar3 + -0x10) = puVar18;
      *(undefined **)(puVar3 + -8) = unaff_x30;
      uVar5 = uVar12;
      if ((bRam0000000003eb4bbd & 1) == 0) {
        uVar5 = func_0x00f78a20(0x3d23990);
        bRam0000000003eb4bbd = 1;
      }
      if (*(char *)(uVar12 + 0x5c) != '\0') {
        lVar9 = *(long *)(uVar12 + 0x38);
        if (lVar9 == 0) {
code_r0x014dad60:
          uVar5 = func_0x00f78af4();
          fVar19 = *(float *)(uVar5 + 0x1c) + extraout_s0_00;
          *(float *)(uVar5 + 0x1c) = fVar19;
          if (*(float *)(uVar5 + 0x18) <= fVar19) {
            *(float *)(uVar5 + 0x1c) = fVar19 - *(float *)(uVar5 + 0x18);
          }
          return uVar5;
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar15 = 0;
          do {
            if (uVar1 <= uVar15) {
code_r0x014dad54:
              uVar14 = func_0x00f78b24();
              func_0x00f78ac0(uVar14,0);
              goto code_r0x014dad60;
            }
            lVar10 = *(long *)(lVar9 + (long)(int)uVar15 * 8 + 0x20);
            if (lVar10 == 0) goto code_r0x014dad60;
            fVar22 = *(float *)(lVar10 + 0x1c) + fVar19;
            *(float *)(lVar10 + 0x1c) = fVar22;
            if (*(float *)(lVar10 + 0x18) <= fVar22) {
              fVar22 = fVar22 - *(float *)(lVar10 + 0x18);
              *(float *)(lVar10 + 0x1c) = fVar22;
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto code_r0x014dad60;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (0 < (int)uVar1) {
              uVar16 = 0;
              do {
                if (uVar1 <= uVar16) goto code_r0x014dad54;
                lVar17 = *(long *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
                if (lVar17 == 0) goto code_r0x014dad60;
                fVar23 = *(float *)(lVar17 + 0x18);
                uVar14 = *(undefined8 *)(lVar17 + 0x10);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                fVar23 = fVar22 - fVar23;
                uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
                if ((int)uVar5 != 0) {
                  *(bool *)(*(long *)(uVar12 + 0x80) + (long)*(int *)(lVar17 + 0x1c)) =
                       fVar23 <= 0.0 && 0.0 < fVar22;
                }
                uVar16 = uVar16 + 1;
                uVar1 = *(uint *)(lVar10 + 0x18);
                fVar22 = fVar23;
              } while ((int)uVar16 < (int)uVar1);
            }
            uVar15 = uVar15 + 1;
            uVar1 = *(uint *)(lVar9 + 0x18);
          } while ((int)uVar15 < (int)uVar1);
        }
      }
      return uVar5;
    }
  }
  uVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__Update;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(char *)(uVar5 + 0x50) == '\0') {
    lVar9 = *(long *)(uVar5 + 0x30);
    puStack_40 = &stack0xfffffffffffffff0;
    if (lVar9 != 0) {
      lVar10 = 0;
      uVar12 = 0;
      do {
        uVar21 = (undefined4)param_2;
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar12) goto code_r0x015989d0;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) {
code_r0x01598a0c:
          uVar14 = func_0x00f78b24();
          auVar24 = func_0x00f78ac0(uVar14,0);
          plVar6 = auVar24._8_8_;
          lVar17 = auVar24._0_8_;
          puStack_98 = &Atlas_Contexts_GameContextBase__UpdateFrameTiming;
          lStack_c0 = lVar9;
          lStack_b8 = lVar10;
          uStack_b0 = uVar12;
          uStack_a8 = uVar5;
          ppuStack_a0 = &puStack_40;
          if ((bRam0000000003eb51ba & 1) == 0) {
            func_0x00f78a20(0x3d57088);
            func_0x00f78a20(0x3d22618);
            bRam0000000003eb51ba = 1;
          }
          uVar5 = /*Atlas.Contexts.GameContextBase$$IsActiveState<object>*/ func_0x0185c060(lVar17,uRam0000000003d57088);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if (plVar6 != (long *)0x0) {
            lVar9 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar5 == 0) goto code_r0x01598ab0;
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto code_r0x01598a98;
          }
          auVar25 = func_0x00f78af4();
          uVar14 = auVar25._8_8_;
          lVar9 = auVar25._0_8_;
          puStack_c8 = &Atlas_Contexts_GameContextBase__OnPreLateUpdate;
          lStack_d8 = lVar17;
          pppuStack_d0 = &ppuStack_a0;
          if (*(long *)(lVar9 + 0x138) != 0) {
            plStack_e0 = plVar6;
            Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate(*(long *)(lVar9 + 0x138),uVar14,0);
            auVar24._8_8_ = plStack_e0;
            auVar24._0_8_ = uVar14;
            uVar5 = *(ulong *)(lVar9 + 0x130);
            if (uVar5 != 0) {
              ppppuStack_f0 = (undefined1 ****)0x3d57088;
              puStack_e8 = (undefined *)0x3eb5000;
              uVar12 = uVar5;
              if ((bRam0000000003eb534d & 1) == 0) {
                func_0x00f78a20(0x3d57f90,uVar14,0);
                func_0x00f78a20(0x3d3ae30);
                func_0x00f78a20(0x3d3ae38);
                uVar12 = func_0x00f78a20(0x3d23990);
                bRam0000000003eb534d = 1;
              }
              if (*(int *)(uVar5 + 0xa0) < 1) {
                return uVar12;
              }
              if (*(long *)(uVar5 + 0x40) == 0) goto LAB_015cf5d8;
              lVar9 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(uVar5 + 0x40),0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
              if ((uVar12 & 1) != 0) {
                return uVar12;
              }
              if ((lVar9 == 0) || (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0), lVar9 == 0)) goto LAB_015cf5d8;
              /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar9,0);
              uStack_120 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
              uStack_108 = *(undefined8 *)(uVar5 + 0x80);
              uStack_110 = *(undefined8 *)(uVar5 + 0x78);
              lStack_100 = *(undefined8 *)(uVar5 + 0x98);
              uStack_f8 = *(undefined8 *)(uVar5 + 0xa0);
              uStack_114 = 0;
              uStack_11c = uVar21;
              uStack_118 = param_3;
              uVar12 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_120,uRam0000000003d57f90);
              lVar9 = *(long *)(uVar5 + 0x10);
              if (lVar9 == 0) goto LAB_015cf5d8;
              lVar10 = 0;
              goto code_r0x015cf594;
            }
          }
          plStack_e0 = auVar24._8_8_;
          auVar25 = func_0x00f78af4();
          plVar6 = auVar25._8_8_;
          lVar10 = auVar25._0_8_;
          uStack_110 = 0x3d57088;
          uStack_108 = 0x3eb5000;
          puStack_e8 = &Atlas_Contexts_GameContextBase__OnLateUpdate;
          lStack_100 = lVar9;
          uStack_f8 = auVar24._0_8_;
          ppppuStack_f0 = &pppuStack_d0;
          if ((bRam0000000003eb51a0 & 1) == 0) {
            func_0x00f78a20(0x3d21b08);
            func_0x00f78a20(0x3d22618);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb51a0 = 1;
          }
          if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x18);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar14,0);
          if (*(long *)(lVar10 + 400) == 0) {
            func_0x00f78af4();
          }
          else {
            /*NetworkCarUpdater$$LateUpdate*/ func_0x0149fc44(*(long *)(lVar10 + 400),plVar6,0);
            if (*(long *)(lVar10 + 0x1a0) == 0) {
              func_0x00f78af4();
            }
            else {
              /*Atlas.Networking.NetworkMigrationUpdater$$LateUpdate*/ func_0x014ad028(*(long *)(lVar10 + 0x1a0),0);
              uVar8 = *(undefined8 *)(lVar10 + 0x1d8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
              if ((uVar5 & 1) != 0) {
                if (*(long *)(lVar10 + 0x1d8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01598d2c;
                }
                if (*(long *)(lVar10 + 0x1f8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01598d2c;
                }
                _memmove(*(long *)(lVar10 + 0x1f8) + 0x5c,*(long *)(lVar10 + 0x1d8) + 0xf8,0x44);
              }
              if (*(long *)(lVar10 + 0x1f8) == 0) {
                func_0x00f78af4();
              }
              else {
                /*Atlas.Lighting.LightWorld$$Update*/ func_0x014850cc(*(long *)(lVar10 + 0x1f8),0);
                lVar9 = *(long *)(lVar10 + 0x230);
                if (lVar9 == 0) goto code_r0x01598ce8;
                if (plVar6 != (long *)0x0) {
                  lVar10 = *plVar6;
                  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar5 == 0) goto code_r0x01598cb4;
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  goto code_r0x01598c9c;
                }
                func_0x00f78af4();
              }
            }
          }
code_r0x01598d2c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1598d30);
          (*pcVar2)();
        }
        plVar6 = *(long **)(uVar5 + 0x18);
        if (plVar6 == (long *)0x0) break;
        uVar20 = (**(code **)(*plVar6 + 0x2b8))
                           (plVar6,*(undefined8 *)(lVar9 + lVar10 + 0x20),&uStack_88,
                            *(undefined8 *)(*plVar6 + 0x2c0));
        uVar21 = (undefined4)param_2;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto code_r0x01598a0c;
        *(undefined4 *)(lVar9 + lVar10 + 0x28) = uVar20;
        lVar17 = *(long *)(uVar5 + 0x30);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar12) goto code_r0x01598a0c;
        lVar17 = lVar17 + lVar10;
        lVar10 = lVar10 + 0x28;
        uVar12 = uVar12 + 1;
        *(undefined8 *)(lVar17 + 0x40) = uStack_78;
        *(undefined8 *)(lVar17 + 0x38) = uStack_80;
        *(undefined8 *)(lVar17 + 0x30) = uStack_88;
        lVar9 = *(long *)(uVar5 + 0x30);
      } while (lVar9 != 0);
    }
    func_0x00f78af4();
code_r0x015989d0:
    /*Atlas.Gameplay.Player.GameContextPlayerManager$$SortPlayers*/ func_0x015a634c(uVar5);
    if (*(long *)(uVar5 + 0x58) != 0) {
      /*Atlas.Audio.AtlasAudioManager$$UpdateRanking*/ func_0x01459790(*(long *)(uVar5 + 0x58),*(undefined8 *)(uVar5 + 0x28),0);
    }
    uVar5 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$UpdatePlayerTypeArrays*/ func_0x015a6494(uVar5);
  }
  return uVar5;
  while( true ) {
    *(undefined4 *)(lVar9 + 0xf4) = *(undefined4 *)(*(long *)(uVar5 + 0x98) + lVar10 * 4);
    lVar9 = *(long *)(uVar5 + 0x10);
    lVar10 = lVar10 + 1;
    if (lVar9 == 0) break;
code_r0x015cf594:
    if ((int)*(uint *)(lVar9 + 0x18) <= (int)(uint)lVar10) {
      return uVar12;
    }
    if (*(uint *)(lVar9 + 0x18) <= (uint)lVar10) {
      uVar12 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar10 * 8 + 0x20);
    if (lVar9 == 0) break;
  }
LAB_015cf5d8:
  uVar14 = func_0x00f78af4();
  if ((bRam0000000003eb5341 & 1) == 0) {
    func_0x00f78a20(0x3d27d08);
    bRam0000000003eb5341 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
  uVar8 = 0;
  Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39___ctor(uVar5,0);
  if (uVar5 != 0) {
    *(undefined8 *)(uVar5 + 0x20) = uVar14;
    return uVar5;
  }
  auVar24 = func_0x00f78af4();
  plVar6 = auVar24._8_8_;
  lVar9 = auVar24._0_8_;
  puVar4 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  lStack_1a0 = 0;
  if (*(long *)(lVar9 + 0x18) == 0) goto LAB_015cf85c;
  Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
            (*(long *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x10),plVar6,uVar8,
             *(undefined8 *)(lVar9 + 0x20));
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_015cf85c;
  plVar6 = (long *)0x3d1feb0;
  puVar4 = (undefined8 *)0x3d328c8;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1c8,*(long *)(lVar9 + 0x10),uRam0000000003d3ae20);
  uStack_1a8 = uStack_1c0;
  uStack_1b0 = uStack_1c8;
  lStack_1a0 = lStack_1b8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1b0,uRam0000000003d328d0), lVar10 = lStack_1a0,
        (uVar5 & 1) != 0) {
    if (*(long *)(lVar9 + 0x28) == 0) {
      func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15cf85c);
      (*pcVar2)();
    }
    /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar9 + 0x28),lStack_1a0,uRam0000000003d43370);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    if (*(long *)(lVar10 + 0x18) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar10 + 0x18),0);
    if (lVar17 == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0);
    if (*(long *)(lVar10 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    if (*(int *)(*(long *)(lVar10 + 0x20) + 0x10) == 2) {
      *(long *)(lVar9 + 0x48) = lVar10;
    }
    if (*(long *)(lVar9 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar9 + 0x38),lVar10,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1b0,uRam0000000003d328c8);
  do {
    Atlas_Gameplay_Kart_KartManager__InitKartSideOnTimeRelationships(lVar9);
    if (((*(ushort *)(*plVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar6 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Gameplay_Kart_KartManager__ApplyVFXSettings(lVar9);
    uVar5 = Atlas_Gameplay_Kart_KartManager__ApplyOutlineSettings(lVar9);
    if (*(long *)(lVar9 + 0x10) != 0) {
      *(undefined4 *)(lVar9 + 0x11c) = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x18);
      return uVar5;
    }
LAB_015cf85c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015cf8b4;
    plVar7 = (long *)___cxa_begin_catch();
    lVar10 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1b0,*puVar4);
  } while (lVar10 == 0);
  func_0x00f78ac0(lVar10,0);
code_r0x015cf8b4:
  lVar9 = __Unwind_Resume();
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(lVar9 + 0x10) != 0) {
    uVar5 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x18));
    *(ulong *)(lVar9 + 0x70) = uVar5;
    if (*(long *)(lVar9 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(lVar9 + 0x10) + 0x18)) {
        uVar12 = 0;
        do {
          plVar6 = *(long **)(lVar9 + 0x70);
          lVar10 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar6 == (long *)0x0) goto LAB_015cfa18;
          uVar5 = 0;
          if ((lVar10 != 0) &&
             (uVar5 = func_0x00f78adc(lVar10,*(undefined8 *)(*plVar6 + 0x40)), uVar5 == 0))
          goto LAB_015cfa28;
          if (*(uint *)(plVar6 + 3) <= uVar12) goto LAB_015cfa1c;
          plVar6[uVar12 + 4] = lVar10;
          lVar10 = *(long *)(lVar9 + 0x10);
          if (lVar10 == 0) goto LAB_015cfa18;
          lVar17 = 0;
          uVar11 = 0;
          while ((long)uVar11 < (long)*(int *)(lVar10 + 0x18)) {
            lVar10 = *(long *)(lVar9 + 0x70);
            if (lVar10 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_015cfa1c;
            lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_015cfa1c;
            lVar10 = lVar10 + lVar17;
            lVar17 = lVar17 + 0xc;
            uVar11 = uVar11 + 1;
            *(undefined8 *)(lVar10 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar10 + 0x28) = 0;
            lVar10 = *(long *)(lVar9 + 0x10);
            if (lVar10 == 0) goto LAB_015cfa18;
          }
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)*(int *)(lVar10 + 0x18));
      }
      return uVar5;
    }
  }
LAB_015cfa18:
  func_0x00f78af4();
LAB_015cfa1c:
  uVar14 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar14,0);
LAB_015cfa28:
    uVar14 = func_0x00f78b14();
  } while( true );
  while( true ) {
    piVar13 = piVar13 + 4;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
code_r0x01598a98:
    if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
      goto code_r0x01598ad0;
    }
  }
code_r0x01598ab0:
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,1);
code_r0x01598ad0:
  uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
  fVar19 = extraout_s0_01;
  if (_UNK_033f8144 < extraout_s0_01) {
    fVar19 = _UNK_033f8144;
  }
  *(double *)(lVar17 + 0x220) = *(double *)(lVar17 + 0x220) + (double)fVar19;
  *(int *)(lVar17 + 0x228) = *(int *)(lVar17 + 0x228) + 1;
  return uVar5;
  while( true ) {
    piVar13 = piVar13 + 4;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
code_r0x01598c9c:
    if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto code_r0x01598cd0;
    }
  }
code_r0x01598cb4:
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x01598cd0:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  /*Atlas.Arcade.ArcadeEvent$$LateUpdate*/ func_0x0144d2a4(lVar9,0);
code_r0x01598ce8:
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ec05a0)(uVar14);
  return uVar5;
}



// ============================================================
// RVA: 0x1598a18 | Atlas.Contexts.GameContextBase.UpdateFrameTiming
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__UpdateFrameTiming
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                long *param_5)

{
  float fVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int extraout_w1;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  float extraout_s0;
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51ba & 1) == 0) {
    func_0x00f78a20(0x3d57088);
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb51ba = 1;
  }
  uVar3 = /*Atlas.Contexts.GameContextBase$$IsActiveState<object>*/ func_0x0185c060(param_4,uRam0000000003d57088);
  if ((int)uVar3 != 0) {
    if (param_5 == (long *)0x0) {
      auVar15 = func_0x00f78af4();
      lVar13 = auVar15._8_8_;
      lVar10 = auVar15._0_8_;
      puStack_38 = &Atlas_Contexts_GameContextBase__OnPreLateUpdate;
      plStack_50 = param_5;
      lStack_48 = param_4;
      puStack_40 = &stack0xfffffffffffffff0;
      if (*(long *)(lVar10 + 0x138) != 0) {
        Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate(*(long *)(lVar10 + 0x138),lVar13,0);
        uVar3 = *(ulong *)(lVar10 + 0x130);
        param_4 = lVar13;
        if (uVar3 != 0) {
          ppuStack_60 = (undefined1 **)0x3d57088;
          puStack_58 = (undefined *)0x3eb5000;
          uVar5 = uVar3;
          if ((bRam0000000003eb534d & 1) == 0) {
            func_0x00f78a20(0x3d57f90,lVar13,0);
            func_0x00f78a20(0x3d3ae30);
            func_0x00f78a20(0x3d3ae38);
            uVar5 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb534d = 1;
          }
          if (*(int *)(uVar3 + 0xa0) < 1) {
            return uVar5;
          }
          if (*(long *)(uVar3 + 0x40) != 0) {
            lVar10 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(uVar3 + 0x40),0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0,0);
            if ((uVar5 & 1) != 0) {
              return uVar5;
            }
            if ((lVar10 != 0) && (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0), lVar10 != 0)) {
              /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar10,0);
              uStack_90 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
              uStack_78 = *(undefined8 *)(uVar3 + 0x80);
              uStack_80 = *(undefined8 *)(uVar3 + 0x78);
              lStack_70 = *(undefined8 *)(uVar3 + 0x98);
              lStack_68 = *(undefined8 *)(uVar3 + 0xa0);
              uStack_84 = 0;
              uStack_8c = param_2;
              uStack_88 = param_3;
              uVar5 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_90,uRam0000000003d57f90);
              lVar10 = *(long *)(uVar3 + 0x10);
              if (lVar10 != 0) {
                lVar13 = 0;
                do {
                  if ((int)*(uint *)(lVar10 + 0x18) <= (int)(uint)lVar13) {
                    return uVar5;
                  }
                  if (*(uint *)(lVar10 + 0x18) <= (uint)lVar13) {
                    uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + lVar13 * 8 + 0x20);
                  if (lVar10 == 0) break;
                  *(undefined4 *)(lVar10 + 0xf4) =
                       *(undefined4 *)(*(long *)(uVar3 + 0x98) + lVar13 * 4);
                  lVar10 = *(long *)(uVar3 + 0x10);
                  lVar13 = lVar13 + 1;
                } while (lVar10 != 0);
              }
            }
          }
          uVar6 = func_0x00f78af4();
          if ((bRam0000000003eb5341 & 1) == 0) {
            func_0x00f78a20(0x3d27d08);
            bRam0000000003eb5341 = 1;
          }
          uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
          uVar9 = 0;
          Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39___ctor(uVar3,0);
          if (uVar3 != 0) {
            *(undefined8 *)(uVar3 + 0x20) = uVar6;
            return uVar3;
          }
          auVar15 = func_0x00f78af4();
          plVar14 = auVar15._8_8_;
          lVar10 = auVar15._0_8_;
          puVar4 = (undefined8 *)0x3eb5000;
          if ((bRam0000000003eb5342 & 1) == 0) {
            func_0x00f78a20(0x3d43370);
            func_0x00f78a20(0x3d1feb0);
            func_0x00f78a20(0x3d328c8);
            func_0x00f78a20(0x3d328d0);
            func_0x00f78a20(0x3d328d8);
            func_0x00f78a20(0x3d3ae20);
            func_0x00f78a20(0x3d3ae30);
            bRam0000000003eb5342 = 1;
          }
          uStack_120 = 0;
          uStack_118 = 0;
          lStack_110 = 0;
          if (*(long *)(lVar10 + 0x18) == 0) goto LAB_015cf85c;
          Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
                    (*(long *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x10),plVar14,uVar9,
                     *(undefined8 *)(lVar10 + 0x20));
          if (*(long *)(lVar10 + 0x10) == 0) goto LAB_015cf85c;
          plVar14 = (long *)0x3d1feb0;
          puVar4 = (undefined8 *)0x3d328c8;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_138,*(long *)(lVar10 + 0x10),uRam0000000003d3ae20);
          uStack_118 = uStack_130;
          uStack_120 = uStack_138;
          lStack_110 = lStack_128;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_120,uRam0000000003d328d0), lVar13 = lStack_110,
                (uVar3 & 1) != 0) {
            if (*(long *)(lVar10 + 0x28) == 0) {
              func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x15cf85c);
              (*pcVar2)();
            }
            /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar10 + 0x28),lStack_110,uRam0000000003d43370);
            if (lVar13 == 0) {
              func_0x00f78af4();
              goto code_r0x015cf858;
            }
            if (*(long *)(lVar13 + 0x18) == 0) {
              func_0x00f78af4();
              goto code_r0x015cf858;
            }
            lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar13 + 0x18),0);
            if (lVar7 == 0) {
              func_0x00f78af4();
              goto code_r0x015cf858;
            }
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
            if (*(long *)(lVar13 + 0x20) == 0) {
              func_0x00f78af4();
              goto code_r0x015cf858;
            }
            if (*(int *)(*(long *)(lVar13 + 0x20) + 0x10) == 2) {
              *(long *)(lVar10 + 0x48) = lVar13;
            }
            if (*(long *)(lVar10 + 0x38) == 0) {
              func_0x00f78af4();
              goto code_r0x015cf858;
            }
            /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar10 + 0x38),lVar13,0);
          }
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_120,uRam0000000003d328c8);
          do {
            Atlas_Gameplay_Kart_KartManager__InitKartSideOnTimeRelationships(lVar10);
            if (((*(ushort *)(*plVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar14 + 0xe0) == 0)
               ) {
              func_0x00f78ad0();
            }
            Atlas_Gameplay_Kart_KartManager__ApplyVFXSettings(lVar10);
            uVar3 = Atlas_Gameplay_Kart_KartManager__ApplyOutlineSettings(lVar10);
            if (*(long *)(lVar10 + 0x10) != 0) {
              *(undefined4 *)(lVar10 + 0x11c) = *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x18);
              return uVar3;
            }
LAB_015cf85c:
            func_0x00f78af4();
            if (extraout_w1 != 1) goto code_r0x015cf8b4;
            plVar8 = (long *)___cxa_begin_catch();
            lVar13 = *plVar8;
            ___cxa_end_catch();
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_120,*puVar4);
          } while (lVar13 == 0);
          func_0x00f78ac0(lVar13,0);
code_r0x015cf8b4:
          lVar10 = __Unwind_Resume();
          if ((bRam0000000003eb534b & 1) == 0) {
            func_0x00f78a20(0x3d3ae30);
            func_0x00f78a20(0x3d1ecd8);
            func_0x00f78a20(0x3d1f828);
            bRam0000000003eb534b = 1;
          }
          if (*(long *)(lVar10 + 0x10) != 0) {
            uVar3 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,
                                    *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x18));
            *(ulong *)(lVar10 + 0x70) = uVar3;
            if (*(long *)(lVar10 + 0x10) != 0) {
              if (0 < *(int *)(*(long *)(lVar10 + 0x10) + 0x18)) {
                uVar5 = 0;
                do {
                  plVar14 = *(long **)(lVar10 + 0x70);
                  lVar13 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
                  if (plVar14 == (long *)0x0) goto LAB_015cfa18;
                  uVar3 = 0;
                  if ((lVar13 != 0) &&
                     (uVar3 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar14 + 0x40)), uVar3 == 0))
                  goto LAB_015cfa28;
                  if (*(uint *)(plVar14 + 3) <= uVar5) goto LAB_015cfa1c;
                  plVar14[uVar5 + 4] = lVar13;
                  lVar13 = *(long *)(lVar10 + 0x10);
                  if (lVar13 == 0) goto LAB_015cfa18;
                  lVar7 = 0;
                  uVar11 = 0;
                  while ((long)uVar11 < (long)*(int *)(lVar13 + 0x18)) {
                    lVar13 = *(long *)(lVar10 + 0x70);
                    if (lVar13 == 0) goto LAB_015cfa18;
                    if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_015cfa1c;
                    lVar13 = *(long *)(lVar13 + uVar5 * 8 + 0x20);
                    if (lVar13 == 0) goto LAB_015cfa18;
                    if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_015cfa1c;
                    lVar13 = lVar13 + lVar7;
                    lVar7 = lVar7 + 0xc;
                    uVar11 = uVar11 + 1;
                    *(undefined8 *)(lVar13 + 0x20) = 0x200000000;
                    *(undefined4 *)(lVar13 + 0x28) = 0;
                    lVar13 = *(long *)(lVar10 + 0x10);
                    if (lVar13 == 0) goto LAB_015cfa18;
                  }
                  uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)*(int *)(lVar13 + 0x18));
              }
              return uVar3;
            }
          }
LAB_015cfa18:
          func_0x00f78af4();
LAB_015cfa1c:
          uVar6 = func_0x00f78b24();
          do {
            func_0x00f78ac0(uVar6,0);
LAB_015cfa28:
            uVar6 = func_0x00f78b14();
          } while( true );
        }
      }
      auVar15 = func_0x00f78af4();
      plVar14 = auVar15._8_8_;
      lVar13 = auVar15._0_8_;
      uStack_80 = 0x3d57088;
      uStack_78 = 0x3eb5000;
      puStack_58 = &Atlas_Contexts_GameContextBase__OnLateUpdate;
      lStack_70 = lVar10;
      lStack_68 = param_4;
      ppuStack_60 = &puStack_40;
      if ((bRam0000000003eb51a0 & 1) == 0) {
        func_0x00f78a20(0x3d21b08);
        func_0x00f78a20(0x3d22618);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb51a0 = 1;
      }
      if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x18);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
      if (*(long *)(lVar13 + 400) == 0) {
        func_0x00f78af4();
      }
      else {
        /*NetworkCarUpdater$$LateUpdate*/ func_0x0149fc44(*(long *)(lVar13 + 400),plVar14,0);
        if (*(long *)(lVar13 + 0x1a0) == 0) {
          func_0x00f78af4();
        }
        else {
          /*Atlas.Networking.NetworkMigrationUpdater$$LateUpdate*/ func_0x014ad028(*(long *)(lVar13 + 0x1a0),0);
          uVar9 = *(undefined8 *)(lVar13 + 0x1d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(lVar13 + 0x1d8) == 0) {
              func_0x00f78af4();
              goto code_r0x01598d2c;
            }
            if (*(long *)(lVar13 + 0x1f8) == 0) {
              func_0x00f78af4();
              goto code_r0x01598d2c;
            }
            _memmove(*(long *)(lVar13 + 0x1f8) + 0x5c,*(long *)(lVar13 + 0x1d8) + 0xf8,0x44);
          }
          if (*(long *)(lVar13 + 0x1f8) != 0) {
            /*Atlas.Lighting.LightWorld$$Update*/ func_0x014850cc(*(long *)(lVar13 + 0x1f8),0);
            lVar10 = *(long *)(lVar13 + 0x230);
            if (lVar10 != 0) {
              if (plVar14 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x01598d2c;
              }
              lVar13 = *plVar14;
              uVar3 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar3 != 0) {
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                    puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                    goto code_r0x01598cd0;
                  }
                  piVar12 = piVar12 + 4;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar14,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x01598cd0:
              (*(code *)*puVar4)(plVar14,puVar4[1]);
              /*Atlas.Arcade.ArcadeEvent$$LateUpdate*/ func_0x0144d2a4(lVar10,0);
            }
            if (pcRam0000000003ec05a0 == (code *)0x0) {
              pcRam0000000003ec05a0 =
                   (code *)func_0x00f789d4(
                                          "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*pcRam0000000003ec05a0)(uVar6);
            return uVar3;
          }
          func_0x00f78af4();
        }
      }
code_r0x01598d2c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1598d30);
      (*pcVar2)();
    }
    lVar10 = *param_5;
    uVar3 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_01598ad0;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,1);
LAB_01598ad0:
    uVar3 = (*(code *)*puVar4)(param_5,puVar4[1]);
    fVar1 = extraout_s0;
    if (_UNK_033f8144 < extraout_s0) {
      fVar1 = _UNK_033f8144;
    }
    *(double *)(param_4 + 0x220) = *(double *)(param_4 + 0x220) + (double)fVar1;
    *(int *)(param_4 + 0x228) = *(int *)(param_4 + 0x228) + 1;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1598b18 | Atlas.Contexts.GameContextBase.OnPreLateUpdate
// ============================================================

ulong Atlas_Contexts_GameContextBase__OnPreLateUpdate
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int extraout_w1;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (*(long *)(param_4 + 0x138) != 0) {
    Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate(*(long *)(param_4 + 0x138),param_5,0);
    uVar2 = *(ulong *)(param_4 + 0x130);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      if ((bRam0000000003eb534d & 1) == 0) {
        func_0x00f78a20(0x3d57f90,param_5,0);
        func_0x00f78a20(0x3d3ae30);
        func_0x00f78a20(0x3d3ae38);
        uVar3 = func_0x00f78a20(0x3d23990);
        bRam0000000003eb534d = 1;
      }
      if (*(int *)(uVar2 + 0xa0) < 1) {
        return uVar3;
      }
      if (*(long *)(uVar2 + 0x40) != 0) {
        lVar4 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(uVar2 + 0x40),0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,0,0);
        if ((uVar3 & 1) != 0) {
          return uVar3;
        }
        if ((lVar4 != 0) && (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0), lVar4 != 0)) {
          /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar4,0);
          uStack_60 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          uStack_54 = 0;
          uStack_5c = param_2;
          uStack_58 = param_3;
          uVar3 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_60,uRam0000000003d57f90);
          lVar4 = *(long *)(uVar2 + 0x10);
          if (lVar4 != 0) {
            lVar11 = 0;
            do {
              if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar11) {
                return uVar3;
              }
              if (*(uint *)(lVar4 + 0x18) <= (uint)lVar11) {
                uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar11 * 8 + 0x20);
              if (lVar4 == 0) break;
              *(undefined4 *)(lVar4 + 0xf4) = *(undefined4 *)(*(long *)(uVar2 + 0x98) + lVar11 * 4);
              lVar4 = *(long *)(uVar2 + 0x10);
              lVar11 = lVar11 + 1;
            } while (lVar4 != 0);
          }
        }
      }
      uVar5 = func_0x00f78af4();
      if ((bRam0000000003eb5341 & 1) == 0) {
        func_0x00f78a20(0x3d27d08);
        bRam0000000003eb5341 = 1;
      }
      uVar2 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
      uVar8 = 0;
      Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39___ctor(uVar2,0);
      if (uVar2 != 0) {
        *(undefined8 *)(uVar2 + 0x20) = uVar5;
        return uVar2;
      }
      auVar14 = func_0x00f78af4();
      plVar13 = auVar14._8_8_;
      lVar4 = auVar14._0_8_;
      puVar12 = (undefined8 *)0x3eb5000;
      if ((bRam0000000003eb5342 & 1) == 0) {
        func_0x00f78a20(0x3d43370);
        func_0x00f78a20(0x3d1feb0);
        func_0x00f78a20(0x3d328c8);
        func_0x00f78a20(0x3d328d0);
        func_0x00f78a20(0x3d328d8);
        func_0x00f78a20(0x3d3ae20);
        func_0x00f78a20(0x3d3ae30);
        bRam0000000003eb5342 = 1;
      }
      uStack_f0 = 0;
      uStack_e8 = 0;
      lStack_e0 = 0;
      if (*(long *)(lVar4 + 0x18) == 0) goto LAB_015cf85c;
      Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
                (*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x10),plVar13,uVar8,
                 *(undefined8 *)(lVar4 + 0x20));
      if (*(long *)(lVar4 + 0x10) == 0) goto LAB_015cf85c;
      plVar13 = (long *)0x3d1feb0;
      puVar12 = (undefined8 *)0x3d328c8;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,*(long *)(lVar4 + 0x10),uRam0000000003d3ae20);
      uStack_e8 = uStack_100;
      uStack_f0 = uStack_108;
      lStack_e0 = lStack_f8;
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d328d0), lVar11 = lStack_e0,
            (uVar2 & 1) != 0) {
        if (*(long *)(lVar4 + 0x28) == 0) {
          func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15cf85c);
          (*pcVar1)();
        }
        /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar4 + 0x28),lStack_e0,uRam0000000003d43370);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(long *)(lVar11 + 0x18) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar11 + 0x18),0);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0);
        if (*(long *)(lVar11 + 0x20) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(int *)(*(long *)(lVar11 + 0x20) + 0x10) == 2) {
          *(long *)(lVar4 + 0x48) = lVar11;
        }
        if (*(long *)(lVar4 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar4 + 0x38),lVar11,0);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d328c8);
      do {
        Atlas_Gameplay_Kart_KartManager__InitKartSideOnTimeRelationships(lVar4);
        if (((*(ushort *)(*plVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar13 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Gameplay_Kart_KartManager__ApplyVFXSettings(lVar4);
        uVar2 = Atlas_Gameplay_Kart_KartManager__ApplyOutlineSettings(lVar4);
        if (*(long *)(lVar4 + 0x10) != 0) {
          *(undefined4 *)(lVar4 + 0x11c) = *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18);
          return uVar2;
        }
LAB_015cf85c:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x015cf8b4;
        plVar7 = (long *)___cxa_begin_catch();
        lVar11 = *plVar7;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,*puVar12);
      } while (lVar11 == 0);
      func_0x00f78ac0(lVar11,0);
code_r0x015cf8b4:
      lVar4 = __Unwind_Resume();
      if ((bRam0000000003eb534b & 1) == 0) {
        func_0x00f78a20(0x3d3ae30);
        func_0x00f78a20(0x3d1ecd8);
        func_0x00f78a20(0x3d1f828);
        bRam0000000003eb534b = 1;
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        uVar2 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18)
                               );
        *(ulong *)(lVar4 + 0x70) = uVar2;
        if (*(long *)(lVar4 + 0x10) != 0) {
          if (0 < *(int *)(*(long *)(lVar4 + 0x10) + 0x18)) {
            uVar3 = 0;
            do {
              plVar13 = *(long **)(lVar4 + 0x70);
              lVar11 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
              if (plVar13 == (long *)0x0) goto LAB_015cfa18;
              uVar2 = 0;
              if ((lVar11 != 0) &&
                 (uVar2 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar13 + 0x40)), uVar2 == 0))
              goto LAB_015cfa28;
              if (*(uint *)(plVar13 + 3) <= uVar3) goto LAB_015cfa1c;
              plVar13[uVar3 + 4] = lVar11;
              lVar11 = *(long *)(lVar4 + 0x10);
              if (lVar11 == 0) goto LAB_015cfa18;
              lVar6 = 0;
              uVar9 = 0;
              while ((long)uVar9 < (long)*(int *)(lVar11 + 0x18)) {
                lVar11 = *(long *)(lVar4 + 0x70);
                if (lVar11 == 0) goto LAB_015cfa18;
                if (*(uint *)(lVar11 + 0x18) <= uVar3) goto LAB_015cfa1c;
                lVar11 = *(long *)(lVar11 + uVar3 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_015cfa18;
                if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_015cfa1c;
                lVar11 = lVar11 + lVar6;
                lVar6 = lVar6 + 0xc;
                uVar9 = uVar9 + 1;
                *(undefined8 *)(lVar11 + 0x20) = 0x200000000;
                *(undefined4 *)(lVar11 + 0x28) = 0;
                lVar11 = *(long *)(lVar4 + 0x10);
                if (lVar11 == 0) goto LAB_015cfa18;
              }
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)*(int *)(lVar11 + 0x18));
          }
          return uVar2;
        }
      }
LAB_015cfa18:
      func_0x00f78af4();
LAB_015cfa1c:
      uVar5 = func_0x00f78b24();
      do {
        func_0x00f78ac0(uVar5,0);
LAB_015cfa28:
        uVar5 = func_0x00f78b14();
      } while( true );
    }
  }
  auVar14 = func_0x00f78af4();
  plVar13 = auVar14._8_8_;
  lVar4 = auVar14._0_8_;
  if ((bRam0000000003eb51a0 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51a0 = 1;
  }
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if (*(long *)(lVar4 + 400) == 0) {
    func_0x00f78af4();
  }
  else {
    /*NetworkCarUpdater$$LateUpdate*/ func_0x0149fc44(*(long *)(lVar4 + 400),plVar13,0);
    if (*(long *)(lVar4 + 0x1a0) == 0) {
      func_0x00f78af4();
    }
    else {
      /*Atlas.Networking.NetworkMigrationUpdater$$LateUpdate*/ func_0x014ad028(*(long *)(lVar4 + 0x1a0),0);
      uVar8 = *(undefined8 *)(lVar4 + 0x1d8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar4 + 0x1d8) == 0) {
          func_0x00f78af4();
          goto code_r0x01598d2c;
        }
        if (*(long *)(lVar4 + 0x1f8) == 0) {
          func_0x00f78af4();
          goto code_r0x01598d2c;
        }
        _memmove(*(long *)(lVar4 + 0x1f8) + 0x5c,*(long *)(lVar4 + 0x1d8) + 0xf8,0x44);
      }
      if (*(long *)(lVar4 + 0x1f8) != 0) {
        /*Atlas.Lighting.LightWorld$$Update*/ func_0x014850cc(*(long *)(lVar4 + 0x1f8),0);
        lVar4 = *(long *)(lVar4 + 0x230);
        if (lVar4 != 0) {
          if (plVar13 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x01598d2c;
          }
          lVar11 = *plVar13;
          uVar2 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar2 != 0) {
            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar12 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x01598cd0;
              }
              piVar10 = piVar10 + 4;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar13,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x01598cd0:
          (*(code *)*puVar12)(plVar13,puVar12[1]);
          /*Atlas.Arcade.ArcadeEvent$$LateUpdate*/ func_0x0144d2a4(lVar4,0);
        }
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*pcRam0000000003ec05a0)(uVar5);
        return uVar2;
      }
      func_0x00f78af4();
    }
  }
code_r0x01598d2c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1598d30);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1598b5c | Atlas.Contexts.GameContextBase.OnLateUpdate
// ============================================================

void Atlas_Contexts_GameContextBase__OnLateUpdate(long param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000003eb51a0 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51a0 = 1;
  }
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
  if (*(long *)(param_1 + 400) == 0) {
    func_0x00f78af4();
  }
  else {
    /*NetworkCarUpdater$$LateUpdate*/ func_0x0149fc44(*(long *)(param_1 + 400),param_2,0);
    if (*(long *)(param_1 + 0x1a0) == 0) {
      func_0x00f78af4();
    }
    else {
      /*Atlas.Networking.NetworkMigrationUpdater$$LateUpdate*/ func_0x014ad028(*(long *)(param_1 + 0x1a0),0);
      uVar8 = *(undefined8 *)(param_1 + 0x1d8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x1d8) == 0) {
          func_0x00f78af4();
          goto code_r0x01598d2c;
        }
        if (*(long *)(param_1 + 0x1f8) == 0) {
          func_0x00f78af4();
          goto code_r0x01598d2c;
        }
        _memmove(*(long *)(param_1 + 0x1f8) + 0x5c,*(long *)(param_1 + 0x1d8) + 0xf8,0x44);
      }
      if (*(long *)(param_1 + 0x1f8) != 0) {
        /*Atlas.Lighting.LightWorld$$Update*/ func_0x014850cc(*(long *)(param_1 + 0x1f8),0);
        lVar7 = *(long *)(param_1 + 0x230);
        if (lVar7 != 0) {
          if (param_2 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x01598d2c;
          }
          lVar4 = *param_2;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_01598cd0;
              }
              piVar5 = piVar5 + 4;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_01598cd0:
          (*(code *)*puVar3)(param_2,puVar3[1]);
          /*Atlas.Arcade.ArcadeEvent$$LateUpdate*/ func_0x0144d2a4(lVar7,0);
        }
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ec05a0)(uVar6);
        return;
      }
      func_0x00f78af4();
    }
  }
code_r0x01598d2c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1598d30);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1598d94 | Atlas.Contexts.GameContextBase.OnFixedUpdate
// ============================================================

void Atlas_Contexts_GameContextBase__OnFixedUpdate(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb51a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb51a1 = 1;
  }
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    /*Atlas.Stats.AtlasStats$$FixedUpdateGameContextKartTracking*/ func_0x0146e7b8(*(long *)(param_1 + 0x18),0);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar2);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1598e30);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1598e54 | Atlas.Contexts.GameContextBase.OnDeInit
// ============================================================

long Atlas_Contexts_GameContextBase__OnDeInit(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb51a2 & 1) == 0) {
    func_0x00f78a20(0x3d276d8);
    bRam0000000003eb51a2 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnDeInit>d__132_TypeInfo*/ uRam0000000003d276d8);
  /*Atlas.Contexts.GameContextBase.<OnDeInit>d__132$$.ctor*/ func_0x015503c8(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x130) != 0) {
    Atlas_Gameplay_Kart_KartManager__DeInit(*(long *)(lVar1 + 0x130),0);
  }
  if (*(long *)(lVar1 + 0x1f8) != 0) {
    /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar1 + 0x1f8),0);
  }
  *(undefined8 *)(lVar1 + 0x1d8) = 0;
  if (*(long *)(lVar1 + 0x150) != 0) {
    /*Atlas.Audio.AtlasAudioManager$$SetAudioMapBehaviour*/ func_0x01458758(*(long *)(lVar1 + 0x150),0,0);
  }
  if (*(long *)(lVar1 + 0x208) != 0) {
    /*Atlas.Gameplay.VfxHitVolumeManager$$DeInit*/ func_0x01527f1c(*(long *)(lVar1 + 0x208),0);
  }
  *(undefined8 *)(lVar1 + 0x208) = 0;
  lVar2 = 0;
  if (*(long *)(lVar1 + 0x1d0) != 0) {
    lVar2 = /*Atlas.Maps.MapBehaviour$$DeInit*/ func_0x0148d2ec(*(long *)(lVar1 + 0x1d0),0);
  }
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  *(undefined8 *)(lVar1 + 0x1e0) = 0;
  return lVar2;
}



// ============================================================
// RVA: 0x1598ec8 | Atlas.Contexts.GameContextBase.DeInitEditor
// ============================================================

void Atlas_Contexts_GameContextBase__DeInitEditor(long param_1)

{
  if (*(long *)(param_1 + 0x130) != 0) {
    Atlas_Gameplay_Kart_KartManager__DeInit(*(long *)(param_1 + 0x130),0);
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(param_1 + 0x1f8),0);
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (*(long *)(param_1 + 0x150) != 0) {
    /*Atlas.Audio.AtlasAudioManager$$SetAudioMapBehaviour*/ func_0x01458758(*(long *)(param_1 + 0x150),0,0);
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    /*Atlas.Gameplay.VfxHitVolumeManager$$DeInit*/ func_0x01527f1c(*(long *)(param_1 + 0x208),0);
  }
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    /*Atlas.Maps.MapBehaviour$$DeInit*/ func_0x0148d2ec(*(long *)(param_1 + 0x1d0),0);
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



// ============================================================
// RVA: 0x1598f08 | Atlas.Contexts.GameContextBase.DeInitBehaviours
// ============================================================

void Atlas_Contexts_GameContextBase__DeInitBehaviours(long param_1)

{
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (*(long *)(param_1 + 0x150) != 0) {
    /*Atlas.Audio.AtlasAudioManager$$SetAudioMapBehaviour*/ func_0x01458758(*(long *)(param_1 + 0x150),0,0);
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    /*Atlas.Gameplay.VfxHitVolumeManager$$DeInit*/ func_0x01527f1c(*(long *)(param_1 + 0x208),0);
  }
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    /*Atlas.Maps.MapBehaviour$$DeInit*/ func_0x0148d2ec(*(long *)(param_1 + 0x1d0),0);
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



// ============================================================
// RVA: 0x1598f68 | Atlas.Contexts.GameContextBase.InitLightWorld
// ============================================================

/* WARNING: Possible PIC construction at 0x01599ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159a23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015998ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015995ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015997c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159992c) */
/* WARNING: Removing unreachable block (ram,0x01599930) */
/* WARNING: Removing unreachable block (ram,0x01599934) */
/* WARNING: Removing unreachable block (ram,0x0159994c) */
/* WARNING: Removing unreachable block (ram,0x01599978) */
/* WARNING: Removing unreachable block (ram,0x015997c8) */
/* WARNING: Removing unreachable block (ram,0x015997cc) */
/* WARNING: Removing unreachable block (ram,0x015997d4) */
/* WARNING: Removing unreachable block (ram,0x015997d8) */
/* WARNING: Removing unreachable block (ram,0x015995b0) */
/* WARNING: Removing unreachable block (ram,0x015995b4) */
/* WARNING: Removing unreachable block (ram,0x015995bc) */
/* WARNING: Removing unreachable block (ram,0x015995c4) */
/* WARNING: Removing unreachable block (ram,0x015995c8) */
/* WARNING: Removing unreachable block (ram,0x015995e4) */
/* WARNING: Removing unreachable block (ram,0x015998f0) */
/* WARNING: Removing unreachable block (ram,0x01599860) */
/* WARNING: Removing unreachable block (ram,0x01599864) */
/* WARNING: Removing unreachable block (ram,0x0159986c) */
/* WARNING: Removing unreachable block (ram,0x01599874) */
/* WARNING: Removing unreachable block (ram,0x01599878) */
/* WARNING: Removing unreachable block (ram,0x01599894) */
/* WARNING: Removing unreachable block (ram,0x015998c0) */
/* WARNING: Removing unreachable block (ram,0x015998d8) */
/* WARNING: Removing unreachable block (ram,0x01599af4) */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Removing unreachable block (ram,0x0159a240) */
/* WARNING: Removing unreachable block (ram,0x01599ad4) */
/* WARNING: Removing unreachable block (ram,0x0159961c) */
/* WARNING: Removing unreachable block (ram,0x01599620) */
/* WARNING: Removing unreachable block (ram,0x01599628) */
/* WARNING: Removing unreachable block (ram,0x0159962c) */
/* WARNING: Removing unreachable block (ram,0x01599648) */
/* WARNING: Removing unreachable block (ram,0x01599674) */
/* WARNING: Removing unreachable block (ram,0x01599688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__InitLightWorld(long param_1)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  int extraout_w1;
  undefined8 *extraout_x1;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint extraout_w8;
  long *plVar25;
  long lVar26;
  long extraout_x9;
  int iVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  ulong unaff_x22;
  long lVar30;
  undefined8 *puVar31;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***pppuVar32;
  undefined1 *puVar33;
  undefined *puVar34;
  uint extraout_s0;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 unaff_d8;
  undefined8 uVar40;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined8 auStack_1c0 [2];
  undefined1 **ppuStack_160;
  undefined *puStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [12];
  int iStack_124;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb51a3 & 1) == 0) {
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d22f80);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d232a0);
    func_0x00f78a20(0x3d5b080);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51a3 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  lVar9 = func_0x00f78aec(/*Atlas.Lighting.LightWorld_TypeInfo*/ uRam0000000003d22f80);
  /*Atlas.Lighting.LightWorld$$.ctor*/ func_0x01486838(lVar9,0);
  *(long *)(param_1 + 0x1f8) = lVar9;
  if (lVar9 != 0) {
    /*Atlas.Lighting.LightWorld$$Init*/ func_0x01484c5c(lVar9,*(undefined8 *)(param_1 + 200),0);
    uVar28 = *(undefined8 *)(param_1 + 0x1d8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar28,0,0);
    if (iVar7 == 0) {
LAB_015990a8:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar10 = (undefined8 *)/*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b080);
      if (puVar10 != (undefined8 *)0x0) {
        if (puVar10[3] != 0) {
          uVar11 = func_0x00f78aec(/*Atlas.Rendering.MaterialDuplicator_TypeInfo*/ uRam0000000003d232a0);
          /*Atlas.Rendering.MaterialDuplicator$$.ctor*/ func_0x01492c28(uVar11,0);
          if (uVar11 == 0) goto LAB_0159924c;
          puVar21 = (undefined8 *)((long)&MACH_HEADER.cputype + 1);
          uVar22 = 5;
          puVar23 = (undefined8 *)0x0;
          /*Atlas.Rendering.MaterialDuplicator$$Init*/ func_0x01491c08(uVar11,5);
          uVar24 = *(uint *)(puVar10 + 3);
          if (0 < (int)uVar24) {
            lVar9 = 0;
            puVar31 = puVar10 + 4;
            while ((uint)lVar9 < uVar24) {
              if ((*(long *)(param_1 + 0x1a8) == 0) || (unaff_x22 = puVar31[lVar9], unaff_x22 == 0))
              goto LAB_0159924c;
              /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(unaff_x22,uVar11,*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x28),0)
              ;
              if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_0159924c;
              puVar21 = *(undefined8 **)(unaff_x22 + 0x20);
              uVar22 = 0;
              puVar23 = (undefined8 *)0x0;
              /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x014864a4(*(long *)(param_1 + 0x1f8),unaff_x22);
              /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(uVar11,0);
              uVar24 = *(uint *)(puVar10 + 3);
              lVar9 = lVar9 + 1;
              if ((int)uVar24 <= (int)lVar9) goto LAB_015991a4;
            }
            lVar12 = func_0x00f78b24();
            lStack_78 = param_1;
            while (func_0x00f78ac0(lVar12,0), extraout_w1 == 1) {
              plVar13 = (long *)___cxa_begin_catch();
              lVar12 = *plVar13;
              ___cxa_end_catch();
              uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,*puVar10);
              lStack_78 = lVar12;
              if (lVar12 == 0) {
                return uVar14;
              }
            }
            lVar12 = __Unwind_Resume();
            puStack_68 = &Atlas_Contexts_GameContextBase__DeInitLightWorld;
            puStack_80 = puVar10;
            puStack_70 = &stack0xfffffffffffffff0;
            if (*(long *)(lVar12 + 0x1f8) != 0) {
              uVar11 = /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar12 + 0x1f8),0);
              *(undefined8 *)(lVar12 + 0x1f8) = 0;
              return uVar11;
            }
            puVar10 = (undefined8 *)func_0x00f78af4();
            puVar4 = (undefined8 *)auStack_140;
            puStack_88 = &Atlas_Contexts_GameContextBase__ExitContext;
            pppuVar32 = &ppuStack_90;
            puVar29 = (undefined8 *)0x3eb5000;
            ppuStack_90 = &puStack_70;
            if ((bRam0000000003eb51a4 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d2dc18);
              func_0x00f78a20(0x3d2dbf8);
              func_0x00f78a20(0x3d2dc20);
              func_0x00f78a20(0x3d21688);
              func_0x00f78a20(0x3d21b08);
              func_0x00f78a20(0x3d57360);
              func_0x00f78a20(0x3d57500);
              func_0x00f78a20(0x3d3b5d0);
              func_0x00f78a20(0x3d3b5d8);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb51a4 = 1;
            }
            uStack_e8 = 0;
            puStack_108 = (undefined8 *)0x0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            if ((puVar10[0x17] == 0) || (puVar10[0x38] == 0)) goto code_r0x01599b20;
            lVar12 = *(long *)(puVar10[0x17] + 0x10);
            uVar11 = *(ulong *)(puVar10[0x38] + 0x40);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            puVar29 = (undefined8 *)0x0;
            if (lVar12 == 0) goto code_r0x01599b20;
            uVar11 = 0x3d21000;
            puVar21 = &uStack_e8;
            uVar22 = uRam0000000003d57500;
            /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar12,uVar28);
            puVar29 = (undefined8 *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
            /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(puVar29,0);
            lVar12 = puVar10[0x38];
            if ((lVar12 == 0) || (puVar29 == (undefined8 *)0x0)) goto code_r0x01599b20;
            puVar29[3] = *(undefined8 *)(lVar12 + 0x10);
            puVar29[4] = *(undefined8 *)(lVar12 + 0x38);
            *(undefined4 *)(puVar29 + 2) = *(undefined4 *)(lVar12 + 0x18);
            uVar19 = *(undefined8 *)(lVar12 + 0x80);
            uVar28 = *(undefined8 *)(lVar12 + 0x78);
            uVar37 = *(undefined8 *)(lVar12 + 0x90);
            uVar36 = *(undefined8 *)(lVar12 + 0x88);
            uVar39 = *(undefined8 *)(lVar12 + 0x98);
            uVar38 = *(undefined8 *)(lVar12 + 0xb0);
            uVar40 = *(undefined8 *)(lVar12 + 0xa8);
            puVar29[0xb] = *(undefined8 *)(lVar12 + 0xa0);
            puVar29[10] = uVar39;
            puVar29[0xd] = uVar38;
            puVar29[0xc] = uVar40;
            puVar29[7] = uVar19;
            puVar29[6] = uVar28;
            puVar29[9] = uVar37;
            puVar29[8] = uVar36;
            if (puVar10[0x38] == 0) goto code_r0x01599b20;
            puVar29[5] = *(undefined8 *)(puVar10[0x38] + 200);
            puVar29[0xe] = uStack_e8;
            if ((puVar10[0x17] == 0) || (lVar12 = *(long *)(puVar10[0x17] + 0x10), lVar12 == 0))
            goto code_r0x01599b20;
            uVar14 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(lVar12,uRam0000000003d57360);
            if (puVar10[0x38] == 0) goto code_r0x01599b20;
            uVar11 = uVar14;
            if (*(int *)(puVar10[0x38] + 0x18) == 2) {
              if ((puVar10[0x18] != 0) && (lVar12 = *(long *)(puVar10[0x18] + 0x20), lVar12 != 0)) {
                iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar12,0);
                if (iVar7 != 0) goto code_r0x015994d8;
                goto code_r0x015994e8;
              }
              goto code_r0x01599b20;
            }
code_r0x015994d8:
            if (puVar10[0x1d] == 0) goto code_r0x01599b20;
            /*Atlas.Stats.DailyChallengeManager$$UpdateAllDailyChallengeProgress*/ func_0x015754ec(puVar10[0x1d],0);
code_r0x015994e8:
            unaff_x22 = puVar10[0x22];
            if (unaff_x22 == 0) goto code_r0x01599b20;
            uVar28 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x22,0);
            puVar21 = (undefined8 *)0x0;
            uVar8 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x22,uVar28);
            *(undefined4 *)(unaff_x22 + 0x40) = uVar8;
            lVar12 = puVar10[0x38];
            if (lVar12 == 0) goto code_r0x01599b20;
            switch(*(undefined4 *)(lVar12 + 0x18)) {
            case 1:
              lVar12 = puVar10[8];
              if (lVar12 == 0) break;
              unaff_x22 = puVar10[0x2c];
              puVar34 = &UNK_0159961c;
              goto code_r0x01599b24;
            case 2:
              if ((puVar10[0x18] != 0) && (lVar12 = *(long *)(puVar10[0x18] + 0x20), lVar12 != 0)) {
                iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar12,0);
                if (iVar7 == 0) goto code_r0x01599984;
                if ((puVar10[0x18] != 0) && (lVar12 = *(long *)(puVar10[0x18] + 0x20), lVar12 != 0))
                {
                  puStack_108 = *(undefined8 **)(lVar12 + 0xd8);
                  uStack_110 = *(undefined8 *)(lVar12 + 0xd0);
                  uStack_f8 = *(undefined8 *)(lVar12 + 0xe8);
                  uStack_100 = *(undefined8 *)(lVar12 + 0xe0);
                  /*Core.Networking.NetworkTournament$$SortTotalScores*/ func_0x016611ac(&uStack_110,0);
                  puVar31 = puStack_108;
                  if (puStack_108 != (undefined8 *)0x0) {
                    unaff_x22 = 1;
                    lVar9 = 0xc;
                    do {
                      puVar31 = puStack_108;
                      uVar24 = (int)unaff_x22 - 1;
                      if ((int)*(uint *)(puStack_108 + 3) <= (int)uVar24) {
                        unaff_x22 = 1;
code_r0x0159991c:
                        lVar12 = puVar10[8];
                        if (lVar12 != 0) {
                          lVar9 = puVar10[0x2c];
                          puVar34 = &UNK_0159992c;
                          goto code_r0x01599b24;
                        }
                        break;
                      }
                      if (*(uint *)(puStack_108 + 3) <= uVar24) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      if ((puVar10[0x18] == 0) ||
                         (lVar12 = *(long *)(puVar10[0x18] + 0x20), lVar12 == 0)) break;
                      puVar31 = *(undefined8 **)(puVar31[2] + (long)(int)uVar24 * 0xc + 0x20);
                      /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_130,lVar12,0);
                      if (iStack_124 == (int)puVar31) {
                        if (puVar10[0x2c] != 0) {
                          uVar22 = puVar10[0x1f];
                          puVar21 = (undefined8 *)puVar10[0x43];
                          puVar23 = puVar29;
                          /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(puVar10[0x2c],(ulong)puVar31 >> 0x20);
                          goto code_r0x0159991c;
                        }
                        break;
                      }
                      unaff_x22 = (ulong)((int)unaff_x22 + 1);
                      puVar31 = puStack_108;
                    } while (puStack_108 != (undefined8 *)0x0);
                  }
                }
              }
              break;
            case 3:
              iVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar12 + 0x40,0);
              if ((iVar7 == 0) || (*(char *)(puVar10 + 0x49) == '\0')) goto code_r0x01599984;
              lVar12 = puVar10[0x1e];
              unaff_x22 = 0x3d21b08;
              if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar11 = 0;
              if (lVar12 != 0) {
                puVar21 = (undefined8 *)0x0;
                uVar14 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedAndComplete*/ func_0x01584c64(lVar12,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8));
                lVar12 = puVar10[8];
                uVar11 = uVar14;
                if (lVar12 != 0) {
                  unaff_x22 = puVar10[0x2c];
                  puVar34 = &UNK_015997c8;
                  goto code_r0x01599b24;
                }
              }
              break;
            case 4:
            case 5:
              lVar12 = puVar10[8];
              if (lVar12 != 0) {
                unaff_x22 = puVar10[0x2c];
                puVar34 = &UNK_015995b0;
                goto code_r0x01599b24;
              }
              break;
            case 6:
            case 7:
            case 8:
              if (puVar10[8] != 0) {
                uVar14 = puVar10[0x2c];
                lVar12 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24();
                uVar11 = uVar14;
                if ((lVar12 != 0) && (puVar10[0x46] != 0)) {
                  unaff_x22 = *(ulong *)(lVar12 + 0x28);
                  puVar16 = (undefined8 *)/*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(puVar10[0x46],0);
                  lVar12 = puVar10[0x46];
                  if ((lVar12 != 0) && (uVar14 != 0)) {
                    puVar23 = *(undefined8 **)(lVar12 + 0x50);
                    uVar22 = (ulong)*(byte *)(lVar12 + 0x8e);
                    /*Atlas.Stats.UnlockManager$$EvaluateArcadeXPAwards*/ func_0x0151f61c(uVar14,unaff_x22);
                    puVar21 = puVar16;
                    goto code_r0x01599984;
                  }
                }
              }
              break;
            case 9:
              if (puVar10[0x48] != 0) {
                puVar21 = (undefined8 *)0x0;
                unaff_x22 = /*Atlas.League.LeagueManager$$GetMapDayIndex*/ func_0x015f4a00(puVar10[0x48],puVar29[4]);
                if (puVar10[0x48] != 0) {
                  puVar21 = (undefined8 *)0x0;
                  lVar9 = /*Atlas.League.LeagueManager$$GetPlayerPlacementForDayIndex*/ func_0x015f3cf4(puVar10[0x48],unaff_x22);
                  if (puVar10[0x48] != 0) {
                    puVar21 = (undefined8 *)0x0;
                    puVar31 = (undefined8 *)/*Atlas.League.LeagueManager$$HasPlayedEvent*/ func_0x015f3c44(puVar10[0x48],unaff_x22);
                    lVar12 = puVar10[8];
                    if (lVar12 != 0) {
                      puVar34 = &UNK_01599860;
                      goto code_r0x01599b24;
                    }
                  }
                }
              }
              break;
            default:
code_r0x01599984:
              puVar29 = (undefined8 *)0x0;
              uVar11 = uVar14;
              if (puVar10[0x1c] == 0) break;
              /*Atlas.Stats.AchievementManager$$SubmitAllRequiredAchievementsProgress*/ func_0x014474d0(puVar10[0x1c],0);
              lVar12 = puVar10[3];
              if (lVar12 == 0) break;
              *(undefined1 *)(lVar12 + 0x5d) = 0;
              if (*(long *)(lVar12 + 0x10) == 0) break;
              /*Atlas.Stats.StatsManager$$CommitTransaction*/ func_0x01504e80(*(long *)(lVar12 + 0x10),0);
              if (puVar10[0x1e] == 0) break;
              /*Atlas.FrontEnd.FTUEManager$$EvaluateStages*/ func_0x01584f68(puVar10[0x1e],0);
              if (puVar10[0x2b] == 0) break;
              /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(puVar10[0x2b],0);
              if (puVar10[0x2b] == 0) break;
              /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(puVar10[0x2b],0);
              if (puVar10[0x1e] == 0) break;
              lVar12 = 0x3d23990;
              uVar11 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0(puVar10[0x1e],0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar21 = (undefined8 *)0x0;
              iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
              uVar14 = unaff_x22;
              if (iVar7 != 0) {
                lVar9 = lVar12;
                if (uVar11 == 0) break;
                lVar15 = /*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(uVar11,0);
                uVar14 = *(ulong *)(lVar15 + 8);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                puVar21 = (undefined8 *)0x0;
                iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0);
                if (iVar7 != 0) {
                  lVar15 = /*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(uVar11,0);
                  uVar14 = *(ulong *)(lVar15 + 8);
                  lVar15 = /*Atlas.Definitions.FTUEStageDefinition$$get_EventDefinition*/ func_0x01585930(uVar11,0);
                  puVar21 = (undefined8 *)puVar10[0x17];
                  uVar22 = puVar10[0x22];
                  puVar23 = (undefined8 *)puVar10[0x2c];
                  unaff_x22 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                                        (uVar14,*(undefined8 *)(lVar15 + 8));
                  if (unaff_x22 != 0) {
                    lVar15 = puVar10[0xe];
                    puVar16 = (undefined8 *)/*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(uVar11,0);
                    puVar10 = (undefined8 *)0x0;
                    if (lVar15 != 0) {
                      uVar28 = *puVar16;
                      goto code_r0x0163d6f8;
                    }
                    break;
                  }
                }
              }
              unaff_x22 = uVar14;
              lVar9 = 0x3d23990;
              if (puVar10[0x38] == 0) break;
              if (*(int *)(puVar10[0x38] + 0x18) != 2) {
                uVar11 = /*Atlas.Contexts.GameContextBase$$SwitchToFrontEndContext*/ func_0x01599da0(puVar10,0);
                return uVar11;
              }
              puVar34 = &UNK_01599af4;
              puVar16 = puVar10;
              uVar22 = unaff_x22;
              goto code_r0x01599c88;
            }
code_r0x01599b20:
            puVar34 = &Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer;
            lVar12 = func_0x00f78af4();
            uVar14 = uVar11;
code_r0x01599b24:
            lVar12 = *(long *)(lVar12 + 0x28);
            pppuStack_150 = pppuVar32;
            puStack_148 = puVar34;
            if (lVar12 == 0) {
code_r0x01599b88:
              func_0x00f78af4();
            }
            else {
              iVar7 = *(int *)(lVar12 + 0x18);
              if (iVar7 < 1) {
                return 0;
              }
              iVar27 = 0;
              while (iVar7 != iVar27) {
                uVar11 = *(ulong *)(lVar12 + (long)iVar27 * 8 + 0x20);
                if ((uVar11 == 0) || (*(long *)(uVar11 + 0x10) == 0)) goto code_r0x01599b88;
                if (*(int *)(*(long *)(uVar11 + 0x10) + 0x50) == 0) {
                  return uVar11;
                }
                iVar27 = iVar27 + 1;
                if (iVar7 == iVar27) {
                  return 0;
                }
              }
            }
            uVar28 = func_0x00f78b24();
            auVar41 = func_0x00f78ac0(uVar28,0);
            lVar15 = auVar41._8_8_;
            unaff_x25 = auVar41._0_8_;
            puVar4 = auStack_1c0;
            puStack_158 = &Atlas_Contexts_GameContextBase__DispatchLeagueEventAnalytics;
            pppuVar32 = &ppuStack_160;
            puVar16 = puVar10;
            uVar11 = uVar14;
            lVar12 = lVar9;
            ppuStack_160 = (undefined1 **)&pppuStack_150;
            if (*(long *)(unaff_x25 + 0x240) != 0) {
              ppuStack_160 = (undefined1 **)&pppuStack_150;
              uVar14 = /*Atlas.League.LeagueManager$$GetReplayCountAndUpdate*/ func_0x015f4ae4(*(long *)(unaff_x25 + 0x240),puVar21,0);
              puVar16 = puVar23;
              puVar29 = puVar21;
              uVar11 = uVar22;
              lVar12 = lVar15;
              if ((*(long *)(unaff_x25 + 0x1b0) != 0) &&
                 (unaff_x22 = uVar14, *(long *)(unaff_x25 + 0x240) != 0)) {
                puVar31 = *(undefined8 **)(*(long *)(unaff_x25 + 0x1b0) + 0x48);
                lVar9 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(unaff_x25 + 0x240),0);
                if ((lVar9 != 0) && (*(long *)(unaff_x25 + 0x240) != 0)) {
                  unaff_x26 = *(undefined8 *)(lVar9 + 0x58);
                  uVar28 = /*Atlas.League.LeagueManager$$GetCurrentSeed*/ func_0x015f499c(*(long *)(unaff_x25 + 0x240),0);
                  if ((*(long *)(unaff_x25 + 0x240) != 0) &&
                     (iVar7 = /*Atlas.League.LeagueManager$$GetTodayIndex*/ func_0x015f3c20(*(long *)(unaff_x25 + 0x240),0),
                     puVar31 != (undefined8 *)0x0)) {
                    iVar27 = (int)uVar22 - (int)puVar23;
                    if (auVar41._8_4_ == 0) {
                      iVar27 = 0;
                    }
                    auStack_1c0[0] = 0;
                    uVar11 = /*Atlas.Analytics.AtlasAnalyticsEvents$$LeagueEvent*/ func_0x01456ed4(puVar31,unaff_x26,uVar28,iVar7 + 1,(int)puVar21 + 1,
                                             puVar23,uVar14,iVar27);
                    return uVar11;
                  }
                }
              }
            }
            puVar34 = &Atlas_Contexts_GameContextBase__EndOfTournamentRound;
            puVar10 = (undefined8 *)func_0x00f78af4();
            uVar22 = unaff_x22;
code_r0x01599c88:
            puVar5 = (undefined1 *)((long)puVar4 + -0x30);
            *(ulong *)((long)puVar4 + -0x30) = uVar22;
            *(ulong *)((long)puVar4 + -0x28) = uVar11;
            *(undefined8 **)((long)puVar4 + -0x20) = puVar29;
            *(undefined8 **)((long)puVar4 + -0x18) = puVar16;
            *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar32;
            *(undefined **)((long)puVar4 + -8) = puVar34;
            puVar33 = (undefined1 *)((long)puVar4 + -0x10);
            unaff_x22 = 0x3eb5000;
            if ((bRam0000000003eb51a9 & 1) == 0) {
              func_0x00f78a20(0x3d21a08);
              func_0x00f78a20(0x3d19d50);
              func_0x00f78a20(0x3d25458);
              func_0x00f78a20(0x3d6d050);
              bRam0000000003eb51a9 = 1;
            }
            if ((puVar10[0x18] == 0) || (lVar9 = *(long *)(puVar10[0x18] + 0x20), lVar9 == 0)) {
code_r0x01599d9c:
              puVar34 = &Atlas_Contexts_GameContextBase__SwitchToFrontEndContext;
              auVar41 = func_0x00f78af4();
            }
            else {
              iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar9,0);
              if (iVar7 == 0) {
                unaff_x22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
                /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(unaff_x22,0);
                uVar11 = /*Atlas.Contexts.RoundResultsState_var*/ uRam0000000003d19d50;
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
                if (unaff_x22 != 0) {
                  *(undefined8 *)(unaff_x22 + 0x18) = uVar28;
                  lVar15 = puVar10[0xe];
                  uVar28 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                  if (lVar15 != 0) goto code_r0x0163d6f8;
                }
                goto code_r0x01599d9c;
              }
              auVar41._8_8_ = 0;
              auVar41._0_8_ = puVar10;
              puVar33 = *(undefined1 **)((long)puVar4 + -0x10);
              puVar34 = *(undefined **)((long)puVar4 + -8);
              unaff_x22 = *(ulong *)((long)puVar4 + -0x20);
              puVar10 = *(undefined8 **)((long)puVar4 + -0x18);
              uVar22 = *(ulong *)((long)puVar4 + -0x30);
              uVar11 = *(ulong *)((long)puVar4 + -0x28);
              puVar5 = (undefined1 *)puVar4;
            }
            lVar9 = auVar41._8_8_;
            lVar17 = auVar41._0_8_;
            *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
            *(long *)(puVar5 + -0x48) = unaff_x25;
            *(undefined8 **)(puVar5 + -0x40) = puVar31;
            *(long *)(puVar5 + -0x38) = lVar12;
            *(ulong *)(puVar5 + -0x30) = uVar22;
            *(ulong *)(puVar5 + -0x28) = uVar11;
            *(ulong *)(puVar5 + -0x20) = unaff_x22;
            *(undefined8 **)(puVar5 + -0x18) = puVar10;
            *(undefined1 **)(puVar5 + -0x10) = puVar33;
            *(undefined **)(puVar5 + -8) = puVar34;
            lVar30 = 0x3eb5000;
            if ((bRam0000000003eb51a7 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d21a08);
              func_0x00f78a20(0x3d194d8);
              func_0x00f78a20(0x3d194e8);
              func_0x00f78a20(0x3d194f0);
              func_0x00f78a20(0x3d21b08);
              func_0x00f78a20(0x3d57500);
              func_0x00f78a20(0x3d27688);
              func_0x00f78a20(0x3d27638);
              func_0x00f78a20(0x3d19d50);
              func_0x00f78a20(0x3d28a08);
              func_0x00f78a20(0x3d24a70);
              func_0x00f78a20(0x3d27650);
              func_0x00f78a20(0x3d25458);
              func_0x00f78a20(0x3d6d050);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb51a7 = 1;
            }
            *(undefined8 *)(puVar5 + -0x68) = 0;
            *(undefined8 *)(puVar5 + -0x70) = 0;
            *(undefined8 *)(puVar5 + -0x58) = 0;
            *(undefined8 *)(puVar5 + -0x60) = 0;
            unaff_x22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
            /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(unaff_x22,0);
            if (((unaff_x22 != 0) && (lVar15 = *(long *)(lVar17 + 0x1c0), lVar15 != 0)) &&
               (lVar26 = *(long *)(unaff_x22 + 0x10), lVar26 != 0)) {
              *(undefined8 *)(lVar26 + 0x18) = *(undefined8 *)(lVar15 + 0x10);
              *(undefined8 *)(lVar26 + 0x20) = *(undefined8 *)(lVar15 + 0x38);
              *(undefined4 *)(lVar26 + 0x10) = *(undefined4 *)(lVar15 + 0x18);
              uVar19 = *(undefined8 *)(lVar15 + 0x80);
              uVar28 = *(undefined8 *)(lVar15 + 0x78);
              uVar37 = *(undefined8 *)(lVar15 + 0x90);
              uVar36 = *(undefined8 *)(lVar15 + 0x88);
              uVar39 = *(undefined8 *)(lVar15 + 0x98);
              uVar38 = *(undefined8 *)(lVar15 + 0xb0);
              uVar40 = *(undefined8 *)(lVar15 + 0xa8);
              *(undefined8 *)(lVar26 + 0x58) = *(undefined8 *)(lVar15 + 0xa0);
              *(undefined8 *)(lVar26 + 0x50) = uVar39;
              *(undefined8 *)(lVar26 + 0x68) = uVar38;
              *(undefined8 *)(lVar26 + 0x60) = uVar40;
              *(undefined8 *)(lVar26 + 0x38) = uVar19;
              *(undefined8 *)(lVar26 + 0x30) = uVar28;
              *(undefined8 *)(lVar26 + 0x48) = uVar37;
              *(undefined8 *)(lVar26 + 0x40) = uVar36;
              if ((*(long *)(lVar17 + 0x1c0) != 0) &&
                 (lVar30 = *(long *)(unaff_x22 + 0x10), lVar30 != 0)) {
                *(undefined8 *)(lVar30 + 0x28) = *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 200);
                if (*(long *)(lVar17 + 0x118) != 0) {
                  uVar6 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar17 + 0x118),0);
                  *(undefined1 *)(lVar30 + 0x78) = uVar6;
                  if ((*(long *)(lVar17 + 0xb8) != 0) && (*(long *)(lVar17 + 0x1c0) != 0)) {
                    puVar10 = (undefined8 *)0x3d21270;
                    puVar21 = (undefined8 *)0x3d21270;
                    lVar30 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
                    lVar12 = *(long *)(*(long *)(lVar17 + 0x1c0) + 0x40);
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar12,0);
                    puVar31 = puVar10;
                    if ((*(long *)(unaff_x22 + 0x10) != 0) && (lVar30 != 0)) {
                      /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar30,uVar28,*(long *)(unaff_x22 + 0x10) + 0x70,
                                      uRam0000000003d57500);
                      lVar15 = *(long *)(lVar17 + 0x1c0);
                      puVar31 = puVar21;
                      if ((lVar15 != 0) && (lVar30 = *(long *)(unaff_x22 + 0x10), lVar30 != 0)) {
                        *(undefined8 *)(lVar30 + 0x28) = *(undefined8 *)(lVar15 + 200);
                        iVar7 = auVar41._8_4_;
                        switch(*(undefined4 *)(lVar15 + 0x18)) {
                        case 1:
                          lVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
                          Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor
                                    (lVar9,0);
                          if (lVar9 != 0) {
                            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(unaff_x22 + 0x10);
                            if ((*(long *)(lVar17 + 0x198) != 0) && (*(long *)(lVar17 + 0xc0) != 0))
                            {
                              uVar28 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromNetworkResults*/ func_0x0156505c(*(undefined8 *)
                                                        (*(long *)(lVar17 + 0x198) + 0x98),
                                                       *(undefined8 *)
                                                        (*(long *)(lVar17 + 0xc0) + 0x28),0);
                              *(undefined8 *)(lVar9 + 0x18) = uVar28;
                              *(long *)(unaff_x22 + 0x20) = lVar9;
                              lVar9 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ lRam0000000003d194d8;
                              if ((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0)
                              goto code_r0x0159a204;
                              goto code_r0x0159a210;
                            }
                          }
                          break;
                        case 2:
                          lVar15 = *(long *)(lVar17 + 0xc0);
                          if ((lVar15 != 0) && (lVar26 = *(long *)(lVar15 + 0x20), lVar26 != 0)) {
                            uVar19 = *(undefined8 *)(lVar26 + 0xd8);
                            uVar28 = *(undefined8 *)(lVar26 + 0xd0);
                            uVar37 = *(undefined8 *)(lVar26 + 0xe8);
                            uVar36 = *(undefined8 *)(lVar26 + 0xe0);
                            *(undefined8 *)(puVar5 + -0x68) = uVar19;
                            *(undefined8 *)(puVar5 + -0x70) = uVar28;
                            *(undefined8 *)(puVar5 + -0x58) = uVar37;
                            *(undefined8 *)(puVar5 + -0x60) = uVar36;
                            *(undefined8 *)(puVar5 + -0x88) = uVar19;
                            *(undefined8 *)(puVar5 + -0x90) = uVar28;
                            *(undefined8 *)(puVar5 + -0x78) = uVar37;
                            *(undefined8 *)(puVar5 + -0x80) = uVar36;
                            uVar28 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromTournament*/ func_0x01565710(puVar5 + -0x90,*(undefined8 *)(lVar15 + 0x28),0
                                                    );
                            lVar26 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData_TypeInfo*/ uRam0000000003d28a08);
                            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x68);
                            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x70);
                            *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x58);
                            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x60);
                            /*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData$$.ctor*/ func_0x01566048(lVar26,lVar30,uVar28,puVar5 + -0xb0,0);
                            plVar13 = (long *)0x3d19d50;
                            *(long *)(unaff_x22 + 0x20) = lVar26;
code_r0x0159a1ec:
                            lVar9 = *plVar13;
                            lVar12 = lVar26;
                            if ((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) {
code_r0x0159a204:
                              if (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0) {
                                func_0x00f78ad0();
                              }
                            }
code_r0x0159a210:
                            uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
                            *(undefined8 *)(unaff_x22 + 0x18) = uVar28;
                            goto code_r0x0159a220;
                          }
                          break;
                        case 3:
                          lVar30 = *(long *)(lVar15 + 0x40);
                          if ((0 < iVar7) && (*(char *)(lVar17 + 0x24a) == '\0')) {
                            if ((*(long *)(lVar17 + 0xb8) == 0) ||
                               (lVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetNextEventDefinition*/ func_0x01468b08(*(long *)(lVar17 + 0xb8),lVar30,1,0),
                               lVar15 == 0)) break;
                            lVar30 = *(long *)(lVar15 + 0x18);
                          }
                          lVar26 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                          /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar26,0);
                          lVar12 = lVar26;
                          if (lVar26 != 0) {
                            *(int *)(lVar26 + 0x14) = iVar7;
                            *(undefined1 *)(lVar26 + 0x10) = *(undefined1 *)(lVar17 + 0x24a);
                            if (*(long *)(lVar17 + 0x1c0) != 0) {
                              *(undefined8 *)(lVar26 + 0x18) =
                                   *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 0x40);
                              lVar15 = *(long *)(lVar17 + 0xf0);
                              if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              lVar9 = 0;
                              if (lVar15 != 0) {
                                iVar7 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedButNotComplete*/ func_0x01585640(lVar15,**(undefined8 **)
                                                                 (/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8),0);
                                if (iVar7 == 0) {
                                  lVar9 = *(long *)(unaff_x22 + 0x10);
                                  puVar10 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                                  lVar12 = lVar30;
                                  lVar15 = lVar26;
                                  goto code_r0x0159a0f4;
                                }
                                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                uVar19 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
                                puVar10 = *(undefined8 **)(unaff_x22 + 0x10);
                                uVar28 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                                Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                                          (uVar28,lVar30,lVar26,uVar19,0,puVar10,0);
                                plVar13 = (long *)0x3d194e8;
code_r0x0159a070:
                                *(undefined8 *)(unaff_x22 + 0x20) = uVar28;
                                goto code_r0x0159a1ec;
                              }
                            }
                          }
                          break;
                        case 4:
                        case 5:
                        case 9:
                          lVar26 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                          /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar26,0);
                          lVar30 = lVar26;
                          if (lVar26 != 0) {
                            *(int *)(lVar26 + 0x14) = iVar7;
                            *(undefined1 *)(lVar26 + 0x10) = *(undefined1 *)(lVar17 + 0x24a);
                            if (*(long *)(lVar17 + 0x1c0) != 0) {
                              *(undefined8 *)(lVar26 + 0x18) =
                                   *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 0x40);
                              lVar9 = *(long *)(unaff_x22 + 0x10);
                              if ((lVar9 != 0) && (*(long *)(lVar9 + 0x70) != 0)) {
                                lVar30 = *(long *)(*(long *)(lVar9 + 0x70) + 0x18);
                                puVar10 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                                lVar12 = lVar26;
                                lVar15 = lVar30;
code_r0x0159a0f4:
                                Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                          (puVar10,lVar9,lVar30,lVar26,/*STR('')*/ uRam0000000003d65d08,0);
                                plVar13 = (long *)0x3d194f0;
                                *(undefined8 **)(unaff_x22 + 0x20) = puVar10;
                                lVar30 = lVar12;
                                lVar26 = lVar15;
                                goto code_r0x0159a1ec;
                              }
                            }
                          }
                          break;
                        case 6:
                        case 7:
                        case 8:
                          lVar30 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                          /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar30,0);
                          if (lVar30 != 0) {
                            *(int *)(lVar30 + 0x14) = iVar7;
                            *(undefined1 *)(lVar30 + 0x10) = *(undefined1 *)(lVar17 + 0x24a);
                            if (*(long *)(lVar17 + 0x1c0) != 0) {
                              *(undefined8 *)(lVar30 + 0x18) =
                                   *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 0x40);
                              lVar9 = *(long *)(unaff_x22 + 0x10);
                              if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x70) != 0)) &&
                                  (*(long *)(lVar17 + 0x230) != 0)) &&
                                 (lVar15 = *(long *)(*(long *)(lVar17 + 0x230) + 0x48), lVar15 != 0)
                                 ) {
                                lVar26 = *(long *)(*(long *)(lVar9 + 0x70) + 0x18);
                                puVar10 = *(undefined8 **)(lVar15 + 0x18);
                                uVar28 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                                Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                          (uVar28,lVar9,lVar26,lVar30,puVar10,0);
                                plVar13 = (long *)0x3d194f0;
                                goto code_r0x0159a070;
                              }
                            }
                          }
                          break;
                        default:
code_r0x0159a220:
                          lVar15 = *(long *)(lVar17 + 0x70);
                          uVar28 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                          puVar31 = puVar10;
                          if (lVar15 != 0) {
code_r0x0163d6f8:
                            cVar1 = *(char *)(lVar15 + 0x50);
                            if (cVar1 == '\0') {
                              *(undefined1 *)(lVar15 + 0x50) = 1;
                              *(undefined8 *)(lVar15 + 0x40) = uVar28;
                              *(ulong *)(lVar15 + 0x48) = unaff_x22;
                            }
                            return (ulong)(cVar1 == '\0');
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            plVar13 = (long *)func_0x00f78af4();
            *(long *)(puVar5 + -0xe0) = lVar30;
            *(long *)(puVar5 + -0xd8) = lVar9;
            *(ulong *)(puVar5 + -0xd0) = unaff_x22;
            *(long *)(puVar5 + -200) = lVar17;
            *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x10;
            *(undefined **)(puVar5 + -0xb8) =
                 &Atlas_Contexts_GameContextBase__InitPickupLimitsDefinition;
            lVar15 = 0x3eb5000;
            if ((bRam0000000003eb51a5 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d572e8);
              func_0x00f78a20(0x3d23990);
              func_0x00f78a20(0x3d24068);
              func_0x00f78a20(0x3d71248);
              func_0x00f78a20(0x3d71240);
              bRam0000000003eb51a5 = 1;
            }
            if (plVar13[0x38] != 0) {
              uVar11 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar13[0x38] + 0x60,0);
              if ((uVar11 & 1) == 0) {
                lVar15 = plVar13[0x42];
              }
              else {
                if (((plVar13[0x17] == 0) || (plVar13[0x38] == 0)) ||
                   (lVar17 = *(long *)(plVar13[0x17] + 0x10), lVar17 == 0)) goto code_r0x0159a554;
                lVar15 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar17,*(undefined8 *)(plVar13[0x38] + 0x60),
                                         uRam0000000003d572e8);
                plVar13[0x42] = lVar15;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar15,0,0);
              if ((int)uVar11 == 0) {
                return uVar11;
              }
              plVar25 = (long *)0x3d71240;
              if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar13 + 300)) &&
                 (plVar25 = (long *)0x3d71248,
                 *(long *)(*(long *)(*plVar13 + 200) +
                           (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8) !=
                 /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
                plVar25 = (long *)0x3d71240;
              }
              if (plVar13[0x17] != 0) {
                lVar9 = *plVar25;
                lVar17 = *(long *)(plVar13[0x17] + 0x10);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
                lVar15 = 0;
                if (lVar17 != 0) {
                  uVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar17,uVar28,uRam0000000003d572e8);
                  plVar13[0x42] = uVar11;
                  return uVar11;
                }
              }
            }
code_r0x0159a554:
            fVar35 = (float)func_0x00f78af4();
            *(undefined8 *)(puVar5 + -0x110) = unaff_d9;
            *(undefined8 *)(puVar5 + -0x108) = unaff_d8;
            *(long *)(puVar5 + -0x100) = lVar15;
            *(long **)(puVar5 + -0xf8) = plVar13;
            *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xc0;
            *(undefined **)(puVar5 + -0xe8) = &Atlas_Contexts_GameContextBase__UpdateLoadingProgress
            ;
            if ((bRam0000000003eb51a6 & 1) == 0) {
              func_0x00f78a20(0x3d23050);
              bRam0000000003eb51a6 = 1;
            }
            if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x110);
            *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x108);
            *(long *)(puVar5 + -0x110) = lVar30;
            *(long *)(puVar5 + -0x108) = lVar9;
            *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0x100);
            *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
            if ((bRam0000000003eb494d & 1) == 0) {
              func_0x00f78a20(0x3d23050,0);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb494d = 1;
            }
            if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar28 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar28,0,0);
            if ((uVar11 & 1) != 0) {
              return uVar11;
            }
            uVar8 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar35 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 +
                                    _UNK_033f83f4,0);
            if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar9 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
            if (lVar9 == 0) {
              func_0x00f78af4();
              *(undefined8 *)(puVar5 + -0x140) = uVar28;
              *(undefined8 *)(puVar5 + -0x138) = 1;
              *(undefined1 **)(puVar5 + -0x130) = puVar5 + -0xf0;
              *(undefined **)(puVar5 + -0x128) = &Atlas_UI_LoadingBehaviour__HasFinishedLoading;
              if ((bRam0000000003eb494b & 1) == 0) {
                func_0x00f78a20(0x3d2bf00);
                func_0x00f78a20(0x3d23050);
                bRam0000000003eb494b = 1;
              }
              if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar9 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
              if (*(char *)(lVar9 + 0x10) != '\0') {
                if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                  lVar9 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
                }
                lVar15 = lRam0000000003d2bf00;
                *(undefined8 *)(puVar5 + -0x150) = 0x3d23990;
                *(undefined8 *)(puVar5 + -0x148) = 0x3d23050;
                *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x140);
                *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x138);
                *(undefined8 *)(puVar5 + -0x130) = *(undefined8 *)(puVar5 + -0x130);
                *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)(puVar5 + -0x128);
                lVar30 = *(long *)(lRam0000000003d2bf00 + 0x18);
                if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar30);
                }
                lVar17 = *(long *)(*(long *)(lVar30 + 0xc0) + 0x58);
                *(undefined8 **)(puVar5 + -0x1a0) = puVar31;
                *(long *)(puVar5 + -0x198) = lVar12;
                *(undefined8 *)(puVar5 + -400) = 0x3d23990;
                *(long *)(puVar5 + -0x188) = lVar30;
                *(long **)(puVar5 + -0x180) = (long *)(lVar9 + 0x18);
                *(long *)(puVar5 + -0x178) = lVar15;
                *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0x130;
                *(undefined **)(puVar5 + -0x168) = &UNK_01b570c0;
                lVar12 = *(long *)(lVar9 + 0x18);
                if (lVar12 == 0) {
                  uVar11 = 0;
                }
                else {
                  lVar30 = *(long *)(lVar17 + 0x18);
                  uVar2 = *(ushort *)(lVar30 + 0x132);
                  lVar15 = lVar30;
                  if ((uVar2 & 1) == 0) {
                    func_0x00fac028(lVar30);
                    lVar15 = *(long *)(lVar17 + 0x18);
                    uVar2 = *(ushort *)(lVar15 + 0x132);
                  }
                  pcVar3 = *(code **)**(undefined8 **)(lVar30 + 0xc0);
                  if ((uVar2 & 1) == 0) {
                    func_0x00fac028(lVar15);
                  }
                  iVar7 = (*pcVar3)(lVar12,**(undefined8 **)(lVar15 + 0xc0));
                  uVar11 = (ulong)(iVar7 == *(int *)(lVar9 + 0x20));
                }
                return uVar11;
              }
              return 0;
            }
            uVar28 = *(undefined8 *)(puVar5 + -0x100);
            uVar36 = *(undefined8 *)(puVar5 + -0xf8);
            uVar19 = *(undefined8 *)(puVar5 + -0x110);
            uVar37 = *(undefined8 *)(puVar5 + -0x108);
            uVar40 = *(undefined8 *)(puVar5 + -0x120);
            uVar39 = *(undefined8 *)(puVar5 + -0x118);
            *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
            uVar11 = *(ulong *)(lVar9 + 0x20);
            if (uVar11 == 0) {
              auVar41 = func_0x00f78af4();
              *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0xf0;
              *(undefined **)(puVar5 + -0xf8) = &Atlas_UI_LoadingBehaviour__set_BuildInfo;
              plVar13 = *(long **)(auVar41._0_8_ + 0x28);
              if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar11 = (**(code **)(*plVar13 + 0x558))
                                   (plVar13,auVar41._8_8_,*(undefined8 *)(*plVar13 + 0x560));
                return uVar11;
              }
              lVar9 = func_0x00f78af4();
              return *(ulong *)(lVar9 + 0x30);
            }
            *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined1 *)(uVar11 + 0x90) = 1;
            *(undefined4 *)(uVar11 + 0x94) = uVar8;
            *(undefined8 *)(uVar11 + 0x98) = 0;
            if (*(char *)(uVar11 + 0x3c) == '\0') {
              return uVar11;
            }
            uVar11 = *(ulong *)(uVar11 + 0xb8);
            if (uVar11 != 0) {
              *(undefined8 *)(puVar5 + -0x100) = uVar28;
              *(undefined8 *)(puVar5 + -0xf8) = uVar36;
              *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
              *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
              /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,0,0);
              return uVar11;
            }
            lVar9 = func_0x00f78af4(0,0,0);
            *(undefined8 *)(puVar5 + -0x130) = uVar40;
            *(undefined8 *)(puVar5 + -0x128) = uVar39;
            *(undefined8 *)(puVar5 + -0x120) = uVar19;
            *(undefined8 *)(puVar5 + -0x118) = uVar37;
            *(undefined8 *)(puVar5 + -0x110) = uVar28;
            *(undefined8 *)(puVar5 + -0x108) = uVar36;
            *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0xf0;
            *(undefined **)(puVar5 + -0xf8) = &Atlas_UI_SlantFillBar__AddThresholdEvent;
            if ((bRam0000000003eb4cce & 1) == 0) {
              func_0x00f78a20(0x3d3d9e8);
              func_0x00f78a20(0x3d3d9e0);
              func_0x00f78a20(0x3d1e310);
              bRam0000000003eb4cce = 1;
            }
            uVar11 = *(ulong *)(lVar9 + 0xc0);
            if (uVar11 == 0) {
              uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
              /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar11,uRam0000000003d3d9e0);
              *(ulong *)(lVar9 + 0xc0) = uVar11;
              if (uVar11 == 0) {
                lVar12 = func_0x00f78af4();
                *(long *)(puVar5 + -0x150) = lVar9;
                *(undefined8 **)(puVar5 + -0x148) = extraout_x1;
                *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x100;
                *(undefined **)(puVar5 + -0x138) = &Atlas_UI_SlantFillBar__ClearThresholdEvents;
                if ((bRam0000000003eb4ccf & 1) == 0) {
                  func_0x00f78a20(0x3d3d9f0);
                  bRam0000000003eb4ccf = 1;
                }
                uVar11 = *(ulong *)(lVar12 + 0xc0);
                if (uVar11 != 0) {
                  *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0x150);
                  *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0x148);
                  *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x140);
                  *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x138);
                  uVar22 = uVar11;
                  if (0 < *(int *)(uVar11 + 0x18)) {
                    uVar22 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar11 + 0x10),0,
                                             *(int *)(uVar11 + 0x18),0);
                    *(undefined4 *)(uVar11 + 0x18) = 0;
                  }
                  *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
                  return uVar22;
                }
                return 0;
              }
            }
            uVar20 = (ulong)extraout_s0;
            puVar10 = *(undefined8 **)(puVar5 + -0x110);
            uVar22 = *(ulong *)(puVar5 + -0x108);
            uVar28 = *(undefined8 *)(puVar5 + -0x120);
            uVar14 = *(ulong *)(puVar5 + -0x118);
            *(undefined8 *)(puVar5 + -0x120) = uVar28;
            *(ulong *)(puVar5 + -0x118) = uVar14;
            *(undefined8 **)(puVar5 + -0x110) = puVar10;
            *(ulong *)(puVar5 + -0x108) = uVar22;
            *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0x100);
            *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0xf8);
            lVar9 = *(long *)(uVar11 + 0x10);
            puVar21 = extraout_x1;
            if (lVar9 == 0) {
code_r0x0259cf3c:
              uVar20 = uVar14;
              uVar11 = uVar22;
              uVar18 = func_0x00f78af4();
              lVar9 = extraout_x9;
              uVar24 = extraout_w8;
code_r0x0259cf40:
              *(uint *)(uVar11 + 0x18) = uVar24 + 1;
            }
            else {
              uVar24 = *(uint *)(uVar11 + 0x18);
              uVar18 = uVar11;
              puVar10 = extraout_x1;
              if (uVar24 != *(uint *)(lVar9 + 0x18)) goto code_r0x0259cf40;
              puVar21 = *(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
              uVar18 = (*(code *)*puVar21)(uVar11,uVar24 + 1);
              lVar9 = *(long *)(uVar11 + 0x10);
              uVar24 = *(uint *)(uVar11 + 0x18);
              *(uint *)(uVar11 + 0x18) = uVar24 + 1;
              uVar22 = uVar11;
              uVar14 = uVar20;
              if (lVar9 == 0) goto code_r0x0259cf3c;
            }
            if (uVar24 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar24 * 0x10;
              *(ulong *)(lVar9 + 0x20) = uVar20;
              *(undefined8 **)(lVar9 + 0x28) = puVar10;
              *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
              return uVar18;
            }
            uVar19 = func_0x00f78b24();
            auVar41 = func_0x00f78ac0(uVar19,0);
            plVar13 = auVar41._8_8_;
            lVar9 = auVar41._0_8_;
            *(undefined8 **)(puVar5 + -0x160) = puVar31;
            *(long *)(puVar5 + -0x158) = lVar12;
            *(undefined8 *)(puVar5 + -0x150) = uVar28;
            *(ulong *)(puVar5 + -0x148) = uVar20;
            *(undefined8 **)(puVar5 + -0x140) = puVar10;
            *(ulong *)(puVar5 + -0x138) = uVar11;
            *(undefined1 **)(puVar5 + -0x130) = puVar5 + -0x100;
            *(undefined **)(puVar5 + -0x128) =
                 &
                 System_Collections_Generic_List_SlantFillBar_ThresholdEvent___System_Collections_IList_Add
            ;
            (*(code *)**(undefined8 **)(*(long *)(puVar21[3] + 0xc0) + 0x48))(plVar13,0x14);
            if (lVar9 != 0) {
              pcVar3 = (code *)**(undefined8 **)(*(long *)(puVar21[3] + 0xc0) + 0x28);
              lVar12 = *(long *)(*(long *)(puVar21[3] + 0xc0) + 0x38);
              if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar12);
              }
              if (plVar13 != (long *)0x0) {
                if (*(long *)(*plVar13 + 0x40) == *(long *)(lVar12 + 0x40)) {
                  puVar10 = (undefined8 *)func_0x00f78ae4(plVar13);
                  (*pcVar3)(lVar9,*puVar10,puVar10[1],
                            *(undefined8 *)(*(long *)(puVar21[3] + 0xc0) + 0x28));
                  iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar21[3] + 0xc0) + 0x68))(lVar9);
                  return (ulong)(iVar7 - 1);
                }
                func_0x00f78e5c(plVar13,lVar12);
                goto code_r0x0259d128;
              }
            }
            func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x259d12c);
            (*pcVar3)();
          }
LAB_015991a4:
          /*Atlas.Rendering.MaterialDuplicator$$DeInit*/ func_0x01491d4c(uVar11,0);
        }
        if ((*(long *)(param_1 + 0x1e8) != 0) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x68), lVar9 != 0)) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,lVar9,uRam0000000003d3b840);
          while( true ) {
            uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d32d58);
            if ((uVar11 & 1) == 0) {
              uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32d50);
              return uVar11;
            }
            if (lStack_48 == 0) break;
            lVar9 = *(long *)(lStack_48 + 0x10);
            if (lVar9 == 0) {
              func_0x00f78af4();
              goto code_r0x01599264;
            }
            if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_01599250;
            /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x014864a4(*(long *)(param_1 + 0x1f8),lVar9,0,0,*(undefined8 *)(lVar9 + 0x48),1,0);
          }
          func_0x00f78af4();
          goto code_r0x01599264;
        }
      }
    }
    else if ((*(long *)(param_1 + 0x1d8) != 0) && (*(long *)(param_1 + 0x1f8) != 0)) {
      /*Atlas.Lighting.LightWorld$$SetLightVolumes*/ func_0x01484e18(*(long *)(param_1 + 0x1f8),*(undefined8 *)(*(long *)(param_1 + 0x1d8) + 0xf0),
                      0);
      if ((*(long *)(param_1 + 0x1d8) != 0) && (*(long *)(param_1 + 0x1f8) != 0)) {
        _memmove(*(long *)(param_1 + 0x1f8) + 0x5c,*(long *)(param_1 + 0x1d8) + 0xf8,0x44);
        goto LAB_015990a8;
      }
    }
  }
LAB_0159924c:
  func_0x00f78af4();
LAB_01599250:
  func_0x00f78af4();
code_r0x01599264:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1599268);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x15992b4 | Atlas.Contexts.GameContextBase.DeInitLightWorld
// ============================================================

/* WARNING: Possible PIC construction at 0x01599ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159a23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015998ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015995ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015997c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159992c) */
/* WARNING: Removing unreachable block (ram,0x01599930) */
/* WARNING: Removing unreachable block (ram,0x01599934) */
/* WARNING: Removing unreachable block (ram,0x0159994c) */
/* WARNING: Removing unreachable block (ram,0x01599978) */
/* WARNING: Removing unreachable block (ram,0x015997c8) */
/* WARNING: Removing unreachable block (ram,0x015997cc) */
/* WARNING: Removing unreachable block (ram,0x015997d4) */
/* WARNING: Removing unreachable block (ram,0x015997d8) */
/* WARNING: Removing unreachable block (ram,0x015995b0) */
/* WARNING: Removing unreachable block (ram,0x015995b4) */
/* WARNING: Removing unreachable block (ram,0x015995bc) */
/* WARNING: Removing unreachable block (ram,0x015995c4) */
/* WARNING: Removing unreachable block (ram,0x015995c8) */
/* WARNING: Removing unreachable block (ram,0x015995e4) */
/* WARNING: Removing unreachable block (ram,0x015998f0) */
/* WARNING: Removing unreachable block (ram,0x01599860) */
/* WARNING: Removing unreachable block (ram,0x01599864) */
/* WARNING: Removing unreachable block (ram,0x0159986c) */
/* WARNING: Removing unreachable block (ram,0x01599874) */
/* WARNING: Removing unreachable block (ram,0x01599878) */
/* WARNING: Removing unreachable block (ram,0x01599894) */
/* WARNING: Removing unreachable block (ram,0x015998c0) */
/* WARNING: Removing unreachable block (ram,0x015998d8) */
/* WARNING: Removing unreachable block (ram,0x01599af4) */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Removing unreachable block (ram,0x0159a240) */
/* WARNING: Removing unreachable block (ram,0x01599ad4) */
/* WARNING: Removing unreachable block (ram,0x0159961c) */
/* WARNING: Removing unreachable block (ram,0x01599620) */
/* WARNING: Removing unreachable block (ram,0x01599628) */
/* WARNING: Removing unreachable block (ram,0x0159962c) */
/* WARNING: Removing unreachable block (ram,0x01599648) */
/* WARNING: Removing unreachable block (ram,0x01599674) */
/* WARNING: Removing unreachable block (ram,0x01599688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__DeInitLightWorld
                (long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                undefined8 *param_5)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *extraout_x1;
  ulong uVar19;
  uint extraout_w8;
  uint uVar20;
  long *plVar21;
  long lVar22;
  long extraout_x9;
  int iVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong unaff_x21;
  long lVar26;
  ulong unaff_x22;
  long lVar27;
  long unaff_x23;
  code *pcVar28;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar29;
  undefined1 *puVar30;
  undefined *puVar31;
  uint extraout_s0;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 unaff_d8;
  undefined8 uVar37;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined8 auStack_160 [2];
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [12];
  int iStack_c4;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    uVar9 = /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(param_1 + 0x1f8),0);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    return uVar9;
  }
  puVar10 = (undefined8 *)func_0x00f78af4();
  puVar4 = (undefined8 *)auStack_e0;
  puStack_28 = &Atlas_Contexts_GameContextBase__ExitContext;
  ppuVar29 = &puStack_30;
  puVar24 = (undefined8 *)0x3eb5000;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51a4 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc18);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d21688);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51a4 = 1;
  }
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if ((puVar10[0x17] == 0) || (puVar10[0x38] == 0)) goto code_r0x01599b20;
  lVar25 = *(long *)(puVar10[0x17] + 0x10);
  unaff_x21 = *(ulong *)(puVar10[0x38] + 0x40);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x21,0);
  puVar24 = (undefined8 *)0x0;
  if (lVar25 == 0) goto code_r0x01599b20;
  unaff_x21 = 0x3d21000;
  param_3 = &uStack_88;
  param_4 = uRam0000000003d57500;
  /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar25,uVar11);
  puVar24 = (undefined8 *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
  /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(puVar24,0);
  lVar25 = puVar10[0x38];
  if ((lVar25 == 0) || (puVar24 == (undefined8 *)0x0)) goto code_r0x01599b20;
  puVar24[3] = *(undefined8 *)(lVar25 + 0x10);
  puVar24[4] = *(undefined8 *)(lVar25 + 0x38);
  *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(lVar25 + 0x18);
  uVar18 = *(undefined8 *)(lVar25 + 0x80);
  uVar11 = *(undefined8 *)(lVar25 + 0x78);
  uVar34 = *(undefined8 *)(lVar25 + 0x90);
  uVar33 = *(undefined8 *)(lVar25 + 0x88);
  uVar36 = *(undefined8 *)(lVar25 + 0x98);
  uVar35 = *(undefined8 *)(lVar25 + 0xb0);
  uVar37 = *(undefined8 *)(lVar25 + 0xa8);
  puVar24[0xb] = *(undefined8 *)(lVar25 + 0xa0);
  puVar24[10] = uVar36;
  puVar24[0xd] = uVar35;
  puVar24[0xc] = uVar37;
  puVar24[7] = uVar18;
  puVar24[6] = uVar11;
  puVar24[9] = uVar34;
  puVar24[8] = uVar33;
  if (puVar10[0x38] == 0) goto code_r0x01599b20;
  puVar24[5] = *(undefined8 *)(puVar10[0x38] + 200);
  puVar24[0xe] = uStack_88;
  if ((puVar10[0x17] == 0) || (lVar25 = *(long *)(puVar10[0x17] + 0x10), lVar25 == 0))
  goto code_r0x01599b20;
  uVar9 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(lVar25,uRam0000000003d57360);
  if (puVar10[0x38] == 0) goto code_r0x01599b20;
  unaff_x21 = uVar9;
  if (*(int *)(puVar10[0x38] + 0x18) == 2) {
    if ((puVar10[0x18] != 0) && (lVar25 = *(long *)(puVar10[0x18] + 0x20), lVar25 != 0)) {
      iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar25,0);
      if (iVar7 != 0) goto code_r0x015994d8;
      goto code_r0x015994e8;
    }
    goto code_r0x01599b20;
  }
code_r0x015994d8:
  if (puVar10[0x1d] == 0) goto code_r0x01599b20;
  /*Atlas.Stats.DailyChallengeManager$$UpdateAllDailyChallengeProgress*/ func_0x015754ec(puVar10[0x1d],0);
code_r0x015994e8:
  unaff_x22 = puVar10[0x22];
  if (unaff_x22 == 0) goto code_r0x01599b20;
  uVar11 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x22,0);
  param_3 = (undefined8 *)0x0;
  uVar8 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x22,uVar11);
  *(undefined4 *)(unaff_x22 + 0x40) = uVar8;
  lVar25 = puVar10[0x38];
  if (lVar25 == 0) goto code_r0x01599b20;
  switch(*(undefined4 *)(lVar25 + 0x18)) {
  case 1:
    lVar25 = puVar10[8];
    if (lVar25 == 0) break;
    unaff_x22 = puVar10[0x2c];
    puVar31 = &UNK_0159961c;
    goto code_r0x01599b24;
  case 2:
    if ((puVar10[0x18] != 0) && (lVar25 = *(long *)(puVar10[0x18] + 0x20), lVar25 != 0)) {
      iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar25,0);
      if (iVar7 == 0) goto code_r0x01599984;
      if ((puVar10[0x18] != 0) && (lVar25 = *(long *)(puVar10[0x18] + 0x20), lVar25 != 0)) {
        uStack_a8 = *(ulong *)(lVar25 + 0xd8);
        uStack_b0 = *(undefined8 *)(lVar25 + 0xd0);
        uStack_98 = *(undefined8 *)(lVar25 + 0xe8);
        uStack_a0 = *(undefined8 *)(lVar25 + 0xe0);
        /*Core.Networking.NetworkTournament$$SortTotalScores*/ func_0x016611ac(&uStack_b0,0);
        unaff_x24 = uStack_a8;
        if (uStack_a8 != 0) {
          unaff_x22 = 1;
          unaff_x23 = 0xc;
          do {
            unaff_x24 = uStack_a8;
            uVar20 = (int)unaff_x22 - 1;
            if ((int)*(uint *)(uStack_a8 + 0x18) <= (int)uVar20) {
              unaff_x22 = 1;
code_r0x0159991c:
              lVar25 = puVar10[8];
              if (lVar25 != 0) {
                unaff_x23 = puVar10[0x2c];
                puVar31 = &UNK_0159992c;
                goto code_r0x01599b24;
              }
              break;
            }
            if (*(uint *)(uStack_a8 + 0x18) <= uVar20) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((puVar10[0x18] == 0) || (lVar25 = *(long *)(puVar10[0x18] + 0x20), lVar25 == 0))
            break;
            unaff_x24 = *(ulong *)(*(long *)(unaff_x24 + 0x10) + (long)(int)uVar20 * 0xc + 0x20);
            /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_d0,lVar25,0);
            if (iStack_c4 == (int)unaff_x24) {
              if (puVar10[0x2c] != 0) {
                param_4 = puVar10[0x1f];
                param_3 = (undefined8 *)puVar10[0x43];
                param_5 = puVar24;
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(puVar10[0x2c],unaff_x24 >> 0x20);
                goto code_r0x0159991c;
              }
              break;
            }
            unaff_x22 = (ulong)((int)unaff_x22 + 1);
            unaff_x24 = uStack_a8;
          } while (uStack_a8 != 0);
        }
      }
    }
    break;
  case 3:
    iVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar25 + 0x40,0);
    if ((iVar7 == 0) || (*(char *)(puVar10 + 0x49) == '\0')) goto code_r0x01599984;
    lVar25 = puVar10[0x1e];
    unaff_x22 = 0x3d21b08;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x21 = 0;
    if (lVar25 != 0) {
      param_3 = (undefined8 *)0x0;
      uVar9 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedAndComplete*/ func_0x01584c64(lVar25,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8));
      lVar25 = puVar10[8];
      unaff_x21 = uVar9;
      if (lVar25 != 0) {
        unaff_x22 = puVar10[0x2c];
        puVar31 = &UNK_015997c8;
        goto code_r0x01599b24;
      }
    }
    break;
  case 4:
  case 5:
    lVar25 = puVar10[8];
    if (lVar25 != 0) {
      unaff_x22 = puVar10[0x2c];
      puVar31 = &UNK_015995b0;
      goto code_r0x01599b24;
    }
    break;
  case 6:
  case 7:
  case 8:
    if (puVar10[8] != 0) {
      uVar9 = puVar10[0x2c];
      lVar25 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24();
      unaff_x21 = uVar9;
      if ((lVar25 != 0) && (puVar10[0x46] != 0)) {
        unaff_x22 = *(ulong *)(lVar25 + 0x28);
        puVar13 = (undefined8 *)/*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(puVar10[0x46],0);
        lVar25 = puVar10[0x46];
        if ((lVar25 != 0) && (uVar9 != 0)) {
          param_5 = *(undefined8 **)(lVar25 + 0x50);
          param_4 = (ulong)*(byte *)(lVar25 + 0x8e);
          /*Atlas.Stats.UnlockManager$$EvaluateArcadeXPAwards*/ func_0x0151f61c(uVar9,unaff_x22);
          param_3 = puVar13;
          goto code_r0x01599984;
        }
      }
    }
    break;
  case 9:
    if (puVar10[0x48] != 0) {
      param_3 = (undefined8 *)0x0;
      unaff_x22 = /*Atlas.League.LeagueManager$$GetMapDayIndex*/ func_0x015f4a00(puVar10[0x48],puVar24[4]);
      if (puVar10[0x48] != 0) {
        param_3 = (undefined8 *)0x0;
        unaff_x23 = /*Atlas.League.LeagueManager$$GetPlayerPlacementForDayIndex*/ func_0x015f3cf4(puVar10[0x48],unaff_x22);
        if (puVar10[0x48] != 0) {
          param_3 = (undefined8 *)0x0;
          unaff_x24 = /*Atlas.League.LeagueManager$$HasPlayedEvent*/ func_0x015f3c44(puVar10[0x48],unaff_x22);
          lVar25 = puVar10[8];
          if (lVar25 != 0) {
            puVar31 = &UNK_01599860;
            goto code_r0x01599b24;
          }
        }
      }
    }
    break;
  default:
code_r0x01599984:
    puVar24 = (undefined8 *)0x0;
    unaff_x21 = uVar9;
    if (puVar10[0x1c] == 0) break;
    /*Atlas.Stats.AchievementManager$$SubmitAllRequiredAchievementsProgress*/ func_0x014474d0(puVar10[0x1c],0);
    lVar25 = puVar10[3];
    if (lVar25 == 0) break;
    *(undefined1 *)(lVar25 + 0x5d) = 0;
    if (*(long *)(lVar25 + 0x10) == 0) break;
    /*Atlas.Stats.StatsManager$$CommitTransaction*/ func_0x01504e80(*(long *)(lVar25 + 0x10),0);
    if (puVar10[0x1e] == 0) break;
    /*Atlas.FrontEnd.FTUEManager$$EvaluateStages*/ func_0x01584f68(puVar10[0x1e],0);
    if (puVar10[0x2b] == 0) break;
    /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(puVar10[0x2b],0);
    if (puVar10[0x2b] == 0) break;
    /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(puVar10[0x2b],0);
    if (puVar10[0x1e] == 0) break;
    lVar25 = 0x3d23990;
    unaff_x21 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0(puVar10[0x1e],0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (undefined8 *)0x0;
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
    uVar9 = unaff_x22;
    if (iVar7 != 0) {
      unaff_x23 = lVar25;
      if (unaff_x21 == 0) break;
      lVar12 = /*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(unaff_x21,0);
      uVar9 = *(ulong *)(lVar12 + 8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0);
      if (iVar7 != 0) {
        lVar12 = /*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(unaff_x21,0);
        uVar9 = *(ulong *)(lVar12 + 8);
        lVar12 = /*Atlas.Definitions.FTUEStageDefinition$$get_EventDefinition*/ func_0x01585930(unaff_x21,0);
        param_3 = (undefined8 *)puVar10[0x17];
        param_4 = puVar10[0x22];
        param_5 = (undefined8 *)puVar10[0x2c];
        unaff_x22 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                              (uVar9,*(undefined8 *)(lVar12 + 8));
        if (unaff_x22 != 0) {
          lVar12 = puVar10[0xe];
          puVar13 = (undefined8 *)/*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(unaff_x21,0);
          puVar10 = (undefined8 *)0x0;
          if (lVar12 != 0) {
            uVar11 = *puVar13;
            goto code_r0x0163d6f8;
          }
          break;
        }
      }
    }
    unaff_x22 = uVar9;
    unaff_x23 = 0x3d23990;
    if (puVar10[0x38] == 0) break;
    if (*(int *)(puVar10[0x38] + 0x18) != 2) {
      uVar9 = /*Atlas.Contexts.GameContextBase$$SwitchToFrontEndContext*/ func_0x01599da0(puVar10,0);
      return uVar9;
    }
    puVar31 = &UNK_01599af4;
    puVar13 = puVar10;
    uVar9 = unaff_x22;
    goto code_r0x01599c88;
  }
code_r0x01599b20:
  puVar31 = &Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer;
  lVar25 = func_0x00f78af4();
  uVar9 = unaff_x21;
code_r0x01599b24:
  lVar25 = *(long *)(lVar25 + 0x28);
  ppuStack_f0 = ppuVar29;
  puStack_e8 = puVar31;
  if (lVar25 != 0) {
    iVar7 = *(int *)(lVar25 + 0x18);
    if (0 < iVar7) {
      iVar23 = 0;
      do {
        if (iVar7 == iVar23) goto code_r0x01599b8c;
        uVar14 = *(ulong *)(lVar25 + (long)iVar23 * 8 + 0x20);
        if ((uVar14 == 0) || (*(long *)(uVar14 + 0x10) == 0)) goto code_r0x01599b88;
        if (*(int *)(*(long *)(uVar14 + 0x10) + 0x50) == 0) {
          return uVar14;
        }
        iVar23 = iVar23 + 1;
      } while (iVar7 != iVar23);
    }
    return 0;
  }
code_r0x01599b88:
  func_0x00f78af4();
code_r0x01599b8c:
  uVar11 = func_0x00f78b24();
  auVar38 = func_0x00f78ac0(uVar11,0);
  lVar12 = auVar38._8_8_;
  unaff_x25 = auVar38._0_8_;
  puVar4 = auStack_160;
  puStack_f8 = &Atlas_Contexts_GameContextBase__DispatchLeagueEventAnalytics;
  ppuVar29 = &puStack_100;
  puVar13 = puVar10;
  unaff_x21 = uVar9;
  lVar25 = unaff_x23;
  puStack_100 = (undefined1 *)&ppuStack_f0;
  if (*(long *)(unaff_x25 + 0x240) != 0) {
    puStack_100 = (undefined1 *)&ppuStack_f0;
    uVar9 = /*Atlas.League.LeagueManager$$GetReplayCountAndUpdate*/ func_0x015f4ae4(*(long *)(unaff_x25 + 0x240),param_3,0);
    puVar13 = param_5;
    puVar24 = param_3;
    unaff_x21 = param_4;
    lVar25 = lVar12;
    if ((*(long *)(unaff_x25 + 0x1b0) != 0) &&
       (unaff_x22 = uVar9, *(long *)(unaff_x25 + 0x240) != 0)) {
      unaff_x24 = *(ulong *)(*(long *)(unaff_x25 + 0x1b0) + 0x48);
      lVar12 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(unaff_x25 + 0x240),0);
      if ((lVar12 != 0) && (*(long *)(unaff_x25 + 0x240) != 0)) {
        unaff_x26 = *(undefined8 *)(lVar12 + 0x58);
        uVar11 = /*Atlas.League.LeagueManager$$GetCurrentSeed*/ func_0x015f499c(*(long *)(unaff_x25 + 0x240),0);
        if ((*(long *)(unaff_x25 + 0x240) != 0) &&
           (iVar7 = /*Atlas.League.LeagueManager$$GetTodayIndex*/ func_0x015f3c20(*(long *)(unaff_x25 + 0x240),0), unaff_x24 != 0)) {
          iVar23 = (int)param_4 - (int)param_5;
          if (auVar38._8_4_ == 0) {
            iVar23 = 0;
          }
          auStack_160[0] = 0;
          uVar9 = /*Atlas.Analytics.AtlasAnalyticsEvents$$LeagueEvent*/ func_0x01456ed4(unaff_x24,unaff_x26,uVar11,iVar7 + 1,(int)param_3 + 1,param_5,
                                  uVar9,iVar23);
          return uVar9;
        }
      }
    }
  }
  puVar31 = &Atlas_Contexts_GameContextBase__EndOfTournamentRound;
  puVar10 = (undefined8 *)func_0x00f78af4();
  uVar9 = unaff_x22;
code_r0x01599c88:
  puVar5 = (undefined1 *)((long)puVar4 + -0x30);
  *(ulong *)((long)puVar4 + -0x30) = uVar9;
  *(ulong *)((long)puVar4 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar4 + -0x20) = puVar24;
  *(undefined8 **)((long)puVar4 + -0x18) = puVar13;
  *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar29;
  *(undefined **)((long)puVar4 + -8) = puVar31;
  puVar30 = (undefined1 *)((long)puVar4 + -0x10);
  unaff_x22 = 0x3eb5000;
  if ((bRam0000000003eb51a9 & 1) == 0) {
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb51a9 = 1;
  }
  if ((puVar10[0x18] == 0) || (lVar12 = *(long *)(puVar10[0x18] + 0x20), lVar12 == 0)) {
code_r0x01599d9c:
    puVar31 = &Atlas_Contexts_GameContextBase__SwitchToFrontEndContext;
    auVar38 = func_0x00f78af4();
  }
  else {
    iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar12,0);
    if (iVar7 == 0) {
      unaff_x22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
      /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(unaff_x22,0);
      unaff_x21 = /*Atlas.Contexts.RoundResultsState_var*/ uRam0000000003d19d50;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      if (unaff_x22 != 0) {
        *(undefined8 *)(unaff_x22 + 0x18) = uVar11;
        lVar12 = puVar10[0xe];
        uVar11 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
        if (lVar12 != 0) goto code_r0x0163d6f8;
      }
      goto code_r0x01599d9c;
    }
    auVar38._8_8_ = 0;
    auVar38._0_8_ = puVar10;
    puVar30 = *(undefined1 **)((long)puVar4 + -0x10);
    puVar31 = *(undefined **)((long)puVar4 + -8);
    unaff_x22 = *(ulong *)((long)puVar4 + -0x20);
    puVar10 = *(undefined8 **)((long)puVar4 + -0x18);
    uVar9 = *(ulong *)((long)puVar4 + -0x30);
    unaff_x21 = *(ulong *)((long)puVar4 + -0x28);
    puVar5 = (undefined1 *)puVar4;
  }
  lVar26 = auVar38._8_8_;
  lVar16 = auVar38._0_8_;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(long *)(puVar5 + -0x48) = unaff_x25;
  *(ulong *)(puVar5 + -0x40) = unaff_x24;
  *(long *)(puVar5 + -0x38) = lVar25;
  *(ulong *)(puVar5 + -0x30) = uVar9;
  *(ulong *)(puVar5 + -0x28) = unaff_x21;
  *(ulong *)(puVar5 + -0x20) = unaff_x22;
  *(undefined8 **)(puVar5 + -0x18) = puVar10;
  *(undefined1 **)(puVar5 + -0x10) = puVar30;
  *(undefined **)(puVar5 + -8) = puVar31;
  lVar27 = 0x3eb5000;
  if ((bRam0000000003eb51a7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d194f0);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27688);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d28a08);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb51a7 = 1;
  }
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  unaff_x22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(unaff_x22,0);
  if (((unaff_x22 != 0) && (lVar12 = *(long *)(lVar16 + 0x1c0), lVar12 != 0)) &&
     (lVar22 = *(long *)(unaff_x22 + 0x10), lVar22 != 0)) {
    *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(lVar12 + 0x10);
    *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar12 + 0x38);
    *(undefined4 *)(lVar22 + 0x10) = *(undefined4 *)(lVar12 + 0x18);
    uVar18 = *(undefined8 *)(lVar12 + 0x80);
    uVar11 = *(undefined8 *)(lVar12 + 0x78);
    uVar34 = *(undefined8 *)(lVar12 + 0x90);
    uVar33 = *(undefined8 *)(lVar12 + 0x88);
    uVar36 = *(undefined8 *)(lVar12 + 0x98);
    uVar35 = *(undefined8 *)(lVar12 + 0xb0);
    uVar37 = *(undefined8 *)(lVar12 + 0xa8);
    *(undefined8 *)(lVar22 + 0x58) = *(undefined8 *)(lVar12 + 0xa0);
    *(undefined8 *)(lVar22 + 0x50) = uVar36;
    *(undefined8 *)(lVar22 + 0x68) = uVar35;
    *(undefined8 *)(lVar22 + 0x60) = uVar37;
    *(undefined8 *)(lVar22 + 0x38) = uVar18;
    *(undefined8 *)(lVar22 + 0x30) = uVar11;
    *(undefined8 *)(lVar22 + 0x48) = uVar34;
    *(undefined8 *)(lVar22 + 0x40) = uVar33;
    if ((*(long *)(lVar16 + 0x1c0) != 0) && (lVar27 = *(long *)(unaff_x22 + 0x10), lVar27 != 0)) {
      *(undefined8 *)(lVar27 + 0x28) = *(undefined8 *)(*(long *)(lVar16 + 0x1c0) + 200);
      if (*(long *)(lVar16 + 0x118) != 0) {
        uVar6 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar16 + 0x118),0);
        *(undefined1 *)(lVar27 + 0x78) = uVar6;
        if ((*(long *)(lVar16 + 0xb8) != 0) && (*(long *)(lVar16 + 0x1c0) != 0)) {
          uVar9 = 0x3d21270;
          uVar14 = 0x3d21270;
          lVar27 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
          lVar25 = *(long *)(*(long *)(lVar16 + 0x1c0) + 0x40);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar25,0);
          unaff_x24 = uVar9;
          if ((*(long *)(unaff_x22 + 0x10) != 0) && (lVar27 != 0)) {
            /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar27,uVar11,*(long *)(unaff_x22 + 0x10) + 0x70,uRam0000000003d57500);
            lVar12 = *(long *)(lVar16 + 0x1c0);
            unaff_x24 = uVar14;
            if ((lVar12 != 0) && (lVar27 = *(long *)(unaff_x22 + 0x10), lVar27 != 0)) {
              *(undefined8 *)(lVar27 + 0x28) = *(undefined8 *)(lVar12 + 200);
              iVar7 = auVar38._8_4_;
              switch(*(undefined4 *)(lVar12 + 0x18)) {
              case 1:
                lVar26 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
                Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor
                          (lVar26,0);
                if (lVar26 != 0) {
                  *(undefined8 *)(lVar26 + 0x10) = *(undefined8 *)(unaff_x22 + 0x10);
                  if ((*(long *)(lVar16 + 0x198) != 0) && (*(long *)(lVar16 + 0xc0) != 0)) {
                    uVar11 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromNetworkResults*/ func_0x0156505c(*(undefined8 *)(*(long *)(lVar16 + 0x198) + 0x98),
                                             *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x28),0);
                    *(undefined8 *)(lVar26 + 0x18) = uVar11;
                    *(long *)(unaff_x22 + 0x20) = lVar26;
                    lVar26 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ lRam0000000003d194d8;
                    if ((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0)
                    goto code_r0x0159a204;
                    goto code_r0x0159a210;
                  }
                }
                break;
              case 2:
                lVar12 = *(long *)(lVar16 + 0xc0);
                if ((lVar12 != 0) && (lVar22 = *(long *)(lVar12 + 0x20), lVar22 != 0)) {
                  uVar18 = *(undefined8 *)(lVar22 + 0xd8);
                  uVar11 = *(undefined8 *)(lVar22 + 0xd0);
                  uVar34 = *(undefined8 *)(lVar22 + 0xe8);
                  uVar33 = *(undefined8 *)(lVar22 + 0xe0);
                  *(undefined8 *)(puVar5 + -0x68) = uVar18;
                  *(undefined8 *)(puVar5 + -0x70) = uVar11;
                  *(undefined8 *)(puVar5 + -0x58) = uVar34;
                  *(undefined8 *)(puVar5 + -0x60) = uVar33;
                  *(undefined8 *)(puVar5 + -0x88) = uVar18;
                  *(undefined8 *)(puVar5 + -0x90) = uVar11;
                  *(undefined8 *)(puVar5 + -0x78) = uVar34;
                  *(undefined8 *)(puVar5 + -0x80) = uVar33;
                  uVar11 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromTournament*/ func_0x01565710(puVar5 + -0x90,*(undefined8 *)(lVar12 + 0x28),0);
                  lVar22 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData_TypeInfo*/ uRam0000000003d28a08);
                  *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x68);
                  *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x70);
                  *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x58);
                  *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x60);
                  /*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData$$.ctor*/ func_0x01566048(lVar22,lVar27,uVar11,puVar5 + -0xb0,0);
                  plVar15 = (long *)0x3d19d50;
                  *(long *)(unaff_x22 + 0x20) = lVar22;
code_r0x0159a1ec:
                  lVar26 = *plVar15;
                  lVar25 = lVar22;
                  if ((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) {
code_r0x0159a204:
                    if (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0) {
                      func_0x00f78ad0();
                    }
                  }
code_r0x0159a210:
                  uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar26,0);
                  *(undefined8 *)(unaff_x22 + 0x18) = uVar11;
                  goto code_r0x0159a220;
                }
                break;
              case 3:
                lVar27 = *(long *)(lVar12 + 0x40);
                if ((0 < iVar7) && (*(char *)(lVar16 + 0x24a) == '\0')) {
                  if ((*(long *)(lVar16 + 0xb8) == 0) ||
                     (lVar12 = /*Atlas.Definitions.AtlasDefinitions$$GetNextEventDefinition*/ func_0x01468b08(*(long *)(lVar16 + 0xb8),lVar27,1,0), lVar12 == 0))
                  break;
                  lVar27 = *(long *)(lVar12 + 0x18);
                }
                lVar22 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar22,0);
                lVar25 = lVar22;
                if (lVar22 != 0) {
                  *(int *)(lVar22 + 0x14) = iVar7;
                  *(undefined1 *)(lVar22 + 0x10) = *(undefined1 *)(lVar16 + 0x24a);
                  if (*(long *)(lVar16 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar22 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar16 + 0x1c0) + 0x40);
                    lVar12 = *(long *)(lVar16 + 0xf0);
                    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar26 = 0;
                    if (lVar12 != 0) {
                      iVar7 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedButNotComplete*/ func_0x01585640(lVar12,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8),
                                              0);
                      if (iVar7 == 0) {
                        lVar26 = *(long *)(unaff_x22 + 0x10);
                        uVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                        lVar25 = lVar27;
                        lVar12 = lVar22;
                        goto code_r0x0159a0f4;
                      }
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar18 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
                      uVar9 = *(ulong *)(unaff_x22 + 0x10);
                      uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                      Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                                (uVar11,lVar27,lVar22,uVar18,0,uVar9,0);
                      plVar15 = (long *)0x3d194e8;
code_r0x0159a070:
                      *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 4:
              case 5:
              case 9:
                lVar22 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar22,0);
                lVar27 = lVar22;
                if (lVar22 != 0) {
                  *(int *)(lVar22 + 0x14) = iVar7;
                  *(undefined1 *)(lVar22 + 0x10) = *(undefined1 *)(lVar16 + 0x24a);
                  if (*(long *)(lVar16 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar22 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar16 + 0x1c0) + 0x40);
                    lVar26 = *(long *)(unaff_x22 + 0x10);
                    if ((lVar26 != 0) && (*(long *)(lVar26 + 0x70) != 0)) {
                      lVar27 = *(long *)(*(long *)(lVar26 + 0x70) + 0x18);
                      uVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      lVar25 = lVar22;
                      lVar12 = lVar27;
code_r0x0159a0f4:
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar9,lVar26,lVar27,lVar22,/*STR('')*/ uRam0000000003d65d08,0);
                      plVar15 = (long *)0x3d194f0;
                      *(ulong *)(unaff_x22 + 0x20) = uVar9;
                      lVar27 = lVar25;
                      lVar22 = lVar12;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 6:
              case 7:
              case 8:
                lVar27 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar27,0);
                if (lVar27 != 0) {
                  *(int *)(lVar27 + 0x14) = iVar7;
                  *(undefined1 *)(lVar27 + 0x10) = *(undefined1 *)(lVar16 + 0x24a);
                  if (*(long *)(lVar16 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar27 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar16 + 0x1c0) + 0x40);
                    lVar26 = *(long *)(unaff_x22 + 0x10);
                    if ((((lVar26 != 0) && (*(long *)(lVar26 + 0x70) != 0)) &&
                        (*(long *)(lVar16 + 0x230) != 0)) &&
                       (lVar12 = *(long *)(*(long *)(lVar16 + 0x230) + 0x48), lVar12 != 0)) {
                      lVar22 = *(long *)(*(long *)(lVar26 + 0x70) + 0x18);
                      uVar9 = *(ulong *)(lVar12 + 0x18);
                      uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar11,lVar26,lVar22,lVar27,uVar9,0);
                      plVar15 = (long *)0x3d194f0;
                      goto code_r0x0159a070;
                    }
                  }
                }
                break;
              default:
code_r0x0159a220:
                lVar12 = *(long *)(lVar16 + 0x70);
                uVar11 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                unaff_x24 = uVar9;
                if (lVar12 != 0) {
code_r0x0163d6f8:
                  cVar2 = *(char *)(lVar12 + 0x50);
                  if (cVar2 == '\0') {
                    *(undefined1 *)(lVar12 + 0x50) = 1;
                    *(undefined8 *)(lVar12 + 0x40) = uVar11;
                    *(ulong *)(lVar12 + 0x48) = unaff_x22;
                  }
                  return (ulong)(cVar2 == '\0');
                }
              }
            }
          }
        }
      }
    }
  }
  plVar15 = (long *)func_0x00f78af4();
  *(long *)(puVar5 + -0xe0) = lVar27;
  *(long *)(puVar5 + -0xd8) = lVar26;
  *(ulong *)(puVar5 + -0xd0) = unaff_x22;
  *(long *)(puVar5 + -200) = lVar16;
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0xb8) = &Atlas_Contexts_GameContextBase__InitPickupLimitsDefinition;
  lVar12 = 0x3eb5000;
  if ((bRam0000000003eb51a5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d71248);
    func_0x00f78a20(0x3d71240);
    bRam0000000003eb51a5 = 1;
  }
  if (plVar15[0x38] != 0) {
    uVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar15[0x38] + 0x60,0);
    if ((uVar9 & 1) == 0) {
      lVar12 = plVar15[0x42];
    }
    else {
      if (((plVar15[0x17] == 0) || (plVar15[0x38] == 0)) ||
         (lVar16 = *(long *)(plVar15[0x17] + 0x10), lVar16 == 0)) goto code_r0x0159a554;
      lVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)(plVar15[0x38] + 0x60),uRam0000000003d572e8);
      plVar15[0x42] = lVar12;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    plVar21 = (long *)0x3d71240;
    if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar15 + 300)) &&
       (plVar21 = (long *)0x3d71248,
       *(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
       != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
      plVar21 = (long *)0x3d71240;
    }
    if (plVar15[0x17] != 0) {
      lVar26 = *plVar21;
      lVar16 = *(long *)(plVar15[0x17] + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar26,0);
      lVar12 = 0;
      if (lVar16 != 0) {
        uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,uVar11,uRam0000000003d572e8);
        plVar15[0x42] = uVar9;
        return uVar9;
      }
    }
  }
code_r0x0159a554:
  fVar32 = (float)func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x110) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x108) = unaff_d8;
  *(long *)(puVar5 + -0x100) = lVar12;
  *(long **)(puVar5 + -0xf8) = plVar15;
  *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xc0;
  *(undefined **)(puVar5 + -0xe8) = &Atlas_Contexts_GameContextBase__UpdateLoadingProgress;
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x110);
  *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x108);
  *(long *)(puVar5 + -0x110) = lVar27;
  *(long *)(puVar5 + -0x108) = lVar26;
  *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0x100);
  *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0xf8);
  *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
  *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  uVar8 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar32 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4,0
                         );
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar12 == 0) {
    func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x140) = uVar11;
    *(undefined8 *)(puVar5 + -0x138) = 1;
    *(undefined1 **)(puVar5 + -0x130) = puVar5 + -0xf0;
    *(undefined **)(puVar5 + -0x128) = &Atlas_UI_LoadingBehaviour__HasFinishedLoading;
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar12 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar12 + 0x10) == '\0') {
      return 0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar12 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar26 = lRam0000000003d2bf00;
    *(undefined8 *)(puVar5 + -0x150) = 0x3d23990;
    *(undefined8 *)(puVar5 + -0x148) = 0x3d23050;
    *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x140);
    *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x138);
    *(undefined8 *)(puVar5 + -0x130) = *(undefined8 *)(puVar5 + -0x130);
    *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)(puVar5 + -0x128);
    lVar27 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar16 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x58);
    *(ulong *)(puVar5 + -0x1a0) = unaff_x24;
    *(long *)(puVar5 + -0x198) = lVar25;
    *(undefined8 *)(puVar5 + -400) = 0x3d23990;
    *(long *)(puVar5 + -0x188) = lVar27;
    *(long **)(puVar5 + -0x180) = (long *)(lVar12 + 0x18);
    *(long *)(puVar5 + -0x178) = lVar26;
    *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0x130;
    *(undefined **)(puVar5 + -0x168) = &UNK_01b570c0;
    lVar25 = *(long *)(lVar12 + 0x18);
    if (lVar25 == 0) {
      uVar9 = 0;
    }
    else {
      lVar27 = *(long *)(lVar16 + 0x18);
      uVar3 = *(ushort *)(lVar27 + 0x132);
      lVar26 = lVar27;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar27);
        lVar26 = *(long *)(lVar16 + 0x18);
        uVar3 = *(ushort *)(lVar26 + 0x132);
      }
      pcVar28 = *(code **)**(undefined8 **)(lVar27 + 0xc0);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      iVar7 = (*pcVar28)(lVar25,**(undefined8 **)(lVar26 + 0xc0));
      uVar9 = (ulong)(iVar7 == *(int *)(lVar12 + 0x20));
    }
    return uVar9;
  }
  uVar11 = *(undefined8 *)(puVar5 + -0x100);
  uVar33 = *(undefined8 *)(puVar5 + -0xf8);
  uVar18 = *(undefined8 *)(puVar5 + -0x110);
  uVar34 = *(undefined8 *)(puVar5 + -0x108);
  uVar37 = *(undefined8 *)(puVar5 + -0x120);
  uVar36 = *(undefined8 *)(puVar5 + -0x118);
  *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
  *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
  uVar9 = *(ulong *)(lVar12 + 0x20);
  if (uVar9 == 0) {
    auVar38 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0xf0;
    *(undefined **)(puVar5 + -0xf8) = &Atlas_UI_LoadingBehaviour__set_BuildInfo;
    plVar15 = *(long **)(auVar38._0_8_ + 0x28);
    if (plVar15 == (long *)0x0) {
      lVar25 = func_0x00f78af4();
      return *(ulong *)(lVar25 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*plVar15 + 0x558))(plVar15,auVar38._8_8_,*(undefined8 *)(*plVar15 + 0x560))
    ;
    return uVar9;
  }
  *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
  *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
  *(undefined1 *)(uVar9 + 0x90) = 1;
  *(undefined4 *)(uVar9 + 0x94) = uVar8;
  *(undefined8 *)(uVar9 + 0x98) = 0;
  if (*(char *)(uVar9 + 0x3c) == '\0') {
    return uVar9;
  }
  uVar9 = *(ulong *)(uVar9 + 0xb8);
  if (uVar9 != 0) {
    *(undefined8 *)(puVar5 + -0x100) = uVar11;
    *(undefined8 *)(puVar5 + -0xf8) = uVar33;
    *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
    *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,0,0);
    return uVar9;
  }
  lVar12 = func_0x00f78af4(0,0,0);
  *(undefined8 *)(puVar5 + -0x130) = uVar37;
  *(undefined8 *)(puVar5 + -0x128) = uVar36;
  *(undefined8 *)(puVar5 + -0x120) = uVar18;
  *(undefined8 *)(puVar5 + -0x118) = uVar34;
  *(undefined8 *)(puVar5 + -0x110) = uVar11;
  *(undefined8 *)(puVar5 + -0x108) = uVar33;
  *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0xf0;
  *(undefined **)(puVar5 + -0xf8) = &Atlas_UI_SlantFillBar__AddThresholdEvent;
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar9 = *(ulong *)(lVar12 + 0xc0);
  if (uVar9 == 0) {
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar9,uRam0000000003d3d9e0);
    *(ulong *)(lVar12 + 0xc0) = uVar9;
    if (uVar9 == 0) {
      lVar25 = func_0x00f78af4();
      *(long *)(puVar5 + -0x150) = lVar12;
      *(undefined8 **)(puVar5 + -0x148) = extraout_x1;
      *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x100;
      *(undefined **)(puVar5 + -0x138) = &Atlas_UI_SlantFillBar__ClearThresholdEvents;
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar9 = *(ulong *)(lVar25 + 0xc0);
      if (uVar9 == 0) {
        return 0;
      }
      *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0x150);
      *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0x148);
      *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x140);
      *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x138);
      uVar14 = uVar9;
      if (0 < *(int *)(uVar9 + 0x18)) {
        uVar14 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar9 + 0x10),0,*(int *)(uVar9 + 0x18),0);
        *(undefined4 *)(uVar9 + 0x18) = 0;
      }
      *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
      return uVar14;
    }
  }
  uVar19 = (ulong)extraout_s0;
  puVar10 = *(undefined8 **)(puVar5 + -0x110);
  uVar14 = *(ulong *)(puVar5 + -0x108);
  uVar11 = *(undefined8 *)(puVar5 + -0x120);
  uVar1 = *(ulong *)(puVar5 + -0x118);
  *(undefined8 *)(puVar5 + -0x120) = uVar11;
  *(ulong *)(puVar5 + -0x118) = uVar1;
  *(undefined8 **)(puVar5 + -0x110) = puVar10;
  *(ulong *)(puVar5 + -0x108) = uVar14;
  *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0x100);
  *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0xf8);
  lVar12 = *(long *)(uVar9 + 0x10);
  puVar24 = extraout_x1;
  if (lVar12 == 0) {
code_r0x0259cf3c:
    uVar19 = uVar1;
    uVar9 = uVar14;
    uVar17 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar20 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar9 + 0x18) = uVar20 + 1;
  }
  else {
    uVar20 = *(uint *)(uVar9 + 0x18);
    uVar17 = uVar9;
    puVar10 = extraout_x1;
    if (uVar20 != *(uint *)(lVar12 + 0x18)) goto code_r0x0259cf40;
    puVar24 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar17 = (*(code *)*puVar24)(uVar9,uVar20 + 1);
    lVar12 = *(long *)(uVar9 + 0x10);
    uVar20 = *(uint *)(uVar9 + 0x18);
    *(uint *)(uVar9 + 0x18) = uVar20 + 1;
    uVar14 = uVar9;
    uVar1 = uVar19;
    if (lVar12 == 0) goto code_r0x0259cf3c;
  }
  if (uVar20 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)uVar20 * 0x10;
    *(ulong *)(lVar12 + 0x20) = uVar19;
    *(undefined8 **)(lVar12 + 0x28) = puVar10;
    *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
    return uVar17;
  }
  uVar18 = func_0x00f78b24();
  auVar38 = func_0x00f78ac0(uVar18,0);
  plVar15 = auVar38._8_8_;
  lVar12 = auVar38._0_8_;
  *(ulong *)(puVar5 + -0x160) = unaff_x24;
  *(long *)(puVar5 + -0x158) = lVar25;
  *(undefined8 *)(puVar5 + -0x150) = uVar11;
  *(ulong *)(puVar5 + -0x148) = uVar19;
  *(undefined8 **)(puVar5 + -0x140) = puVar10;
  *(ulong *)(puVar5 + -0x138) = uVar9;
  *(undefined1 **)(puVar5 + -0x130) = puVar5 + -0x100;
  *(undefined **)(puVar5 + -0x128) =
       &System_Collections_Generic_List_SlantFillBar_ThresholdEvent___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar24[3] + 0xc0) + 0x48))(plVar15,0x14);
  if (lVar12 != 0) {
    pcVar28 = (code *)**(undefined8 **)(*(long *)(puVar24[3] + 0xc0) + 0x28);
    lVar25 = *(long *)(*(long *)(puVar24[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar25);
    }
    if (plVar15 != (long *)0x0) {
      if (*(long *)(*plVar15 + 0x40) == *(long *)(lVar25 + 0x40)) {
        puVar10 = (undefined8 *)func_0x00f78ae4(plVar15);
        (*pcVar28)(lVar12,*puVar10,puVar10[1],*(undefined8 *)(*(long *)(puVar24[3] + 0xc0) + 0x28));
        iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar24[3] + 0xc0) + 0x68))(lVar12);
        return (ulong)(iVar7 - 1);
      }
      func_0x00f78e5c(plVar15,lVar25);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar28 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar28)();
}



// ============================================================
// RVA: 0x15992e8 | Atlas.Contexts.GameContextBase.ExitContext
// ============================================================

/* WARNING: Possible PIC construction at 0x01599ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159a23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015998ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015995ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015997c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01599618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159992c) */
/* WARNING: Removing unreachable block (ram,0x01599930) */
/* WARNING: Removing unreachable block (ram,0x01599934) */
/* WARNING: Removing unreachable block (ram,0x0159994c) */
/* WARNING: Removing unreachable block (ram,0x01599978) */
/* WARNING: Removing unreachable block (ram,0x015997c8) */
/* WARNING: Removing unreachable block (ram,0x015997cc) */
/* WARNING: Removing unreachable block (ram,0x015997d4) */
/* WARNING: Removing unreachable block (ram,0x015997d8) */
/* WARNING: Removing unreachable block (ram,0x015995b0) */
/* WARNING: Removing unreachable block (ram,0x015995b4) */
/* WARNING: Removing unreachable block (ram,0x015995bc) */
/* WARNING: Removing unreachable block (ram,0x015995c4) */
/* WARNING: Removing unreachable block (ram,0x015995c8) */
/* WARNING: Removing unreachable block (ram,0x015995e4) */
/* WARNING: Removing unreachable block (ram,0x015998f0) */
/* WARNING: Removing unreachable block (ram,0x01599860) */
/* WARNING: Removing unreachable block (ram,0x01599864) */
/* WARNING: Removing unreachable block (ram,0x0159986c) */
/* WARNING: Removing unreachable block (ram,0x01599874) */
/* WARNING: Removing unreachable block (ram,0x01599878) */
/* WARNING: Removing unreachable block (ram,0x01599894) */
/* WARNING: Removing unreachable block (ram,0x015998c0) */
/* WARNING: Removing unreachable block (ram,0x015998d8) */
/* WARNING: Removing unreachable block (ram,0x01599af4) */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Removing unreachable block (ram,0x0159a240) */
/* WARNING: Removing unreachable block (ram,0x01599ad4) */
/* WARNING: Removing unreachable block (ram,0x0159961c) */
/* WARNING: Removing unreachable block (ram,0x01599620) */
/* WARNING: Removing unreachable block (ram,0x01599628) */
/* WARNING: Removing unreachable block (ram,0x0159962c) */
/* WARNING: Removing unreachable block (ram,0x01599648) */
/* WARNING: Removing unreachable block (ram,0x01599674) */
/* WARNING: Removing unreachable block (ram,0x01599688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__ExitContext
                (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                undefined8 *param_5)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *extraout_x1;
  ulong uVar18;
  uint extraout_w8;
  uint uVar19;
  long *plVar20;
  long lVar21;
  long extraout_x9;
  int iVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong unaff_x21;
  long lVar25;
  ulong unaff_x22;
  long lVar26;
  long unaff_x23;
  code *pcVar27;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  uint extraout_s0;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 unaff_d8;
  undefined8 uVar36;
  undefined8 unaff_d9;
  undefined1 auVar37 [16];
  undefined8 auStack_140 [2];
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  int iStack_a4;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar4 = (undefined8 *)auStack_c0;
  ppuVar28 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar23 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb51a4 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc18);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d21688);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51a4 = 1;
  }
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((param_1[0x17] == 0) || (param_1[0x38] == 0)) goto LAB_01599b20;
  lVar24 = *(long *)(param_1[0x17] + 0x10);
  unaff_x21 = *(ulong *)(param_1[0x38] + 0x40);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x21,0);
  puVar23 = (undefined8 *)0x0;
  if (lVar24 == 0) goto LAB_01599b20;
  unaff_x21 = 0x3d21000;
  param_3 = &uStack_68;
  param_4 = uRam0000000003d57500;
  /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar24,uVar9);
  puVar23 = (undefined8 *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
  /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(puVar23,0);
  lVar24 = param_1[0x38];
  if ((lVar24 == 0) || (puVar23 == (undefined8 *)0x0)) goto LAB_01599b20;
  puVar23[3] = *(undefined8 *)(lVar24 + 0x10);
  puVar23[4] = *(undefined8 *)(lVar24 + 0x38);
  *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(lVar24 + 0x18);
  uVar17 = *(undefined8 *)(lVar24 + 0x80);
  uVar9 = *(undefined8 *)(lVar24 + 0x78);
  uVar33 = *(undefined8 *)(lVar24 + 0x90);
  uVar32 = *(undefined8 *)(lVar24 + 0x88);
  uVar35 = *(undefined8 *)(lVar24 + 0x98);
  uVar34 = *(undefined8 *)(lVar24 + 0xb0);
  uVar36 = *(undefined8 *)(lVar24 + 0xa8);
  puVar23[0xb] = *(undefined8 *)(lVar24 + 0xa0);
  puVar23[10] = uVar35;
  puVar23[0xd] = uVar34;
  puVar23[0xc] = uVar36;
  puVar23[7] = uVar17;
  puVar23[6] = uVar9;
  puVar23[9] = uVar33;
  puVar23[8] = uVar32;
  if (param_1[0x38] == 0) goto LAB_01599b20;
  puVar23[5] = *(undefined8 *)(param_1[0x38] + 200);
  puVar23[0xe] = uStack_68;
  if ((param_1[0x17] == 0) || (lVar24 = *(long *)(param_1[0x17] + 0x10), lVar24 == 0))
  goto LAB_01599b20;
  uVar10 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(lVar24,uRam0000000003d57360);
  if (param_1[0x38] == 0) goto LAB_01599b20;
  unaff_x21 = uVar10;
  if (*(int *)(param_1[0x38] + 0x18) == 2) {
    if ((param_1[0x18] != 0) && (lVar24 = *(long *)(param_1[0x18] + 0x20), lVar24 != 0)) {
      iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar24,0);
      if (iVar7 != 0) goto LAB_015994d8;
      goto LAB_015994e8;
    }
    goto LAB_01599b20;
  }
LAB_015994d8:
  if (param_1[0x1d] == 0) goto LAB_01599b20;
  /*Atlas.Stats.DailyChallengeManager$$UpdateAllDailyChallengeProgress*/ func_0x015754ec(param_1[0x1d],0);
LAB_015994e8:
  unaff_x22 = param_1[0x22];
  if (unaff_x22 == 0) goto LAB_01599b20;
  uVar9 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x22,0);
  param_3 = (undefined8 *)0x0;
  uVar8 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x22,uVar9);
  *(undefined4 *)(unaff_x22 + 0x40) = uVar8;
  lVar24 = param_1[0x38];
  if (lVar24 == 0) goto LAB_01599b20;
  switch(*(undefined4 *)(lVar24 + 0x18)) {
  case 1:
    lVar24 = param_1[8];
    if (lVar24 == 0) break;
    unaff_x22 = param_1[0x2c];
    puVar30 = &UNK_0159961c;
    goto code_r0x01599b24;
  case 2:
    if ((param_1[0x18] != 0) && (lVar24 = *(long *)(param_1[0x18] + 0x20), lVar24 != 0)) {
      iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar24,0);
      if (iVar7 == 0) goto LAB_01599984;
      if ((param_1[0x18] != 0) && (lVar24 = *(long *)(param_1[0x18] + 0x20), lVar24 != 0)) {
        uStack_88 = *(ulong *)(lVar24 + 0xd8);
        uStack_90 = *(undefined8 *)(lVar24 + 0xd0);
        uStack_78 = *(undefined8 *)(lVar24 + 0xe8);
        uStack_80 = *(undefined8 *)(lVar24 + 0xe0);
        /*Core.Networking.NetworkTournament$$SortTotalScores*/ func_0x016611ac(&uStack_90,0);
        unaff_x24 = uStack_88;
        if (uStack_88 != 0) {
          unaff_x22 = 1;
          unaff_x23 = 0xc;
          do {
            unaff_x24 = uStack_88;
            uVar19 = (int)unaff_x22 - 1;
            if ((int)*(uint *)(uStack_88 + 0x18) <= (int)uVar19) {
              unaff_x22 = 1;
code_r0x0159991c:
              lVar24 = param_1[8];
              if (lVar24 != 0) {
                unaff_x23 = param_1[0x2c];
                puVar30 = &UNK_0159992c;
                goto code_r0x01599b24;
              }
              break;
            }
            if (*(uint *)(uStack_88 + 0x18) <= uVar19) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((param_1[0x18] == 0) || (lVar24 = *(long *)(param_1[0x18] + 0x20), lVar24 == 0))
            break;
            unaff_x24 = *(ulong *)(*(long *)(unaff_x24 + 0x10) + (long)(int)uVar19 * 0xc + 0x20);
            /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_b0,lVar24,0);
            if (iStack_a4 == (int)unaff_x24) {
              if (param_1[0x2c] != 0) {
                param_4 = param_1[0x1f];
                param_3 = (undefined8 *)param_1[0x43];
                param_5 = puVar23;
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(param_1[0x2c],unaff_x24 >> 0x20);
                goto code_r0x0159991c;
              }
              break;
            }
            unaff_x22 = (ulong)((int)unaff_x22 + 1);
            unaff_x24 = uStack_88;
          } while (uStack_88 != 0);
        }
      }
    }
    break;
  case 3:
    iVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar24 + 0x40,0);
    if ((iVar7 == 0) || (*(char *)(param_1 + 0x49) == '\0')) goto LAB_01599984;
    lVar24 = param_1[0x1e];
    unaff_x22 = 0x3d21b08;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x21 = 0;
    if (lVar24 != 0) {
      param_3 = (undefined8 *)0x0;
      uVar10 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedAndComplete*/ func_0x01584c64(lVar24,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8));
      lVar24 = param_1[8];
      unaff_x21 = uVar10;
      if (lVar24 != 0) {
        unaff_x22 = param_1[0x2c];
        puVar30 = &UNK_015997c8;
        goto code_r0x01599b24;
      }
    }
    break;
  case 4:
  case 5:
    lVar24 = param_1[8];
    if (lVar24 != 0) {
      unaff_x22 = param_1[0x2c];
      puVar30 = &UNK_015995b0;
      goto code_r0x01599b24;
    }
    break;
  case 6:
  case 7:
  case 8:
    if (param_1[8] != 0) {
      uVar10 = param_1[0x2c];
      lVar24 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24();
      unaff_x21 = uVar10;
      if ((lVar24 != 0) && (param_1[0x46] != 0)) {
        unaff_x22 = *(ulong *)(lVar24 + 0x28);
        puVar12 = (undefined8 *)/*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(param_1[0x46],0);
        lVar24 = param_1[0x46];
        if ((lVar24 != 0) && (uVar10 != 0)) {
          param_5 = *(undefined8 **)(lVar24 + 0x50);
          param_4 = (ulong)*(byte *)(lVar24 + 0x8e);
          /*Atlas.Stats.UnlockManager$$EvaluateArcadeXPAwards*/ func_0x0151f61c(uVar10,unaff_x22);
          param_3 = puVar12;
          goto LAB_01599984;
        }
      }
    }
    break;
  case 9:
    if (param_1[0x48] != 0) {
      param_3 = (undefined8 *)0x0;
      unaff_x22 = /*Atlas.League.LeagueManager$$GetMapDayIndex*/ func_0x015f4a00(param_1[0x48],puVar23[4]);
      if (param_1[0x48] != 0) {
        param_3 = (undefined8 *)0x0;
        unaff_x23 = /*Atlas.League.LeagueManager$$GetPlayerPlacementForDayIndex*/ func_0x015f3cf4(param_1[0x48],unaff_x22);
        if (param_1[0x48] != 0) {
          param_3 = (undefined8 *)0x0;
          unaff_x24 = /*Atlas.League.LeagueManager$$HasPlayedEvent*/ func_0x015f3c44(param_1[0x48],unaff_x22);
          lVar24 = param_1[8];
          if (lVar24 != 0) {
            puVar30 = &UNK_01599860;
            goto code_r0x01599b24;
          }
        }
      }
    }
    break;
  default:
LAB_01599984:
    puVar23 = (undefined8 *)0x0;
    unaff_x21 = uVar10;
    if (param_1[0x1c] == 0) break;
    /*Atlas.Stats.AchievementManager$$SubmitAllRequiredAchievementsProgress*/ func_0x014474d0(param_1[0x1c],0);
    lVar24 = param_1[3];
    if (lVar24 == 0) break;
    *(undefined1 *)(lVar24 + 0x5d) = 0;
    if (*(long *)(lVar24 + 0x10) == 0) break;
    /*Atlas.Stats.StatsManager$$CommitTransaction*/ func_0x01504e80(*(long *)(lVar24 + 0x10),0);
    if (param_1[0x1e] == 0) break;
    /*Atlas.FrontEnd.FTUEManager$$EvaluateStages*/ func_0x01584f68(param_1[0x1e],0);
    if (param_1[0x2b] == 0) break;
    /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(param_1[0x2b],0);
    if (param_1[0x2b] == 0) break;
    /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(param_1[0x2b],0);
    if (param_1[0x1e] == 0) break;
    lVar24 = 0x3d23990;
    unaff_x21 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0(param_1[0x1e],0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (undefined8 *)0x0;
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
    uVar10 = unaff_x22;
    if (iVar7 != 0) {
      unaff_x23 = lVar24;
      if (unaff_x21 == 0) break;
      lVar11 = /*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(unaff_x21,0);
      uVar10 = *(ulong *)(lVar11 + 8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0);
      if (iVar7 != 0) {
        lVar11 = /*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(unaff_x21,0);
        uVar10 = *(ulong *)(lVar11 + 8);
        lVar11 = /*Atlas.Definitions.FTUEStageDefinition$$get_EventDefinition*/ func_0x01585930(unaff_x21,0);
        param_3 = (undefined8 *)param_1[0x17];
        param_4 = param_1[0x22];
        param_5 = (undefined8 *)param_1[0x2c];
        unaff_x22 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                              (uVar10,*(undefined8 *)(lVar11 + 8));
        if (unaff_x22 != 0) {
          lVar11 = param_1[0xe];
          puVar12 = (undefined8 *)/*Atlas.Definitions.FTUEStageDefinition$$get_GameContextDefinition*/ func_0x01585928(unaff_x21,0);
          param_1 = (undefined8 *)0x0;
          if (lVar11 != 0) {
            uVar9 = *puVar12;
            goto code_r0x0163d6f8;
          }
          break;
        }
      }
    }
    unaff_x22 = uVar10;
    unaff_x23 = 0x3d23990;
    if (param_1[0x38] == 0) break;
    if (*(int *)(param_1[0x38] + 0x18) != 2) {
      uVar10 = /*Atlas.Contexts.GameContextBase$$SwitchToFrontEndContext*/ func_0x01599da0(param_1,0);
      return uVar10;
    }
    puVar30 = &UNK_01599af4;
    puVar12 = param_1;
    uVar10 = unaff_x22;
    goto code_r0x01599c88;
  }
LAB_01599b20:
  puVar30 = &Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer;
  lVar24 = func_0x00f78af4();
  uVar10 = unaff_x21;
code_r0x01599b24:
  lVar24 = *(long *)(lVar24 + 0x28);
  ppuStack_d0 = ppuVar28;
  puStack_c8 = puVar30;
  if (lVar24 != 0) {
    iVar7 = *(int *)(lVar24 + 0x18);
    if (0 < iVar7) {
      iVar22 = 0;
      do {
        if (iVar7 == iVar22) goto code_r0x01599b8c;
        uVar13 = *(ulong *)(lVar24 + (long)iVar22 * 8 + 0x20);
        if ((uVar13 == 0) || (*(long *)(uVar13 + 0x10) == 0)) goto code_r0x01599b88;
        if (*(int *)(*(long *)(uVar13 + 0x10) + 0x50) == 0) {
          return uVar13;
        }
        iVar22 = iVar22 + 1;
      } while (iVar7 != iVar22);
    }
    return 0;
  }
code_r0x01599b88:
  func_0x00f78af4();
code_r0x01599b8c:
  uVar9 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar9,0);
  lVar11 = auVar37._8_8_;
  unaff_x25 = auVar37._0_8_;
  puVar4 = auStack_140;
  puStack_d8 = &Atlas_Contexts_GameContextBase__DispatchLeagueEventAnalytics;
  ppuVar28 = &puStack_e0;
  puVar12 = param_1;
  unaff_x21 = uVar10;
  lVar24 = unaff_x23;
  puStack_e0 = (undefined1 *)&ppuStack_d0;
  if (*(long *)(unaff_x25 + 0x240) != 0) {
    puStack_e0 = (undefined1 *)&ppuStack_d0;
    uVar10 = /*Atlas.League.LeagueManager$$GetReplayCountAndUpdate*/ func_0x015f4ae4(*(long *)(unaff_x25 + 0x240),param_3,0);
    puVar12 = param_5;
    puVar23 = param_3;
    unaff_x21 = param_4;
    lVar24 = lVar11;
    if ((*(long *)(unaff_x25 + 0x1b0) != 0) &&
       (unaff_x22 = uVar10, *(long *)(unaff_x25 + 0x240) != 0)) {
      unaff_x24 = *(ulong *)(*(long *)(unaff_x25 + 0x1b0) + 0x48);
      lVar11 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(unaff_x25 + 0x240),0);
      if ((lVar11 != 0) && (*(long *)(unaff_x25 + 0x240) != 0)) {
        unaff_x26 = *(undefined8 *)(lVar11 + 0x58);
        uVar9 = /*Atlas.League.LeagueManager$$GetCurrentSeed*/ func_0x015f499c(*(long *)(unaff_x25 + 0x240),0);
        if ((*(long *)(unaff_x25 + 0x240) != 0) &&
           (iVar7 = /*Atlas.League.LeagueManager$$GetTodayIndex*/ func_0x015f3c20(*(long *)(unaff_x25 + 0x240),0), unaff_x24 != 0)) {
          iVar22 = (int)param_4 - (int)param_5;
          if (auVar37._8_4_ == 0) {
            iVar22 = 0;
          }
          auStack_140[0] = 0;
          uVar10 = /*Atlas.Analytics.AtlasAnalyticsEvents$$LeagueEvent*/ func_0x01456ed4(unaff_x24,unaff_x26,uVar9,iVar7 + 1,(int)param_3 + 1,param_5,
                                   uVar10,iVar22);
          return uVar10;
        }
      }
    }
  }
  puVar30 = &Atlas_Contexts_GameContextBase__EndOfTournamentRound;
  param_1 = (undefined8 *)func_0x00f78af4();
  uVar10 = unaff_x22;
code_r0x01599c88:
  puVar5 = (undefined1 *)((long)puVar4 + -0x30);
  *(ulong *)((long)puVar4 + -0x30) = uVar10;
  *(ulong *)((long)puVar4 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar4 + -0x20) = puVar23;
  *(undefined8 **)((long)puVar4 + -0x18) = puVar12;
  *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar28;
  *(undefined **)((long)puVar4 + -8) = puVar30;
  puVar29 = (undefined1 *)((long)puVar4 + -0x10);
  unaff_x22 = 0x3eb5000;
  if ((bRam0000000003eb51a9 & 1) == 0) {
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb51a9 = 1;
  }
  if ((param_1[0x18] == 0) || (lVar11 = *(long *)(param_1[0x18] + 0x20), lVar11 == 0)) {
code_r0x01599d9c:
    puVar30 = &Atlas_Contexts_GameContextBase__SwitchToFrontEndContext;
    auVar37 = func_0x00f78af4();
  }
  else {
    iVar7 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar11,0);
    if (iVar7 == 0) {
      unaff_x22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
      /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(unaff_x22,0);
      unaff_x21 = /*Atlas.Contexts.RoundResultsState_var*/ uRam0000000003d19d50;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      if (unaff_x22 != 0) {
        *(undefined8 *)(unaff_x22 + 0x18) = uVar9;
        lVar11 = param_1[0xe];
        uVar9 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
        if (lVar11 != 0) goto code_r0x0163d6f8;
      }
      goto code_r0x01599d9c;
    }
    auVar37._8_8_ = 0;
    auVar37._0_8_ = param_1;
    puVar29 = *(undefined1 **)((long)puVar4 + -0x10);
    puVar30 = *(undefined **)((long)puVar4 + -8);
    unaff_x22 = *(ulong *)((long)puVar4 + -0x20);
    param_1 = *(undefined8 **)((long)puVar4 + -0x18);
    uVar10 = *(ulong *)((long)puVar4 + -0x30);
    unaff_x21 = *(ulong *)((long)puVar4 + -0x28);
    puVar5 = (undefined1 *)puVar4;
  }
  lVar25 = auVar37._8_8_;
  lVar15 = auVar37._0_8_;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(long *)(puVar5 + -0x48) = unaff_x25;
  *(ulong *)(puVar5 + -0x40) = unaff_x24;
  *(long *)(puVar5 + -0x38) = lVar24;
  *(ulong *)(puVar5 + -0x30) = uVar10;
  *(ulong *)(puVar5 + -0x28) = unaff_x21;
  *(ulong *)(puVar5 + -0x20) = unaff_x22;
  *(undefined8 **)(puVar5 + -0x18) = param_1;
  *(undefined1 **)(puVar5 + -0x10) = puVar29;
  *(undefined **)(puVar5 + -8) = puVar30;
  lVar26 = 0x3eb5000;
  if ((bRam0000000003eb51a7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d194f0);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27688);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d28a08);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb51a7 = 1;
  }
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  unaff_x22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(unaff_x22,0);
  if (((unaff_x22 != 0) && (lVar11 = *(long *)(lVar15 + 0x1c0), lVar11 != 0)) &&
     (lVar21 = *(long *)(unaff_x22 + 0x10), lVar21 != 0)) {
    *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
    *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar11 + 0x38);
    *(undefined4 *)(lVar21 + 0x10) = *(undefined4 *)(lVar11 + 0x18);
    uVar17 = *(undefined8 *)(lVar11 + 0x80);
    uVar9 = *(undefined8 *)(lVar11 + 0x78);
    uVar33 = *(undefined8 *)(lVar11 + 0x90);
    uVar32 = *(undefined8 *)(lVar11 + 0x88);
    uVar35 = *(undefined8 *)(lVar11 + 0x98);
    uVar34 = *(undefined8 *)(lVar11 + 0xb0);
    uVar36 = *(undefined8 *)(lVar11 + 0xa8);
    *(undefined8 *)(lVar21 + 0x58) = *(undefined8 *)(lVar11 + 0xa0);
    *(undefined8 *)(lVar21 + 0x50) = uVar35;
    *(undefined8 *)(lVar21 + 0x68) = uVar34;
    *(undefined8 *)(lVar21 + 0x60) = uVar36;
    *(undefined8 *)(lVar21 + 0x38) = uVar17;
    *(undefined8 *)(lVar21 + 0x30) = uVar9;
    *(undefined8 *)(lVar21 + 0x48) = uVar33;
    *(undefined8 *)(lVar21 + 0x40) = uVar32;
    if ((*(long *)(lVar15 + 0x1c0) != 0) && (lVar26 = *(long *)(unaff_x22 + 0x10), lVar26 != 0)) {
      *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(*(long *)(lVar15 + 0x1c0) + 200);
      if (*(long *)(lVar15 + 0x118) != 0) {
        uVar6 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar15 + 0x118),0);
        *(undefined1 *)(lVar26 + 0x78) = uVar6;
        if ((*(long *)(lVar15 + 0xb8) != 0) && (*(long *)(lVar15 + 0x1c0) != 0)) {
          uVar10 = 0x3d21270;
          uVar13 = 0x3d21270;
          lVar26 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
          lVar24 = *(long *)(*(long *)(lVar15 + 0x1c0) + 0x40);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar24,0);
          unaff_x24 = uVar10;
          if ((*(long *)(unaff_x22 + 0x10) != 0) && (lVar26 != 0)) {
            /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar26,uVar9,*(long *)(unaff_x22 + 0x10) + 0x70,uRam0000000003d57500);
            lVar11 = *(long *)(lVar15 + 0x1c0);
            unaff_x24 = uVar13;
            if ((lVar11 != 0) && (lVar26 = *(long *)(unaff_x22 + 0x10), lVar26 != 0)) {
              *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(lVar11 + 200);
              iVar7 = auVar37._8_4_;
              switch(*(undefined4 *)(lVar11 + 0x18)) {
              case 1:
                lVar25 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
                Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor
                          (lVar25,0);
                if (lVar25 != 0) {
                  *(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)(unaff_x22 + 0x10);
                  if ((*(long *)(lVar15 + 0x198) != 0) && (*(long *)(lVar15 + 0xc0) != 0)) {
                    uVar9 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromNetworkResults*/ func_0x0156505c(*(undefined8 *)(*(long *)(lVar15 + 0x198) + 0x98),
                                            *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x28),0);
                    *(undefined8 *)(lVar25 + 0x18) = uVar9;
                    *(long *)(unaff_x22 + 0x20) = lVar25;
                    lVar25 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ lRam0000000003d194d8;
                    if ((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0)
                    goto code_r0x0159a204;
                    goto code_r0x0159a210;
                  }
                }
                break;
              case 2:
                lVar11 = *(long *)(lVar15 + 0xc0);
                if ((lVar11 != 0) && (lVar21 = *(long *)(lVar11 + 0x20), lVar21 != 0)) {
                  uVar17 = *(undefined8 *)(lVar21 + 0xd8);
                  uVar9 = *(undefined8 *)(lVar21 + 0xd0);
                  uVar33 = *(undefined8 *)(lVar21 + 0xe8);
                  uVar32 = *(undefined8 *)(lVar21 + 0xe0);
                  *(undefined8 *)(puVar5 + -0x68) = uVar17;
                  *(undefined8 *)(puVar5 + -0x70) = uVar9;
                  *(undefined8 *)(puVar5 + -0x58) = uVar33;
                  *(undefined8 *)(puVar5 + -0x60) = uVar32;
                  *(undefined8 *)(puVar5 + -0x88) = uVar17;
                  *(undefined8 *)(puVar5 + -0x90) = uVar9;
                  *(undefined8 *)(puVar5 + -0x78) = uVar33;
                  *(undefined8 *)(puVar5 + -0x80) = uVar32;
                  uVar9 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromTournament*/ func_0x01565710(puVar5 + -0x90,*(undefined8 *)(lVar11 + 0x28),0);
                  lVar21 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData_TypeInfo*/ uRam0000000003d28a08);
                  *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x68);
                  *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x70);
                  *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x58);
                  *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x60);
                  /*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData$$.ctor*/ func_0x01566048(lVar21,lVar26,uVar9,puVar5 + -0xb0,0);
                  plVar14 = (long *)0x3d19d50;
                  *(long *)(unaff_x22 + 0x20) = lVar21;
code_r0x0159a1ec:
                  lVar25 = *plVar14;
                  lVar24 = lVar21;
                  if ((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) {
code_r0x0159a204:
                    if (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0) {
                      func_0x00f78ad0();
                    }
                  }
code_r0x0159a210:
                  uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar25,0);
                  *(undefined8 *)(unaff_x22 + 0x18) = uVar9;
                  goto code_r0x0159a220;
                }
                break;
              case 3:
                lVar26 = *(long *)(lVar11 + 0x40);
                if ((0 < iVar7) && (*(char *)(lVar15 + 0x24a) == '\0')) {
                  if ((*(long *)(lVar15 + 0xb8) == 0) ||
                     (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetNextEventDefinition*/ func_0x01468b08(*(long *)(lVar15 + 0xb8),lVar26,1,0), lVar11 == 0))
                  break;
                  lVar26 = *(long *)(lVar11 + 0x18);
                }
                lVar21 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar21,0);
                lVar24 = lVar21;
                if (lVar21 != 0) {
                  *(int *)(lVar21 + 0x14) = iVar7;
                  *(undefined1 *)(lVar21 + 0x10) = *(undefined1 *)(lVar15 + 0x24a);
                  if (*(long *)(lVar15 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar21 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar15 + 0x1c0) + 0x40);
                    lVar11 = *(long *)(lVar15 + 0xf0);
                    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar25 = 0;
                    if (lVar11 != 0) {
                      iVar7 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedButNotComplete*/ func_0x01585640(lVar11,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8),
                                              0);
                      if (iVar7 == 0) {
                        lVar25 = *(long *)(unaff_x22 + 0x10);
                        uVar10 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                        lVar24 = lVar26;
                        lVar11 = lVar21;
                        goto code_r0x0159a0f4;
                      }
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar17 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
                      uVar10 = *(ulong *)(unaff_x22 + 0x10);
                      uVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                      Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                                (uVar9,lVar26,lVar21,uVar17,0,uVar10,0);
                      plVar14 = (long *)0x3d194e8;
code_r0x0159a070:
                      *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 4:
              case 5:
              case 9:
                lVar21 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar21,0);
                lVar26 = lVar21;
                if (lVar21 != 0) {
                  *(int *)(lVar21 + 0x14) = iVar7;
                  *(undefined1 *)(lVar21 + 0x10) = *(undefined1 *)(lVar15 + 0x24a);
                  if (*(long *)(lVar15 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar21 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar15 + 0x1c0) + 0x40);
                    lVar25 = *(long *)(unaff_x22 + 0x10);
                    if ((lVar25 != 0) && (*(long *)(lVar25 + 0x70) != 0)) {
                      lVar26 = *(long *)(*(long *)(lVar25 + 0x70) + 0x18);
                      uVar10 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      lVar24 = lVar21;
                      lVar11 = lVar26;
code_r0x0159a0f4:
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar10,lVar25,lVar26,lVar21,/*STR('')*/ uRam0000000003d65d08,0);
                      plVar14 = (long *)0x3d194f0;
                      *(ulong *)(unaff_x22 + 0x20) = uVar10;
                      lVar26 = lVar24;
                      lVar21 = lVar11;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 6:
              case 7:
              case 8:
                lVar26 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar26,0);
                if (lVar26 != 0) {
                  *(int *)(lVar26 + 0x14) = iVar7;
                  *(undefined1 *)(lVar26 + 0x10) = *(undefined1 *)(lVar15 + 0x24a);
                  if (*(long *)(lVar15 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar26 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar15 + 0x1c0) + 0x40);
                    lVar25 = *(long *)(unaff_x22 + 0x10);
                    if ((((lVar25 != 0) && (*(long *)(lVar25 + 0x70) != 0)) &&
                        (*(long *)(lVar15 + 0x230) != 0)) &&
                       (lVar11 = *(long *)(*(long *)(lVar15 + 0x230) + 0x48), lVar11 != 0)) {
                      lVar21 = *(long *)(*(long *)(lVar25 + 0x70) + 0x18);
                      uVar10 = *(ulong *)(lVar11 + 0x18);
                      uVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar9,lVar25,lVar21,lVar26,uVar10,0);
                      plVar14 = (long *)0x3d194f0;
                      goto code_r0x0159a070;
                    }
                  }
                }
                break;
              default:
code_r0x0159a220:
                lVar11 = *(long *)(lVar15 + 0x70);
                uVar9 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                unaff_x24 = uVar10;
                if (lVar11 != 0) {
code_r0x0163d6f8:
                  cVar2 = *(char *)(lVar11 + 0x50);
                  if (cVar2 == '\0') {
                    *(undefined1 *)(lVar11 + 0x50) = 1;
                    *(undefined8 *)(lVar11 + 0x40) = uVar9;
                    *(ulong *)(lVar11 + 0x48) = unaff_x22;
                  }
                  return (ulong)(cVar2 == '\0');
                }
              }
            }
          }
        }
      }
    }
  }
  plVar14 = (long *)func_0x00f78af4();
  *(long *)(puVar5 + -0xe0) = lVar26;
  *(long *)(puVar5 + -0xd8) = lVar25;
  *(ulong *)(puVar5 + -0xd0) = unaff_x22;
  *(long *)(puVar5 + -200) = lVar15;
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0xb8) = &Atlas_Contexts_GameContextBase__InitPickupLimitsDefinition;
  lVar11 = 0x3eb5000;
  if ((bRam0000000003eb51a5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d71248);
    func_0x00f78a20(0x3d71240);
    bRam0000000003eb51a5 = 1;
  }
  if (plVar14[0x38] != 0) {
    uVar10 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar14[0x38] + 0x60,0);
    if ((uVar10 & 1) == 0) {
      lVar11 = plVar14[0x42];
    }
    else {
      if (((plVar14[0x17] == 0) || (plVar14[0x38] == 0)) ||
         (lVar15 = *(long *)(plVar14[0x17] + 0x10), lVar15 == 0)) goto code_r0x0159a554;
      lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,*(undefined8 *)(plVar14[0x38] + 0x60),uRam0000000003d572e8);
      plVar14[0x42] = lVar11;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    plVar20 = (long *)0x3d71240;
    if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar14 + 300)) &&
       (plVar20 = (long *)0x3d71248,
       *(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
       != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
      plVar20 = (long *)0x3d71240;
    }
    if (plVar14[0x17] != 0) {
      lVar25 = *plVar20;
      lVar15 = *(long *)(plVar14[0x17] + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar25,0);
      lVar11 = 0;
      if (lVar15 != 0) {
        uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,uVar9,uRam0000000003d572e8);
        plVar14[0x42] = uVar10;
        return uVar10;
      }
    }
  }
code_r0x0159a554:
  fVar31 = (float)func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x110) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x108) = unaff_d8;
  *(long *)(puVar5 + -0x100) = lVar11;
  *(long **)(puVar5 + -0xf8) = plVar14;
  *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xc0;
  *(undefined **)(puVar5 + -0xe8) = &Atlas_Contexts_GameContextBase__UpdateLoadingProgress;
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x110);
  *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x108);
  *(long *)(puVar5 + -0x110) = lVar26;
  *(long *)(puVar5 + -0x108) = lVar25;
  *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0x100);
  *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0xf8);
  *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
  *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return uVar10;
  }
  uVar8 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar31 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4,0
                         );
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar11 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar11 == 0) {
    func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x140) = uVar9;
    *(undefined8 *)(puVar5 + -0x138) = 1;
    *(undefined1 **)(puVar5 + -0x130) = puVar5 + -0xf0;
    *(undefined **)(puVar5 + -0x128) = &Atlas_UI_LoadingBehaviour__HasFinishedLoading;
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar11 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar11 + 0x10) == '\0') {
      return 0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar11 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar25 = lRam0000000003d2bf00;
    *(undefined8 *)(puVar5 + -0x150) = 0x3d23990;
    *(undefined8 *)(puVar5 + -0x148) = 0x3d23050;
    *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x140);
    *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x138);
    *(undefined8 *)(puVar5 + -0x130) = *(undefined8 *)(puVar5 + -0x130);
    *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)(puVar5 + -0x128);
    lVar26 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    lVar15 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x58);
    *(ulong *)(puVar5 + -0x1a0) = unaff_x24;
    *(long *)(puVar5 + -0x198) = lVar24;
    *(undefined8 *)(puVar5 + -400) = 0x3d23990;
    *(long *)(puVar5 + -0x188) = lVar26;
    *(long **)(puVar5 + -0x180) = (long *)(lVar11 + 0x18);
    *(long *)(puVar5 + -0x178) = lVar25;
    *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0x130;
    *(undefined **)(puVar5 + -0x168) = &UNK_01b570c0;
    lVar24 = *(long *)(lVar11 + 0x18);
    if (lVar24 == 0) {
      uVar10 = 0;
    }
    else {
      lVar26 = *(long *)(lVar15 + 0x18);
      uVar3 = *(ushort *)(lVar26 + 0x132);
      lVar25 = lVar26;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar26);
        lVar25 = *(long *)(lVar15 + 0x18);
        uVar3 = *(ushort *)(lVar25 + 0x132);
      }
      pcVar27 = *(code **)**(undefined8 **)(lVar26 + 0xc0);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar25);
      }
      iVar7 = (*pcVar27)(lVar24,**(undefined8 **)(lVar25 + 0xc0));
      uVar10 = (ulong)(iVar7 == *(int *)(lVar11 + 0x20));
    }
    return uVar10;
  }
  uVar9 = *(undefined8 *)(puVar5 + -0x100);
  uVar32 = *(undefined8 *)(puVar5 + -0xf8);
  uVar17 = *(undefined8 *)(puVar5 + -0x110);
  uVar33 = *(undefined8 *)(puVar5 + -0x108);
  uVar36 = *(undefined8 *)(puVar5 + -0x120);
  uVar35 = *(undefined8 *)(puVar5 + -0x118);
  *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
  *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
  uVar10 = *(ulong *)(lVar11 + 0x20);
  if (uVar10 == 0) {
    auVar37 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0xf0;
    *(undefined **)(puVar5 + -0xf8) = &Atlas_UI_LoadingBehaviour__set_BuildInfo;
    plVar14 = *(long **)(auVar37._0_8_ + 0x28);
    if (plVar14 == (long *)0x0) {
      lVar24 = func_0x00f78af4();
      return *(ulong *)(lVar24 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(*plVar14 + 0x558))
                       (plVar14,auVar37._8_8_,*(undefined8 *)(*plVar14 + 0x560));
    return uVar10;
  }
  *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
  *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
  *(undefined1 *)(uVar10 + 0x90) = 1;
  *(undefined4 *)(uVar10 + 0x94) = uVar8;
  *(undefined8 *)(uVar10 + 0x98) = 0;
  if (*(char *)(uVar10 + 0x3c) == '\0') {
    return uVar10;
  }
  uVar10 = *(ulong *)(uVar10 + 0xb8);
  if (uVar10 != 0) {
    *(undefined8 *)(puVar5 + -0x100) = uVar9;
    *(undefined8 *)(puVar5 + -0xf8) = uVar32;
    *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xf0);
    *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0xe8);
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,0,0);
    return uVar10;
  }
  lVar11 = func_0x00f78af4(0,0,0);
  *(undefined8 *)(puVar5 + -0x130) = uVar36;
  *(undefined8 *)(puVar5 + -0x128) = uVar35;
  *(undefined8 *)(puVar5 + -0x120) = uVar17;
  *(undefined8 *)(puVar5 + -0x118) = uVar33;
  *(undefined8 *)(puVar5 + -0x110) = uVar9;
  *(undefined8 *)(puVar5 + -0x108) = uVar32;
  *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0xf0;
  *(undefined **)(puVar5 + -0xf8) = &Atlas_UI_SlantFillBar__AddThresholdEvent;
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar10 = *(ulong *)(lVar11 + 0xc0);
  if (uVar10 == 0) {
    uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar10,uRam0000000003d3d9e0);
    *(ulong *)(lVar11 + 0xc0) = uVar10;
    if (uVar10 == 0) {
      lVar24 = func_0x00f78af4();
      *(long *)(puVar5 + -0x150) = lVar11;
      *(undefined8 **)(puVar5 + -0x148) = extraout_x1;
      *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x100;
      *(undefined **)(puVar5 + -0x138) = &Atlas_UI_SlantFillBar__ClearThresholdEvents;
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar10 = *(ulong *)(lVar24 + 0xc0);
      if (uVar10 == 0) {
        return 0;
      }
      *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0x150);
      *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0x148);
      *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x140);
      *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x138);
      uVar13 = uVar10;
      if (0 < *(int *)(uVar10 + 0x18)) {
        uVar13 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar10 + 0x10),0,*(int *)(uVar10 + 0x18),0);
        *(undefined4 *)(uVar10 + 0x18) = 0;
      }
      *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
      return uVar13;
    }
  }
  uVar18 = (ulong)extraout_s0;
  puVar23 = *(undefined8 **)(puVar5 + -0x110);
  uVar13 = *(ulong *)(puVar5 + -0x108);
  uVar9 = *(undefined8 *)(puVar5 + -0x120);
  uVar1 = *(ulong *)(puVar5 + -0x118);
  *(undefined8 *)(puVar5 + -0x120) = uVar9;
  *(ulong *)(puVar5 + -0x118) = uVar1;
  *(undefined8 **)(puVar5 + -0x110) = puVar23;
  *(ulong *)(puVar5 + -0x108) = uVar13;
  *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0x100);
  *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0xf8);
  lVar11 = *(long *)(uVar10 + 0x10);
  puVar12 = extraout_x1;
  if (lVar11 == 0) {
code_r0x0259cf3c:
    uVar18 = uVar1;
    uVar10 = uVar13;
    uVar16 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar19 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar10 + 0x18) = uVar19 + 1;
  }
  else {
    uVar19 = *(uint *)(uVar10 + 0x18);
    uVar16 = uVar10;
    puVar23 = extraout_x1;
    if (uVar19 != *(uint *)(lVar11 + 0x18)) goto code_r0x0259cf40;
    puVar12 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar16 = (*(code *)*puVar12)(uVar10,uVar19 + 1);
    lVar11 = *(long *)(uVar10 + 0x10);
    uVar19 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar19 + 1;
    uVar13 = uVar10;
    uVar1 = uVar18;
    if (lVar11 == 0) goto code_r0x0259cf3c;
  }
  if (uVar19 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + (long)(int)uVar19 * 0x10;
    *(ulong *)(lVar11 + 0x20) = uVar18;
    *(undefined8 **)(lVar11 + 0x28) = puVar23;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar16;
  }
  uVar17 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar17,0);
  plVar14 = auVar37._8_8_;
  lVar11 = auVar37._0_8_;
  *(ulong *)(puVar5 + -0x160) = unaff_x24;
  *(long *)(puVar5 + -0x158) = lVar24;
  *(undefined8 *)(puVar5 + -0x150) = uVar9;
  *(ulong *)(puVar5 + -0x148) = uVar18;
  *(undefined8 **)(puVar5 + -0x140) = puVar23;
  *(ulong *)(puVar5 + -0x138) = uVar10;
  *(undefined1 **)(puVar5 + -0x130) = puVar5 + -0x100;
  *(undefined **)(puVar5 + -0x128) =
       &System_Collections_Generic_List_SlantFillBar_ThresholdEvent___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(plVar14,0x14);
  if (lVar11 != 0) {
    pcVar27 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
    lVar24 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar24);
    }
    if (plVar14 != (long *)0x0) {
      if (*(long *)(*plVar14 + 0x40) == *(long *)(lVar24 + 0x40)) {
        puVar23 = (undefined8 *)func_0x00f78ae4(plVar14);
        (*pcVar27)(lVar11,*puVar23,puVar23[1],*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
        iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar11);
        return (ulong)(iVar7 - 1);
      }
      func_0x00f78e5c(plVar14,lVar24);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar27 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar27)();
}



// ============================================================
// RVA: 0x1599b98 | Atlas.Contexts.GameContextBase.DispatchLeagueEventAnalytics
// ============================================================

/* WARNING: Possible PIC construction at 0x0159a23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159a240) */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__DispatchLeagueEventAnalytics
                (long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *extraout_x1;
  ulong uVar16;
  undefined8 *puVar17;
  uint extraout_w8;
  uint uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long extraout_x9;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *puVar22;
  undefined8 unaff_x21;
  long lVar23;
  undefined8 unaff_x22;
  long lVar24;
  long lVar25;
  long unaff_x23;
  long lVar26;
  code *pcVar27;
  long unaff_x24;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar28;
  undefined *puVar29;
  undefined4 uVar30;
  uint extraout_s0;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 unaff_d8;
  undefined8 uVar36;
  undefined8 unaff_d9;
  undefined1 auVar37 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined8 auStack_70 [2];
  
  if (*(long *)(param_1 + 0x240) != 0) {
    uVar7 = /*Atlas.League.LeagueManager$$GetReplayCountAndUpdate*/ func_0x015f4ae4(*(long *)(param_1 + 0x240),param_3,0);
    unaff_x19 = param_5;
    unaff_x20 = param_3;
    unaff_x21 = param_4;
    unaff_x23 = param_2;
    if ((*(long *)(param_1 + 0x1b0) != 0) && (unaff_x22 = uVar7, *(long *)(param_1 + 0x240) != 0)) {
      unaff_x24 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x48);
      lVar8 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(param_1 + 0x240),0);
      if ((lVar8 != 0) && (*(long *)(param_1 + 0x240) != 0)) {
        unaff_x26 = *(undefined8 *)(lVar8 + 0x58);
        uVar9 = /*Atlas.League.LeagueManager$$GetCurrentSeed*/ func_0x015f499c(*(long *)(param_1 + 0x240),0);
        if ((*(long *)(param_1 + 0x240) != 0) &&
           (iVar6 = /*Atlas.League.LeagueManager$$GetTodayIndex*/ func_0x015f3c20(*(long *)(param_1 + 0x240),0), unaff_x24 != 0)) {
          iVar4 = (int)param_4 - (int)param_5;
          if ((int)param_2 == 0) {
            iVar4 = 0;
          }
          auStack_70[0] = 0;
          uVar10 = /*Atlas.Analytics.AtlasAnalyticsEvents$$LeagueEvent*/ func_0x01456ed4(unaff_x24,unaff_x26,uVar9,iVar6 + 1,(int)param_3 + 1,param_5,
                                   uVar7,iVar4);
          return uVar10;
        }
      }
    }
  }
  uVar10 = func_0x00f78af4();
  puVar14 = &uStack_a0;
  puStack_78 = &Atlas_Contexts_GameContextBase__EndOfTournamentRound;
  pppppppuVar28 = &ppppppuStack_80;
  lVar8 = 0x3eb5000;
  uStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  lStack_90 = unaff_x20;
  uStack_88 = unaff_x19;
  ppppppuStack_80 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb51a9 & 1) == 0) {
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb51a9 = 1;
  }
  if ((*(long *)(uVar10 + 0xc0) == 0) ||
     (lVar11 = *(long *)(*(long *)(uVar10 + 0xc0) + 0x20), lVar11 == 0)) {
code_r0x01599d9c:
    puVar29 = &Atlas_Contexts_GameContextBase__SwitchToFrontEndContext;
    auVar37 = func_0x00f78af4();
  }
  else {
    iVar6 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar11,0);
    if (iVar6 == 0) {
      lVar8 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
      /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(lVar8,0);
      unaff_x21 = /*Atlas.Contexts.RoundResultsState_var*/ uRam0000000003d19d50;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = uVar7;
        lVar11 = *(long *)(uVar10 + 0x70);
        if (lVar11 != 0) goto code_r0x0163d6f8;
      }
      goto code_r0x01599d9c;
    }
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar10;
    puVar14 = auStack_70;
    uVar10 = uStack_88;
    lVar8 = lStack_90;
    unaff_x21 = uStack_98;
    unaff_x22 = uStack_a0;
    pppppppuVar28 = (undefined8 *******)ppppppuStack_80;
    puVar29 = puStack_78;
  }
  lVar23 = auVar37._8_8_;
  lVar25 = auVar37._0_8_;
  *(undefined8 *)((long)puVar14 + -0x50) = unaff_x26;
  *(long *)((long)puVar14 + -0x48) = param_1;
  *(long *)((long)puVar14 + -0x40) = unaff_x24;
  *(long *)((long)puVar14 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar14 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar14 + -0x28) = unaff_x21;
  *(long *)((long)puVar14 + -0x20) = lVar8;
  *(ulong *)((long)puVar14 + -0x18) = uVar10;
  *(undefined8 ********)((long)puVar14 + -0x10) = pppppppuVar28;
  *(undefined **)((long)puVar14 + -8) = puVar29;
  lVar24 = 0x3eb5000;
  if ((bRam0000000003eb51a7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d194f0);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27688);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d28a08);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb51a7 = 1;
  }
  *(undefined8 *)((long)puVar14 + -0x68) = 0;
  *(undefined8 *)((long)puVar14 + -0x70) = 0;
  *(undefined8 *)((long)puVar14 + -0x58) = 0;
  *(undefined8 *)((long)puVar14 + -0x60) = 0;
  lVar8 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(lVar8,0);
  if (((lVar8 != 0) && (lVar11 = *(long *)(lVar25 + 0x1c0), lVar11 != 0)) &&
     (lVar21 = *(long *)(lVar8 + 0x10), lVar21 != 0)) {
    *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
    *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar11 + 0x38);
    *(undefined4 *)(lVar21 + 0x10) = *(undefined4 *)(lVar11 + 0x18);
    uVar9 = *(undefined8 *)(lVar11 + 0x80);
    uVar7 = *(undefined8 *)(lVar11 + 0x78);
    uVar33 = *(undefined8 *)(lVar11 + 0x90);
    uVar32 = *(undefined8 *)(lVar11 + 0x88);
    uVar35 = *(undefined8 *)(lVar11 + 0x98);
    uVar34 = *(undefined8 *)(lVar11 + 0xb0);
    uVar36 = *(undefined8 *)(lVar11 + 0xa8);
    *(undefined8 *)(lVar21 + 0x58) = *(undefined8 *)(lVar11 + 0xa0);
    *(undefined8 *)(lVar21 + 0x50) = uVar35;
    *(undefined8 *)(lVar21 + 0x68) = uVar34;
    *(undefined8 *)(lVar21 + 0x60) = uVar36;
    *(undefined8 *)(lVar21 + 0x38) = uVar9;
    *(undefined8 *)(lVar21 + 0x30) = uVar7;
    *(undefined8 *)(lVar21 + 0x48) = uVar33;
    *(undefined8 *)(lVar21 + 0x40) = uVar32;
    if ((*(long *)(lVar25 + 0x1c0) != 0) && (lVar24 = *(long *)(lVar8 + 0x10), lVar24 != 0)) {
      *(undefined8 *)(lVar24 + 0x28) = *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 200);
      if (*(long *)(lVar25 + 0x118) != 0) {
        uVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar25 + 0x118),0);
        *(undefined1 *)(lVar24 + 0x78) = uVar5;
        if ((*(long *)(lVar25 + 0xb8) != 0) && (*(long *)(lVar25 + 0x1c0) != 0)) {
          lVar21 = 0x3d21270;
          lVar11 = 0x3d21270;
          lVar24 = *(long *)(*(long *)(lVar25 + 0xb8) + 0x10);
          unaff_x23 = *(long *)(*(long *)(lVar25 + 0x1c0) + 0x40);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x23,0);
          unaff_x24 = lVar21;
          if ((*(long *)(lVar8 + 0x10) != 0) && (lVar24 != 0)) {
            /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar24,uVar7,*(long *)(lVar8 + 0x10) + 0x70,uRam0000000003d57500);
            lVar19 = *(long *)(lVar25 + 0x1c0);
            unaff_x24 = lVar11;
            if ((lVar19 != 0) && (lVar24 = *(long *)(lVar8 + 0x10), lVar24 != 0)) {
              *(undefined8 *)(lVar24 + 0x28) = *(undefined8 *)(lVar19 + 200);
              iVar6 = auVar37._8_4_;
              switch(*(undefined4 *)(lVar19 + 0x18)) {
              case 1:
                lVar23 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
                Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor
                          (lVar23,0);
                if (lVar23 != 0) {
                  *(undefined8 *)(lVar23 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
                  if ((*(long *)(lVar25 + 0x198) != 0) && (*(long *)(lVar25 + 0xc0) != 0)) {
                    uVar7 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromNetworkResults*/ func_0x0156505c(*(undefined8 *)(*(long *)(lVar25 + 0x198) + 0x98),
                                            *(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x28),0);
                    *(undefined8 *)(lVar23 + 0x18) = uVar7;
                    *(long *)(lVar8 + 0x20) = lVar23;
                    lVar23 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ lRam0000000003d194d8;
                    if ((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0)
                    goto code_r0x0159a204;
                    goto code_r0x0159a210;
                  }
                }
                break;
              case 2:
                lVar11 = *(long *)(lVar25 + 0xc0);
                if ((lVar11 != 0) && (lVar19 = *(long *)(lVar11 + 0x20), lVar19 != 0)) {
                  uVar9 = *(undefined8 *)(lVar19 + 0xd8);
                  uVar7 = *(undefined8 *)(lVar19 + 0xd0);
                  uVar33 = *(undefined8 *)(lVar19 + 0xe8);
                  uVar32 = *(undefined8 *)(lVar19 + 0xe0);
                  *(undefined8 *)((long)puVar14 + -0x68) = uVar9;
                  *(undefined8 *)((long)puVar14 + -0x70) = uVar7;
                  *(undefined8 *)((long)puVar14 + -0x58) = uVar33;
                  *(undefined8 *)((long)puVar14 + -0x60) = uVar32;
                  *(undefined8 *)((long)puVar14 + -0x88) = uVar9;
                  *(undefined8 *)((long)puVar14 + -0x90) = uVar7;
                  *(undefined8 *)((long)puVar14 + -0x78) = uVar33;
                  *(undefined8 *)((long)puVar14 + -0x80) = uVar32;
                  uVar7 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromTournament*/ func_0x01565710((undefined1 *)((long)puVar14 + -0x90),
                                          *(undefined8 *)(lVar11 + 0x28),0);
                  lVar19 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData_TypeInfo*/ uRam0000000003d28a08);
                  *(undefined8 *)((long)puVar14 + -0xa8) = *(undefined8 *)((long)puVar14 + -0x68);
                  *(undefined8 *)((long)puVar14 + -0xb0) = *(undefined8 *)((long)puVar14 + -0x70);
                  *(undefined8 *)((long)puVar14 + -0x98) = *(undefined8 *)((long)puVar14 + -0x58);
                  *(undefined8 *)((long)puVar14 + -0xa0) = *(undefined8 *)((long)puVar14 + -0x60);
                  /*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData$$.ctor*/ func_0x01566048(lVar19,lVar24,uVar7,(undefined1 *)((long)puVar14 + -0xb0),0);
                  plVar12 = (long *)0x3d19d50;
                  *(long *)(lVar8 + 0x20) = lVar19;
code_r0x0159a1ec:
                  lVar23 = *plVar12;
                  unaff_x23 = lVar19;
                  if ((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) {
code_r0x0159a204:
                    if (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0) {
                      func_0x00f78ad0();
                    }
                  }
code_r0x0159a210:
                  uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar23,0);
                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                  goto code_r0x0159a220;
                }
                break;
              case 3:
                lVar24 = *(long *)(lVar19 + 0x40);
                if ((0 < iVar6) && (*(char *)(lVar25 + 0x24a) == '\0')) {
                  if ((*(long *)(lVar25 + 0xb8) == 0) ||
                     (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetNextEventDefinition*/ func_0x01468b08(*(long *)(lVar25 + 0xb8),lVar24,1,0), lVar11 == 0))
                  break;
                  lVar24 = *(long *)(lVar11 + 0x18);
                }
                lVar19 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar19,0);
                unaff_x23 = lVar19;
                if (lVar19 != 0) {
                  *(int *)(lVar19 + 0x14) = iVar6;
                  *(undefined1 *)(lVar19 + 0x10) = *(undefined1 *)(lVar25 + 0x24a);
                  if (*(long *)(lVar25 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar19 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 0x40);
                    lVar11 = *(long *)(lVar25 + 0xf0);
                    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar23 = 0;
                    if (lVar11 != 0) {
                      iVar6 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedButNotComplete*/ func_0x01585640(lVar11,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8),
                                              0);
                      if (iVar6 == 0) {
                        lVar23 = *(long *)(lVar8 + 0x10);
                        lVar21 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                        lVar11 = lVar24;
                        lVar26 = lVar19;
                        goto code_r0x0159a0f4;
                      }
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar9 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
                      lVar21 = *(long *)(lVar8 + 0x10);
                      uVar7 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                      Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                                (uVar7,lVar24,lVar19,uVar9,0,lVar21,0);
                      plVar12 = (long *)0x3d194e8;
code_r0x0159a070:
                      *(undefined8 *)(lVar8 + 0x20) = uVar7;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 4:
              case 5:
              case 9:
                lVar19 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar19,0);
                lVar24 = lVar19;
                if (lVar19 != 0) {
                  *(int *)(lVar19 + 0x14) = iVar6;
                  *(undefined1 *)(lVar19 + 0x10) = *(undefined1 *)(lVar25 + 0x24a);
                  if (*(long *)(lVar25 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar19 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 0x40);
                    lVar23 = *(long *)(lVar8 + 0x10);
                    if ((lVar23 != 0) && (*(long *)(lVar23 + 0x70) != 0)) {
                      lVar24 = *(long *)(*(long *)(lVar23 + 0x70) + 0x18);
                      lVar21 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      lVar11 = lVar19;
                      lVar26 = lVar24;
code_r0x0159a0f4:
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (lVar21,lVar23,lVar24,lVar19,/*STR('')*/ uRam0000000003d65d08,0);
                      plVar12 = (long *)0x3d194f0;
                      *(long *)(lVar8 + 0x20) = lVar21;
                      lVar24 = lVar11;
                      lVar19 = lVar26;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 6:
              case 7:
              case 8:
                lVar24 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar24,0);
                if (lVar24 != 0) {
                  *(int *)(lVar24 + 0x14) = iVar6;
                  *(undefined1 *)(lVar24 + 0x10) = *(undefined1 *)(lVar25 + 0x24a);
                  if (*(long *)(lVar25 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar24 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 0x40);
                    lVar23 = *(long *)(lVar8 + 0x10);
                    if ((((lVar23 != 0) && (*(long *)(lVar23 + 0x70) != 0)) &&
                        (*(long *)(lVar25 + 0x230) != 0)) &&
                       (lVar11 = *(long *)(*(long *)(lVar25 + 0x230) + 0x48), lVar11 != 0)) {
                      lVar19 = *(long *)(*(long *)(lVar23 + 0x70) + 0x18);
                      lVar21 = *(long *)(lVar11 + 0x18);
                      uVar7 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar7,lVar23,lVar19,lVar24,lVar21,0);
                      plVar12 = (long *)0x3d194f0;
                      goto code_r0x0159a070;
                    }
                  }
                }
                break;
              default:
code_r0x0159a220:
                lVar11 = *(long *)(lVar25 + 0x70);
                unaff_x24 = lVar21;
                if (lVar11 != 0) {
code_r0x0163d6f8:
                  uVar7 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                  cVar2 = *(char *)(lVar11 + 0x50);
                  if (cVar2 == '\0') {
                    *(undefined1 *)(lVar11 + 0x50) = 1;
                    *(undefined8 *)(lVar11 + 0x40) = uVar7;
                    *(long *)(lVar11 + 0x48) = lVar8;
                  }
                  return (ulong)(cVar2 == '\0');
                }
              }
            }
          }
        }
      }
    }
  }
  plVar12 = (long *)func_0x00f78af4();
  *(long *)((long)puVar14 + -0xe0) = lVar24;
  *(long *)((long)puVar14 + -0xd8) = lVar23;
  *(long *)((long)puVar14 + -0xd0) = lVar8;
  *(long *)((long)puVar14 + -200) = lVar25;
  *(undefined1 **)((long)puVar14 + -0xc0) = (undefined1 *)((long)puVar14 + -0x10);
  *(undefined **)((long)puVar14 + -0xb8) =
       &Atlas_Contexts_GameContextBase__InitPickupLimitsDefinition;
  lVar8 = 0x3eb5000;
  if ((bRam0000000003eb51a5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d71248);
    func_0x00f78a20(0x3d71240);
    bRam0000000003eb51a5 = 1;
  }
  if (plVar12[0x38] != 0) {
    uVar10 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar12[0x38] + 0x60,0);
    if ((uVar10 & 1) == 0) {
      lVar8 = plVar12[0x42];
    }
    else {
      if (((plVar12[0x17] == 0) || (plVar12[0x38] == 0)) ||
         (lVar11 = *(long *)(plVar12[0x17] + 0x10), lVar11 == 0)) goto code_r0x0159a554;
      lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,*(undefined8 *)(plVar12[0x38] + 0x60),uRam0000000003d572e8);
      plVar12[0x42] = lVar8;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    plVar20 = (long *)0x3d71240;
    if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar12 + 300)) &&
       (plVar20 = (long *)0x3d71248,
       *(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
       != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
      plVar20 = (long *)0x3d71240;
    }
    if (plVar12[0x17] != 0) {
      lVar23 = *plVar20;
      lVar11 = *(long *)(plVar12[0x17] + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar23,0);
      lVar8 = 0;
      if (lVar11 != 0) {
        uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar7,uRam0000000003d572e8);
        plVar12[0x42] = uVar10;
        return uVar10;
      }
    }
  }
code_r0x0159a554:
  fVar31 = (float)func_0x00f78af4();
  *(undefined8 *)((long)puVar14 + -0x110) = unaff_d9;
  *(undefined8 *)((long)puVar14 + -0x108) = unaff_d8;
  *(long *)((long)puVar14 + -0x100) = lVar8;
  *(long **)((long)puVar14 + -0xf8) = plVar12;
  *(undefined1 **)((long)puVar14 + -0xf0) = (undefined1 *)((long)puVar14 + -0xc0);
  *(undefined **)((long)puVar14 + -0xe8) = &Atlas_Contexts_GameContextBase__UpdateLoadingProgress;
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)puVar14 + -0x120) = *(undefined8 *)((long)puVar14 + -0x110);
  *(undefined8 *)((long)puVar14 + -0x118) = *(undefined8 *)((long)puVar14 + -0x108);
  *(long *)((long)puVar14 + -0x110) = lVar24;
  *(long *)((long)puVar14 + -0x108) = lVar23;
  *(undefined8 *)((long)puVar14 + -0x100) = *(undefined8 *)((long)puVar14 + -0x100);
  *(undefined8 *)((long)puVar14 + -0xf8) = *(undefined8 *)((long)puVar14 + -0xf8);
  *(undefined8 *)((long)puVar14 + -0xf0) = *(undefined8 *)((long)puVar14 + -0xf0);
  *(undefined8 *)((long)puVar14 + -0xe8) = *(undefined8 *)((long)puVar14 + -0xe8);
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
  if ((uVar10 & 1) != 0) {
    return uVar10;
  }
  uVar30 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar31 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4,
                           0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar8 == 0) {
    func_0x00f78af4();
    *(undefined8 *)((long)puVar14 + -0x140) = uVar7;
    *(undefined8 *)((long)puVar14 + -0x138) = 1;
    *(undefined1 **)((long)puVar14 + -0x130) = (undefined1 *)((long)puVar14 + -0xf0);
    *(undefined **)((long)puVar14 + -0x128) = &Atlas_UI_LoadingBehaviour__HasFinishedLoading;
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar8 + 0x10) == '\0') {
      return 0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar8 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar11 = lRam0000000003d2bf00;
    *(undefined8 *)((long)puVar14 + -0x150) = 0x3d23990;
    *(undefined8 *)((long)puVar14 + -0x148) = 0x3d23050;
    *(undefined8 *)((long)puVar14 + -0x140) = *(undefined8 *)((long)puVar14 + -0x140);
    *(undefined8 *)((long)puVar14 + -0x138) = *(undefined8 *)((long)puVar14 + -0x138);
    *(undefined8 *)((long)puVar14 + -0x130) = *(undefined8 *)((long)puVar14 + -0x130);
    *(undefined8 *)((long)puVar14 + -0x128) = *(undefined8 *)((long)puVar14 + -0x128);
    lVar23 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar24 = *(long *)(*(long *)(lVar23 + 0xc0) + 0x58);
    *(long *)((long)puVar14 + -0x1a0) = unaff_x24;
    *(long *)((long)puVar14 + -0x198) = unaff_x23;
    *(undefined8 *)((long)puVar14 + -400) = 0x3d23990;
    *(long *)((long)puVar14 + -0x188) = lVar23;
    *(long **)((long)puVar14 + -0x180) = (long *)(lVar8 + 0x18);
    *(long *)((long)puVar14 + -0x178) = lVar11;
    *(undefined1 **)((long)puVar14 + -0x170) = (undefined1 *)((long)puVar14 + -0x130);
    *(undefined **)((long)puVar14 + -0x168) = &UNK_01b570c0;
    lVar11 = *(long *)(lVar8 + 0x18);
    if (lVar11 == 0) {
      uVar10 = 0;
    }
    else {
      lVar25 = *(long *)(lVar24 + 0x18);
      uVar3 = *(ushort *)(lVar25 + 0x132);
      lVar23 = lVar25;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar25);
        lVar23 = *(long *)(lVar24 + 0x18);
        uVar3 = *(ushort *)(lVar23 + 0x132);
      }
      pcVar27 = *(code **)**(undefined8 **)(lVar25 + 0xc0);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar23);
      }
      iVar6 = (*pcVar27)(lVar11,**(undefined8 **)(lVar23 + 0xc0));
      uVar10 = (ulong)(iVar6 == *(int *)(lVar8 + 0x20));
    }
    return uVar10;
  }
  uVar7 = *(undefined8 *)((long)puVar14 + -0x100);
  uVar32 = *(undefined8 *)((long)puVar14 + -0xf8);
  uVar9 = *(undefined8 *)((long)puVar14 + -0x110);
  uVar33 = *(undefined8 *)((long)puVar14 + -0x108);
  uVar36 = *(undefined8 *)((long)puVar14 + -0x120);
  uVar35 = *(undefined8 *)((long)puVar14 + -0x118);
  *(undefined8 *)((long)puVar14 + -0xf0) = *(undefined8 *)((long)puVar14 + -0xf0);
  *(undefined8 *)((long)puVar14 + -0xe8) = *(undefined8 *)((long)puVar14 + -0xe8);
  uVar10 = *(ulong *)(lVar8 + 0x20);
  if (uVar10 == 0) {
    auVar37 = func_0x00f78af4();
    *(undefined1 **)((long)puVar14 + -0x100) = (undefined1 *)((long)puVar14 + -0xf0);
    *(undefined **)((long)puVar14 + -0xf8) = &Atlas_UI_LoadingBehaviour__set_BuildInfo;
    plVar12 = *(long **)(auVar37._0_8_ + 0x28);
    if (plVar12 == (long *)0x0) {
      lVar8 = func_0x00f78af4();
      return *(ulong *)(lVar8 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(*plVar12 + 0x558))
                       (plVar12,auVar37._8_8_,*(undefined8 *)(*plVar12 + 0x560));
    return uVar10;
  }
  *(undefined8 *)((long)puVar14 + -0xf0) = *(undefined8 *)((long)puVar14 + -0xf0);
  *(undefined8 *)((long)puVar14 + -0xe8) = *(undefined8 *)((long)puVar14 + -0xe8);
  *(undefined1 *)(uVar10 + 0x90) = 1;
  *(undefined4 *)(uVar10 + 0x94) = uVar30;
  *(undefined8 *)(uVar10 + 0x98) = 0;
  if (*(char *)(uVar10 + 0x3c) == '\0') {
    return uVar10;
  }
  uVar10 = *(ulong *)(uVar10 + 0xb8);
  if (uVar10 != 0) {
    *(undefined8 *)((long)puVar14 + -0x100) = uVar7;
    *(undefined8 *)((long)puVar14 + -0xf8) = uVar32;
    *(undefined8 *)((long)puVar14 + -0xf0) = *(undefined8 *)((long)puVar14 + -0xf0);
    *(undefined8 *)((long)puVar14 + -0xe8) = *(undefined8 *)((long)puVar14 + -0xe8);
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,0,0);
    return uVar10;
  }
  lVar8 = func_0x00f78af4(0,0,0);
  *(undefined8 *)((long)puVar14 + -0x130) = uVar36;
  *(undefined8 *)((long)puVar14 + -0x128) = uVar35;
  *(undefined8 *)((long)puVar14 + -0x120) = uVar9;
  *(undefined8 *)((long)puVar14 + -0x118) = uVar33;
  *(undefined8 *)((long)puVar14 + -0x110) = uVar7;
  *(undefined8 *)((long)puVar14 + -0x108) = uVar32;
  *(undefined1 **)((long)puVar14 + -0x100) = (undefined1 *)((long)puVar14 + -0xf0);
  *(undefined **)((long)puVar14 + -0xf8) = &Atlas_UI_SlantFillBar__AddThresholdEvent;
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar10 = *(ulong *)(lVar8 + 0xc0);
  if (uVar10 == 0) {
    uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar10,uRam0000000003d3d9e0);
    *(ulong *)(lVar8 + 0xc0) = uVar10;
    if (uVar10 == 0) {
      lVar11 = func_0x00f78af4();
      *(long *)((long)puVar14 + -0x150) = lVar8;
      *(undefined8 **)((long)puVar14 + -0x148) = extraout_x1;
      *(undefined1 **)((long)puVar14 + -0x140) = (undefined1 *)((long)puVar14 + -0x100);
      *(undefined **)((long)puVar14 + -0x138) = &Atlas_UI_SlantFillBar__ClearThresholdEvents;
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar10 = *(ulong *)(lVar11 + 0xc0);
      if (uVar10 == 0) {
        return 0;
      }
      *(undefined8 *)((long)puVar14 + -0x150) = *(undefined8 *)((long)puVar14 + -0x150);
      *(undefined8 *)((long)puVar14 + -0x148) = *(undefined8 *)((long)puVar14 + -0x148);
      *(undefined8 *)((long)puVar14 + -0x140) = *(undefined8 *)((long)puVar14 + -0x140);
      *(undefined8 *)((long)puVar14 + -0x138) = *(undefined8 *)((long)puVar14 + -0x138);
      uVar15 = uVar10;
      if (0 < *(int *)(uVar10 + 0x18)) {
        uVar15 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar10 + 0x10),0,*(int *)(uVar10 + 0x18),0);
        *(undefined4 *)(uVar10 + 0x18) = 0;
      }
      *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
      return uVar15;
    }
  }
  uVar16 = (ulong)extraout_s0;
  puVar22 = *(undefined8 **)((long)puVar14 + -0x110);
  uVar15 = *(ulong *)((long)puVar14 + -0x108);
  uVar7 = *(undefined8 *)((long)puVar14 + -0x120);
  uVar1 = *(ulong *)((long)puVar14 + -0x118);
  *(undefined8 *)((long)puVar14 + -0x120) = uVar7;
  *(ulong *)((long)puVar14 + -0x118) = uVar1;
  *(undefined8 **)((long)puVar14 + -0x110) = puVar22;
  *(ulong *)((long)puVar14 + -0x108) = uVar15;
  *(undefined8 *)((long)puVar14 + -0x100) = *(undefined8 *)((long)puVar14 + -0x100);
  *(undefined8 *)((long)puVar14 + -0xf8) = *(undefined8 *)((long)puVar14 + -0xf8);
  lVar8 = *(long *)(uVar10 + 0x10);
  puVar17 = extraout_x1;
  if (lVar8 == 0) {
code_r0x0259cf3c:
    uVar16 = uVar1;
    uVar10 = uVar15;
    uVar13 = func_0x00f78af4();
    lVar8 = extraout_x9;
    uVar18 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar10 + 0x18) = uVar18 + 1;
  }
  else {
    uVar18 = *(uint *)(uVar10 + 0x18);
    uVar13 = uVar10;
    puVar22 = extraout_x1;
    if (uVar18 != *(uint *)(lVar8 + 0x18)) goto code_r0x0259cf40;
    puVar17 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar13 = (*(code *)*puVar17)(uVar10,uVar18 + 1);
    lVar8 = *(long *)(uVar10 + 0x10);
    uVar18 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar18 + 1;
    uVar15 = uVar10;
    uVar1 = uVar16;
    if (lVar8 == 0) goto code_r0x0259cf3c;
  }
  if (uVar18 < *(uint *)(lVar8 + 0x18)) {
    lVar8 = lVar8 + (long)(int)uVar18 * 0x10;
    *(ulong *)(lVar8 + 0x20) = uVar16;
    *(undefined8 **)(lVar8 + 0x28) = puVar22;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar13;
  }
  uVar9 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar9,0);
  plVar12 = auVar37._8_8_;
  lVar8 = auVar37._0_8_;
  *(long *)((long)puVar14 + -0x160) = unaff_x24;
  *(long *)((long)puVar14 + -0x158) = unaff_x23;
  *(undefined8 *)((long)puVar14 + -0x150) = uVar7;
  *(ulong *)((long)puVar14 + -0x148) = uVar16;
  *(undefined8 **)((long)puVar14 + -0x140) = puVar22;
  *(ulong *)((long)puVar14 + -0x138) = uVar10;
  *(undefined1 **)((long)puVar14 + -0x130) = (undefined1 *)((long)puVar14 + -0x100);
  *(undefined **)((long)puVar14 + -0x128) =
       &System_Collections_Generic_List_SlantFillBar_ThresholdEvent___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(plVar12,0x14);
  if (lVar8 != 0) {
    pcVar27 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (plVar12 != (long *)0x0) {
      if (*(long *)(*plVar12 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar14 = (undefined8 *)func_0x00f78ae4(plVar12);
        (*pcVar27)(lVar8,*puVar14,puVar14[1],*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
        iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar8);
        return (ulong)(iVar6 - 1);
      }
      func_0x00f78e5c(plVar12,lVar11);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar27 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar27)();
}



// ============================================================
// RVA: 0x1599c88 | Atlas.Contexts.GameContextBase.EndOfTournamentRound
// ============================================================

/* WARNING: Possible PIC construction at 0x0159a23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159a240) */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__EndOfTournamentRound(long param_1)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *extraout_x1;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  uint extraout_w8;
  uint uVar19;
  long *plVar20;
  long lVar21;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long lVar22;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar23;
  long unaff_x23;
  long lVar24;
  code *pcVar25;
  undefined8 unaff_x24;
  undefined8 uVar26;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined *unaff_x30;
  undefined4 uVar28;
  uint extraout_s0;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 unaff_d8;
  undefined8 uVar33;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  
  puVar4 = &stack0xffffffffffffffd0;
  puVar27 = &stack0xfffffffffffffff0;
  lVar22 = 0x3eb5000;
  if ((bRam0000000003eb51a9 & 1) == 0) {
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb51a9 = 1;
  }
  if ((*(long *)(param_1 + 0xc0) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20), lVar7 == 0)) {
LAB_01599d9c:
    unaff_x30 = &Atlas_Contexts_GameContextBase__SwitchToFrontEndContext;
    auVar34 = func_0x00f78af4();
    lVar16 = auVar34._8_8_;
    lVar17 = auVar34._0_8_;
  }
  else {
    iVar6 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar7,0);
    if (iVar6 == 0) {
      lVar22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
      /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(lVar22,0);
      unaff_x21 = /*Atlas.Contexts.RoundResultsState_var*/ uRam0000000003d19d50;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      if (lVar22 != 0) {
        *(undefined8 *)(lVar22 + 0x18) = uVar11;
        lVar7 = *(long *)(param_1 + 0x70);
        if (lVar7 != 0) goto code_r0x0163d6f8;
      }
      goto LAB_01599d9c;
    }
    lVar16 = 0;
    puVar4 = (undefined1 *)register0x00000008;
    lVar17 = param_1;
    param_1 = unaff_x19;
    lVar22 = unaff_x20;
    puVar27 = unaff_x29;
  }
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(long *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar22;
  *(long *)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = puVar27;
  *(undefined **)(puVar4 + -8) = unaff_x30;
  lVar23 = 0x3eb5000;
  if ((bRam0000000003eb51a7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d194f0);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27688);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d28a08);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb51a7 = 1;
  }
  *(undefined8 *)(puVar4 + -0x68) = 0;
  *(undefined8 *)(puVar4 + -0x70) = 0;
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined8 *)(puVar4 + -0x60) = 0;
  lVar22 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(lVar22,0);
  if (((lVar22 != 0) && (lVar7 = *(long *)(lVar17 + 0x1c0), lVar7 != 0)) &&
     (lVar21 = *(long *)(lVar22 + 0x10), lVar21 != 0)) {
    *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar7 + 0x38);
    *(undefined4 *)(lVar21 + 0x10) = *(undefined4 *)(lVar7 + 0x18);
    uVar26 = *(undefined8 *)(lVar7 + 0x80);
    uVar11 = *(undefined8 *)(lVar7 + 0x78);
    uVar30 = *(undefined8 *)(lVar7 + 0x90);
    uVar8 = *(undefined8 *)(lVar7 + 0x88);
    uVar32 = *(undefined8 *)(lVar7 + 0x98);
    uVar31 = *(undefined8 *)(lVar7 + 0xb0);
    uVar33 = *(undefined8 *)(lVar7 + 0xa8);
    *(undefined8 *)(lVar21 + 0x58) = *(undefined8 *)(lVar7 + 0xa0);
    *(undefined8 *)(lVar21 + 0x50) = uVar32;
    *(undefined8 *)(lVar21 + 0x68) = uVar31;
    *(undefined8 *)(lVar21 + 0x60) = uVar33;
    *(undefined8 *)(lVar21 + 0x38) = uVar26;
    *(undefined8 *)(lVar21 + 0x30) = uVar11;
    *(undefined8 *)(lVar21 + 0x48) = uVar30;
    *(undefined8 *)(lVar21 + 0x40) = uVar8;
    if ((*(long *)(lVar17 + 0x1c0) != 0) && (lVar23 = *(long *)(lVar22 + 0x10), lVar23 != 0)) {
      *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 200);
      if (*(long *)(lVar17 + 0x118) != 0) {
        uVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar17 + 0x118),0);
        *(undefined1 *)(lVar23 + 0x78) = uVar5;
        if ((*(long *)(lVar17 + 0xb8) != 0) && (*(long *)(lVar17 + 0x1c0) != 0)) {
          uVar11 = 0x3d21270;
          uVar26 = 0x3d21270;
          lVar23 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
          unaff_x23 = *(long *)(*(long *)(lVar17 + 0x1c0) + 0x40);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x23,0);
          unaff_x24 = uVar11;
          if ((*(long *)(lVar22 + 0x10) != 0) && (lVar23 != 0)) {
            /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar23,uVar8,*(long *)(lVar22 + 0x10) + 0x70,uRam0000000003d57500);
            lVar7 = *(long *)(lVar17 + 0x1c0);
            unaff_x24 = uVar26;
            if ((lVar7 != 0) && (lVar23 = *(long *)(lVar22 + 0x10), lVar23 != 0)) {
              *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)(lVar7 + 200);
              iVar6 = (int)lVar16;
              switch(*(undefined4 *)(lVar7 + 0x18)) {
              case 1:
                lVar16 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
                Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor
                          (lVar16,0);
                if (lVar16 != 0) {
                  *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar22 + 0x10);
                  if ((*(long *)(lVar17 + 0x198) != 0) && (*(long *)(lVar17 + 0xc0) != 0)) {
                    uVar26 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromNetworkResults*/ func_0x0156505c(*(undefined8 *)(*(long *)(lVar17 + 0x198) + 0x98),
                                             *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28),0);
                    *(undefined8 *)(lVar16 + 0x18) = uVar26;
                    *(long *)(lVar22 + 0x20) = lVar16;
                    lVar16 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ lRam0000000003d194d8;
                    if ((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0)
                    goto code_r0x0159a204;
                    goto code_r0x0159a210;
                  }
                }
                break;
              case 2:
                lVar7 = *(long *)(lVar17 + 0xc0);
                if ((lVar7 != 0) && (lVar21 = *(long *)(lVar7 + 0x20), lVar21 != 0)) {
                  uVar8 = *(undefined8 *)(lVar21 + 0xd8);
                  uVar26 = *(undefined8 *)(lVar21 + 0xd0);
                  uVar32 = *(undefined8 *)(lVar21 + 0xe8);
                  uVar30 = *(undefined8 *)(lVar21 + 0xe0);
                  *(undefined8 *)(puVar4 + -0x68) = uVar8;
                  *(undefined8 *)(puVar4 + -0x70) = uVar26;
                  *(undefined8 *)(puVar4 + -0x58) = uVar32;
                  *(undefined8 *)(puVar4 + -0x60) = uVar30;
                  *(undefined8 *)(puVar4 + -0x88) = uVar8;
                  *(undefined8 *)(puVar4 + -0x90) = uVar26;
                  *(undefined8 *)(puVar4 + -0x78) = uVar32;
                  *(undefined8 *)(puVar4 + -0x80) = uVar30;
                  uVar26 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromTournament*/ func_0x01565710(puVar4 + -0x90,*(undefined8 *)(lVar7 + 0x28),0);
                  lVar21 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData_TypeInfo*/ uRam0000000003d28a08);
                  *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0x68);
                  *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0x70);
                  *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x58);
                  *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0x60);
                  /*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData$$.ctor*/ func_0x01566048(lVar21,lVar23,uVar26,puVar4 + -0xb0,0);
                  plVar9 = (long *)0x3d19d50;
                  *(long *)(lVar22 + 0x20) = lVar21;
code_r0x0159a1ec:
                  lVar16 = *plVar9;
                  unaff_x23 = lVar21;
                  if ((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) {
code_r0x0159a204:
                    if (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0) {
                      func_0x00f78ad0();
                    }
                  }
code_r0x0159a210:
                  uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar16,0);
                  *(undefined8 *)(lVar22 + 0x18) = uVar26;
                  goto code_r0x0159a220;
                }
                break;
              case 3:
                lVar23 = *(long *)(lVar7 + 0x40);
                if ((0 < iVar6) && (*(char *)(lVar17 + 0x24a) == '\0')) {
                  if ((*(long *)(lVar17 + 0xb8) == 0) ||
                     (lVar7 = /*Atlas.Definitions.AtlasDefinitions$$GetNextEventDefinition*/ func_0x01468b08(*(long *)(lVar17 + 0xb8),lVar23,1,0), lVar7 == 0))
                  break;
                  lVar23 = *(long *)(lVar7 + 0x18);
                }
                lVar21 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar21,0);
                unaff_x23 = lVar21;
                if (lVar21 != 0) {
                  *(int *)(lVar21 + 0x14) = iVar6;
                  *(undefined1 *)(lVar21 + 0x10) = *(undefined1 *)(lVar17 + 0x24a);
                  if (*(long *)(lVar17 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar21 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 0x40);
                    lVar7 = *(long *)(lVar17 + 0xf0);
                    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar16 = 0;
                    if (lVar7 != 0) {
                      iVar6 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedButNotComplete*/ func_0x01585640(lVar7,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8),0
                                             );
                      if (iVar6 == 0) {
                        lVar16 = *(long *)(lVar22 + 0x10);
                        uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                        lVar7 = lVar23;
                        lVar24 = lVar21;
                        goto code_r0x0159a0f4;
                      }
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar8 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
                      uVar11 = *(undefined8 *)(lVar22 + 0x10);
                      uVar26 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                      Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                                (uVar26,lVar23,lVar21,uVar8,0,uVar11,0);
                      plVar9 = (long *)0x3d194e8;
code_r0x0159a070:
                      *(undefined8 *)(lVar22 + 0x20) = uVar26;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 4:
              case 5:
              case 9:
                lVar21 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar21,0);
                lVar23 = lVar21;
                if (lVar21 != 0) {
                  *(int *)(lVar21 + 0x14) = iVar6;
                  *(undefined1 *)(lVar21 + 0x10) = *(undefined1 *)(lVar17 + 0x24a);
                  if (*(long *)(lVar17 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar21 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 0x40);
                    lVar16 = *(long *)(lVar22 + 0x10);
                    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x70) != 0)) {
                      lVar23 = *(long *)(*(long *)(lVar16 + 0x70) + 0x18);
                      uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      lVar7 = lVar21;
                      lVar24 = lVar23;
code_r0x0159a0f4:
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar11,lVar16,lVar23,lVar21,/*STR('')*/ uRam0000000003d65d08,0);
                      plVar9 = (long *)0x3d194f0;
                      *(undefined8 *)(lVar22 + 0x20) = uVar11;
                      lVar23 = lVar7;
                      lVar21 = lVar24;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 6:
              case 7:
              case 8:
                lVar23 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar23,0);
                if (lVar23 != 0) {
                  *(int *)(lVar23 + 0x14) = iVar6;
                  *(undefined1 *)(lVar23 + 0x10) = *(undefined1 *)(lVar17 + 0x24a);
                  if (*(long *)(lVar17 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar23 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar17 + 0x1c0) + 0x40);
                    lVar16 = *(long *)(lVar22 + 0x10);
                    if ((((lVar16 != 0) && (*(long *)(lVar16 + 0x70) != 0)) &&
                        (*(long *)(lVar17 + 0x230) != 0)) &&
                       (lVar7 = *(long *)(*(long *)(lVar17 + 0x230) + 0x48), lVar7 != 0)) {
                      lVar21 = *(long *)(*(long *)(lVar16 + 0x70) + 0x18);
                      uVar11 = *(undefined8 *)(lVar7 + 0x18);
                      uVar26 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar26,lVar16,lVar21,lVar23,uVar11,0);
                      plVar9 = (long *)0x3d194f0;
                      goto code_r0x0159a070;
                    }
                  }
                }
                break;
              default:
code_r0x0159a220:
                lVar7 = *(long *)(lVar17 + 0x70);
                unaff_x24 = uVar11;
                if (lVar7 != 0) {
code_r0x0163d6f8:
                  uVar11 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                  cVar2 = *(char *)(lVar7 + 0x50);
                  if (cVar2 == '\0') {
                    *(undefined1 *)(lVar7 + 0x50) = 1;
                    *(undefined8 *)(lVar7 + 0x40) = uVar11;
                    *(long *)(lVar7 + 0x48) = lVar22;
                  }
                  return (ulong)(cVar2 == '\0');
                }
              }
            }
          }
        }
      }
    }
  }
  plVar9 = (long *)func_0x00f78af4();
  *(long *)(puVar4 + -0xe0) = lVar23;
  *(long *)(puVar4 + -0xd8) = lVar16;
  *(long *)(puVar4 + -0xd0) = lVar22;
  *(long *)(puVar4 + -200) = lVar17;
  *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0xb8) = &Atlas_Contexts_GameContextBase__InitPickupLimitsDefinition;
  lVar22 = 0x3eb5000;
  if ((bRam0000000003eb51a5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d71248);
    func_0x00f78a20(0x3d71240);
    bRam0000000003eb51a5 = 1;
  }
  if (plVar9[0x38] != 0) {
    uVar10 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar9[0x38] + 0x60,0);
    if ((uVar10 & 1) == 0) {
      lVar22 = plVar9[0x42];
    }
    else {
      if (((plVar9[0x17] == 0) || (plVar9[0x38] == 0)) ||
         (lVar7 = *(long *)(plVar9[0x17] + 0x10), lVar7 == 0)) goto code_r0x0159a554;
      lVar22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,*(undefined8 *)(plVar9[0x38] + 0x60),uRam0000000003d572e8);
      plVar9[0x42] = lVar22;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar22,0,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    plVar20 = (long *)0x3d71240;
    if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar9 + 300)) &&
       (plVar20 = (long *)0x3d71248,
       *(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
       != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
      plVar20 = (long *)0x3d71240;
    }
    if (plVar9[0x17] != 0) {
      lVar16 = *plVar20;
      lVar7 = *(long *)(plVar9[0x17] + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar16,0);
      lVar22 = 0;
      if (lVar7 != 0) {
        uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,uVar11,uRam0000000003d572e8);
        plVar9[0x42] = uVar10;
        return uVar10;
      }
    }
  }
code_r0x0159a554:
  fVar29 = (float)func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x110) = unaff_d9;
  *(undefined8 *)(puVar4 + -0x108) = unaff_d8;
  *(long *)(puVar4 + -0x100) = lVar22;
  *(long **)(puVar4 + -0xf8) = plVar9;
  *(undefined1 **)(puVar4 + -0xf0) = puVar4 + -0xc0;
  *(undefined **)(puVar4 + -0xe8) = &Atlas_Contexts_GameContextBase__UpdateLoadingProgress;
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar4 + -0x120) = *(undefined8 *)(puVar4 + -0x110);
  *(undefined8 *)(puVar4 + -0x118) = *(undefined8 *)(puVar4 + -0x108);
  *(long *)(puVar4 + -0x110) = lVar23;
  *(long *)(puVar4 + -0x108) = lVar16;
  *(undefined8 *)(puVar4 + -0x100) = *(undefined8 *)(puVar4 + -0x100);
  *(undefined8 *)(puVar4 + -0xf8) = *(undefined8 *)(puVar4 + -0xf8);
  *(undefined8 *)(puVar4 + -0xf0) = *(undefined8 *)(puVar4 + -0xf0);
  *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0xe8);
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar10 & 1) != 0) {
    return uVar10;
  }
  uVar28 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar29 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4,
                           0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar22 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar22 == 0) {
    func_0x00f78af4();
    *(undefined8 *)(puVar4 + -0x140) = uVar11;
    *(undefined8 *)(puVar4 + -0x138) = 1;
    *(undefined1 **)(puVar4 + -0x130) = puVar4 + -0xf0;
    *(undefined **)(puVar4 + -0x128) = &Atlas_UI_LoadingBehaviour__HasFinishedLoading;
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar22 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar22 + 0x10) == '\0') {
      return 0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar22 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar7 = lRam0000000003d2bf00;
    *(undefined8 *)(puVar4 + -0x150) = 0x3d23990;
    *(undefined8 *)(puVar4 + -0x148) = 0x3d23050;
    *(undefined8 *)(puVar4 + -0x140) = *(undefined8 *)(puVar4 + -0x140);
    *(undefined8 *)(puVar4 + -0x138) = *(undefined8 *)(puVar4 + -0x138);
    *(undefined8 *)(puVar4 + -0x130) = *(undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x128) = *(undefined8 *)(puVar4 + -0x128);
    lVar16 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar17 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x58);
    *(undefined8 *)(puVar4 + -0x1a0) = unaff_x24;
    *(long *)(puVar4 + -0x198) = unaff_x23;
    *(undefined8 *)(puVar4 + -400) = 0x3d23990;
    *(long *)(puVar4 + -0x188) = lVar16;
    *(long **)(puVar4 + -0x180) = (long *)(lVar22 + 0x18);
    *(long *)(puVar4 + -0x178) = lVar7;
    *(undefined1 **)(puVar4 + -0x170) = puVar4 + -0x130;
    *(undefined **)(puVar4 + -0x168) = &UNK_01b570c0;
    lVar7 = *(long *)(lVar22 + 0x18);
    if (lVar7 == 0) {
      uVar10 = 0;
    }
    else {
      lVar23 = *(long *)(lVar17 + 0x18);
      uVar3 = *(ushort *)(lVar23 + 0x132);
      lVar16 = lVar23;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar23);
        lVar16 = *(long *)(lVar17 + 0x18);
        uVar3 = *(ushort *)(lVar16 + 0x132);
      }
      pcVar25 = *(code **)**(undefined8 **)(lVar23 + 0xc0);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      iVar6 = (*pcVar25)(lVar7,**(undefined8 **)(lVar16 + 0xc0));
      uVar10 = (ulong)(iVar6 == *(int *)(lVar22 + 0x20));
    }
    return uVar10;
  }
  uVar11 = *(undefined8 *)(puVar4 + -0x100);
  uVar8 = *(undefined8 *)(puVar4 + -0xf8);
  uVar26 = *(undefined8 *)(puVar4 + -0x110);
  uVar30 = *(undefined8 *)(puVar4 + -0x108);
  uVar33 = *(undefined8 *)(puVar4 + -0x120);
  uVar32 = *(undefined8 *)(puVar4 + -0x118);
  *(undefined8 *)(puVar4 + -0xf0) = *(undefined8 *)(puVar4 + -0xf0);
  *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0xe8);
  uVar10 = *(ulong *)(lVar22 + 0x20);
  if (uVar10 == 0) {
    auVar34 = func_0x00f78af4();
    *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0xf0;
    *(undefined **)(puVar4 + -0xf8) = &Atlas_UI_LoadingBehaviour__set_BuildInfo;
    plVar9 = *(long **)(auVar34._0_8_ + 0x28);
    if (plVar9 == (long *)0x0) {
      lVar22 = func_0x00f78af4();
      return *(ulong *)(lVar22 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(*plVar9 + 0x558))(plVar9,auVar34._8_8_,*(undefined8 *)(*plVar9 + 0x560));
    return uVar10;
  }
  *(undefined8 *)(puVar4 + -0xf0) = *(undefined8 *)(puVar4 + -0xf0);
  *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0xe8);
  *(undefined1 *)(uVar10 + 0x90) = 1;
  *(undefined4 *)(uVar10 + 0x94) = uVar28;
  *(undefined8 *)(uVar10 + 0x98) = 0;
  if (*(char *)(uVar10 + 0x3c) == '\0') {
    return uVar10;
  }
  uVar10 = *(ulong *)(uVar10 + 0xb8);
  if (uVar10 != 0) {
    *(undefined8 *)(puVar4 + -0x100) = uVar11;
    *(undefined8 *)(puVar4 + -0xf8) = uVar8;
    *(undefined8 *)(puVar4 + -0xf0) = *(undefined8 *)(puVar4 + -0xf0);
    *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0xe8);
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,0,0);
    return uVar10;
  }
  lVar22 = func_0x00f78af4(0,0,0);
  *(undefined8 *)(puVar4 + -0x130) = uVar33;
  *(undefined8 *)(puVar4 + -0x128) = uVar32;
  *(undefined8 *)(puVar4 + -0x120) = uVar26;
  *(undefined8 *)(puVar4 + -0x118) = uVar30;
  *(undefined8 *)(puVar4 + -0x110) = uVar11;
  *(undefined8 *)(puVar4 + -0x108) = uVar8;
  *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0xf0;
  *(undefined **)(puVar4 + -0xf8) = &Atlas_UI_SlantFillBar__AddThresholdEvent;
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar10 = *(ulong *)(lVar22 + 0xc0);
  if (uVar10 == 0) {
    uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar10,uRam0000000003d3d9e0);
    *(ulong *)(lVar22 + 0xc0) = uVar10;
    if (uVar10 == 0) {
      lVar7 = func_0x00f78af4();
      *(long *)(puVar4 + -0x150) = lVar22;
      *(undefined8 **)(puVar4 + -0x148) = extraout_x1;
      *(undefined1 **)(puVar4 + -0x140) = puVar4 + -0x100;
      *(undefined **)(puVar4 + -0x138) = &Atlas_UI_SlantFillBar__ClearThresholdEvents;
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar10 = *(ulong *)(lVar7 + 0xc0);
      if (uVar10 == 0) {
        return 0;
      }
      *(undefined8 *)(puVar4 + -0x150) = *(undefined8 *)(puVar4 + -0x150);
      *(undefined8 *)(puVar4 + -0x148) = *(undefined8 *)(puVar4 + -0x148);
      *(undefined8 *)(puVar4 + -0x140) = *(undefined8 *)(puVar4 + -0x140);
      *(undefined8 *)(puVar4 + -0x138) = *(undefined8 *)(puVar4 + -0x138);
      uVar14 = uVar10;
      if (0 < *(int *)(uVar10 + 0x18)) {
        uVar14 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar10 + 0x10),0,*(int *)(uVar10 + 0x18),0);
        *(undefined4 *)(uVar10 + 0x18) = 0;
      }
      *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
      return uVar14;
    }
  }
  uVar15 = (ulong)extraout_s0;
  puVar13 = *(undefined8 **)(puVar4 + -0x110);
  uVar14 = *(ulong *)(puVar4 + -0x108);
  uVar11 = *(undefined8 *)(puVar4 + -0x120);
  uVar1 = *(ulong *)(puVar4 + -0x118);
  *(undefined8 *)(puVar4 + -0x120) = uVar11;
  *(ulong *)(puVar4 + -0x118) = uVar1;
  *(undefined8 **)(puVar4 + -0x110) = puVar13;
  *(ulong *)(puVar4 + -0x108) = uVar14;
  *(undefined8 *)(puVar4 + -0x100) = *(undefined8 *)(puVar4 + -0x100);
  *(undefined8 *)(puVar4 + -0xf8) = *(undefined8 *)(puVar4 + -0xf8);
  lVar22 = *(long *)(uVar10 + 0x10);
  puVar18 = extraout_x1;
  if (lVar22 == 0) {
code_r0x0259cf3c:
    uVar15 = uVar1;
    uVar10 = uVar14;
    uVar12 = func_0x00f78af4();
    lVar22 = extraout_x9;
    uVar19 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar10 + 0x18) = uVar19 + 1;
  }
  else {
    uVar19 = *(uint *)(uVar10 + 0x18);
    uVar12 = uVar10;
    puVar13 = extraout_x1;
    if (uVar19 != *(uint *)(lVar22 + 0x18)) goto code_r0x0259cf40;
    puVar18 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar12 = (*(code *)*puVar18)(uVar10,uVar19 + 1);
    lVar22 = *(long *)(uVar10 + 0x10);
    uVar19 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar19 + 1;
    uVar14 = uVar10;
    uVar1 = uVar15;
    if (lVar22 == 0) goto code_r0x0259cf3c;
  }
  if (uVar19 < *(uint *)(lVar22 + 0x18)) {
    lVar22 = lVar22 + (long)(int)uVar19 * 0x10;
    *(ulong *)(lVar22 + 0x20) = uVar15;
    *(undefined8 **)(lVar22 + 0x28) = puVar13;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar12;
  }
  uVar26 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar26,0);
  plVar9 = auVar34._8_8_;
  lVar22 = auVar34._0_8_;
  *(undefined8 *)(puVar4 + -0x160) = unaff_x24;
  *(long *)(puVar4 + -0x158) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x150) = uVar11;
  *(ulong *)(puVar4 + -0x148) = uVar15;
  *(undefined8 **)(puVar4 + -0x140) = puVar13;
  *(ulong *)(puVar4 + -0x138) = uVar10;
  *(undefined1 **)(puVar4 + -0x130) = puVar4 + -0x100;
  *(undefined **)(puVar4 + -0x128) =
       &System_Collections_Generic_List_SlantFillBar_ThresholdEvent___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x48))(plVar9,0x14);
  if (lVar22 != 0) {
    pcVar25 = (code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x28);
    lVar7 = *(long *)(*(long *)(puVar18[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar7 + 0x40)) {
        puVar13 = (undefined8 *)func_0x00f78ae4(plVar9);
        (*pcVar25)(lVar22,*puVar13,puVar13[1],*(undefined8 *)(*(long *)(puVar18[3] + 0xc0) + 0x28));
        iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x68))(lVar22);
        return (ulong)(iVar6 - 1);
      }
      func_0x00f78e5c(plVar9,lVar7);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar25)();
}



// ============================================================
// RVA: 0x1599da0 | Atlas.Contexts.GameContextBase.SwitchToFrontEndContext
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Contexts_GameContextBase__SwitchToFrontEndContext(long param_1,ulong param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *extraout_x1;
  undefined8 *puVar9;
  uint extraout_w8;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  long extraout_x9;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  uint extraout_s0;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb51a7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d194f0);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27688);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d28a08);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb51a7 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar4 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(lVar4,0);
  if (((lVar4 != 0) && (lVar11 = *(long *)(param_1 + 0x1c0), lVar11 != 0)) &&
     (lVar13 = *(long *)(lVar4 + 0x10), lVar13 != 0)) {
    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar11 + 0x38);
    *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(lVar11 + 0x18);
    uVar18 = *(undefined8 *)(lVar11 + 0x80);
    uVar17 = *(undefined8 *)(lVar11 + 0x78);
    uVar21 = *(undefined8 *)(lVar11 + 0x90);
    uVar20 = *(undefined8 *)(lVar11 + 0x88);
    uVar24 = *(undefined8 *)(lVar11 + 0x98);
    uVar26 = *(undefined8 *)(lVar11 + 0xb0);
    uVar25 = *(undefined8 *)(lVar11 + 0xa8);
    *(undefined8 *)(lVar13 + 0x58) = *(undefined8 *)(lVar11 + 0xa0);
    *(undefined8 *)(lVar13 + 0x50) = uVar24;
    *(undefined8 *)(lVar13 + 0x68) = uVar26;
    *(undefined8 *)(lVar13 + 0x60) = uVar25;
    *(undefined8 *)(lVar13 + 0x38) = uVar18;
    *(undefined8 *)(lVar13 + 0x30) = uVar17;
    *(undefined8 *)(lVar13 + 0x48) = uVar21;
    *(undefined8 *)(lVar13 + 0x40) = uVar20;
    if ((*(long *)(param_1 + 0x1c0) != 0) && (lVar11 = *(long *)(lVar4 + 0x10), lVar11 != 0)) {
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 200);
      if (*(long *)(param_1 + 0x118) != 0) {
        uVar2 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(param_1 + 0x118),0);
        *(undefined1 *)(lVar11 + 0x78) = uVar2;
        if ((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0x1c0) != 0)) {
          lVar11 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
          uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x40);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
          if ((*(long *)(lVar4 + 0x10) != 0) && (lVar11 != 0)) {
            /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar11,uVar17,*(long *)(lVar4 + 0x10) + 0x70,uRam0000000003d57500);
            lVar11 = *(long *)(param_1 + 0x1c0);
            if ((lVar11 != 0) && (lVar13 = *(long *)(lVar4 + 0x10), lVar13 != 0)) {
              *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar11 + 200);
              iVar3 = (int)param_2;
              switch(*(undefined4 *)(lVar11 + 0x18)) {
              case 1:
                param_2 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
                Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor
                          (param_2,0);
                if (param_2 != 0) {
                  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
                  if ((*(long *)(param_1 + 0x198) != 0) && (*(long *)(param_1 + 0xc0) != 0)) {
                    uVar17 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromNetworkResults*/ func_0x0156505c(*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x98),
                                             *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x28),0);
                    *(undefined8 *)(param_2 + 0x18) = uVar17;
                    *(ulong *)(lVar4 + 0x20) = param_2;
                    param_2 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
                    if ((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0)
                    goto code_r0x0159a204;
                    goto code_r0x0159a210;
                  }
                }
                break;
              case 2:
                lVar11 = *(long *)(param_1 + 0xc0);
                if ((lVar11 != 0) && (lVar15 = *(long *)(lVar11 + 0x20), lVar15 != 0)) {
                  uStack_88 = *(undefined8 *)(lVar15 + 0xd8);
                  uStack_90 = *(undefined8 *)(lVar15 + 0xd0);
                  uStack_78 = *(undefined8 *)(lVar15 + 0xe8);
                  uStack_80 = *(undefined8 *)(lVar15 + 0xe0);
                  uStack_70 = uStack_90;
                  uStack_68 = uStack_88;
                  uStack_60 = uStack_80;
                  uStack_58 = uStack_78;
                  uVar17 = /*Atlas.UI.Screens.ResultsScreen.Result$$FromTournament*/ func_0x01565710(&uStack_90,*(undefined8 *)(lVar11 + 0x28),0);
                  uVar18 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData_TypeInfo*/ uRam0000000003d28a08);
                  uStack_a8 = uStack_68;
                  uStack_b0 = uStack_70;
                  uStack_98 = uStack_58;
                  uStack_a0 = uStack_60;
                  /*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData$$.ctor*/ func_0x01566048(uVar18,lVar13,uVar17,&uStack_b0,0);
                  puVar12 = (ulong *)0x3d19d50;
                  *(undefined8 *)(lVar4 + 0x20) = uVar18;
code_r0x0159a1ec:
                  param_2 = *puVar12;
                  if ((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) {
code_r0x0159a204:
                    if (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0) {
                      func_0x00f78ad0();
                    }
                  }
code_r0x0159a210:
                  uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(param_2,0);
                  *(undefined8 *)(lVar4 + 0x18) = uVar17;
                  goto LAB_0159a220;
                }
                break;
              case 3:
                uVar18 = *(undefined8 *)(lVar11 + 0x40);
                if ((0 < iVar3) && (*(char *)(param_1 + 0x24a) == '\0')) {
                  if ((*(long *)(param_1 + 0xb8) == 0) ||
                     (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetNextEventDefinition*/ func_0x01468b08(*(long *)(param_1 + 0xb8),uVar18,1,0), lVar11 == 0))
                  break;
                  uVar18 = *(undefined8 *)(lVar11 + 0x18);
                }
                lVar11 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar11,0);
                if (lVar11 != 0) {
                  *(int *)(lVar11 + 0x14) = iVar3;
                  *(undefined1 *)(lVar11 + 0x10) = *(undefined1 *)(param_1 + 0x24a);
                  if (*(long *)(param_1 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar11 + 0x18) =
                         *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x40);
                    lVar13 = *(long *)(param_1 + 0xf0);
                    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    param_2 = 0;
                    if (lVar13 != 0) {
                      iVar3 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedButNotComplete*/ func_0x01585640(lVar13,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8),
                                              0);
                      if (iVar3 == 0) {
                        param_2 = *(ulong *)(lVar4 + 0x10);
                        uVar17 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                        goto code_r0x0159a0f4;
                      }
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar20 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
                      uVar21 = *(undefined8 *)(lVar4 + 0x10);
                      uVar17 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                      Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                                (uVar17,uVar18,lVar11,uVar20,0,uVar21,0);
                      puVar12 = (ulong *)0x3d194e8;
code_r0x0159a070:
                      *(undefined8 *)(lVar4 + 0x20) = uVar17;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 4:
              case 5:
              case 9:
                lVar11 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar11,0);
                if (lVar11 != 0) {
                  *(int *)(lVar11 + 0x14) = iVar3;
                  *(undefined1 *)(lVar11 + 0x10) = *(undefined1 *)(param_1 + 0x24a);
                  if (*(long *)(param_1 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar11 + 0x18) =
                         *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x40);
                    param_2 = *(ulong *)(lVar4 + 0x10);
                    if ((param_2 != 0) && (*(long *)(param_2 + 0x70) != 0)) {
                      uVar18 = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x18);
                      uVar17 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
code_r0x0159a0f4:
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar17,param_2,uVar18,lVar11,/*STR('')*/ uRam0000000003d65d08,0);
                      puVar12 = (ulong *)0x3d194f0;
                      *(undefined8 *)(lVar4 + 0x20) = uVar17;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 6:
              case 7:
              case 8:
                lVar11 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar11,0);
                if (lVar11 != 0) {
                  *(int *)(lVar11 + 0x14) = iVar3;
                  *(undefined1 *)(lVar11 + 0x10) = *(undefined1 *)(param_1 + 0x24a);
                  if (*(long *)(param_1 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar11 + 0x18) =
                         *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x40);
                    param_2 = *(ulong *)(lVar4 + 0x10);
                    if ((((param_2 != 0) && (*(long *)(param_2 + 0x70) != 0)) &&
                        (*(long *)(param_1 + 0x230) != 0)) &&
                       (lVar13 = *(long *)(*(long *)(param_1 + 0x230) + 0x48), lVar13 != 0)) {
                      uVar18 = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x18);
                      uVar20 = *(undefined8 *)(lVar13 + 0x18);
                      uVar17 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar17,param_2,uVar18,lVar11,uVar20,0);
                      puVar12 = (ulong *)0x3d194f0;
                      goto code_r0x0159a070;
                    }
                  }
                }
                break;
              default:
LAB_0159a220:
                if (*(long *)(param_1 + 0x70) != 0) {
                  plVar5 = (long *)/*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(param_1 + 0x70),/*STR('FrontEndContext')*/ uRam0000000003d6d050,
                                                   lVar4,0);
                  return plVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  puVar14 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb51a5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d71248);
    func_0x00f78a20(0x3d71240);
    bRam0000000003eb51a5 = 1;
  }
  if (plVar5[0x38] != 0) {
    uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar5[0x38] + 0x60,0);
    if ((uVar6 & 1) == 0) {
      puVar14 = (undefined8 *)plVar5[0x42];
    }
    else {
      if (((plVar5[0x17] == 0) || (plVar5[0x38] == 0)) ||
         (lVar4 = *(long *)(plVar5[0x17] + 0x10), lVar4 == 0)) goto code_r0x0159a554;
      puVar14 = (undefined8 *)
                /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(plVar5[0x38] + 0x60),uRam0000000003d572e8);
      plVar5[0x42] = (long)puVar14;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar14,0,0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    puVar12 = (ulong *)0x3d71240;
    if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (puVar12 = (ulong *)0x3d71248,
       *(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
       != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
      puVar12 = (ulong *)0x3d71240;
    }
    if (plVar5[0x17] != 0) {
      param_2 = *puVar12;
      lVar4 = *(long *)(plVar5[0x17] + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_2,0);
      puVar14 = (undefined8 *)0x0;
      if (lVar4 != 0) {
        plVar7 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,uVar17,uRam0000000003d572e8);
        plVar5[0x42] = (long)plVar7;
        return plVar7;
      }
    }
  }
code_r0x0159a554:
  fVar23 = (float)func_0x00f78af4();
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  uVar22 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar23 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4,
                           0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar4 == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      return (long *)0x0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar11 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x58);
    lVar13 = *(long *)(lVar4 + 0x18);
    if (lVar13 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      lVar16 = *(long *)(lVar11 + 0x18);
      uVar1 = *(ushort *)(lVar16 + 0x132);
      lVar15 = lVar16;
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar16);
        lVar15 = *(long *)(lVar11 + 0x18);
        uVar1 = *(ushort *)(lVar15 + 0x132);
      }
      pcVar19 = *(code **)**(undefined8 **)(lVar16 + 0xc0);
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      iVar3 = (*pcVar19)(lVar13,**(undefined8 **)(lVar15 + 0xc0));
      plVar5 = (long *)(ulong)(iVar3 == *(int *)(lVar4 + 0x20));
    }
    return plVar5;
  }
  plVar7 = *(long **)(lVar4 + 0x20);
  if (plVar7 == (long *)0x0) {
    auVar27 = func_0x00f78af4();
    plVar5 = *(long **)(auVar27._0_8_ + 0x28);
    if (plVar5 == (long *)0x0) {
      lVar4 = func_0x00f78af4();
      return *(long **)(lVar4 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(**(code **)(*plVar5 + 0x558))
                               (plVar5,auVar27._8_8_,*(undefined8 *)(*plVar5 + 0x560));
    return plVar5;
  }
  *(undefined1 *)(plVar7 + 0x12) = 1;
  *(undefined4 *)((long)plVar7 + 0x94) = uVar22;
  plVar7[0x13] = 0;
  if (*(char *)((long)plVar7 + 0x3c) == '\0') {
    return plVar7;
  }
  plVar7 = (long *)plVar7[0x17];
  if (plVar7 != (long *)0x0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,plVar7,0,0);
    return plVar7;
  }
  lVar4 = func_0x00f78af4(0,0,0);
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  plVar7 = *(long **)(lVar4 + 0xc0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(plVar7,uRam0000000003d3d9e0);
    *(long **)(lVar4 + 0xc0) = plVar7;
    if (plVar7 == (long *)0x0) {
      lVar4 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      plVar5 = *(long **)(lVar4 + 0xc0);
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
      plVar7 = plVar5;
      if (0 < (int)plVar5[3]) {
        plVar7 = (long *)/*System.Array$$Clear*/ func_0x02920164(plVar5[2],0,(int)plVar5[3],0);
        *(undefined4 *)(plVar5 + 3) = 0;
      }
      *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
      return plVar7;
    }
  }
  uVar6 = (ulong)extraout_s0;
  lVar4 = plVar7[2];
  puVar9 = extraout_x1;
  if (lVar4 == 0) {
code_r0x0259cf3c:
    uVar6 = param_2;
    plVar7 = plVar5;
    plVar8 = (long *)func_0x00f78af4();
    lVar4 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(plVar7 + 3) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(plVar7 + 3);
    plVar8 = plVar7;
    puVar14 = extraout_x1;
    if (uVar10 != *(uint *)(lVar4 + 0x18)) goto code_r0x0259cf40;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    plVar8 = (long *)(*(code *)*puVar9)(plVar7,uVar10 + 1);
    lVar4 = plVar7[2];
    uVar10 = *(uint *)(plVar7 + 3);
    *(uint *)(plVar7 + 3) = uVar10 + 1;
    plVar5 = plVar7;
    param_2 = uVar6;
    if (lVar4 == 0) goto code_r0x0259cf3c;
  }
  if (uVar10 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)uVar10 * 0x10;
    *(ulong *)(lVar4 + 0x20) = uVar6;
    *(undefined8 **)(lVar4 + 0x28) = puVar14;
    *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
    return plVar8;
  }
  uVar17 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar17,0);
  plVar5 = auVar27._8_8_;
  lVar4 = auVar27._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar5,0x14);
  if (lVar4 != 0) {
    pcVar19 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar14 = (undefined8 *)func_0x00f78ae4(plVar5);
        (*pcVar19)(lVar4,*puVar14,puVar14[1],*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar4);
        return (long *)(ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar5,lVar11);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar19)();
}



// ============================================================
// RVA: 0x159a3ac | Atlas.Contexts.GameContextBase.InitPickupLimitsDefinition
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Contexts_GameContextBase__InitPickupLimitsDefinition(long *param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *extraout_x1;
  undefined8 *puVar8;
  uint extraout_w8;
  uint uVar9;
  ulong *puVar10;
  long extraout_x9;
  undefined8 *puVar11;
  long lVar12;
  ulong unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined4 uVar17;
  uint extraout_s0;
  float fVar18;
  undefined1 auVar19 [16];
  
  puVar11 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb51a5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d71248);
    func_0x00f78a20(0x3d71240);
    bRam0000000003eb51a5 = 1;
  }
  if (param_1[0x38] != 0) {
    uVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1[0x38] + 0x60,0);
    if ((uVar3 & 1) == 0) {
      puVar11 = (undefined8 *)param_1[0x42];
    }
    else {
      if (((param_1[0x17] == 0) || (param_1[0x38] == 0)) ||
         (lVar4 = *(long *)(param_1[0x17] + 0x10), lVar4 == 0)) goto LAB_0159a554;
      puVar11 = (undefined8 *)
                /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(param_1[0x38] + 0x60),uRam0000000003d572e8);
      param_1[0x42] = (long)puVar11;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar11,0,0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    puVar10 = (ulong *)0x3d71240;
    if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*param_1 + 300)) &&
       (puVar10 = (ulong *)0x3d71248,
       *(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
       != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
      puVar10 = (ulong *)0x3d71240;
    }
    if (param_1[0x17] != 0) {
      unaff_x21 = *puVar10;
      lVar4 = *(long *)(param_1[0x17] + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x21,0);
      puVar11 = (undefined8 *)0x0;
      if (lVar4 != 0) {
        plVar5 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,uVar6,uRam0000000003d572e8);
        param_1[0x42] = (long)plVar5;
        return plVar5;
      }
    }
  }
LAB_0159a554:
  fVar18 = (float)func_0x00f78af4();
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  uVar17 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar18 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4,
                           0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar4 == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      return (long *)0x0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar15 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x58);
    lVar12 = *(long *)(lVar4 + 0x18);
    if (lVar12 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      lVar14 = *(long *)(lVar15 + 0x18);
      uVar1 = *(ushort *)(lVar14 + 0x132);
      lVar13 = lVar14;
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar14);
        lVar13 = *(long *)(lVar15 + 0x18);
        uVar1 = *(ushort *)(lVar13 + 0x132);
      }
      pcVar16 = *(code **)**(undefined8 **)(lVar14 + 0xc0);
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      iVar2 = (*pcVar16)(lVar12,**(undefined8 **)(lVar13 + 0xc0));
      plVar5 = (long *)(ulong)(iVar2 == *(int *)(lVar4 + 0x20));
    }
    return plVar5;
  }
  plVar5 = *(long **)(lVar4 + 0x20);
  if (plVar5 == (long *)0x0) {
    auVar19 = func_0x00f78af4();
    plVar5 = *(long **)(auVar19._0_8_ + 0x28);
    if (plVar5 == (long *)0x0) {
      lVar4 = func_0x00f78af4();
      return *(long **)(lVar4 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(**(code **)(*plVar5 + 0x558))
                               (plVar5,auVar19._8_8_,*(undefined8 *)(*plVar5 + 0x560));
    return plVar5;
  }
  *(undefined1 *)(plVar5 + 0x12) = 1;
  *(undefined4 *)((long)plVar5 + 0x94) = uVar17;
  plVar5[0x13] = 0;
  if (*(char *)((long)plVar5 + 0x3c) == '\0') {
    return plVar5;
  }
  plVar5 = (long *)plVar5[0x17];
  if (plVar5 != (long *)0x0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,plVar5,0,0);
    return plVar5;
  }
  lVar4 = func_0x00f78af4(0,0,0);
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  plVar5 = *(long **)(lVar4 + 0xc0);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(plVar5,uRam0000000003d3d9e0);
    *(long **)(lVar4 + 0xc0) = plVar5;
    if (plVar5 == (long *)0x0) {
      lVar4 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      plVar5 = *(long **)(lVar4 + 0xc0);
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
      plVar7 = plVar5;
      if (0 < (int)plVar5[3]) {
        plVar7 = (long *)/*System.Array$$Clear*/ func_0x02920164(plVar5[2],0,(int)plVar5[3],0);
        *(undefined4 *)(plVar5 + 3) = 0;
      }
      *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
      return plVar7;
    }
  }
  uVar3 = (ulong)extraout_s0;
  lVar4 = plVar5[2];
  puVar8 = extraout_x1;
  if (lVar4 == 0) {
code_r0x0259cf3c:
    uVar3 = unaff_x21;
    plVar5 = param_1;
    plVar7 = (long *)func_0x00f78af4();
    lVar4 = extraout_x9;
    uVar9 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(plVar5 + 3) = uVar9 + 1;
  }
  else {
    uVar9 = *(uint *)(plVar5 + 3);
    plVar7 = plVar5;
    puVar11 = extraout_x1;
    if (uVar9 != *(uint *)(lVar4 + 0x18)) goto code_r0x0259cf40;
    puVar8 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    plVar7 = (long *)(*(code *)*puVar8)(plVar5,uVar9 + 1);
    lVar4 = plVar5[2];
    uVar9 = *(uint *)(plVar5 + 3);
    *(uint *)(plVar5 + 3) = uVar9 + 1;
    param_1 = plVar5;
    unaff_x21 = uVar3;
    if (lVar4 == 0) goto code_r0x0259cf3c;
  }
  if (uVar9 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)uVar9 * 0x10;
    *(ulong *)(lVar4 + 0x20) = uVar3;
    *(undefined8 **)(lVar4 + 0x28) = puVar11;
    *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
    return plVar7;
  }
  uVar6 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar6,0);
  plVar5 = auVar19._8_8_;
  lVar4 = auVar19._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))(plVar5,0x14);
  if (lVar4 != 0) {
    pcVar16 = (code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x28);
    lVar15 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar15 + 0x40)) {
        puVar11 = (undefined8 *)func_0x00f78ae4(plVar5);
        (*pcVar16)(lVar4,*puVar11,puVar11[1],*(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x68))(lVar4);
        return (long *)(ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar5,lVar15);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar16)();
}



// ============================================================
// RVA: 0x159a558 | Atlas.Contexts.GameContextBase.UpdateLoadingProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_GameContextBase__UpdateLoadingProgress(float param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *extraout_x1;
  undefined8 *puVar9;
  uint extraout_w8;
  uint uVar10;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 uVar11;
  undefined8 *unaff_x20;
  long lVar12;
  ulong unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined4 uVar17;
  uint extraout_s0;
  undefined1 auVar18 [16];
  
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  uVar17 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((param_1 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4
                           ,0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar5 == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      return 0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar5 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar15 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x58);
    lVar12 = *(long *)(lVar5 + 0x18);
    if (lVar12 == 0) {
      uVar4 = 0;
    }
    else {
      lVar14 = *(long *)(lVar15 + 0x18);
      uVar1 = *(ushort *)(lVar14 + 0x132);
      lVar13 = lVar14;
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar14);
        lVar13 = *(long *)(lVar15 + 0x18);
        uVar1 = *(ushort *)(lVar13 + 0x132);
      }
      pcVar16 = *(code **)**(undefined8 **)(lVar14 + 0xc0);
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      iVar2 = (*pcVar16)(lVar12,**(undefined8 **)(lVar13 + 0xc0));
      uVar4 = (ulong)(iVar2 == *(int *)(lVar5 + 0x20));
    }
    return uVar4;
  }
  uVar4 = *(ulong *)(lVar5 + 0x20);
  if (uVar4 == 0) {
    auVar18 = func_0x00f78af4();
    plVar3 = *(long **)(auVar18._0_8_ + 0x28);
    if (plVar3 == (long *)0x0) {
      lVar5 = func_0x00f78af4();
      return *(ulong *)(lVar5 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0x558))(plVar3,auVar18._8_8_,*(undefined8 *)(*plVar3 + 0x560));
    return uVar4;
  }
  *(undefined1 *)(uVar4 + 0x90) = 1;
  *(undefined4 *)(uVar4 + 0x94) = uVar17;
  *(undefined8 *)(uVar4 + 0x98) = 0;
  if (*(char *)(uVar4 + 0x3c) == '\0') {
    return uVar4;
  }
  uVar4 = *(ulong *)(uVar4 + 0xb8);
  if (uVar4 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar4,0,0);
    return uVar4;
  }
  lVar5 = func_0x00f78af4(0,0,0);
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar4 = *(ulong *)(lVar5 + 0xc0);
  if (uVar4 == 0) {
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar4,uRam0000000003d3d9e0);
    *(ulong *)(lVar5 + 0xc0) = uVar4;
    if (uVar4 == 0) {
      lVar5 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar4 = *(ulong *)(lVar5 + 0xc0);
      if (uVar4 == 0) {
        return 0;
      }
      uVar8 = uVar4;
      if (0 < *(int *)(uVar4 + 0x18)) {
        uVar8 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar4 + 0x10),0,*(int *)(uVar4 + 0x18),0);
        *(undefined4 *)(uVar4 + 0x18) = 0;
      }
      *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
      return uVar8;
    }
  }
  uVar8 = (ulong)extraout_s0;
  lVar5 = *(long *)(uVar4 + 0x10);
  puVar9 = extraout_x1;
  if (lVar5 == 0) {
code_r0x0259cf3c:
    uVar8 = unaff_x21;
    uVar4 = unaff_x19;
    uVar6 = func_0x00f78af4();
    lVar5 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar4 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar4 + 0x18);
    uVar6 = uVar4;
    unaff_x20 = extraout_x1;
    if (uVar10 != *(uint *)(lVar5 + 0x18)) goto code_r0x0259cf40;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar6 = (*(code *)*puVar9)(uVar4,uVar10 + 1);
    lVar5 = *(long *)(uVar4 + 0x10);
    uVar10 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar10 + 1;
    unaff_x19 = uVar4;
    unaff_x21 = uVar8;
    if (lVar5 == 0) goto code_r0x0259cf3c;
  }
  if (uVar10 < *(uint *)(lVar5 + 0x18)) {
    lVar5 = lVar5 + (long)(int)uVar10 * 0x10;
    *(ulong *)(lVar5 + 0x20) = uVar8;
    *(undefined8 **)(lVar5 + 0x28) = unaff_x20;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar6;
  }
  uVar11 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar11,0);
  plVar3 = auVar18._8_8_;
  lVar5 = auVar18._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar3,0x14);
  if (lVar5 != 0) {
    pcVar16 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar15 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    if (plVar3 != (long *)0x0) {
      if (*(long *)(*plVar3 + 0x40) == *(long *)(lVar15 + 0x40)) {
        puVar7 = (undefined8 *)func_0x00f78ae4(plVar3);
        (*pcVar16)(lVar5,*puVar7,puVar7[1],*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar5);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar3,lVar15);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar16)();
}



// ============================================================
// RVA: 0x159a5c8 | Atlas.Contexts.GameContextBase.IsUsingPoints
// ============================================================

/* WARNING: Possible PIC construction at 0x0159a84c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159a850) */
/* WARNING: Removing unreachable block (ram,0x0159a854) */
/* WARNING: Removing unreachable block (ram,0x0159a85c) */
/* WARNING: Removing unreachable block (ram,0x0159a864) */
/* WARNING: Removing unreachable block (ram,0x0159a89c) */
/* WARNING: Removing unreachable block (ram,0x0159a86c) */
/* WARNING: Removing unreachable block (ram,0x0159a884) */
/* WARNING: Removing unreachable block (ram,0x0159a878) */
/* WARNING: Removing unreachable block (ram,0x0159a888) */

ulong Atlas_Contexts_GameContextBase__IsUsingPoints
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  int *piVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  long lStack_28;
  
  if ((bRam0000000003eb51aa & 1) == 0) {
    func_0x00f78a20(0x3d5d980);
    bRam0000000003eb51aa = 1;
  }
  lStack_28 = 0;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (param_6 = uRam0000000003d5d980, /*Core.StateManagement.StateMachine$$TryGetState<object>*/ func_0x018e1570(*(long *)(param_4 + 0x20),&lStack_28),
     lStack_28 != 0)) {
    return (ulong)*(byte *)(lStack_28 + 0x80);
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51ab & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5b950);
    func_0x00f78a20(0x3d5ba90);
    bRam0000000003eb51ab = 1;
  }
  if ((*(long *)(lVar2 + 0xa8) != 0) &&
     (lVar3 = /*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(lVar2 + 0xa8),uRam0000000003d5ba90), lVar3 != 0)) {
    /*Atlas.Gameplay.AoEHit$$Spawn*/ func_0x01449404(extraout_s0,param_2,param_3,lVar3,param_6,param_7,param_8,
                    *(undefined8 *)(lVar2 + 0xa8),*(undefined8 *)(lVar2 + 0xa0),
                    *(undefined8 *)(lVar2 + 0xc0),param_9);
    if (*(long *)(lVar2 + 0x98) != 0) {
      uVar4 = /*Core.Containers.PoolManager$$AcquireTimedObject<VFXBehaviour>*/ func_0x018bc498((int)((ulong)param_6 >> 0x20),*(long *)(lVar2 + 0x98),extraout_x1,
                              uRam0000000003d5b950);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
      if (iVar1 == 0) {
        return uVar4;
      }
      if ((uVar4 != 0) && (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar4,0), lVar2 != 0)) {
        /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(extraout_s0,param_2,param_3,lVar2,0);
        lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar4,0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        if (lVar2 != 0) {
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar2,0);
          return uVar4;
        }
      }
    }
  }
  auVar9 = func_0x00f78af4();
  lVar2 = auVar9._0_8_;
  if ((bRam0000000003eb51ac & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb51ac = 1;
  }
  *auVar9._8_8_ = 0;
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb51ad & 1) == 0) {
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51ad = 1;
  }
  if (lVar2 == 0) {
code_r0x0159aa28:
    lVar2 = func_0x00f78af4();
    if (*(long *)(lVar2 + 0x10) == 0) {
      uVar4 = func_0x00f78af4();
      *(undefined1 *)(uVar4 + 0x248) = 1;
      return uVar4;
    }
    return (ulong)(*(uint *)(*(long *)(lVar2 + 0x10) + 0x50) < 2);
  }
  uVar5 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar2,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if ((int)uVar4 != 0) {
    lVar2 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar2,0);
    if (lVar2 == 0) goto code_r0x0159aa28;
    plVar6 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar2,uRam0000000003d534a0);
    uVar4 = 0;
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x0159a9c4;
          }
          piVar8 = piVar8 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8,0);
code_r0x0159a9c4:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      uVar4 = 0;
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x159a63c | Atlas.Contexts.GameContextBase.SpawnAoE
// ============================================================

/* WARNING: Possible PIC construction at 0x0159a84c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159a850) */
/* WARNING: Removing unreachable block (ram,0x0159a854) */
/* WARNING: Removing unreachable block (ram,0x0159a85c) */
/* WARNING: Removing unreachable block (ram,0x0159a864) */
/* WARNING: Removing unreachable block (ram,0x0159a89c) */
/* WARNING: Removing unreachable block (ram,0x0159a86c) */
/* WARNING: Removing unreachable block (ram,0x0159a884) */
/* WARNING: Removing unreachable block (ram,0x0159a878) */
/* WARNING: Removing unreachable block (ram,0x0159a888) */

ulong Atlas_Contexts_GameContextBase__SpawnAoE
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb51ab & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5b950);
    func_0x00f78a20(0x3d5ba90);
    bRam0000000003eb51ab = 1;
  }
  if ((*(long *)(param_4 + 0xa8) != 0) &&
     (lVar2 = /*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_4 + 0xa8),uRam0000000003d5ba90), lVar2 != 0)) {
    /*Atlas.Gameplay.AoEHit$$Spawn*/ func_0x01449404(param_1,param_2,param_3,lVar2,param_6,param_7,param_8,
                    *(undefined8 *)(param_4 + 0xa8),*(undefined8 *)(param_4 + 0xa0),
                    *(undefined8 *)(param_4 + 0xc0),param_9);
    if (*(long *)(param_4 + 0x98) != 0) {
      uVar3 = /*Core.Containers.PoolManager$$AcquireTimedObject<VFXBehaviour>*/ func_0x018bc498((int)((ulong)param_6 >> 0x20),*(long *)(param_4 + 0x98),param_5,
                              uRam0000000003d5b950);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
      if (iVar1 == 0) {
        return uVar3;
      }
      if ((uVar3 != 0) && (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar3,0), lVar2 != 0)) {
        /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(param_1,param_2,param_3,lVar2,0);
        lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar3,0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        if (lVar2 != 0) {
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar2,0);
          return uVar3;
        }
      }
    }
  }
  auVar8 = func_0x00f78af4();
  lVar2 = auVar8._0_8_;
  if ((bRam0000000003eb51ac & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb51ac = 1;
  }
  *auVar8._8_8_ = 0;
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb51ad & 1) == 0) {
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51ad = 1;
  }
  if (lVar2 == 0) {
code_r0x0159aa28:
    lVar2 = func_0x00f78af4();
    if (*(long *)(lVar2 + 0x10) == 0) {
      uVar3 = func_0x00f78af4();
      *(undefined1 *)(uVar3 + 0x248) = 1;
      return uVar3;
    }
    return (ulong)(*(uint *)(*(long *)(lVar2 + 0x10) + 0x50) < 2);
  }
  uVar4 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar2,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if ((int)uVar3 != 0) {
    lVar2 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar2,0);
    if (lVar2 == 0) goto code_r0x0159aa28;
    plVar5 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar2,uRam0000000003d534a0);
    uVar3 = 0;
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
            puVar6 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x0159a9c4;
          }
          piVar7 = piVar7 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8,0);
code_r0x0159a9c4:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar3 = 0;
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x159a7e0 | Atlas.Contexts.GameContextBase.TryGetLocalHumanPlayerFromCollider
// ============================================================

/* WARNING: Possible PIC construction at 0x0159a84c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159a850) */
/* WARNING: Removing unreachable block (ram,0x0159a854) */
/* WARNING: Removing unreachable block (ram,0x0159a85c) */
/* WARNING: Removing unreachable block (ram,0x0159a864) */
/* WARNING: Removing unreachable block (ram,0x0159a89c) */
/* WARNING: Removing unreachable block (ram,0x0159a86c) */
/* WARNING: Removing unreachable block (ram,0x0159a884) */
/* WARNING: Removing unreachable block (ram,0x0159a878) */
/* WARNING: Removing unreachable block (ram,0x0159a888) */

ulong Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider
                (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if ((bRam0000000003eb51ac & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb51ac = 1;
  }
  *param_2 = 0;
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb51ad & 1) == 0) {
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51ad = 1;
  }
  if (param_1 != 0) {
    uVar1 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_1,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar1,0,0);
    if ((int)uVar2 != 0) {
      lVar3 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_1,0);
      if (lVar3 == 0) goto code_r0x0159aa28;
      plVar4 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d534a0);
      uVar2 = 0;
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto code_r0x0159a9c4;
            }
            piVar6 = piVar6 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8,0);
code_r0x0159a9c4:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar2 = 0;
        if (plVar4 != (long *)0x0) {
          if ((*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8
                       + -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
      }
    }
    return uVar2;
  }
code_r0x0159aa28:
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
    return (ulong)(*(uint *)(*(long *)(lVar3 + 0x10) + 0x50) < 2);
  }
  uVar2 = func_0x00f78af4();
  *(undefined1 *)(uVar2 + 0x248) = 1;
  return uVar2;
}



// ============================================================
// RVA: 0x159a8a0 | Atlas.Contexts.GameContextBase.TryGetKartCompositeFromCollider
// ============================================================

ulong Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider(long param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if ((bRam0000000003eb51ad & 1) == 0) {
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51ad = 1;
  }
  *param_2 = 0;
  if (param_1 != 0) {
    uVar1 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_1,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar1,0,0);
    if ((int)uVar2 != 0) {
      lVar3 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_1,0);
      if (lVar3 == 0) goto LAB_0159aa28;
      plVar4 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d534a0);
      uVar2 = 0;
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0159a9c4;
            }
            piVar6 = piVar6 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8,0);
LAB_0159a9c4:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar2 = 0;
        if (plVar4 != (long *)0x0) {
          if ((*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8
                       + -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
            uVar2 = 0;
          }
          else {
            *param_2 = (long)plVar4;
            uVar2 = 1;
          }
        }
      }
    }
    return uVar2;
  }
LAB_0159aa28:
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
    return (ulong)(*(uint *)(*(long *)(lVar3 + 0x10) + 0x50) < 2);
  }
  uVar2 = func_0x00f78af4();
  *(undefined1 *)(uVar2 + 0x248) = 1;
  return uVar2;
}



// ============================================================
// RVA: 0x159aa54 | Atlas.Contexts.GameContextBase.StartTrackingChallenges
// ============================================================

void Atlas_Contexts_GameContextBase__StartTrackingChallenges(long param_1)

{
  *(undefined1 *)(param_1 + 0x248) = 1;
  return;
}



// ============================================================
// RVA: 0x159aa60 | Atlas.Contexts.GameContextBase.ResetChallenges
// ============================================================

/* WARNING: Possible PIC construction at 0x0159aa9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015191a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151923c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151925c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151927c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01519280) */
/* WARNING: Removing unreachable block (ram,0x01519288) */
/* WARNING: Removing unreachable block (ram,0x015192a4) */
/* WARNING: Removing unreachable block (ram,0x015192b4) */
/* WARNING: Removing unreachable block (ram,0x01519260) */
/* WARNING: Removing unreachable block (ram,0x01519268) */
/* WARNING: Removing unreachable block (ram,0x01519274) */
/* WARNING: Removing unreachable block (ram,0x01519240) */
/* WARNING: Removing unreachable block (ram,0x01519248) */
/* WARNING: Removing unreachable block (ram,0x01519254) */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */
/* WARNING: Removing unreachable block (ram,0x015191ac) */
/* WARNING: Removing unreachable block (ram,0x015191b4) */
/* WARNING: Removing unreachable block (ram,0x015191cc) */
/* WARNING: Removing unreachable block (ram,0x0164ff98) */
/* WARNING: Removing unreachable block (ram,0x0164ffc4) */
/* WARNING: Removing unreachable block (ram,0x0164ffd8) */
/* WARNING: Removing unreachable block (ram,0x0164ffe0) */
/* WARNING: Removing unreachable block (ram,0x0164ffe4) */
/* WARNING: Removing unreachable block (ram,0x01650008) */
/* WARNING: Removing unreachable block (ram,0x01650014) */
/* WARNING: Removing unreachable block (ram,0x01650030) */
/* WARNING: Removing unreachable block (ram,0x0165003c) */
/* WARNING: Removing unreachable block (ram,0x01650050) */
/* WARNING: Removing unreachable block (ram,0x01650058) */
/* WARNING: Removing unreachable block (ram,0x01650194) */
/* WARNING: Removing unreachable block (ram,0x016501c8) */
/* WARNING: Removing unreachable block (ram,0x016501e8) */
/* WARNING: Removing unreachable block (ram,0x016501f4) */
/* WARNING: Removing unreachable block (ram,0x016501fc) */
/* WARNING: Removing unreachable block (ram,0x01650200) */
/* WARNING: Removing unreachable block (ram,0x01650298) */
/* WARNING: Removing unreachable block (ram,0x0165020c) */
/* WARNING: Removing unreachable block (ram,0x01650218) */
/* WARNING: Removing unreachable block (ram,0x01650220) */
/* WARNING: Removing unreachable block (ram,0x01650228) */
/* WARNING: Removing unreachable block (ram,0x016502ac) */
/* WARNING: Removing unreachable block (ram,0x01650234) */
/* WARNING: Removing unreachable block (ram,0x0165024c) */
/* WARNING: Removing unreachable block (ram,0x01650254) */
/* WARNING: Removing unreachable block (ram,0x01650258) */
/* WARNING: Removing unreachable block (ram,0x016502b0) */
/* WARNING: Removing unreachable block (ram,0x016502f4) */
/* WARNING: Removing unreachable block (ram,0x0165032c) */
/* WARNING: Removing unreachable block (ram,0x01650338) */
/* WARNING: Removing unreachable block (ram,0x01650340) */
/* WARNING: Removing unreachable block (ram,0x01650348) */
/* WARNING: Removing unreachable block (ram,0x01650354) */
/* WARNING: Removing unreachable block (ram,0x01650384) */
/* WARNING: Removing unreachable block (ram,0x0165038c) */
/* WARNING: Removing unreachable block (ram,0x01650390) */
/* WARNING: Removing unreachable block (ram,0x016503b8) */
/* WARNING: Removing unreachable block (ram,0x016503c0) */
/* WARNING: Removing unreachable block (ram,0x016503c4) */
/* WARNING: Removing unreachable block (ram,0x01650414) */
/* WARNING: Removing unreachable block (ram,0x0165041c) */
/* WARNING: Removing unreachable block (ram,0x01650420) */
/* WARNING: Removing unreachable block (ram,0x0165043c) */
/* WARNING: Removing unreachable block (ram,0x01650444) */
/* WARNING: Removing unreachable block (ram,0x01650450) */
/* WARNING: Removing unreachable block (ram,0x01650458) */
/* WARNING: Removing unreachable block (ram,0x01650460) */
/* WARNING: Removing unreachable block (ram,0x0165048c) */
/* WARNING: Removing unreachable block (ram,0x016504e4) */
/* WARNING: Removing unreachable block (ram,0x01650514) */
/* WARNING: Removing unreachable block (ram,0x01650540) */
/* WARNING: Removing unreachable block (ram,0x01650548) */
/* WARNING: Removing unreachable block (ram,0x0165055c) */
/* WARNING: Removing unreachable block (ram,0x01650570) */
/* WARNING: Removing unreachable block (ram,0x01650584) */
/* WARNING: Removing unreachable block (ram,0x01650598) */
/* WARNING: Removing unreachable block (ram,0x016505c4) */
/* WARNING: Removing unreachable block (ram,0x01650614) */
/* WARNING: Removing unreachable block (ram,0x0165064c) */
/* WARNING: Removing unreachable block (ram,0x01650678) */
/* WARNING: Removing unreachable block (ram,0x01650694) */
/* WARNING: Removing unreachable block (ram,0x016506a0) */
/* WARNING: Removing unreachable block (ram,0x016506b4) */
/* WARNING: Removing unreachable block (ram,0x016506f8) */
/* WARNING: Removing unreachable block (ram,0x016506bc) */
/* WARNING: Removing unreachable block (ram,0x01650704) */
/* WARNING: Removing unreachable block (ram,0x01650738) */
/* WARNING: Removing unreachable block (ram,0x01650794) */
/* WARNING: Removing unreachable block (ram,0x0165079c) */
/* WARNING: Removing unreachable block (ram,0x016507b0) */
/* WARNING: Removing unreachable block (ram,0x016507bc) */
/* WARNING: Removing unreachable block (ram,0x016507cc) */
/* WARNING: Removing unreachable block (ram,0x016507d4) */
/* WARNING: Removing unreachable block (ram,0x016507dc) */
/* WARNING: Removing unreachable block (ram,0x016507e4) */
/* WARNING: Removing unreachable block (ram,0x016507fc) */
/* WARNING: Removing unreachable block (ram,0x01650804) */
/* WARNING: Removing unreachable block (ram,0x0165080c) */
/* WARNING: Removing unreachable block (ram,0x01650838) */
/* WARNING: Removing unreachable block (ram,0x016508d8) */
/* WARNING: Removing unreachable block (ram,0x0165090c) */
/* WARNING: Removing unreachable block (ram,0x0165092c) */
/* WARNING: Removing unreachable block (ram,0x01650934) */
/* WARNING: Removing unreachable block (ram,0x0165093c) */
/* WARNING: Removing unreachable block (ram,0x01650948) */
/* WARNING: Removing unreachable block (ram,0x0165094c) */
/* WARNING: Removing unreachable block (ram,0x01650954) */
/* WARNING: Removing unreachable block (ram,0x0165095c) */
/* WARNING: Removing unreachable block (ram,0x01650968) */
/* WARNING: Removing unreachable block (ram,0x0165097c) */
/* WARNING: Removing unreachable block (ram,0x01650988) */
/* WARNING: Removing unreachable block (ram,0x01650998) */
/* WARNING: Removing unreachable block (ram,0x016509a4) */
/* WARNING: Removing unreachable block (ram,0x016509a8) */
/* WARNING: Removing unreachable block (ram,0x016509b0) */
/* WARNING: Removing unreachable block (ram,0x016509bc) */
/* WARNING: Removing unreachable block (ram,0x016509d4) */
/* WARNING: Removing unreachable block (ram,0x016509d8) */
/* WARNING: Removing unreachable block (ram,0x016509e0) */
/* WARNING: Removing unreachable block (ram,0x016509f8) */
/* WARNING: Removing unreachable block (ram,0x01650a14) */
/* WARNING: Removing unreachable block (ram,0x01650a28) */
/* WARNING: Removing unreachable block (ram,0x01650a34) */
/* WARNING: Removing unreachable block (ram,0x01650a3c) */
/* WARNING: Removing unreachable block (ram,0x01650a4c) */
/* WARNING: Removing unreachable block (ram,0x01650a5c) */
/* WARNING: Removing unreachable block (ram,0x01650a64) */
/* WARNING: Removing unreachable block (ram,0x01650a6c) */
/* WARNING: Removing unreachable block (ram,0x01650a78) */
/* WARNING: Removing unreachable block (ram,0x01650a7c) */
/* WARNING: Removing unreachable block (ram,0x01650a84) */
/* WARNING: Removing unreachable block (ram,0x01650a8c) */
/* WARNING: Removing unreachable block (ram,0x01650a98) */
/* WARNING: Removing unreachable block (ram,0x01650aac) */
/* WARNING: Removing unreachable block (ram,0x01650ab8) */
/* WARNING: Removing unreachable block (ram,0x01650ac8) */
/* WARNING: Removing unreachable block (ram,0x01650ad4) */
/* WARNING: Removing unreachable block (ram,0x01650ad8) */
/* WARNING: Removing unreachable block (ram,0x01650ae0) */
/* WARNING: Removing unreachable block (ram,0x01650aec) */
/* WARNING: Removing unreachable block (ram,0x01650b04) */
/* WARNING: Removing unreachable block (ram,0x01650b74) */
/* WARNING: Removing unreachable block (ram,0x01650b0c) */
/* WARNING: Removing unreachable block (ram,0x01650b10) */
/* WARNING: Removing unreachable block (ram,0x01650b80) */
/* WARNING: Removing unreachable block (ram,0x01650b24) */
/* WARNING: Removing unreachable block (ram,0x01650b78) */
/* WARNING: Removing unreachable block (ram,0x01650b84) */
/* WARNING: Removing unreachable block (ram,0x01650b30) */
/* WARNING: Removing unreachable block (ram,0x01650b38) */
/* WARNING: Removing unreachable block (ram,0x01650b48) */
/* WARNING: Removing unreachable block (ram,0x01650b58) */
/* WARNING: Removing unreachable block (ram,0x01650848) */
/* WARNING: Removing unreachable block (ram,0x016508c0) */
/* WARNING: Removing unreachable block (ram,0x01650898) */
/* WARNING: Removing unreachable block (ram,0x01e47f3c) */
/* WARNING: Removing unreachable block (ram,0x01e47f7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f6c) */
/* WARNING: Removing unreachable block (ram,0x01e47f74) */
/* WARNING: Removing unreachable block (ram,0x01e47f84) */
/* WARNING: Removing unreachable block (ram,0x01e47f88) */
/* WARNING: Removing unreachable block (ram,0x01e47fa0) */
/* WARNING: Removing unreachable block (ram,0x01e47fa8) */
/* WARNING: Removing unreachable block (ram,0x01e47fd4) */
/* WARNING: Removing unreachable block (ram,0x01e48058) */
/* WARNING: Removing unreachable block (ram,0x01e48064) */
/* WARNING: Removing unreachable block (ram,0x01e4806c) */
/* WARNING: Removing unreachable block (ram,0x01e480e4) */
/* WARNING: Removing unreachable block (ram,0x01e48148) */
/* WARNING: Removing unreachable block (ram,0x01e480ec) */
/* WARNING: Removing unreachable block (ram,0x01e48104) */
/* WARNING: Removing unreachable block (ram,0x01e4810c) */
/* WARNING: Removing unreachable block (ram,0x01e481ec) */
/* WARNING: Removing unreachable block (ram,0x01e48118) */
/* WARNING: Removing unreachable block (ram,0x01e48124) */
/* WARNING: Removing unreachable block (ram,0x01e481fc) */
/* WARNING: Removing unreachable block (ram,0x01e48084) */
/* WARNING: Removing unreachable block (ram,0x01e48134) */
/* WARNING: Removing unreachable block (ram,0x01e48088) */
/* WARNING: Removing unreachable block (ram,0x01e4809c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Removing unreachable block (ram,0x01e481c4) */
/* WARNING: Removing unreachable block (ram,0x01e480b0) */
/* WARNING: Removing unreachable block (ram,0x01e480bc) */
/* WARNING: Removing unreachable block (ram,0x01e481d4) */
/* WARNING: Removing unreachable block (ram,0x01e481d8) */
/* WARNING: Removing unreachable block (ram,0x01e48200) */
/* WARNING: Removing unreachable block (ram,0x01e47fd8) */
/* WARNING: Removing unreachable block (ram,0x01e47fdc) */
/* WARNING: Removing unreachable block (ram,0x01e47fe8) */
/* WARNING: Removing unreachable block (ram,0x01e47ff4) */
/* WARNING: Removing unreachable block (ram,0x01e47ffc) */
/* WARNING: Removing unreachable block (ram,0x01e48160) */
/* WARNING: Removing unreachable block (ram,0x01e4820c) */
/* WARNING: Removing unreachable block (ram,0x01e48168) */
/* WARNING: Removing unreachable block (ram,0x01e48180) */
/* WARNING: Removing unreachable block (ram,0x01e48188) */
/* WARNING: Removing unreachable block (ram,0x01e48250) */
/* WARNING: Removing unreachable block (ram,0x01e48194) */
/* WARNING: Removing unreachable block (ram,0x01e481a0) */
/* WARNING: Removing unreachable block (ram,0x01e48260) */
/* WARNING: Removing unreachable block (ram,0x01e48014) */
/* WARNING: Removing unreachable block (ram,0x01e481b0) */
/* WARNING: Removing unreachable block (ram,0x01e48018) */
/* WARNING: Removing unreachable block (ram,0x01e4802c) */
/* WARNING: Removing unreachable block (ram,0x01e48034) */
/* WARNING: Removing unreachable block (ram,0x01e48228) */
/* WARNING: Removing unreachable block (ram,0x01e48040) */
/* WARNING: Removing unreachable block (ram,0x01e4804c) */
/* WARNING: Removing unreachable block (ram,0x01e48238) */
/* WARNING: Removing unreachable block (ram,0x01e4823c) */
/* WARNING: Removing unreachable block (ram,0x01e48264) */
/* WARNING: Removing unreachable block (ram,0x01e47fbc) */
/* WARNING: Removing unreachable block (ram,0x01e480c8) */
/* WARNING: Removing unreachable block (ram,0x01e47fc0) */
/* WARNING: Removing unreachable block (ram,0x01e480d4) */
/* WARNING: Removing unreachable block (ram,0x01e480e0) */
/* WARNING: Removing unreachable block (ram,0x01e48274) */
/* WARNING: Removing unreachable block (ram,0x0165082c) */
/* WARNING: Removing unreachable block (ram,0x016506c0) */
/* WARNING: Removing unreachable block (ram,0x016506e0) */
/* WARNING: Removing unreachable block (ram,0x016505cc) */
/* WARNING: Removing unreachable block (ram,0x016505f4) */
/* WARNING: Removing unreachable block (ram,0x016505b4) */
/* WARNING: Removing unreachable block (ram,0x016505f8) */
/* WARNING: Removing unreachable block (ram,0x016504a0) */
/* WARNING: Removing unreachable block (ram,0x016504d4) */
/* WARNING: Removing unreachable block (ram,0x016504b8) */
/* WARNING: Removing unreachable block (ram,0x029cbbf0) */
/* WARNING: Removing unreachable block (ram,0x029cbc18) */
/* WARNING: Removing unreachable block (ram,0x029cbc2c) */
/* WARNING: Removing unreachable block (ram,0x029cbca0) */
/* WARNING: Removing unreachable block (ram,0x029cbc30) */
/* WARNING: Removing unreachable block (ram,0x029cbcac) */
/* WARNING: Removing unreachable block (ram,0x029cbcb4) */
/* WARNING: Removing unreachable block (ram,0x029cbc3c) */
/* WARNING: Removing unreachable block (ram,0x029cbce4) */
/* WARNING: Removing unreachable block (ram,0x029cbc40) */
/* WARNING: Removing unreachable block (ram,0x029cbcf0) */
/* WARNING: Removing unreachable block (ram,0x029cbcf8) */
/* WARNING: Removing unreachable block (ram,0x029cbd24) */
/* WARNING: Removing unreachable block (ram,0x029cbc4c) */
/* WARNING: Removing unreachable block (ram,0x029cbc78) */
/* WARNING: Removing unreachable block (ram,0x029cbc50) */
/* WARNING: Removing unreachable block (ram,0x029cbc54) */
/* WARNING: Removing unreachable block (ram,0x029cbc8c) */
/* WARNING: Removing unreachable block (ram,0x029cbc5c) */
/* WARNING: Removing unreachable block (ram,0x029cbd60) */
/* WARNING: Removing unreachable block (ram,0x029cbdb8) */
/* WARNING: Removing unreachable block (ram,0x029cbdc0) */
/* WARNING: Removing unreachable block (ram,0x029cbdd0) */
/* WARNING: Removing unreachable block (ram,0x029cbdc8) */
/* WARNING: Removing unreachable block (ram,0x029cbf24) */
/* WARNING: Removing unreachable block (ram,0x029cbf54) */
/* WARNING: Removing unreachable block (ram,0x029cc044) */
/* WARNING: Removing unreachable block (ram,0x029cbf60) */
/* WARNING: Removing unreachable block (ram,0x029cbf64) */
/* WARNING: Removing unreachable block (ram,0x029cbf74) */
/* WARNING: Removing unreachable block (ram,0x029cbf7c) */
/* WARNING: Removing unreachable block (ram,0x029cbf88) */
/* WARNING: Removing unreachable block (ram,0x029cbf8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf94) */
/* WARNING: Removing unreachable block (ram,0x029cbfb4) */
/* WARNING: Removing unreachable block (ram,0x029cbfa4) */
/* WARNING: Removing unreachable block (ram,0x029cbfb0) */
/* WARNING: Removing unreachable block (ram,0x029cbfb8) */
/* WARNING: Removing unreachable block (ram,0x029cbfc0) */
/* WARNING: Removing unreachable block (ram,0x029cbfd0) */
/* WARNING: Removing unreachable block (ram,0x029cc04c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd4) */
/* WARNING: Removing unreachable block (ram,0x029cbf4c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd8) */
/* WARNING: Removing unreachable block (ram,0x029cbfe4) */
/* WARNING: Removing unreachable block (ram,0x029cbff4) */
/* WARNING: Removing unreachable block (ram,0x029cbffc) */
/* WARNING: Removing unreachable block (ram,0x029cc008) */
/* WARNING: Removing unreachable block (ram,0x029cc00c) */
/* WARNING: Removing unreachable block (ram,0x029cc070) */
/* WARNING: Removing unreachable block (ram,0x029cc07c) */
/* WARNING: Removing unreachable block (ram,0x029cc084) */
/* WARNING: Removing unreachable block (ram,0x029cc094) */
/* WARNING: Removing unreachable block (ram,0x029cbdd8) */
/* WARNING: Removing unreachable block (ram,0x029cbe00) */
/* WARNING: Removing unreachable block (ram,0x029cbe14) */
/* WARNING: Removing unreachable block (ram,0x029cbe30) */
/* WARNING: Removing unreachable block (ram,0x029cbe88) */
/* WARNING: Removing unreachable block (ram,0x029cbe38) */
/* WARNING: Removing unreachable block (ram,0x029cbe3c) */
/* WARNING: Removing unreachable block (ram,0x029cbe58) */
/* WARNING: Removing unreachable block (ram,0x029cbe60) */
/* WARNING: Removing unreachable block (ram,0x029cbe64) */
/* WARNING: Removing unreachable block (ram,0x029cbef0) */
/* WARNING: Removing unreachable block (ram,0x029cbe74) */
/* WARNING: Removing unreachable block (ram,0x029cbe84) */
/* WARNING: Removing unreachable block (ram,0x029cbe8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf00) */
/* WARNING: Removing unreachable block (ram,0x029cbe90) */
/* WARNING: Removing unreachable block (ram,0x029cbe28) */
/* WARNING: Removing unreachable block (ram,0x029cbe94) */
/* WARNING: Removing unreachable block (ram,0x029cbe98) */
/* WARNING: Removing unreachable block (ram,0x029cbea4) */
/* WARNING: Removing unreachable block (ram,0x029cbec0) */
/* WARNING: Removing unreachable block (ram,0x029cbec8) */
/* WARNING: Removing unreachable block (ram,0x029cbecc) */
/* WARNING: Removing unreachable block (ram,0x029cbee0) */
/* WARNING: Removing unreachable block (ram,0x029cbf04) */
/* WARNING: Removing unreachable block (ram,0x029cc08c) */
/* WARNING: Removing unreachable block (ram,0x029cc014) */
/* WARNING: Removing unreachable block (ram,0x029cc034) */
/* WARNING: Removing unreachable block (ram,0x029cc024) */
/* WARNING: Removing unreachable block (ram,0x029cc030) */
/* WARNING: Removing unreachable block (ram,0x029cc038) */
/* WARNING: Removing unreachable block (ram,0x029cc040) */
/* WARNING: Removing unreachable block (ram,0x029cc050) */
/* WARNING: Removing unreachable block (ram,0x029cef10) */
/* WARNING: Removing unreachable block (ram,0x029cef38) */
/* WARNING: Removing unreachable block (ram,0x029cef4c) */
/* WARNING: Removing unreachable block (ram,0x029cef60) */
/* WARNING: Removing unreachable block (ram,0x029cef7c) */
/* WARNING: Removing unreachable block (ram,0x029cef90) */
/* WARNING: Removing unreachable block (ram,0x029cef64) */
/* WARNING: Removing unreachable block (ram,0x029cbd88) */
/* WARNING: Removing unreachable block (ram,0x0165046c) */
/* WARNING: Removing unreachable block (ram,0x01650064) */
/* WARNING: Removing unreachable block (ram,0x0165007c) */
/* WARNING: Removing unreachable block (ram,0x01650084) */
/* WARNING: Removing unreachable block (ram,0x0165008c) */
/* WARNING: Removing unreachable block (ram,0x01650098) */
/* WARNING: Removing unreachable block (ram,0x016500b4) */
/* WARNING: Removing unreachable block (ram,0x016500c0) */
/* WARNING: Removing unreachable block (ram,0x016500c8) */
/* WARNING: Removing unreachable block (ram,0x016500d0) */
/* WARNING: Removing unreachable block (ram,0x016500dc) */
/* WARNING: Removing unreachable block (ram,0x01650114) */
/* WARNING: Removing unreachable block (ram,0x01650128) */
/* WARNING: Removing unreachable block (ram,0x01650130) */
/* WARNING: Removing unreachable block (ram,0x01650138) */
/* WARNING: Removing unreachable block (ram,0x01650144) */
/* WARNING: Removing unreachable block (ram,0x01650178) */
/* WARNING: Removing unreachable block (ram,0x029d2384) */
/* WARNING: Removing unreachable block (ram,0x016500ec) */
/* WARNING: Removing unreachable block (ram,0x016500f8) */
/* WARNING: Removing unreachable block (ram,0x016500fc) */
/* WARNING: Removing unreachable block (ram,0x0151918c) */
/* WARNING: Removing unreachable block (ram,0x01519194) */
/* WARNING: Removing unreachable block (ram,0x015191a0) */
/* WARNING: Removing unreachable block (ram,0x0151916c) */
/* WARNING: Removing unreachable block (ram,0x01519174) */
/* WARNING: Removing unreachable block (ram,0x01519180) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01518fa8) */
/* WARNING: Removing unreachable block (ram,0x01518fb0) */
/* WARNING: Removing unreachable block (ram,0x01518fb8) */
/* WARNING: Removing unreachable block (ram,0x01518fc0) */
/* WARNING: Removing unreachable block (ram,0x01518fc8) */
/* WARNING: Removing unreachable block (ram,0x01518fd0) */
/* WARNING: Removing unreachable block (ram,0x01518fd8) */
/* WARNING: Removing unreachable block (ram,0x01518fe0) */
/* WARNING: Removing unreachable block (ram,0x01518fe4) */
/* WARNING: Removing unreachable block (ram,0x0151901c) */
/* WARNING: Removing unreachable block (ram,0x0151905c) */
/* WARNING: Removing unreachable block (ram,0x01519024) */
/* WARNING: Removing unreachable block (ram,0x0151902c) */
/* WARNING: Removing unreachable block (ram,0x01519034) */
/* WARNING: Removing unreachable block (ram,0x01519040) */
/* WARNING: Removing unreachable block (ram,0x01519048) */
/* WARNING: Removing unreachable block (ram,0x01519050) */
/* WARNING: Removing unreachable block (ram,0x01518fec) */
/* WARNING: Removing unreachable block (ram,0x01518ff4) */
/* WARNING: Removing unreachable block (ram,0x01518ffc) */
/* WARNING: Removing unreachable block (ram,0x01519008) */
/* WARNING: Removing unreachable block (ram,0x01519010) */
/* WARNING: Removing unreachable block (ram,0x01519018) */
/* WARNING: Removing unreachable block (ram,0x0159aaa0) */
/* WARNING: Removing unreachable block (ram,0x0159aaa4) */
/* WARNING: Removing unreachable block (ram,0x0159aaa8) */
/* WARNING: Removing unreachable block (ram,0x0159aae0) */
/* WARNING: Removing unreachable block (ram,0x0159aac8) */
/* WARNING: Removing unreachable block (ram,0x0159aad0) */
/* WARNING: Removing unreachable block (ram,0x01518f8c) */
/* WARNING: Removing unreachable block (ram,0x01519068) */
/* WARNING: Removing unreachable block (ram,0x0151906c) */
/* WARNING: Removing unreachable block (ram,0x01518fa4) */
/* WARNING: Removing unreachable block (ram,0x01519078) */
/* WARNING: Removing unreachable block (ram,0x0151908c) */
/* WARNING: Removing unreachable block (ram,0x01519098) */
/* WARNING: Removing unreachable block (ram,0x0151909c) */
/* WARNING: Removing unreachable block (ram,0x015190d0) */
/* WARNING: Removing unreachable block (ram,0x015190a4) */
/* WARNING: Removing unreachable block (ram,0x015190dc) */
/* WARNING: Removing unreachable block (ram,0x015190f8) */
/* WARNING: Removing unreachable block (ram,0x0151912c) */
/* WARNING: Removing unreachable block (ram,0x0151914c) */
/* WARNING: Removing unreachable block (ram,0x015191e8) */
/* WARNING: Removing unreachable block (ram,0x0151920c) */
/* WARNING: Removing unreachable block (ram,0x01519228) */
/* WARNING: Removing unreachable block (ram,0x015192d4) */
/* WARNING: Removing unreachable block (ram,0x015192f0) */
/* WARNING: Removing unreachable block (ram,0x01519358) */
/* WARNING: Removing unreachable block (ram,0x015192fc) */
/* WARNING: Removing unreachable block (ram,0x01519390) */
/* WARNING: Removing unreachable block (ram,0x01519308) */
/* WARNING: Removing unreachable block (ram,0x01519394) */
/* WARNING: Removing unreachable block (ram,0x015193bc) */
/* WARNING: Removing unreachable block (ram,0x015193c0) */
/* WARNING: Removing unreachable block (ram,0x015193c4) */
/* WARNING: Removing unreachable block (ram,0x015193e4) */
/* WARNING: Removing unreachable block (ram,0x015193e8) */
/* WARNING: Removing unreachable block (ram,0x015193cc) */
/* WARNING: Removing unreachable block (ram,0x01519408) */
/* WARNING: Removing unreachable block (ram,0x0151940c) */
/* WARNING: Removing unreachable block (ram,0x0151941c) */
/* WARNING: Removing unreachable block (ram,0x01519434) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01519420) */
/* WARNING: Removing unreachable block (ram,0x01519740) */
/* WARNING: Removing unreachable block (ram,0x01519770) */
/* WARNING: Removing unreachable block (ram,0x015197f0) */
/* WARNING: Removing unreachable block (ram,0x01519810) */
/* WARNING: Removing unreachable block (ram,0x01519a6c) */
/* WARNING: Removing unreachable block (ram,0x01519a74) */
/* WARNING: Removing unreachable block (ram,0x01519814) */
/* WARNING: Removing unreachable block (ram,0x01519834) */
/* WARNING: Removing unreachable block (ram,0x015197f8) */
/* WARNING: Removing unreachable block (ram,0x015193d0) */
/* WARNING: Removing unreachable block (ram,0x015193f4) */
/* WARNING: Removing unreachable block (ram,0x015193f8) */
/* WARNING: Removing unreachable block (ram,0x01519234) */
/* WARNING: Removing unreachable block (ram,0x01519160) */
/* WARNING: Removing unreachable block (ram,0x01519118) */
/* WARNING: Removing unreachable block (ram,0x015190f0) */
/* WARNING: Removing unreachable block (ram,0x0151243c) */
/* WARNING: Removing unreachable block (ram,0x01512454) */
/* WARNING: Removing unreachable block (ram,0x015124fc) */
/* WARNING: Removing unreachable block (ram,0x01512460) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015190b0) */
/* WARNING: Removing unreachable block (ram,0x015190c4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a8c) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x016b6590) */
/* WARNING: Removing unreachable block (ram,0x016b65a4) */
/* WARNING: Removing unreachable block (ram,0x016b65ac) */
/* WARNING: Removing unreachable block (ram,0x016b65b0) */
/* WARNING: Removing unreachable block (ram,0x016b65b8) */
/* WARNING: Removing unreachable block (ram,0x016b65c0) */
/* WARNING: Removing unreachable block (ram,0x016b65c8) */
/* WARNING: Removing unreachable block (ram,0x016b65d8) */

long Atlas_Contexts_GameContextBase__ResetChallenges(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  *(undefined1 *)(param_1 + 0x248) = 1;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar2 != 0)) {
    /*Atlas.Stats.StatsManager$$CommitAnyCurrentAndStartTransaction*/ func_0x01504e58(lVar2,0);
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) goto code_r0x0159aaf0;
  }
  lVar2 = func_0x00f78af4();
code_r0x0159aaf0:
  if ((bRam0000000003eb520a & 1) == 0) {
    func_0x00f78a20(0x3d324e8);
    func_0x00f78a20(0x3d324f0);
    func_0x00f78a20(0x3d324f8);
    func_0x00f78a20(0x3d3a670);
    bRam0000000003eb520a = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  lVar5 = 0;
  if (*(long *)(lVar2 + 0x38) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(lVar2 + 0x38),uRam0000000003d3a670);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d324f0);
      if ((uVar3 & 1) == 0) {
        lVar5 = 0;
        iVar4 = 0x45;
        goto code_r0x0159abb8;
      }
      if (lStack_58 == 0) {
        func_0x00f78af4();
code_r0x0159abfc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x159ac00);
        (*pcVar1)();
      }
      if (*(long *)(lStack_58 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x0159abfc;
      }
    } while (*(int *)(*(long *)(lStack_58 + 0x10) + 0x50) != 0);
    iVar4 = 0x47;
    lVar5 = lStack_58;
code_r0x0159abb8:
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d324e8);
    if (iVar4 != 0x47) {
      lVar5 = 0;
    }
  }
  return lVar5;
}



// ============================================================
// RVA: 0x159ac4c | Atlas.Contexts.GameContextBase.RandomizeInvalidKartVisuals
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x159ae14 | Atlas.Contexts.GameContextBase.InitPostProcessing
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x159aed0 | Atlas.Contexts.GameContextBase.FindAndInitCoreBehaviours
// ============================================================

/* WARNING: Possible PIC construction at 0x0159b870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159b920) */
/* WARNING: Removing unreachable block (ram,0x0159b938) */
/* WARNING: Removing unreachable block (ram,0x0159b94c) */
/* WARNING: Removing unreachable block (ram,0x0159b96c) */
/* WARNING: Removing unreachable block (ram,0x0159b974) */
/* WARNING: Removing unreachable block (ram,0x0159b978) */
/* WARNING: Removing unreachable block (ram,0x0159b97c) */
/* WARNING: Removing unreachable block (ram,0x0159b9c0) */
/* WARNING: Removing unreachable block (ram,0x0159b9d8) */
/* WARNING: Removing unreachable block (ram,0x0159b9f8) */
/* WARNING: Removing unreachable block (ram,0x0159ba00) */
/* WARNING: Removing unreachable block (ram,0x0159ba04) */
/* WARNING: Removing unreachable block (ram,0x0159ba18) */
/* WARNING: Removing unreachable block (ram,0x0159ba1c) */
/* WARNING: Removing unreachable block (ram,0x0159ba5c) */
/* WARNING: Removing unreachable block (ram,0x0159ba68) */
/* WARNING: Removing unreachable block (ram,0x0159ba70) */
/* WARNING: Removing unreachable block (ram,0x0159ba78) */
/* WARNING: Removing unreachable block (ram,0x0159ba34) */
/* WARNING: Removing unreachable block (ram,0x0159ba40) */
/* WARNING: Removing unreachable block (ram,0x0159ba48) */
/* WARNING: Removing unreachable block (ram,0x0159ba50) */
/* WARNING: Removing unreachable block (ram,0x0159ba80) */
/* WARNING: Removing unreachable block (ram,0x0159ba88) */
/* WARNING: Removing unreachable block (ram,0x0159bb34) */
/* WARNING: Removing unreachable block (ram,0x0159bb54) */
/* WARNING: Removing unreachable block (ram,0x0159bb9c) */
/* WARNING: Removing unreachable block (ram,0x0159bba4) */
/* WARNING: Removing unreachable block (ram,0x0159bba8) */
/* WARNING: Removing unreachable block (ram,0x0159bbac) */
/* WARNING: Removing unreachable block (ram,0x0159bab0) */
/* WARNING: Removing unreachable block (ram,0x0159bad0) */
/* WARNING: Removing unreachable block (ram,0x0159bb14) */
/* WARNING: Removing unreachable block (ram,0x0159bb1c) */
/* WARNING: Removing unreachable block (ram,0x0159bb20) */
/* WARNING: Removing unreachable block (ram,0x0159bb24) */
/* WARNING: Removing unreachable block (ram,0x0159bbb8) */
/* WARNING: Removing unreachable block (ram,0x0159b8c8) */
/* WARNING: Removing unreachable block (ram,0x0159b8ec) */
/* WARNING: Removing unreachable block (ram,0x0159b904) */
/* WARNING: Removing unreachable block (ram,0x0159b874) */
/* WARNING: Removing unreachable block (ram,0x0159b898) */
/* WARNING: Removing unreachable block (ram,0x0159b8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159b56c) */

long * Atlas_Contexts_GameContextBase__FindAndInitCoreBehaviours
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int extraout_w1;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long *unaff_x27;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  int aiStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar13 = 0x3d3b150;
  lVar12 = 0x3d1d990;
  if ((bRam0000000003eb51b1 & 1) == 0) {
    func_0x00f78a20(0x3d52288);
    func_0x00f78a20(0x3d52290);
    func_0x00f78a20(0x3d52298);
    func_0x00f78a20(0x3d522a0);
    func_0x00f78a20(0x3d32998);
    func_0x00f78a20(0x3d32500);
    func_0x00f78a20(0x3d32eb8);
    func_0x00f78a20(0x3d32ec0);
    func_0x00f78a20(0x3d329a0);
    func_0x00f78a20(0x3d32508);
    func_0x00f78a20(0x3d32ec8);
    func_0x00f78a20(0x3d329a8);
    func_0x00f78a20(0x3d32510);
    func_0x00f78a20(0x3d3b158);
    func_0x00f78a20(0x3d3a6a0);
    func_0x00f78a20(0x3d3bcb0);
    func_0x00f78a20(0x3d3a6a8);
    func_0x00f78a20(0x3d3b160);
    func_0x00f78a20(0x3d3b150);
    func_0x00f78a20(0x3d3a690);
    func_0x00f78a20(0x3d1d990);
    func_0x00f78a20(0x3d1db98);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d259f0);
    bRam0000000003eb51b1 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  auStack_88[0] = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  aiStack_d0[3] = 0;
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<MapSceneBehaviour>_TypeInfo*/ uRam0000000003d1db98);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d3b150);
  *(long *)(param_1 + 0x1e0) = lVar4;
  lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<GameObject>_TypeInfo*/ uRam0000000003d1d990);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(lVar5,0x32,uRam0000000003d3a690);
  if (*(long *)(param_1 + 0x180) == 0) goto LAB_0159b58c;
  lVar6 = *(long *)(*(long *)(param_1 + 0x180) + 0x18);
  if (lVar6 == 0) goto LAB_0159b58c;
  unaff_x27 = (long *)0x3d23990;
  /*System.Collections.Generic.List<Scene>$$GetEnumerator*/ func_0x024567f0(&uStack_e8,lVar6,uRam0000000003d3bcb0);
  uStack_f0 = 0;
  lVar12 = 0;
  uVar13 = 0;
  lVar4 = 0;
  uStack_78 = uStack_e0;
  uStack_80 = uStack_e8;
  lStack_70 = lStack_d8;
  while( true ) {
    uVar7 = /*System.Collections.Generic.List.Enumerator<Scene>$$MoveNext*/ func_0x01f72ca4(&uStack_80,uRam0000000003d32ec0);
    if ((uVar7 & 1) == 0) break;
    auStack_88[0] = (undefined4)lStack_70;
    /*UnityEngine.SceneManagement.Scene$$GetRootGameObjects*/ func_0x0325d1d8(auStack_88,lVar5,0);
    if (lVar5 == 0) {
      func_0x00f78af4();
code_r0x0159b588:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x159b58c);
      (*pcVar2)();
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,lVar5,uRam0000000003d3a6a8);
    uStack_98 = uStack_e0;
    uStack_a0 = uStack_e8;
    lStack_90 = lStack_d8;
    while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d32508), lVar6 = lStack_90,
          (uVar7 & 1) != 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,0,0);
      if ((uVar7 & 1) != 0) {
        lVar4 = Atlas_Contexts_AtlasContext__GetActiveComponent_AudioMapBehaviour_
                          (lVar6,uRam0000000003d52290);
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        uVar13 = Atlas_Contexts_AtlasContext__GetActiveComponent_AudioMapBehaviour_
                           (lVar6,uRam0000000003d52288);
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
      if ((uVar7 & 1) != 0) {
        lVar12 = Atlas_Contexts_AtlasContext__GetActiveComponent_AudioMapBehaviour_
                           (lVar6,uRam0000000003d522a0);
      }
      uVar8 = Atlas_Contexts_AtlasContext__GetActiveComponent_AudioMapBehaviour_
                        (lVar6,uRam0000000003d52298);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x1e0) == 0) {
          func_0x00f78af4();
          goto code_r0x0159b588;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x1e0),uVar8,uRam0000000003d3b158);
      }
    }
    aiStack_d0[uStack_f0._4_4_] = 0xc0;
    iVar3 = aiStack_d0[3];
    uStack_f0._0_4_ = aiStack_d0[3] + 1;
    aiStack_d0[3] = (uint)uStack_f0;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d32500);
    if (((uint)uStack_f0 != 0) && (aiStack_d0[iVar3] == 0xc0)) {
      aiStack_d0[3] = iVar3;
      uStack_f0._0_4_ = iVar3;
    }
    uStack_f0 = CONCAT44((uint)uStack_f0,(uint)uStack_f0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar5,uRam0000000003d3a6a0);
  }
  aiStack_d0[uStack_f0._4_4_] = 0xe2;
  aiStack_d0[3] = aiStack_d0[3] + 1;
  uVar7 = (ulong)(uint)aiStack_d0[3];
  /*System.Collections.Generic.List.Enumerator<Scene>$$Dispose*/ func_0x01f72ca0(&uStack_80,uRam0000000003d32eb8);
  do {
    uVar15 = (uint)uVar7;
    if ((uVar15 != 0) && (uVar1 = uVar15 - 1, aiStack_d0[(int)uVar1] == 0xe2)) {
      uVar15 = uVar1;
      aiStack_d0[3] = uVar1;
    }
    if (((*(ushort *)(*unaff_x27 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x27 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
    if (iVar3 == 0) {
code_r0x0159b4b0:
      if (((*(ushort *)(*unaff_x27 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x27 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
      if ((iVar3 != 0) && (*(long *)(param_1 + 0x150) != 0)) {
        /*Atlas.Audio.AtlasAudioManager$$SetAudioMapBehaviour*/ func_0x01458758(*(long *)(param_1 + 0x150),uVar13,0);
      }
      *(long *)(param_1 + 0x1d8) = lVar12;
      lVar12 = func_0x00f78aec(/*Atlas.Gameplay.VfxHitVolumeManager_TypeInfo*/ uRam0000000003d259f0);
      /*Atlas.Gameplay.VfxHitVolumeManager$$.ctor*/ func_0x015282b0(lVar12,0);
      *(long *)(param_1 + 0x208) = lVar12;
      if ((lVar4 != 0) && (lVar12 != 0)) {
        /*Atlas.Gameplay.VfxHitVolumeManager$$Init*/ func_0x01527ccc(lVar12,*(undefined8 *)(lVar4 + 0x58),0);
        plVar9 = (long *)0x0;
        if (*(long *)(param_1 + 0x230) != 0) {
          plVar9 = (long *)/*Atlas.Arcade.ArcadeEvent$$FindAndInitBehaviours*/ func_0x0144df08(*(long *)(param_1 + 0x230),param_2,
                                           *(undefined8 *)(param_1 + 0x180),0);
        }
        return plVar9;
      }
    }
    else {
      *(long *)(param_1 + 0x1d0) = lVar4;
      if (lVar4 != 0) {
        /*Atlas.Maps.MapBehaviour$$Init*/ func_0x0148d044(lVar4,0);
        if (*(long *)(param_1 + 0x1e0) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,*(long *)(param_1 + 0x1e0),uRam0000000003d3b160);
          uStack_b8 = uStack_e0;
          uStack_c0 = uStack_e8;
          lStack_b0 = lStack_d8;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d329a0), (uVar7 & 1) != 0) {
            if (*(long *)(param_1 + 0x1d0) == 0) {
              func_0x00f78af4();
              goto code_r0x0159b588;
            }
            if (lStack_b0 == 0) {
              func_0x00f78af4();
              goto code_r0x0159b588;
            }
            /*Atlas.Gameplay.MapSceneBehaviour$$SwapMeshRendererMaterialTextures*/ func_0x0148db18(lStack_b0,*(undefined4 *)(*(long *)(param_1 + 0x1d0) + 0x80),0);
          }
          aiStack_d0[(int)uVar15] = 0x13c;
          iVar3 = aiStack_d0[3];
          uVar15 = aiStack_d0[3] + 1;
          aiStack_d0[3] = uVar15;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d32998);
          if ((uVar15 != 0) && (aiStack_d0[iVar3] == 0x13c)) {
            aiStack_d0[3] = iVar3;
          }
          goto code_r0x0159b4b0;
        }
      }
    }
LAB_0159b58c:
    func_0x00f78af4();
    uVar7 = uStack_f0 & 0xffffffff;
    if (extraout_w1 != 1) goto code_r0x0159b630;
    plVar9 = (long *)___cxa_begin_catch();
    lVar5 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<Scene>$$Dispose*/ func_0x01f72ca0(&uStack_80,uRam0000000003d32eb8);
  } while (lVar5 == 0);
  func_0x00f78ac0(lVar5,0);
code_r0x0159b630:
  auVar16 = __Unwind_Resume();
  if ((bRam0000000003eb51b2 & 1) == 0) {
    func_0x00f78a20(0x3d276c8);
    bRam0000000003eb51b2 = 1;
  }
  plVar9 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitFollowCam>d__159_TypeInfo*/ uRam0000000003d276c8);
  uVar13 = 0;
  /*Atlas.Contexts.GameContextBase.<InitFollowCam>d__159$$.ctor*/ func_0x0154fe08(plVar9,0);
  if (plVar9 != (long *)0x0) {
    *(undefined1 (*) [16])(plVar9 + 4) = auVar16;
    return plVar9;
  }
  lVar12 = func_0x00f78af4();
  if (*(long *)(lVar12 + 0x138) != 0) {
    plVar9 = (long *)Atlas_Gameplay_Kart_KartFollowCamera__DeInit(*(long *)(lVar12 + 0x138),0);
    *(undefined8 *)(lVar12 + 0x138) = 0;
    return plVar9;
  }
  auVar16 = func_0x00f78af4();
  lVar12 = auVar16._0_8_;
  if ((bRam0000000003eb51b3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d570c8);
    func_0x00f78a20(0x3d57098);
    func_0x00f78a20(0x3d570a8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d918);
    func_0x00f78a20(0x3d5d920);
    func_0x00f78a20(0x3d5d928);
    func_0x00f78a20(0x3d24d40);
    func_0x00f78a20(0x3d27788);
    func_0x00f78a20(0x3d27770);
    func_0x00f78a20(0x3d27780);
    func_0x00f78a20(0x3d276b0);
    bRam0000000003eb51b3 = 1;
  }
  lVar5 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
  /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar5,0);
  *(long *)(lVar12 + 0x20) = lVar5;
  if (lVar5 == 0) {
code_r0x0159bbf0:
    auVar17 = func_0x00f78af4();
    auVar16._8_8_ = uVar13;
    auVar16._0_8_ = auVar17._8_8_;
    lVar5 = auVar17._0_8_;
  }
  else {
    uVar13 = 0;
    /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar5,2);
    if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x0159bbf0;
    uVar13 = uRam0000000003d5d920;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar12 + 0x20),lVar12 + 0x28);
    if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x0159bbf0;
    uVar13 = uRam0000000003d5d918;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar12 + 0x20),lVar12 + 0x30);
    if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x0159bbf0;
    uVar13 = uRam0000000003d5d928;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar12 + 0x20),lVar12 + 0x38);
    lVar5 = *(long *)(lVar12 + 0x28);
    if (lVar5 == 0) goto code_r0x0159bbf0;
    param_4 = *(long *)(lVar12 + 0x58);
  }
  lVar11 = auVar16._8_8_;
  lVar6 = auVar16._0_8_;
  lVar12 = lVar11;
  lVar4 = param_4;
  if ((bRam0000000003eb51c3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d57100);
    func_0x00f78a20(0x3d57108);
    func_0x00f78a20(0x3d57110);
    func_0x00f78a20(0x3d57118);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d930);
    func_0x00f78a20(0x3d5d938);
    func_0x00f78a20(0x3d5d940);
    func_0x00f78a20(0x3d5d948);
    func_0x00f78a20(0x3d5d950);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51c3 = 1;
  }
  *(long *)(lVar5 + 0x78) = lVar6;
  if (param_4 != 0) {
    uVar13 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d550b8);
    *(undefined8 *)(lVar5 + 0x80) = uVar13;
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x140) != 0)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x140) + 0x10), lVar6 != 0)) {
      *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar6 + 0x30);
      lVar6 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
      /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar6,0);
      *(long *)(lVar5 + 0x90) = lVar6;
      if (lVar6 != 0) {
        lVar12 = 0;
        /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar6,2);
        if (*(long *)(lVar5 + 0x90) != 0) {
          lVar12 = lRam0000000003d5d940;
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 0x90),(long *)(lVar5 + 0x98));
          if (*(long *)(lVar5 + 0x90) != 0) {
            lVar12 = lRam0000000003d5d948;
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 0x90),lVar5 + 0xa0);
            if (*(long *)(lVar5 + 0x90) != 0) {
              lVar12 = lRam0000000003d5d950;
              /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 0x90),(long *)(lVar5 + 0xa8));
              if (*(long *)(lVar5 + 0x90) != 0) {
                lVar12 = lRam0000000003d5d930;
                /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 0x90),lVar5 + 0xb0);
                if (*(long *)(lVar5 + 0x90) != 0) {
                  lVar12 = lRam0000000003d5d938;
                  /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 0x90),(long *)(lVar5 + 0xb8));
                  lVar6 = *(long *)(lVar5 + 0x98);
                  if (lVar6 != 0) {
                    /*Atlas.Contexts.IntroSequenceMapPanState$$Init*/ func_0x015b9044(lVar6,*(undefined8 *)(lVar5 + 0x78),param_4,0);
                    lVar6 = *(long *)(lVar5 + 0x98);
                    uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    lVar4 = 0;
                    lVar12 = lRam0000000003d57110;
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar13,lVar5);
                    if (lVar6 != 0) {
                      lVar12 = 0;
                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar6,uVar13);
                      lVar6 = *(long *)(lVar5 + 0x78);
                      if (((lVar6 != 0) && (*(long *)(lVar6 + 0x130) != 0)) &&
                         (lVar10 = *(long *)(*(long *)(lVar6 + 0x130) + 0x48), lVar10 != 0)) {
                        lVar14 = *(long *)(lVar5 + 0xa0);
                        uVar13 = *(undefined8 *)(lVar6 + 0x140);
                        lVar6 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject
                                          (lVar10,0);
                        if (lVar6 != 0) {
                          uVar8 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar6,0);
                          if ((*(long *)(lVar5 + 0x78) != 0) && (lVar14 != 0)) {
                            param_5 = *(long *)(*(long *)(lVar5 + 0x78) + 0x208);
                            /*Atlas.Contexts.IntroSequencePlayerPanState$$Init*/ func_0x015b9828(lVar14,uVar13,uVar8,param_4,param_5,0);
                            lVar6 = *(long *)(lVar5 + 0xa0);
                            uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            lVar4 = 0;
                            lVar12 = lRam0000000003d57118;
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar13,lVar5);
                            if (lVar6 != 0) {
                              lVar12 = 0;
                              /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar6,uVar13);
                              lVar6 = *(long *)(lVar5 + 0xa8);
                              if (lVar6 != 0) {
                                /*Atlas.Contexts.IntroSequenceWaitingState$$Init*/ func_0x015b9b84(lVar6,param_4,0);
                                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                lVar12 = 0;
                                iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0);
                                if (iVar3 == 0) {
code_r0x0159bf40:
                                  lVar6 = *(long *)(lVar5 + 0xa8);
                                  uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar12 = lRam0000000003d57100;
                                }
                                else {
                                  if (lVar11 == 0) goto code_r0x0159c014;
                                  if (*(char *)(lVar11 + 0x11c) == '\0') goto code_r0x0159bf40;
                                  lVar6 = *(long *)(lVar5 + 0xa8);
                                  uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar12 = lRam0000000003d57108;
                                }
                                lVar4 = 0;
                                /*System.Action$$.ctor*/ func_0x02924c80(uVar13,lVar5);
                                if (lVar6 != 0) {
                                  lVar12 = 0;
                                  /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar6,uVar13);
                                  lVar6 = *(long *)(lVar5 + 0x78);
                                  if ((((lVar6 != 0) && (*(long *)(lVar6 + 0x140) != 0)) &&
                                      (lVar11 = *(long *)(*(long *)(lVar6 + 0x140) + 0x10),
                                      lVar11 != 0)) && (*(long *)(lVar5 + 0xb0) != 0)) {
                                    param_5 = 0;
                                    /*Atlas.Contexts.IntroSequenceCountdownState$$Init*/ func_0x015b8a2c(*(undefined4 *)(lVar11 + 0x50),
                                                    *(long *)(lVar5 + 0xb0),param_4,
                                                    *(undefined8 *)(lVar6 + 0x130),
                                                    *(undefined8 *)(lVar6 + 0x208));
                                    lVar6 = *(long *)(lVar5 + 0xb0);
                                    uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                    lVar4 = 0;
                                    lVar12 = lRam0000000003d57108;
                                    /*System.Action$$.ctor*/ func_0x02924c80(uVar13,lVar5);
                                    if (lVar6 != 0) {
                                      lVar12 = 0;
                                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar6,uVar13);
                                      lVar5 = *(long *)(lVar5 + 0xb8);
                                      if (lVar5 != 0) {
                                        if ((bRam0000000003eb52a5 & 1) == 0) {
                                          func_0x00f78a20(0x3d55148,param_4,0);
                                          bRam0000000003eb52a5 = 1;
                                        }
                                        if (param_4 != 0) {
                                          plVar9 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,
                                                  uRam0000000003d55148);
                                          *(long **)(lVar5 + 0x78) = plVar9;
                                          return plVar9;
                                        }
                                        plVar9 = (long *)func_0x00f78af4();
                                        return plVar9;
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
code_r0x0159c014:
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._0_8_;
  lVar5 = lVar12;
  lVar6 = lVar4;
  if ((bRam0000000003eb51c1 & 1) == 0) {
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55168);
    bRam0000000003eb51c1 = 1;
  }
  *(long *)(lVar11 + 0x80) = auVar16._8_8_;
  *(long *)(lVar11 + 0xa0) = lVar12;
  if (lVar4 != 0) {
    uVar13 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar4,uRam0000000003d550b8);
    *(undefined8 *)(lVar11 + 0x78) = uVar13;
    uVar13 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar4,uRam0000000003d55148);
    *(undefined8 *)(lVar11 + 0x88) = uVar13;
    uVar13 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar4,uRam0000000003d55168);
    *(undefined8 *)(lVar11 + 0x90) = uVar13;
    plVar9 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar4,uRam0000000003d550b0);
    *(long **)(lVar11 + 0x98) = plVar9;
    return plVar9;
  }
  auVar16 = func_0x00f78af4();
  uVar13 = auVar16._8_8_;
  lVar12 = auVar16._0_8_;
  if ((bRam0000000003eb51ca & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55068);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d57120);
    func_0x00f78a20(0x3d57128);
    func_0x00f78a20(0x3d57130);
    func_0x00f78a20(0x3d5d958);
    func_0x00f78a20(0x3d5d960);
    func_0x00f78a20(0x3d5d968);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51ca = 1;
  }
  if (param_5 != 0) {
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b8);
    *(undefined8 *)(lVar12 + 0x88) = uVar8;
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55148);
    *(undefined8 *)(lVar12 + 0x90) = uVar8;
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(lVar12 + 0x98) = uVar8;
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b0);
    *(undefined8 *)(lVar12 + 0xa0) = uVar8;
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55150);
    *(undefined8 *)(lVar12 + 0xd0) = uVar8;
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55188);
    *(undefined8 *)(lVar12 + 0xa8) = uVar8;
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55068);
    *(undefined8 *)(lVar12 + 0xb0) = uVar8;
    uVar8 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55090);
    *(undefined8 *)(lVar12 + 0x78) = uVar13;
    *(undefined8 *)(lVar12 + 0xb8) = uVar8;
    *(long *)(lVar12 + 0xc0) = lVar5;
    lVar5 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar5,0);
    *(long *)(lVar12 + 200) = lVar5;
    if (lVar5 != 0) {
      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar5,2,0);
      if (*(long *)(lVar12 + 200) != 0) {
        /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar12 + 200),(long *)(lVar12 + 0xd8),uRam0000000003d5d958);
        if (*(long *)(lVar12 + 200) != 0) {
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar12 + 200),lVar12 + 0xe0,uRam0000000003d5d968);
          if (*(long *)(lVar12 + 200) != 0) {
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar12 + 200),(long *)(lVar12 + 0xe8),uRam0000000003d5d960);
            lVar5 = *(long *)(lVar12 + 0xd8);
            if (lVar5 != 0) {
              /*Atlas.Contexts.OutroSequenceBeginRoundCompleteState$$Init*/ func_0x014b48cc(lVar5,uVar13,lVar6,0);
              lVar5 = *(long *)(lVar12 + 0xd8);
              uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar8,lVar12,uRam0000000003d57130,0);
              if (lVar5 != 0) {
                /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar5,uVar8,0);
                if ((*(long *)(lVar12 + 0xd0) != 0) && (*(long *)(lVar12 + 0xe0) != 0)) {
                  /*Atlas.Contexts.OutroSequenceShowPlacementsState$$Init*/ func_0x014b5468(*(long *)(lVar12 + 0xe0),uVar13,
                                  *(undefined1 *)(*(long *)(lVar12 + 0xd0) + 0x50),0);
                  lVar5 = *(long *)(lVar12 + 0xe8);
                  if (lVar5 != 0) {
                    /*Atlas.Contexts.OutroSequenceEndGameState$$Init*/ func_0x014b4ba8(lVar5,param_5,uVar13,0);
                    if (((*(long *)(lVar12 + 0xd0) != 0) &&
                        (lVar5 = *(long *)(*(long *)(lVar12 + 0xd0) + 0x20), lVar5 != 0)) &&
                       (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
                      uVar8 = *(undefined8 *)(lVar5 + 0x20);
                      uVar13 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
                      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar13,lVar12,uRam0000000003d57120,uRam0000000003d2a1d8);
                      plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar13,0);
                      if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
                      goto code_r0x0159c53c;
                      *(long **)(lVar5 + 0x20) = plVar9;
                      if ((*(long *)(lVar12 + 0xd0) != 0) &&
                         ((lVar5 = *(long *)(*(long *)(lVar12 + 0xd0) + 0x20), lVar5 != 0 &&
                          (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
                        uVar8 = *(undefined8 *)(lVar5 + 0x68);
                        uVar13 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar13,lVar12,uRam0000000003d57128,uRam0000000003d29f28);
                        plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar13,0);
                        if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                          *(long **)(lVar5 + 0x68) = plVar9;
                          return plVar9;
                        }
                        goto code_r0x0159c53c;
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
  func_0x00f78af4();
code_r0x0159c53c:
  lVar12 = func_0x00f78e5c();
  lVar5 = *(long *)(lVar12 + 0x20);
  if (lVar5 != 0) {
    plVar9 = (long *)/*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar5,0);
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(long *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined8 *)(lVar12 + 0x30) = 0;
    return plVar9;
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  plVar9 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  /*Atlas.Contexts.GameContextBase.<InitPools>d__164$$.ctor*/ func_0x015501d4(plVar9,0,0);
  if (plVar9 != (long *)0x0) {
    plVar9[4] = lVar12;
    return plVar9;
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar12 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x98),uRam0000000003d5b978);
    lVar12 = *(long *)(lVar12 + 0xb0);
    if (lVar12 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar12,uRam0000000003d5fee0);
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined8 *)(lVar12 + 0x58) = 0;
      if (*(long *)(lVar12 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar12 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar12 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar12 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar12 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar12 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar12 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar12 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar12 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar12 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar12 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar12 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar12 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar12 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar12 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar12 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar12 + 0x18),uRam0000000003d5b990)
                                      ;
                                      if (*(long *)(lVar12 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar12 + 0x10),
                                                        uRam0000000003d5ba40);
                                        if (*(long *)(lVar12 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar12 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar12 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar12 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar12 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar12 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar12 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar12 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar12 + 0x18) != 0) {
                                                  plVar9 = (long *)/*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar12 
                                                  + 0x18),/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uRam0000000003d5b9a0)
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x30) = 0;
                                                  return plVar9;
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
      lVar12 = func_0x00f78af4();
      plVar9 = (long *)Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((plVar9 != (long *)0x0) && (*(long *)(lVar12 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar12 + 0x60),plVar9,0);
      }
      return plVar9;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  plVar9 = (long *)func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  lVar12 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(lVar12,0,uRam0000000003d5b928,uRam0000000003d35b00);
  plVar9[9] = lVar12;
  return plVar9;
}



// ============================================================
// RVA: 0x159b634 | Atlas.Contexts.GameContextBase.InitFollowCam
// ============================================================

/* WARNING: Possible PIC construction at 0x0159b870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159b920) */
/* WARNING: Removing unreachable block (ram,0x0159b938) */
/* WARNING: Removing unreachable block (ram,0x0159b94c) */
/* WARNING: Removing unreachable block (ram,0x0159b96c) */
/* WARNING: Removing unreachable block (ram,0x0159b974) */
/* WARNING: Removing unreachable block (ram,0x0159b978) */
/* WARNING: Removing unreachable block (ram,0x0159b97c) */
/* WARNING: Removing unreachable block (ram,0x0159b9c0) */
/* WARNING: Removing unreachable block (ram,0x0159b9d8) */
/* WARNING: Removing unreachable block (ram,0x0159b9f8) */
/* WARNING: Removing unreachable block (ram,0x0159ba00) */
/* WARNING: Removing unreachable block (ram,0x0159ba04) */
/* WARNING: Removing unreachable block (ram,0x0159ba18) */
/* WARNING: Removing unreachable block (ram,0x0159ba1c) */
/* WARNING: Removing unreachable block (ram,0x0159ba5c) */
/* WARNING: Removing unreachable block (ram,0x0159ba68) */
/* WARNING: Removing unreachable block (ram,0x0159ba70) */
/* WARNING: Removing unreachable block (ram,0x0159ba78) */
/* WARNING: Removing unreachable block (ram,0x0159ba34) */
/* WARNING: Removing unreachable block (ram,0x0159ba40) */
/* WARNING: Removing unreachable block (ram,0x0159ba48) */
/* WARNING: Removing unreachable block (ram,0x0159ba50) */
/* WARNING: Removing unreachable block (ram,0x0159ba80) */
/* WARNING: Removing unreachable block (ram,0x0159ba88) */
/* WARNING: Removing unreachable block (ram,0x0159bb34) */
/* WARNING: Removing unreachable block (ram,0x0159bb54) */
/* WARNING: Removing unreachable block (ram,0x0159bb9c) */
/* WARNING: Removing unreachable block (ram,0x0159bba4) */
/* WARNING: Removing unreachable block (ram,0x0159bba8) */
/* WARNING: Removing unreachable block (ram,0x0159bbac) */
/* WARNING: Removing unreachable block (ram,0x0159bab0) */
/* WARNING: Removing unreachable block (ram,0x0159bad0) */
/* WARNING: Removing unreachable block (ram,0x0159bb14) */
/* WARNING: Removing unreachable block (ram,0x0159bb1c) */
/* WARNING: Removing unreachable block (ram,0x0159bb20) */
/* WARNING: Removing unreachable block (ram,0x0159bb24) */
/* WARNING: Removing unreachable block (ram,0x0159bbb8) */
/* WARNING: Removing unreachable block (ram,0x0159b8c8) */
/* WARNING: Removing unreachable block (ram,0x0159b8ec) */
/* WARNING: Removing unreachable block (ram,0x0159b904) */
/* WARNING: Removing unreachable block (ram,0x0159b874) */
/* WARNING: Removing unreachable block (ram,0x0159b898) */
/* WARNING: Removing unreachable block (ram,0x0159b8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

long * Atlas_Contexts_GameContextBase__InitFollowCam
                 (long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if ((bRam0000000003eb51b2 & 1) == 0) {
    func_0x00f78a20(0x3d276c8);
    bRam0000000003eb51b2 = 1;
  }
  plVar2 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitFollowCam>d__159_TypeInfo*/ uRam0000000003d276c8);
  uVar7 = 0;
  /*Atlas.Contexts.GameContextBase.<InitFollowCam>d__159$$.ctor*/ func_0x0154fe08(plVar2,0);
  if (plVar2 != (long *)0x0) {
    plVar2[4] = param_1;
    plVar2[5] = param_2;
    return plVar2;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x138) != 0) {
    plVar2 = (long *)Atlas_Gameplay_Kart_KartFollowCamera__DeInit(*(long *)(lVar3 + 0x138),0);
    *(undefined8 *)(lVar3 + 0x138) = 0;
    return plVar2;
  }
  auVar12 = func_0x00f78af4();
  lVar3 = auVar12._0_8_;
  if ((bRam0000000003eb51b3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d570c8);
    func_0x00f78a20(0x3d57098);
    func_0x00f78a20(0x3d570a8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d918);
    func_0x00f78a20(0x3d5d920);
    func_0x00f78a20(0x3d5d928);
    func_0x00f78a20(0x3d24d40);
    func_0x00f78a20(0x3d27788);
    func_0x00f78a20(0x3d27770);
    func_0x00f78a20(0x3d27780);
    func_0x00f78a20(0x3d276b0);
    bRam0000000003eb51b3 = 1;
  }
  lVar4 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
  /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar4,0);
  *(long *)(lVar3 + 0x20) = lVar4;
  if (lVar4 == 0) {
code_r0x0159bbf0:
    auVar13 = func_0x00f78af4();
    auVar12._8_8_ = uVar7;
    auVar12._0_8_ = auVar13._8_8_;
    lVar4 = auVar13._0_8_;
  }
  else {
    uVar7 = 0;
    /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar4,2);
    if (*(long *)(lVar3 + 0x20) == 0) goto code_r0x0159bbf0;
    uVar7 = uRam0000000003d5d920;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x20),lVar3 + 0x28);
    if (*(long *)(lVar3 + 0x20) == 0) goto code_r0x0159bbf0;
    uVar7 = uRam0000000003d5d918;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x20),lVar3 + 0x30);
    if (*(long *)(lVar3 + 0x20) == 0) goto code_r0x0159bbf0;
    uVar7 = uRam0000000003d5d928;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x20),lVar3 + 0x38);
    lVar4 = *(long *)(lVar3 + 0x28);
    if (lVar4 == 0) goto code_r0x0159bbf0;
    param_4 = *(long *)(lVar3 + 0x58);
  }
  lVar10 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  lVar3 = lVar10;
  lVar8 = param_4;
  if ((bRam0000000003eb51c3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d57100);
    func_0x00f78a20(0x3d57108);
    func_0x00f78a20(0x3d57110);
    func_0x00f78a20(0x3d57118);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d930);
    func_0x00f78a20(0x3d5d938);
    func_0x00f78a20(0x3d5d940);
    func_0x00f78a20(0x3d5d948);
    func_0x00f78a20(0x3d5d950);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51c3 = 1;
  }
  *(long *)(lVar4 + 0x78) = lVar9;
  if (param_4 != 0) {
    uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d550b8);
    *(undefined8 *)(lVar4 + 0x80) = uVar7;
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
       (lVar9 = *(long *)(*(long *)(lVar9 + 0x140) + 0x10), lVar9 != 0)) {
      *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar9 + 0x30);
      lVar9 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
      /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar9,0);
      *(long *)(lVar4 + 0x90) = lVar9;
      if (lVar9 != 0) {
        lVar3 = 0;
        /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar9,2);
        if (*(long *)(lVar4 + 0x90) != 0) {
          lVar3 = lRam0000000003d5d940;
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar4 + 0x90),(long *)(lVar4 + 0x98));
          if (*(long *)(lVar4 + 0x90) != 0) {
            lVar3 = lRam0000000003d5d948;
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar4 + 0x90),lVar4 + 0xa0);
            if (*(long *)(lVar4 + 0x90) != 0) {
              lVar3 = lRam0000000003d5d950;
              /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar4 + 0x90),(long *)(lVar4 + 0xa8));
              if (*(long *)(lVar4 + 0x90) != 0) {
                lVar3 = lRam0000000003d5d930;
                /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar4 + 0x90),lVar4 + 0xb0);
                if (*(long *)(lVar4 + 0x90) != 0) {
                  lVar3 = lRam0000000003d5d938;
                  /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar4 + 0x90),(long *)(lVar4 + 0xb8));
                  lVar9 = *(long *)(lVar4 + 0x98);
                  if (lVar9 != 0) {
                    /*Atlas.Contexts.IntroSequenceMapPanState$$Init*/ func_0x015b9044(lVar9,*(undefined8 *)(lVar4 + 0x78),param_4,0);
                    lVar9 = *(long *)(lVar4 + 0x98);
                    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    lVar8 = 0;
                    lVar3 = lRam0000000003d57110;
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar4);
                    if (lVar9 != 0) {
                      lVar3 = 0;
                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar7);
                      lVar9 = *(long *)(lVar4 + 0x78);
                      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x130) != 0)) &&
                         (lVar5 = *(long *)(*(long *)(lVar9 + 0x130) + 0x48), lVar5 != 0)) {
                        lVar11 = *(long *)(lVar4 + 0xa0);
                        uVar7 = *(undefined8 *)(lVar9 + 0x140);
                        lVar9 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject
                                          (lVar5,0);
                        if (lVar9 != 0) {
                          uVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0);
                          if ((*(long *)(lVar4 + 0x78) != 0) && (lVar11 != 0)) {
                            param_5 = *(long *)(*(long *)(lVar4 + 0x78) + 0x208);
                            /*Atlas.Contexts.IntroSequencePlayerPanState$$Init*/ func_0x015b9828(lVar11,uVar7,uVar6,param_4,param_5,0);
                            lVar9 = *(long *)(lVar4 + 0xa0);
                            uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            lVar8 = 0;
                            lVar3 = lRam0000000003d57118;
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar4);
                            if (lVar9 != 0) {
                              lVar3 = 0;
                              /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar7);
                              lVar9 = *(long *)(lVar4 + 0xa8);
                              if (lVar9 != 0) {
                                /*Atlas.Contexts.IntroSequenceWaitingState$$Init*/ func_0x015b9b84(lVar9,param_4,0);
                                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                lVar3 = 0;
                                iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0);
                                if (iVar1 == 0) {
code_r0x0159bf40:
                                  lVar9 = *(long *)(lVar4 + 0xa8);
                                  uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar3 = lRam0000000003d57100;
                                }
                                else {
                                  if (lVar10 == 0) goto code_r0x0159c014;
                                  if (*(char *)(lVar10 + 0x11c) == '\0') goto code_r0x0159bf40;
                                  lVar9 = *(long *)(lVar4 + 0xa8);
                                  uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar3 = lRam0000000003d57108;
                                }
                                lVar8 = 0;
                                /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar4);
                                if (lVar9 != 0) {
                                  lVar3 = 0;
                                  /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar7);
                                  lVar9 = *(long *)(lVar4 + 0x78);
                                  if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
                                      (lVar10 = *(long *)(*(long *)(lVar9 + 0x140) + 0x10),
                                      lVar10 != 0)) && (*(long *)(lVar4 + 0xb0) != 0)) {
                                    param_5 = 0;
                                    /*Atlas.Contexts.IntroSequenceCountdownState$$Init*/ func_0x015b8a2c((char)*(undefined4 *)(lVar10 + 0x50),
                                                    *(long *)(lVar4 + 0xb0),param_4,
                                                    *(undefined8 *)(lVar9 + 0x130),
                                                    *(undefined8 *)(lVar9 + 0x208));
                                    lVar9 = *(long *)(lVar4 + 0xb0);
                                    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                    lVar8 = 0;
                                    lVar3 = lRam0000000003d57108;
                                    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar4);
                                    if (lVar9 != 0) {
                                      lVar3 = 0;
                                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar7);
                                      lVar4 = *(long *)(lVar4 + 0xb8);
                                      if (lVar4 != 0) {
                                        if ((bRam0000000003eb52a5 & 1) == 0) {
                                          func_0x00f78a20(0x3d55148,param_4,0);
                                          bRam0000000003eb52a5 = 1;
                                        }
                                        if (param_4 != 0) {
                                          plVar2 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,
                                                  uRam0000000003d55148);
                                          *(long **)(lVar4 + 0x78) = plVar2;
                                          return plVar2;
                                        }
                                        plVar2 = (long *)func_0x00f78af4();
                                        return plVar2;
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
code_r0x0159c014:
  auVar12 = func_0x00f78af4();
  lVar10 = auVar12._0_8_;
  lVar4 = lVar3;
  lVar9 = lVar8;
  if ((bRam0000000003eb51c1 & 1) == 0) {
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55168);
    bRam0000000003eb51c1 = 1;
  }
  *(long *)(lVar10 + 0x80) = auVar12._8_8_;
  *(long *)(lVar10 + 0xa0) = lVar3;
  if (lVar8 != 0) {
    uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d550b8);
    *(undefined8 *)(lVar10 + 0x78) = uVar7;
    uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d55148);
    *(undefined8 *)(lVar10 + 0x88) = uVar7;
    uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d55168);
    *(undefined8 *)(lVar10 + 0x90) = uVar7;
    plVar2 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d550b0);
    *(long **)(lVar10 + 0x98) = plVar2;
    return plVar2;
  }
  auVar12 = func_0x00f78af4();
  uVar7 = auVar12._8_8_;
  lVar3 = auVar12._0_8_;
  if ((bRam0000000003eb51ca & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55068);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d57120);
    func_0x00f78a20(0x3d57128);
    func_0x00f78a20(0x3d57130);
    func_0x00f78a20(0x3d5d958);
    func_0x00f78a20(0x3d5d960);
    func_0x00f78a20(0x3d5d968);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51ca = 1;
  }
  if (param_5 != 0) {
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b8);
    *(undefined8 *)(lVar3 + 0x88) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55148);
    *(undefined8 *)(lVar3 + 0x90) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(lVar3 + 0x98) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b0);
    *(undefined8 *)(lVar3 + 0xa0) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55150);
    *(undefined8 *)(lVar3 + 0xd0) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55188);
    *(undefined8 *)(lVar3 + 0xa8) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55068);
    *(undefined8 *)(lVar3 + 0xb0) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55090);
    *(undefined8 *)(lVar3 + 0x78) = uVar7;
    *(undefined8 *)(lVar3 + 0xb8) = uVar6;
    *(long *)(lVar3 + 0xc0) = lVar4;
    lVar4 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar4,0);
    *(long *)(lVar3 + 200) = lVar4;
    if (lVar4 != 0) {
      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar4,2,0);
      if (*(long *)(lVar3 + 200) != 0) {
        /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 200),(long *)(lVar3 + 0xd8),uRam0000000003d5d958);
        if (*(long *)(lVar3 + 200) != 0) {
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 200),lVar3 + 0xe0,uRam0000000003d5d968);
          if (*(long *)(lVar3 + 200) != 0) {
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 200),(long *)(lVar3 + 0xe8),uRam0000000003d5d960);
            lVar4 = *(long *)(lVar3 + 0xd8);
            if (lVar4 != 0) {
              /*Atlas.Contexts.OutroSequenceBeginRoundCompleteState$$Init*/ func_0x014b48cc(lVar4,uVar7,lVar9,0);
              lVar4 = *(long *)(lVar3 + 0xd8);
              uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar6,lVar3,uRam0000000003d57130,0);
              if (lVar4 != 0) {
                /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar4,uVar6,0);
                if ((*(long *)(lVar3 + 0xd0) != 0) && (*(long *)(lVar3 + 0xe0) != 0)) {
                  /*Atlas.Contexts.OutroSequenceShowPlacementsState$$Init*/ func_0x014b5468(*(long *)(lVar3 + 0xe0),uVar7,
                                  *(undefined1 *)(*(long *)(lVar3 + 0xd0) + 0x50),0);
                  lVar4 = *(long *)(lVar3 + 0xe8);
                  if (lVar4 != 0) {
                    /*Atlas.Contexts.OutroSequenceEndGameState$$Init*/ func_0x014b4ba8(lVar4,param_5,uVar7,0);
                    if (((*(long *)(lVar3 + 0xd0) != 0) &&
                        (lVar4 = *(long *)(*(long *)(lVar3 + 0xd0) + 0x20), lVar4 != 0)) &&
                       (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
                      uVar6 = *(undefined8 *)(lVar4 + 0x20);
                      uVar7 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
                      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar7,lVar3,uRam0000000003d57120,uRam0000000003d2a1d8);
                      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar7,0);
                      if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
                      goto code_r0x0159c53c;
                      *(long **)(lVar4 + 0x20) = plVar2;
                      if ((*(long *)(lVar3 + 0xd0) != 0) &&
                         ((lVar4 = *(long *)(*(long *)(lVar3 + 0xd0) + 0x20), lVar4 != 0 &&
                          (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)))) {
                        uVar6 = *(undefined8 *)(lVar4 + 0x68);
                        uVar7 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar7,lVar3,uRam0000000003d57128,uRam0000000003d29f28);
                        plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar7,0);
                        if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                          *(long **)(lVar4 + 0x68) = plVar2;
                          return plVar2;
                        }
                        goto code_r0x0159c53c;
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
  func_0x00f78af4();
code_r0x0159c53c:
  lVar3 = func_0x00f78e5c();
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 != 0) {
    plVar2 = (long *)/*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar4,0);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(long *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    return plVar2;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  plVar2 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  /*Atlas.Contexts.GameContextBase.<InitPools>d__164$$.ctor*/ func_0x015501d4(plVar2,0,0);
  if (plVar2 != (long *)0x0) {
    plVar2[4] = lVar3;
    return plVar2;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar3 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x98),uRam0000000003d5b978);
    lVar3 = *(long *)(lVar3 + 0xb0);
    if (lVar3 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar3,uRam0000000003d5fee0);
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined8 *)(lVar3 + 0x58) = 0;
      if (*(long *)(lVar3 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar3 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar3 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar3 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar3 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar3 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar3 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar3 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar3 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar3 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar3 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar3 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar3 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar3 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar3 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar3 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar3 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar3 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar3 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar3 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar3 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar3 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar3 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar3 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar3 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar3 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar3 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar3 + 0x18) != 0) {
                                                  plVar2 = (long *)/*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar3 +
                                                                                            0x18),
                                                                                                                                                                      
                                                  /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar3 + 0x30) = 0;
                                                  return plVar2;
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
      lVar3 = func_0x00f78af4();
      plVar2 = (long *)Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((plVar2 != (long *)0x0) && (*(long *)(lVar3 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar3 + 0x60),plVar2,0);
      }
      return plVar2;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  plVar2 = (long *)func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  lVar3 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(lVar3,0,uRam0000000003d5b928,uRam0000000003d35b00);
  plVar2[9] = lVar3;
  return plVar2;
}



// ============================================================
// RVA: 0x159b6ac | Atlas.Contexts.GameContextBase.DeInitFollowCam
// ============================================================

/* WARNING: Possible PIC construction at 0x0159b870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159b920) */
/* WARNING: Removing unreachable block (ram,0x0159b938) */
/* WARNING: Removing unreachable block (ram,0x0159b94c) */
/* WARNING: Removing unreachable block (ram,0x0159b96c) */
/* WARNING: Removing unreachable block (ram,0x0159b974) */
/* WARNING: Removing unreachable block (ram,0x0159b978) */
/* WARNING: Removing unreachable block (ram,0x0159b97c) */
/* WARNING: Removing unreachable block (ram,0x0159b9c0) */
/* WARNING: Removing unreachable block (ram,0x0159b9d8) */
/* WARNING: Removing unreachable block (ram,0x0159b9f8) */
/* WARNING: Removing unreachable block (ram,0x0159ba00) */
/* WARNING: Removing unreachable block (ram,0x0159ba04) */
/* WARNING: Removing unreachable block (ram,0x0159ba18) */
/* WARNING: Removing unreachable block (ram,0x0159ba1c) */
/* WARNING: Removing unreachable block (ram,0x0159ba5c) */
/* WARNING: Removing unreachable block (ram,0x0159ba68) */
/* WARNING: Removing unreachable block (ram,0x0159ba70) */
/* WARNING: Removing unreachable block (ram,0x0159ba78) */
/* WARNING: Removing unreachable block (ram,0x0159ba34) */
/* WARNING: Removing unreachable block (ram,0x0159ba40) */
/* WARNING: Removing unreachable block (ram,0x0159ba48) */
/* WARNING: Removing unreachable block (ram,0x0159ba50) */
/* WARNING: Removing unreachable block (ram,0x0159ba80) */
/* WARNING: Removing unreachable block (ram,0x0159ba88) */
/* WARNING: Removing unreachable block (ram,0x0159bb34) */
/* WARNING: Removing unreachable block (ram,0x0159bb54) */
/* WARNING: Removing unreachable block (ram,0x0159bb9c) */
/* WARNING: Removing unreachable block (ram,0x0159bba4) */
/* WARNING: Removing unreachable block (ram,0x0159bba8) */
/* WARNING: Removing unreachable block (ram,0x0159bbac) */
/* WARNING: Removing unreachable block (ram,0x0159bab0) */
/* WARNING: Removing unreachable block (ram,0x0159bad0) */
/* WARNING: Removing unreachable block (ram,0x0159bb14) */
/* WARNING: Removing unreachable block (ram,0x0159bb1c) */
/* WARNING: Removing unreachable block (ram,0x0159bb20) */
/* WARNING: Removing unreachable block (ram,0x0159bb24) */
/* WARNING: Removing unreachable block (ram,0x0159bbb8) */
/* WARNING: Removing unreachable block (ram,0x0159b8c8) */
/* WARNING: Removing unreachable block (ram,0x0159b8ec) */
/* WARNING: Removing unreachable block (ram,0x0159b904) */
/* WARNING: Removing unreachable block (ram,0x0159b874) */
/* WARNING: Removing unreachable block (ram,0x0159b898) */
/* WARNING: Removing unreachable block (ram,0x0159b8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

long * Atlas_Contexts_GameContextBase__DeInitFollowCam
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar2 = (long *)Atlas_Gameplay_Kart_KartFollowCamera__DeInit(*(long *)(param_1 + 0x138),0);
    *(undefined8 *)(param_1 + 0x138) = 0;
    return plVar2;
  }
  auVar12 = func_0x00f78af4();
  lVar7 = auVar12._0_8_;
  if ((bRam0000000003eb51b3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d570c8);
    func_0x00f78a20(0x3d57098);
    func_0x00f78a20(0x3d570a8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d918);
    func_0x00f78a20(0x3d5d920);
    func_0x00f78a20(0x3d5d928);
    func_0x00f78a20(0x3d24d40);
    func_0x00f78a20(0x3d27788);
    func_0x00f78a20(0x3d27770);
    func_0x00f78a20(0x3d27780);
    func_0x00f78a20(0x3d276b0);
    bRam0000000003eb51b3 = 1;
  }
  lVar3 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
  /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar3,0);
  *(long *)(lVar7 + 0x20) = lVar3;
  if (lVar3 == 0) {
code_r0x0159bbf0:
    auVar13 = func_0x00f78af4();
    auVar12._8_8_ = param_3;
    auVar12._0_8_ = auVar13._8_8_;
    lVar3 = auVar13._0_8_;
  }
  else {
    param_3 = 0;
    /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar3,2);
    if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x0159bbf0;
    param_3 = uRam0000000003d5d920;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 0x20),lVar7 + 0x28);
    if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x0159bbf0;
    param_3 = uRam0000000003d5d918;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 0x20),lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x0159bbf0;
    param_3 = uRam0000000003d5d928;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 0x20),lVar7 + 0x38);
    lVar3 = *(long *)(lVar7 + 0x28);
    if (lVar3 == 0) goto code_r0x0159bbf0;
    param_4 = *(long *)(lVar7 + 0x58);
  }
  lVar10 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  lVar7 = lVar10;
  lVar8 = param_4;
  if ((bRam0000000003eb51c3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d57100);
    func_0x00f78a20(0x3d57108);
    func_0x00f78a20(0x3d57110);
    func_0x00f78a20(0x3d57118);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d930);
    func_0x00f78a20(0x3d5d938);
    func_0x00f78a20(0x3d5d940);
    func_0x00f78a20(0x3d5d948);
    func_0x00f78a20(0x3d5d950);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51c3 = 1;
  }
  *(long *)(lVar3 + 0x78) = lVar9;
  if (param_4 != 0) {
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d550b8);
    *(undefined8 *)(lVar3 + 0x80) = uVar4;
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
       (lVar9 = *(long *)(*(long *)(lVar9 + 0x140) + 0x10), lVar9 != 0)) {
      *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar9 + 0x30);
      lVar9 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
      /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar9,0);
      *(long *)(lVar3 + 0x90) = lVar9;
      if (lVar9 != 0) {
        lVar7 = 0;
        /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar9,2);
        if (*(long *)(lVar3 + 0x90) != 0) {
          lVar7 = lRam0000000003d5d940;
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x90),(long *)(lVar3 + 0x98));
          if (*(long *)(lVar3 + 0x90) != 0) {
            lVar7 = lRam0000000003d5d948;
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x90),lVar3 + 0xa0);
            if (*(long *)(lVar3 + 0x90) != 0) {
              lVar7 = lRam0000000003d5d950;
              /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x90),(long *)(lVar3 + 0xa8));
              if (*(long *)(lVar3 + 0x90) != 0) {
                lVar7 = lRam0000000003d5d930;
                /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x90),lVar3 + 0xb0);
                if (*(long *)(lVar3 + 0x90) != 0) {
                  lVar7 = lRam0000000003d5d938;
                  /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar3 + 0x90),(long *)(lVar3 + 0xb8));
                  lVar9 = *(long *)(lVar3 + 0x98);
                  if (lVar9 != 0) {
                    /*Atlas.Contexts.IntroSequenceMapPanState$$Init*/ func_0x015b9044(lVar9,*(undefined8 *)(lVar3 + 0x78),param_4,0);
                    lVar9 = *(long *)(lVar3 + 0x98);
                    uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    lVar8 = 0;
                    lVar7 = lRam0000000003d57110;
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar3);
                    if (lVar9 != 0) {
                      lVar7 = 0;
                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar4);
                      lVar9 = *(long *)(lVar3 + 0x78);
                      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x130) != 0)) &&
                         (lVar5 = *(long *)(*(long *)(lVar9 + 0x130) + 0x48), lVar5 != 0)) {
                        lVar11 = *(long *)(lVar3 + 0xa0);
                        uVar4 = *(undefined8 *)(lVar9 + 0x140);
                        lVar9 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject
                                          (lVar5,0);
                        if (lVar9 != 0) {
                          uVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0);
                          if ((*(long *)(lVar3 + 0x78) != 0) && (lVar11 != 0)) {
                            param_5 = *(long *)(*(long *)(lVar3 + 0x78) + 0x208);
                            /*Atlas.Contexts.IntroSequencePlayerPanState$$Init*/ func_0x015b9828(lVar11,uVar4,uVar6,param_4,param_5,0);
                            lVar9 = *(long *)(lVar3 + 0xa0);
                            uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            lVar8 = 0;
                            lVar7 = lRam0000000003d57118;
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar3);
                            if (lVar9 != 0) {
                              lVar7 = 0;
                              /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar4);
                              lVar9 = *(long *)(lVar3 + 0xa8);
                              if (lVar9 != 0) {
                                /*Atlas.Contexts.IntroSequenceWaitingState$$Init*/ func_0x015b9b84(lVar9,param_4,0);
                                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                lVar7 = 0;
                                iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0);
                                if (iVar1 == 0) {
code_r0x0159bf40:
                                  lVar9 = *(long *)(lVar3 + 0xa8);
                                  uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar7 = lRam0000000003d57100;
                                }
                                else {
                                  if (lVar10 == 0) goto code_r0x0159c014;
                                  if (*(char *)(lVar10 + 0x11c) == '\0') goto code_r0x0159bf40;
                                  lVar9 = *(long *)(lVar3 + 0xa8);
                                  uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar7 = lRam0000000003d57108;
                                }
                                lVar8 = 0;
                                /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar3);
                                if (lVar9 != 0) {
                                  lVar7 = 0;
                                  /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar4);
                                  lVar9 = *(long *)(lVar3 + 0x78);
                                  if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
                                      (lVar10 = *(long *)(*(long *)(lVar9 + 0x140) + 0x10),
                                      lVar10 != 0)) && (*(long *)(lVar3 + 0xb0) != 0)) {
                                    param_5 = 0;
                                    /*Atlas.Contexts.IntroSequenceCountdownState$$Init*/ func_0x015b8a2c((char)*(undefined4 *)(lVar10 + 0x50),
                                                    *(long *)(lVar3 + 0xb0),param_4,
                                                    *(undefined8 *)(lVar9 + 0x130),
                                                    *(undefined8 *)(lVar9 + 0x208));
                                    lVar9 = *(long *)(lVar3 + 0xb0);
                                    uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                    lVar8 = 0;
                                    lVar7 = lRam0000000003d57108;
                                    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar3);
                                    if (lVar9 != 0) {
                                      lVar7 = 0;
                                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar4);
                                      lVar3 = *(long *)(lVar3 + 0xb8);
                                      if (lVar3 != 0) {
                                        if ((bRam0000000003eb52a5 & 1) == 0) {
                                          func_0x00f78a20(0x3d55148,param_4,0);
                                          bRam0000000003eb52a5 = 1;
                                        }
                                        if (param_4 != 0) {
                                          plVar2 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,
                                                  uRam0000000003d55148);
                                          *(long **)(lVar3 + 0x78) = plVar2;
                                          return plVar2;
                                        }
                                        plVar2 = (long *)func_0x00f78af4();
                                        return plVar2;
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
code_r0x0159c014:
  auVar12 = func_0x00f78af4();
  lVar10 = auVar12._0_8_;
  lVar3 = lVar7;
  lVar9 = lVar8;
  if ((bRam0000000003eb51c1 & 1) == 0) {
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55168);
    bRam0000000003eb51c1 = 1;
  }
  *(long *)(lVar10 + 0x80) = auVar12._8_8_;
  *(long *)(lVar10 + 0xa0) = lVar7;
  if (lVar8 != 0) {
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d550b8);
    *(undefined8 *)(lVar10 + 0x78) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d55148);
    *(undefined8 *)(lVar10 + 0x88) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d55168);
    *(undefined8 *)(lVar10 + 0x90) = uVar4;
    plVar2 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d550b0);
    *(long **)(lVar10 + 0x98) = plVar2;
    return plVar2;
  }
  auVar12 = func_0x00f78af4();
  uVar4 = auVar12._8_8_;
  lVar7 = auVar12._0_8_;
  if ((bRam0000000003eb51ca & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55068);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d57120);
    func_0x00f78a20(0x3d57128);
    func_0x00f78a20(0x3d57130);
    func_0x00f78a20(0x3d5d958);
    func_0x00f78a20(0x3d5d960);
    func_0x00f78a20(0x3d5d968);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51ca = 1;
  }
  if (param_5 != 0) {
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b8);
    *(undefined8 *)(lVar7 + 0x88) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55148);
    *(undefined8 *)(lVar7 + 0x90) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(lVar7 + 0x98) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b0);
    *(undefined8 *)(lVar7 + 0xa0) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55150);
    *(undefined8 *)(lVar7 + 0xd0) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55188);
    *(undefined8 *)(lVar7 + 0xa8) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55068);
    *(undefined8 *)(lVar7 + 0xb0) = uVar6;
    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55090);
    *(undefined8 *)(lVar7 + 0x78) = uVar4;
    *(undefined8 *)(lVar7 + 0xb8) = uVar6;
    *(long *)(lVar7 + 0xc0) = lVar3;
    lVar3 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar3,0);
    *(long *)(lVar7 + 200) = lVar3;
    if (lVar3 != 0) {
      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar3,2,0);
      if (*(long *)(lVar7 + 200) != 0) {
        /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 200),(long *)(lVar7 + 0xd8),uRam0000000003d5d958);
        if (*(long *)(lVar7 + 200) != 0) {
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 200),lVar7 + 0xe0,uRam0000000003d5d968);
          if (*(long *)(lVar7 + 200) != 0) {
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 200),(long *)(lVar7 + 0xe8),uRam0000000003d5d960);
            lVar3 = *(long *)(lVar7 + 0xd8);
            if (lVar3 != 0) {
              /*Atlas.Contexts.OutroSequenceBeginRoundCompleteState$$Init*/ func_0x014b48cc(lVar3,uVar4,lVar9,0);
              lVar3 = *(long *)(lVar7 + 0xd8);
              uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar6,lVar7,uRam0000000003d57130,0);
              if (lVar3 != 0) {
                /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar3,uVar6,0);
                if ((*(long *)(lVar7 + 0xd0) != 0) && (*(long *)(lVar7 + 0xe0) != 0)) {
                  /*Atlas.Contexts.OutroSequenceShowPlacementsState$$Init*/ func_0x014b5468(*(long *)(lVar7 + 0xe0),uVar4,
                                  *(undefined1 *)(*(long *)(lVar7 + 0xd0) + 0x50),0);
                  lVar3 = *(long *)(lVar7 + 0xe8);
                  if (lVar3 != 0) {
                    /*Atlas.Contexts.OutroSequenceEndGameState$$Init*/ func_0x014b4ba8(lVar3,param_5,uVar4,0);
                    if (((*(long *)(lVar7 + 0xd0) != 0) &&
                        (lVar3 = *(long *)(*(long *)(lVar7 + 0xd0) + 0x20), lVar3 != 0)) &&
                       (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
                      uVar6 = *(undefined8 *)(lVar3 + 0x20);
                      uVar4 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
                      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar4,lVar7,uRam0000000003d57120,uRam0000000003d2a1d8);
                      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar4,0);
                      if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
                      goto code_r0x0159c53c;
                      *(long **)(lVar3 + 0x20) = plVar2;
                      if ((*(long *)(lVar7 + 0xd0) != 0) &&
                         ((lVar3 = *(long *)(*(long *)(lVar7 + 0xd0) + 0x20), lVar3 != 0 &&
                          (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)))) {
                        uVar6 = *(undefined8 *)(lVar3 + 0x68);
                        uVar4 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,lVar7,uRam0000000003d57128,uRam0000000003d29f28);
                        plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar4,0);
                        if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                          *(long **)(lVar3 + 0x68) = plVar2;
                          return plVar2;
                        }
                        goto code_r0x0159c53c;
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
  func_0x00f78af4();
code_r0x0159c53c:
  lVar7 = func_0x00f78e5c();
  lVar3 = *(long *)(lVar7 + 0x20);
  if (lVar3 != 0) {
    plVar2 = (long *)/*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar3,0);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(long *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    return plVar2;
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  plVar2 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  /*Atlas.Contexts.GameContextBase.<InitPools>d__164$$.ctor*/ func_0x015501d4(plVar2,0,0);
  if (plVar2 != (long *)0x0) {
    plVar2[4] = lVar7;
    return plVar2;
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar7 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x98),uRam0000000003d5b978);
    lVar7 = *(long *)(lVar7 + 0xb0);
    if (lVar7 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fee0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar7 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar7 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar7 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar7 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar7 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar7 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar7 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar7 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar7 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar7 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar7 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar7 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar7 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar7 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar7 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar7 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar7 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar7 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar7 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar7 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar7 + 0x18) != 0) {
                                                  plVar2 = (long *)/*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 +
                                                                                            0x18),
                                                                                                                                                                      
                                                  /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar7 + 0x30) = 0;
                                                  return plVar2;
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
      lVar7 = func_0x00f78af4();
      plVar2 = (long *)Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((plVar2 != (long *)0x0) && (*(long *)(lVar7 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar7 + 0x60),plVar2,0);
      }
      return plVar2;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  plVar2 = (long *)func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  lVar7 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(lVar7,0,uRam0000000003d5b928,uRam0000000003d35b00);
  plVar2[9] = lVar7;
  return plVar2;
}



// ============================================================
// RVA: 0x159b6e0 | Atlas.Contexts.GameContextBase.InitStates
// ============================================================

/* WARNING: Possible PIC construction at 0x0159b870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159b91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159b920) */
/* WARNING: Removing unreachable block (ram,0x0159b938) */
/* WARNING: Removing unreachable block (ram,0x0159b94c) */
/* WARNING: Removing unreachable block (ram,0x0159b96c) */
/* WARNING: Removing unreachable block (ram,0x0159b974) */
/* WARNING: Removing unreachable block (ram,0x0159b978) */
/* WARNING: Removing unreachable block (ram,0x0159b97c) */
/* WARNING: Removing unreachable block (ram,0x0159b9c0) */
/* WARNING: Removing unreachable block (ram,0x0159b9d8) */
/* WARNING: Removing unreachable block (ram,0x0159b9f8) */
/* WARNING: Removing unreachable block (ram,0x0159ba00) */
/* WARNING: Removing unreachable block (ram,0x0159ba04) */
/* WARNING: Removing unreachable block (ram,0x0159ba18) */
/* WARNING: Removing unreachable block (ram,0x0159ba1c) */
/* WARNING: Removing unreachable block (ram,0x0159ba5c) */
/* WARNING: Removing unreachable block (ram,0x0159ba68) */
/* WARNING: Removing unreachable block (ram,0x0159ba70) */
/* WARNING: Removing unreachable block (ram,0x0159ba78) */
/* WARNING: Removing unreachable block (ram,0x0159ba34) */
/* WARNING: Removing unreachable block (ram,0x0159ba40) */
/* WARNING: Removing unreachable block (ram,0x0159ba48) */
/* WARNING: Removing unreachable block (ram,0x0159ba50) */
/* WARNING: Removing unreachable block (ram,0x0159ba80) */
/* WARNING: Removing unreachable block (ram,0x0159ba88) */
/* WARNING: Removing unreachable block (ram,0x0159bb34) */
/* WARNING: Removing unreachable block (ram,0x0159bb54) */
/* WARNING: Removing unreachable block (ram,0x0159bb9c) */
/* WARNING: Removing unreachable block (ram,0x0159bba4) */
/* WARNING: Removing unreachable block (ram,0x0159bba8) */
/* WARNING: Removing unreachable block (ram,0x0159bbac) */
/* WARNING: Removing unreachable block (ram,0x0159bab0) */
/* WARNING: Removing unreachable block (ram,0x0159bad0) */
/* WARNING: Removing unreachable block (ram,0x0159bb14) */
/* WARNING: Removing unreachable block (ram,0x0159bb1c) */
/* WARNING: Removing unreachable block (ram,0x0159bb20) */
/* WARNING: Removing unreachable block (ram,0x0159bb24) */
/* WARNING: Removing unreachable block (ram,0x0159bbb8) */
/* WARNING: Removing unreachable block (ram,0x0159b8c8) */
/* WARNING: Removing unreachable block (ram,0x0159b8ec) */
/* WARNING: Removing unreachable block (ram,0x0159b904) */
/* WARNING: Removing unreachable block (ram,0x0159b874) */
/* WARNING: Removing unreachable block (ram,0x0159b898) */
/* WARNING: Removing unreachable block (ram,0x0159b8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

long * Atlas_Contexts_GameContextBase__InitStates
                 (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb51b3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d570c8);
    func_0x00f78a20(0x3d57098);
    func_0x00f78a20(0x3d570a8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d918);
    func_0x00f78a20(0x3d5d920);
    func_0x00f78a20(0x3d5d928);
    func_0x00f78a20(0x3d24d40);
    func_0x00f78a20(0x3d27788);
    func_0x00f78a20(0x3d27770);
    func_0x00f78a20(0x3d27780);
    func_0x00f78a20(0x3d276b0);
    bRam0000000003eb51b3 = 1;
  }
  lVar2 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
  /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar2,0);
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 == 0) {
LAB_0159bbf0:
    param_2 = param_3;
    auVar11 = func_0x00f78af4();
    param_1 = auVar11._8_8_;
    lVar2 = auVar11._0_8_;
  }
  else {
    param_3 = 0;
    /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar2,2);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0159bbf0;
    param_3 = lRam0000000003d5d920;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x20),param_1 + 0x28);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0159bbf0;
    param_3 = lRam0000000003d5d918;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x20),param_1 + 0x30);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0159bbf0;
    param_3 = lRam0000000003d5d928;
    /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x20),param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_0159bbf0;
    param_4 = *(long *)(param_1 + 0x58);
  }
  lVar7 = param_2;
  lVar8 = param_4;
  if ((bRam0000000003eb51c3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d57100);
    func_0x00f78a20(0x3d57108);
    func_0x00f78a20(0x3d57110);
    func_0x00f78a20(0x3d57118);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d930);
    func_0x00f78a20(0x3d5d938);
    func_0x00f78a20(0x3d5d940);
    func_0x00f78a20(0x3d5d948);
    func_0x00f78a20(0x3d5d950);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51c3 = 1;
  }
  *(long *)(lVar2 + 0x78) = param_1;
  if (param_4 != 0) {
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d550b8);
    *(undefined8 *)(lVar2 + 0x80) = uVar3;
    if (((param_1 != 0) && (*(long *)(param_1 + 0x140) != 0)) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x140) + 0x10), lVar9 != 0)) {
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar9 + 0x30);
      lVar9 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
      /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar9,0);
      *(long *)(lVar2 + 0x90) = lVar9;
      if (lVar9 != 0) {
        lVar7 = 0;
        /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar9,2);
        if (*(long *)(lVar2 + 0x90) != 0) {
          lVar7 = lRam0000000003d5d940;
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar2 + 0x90),(long *)(lVar2 + 0x98));
          if (*(long *)(lVar2 + 0x90) != 0) {
            lVar7 = lRam0000000003d5d948;
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar2 + 0x90),lVar2 + 0xa0);
            if (*(long *)(lVar2 + 0x90) != 0) {
              lVar7 = lRam0000000003d5d950;
              /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar2 + 0x90),(long *)(lVar2 + 0xa8));
              if (*(long *)(lVar2 + 0x90) != 0) {
                lVar7 = lRam0000000003d5d930;
                /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar2 + 0x90),lVar2 + 0xb0);
                if (*(long *)(lVar2 + 0x90) != 0) {
                  lVar7 = lRam0000000003d5d938;
                  /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar2 + 0x90),(long *)(lVar2 + 0xb8));
                  lVar9 = *(long *)(lVar2 + 0x98);
                  if (lVar9 != 0) {
                    /*Atlas.Contexts.IntroSequenceMapPanState$$Init*/ func_0x015b9044(lVar9,*(undefined8 *)(lVar2 + 0x78),param_4,0);
                    lVar9 = *(long *)(lVar2 + 0x98);
                    uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    lVar8 = 0;
                    lVar7 = lRam0000000003d57110;
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar2);
                    if (lVar9 != 0) {
                      lVar7 = 0;
                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar3);
                      lVar9 = *(long *)(lVar2 + 0x78);
                      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x130) != 0)) &&
                         (lVar4 = *(long *)(*(long *)(lVar9 + 0x130) + 0x48), lVar4 != 0)) {
                        lVar10 = *(long *)(lVar2 + 0xa0);
                        uVar3 = *(undefined8 *)(lVar9 + 0x140);
                        lVar9 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject
                                          (lVar4,0);
                        if (lVar9 != 0) {
                          uVar5 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0);
                          if ((*(long *)(lVar2 + 0x78) != 0) && (lVar10 != 0)) {
                            param_5 = *(long *)(*(long *)(lVar2 + 0x78) + 0x208);
                            /*Atlas.Contexts.IntroSequencePlayerPanState$$Init*/ func_0x015b9828(lVar10,uVar3,uVar5,param_4,param_5,0);
                            lVar9 = *(long *)(lVar2 + 0xa0);
                            uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            lVar8 = 0;
                            lVar7 = lRam0000000003d57118;
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar2);
                            if (lVar9 != 0) {
                              lVar7 = 0;
                              /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar3);
                              lVar9 = *(long *)(lVar2 + 0xa8);
                              if (lVar9 != 0) {
                                /*Atlas.Contexts.IntroSequenceWaitingState$$Init*/ func_0x015b9b84(lVar9,param_4,0);
                                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                lVar7 = 0;
                                iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0);
                                if (iVar1 == 0) {
code_r0x0159bf40:
                                  lVar9 = *(long *)(lVar2 + 0xa8);
                                  uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar7 = lRam0000000003d57100;
                                }
                                else {
                                  if (param_2 == 0) goto code_r0x0159c014;
                                  if (*(char *)(param_2 + 0x11c) == '\0') goto code_r0x0159bf40;
                                  lVar9 = *(long *)(lVar2 + 0xa8);
                                  uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar7 = lRam0000000003d57108;
                                }
                                lVar8 = 0;
                                /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar2);
                                if (lVar9 != 0) {
                                  lVar7 = 0;
                                  /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar3);
                                  lVar9 = *(long *)(lVar2 + 0x78);
                                  if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
                                      (lVar4 = *(long *)(*(long *)(lVar9 + 0x140) + 0x10),
                                      lVar4 != 0)) && (*(long *)(lVar2 + 0xb0) != 0)) {
                                    param_5 = 0;
                                    /*Atlas.Contexts.IntroSequenceCountdownState$$Init*/ func_0x015b8a2c((char)*(undefined4 *)(lVar4 + 0x50),
                                                    *(long *)(lVar2 + 0xb0),param_4,
                                                    *(undefined8 *)(lVar9 + 0x130),
                                                    *(undefined8 *)(lVar9 + 0x208));
                                    lVar9 = *(long *)(lVar2 + 0xb0);
                                    uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                    lVar8 = 0;
                                    lVar7 = lRam0000000003d57108;
                                    /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar2);
                                    if (lVar9 != 0) {
                                      lVar7 = 0;
                                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar9,uVar3);
                                      lVar2 = *(long *)(lVar2 + 0xb8);
                                      if (lVar2 != 0) {
                                        if ((bRam0000000003eb52a5 & 1) == 0) {
                                          func_0x00f78a20(0x3d55148,param_4,0);
                                          bRam0000000003eb52a5 = 1;
                                        }
                                        if (param_4 != 0) {
                                          plVar6 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,
                                                  uRam0000000003d55148);
                                          *(long **)(lVar2 + 0x78) = plVar6;
                                          return plVar6;
                                        }
                                        plVar6 = (long *)func_0x00f78af4();
                                        return plVar6;
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
code_r0x0159c014:
  auVar11 = func_0x00f78af4();
  lVar4 = auVar11._0_8_;
  lVar2 = lVar7;
  lVar9 = lVar8;
  if ((bRam0000000003eb51c1 & 1) == 0) {
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55168);
    bRam0000000003eb51c1 = 1;
  }
  *(long *)(lVar4 + 0x80) = auVar11._8_8_;
  *(long *)(lVar4 + 0xa0) = lVar7;
  if (lVar8 != 0) {
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d550b8);
    *(undefined8 *)(lVar4 + 0x78) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d55148);
    *(undefined8 *)(lVar4 + 0x88) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d55168);
    *(undefined8 *)(lVar4 + 0x90) = uVar3;
    plVar6 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar8,uRam0000000003d550b0);
    *(long **)(lVar4 + 0x98) = plVar6;
    return plVar6;
  }
  auVar11 = func_0x00f78af4();
  uVar3 = auVar11._8_8_;
  lVar7 = auVar11._0_8_;
  if ((bRam0000000003eb51ca & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55068);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d57120);
    func_0x00f78a20(0x3d57128);
    func_0x00f78a20(0x3d57130);
    func_0x00f78a20(0x3d5d958);
    func_0x00f78a20(0x3d5d960);
    func_0x00f78a20(0x3d5d968);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51ca = 1;
  }
  if (param_5 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b8);
    *(undefined8 *)(lVar7 + 0x88) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55148);
    *(undefined8 *)(lVar7 + 0x90) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(lVar7 + 0x98) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b0);
    *(undefined8 *)(lVar7 + 0xa0) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55150);
    *(undefined8 *)(lVar7 + 0xd0) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55188);
    *(undefined8 *)(lVar7 + 0xa8) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55068);
    *(undefined8 *)(lVar7 + 0xb0) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55090);
    *(undefined8 *)(lVar7 + 0x78) = uVar3;
    *(undefined8 *)(lVar7 + 0xb8) = uVar5;
    *(long *)(lVar7 + 0xc0) = lVar2;
    lVar2 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar2,0);
    *(long *)(lVar7 + 200) = lVar2;
    if (lVar2 != 0) {
      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar2,2,0);
      if (*(long *)(lVar7 + 200) != 0) {
        /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 200),(long *)(lVar7 + 0xd8),uRam0000000003d5d958);
        if (*(long *)(lVar7 + 200) != 0) {
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 200),lVar7 + 0xe0,uRam0000000003d5d968);
          if (*(long *)(lVar7 + 200) != 0) {
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar7 + 200),(long *)(lVar7 + 0xe8),uRam0000000003d5d960);
            lVar2 = *(long *)(lVar7 + 0xd8);
            if (lVar2 != 0) {
              /*Atlas.Contexts.OutroSequenceBeginRoundCompleteState$$Init*/ func_0x014b48cc(lVar2,uVar3,lVar9,0);
              lVar2 = *(long *)(lVar7 + 0xd8);
              uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar5,lVar7,uRam0000000003d57130,0);
              if (lVar2 != 0) {
                /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar2,uVar5,0);
                if ((*(long *)(lVar7 + 0xd0) != 0) && (*(long *)(lVar7 + 0xe0) != 0)) {
                  /*Atlas.Contexts.OutroSequenceShowPlacementsState$$Init*/ func_0x014b5468(*(long *)(lVar7 + 0xe0),uVar3,
                                  *(undefined1 *)(*(long *)(lVar7 + 0xd0) + 0x50),0);
                  lVar2 = *(long *)(lVar7 + 0xe8);
                  if (lVar2 != 0) {
                    /*Atlas.Contexts.OutroSequenceEndGameState$$Init*/ func_0x014b4ba8(lVar2,param_5,uVar3,0);
                    if (((*(long *)(lVar7 + 0xd0) != 0) &&
                        (lVar2 = *(long *)(*(long *)(lVar7 + 0xd0) + 0x20), lVar2 != 0)) &&
                       (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
                      uVar5 = *(undefined8 *)(lVar2 + 0x20);
                      uVar3 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
                      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar3,lVar7,uRam0000000003d57120,uRam0000000003d2a1d8);
                      plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar3,0);
                      if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
                      goto code_r0x0159c53c;
                      *(long **)(lVar2 + 0x20) = plVar6;
                      if ((*(long *)(lVar7 + 0xd0) != 0) &&
                         ((lVar2 = *(long *)(*(long *)(lVar7 + 0xd0) + 0x20), lVar2 != 0 &&
                          (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)))) {
                        uVar5 = *(undefined8 *)(lVar2 + 0x68);
                        uVar3 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,lVar7,uRam0000000003d57128,uRam0000000003d29f28);
                        plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar3,0);
                        if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                          *(long **)(lVar2 + 0x68) = plVar6;
                          return plVar6;
                        }
                        goto code_r0x0159c53c;
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
  func_0x00f78af4();
code_r0x0159c53c:
  lVar2 = func_0x00f78e5c();
  lVar7 = *(long *)(lVar2 + 0x20);
  if (lVar7 != 0) {
    plVar6 = (long *)/*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar7,0);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(long *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    return plVar6;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  plVar6 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  /*Atlas.Contexts.GameContextBase.<InitPools>d__164$$.ctor*/ func_0x015501d4(plVar6,0,0);
  if (plVar6 != (long *)0x0) {
    plVar6[4] = lVar2;
    return plVar6;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar2 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x98),uRam0000000003d5b978);
    lVar2 = *(long *)(lVar2 + 0xb0);
    if (lVar2 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee0);
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar2 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar2 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar2 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar2 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar2 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar2 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar2 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar2 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar2 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar2 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar2 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar2 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar2 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar2 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar2 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar2 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar2 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar2 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar2 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar2 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar2 + 0x18) != 0) {
                                                  plVar6 = (long *)/*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 +
                                                                                            0x18),
                                                                                                                                                                      
                                                  /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar2 + 0x30) = 0;
                                                  return plVar6;
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
      lVar2 = func_0x00f78af4();
      plVar6 = (long *)Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((plVar6 != (long *)0x0) && (*(long *)(lVar2 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar2 + 0x60),plVar6,0);
      }
      return plVar6;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  plVar6 = (long *)func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  lVar2 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(lVar2,0,uRam0000000003d5b928,uRam0000000003d35b00);
  plVar6[9] = lVar2;
  return plVar6;
}



// ============================================================
// RVA: 0x159c540 | Atlas.Contexts.GameContextBase.DeInitStates
// ============================================================

/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

long Atlas_Contexts_GameContextBase__DeInitStates(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar2 = /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar2,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    return lVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  /*Atlas.Contexts.GameContextBase.<InitPools>d__164$$.ctor*/ func_0x015501d4(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar2 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x98),uRam0000000003d5b978);
    lVar2 = *(long *)(lVar2 + 0xb0);
    if (lVar2 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee0);
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar2 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar2 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar2 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar2 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar2 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar2 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar2 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar2 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar2 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar2 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar2 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar2 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar2 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar2 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar2 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar2 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar2 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar2 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar2 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar2 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar2 + 0x18) != 0) {
                                                  lVar1 = /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                          /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,
                                                                          uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar2 + 0x30) = 0;
                                                  return lVar1;
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
      lVar2 = func_0x00f78af4();
      lVar1 = Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((lVar1 != 0) && (*(long *)(lVar2 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar2 + 0x60),lVar1,0);
      }
      return lVar1;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(uVar3,0,uRam0000000003d5b928,uRam0000000003d35b00);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  return lVar2;
}



// ============================================================
// RVA: 0x159c578 | Atlas.Contexts.GameContextBase.InitPools
// ============================================================

/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

long Atlas_Contexts_GameContextBase__InitPools(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  /*Atlas.Contexts.GameContextBase.<InitPools>d__164$$.ctor*/ func_0x015501d4(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar2 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x98),uRam0000000003d5b978);
    lVar2 = *(long *)(lVar2 + 0xb0);
    if (lVar2 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee0);
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar2 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar2 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar2 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar2 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar2 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar2 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar2 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar2 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar2 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar2 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar2 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar2 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar2 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar2 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar2 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar2 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar2 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar2 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar2 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar2 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar2 + 0x18) != 0) {
                                                  lVar1 = /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                          /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,
                                                                          uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar2 + 0x30) = 0;
                                                  return lVar1;
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
      lVar2 = func_0x00f78af4();
      lVar1 = Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((lVar1 != 0) && (*(long *)(lVar2 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar2 + 0x60),lVar1,0);
      }
      return lVar1;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(uVar3,0,uRam0000000003d5b928,uRam0000000003d35b00);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  return lVar2;
}



// ============================================================
// RVA: 0x159c5ec | Atlas.Contexts.GameContextBase.DeInitPools
// ============================================================

/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

long Atlas_Contexts_GameContextBase__DeInitPools(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x98),uRam0000000003d5b978);
    lVar2 = *(long *)(param_1 + 0xb0);
    if (lVar2 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee0);
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar2 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar2 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar2 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar2 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar2 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar2 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar2 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar2 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar2 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar2 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar2 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar2 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar2 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar2 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar2 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar2 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar2 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar2 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar2 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar2 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar2 + 0x18) != 0) {
                                                  lVar1 = /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                          /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,
                                                                          uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar2 + 0x30) = 0;
                                                  return lVar1;
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
      lVar2 = func_0x00f78af4();
      lVar1 = Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((lVar1 != 0) && (*(long *)(lVar2 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar2 + 0x60),lVar1,0);
      }
      return lVar1;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(uVar3,0,uRam0000000003d5b928,uRam0000000003d35b00);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  return lVar2;
}



// ============================================================
// RVA: 0x159c650 | Atlas.Contexts.GameContextBase.InitAtlasPlayers
// ============================================================

/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

undefined1  [16] Atlas_Contexts_GameContextBase__InitAtlasPlayers(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  auVar2._0_8_ = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(uVar1,0,uRam0000000003d5b928,uRam0000000003d35b00);
  *(undefined8 *)(auVar2._0_8_ + 0x48) = uVar1;
  auVar2._8_8_ = 0;
  return auVar2;
}



// ============================================================
// RVA: 0x159d368 | Atlas.Contexts.GameContextBase.DeInitAtlasPlayers
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Contexts_GameContextBase__DeInitAtlasPlayers(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar18 = 0x3d27718;
  uVar19 = 0x3d570f0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  lVar15 = *(long *)(param_1 + 0x40);
  uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar21._8_8_ = uVar3;
  auVar21._0_8_ = lVar15;
  uVar11 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar3,param_1,uRam0000000003d570f0,0);
  if (lVar15 == 0) {
    puVar20 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar21 = func_0x00f78af4();
  }
  else {
    uVar19 = 0x3d27000;
    puVar20 = (undefined *)0x159d470;
  }
  uVar7 = auVar21._8_8_;
  uStack_80 = uVar3;
  lStack_78 = lVar15;
  uStack_70 = param_2;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar20;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar14 = (long *)(auVar21._0_8_ + 0x80);
  lVar15 = *plVar14;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar15,uVar7,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar5 = func_0x00ff0f44(plVar14,plVar4,lVar15);
    bVar1 = lVar15 == lVar5;
    lVar15 = lVar5;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar4);
  uVar3 = auVar21._8_8_;
  uStack_b0 = 0x3d27718;
  puStack_88 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_a8 = lVar15;
  plStack_a0 = plVar14;
  uStack_98 = uVar7;
  ppuStack_90 = &puStack_60;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar14 = (long *)(auVar21._0_8_ + 0x88);
  lVar15 = *plVar14;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar15,uVar3,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar5 = func_0x00ff0f44(plVar14,plVar4,lVar15);
    bVar1 = lVar15 == lVar5;
    lVar15 = lVar5;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar4);
  uVar7 = auVar21._8_8_;
  uStack_e0 = 0x3d27700;
  puStack_b8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_d8 = lVar15;
  plStack_d0 = plVar14;
  uStack_c8 = uVar3;
  pppuStack_c0 = &ppuStack_90;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar14 = (long *)(auVar21._0_8_ + 0xa8);
  lVar15 = *plVar14;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar15,uVar7,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar5 = func_0x00ff0f44(plVar14,plVar4,lVar15);
    bVar1 = lVar15 == lVar5;
    lVar15 = lVar5;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar4);
  uVar3 = auVar21._8_8_;
  uStack_110 = 0x3d27738;
  puStack_e8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_108 = lVar15;
  plStack_100 = plVar14;
  uStack_f8 = uVar7;
  pppuStack_f0 = &pppuStack_c0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar14 = (long *)(auVar21._0_8_ + 0xa0);
  lVar15 = *plVar14;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar15,uVar3,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar5 = func_0x00ff0f44(plVar14,plVar4,lVar15);
    bVar1 = lVar15 == lVar5;
    lVar15 = lVar5;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar4);
  uStack_140 = 0x3d27730;
  puStack_118 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_138 = lVar15;
  plStack_130 = plVar14;
  uStack_128 = uVar3;
  pppuStack_120 = &pppuStack_f0;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar14 = (long *)0x3d27728;
  plVar4 = (long *)(auVar21._0_8_ + 0x98);
  lVar15 = *plVar4;
  while( true ) {
    puVar9 = (undefined8 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar15,auVar21._8_8_);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar5 = func_0x00ff0f44(plVar4,plVar6,lVar15);
    bVar1 = lVar15 == lVar5;
    lVar15 = lVar5;
    if (bVar1) {
      return;
    }
  }
  lVar15 = func_0x00f78e5c(plVar6);
  puStack_148 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar5 = 0x3eb5000;
  pppuStack_150 = &pppuStack_120;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar16 = *(long *)(lVar15 + 0x28);
  if (lVar16 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar3 = uVar19;
code_r0x0159db80:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  else {
    plVar14 = (long *)(lVar15 + 0x10);
    uVar12 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar12) {
      uVar18 = 0;
      uVar19 = 0x3d43378;
      do {
        uVar17 = (uint)uVar18;
        uVar3 = uVar19;
        if (uVar12 <= uVar17) goto code_r0x0159db80;
        if (*plVar14 == 0) goto code_r0x0159db7c;
        lVar5 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        puVar9 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar14,lVar5);
        if (lVar5 == 0) goto code_r0x0159db7c;
        /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar5);
        uVar18 = (ulong)(uVar17 + 1);
        uVar12 = *(uint *)(lVar16 + 0x18);
      } while ((int)(uVar17 + 1) < (int)uVar12);
    }
    if (((*(long *)(lVar15 + 0x20) == 0) ||
        (lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + 0x20), lVar13 == 0)) ||
       (uVar18 = *(ulong *)(lVar13 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
    uVar3 = 0x3d1b4e8;
    uVar19 = 0x3d1b4e8;
    lVar5 = *(long *)(uVar18 + 0x18);
    lVar16 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar11 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar16,lVar15,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar9 = (undefined8 *)0x0;
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,lVar16);
    if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(uVar18 + 0x18) = plVar4;
      if ((*(long *)(lVar15 + 0x20) == 0) ||
         ((lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + 0x20), lVar13 == 0 ||
          (uVar18 = *(ulong *)(lVar13 + 0x10), uVar18 == 0)))) goto code_r0x0159db7c;
      uVar3 = 0x3d1b3b0;
      uVar19 = 0x3d1b3b0;
      lVar5 = *(long *)(uVar18 + 0x70);
      lVar16 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar11 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar15,uRam0000000003d57240,uRam0000000003d29f28);
      puVar9 = (undefined8 *)0x0;
      plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,lVar16);
      if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(uVar18 + 0x70) = plVar4;
        if (((*(long *)(lVar15 + 0x20) == 0) ||
            (lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + 0x20), lVar13 == 0)) ||
           (uVar18 = *(ulong *)(lVar13 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
        uVar3 = 0x3d1b4e0;
        lVar5 = *(long *)(uVar18 + 0x28);
        lVar16 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar11 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar15,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar9 = (undefined8 *)0x0;
        plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,lVar16);
        if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(uVar18 + 0x28) = plVar4;
          *(undefined1 *)(lVar15 + 0x50) = 0;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          *plVar14 = 0;
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined8 *)(lVar15 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar21 = func_0x00f78e5c();
  puVar8 = auVar21._8_8_;
  plVar4 = auVar21._0_8_;
  puStack_198 = &Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar10 = puVar9;
  uStack_1d0 = uVar3;
  uStack_1c8 = uVar18;
  plStack_1c0 = plVar14;
  lStack_1b8 = lVar16;
  lStack_1b0 = lVar5;
  lStack_1a8 = lVar15;
  pppuStack_1a0 = &pppuStack_150;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar4[3] != 0) &&
      (puVar10 = puVar9, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar4[3],puVar8,puVar9,uVar11,0),
      puVar9 != (undefined8 *)0x0)) && (lVar15 = puVar9[2], lVar15 != 0)) {
    uStack_1e8 = *(undefined8 *)(lVar15 + 0x50);
    uStack_1f0 = *(undefined8 *)(lVar15 + 0x48);
    uStack_1d8 = *(undefined8 *)(lVar15 + 0x60);
    uStack_1e0 = *(undefined8 *)(lVar15 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_1f0,0);
    if ((iVar2 == 0) || (puVar9 == puVar8)) {
      return;
    }
    iVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
    if ((plVar4[0x18] != 0) && (lVar15 = *(long *)(plVar4[0x18] + 0x20), lVar15 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_208,lVar15,0);
      *(int *)(puVar9 + 0xf) = *(int *)(puVar9 + 0xf) + iVar2;
      puVar9[0x11] = uStack_200;
      puVar9[0x10] = uStack_208;
      puVar9[0x12] = uStack_1f8;
      if (puVar9[2] != 0) {
        if (*(int *)(puVar9[2] + 0x50) == 0) {
          uVar19 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
          puVar10 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar19,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar4[3] == 0) goto code_r0x0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar4[3],*(undefined4 *)(puVar9 + 0xf),0);
          }
        }
        if (plVar4[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar4[0x46],puVar8,puVar9,uVar11,0);
        return;
      }
    }
  }
code_r0x0159dcf8:
  auVar22 = func_0x00f78af4();
  lVar15 = auVar22._0_8_;
  uVar3 = puVar10[1];
  uVar11 = *puVar10;
  uVar19 = puVar10[2];
  *(int *)(lVar15 + 0x78) = *(int *)(lVar15 + 0x78) + auVar22._8_4_;
  *(undefined8 *)(lVar15 + 0x88) = uVar3;
  *(undefined8 *)(lVar15 + 0x80) = uVar11;
  *(undefined8 *)(lVar15 + 0x90) = uVar19;
  return;
}



// ============================================================
// RVA: 0x159db90 | Atlas.Contexts.GameContextBase.HandleUsableHitPlayer
// ============================================================

void Atlas_Contexts_GameContextBase__HandleUsableHitPlayer
               (long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = param_3;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((param_1[3] != 0) &&
      (puVar3 = param_3, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(param_1[3],param_2,param_3,param_4,0),
      param_3 != (undefined8 *)0x0)) && (lVar4 = param_3[2], lVar4 != 0)) {
    uStack_58 = *(undefined8 *)(lVar4 + 0x50);
    uStack_60 = *(undefined8 *)(lVar4 + 0x48);
    uStack_48 = *(undefined8 *)(lVar4 + 0x60);
    uStack_50 = *(undefined8 *)(lVar4 + 0x58);
    iVar1 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_60,0);
    if ((iVar1 == 0) || (param_3 == param_2)) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
    if ((param_1[0x18] != 0) && (lVar4 = *(long *)(param_1[0x18] + 0x20), lVar4 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_78,lVar4,0);
      *(int *)(param_3 + 0xf) = *(int *)(param_3 + 0xf) + iVar1;
      param_3[0x11] = uStack_70;
      param_3[0x10] = uStack_78;
      param_3[0x12] = uStack_68;
      if (param_3[2] != 0) {
        if (*(int *)(param_3[2] + 0x50) == 0) {
          uVar2 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
          puVar3 = (undefined8 *)0x0;
          iVar1 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar2,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar1 != 0) {
            if (param_1[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(param_1[3],*(undefined4 *)(param_3 + 0xf),0);
          }
        }
        if (param_1[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(param_1[0x46],param_2,param_3,param_4,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar7 = func_0x00f78af4();
  lVar4 = auVar7._0_8_;
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  uVar2 = puVar3[2];
  *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + auVar7._8_4_;
  *(undefined8 *)(lVar4 + 0x88) = uVar6;
  *(undefined8 *)(lVar4 + 0x80) = uVar5;
  *(undefined8 *)(lVar4 + 0x90) = uVar2;
  return;
}



// ============================================================
// RVA: 0x159dd50 | Atlas.Contexts.GameContextBase.OnQuitFromPause
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159e098: Changing call to branch */

long * Atlas_Contexts_GameContextBase__OnQuitFromPause(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  
  lVar11 = 0x3eb5000;
  if ((bRam0000000003eb51b9 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27628);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb51b9 = 1;
  }
  *(undefined1 *)(param_1 + 0x24a) = 1;
  lVar4 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  /*Atlas.FrontEnd.FrontEndContextInfo$$.ctor*/ func_0x0158b6fc(lVar4,0);
  if (((lVar4 != 0) && (lVar8 = *(long *)(param_1 + 0x1c0), lVar8 != 0)) &&
     (lVar9 = *(long *)(lVar4 + 0x10), lVar9 != 0)) {
    uVar10 = *(undefined8 *)(lVar8 + 0x38);
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar8 + 0x18);
    uVar12 = *(undefined8 *)(lVar8 + 0x80);
    uVar10 = *(undefined8 *)(lVar8 + 0x78);
    uVar14 = *(undefined8 *)(lVar8 + 0x90);
    uVar13 = *(undefined8 *)(lVar8 + 0x88);
    uVar15 = *(undefined8 *)(lVar8 + 0x98);
    uVar17 = *(undefined8 *)(lVar8 + 0xb0);
    uVar16 = *(undefined8 *)(lVar8 + 0xa8);
    *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(lVar8 + 0xa0);
    *(undefined8 *)(lVar9 + 0x50) = uVar15;
    *(undefined8 *)(lVar9 + 0x68) = uVar17;
    *(undefined8 *)(lVar9 + 0x60) = uVar16;
    *(undefined8 *)(lVar9 + 0x38) = uVar12;
    *(undefined8 *)(lVar9 + 0x30) = uVar10;
    *(undefined8 *)(lVar9 + 0x48) = uVar14;
    *(undefined8 *)(lVar9 + 0x40) = uVar13;
    if ((*(long *)(param_1 + 0x1c0) != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x28) =
           *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 200);
      lVar11 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
      /*Atlas.FrontEnd.SinglePlayerEventResults$$.ctor*/ func_0x014f709c(lVar11,0);
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x14) = 0;
        *(undefined1 *)(lVar11 + 0x10) = *(undefined1 *)(param_1 + 0x24a);
        if (*(long *)(param_1 + 0x1c0) != 0) {
          *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x40);
          if ((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0x1c0) != 0)) {
            unaff_x22 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
            uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x40);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
            if ((*(long *)(lVar4 + 0x10) != 0) && (unaff_x22 != 0)) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(unaff_x22,uVar10,*(long *)(lVar4 + 0x10) + 0x70,uRam0000000003d57500);
              lVar8 = *(long *)(param_1 + 0x1c0);
              if (lVar8 != 0) {
                iVar3 = *(int *)(lVar8 + 0x18);
                if (iVar3 - 4U < 6) {
                  unaff_x22 = *(long *)(lVar8 + 0x40);
                  uVar12 = *(undefined8 *)(lVar4 + 0x10);
                  uVar10 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                  Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                            (uVar10,unaff_x22,lVar11,0,0,uVar12,0);
                  *(undefined8 *)(lVar4 + 0x20) = uVar10;
                  lVar11 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ lRam0000000003d194e8;
LAB_0159dfcc:
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar11,0);
                  *(undefined8 *)(lVar4 + 0x18) = uVar10;
                }
                else {
                  if (iVar3 - 1U < 2) {
                    uVar10 = *(undefined8 *)(lVar4 + 0x10);
                    unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
                    Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                              (unaff_x22,uVar10,1,0);
                    *(long *)(lVar4 + 0x20) = unaff_x22;
                    lVar11 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ lRam0000000003d194c8;
                    goto LAB_0159dfcc;
                  }
                  if (iVar3 == 3) {
                    uVar12 = *(undefined8 *)(lVar8 + 0x40);
                    unaff_x22 = *(long *)(lVar4 + 0x10);
                    uVar10 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                    Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                              (uVar10,uVar12,0,0,0,unaff_x22,0);
                    *(undefined8 *)(lVar4 + 0x20) = uVar10;
                    lVar11 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ lRam0000000003d194e8;
                    goto LAB_0159dfcc;
                  }
                }
                plVar5 = *(long **)(param_1 + 0x230);
                if (plVar5 != (long *)0x0) goto code_r0x0144dee0;
                lVar8 = *(long *)(param_1 + 0x70);
                uVar10 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                if (lVar8 != 0) goto Core_Contexts_ContextManager__RequestContextChange;
              }
            }
          }
        }
      }
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  plVar5 = (long *)plVar6[0x46];
  if (plVar5 != (long *)0x0) {
code_r0x0144dee0:
    *(undefined1 *)((long)plVar5 + 0x8f) = 1;
    return plVar5;
  }
  *(undefined2 *)((long)plVar6 + 0x24a) = 0x101;
  lVar8 = plVar6[0xe];
  uVar10 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
  if (lVar8 != 0) {
    lVar4 = plVar6[0x38];
Core_Contexts_ContextManager__RequestContextChange:
    cVar2 = *(char *)(lVar8 + 0x50);
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar8 + 0x50) = 1;
      *(undefined8 *)(lVar8 + 0x40) = uVar10;
      *(long *)(lVar8 + 0x48) = lVar4;
    }
    return (long *)(ulong)(cVar2 == '\0');
  }
  plVar7 = (long *)func_0x00f78af4();
  plVar5 = plVar7;
  if ((bRam0000000003eb51bb & 1) == 0) {
    plVar5 = (long *)func_0x00f78a20(0x3d73540);
    bRam0000000003eb51bb = 1;
  }
  lVar4 = plVar7[0x25];
  if (lVar4 == 0) {
    return plVar5;
  }
  if (plVar7[0x1f] == 0) {
    lVar4 = func_0x00f78af4();
    plVar5 = *(long **)(lVar4 + 0x230);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    lStack_c0 = unaff_x22;
    plStack_b8 = (long *)lVar11;
    if ((bRam0000000003eb474b & 1) == 0) {
      func_0x00f78a20(0x3d21270,0);
      bRam0000000003eb474b = 1;
    }
    *(undefined1 *)((long)plVar5 + 0x8c) = 1;
    if (plVar5[8] != 0) {
      uVar10 = *(undefined8 *)(plVar5[8] + 0x48);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar10,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
      if (iVar3 == 0) {
code_r0x0144dec0:
                    /* WARNING: Could not recover jumptable at 0x0144ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        return plVar5;
      }
      if ((plVar5[2] != 0) && (lVar11 = *(long *)(plVar5[2] + 0x1e8), lVar11 != 0)) {
        *(undefined1 *)(lVar11 + 0xa8) = 0;
        if ((plVar5[0xb] != 0) &&
           (((lVar11 = *(long *)(plVar5[0xb] + 0x10), lVar11 != 0 && (plVar5[8] != 0)) &&
            (lVar11 = *(long *)(lVar11 + 0x38), lVar11 != 0)))) {
          Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal
                    (lVar11,*(undefined8 *)(plVar5[8] + 0x48),0);
          goto code_r0x0144dec0;
        }
      }
    }
    plVar5 = (long *)func_0x00f78af4();
    goto code_r0x0144dee0;
  }
  uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar7[0x1f],/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar10,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar11 = lRam0000000003d3f8c0;
  plVar5 = *(long **)(lVar4 + 0x38);
  if ((plVar5 == (long *)0x0) || (5 < (int)plVar5[4])) {
    return plVar5;
  }
  lVar4 = plVar5[2];
  lVar8 = 0;
  if (lVar4 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar3 = (int)plVar5[4];
    plVar6 = plVar5;
    lVar8 = lVar11;
    if (iVar3 == *(int *)(lVar4 + 0x18)) {
      iVar1 = iVar3 + 4;
      if (iVar3 + 4 <= iVar3 * 2) {
        iVar1 = iVar3 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (plVar5,iVar1);
      lVar4 = plVar5[2];
      if (lVar4 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)((long)plVar5 + 0x1c) < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)*(uint *)((long)plVar5 + 0x1c) * 0x10;
      *(undefined8 *)(lVar4 + 0x20) = uVar10;
      *(undefined8 *)(lVar4 + 0x28) = 0x4020000000000000;
      plVar6 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0x20))(plVar5);
      plVar5[4] = CONCAT44((int)((ulong)plVar5[4] >> 0x20) + 1,(int)plVar5[4] + 1);
      return plVar6;
    }
  }
  uVar10 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar10,0);
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_c0 = lVar8;
  plStack_b8 = plVar6;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_e0,auVar18._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar18._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_f8 = uStack_d8;
  uStack_100 = uStack_e0;
  uStack_e8 = uStack_c8;
  uStack_f0 = uStack_d0;
  lVar11 = *(long *)(*(long *)(*(long *)(auVar18._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  plVar5 = (long *)func_0x00f78ae0(lVar11,&uStack_100);
  return plVar5;
}



// ============================================================
// RVA: 0x159e07c | Atlas.Contexts.GameContextBase.OnRestartFromPause
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e098: Changing call to branch */

ulong Atlas_Contexts_GameContextBase__OnRestartFromPause(long *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar4 = param_1[0x46];
  if (uVar4 != 0) {
code_r0x0144dee0:
    *(undefined1 *)(uVar4 + 0x8f) = 1;
    return uVar4;
  }
  *(undefined2 *)((long)param_1 + 0x24a) = 0x101;
  lVar9 = param_1[0xe];
  uVar5 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  if (lVar9 != 0) {
    lVar8 = param_1[0x38];
    cVar2 = *(char *)(lVar9 + 0x50);
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar9 + 0x50) = 1;
      *(undefined8 *)(lVar9 + 0x40) = uVar5;
      *(long *)(lVar9 + 0x48) = lVar8;
    }
    return (ulong)(cVar2 == '\0');
  }
  uVar6 = func_0x00f78af4();
  uVar4 = uVar6;
  if ((bRam0000000003eb51bb & 1) == 0) {
    uVar4 = func_0x00f78a20(0x3d73540);
    bRam0000000003eb51bb = 1;
  }
  lVar9 = *(long *)(uVar6 + 0x128);
  if (lVar9 == 0) {
    return uVar4;
  }
  if (*(long *)(uVar6 + 0xf8) == 0) {
    lVar9 = func_0x00f78af4();
    plVar7 = *(long **)(lVar9 + 0x230);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    if ((bRam0000000003eb474b & 1) == 0) {
      func_0x00f78a20(0x3d21270,0);
      bRam0000000003eb474b = 1;
    }
    *(undefined1 *)((long)plVar7 + 0x8c) = 1;
    if (plVar7[8] != 0) {
      uVar5 = *(undefined8 *)(plVar7[8] + 0x48);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar5,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
      if (iVar3 == 0) {
code_r0x0144dec0:
                    /* WARNING: Could not recover jumptable at 0x0144ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        return uVar4;
      }
      if ((plVar7[2] != 0) && (lVar9 = *(long *)(plVar7[2] + 0x1e8), lVar9 != 0)) {
        *(undefined1 *)(lVar9 + 0xa8) = 0;
        if ((plVar7[0xb] != 0) &&
           (((lVar9 = *(long *)(plVar7[0xb] + 0x10), lVar9 != 0 && (plVar7[8] != 0)) &&
            (lVar9 = *(long *)(lVar9 + 0x38), lVar9 != 0)))) {
          Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal
                    (lVar9,*(undefined8 *)(plVar7[8] + 0x48),0);
          goto code_r0x0144dec0;
        }
      }
    }
    uVar4 = func_0x00f78af4();
    goto code_r0x0144dee0;
  }
  uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(uVar6 + 0xf8),/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar5,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar8 = lRam0000000003d3f8c0;
  uVar4 = *(ulong *)(lVar9 + 0x38);
  if ((uVar4 == 0) || (5 < *(int *)(uVar4 + 0x20))) {
    return uVar4;
  }
  lVar9 = *(long *)(uVar4 + 0x10);
  if (lVar9 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar3 = *(int *)(uVar4 + 0x20);
    if (iVar3 == *(int *)(lVar9 + 0x18)) {
      iVar1 = iVar3 + 4;
      if (iVar3 + 4 <= iVar3 * 2) {
        iVar1 = iVar3 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (uVar4,iVar1);
      lVar9 = *(long *)(uVar4 + 0x10);
      if (lVar9 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)(uVar4 + 0x1c) < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)*(uint *)(uVar4 + 0x1c) * 0x10;
      *(undefined8 *)(lVar9 + 0x20) = uVar5;
      *(undefined8 *)(lVar9 + 0x28) = 0x4020000000000000;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x20))(uVar4);
      *(ulong *)(uVar4 + 0x20) =
           CONCAT44((int)((ulong)*(undefined8 *)(uVar4 + 0x20) >> 0x20) + 1,
                    (int)*(undefined8 *)(uVar4 + 0x20) + 1);
      return uVar6;
    }
  }
  uVar5 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar5,0);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_90,auVar10._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar10._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_a8 = uStack_88;
  uStack_b0 = uStack_90;
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  lVar9 = *(long *)(*(long *)(*(long *)(auVar10._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  uVar4 = func_0x00f78ae0(lVar9,&uStack_b0);
  return uVar4;
}



// ============================================================
// RVA: 0x159e0e0 | Atlas.Contexts.GameContextBase.OnPartyInviteReceived
// ============================================================

void Atlas_Contexts_GameContextBase__OnPartyInviteReceived(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb51bb & 1) == 0) {
    func_0x00f78a20(0x3d73540);
    bRam0000000003eb51bb = 1;
  }
  lVar7 = *(long *)(param_1 + 0x128);
  if (lVar7 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    lVar7 = func_0x00f78af4();
    plVar5 = *(long **)(lVar7 + 0x230);
    if (plVar5 == (long *)0x0) {
      return;
    }
    if ((bRam0000000003eb474b & 1) == 0) {
      func_0x00f78a20(0x3d21270,0);
      bRam0000000003eb474b = 1;
    }
    *(undefined1 *)((long)plVar5 + 0x8c) = 1;
    if (plVar5[8] != 0) {
      uVar4 = *(undefined8 *)(plVar5[8] + 0x48);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar4,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
      if (iVar3 == 0) {
code_r0x0144dec0:
                    /* WARNING: Could not recover jumptable at 0x0144ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        return;
      }
      if ((plVar5[2] != 0) && (lVar7 = *(long *)(plVar5[2] + 0x1e8), lVar7 != 0)) {
        *(undefined1 *)(lVar7 + 0xa8) = 0;
        if ((plVar5[0xb] != 0) &&
           (((lVar7 = *(long *)(plVar5[0xb] + 0x10), lVar7 != 0 && (plVar5[8] != 0)) &&
            (lVar7 = *(long *)(lVar7 + 0x38), lVar7 != 0)))) {
          Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal
                    (lVar7,*(undefined8 *)(plVar5[8] + 0x48),0);
          goto code_r0x0144dec0;
        }
      }
    }
    lVar7 = func_0x00f78af4();
    *(undefined1 *)(lVar7 + 0x8f) = 1;
    return;
  }
  uVar4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0xf8),/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar4,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar2 = lRam0000000003d3f8c0;
  lVar7 = *(long *)(lVar7 + 0x38);
  if ((lVar7 == 0) || (5 < *(int *)(lVar7 + 0x20))) {
    return;
  }
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar3 = *(int *)(lVar7 + 0x20);
    if (iVar3 == *(int *)(lVar6 + 0x18)) {
      iVar1 = iVar3 + 4;
      if (iVar3 + 4 <= iVar3 * 2) {
        iVar1 = iVar3 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (lVar7,iVar1);
      lVar6 = *(long *)(lVar7 + 0x10);
      if (lVar6 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)(lVar7 + 0x1c) < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)*(uint *)(lVar7 + 0x1c) * 0x10;
      *(undefined8 *)(lVar6 + 0x20) = uVar4;
      *(undefined8 *)(lVar6 + 0x28) = 0x4020000000000000;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x20))(lVar7);
      *(ulong *)(lVar7 + 0x20) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar7 + 0x20) + 1);
      return;
    }
  }
  uVar4 = func_0x00f78b24();
  auVar8 = func_0x00f78ac0(uVar4,0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_70,auVar8._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar8._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  lVar7 = *(long *)(*(long *)(*(long *)(auVar8._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  func_0x00f78ae0(lVar7,&uStack_90);
  return;
}



// ============================================================
// RVA: 0x159e164 | Atlas.Contexts.GameContextBase.InProgressStateStartFirstUpdate
// ============================================================

void Atlas_Contexts_GameContextBase__InProgressStateStartFirstUpdate(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x230);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if ((bRam0000000003eb474b & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb474b = 1;
  }
  *(undefined1 *)((long)plVar2 + 0x8c) = 1;
  if (plVar2[8] != 0) {
    uVar4 = *(undefined8 *)(plVar2[8] + 0x48);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar4,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
    if (iVar1 == 0) {
code_r0x0144dec0:
                    /* WARNING: Could not recover jumptable at 0x0144ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      return;
    }
    if ((plVar2[2] != 0) && (lVar3 = *(long *)(plVar2[2] + 0x1e8), lVar3 != 0)) {
      *(undefined1 *)(lVar3 + 0xa8) = 0;
      if ((plVar2[0xb] != 0) &&
         (((lVar3 = *(long *)(plVar2[0xb] + 0x10), lVar3 != 0 && (plVar2[8] != 0)) &&
          (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)))) {
        Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal
                  (lVar3,*(undefined8 *)(plVar2[8] + 0x48),0);
        goto code_r0x0144dec0;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  *(undefined1 *)(lVar3 + 0x8f) = 1;
  return;
}



// ============================================================
// RVA: 0x159e178 | Atlas.Contexts.GameContextBase.InitArcade
// ============================================================

void Atlas_Contexts_GameContextBase__InitArcade(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + 0x1c0) != 0) {
    lVar3 = /*Atlas.Arcade.ArcadeEvent$$InstantiateEvent*/ func_0x0144e0ec(*(undefined4 *)(*(long *)(param_1 + 0x1c0) + 0x18),0);
    *(long *)(param_1 + 0x230) = lVar3;
    if (lVar3 != 0) {
      if ((*(long *)(param_1 + 0x1c0) == 0) || (*(long *)(param_1 + 0xc0) == 0)) goto LAB_0159e1ec;
      /*Atlas.Arcade.ArcadeEvent$$Init*/ func_0x0144cf20(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x38),param_1,
                      *(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x20),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x158),
                      *(undefined8 *)(param_1 + 0x18));
    }
    return;
  }
LAB_0159e1ec:
  auVar7 = func_0x00f78af4();
  lVar3 = auVar7._0_8_;
  lVar4 = *(long *)(lVar3 + 0x230);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x50);
    uVar5 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar4,0);
    if (lVar6 != 0) {
      iVar2 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar6,uVar5,0);
      iVar1 = 4 - iVar2;
      if (2 < iVar2 - 1U) {
        iVar1 = 4;
      }
      *auVar7._8_8_ = iVar1;
      if (*(long *)(lVar3 + 0x230) != 0) {
        /*Atlas.Arcade.ArcadeEvent$$DeInit*/ func_0x0144d28c(*(long *)(lVar3 + 0x230),0);
        *(undefined8 *)(lVar3 + 0x230) = 0;
        return;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  lVar4 = *(long *)(lVar3 + 0x230);
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    uVar5 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0();
    lVar3 = *(long *)(lVar3 + 0x38);
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0xf0) = 1;
      return;
    }
    auVar7 = func_0x00f78af4();
    lVar3 = *auVar7._0_8_;
                    /* WARNING: Could not recover jumptable at 0x0144d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x1a8))(auVar7._0_8_,auVar7._8_8_,*(undefined8 *)(lVar3 + 0x1b0));
    return;
  }
  lVar3 = func_0x00f78af4();
  if (*(long **)(lVar3 + 0x230) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar3 + 0x230) + 0x1f8))();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x159e1f0 | Atlas.Contexts.GameContextBase.DeInitArcade
// ============================================================

void Atlas_Contexts_GameContextBase__DeInitArcade(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)(param_1 + 0x230);
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x50);
    uVar4 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar3,0);
    if (lVar5 != 0) {
      iVar2 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar5,uVar4,0);
      iVar1 = 4 - iVar2;
      if (2 < iVar2 - 1U) {
        iVar1 = 4;
      }
      *param_2 = iVar1;
      if (*(long *)(param_1 + 0x230) != 0) {
        /*Atlas.Arcade.ArcadeEvent$$DeInit*/ func_0x0144d28c(*(long *)(param_1 + 0x230),0);
        *(undefined8 *)(param_1 + 0x230) = 0;
        return;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  lVar5 = *(long *)(lVar3 + 0x230);
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    uVar4 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0();
    lVar3 = *(long *)(lVar3 + 0x38);
    *(undefined8 *)(lVar5 + 0x58) = uVar4;
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0xf0) = 1;
      return;
    }
    auVar6 = func_0x00f78af4();
    lVar3 = *auVar6._0_8_;
                    /* WARNING: Could not recover jumptable at 0x0144d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x1a8))(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(lVar3 + 0x1b0));
    return;
  }
  lVar3 = func_0x00f78af4();
  if (*(long **)(lVar3 + 0x230) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar3 + 0x230) + 0x1f8))();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x159e270 | Atlas.Contexts.GameContextBase.PostInitArcade
// ============================================================

void Atlas_Contexts_GameContextBase__PostInitArcade(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(param_1 + 0x230);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0();
    lVar2 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(lVar3 + 0x58) = uVar1;
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xf0) = 1;
      return;
    }
    auVar4 = func_0x00f78af4();
    lVar3 = *auVar4._0_8_;
                    /* WARNING: Could not recover jumptable at 0x0144d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x1a8))(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(lVar3 + 0x1b0));
    return;
  }
  lVar3 = func_0x00f78af4();
  if (*(long **)(lVar3 + 0x230) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar3 + 0x230) + 0x1f8))();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x159e2c0 | Atlas.Contexts.GameContextBase.OnUsableUsed
// ============================================================

void Atlas_Contexts_GameContextBase__OnUsableUsed(long param_1)

{
  if (*(long **)(param_1 + 0x230) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x230) + 0x1f8))();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x159e2d4 | Atlas.Contexts.GameContextBase.SetupGameContextScreen
// ============================================================

void Atlas_Contexts_GameContextBase__SetupGameContextScreen(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



// ============================================================
// RVA: 0x159e2dc | Atlas.Contexts.GameContextBase.PostSetupGameContextScreen
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__PostSetupGameContextScreen
          (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  
  plVar5 = *(long **)(param_3 + 0x230);
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  if ((bRam0000000003eb474c & 1) == 0) {
    func_0x00f78a20(0x3d578e0,param_4,param_5,0);
    bRam0000000003eb474c = 1;
  }
  plVar5[0xc] = param_4;
  plVar5[0xd] = param_5;
  if (param_4 != 0) {
    /*Atlas.UI.Screens.GameInProgressScreen$$SetEnabledHUDElement*/ func_0x015aa56c(param_4,9,1,0);
    /*Atlas.UI.Screens.GameInProgressScreen$$SetEnabledHUDElement*/ func_0x015aa56c(param_4,7,0,0);
    /*Atlas.UI.Screens.GameInProgressScreen$$SetEnabledHUDElement*/ func_0x015aa56c(param_4,8,0,0);
    /*Atlas.UI.Screens.GameInProgressScreen$$SetEnabledHUDElement*/ func_0x015aa56c(param_4,2,1,0);
    *(undefined1 *)(param_4 + 0x108) = 0;
    if (((param_5 != 0) && (*(long *)(param_5 + 0x88) != 0)) &&
       (lVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_5 + 0x88),uRam0000000003d578e0), lVar2 != 0)) {
      uVar6 = /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar2,0);
      iVar1 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      if (iVar1 == 7) {
        if ((*(long *)(param_5 + 0x288) == 0) || (*(long *)(param_5 + 0x80) == 0))
        goto code_r0x0144e0b4;
        /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_5 + 0x80),*(undefined8 *)(*(long *)(param_5 + 0x288) + 0x90)
                        ,0);
        if (*(long *)(param_5 + 0x288) == 0) goto code_r0x0144e0b4;
        uVar6 = *(undefined4 *)(*(long *)(param_5 + 0x288) + 0xb4);
      }
      else {
        iVar1 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (iVar1 == 8) {
          if ((*(long *)(param_5 + 0x288) == 0) || (*(long *)(param_5 + 0x80) == 0))
          goto code_r0x0144e0b4;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_5 + 0x80),
                          *(undefined8 *)(*(long *)(param_5 + 0x288) + 0x98),0);
          if (*(long *)(param_5 + 0x288) == 0) goto code_r0x0144e0b4;
          uVar6 = *(undefined4 *)(*(long *)(param_5 + 0x288) + 0xb0);
        }
      }
      /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(uVar6,param_2,lVar2,0);
      if ((*(long *)(param_5 + 0x288) != 0) &&
         (plVar3 = *(long **)(*(long *)(param_5 + 0x288) + 0x18), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0144e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x558))(plVar3,plVar5[0xf],*(undefined8 *)(*plVar3 + 0x560));
        return uVar4;
      }
    }
  }
code_r0x0144e0b4:
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x159e2f0 | Atlas.Contexts.GameContextBase..ctor
// ============================================================

void Atlas_Contexts_GameContextBase___ctor(long param_1)

{
  *(undefined1 *)(param_1 + 0x249) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// ============================================================
// RVA: 0x159e300 | Atlas.Contexts.GameContextBase..cctor
// ============================================================

void Atlas_Contexts_GameContextBase___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb51bc & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d6d1d0);
    func_0x00f78a20(0x3d6cba8);
    func_0x00f78a20(0x3d6d1d8);
    func_0x00f78a20(0x3d6d1c8);
    bRam0000000003eb51bc = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_3_SinglePlayerProgress_1')*/ uRam0000000003d6cba8,0);
  **(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('GameContextBase.OnUpdateContext()')*/ uRam0000000003d6d1d8,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('GameContextBase.OnFixedUpdateContext()')*/ uRam0000000003d6d1c8,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('GameContextBase.OnLateUpdateContext()')*/ uRam0000000003d6d1d0,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x159e450 | Atlas.Contexts.GameContextBase.<>n__0
// ============================================================

undefined8
Atlas_Contexts_GameContextBase____n__0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4815 & 1) == 0) {
    func_0x00f78a20(0x3d26a10,param_2,param_3,0);
    bRam0000000003eb4815 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Contexts.AtlasContext.<OnInit>d__5_TypeInfo*/ uRam0000000003d26a10);
  Atlas_Contexts_AtlasContext__OnInit_d__5___ctor(uVar1,0,0);
  return uVar1;
}



// ============================================================
// RVA: 0x159e458 | Atlas.Contexts.GameContextBase.<>n__1
// ============================================================

undefined8
Atlas_Contexts_GameContextBase____n__1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4816 & 1) == 0) {
    func_0x00f78a20(0x3d26a18,param_2,param_3,0);
    bRam0000000003eb4816 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Contexts.AtlasContext.<OnPostInit>d__6_TypeInfo*/ uRam0000000003d26a18);
  Atlas_Contexts_AtlasContext__OnPostInit_d__6___ctor(uVar1,0,0);
  return uVar1;
}



// ============================================================
// RVA: 0x159e460 | Atlas.Contexts.GameContextBase.<>n__2
// ============================================================

undefined8 Atlas_Contexts_GameContextBase____n__2(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4817 & 1) == 0) {
    func_0x00f78a20(0x3d26a08,0);
    bRam0000000003eb4817 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Contexts.AtlasContext.<OnDeInit>d__11_TypeInfo*/ uRam0000000003d26a08);
  Atlas_Contexts_AtlasContext__OnDeInit_d__11___ctor(uVar1,0,0);
  return uVar1;
}



// ============================================================
// RVA: 0x185c020 | Atlas.Contexts.GameContextBase.GetGameModeState<GameContextBaseInProgressState>
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__GetGameModeState_GameContextBaseInProgressState_
          (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x30))(*(long *)(param_1 + 0x20),&uStack_18);
    return uStack_18;
  }
  auVar2 = func_0x00f78af4();
  if (*(long *)(auVar2._0_8_ + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185c074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(auVar2._8_8_ + 0x30))();
    return uVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x185c020 | Atlas.Contexts.GameContextBase.GetGameModeState<object>
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__GetGameModeState_GameContextBaseInProgressState_
          (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x30))(*(long *)(param_1 + 0x20),&uStack_18);
    return uStack_18;
  }
  auVar2 = func_0x00f78af4();
  if (*(long *)(auVar2._0_8_ + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185c074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(auVar2._8_8_ + 0x30))();
    return uVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x185c060 | Atlas.Contexts.GameContextBase.IsActiveState<GameContextBaseInProgressState>
// ============================================================

void Atlas_Contexts_GameContextBase__IsActiveState_GameContextBaseInProgressState_
               (long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185c074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_2 + 0x30))();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x185c060 | Atlas.Contexts.GameContextBase.IsActiveState<object>
// ============================================================

void Atlas_Contexts_GameContextBase__IsActiveState_GameContextBaseInProgressState_
               (long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185c074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_2 + 0x30))();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x185c07c | Atlas.Contexts.GameContextBase.ReturnSpawnedObject<PortalVFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c07c | Atlas.Contexts.GameContextBase.ReturnSpawnedObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c0b0 | Atlas.Contexts.GameContextBase.SetGameModeState<GameContextBaseInProgressState>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c0b0 | Atlas.Contexts.GameContextBase.SetGameModeState<GameContextBaseIntroState>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c0b0 | Atlas.Contexts.GameContextBase.SetGameModeState<GameContextBaseOutroState>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c0b0 | Atlas.Contexts.GameContextBase.SetGameModeState<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c0e0 | Atlas.Contexts.GameContextBase.SpawnObject<PortalVFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c0e0 | Atlas.Contexts.GameContextBase.SpawnObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c108 | Atlas.Contexts.GameContextBase.SpawnTimedObject<PortalVFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c108 | Atlas.Contexts.GameContextBase.SpawnTimedObject<VFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x185c108 | Atlas.Contexts.GameContextBase.SpawnTimedObject<object>
// ============================================================
// [DECOMPILE_FAILED]

