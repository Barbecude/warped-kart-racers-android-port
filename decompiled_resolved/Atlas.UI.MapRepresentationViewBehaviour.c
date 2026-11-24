// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.MapRepresentationViewBehaviour

// ============================================================
// RVA: 0x148d82c | Atlas.UI.MapRepresentationViewBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_MapRepresentationViewBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x148d834 | Atlas.UI.MapRepresentationViewBehaviour.set_Data
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16] Atlas_UI_MapRepresentationViewBehaviour__set_Data(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long **pplStack_70;
  undefined *puStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb497f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb497f = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  plVar12 = *(long **)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar12,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0148dac0;
    lVar13 = *(long *)(param_1 + 0x28);
    uVar5 = Atlas_UI_MapMetagameData__LargeMapSprite();
    plVar12 = (long *)0x0;
    if (lVar13 == 0) goto LAB_0148dac0;
    /*Core.UI2.UIIrregularElement$$set_sprite*/ func_0x02f83e84(lVar13,uVar5,0);
  }
  plVar12 = *(long **)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar12,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0148dac0;
    plVar14 = *(long **)(param_1 + 0x20);
    uVar5 = Atlas_UI_MapMetagameData__get_DisplayName();
    plVar12 = (long *)0x0;
    if (plVar14 == (long *)0x0) goto LAB_0148dac0;
    (**(code **)(*plVar14 + 0x558))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 0x560));
  }
  plVar12 = *(long **)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar12,0);
  if (iVar4 != 0) {
    if ((((*(long *)(param_1 + 0x18) == 0) ||
         (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar13 == 0)) ||
        (lVar13 = *(long *)(lVar13 + 0x78), lVar13 == 0)) || (*(long *)(param_1 + 0x30) == 0))
    goto LAB_0148dac0;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x30),*(undefined8 *)(lVar13 + 0x18),0);
  }
  plVar12 = *(long **)(param_1 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar12,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0148dac0;
    plVar14 = *(long **)(param_1 + 0x38);
    uVar5 = Atlas_UI_MapMetagameData__IPMetagameData();
    plVar12 = (long *)0x0;
    if (plVar14 == (long *)0x0) goto LAB_0148dac0;
    (**(code **)(*plVar14 + 0x188))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 400));
  }
  plVar12 = *(long **)(param_1 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar12,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0148dac0;
    plVar14 = *(long **)(param_1 + 0x40);
    uVar5 = Atlas_UI_MapMetagameData__GameContextMetagameData();
    plVar12 = (long *)0x0;
    if (plVar14 == (long *)0x0) goto LAB_0148dac0;
    (**(code **)(*plVar14 + 0x188))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 400));
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar12,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0148dac0;
    plVar12 = *(long **)(param_1 + 0x48);
    lVar13 = Atlas_UI_MapMetagameData__IPMetagameData();
    if ((lVar13 == 0) || (Atlas_UI_IPMetagameData__ButtonColour(lVar13,0), plVar12 == (long *)0x0))
    goto LAB_0148dac0;
    (**(code **)(*plVar12 + 0x2a8))(plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
  }
  lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar13 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar18 = (*pcRam0000000003ebf4c0)(lVar13,1);
    return auVar18;
  }
LAB_0148dac0:
  uVar6 = func_0x00f78af4();
  plStack_60 = (long *)0x3eb4000;
  lStack_58 = 0x3d23990;
  puStack_38 = &Atlas_UI_MapRepresentationViewBehaviour___ctor;
  plStack_50 = plVar12;
  puStack_48 = (undefined *)param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4980 & 1) == 0) {
    func_0x00f78a20(0x3d400f0);
    bRam0000000003eb4980 = 1;
  }
  puVar3 = puStack_48;
  plVar14 = plStack_50;
  lVar13 = lStack_58;
  plVar12 = plStack_60;
  if (uVar6 == 0) {
    uVar6 = func_0x00f78af4(0,uRam0000000003d400f0);
    plStack_60 = plVar14;
    lStack_58 = (long)puVar3;
    puStack_48 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    pplStack_70 = &plStack_50;
    if (uVar6 == 0) {
      plStack_50 = (long *)&puStack_40;
      auVar18 = func_0x00f78af4();
      plVar8 = auVar18._8_8_;
      uStack_90 = plVar12;
      uStack_88 = lVar13;
      plStack_80 = plVar14;
      lStack_78 = (long)puVar3;
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar13 = lVar9;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar8 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar18._0_8_ + 0x10);
        lVar13 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar10 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,0);
code_r0x0284ff28:
        (*(code *)*puVar7)(plVar8,uVar1,puVar7[1]);
        lVar9 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar13 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar9,2);
code_r0x0284ffac:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar5 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar5 = extraout_x1_00;
        }
        auVar15._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar15._8_8_ = uVar5;
        return auVar15;
      }
      uVar6 = func_0x00f78af4();
      puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_c0 = &ppuStack_a0;
      if (uVar6 == 0) {
        lStack_b0 = lVar9;
        plStack_a8 = plVar8;
        ppuStack_a0 = &pplStack_70;
        auVar15 = func_0x00f78af4();
        plVar12 = auVar15._8_8_;
        uStack_e0 = 0x3eb8000;
        puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_d0 = lVar9;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_d8 = auVar18._0_8_;
          plStack_c8 = plVar8;
          func_0x00f78a20(0x3d21510);
          auVar18._8_8_ = plStack_c8;
          auVar18._0_8_ = lStack_d8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_c8 = auVar18._8_8_;
        lStack_d8 = auVar18._0_8_;
        if (plVar12 == (long *)0x0) {
          auVar18 = func_0x00f78af4();
          puStack_e8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_100 = 0;
          uStack_f8 = 0;
          ppuStack_f0 = &ppuStack_c0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_100,auVar18._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar18._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_f8;
          auVar2._0_8_ = uStack_100;
          return auVar2;
        }
        uVar5 = *(undefined8 *)(auVar15._0_8_ + 0x10);
        lVar9 = **(long **)(*(long *)(lVar13 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
          auVar18._8_8_ = plStack_c8;
          auVar18._0_8_ = lStack_d8;
        }
        plStack_c8 = auVar18._8_8_;
        lStack_d8 = auVar18._0_8_;
        lVar10 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,lVar9,0);
        auVar18._8_8_ = plStack_c8;
        auVar18._0_8_ = lStack_d8;
code_r0x028500d0:
        plStack_c8 = auVar18._8_8_;
        lStack_d8 = auVar18._0_8_;
        (*(code *)*puVar7)(plVar12,uVar5,puVar7[1]);
        lVar9 = **(long **)(*(long *)(lVar13 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar13 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,lVar9,2);
code_r0x02850154:
        (*(code *)*puVar7)(plVar12,puVar7[1]);
        uVar5 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar5 = extraout_x1_02;
        }
        auVar16._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar16._8_8_ = uVar5;
        return auVar16;
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
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar6;
  return auVar17;
}



// ============================================================
// RVA: 0x148dac4 | Atlas.UI.MapRepresentationViewBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_MapRepresentationViewBehaviour___ctor(ulong param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
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
  long *plVar4;
  long *plVar5;
  
  if ((bRam0000000003eb4980 & 1) == 0) {
    func_0x00f78a20(0x3d400f0);
    bRam0000000003eb4980 = 1;
  }
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d400f0);
    puStack_40 = &stack0xffffffffffffffe0;
    if (param_1 == 0) {
      auVar12 = func_0x00f78af4();
      plVar4 = auVar12._8_8_;
      puStack_38 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar11 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar4 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar12._0_8_ + 0x10);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,0);
code_r0x0284ff28:
        (*(code *)*puVar3)(plVar4,uVar1,puVar3[1]);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,2);
code_r0x0284ffac:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
        uVar10 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_00;
        }
        auVar13._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar13._8_8_ = uVar10;
        return auVar13;
      }
      param_1 = func_0x00f78af4();
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_90 = &ppuStack_70;
      if (param_1 == 0) {
        lStack_80 = param_3;
        plStack_78 = plVar4;
        ppuStack_70 = &puStack_40;
        auVar13 = func_0x00f78af4();
        plVar5 = auVar13._8_8_;
        uStack_b0 = 0x3eb8000;
        puStack_88 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_a0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_a8 = auVar12._0_8_;
          plStack_98 = plVar4;
          func_0x00f78a20(0x3d21510);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        if (plVar5 == (long *)0x0) {
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
        uVar10 = *(undefined8 *)(auVar13._0_8_ + 0x10);
        lVar6 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar5,lVar6,0);
        auVar12._8_8_ = plStack_98;
        auVar12._0_8_ = lStack_a8;
code_r0x028500d0:
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        (*(code *)*puVar3)(plVar5,uVar10,puVar3[1]);
        lVar11 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar5,lVar11,2);
code_r0x02850154:
        (*(code *)*puVar3)(plVar5,puVar3[1]);
        uVar10 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_02;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar10;
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



