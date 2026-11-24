// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartFollowCamera

// ============================================================
// RVA: 0x15cafe0 | Atlas.Gameplay.Kart.KartFollowCamera.get_FollowTarget
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartFollowCamera__get_FollowTarget(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x15cafe8 | Atlas.Gameplay.Kart.KartFollowCamera.set_FollowTarget
// ============================================================

void Atlas_Gameplay_Kart_KartFollowCamera__set_FollowTarget(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}



// ============================================================
// RVA: 0x15caff0 | Atlas.Gameplay.Kart.KartFollowCamera.get_VirtualFollowCamera
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartFollowCamera__get_VirtualFollowCamera(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15caff8 | Atlas.Gameplay.Kart.KartFollowCamera.get_IsReversing
// ============================================================

/* WARNING: Possible PIC construction at 0x015cb19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cb764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cb1a0) */
/* WARNING: Removing unreachable block (ram,0x015cb1a4) */
/* WARNING: Removing unreachable block (ram,0x015cb1b8) */
/* WARNING: Removing unreachable block (ram,0x015cb768) */
/* WARNING: Removing unreachable block (ram,0x015cb76c) */
/* WARNING: Removing unreachable block (ram,0x015cbae4) */
/* WARNING: Removing unreachable block (ram,0x015cb778) */
/* WARNING: Removing unreachable block (ram,0x015cbaec) */
/* WARNING: Removing unreachable block (ram,0x015cb79c) */
/* WARNING: Removing unreachable block (ram,0x015cb824) */
/* WARNING: Removing unreachable block (ram,0x015cb828) */
/* WARNING: Removing unreachable block (ram,0x015cb82c) */
/* WARNING: Removing unreachable block (ram,0x015cb844) */
/* WARNING: Removing unreachable block (ram,0x015cb968) */
/* WARNING: Removing unreachable block (ram,0x015cb96c) */
/* WARNING: Removing unreachable block (ram,0x015cb970) */
/* WARNING: Removing unreachable block (ram,0x015cb980) */
/* WARNING: Removing unreachable block (ram,0x015cb988) */
/* WARNING: Removing unreachable block (ram,0x015cb9b0) */
/* WARNING: Removing unreachable block (ram,0x015cb994) */
/* WARNING: Removing unreachable block (ram,0x015cb9a0) */
/* WARNING: Removing unreachable block (ram,0x015cb9bc) */
/* WARNING: Removing unreachable block (ram,0x015cb9d0) */
/* WARNING: Removing unreachable block (ram,0x015cb9d4) */
/* WARNING: Removing unreachable block (ram,0x015cb9d8) */
/* WARNING: Removing unreachable block (ram,0x015cb9dc) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 ******ppppppuVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_3c0 [16];
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined1 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined1 ****ppppuStack_80;
  undefined *puStack_78;
  undefined1 ***pppuStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar8 = *(long *)(param_5 + 0x28);
  if (lVar8 != 0) {
    if (0.0 <= *(float *)(lVar8 + 0x1a8)) {
      return 0;
    }
    if (*(long *)(lVar8 + 0x48) != 0) {
      return (ulong)(0.0 < *(float *)(*(long *)(lVar8 + 0x48) + 0x54));
    }
  }
  auVar24 = func_0x00f78af4();
  lVar8 = auVar24._0_8_;
  puStack_18 = &Atlas_Gameplay_Kart_KartFollowCamera__Init;
  *(long *)(lVar8 + 0x10) = auVar24._8_8_;
  if (param_8 != 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    /*Atlas.Gameplay.VirtualCamera$$Init*/ func_0x015282e4(param_8,param_7,0);
    *(long *)(lVar8 + 0x18) = param_8;
    uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_8,0);
    *(ulong *)(lVar8 + 0x20) = uVar4;
    return uVar4;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar8 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_KartFollowCamera__DeInit;
  ppuStack_40 = &puStack_20;
  if (*(long *)(lVar8 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(lVar8 + 0x18),0);
    if (*(long *)(lVar8 + 0x18) != 0) {
      uVar4 = /*Atlas.Gameplay.VirtualCamera$$DeInit*/ func_0x01528338(*(long *)(lVar8 + 0x18),0);
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      return uVar4;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Kart_KartFollowCamera__StartTracking;
  pppuStack_60 = &ppuStack_40;
  if (*(long *)(lVar8 + 0x18) != 0) {
    uVar4 = /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(0xbf800000,*(long *)(lVar8 + 0x18),0,0);
    *(undefined1 *)(lVar8 + 0x38) = 1;
    return uVar4;
  }
  lVar8 = func_0x00f78af4();
  puStack_78 = &Atlas_Gameplay_Kart_KartFollowCamera__StopTracking;
  ppppuStack_80 = &pppuStack_60;
  if (*(long *)(lVar8 + 0x18) != 0) {
    uVar4 = /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(lVar8 + 0x18),0);
    *(undefined1 *)(lVar8 + 0x38) = 0;
    return uVar4;
  }
  auVar24 = func_0x00f78af4();
  lVar5 = auVar24._8_8_;
  lVar8 = auVar24._0_8_;
  puVar2 = &uStack_c0;
  puStack_98 = &Atlas_Gameplay_Kart_KartFollowCamera__SetTarget;
  ppppppuVar12 = &pppppuStack_a0;
  *(long *)(lVar8 + 0x28) = lVar5;
  pppppuStack_a0 = &ppppuStack_80;
  if (*(long *)(lVar8 + 0x20) != 0) {
    uStack_c0 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(*(long *)(lVar8 + 0x20),0);
    uStack_bc = param_2;
    uStack_b8 = param_3;
    uStack_b4 = param_4;
    /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_c0,0);
    *(undefined4 *)(lVar8 + 0xa4) = param_2;
    unaff_x20 = lVar5;
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
      puVar13 = &UNK_015cb1a0;
      goto code_r0x032279f4;
    }
  }
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = lVar8;
  lVar8 = func_0x00f78af4();
  puStack_c8 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
  lVar5 = *(long *)(lVar8 + 0x70);
  ppppppuStack_d0 = ppppppuVar12;
  if (lVar5 != 0) {
    puVar2 = &uStack_c0;
    puVar13 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
code_r0x032279f4:
    *(long *)((long)puVar2 + -0x20) = auVar24._8_8_;
    *(long *)((long)puVar2 + -0x18) = auVar24._0_8_;
    *(undefined1 *******)((long)puVar2 + -0x10) = ppppppuVar12;
    *(undefined **)((long)puVar2 + -8) = puVar13;
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebf190)(lVar5);
    return uVar4;
  }
  auVar24 = func_0x00f78af4();
  plVar7 = auVar24._8_8_;
  lVar8 = auVar24._0_8_;
  puStack_d8 = &Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate;
  ppppppuVar12 = &pppppuStack_e0;
  puVar2 = (undefined4 *)auStack_3c0;
  pppppuStack_e0 = (undefined1 *****)&ppppppuStack_d0;
  if ((bRam0000000003eb532c & 1) == 0) {
    pppppuStack_e0 = (undefined1 *****)&ppppppuStack_d0;
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  auVar24._8_8_ = lVar8;
  auVar24._0_8_ = uVar10;
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
  uVar11 = *(undefined8 *)(lVar8 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
  if ((uVar4 & 1) == 0) {
code_r0x015cb9ec:
    uVar4 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar10,0);
    return uVar4;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar5 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x015cb348;
        }
        piVar9 = piVar9 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015cb348:
    fVar14 = (float)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (fVar14 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto code_r0x015cb9ec;
    lVar5 = *(long *)(lVar8 + 0x28);
    if (lVar5 == 0) {
      func_0x00f78af4();
    }
    else if (*(long *)(lVar5 + 0x40) == 0) {
      func_0x00f78af4();
    }
    else {
      *(float *)(lVar8 + 0xdc) =
           *(float *)(lVar5 + 0x194) / *(float *)(*(long *)(lVar5 + 0x40) + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) {
        func_0x00f78af4();
      }
      else {
        fVar22 = *(float *)(lVar5 + 0x1f8);
        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(lVar8 + 0x10) + 0x88,0);
        fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
        if (*(long *)(lVar8 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(lVar8 + 0x10) + 0x88,0);
          fVar15 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(lVar8 + 0x28) == 0) {
            func_0x00f78af4();
          }
          else if (*(long *)(lVar8 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            fVar23 = *(float *)(*(long *)(lVar8 + 0x28) + 0x1f0);
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(lVar8 + 0x10) + 0xf0,0);
            fVar16 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(lVar8 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(lVar8 + 0x10) + 0xf0,0);
              fVar17 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(float *)(lVar8 + 0xd0) == 0.0) {
                uVar3 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(lVar8);
              }
              else {
                uVar3 = (uint)(*(char *)(lVar8 + 0xd4) != '\0');
              }
              fVar20 = 1.0;
              if (uVar3 == 0) {
                fVar20 = 0.0;
              }
              if (*(long *)(lVar8 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                          (*(long *)(lVar8 + 0x10) + 0x158,0);
                fVar18 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(long *)(lVar8 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                            (*(long *)(lVar8 + 0x10) + 0x158,0);
                  fVar19 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  fStack_3a4 = fVar18;
                  if (*(long *)(lVar8 + 0x28) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    fVar18 = 0.0;
                    if (*(char *)(*(long *)(lVar8 + 0x28) + 0x1d3) != '\0') {
                      fVar18 = 1.0;
                    }
                    fStack_3a8 = fVar19;
                    if (*(long *)(lVar8 + 0x10) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                (*(long *)(lVar8 + 0x10) + 0x1c0,0);
                      fStack_3b0 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                      if (*(long *)(lVar8 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        fStack_3ac = fVar20;
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                  (*(long *)(lVar8 + 0x10) + 0x1c0,0);
                        fVar20 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        lVar5 = *(long *)(lVar8 + 0x10);
                        if (lVar5 == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar22,*(undefined4 *)(lVar5 + 0xec),
                                                   (1.0 - fVar22) * fVar14 + fVar22 * fVar15,0);
                          *(undefined4 *)(lVar5 + 0xec) = uVar21;
                          lVar5 = *(long *)(lVar8 + 0x10);
                          if (lVar5 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar23,*(undefined4 *)(lVar5 + 0x154),
                                                     (1.0 - fVar23) * fVar16 + fVar23 * fVar17,0);
                            *(undefined4 *)(lVar5 + 0x154) = uVar21;
                            lVar5 = *(long *)(lVar8 + 0x10);
                            if (lVar5 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fStack_3ac,*(undefined4 *)(lVar5 + 0x1bc),
                                                       (1.0 - fStack_3ac) * fStack_3a4 +
                                                       fStack_3ac * fStack_3a8,0);
                              *(undefined4 *)(lVar5 + 0x1bc) = uVar21;
                              lVar5 = *(long *)(lVar8 + 0x10);
                              if (lVar5 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar18,*(undefined4 *)(lVar5 + 0x224),
                                                         (1.0 - fVar18) * fStack_3b0 +
                                                         fVar18 * fVar20,0);
                                *(undefined4 *)(lVar5 + 0x224) = uVar21;
                                lVar5 = *(long *)(lVar8 + 0x10);
                                if (lVar5 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                            (&uStack_1e8,lVar5 + 0x20,lVar5 + 0x88,0);
                                  uStack_208 = uStack_1a0;
                                  uStack_210 = uStack_1a8;
                                  uStack_1f8 = uStack_190;
                                  uStack_200 = uStack_198;
                                  uStack_1f0 = uStack_188;
                                  uStack_248 = uStack_1e0;
                                  uStack_250 = uStack_1e8;
                                  uStack_238 = uStack_1d0;
                                  uStack_240 = uStack_1d8;
                                  uStack_228 = uStack_1c0;
                                  uStack_230 = uStack_1c8;
                                  uStack_218 = uStack_1b0;
                                  uStack_220 = uStack_1b8;
                                  *(undefined8 *)(lVar8 + 0x74) = uStack_1b0;
                                  *(undefined8 *)(lVar8 + 0x6c) = uStack_1b8;
                                  *(undefined8 *)(lVar8 + 0x84) = uStack_1a0;
                                  *(undefined8 *)(lVar8 + 0x7c) = uStack_1a8;
                                  *(undefined8 *)(lVar8 + 0x94) = uStack_190;
                                  *(undefined8 *)(lVar8 + 0x8c) = uStack_198;
                                  *(undefined8 *)(lVar8 + 0x9c) = uStack_188;
                                  *(undefined8 *)(lVar8 + 0x44) = uStack_1e0;
                                  *(undefined8 *)(lVar8 + 0x3c) = uStack_1e8;
                                  *(undefined8 *)(lVar8 + 0x54) = uStack_1d0;
                                  *(undefined8 *)(lVar8 + 0x4c) = uStack_1d8;
                                  *(undefined8 *)(lVar8 + 100) = uStack_1c0;
                                  *(undefined8 *)(lVar8 + 0x5c) = uStack_1c8;
                                  if (*(long *)(lVar8 + 0x10) == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    puVar6 = (undefined8 *)(lVar8 + 0x3c);
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_1e8,puVar6,*(long *)(lVar8 + 0x10) + 0xf0,0);
                                    uStack_278 = uStack_1a0;
                                    uStack_280 = uStack_1a8;
                                    uStack_268 = uStack_190;
                                    uStack_270 = uStack_198;
                                    uStack_260 = uStack_188;
                                    uStack_2b8 = uStack_1e0;
                                    uStack_2c0 = uStack_1e8;
                                    uStack_2a8 = uStack_1d0;
                                    uStack_2b0 = uStack_1d8;
                                    uStack_298 = uStack_1c0;
                                    uStack_2a0 = uStack_1c8;
                                    uStack_288 = uStack_1b0;
                                    uStack_290 = uStack_1b8;
                                    *(undefined8 *)(lVar8 + 0x84) = uStack_1a0;
                                    *(undefined8 *)(lVar8 + 0x7c) = uStack_1a8;
                                    *(undefined8 *)(lVar8 + 0x94) = uStack_190;
                                    *(undefined8 *)(lVar8 + 0x8c) = uStack_198;
                                    *(undefined8 *)(lVar8 + 0x9c) = uStack_188;
                                    *(undefined8 *)(lVar8 + 0x44) = uStack_1e0;
                                    *puVar6 = uStack_1e8;
                                    *(undefined8 *)(lVar8 + 0x54) = uStack_1d0;
                                    *(undefined8 *)(lVar8 + 0x4c) = uStack_1d8;
                                    *(undefined8 *)(lVar8 + 100) = uStack_1c0;
                                    *(undefined8 *)(lVar8 + 0x5c) = uStack_1c8;
                                    *(undefined8 *)(lVar8 + 0x74) = uStack_1b0;
                                    *(undefined8 *)(lVar8 + 0x6c) = uStack_1b8;
                                    if (*(long *)(lVar8 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_1e8,puVar6,*(long *)(lVar8 + 0x10) + 0x158,
                                                 0);
                                      uStack_2e8 = uStack_1a0;
                                      uStack_2f0 = uStack_1a8;
                                      uStack_2d8 = uStack_190;
                                      uStack_2e0 = uStack_198;
                                      uStack_2d0 = uStack_188;
                                      uStack_328 = uStack_1e0;
                                      uStack_330 = uStack_1e8;
                                      uStack_318 = uStack_1d0;
                                      uStack_320 = uStack_1d8;
                                      uStack_308 = uStack_1c0;
                                      uStack_310 = uStack_1c8;
                                      uStack_2f8 = uStack_1b0;
                                      uStack_300 = uStack_1b8;
                                      *(undefined8 *)(lVar8 + 0x84) = uStack_1a0;
                                      *(undefined8 *)(lVar8 + 0x7c) = uStack_1a8;
                                      *(undefined8 *)(lVar8 + 0x94) = uStack_190;
                                      *(undefined8 *)(lVar8 + 0x8c) = uStack_198;
                                      *(undefined8 *)(lVar8 + 0x9c) = uStack_188;
                                      *(undefined8 *)(lVar8 + 0x44) = uStack_1e0;
                                      *puVar6 = uStack_1e8;
                                      *(undefined8 *)(lVar8 + 0x54) = uStack_1d0;
                                      *(undefined8 *)(lVar8 + 0x4c) = uStack_1d8;
                                      *(undefined8 *)(lVar8 + 100) = uStack_1c0;
                                      *(undefined8 *)(lVar8 + 0x5c) = uStack_1c8;
                                      *(undefined8 *)(lVar8 + 0x74) = uStack_1b0;
                                      *(undefined8 *)(lVar8 + 0x6c) = uStack_1b8;
                                      if (*(long *)(lVar8 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_1e8,puVar6,
                                                   *(long *)(lVar8 + 0x10) + 0x1c0,0);
                                        uStack_358 = uStack_1a0;
                                        uStack_360 = uStack_1a8;
                                        uStack_348 = uStack_190;
                                        uStack_350 = uStack_198;
                                        uStack_340 = uStack_188;
                                        uStack_398 = uStack_1e0;
                                        uStack_3a0 = uStack_1e8;
                                        uStack_388 = uStack_1d0;
                                        uStack_390 = uStack_1d8;
                                        uStack_378 = uStack_1c0;
                                        uStack_380 = uStack_1c8;
                                        uStack_368 = uStack_1b0;
                                        uStack_370 = uStack_1b8;
                                        *(undefined8 *)(lVar8 + 0x84) = uStack_1a0;
                                        *(undefined8 *)(lVar8 + 0x7c) = uStack_1a8;
                                        *(undefined8 *)(lVar8 + 0x94) = uStack_190;
                                        *(undefined8 *)(lVar8 + 0x8c) = uStack_198;
                                        *(undefined8 *)(lVar8 + 0x9c) = uStack_188;
                                        *(undefined8 *)(lVar8 + 0x44) = uStack_1e0;
                                        *puVar6 = uStack_1e8;
                                        *(undefined8 *)(lVar8 + 0x54) = uStack_1d0;
                                        *(undefined8 *)(lVar8 + 0x4c) = uStack_1d8;
                                        *(undefined8 *)(lVar8 + 100) = uStack_1c0;
                                        *(undefined8 *)(lVar8 + 0x5c) = uStack_1c8;
                                        *(undefined8 *)(lVar8 + 0x74) = uStack_1b0;
                                        *(undefined8 *)(lVar8 + 0x6c) = uStack_1b8;
                                        lVar8 = *(long *)(lVar8 + 0x28);
                                        if (lVar8 == 0) {
                                          func_0x00f78af4();
                                        }
                                        else if (*(long *)(lVar8 + 0x48) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          lVar5 = *(long *)(lVar8 + 0x70);
                                          if (lVar5 != 0) {
                                            puVar13 = &UNK_015cb768;
                                            goto code_r0x032279f4;
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15cb03c | Atlas.Gameplay.Kart.KartFollowCamera.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x015cb19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cb764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cb1a0) */
/* WARNING: Removing unreachable block (ram,0x015cb1a4) */
/* WARNING: Removing unreachable block (ram,0x015cb1b8) */
/* WARNING: Removing unreachable block (ram,0x015cb768) */
/* WARNING: Removing unreachable block (ram,0x015cb76c) */
/* WARNING: Removing unreachable block (ram,0x015cbae4) */
/* WARNING: Removing unreachable block (ram,0x015cb778) */
/* WARNING: Removing unreachable block (ram,0x015cbaec) */
/* WARNING: Removing unreachable block (ram,0x015cb79c) */
/* WARNING: Removing unreachable block (ram,0x015cb824) */
/* WARNING: Removing unreachable block (ram,0x015cb828) */
/* WARNING: Removing unreachable block (ram,0x015cb82c) */
/* WARNING: Removing unreachable block (ram,0x015cb844) */
/* WARNING: Removing unreachable block (ram,0x015cb968) */
/* WARNING: Removing unreachable block (ram,0x015cb96c) */
/* WARNING: Removing unreachable block (ram,0x015cb970) */
/* WARNING: Removing unreachable block (ram,0x015cb980) */
/* WARNING: Removing unreachable block (ram,0x015cb988) */
/* WARNING: Removing unreachable block (ram,0x015cb9b0) */
/* WARNING: Removing unreachable block (ram,0x015cb994) */
/* WARNING: Removing unreachable block (ram,0x015cb9a0) */
/* WARNING: Removing unreachable block (ram,0x015cb9bc) */
/* WARNING: Removing unreachable block (ram,0x015cb9d0) */
/* WARNING: Removing unreachable block (ram,0x015cb9d4) */
/* WARNING: Removing unreachable block (ram,0x015cb9d8) */
/* WARNING: Removing unreachable block (ram,0x015cb9dc) */

void Atlas_Gameplay_Kart_KartFollowCamera__Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 *****pppppuVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_3b0 [16];
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined1 *****pppppuStack_c0;
  undefined *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 ****ppppuStack_90;
  undefined *puStack_88;
  undefined1 ***pppuStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *(undefined8 *)(param_5 + 0x10) = param_6;
  if (param_8 != 0) {
    /*Atlas.Gameplay.VirtualCamera$$Init*/ func_0x015282e4(param_8,param_7,0);
    *(long *)(param_5 + 0x18) = param_8;
    uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_8,0);
    *(undefined8 *)(param_5 + 0x20) = uVar4;
    return;
  }
  lVar5 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Kart_KartFollowCamera__DeInit;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar5 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(lVar5 + 0x18),0);
    if (*(long *)(lVar5 + 0x18) != 0) {
      /*Atlas.Gameplay.VirtualCamera$$DeInit*/ func_0x01528338(*(long *)(lVar5 + 0x18),0);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Kart_KartFollowCamera__StartTracking;
  ppuStack_50 = &puStack_30;
  if (*(long *)(lVar5 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(0xbf800000,*(long *)(lVar5 + 0x18),0,0);
    *(undefined1 *)(lVar5 + 0x38) = 1;
    return;
  }
  lVar5 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Kart_KartFollowCamera__StopTracking;
  pppuStack_70 = &ppuStack_50;
  if (*(long *)(lVar5 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(lVar5 + 0x18),0);
    *(undefined1 *)(lVar5 + 0x38) = 0;
    return;
  }
  auVar24 = func_0x00f78af4();
  lVar6 = auVar24._8_8_;
  lVar5 = auVar24._0_8_;
  puVar2 = &uStack_b0;
  puStack_88 = &Atlas_Gameplay_Kart_KartFollowCamera__SetTarget;
  pppppuVar12 = &ppppuStack_90;
  *(long *)(lVar5 + 0x28) = lVar6;
  ppppuStack_90 = &pppuStack_70;
  if (*(long *)(lVar5 + 0x20) != 0) {
    uStack_b0 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(*(long *)(lVar5 + 0x20),0);
    uStack_ac = param_2;
    uStack_a8 = param_3;
    uStack_a4 = param_4;
    /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_b0,0);
    *(undefined4 *)(lVar5 + 0xa4) = param_2;
    unaff_x20 = lVar6;
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x70), lVar6 != 0)) {
      puVar13 = &UNK_015cb1a0;
      goto code_r0x032279f4;
    }
  }
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = lVar5;
  lVar5 = func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
  lVar6 = *(long *)(lVar5 + 0x70);
  pppppuStack_c0 = pppppuVar12;
  if (lVar6 != 0) {
    puVar2 = &uStack_b0;
    puVar13 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
code_r0x032279f4:
    *(long *)((long)puVar2 + -0x20) = auVar24._8_8_;
    *(long *)((long)puVar2 + -0x18) = auVar24._0_8_;
    *(undefined1 ******)((long)puVar2 + -0x10) = pppppuVar12;
    *(undefined **)((long)puVar2 + -8) = puVar13;
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar6);
    return;
  }
  auVar24 = func_0x00f78af4();
  plVar9 = auVar24._8_8_;
  lVar5 = auVar24._0_8_;
  puStack_c8 = &Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate;
  pppppuVar12 = &ppppuStack_d0;
  puVar2 = (undefined4 *)auStack_3b0;
  ppppuStack_d0 = (undefined1 ****)&pppppuStack_c0;
  if ((bRam0000000003eb532c & 1) == 0) {
    ppppuStack_d0 = (undefined1 ****)&pppppuStack_c0;
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  auVar24._8_8_ = lVar5;
  auVar24._0_8_ = uVar4;
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  uVar11 = *(undefined8 *)(lVar5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
  if ((uVar7 & 1) != 0) {
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x015cb348;
          }
          piVar10 = piVar10 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015cb348:
      fVar14 = (float)(*(code *)*puVar8)(plVar9,puVar8[1]);
      if (fVar14 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto code_r0x015cb9ec;
      lVar6 = *(long *)(lVar5 + 0x28);
      if (lVar6 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar6 + 0x40) == 0) {
        func_0x00f78af4();
      }
      else {
        *(float *)(lVar5 + 0xdc) =
             *(float *)(lVar6 + 0x194) / *(float *)(*(long *)(lVar6 + 0x40) + 0x30);
        if (*(long *)(lVar5 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar22 = *(float *)(lVar6 + 0x1f8);
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(lVar5 + 0x10) + 0x88,0);
          fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(lVar5 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(lVar5 + 0x10) + 0x88,0);
            fVar15 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(lVar5 + 0x28) == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(lVar5 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              fVar23 = *(float *)(*(long *)(lVar5 + 0x28) + 0x1f0);
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                        (*(long *)(lVar5 + 0x10) + 0xf0,0);
              fVar16 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(long *)(lVar5 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                          (*(long *)(lVar5 + 0x10) + 0xf0,0);
                fVar17 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(float *)(lVar5 + 0xd0) == 0.0) {
                  uVar3 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(lVar5);
                }
                else {
                  uVar3 = (uint)(*(char *)(lVar5 + 0xd4) != '\0');
                }
                fVar20 = 1.0;
                if (uVar3 == 0) {
                  fVar20 = 0.0;
                }
                if (*(long *)(lVar5 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                            (*(long *)(lVar5 + 0x10) + 0x158,0);
                  fVar18 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  if (*(long *)(lVar5 + 0x10) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                              (*(long *)(lVar5 + 0x10) + 0x158,0);
                    fVar19 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                    fStack_394 = fVar18;
                    if (*(long *)(lVar5 + 0x28) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      fVar18 = 0.0;
                      if (*(char *)(*(long *)(lVar5 + 0x28) + 0x1d3) != '\0') {
                        fVar18 = 1.0;
                      }
                      fStack_398 = fVar19;
                      if (*(long *)(lVar5 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                  (*(long *)(lVar5 + 0x10) + 0x1c0,0);
                        fStack_3a0 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        if (*(long *)(lVar5 + 0x10) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          fStack_39c = fVar20;
                          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                    (*(long *)(lVar5 + 0x10) + 0x1c0,0);
                          fVar20 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                          lVar6 = *(long *)(lVar5 + 0x10);
                          if (lVar6 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar22,*(undefined4 *)(lVar6 + 0xec),
                                                     (1.0 - fVar22) * fVar14 + fVar22 * fVar15,0);
                            *(undefined4 *)(lVar6 + 0xec) = uVar21;
                            lVar6 = *(long *)(lVar5 + 0x10);
                            if (lVar6 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar23,*(undefined4 *)(lVar6 + 0x154),
                                                       (1.0 - fVar23) * fVar16 + fVar23 * fVar17,0);
                              *(undefined4 *)(lVar6 + 0x154) = uVar21;
                              lVar6 = *(long *)(lVar5 + 0x10);
                              if (lVar6 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fStack_39c,*(undefined4 *)(lVar6 + 0x1bc),
                                                         (1.0 - fStack_39c) * fStack_394 +
                                                         fStack_39c * fStack_398,0);
                                *(undefined4 *)(lVar6 + 0x1bc) = uVar21;
                                lVar6 = *(long *)(lVar5 + 0x10);
                                if (lVar6 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar18,*(undefined4 *)(lVar6 + 0x224),
                                                           (1.0 - fVar18) * fStack_3a0 +
                                                           fVar18 * fVar20,0);
                                  *(undefined4 *)(lVar6 + 0x224) = uVar21;
                                  lVar6 = *(long *)(lVar5 + 0x10);
                                  if (lVar6 == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_1d8,lVar6 + 0x20,lVar6 + 0x88,0);
                                    uStack_1f8 = uStack_190;
                                    uStack_200 = uStack_198;
                                    uStack_1e8 = uStack_180;
                                    uStack_1f0 = uStack_188;
                                    uStack_1e0 = uStack_178;
                                    uStack_238 = uStack_1d0;
                                    uStack_240 = uStack_1d8;
                                    uStack_228 = uStack_1c0;
                                    uStack_230 = uStack_1c8;
                                    uStack_218 = uStack_1b0;
                                    uStack_220 = uStack_1b8;
                                    uStack_208 = uStack_1a0;
                                    uStack_210 = uStack_1a8;
                                    *(undefined8 *)(lVar5 + 0x74) = uStack_1a0;
                                    *(undefined8 *)(lVar5 + 0x6c) = uStack_1a8;
                                    *(undefined8 *)(lVar5 + 0x84) = uStack_190;
                                    *(undefined8 *)(lVar5 + 0x7c) = uStack_198;
                                    *(undefined8 *)(lVar5 + 0x94) = uStack_180;
                                    *(undefined8 *)(lVar5 + 0x8c) = uStack_188;
                                    *(undefined8 *)(lVar5 + 0x9c) = uStack_178;
                                    *(undefined8 *)(lVar5 + 0x44) = uStack_1d0;
                                    *(undefined8 *)(lVar5 + 0x3c) = uStack_1d8;
                                    *(undefined8 *)(lVar5 + 0x54) = uStack_1c0;
                                    *(undefined8 *)(lVar5 + 0x4c) = uStack_1c8;
                                    *(undefined8 *)(lVar5 + 100) = uStack_1b0;
                                    *(undefined8 *)(lVar5 + 0x5c) = uStack_1b8;
                                    if (*(long *)(lVar5 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      puVar8 = (undefined8 *)(lVar5 + 0x3c);
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_1d8,puVar8,*(long *)(lVar5 + 0x10) + 0xf0,0
                                                );
                                      uStack_268 = uStack_190;
                                      uStack_270 = uStack_198;
                                      uStack_258 = uStack_180;
                                      uStack_260 = uStack_188;
                                      uStack_250 = uStack_178;
                                      uStack_2a8 = uStack_1d0;
                                      uStack_2b0 = uStack_1d8;
                                      uStack_298 = uStack_1c0;
                                      uStack_2a0 = uStack_1c8;
                                      uStack_288 = uStack_1b0;
                                      uStack_290 = uStack_1b8;
                                      uStack_278 = uStack_1a0;
                                      uStack_280 = uStack_1a8;
                                      *(undefined8 *)(lVar5 + 0x84) = uStack_190;
                                      *(undefined8 *)(lVar5 + 0x7c) = uStack_198;
                                      *(undefined8 *)(lVar5 + 0x94) = uStack_180;
                                      *(undefined8 *)(lVar5 + 0x8c) = uStack_188;
                                      *(undefined8 *)(lVar5 + 0x9c) = uStack_178;
                                      *(undefined8 *)(lVar5 + 0x44) = uStack_1d0;
                                      *puVar8 = uStack_1d8;
                                      *(undefined8 *)(lVar5 + 0x54) = uStack_1c0;
                                      *(undefined8 *)(lVar5 + 0x4c) = uStack_1c8;
                                      *(undefined8 *)(lVar5 + 100) = uStack_1b0;
                                      *(undefined8 *)(lVar5 + 0x5c) = uStack_1b8;
                                      *(undefined8 *)(lVar5 + 0x74) = uStack_1a0;
                                      *(undefined8 *)(lVar5 + 0x6c) = uStack_1a8;
                                      if (*(long *)(lVar5 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_1d8,puVar8,
                                                   *(long *)(lVar5 + 0x10) + 0x158,0);
                                        uStack_2d8 = uStack_190;
                                        uStack_2e0 = uStack_198;
                                        uStack_2c8 = uStack_180;
                                        uStack_2d0 = uStack_188;
                                        uStack_2c0 = uStack_178;
                                        uStack_318 = uStack_1d0;
                                        uStack_320 = uStack_1d8;
                                        uStack_308 = uStack_1c0;
                                        uStack_310 = uStack_1c8;
                                        uStack_2f8 = uStack_1b0;
                                        uStack_300 = uStack_1b8;
                                        uStack_2e8 = uStack_1a0;
                                        uStack_2f0 = uStack_1a8;
                                        *(undefined8 *)(lVar5 + 0x84) = uStack_190;
                                        *(undefined8 *)(lVar5 + 0x7c) = uStack_198;
                                        *(undefined8 *)(lVar5 + 0x94) = uStack_180;
                                        *(undefined8 *)(lVar5 + 0x8c) = uStack_188;
                                        *(undefined8 *)(lVar5 + 0x9c) = uStack_178;
                                        *(undefined8 *)(lVar5 + 0x44) = uStack_1d0;
                                        *puVar8 = uStack_1d8;
                                        *(undefined8 *)(lVar5 + 0x54) = uStack_1c0;
                                        *(undefined8 *)(lVar5 + 0x4c) = uStack_1c8;
                                        *(undefined8 *)(lVar5 + 100) = uStack_1b0;
                                        *(undefined8 *)(lVar5 + 0x5c) = uStack_1b8;
                                        *(undefined8 *)(lVar5 + 0x74) = uStack_1a0;
                                        *(undefined8 *)(lVar5 + 0x6c) = uStack_1a8;
                                        if (*(long *)(lVar5 + 0x10) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                    (&uStack_1d8,puVar8,
                                                     *(long *)(lVar5 + 0x10) + 0x1c0,0);
                                          uStack_348 = uStack_190;
                                          uStack_350 = uStack_198;
                                          uStack_338 = uStack_180;
                                          uStack_340 = uStack_188;
                                          uStack_330 = uStack_178;
                                          uStack_388 = uStack_1d0;
                                          uStack_390 = uStack_1d8;
                                          uStack_378 = uStack_1c0;
                                          uStack_380 = uStack_1c8;
                                          uStack_368 = uStack_1b0;
                                          uStack_370 = uStack_1b8;
                                          uStack_358 = uStack_1a0;
                                          uStack_360 = uStack_1a8;
                                          *(undefined8 *)(lVar5 + 0x84) = uStack_190;
                                          *(undefined8 *)(lVar5 + 0x7c) = uStack_198;
                                          *(undefined8 *)(lVar5 + 0x94) = uStack_180;
                                          *(undefined8 *)(lVar5 + 0x8c) = uStack_188;
                                          *(undefined8 *)(lVar5 + 0x9c) = uStack_178;
                                          *(undefined8 *)(lVar5 + 0x44) = uStack_1d0;
                                          *puVar8 = uStack_1d8;
                                          *(undefined8 *)(lVar5 + 0x54) = uStack_1c0;
                                          *(undefined8 *)(lVar5 + 0x4c) = uStack_1c8;
                                          *(undefined8 *)(lVar5 + 100) = uStack_1b0;
                                          *(undefined8 *)(lVar5 + 0x5c) = uStack_1b8;
                                          *(undefined8 *)(lVar5 + 0x74) = uStack_1a0;
                                          *(undefined8 *)(lVar5 + 0x6c) = uStack_1a8;
                                          lVar5 = *(long *)(lVar5 + 0x28);
                                          if (lVar5 == 0) {
                                            func_0x00f78af4();
                                          }
                                          else if (*(long *)(lVar5 + 0x48) == 0) {
                                            func_0x00f78af4();
                                          }
                                          else {
                                            lVar6 = *(long *)(lVar5 + 0x70);
                                            if (lVar6 != 0) {
                                              puVar13 = &UNK_015cb768;
                                              goto code_r0x032279f4;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
    (*pcVar1)();
  }
code_r0x015cb9ec:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar4,0);
  return;
}



// ============================================================
// RVA: 0x15cb08c | Atlas.Gameplay.Kart.KartFollowCamera.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x015cb19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cb764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cb1a0) */
/* WARNING: Removing unreachable block (ram,0x015cb1a4) */
/* WARNING: Removing unreachable block (ram,0x015cb1b8) */
/* WARNING: Removing unreachable block (ram,0x015cb768) */
/* WARNING: Removing unreachable block (ram,0x015cb76c) */
/* WARNING: Removing unreachable block (ram,0x015cbae4) */
/* WARNING: Removing unreachable block (ram,0x015cb778) */
/* WARNING: Removing unreachable block (ram,0x015cbaec) */
/* WARNING: Removing unreachable block (ram,0x015cb79c) */
/* WARNING: Removing unreachable block (ram,0x015cb824) */
/* WARNING: Removing unreachable block (ram,0x015cb828) */
/* WARNING: Removing unreachable block (ram,0x015cb82c) */
/* WARNING: Removing unreachable block (ram,0x015cb844) */
/* WARNING: Removing unreachable block (ram,0x015cb968) */
/* WARNING: Removing unreachable block (ram,0x015cb96c) */
/* WARNING: Removing unreachable block (ram,0x015cb970) */
/* WARNING: Removing unreachable block (ram,0x015cb980) */
/* WARNING: Removing unreachable block (ram,0x015cb988) */
/* WARNING: Removing unreachable block (ram,0x015cb9b0) */
/* WARNING: Removing unreachable block (ram,0x015cb994) */
/* WARNING: Removing unreachable block (ram,0x015cb9a0) */
/* WARNING: Removing unreachable block (ram,0x015cb9bc) */
/* WARNING: Removing unreachable block (ram,0x015cb9d0) */
/* WARNING: Removing unreachable block (ram,0x015cb9d4) */
/* WARNING: Removing unreachable block (ram,0x015cb9d8) */
/* WARNING: Removing unreachable block (ram,0x015cb9dc) */

void Atlas_Gameplay_Kart_KartFollowCamera__DeInit
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 ****ppppuVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_390 [16];
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 ***pppuStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(param_5 + 0x18),0);
    if (*(long *)(param_5 + 0x18) != 0) {
      /*Atlas.Gameplay.VirtualCamera$$DeInit*/ func_0x01528338(*(long *)(param_5 + 0x18),0);
      *(undefined8 *)(param_5 + 0x10) = 0;
      *(undefined8 *)(param_5 + 0x18) = 0;
      *(undefined8 *)(param_5 + 0x20) = 0;
      return;
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Kart_KartFollowCamera__StartTracking;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar4 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(0xbf800000,*(long *)(lVar4 + 0x18),0,0);
    *(undefined1 *)(lVar4 + 0x38) = 1;
    return;
  }
  lVar4 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Kart_KartFollowCamera__StopTracking;
  ppuStack_50 = &puStack_30;
  if (*(long *)(lVar4 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(lVar4 + 0x18),0);
    *(undefined1 *)(lVar4 + 0x38) = 0;
    return;
  }
  auVar24 = func_0x00f78af4();
  lVar5 = auVar24._8_8_;
  lVar4 = auVar24._0_8_;
  puVar2 = &uStack_90;
  puStack_68 = &Atlas_Gameplay_Kart_KartFollowCamera__SetTarget;
  ppppuVar12 = &pppuStack_70;
  *(long *)(lVar4 + 0x28) = lVar5;
  pppuStack_70 = &ppuStack_50;
  if (*(long *)(lVar4 + 0x20) != 0) {
    uStack_90 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(*(long *)(lVar4 + 0x20),0);
    uStack_8c = param_2;
    uStack_88 = param_3;
    uStack_84 = param_4;
    /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_90,0);
    *(undefined4 *)(lVar4 + 0xa4) = param_2;
    unaff_x20 = lVar5;
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
      puVar13 = &UNK_015cb1a0;
      goto code_r0x032279f4;
    }
  }
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = lVar4;
  lVar4 = func_0x00f78af4();
  puStack_98 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
  lVar5 = *(long *)(lVar4 + 0x70);
  ppppuStack_a0 = ppppuVar12;
  if (lVar5 != 0) {
    puVar2 = &uStack_90;
    puVar13 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
code_r0x032279f4:
    *(long *)((long)puVar2 + -0x20) = auVar24._8_8_;
    *(long *)((long)puVar2 + -0x18) = auVar24._0_8_;
    *(undefined1 *****)((long)puVar2 + -0x10) = ppppuVar12;
    *(undefined **)((long)puVar2 + -8) = puVar13;
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar5);
    return;
  }
  auVar24 = func_0x00f78af4();
  plVar8 = auVar24._8_8_;
  lVar4 = auVar24._0_8_;
  puStack_a8 = &Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate;
  ppppuVar12 = &pppuStack_b0;
  puVar2 = (undefined4 *)auStack_390;
  pppuStack_b0 = (undefined1 ***)&ppppuStack_a0;
  if ((bRam0000000003eb532c & 1) == 0) {
    pppuStack_b0 = (undefined1 ***)&ppppuStack_a0;
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  auVar24._8_8_ = lVar4;
  auVar24._0_8_ = uVar10;
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
  uVar11 = *(undefined8 *)(lVar4 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
  if ((uVar6 & 1) != 0) {
    if (plVar8 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x015cb348;
          }
          piVar9 = piVar9 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015cb348:
      fVar14 = (float)(*(code *)*puVar7)(plVar8,puVar7[1]);
      if (fVar14 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto code_r0x015cb9ec;
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar5 + 0x40) == 0) {
        func_0x00f78af4();
      }
      else {
        *(float *)(lVar4 + 0xdc) =
             *(float *)(lVar5 + 0x194) / *(float *)(*(long *)(lVar5 + 0x40) + 0x30);
        if (*(long *)(lVar4 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar22 = *(float *)(lVar5 + 0x1f8);
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(lVar4 + 0x10) + 0x88,0);
          fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(lVar4 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(lVar4 + 0x10) + 0x88,0);
            fVar15 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(lVar4 + 0x28) == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(lVar4 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              fVar23 = *(float *)(*(long *)(lVar4 + 0x28) + 0x1f0);
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                        (*(long *)(lVar4 + 0x10) + 0xf0,0);
              fVar16 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(long *)(lVar4 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                          (*(long *)(lVar4 + 0x10) + 0xf0,0);
                fVar17 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(float *)(lVar4 + 0xd0) == 0.0) {
                  uVar3 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(lVar4);
                }
                else {
                  uVar3 = (uint)(*(char *)(lVar4 + 0xd4) != '\0');
                }
                fVar20 = 1.0;
                if (uVar3 == 0) {
                  fVar20 = 0.0;
                }
                if (*(long *)(lVar4 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                            (*(long *)(lVar4 + 0x10) + 0x158,0);
                  fVar18 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  if (*(long *)(lVar4 + 0x10) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                              (*(long *)(lVar4 + 0x10) + 0x158,0);
                    fVar19 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                    fStack_374 = fVar18;
                    if (*(long *)(lVar4 + 0x28) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      fVar18 = 0.0;
                      if (*(char *)(*(long *)(lVar4 + 0x28) + 0x1d3) != '\0') {
                        fVar18 = 1.0;
                      }
                      fStack_378 = fVar19;
                      if (*(long *)(lVar4 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                  (*(long *)(lVar4 + 0x10) + 0x1c0,0);
                        fStack_380 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        if (*(long *)(lVar4 + 0x10) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          fStack_37c = fVar20;
                          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                    (*(long *)(lVar4 + 0x10) + 0x1c0,0);
                          fVar20 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                          lVar5 = *(long *)(lVar4 + 0x10);
                          if (lVar5 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar22,*(undefined4 *)(lVar5 + 0xec),
                                                     (1.0 - fVar22) * fVar14 + fVar22 * fVar15,0);
                            *(undefined4 *)(lVar5 + 0xec) = uVar21;
                            lVar5 = *(long *)(lVar4 + 0x10);
                            if (lVar5 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar23,*(undefined4 *)(lVar5 + 0x154),
                                                       (1.0 - fVar23) * fVar16 + fVar23 * fVar17,0);
                              *(undefined4 *)(lVar5 + 0x154) = uVar21;
                              lVar5 = *(long *)(lVar4 + 0x10);
                              if (lVar5 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fStack_37c,*(undefined4 *)(lVar5 + 0x1bc),
                                                         (1.0 - fStack_37c) * fStack_374 +
                                                         fStack_37c * fStack_378,0);
                                *(undefined4 *)(lVar5 + 0x1bc) = uVar21;
                                lVar5 = *(long *)(lVar4 + 0x10);
                                if (lVar5 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar18,*(undefined4 *)(lVar5 + 0x224),
                                                           (1.0 - fVar18) * fStack_380 +
                                                           fVar18 * fVar20,0);
                                  *(undefined4 *)(lVar5 + 0x224) = uVar21;
                                  lVar5 = *(long *)(lVar4 + 0x10);
                                  if (lVar5 == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_1b8,lVar5 + 0x20,lVar5 + 0x88,0);
                                    uStack_1d8 = uStack_170;
                                    uStack_1e0 = uStack_178;
                                    uStack_1c8 = uStack_160;
                                    uStack_1d0 = uStack_168;
                                    uStack_1c0 = uStack_158;
                                    uStack_218 = uStack_1b0;
                                    uStack_220 = uStack_1b8;
                                    uStack_208 = uStack_1a0;
                                    uStack_210 = uStack_1a8;
                                    uStack_1f8 = uStack_190;
                                    uStack_200 = uStack_198;
                                    uStack_1e8 = uStack_180;
                                    uStack_1f0 = uStack_188;
                                    *(undefined8 *)(lVar4 + 0x74) = uStack_180;
                                    *(undefined8 *)(lVar4 + 0x6c) = uStack_188;
                                    *(undefined8 *)(lVar4 + 0x84) = uStack_170;
                                    *(undefined8 *)(lVar4 + 0x7c) = uStack_178;
                                    *(undefined8 *)(lVar4 + 0x94) = uStack_160;
                                    *(undefined8 *)(lVar4 + 0x8c) = uStack_168;
                                    *(undefined8 *)(lVar4 + 0x9c) = uStack_158;
                                    *(undefined8 *)(lVar4 + 0x44) = uStack_1b0;
                                    *(undefined8 *)(lVar4 + 0x3c) = uStack_1b8;
                                    *(undefined8 *)(lVar4 + 0x54) = uStack_1a0;
                                    *(undefined8 *)(lVar4 + 0x4c) = uStack_1a8;
                                    *(undefined8 *)(lVar4 + 100) = uStack_190;
                                    *(undefined8 *)(lVar4 + 0x5c) = uStack_198;
                                    if (*(long *)(lVar4 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      puVar7 = (undefined8 *)(lVar4 + 0x3c);
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_1b8,puVar7,*(long *)(lVar4 + 0x10) + 0xf0,0
                                                );
                                      uStack_248 = uStack_170;
                                      uStack_250 = uStack_178;
                                      uStack_238 = uStack_160;
                                      uStack_240 = uStack_168;
                                      uStack_230 = uStack_158;
                                      uStack_288 = uStack_1b0;
                                      uStack_290 = uStack_1b8;
                                      uStack_278 = uStack_1a0;
                                      uStack_280 = uStack_1a8;
                                      uStack_268 = uStack_190;
                                      uStack_270 = uStack_198;
                                      uStack_258 = uStack_180;
                                      uStack_260 = uStack_188;
                                      *(undefined8 *)(lVar4 + 0x84) = uStack_170;
                                      *(undefined8 *)(lVar4 + 0x7c) = uStack_178;
                                      *(undefined8 *)(lVar4 + 0x94) = uStack_160;
                                      *(undefined8 *)(lVar4 + 0x8c) = uStack_168;
                                      *(undefined8 *)(lVar4 + 0x9c) = uStack_158;
                                      *(undefined8 *)(lVar4 + 0x44) = uStack_1b0;
                                      *puVar7 = uStack_1b8;
                                      *(undefined8 *)(lVar4 + 0x54) = uStack_1a0;
                                      *(undefined8 *)(lVar4 + 0x4c) = uStack_1a8;
                                      *(undefined8 *)(lVar4 + 100) = uStack_190;
                                      *(undefined8 *)(lVar4 + 0x5c) = uStack_198;
                                      *(undefined8 *)(lVar4 + 0x74) = uStack_180;
                                      *(undefined8 *)(lVar4 + 0x6c) = uStack_188;
                                      if (*(long *)(lVar4 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_1b8,puVar7,
                                                   *(long *)(lVar4 + 0x10) + 0x158,0);
                                        uStack_2b8 = uStack_170;
                                        uStack_2c0 = uStack_178;
                                        uStack_2a8 = uStack_160;
                                        uStack_2b0 = uStack_168;
                                        uStack_2a0 = uStack_158;
                                        uStack_2f8 = uStack_1b0;
                                        uStack_300 = uStack_1b8;
                                        uStack_2e8 = uStack_1a0;
                                        uStack_2f0 = uStack_1a8;
                                        uStack_2d8 = uStack_190;
                                        uStack_2e0 = uStack_198;
                                        uStack_2c8 = uStack_180;
                                        uStack_2d0 = uStack_188;
                                        *(undefined8 *)(lVar4 + 0x84) = uStack_170;
                                        *(undefined8 *)(lVar4 + 0x7c) = uStack_178;
                                        *(undefined8 *)(lVar4 + 0x94) = uStack_160;
                                        *(undefined8 *)(lVar4 + 0x8c) = uStack_168;
                                        *(undefined8 *)(lVar4 + 0x9c) = uStack_158;
                                        *(undefined8 *)(lVar4 + 0x44) = uStack_1b0;
                                        *puVar7 = uStack_1b8;
                                        *(undefined8 *)(lVar4 + 0x54) = uStack_1a0;
                                        *(undefined8 *)(lVar4 + 0x4c) = uStack_1a8;
                                        *(undefined8 *)(lVar4 + 100) = uStack_190;
                                        *(undefined8 *)(lVar4 + 0x5c) = uStack_198;
                                        *(undefined8 *)(lVar4 + 0x74) = uStack_180;
                                        *(undefined8 *)(lVar4 + 0x6c) = uStack_188;
                                        if (*(long *)(lVar4 + 0x10) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                    (&uStack_1b8,puVar7,
                                                     *(long *)(lVar4 + 0x10) + 0x1c0,0);
                                          uStack_328 = uStack_170;
                                          uStack_330 = uStack_178;
                                          uStack_318 = uStack_160;
                                          uStack_320 = uStack_168;
                                          uStack_310 = uStack_158;
                                          uStack_368 = uStack_1b0;
                                          uStack_370 = uStack_1b8;
                                          uStack_358 = uStack_1a0;
                                          uStack_360 = uStack_1a8;
                                          uStack_348 = uStack_190;
                                          uStack_350 = uStack_198;
                                          uStack_338 = uStack_180;
                                          uStack_340 = uStack_188;
                                          *(undefined8 *)(lVar4 + 0x84) = uStack_170;
                                          *(undefined8 *)(lVar4 + 0x7c) = uStack_178;
                                          *(undefined8 *)(lVar4 + 0x94) = uStack_160;
                                          *(undefined8 *)(lVar4 + 0x8c) = uStack_168;
                                          *(undefined8 *)(lVar4 + 0x9c) = uStack_158;
                                          *(undefined8 *)(lVar4 + 0x44) = uStack_1b0;
                                          *puVar7 = uStack_1b8;
                                          *(undefined8 *)(lVar4 + 0x54) = uStack_1a0;
                                          *(undefined8 *)(lVar4 + 0x4c) = uStack_1a8;
                                          *(undefined8 *)(lVar4 + 100) = uStack_190;
                                          *(undefined8 *)(lVar4 + 0x5c) = uStack_198;
                                          *(undefined8 *)(lVar4 + 0x74) = uStack_180;
                                          *(undefined8 *)(lVar4 + 0x6c) = uStack_188;
                                          lVar4 = *(long *)(lVar4 + 0x28);
                                          if (lVar4 == 0) {
                                            func_0x00f78af4();
                                          }
                                          else if (*(long *)(lVar4 + 0x48) == 0) {
                                            func_0x00f78af4();
                                          }
                                          else {
                                            lVar5 = *(long *)(lVar4 + 0x70);
                                            if (lVar5 != 0) {
                                              puVar13 = &UNK_015cb768;
                                              goto code_r0x032279f4;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
    (*pcVar1)();
  }
code_r0x015cb9ec:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar10,0);
  return;
}



// ============================================================
// RVA: 0x15cb0d4 | Atlas.Gameplay.Kart.KartFollowCamera.StartTracking
// ============================================================

/* WARNING: Possible PIC construction at 0x015cb19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cb764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cb1a0) */
/* WARNING: Removing unreachable block (ram,0x015cb1a4) */
/* WARNING: Removing unreachable block (ram,0x015cb1b8) */
/* WARNING: Removing unreachable block (ram,0x015cb768) */
/* WARNING: Removing unreachable block (ram,0x015cb76c) */
/* WARNING: Removing unreachable block (ram,0x015cbae4) */
/* WARNING: Removing unreachable block (ram,0x015cb778) */
/* WARNING: Removing unreachable block (ram,0x015cbaec) */
/* WARNING: Removing unreachable block (ram,0x015cb79c) */
/* WARNING: Removing unreachable block (ram,0x015cb824) */
/* WARNING: Removing unreachable block (ram,0x015cb828) */
/* WARNING: Removing unreachable block (ram,0x015cb82c) */
/* WARNING: Removing unreachable block (ram,0x015cb844) */
/* WARNING: Removing unreachable block (ram,0x015cb968) */
/* WARNING: Removing unreachable block (ram,0x015cb96c) */
/* WARNING: Removing unreachable block (ram,0x015cb970) */
/* WARNING: Removing unreachable block (ram,0x015cb980) */
/* WARNING: Removing unreachable block (ram,0x015cb988) */
/* WARNING: Removing unreachable block (ram,0x015cb9b0) */
/* WARNING: Removing unreachable block (ram,0x015cb994) */
/* WARNING: Removing unreachable block (ram,0x015cb9a0) */
/* WARNING: Removing unreachable block (ram,0x015cb9bc) */
/* WARNING: Removing unreachable block (ram,0x015cb9d0) */
/* WARNING: Removing unreachable block (ram,0x015cb9d4) */
/* WARNING: Removing unreachable block (ram,0x015cb9d8) */
/* WARNING: Removing unreachable block (ram,0x015cb9dc) */

void Atlas_Gameplay_Kart_KartFollowCamera__StartTracking
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 ***pppuVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_370 [16];
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(0xbf800000,*(long *)(param_5 + 0x18),0,0);
    *(undefined1 *)(param_5 + 0x38) = 1;
    return;
  }
  lVar4 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Kart_KartFollowCamera__StopTracking;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar4 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(lVar4 + 0x18),0);
    *(undefined1 *)(lVar4 + 0x38) = 0;
    return;
  }
  auVar24 = func_0x00f78af4();
  lVar5 = auVar24._8_8_;
  lVar4 = auVar24._0_8_;
  puVar2 = &uStack_70;
  puStack_48 = &Atlas_Gameplay_Kart_KartFollowCamera__SetTarget;
  pppuVar12 = &ppuStack_50;
  *(long *)(lVar4 + 0x28) = lVar5;
  ppuStack_50 = &puStack_30;
  if (*(long *)(lVar4 + 0x20) != 0) {
    uStack_70 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(*(long *)(lVar4 + 0x20),0);
    uStack_6c = param_2;
    uStack_68 = param_3;
    uStack_64 = param_4;
    /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_70,0);
    *(undefined4 *)(lVar4 + 0xa4) = param_2;
    unaff_x20 = lVar5;
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
      puVar13 = &UNK_015cb1a0;
      goto code_r0x032279f4;
    }
  }
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = lVar4;
  lVar4 = func_0x00f78af4();
  puStack_78 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
  lVar5 = *(long *)(lVar4 + 0x70);
  pppuStack_80 = pppuVar12;
  if (lVar5 != 0) {
    puVar2 = &uStack_70;
    puVar13 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
code_r0x032279f4:
    *(long *)((long)puVar2 + -0x20) = auVar24._8_8_;
    *(long *)((long)puVar2 + -0x18) = auVar24._0_8_;
    *(undefined1 ****)((long)puVar2 + -0x10) = pppuVar12;
    *(undefined **)((long)puVar2 + -8) = puVar13;
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar5);
    return;
  }
  auVar24 = func_0x00f78af4();
  plVar8 = auVar24._8_8_;
  lVar4 = auVar24._0_8_;
  puStack_88 = &Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate;
  pppuVar12 = &ppuStack_90;
  puVar2 = (undefined4 *)auStack_370;
  ppuStack_90 = (undefined1 **)&pppuStack_80;
  if ((bRam0000000003eb532c & 1) == 0) {
    ppuStack_90 = (undefined1 **)&pppuStack_80;
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  auVar24._8_8_ = lVar4;
  auVar24._0_8_ = uVar10;
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
  uVar11 = *(undefined8 *)(lVar4 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
  if ((uVar6 & 1) != 0) {
    if (plVar8 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x015cb348;
          }
          piVar9 = piVar9 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015cb348:
      fVar14 = (float)(*(code *)*puVar7)(plVar8,puVar7[1]);
      if (fVar14 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto code_r0x015cb9ec;
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar5 + 0x40) == 0) {
        func_0x00f78af4();
      }
      else {
        *(float *)(lVar4 + 0xdc) =
             *(float *)(lVar5 + 0x194) / *(float *)(*(long *)(lVar5 + 0x40) + 0x30);
        if (*(long *)(lVar4 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar22 = *(float *)(lVar5 + 0x1f8);
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(lVar4 + 0x10) + 0x88,0);
          fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(lVar4 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(lVar4 + 0x10) + 0x88,0);
            fVar15 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(lVar4 + 0x28) == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(lVar4 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              fVar23 = *(float *)(*(long *)(lVar4 + 0x28) + 0x1f0);
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                        (*(long *)(lVar4 + 0x10) + 0xf0,0);
              fVar16 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(long *)(lVar4 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                          (*(long *)(lVar4 + 0x10) + 0xf0,0);
                fVar17 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(float *)(lVar4 + 0xd0) == 0.0) {
                  uVar3 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(lVar4);
                }
                else {
                  uVar3 = (uint)(*(char *)(lVar4 + 0xd4) != '\0');
                }
                fVar20 = 1.0;
                if (uVar3 == 0) {
                  fVar20 = 0.0;
                }
                if (*(long *)(lVar4 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                            (*(long *)(lVar4 + 0x10) + 0x158,0);
                  fVar18 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  if (*(long *)(lVar4 + 0x10) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                              (*(long *)(lVar4 + 0x10) + 0x158,0);
                    fVar19 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                    fStack_354 = fVar18;
                    if (*(long *)(lVar4 + 0x28) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      fVar18 = 0.0;
                      if (*(char *)(*(long *)(lVar4 + 0x28) + 0x1d3) != '\0') {
                        fVar18 = 1.0;
                      }
                      fStack_358 = fVar19;
                      if (*(long *)(lVar4 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                  (*(long *)(lVar4 + 0x10) + 0x1c0,0);
                        fStack_360 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        if (*(long *)(lVar4 + 0x10) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          fStack_35c = fVar20;
                          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                    (*(long *)(lVar4 + 0x10) + 0x1c0,0);
                          fVar20 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                          lVar5 = *(long *)(lVar4 + 0x10);
                          if (lVar5 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar22,*(undefined4 *)(lVar5 + 0xec),
                                                     (1.0 - fVar22) * fVar14 + fVar22 * fVar15,0);
                            *(undefined4 *)(lVar5 + 0xec) = uVar21;
                            lVar5 = *(long *)(lVar4 + 0x10);
                            if (lVar5 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar23,*(undefined4 *)(lVar5 + 0x154),
                                                       (1.0 - fVar23) * fVar16 + fVar23 * fVar17,0);
                              *(undefined4 *)(lVar5 + 0x154) = uVar21;
                              lVar5 = *(long *)(lVar4 + 0x10);
                              if (lVar5 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fStack_35c,*(undefined4 *)(lVar5 + 0x1bc),
                                                         (1.0 - fStack_35c) * fStack_354 +
                                                         fStack_35c * fStack_358,0);
                                *(undefined4 *)(lVar5 + 0x1bc) = uVar21;
                                lVar5 = *(long *)(lVar4 + 0x10);
                                if (lVar5 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar18,*(undefined4 *)(lVar5 + 0x224),
                                                           (1.0 - fVar18) * fStack_360 +
                                                           fVar18 * fVar20,0);
                                  *(undefined4 *)(lVar5 + 0x224) = uVar21;
                                  lVar5 = *(long *)(lVar4 + 0x10);
                                  if (lVar5 == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_198,lVar5 + 0x20,lVar5 + 0x88,0);
                                    uStack_1b8 = uStack_150;
                                    uStack_1c0 = uStack_158;
                                    uStack_1a8 = uStack_140;
                                    uStack_1b0 = uStack_148;
                                    uStack_1a0 = uStack_138;
                                    uStack_1f8 = uStack_190;
                                    uStack_200 = uStack_198;
                                    uStack_1e8 = uStack_180;
                                    uStack_1f0 = uStack_188;
                                    uStack_1d8 = uStack_170;
                                    uStack_1e0 = uStack_178;
                                    uStack_1c8 = uStack_160;
                                    uStack_1d0 = uStack_168;
                                    *(undefined8 *)(lVar4 + 0x74) = uStack_160;
                                    *(undefined8 *)(lVar4 + 0x6c) = uStack_168;
                                    *(undefined8 *)(lVar4 + 0x84) = uStack_150;
                                    *(undefined8 *)(lVar4 + 0x7c) = uStack_158;
                                    *(undefined8 *)(lVar4 + 0x94) = uStack_140;
                                    *(undefined8 *)(lVar4 + 0x8c) = uStack_148;
                                    *(undefined8 *)(lVar4 + 0x9c) = uStack_138;
                                    *(undefined8 *)(lVar4 + 0x44) = uStack_190;
                                    *(undefined8 *)(lVar4 + 0x3c) = uStack_198;
                                    *(undefined8 *)(lVar4 + 0x54) = uStack_180;
                                    *(undefined8 *)(lVar4 + 0x4c) = uStack_188;
                                    *(undefined8 *)(lVar4 + 100) = uStack_170;
                                    *(undefined8 *)(lVar4 + 0x5c) = uStack_178;
                                    if (*(long *)(lVar4 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      puVar7 = (undefined8 *)(lVar4 + 0x3c);
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_198,puVar7,*(long *)(lVar4 + 0x10) + 0xf0,0
                                                );
                                      uStack_228 = uStack_150;
                                      uStack_230 = uStack_158;
                                      uStack_218 = uStack_140;
                                      uStack_220 = uStack_148;
                                      uStack_210 = uStack_138;
                                      uStack_268 = uStack_190;
                                      uStack_270 = uStack_198;
                                      uStack_258 = uStack_180;
                                      uStack_260 = uStack_188;
                                      uStack_248 = uStack_170;
                                      uStack_250 = uStack_178;
                                      uStack_238 = uStack_160;
                                      uStack_240 = uStack_168;
                                      *(undefined8 *)(lVar4 + 0x84) = uStack_150;
                                      *(undefined8 *)(lVar4 + 0x7c) = uStack_158;
                                      *(undefined8 *)(lVar4 + 0x94) = uStack_140;
                                      *(undefined8 *)(lVar4 + 0x8c) = uStack_148;
                                      *(undefined8 *)(lVar4 + 0x9c) = uStack_138;
                                      *(undefined8 *)(lVar4 + 0x44) = uStack_190;
                                      *puVar7 = uStack_198;
                                      *(undefined8 *)(lVar4 + 0x54) = uStack_180;
                                      *(undefined8 *)(lVar4 + 0x4c) = uStack_188;
                                      *(undefined8 *)(lVar4 + 100) = uStack_170;
                                      *(undefined8 *)(lVar4 + 0x5c) = uStack_178;
                                      *(undefined8 *)(lVar4 + 0x74) = uStack_160;
                                      *(undefined8 *)(lVar4 + 0x6c) = uStack_168;
                                      if (*(long *)(lVar4 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_198,puVar7,
                                                   *(long *)(lVar4 + 0x10) + 0x158,0);
                                        uStack_298 = uStack_150;
                                        uStack_2a0 = uStack_158;
                                        uStack_288 = uStack_140;
                                        uStack_290 = uStack_148;
                                        uStack_280 = uStack_138;
                                        uStack_2d8 = uStack_190;
                                        uStack_2e0 = uStack_198;
                                        uStack_2c8 = uStack_180;
                                        uStack_2d0 = uStack_188;
                                        uStack_2b8 = uStack_170;
                                        uStack_2c0 = uStack_178;
                                        uStack_2a8 = uStack_160;
                                        uStack_2b0 = uStack_168;
                                        *(undefined8 *)(lVar4 + 0x84) = uStack_150;
                                        *(undefined8 *)(lVar4 + 0x7c) = uStack_158;
                                        *(undefined8 *)(lVar4 + 0x94) = uStack_140;
                                        *(undefined8 *)(lVar4 + 0x8c) = uStack_148;
                                        *(undefined8 *)(lVar4 + 0x9c) = uStack_138;
                                        *(undefined8 *)(lVar4 + 0x44) = uStack_190;
                                        *puVar7 = uStack_198;
                                        *(undefined8 *)(lVar4 + 0x54) = uStack_180;
                                        *(undefined8 *)(lVar4 + 0x4c) = uStack_188;
                                        *(undefined8 *)(lVar4 + 100) = uStack_170;
                                        *(undefined8 *)(lVar4 + 0x5c) = uStack_178;
                                        *(undefined8 *)(lVar4 + 0x74) = uStack_160;
                                        *(undefined8 *)(lVar4 + 0x6c) = uStack_168;
                                        if (*(long *)(lVar4 + 0x10) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                    (&uStack_198,puVar7,
                                                     *(long *)(lVar4 + 0x10) + 0x1c0,0);
                                          uStack_308 = uStack_150;
                                          uStack_310 = uStack_158;
                                          uStack_2f8 = uStack_140;
                                          uStack_300 = uStack_148;
                                          uStack_2f0 = uStack_138;
                                          uStack_348 = uStack_190;
                                          uStack_350 = uStack_198;
                                          uStack_338 = uStack_180;
                                          uStack_340 = uStack_188;
                                          uStack_328 = uStack_170;
                                          uStack_330 = uStack_178;
                                          uStack_318 = uStack_160;
                                          uStack_320 = uStack_168;
                                          *(undefined8 *)(lVar4 + 0x84) = uStack_150;
                                          *(undefined8 *)(lVar4 + 0x7c) = uStack_158;
                                          *(undefined8 *)(lVar4 + 0x94) = uStack_140;
                                          *(undefined8 *)(lVar4 + 0x8c) = uStack_148;
                                          *(undefined8 *)(lVar4 + 0x9c) = uStack_138;
                                          *(undefined8 *)(lVar4 + 0x44) = uStack_190;
                                          *puVar7 = uStack_198;
                                          *(undefined8 *)(lVar4 + 0x54) = uStack_180;
                                          *(undefined8 *)(lVar4 + 0x4c) = uStack_188;
                                          *(undefined8 *)(lVar4 + 100) = uStack_170;
                                          *(undefined8 *)(lVar4 + 0x5c) = uStack_178;
                                          *(undefined8 *)(lVar4 + 0x74) = uStack_160;
                                          *(undefined8 *)(lVar4 + 0x6c) = uStack_168;
                                          lVar4 = *(long *)(lVar4 + 0x28);
                                          if (lVar4 == 0) {
                                            func_0x00f78af4();
                                          }
                                          else if (*(long *)(lVar4 + 0x48) == 0) {
                                            func_0x00f78af4();
                                          }
                                          else {
                                            lVar5 = *(long *)(lVar4 + 0x70);
                                            if (lVar5 != 0) {
                                              puVar13 = &UNK_015cb768;
                                              goto code_r0x032279f4;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
    (*pcVar1)();
  }
code_r0x015cb9ec:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar10,0);
  return;
}



// ============================================================
// RVA: 0x15cb114 | Atlas.Gameplay.Kart.KartFollowCamera.StopTracking
// ============================================================

/* WARNING: Possible PIC construction at 0x015cb19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cb764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cb1a0) */
/* WARNING: Removing unreachable block (ram,0x015cb1a4) */
/* WARNING: Removing unreachable block (ram,0x015cb1b8) */
/* WARNING: Removing unreachable block (ram,0x015cb768) */
/* WARNING: Removing unreachable block (ram,0x015cb76c) */
/* WARNING: Removing unreachable block (ram,0x015cbae4) */
/* WARNING: Removing unreachable block (ram,0x015cb778) */
/* WARNING: Removing unreachable block (ram,0x015cbaec) */
/* WARNING: Removing unreachable block (ram,0x015cb79c) */
/* WARNING: Removing unreachable block (ram,0x015cb824) */
/* WARNING: Removing unreachable block (ram,0x015cb828) */
/* WARNING: Removing unreachable block (ram,0x015cb82c) */
/* WARNING: Removing unreachable block (ram,0x015cb844) */
/* WARNING: Removing unreachable block (ram,0x015cb968) */
/* WARNING: Removing unreachable block (ram,0x015cb96c) */
/* WARNING: Removing unreachable block (ram,0x015cb970) */
/* WARNING: Removing unreachable block (ram,0x015cb980) */
/* WARNING: Removing unreachable block (ram,0x015cb988) */
/* WARNING: Removing unreachable block (ram,0x015cb9b0) */
/* WARNING: Removing unreachable block (ram,0x015cb994) */
/* WARNING: Removing unreachable block (ram,0x015cb9a0) */
/* WARNING: Removing unreachable block (ram,0x015cb9bc) */
/* WARNING: Removing unreachable block (ram,0x015cb9d0) */
/* WARNING: Removing unreachable block (ram,0x015cb9d4) */
/* WARNING: Removing unreachable block (ram,0x015cb9d8) */
/* WARNING: Removing unreachable block (ram,0x015cb9dc) */

void Atlas_Gameplay_Kart_KartFollowCamera__StopTracking
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 **ppuVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_350 [16];
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0x18) != 0) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(*(long *)(param_5 + 0x18),0);
    *(undefined1 *)(param_5 + 0x38) = 0;
    return;
  }
  auVar24 = func_0x00f78af4();
  lVar4 = auVar24._8_8_;
  lVar5 = auVar24._0_8_;
  puVar2 = &uStack_50;
  puStack_28 = &Atlas_Gameplay_Kart_KartFollowCamera__SetTarget;
  ppuVar12 = &puStack_30;
  *(long *)(lVar5 + 0x28) = lVar4;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar5 + 0x20) != 0) {
    uStack_50 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(*(long *)(lVar5 + 0x20),0);
    uStack_4c = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_50,0);
    *(undefined4 *)(lVar5 + 0xa4) = param_2;
    unaff_x20 = lVar4;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x70), lVar4 != 0)) {
      puVar13 = &UNK_015cb1a0;
      goto code_r0x032279f4;
    }
  }
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = lVar5;
  lVar5 = func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
  lVar4 = *(long *)(lVar5 + 0x70);
  ppuStack_60 = ppuVar12;
  if (lVar4 != 0) {
    puVar2 = &uStack_50;
    puVar13 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
code_r0x032279f4:
    *(long *)((long)puVar2 + -0x20) = auVar24._8_8_;
    *(long *)((long)puVar2 + -0x18) = auVar24._0_8_;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar12;
    *(undefined **)((long)puVar2 + -8) = puVar13;
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar4);
    return;
  }
  auVar24 = func_0x00f78af4();
  plVar8 = auVar24._8_8_;
  lVar5 = auVar24._0_8_;
  puStack_68 = &Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate;
  ppuVar12 = &puStack_70;
  puVar2 = (undefined4 *)auStack_350;
  puStack_70 = (undefined1 *)&ppuStack_60;
  if ((bRam0000000003eb532c & 1) == 0) {
    puStack_70 = (undefined1 *)&ppuStack_60;
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  auVar24._8_8_ = lVar5;
  auVar24._0_8_ = uVar10;
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
  uVar11 = *(undefined8 *)(lVar5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
  if ((uVar6 & 1) != 0) {
    if (plVar8 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x015cb348;
          }
          piVar9 = piVar9 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015cb348:
      fVar14 = (float)(*(code *)*puVar7)(plVar8,puVar7[1]);
      if (fVar14 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto code_r0x015cb9ec;
      lVar4 = *(long *)(lVar5 + 0x28);
      if (lVar4 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar4 + 0x40) == 0) {
        func_0x00f78af4();
      }
      else {
        *(float *)(lVar5 + 0xdc) =
             *(float *)(lVar4 + 0x194) / *(float *)(*(long *)(lVar4 + 0x40) + 0x30);
        if (*(long *)(lVar5 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar22 = *(float *)(lVar4 + 0x1f8);
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(lVar5 + 0x10) + 0x88,0);
          fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(lVar5 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(lVar5 + 0x10) + 0x88,0);
            fVar15 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(lVar5 + 0x28) == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(lVar5 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              fVar23 = *(float *)(*(long *)(lVar5 + 0x28) + 0x1f0);
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                        (*(long *)(lVar5 + 0x10) + 0xf0,0);
              fVar16 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(long *)(lVar5 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                          (*(long *)(lVar5 + 0x10) + 0xf0,0);
                fVar17 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(float *)(lVar5 + 0xd0) == 0.0) {
                  uVar3 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(lVar5);
                }
                else {
                  uVar3 = (uint)(*(char *)(lVar5 + 0xd4) != '\0');
                }
                fVar20 = 1.0;
                if (uVar3 == 0) {
                  fVar20 = 0.0;
                }
                if (*(long *)(lVar5 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                            (*(long *)(lVar5 + 0x10) + 0x158,0);
                  fVar18 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  if (*(long *)(lVar5 + 0x10) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                              (*(long *)(lVar5 + 0x10) + 0x158,0);
                    fVar19 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                    fStack_334 = fVar18;
                    if (*(long *)(lVar5 + 0x28) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      fVar18 = 0.0;
                      if (*(char *)(*(long *)(lVar5 + 0x28) + 0x1d3) != '\0') {
                        fVar18 = 1.0;
                      }
                      fStack_338 = fVar19;
                      if (*(long *)(lVar5 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                  (*(long *)(lVar5 + 0x10) + 0x1c0,0);
                        fStack_340 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        if (*(long *)(lVar5 + 0x10) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          fStack_33c = fVar20;
                          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                    (*(long *)(lVar5 + 0x10) + 0x1c0,0);
                          fVar20 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                          lVar4 = *(long *)(lVar5 + 0x10);
                          if (lVar4 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar22,*(undefined4 *)(lVar4 + 0xec),
                                                     (1.0 - fVar22) * fVar14 + fVar22 * fVar15,0);
                            *(undefined4 *)(lVar4 + 0xec) = uVar21;
                            lVar4 = *(long *)(lVar5 + 0x10);
                            if (lVar4 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar23,*(undefined4 *)(lVar4 + 0x154),
                                                       (1.0 - fVar23) * fVar16 + fVar23 * fVar17,0);
                              *(undefined4 *)(lVar4 + 0x154) = uVar21;
                              lVar4 = *(long *)(lVar5 + 0x10);
                              if (lVar4 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fStack_33c,*(undefined4 *)(lVar4 + 0x1bc),
                                                         (1.0 - fStack_33c) * fStack_334 +
                                                         fStack_33c * fStack_338,0);
                                *(undefined4 *)(lVar4 + 0x1bc) = uVar21;
                                lVar4 = *(long *)(lVar5 + 0x10);
                                if (lVar4 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar21 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar18,*(undefined4 *)(lVar4 + 0x224),
                                                           (1.0 - fVar18) * fStack_340 +
                                                           fVar18 * fVar20,0);
                                  *(undefined4 *)(lVar4 + 0x224) = uVar21;
                                  lVar4 = *(long *)(lVar5 + 0x10);
                                  if (lVar4 == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_178,lVar4 + 0x20,lVar4 + 0x88,0);
                                    uStack_198 = uStack_130;
                                    uStack_1a0 = uStack_138;
                                    uStack_188 = uStack_120;
                                    uStack_190 = uStack_128;
                                    uStack_180 = uStack_118;
                                    uStack_1d8 = uStack_170;
                                    uStack_1e0 = uStack_178;
                                    uStack_1c8 = uStack_160;
                                    uStack_1d0 = uStack_168;
                                    uStack_1b8 = uStack_150;
                                    uStack_1c0 = uStack_158;
                                    uStack_1a8 = uStack_140;
                                    uStack_1b0 = uStack_148;
                                    *(undefined8 *)(lVar5 + 0x74) = uStack_140;
                                    *(undefined8 *)(lVar5 + 0x6c) = uStack_148;
                                    *(undefined8 *)(lVar5 + 0x84) = uStack_130;
                                    *(undefined8 *)(lVar5 + 0x7c) = uStack_138;
                                    *(undefined8 *)(lVar5 + 0x94) = uStack_120;
                                    *(undefined8 *)(lVar5 + 0x8c) = uStack_128;
                                    *(undefined8 *)(lVar5 + 0x9c) = uStack_118;
                                    *(undefined8 *)(lVar5 + 0x44) = uStack_170;
                                    *(undefined8 *)(lVar5 + 0x3c) = uStack_178;
                                    *(undefined8 *)(lVar5 + 0x54) = uStack_160;
                                    *(undefined8 *)(lVar5 + 0x4c) = uStack_168;
                                    *(undefined8 *)(lVar5 + 100) = uStack_150;
                                    *(undefined8 *)(lVar5 + 0x5c) = uStack_158;
                                    if (*(long *)(lVar5 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      puVar7 = (undefined8 *)(lVar5 + 0x3c);
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_178,puVar7,*(long *)(lVar5 + 0x10) + 0xf0,0
                                                );
                                      uStack_208 = uStack_130;
                                      uStack_210 = uStack_138;
                                      uStack_1f8 = uStack_120;
                                      uStack_200 = uStack_128;
                                      uStack_1f0 = uStack_118;
                                      uStack_248 = uStack_170;
                                      uStack_250 = uStack_178;
                                      uStack_238 = uStack_160;
                                      uStack_240 = uStack_168;
                                      uStack_228 = uStack_150;
                                      uStack_230 = uStack_158;
                                      uStack_218 = uStack_140;
                                      uStack_220 = uStack_148;
                                      *(undefined8 *)(lVar5 + 0x84) = uStack_130;
                                      *(undefined8 *)(lVar5 + 0x7c) = uStack_138;
                                      *(undefined8 *)(lVar5 + 0x94) = uStack_120;
                                      *(undefined8 *)(lVar5 + 0x8c) = uStack_128;
                                      *(undefined8 *)(lVar5 + 0x9c) = uStack_118;
                                      *(undefined8 *)(lVar5 + 0x44) = uStack_170;
                                      *puVar7 = uStack_178;
                                      *(undefined8 *)(lVar5 + 0x54) = uStack_160;
                                      *(undefined8 *)(lVar5 + 0x4c) = uStack_168;
                                      *(undefined8 *)(lVar5 + 100) = uStack_150;
                                      *(undefined8 *)(lVar5 + 0x5c) = uStack_158;
                                      *(undefined8 *)(lVar5 + 0x74) = uStack_140;
                                      *(undefined8 *)(lVar5 + 0x6c) = uStack_148;
                                      if (*(long *)(lVar5 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_178,puVar7,
                                                   *(long *)(lVar5 + 0x10) + 0x158,0);
                                        uStack_278 = uStack_130;
                                        uStack_280 = uStack_138;
                                        uStack_268 = uStack_120;
                                        uStack_270 = uStack_128;
                                        uStack_260 = uStack_118;
                                        uStack_2b8 = uStack_170;
                                        uStack_2c0 = uStack_178;
                                        uStack_2a8 = uStack_160;
                                        uStack_2b0 = uStack_168;
                                        uStack_298 = uStack_150;
                                        uStack_2a0 = uStack_158;
                                        uStack_288 = uStack_140;
                                        uStack_290 = uStack_148;
                                        *(undefined8 *)(lVar5 + 0x84) = uStack_130;
                                        *(undefined8 *)(lVar5 + 0x7c) = uStack_138;
                                        *(undefined8 *)(lVar5 + 0x94) = uStack_120;
                                        *(undefined8 *)(lVar5 + 0x8c) = uStack_128;
                                        *(undefined8 *)(lVar5 + 0x9c) = uStack_118;
                                        *(undefined8 *)(lVar5 + 0x44) = uStack_170;
                                        *puVar7 = uStack_178;
                                        *(undefined8 *)(lVar5 + 0x54) = uStack_160;
                                        *(undefined8 *)(lVar5 + 0x4c) = uStack_168;
                                        *(undefined8 *)(lVar5 + 100) = uStack_150;
                                        *(undefined8 *)(lVar5 + 0x5c) = uStack_158;
                                        *(undefined8 *)(lVar5 + 0x74) = uStack_140;
                                        *(undefined8 *)(lVar5 + 0x6c) = uStack_148;
                                        if (*(long *)(lVar5 + 0x10) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                    (&uStack_178,puVar7,
                                                     *(long *)(lVar5 + 0x10) + 0x1c0,0);
                                          uStack_2e8 = uStack_130;
                                          uStack_2f0 = uStack_138;
                                          uStack_2d8 = uStack_120;
                                          uStack_2e0 = uStack_128;
                                          uStack_2d0 = uStack_118;
                                          uStack_328 = uStack_170;
                                          uStack_330 = uStack_178;
                                          uStack_318 = uStack_160;
                                          uStack_320 = uStack_168;
                                          uStack_308 = uStack_150;
                                          uStack_310 = uStack_158;
                                          uStack_2f8 = uStack_140;
                                          uStack_300 = uStack_148;
                                          *(undefined8 *)(lVar5 + 0x84) = uStack_130;
                                          *(undefined8 *)(lVar5 + 0x7c) = uStack_138;
                                          *(undefined8 *)(lVar5 + 0x94) = uStack_120;
                                          *(undefined8 *)(lVar5 + 0x8c) = uStack_128;
                                          *(undefined8 *)(lVar5 + 0x9c) = uStack_118;
                                          *(undefined8 *)(lVar5 + 0x44) = uStack_170;
                                          *puVar7 = uStack_178;
                                          *(undefined8 *)(lVar5 + 0x54) = uStack_160;
                                          *(undefined8 *)(lVar5 + 0x4c) = uStack_168;
                                          *(undefined8 *)(lVar5 + 100) = uStack_150;
                                          *(undefined8 *)(lVar5 + 0x5c) = uStack_158;
                                          *(undefined8 *)(lVar5 + 0x74) = uStack_140;
                                          *(undefined8 *)(lVar5 + 0x6c) = uStack_148;
                                          lVar5 = *(long *)(lVar5 + 0x28);
                                          if (lVar5 == 0) {
                                            func_0x00f78af4();
                                          }
                                          else if (*(long *)(lVar5 + 0x48) == 0) {
                                            func_0x00f78af4();
                                          }
                                          else {
                                            lVar4 = *(long *)(lVar5 + 0x70);
                                            if (lVar4 != 0) {
                                              puVar13 = &UNK_015cb768;
                                              goto code_r0x032279f4;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
    (*pcVar1)();
  }
code_r0x015cb9ec:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar10,0);
  return;
}



// ============================================================
// RVA: 0x15cb148 | Atlas.Gameplay.Kart.KartFollowCamera.SetTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x015cb19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cb764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cb1a0) */
/* WARNING: Removing unreachable block (ram,0x015cb1a4) */
/* WARNING: Removing unreachable block (ram,0x015cb1b8) */
/* WARNING: Removing unreachable block (ram,0x015cb768) */
/* WARNING: Removing unreachable block (ram,0x015cb76c) */
/* WARNING: Removing unreachable block (ram,0x015cbae4) */
/* WARNING: Removing unreachable block (ram,0x015cb778) */
/* WARNING: Removing unreachable block (ram,0x015cbaec) */
/* WARNING: Removing unreachable block (ram,0x015cb79c) */
/* WARNING: Removing unreachable block (ram,0x015cb824) */
/* WARNING: Removing unreachable block (ram,0x015cb828) */
/* WARNING: Removing unreachable block (ram,0x015cb82c) */
/* WARNING: Removing unreachable block (ram,0x015cb844) */
/* WARNING: Removing unreachable block (ram,0x015cb968) */
/* WARNING: Removing unreachable block (ram,0x015cb96c) */
/* WARNING: Removing unreachable block (ram,0x015cb970) */
/* WARNING: Removing unreachable block (ram,0x015cb980) */
/* WARNING: Removing unreachable block (ram,0x015cb988) */
/* WARNING: Removing unreachable block (ram,0x015cb9b0) */
/* WARNING: Removing unreachable block (ram,0x015cb994) */
/* WARNING: Removing unreachable block (ram,0x015cb9a0) */
/* WARNING: Removing unreachable block (ram,0x015cb9bc) */
/* WARNING: Removing unreachable block (ram,0x015cb9d0) */
/* WARNING: Removing unreachable block (ram,0x015cb9d4) */
/* WARNING: Removing unreachable block (ram,0x015cb9d8) */
/* WARNING: Removing unreachable block (ram,0x015cb9dc) */

void Atlas_Gameplay_Kart_KartFollowCamera__SetTarget
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_330 [16];
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = &uStack_30;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  *(long *)(param_5 + 0x28) = param_6;
  if (*(long *)(param_5 + 0x20) != 0) {
    uStack_28 = param_3;
    uStack_24 = param_4;
    uStack_30 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(*(long *)(param_5 + 0x20),0);
    uStack_2c = param_2;
    /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_30,0);
    *(undefined4 *)(param_5 + 0xa4) = param_2;
    unaff_x20 = param_6;
    if ((param_6 != 0) && (lVar4 = *(long *)(param_6 + 0x70), lVar4 != 0)) {
      puVar11 = (undefined *)0x15cb1a0;
      puVar2 = &uStack_30;
      goto code_r0x032279f4;
    }
  }
  param_6 = unaff_x20;
  lVar4 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
  lVar4 = *(long *)(lVar4 + 0x70);
  ppuStack_40 = ppuVar10;
  if (lVar4 != 0) {
    puVar11 = &Atlas_Gameplay_Kart_KartPhysics__get_GameObject;
code_r0x032279f4:
    *(long *)((long)puVar2 + -0x20) = param_6;
    *(long *)((long)puVar2 + -0x18) = param_5;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar10;
    *(undefined **)((long)puVar2 + -8) = puVar11;
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar4);
    return;
  }
  auVar22 = func_0x00f78af4();
  plVar7 = auVar22._8_8_;
  param_6 = auVar22._0_8_;
  puStack_48 = &Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate;
  ppuVar10 = &puStack_50;
  puVar2 = (undefined4 *)auStack_330;
  puStack_50 = (undefined1 *)&ppuStack_40;
  if ((bRam0000000003eb532c & 1) == 0) {
    puStack_50 = (undefined1 *)&ppuStack_40;
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_5 = **(long **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(param_5,0);
  uVar9 = *(undefined8 *)(param_6 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
  if ((uVar5 & 1) != 0) {
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x015cb348;
          }
          piVar8 = piVar8 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015cb348:
      fVar12 = (float)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (fVar12 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto code_r0x015cb9ec;
      lVar4 = *(long *)(param_6 + 0x28);
      if (lVar4 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar4 + 0x40) == 0) {
        func_0x00f78af4();
      }
      else {
        *(float *)(param_6 + 0xdc) =
             *(float *)(lVar4 + 0x194) / *(float *)(*(long *)(lVar4 + 0x40) + 0x30);
        if (*(long *)(param_6 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar20 = *(float *)(lVar4 + 0x1f8);
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(param_6 + 0x10) + 0x88,0);
          fVar12 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(param_6 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(param_6 + 0x10) + 0x88,0);
            fVar13 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(param_6 + 0x28) == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(param_6 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              fVar21 = *(float *)(*(long *)(param_6 + 0x28) + 0x1f0);
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                        (*(long *)(param_6 + 0x10) + 0xf0,0);
              fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(long *)(param_6 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                          (*(long *)(param_6 + 0x10) + 0xf0,0);
                fVar15 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(float *)(param_6 + 0xd0) == 0.0) {
                  uVar3 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(param_6);
                }
                else {
                  uVar3 = (uint)(*(char *)(param_6 + 0xd4) != '\0');
                }
                fVar18 = 1.0;
                if (uVar3 == 0) {
                  fVar18 = 0.0;
                }
                if (*(long *)(param_6 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                            (*(long *)(param_6 + 0x10) + 0x158,0);
                  fVar16 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  if (*(long *)(param_6 + 0x10) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                              (*(long *)(param_6 + 0x10) + 0x158,0);
                    fVar17 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                    fStack_314 = fVar16;
                    if (*(long *)(param_6 + 0x28) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      fVar16 = 0.0;
                      if (*(char *)(*(long *)(param_6 + 0x28) + 0x1d3) != '\0') {
                        fVar16 = 1.0;
                      }
                      fStack_318 = fVar17;
                      if (*(long *)(param_6 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                  (*(long *)(param_6 + 0x10) + 0x1c0,0);
                        fStack_320 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        if (*(long *)(param_6 + 0x10) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          fStack_31c = fVar18;
                          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                    (*(long *)(param_6 + 0x10) + 0x1c0,0);
                          fVar18 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                          lVar4 = *(long *)(param_6 + 0x10);
                          if (lVar4 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar19 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar20,*(undefined4 *)(lVar4 + 0xec),
                                                     (1.0 - fVar20) * fVar12 + fVar20 * fVar13,0);
                            *(undefined4 *)(lVar4 + 0xec) = uVar19;
                            lVar4 = *(long *)(param_6 + 0x10);
                            if (lVar4 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar19 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar21,*(undefined4 *)(lVar4 + 0x154),
                                                       (1.0 - fVar21) * fVar14 + fVar21 * fVar15,0);
                              *(undefined4 *)(lVar4 + 0x154) = uVar19;
                              lVar4 = *(long *)(param_6 + 0x10);
                              if (lVar4 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar19 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fStack_31c,*(undefined4 *)(lVar4 + 0x1bc),
                                                         (1.0 - fStack_31c) * fStack_314 +
                                                         fStack_31c * fStack_318,0);
                                *(undefined4 *)(lVar4 + 0x1bc) = uVar19;
                                lVar4 = *(long *)(param_6 + 0x10);
                                if (lVar4 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar19 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar16,*(undefined4 *)(lVar4 + 0x224),
                                                           (1.0 - fVar16) * fStack_320 +
                                                           fVar16 * fVar18,0);
                                  *(undefined4 *)(lVar4 + 0x224) = uVar19;
                                  lVar4 = *(long *)(param_6 + 0x10);
                                  if (lVar4 == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_158,lVar4 + 0x20,lVar4 + 0x88,0);
                                    uStack_178 = uStack_110;
                                    uStack_180 = uStack_118;
                                    uStack_168 = uStack_100;
                                    uStack_170 = uStack_108;
                                    uStack_160 = uStack_f8;
                                    uStack_1b8 = uStack_150;
                                    uStack_1c0 = uStack_158;
                                    uStack_1a8 = uStack_140;
                                    uStack_1b0 = uStack_148;
                                    uStack_198 = uStack_130;
                                    uStack_1a0 = uStack_138;
                                    uStack_188 = uStack_120;
                                    uStack_190 = uStack_128;
                                    *(undefined8 *)(param_6 + 0x74) = uStack_120;
                                    *(undefined8 *)(param_6 + 0x6c) = uStack_128;
                                    *(undefined8 *)(param_6 + 0x84) = uStack_110;
                                    *(undefined8 *)(param_6 + 0x7c) = uStack_118;
                                    *(undefined8 *)(param_6 + 0x94) = uStack_100;
                                    *(undefined8 *)(param_6 + 0x8c) = uStack_108;
                                    *(undefined8 *)(param_6 + 0x9c) = uStack_f8;
                                    *(undefined8 *)(param_6 + 0x44) = uStack_150;
                                    *(undefined8 *)(param_6 + 0x3c) = uStack_158;
                                    *(undefined8 *)(param_6 + 0x54) = uStack_140;
                                    *(undefined8 *)(param_6 + 0x4c) = uStack_148;
                                    *(undefined8 *)(param_6 + 100) = uStack_130;
                                    *(undefined8 *)(param_6 + 0x5c) = uStack_138;
                                    if (*(long *)(param_6 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      puVar6 = (undefined8 *)(param_6 + 0x3c);
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_158,puVar6,*(long *)(param_6 + 0x10) + 0xf0
                                                 ,0);
                                      uStack_1e8 = uStack_110;
                                      uStack_1f0 = uStack_118;
                                      uStack_1d8 = uStack_100;
                                      uStack_1e0 = uStack_108;
                                      uStack_1d0 = uStack_f8;
                                      uStack_228 = uStack_150;
                                      uStack_230 = uStack_158;
                                      uStack_218 = uStack_140;
                                      uStack_220 = uStack_148;
                                      uStack_208 = uStack_130;
                                      uStack_210 = uStack_138;
                                      uStack_1f8 = uStack_120;
                                      uStack_200 = uStack_128;
                                      *(undefined8 *)(param_6 + 0x84) = uStack_110;
                                      *(undefined8 *)(param_6 + 0x7c) = uStack_118;
                                      *(undefined8 *)(param_6 + 0x94) = uStack_100;
                                      *(undefined8 *)(param_6 + 0x8c) = uStack_108;
                                      *(undefined8 *)(param_6 + 0x9c) = uStack_f8;
                                      *(undefined8 *)(param_6 + 0x44) = uStack_150;
                                      *puVar6 = uStack_158;
                                      *(undefined8 *)(param_6 + 0x54) = uStack_140;
                                      *(undefined8 *)(param_6 + 0x4c) = uStack_148;
                                      *(undefined8 *)(param_6 + 100) = uStack_130;
                                      *(undefined8 *)(param_6 + 0x5c) = uStack_138;
                                      *(undefined8 *)(param_6 + 0x74) = uStack_120;
                                      *(undefined8 *)(param_6 + 0x6c) = uStack_128;
                                      if (*(long *)(param_6 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_158,puVar6,
                                                   *(long *)(param_6 + 0x10) + 0x158,0);
                                        uStack_258 = uStack_110;
                                        uStack_260 = uStack_118;
                                        uStack_248 = uStack_100;
                                        uStack_250 = uStack_108;
                                        uStack_240 = uStack_f8;
                                        uStack_298 = uStack_150;
                                        uStack_2a0 = uStack_158;
                                        uStack_288 = uStack_140;
                                        uStack_290 = uStack_148;
                                        uStack_278 = uStack_130;
                                        uStack_280 = uStack_138;
                                        uStack_268 = uStack_120;
                                        uStack_270 = uStack_128;
                                        *(undefined8 *)(param_6 + 0x84) = uStack_110;
                                        *(undefined8 *)(param_6 + 0x7c) = uStack_118;
                                        *(undefined8 *)(param_6 + 0x94) = uStack_100;
                                        *(undefined8 *)(param_6 + 0x8c) = uStack_108;
                                        *(undefined8 *)(param_6 + 0x9c) = uStack_f8;
                                        *(undefined8 *)(param_6 + 0x44) = uStack_150;
                                        *puVar6 = uStack_158;
                                        *(undefined8 *)(param_6 + 0x54) = uStack_140;
                                        *(undefined8 *)(param_6 + 0x4c) = uStack_148;
                                        *(undefined8 *)(param_6 + 100) = uStack_130;
                                        *(undefined8 *)(param_6 + 0x5c) = uStack_138;
                                        *(undefined8 *)(param_6 + 0x74) = uStack_120;
                                        *(undefined8 *)(param_6 + 0x6c) = uStack_128;
                                        if (*(long *)(param_6 + 0x10) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                    (&uStack_158,puVar6,
                                                     *(long *)(param_6 + 0x10) + 0x1c0,0);
                                          uStack_2c8 = uStack_110;
                                          uStack_2d0 = uStack_118;
                                          uStack_2b8 = uStack_100;
                                          uStack_2c0 = uStack_108;
                                          uStack_2b0 = uStack_f8;
                                          uStack_308 = uStack_150;
                                          uStack_310 = uStack_158;
                                          uStack_2f8 = uStack_140;
                                          uStack_300 = uStack_148;
                                          uStack_2e8 = uStack_130;
                                          uStack_2f0 = uStack_138;
                                          uStack_2d8 = uStack_120;
                                          uStack_2e0 = uStack_128;
                                          *(undefined8 *)(param_6 + 0x84) = uStack_110;
                                          *(undefined8 *)(param_6 + 0x7c) = uStack_118;
                                          *(undefined8 *)(param_6 + 0x94) = uStack_100;
                                          *(undefined8 *)(param_6 + 0x8c) = uStack_108;
                                          *(undefined8 *)(param_6 + 0x9c) = uStack_f8;
                                          *(undefined8 *)(param_6 + 0x44) = uStack_150;
                                          *puVar6 = uStack_158;
                                          *(undefined8 *)(param_6 + 0x54) = uStack_140;
                                          *(undefined8 *)(param_6 + 0x4c) = uStack_148;
                                          *(undefined8 *)(param_6 + 100) = uStack_130;
                                          *(undefined8 *)(param_6 + 0x5c) = uStack_138;
                                          *(undefined8 *)(param_6 + 0x74) = uStack_120;
                                          *(undefined8 *)(param_6 + 0x6c) = uStack_128;
                                          lVar4 = *(long *)(param_6 + 0x28);
                                          if (lVar4 == 0) {
                                            func_0x00f78af4();
                                          }
                                          else if (*(long *)(lVar4 + 0x48) == 0) {
                                            func_0x00f78af4();
                                          }
                                          else {
                                            lVar4 = *(long *)(lVar4 + 0x70);
                                            if (lVar4 != 0) {
                                              puVar11 = &UNK_015cb768;
                                              goto code_r0x032279f4;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
    (*pcVar1)();
  }
code_r0x015cb9ec:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(param_5,0);
  return;
}



// ============================================================
// RVA: 0x15cb1fc | Atlas.Gameplay.Kart.KartFollowCamera.LateUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate(long param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  if ((bRam0000000003eb532c & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  fStack_98 = 0.0;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fStack_a8 = 0.0;
  uStack_b0 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
  if ((uVar3 & 1) != 0) {
    if (param_2 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      lVar5 = *param_2;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_015cb348;
          }
          piVar6 = piVar6 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_015cb348:
      fVar9 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      if (fVar9 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto LAB_015cb9ec;
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar5 + 0x40) == 0) {
        func_0x00f78af4();
      }
      else {
        *(float *)(param_1 + 0xdc) =
             *(float *)(lVar5 + 0x194) / *(float *)(*(long *)(lVar5 + 0x40) + 0x30);
        if (*(long *)(param_1 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar21 = *(float *)(lVar5 + 0x1f8);
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(*(long *)(param_1 + 0x10) + 0x88,0);
          fVar9 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(param_1 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(*(long *)(param_1 + 0x10) + 0x88,0);
            fVar10 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(param_1 + 0x28) == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(param_1 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              fVar22 = *(float *)(*(long *)(param_1 + 0x28) + 0x1f0);
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                        (*(long *)(param_1 + 0x10) + 0xf0,0);
              fVar11 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(long *)(param_1 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                          (*(long *)(param_1 + 0x10) + 0xf0,0);
                fVar12 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(float *)(param_1 + 0xd0) == 0.0) {
                  uVar2 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(param_1);
                }
                else {
                  uVar2 = (uint)(*(char *)(param_1 + 0xd4) != '\0');
                }
                fVar20 = 1.0;
                if (uVar2 == 0) {
                  fVar20 = 0.0;
                }
                if (*(long *)(param_1 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                            (*(long *)(param_1 + 0x10) + 0x158,0);
                  fVar13 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  if (*(long *)(param_1 + 0x10) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                              (*(long *)(param_1 + 0x10) + 0x158,0);
                    fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                    if (*(long *)(param_1 + 0x28) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      fVar15 = 0.0;
                      if (*(char *)(*(long *)(param_1 + 0x28) + 0x1d3) != '\0') {
                        fVar15 = 1.0;
                      }
                      if (*(long *)(param_1 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                  (*(long *)(param_1 + 0x10) + 0x1c0,0);
                        fVar16 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        if (*(long *)(param_1 + 0x10) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                    (*(long *)(param_1 + 0x10) + 0x1c0,0);
                          fVar17 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                          lVar5 = *(long *)(param_1 + 0x10);
                          if (lVar5 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar18 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar21,*(undefined4 *)(lVar5 + 0xec),
                                                     (1.0 - fVar21) * fVar9 + fVar21 * fVar10,0);
                            *(undefined4 *)(lVar5 + 0xec) = uVar18;
                            lVar5 = *(long *)(param_1 + 0x10);
                            if (lVar5 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar18 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar22,*(undefined4 *)(lVar5 + 0x154),
                                                       (1.0 - fVar22) * fVar11 + fVar22 * fVar12,0);
                              *(undefined4 *)(lVar5 + 0x154) = uVar18;
                              lVar5 = *(long *)(param_1 + 0x10);
                              if (lVar5 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar18 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar20,*(undefined4 *)(lVar5 + 0x1bc),
                                                         (1.0 - fVar20) * fVar13 + fVar20 * fVar14,0
                                                        );
                                *(undefined4 *)(lVar5 + 0x1bc) = uVar18;
                                lVar5 = *(long *)(param_1 + 0x10);
                                if (lVar5 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar18 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar15,*(undefined4 *)(lVar5 + 0x224),
                                                           (1.0 - fVar15) * fVar16 + fVar15 * fVar17
                                                           ,0);
                                  *(undefined4 *)(lVar5 + 0x224) = uVar18;
                                  lVar5 = *(long *)(param_1 + 0x10);
                                  if (lVar5 == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_118,lVar5 + 0x20,lVar5 + 0x88,0);
                                    *(undefined8 *)(param_1 + 0x74) = uStack_e0;
                                    *(undefined8 *)(param_1 + 0x6c) = uStack_e8;
                                    *(undefined8 *)(param_1 + 0x84) = uStack_d0;
                                    *(undefined8 *)(param_1 + 0x7c) = uStack_d8;
                                    *(undefined8 *)(param_1 + 0x94) = uStack_c0;
                                    *(undefined8 *)(param_1 + 0x8c) = uStack_c8;
                                    *(undefined8 *)(param_1 + 0x9c) = uStack_b8;
                                    *(undefined8 *)(param_1 + 0x44) = uStack_110;
                                    *(undefined8 *)(param_1 + 0x3c) = uStack_118;
                                    *(undefined8 *)(param_1 + 0x54) = uStack_100;
                                    *(undefined8 *)(param_1 + 0x4c) = uStack_108;
                                    *(undefined8 *)(param_1 + 100) = uStack_f0;
                                    *(undefined8 *)(param_1 + 0x5c) = uStack_f8;
                                    if (*(long *)(param_1 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      puVar4 = (undefined8 *)(param_1 + 0x3c);
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_118,puVar4,*(long *)(param_1 + 0x10) + 0xf0
                                                 ,0);
                                      *(undefined8 *)(param_1 + 0x84) = uStack_d0;
                                      *(undefined8 *)(param_1 + 0x7c) = uStack_d8;
                                      *(undefined8 *)(param_1 + 0x94) = uStack_c0;
                                      *(undefined8 *)(param_1 + 0x8c) = uStack_c8;
                                      *(undefined8 *)(param_1 + 0x9c) = uStack_b8;
                                      *(undefined8 *)(param_1 + 0x44) = uStack_110;
                                      *puVar4 = uStack_118;
                                      *(undefined8 *)(param_1 + 0x54) = uStack_100;
                                      *(undefined8 *)(param_1 + 0x4c) = uStack_108;
                                      *(undefined8 *)(param_1 + 100) = uStack_f0;
                                      *(undefined8 *)(param_1 + 0x5c) = uStack_f8;
                                      *(undefined8 *)(param_1 + 0x74) = uStack_e0;
                                      *(undefined8 *)(param_1 + 0x6c) = uStack_e8;
                                      if (*(long *)(param_1 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_118,puVar4,
                                                   *(long *)(param_1 + 0x10) + 0x158,0);
                                        *(undefined8 *)(param_1 + 0x84) = uStack_d0;
                                        *(undefined8 *)(param_1 + 0x7c) = uStack_d8;
                                        *(undefined8 *)(param_1 + 0x94) = uStack_c0;
                                        *(undefined8 *)(param_1 + 0x8c) = uStack_c8;
                                        *(undefined8 *)(param_1 + 0x9c) = uStack_b8;
                                        *(undefined8 *)(param_1 + 0x44) = uStack_110;
                                        *puVar4 = uStack_118;
                                        *(undefined8 *)(param_1 + 0x54) = uStack_100;
                                        *(undefined8 *)(param_1 + 0x4c) = uStack_108;
                                        *(undefined8 *)(param_1 + 100) = uStack_f0;
                                        *(undefined8 *)(param_1 + 0x5c) = uStack_f8;
                                        *(undefined8 *)(param_1 + 0x74) = uStack_e0;
                                        *(undefined8 *)(param_1 + 0x6c) = uStack_e8;
                                        if (*(long *)(param_1 + 0x10) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                    (&uStack_118,puVar4,
                                                     *(long *)(param_1 + 0x10) + 0x1c0,0);
                                          *(undefined8 *)(param_1 + 0x84) = uStack_d0;
                                          *(undefined8 *)(param_1 + 0x7c) = uStack_d8;
                                          *(undefined8 *)(param_1 + 0x94) = uStack_c0;
                                          *(undefined8 *)(param_1 + 0x8c) = uStack_c8;
                                          *(undefined8 *)(param_1 + 0x9c) = uStack_b8;
                                          *(undefined8 *)(param_1 + 0x44) = uStack_110;
                                          *puVar4 = uStack_118;
                                          *(undefined8 *)(param_1 + 0x54) = uStack_100;
                                          *(undefined8 *)(param_1 + 0x4c) = uStack_108;
                                          *(undefined8 *)(param_1 + 100) = uStack_f0;
                                          *(undefined8 *)(param_1 + 0x5c) = uStack_f8;
                                          *(undefined8 *)(param_1 + 0x74) = uStack_e0;
                                          *(undefined8 *)(param_1 + 0x6c) = uStack_e8;
                                          lVar5 = *(long *)(param_1 + 0x28);
                                          if (lVar5 == 0) {
                                            func_0x00f78af4();
                                          }
                                          else if (*(long *)(lVar5 + 0x48) == 0) {
                                            func_0x00f78af4();
                                          }
                                          else {
                                            fVar9 = 1.0;
                                            if ((0.0 < *(float *)(*(long *)(lVar5 + 0x48) + 0x54))
                                               && (fVar9 = 1.0, *(float *)(param_1 + 0xd0) == 0.0))
                                            {
                                              fVar9 = -1.0;
                                            }
                                            if (*(long *)(lVar5 + 0x70) != 0) {
                                              lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x70),0);
                                              fVar10 = (float)uStack_118;
                                              fVar21 = (float)uStack_c8;
                                              if (lVar5 != 0) {
                                                lVar5 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar5,0);
                                                if (lVar5 == 0) {
                                                  func_0x00f78af4();
                                                }
                                                else {
                                                  fStack_a0 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar5,0);
                                                  fStack_a0 = fVar9 * fStack_a0;
                                                  fStack_9c = fVar9 * fVar21;
                                                  fStack_98 = fVar9 * fVar10;
                                                  lVar5 = *(long *)(param_1 + 0x28);
                                                  if (lVar5 != 0) {
                                                    fVar10 = *(float *)(lVar5 + 0x298);
                                                    fVar9 = *(float *)(lVar5 + 0x29c);
                                                    fVar21 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)
                                                                                     (lVar5 + 0x294)
                                                                                    ,0);
                                                    fStack_a8 = fVar9;
                                                    uStack_b0 = CONCAT44(fVar10,fVar21);
                                                    fVar9 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fStack_a8 *
                                                                                   fStack_98 +
                                                                                   fVar21 * 
                                                  fStack_a0 + fVar10 * fStack_9c,0);
                                                  fStack_9c = 0.0;
                                                  uStack_b0 = (ulong)(uint)(fVar9 * (float)uStack_b0
                                                                           );
                                                  fVar22 = fStack_a8;
                                                  fStack_a8 = fVar9 * fStack_a8;
                                                  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_a0,0);
                                                  fVar10 = fStack_98;
                                                  fVar21 = fStack_9c;
                                                  fVar9 = fStack_a0;
                                                  fVar12 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_b0,0);
                                                  fVar11 = _UNK_033f8140;
                                                  if (_UNK_033f8140 < fVar12) {
                                                    fVar10 = fVar22;
                                                    fVar21 = _UNK_033f8140;
                                                    fVar9 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
                                                    fVar11 = fVar21;
                                                    fVar22 = fVar10;
                                                  }
                                                  uVar18 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
                                                  fVar13 = fStack_98;
                                                  fVar20 = fStack_9c;
                                                  fVar12 = fStack_a0;
                                                  /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
                                                  uVar18 = /*UnityEngine.Vector3$$SignedAngle*/ func_0x0327bc00(uVar18,fVar11,fVar22,
                                                                           fVar12,fVar20,fVar13,0);
                                                  uVar19 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
                                                  /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
                                                  fVar9 = (float)/*UnityEngine.Vector3$$SignedAngle*/ func_0x0327bc00(uVar19,fVar11,
                                                                                 fVar22,fVar9,fVar21
                                                                                 ,fVar10,0);
                                                  uVar19 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)
                                                                            (param_1 + 0x3c),
                                                                           *(undefined4 *)
                                                                            (param_1 + 0x40),
                                                                           *(undefined4 *)
                                                                            (param_1 + 0xdc),0);
                                                  fVar21 = (float)/*UnityEngine.Mathf$$DeltaAngle*/ func_0x0323d618(fVar9,uVar18,0);
                                                  uVar18 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar9 + fVar21,fVar9,
                                                                           uVar19,0);
                                                  fVar21 = *(float *)(param_1 + 0xa4);
                                                  Atlas_Gameplay_Kart_FollowCameraParams__get_YawDelay
                                                            (puVar4,0);
                                                  uVar19 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                                                  fVar9 = (float)/*UnityEngine.Mathf$$DeltaAngle*/ func_0x0323d618(fVar21,uVar18,0);
                                                  uVar18 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar21 + fVar9,fVar21,
                                                                           uVar19,0);
                                                  *(undefined4 *)(param_1 + 0xa4) = uVar18;
                                                  fVar9 = *(float *)(param_1 + 0xd0);
                                                  if (0.0 < fVar9) {
                                                    lVar5 = *param_2;
                                                    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
                                                    if (uVar3 != 0) {
                                                      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                                      do {
                                                        if (*(long *)(piVar6 + -2) ==
                                                            /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                                                          puVar4 = (undefined8 *)
                                                                   (lVar5 + (long)*piVar6 * 0x10 +
                                                                   0x138);
                                                          goto code_r0x015cb9bc;
                                                        }
                                                        piVar6 = piVar6 + 4;
                                                        uVar3 = uVar3 - 1;
                                                      } while (uVar3 != 0);
                                                    }
                                                    puVar4 = (undefined8 *)
                                                             func_0x00fac1f0(param_2,
                                                  /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015cb9bc:
                                                  fVar21 = (float)(*(code *)*puVar4)(param_2,puVar4[
                                                  1]);
                                                  fVar9 = fVar9 - fVar21;
                                                  *(float *)(param_1 + 0xd0) = fVar9;
                                                  if (fVar9 <= 0.0) {
                                                    *(undefined4 *)(param_1 + 0xd0) = 0;
                                                  }
                                                  }
                                                  /*Atlas.Gameplay.Kart.KartFollowCamera$$UpdateFollowTargetYawOffset*/ func_0x015cbc90(param_1);
                                                  /*Atlas.Gameplay.Kart.KartFollowCamera$$UpdateCamera*/ func_0x015cbeec(param_1);
                                                  goto LAB_015cb9ec;
                                                  }
                                                  func_0x00f78af4();
                                                }
                                                goto code_r0x015cbaf0;
                                              }
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
code_r0x015cbaf0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
    (*pcVar1)();
  }
LAB_015cb9ec:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar7,0);
  return;
}



// ============================================================
// RVA: 0x15cbc48 | Atlas.Gameplay.Kart.KartFollowCamera.GetSpeedInterpolatedValue
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0323d35c) */

undefined8 Atlas_Gameplay_Kart_KartFollowCamera__GetSpeedInterpolatedValue(void)

{
  return 0;
}



// ============================================================
// RVA: 0x15cbc58 | Atlas.Gameplay.Kart.KartFollowCamera.CalculateDelayedAngle
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0323d35c) */

undefined8 Atlas_Gameplay_Kart_KartFollowCamera__CalculateDelayedAngle(void)

{
  /*UnityEngine.Mathf$$DeltaAngle*/ func_0x0323d618(0);
  return 0;
}



// ============================================================
// RVA: 0x15cbc90 | Atlas.Gameplay.Kart.KartFollowCamera.UpdateFollowTargetYawOffset
// ============================================================

/* WARNING: Possible PIC construction at 0x015cc004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cc118) */
/* WARNING: Removing unreachable block (ram,0x015cc038) */
/* WARNING: Removing unreachable block (ram,0x015cc068) */
/* WARNING: Removing unreachable block (ram,0x015cc008) */
/* WARNING: Removing unreachable block (ram,0x015cc148) */
/* WARNING: Removing unreachable block (ram,0x015cc180) */
/* WARNING: Removing unreachable block (ram,0x015cc2c4) */
/* WARNING: Removing unreachable block (ram,0x015cc2c8) */
/* WARNING: Removing unreachable block (ram,0x015cc2cc) */
/* WARNING: Removing unreachable block (ram,0x015cc2e4) */
/* WARNING: Removing unreachable block (ram,0x015cc2f4) */
/* WARNING: Removing unreachable block (ram,0x015cc2fc) */
/* WARNING: Removing unreachable block (ram,0x015cc300) */
/* WARNING: Removing unreachable block (ram,0x015cc314) */
/* WARNING: Removing unreachable block (ram,0x015cc31c) */
/* WARNING: Removing unreachable block (ram,0x015cc324) */
/* WARNING: Removing unreachable block (ram,0x015cc33c) */
/* WARNING: Removing unreachable block (ram,0x015cc364) */
/* WARNING: Removing unreachable block (ram,0x015cc370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Kart_KartFollowCamera__UpdateFollowTargetYawOffset
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,uint param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  float fVar14;
  ulong uVar15;
  uint uVar16;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar17;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  ulong uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  if ((bRam0000000003eb532e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532e = 1;
  }
  uVar5 = *(undefined8 *)(param_5 + 0xe0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_5 + 0x10);
    if (lVar3 != 0) {
      fVar11 = 0.0;
code_r0x015cbeb0:
      /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(param_5 + 0xd8),fVar11,*(undefined4 *)(lVar3 + 0x22c),0);
      *(undefined4 *)(param_5 + 0xd8) = extraout_s0;
      auVar12._4_4_ = extraout_var;
      auVar12._0_4_ = extraout_s0;
      auVar12._8_8_ = extraout_var_00;
      return auVar12;
    }
  }
  else if (*(long *)(param_5 + 0xe0) != 0) {
    fVar6 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0xe0),0);
    if (*(long *)(param_5 + 0x30) != 0) {
      unaff_d9 = (ulong)(uint)fVar6;
      unaff_d11 = (ulong)(uint)param_3;
      fVar11 = param_3;
      fVar7 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x30),0);
      if (*(long *)(param_5 + 0x30) != 0) {
        unaff_d10 = (ulong)(uint)fVar7;
        unaff_d14 = (ulong)(uint)fVar11;
        fVar14 = fVar11;
        uVar8 = /*UnityEngine.Transform$$get_forward*/ func_0x03275810(*(long *)(param_5 + 0x30),0);
        if (*(long *)(param_5 + 0x30) != 0) {
          unaff_d12 = (ulong)uVar8;
          /*UnityEngine.Transform$$get_forward*/ func_0x03275810(*(long *)(param_5 + 0x30),0);
          if (*(long *)(param_5 + 0x30) != 0) {
            unaff_d13 = (ulong)(uint)fVar14;
            fVar17 = fVar14;
            fStack_74 = (float)/*UnityEngine.Transform$$get_right*/ func_0x03275618(*(long *)(param_5 + 0x30),0);
            if (*(long *)(param_5 + 0x30) != 0) {
              fVar6 = fVar6 - fVar7;
              unaff_d10 = (ulong)(uint)fVar6;
              /*UnityEngine.Transform$$get_right*/ func_0x03275618(*(long *)(param_5 + 0x30),0);
              fVar7 = 0.0;
              uVar2 = 0;
              uVar15 = (ulong)(uint)(param_3 - fVar11);
              fStack_7c = fVar17;
              fStack_78 = param_3 - fVar11;
              uVar9 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251db0(fVar6,0);
              unaff_d14 = (ulong)uVar9;
              unaff_d15 = uVar2 & 0xffffffff;
              unaff_d8 = uVar15 & 0xffffffff;
              unaff_d11 = (ulong)param_4;
              uVar13 = 0;
              uVar16 = param_4;
              uVar10 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251db0(uVar8,0,fVar14,0);
              fVar11 = (float)/*UnityEngine.Quaternion$$Dot*/ func_0x03251fc0(uVar9,uVar2 & 0xffffffff,uVar15 & 0xffffffff,param_4,
                                              uVar10,uVar13,fVar14,uVar16,0);
              unaff_d12 = (ulong)(uint)fVar11;
              uVar2 = /*UnityEngine.Quaternion$$IsEqualUsingDot*/ func_0x03251f7c(0);
              if ((uVar2 & 1) == 0) {
                /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(ABS(fVar11),0x3f800000,0);
                fVar11 = (float)_acosf();
                fVar7 = (fVar11 + fVar11) * _UNK_033f8818;
              }
              unaff_d9 = (ulong)(uint)fVar7;
              lVar3 = *(long *)(param_5 + 0x10);
              if (lVar3 != 0) {
                fVar11 = 0.0;
                if ((fVar7 <= *(float *)(lVar3 + 0x238)) &&
                   (fVar14 = *(float *)(lVar3 + 0x234), fVar11 = fVar7, fVar14 < fVar7)) {
                  fVar11 = fVar7 * (1.0 - (fVar7 - fVar14) / (*(float *)(lVar3 + 0x238) - fVar14));
                }
                fVar11 = fVar11 * *(float *)(lVar3 + 0x230);
                if (fVar6 * fStack_74 + 0.0 + fStack_78 * fStack_7c < 0.0) {
                  fVar11 = -fVar11;
                }
                goto code_r0x015cbeb0;
              }
            }
          }
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_88 = &Atlas_Gameplay_Kart_KartFollowCamera__UpdateCamera;
  uStack_f0 = unaff_d15;
  uStack_e8 = unaff_d14;
  uStack_e0 = unaff_d13;
  uStack_d8 = unaff_d12;
  uStack_d0 = unaff_d11;
  uStack_c8 = unaff_d10;
  uStack_c0 = unaff_d9;
  uStack_b8 = unaff_d8;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb532d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532d = 1;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *(long *)(lVar3 + 0x28);
  ppuStack_180 = &puStack_90;
  if (lVar4 != 0) {
    uVar2 = (ulong)*(uint *)(lVar4 + 0x244);
    fVar6 = *(float *)(lVar4 + 0x248);
    uStack_120 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x240),0);
    fVar7 = *(float *)(lVar3 + 0xb0);
    uVar5 = *(undefined8 *)(lVar3 + 0xa8);
    uStack_130 = uVar2;
    fVar11 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(*(undefined4 *)(lVar3 + 0x94),0);
    fVar14 = (float)uVar5;
    fVar17 = (float)((ulong)uVar5 >> 0x20);
    *(ulong *)(lVar3 + 0xa8) =
         CONCAT44(fVar17 + ((float)uStack_130 - fVar17) * fVar11,
                  fVar14 + ((float)uStack_120 - fVar14) * fVar11);
    *(float *)(lVar3 + 0xb0) = fVar7 + (fVar6 - fVar7) * fVar11;
    if (*(long *)(lVar3 + 0x30) != 0) {
      uVar2 = uStack_130;
      uStack_100 = /*UnityEngine.Transform$$get_forward*/ func_0x03275810(*(long *)(lVar3 + 0x30),0);
      uStack_f8 = (undefined4)uVar2;
      uStack_fc = 0;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&uStack_100,0);
      uStack_134 = uStack_fc;
      uStack_130 = CONCAT44(uStack_130._4_4_,uStack_100);
      uStack_120 = CONCAT44(uStack_120._4_4_,uStack_f8);
      uStack_13c = *(undefined4 *)(lVar3 + 0xac);
      uStack_138 = *(undefined4 *)(lVar3 + 0xb0);
      uStack_140 = *(undefined4 *)(lVar3 + 0xa8);
      fStack_19c = *(float *)(lVar3 + 0xa4) + *(float *)(lVar3 + 0xd8);
      fStack_1a0 = 0.0;
      puStack_178 = &UNK_015cc008;
      goto UnityEngine_Quaternion__Internal_FromEulerRad;
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_178 = &Atlas_Gameplay_Kart_KartFollowCameraOffset__Rotation;
  fStack_1a0 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),
                                      extraout_s0_00,0);
  fStack_19c = 0.0;
UnityEngine_Quaternion__Internal_FromEulerRad:
  fStack_1a0 = fStack_1a0 * _UNK_033f850c;
  fStack_19c = fStack_19c * _UNK_033f850c;
  fStack_198 = _UNK_033f850c * 0.0;
  uStack_190 = 0x3eb5000;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  lStack_188 = lVar3;
  if (pcRam0000000003ec0670 == (code *)0x0) {
    pcRam0000000003ec0670 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)"
                                );
  }
  (*pcRam0000000003ec0670)(&fStack_1a0,&uStack_1b0);
  return ZEXT416((uint)uStack_1b0);
}



// ============================================================
// RVA: 0x15cbeec | Atlas.Gameplay.Kart.KartFollowCamera.UpdateCamera
// ============================================================

/* WARNING: Possible PIC construction at 0x015cc004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cc118) */
/* WARNING: Removing unreachable block (ram,0x015cc038) */
/* WARNING: Removing unreachable block (ram,0x015cc068) */
/* WARNING: Removing unreachable block (ram,0x015cc008) */
/* WARNING: Removing unreachable block (ram,0x015cc148) */
/* WARNING: Removing unreachable block (ram,0x015cc180) */
/* WARNING: Removing unreachable block (ram,0x015cc2c4) */
/* WARNING: Removing unreachable block (ram,0x015cc2c8) */
/* WARNING: Removing unreachable block (ram,0x015cc2cc) */
/* WARNING: Removing unreachable block (ram,0x015cc2e4) */
/* WARNING: Removing unreachable block (ram,0x015cc2f4) */
/* WARNING: Removing unreachable block (ram,0x015cc2fc) */
/* WARNING: Removing unreachable block (ram,0x015cc300) */
/* WARNING: Removing unreachable block (ram,0x015cc314) */
/* WARNING: Removing unreachable block (ram,0x015cc31c) */
/* WARNING: Removing unreachable block (ram,0x015cc324) */
/* WARNING: Removing unreachable block (ram,0x015cc33c) */
/* WARNING: Removing unreachable block (ram,0x015cc364) */
/* WARNING: Removing unreachable block (ram,0x015cc370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Atlas_Gameplay_Kart_KartFollowCamera__UpdateCamera(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 extraout_s0;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  if ((bRam0000000003eb532d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532d = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  puStack_100 = &stack0xfffffffffffffff0;
  if (lVar1 != 0) {
    uVar3 = (ulong)*(uint *)(lVar1 + 0x244);
    fVar4 = *(float *)(lVar1 + 0x248);
    uStack_a0 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar1 + 0x240),0);
    fVar5 = *(float *)(param_1 + 0xb0);
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    uStack_b0 = uVar3;
    fVar2 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(*(undefined4 *)(param_1 + 0x94),0);
    fVar6 = (float)uVar7;
    fVar8 = (float)((ulong)uVar7 >> 0x20);
    *(ulong *)(param_1 + 0xa8) =
         CONCAT44(fVar8 + ((float)uStack_b0 - fVar8) * fVar2,
                  fVar6 + ((float)uStack_a0 - fVar6) * fVar2);
    *(float *)(param_1 + 0xb0) = fVar5 + (fVar4 - fVar5) * fVar2;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar3 = uStack_b0;
      uStack_80 = /*UnityEngine.Transform$$get_forward*/ func_0x03275810(*(long *)(param_1 + 0x30),0);
      uStack_78 = (undefined4)uVar3;
      uStack_7c = 0;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&uStack_80,0);
      uStack_b4 = uStack_7c;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uStack_80);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uStack_78);
      uStack_bc = *(undefined4 *)(param_1 + 0xac);
      uStack_b8 = *(undefined4 *)(param_1 + 0xb0);
      uStack_c0 = *(undefined4 *)(param_1 + 0xa8);
      fStack_11c = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xd8);
      fStack_120 = 0.0;
      puStack_f8 = (undefined *)0x15cc008;
      goto UnityEngine_Quaternion__Internal_FromEulerRad;
    }
  }
  lVar1 = func_0x00f78af4();
  puStack_f8 = &Atlas_Gameplay_Kart_KartFollowCameraOffset__Rotation;
  fStack_120 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),
                                      extraout_s0,0);
  fStack_11c = 0.0;
UnityEngine_Quaternion__Internal_FromEulerRad:
  fStack_120 = fStack_120 * _UNK_033f850c;
  fStack_11c = fStack_11c * _UNK_033f850c;
  fStack_118 = _UNK_033f850c * 0.0;
  uStack_110 = 0x3eb5000;
  uStack_130 = 0;
  uStack_128 = 0;
  lStack_108 = param_1;
  if (pcRam0000000003ec0670 == (code *)0x0) {
    pcRam0000000003ec0670 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)"
                                );
  }
  (*pcRam0000000003ec0670)(&fStack_120,&uStack_130);
  return (undefined4)uStack_130;
}



// ============================================================
// RVA: 0x15cc41c | Atlas.Gameplay.Kart.KartFollowCamera..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_KartFollowCamera___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
  *(undefined4 *)(param_5 + 0xa8) = uVar1;
  *(undefined4 *)(param_5 + 0xac) = param_2;
  *(undefined4 *)(param_5 + 0xb0) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0xb4) = uVar1;
  *(undefined4 *)(param_5 + 0xb8) = param_2;
  *(undefined4 *)(param_5 + 0xbc) = param_3;
  uVar1 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
  *(undefined4 *)(param_5 + 0xc0) = uVar1;
  *(undefined4 *)(param_5 + 0xc4) = param_2;
  *(undefined4 *)(param_5 + 200) = param_3;
  *(undefined4 *)(param_5 + 0xcc) = param_4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_5;
  return auVar2;
}



// ============================================================
// RVA: 0x15cc470 | Atlas.Gameplay.Kart.KartFollowCamera..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartFollowCamera___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb532f & 1) == 0) {
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d6eef0);
    bRam0000000003eb532f = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartFollowCamera.FixedUpdate()')*/ uRam0000000003d6eef0,1,0,0,0);
  **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8) = uVar1;
  return;
}



