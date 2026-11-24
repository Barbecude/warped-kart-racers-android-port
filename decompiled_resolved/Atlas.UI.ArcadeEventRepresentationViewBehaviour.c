// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ArcadeEventRepresentationViewBehaviour

// ============================================================
// RVA: 0x144f074 | Atlas.UI.ArcadeEventRepresentationViewBehaviour.set_Data
// ============================================================

undefined8
Atlas_UI_ArcadeEventRepresentationViewBehaviour__set_Data(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [12];
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  if ((bRam0000000003eb4762 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4762 = 1;
  }
  uVar7 = 0;
  uStack_34 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  do {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) goto LAB_0144f278;
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0144f27c;
    uVar8 = *(undefined8 *)(lVar5 + uVar7 * 8 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 == 0) goto LAB_0144f278;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0144f27c;
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0144f278;
      plVar9 = *(long **)(lVar5 + uVar7 * 8 + 0x20);
      uVar8 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString
                        (*(long *)(param_1 + 0x18),uVar7 + 1);
      if (plVar9 == (long *)0x0) goto LAB_0144f278;
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 3);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0144f278;
    lVar5 = *(long *)(param_1 + 0x30);
    iVar2 = Atlas_UI_ArcadeEventMetagameData__GetCurrentMedal();
    if (iVar2 == 1) {
      puVar6 = (undefined8 *)(param_1 + 0x50);
    }
    else if (iVar2 == 2) {
      puVar6 = (undefined8 *)(param_1 + 0x48);
    }
    else if (iVar2 == 3) {
      puVar6 = (undefined8 *)(param_1 + 0x40);
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x58);
    }
    if (lVar5 == 0) goto LAB_0144f278;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(lVar5,*puVar6,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if ((int)uVar8 == 0) {
    return uVar8;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest
              (*(long *)(param_1 + 0x18),&uStack_40,&uStack_34);
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*plVar9 + 0x558))(plVar9,uStack_40,*(undefined8 *)(*plVar9 + 0x560));
      return uVar8;
    }
  }
LAB_0144f278:
  func_0x00f78af4();
LAB_0144f27c:
  uVar8 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar8,0);
  iVar2 = auVar10._8_4_;
  puVar4 = auVar10._0_8_;
  puVar6 = puVar4;
  if (iVar2 != 3) {
    puVar6 = puVar4 + 3;
  }
  puVar1 = puVar4 + 1;
  if (iVar2 != 2) {
    puVar1 = puVar6;
  }
  puVar6 = puVar4 + 2;
  if (iVar2 != 1) {
    puVar6 = puVar1;
  }
  return *puVar6;
}



// ============================================================
// RVA: 0x144f2b4 | Atlas.UI.ArcadeEventRepresentationViewBehaviour.DoMedalAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_ArcadeEventRepresentationViewBehaviour__DoMedalAnimation
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
          undefined8 param_6,long param_7)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long *plVar10;
  
  if ((bRam0000000003eb4763 & 1) == 0) {
    func_0x00f78a20(0x3d68fb0);
    bRam0000000003eb4763 = 1;
  }
  plVar5 = *(long **)(param_5 + 0x68);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x2a8))
              (param_1,param_2,param_3,param_4,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
    if (*(long *)(param_5 + 0x60) != 0) {
      param_7 = 0;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_5 + 0x60),1);
      uVar9 = /*STR('Anim_VFX_UIShineEffect_Medal')*/ uRam0000000003d68fb0;
      lVar6 = *(long *)(param_5 + 0x60);
      if (lVar6 != 0) {
        if (pcRam0000000003ebe3c0 == (code *)0x0) {
          pcRam0000000003ebe3c0 =
               (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)");
        }
        uVar9 = (*pcRam0000000003ebe3c0)(uVar9);
        if (pcRam0000000003ebe318 == (code *)0x0) {
          pcRam0000000003ebe318 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar17 = (*pcRam0000000003ebe318)(0xff800000,lVar6,uVar9,0xffffffff);
        return auVar17;
      }
    }
  }
  uVar7 = func_0x00f78af4();
  puStack_60 = (undefined1 *)0x3eb4000;
  puStack_48 = &Atlas_UI_ArcadeEventRepresentationViewBehaviour___ctor;
  puStack_58 = (undefined *)param_5;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4764 & 1) == 0) {
    func_0x00f78a20(0x3d400b8);
    func_0x00f78a20(0x3d1f4f8);
    bRam0000000003eb4764 = 1;
  }
  uVar9 = func_0x00f78a34(/*TMPro.TMP_Text[]_TypeInfo*/ uRam0000000003d1f4f8,3);
  puVar4 = puStack_58;
  puVar3 = puStack_60;
  *(undefined8 *)(uVar7 + 0x38) = uVar9;
  if (uVar7 == 0) {
    uVar7 = func_0x00f78af4(0,uRam0000000003d400b8);
    puStack_58 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    ppuStack_80 = &puStack_60;
    if (uVar7 == 0) {
      puStack_60 = (undefined1 *)&puStack_50;
      auVar17 = func_0x00f78af4();
      plVar5 = auVar17._8_8_;
      puStack_90 = puVar3;
      lStack_88 = (long)puVar4;
      puStack_78 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar6 = param_7;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar5 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar17._0_8_ + 0x10);
        lVar6 = **(long **)(*(long *)(param_7 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar11 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar13 = piVar13 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar5,lVar6,0);
code_r0x0284ff28:
        (*(code *)*puVar8)(plVar5,uVar1,puVar8[1]);
        lVar6 = **(long **)(*(long *)(param_7 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar11 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar13 = piVar13 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar5,lVar6,2);
code_r0x0284ffac:
        (*(code *)*puVar8)(plVar5,puVar8[1]);
        uVar9 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar9 = extraout_x1_00;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar9;
        return auVar14;
      }
      uVar7 = func_0x00f78af4();
      puStack_a8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_d0 = &ppuStack_b0;
      if (uVar7 == 0) {
        lStack_c0 = param_7;
        plStack_b8 = plVar5;
        ppuStack_b0 = &ppuStack_80;
        auVar14 = func_0x00f78af4();
        plVar10 = auVar14._8_8_;
        uStack_f0 = 0x3eb8000;
        puStack_c8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_e0 = param_7;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_e8 = auVar17._0_8_;
          plStack_d8 = plVar5;
          func_0x00f78a20(0x3d21510);
          auVar17._8_8_ = plStack_d8;
          auVar17._0_8_ = lStack_e8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_d8 = auVar17._8_8_;
        lStack_e8 = auVar17._0_8_;
        if (plVar10 == (long *)0x0) {
          auVar17 = func_0x00f78af4();
          puStack_f8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_110 = 0;
          uStack_108 = 0;
          ppuStack_100 = &ppuStack_d0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_110,auVar17._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_108;
          auVar2._0_8_ = uStack_110;
          return auVar2;
        }
        uVar9 = *(undefined8 *)(auVar14._0_8_ + 0x10);
        lVar11 = **(long **)(*(long *)(lVar6 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
          auVar17._8_8_ = plStack_d8;
          auVar17._0_8_ = lStack_e8;
        }
        plStack_d8 = auVar17._8_8_;
        lStack_e8 = auVar17._0_8_;
        lVar12 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar13 = piVar13 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar10,lVar11,0);
        auVar17._8_8_ = plStack_d8;
        auVar17._0_8_ = lStack_e8;
code_r0x028500d0:
        plStack_d8 = auVar17._8_8_;
        lStack_e8 = auVar17._0_8_;
        (*(code *)*puVar8)(plVar10,uVar9,puVar8[1]);
        lVar6 = **(long **)(*(long *)(lVar6 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar11 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar13 = piVar13 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar10,lVar6,2);
code_r0x02850154:
        (*(code *)*puVar8)(plVar10,puVar8[1]);
        uVar9 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar9 = extraout_x1_02;
        }
        auVar15._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar15._8_8_ = uVar9;
        return auVar15;
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar7;
  return auVar16;
}



// ============================================================
// RVA: 0x144f368 | Atlas.UI.ArcadeEventRepresentationViewBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_ArcadeEventRepresentationViewBehaviour___ctor
          (ulong param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  long *plVar5;
  long *plVar6;
  
  if ((bRam0000000003eb4764 & 1) == 0) {
    func_0x00f78a20(0x3d400b8);
    func_0x00f78a20(0x3d1f4f8);
    bRam0000000003eb4764 = 1;
  }
  uVar3 = func_0x00f78a34(/*TMPro.TMP_Text[]_TypeInfo*/ uRam0000000003d1f4f8,3);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d400b8);
    puStack_40 = &stack0xffffffffffffffe0;
    if (param_1 == 0) {
      auVar12 = func_0x00f78af4();
      plVar5 = auVar12._8_8_;
      puStack_38 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar11 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar5 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar12._0_8_ + 0x10);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar11,0);
code_r0x0284ff28:
        (*(code *)*puVar4)(plVar5,uVar1,puVar4[1]);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar11,2);
code_r0x0284ffac:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
        uVar3 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar3 = extraout_x1_00;
        }
        auVar13._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar13._8_8_ = uVar3;
        return auVar13;
      }
      param_1 = func_0x00f78af4();
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_90 = &ppuStack_70;
      if (param_1 == 0) {
        lStack_80 = param_3;
        plStack_78 = plVar5;
        ppuStack_70 = &puStack_40;
        auVar13 = func_0x00f78af4();
        plVar6 = auVar13._8_8_;
        uStack_b0 = 0x3eb8000;
        puStack_88 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_a0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_a8 = auVar12._0_8_;
          plStack_98 = plVar5;
          func_0x00f78a20(0x3d21510);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        if (plVar6 == (long *)0x0) {
          auVar12 = func_0x00f78af4();
          puStack_b8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_d0 = 0;
          uStack_c8 = 0;
          ppuStack_c0 = &ppuStack_90;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_d0,auVar12._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar12._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_c8;
          auVar2._0_8_ = uStack_d0;
          return auVar2;
        }
        uVar3 = *(undefined8 *)(auVar13._0_8_ + 0x10);
        lVar7 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar7,0);
        auVar12._8_8_ = plStack_98;
        auVar12._0_8_ = lStack_a8;
code_r0x028500d0:
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        (*(code *)*puVar4)(plVar6,uVar3,puVar4[1]);
        lVar11 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,2);
code_r0x02850154:
        (*(code *)*puVar4)(plVar6,puVar4[1]);
        uVar3 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar3 = extraout_x1_02;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar3;
        return auVar14;
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_1;
  return auVar15;
}



