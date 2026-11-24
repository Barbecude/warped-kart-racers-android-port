// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.GameContextRepresentationViewBehaviour

// ============================================================
// RVA: 0x15a6b20 | Atlas.UI.GameContextRepresentationViewBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_GameContextRepresentationViewBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15a6b28 | Atlas.UI.GameContextRepresentationViewBehaviour.set_Data
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_GameContextRepresentationViewBehaviour__set_Data(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long **pplStack_70;
  undefined *puStack_68;
  long *plStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if ((bRam0000000003eb520e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb520e = 1;
  }
  plVar13 = *(long **)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar13,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto code_r0x015a6c48;
    plVar13 = *(long **)(param_1 + 0x20);
    lVar5 = Atlas_UI_GameContextMetagameData__IconRef();
    if ((lVar5 == 0) || (plVar13 == (long *)0x0)) goto code_r0x015a6c48;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(plVar13,*(undefined8 *)(lVar5 + 0x18),0);
  }
  plVar13 = *(long **)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar13,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto code_r0x015a6c48;
    plVar13 = *(long **)(param_1 + 0x28);
    uVar6 = Atlas_UI_GameContextMetagameData__get_DisplayName();
    if (plVar13 == (long *)0x0) goto code_r0x015a6c48;
    lVar10 = *(long *)(*plVar13 + 0x560);
    (**(code **)(*plVar13 + 0x558))(plVar13,uVar6);
  }
  lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar5 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar17 = (*pcRam0000000003ebf4c0)(lVar5,1);
    return auVar17;
  }
code_r0x015a6c48:
  uVar7 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_GameContextRepresentationViewBehaviour___ctor;
  plStack_50 = plVar13;
  puStack_48 = (undefined *)param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb520f & 1) == 0) {
    func_0x00f78a20(0x3d400d0);
    bRam0000000003eb520f = 1;
  }
  puVar3 = puStack_48;
  plVar13 = plStack_50;
  if (uVar7 == 0) {
    uVar7 = func_0x00f78af4(0,uRam0000000003d400d0);
    puStack_48 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    pplStack_70 = &plStack_50;
    if (uVar7 == 0) {
      plStack_50 = (long *)&puStack_40;
      auVar17 = func_0x00f78af4();
      plVar9 = auVar17._8_8_;
      uStack_88 = 0x3d23990;
      plStack_80 = plVar13;
      lStack_78 = (long)puVar3;
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar5 = lVar10;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar9 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar17._0_8_ + 0x10);
        lVar5 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar11 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar5,0);
code_r0x0284ff28:
        (*(code *)*puVar8)(plVar9,uVar1,puVar8[1]);
        lVar10 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,2);
code_r0x0284ffac:
        (*(code *)*puVar8)(plVar9,puVar8[1]);
        uVar6 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar6 = extraout_x1_00;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar6;
        return auVar14;
      }
      uVar7 = func_0x00f78af4();
      puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_c0 = &ppuStack_a0;
      if (uVar7 == 0) {
        lStack_b0 = lVar10;
        plStack_a8 = plVar9;
        ppuStack_a0 = &pplStack_70;
        auVar14 = func_0x00f78af4();
        plVar13 = auVar14._8_8_;
        uStack_e0 = 0x3eb8000;
        puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_d0 = lVar10;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_d8 = auVar17._0_8_;
          plStack_c8 = plVar9;
          func_0x00f78a20(0x3d21510);
          auVar17._8_8_ = plStack_c8;
          auVar17._0_8_ = lStack_d8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_c8 = auVar17._8_8_;
        lStack_d8 = auVar17._0_8_;
        if (plVar13 == (long *)0x0) {
          auVar17 = func_0x00f78af4();
          puStack_e8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_100 = 0;
          uStack_f8 = 0;
          ppuStack_f0 = &ppuStack_c0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_100,auVar17._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_f8;
          auVar2._0_8_ = uStack_100;
          return auVar2;
        }
        uVar6 = *(undefined8 *)(auVar14._0_8_ + 0x10);
        lVar10 = **(long **)(*(long *)(lVar5 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
          auVar17._8_8_ = plStack_c8;
          auVar17._0_8_ = lStack_d8;
        }
        plStack_c8 = auVar17._8_8_;
        lStack_d8 = auVar17._0_8_;
        lVar11 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar10,0);
        auVar17._8_8_ = plStack_c8;
        auVar17._0_8_ = lStack_d8;
code_r0x028500d0:
        plStack_c8 = auVar17._8_8_;
        lStack_d8 = auVar17._0_8_;
        (*(code *)*puVar8)(plVar13,uVar6,puVar8[1]);
        lVar10 = **(long **)(*(long *)(lVar5 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        lVar5 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar10,2);
code_r0x02850154:
        (*(code *)*puVar8)(plVar13,puVar8[1]);
        uVar6 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar6 = extraout_x1_02;
        }
        auVar15._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar15._8_8_ = uVar6;
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
// RVA: 0x15a6b30 | Atlas.UI.GameContextRepresentationViewBehaviour.SetData
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16] Atlas_UI_GameContextRepresentationViewBehaviour__SetData(long param_1)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long **pplStack_70;
  undefined *puStack_68;
  long *plStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb520e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb520e = 1;
  }
  plVar13 = *(long **)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar13,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_015a6c48;
    plVar13 = *(long **)(param_1 + 0x20);
    lVar5 = Atlas_UI_GameContextMetagameData__IconRef();
    if ((lVar5 == 0) || (plVar13 == (long *)0x0)) goto LAB_015a6c48;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(plVar13,*(undefined8 *)(lVar5 + 0x18),0);
  }
  plVar13 = *(long **)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar13,0);
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_015a6c48;
    plVar13 = *(long **)(param_1 + 0x28);
    uVar6 = Atlas_UI_GameContextMetagameData__get_DisplayName();
    if (plVar13 == (long *)0x0) goto LAB_015a6c48;
    lVar10 = *(long *)(*plVar13 + 0x560);
    (**(code **)(*plVar13 + 0x558))(plVar13,uVar6);
  }
  lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar5 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar17 = (*pcRam0000000003ebf4c0)(lVar5,1);
    return auVar17;
  }
LAB_015a6c48:
  uVar7 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_GameContextRepresentationViewBehaviour___ctor;
  plStack_50 = plVar13;
  puStack_48 = (undefined *)param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb520f & 1) == 0) {
    func_0x00f78a20(0x3d400d0);
    bRam0000000003eb520f = 1;
  }
  puVar3 = puStack_48;
  plVar13 = plStack_50;
  if (uVar7 == 0) {
    uVar7 = func_0x00f78af4(0,uRam0000000003d400d0);
    puStack_48 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    pplStack_70 = &plStack_50;
    if (uVar7 == 0) {
      plStack_50 = (long *)&puStack_40;
      auVar17 = func_0x00f78af4();
      plVar9 = auVar17._8_8_;
      uStack_88 = 0x3d23990;
      plStack_80 = plVar13;
      lStack_78 = (long)puVar3;
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar5 = lVar10;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar9 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar17._0_8_ + 0x10);
        lVar5 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar11 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar5,0);
code_r0x0284ff28:
        (*(code *)*puVar8)(plVar9,uVar1,puVar8[1]);
        lVar10 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,2);
code_r0x0284ffac:
        (*(code *)*puVar8)(plVar9,puVar8[1]);
        uVar6 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar6 = extraout_x1_00;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar6;
        return auVar14;
      }
      uVar7 = func_0x00f78af4();
      puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_c0 = &ppuStack_a0;
      if (uVar7 == 0) {
        lStack_b0 = lVar10;
        plStack_a8 = plVar9;
        ppuStack_a0 = &pplStack_70;
        auVar14 = func_0x00f78af4();
        plVar13 = auVar14._8_8_;
        uStack_e0 = 0x3eb8000;
        puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_d0 = lVar10;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_d8 = auVar17._0_8_;
          plStack_c8 = plVar9;
          func_0x00f78a20(0x3d21510);
          auVar17._8_8_ = plStack_c8;
          auVar17._0_8_ = lStack_d8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_c8 = auVar17._8_8_;
        lStack_d8 = auVar17._0_8_;
        if (plVar13 == (long *)0x0) {
          auVar17 = func_0x00f78af4();
          puStack_e8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_100 = 0;
          uStack_f8 = 0;
          ppuStack_f0 = &ppuStack_c0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_100,auVar17._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_f8;
          auVar2._0_8_ = uStack_100;
          return auVar2;
        }
        uVar6 = *(undefined8 *)(auVar14._0_8_ + 0x10);
        lVar10 = **(long **)(*(long *)(lVar5 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
          auVar17._8_8_ = plStack_c8;
          auVar17._0_8_ = lStack_d8;
        }
        plStack_c8 = auVar17._8_8_;
        lStack_d8 = auVar17._0_8_;
        lVar11 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar10,0);
        auVar17._8_8_ = plStack_c8;
        auVar17._0_8_ = lStack_d8;
code_r0x028500d0:
        plStack_c8 = auVar17._8_8_;
        lStack_d8 = auVar17._0_8_;
        (*(code *)*puVar8)(plVar13,uVar6,puVar8[1]);
        lVar10 = **(long **)(*(long *)(lVar5 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        lVar5 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar12 = piVar12 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar10,2);
code_r0x02850154:
        (*(code *)*puVar8)(plVar13,puVar8[1]);
        uVar6 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar6 = extraout_x1_02;
        }
        auVar15._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar15._8_8_ = uVar6;
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
// RVA: 0x15a6c4c | Atlas.UI.GameContextRepresentationViewBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_GameContextRepresentationViewBehaviour___ctor
          (ulong param_1,undefined8 param_2,long param_3)

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
  
  if ((bRam0000000003eb520f & 1) == 0) {
    func_0x00f78a20(0x3d400d0);
    bRam0000000003eb520f = 1;
  }
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d400d0);
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



