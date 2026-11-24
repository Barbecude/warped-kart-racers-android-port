// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UpdateMessageRepresentationBehaviour

// ============================================================
// RVA: 0x1523570 | Atlas.UI.UpdateMessageRepresentationBehaviour.set_Data
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_UpdateMessageRepresentationBehaviour__set_Data(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  long *plVar9;
  
  *(long *)(param_1 + 0x18) = param_2;
  if ((((param_2 != 0) && (lVar13 = *(long *)(param_2 + 0x10), lVar13 != 0)) &&
      (*(long *)(lVar13 + 0x60) != 0)) && (*(long *)(param_1 + 0x20) != 0)) {
    param_3 = 0;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(lVar13 + 0x60) + 0x18));
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x2a8))
                (*(undefined4 *)(lVar13 + 0x70),*(undefined4 *)(lVar13 + 0x74),
                 *(undefined4 *)(lVar13 + 0x78),*(undefined4 *)(lVar13 + 0x7c),plVar5,
                 *(undefined8 *)(*plVar5 + 0x2b0));
      if ((*(long *)(lVar13 + 0x68) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
        param_3 = 0;
        /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(lVar13 + 0x68) + 0x18));
        plVar5 = *(long **)(param_1 + 0x38);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x2a8))
                    (*(undefined4 *)(lVar13 + 0x80),*(undefined4 *)(lVar13 + 0x84),
                     *(undefined4 *)(lVar13 + 0x88),*(undefined4 *)(lVar13 + 0x8c),plVar5,
                     *(undefined8 *)(*plVar5 + 0x2b0));
          if ((*(long *)(lVar13 + 0x20) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
            param_3 = 0;
            /*Core.UI2.UIIrregularElement$$set_sprite*/ func_0x02f83e84(*(long *)(param_1 + 0x48),
                            *(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x18));
            plVar5 = *(long **)(param_1 + 0x50);
            if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01523648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar16 = (**(code **)(*plVar5 + 0x2a8))
                                  (*(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar13 + 0x2c),
                                   *(undefined4 *)(lVar13 + 0x30),*(undefined4 *)(lVar13 + 0x34),
                                   plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
              return auVar16;
            }
          }
        }
      }
    }
  }
  auVar16 = func_0x00f78af4();
  uVar8 = auVar16._8_8_;
  puVar14 = auVar16._0_8_;
  puStack_28 = &Atlas_UI_UpdateMessageRepresentationBehaviour__set_MapDefinition;
  uVar15 = 0x3eb4000;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4b & 1) == 0) {
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4e4b = 1;
  }
  if (*(long *)(puVar14 + 0x18) != 0) {
    plVar5 = *(long **)(puVar14 + 0x40);
    unaff_x22 = *(long *)(*(long *)(puVar14 + 0x18) + 0x18);
    uVar15 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    param_3 = unaff_x22;
    Atlas_UI_MapMetagameData___ctor(uVar15,uVar8,unaff_x22,0,0);
    puVar14 = (undefined1 *)0x0;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015236e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar16 = (**(code **)(*plVar5 + 0x188))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 400));
      return auVar16;
    }
  }
  uVar6 = func_0x00f78af4();
  puStack_58 = &Atlas_UI_UpdateMessageRepresentationBehaviour___ctor;
  puStack_80 = (undefined1 *)unaff_x22;
  uStack_78 = uVar15;
  puStack_70 = puVar14;
  puStack_68 = (undefined *)uVar8;
  ppuStack_60 = &puStack_30;
  if ((bRam0000000003eb4e4c & 1) == 0) {
    func_0x00f78a20(0x3d40108);
    bRam0000000003eb4e4c = 1;
  }
  puVar4 = puStack_68;
  puVar3 = puStack_70;
  uVar15 = uStack_78;
  puVar14 = puStack_80;
  if (uVar6 == 0) {
    uVar6 = func_0x00f78af4(0,uRam0000000003d40108);
    puStack_80 = puVar3;
    uStack_78 = puVar4;
    puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    ppuStack_90 = &puStack_70;
    if (uVar6 == 0) {
      puStack_70 = (undefined1 *)&ppuStack_60;
      auVar16 = func_0x00f78af4();
      plVar5 = auVar16._8_8_;
      lStack_b0 = (long)puVar14;
      uStack_a8 = uVar15;
      puStack_a0 = puVar3;
      uStack_98 = puVar4;
      puStack_88 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar13 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar5 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar16._0_8_ + 0x10);
        lVar13 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar10 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar12 = piVar12 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,lVar13,0);
code_r0x0284ff28:
        (*(code *)*puVar7)(plVar5,uVar1,puVar7[1]);
        lVar13 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar10 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar12 = piVar12 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,lVar13,2);
code_r0x0284ffac:
        (*(code *)*puVar7)(plVar5,puVar7[1]);
        uVar15 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar15 = extraout_x1_00;
        }
        auVar17._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar17._8_8_ = uVar15;
        return auVar17;
      }
      uVar6 = func_0x00f78af4();
      puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      pppuStack_e0 = &pppuStack_c0;
      if (uVar6 == 0) {
        lStack_d0 = param_3;
        plStack_c8 = plVar5;
        pppuStack_c0 = &ppuStack_90;
        auVar17 = func_0x00f78af4();
        plVar9 = auVar17._8_8_;
        uStack_100 = 0x3eb8000;
        puStack_d8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_f0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_f8 = auVar16._0_8_;
          plStack_e8 = plVar5;
          func_0x00f78a20(0x3d21510);
          auVar16._8_8_ = plStack_e8;
          auVar16._0_8_ = lStack_f8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_e8 = auVar16._8_8_;
        lStack_f8 = auVar16._0_8_;
        if (plVar9 == (long *)0x0) {
          auVar16 = func_0x00f78af4();
          puStack_108 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_120 = 0;
          uStack_118 = 0;
          pppuStack_110 = &pppuStack_e0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_120,auVar16._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar16._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_118;
          auVar2._0_8_ = uStack_120;
          return auVar2;
        }
        uVar15 = *(undefined8 *)(auVar17._0_8_ + 0x10);
        lVar10 = **(long **)(*(long *)(lVar13 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
          auVar16._8_8_ = plStack_e8;
          auVar16._0_8_ = lStack_f8;
        }
        plStack_e8 = auVar16._8_8_;
        lStack_f8 = auVar16._0_8_;
        lVar11 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar12 = piVar12 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,0);
        auVar16._8_8_ = plStack_e8;
        auVar16._0_8_ = lStack_f8;
code_r0x028500d0:
        plStack_e8 = auVar16._8_8_;
        lStack_f8 = auVar16._0_8_;
        (*(code *)*puVar7)(plVar9,uVar15,puVar7[1]);
        lVar13 = **(long **)(*(long *)(lVar13 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar10 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar12 = piVar12 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar13,2);
code_r0x02850154:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
        uVar15 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar15 = extraout_x1_02;
        }
        auVar18._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar18._8_8_ = uVar15;
        return auVar18;
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
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar6;
  return auVar19;
}



// ============================================================
// RVA: 0x1523650 | Atlas.UI.UpdateMessageRepresentationBehaviour.set_MapDefinition
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_UpdateMessageRepresentationBehaviour__set_MapDefinition
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  long *plVar8;
  
  uVar13 = 0x3eb4000;
  if ((bRam0000000003eb4e4b & 1) == 0) {
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4e4b = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar12 = *(long **)(param_1 + 0x40);
    unaff_x22 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    uVar13 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    param_3 = unaff_x22;
    Atlas_UI_MapMetagameData___ctor(uVar13,param_2,unaff_x22,0,0);
    param_1 = (undefined1 *)0x0;
    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015236e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar15 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 400));
      return auVar15;
    }
  }
  uVar6 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_UpdateMessageRepresentationBehaviour___ctor;
  puStack_60 = (undefined1 *)unaff_x22;
  uStack_58 = uVar13;
  puStack_50 = param_1;
  puStack_48 = (undefined *)param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4c & 1) == 0) {
    func_0x00f78a20(0x3d40108);
    bRam0000000003eb4e4c = 1;
  }
  puVar5 = puStack_48;
  puVar4 = puStack_50;
  uVar13 = uStack_58;
  puVar3 = puStack_60;
  if (uVar6 == 0) {
    uVar6 = func_0x00f78af4(0,uRam0000000003d40108);
    puStack_60 = puVar4;
    uStack_58 = puVar5;
    puStack_48 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    ppuStack_70 = &puStack_50;
    if (uVar6 == 0) {
      puStack_50 = (undefined1 *)&puStack_40;
      auVar15 = func_0x00f78af4();
      plVar12 = auVar15._8_8_;
      lStack_90 = (long)puVar3;
      uStack_88 = uVar13;
      puStack_80 = puVar4;
      uStack_78 = puVar5;
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar14 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar12 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar15._0_8_ + 0x10);
        lVar14 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar9 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar14) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,lVar14,0);
code_r0x0284ff28:
        (*(code *)*puVar7)(plVar12,uVar1,puVar7[1]);
        lVar14 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar9 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar14) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,lVar14,2);
code_r0x0284ffac:
        (*(code *)*puVar7)(plVar12,puVar7[1]);
        uVar13 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar13 = extraout_x1_00;
        }
        auVar16._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar16._8_8_ = uVar13;
        return auVar16;
      }
      uVar6 = func_0x00f78af4();
      puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      pppuStack_c0 = &pppuStack_a0;
      if (uVar6 == 0) {
        lStack_b0 = param_3;
        plStack_a8 = plVar12;
        pppuStack_a0 = &ppuStack_70;
        auVar16 = func_0x00f78af4();
        plVar8 = auVar16._8_8_;
        uStack_e0 = 0x3eb8000;
        puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_d0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_d8 = auVar15._0_8_;
          plStack_c8 = plVar12;
          func_0x00f78a20(0x3d21510);
          auVar15._8_8_ = plStack_c8;
          auVar15._0_8_ = lStack_d8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_c8 = auVar15._8_8_;
        lStack_d8 = auVar15._0_8_;
        if (plVar8 == (long *)0x0) {
          auVar15 = func_0x00f78af4();
          puStack_e8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_100 = 0;
          uStack_f8 = 0;
          pppuStack_f0 = &pppuStack_c0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_100,auVar15._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar15._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_f8;
          auVar2._0_8_ = uStack_100;
          return auVar2;
        }
        uVar13 = *(undefined8 *)(auVar16._0_8_ + 0x10);
        lVar9 = **(long **)(*(long *)(lVar14 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
          auVar15._8_8_ = plStack_c8;
          auVar15._0_8_ = lStack_d8;
        }
        plStack_c8 = auVar15._8_8_;
        lStack_d8 = auVar15._0_8_;
        lVar10 = *plVar8;
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
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar9,0);
        auVar15._8_8_ = plStack_c8;
        auVar15._0_8_ = lStack_d8;
code_r0x028500d0:
        plStack_c8 = auVar15._8_8_;
        lStack_d8 = auVar15._0_8_;
        (*(code *)*puVar7)(plVar8,uVar13,puVar7[1]);
        lVar14 = **(long **)(*(long *)(lVar14 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar9 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar14) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar14,2);
code_r0x02850154:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar13 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar13 = extraout_x1_02;
        }
        auVar17._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar17._8_8_ = uVar13;
        return auVar17;
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
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar6;
  return auVar18;
}



// ============================================================
// RVA: 0x15236e8 | Atlas.UI.UpdateMessageRepresentationBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_UpdateMessageRepresentationBehaviour___ctor(ulong param_1,undefined8 param_2,long param_3)

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
  
  if ((bRam0000000003eb4e4c & 1) == 0) {
    func_0x00f78a20(0x3d40108);
    bRam0000000003eb4e4c = 1;
  }
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d40108);
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



