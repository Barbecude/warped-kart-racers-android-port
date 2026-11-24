// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.OutroSequenceEndGameState

// ============================================================
// RVA: 0x14b4ba8 | Atlas.Contexts.OutroSequenceEndGameState.Init
// ============================================================

void Atlas_Contexts_OutroSequenceEndGameState__Init(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int extraout_w1;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_178;
  long lStack_170;
  float fStack_168;
  undefined4 uStack_164;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  
  if ((bRam0000000003eb4ab1 & 1) == 0) {
    func_0x00f78a20(0x3d55170);
    func_0x00f78a20(0x3d3d588);
    func_0x00f78a20(0x3d3b960);
    func_0x00f78a20(0x3d1e238);
    func_0x00f78a20(0x3d1dcf0);
    bRam0000000003eb4ab1 = 1;
  }
  if (param_2 != 0) {
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55170);
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    *(undefined8 *)(param_1 + 0x80) = param_3;
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>_TypeInfo*/ uRam0000000003d1e238);
    /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$.ctor*/ func_0x0255c538(uVar4,uRam0000000003d3d588);
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour>_TypeInfo*/ uRam0000000003d1dcf0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3b960);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    return;
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4ab2 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3b968);
    func_0x00f78a20(0x3d3d590);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d5ba18);
    bRam0000000003eb4ab2 = 1;
  }
  lStack_e0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_e8 = 0;
  if (((*(long *)(lVar5 + 0x80) != 0) &&
      (lVar11 = *(long *)(*(long *)(lVar5 + 0x80) + 0x130), lVar11 != 0)) &&
     (lVar11 = *(long *)(lVar11 + 0x10), lVar11 != 0)) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_c8,lVar11,uRam0000000003d3ae20);
    lStack_d8 = lStack_c0;
    lStack_e0 = lStack_c8;
    lStack_d0 = lStack_b8;
code_r0x014b4da4:
    do {
      uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_e0,uRam0000000003d328d0);
      lVar11 = lStack_d0;
      if ((uVar6 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_e0,uRam0000000003d328c8);
        return;
      }
      if (lStack_d0 == 0) {
        func_0x00f78af4();
        goto code_r0x014b4f40;
      }
      *(undefined1 *)(lStack_d0 + 0xf0) = 0;
      uVar6 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(lStack_d0,0);
    } while ((uVar6 & 1) != 0);
    if (*(long *)(lVar5 + 0x78) == 0) {
      func_0x00f78af4();
    }
    else {
      uVar6 = /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(lVar5 + 0x78),&lStack_e8,uRam0000000003d5ba18);
      if ((uVar6 & 1) == 0) goto code_r0x014b4da4;
      if (lStack_e8 == 0) {
        func_0x00f78af4();
      }
      else {
        lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_e8,0);
        if (*(long *)(lVar11 + 0x18) == 0) {
          func_0x00f78af4();
        }
        else {
          lVar8 = *(long *)(*(long *)(lVar11 + 0x18) + 0x88);
          if (lVar8 == 0) {
            func_0x00f78af4();
          }
          else {
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
            if (lVar7 == 0) {
              func_0x00f78af4();
            }
            else {
              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar7,0);
              if (lStack_e8 == 0) {
                func_0x00f78af4();
              }
              else {
                lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_e8,0);
                if (*(long *)(lVar11 + 0x18) == 0) {
                  func_0x00f78af4();
                }
                else {
                  lVar8 = *(long *)(*(long *)(lVar11 + 0x18) + 0x88);
                  if (lVar8 == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar8,0);
                    if (lVar7 == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar7,0);
                      if (lStack_e8 == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        /*Atlas.Gameplay.PortalVFXBehaviour$$StartEnteringPortal*/ func_0x014c390c(lStack_e8,*(undefined8 *)(lVar11 + 0x28),0,0);
                        if (*(long *)(lVar5 + 0x88) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          lStack_c8 = lStack_e8;
                          lStack_c0 = lVar11;
                          lStack_b8 = 0x3f000000;
                          /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$Add*/ func_0x0255d264(*(long *)(lVar5 + 0x88),&lStack_c8,uRam0000000003d3d590);
                          if (*(long *)(lVar5 + 0x90) != 0) {
                            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar5 + 0x90),lStack_e8,uRam0000000003d3b968);
                            goto code_r0x014b4da4;
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
        }
      }
    }
code_r0x014b4f40:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x14b4f44);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar5 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_e0,uRam0000000003eb4000);
    if (lVar5 == 0) {
      return;
    }
    func_0x00f78ac0(lVar5,0);
  }
  auVar16 = __Unwind_Resume();
  plVar9 = auVar16._8_8_;
  lVar5 = auVar16._0_8_;
  if ((bRam0000000003eb4ab3 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3d5a0);
    func_0x00f78a20(0x3d3d5a8);
    func_0x00f78a20(0x3d3d5b0);
    func_0x00f78a20(0x3d3d5b8);
    bRam0000000003eb4ab3 = 1;
  }
  lVar11 = *(long *)(lVar5 + 0x88);
  if (lVar11 != 0) {
    uVar2 = *(int *)(lVar11 + 0x18) - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    while( true ) {
      uVar6 = (ulong)uVar2;
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (plVar9 == (long *)0x0) break;
      lVar7 = *(long *)(lVar11 + 0x10) + uVar6 * 0x18;
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      lVar11 = *(long *)(lVar7 + 0x28);
      fVar15 = *(float *)(lVar7 + 0x30);
      uVar1 = *(undefined4 *)(lVar7 + 0x34);
      lVar7 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x014b5100;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b5100:
      fVar14 = (float)(*(code *)*puVar10)(plVar9,puVar10[1]);
      fVar15 = fVar15 - fVar14;
      if (fVar15 <= 0.0) {
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x28) == 0)) break;
        Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive(*(long *)(lVar11 + 0x28),0,0);
        if (*(long *)(lVar5 + 0x88) == 0) break;
        /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$RemoveAt*/ func_0x0255ec70(*(long *)(lVar5 + 0x88),uVar6,uRam0000000003d3d5a0);
      }
      else {
        if (*(long *)(lVar5 + 0x88) == 0) break;
        uStack_178 = uVar4;
        lStack_170 = lVar11;
        fStack_168 = fVar15;
        uStack_164 = uVar1;
        /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$set_Item*/ func_0x0255cedc(*(long *)(lVar5 + 0x88),uVar6,&uStack_178,uRam0000000003d3d5b8);
      }
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar11 = *(long *)(lVar5 + 0x88);
      if (lVar11 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b4ca4 | Atlas.Contexts.OutroSequenceEndGameState.OnEnter
// ============================================================

void Atlas_Contexts_OutroSequenceEndGameState__OnEnter(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int extraout_w1;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x22;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_128;
  long lStack_120;
  float fStack_118;
  undefined4 uStack_114;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4ab2 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3b968);
    func_0x00f78a20(0x3d3d590);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d5ba18);
    bRam0000000003eb4ab2 = 1;
  }
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  if (((*(long *)(param_1 + 0x80) != 0) &&
      (lVar10 = *(long *)(*(long *)(param_1 + 0x80) + 0x130), lVar10 != 0)) &&
     (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_78,lVar10,uRam0000000003d3ae20);
    lStack_88 = lStack_70;
    lStack_90 = lStack_78;
    lStack_80 = lStack_68;
LAB_014b4da4:
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_90,uRam0000000003d328d0);
      lVar10 = lStack_80;
      if ((uVar5 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_90,uRam0000000003d328c8);
        return;
      }
      if (lStack_80 == 0) {
        func_0x00f78af4();
        goto code_r0x014b4f40;
      }
      *(undefined1 *)(lStack_80 + 0xf0) = 0;
      uVar5 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(lStack_80,0);
    } while ((uVar5 & 1) != 0);
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00f78af4();
    }
    else {
      uVar5 = /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x78),&lStack_98,uRam0000000003d5ba18);
      if ((uVar5 & 1) == 0) goto LAB_014b4da4;
      if (lStack_98 == 0) {
        func_0x00f78af4();
      }
      else {
        lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_98,0);
        if (*(long *)(lVar10 + 0x18) == 0) {
          func_0x00f78af4();
        }
        else {
          lVar7 = *(long *)(*(long *)(lVar10 + 0x18) + 0x88);
          if (lVar7 == 0) {
            func_0x00f78af4();
          }
          else {
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
            if (lVar6 == 0) {
              func_0x00f78af4();
            }
            else {
              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar6,0);
              if (lStack_98 == 0) {
                func_0x00f78af4();
              }
              else {
                lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_98,0);
                if (*(long *)(lVar10 + 0x18) == 0) {
                  func_0x00f78af4();
                }
                else {
                  lVar7 = *(long *)(*(long *)(lVar10 + 0x18) + 0x88);
                  if (lVar7 == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar7,0);
                    if (lVar6 == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar6,0);
                      if (lStack_98 == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        /*Atlas.Gameplay.PortalVFXBehaviour$$StartEnteringPortal*/ func_0x014c390c(lStack_98,*(undefined8 *)(lVar10 + 0x28),0,0);
                        if (*(long *)(param_1 + 0x88) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          lStack_78 = lStack_98;
                          lStack_70 = lVar10;
                          lStack_68 = 0x3f000000;
                          /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$Add*/ func_0x0255d264(*(long *)(param_1 + 0x88),&lStack_78,uRam0000000003d3d590)
                          ;
                          if (*(long *)(param_1 + 0x90) != 0) {
                            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x90),lStack_98,uRam0000000003d3b968
                                           );
                            goto LAB_014b4da4;
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
        }
      }
    }
code_r0x014b4f40:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x14b4f44);
    (*pcVar4)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar10 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_90,*unaff_x22);
    if (lVar10 == 0) {
      return;
    }
    func_0x00f78ac0(lVar10,0);
  }
  auVar15 = __Unwind_Resume();
  plVar8 = auVar15._8_8_;
  lVar10 = auVar15._0_8_;
  if ((bRam0000000003eb4ab3 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3d5a0);
    func_0x00f78a20(0x3d3d5a8);
    func_0x00f78a20(0x3d3d5b0);
    func_0x00f78a20(0x3d3d5b8);
    bRam0000000003eb4ab3 = 1;
  }
  lVar6 = *(long *)(lVar10 + 0x88);
  if (lVar6 != 0) {
    uVar3 = *(int *)(lVar6 + 0x18) - 1;
    if ((int)uVar3 < 0) {
      return;
    }
    while( true ) {
      uVar5 = (ulong)uVar3;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (plVar8 == (long *)0x0) break;
      lVar7 = *(long *)(lVar6 + 0x10) + uVar5 * 0x18;
      uVar1 = *(undefined8 *)(lVar7 + 0x20);
      lVar6 = *(long *)(lVar7 + 0x28);
      fVar14 = *(float *)(lVar7 + 0x30);
      uVar2 = *(undefined4 *)(lVar7 + 0x34);
      lVar7 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014b5100;
          }
          piVar12 = piVar12 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b5100:
      fVar13 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
      fVar14 = fVar14 - fVar13;
      if (fVar14 <= 0.0) {
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) break;
        Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive(*(long *)(lVar6 + 0x28),0,0);
        if (*(long *)(lVar10 + 0x88) == 0) break;
        /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$RemoveAt*/ func_0x0255ec70(*(long *)(lVar10 + 0x88),uVar5,uRam0000000003d3d5a0);
      }
      else {
        if (*(long *)(lVar10 + 0x88) == 0) break;
        uStack_128 = uVar1;
        lStack_120 = lVar6;
        fStack_118 = fVar14;
        uStack_114 = uVar2;
        /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$set_Item*/ func_0x0255cedc(*(long *)(lVar10 + 0x88),uVar5,&uStack_128,uRam0000000003d3d5b8);
      }
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return;
      }
      lVar6 = *(long *)(lVar10 + 0x88);
      if (lVar6 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b4fdc | Atlas.Contexts.OutroSequenceEndGameState.OnUpdate
// ============================================================

void Atlas_Contexts_OutroSequenceEndGameState__OnUpdate(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_88;
  long lStack_80;
  float fStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000003eb4ab3 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3d5a0);
    func_0x00f78a20(0x3d3d5a8);
    func_0x00f78a20(0x3d3d5b0);
    func_0x00f78a20(0x3d3d5b8);
    bRam0000000003eb4ab3 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x88);
  if (lVar9 != 0) {
    uVar3 = *(int *)(lVar9 + 0x18) - 1;
    if ((int)uVar3 < 0) {
      return;
    }
    while( true ) {
      uVar8 = (ulong)uVar3;
      if (*(uint *)(lVar9 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_2 == (long *)0x0) break;
      lVar5 = *(long *)(lVar9 + 0x10) + uVar8 * 0x18;
      uVar1 = *(undefined8 *)(lVar5 + 0x20);
      lVar9 = *(long *)(lVar5 + 0x28);
      fVar11 = *(float *)(lVar5 + 0x30);
      uVar2 = *(undefined4 *)(lVar5 + 0x34);
      lVar5 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_014b5100;
          }
          piVar7 = piVar7 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014b5100:
      fVar10 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      fVar11 = fVar11 - fVar10;
      if (fVar11 <= 0.0) {
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) break;
        Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive(*(long *)(lVar9 + 0x28),0,0);
        if (*(long *)(param_1 + 0x88) == 0) break;
        /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$RemoveAt*/ func_0x0255ec70(*(long *)(param_1 + 0x88),uVar8,uRam0000000003d3d5a0);
      }
      else {
        if (*(long *)(param_1 + 0x88) == 0) break;
        uStack_88 = uVar1;
        lStack_80 = lVar9;
        fStack_78 = fVar11;
        uStack_74 = uVar2;
        /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$set_Item*/ func_0x0255cedc(*(long *)(param_1 + 0x88),uVar8,&uStack_88,uRam0000000003d3d5b8);
      }
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x88);
      if (lVar9 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b51a4 | Atlas.Contexts.OutroSequenceEndGameState.OnExit
// ============================================================

void Atlas_Contexts_OutroSequenceEndGameState__OnExit(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4ab4 & 1) == 0) {
    func_0x00f78a20(0x3d32db0);
    func_0x00f78a20(0x3d32db8);
    func_0x00f78a20(0x3d32dc0);
    func_0x00f78a20(0x3d3d598);
    func_0x00f78a20(0x3d3b970);
    func_0x00f78a20(0x3d3b978);
    func_0x00f78a20(0x3d5b9e8);
    bRam0000000003eb4ab4 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_014b52ec;
  unaff_x23 = (undefined8 *)0x3d32db8;
  unaff_x22 = (undefined8 *)0x3d3b970;
  unaff_x21 = (undefined8 *)0x3d3d598;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(param_1 + 0x90),uRam0000000003d3b978);
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d32db8), (uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14b52ec);
      (*pcVar1)();
    }
    /*Core.Containers.PoolManager$$ReturnObject<PortalVFXBehaviour>*/ func_0x018bc980(*(long *)(param_1 + 0x78),uStack_48,uRam0000000003d5b9e8);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32db0);
  do {
    if (*(long *)(param_1 + 0x90) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x90),*unaff_x22);
      if (*(long *)(param_1 + 0x88) != 0) {
        /*System.Collections.Generic.List<OutroSequenceEndGameState.PortalKartPair>$$Clear*/ func_0x0255d59c(*(long *)(param_1 + 0x88),*unaff_x21);
        return;
      }
    }
LAB_014b52ec:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014b532c;
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,*unaff_x23);
  } while (lVar4 == 0);
  func_0x00f78ac0(lVar4,0);
code_r0x014b532c:
  lVar4 = __Unwind_Resume();
  /*Core.StateManagement.State$$OnDeInit*/ func_0x02b951e8(lVar4,0);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x14b5330 | Atlas.Contexts.OutroSequenceEndGameState.OnDeInit
// ============================================================

void Atlas_Contexts_OutroSequenceEndGameState__OnDeInit(long param_1)

{
  /*Core.StateManagement.State$$OnDeInit*/ func_0x02b951e8(param_1,0);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x14b5358 | Atlas.Contexts.OutroSequenceEndGameState..ctor
// ============================================================

void Atlas_Contexts_OutroSequenceEndGameState___ctor(void)

{
  return;
}



