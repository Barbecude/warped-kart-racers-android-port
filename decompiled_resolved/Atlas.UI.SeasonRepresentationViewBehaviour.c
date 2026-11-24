// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SeasonRepresentationViewBehaviour

// ============================================================
// RVA: 0x14f0bac | Atlas.UI.SeasonRepresentationViewBehaviour.set_Data
// ============================================================

/* WARNING: Possible PIC construction at 0x014f1084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f10c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f0e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x014f10cc) */
/* WARNING: Removing unreachable block (ram,0x014f10d4) */
/* WARNING: Removing unreachable block (ram,0x014f10e4) */
/* WARNING: Removing unreachable block (ram,0x014f1114) */
/* WARNING: Removing unreachable block (ram,0x014f111c) */
/* WARNING: Removing unreachable block (ram,0x014f1120) */
/* WARNING: Removing unreachable block (ram,0x014f113c) */
/* WARNING: Removing unreachable block (ram,0x014f115c) */
/* WARNING: Removing unreachable block (ram,0x014f116c) */
/* WARNING: Removing unreachable block (ram,0x014f1174) */
/* WARNING: Removing unreachable block (ram,0x014f1178) */
/* WARNING: Removing unreachable block (ram,0x014f118c) */
/* WARNING: Removing unreachable block (ram,0x014f1194) */
/* WARNING: Removing unreachable block (ram,0x014f1088) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

long Atlas_UI_SeasonRepresentationViewBehaviour__set_Data(long param_1,long param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  uint uVar14;
  undefined8 unaff_x20;
  undefined8 uVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *unaff_x21;
  long *plVar18;
  undefined8 unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long *plVar19;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  undefined *unaff_x30;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long alStack_120 [2];
  undefined8 ****ppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 ****ppppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  puVar4 = &stack0xffffffffffffffb0;
  puVar20 = &stack0xfffffffffffffff0;
  plVar18 = (long *)0x3eb4000;
  if ((bRam0000000003eb4c6f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24800);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4c6f = 1;
  }
  *(long *)(param_1 + 0x18) = param_2;
  uVar6 = unaff_x22;
  if (param_2 != 0) {
    plVar17 = (long *)0x3d23990;
    plVar19 = (long *)0x3d23990;
    bVar1 = *(byte *)(param_2 + 0x58);
    unaff_w23 = (uint)bVar1;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar9 = 0;
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0);
    unaff_x24 = plVar17;
    if (iVar5 == 0) goto LAB_014f0d3c;
    lVar10 = *(long *)(param_1 + 0x28);
    if (lVar10 == 0) goto LAB_014f0d3c;
    puVar16 = (undefined1 *)0x0;
    while( true ) {
      uVar14 = (uint)puVar16;
      unaff_x24 = plVar19;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar14) goto LAB_014f0d3c;
      if (bVar1 == 0) break;
LAB_014f0ce4:
      if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_014f13bc;
      lVar9 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
      unaff_x24 = plVar19;
      if (((lVar9 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar10 == 0)) goto LAB_014f0d38;
      plVar18 = *(long **)(lVar9 + 0x40);
      uVar15 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar10,puVar16);
      if (plVar18 == (long *)0x0) goto LAB_014f0d38;
      lVar9 = 0;
      /*Atlas.UI.UIIconAndValueBehaviour$$Set*/ func_0x0151b50c(plVar18,uVar15);
      puVar16 = (undefined1 *)(ulong)(uVar14 + 1);
      lVar10 = *(long *)(param_1 + 0x28);
      if (lVar10 == 0) goto LAB_014f0d38;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar14) {
LAB_014f13bc:
      uVar15 = func_0x00f78b24();
      lVar10 = func_0x00f78ac0(uVar15,0);
      puStack_58 = &Atlas_UI_SeasonRepresentationViewBehaviour___ctor;
      puStack_80 = (undefined1 *)uVar6;
      plStack_78 = plVar18;
      puStack_70 = puVar16;
      puStack_68 = (undefined *)param_1;
      puStack_60 = puVar20;
      if ((bRam0000000003eb4c70 & 1) == 0) {
        func_0x00f78a20(0x3d40100);
        bRam0000000003eb4c70 = 1;
      }
      puVar3 = puStack_68;
      puVar4 = puStack_70;
      plVar18 = plStack_78;
      puVar20 = puStack_80;
      *(undefined4 *)(lVar10 + 0xa0) = 0x3f8ccccd;
      if (lVar10 == 0) {
        lVar10 = func_0x00f78af4(0,uRam0000000003d40100);
        puStack_80 = puVar4;
        plStack_78 = (long *)puVar3;
        puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
        ppuStack_90 = &puStack_70;
        if (lVar10 == 0) {
          puStack_70 = (undefined1 *)&puStack_60;
          auVar23 = func_0x00f78af4();
          plVar17 = auVar23._8_8_;
          uStack_b0 = puVar20;
          plStack_a8 = plVar18;
          puStack_a0 = puVar4;
          lStack_98 = (long)puVar3;
          puStack_88 = &
                       UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe
          ;
          lVar11 = lVar9;
          if ((bRam0000000003eb89d1 & 1) == 0) {
            func_0x00f78a20(0x3d21510);
            bRam0000000003eb89d1 = 1;
          }
          if (plVar17 != (long *)0x0) {
            uVar2 = *(undefined1 *)(auVar23._0_8_ + 0x10);
            lVar10 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            lVar11 = *plVar17;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 == 0) goto code_r0x0284ff08;
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto code_r0x0284fef0;
          }
          lVar10 = func_0x00f78af4();
          puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
          ppppuStack_e0 = &pppuStack_c0;
          if (lVar10 == 0) {
            lStack_d0 = lVar9;
            plStack_c8 = plVar17;
            pppuStack_c0 = &ppuStack_90;
            auVar24 = func_0x00f78af4();
            plVar18 = auVar24._8_8_;
            uStack_100 = 0x3eb8000;
            puStack_d8 = &
                         UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe
            ;
            lStack_f0 = lVar9;
            if ((bRam0000000003eb89d2 & 1) == 0) {
              lStack_f8 = auVar23._0_8_;
              plStack_e8 = plVar17;
              func_0x00f78a20(0x3d21510);
              auVar23._8_8_ = plStack_e8;
              auVar23._0_8_ = lStack_f8;
              bRam0000000003eb89d2 = 1;
            }
            plStack_e8 = auVar23._8_8_;
            lStack_f8 = auVar23._0_8_;
            if (plVar18 == (long *)0x0) {
              auVar23 = func_0x00f78af4();
              puStack_108 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
              alStack_120[0] = 0;
              alStack_120[1] = 0;
              ppppuStack_110 = &ppppuStack_e0;
              /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(alStack_120,auVar23._0_8_,
                              *(undefined8 *)(*(long *)(*(long *)(auVar23._8_8_ + 0x18) + 0xc0) + 8)
                             );
              return alStack_120[0];
            }
            uVar6 = *(undefined8 *)(auVar24._0_8_ + 0x10);
            lVar9 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
              auVar23._8_8_ = plStack_e8;
              auVar23._0_8_ = lStack_f8;
            }
            plStack_e8 = auVar23._8_8_;
            lStack_f8 = auVar23._0_8_;
            lVar10 = *plVar18;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar12 == 0) goto code_r0x028500b0;
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto code_r0x02850098;
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
      return lVar10;
    }
    unaff_x24 = plVar17;
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar18 = *(long **)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
      uVar6 = Atlas_UI_SeasonMetagameData__GetRewardAssetDefinition
                        (*(long *)(param_1 + 0x18),puVar16);
      lVar9 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_1 + 0x68) == '\0') {
        unaff_x24 = plVar19;
        if (lVar9 == 0) goto LAB_014f0d38;
        lVar9 = Atlas_UI_SeasonMetagameData__IsRewardUnlocked(lVar9,puVar16);
      }
      else {
        if (lVar9 == 0) goto LAB_014f0d38;
        lVar9 = Atlas_UI_SeasonMetagameData__IsRewardUnlockedAndUnseen(lVar9,puVar16);
      }
      unaff_x24 = plVar19;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x178))
                  (plVar18,uVar6,lVar9,uVar14 + 1,*(undefined8 *)(*plVar18 + 0x180));
        lVar10 = *(long *)(param_1 + 0x28);
        if (lVar10 != 0) goto LAB_014f0ce4;
      }
    }
  }
LAB_014f0d38:
  do {
    func_0x00f78af4();
LAB_014f0d3c:
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0,0);
    uVar15 = uVar6;
    if (iVar5 == 0) {
code_r0x014f0e28:
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
      uVar6 = uVar15;
      if ((iVar5 != 0) && (unaff_w23 == 0)) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
        plVar17 = *(long **)(param_1 + 0x38);
        uVar7 = Atlas_UI_SeasonMetagameData__GetIPMetagameData();
        if (plVar17 == (long *)0x0) goto LAB_014f0d38;
        (**(code **)(*plVar17 + 0x188))(plVar17,uVar7,*(undefined8 *)(*plVar17 + 400));
      }
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if (iVar5 != 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
        plVar17 = *(long **)(param_1 + 0x40);
        uVar7 = Atlas_UI_SeasonMetagameData__GetMapToFeatureData();
        if (plVar17 == (long *)0x0) goto LAB_014f0d38;
        (**(code **)(*plVar17 + 0x188))(plVar17,uVar7,*(undefined8 *)(*plVar17 + 400));
      }
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(*(undefined8 *)(param_1 + 0x50),0,0);
      if (iVar5 != 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
        lVar10 = *(long *)(param_1 + 0x50);
        lVar9 = Atlas_UI_SeasonMetagameData__GetIPMetagameData();
        if (((lVar9 == 0) || (lVar9 = Atlas_UI_IPMetagameData__Logo(lVar9,0), lVar9 == 0)) ||
           (lVar10 == 0)) goto LAB_014f0d38;
        /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(lVar10,*(undefined8 *)(lVar9 + 0x18),0);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if ((iVar5 != 0) && (unaff_w23 == 0)) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
        plVar17 = *(long **)(param_1 + 0x58);
        uVar7 = Atlas_UI_SeasonMetagameData__DisplayNameFull();
        if (plVar17 == (long *)0x0) goto LAB_014f0d38;
        (**(code **)(*plVar17 + 0x558))(plVar17,uVar7,*(undefined8 *)(*plVar17 + 0x560));
      }
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if ((iVar5 != 0) && (unaff_w23 == 0)) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
        plVar17 = *(long **)(param_1 + 0x60);
        uVar7 = Atlas_UI_SeasonMetagameData__DisplayNameShort();
        if (plVar17 == (long *)0x0) goto LAB_014f0d38;
        (**(code **)(*plVar17 + 0x558))(plVar17,uVar7,*(undefined8 *)(*plVar17 + 0x560));
      }
      uVar7 = *(undefined8 *)(param_1 + 0x78);
      if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if (iVar5 != 0) {
        lVar9 = *(long *)(param_1 + 0x78);
        if (unaff_w23 == 0) {
          if (((lVar9 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 != 0)) &&
             ((lVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0), lVar9 != 0 &&
              ((lVar9 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar9,0), lVar9 != 0 &&
               (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 != 0)))))) {
            uVar6 = 1;
            unaff_x30 = &UNK_014f10cc;
            puVar4 = &stack0xffffffffffffffb0;
            goto code_r0x0322ef1c;
          }
        }
        else if ((((lVar9 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 != 0)) &&
                 (lVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0), lVar9 != 0)) &&
                ((lVar9 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar9,0), lVar9 != 0 &&
                 (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 != 0)))) {
          uVar6 = 0;
          unaff_x30 = &UNK_014f1088;
          puVar4 = &stack0xffffffffffffffb0;
          goto code_r0x0322ef1c;
        }
        goto LAB_014f0d38;
      }
      if (*(char *)(param_1 + 0x68) == '\0') {
        uVar15 = *(undefined8 *)(param_1 + 0x20);
        if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0)
           ) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0,0);
        if (iVar5 != 0) {
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_014f0d38;
          Atlas_UI_PaginationDotController__SetDotAmount(*(long *)(param_1 + 0x98),4,0);
          if (unaff_w23 == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
            uVar15 = Atlas_UI_SeasonMetagameData__GetCurrentRewardIndex();
            plVar18 = (long *)0x3d24800;
            if (((*(ushort *)(/*Atlas.UI.SeasonRepresentationViewBehaviour_TypeInfo*/ lRam0000000003d24800 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.SeasonRepresentationViewBehaviour_TypeInfo*/ lRam0000000003d24800 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
            fVar22 = **(float **)(/*Atlas.UI.SeasonRepresentationViewBehaviour_TypeInfo*/ lRam0000000003d24800 + 0xb8);
            fVar21 = (float)Atlas_UI_SeasonMetagameData__GetProgressForRewardSegment
                                      (*(long *)(param_1 + 0x18),uVar15);
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_014f0d38;
            /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(fVar22 * (float)(int)uVar15 +
                            fVar21 * **(float **)(/*Atlas.UI.SeasonRepresentationViewBehaviour_TypeInfo*/ lRam0000000003d24800 + 0xb8),
                            *(long *)(param_1 + 0x20),0);
            if (*(long *)(param_1 + 0x98) == 0) goto LAB_014f0d38;
            Atlas_UI_PaginationDotController__SnapToTarget
                      (**(float **)(/*Atlas.UI.SeasonRepresentationViewBehaviour_TypeInfo*/ lRam0000000003d24800 + 0xb8) *
                       *(float *)(param_1 + 0xa0) * (float)(int)uVar15,*(long *)(param_1 + 0x98),0);
          }
          else {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_014f0d38;
            /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(0,*(long *)(param_1 + 0x20),0);
          }
        }
      }
      uVar15 = *(undefined8 *)(param_1 + 0x70);
      if (((*(ushort *)(*unaff_x24 + 0x132) >> 10 & 1) != 0) && (*(int *)(*unaff_x24 + 0xe0) == 0))
      {
        func_0x00f78ad0();
      }
      lVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0,0);
      if ((int)lVar9 == 0) {
        return lVar9;
      }
      if (unaff_w23 == 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          iVar5 = Atlas_UI_SeasonMetagameData__IsSeasonActive();
          plVar17 = *(long **)(param_1 + 0x70);
          if (iVar5 == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
            uVar15 = Atlas_UI_SeasonMetagameData__GetFinishedString();
          }
          else {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f0d38;
            uVar15 = Atlas_UI_SeasonMetagameData__GetTimeLeftString();
          }
          if (plVar17 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f13b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar9 = (**(code **)(*plVar17 + 0x558))
                              (plVar17,uVar15,*(undefined8 *)(*plVar17 + 0x560));
            return lVar9;
          }
        }
      }
      else if ((((*(long *)(param_1 + 0x70) != 0) &&
                (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x70),0), lVar9 != 0)) &&
               (lVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0), lVar9 != 0)) &&
              ((lVar9 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar9,0), lVar9 != 0 &&
               (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 != 0)))) {
        uVar6 = 0;
        puVar4 = (undefined1 *)register0x00000008;
        param_1 = unaff_x19;
        uVar7 = unaff_x20;
        plVar18 = unaff_x21;
        uVar15 = unaff_x22;
        puVar20 = unaff_x29;
        goto code_r0x0322ef1c;
      }
      goto LAB_014f0d38;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar7 = Atlas_UI_SeasonMetagameData__GetCurrentRewardIndex();
      uVar15 = 0x3d247f0;
      uVar6 = 0x3d247f0;
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((int)uVar7 < **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8)) {
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar7 = Atlas_UI_SeasonMetagameData__GetFinalRewardAssetDefinition();
          plVar18 = *(long **)(param_1 + 0x30);
          if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x178))
                      (plVar18,uVar7,0,**(undefined4 **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8),
                       *(undefined8 *)(*plVar18 + 0x180));
            goto code_r0x014f0e28;
          }
        }
      }
      else if ((*(long *)(param_1 + 0x30) != 0) &&
              (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x30),0), lVar9 != 0)) {
        uVar6 = 0;
        unaff_x30 = &UNK_014f0e28;
code_r0x0322ef1c:
        *(undefined8 *)(puVar4 + -0x30) = uVar15;
        *(long **)(puVar4 + -0x28) = plVar18;
        *(undefined8 *)(puVar4 + -0x20) = uVar7;
        *(long *)(puVar4 + -0x18) = param_1;
        *(undefined1 **)(puVar4 + -0x10) = puVar20;
        *(undefined **)(puVar4 + -8) = unaff_x30;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar9 = (*pcRam0000000003ebf4c0)(lVar9,uVar6);
        return lVar9;
      }
    }
  } while( true );
  while( true ) {
    piVar13 = piVar13 + 4;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) break;
code_r0x0284fef0:
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto code_r0x0284ff28;
    }
  }
code_r0x0284ff08:
  puVar8 = (undefined8 *)func_0x00fac1f0(plVar17,lVar10,0);
code_r0x0284ff28:
  (*(code *)*puVar8)(plVar17,uVar2,puVar8[1]);
  lVar9 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  lVar10 = *plVar17;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar9) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
        goto code_r0x0284ffac;
      }
      piVar13 = piVar13 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)func_0x00fac1f0(plVar17,lVar9,2);
code_r0x0284ffac:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
  if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
  while( true ) {
    piVar13 = piVar13 + 4;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) break;
code_r0x02850098:
    if (*(long *)(piVar13 + -2) == lVar9) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto code_r0x028500d0;
    }
  }
code_r0x028500b0:
  puVar8 = (undefined8 *)func_0x00fac1f0(plVar18,lVar9,0);
  auVar23._8_8_ = plStack_e8;
  auVar23._0_8_ = lStack_f8;
code_r0x028500d0:
  plStack_e8 = auVar23._8_8_;
  lStack_f8 = auVar23._0_8_;
  (*(code *)*puVar8)(plVar18,uVar6,puVar8[1]);
  lVar9 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  lVar10 = *plVar18;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar9) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
        goto code_r0x02850154;
      }
      piVar13 = piVar13 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)func_0x00fac1f0(plVar18,lVar9,2);
code_r0x02850154:
  (*(code *)*puVar8)(plVar18,puVar8[1]);
  if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
}



// ============================================================
// RVA: 0x14f13c8 | Atlas.UI.SeasonRepresentationViewBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_SeasonRepresentationViewBehaviour___ctor(ulong param_1,undefined8 param_2,long param_3)

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
  
  if ((bRam0000000003eb4c70 & 1) == 0) {
    func_0x00f78a20(0x3d40100);
    bRam0000000003eb4c70 = 1;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0x3f8ccccd;
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d40100);
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



// ============================================================
// RVA: 0x14f1428 | Atlas.UI.SeasonRepresentationViewBehaviour..cctor
// ============================================================

void Atlas_UI_SeasonRepresentationViewBehaviour___cctor(void)

{
  if ((bRam0000000003eb4c71 & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24800);
    bRam0000000003eb4c71 = 1;
  }
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  **(float **)(/*Atlas.UI.SeasonRepresentationViewBehaviour_TypeInfo*/ lRam0000000003d24800 + 0xb8) = 1.0 / (float)**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8);
  return;
}



