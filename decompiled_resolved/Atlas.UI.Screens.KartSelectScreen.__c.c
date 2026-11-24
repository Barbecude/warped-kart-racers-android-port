// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.KartSelectScreen.<>c

// ============================================================
// RVA: 0x1555a24 | Atlas.UI.Screens.KartSelectScreen.<>c..cctor
// ============================================================

void Atlas_UI_Screens_KartSelectScreen___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4fa2 & 1) == 0) {
    func_0x00f78a20(0x3d27d18);
    bRam0000000003eb4fa2 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.UI.Screens.KartSelectScreen.<>c_TypeInfo*/ lRam0000000003d27d18);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.UI.Screens.KartSelectScreen.<>c_TypeInfo*/ lRam0000000003d27d18 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1555a84 | Atlas.UI.Screens.KartSelectScreen.<>c..ctor
// ============================================================

void Atlas_UI_Screens_KartSelectScreen___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1555a8c | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_0
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_0(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long *extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  long *extraout_x1_08;
  long extraout_x1_09;
  int *piVar18;
  long unaff_x19;
  ulong *puVar19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar21;
  undefined1 ***unaff_x29;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined *unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auStack_182 [146];
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  uVar20 = unaff_x20;
  if (param_2 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
    puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_1;
    func_0x00f78af4();
    lVar8 = extraout_x1;
    if (extraout_x1 == 0) {
      pppuVar4 = (undefined1 ***)&puStack_20;
      unaff_x29 = (undefined1 ***)&puStack_20;
      puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_1;
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_3;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      if (extraout_x1_00 != 0) {
        uVar17 = 0;
        param_2 = extraout_x1_00;
        goto code_r0x014881dc;
      }
      ppuVar3 = &puStack_30;
      ppuVar21 = &puStack_30;
      puStack_28 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_3;
      puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_4;
      puStack_30 = (undefined1 *)&puStack_20;
      func_0x00f78af4();
      lVar8 = extraout_x1_01;
      if (extraout_x1_01 == 0) {
        pppuVar4 = (undefined1 ***)&puStack_40;
        unaff_x29 = (undefined1 ***)&puStack_40;
        puStack_38 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_4;
        unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78af4();
        if (extraout_x1_02 != 0) {
          uVar17 = 0;
          param_2 = extraout_x1_02;
          goto code_r0x014881dc;
        }
        ppuVar3 = &puStack_50;
        ppuVar21 = &puStack_50;
        puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
        puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
        puStack_50 = (undefined1 *)&puStack_40;
        func_0x00f78af4();
        lVar8 = extraout_x1_03;
        if (extraout_x1_03 == 0) {
          pppuVar4 = (undefined1 ***)&puStack_60;
          unaff_x29 = (undefined1 ***)&puStack_60;
          puStack_58 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
          unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
          puStack_60 = (undefined1 *)&puStack_50;
          func_0x00f78af4();
          if (extraout_x1_04 != 0) {
            uVar17 = 0;
            param_2 = extraout_x1_04;
            goto code_r0x014881dc;
          }
          puStack_68 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
          puStack_70 = (undefined1 *)&puStack_60;
          func_0x00f78af4();
          ppuVar3 = (undefined1 **)&stack0xffffffffffffff60;
          puStack_78 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10;
          ppuVar21 = &puStack_80;
          uVar20 = 0x3eb4000;
          puStack_80 = (undefined1 *)&puStack_70;
          if ((bRam0000000003eb4fa3 & 1) == 0) {
            puStack_80 = (undefined1 *)&puStack_70;
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d22cf8);
            bRam0000000003eb4fa3 = 1;
          }
          if (extraout_x1_05 != (long *)0x0) {
            uVar20 = (**(code **)(*extraout_x1_05 + 0x178))
                               (extraout_x1_05,*(undefined8 *)(*extraout_x1_05 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
            if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
            ppuVar5 = &puStack_70;
            puVar22 = puStack_80;
            puVar23 = puStack_78;
Core_Definitions_DefinitionID__op_Inequality:
            *(undefined8 *)((long)ppuVar5 + -0x30) = unaff_x22;
            *(undefined8 *)((long)ppuVar5 + -0x28) = unaff_x21;
            *(undefined8 *)((long)ppuVar5 + -0x20) = unaff_x20;
            *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
            *(undefined1 **)((long)ppuVar5 + -0x10) = puVar22;
            *(undefined **)((long)ppuVar5 + -8) = puVar23;
            if ((bRam0000000003eb574c & 1) == 0) {
              func_0x00f78a20(0x3d21270,uVar17,0);
              bRam0000000003eb574c = 1;
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17);
            return (ulong)(uVar6 ^ 1);
          }
          puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
          func_0x00f78af4();
          if (extraout_x1_06 == 0) {
            pppuVar4 = &ppuStack_b0;
            unaff_x29 = &ppuStack_b0;
            puStack_a8 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
            unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
            ppuStack_b0 = ppuVar21;
            func_0x00f78af4();
            if (extraout_x1_07 != 0) {
              uVar17 = 0;
              unaff_x19 = 0;
              param_2 = extraout_x1_07;
              goto code_r0x014881dc;
            }
            puStack_b8 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
            puStack_c0 = (undefined1 *)&ppuStack_b0;
            func_0x00f78af4();
            ppuVar3 = (undefined1 **)&stack0xffffffffffffff10;
            puStack_c8 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
            ppuVar21 = &puStack_d0;
            unaff_x20 = 0x3eb4000;
            puStack_d0 = (undefined1 *)&puStack_c0;
            if ((bRam0000000003eb4fa4 & 1) == 0) {
              puStack_d0 = (undefined1 *)&puStack_c0;
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d22cf8);
              bRam0000000003eb4fa4 = 1;
            }
            if (extraout_x1_08 != (long *)0x0) {
              uVar20 = (**(code **)(*extraout_x1_08 + 0x178))
                                 (extraout_x1_08,*(undefined8 *)(*extraout_x1_08 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
              if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
              unaff_x20 = 0x3eb4000;
              ppuVar5 = &puStack_c0;
              unaff_x19 = 0;
              puVar22 = puStack_d0;
              puVar23 = puStack_c8;
              goto Core_Definitions_DefinitionID__op_Inequality;
            }
            puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
            func_0x00f78af4();
            if (extraout_x1_09 == 0) {
              uVar16 = func_0x00f78af4();
              return uVar16;
            }
            unaff_x19 = 0;
            lVar8 = extraout_x1_09;
          }
          else {
            unaff_x19 = 0;
            lVar8 = extraout_x1_06;
            unaff_x20 = uVar20;
          }
        }
      }
    }
    pppuVar4 = (undefined1 ***)((long)ppuVar3 + -0x20);
    *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)ppuVar3 + -8) = puVar23;
    unaff_x29 = (undefined1 ***)((long)ppuVar3 + -0x10);
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar9 = *(long *)(lVar8 + 0x20);
    if (lVar9 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(lVar8 + 0x30) != 0) {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 0x30);
      puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar23 = *(undefined **)((long)ppuVar3 + -8);
      goto code_r0x0164feb4;
    }
    unaff_x30 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar24 = func_0x00f78af4();
    uVar17 = auVar24._8_8_;
    param_2 = auVar24._0_8_;
    unaff_x19 = lVar8;
    uVar20 = 0x3eb4000;
  }
  else {
    uVar17 = 0;
    pppuVar4 = (undefined1 ***)register0x00000008;
  }
code_r0x014881dc:
  *(undefined1 ****)((long)pppuVar4 + -0x10) = unaff_x29;
  *(undefined **)((long)pppuVar4 + -8) = unaff_x30;
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
    return (ulong)(uVar6 ^ 1);
  }
  lVar8 = func_0x00f78af4(lVar8,uVar17);
  *(undefined1 **)((long)pppuVar4 + -0x20) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(undefined **)((long)pppuVar4 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 == 0) {
    return 0;
  }
  if (*(long *)(lVar8 + 0x38) != 0) {
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar4 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar4 + -0x30) = uVar20;
    *(long *)((long)pppuVar4 + -0x28) = unaff_x19;
    *(undefined8 *)((long)pppuVar4 + -0x20) = *(undefined8 *)((long)pppuVar4 + -0x20);
    *(undefined8 *)((long)pppuVar4 + -0x18) = *(undefined8 *)((long)pppuVar4 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar4 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x60) = 0;
    lVar8 = *(long *)(lVar9 + 0x20);
    if (((lVar8 == 0) || (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar8,0), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x38) == 0)) {
      auVar24 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar4 + -0x70),*(long *)(lVar8 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar4 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar20 = *(undefined8 *)((long)pppuVar4 + -0x58);
        uVar16 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar4 + -0x60),uVar17,4,0);
      } while ((uVar16 & 1) == 0);
      *(char *)((long)pppuVar4 + -0x71) = (char)uVar20;
      lVar8 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x71));
      *(undefined1 *)((long)pppuVar4 + -0x72) = 2;
      uVar20 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x72));
      auVar24._8_8_ = uVar20;
      auVar24._0_8_ = uVar20;
      if (lVar8 != 0) {
        uVar16 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar8,uVar20,0);
        if ((uVar16 & 1) == 0) {
code_r0x015218ec:
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33738);
        return uVar16;
      }
    }
    func_0x00f78af4(auVar24._0_8_,auVar24._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar8 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x20);
  *(undefined **)((long)pppuVar4 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar8 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar8 + 0x30) + 0x61);
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar4 + -0x50) = uVar20;
  *(long *)((long)pppuVar4 + -0x48) = unaff_x19;
  *(undefined1 **)((long)pppuVar4 + -0x40) = (undefined1 *)((long)pppuVar4 + -0x30);
  *(undefined **)((long)pppuVar4 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar8 + 0x30) != 0) &&
     (uVar16 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar8 + 0x30),0), *(long *)(uVar16 + 8) != 0)) {
    return uVar16;
  }
  plVar10 = (long *)func_0x00f78af4();
  ppuVar3 = (undefined1 **)((long)pppuVar4 + -0x130);
  *(undefined8 *)((long)pppuVar4 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar4 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar4 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar4 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar4 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar4 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar4 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x68) = lVar8;
  *(undefined1 **)((long)pppuVar4 + -0x60) = (undefined1 *)((long)pppuVar4 + -0x40);
  *(undefined **)((long)pppuVar4 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar22 = (undefined1 *)((long)pppuVar4 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar4 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar4 + -200) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
  puVar19 = (ulong *)(plVar10 + 5);
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) goto code_r0x014891b4;
  if (plVar10[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar20 = func_0x00f78b24();
    func_0x00f78ac0(uVar20,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar4 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar4 + -0x120) = puVar19;
    plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
    if (plVar11 != (long *)0x0) {
      do {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar16 & 1) == 0) break;
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar13,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar7 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar7) {
            uVar20 = **(undefined8 **)((long)pppuVar4 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar13 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar20 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar13,iVar7,0);
          uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
          uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
          if ((uVar16 & 1) != 0) break;
          iVar7 = iVar7 + 1;
        }
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar4 + -0xc0),0);
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],plVar13[6],(undefined1 *)((long)pppuVar4 + -200),0);
        uVar20 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar4 + -0xc0),
                                 *(undefined8 *)((long)pppuVar4 + -200),0);
        **(undefined8 **)((long)pppuVar4 + -0x120) = uVar20;
code_r0x0148868c:
        uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar16 & 1) == 0);
      *(undefined4 *)((long)pppuVar4 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar4 + -0xf8) = 1;
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
      if (*(int *)((long)pppuVar4 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
      }
      uVar6 = (uint)(*(int *)((long)pppuVar4 + -0x118) != 199);
      puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
      iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar7 == 0) {
code_r0x01488a60:
        iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar7 == 0) {
code_r0x01488d78:
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar7 == 0) {
code_r0x01488eb4:
            puVar19 = *(ulong **)((long)pppuVar4 + -0x120);
            iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar7 == 0) goto code_r0x01489170;
            if (plVar10[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57590
                             );
              if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
                plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar11 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    if ((uVar16 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar4 + (long)(int)uVar6 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar4 + -0xf8) = *(int *)((long)pppuVar4 + -0xf8) + 1;
                      puVar19 = *(ulong **)((long)pppuVar4 + -0x120);
                      if (plVar11 == (long *)0x0) goto code_r0x01489170;
                      lVar8 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                      if (uVar16 == 0) goto code_r0x01489144;
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                    if (plVar13 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar13);
                      goto code_r0x014892b8;
                    }
                    lVar8 = plVar13[4];
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar8,uVar20,0);
                  } while ((uVar16 & 1) == 0);
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar4 + -0xf0),0);
                    lVar9 = plVar10[4];
                    if (lVar9 != 0) {
                      lVar8 = plVar13[7];
                      puVar23 = &UNK_014890b0;
                      ppuVar3 = (undefined1 **)((long)pppuVar4 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
                      *(undefined **)((long)ppuVar3 + -8) = puVar23;
                      *(undefined8 *)((long)ppuVar3 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar9,lVar8,(undefined1 *)((long)ppuVar3 + -0x18));
                      return *(ulong *)((long)ppuVar3 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar8 = plVar10[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar8 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar8,uVar20,(undefined1 *)((long)pppuVar4 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar4 + -0xe0) != 0) &&
                 (lVar8 = *(long *)(*(long *)((long)pppuVar4 + -0xe0) + 0x28), lVar8 != 0)) {
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar16 = 0;
                  uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar15 <= uVar16) goto code_r0x01489258;
                    uVar17 = *(undefined8 *)(lVar8 + 0x20 + uVar16 * 8);
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    iVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                    if (iVar7 != 0) {
                      if (plVar10[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar4 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar4 + -0x120) =
                           *(undefined8 *)((long)pppuVar4 + -0xe8);
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar10[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
            *(uint *)((long)pppuVar4 + -0x124) = uVar6;
            plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((uVar16 & 1) == 0) break;
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar13 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar13);
                goto code_r0x014892b8;
              }
              lVar8 = plVar13[8];
              if (lVar8 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar16 = 0;
              while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                  uVar20 = func_0x00f78b24();
                  func_0x00f78ac0(uVar20,0);
                  goto code_r0x014892b8;
                }
                uVar17 = *(undefined8 *)(lVar8 + uVar16 * 8 + 0x20);
                uVar20 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                if ((uVar15 & 1) != 0) {
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar4 + -0xd8),0);
                  lVar9 = plVar10[4];
                  if (lVar9 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar8 = plVar13[4];
                  puVar23 = &UNK_01488c94;
                  ppuVar3 = (undefined1 **)((long)pppuVar4 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar16 = uVar16 + 1;
                lVar8 = plVar13[8];
                if (lVar8 == 0) goto code_r0x014891e0;
              }
              uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar16 & 1) == 0);
            *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
            uVar6 = uVar1 + 1;
            *(uint *)((long)pppuVar4 + -0xf8) = uVar6;
            puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
            if (plVar11 != (long *)0x0) {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar14)(plVar11,puVar14[1]);
            }
            if ((uVar6 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
              uVar6 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar10[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
          *(uint *)((long)pppuVar4 + -0x124) = uVar6;
          plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar16 & 1) == 0) break;
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
            if (plVar13 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar13 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar13);
              goto code_r0x014892b8;
            }
            iVar7 = 0;
            do {
              uVar20 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar13,iVar7,0);
              uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
              if ((uVar16 & 1) != 0) {
                if (plVar10[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar4 + -0xd0),0);
                lVar9 = plVar10[4];
                if (lVar9 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar8 = plVar13[6];
                puVar23 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 3);
            uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar16 & 1) == 0);
          *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
          uVar6 = uVar1 + 1;
          *(uint *)((long)pppuVar4 + -0xf8) = uVar6;
          puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          if ((uVar6 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
            uVar6 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar18 = piVar18 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
code_r0x01489170:
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) {
code_r0x014891b4:
    return *puVar19;
  }
  if (plVar10[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar19,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555aa8 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_1
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_1(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar9;
  int iVar8;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong extraout_x1;
  long extraout_x1_00;
  ulong extraout_x1_01;
  long extraout_x1_02;
  ulong extraout_x1_03;
  long *extraout_x1_04;
  long extraout_x1_05;
  ulong extraout_x1_06;
  long *extraout_x1_07;
  long extraout_x1_08;
  int *piVar19;
  long unaff_x19;
  ulong *puVar20;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar22;
  undefined1 **unaff_x29;
  undefined1 *puVar23;
  undefined *puVar24;
  undefined *unaff_x30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_172 [146];
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  ppuVar3 = (undefined1 **)register0x00000008;
  if (param_2 == 0) {
    pppuVar4 = (undefined1 ***)&stack0xfffffffffffffff0;
    pppuVar22 = (undefined1 ***)&stack0xfffffffffffffff0;
    puVar24 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_3;
    func_0x00f78af4();
    uVar21 = unaff_x20;
    if (extraout_x1 == 0) {
      unaff_x29 = &puStack_20;
      puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_3;
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_4;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      ppuVar3 = &puStack_20;
      param_2 = extraout_x1_00;
      if (extraout_x1_00 == 0) {
        pppuVar4 = (undefined1 ***)&puStack_30;
        pppuVar22 = (undefined1 ***)&puStack_30;
        puStack_28 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_4;
        puVar24 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78af4();
        if (extraout_x1_01 != 0) {
          auVar25._8_8_ = 0;
          auVar25._0_8_ = extraout_x1_01;
          goto code_r0x014881dc;
        }
        unaff_x29 = &puStack_40;
        puStack_38 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
        unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78af4();
        ppuVar3 = &puStack_40;
        param_2 = extraout_x1_02;
        if (extraout_x1_02 == 0) {
          pppuVar4 = (undefined1 ***)&puStack_50;
          pppuVar22 = (undefined1 ***)&puStack_50;
          puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
          puVar24 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
          puStack_50 = (undefined1 *)&puStack_40;
          func_0x00f78af4();
          if (extraout_x1_03 != 0) {
            auVar25._8_8_ = 0;
            auVar25._0_8_ = extraout_x1_03;
            goto code_r0x014881dc;
          }
          puStack_58 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
          puStack_60 = (undefined1 *)&puStack_50;
          func_0x00f78af4();
          puStack_68 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10;
          unaff_x29 = &puStack_70;
          uVar21 = 0x3eb4000;
          puStack_70 = (undefined1 *)&puStack_60;
          if ((bRam0000000003eb4fa3 & 1) == 0) {
            puStack_70 = (undefined1 *)&puStack_60;
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d22cf8);
            bRam0000000003eb4fa3 = 1;
          }
          if (extraout_x1_04 != (long *)0x0) {
            uVar21 = (**(code **)(*extraout_x1_04 + 0x178))
                               (extraout_x1_04,*(undefined8 *)(*extraout_x1_04 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
            if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar18 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
            ppuVar5 = &puStack_60;
            puVar23 = puStack_70;
            puVar24 = puStack_68;
Core_Definitions_DefinitionID__op_Inequality:
            *(undefined8 *)((long)ppuVar5 + -0x30) = unaff_x22;
            *(undefined8 *)((long)ppuVar5 + -0x28) = unaff_x21;
            *(undefined8 *)((long)ppuVar5 + -0x20) = unaff_x20;
            *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
            *(undefined1 **)((long)ppuVar5 + -0x10) = puVar23;
            *(undefined **)((long)ppuVar5 + -8) = puVar24;
            if ((bRam0000000003eb574c & 1) == 0) {
              func_0x00f78a20(0x3d21270,uVar18,0);
              bRam0000000003eb574c = 1;
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar21,uVar18);
            return (ulong)(uVar7 ^ 1);
          }
          unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
          func_0x00f78af4();
          if (extraout_x1_05 == 0) {
            pppuVar4 = &ppuStack_a0;
            pppuVar22 = &ppuStack_a0;
            puStack_98 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
            puVar24 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
            ppuStack_a0 = unaff_x29;
            func_0x00f78af4();
            if (extraout_x1_06 != 0) {
              auVar25._8_8_ = 0;
              auVar25._0_8_ = extraout_x1_06;
              unaff_x19 = 0;
              goto code_r0x014881dc;
            }
            puStack_a8 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
            puStack_b0 = (undefined1 *)&ppuStack_a0;
            func_0x00f78af4();
            puStack_b8 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
            unaff_x29 = &puStack_c0;
            unaff_x20 = 0x3eb4000;
            puStack_c0 = (undefined1 *)&puStack_b0;
            if ((bRam0000000003eb4fa4 & 1) == 0) {
              puStack_c0 = (undefined1 *)&puStack_b0;
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d22cf8);
              bRam0000000003eb4fa4 = 1;
            }
            if (extraout_x1_07 != (long *)0x0) {
              uVar21 = (**(code **)(*extraout_x1_07 + 0x178))
                                 (extraout_x1_07,*(undefined8 *)(*extraout_x1_07 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
              if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
              unaff_x20 = 0x3eb4000;
              ppuVar5 = &puStack_b0;
              unaff_x19 = 0;
              puVar23 = puStack_c0;
              puVar24 = puStack_b8;
              goto Core_Definitions_DefinitionID__op_Inequality;
            }
            unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
            func_0x00f78af4();
            if (extraout_x1_08 == 0) {
              uVar16 = func_0x00f78af4();
              return uVar16;
            }
            unaff_x19 = 0;
            ppuVar3 = (undefined1 **)&stack0xffffffffffffff20;
            param_2 = extraout_x1_08;
          }
          else {
            unaff_x19 = 0;
            ppuVar3 = (undefined1 **)&stack0xffffffffffffff70;
            param_2 = extraout_x1_05;
            unaff_x20 = uVar21;
          }
        }
      }
      goto Atlas_UI_LoadoutMetagameData__get_DisplayName;
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = extraout_x1;
  }
  else {
Atlas_UI_LoadoutMetagameData__get_DisplayName:
    pppuVar4 = (undefined1 ***)((long)ppuVar3 + -0x20);
    *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
    pppuVar22 = (undefined1 ***)((long)ppuVar3 + -0x10);
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if (lVar9 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar17 = *(long *)(*(long *)(param_2 + 0x30) + 0x30);
      puVar23 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar24 = *(undefined **)((long)ppuVar3 + -8);
      puVar6 = (undefined1 *)ppuVar3;
      goto code_r0x0164feb4;
    }
    puVar24 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar25 = func_0x00f78af4();
    unaff_x19 = param_2;
    uVar21 = 0x3eb4000;
  }
code_r0x014881dc:
  *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar22;
  *(undefined **)((long)pppuVar4 + -8) = puVar24;
  lVar9 = *(long *)(auVar25._0_8_ + 0x10);
  if (lVar9 == 0) {
    return 0;
  }
  lVar17 = *(long *)(auVar25._0_8_ + 0x38);
  if (lVar17 != 0) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,*(undefined8 *)(lVar17 + 0x18),0);
    return (ulong)(uVar7 ^ 1);
  }
  lVar9 = func_0x00f78af4(lVar9,auVar25._8_8_);
  *(undefined1 **)((long)pppuVar4 + -0x20) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(undefined **)((long)pppuVar4 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar17 = *(long *)(lVar9 + 0x10);
  if (lVar17 == 0) {
    return 0;
  }
  if (*(long *)(lVar9 + 0x38) != 0) {
    uVar18 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar4 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar4 + -0x30) = uVar21;
    *(long *)((long)pppuVar4 + -0x28) = unaff_x19;
    *(undefined8 *)((long)pppuVar4 + -0x20) = *(undefined8 *)((long)pppuVar4 + -0x20);
    *(undefined8 *)((long)pppuVar4 + -0x18) = *(undefined8 *)((long)pppuVar4 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar4 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x60) = 0;
    lVar9 = *(long *)(lVar17 + 0x20);
    if (((lVar9 == 0) || (lVar9 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar9,0), lVar9 == 0)) ||
       (*(long *)(lVar9 + 0x38) == 0)) {
      auVar26 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar4 + -0x70),*(long *)(lVar9 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar4 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar21 = *(undefined8 *)((long)pppuVar4 + -0x58);
        uVar16 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar4 + -0x60),uVar18,4,0);
      } while ((uVar16 & 1) == 0);
      *(char *)((long)pppuVar4 + -0x71) = (char)uVar21;
      lVar9 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x71));
      *(undefined1 *)((long)pppuVar4 + -0x72) = 2;
      uVar21 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x72));
      auVar26._8_8_ = uVar21;
      auVar26._0_8_ = uVar21;
      if (lVar9 != 0) {
        uVar16 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar9,uVar21,0);
        if ((uVar16 & 1) == 0) {
code_r0x015218ec:
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33738);
        return uVar16;
      }
    }
    func_0x00f78af4(auVar26._0_8_,auVar26._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar9 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x20);
  *(undefined **)((long)pppuVar4 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar9 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar9 + 0x30) + 0x61);
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar4 + -0x50) = uVar21;
  *(long *)((long)pppuVar4 + -0x48) = unaff_x19;
  *(undefined1 **)((long)pppuVar4 + -0x40) = (undefined1 *)((long)pppuVar4 + -0x30);
  *(undefined **)((long)pppuVar4 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar9 + 0x30) != 0) &&
     (uVar16 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar9 + 0x30),0), *(long *)(uVar16 + 8) != 0)) {
    return uVar16;
  }
  plVar10 = (long *)func_0x00f78af4();
  puVar6 = (undefined1 *)((long)pppuVar4 + -0x130);
  *(undefined8 *)((long)pppuVar4 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar4 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar4 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar4 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar4 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar4 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar4 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x68) = lVar9;
  *(undefined1 **)((long)pppuVar4 + -0x60) = (undefined1 *)((long)pppuVar4 + -0x40);
  *(undefined **)((long)pppuVar4 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar23 = (undefined1 *)((long)pppuVar4 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar4 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar4 + -200) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
  puVar20 = (ulong *)(plVar10 + 5);
  iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar8 == 0) goto code_r0x014891b4;
  if (plVar10[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar4 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar4 + -0x120) = puVar20;
    plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
    if (plVar11 != (long *)0x0) {
      do {
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar19 = piVar19 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar16 & 1) == 0) break;
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar19 = piVar19 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar13,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar8 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar8) {
            uVar21 = **(undefined8 **)((long)pppuVar4 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar13 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar21 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar13,iVar8,0);
          uVar18 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
          uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar21,uVar18,0);
          if ((uVar16 & 1) != 0) break;
          iVar8 = iVar8 + 1;
        }
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar4 + -0xc0),0);
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],plVar13[6],(undefined1 *)((long)pppuVar4 + -200),0);
        uVar21 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar4 + -0xc0),
                                 *(undefined8 *)((long)pppuVar4 + -200),0);
        **(undefined8 **)((long)pppuVar4 + -0x120) = uVar21;
code_r0x0148868c:
        uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar21,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar16 & 1) == 0);
      *(undefined4 *)((long)pppuVar4 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar4 + -0xf8) = 1;
      if (plVar11 != (long *)0x0) {
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar19 = piVar19 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
      if (*(int *)((long)pppuVar4 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
      }
      uVar7 = (uint)(*(int *)((long)pppuVar4 + -0x118) != 199);
      puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
      iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar8 == 0) {
code_r0x01488a60:
        iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar8 == 0) {
code_r0x01488d78:
          iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar8 == 0) {
code_r0x01488eb4:
            puVar20 = *(ulong **)((long)pppuVar4 + -0x120);
            iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar8 == 0) goto code_r0x01489170;
            if (plVar10[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57590
                             );
              if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
                plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar11 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar9 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar16 != 0) {
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar19 = piVar19 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    if ((uVar16 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar4 + (long)(int)uVar7 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar4 + -0xf8) = *(int *)((long)pppuVar4 + -0xf8) + 1;
                      puVar20 = *(ulong **)((long)pppuVar4 + -0x120);
                      if (plVar11 == (long *)0x0) goto code_r0x01489170;
                      lVar9 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                      if (uVar16 == 0) goto code_r0x01489144;
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar9 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar16 != 0) {
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar19 = piVar19 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                    if (plVar13 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar13);
                      goto code_r0x014892b8;
                    }
                    lVar9 = plVar13[4];
                    uVar21 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar9,uVar21,0);
                  } while ((uVar16 & 1) == 0);
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar4 + -0xf0),0);
                    lVar9 = plVar10[4];
                    if (lVar9 != 0) {
                      lVar17 = plVar13[7];
                      puVar24 = &UNK_014890b0;
                      puVar6 = (undefined1 *)((long)pppuVar4 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)(puVar6 + -0x10) = puVar23;
                      *(undefined **)(puVar6 + -8) = puVar24;
                      *(undefined8 *)(puVar6 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar9,lVar17,puVar6 + -0x18);
                      return *(ulong *)(puVar6 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar9 = plVar10[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar9 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar9,uVar21,(undefined1 *)((long)pppuVar4 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar4 + -0xe0) != 0) &&
                 (lVar9 = *(long *)(*(long *)((long)pppuVar4 + -0xe0) + 0x28), lVar9 != 0)) {
                if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
                  uVar16 = 0;
                  uVar15 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
                  do {
                    if (uVar15 <= uVar16) goto code_r0x01489258;
                    uVar18 = *(undefined8 *)(lVar9 + 0x20 + uVar16 * 8);
                    uVar21 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
                    iVar8 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar18,uVar21,0);
                    if (iVar8 != 0) {
                      if (plVar10[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar4 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar4 + -0x120) =
                           *(undefined8 *)((long)pppuVar4 + -0xe8);
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar9 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar10[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
            *(uint *)((long)pppuVar4 + -0x124) = uVar7;
            plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar9 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar16 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar19 = piVar19 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((uVar16 & 1) == 0) break;
              lVar9 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar16 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar19 = piVar19 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar13 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar13);
                goto code_r0x014892b8;
              }
              lVar9 = plVar13[8];
              if (lVar9 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar16 = 0;
              while ((long)uVar16 < (long)(int)*(uint *)(lVar9 + 0x18)) {
                if (*(uint *)(lVar9 + 0x18) <= uVar16) {
                  uVar21 = func_0x00f78b24();
                  func_0x00f78ac0(uVar21,0);
                  goto code_r0x014892b8;
                }
                uVar18 = *(undefined8 *)(lVar9 + uVar16 * 8 + 0x20);
                uVar21 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
                uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar18,uVar21,0);
                if ((uVar15 & 1) != 0) {
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar4 + -0xd8),0);
                  lVar9 = plVar10[4];
                  if (lVar9 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar17 = plVar13[4];
                  puVar24 = &UNK_01488c94;
                  puVar6 = (undefined1 *)((long)pppuVar4 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar16 = uVar16 + 1;
                lVar9 = plVar13[8];
                if (lVar9 == 0) goto code_r0x014891e0;
              }
              uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar16 & 1) == 0);
            *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
            uVar7 = uVar1 + 1;
            *(uint *)((long)pppuVar4 + -0xf8) = uVar7;
            puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
            if (plVar11 != (long *)0x0) {
              lVar9 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar16 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar19 = piVar19 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar14)(plVar11,puVar14[1]);
            }
            if ((uVar7 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
              uVar7 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar10[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
          *(uint *)((long)pppuVar4 + -0x124) = uVar7;
          plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar9 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar16 & 1) == 0) break;
            lVar9 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
            if (plVar13 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar13 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar13);
              goto code_r0x014892b8;
            }
            iVar8 = 0;
            do {
              uVar21 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar13,iVar8,0);
              uVar18 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
              uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar21,uVar18,0);
              if ((uVar16 & 1) != 0) {
                if (plVar10[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar4 + -0xd0),0);
                lVar9 = plVar10[4];
                if (lVar9 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar17 = plVar13[6];
                puVar24 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 != 3);
            uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar16 & 1) == 0);
          *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
          uVar7 = uVar1 + 1;
          *(uint *)((long)pppuVar4 + -0xf8) = uVar7;
          puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
          if (plVar11 != (long *)0x0) {
            lVar9 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          if ((uVar7 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
            uVar7 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
code_r0x01489170:
  iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar8 == 0) {
code_r0x014891b4:
    return *puVar20;
  }
  if (plVar10[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar20,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555ac4 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_3
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_3(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long *extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long *extraout_x1_06;
  long extraout_x1_07;
  int *piVar18;
  long unaff_x19;
  ulong *puVar19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar21;
  undefined1 ***unaff_x29;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined *unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auStack_162 [146];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  uVar20 = unaff_x20;
  if (param_2 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
    puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_4;
    func_0x00f78af4();
    lVar8 = extraout_x1;
    if (extraout_x1 == 0) {
      pppuVar4 = (undefined1 ***)&puStack_20;
      unaff_x29 = (undefined1 ***)&puStack_20;
      puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_4;
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      if (extraout_x1_00 != 0) {
        uVar17 = 0;
        param_2 = extraout_x1_00;
        goto code_r0x014881dc;
      }
      ppuVar3 = &puStack_30;
      ppuVar21 = &puStack_30;
      puStack_28 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
      puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
      puStack_30 = (undefined1 *)&puStack_20;
      func_0x00f78af4();
      lVar8 = extraout_x1_01;
      if (extraout_x1_01 == 0) {
        pppuVar4 = (undefined1 ***)&puStack_40;
        unaff_x29 = (undefined1 ***)&puStack_40;
        puStack_38 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
        unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78af4();
        if (extraout_x1_02 != 0) {
          uVar17 = 0;
          param_2 = extraout_x1_02;
          goto code_r0x014881dc;
        }
        puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
        puStack_50 = (undefined1 *)&puStack_40;
        func_0x00f78af4();
        ppuVar3 = (undefined1 **)&stack0xffffffffffffff80;
        puStack_58 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10;
        ppuVar21 = &puStack_60;
        uVar20 = 0x3eb4000;
        puStack_60 = (undefined1 *)&puStack_50;
        if ((bRam0000000003eb4fa3 & 1) == 0) {
          puStack_60 = (undefined1 *)&puStack_50;
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d22cf8);
          bRam0000000003eb4fa3 = 1;
        }
        if (extraout_x1_03 != (long *)0x0) {
          uVar20 = (**(code **)(*extraout_x1_03 + 0x178))
                             (extraout_x1_03,*(undefined8 *)(*extraout_x1_03 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
          if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
          ppuVar5 = &puStack_50;
          puVar22 = puStack_60;
          puVar23 = puStack_58;
Core_Definitions_DefinitionID__op_Inequality:
          *(undefined8 *)((long)ppuVar5 + -0x30) = unaff_x22;
          *(undefined8 *)((long)ppuVar5 + -0x28) = unaff_x21;
          *(undefined8 *)((long)ppuVar5 + -0x20) = unaff_x20;
          *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
          *(undefined1 **)((long)ppuVar5 + -0x10) = puVar22;
          *(undefined **)((long)ppuVar5 + -8) = puVar23;
          if ((bRam0000000003eb574c & 1) == 0) {
            func_0x00f78a20(0x3d21270,uVar17,0);
            bRam0000000003eb574c = 1;
          }
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17);
          return (ulong)(uVar6 ^ 1);
        }
        puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
        func_0x00f78af4();
        if (extraout_x1_04 == 0) {
          pppuVar4 = &ppuStack_90;
          unaff_x29 = &ppuStack_90;
          puStack_88 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
          unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
          ppuStack_90 = ppuVar21;
          func_0x00f78af4();
          if (extraout_x1_05 != 0) {
            uVar17 = 0;
            unaff_x19 = 0;
            param_2 = extraout_x1_05;
            goto code_r0x014881dc;
          }
          puStack_98 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
          puStack_a0 = (undefined1 *)&ppuStack_90;
          func_0x00f78af4();
          ppuVar3 = (undefined1 **)&stack0xffffffffffffff30;
          puStack_a8 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
          ppuVar21 = &puStack_b0;
          unaff_x20 = 0x3eb4000;
          puStack_b0 = (undefined1 *)&puStack_a0;
          if ((bRam0000000003eb4fa4 & 1) == 0) {
            puStack_b0 = (undefined1 *)&puStack_a0;
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d22cf8);
            bRam0000000003eb4fa4 = 1;
          }
          if (extraout_x1_06 != (long *)0x0) {
            uVar20 = (**(code **)(*extraout_x1_06 + 0x178))
                               (extraout_x1_06,*(undefined8 *)(*extraout_x1_06 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
            if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
            unaff_x20 = 0x3eb4000;
            ppuVar5 = &puStack_a0;
            unaff_x19 = 0;
            puVar22 = puStack_b0;
            puVar23 = puStack_a8;
            goto Core_Definitions_DefinitionID__op_Inequality;
          }
          puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
          func_0x00f78af4();
          if (extraout_x1_07 == 0) {
            uVar16 = func_0x00f78af4();
            return uVar16;
          }
          unaff_x19 = 0;
          lVar8 = extraout_x1_07;
        }
        else {
          unaff_x19 = 0;
          lVar8 = extraout_x1_04;
          unaff_x20 = uVar20;
        }
      }
    }
    pppuVar4 = (undefined1 ***)((long)ppuVar3 + -0x20);
    *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)ppuVar3 + -8) = puVar23;
    unaff_x29 = (undefined1 ***)((long)ppuVar3 + -0x10);
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar9 = *(long *)(lVar8 + 0x20);
    if (lVar9 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(lVar8 + 0x30) != 0) {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 0x30);
      puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar23 = *(undefined **)((long)ppuVar3 + -8);
      goto code_r0x0164feb4;
    }
    unaff_x30 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar24 = func_0x00f78af4();
    uVar17 = auVar24._8_8_;
    param_2 = auVar24._0_8_;
    unaff_x19 = lVar8;
    uVar20 = 0x3eb4000;
  }
  else {
    uVar17 = 0;
    pppuVar4 = (undefined1 ***)register0x00000008;
  }
code_r0x014881dc:
  *(undefined1 ****)((long)pppuVar4 + -0x10) = unaff_x29;
  *(undefined **)((long)pppuVar4 + -8) = unaff_x30;
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
    return (ulong)(uVar6 ^ 1);
  }
  lVar8 = func_0x00f78af4(lVar8,uVar17);
  *(undefined1 **)((long)pppuVar4 + -0x20) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(undefined **)((long)pppuVar4 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 == 0) {
    return 0;
  }
  if (*(long *)(lVar8 + 0x38) != 0) {
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar4 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar4 + -0x30) = uVar20;
    *(long *)((long)pppuVar4 + -0x28) = unaff_x19;
    *(undefined8 *)((long)pppuVar4 + -0x20) = *(undefined8 *)((long)pppuVar4 + -0x20);
    *(undefined8 *)((long)pppuVar4 + -0x18) = *(undefined8 *)((long)pppuVar4 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar4 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x60) = 0;
    lVar8 = *(long *)(lVar9 + 0x20);
    if (((lVar8 == 0) || (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar8,0), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x38) == 0)) {
      auVar24 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar4 + -0x70),*(long *)(lVar8 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar4 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar20 = *(undefined8 *)((long)pppuVar4 + -0x58);
        uVar16 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar4 + -0x60),uVar17,4,0);
      } while ((uVar16 & 1) == 0);
      *(char *)((long)pppuVar4 + -0x71) = (char)uVar20;
      lVar8 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x71));
      *(undefined1 *)((long)pppuVar4 + -0x72) = 2;
      uVar20 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x72));
      auVar24._8_8_ = uVar20;
      auVar24._0_8_ = uVar20;
      if (lVar8 != 0) {
        uVar16 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar8,uVar20,0);
        if ((uVar16 & 1) == 0) {
code_r0x015218ec:
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33738);
        return uVar16;
      }
    }
    func_0x00f78af4(auVar24._0_8_,auVar24._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar8 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x20);
  *(undefined **)((long)pppuVar4 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar8 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar8 + 0x30) + 0x61);
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar4 + -0x50) = uVar20;
  *(long *)((long)pppuVar4 + -0x48) = unaff_x19;
  *(undefined1 **)((long)pppuVar4 + -0x40) = (undefined1 *)((long)pppuVar4 + -0x30);
  *(undefined **)((long)pppuVar4 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar8 + 0x30) != 0) &&
     (uVar16 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar8 + 0x30),0), *(long *)(uVar16 + 8) != 0)) {
    return uVar16;
  }
  plVar10 = (long *)func_0x00f78af4();
  ppuVar3 = (undefined1 **)((long)pppuVar4 + -0x130);
  *(undefined8 *)((long)pppuVar4 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar4 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar4 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar4 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar4 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar4 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar4 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x68) = lVar8;
  *(undefined1 **)((long)pppuVar4 + -0x60) = (undefined1 *)((long)pppuVar4 + -0x40);
  *(undefined **)((long)pppuVar4 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar22 = (undefined1 *)((long)pppuVar4 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar4 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar4 + -200) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
  puVar19 = (ulong *)(plVar10 + 5);
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) goto code_r0x014891b4;
  if (plVar10[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar20 = func_0x00f78b24();
    func_0x00f78ac0(uVar20,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar4 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar4 + -0x120) = puVar19;
    plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
    if (plVar11 != (long *)0x0) {
      do {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar16 & 1) == 0) break;
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar13,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar7 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar7) {
            uVar20 = **(undefined8 **)((long)pppuVar4 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar13 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar20 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar13,iVar7,0);
          uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
          uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
          if ((uVar16 & 1) != 0) break;
          iVar7 = iVar7 + 1;
        }
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar4 + -0xc0),0);
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],plVar13[6],(undefined1 *)((long)pppuVar4 + -200),0);
        uVar20 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar4 + -0xc0),
                                 *(undefined8 *)((long)pppuVar4 + -200),0);
        **(undefined8 **)((long)pppuVar4 + -0x120) = uVar20;
code_r0x0148868c:
        uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar16 & 1) == 0);
      *(undefined4 *)((long)pppuVar4 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar4 + -0xf8) = 1;
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
      if (*(int *)((long)pppuVar4 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
      }
      uVar6 = (uint)(*(int *)((long)pppuVar4 + -0x118) != 199);
      puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
      iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar7 == 0) {
code_r0x01488a60:
        iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar7 == 0) {
code_r0x01488d78:
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar7 == 0) {
code_r0x01488eb4:
            puVar19 = *(ulong **)((long)pppuVar4 + -0x120);
            iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar7 == 0) goto code_r0x01489170;
            if (plVar10[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57590
                             );
              if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
                plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar11 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    if ((uVar16 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar4 + (long)(int)uVar6 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar4 + -0xf8) = *(int *)((long)pppuVar4 + -0xf8) + 1;
                      puVar19 = *(ulong **)((long)pppuVar4 + -0x120);
                      if (plVar11 == (long *)0x0) goto code_r0x01489170;
                      lVar8 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                      if (uVar16 == 0) goto code_r0x01489144;
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                    if (plVar13 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar13);
                      goto code_r0x014892b8;
                    }
                    lVar8 = plVar13[4];
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar8,uVar20,0);
                  } while ((uVar16 & 1) == 0);
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar4 + -0xf0),0);
                    lVar9 = plVar10[4];
                    if (lVar9 != 0) {
                      lVar8 = plVar13[7];
                      puVar23 = &UNK_014890b0;
                      ppuVar3 = (undefined1 **)((long)pppuVar4 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
                      *(undefined **)((long)ppuVar3 + -8) = puVar23;
                      *(undefined8 *)((long)ppuVar3 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar9,lVar8,(undefined1 *)((long)ppuVar3 + -0x18));
                      return *(ulong *)((long)ppuVar3 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar8 = plVar10[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar8 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar8,uVar20,(undefined1 *)((long)pppuVar4 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar4 + -0xe0) != 0) &&
                 (lVar8 = *(long *)(*(long *)((long)pppuVar4 + -0xe0) + 0x28), lVar8 != 0)) {
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar16 = 0;
                  uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar15 <= uVar16) goto code_r0x01489258;
                    uVar17 = *(undefined8 *)(lVar8 + 0x20 + uVar16 * 8);
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    iVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                    if (iVar7 != 0) {
                      if (plVar10[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar4 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar4 + -0x120) =
                           *(undefined8 *)((long)pppuVar4 + -0xe8);
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar10[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
            *(uint *)((long)pppuVar4 + -0x124) = uVar6;
            plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((uVar16 & 1) == 0) break;
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar13 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar13);
                goto code_r0x014892b8;
              }
              lVar8 = plVar13[8];
              if (lVar8 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar16 = 0;
              while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                  uVar20 = func_0x00f78b24();
                  func_0x00f78ac0(uVar20,0);
                  goto code_r0x014892b8;
                }
                uVar17 = *(undefined8 *)(lVar8 + uVar16 * 8 + 0x20);
                uVar20 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                if ((uVar15 & 1) != 0) {
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar4 + -0xd8),0);
                  lVar9 = plVar10[4];
                  if (lVar9 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar8 = plVar13[4];
                  puVar23 = &UNK_01488c94;
                  ppuVar3 = (undefined1 **)((long)pppuVar4 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar16 = uVar16 + 1;
                lVar8 = plVar13[8];
                if (lVar8 == 0) goto code_r0x014891e0;
              }
              uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar16 & 1) == 0);
            *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
            uVar6 = uVar1 + 1;
            *(uint *)((long)pppuVar4 + -0xf8) = uVar6;
            puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
            if (plVar11 != (long *)0x0) {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar14)(plVar11,puVar14[1]);
            }
            if ((uVar6 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
              uVar6 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar10[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
          *(uint *)((long)pppuVar4 + -0x124) = uVar6;
          plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar16 & 1) == 0) break;
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
            if (plVar13 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar13 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar13);
              goto code_r0x014892b8;
            }
            iVar7 = 0;
            do {
              uVar20 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar13,iVar7,0);
              uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
              if ((uVar16 & 1) != 0) {
                if (plVar10[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar4 + -0xd0),0);
                lVar9 = plVar10[4];
                if (lVar9 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar8 = plVar13[6];
                puVar23 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 3);
            uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar16 & 1) == 0);
          *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
          uVar6 = uVar1 + 1;
          *(uint *)((long)pppuVar4 + -0xf8) = uVar6;
          puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          if ((uVar6 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
            uVar6 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar18 = piVar18 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
code_r0x01489170:
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) {
code_r0x014891b4:
    return *puVar19;
  }
  if (plVar10[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar19,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555ae0 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_4
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_4(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar9;
  int iVar8;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong extraout_x1;
  long extraout_x1_00;
  ulong extraout_x1_01;
  long *extraout_x1_02;
  long extraout_x1_03;
  ulong extraout_x1_04;
  long *extraout_x1_05;
  long extraout_x1_06;
  int *piVar19;
  long unaff_x19;
  ulong *puVar20;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar22;
  undefined1 **unaff_x29;
  undefined1 *puVar23;
  undefined *puVar24;
  undefined *unaff_x30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_152 [146];
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  ppuVar3 = (undefined1 **)register0x00000008;
  if (param_2 == 0) {
    pppuVar4 = (undefined1 ***)&stack0xfffffffffffffff0;
    pppuVar22 = (undefined1 ***)&stack0xfffffffffffffff0;
    puVar24 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
    func_0x00f78af4();
    uVar21 = unaff_x20;
    if (extraout_x1 == 0) {
      unaff_x29 = &puStack_20;
      puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6;
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      ppuVar3 = &puStack_20;
      param_2 = extraout_x1_00;
      if (extraout_x1_00 == 0) {
        pppuVar4 = (undefined1 ***)&puStack_30;
        pppuVar22 = (undefined1 ***)&puStack_30;
        puStack_28 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
        puVar24 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78af4();
        if (extraout_x1_01 != 0) {
          auVar25._8_8_ = 0;
          auVar25._0_8_ = extraout_x1_01;
          goto code_r0x014881dc;
        }
        puStack_38 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78af4();
        puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10;
        unaff_x29 = &puStack_50;
        uVar21 = 0x3eb4000;
        puStack_50 = (undefined1 *)&puStack_40;
        if ((bRam0000000003eb4fa3 & 1) == 0) {
          puStack_50 = (undefined1 *)&puStack_40;
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d22cf8);
          bRam0000000003eb4fa3 = 1;
        }
        if (extraout_x1_02 != (long *)0x0) {
          uVar21 = (**(code **)(*extraout_x1_02 + 0x178))
                             (extraout_x1_02,*(undefined8 *)(*extraout_x1_02 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
          if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
          ppuVar5 = &puStack_40;
          puVar23 = puStack_50;
          puVar24 = puStack_48;
Core_Definitions_DefinitionID__op_Inequality:
          *(undefined8 *)((long)ppuVar5 + -0x30) = unaff_x22;
          *(undefined8 *)((long)ppuVar5 + -0x28) = unaff_x21;
          *(undefined8 *)((long)ppuVar5 + -0x20) = unaff_x20;
          *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
          *(undefined1 **)((long)ppuVar5 + -0x10) = puVar23;
          *(undefined **)((long)ppuVar5 + -8) = puVar24;
          if ((bRam0000000003eb574c & 1) == 0) {
            func_0x00f78a20(0x3d21270,uVar18,0);
            bRam0000000003eb574c = 1;
          }
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar21,uVar18);
          return (ulong)(uVar7 ^ 1);
        }
        unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
        func_0x00f78af4();
        if (extraout_x1_03 == 0) {
          pppuVar4 = &ppuStack_80;
          pppuVar22 = &ppuStack_80;
          puStack_78 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
          puVar24 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
          ppuStack_80 = unaff_x29;
          func_0x00f78af4();
          if (extraout_x1_04 != 0) {
            auVar25._8_8_ = 0;
            auVar25._0_8_ = extraout_x1_04;
            unaff_x19 = 0;
            goto code_r0x014881dc;
          }
          puStack_88 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
          puStack_90 = (undefined1 *)&ppuStack_80;
          func_0x00f78af4();
          puStack_98 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
          unaff_x29 = &puStack_a0;
          unaff_x20 = 0x3eb4000;
          puStack_a0 = (undefined1 *)&puStack_90;
          if ((bRam0000000003eb4fa4 & 1) == 0) {
            puStack_a0 = (undefined1 *)&puStack_90;
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d22cf8);
            bRam0000000003eb4fa4 = 1;
          }
          if (extraout_x1_05 != (long *)0x0) {
            uVar21 = (**(code **)(*extraout_x1_05 + 0x178))
                               (extraout_x1_05,*(undefined8 *)(*extraout_x1_05 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
            if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar18 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
            unaff_x20 = 0x3eb4000;
            ppuVar5 = &puStack_90;
            unaff_x19 = 0;
            puVar23 = puStack_a0;
            puVar24 = puStack_98;
            goto Core_Definitions_DefinitionID__op_Inequality;
          }
          unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
          func_0x00f78af4();
          if (extraout_x1_06 == 0) {
            uVar16 = func_0x00f78af4();
            return uVar16;
          }
          unaff_x19 = 0;
          ppuVar3 = (undefined1 **)&stack0xffffffffffffff40;
          param_2 = extraout_x1_06;
        }
        else {
          unaff_x19 = 0;
          ppuVar3 = (undefined1 **)&stack0xffffffffffffff90;
          param_2 = extraout_x1_03;
          unaff_x20 = uVar21;
        }
      }
      goto Atlas_UI_LoadoutMetagameData__get_DisplayName;
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = extraout_x1;
  }
  else {
Atlas_UI_LoadoutMetagameData__get_DisplayName:
    pppuVar4 = (undefined1 ***)((long)ppuVar3 + -0x20);
    *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
    pppuVar22 = (undefined1 ***)((long)ppuVar3 + -0x10);
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if (lVar9 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar17 = *(long *)(*(long *)(param_2 + 0x30) + 0x30);
      puVar23 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar24 = *(undefined **)((long)ppuVar3 + -8);
      puVar6 = (undefined1 *)ppuVar3;
      goto code_r0x0164feb4;
    }
    puVar24 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar25 = func_0x00f78af4();
    unaff_x19 = param_2;
    uVar21 = 0x3eb4000;
  }
code_r0x014881dc:
  *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar22;
  *(undefined **)((long)pppuVar4 + -8) = puVar24;
  lVar9 = *(long *)(auVar25._0_8_ + 0x10);
  if (lVar9 == 0) {
    return 0;
  }
  lVar17 = *(long *)(auVar25._0_8_ + 0x38);
  if (lVar17 != 0) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,*(undefined8 *)(lVar17 + 0x18),0);
    return (ulong)(uVar7 ^ 1);
  }
  lVar9 = func_0x00f78af4(lVar9,auVar25._8_8_);
  *(undefined1 **)((long)pppuVar4 + -0x20) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(undefined **)((long)pppuVar4 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar17 = *(long *)(lVar9 + 0x10);
  if (lVar17 == 0) {
    return 0;
  }
  if (*(long *)(lVar9 + 0x38) != 0) {
    uVar18 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar4 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar4 + -0x30) = uVar21;
    *(long *)((long)pppuVar4 + -0x28) = unaff_x19;
    *(undefined8 *)((long)pppuVar4 + -0x20) = *(undefined8 *)((long)pppuVar4 + -0x20);
    *(undefined8 *)((long)pppuVar4 + -0x18) = *(undefined8 *)((long)pppuVar4 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar4 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x60) = 0;
    lVar9 = *(long *)(lVar17 + 0x20);
    if (((lVar9 == 0) || (lVar9 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar9,0), lVar9 == 0)) ||
       (*(long *)(lVar9 + 0x38) == 0)) {
      auVar26 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar4 + -0x70),*(long *)(lVar9 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar4 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar21 = *(undefined8 *)((long)pppuVar4 + -0x58);
        uVar16 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar4 + -0x60),uVar18,4,0);
      } while ((uVar16 & 1) == 0);
      *(char *)((long)pppuVar4 + -0x71) = (char)uVar21;
      lVar9 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x71));
      *(undefined1 *)((long)pppuVar4 + -0x72) = 2;
      uVar21 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x72));
      auVar26._8_8_ = uVar21;
      auVar26._0_8_ = uVar21;
      if (lVar9 != 0) {
        uVar16 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar9,uVar21,0);
        if ((uVar16 & 1) == 0) {
code_r0x015218ec:
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33738);
        return uVar16;
      }
    }
    func_0x00f78af4(auVar26._0_8_,auVar26._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar9 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x20);
  *(undefined **)((long)pppuVar4 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar9 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar9 + 0x30) + 0x61);
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar4 + -0x50) = uVar21;
  *(long *)((long)pppuVar4 + -0x48) = unaff_x19;
  *(undefined1 **)((long)pppuVar4 + -0x40) = (undefined1 *)((long)pppuVar4 + -0x30);
  *(undefined **)((long)pppuVar4 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar9 + 0x30) != 0) &&
     (uVar16 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar9 + 0x30),0), *(long *)(uVar16 + 8) != 0)) {
    return uVar16;
  }
  plVar10 = (long *)func_0x00f78af4();
  puVar6 = (undefined1 *)((long)pppuVar4 + -0x130);
  *(undefined8 *)((long)pppuVar4 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar4 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar4 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar4 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar4 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar4 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar4 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x68) = lVar9;
  *(undefined1 **)((long)pppuVar4 + -0x60) = (undefined1 *)((long)pppuVar4 + -0x40);
  *(undefined **)((long)pppuVar4 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar23 = (undefined1 *)((long)pppuVar4 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar4 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar4 + -200) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
  puVar20 = (ulong *)(plVar10 + 5);
  iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar8 == 0) goto code_r0x014891b4;
  if (plVar10[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar4 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar4 + -0x120) = puVar20;
    plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
    if (plVar11 != (long *)0x0) {
      do {
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar19 = piVar19 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar16 & 1) == 0) break;
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar19 = piVar19 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar13,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar8 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar8) {
            uVar21 = **(undefined8 **)((long)pppuVar4 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar13 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar21 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar13,iVar8,0);
          uVar18 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
          uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar21,uVar18,0);
          if ((uVar16 & 1) != 0) break;
          iVar8 = iVar8 + 1;
        }
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar4 + -0xc0),0);
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],plVar13[6],(undefined1 *)((long)pppuVar4 + -200),0);
        uVar21 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar4 + -0xc0),
                                 *(undefined8 *)((long)pppuVar4 + -200),0);
        **(undefined8 **)((long)pppuVar4 + -0x120) = uVar21;
code_r0x0148868c:
        uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar21,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar16 & 1) == 0);
      *(undefined4 *)((long)pppuVar4 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar4 + -0xf8) = 1;
      if (plVar11 != (long *)0x0) {
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar19 = piVar19 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
      if (*(int *)((long)pppuVar4 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
      }
      uVar7 = (uint)(*(int *)((long)pppuVar4 + -0x118) != 199);
      puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
      iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar8 == 0) {
code_r0x01488a60:
        iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar8 == 0) {
code_r0x01488d78:
          iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar8 == 0) {
code_r0x01488eb4:
            puVar20 = *(ulong **)((long)pppuVar4 + -0x120);
            iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar8 == 0) goto code_r0x01489170;
            if (plVar10[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57590
                             );
              if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
                plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar11 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar9 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar16 != 0) {
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar19 = piVar19 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    if ((uVar16 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar4 + (long)(int)uVar7 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar4 + -0xf8) = *(int *)((long)pppuVar4 + -0xf8) + 1;
                      puVar20 = *(ulong **)((long)pppuVar4 + -0x120);
                      if (plVar11 == (long *)0x0) goto code_r0x01489170;
                      lVar9 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                      if (uVar16 == 0) goto code_r0x01489144;
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar9 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar16 != 0) {
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar19 = piVar19 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                    if (plVar13 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar13);
                      goto code_r0x014892b8;
                    }
                    lVar9 = plVar13[4];
                    uVar21 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar9,uVar21,0);
                  } while ((uVar16 & 1) == 0);
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar4 + -0xf0),0);
                    lVar9 = plVar10[4];
                    if (lVar9 != 0) {
                      lVar17 = plVar13[7];
                      puVar24 = &UNK_014890b0;
                      puVar6 = (undefined1 *)((long)pppuVar4 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)(puVar6 + -0x10) = puVar23;
                      *(undefined **)(puVar6 + -8) = puVar24;
                      *(undefined8 *)(puVar6 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar9,lVar17,puVar6 + -0x18);
                      return *(ulong *)(puVar6 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar9 = plVar10[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar9 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar9,uVar21,(undefined1 *)((long)pppuVar4 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar4 + -0xe0) != 0) &&
                 (lVar9 = *(long *)(*(long *)((long)pppuVar4 + -0xe0) + 0x28), lVar9 != 0)) {
                if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
                  uVar16 = 0;
                  uVar15 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
                  do {
                    if (uVar15 <= uVar16) goto code_r0x01489258;
                    uVar18 = *(undefined8 *)(lVar9 + 0x20 + uVar16 * 8);
                    uVar21 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
                    iVar8 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar18,uVar21,0);
                    if (iVar8 != 0) {
                      if (plVar10[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar4 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar4 + -0x120) =
                           *(undefined8 *)((long)pppuVar4 + -0xe8);
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar9 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar10[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
            *(uint *)((long)pppuVar4 + -0x124) = uVar7;
            plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar9 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar16 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar19 = piVar19 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((uVar16 & 1) == 0) break;
              lVar9 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar16 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar19 = piVar19 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar13 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar13);
                goto code_r0x014892b8;
              }
              lVar9 = plVar13[8];
              if (lVar9 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar16 = 0;
              while ((long)uVar16 < (long)(int)*(uint *)(lVar9 + 0x18)) {
                if (*(uint *)(lVar9 + 0x18) <= uVar16) {
                  uVar21 = func_0x00f78b24();
                  func_0x00f78ac0(uVar21,0);
                  goto code_r0x014892b8;
                }
                uVar18 = *(undefined8 *)(lVar9 + uVar16 * 8 + 0x20);
                uVar21 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar21,0);
                uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar18,uVar21,0);
                if ((uVar15 & 1) != 0) {
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar4 + -0xd8),0);
                  lVar9 = plVar10[4];
                  if (lVar9 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar17 = plVar13[4];
                  puVar24 = &UNK_01488c94;
                  puVar6 = (undefined1 *)((long)pppuVar4 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar16 = uVar16 + 1;
                lVar9 = plVar13[8];
                if (lVar9 == 0) goto code_r0x014891e0;
              }
              uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar16 & 1) == 0);
            *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
            uVar7 = uVar1 + 1;
            *(uint *)((long)pppuVar4 + -0xf8) = uVar7;
            puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
            if (plVar11 != (long *)0x0) {
              lVar9 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar16 != 0) {
                piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar19 = piVar19 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar14)(plVar11,puVar14[1]);
            }
            if ((uVar7 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
              uVar7 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar10[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
          *(uint *)((long)pppuVar4 + -0x124) = uVar7;
          plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar9 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar16 & 1) == 0) break;
            lVar9 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
            if (plVar13 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar13 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar13);
              goto code_r0x014892b8;
            }
            iVar8 = 0;
            do {
              uVar21 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar13,iVar8,0);
              uVar18 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
              uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar21,uVar18,0);
              if ((uVar16 & 1) != 0) {
                if (plVar10[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar4 + -0xd0),0);
                lVar9 = plVar10[4];
                if (lVar9 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar17 = plVar13[6];
                puVar24 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 != 3);
            uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar16 & 1) == 0);
          *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
          uVar7 = uVar1 + 1;
          *(uint *)((long)pppuVar4 + -0xf8) = uVar7;
          puVar12 = *(undefined8 **)((long)pppuVar4 + -0x120);
          if (plVar11 != (long *)0x0) {
            lVar9 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          if ((uVar7 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
            uVar7 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
code_r0x01489170:
  iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar8 == 0) {
code_r0x014891b4:
    return *puVar20;
  }
  if (plVar10[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar20,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555afc | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_6
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_6(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long extraout_x1;
  long extraout_x1_00;
  long *extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long *extraout_x1_04;
  long extraout_x1_05;
  int *piVar18;
  long unaff_x19;
  ulong *puVar19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar21;
  undefined1 ***unaff_x29;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined *unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auStack_142 [146];
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  uVar20 = unaff_x20;
  if (param_2 == 0) {
    puVar5 = &stack0xfffffffffffffff0;
    ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
    puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
    func_0x00f78af4();
    lVar8 = extraout_x1;
    if (extraout_x1 == 0) {
      pppuVar3 = (undefined1 ***)&puStack_20;
      unaff_x29 = (undefined1 ***)&puStack_20;
      puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7;
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      if (extraout_x1_00 != 0) {
        uVar17 = 0;
        param_2 = extraout_x1_00;
        goto code_r0x014881dc;
      }
      puStack_28 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
      puStack_30 = (undefined1 *)&puStack_20;
      func_0x00f78af4();
      puVar5 = &stack0xffffffffffffffa0;
      puStack_38 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10;
      ppuVar21 = &puStack_40;
      uVar20 = 0x3eb4000;
      puStack_40 = (undefined1 *)&puStack_30;
      if ((bRam0000000003eb4fa3 & 1) == 0) {
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d22cf8);
        bRam0000000003eb4fa3 = 1;
      }
      if (extraout_x1_01 != (long *)0x0) {
        uVar20 = (**(code **)(*extraout_x1_01 + 0x178))
                           (extraout_x1_01,*(undefined8 *)(*extraout_x1_01 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
        if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
        ppuVar4 = &puStack_30;
        puVar5 = puStack_40;
        puVar23 = puStack_38;
Core_Definitions_DefinitionID__op_Inequality:
        *(undefined8 *)((long)ppuVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)ppuVar4 + -0x28) = unaff_x21;
        *(undefined8 *)((long)ppuVar4 + -0x20) = unaff_x20;
        *(long *)((long)ppuVar4 + -0x18) = unaff_x19;
        *(undefined1 **)((long)ppuVar4 + -0x10) = puVar5;
        *(undefined **)((long)ppuVar4 + -8) = puVar23;
        if ((bRam0000000003eb574c & 1) == 0) {
          func_0x00f78a20(0x3d21270,uVar17,0);
          bRam0000000003eb574c = 1;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17);
        return (ulong)(uVar6 ^ 1);
      }
      puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
      func_0x00f78af4();
      if (extraout_x1_02 == 0) {
        pppuVar3 = &ppuStack_70;
        unaff_x29 = &ppuStack_70;
        puStack_68 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
        unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
        ppuStack_70 = ppuVar21;
        func_0x00f78af4();
        if (extraout_x1_03 != 0) {
          uVar17 = 0;
          unaff_x19 = 0;
          param_2 = extraout_x1_03;
          goto code_r0x014881dc;
        }
        puStack_78 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
        puStack_80 = (undefined1 *)&ppuStack_70;
        func_0x00f78af4();
        puVar5 = &stack0xffffffffffffff50;
        puStack_88 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
        ppuVar21 = &puStack_90;
        unaff_x20 = 0x3eb4000;
        puStack_90 = (undefined1 *)&puStack_80;
        if ((bRam0000000003eb4fa4 & 1) == 0) {
          puStack_90 = (undefined1 *)&puStack_80;
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d22cf8);
          bRam0000000003eb4fa4 = 1;
        }
        if (extraout_x1_04 != (long *)0x0) {
          uVar20 = (**(code **)(*extraout_x1_04 + 0x178))
                             (extraout_x1_04,*(undefined8 *)(*extraout_x1_04 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
          if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
          unaff_x20 = 0x3eb4000;
          ppuVar4 = &puStack_80;
          unaff_x19 = 0;
          puVar5 = puStack_90;
          puVar23 = puStack_88;
          goto Core_Definitions_DefinitionID__op_Inequality;
        }
        puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
        func_0x00f78af4();
        if (extraout_x1_05 == 0) {
          uVar16 = func_0x00f78af4();
          return uVar16;
        }
        unaff_x19 = 0;
        lVar8 = extraout_x1_05;
      }
      else {
        unaff_x19 = 0;
        lVar8 = extraout_x1_02;
        unaff_x20 = uVar20;
      }
    }
    pppuVar3 = (undefined1 ***)(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(long *)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar5 + -0x10) = ppuVar21;
    *(undefined **)(puVar5 + -8) = puVar23;
    unaff_x29 = (undefined1 ***)(puVar5 + -0x10);
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar9 = *(long *)(lVar8 + 0x20);
    if (lVar9 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(lVar8 + 0x30) != 0) {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 0x30);
      puVar22 = *(undefined1 **)(puVar5 + -0x10);
      puVar23 = *(undefined **)(puVar5 + -8);
      goto code_r0x0164feb4;
    }
    unaff_x30 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar24 = func_0x00f78af4();
    uVar17 = auVar24._8_8_;
    param_2 = auVar24._0_8_;
    unaff_x19 = lVar8;
    uVar20 = 0x3eb4000;
  }
  else {
    uVar17 = 0;
    pppuVar3 = (undefined1 ***)register0x00000008;
  }
code_r0x014881dc:
  *(undefined1 ****)((long)pppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)pppuVar3 + -8) = unaff_x30;
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
    return (ulong)(uVar6 ^ 1);
  }
  lVar8 = func_0x00f78af4(lVar8,uVar17);
  *(undefined1 **)((long)pppuVar3 + -0x20) = (undefined1 *)((long)pppuVar3 + -0x10);
  *(undefined **)((long)pppuVar3 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 == 0) {
    return 0;
  }
  if (*(long *)(lVar8 + 0x38) != 0) {
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar3 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar3 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar3 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar3 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar3 + -0x30) = uVar20;
    *(long *)((long)pppuVar3 + -0x28) = unaff_x19;
    *(undefined8 *)((long)pppuVar3 + -0x20) = *(undefined8 *)((long)pppuVar3 + -0x20);
    *(undefined8 *)((long)pppuVar3 + -0x18) = *(undefined8 *)((long)pppuVar3 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar3 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x60) = 0;
    lVar8 = *(long *)(lVar9 + 0x20);
    if (((lVar8 == 0) || (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar8,0), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x38) == 0)) {
      auVar24 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar3 + -0x70),*(long *)(lVar8 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar3 + -0x70),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar3 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar20 = *(undefined8 *)((long)pppuVar3 + -0x58);
        uVar16 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar3 + -0x60),uVar17,4,0);
      } while ((uVar16 & 1) == 0);
      *(char *)((long)pppuVar3 + -0x71) = (char)uVar20;
      lVar8 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar3 + -0x71));
      *(undefined1 *)((long)pppuVar3 + -0x72) = 2;
      uVar20 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar3 + -0x72));
      auVar24._8_8_ = uVar20;
      auVar24._0_8_ = uVar20;
      if (lVar8 != 0) {
        uVar16 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar8,uVar20,0);
        if ((uVar16 & 1) == 0) {
code_r0x015218ec:
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar3 + -0x70),uRam0000000003d33738);
        return uVar16;
      }
    }
    func_0x00f78af4(auVar24._0_8_,auVar24._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar8 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x20);
  *(undefined **)((long)pppuVar3 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar8 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar8 + 0x30) + 0x61);
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar3 + -0x50) = uVar20;
  *(long *)((long)pppuVar3 + -0x48) = unaff_x19;
  *(undefined1 **)((long)pppuVar3 + -0x40) = (undefined1 *)((long)pppuVar3 + -0x30);
  *(undefined **)((long)pppuVar3 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar8 + 0x30) != 0) &&
     (uVar16 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar8 + 0x30),0), *(long *)(uVar16 + 8) != 0)) {
    return uVar16;
  }
  plVar10 = (long *)func_0x00f78af4();
  puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
  *(undefined8 *)((long)pppuVar3 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar3 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar3 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar3 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar3 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar3 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar3 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar3 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar3 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar3 + -0x68) = lVar8;
  *(undefined1 **)((long)pppuVar3 + -0x60) = (undefined1 *)((long)pppuVar3 + -0x40);
  *(undefined **)((long)pppuVar3 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar22 = (undefined1 *)((long)pppuVar3 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar3 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar3 + -200) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar3 + -0xf8) = 0;
  puVar19 = (ulong *)(plVar10 + 5);
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) goto code_r0x014891b4;
  if (plVar10[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar20 = func_0x00f78b24();
    func_0x00f78ac0(uVar20,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar3 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar3 + -0x120) = puVar19;
    plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40);
    if (plVar11 != (long *)0x0) {
      do {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar16 & 1) == 0) break;
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar13,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar7 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar7) {
            uVar20 = **(undefined8 **)((long)pppuVar3 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar13 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar20 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar13,iVar7,0);
          uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
          uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
          if ((uVar16 & 1) != 0) break;
          iVar7 = iVar7 + 1;
        }
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar3 + -0xc0),0);
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],plVar13[6],(undefined1 *)((long)pppuVar3 + -200),0);
        uVar20 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar3 + -0xc0),
                                 *(undefined8 *)((long)pppuVar3 + -200),0);
        **(undefined8 **)((long)pppuVar3 + -0x120) = uVar20;
code_r0x0148868c:
        uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar16 & 1) == 0);
      *(undefined4 *)((long)pppuVar3 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar3 + -0xf8) = 1;
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
      if (*(int *)((long)pppuVar3 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar3 + -0xf8) = 0;
      }
      uVar6 = (uint)(*(int *)((long)pppuVar3 + -0x118) != 199);
      puVar12 = *(undefined8 **)((long)pppuVar3 + -0x120);
      iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar7 == 0) {
code_r0x01488a60:
        iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar7 == 0) {
code_r0x01488d78:
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar7 == 0) {
code_r0x01488eb4:
            puVar19 = *(ulong **)((long)pppuVar3 + -0x120);
            iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar7 == 0) goto code_r0x01489170;
            if (plVar10[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57590
                             );
              if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
                plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar11 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    if ((uVar16 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar3 + (long)(int)uVar6 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar3 + -0xf8) = *(int *)((long)pppuVar3 + -0xf8) + 1;
                      puVar19 = *(ulong **)((long)pppuVar3 + -0x120);
                      if (plVar11 == (long *)0x0) goto code_r0x01489170;
                      lVar8 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                      if (uVar16 == 0) goto code_r0x01489144;
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                    if (plVar13 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar13);
                      goto code_r0x014892b8;
                    }
                    lVar8 = plVar13[4];
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar8,uVar20,0);
                  } while ((uVar16 & 1) == 0);
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar3 + -0xf0),0);
                    lVar9 = plVar10[4];
                    if (lVar9 != 0) {
                      lVar8 = plVar13[7];
                      puVar23 = &UNK_014890b0;
                      puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)(puVar5 + -0x10) = puVar22;
                      *(undefined **)(puVar5 + -8) = puVar23;
                      *(undefined8 *)(puVar5 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar9,lVar8,puVar5 + -0x18);
                      return *(ulong *)(puVar5 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar8 = plVar10[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar8 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar8,uVar20,(undefined1 *)((long)pppuVar3 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar3 + -0xe0) != 0) &&
                 (lVar8 = *(long *)(*(long *)((long)pppuVar3 + -0xe0) + 0x28), lVar8 != 0)) {
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar16 = 0;
                  uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar15 <= uVar16) goto code_r0x01489258;
                    uVar17 = *(undefined8 *)(lVar8 + 0x20 + uVar16 * 8);
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    iVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                    if (iVar7 != 0) {
                      if (plVar10[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar3 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar3 + -0x120) =
                           *(undefined8 *)((long)pppuVar3 + -0xe8);
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar10[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
            *(uint *)((long)pppuVar3 + -0x124) = uVar6;
            plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((uVar16 & 1) == 0) break;
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar13 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar13);
                goto code_r0x014892b8;
              }
              lVar8 = plVar13[8];
              if (lVar8 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar16 = 0;
              while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                  uVar20 = func_0x00f78b24();
                  func_0x00f78ac0(uVar20,0);
                  goto code_r0x014892b8;
                }
                uVar17 = *(undefined8 *)(lVar8 + uVar16 * 8 + 0x20);
                uVar20 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                if ((uVar15 & 1) != 0) {
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar3 + -0xd8),0);
                  lVar9 = plVar10[4];
                  if (lVar9 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar8 = plVar13[4];
                  puVar23 = &UNK_01488c94;
                  puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar16 = uVar16 + 1;
                lVar8 = plVar13[8];
                if (lVar8 == 0) goto code_r0x014891e0;
              }
              uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar3 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar16 & 1) == 0);
            *(undefined4 *)((long)pppuVar3 + (long)*(int *)((long)pppuVar3 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar3 + -0xf8);
            uVar6 = uVar1 + 1;
            *(uint *)((long)pppuVar3 + -0xf8) = uVar6;
            puVar12 = *(undefined8 **)((long)pppuVar3 + -0x120);
            if (plVar11 != (long *)0x0) {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar14)(plVar11,puVar14[1]);
            }
            if ((uVar6 != 0) && (*(int *)((long)pppuVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar3 + -0xf8) = uVar1;
              uVar6 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar10[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
          *(uint *)((long)pppuVar3 + -0x124) = uVar6;
          plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar16 & 1) == 0) break;
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
            if (plVar13 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar13 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar13);
              goto code_r0x014892b8;
            }
            iVar7 = 0;
            do {
              uVar20 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar13,iVar7,0);
              uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
              if ((uVar16 & 1) != 0) {
                if (plVar10[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar3 + -0xd0),0);
                lVar9 = plVar10[4];
                if (lVar9 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar8 = plVar13[6];
                puVar23 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 3);
            uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar3 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar16 & 1) == 0);
          *(undefined4 *)((long)pppuVar3 + (long)*(int *)((long)pppuVar3 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar3 + -0xf8);
          uVar6 = uVar1 + 1;
          *(uint *)((long)pppuVar3 + -0xf8) = uVar6;
          puVar12 = *(undefined8 **)((long)pppuVar3 + -0x120);
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          if ((uVar6 != 0) && (*(int *)((long)pppuVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar3 + -0xf8) = uVar1;
            uVar6 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar18 = piVar18 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
code_r0x01489170:
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) {
code_r0x014891b4:
    return *puVar19;
  }
  if (plVar10[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar19,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555b18 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_7
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_7(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar8;
  int iVar7;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  ulong extraout_x1_02;
  long *extraout_x1_03;
  long extraout_x1_04;
  int *piVar18;
  long unaff_x19;
  ulong *puVar19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar21;
  undefined1 **unaff_x29;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined *unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_132 [146];
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_2 == 0) {
    pppuVar3 = (undefined1 ***)&stack0xfffffffffffffff0;
    pppuVar21 = (undefined1 ***)&stack0xfffffffffffffff0;
    puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
    func_0x00f78af4();
    if (extraout_x1 == 0) {
      puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      puStack_28 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10;
      unaff_x29 = &puStack_30;
      uVar20 = 0x3eb4000;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb4fa3 & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d22cf8);
        bRam0000000003eb4fa3 = 1;
      }
      if (extraout_x1_00 != (long *)0x0) {
        uVar20 = (**(code **)(*extraout_x1_00 + 0x178))
                           (extraout_x1_00,*(undefined8 *)(*extraout_x1_00 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
        if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
        ppuVar4 = &puStack_20;
        puVar22 = puStack_30;
        puVar23 = puStack_28;
Core_Definitions_DefinitionID__op_Inequality:
        *(undefined8 *)((long)ppuVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)ppuVar4 + -0x28) = unaff_x21;
        *(undefined8 *)((long)ppuVar4 + -0x20) = unaff_x20;
        *(long *)((long)ppuVar4 + -0x18) = unaff_x19;
        *(undefined1 **)((long)ppuVar4 + -0x10) = puVar22;
        *(undefined **)((long)ppuVar4 + -8) = puVar23;
        if ((bRam0000000003eb574c & 1) == 0) {
          func_0x00f78a20(0x3d21270,uVar17,0);
          bRam0000000003eb574c = 1;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17);
        return (ulong)(uVar6 ^ 1);
      }
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
      func_0x00f78af4();
      if (extraout_x1_01 == 0) {
        pppuVar3 = &ppuStack_60;
        pppuVar21 = &ppuStack_60;
        puStack_58 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
        puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
        ppuStack_60 = unaff_x29;
        func_0x00f78af4();
        if (extraout_x1_02 != 0) {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = extraout_x1_02;
          unaff_x19 = 0;
          goto code_r0x014881dc;
        }
        puStack_68 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
        puStack_70 = (undefined1 *)&ppuStack_60;
        func_0x00f78af4();
        puStack_78 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
        unaff_x29 = &puStack_80;
        unaff_x20 = 0x3eb4000;
        puStack_80 = (undefined1 *)&puStack_70;
        if ((bRam0000000003eb4fa4 & 1) == 0) {
          puStack_80 = (undefined1 *)&puStack_70;
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d22cf8);
          bRam0000000003eb4fa4 = 1;
        }
        if (extraout_x1_03 != (long *)0x0) {
          uVar20 = (**(code **)(*extraout_x1_03 + 0x178))
                             (extraout_x1_03,*(undefined8 *)(*extraout_x1_03 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
          if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
          unaff_x20 = 0x3eb4000;
          ppuVar4 = &puStack_70;
          unaff_x19 = 0;
          puVar22 = puStack_80;
          puVar23 = puStack_78;
          goto Core_Definitions_DefinitionID__op_Inequality;
        }
        unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
        func_0x00f78af4();
        if (extraout_x1_04 == 0) {
          uVar15 = func_0x00f78af4();
          return uVar15;
        }
        unaff_x19 = 0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
        param_2 = extraout_x1_04;
      }
      else {
        unaff_x19 = 0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        param_2 = extraout_x1_01;
        unaff_x20 = uVar20;
      }
      goto Atlas_UI_LoadoutMetagameData__get_DisplayName;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = extraout_x1;
    uVar20 = unaff_x20;
  }
  else {
Atlas_UI_LoadoutMetagameData__get_DisplayName:
    pppuVar3 = (undefined1 ***)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    pppuVar21 = (undefined1 ***)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar8 = *(long *)(param_2 + 0x20);
    if (lVar8 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar16 = *(long *)(*(long *)(param_2 + 0x30) + 0x30);
      puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar23 = *(undefined **)((long)register0x00000008 + -8);
      puVar5 = (undefined1 *)register0x00000008;
      goto code_r0x0164feb4;
    }
    puVar23 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar24 = func_0x00f78af4();
    unaff_x19 = param_2;
    uVar20 = 0x3eb4000;
  }
code_r0x014881dc:
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar21;
  *(undefined **)((long)pppuVar3 + -8) = puVar23;
  lVar8 = *(long *)(auVar24._0_8_ + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  lVar16 = *(long *)(auVar24._0_8_ + 0x38);
  if (lVar16 != 0) {
    uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,*(undefined8 *)(lVar16 + 0x18),0);
    return (ulong)(uVar6 ^ 1);
  }
  lVar8 = func_0x00f78af4(lVar8,auVar24._8_8_);
  *(undefined1 **)((long)pppuVar3 + -0x20) = (undefined1 *)((long)pppuVar3 + -0x10);
  *(undefined **)((long)pppuVar3 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar16 = *(long *)(lVar8 + 0x10);
  if (lVar16 == 0) {
    return 0;
  }
  if (*(long *)(lVar8 + 0x38) != 0) {
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar3 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar3 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar3 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar3 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar3 + -0x30) = uVar20;
    *(long *)((long)pppuVar3 + -0x28) = unaff_x19;
    *(undefined8 *)((long)pppuVar3 + -0x20) = *(undefined8 *)((long)pppuVar3 + -0x20);
    *(undefined8 *)((long)pppuVar3 + -0x18) = *(undefined8 *)((long)pppuVar3 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar3 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x60) = 0;
    lVar8 = *(long *)(lVar16 + 0x20);
    if (((lVar8 == 0) || (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar8,0), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x38) == 0)) {
      auVar25 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar3 + -0x70),*(long *)(lVar8 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar15 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar3 + -0x70),uRam0000000003d33740);
        if ((uVar15 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar3 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar20 = *(undefined8 *)((long)pppuVar3 + -0x58);
        uVar15 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar3 + -0x60),uVar17,4,0);
      } while ((uVar15 & 1) == 0);
      *(char *)((long)pppuVar3 + -0x71) = (char)uVar20;
      lVar8 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar3 + -0x71));
      *(undefined1 *)((long)pppuVar3 + -0x72) = 2;
      uVar20 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar3 + -0x72));
      auVar25._8_8_ = uVar20;
      auVar25._0_8_ = uVar20;
      if (lVar8 != 0) {
        uVar15 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar8,uVar20,0);
        if ((uVar15 & 1) == 0) {
code_r0x015218ec:
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar3 + -0x70),uRam0000000003d33738);
        return uVar15;
      }
    }
    func_0x00f78af4(auVar25._0_8_,auVar25._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar8 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x20);
  *(undefined **)((long)pppuVar3 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar8 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar8 + 0x30) + 0x61);
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar3 + -0x50) = uVar20;
  *(long *)((long)pppuVar3 + -0x48) = unaff_x19;
  *(undefined1 **)((long)pppuVar3 + -0x40) = (undefined1 *)((long)pppuVar3 + -0x30);
  *(undefined **)((long)pppuVar3 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar8 + 0x30) != 0) &&
     (uVar15 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar8 + 0x30),0), *(long *)(uVar15 + 8) != 0)) {
    return uVar15;
  }
  plVar9 = (long *)func_0x00f78af4();
  puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
  *(undefined8 *)((long)pppuVar3 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar3 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar3 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar3 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar3 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar3 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar3 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar3 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar3 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar3 + -0x68) = lVar8;
  *(undefined1 **)((long)pppuVar3 + -0x60) = (undefined1 *)((long)pppuVar3 + -0x40);
  *(undefined **)((long)pppuVar3 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar22 = (undefined1 *)((long)pppuVar3 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar3 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar3 + -200) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar3 + -0xf8) = 0;
  puVar19 = (ulong *)(plVar9 + 5);
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) goto code_r0x014891b4;
  if (plVar9[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar20 = func_0x00f78b24();
    func_0x00f78ac0(uVar20,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar3 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar3 + -0x120) = puVar19;
    plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40);
    if (plVar10 != (long *)0x0) {
      do {
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar18 = piVar18 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar15 & 1) == 0) break;
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar18 = piVar18 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 != (long *)0x0) {
          if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar12,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar7 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar7) {
            uVar20 = **(undefined8 **)((long)pppuVar3 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar12 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar20 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar12,iVar7,0);
          uVar17 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
          uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
          if ((uVar15 & 1) != 0) break;
          iVar7 = iVar7 + 1;
        }
        if (plVar9[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar3 + -0xc0),0);
        if (plVar9[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],plVar12[6],(undefined1 *)((long)pppuVar3 + -200),0);
        uVar20 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar3 + -0xc0),
                                 *(undefined8 *)((long)pppuVar3 + -200),0);
        **(undefined8 **)((long)pppuVar3 + -0x120) = uVar20;
code_r0x0148868c:
        uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar15 & 1) == 0);
      *(undefined4 *)((long)pppuVar3 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar3 + -0xf8) = 1;
      if (plVar10 != (long *)0x0) {
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar18 = piVar18 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      if (*(int *)((long)pppuVar3 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar3 + -0xf8) = 0;
      }
      uVar6 = (uint)(*(int *)((long)pppuVar3 + -0x118) != 199);
      puVar11 = *(undefined8 **)((long)pppuVar3 + -0x120);
      iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar7 == 0) {
code_r0x01488a60:
        iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar7 == 0) {
code_r0x01488d78:
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar7 == 0) {
code_r0x01488eb4:
            puVar19 = *(ulong **)((long)pppuVar3 + -0x120);
            iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar7 == 0) goto code_r0x01489170;
            if (plVar9[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57590)
              ;
              if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
                plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar10 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar8 = *plVar10;
                    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar15 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar18 = piVar18 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                    if ((uVar15 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar3 + (long)(int)uVar6 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar3 + -0xf8) = *(int *)((long)pppuVar3 + -0xf8) + 1;
                      puVar19 = *(ulong **)((long)pppuVar3 + -0x120);
                      if (plVar10 == (long *)0x0) goto code_r0x01489170;
                      lVar8 = *plVar10;
                      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
                      if (uVar15 == 0) goto code_r0x01489144;
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar8 = *plVar10;
                    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar15 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar18 = piVar18 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                    if (plVar12 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar12 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar12);
                      goto code_r0x014892b8;
                    }
                    lVar8 = plVar12[4];
                    uVar20 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar8,uVar20,0);
                  } while ((uVar15 & 1) == 0);
                  if (plVar9[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar3 + -0xf0),0);
                    lVar8 = plVar9[4];
                    if (lVar8 != 0) {
                      lVar16 = plVar12[7];
                      puVar23 = &UNK_014890b0;
                      puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)(puVar5 + -0x10) = puVar22;
                      *(undefined **)(puVar5 + -8) = puVar23;
                      *(undefined8 *)(puVar5 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar8,lVar16,puVar5 + -0x18);
                      return *(ulong *)(puVar5 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar8 = plVar9[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar8 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar8,uVar20,(undefined1 *)((long)pppuVar3 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar3 + -0xe0) != 0) &&
                 (lVar8 = *(long *)(*(long *)((long)pppuVar3 + -0xe0) + 0x28), lVar8 != 0)) {
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar15 = 0;
                  uVar14 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar14 <= uVar15) goto code_r0x01489258;
                    uVar17 = *(undefined8 *)(lVar8 + 0x20 + uVar15 * 8);
                    uVar20 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    iVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                    if (iVar7 != 0) {
                      if (plVar9[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar3 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar3 + -0x120) =
                           *(undefined8 *)((long)pppuVar3 + -0xe8);
                      break;
                    }
                    uVar15 = uVar15 + 1;
                    uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
                  } while ((long)uVar15 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar9[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
            *(uint *)((long)pppuVar3 + -0x124) = uVar6;
            plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar10 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar8 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar15 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar18 = piVar18 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if ((uVar15 & 1) == 0) break;
              lVar8 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar15 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar18 = piVar18 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar12 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar12 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar12);
                goto code_r0x014892b8;
              }
              lVar8 = plVar12[8];
              if (lVar8 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar15 = 0;
              while ((long)uVar15 < (long)(int)*(uint *)(lVar8 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                  uVar20 = func_0x00f78b24();
                  func_0x00f78ac0(uVar20,0);
                  goto code_r0x014892b8;
                }
                uVar17 = *(undefined8 *)(lVar8 + uVar15 * 8 + 0x20);
                uVar20 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                if ((uVar14 & 1) != 0) {
                  if (plVar9[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar3 + -0xd8),0);
                  lVar8 = plVar9[4];
                  if (lVar8 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar16 = plVar12[4];
                  puVar23 = &UNK_01488c94;
                  puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar15 = uVar15 + 1;
                lVar8 = plVar12[8];
                if (lVar8 == 0) goto code_r0x014891e0;
              }
              uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar3 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar15 & 1) == 0);
            *(undefined4 *)((long)pppuVar3 + (long)*(int *)((long)pppuVar3 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar3 + -0xf8);
            uVar6 = uVar1 + 1;
            *(uint *)((long)pppuVar3 + -0xf8) = uVar6;
            puVar11 = *(undefined8 **)((long)pppuVar3 + -0x120);
            if (plVar10 != (long *)0x0) {
              lVar8 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar15 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar18 = piVar18 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar13 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar13)(plVar10,puVar13[1]);
            }
            if ((uVar6 != 0) && (*(int *)((long)pppuVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar3 + -0xf8) = uVar1;
              uVar6 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar9[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
          *(uint *)((long)pppuVar3 + -0x124) = uVar6;
          plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar8 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar15 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar18 = piVar18 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            if ((uVar15 & 1) == 0) break;
            lVar8 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar15 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar18 = piVar18 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
            if (plVar12 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar12 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar12);
              goto code_r0x014892b8;
            }
            iVar7 = 0;
            do {
              uVar20 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar12,iVar7,0);
              uVar17 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
              if ((uVar15 & 1) != 0) {
                if (plVar9[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar3 + -0xd0),0);
                lVar8 = plVar9[4];
                if (lVar8 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar16 = plVar12[6];
                puVar23 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 3);
            uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar3 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar15 & 1) == 0);
          *(undefined4 *)((long)pppuVar3 + (long)*(int *)((long)pppuVar3 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar3 + -0xf8);
          uVar6 = uVar1 + 1;
          *(uint *)((long)pppuVar3 + -0xf8) = uVar6;
          puVar11 = *(undefined8 **)((long)pppuVar3 + -0x120);
          if (plVar10 != (long *)0x0) {
            lVar8 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar15 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar18 = piVar18 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar13 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar13)(plVar10,puVar13[1]);
          }
          if ((uVar6 != 0) && (*(int *)((long)pppuVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar3 + -0xf8) = uVar1;
            uVar6 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar18 = piVar18 + 4;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
code_r0x01489170:
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) {
code_r0x014891b4:
    return *puVar19;
  }
  if (plVar9[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar19,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555b34 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_9
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_9(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long *extraout_x1_02;
  long extraout_x1_03;
  int *piVar18;
  long unaff_x19;
  ulong *puVar19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar21;
  undefined1 ***unaff_x29;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined *unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auStack_122 [146];
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_2 == 0) {
    func_0x00f78af4();
    puVar5 = &stack0xffffffffffffffc0;
    puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10;
    ppuVar21 = &puStack_20;
    uVar20 = 0x3eb4000;
    puStack_20 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fa3 & 1) == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d22cf8);
      bRam0000000003eb4fa3 = 1;
    }
    if (extraout_x1 != (long *)0x0) {
      uVar20 = (**(code **)(*extraout_x1 + 0x178))
                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x180));
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
      if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
      ppuVar4 = (undefined1 **)&stack0xfffffffffffffff0;
      puVar5 = puStack_20;
      puVar23 = puStack_18;
Core_Definitions_DefinitionID__op_Inequality:
      *(undefined8 *)((long)ppuVar4 + -0x30) = unaff_x22;
      *(undefined8 *)((long)ppuVar4 + -0x28) = unaff_x21;
      *(undefined8 *)((long)ppuVar4 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar4 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar4 + -0x10) = puVar5;
      *(undefined **)((long)ppuVar4 + -8) = puVar23;
      if ((bRam0000000003eb574c & 1) == 0) {
        func_0x00f78a20(0x3d21270,uVar17,0);
        bRam0000000003eb574c = 1;
      }
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17);
      return (ulong)(uVar6 ^ 1);
    }
    puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
    func_0x00f78af4();
    unaff_x19 = extraout_x1_00;
    if (extraout_x1_00 == 0) {
      pppuVar3 = &ppuStack_50;
      unaff_x29 = &ppuStack_50;
      puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
      ppuStack_50 = ppuVar21;
      func_0x00f78af4();
      if (extraout_x1_01 != 0) {
        uVar17 = 0;
        unaff_x19 = 0;
        param_2 = extraout_x1_01;
        goto code_r0x014881dc;
      }
      puStack_58 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
      puStack_60 = (undefined1 *)&ppuStack_50;
      func_0x00f78af4();
      puVar5 = &stack0xffffffffffffff70;
      puStack_68 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
      ppuVar21 = &puStack_70;
      puStack_70 = (undefined1 *)&puStack_60;
      if ((bRam0000000003eb4fa4 & 1) == 0) {
        puStack_70 = (undefined1 *)&puStack_60;
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d22cf8);
        bRam0000000003eb4fa4 = 1;
      }
      if (extraout_x1_02 != (long *)0x0) {
        uVar20 = (**(code **)(*extraout_x1_02 + 0x178))
                           (extraout_x1_02,*(undefined8 *)(*extraout_x1_02 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
        if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
        unaff_x20 = 0x3eb4000;
        ppuVar4 = &puStack_60;
        unaff_x19 = 0;
        puVar5 = puStack_70;
        puVar23 = puStack_68;
        goto Core_Definitions_DefinitionID__op_Inequality;
      }
      puVar23 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
      func_0x00f78af4();
      unaff_x19 = extraout_x1_03;
      if (extraout_x1_03 == 0) {
        uVar16 = func_0x00f78af4();
        return uVar16;
      }
    }
    pppuVar3 = (undefined1 ***)(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x20) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x18) = 0;
    *(undefined1 ***)(puVar5 + -0x10) = ppuVar21;
    *(undefined **)(puVar5 + -8) = puVar23;
    unaff_x29 = (undefined1 ***)(puVar5 + -0x10);
    uVar20 = 0x3eb4000;
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if (lVar8 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      puVar22 = *(undefined1 **)(puVar5 + -0x10);
      puVar23 = *(undefined **)(puVar5 + -8);
      goto code_r0x0164feb4;
    }
    unaff_x30 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar24 = func_0x00f78af4();
    uVar17 = auVar24._8_8_;
    param_2 = auVar24._0_8_;
  }
  else {
    uVar17 = 0;
    pppuVar3 = (undefined1 ***)register0x00000008;
    uVar20 = unaff_x20;
  }
code_r0x014881dc:
  *(undefined1 ****)((long)pppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)pppuVar3 + -8) = unaff_x30;
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
    return (ulong)(uVar6 ^ 1);
  }
  lVar8 = func_0x00f78af4(lVar8,uVar17);
  *(undefined1 **)((long)pppuVar3 + -0x20) = (undefined1 *)((long)pppuVar3 + -0x10);
  *(undefined **)((long)pppuVar3 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 == 0) {
    return 0;
  }
  if (*(long *)(lVar8 + 0x38) != 0) {
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar3 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar3 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar3 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar3 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar3 + -0x30) = uVar20;
    *(long *)((long)pppuVar3 + -0x28) = unaff_x19;
    *(undefined8 *)((long)pppuVar3 + -0x20) = *(undefined8 *)((long)pppuVar3 + -0x20);
    *(undefined8 *)((long)pppuVar3 + -0x18) = *(undefined8 *)((long)pppuVar3 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar3 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar3 + -0x60) = 0;
    lVar8 = *(long *)(lVar9 + 0x20);
    if (((lVar8 == 0) || (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar8,0), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x38) == 0)) {
      auVar24 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar3 + -0x70),*(long *)(lVar8 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar3 + -0x70),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar3 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar20 = *(undefined8 *)((long)pppuVar3 + -0x58);
        uVar16 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar3 + -0x60),uVar17,4,0);
      } while ((uVar16 & 1) == 0);
      *(char *)((long)pppuVar3 + -0x71) = (char)uVar20;
      lVar8 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar3 + -0x71));
      *(undefined1 *)((long)pppuVar3 + -0x72) = 2;
      uVar20 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar3 + -0x72));
      auVar24._8_8_ = uVar20;
      auVar24._0_8_ = uVar20;
      if (lVar8 != 0) {
        uVar16 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar8,uVar20,0);
        if ((uVar16 & 1) == 0) {
code_r0x015218ec:
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar3 + -0x70),uRam0000000003d33738);
        return uVar16;
      }
    }
    func_0x00f78af4(auVar24._0_8_,auVar24._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar8 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x20);
  *(undefined **)((long)pppuVar3 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar8 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar8 + 0x30) + 0x61);
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar3 + -0x50) = uVar20;
  *(long *)((long)pppuVar3 + -0x48) = unaff_x19;
  *(undefined1 **)((long)pppuVar3 + -0x40) = (undefined1 *)((long)pppuVar3 + -0x30);
  *(undefined **)((long)pppuVar3 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar8 + 0x30) != 0) &&
     (uVar16 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar8 + 0x30),0), *(long *)(uVar16 + 8) != 0)) {
    return uVar16;
  }
  plVar10 = (long *)func_0x00f78af4();
  puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
  *(undefined8 *)((long)pppuVar3 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar3 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar3 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar3 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar3 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar3 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar3 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar3 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar3 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar3 + -0x68) = lVar8;
  *(undefined1 **)((long)pppuVar3 + -0x60) = (undefined1 *)((long)pppuVar3 + -0x40);
  *(undefined **)((long)pppuVar3 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar22 = (undefined1 *)((long)pppuVar3 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar3 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar3 + -200) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar3 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar3 + -0xf8) = 0;
  puVar19 = (ulong *)(plVar10 + 5);
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) goto code_r0x014891b4;
  if (plVar10[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar20 = func_0x00f78b24();
    func_0x00f78ac0(uVar20,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar3 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar3 + -0x120) = puVar19;
    plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40);
    if (plVar11 != (long *)0x0) {
      do {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar16 & 1) == 0) break;
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar13,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar7 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar7) {
            uVar20 = **(undefined8 **)((long)pppuVar3 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar13 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar20 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar13,iVar7,0);
          uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
          uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
          if ((uVar16 & 1) != 0) break;
          iVar7 = iVar7 + 1;
        }
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar3 + -0xc0),0);
        if (plVar10[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],plVar13[6],(undefined1 *)((long)pppuVar3 + -200),0);
        uVar20 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar3 + -0xc0),
                                 *(undefined8 *)((long)pppuVar3 + -200),0);
        **(undefined8 **)((long)pppuVar3 + -0x120) = uVar20;
code_r0x0148868c:
        uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar20,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar16 & 1) == 0);
      *(undefined4 *)((long)pppuVar3 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar3 + -0xf8) = 1;
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
      if (*(int *)((long)pppuVar3 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar3 + -0xf8) = 0;
      }
      uVar6 = (uint)(*(int *)((long)pppuVar3 + -0x118) != 199);
      puVar12 = *(undefined8 **)((long)pppuVar3 + -0x120);
      iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar7 == 0) {
code_r0x01488a60:
        iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar7 == 0) {
code_r0x01488d78:
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar7 == 0) {
code_r0x01488eb4:
            puVar19 = *(ulong **)((long)pppuVar3 + -0x120);
            iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar7 == 0) goto code_r0x01489170;
            if (plVar10[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57590
                             );
              if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
                plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar11 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    if ((uVar16 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar3 + (long)(int)uVar6 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar3 + -0xf8) = *(int *)((long)pppuVar3 + -0xf8) + 1;
                      puVar19 = *(ulong **)((long)pppuVar3 + -0x120);
                      if (plVar11 == (long *)0x0) goto code_r0x01489170;
                      lVar8 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                      if (uVar16 == 0) goto code_r0x01489144;
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar8 = *plVar11;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                    if (plVar13 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar13);
                      goto code_r0x014892b8;
                    }
                    lVar8 = plVar13[4];
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar8,uVar20,0);
                  } while ((uVar16 & 1) == 0);
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar3 + -0xf0),0);
                    lVar8 = plVar10[4];
                    if (lVar8 != 0) {
                      lVar9 = plVar13[7];
                      puVar23 = &UNK_014890b0;
                      puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)(puVar5 + -0x10) = puVar22;
                      *(undefined **)(puVar5 + -8) = puVar23;
                      *(undefined8 *)(puVar5 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar8,lVar9,puVar5 + -0x18);
                      return *(ulong *)(puVar5 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar8 = plVar10[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar8 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar8,uVar20,(undefined1 *)((long)pppuVar3 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar3 + -0xe0) != 0) &&
                 (lVar8 = *(long *)(*(long *)((long)pppuVar3 + -0xe0) + 0x28), lVar8 != 0)) {
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar16 = 0;
                  uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar15 <= uVar16) goto code_r0x01489258;
                    uVar17 = *(undefined8 *)(lVar8 + 0x20 + uVar16 * 8);
                    uVar20 = (**(code **)(*plVar10 + 0x178))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                    iVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                    if (iVar7 != 0) {
                      if (plVar10[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar3 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar3 + -0x120) =
                           *(undefined8 *)((long)pppuVar3 + -0xe8);
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar10[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
            *(uint *)((long)pppuVar3 + -0x124) = uVar6;
            plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((uVar16 & 1) == 0) break;
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar13 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar13);
                goto code_r0x014892b8;
              }
              lVar8 = plVar13[8];
              if (lVar8 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar16 = 0;
              while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                  uVar20 = func_0x00f78b24();
                  func_0x00f78ac0(uVar20,0);
                  goto code_r0x014892b8;
                }
                uVar17 = *(undefined8 *)(lVar8 + uVar16 * 8 + 0x20);
                uVar20 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar17,uVar20,0);
                if ((uVar15 & 1) != 0) {
                  if (plVar10[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar3 + -0xd8),0);
                  lVar8 = plVar10[4];
                  if (lVar8 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar9 = plVar13[4];
                  puVar23 = &UNK_01488c94;
                  puVar5 = (undefined1 *)((long)pppuVar3 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar16 = uVar16 + 1;
                lVar8 = plVar13[8];
                if (lVar8 == 0) goto code_r0x014891e0;
              }
              uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar3 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar16 & 1) == 0);
            *(undefined4 *)((long)pppuVar3 + (long)*(int *)((long)pppuVar3 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar3 + -0xf8);
            uVar6 = uVar1 + 1;
            *(uint *)((long)pppuVar3 + -0xf8) = uVar6;
            puVar12 = *(undefined8 **)((long)pppuVar3 + -0x120);
            if (plVar11 != (long *)0x0) {
              lVar8 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar14)(plVar11,puVar14[1]);
            }
            if ((uVar6 != 0) && (*(int *)((long)pppuVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar3 + -0xf8) = uVar1;
              uVar6 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar10[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar10[3],(undefined1 *)((long)pppuVar3 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar3 + -0xb8) != 0) {
          *(uint *)((long)pppuVar3 + -0x124) = uVar6;
          plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar3 + -0xb8),uRam0000000003d3fe40);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar16 & 1) == 0) break;
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
            if (plVar13 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar13 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar13);
              goto code_r0x014892b8;
            }
            iVar7 = 0;
            do {
              uVar20 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar13,iVar7,0);
              uVar17 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              uVar16 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar20,uVar17,0);
              if ((uVar16 & 1) != 0) {
                if (plVar10[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar3 + -0xd0),0);
                lVar8 = plVar10[4];
                if (lVar8 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar9 = plVar13[6];
                puVar23 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 3);
            uVar16 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar3 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar16 & 1) == 0);
          *(undefined4 *)((long)pppuVar3 + (long)*(int *)((long)pppuVar3 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar3 + -0xf8);
          uVar6 = uVar1 + 1;
          *(uint *)((long)pppuVar3 + -0xf8) = uVar6;
          puVar12 = *(undefined8 **)((long)pppuVar3 + -0x120);
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar14)(plVar11,puVar14[1]);
          }
          if ((uVar6 != 0) && (*(int *)((long)pppuVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar3 + -0xf8) = uVar1;
            uVar6 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar18 = piVar18 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
code_r0x01489170:
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar19,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar7 == 0) {
code_r0x014891b4:
    return *puVar19;
  }
  if (plVar10[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar10[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar19,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555b50 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_10
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_10(undefined8 param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long extraout_x1;
  ulong extraout_x1_00;
  long *extraout_x1_01;
  long extraout_x1_02;
  long lVar19;
  int *piVar20;
  undefined8 unaff_x19;
  ulong *puVar21;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar22;
  undefined1 ***pppuVar23;
  undefined1 *unaff_x29;
  undefined1 *puVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_112 [146];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  
  puVar3 = &stack0xffffffffffffffd0;
  ppuVar22 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4fa3 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22cf8);
    bRam0000000003eb4fa3 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar16 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
    if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar18 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 8);
Core_Definitions_DefinitionID__op_Inequality:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb574c & 1) == 0) {
      func_0x00f78a20(0x3d21270,uVar18,0);
      bRam0000000003eb574c = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar18);
    return (ulong)(uVar7 ^ 1);
  }
  puVar25 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
  func_0x00f78af4();
  lVar17 = extraout_x1;
  if (extraout_x1 == 0) {
    pppuVar4 = &ppuStack_40;
    pppuVar23 = &ppuStack_40;
    puStack_38 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11;
    puVar25 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
    ppuStack_40 = ppuVar22;
    func_0x00f78af4();
    if (extraout_x1_00 == 0) {
      puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
      puStack_50 = (undefined1 *)&ppuStack_40;
      func_0x00f78af4();
      puVar3 = &stack0xffffffffffffff80;
      puStack_58 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
      ppuVar22 = &puStack_60;
      puStack_60 = (undefined1 *)&puStack_50;
      if ((bRam0000000003eb4fa4 & 1) == 0) {
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d22cf8);
        bRam0000000003eb4fa4 = 1;
      }
      if (extraout_x1_01 != (long *)0x0) {
        uVar16 = (**(code **)(*extraout_x1_01 + 0x178))
                           (extraout_x1_01,*(undefined8 *)(*extraout_x1_01 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
        if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar18 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
        unaff_x20 = 0x3eb4000;
        register0x00000008 = (BADSPACEBASE *)&puStack_50;
        unaff_x19 = 0;
        unaff_x29 = puStack_60;
        unaff_x30 = puStack_58;
        goto Core_Definitions_DefinitionID__op_Inequality;
      }
      puVar25 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
      func_0x00f78af4();
      lVar17 = extraout_x1_02;
      if (extraout_x1_02 == 0) {
        uVar15 = func_0x00f78af4();
        return uVar15;
      }
      goto Atlas_UI_LoadoutMetagameData__get_DisplayName;
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = extraout_x1_00;
    lVar17 = 0;
  }
  else {
Atlas_UI_LoadoutMetagameData__get_DisplayName:
    pppuVar4 = (undefined1 ***)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x20) = 0x3eb4000;
    *(undefined8 *)(puVar3 + -0x18) = 0;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar22;
    *(undefined **)(puVar3 + -8) = puVar25;
    pppuVar23 = (undefined1 ***)(puVar3 + -0x10);
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar8 = *(long *)(lVar17 + 0x20);
    if (lVar8 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(lVar17 + 0x30) != 0) {
      lVar17 = *(long *)(*(long *)(lVar17 + 0x30) + 0x30);
      puVar24 = *(undefined1 **)(puVar3 + -0x10);
      puVar25 = *(undefined **)(puVar3 + -8);
      puVar5 = puVar3;
      goto code_r0x0164feb4;
    }
    puVar25 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar26 = func_0x00f78af4();
  }
  *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar23;
  *(undefined **)((long)pppuVar4 + -8) = puVar25;
  lVar8 = *(long *)(auVar26._0_8_ + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  lVar19 = *(long *)(auVar26._0_8_ + 0x38);
  if (lVar19 != 0) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,*(undefined8 *)(lVar19 + 0x18),0);
    return (ulong)(uVar7 ^ 1);
  }
  lVar8 = func_0x00f78af4(lVar8,auVar26._8_8_);
  *(undefined1 **)((long)pppuVar4 + -0x20) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(undefined **)((long)pppuVar4 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar19 = *(long *)(lVar8 + 0x10);
  if (lVar19 == 0) {
    return 0;
  }
  if (*(long *)(lVar8 + 0x38) != 0) {
    uVar16 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18);
    *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x24;
    *(undefined8 *)((long)pppuVar4 + -0x48) = unaff_x23;
    *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x21;
    *(undefined8 *)((long)pppuVar4 + -0x30) = 0x3eb4000;
    *(long *)((long)pppuVar4 + -0x28) = lVar17;
    *(undefined8 *)((long)pppuVar4 + -0x20) = *(undefined8 *)((long)pppuVar4 + -0x20);
    *(undefined8 *)((long)pppuVar4 + -0x18) = *(undefined8 *)((long)pppuVar4 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar4 + -0x68) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x70) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x58) = 0;
    *(undefined8 *)((long)pppuVar4 + -0x60) = 0;
    lVar17 = *(long *)(lVar19 + 0x20);
    if (((lVar17 == 0) || (lVar17 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar17,0), lVar17 == 0)) ||
       (*(long *)(lVar17 + 0x38) == 0)) {
      auVar27 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar4 + -0x70),*(long *)(lVar17 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar15 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33740);
        if ((uVar15 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar4 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar18 = *(undefined8 *)((long)pppuVar4 + -0x58);
        uVar15 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar4 + -0x60),uVar16,4,0);
      } while ((uVar15 & 1) == 0);
      *(char *)((long)pppuVar4 + -0x71) = (char)uVar18;
      lVar17 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x71));
      *(undefined1 *)((long)pppuVar4 + -0x72) = 2;
      uVar16 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar4 + -0x72));
      auVar27._8_8_ = uVar16;
      auVar27._0_8_ = uVar16;
      if (lVar17 != 0) {
        uVar15 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar17,uVar16,0);
        if ((uVar15 & 1) == 0) {
code_r0x015218ec:
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar4 + -0x70),uRam0000000003d33738);
        return uVar15;
      }
    }
    func_0x00f78af4(auVar27._0_8_,auVar27._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar8 = func_0x00f78af4();
  *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x20);
  *(undefined **)((long)pppuVar4 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar8 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar8 + 0x30) + 0x61);
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar4 + -0x50) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x48) = lVar17;
  *(undefined1 **)((long)pppuVar4 + -0x40) = (undefined1 *)((long)pppuVar4 + -0x30);
  *(undefined **)((long)pppuVar4 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar8 + 0x30) != 0) &&
     (uVar15 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar8 + 0x30),0), *(long *)(uVar15 + 8) != 0)) {
    return uVar15;
  }
  plVar9 = (long *)func_0x00f78af4();
  puVar5 = (undefined1 *)((long)pppuVar4 + -0x130);
  *(undefined8 *)((long)pppuVar4 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)pppuVar4 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)pppuVar4 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)pppuVar4 + -0x98) = unaff_x25;
  *(undefined8 *)((long)pppuVar4 + -0x90) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x88) = unaff_x23;
  *(undefined8 *)((long)pppuVar4 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x78) = unaff_x21;
  *(undefined8 *)((long)pppuVar4 + -0x70) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x68) = lVar8;
  *(undefined1 **)((long)pppuVar4 + -0x60) = (undefined1 *)((long)pppuVar4 + -0x40);
  *(undefined **)((long)pppuVar4 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar24 = (undefined1 *)((long)pppuVar4 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)pppuVar4 + -0xc0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xb8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd0) = 0;
  *(undefined8 *)((long)pppuVar4 + -200) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xd8) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xf0) = 0;
  *(undefined8 *)((long)pppuVar4 + -0xe8) = 0;
  *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
  puVar21 = (ulong *)(plVar9 + 5);
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar21,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar6 == 0) goto code_r0x014891b4;
  if (plVar9[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)pppuVar4 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)pppuVar4 + -0x120) = puVar21;
    plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
    if (plVar10 != (long *)0x0) {
      do {
        lVar17 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar15 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar20 = piVar20 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar15 & 1) == 0) break;
        lVar17 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar15 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar20 = piVar20 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 != (long *)0x0) {
          if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar12,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar6 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar6) {
            uVar16 = **(undefined8 **)((long)pppuVar4 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar12 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar16 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar12,iVar6,0);
          uVar18 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
          uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar18,0);
          if ((uVar15 & 1) != 0) break;
          iVar6 = iVar6 + 1;
        }
        if (plVar9[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)pppuVar4 + -0xc0),0);
        if (plVar9[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],plVar12[6],(undefined1 *)((long)pppuVar4 + -200),0);
        uVar16 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)pppuVar4 + -0xc0),
                                 *(undefined8 *)((long)pppuVar4 + -200),0);
        **(undefined8 **)((long)pppuVar4 + -0x120) = uVar16;
code_r0x0148868c:
        uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar15 & 1) == 0);
      *(undefined4 *)((long)pppuVar4 + -0x118) = 199;
      *(undefined4 *)((long)pppuVar4 + -0xf8) = 1;
      if (plVar10 != (long *)0x0) {
        lVar17 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar15 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar20 = piVar20 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      if (*(int *)((long)pppuVar4 + -0x118) == 199) {
        *(undefined4 *)((long)pppuVar4 + -0xf8) = 0;
      }
      uVar7 = (uint)(*(int *)((long)pppuVar4 + -0x118) != 199);
      puVar11 = *(undefined8 **)((long)pppuVar4 + -0x120);
      iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar6 == 0) {
code_r0x01488a60:
        iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar6 == 0) {
code_r0x01488d78:
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar6 == 0) {
code_r0x01488eb4:
            puVar21 = *(ulong **)((long)pppuVar4 + -0x120);
            iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar21,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar6 == 0) goto code_r0x01489170;
            if (plVar9[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57590)
              ;
              if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
                plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),
                                                  uRam0000000003d3fe40);
                if (plVar10 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar17 = *plVar10;
                    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
                    if (uVar15 != 0) {
                      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar20 = piVar20 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                    if ((uVar15 & 1) == 0) {
                      *(undefined4 *)((long)pppuVar4 + (long)(int)uVar7 * 4 + -0x118) = 0x378;
                      *(int *)((long)pppuVar4 + -0xf8) = *(int *)((long)pppuVar4 + -0xf8) + 1;
                      puVar21 = *(ulong **)((long)pppuVar4 + -0x120);
                      if (plVar10 == (long *)0x0) goto code_r0x01489170;
                      lVar17 = *plVar10;
                      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
                      if (uVar15 == 0) goto code_r0x01489144;
                      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar17 = *plVar10;
                    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
                    if (uVar15 != 0) {
                      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar20 = piVar20 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                    if (plVar12 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar12 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar12);
                      goto code_r0x014892b8;
                    }
                    lVar17 = plVar12[4];
                    uVar16 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                    uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar17,uVar16,0);
                  } while ((uVar15 & 1) == 0);
                  if (plVar9[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)pppuVar4 + -0xf0),0);
                    lVar8 = plVar9[4];
                    if (lVar8 != 0) {
                      lVar17 = plVar12[7];
                      puVar25 = &UNK_014890b0;
                      puVar5 = (undefined1 *)((long)pppuVar4 + -0x130);
code_r0x0164feb4:
                      *(undefined1 **)(puVar5 + -0x10) = puVar24;
                      *(undefined **)(puVar5 + -8) = puVar25;
                      *(undefined8 *)(puVar5 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar8,lVar17,puVar5 + -0x18);
                      return *(ulong *)(puVar5 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar17 = plVar9[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar17 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar17,uVar16,(undefined1 *)((long)pppuVar4 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)pppuVar4 + -0xe0) != 0) &&
                 (lVar17 = *(long *)(*(long *)((long)pppuVar4 + -0xe0) + 0x28), lVar17 != 0)) {
                if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
                  uVar15 = 0;
                  uVar14 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                  do {
                    if (uVar14 <= uVar15) goto code_r0x01489258;
                    uVar18 = *(undefined8 *)(lVar17 + 0x20 + uVar15 * 8);
                    uVar16 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                    iVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar18,uVar16,0);
                    if (iVar6 != 0) {
                      if (plVar9[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)pppuVar4 + -0xe8),0);
                      **(undefined8 **)((long)pppuVar4 + -0x120) =
                           *(undefined8 *)((long)pppuVar4 + -0xe8);
                      break;
                    }
                    uVar15 = uVar15 + 1;
                    uVar14 = (ulong)*(uint *)(lVar17 + 0x18);
                  } while ((long)uVar15 < (long)(int)*(uint *)(lVar17 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar9[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
            *(uint *)((long)pppuVar4 + -0x124) = uVar7;
            plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40
                                             );
            if (plVar10 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar17 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar15 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar20 = piVar20 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if ((uVar15 & 1) == 0) break;
              lVar17 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar15 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar20 = piVar20 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar12 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar12 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar12);
                goto code_r0x014892b8;
              }
              lVar17 = plVar12[8];
              if (lVar17 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar15 = 0;
              while ((long)uVar15 < (long)(int)*(uint *)(lVar17 + 0x18)) {
                if (*(uint *)(lVar17 + 0x18) <= uVar15) {
                  uVar16 = func_0x00f78b24();
                  func_0x00f78ac0(uVar16,0);
                  goto code_r0x014892b8;
                }
                uVar18 = *(undefined8 *)(lVar17 + uVar15 * 8 + 0x20);
                uVar16 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar18,uVar16,0);
                if ((uVar14 & 1) != 0) {
                  if (plVar9[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)pppuVar4 + -0xd8),0);
                  lVar8 = plVar9[4];
                  if (lVar8 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar17 = plVar12[4];
                  puVar25 = &UNK_01488c94;
                  puVar5 = (undefined1 *)((long)pppuVar4 + -0x130);
                  goto code_r0x0164feb4;
                }
                uVar15 = uVar15 + 1;
                lVar17 = plVar12[8];
                if (lVar17 == 0) goto code_r0x014891e0;
              }
              uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar15 & 1) == 0);
            *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
            uVar7 = uVar1 + 1;
            *(uint *)((long)pppuVar4 + -0xf8) = uVar7;
            puVar11 = *(undefined8 **)((long)pppuVar4 + -0x120);
            if (plVar10 != (long *)0x0) {
              lVar17 = *plVar10;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar15 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar20 = piVar20 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar13 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar13)(plVar10,puVar13[1]);
            }
            if ((uVar7 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
              uVar7 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar9[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar9[3],(undefined1 *)((long)pppuVar4 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)pppuVar4 + -0xb8) != 0) {
          *(uint *)((long)pppuVar4 + -0x124) = uVar7;
          plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)pppuVar4 + -0xb8),uRam0000000003d3fe40);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar17 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar15 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar20 = piVar20 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            if ((uVar15 & 1) == 0) break;
            lVar17 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar15 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar20 = piVar20 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
            if (plVar12 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar12 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar12);
              goto code_r0x014892b8;
            }
            iVar6 = 0;
            do {
              uVar16 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar12,iVar6,0);
              uVar18 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
              uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar18,0);
              if ((uVar15 & 1) != 0) {
                if (plVar9[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,
                                (undefined1 *)((long)pppuVar4 + -0xd0),0);
                lVar8 = plVar9[4];
                if (lVar8 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar17 = plVar12[6];
                puVar25 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 3);
            uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)pppuVar4 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar15 & 1) == 0);
          *(undefined4 *)((long)pppuVar4 + (long)*(int *)((long)pppuVar4 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)pppuVar4 + -0xf8);
          uVar7 = uVar1 + 1;
          *(uint *)((long)pppuVar4 + -0xf8) = uVar7;
          puVar11 = *(undefined8 **)((long)pppuVar4 + -0x120);
          if (plVar10 != (long *)0x0) {
            lVar17 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar15 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar20 = piVar20 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar13 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar13)(plVar10,puVar13[1]);
          }
          if ((uVar7 != 0) && (*(int *)((long)pppuVar4 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)pppuVar4 + -0xf8) = uVar1;
            uVar7 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
code_r0x01489170:
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar21,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar6 == 0) {
code_r0x014891b4:
    return *puVar21;
  }
  if (plVar9[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar9[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar21,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555c20 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_11
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_11(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar7;
  int iVar6;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  int *piVar17;
  long unaff_x19;
  ulong *puVar18;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined *unaff_x30;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_e2 [146];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_2 == 0) {
    puVar3 = &stack0xfffffffffffffff0;
    puVar21 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
    func_0x00f78af4();
    if (extraout_x1 == 0) {
      puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      puStack_28 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
      unaff_x29 = &puStack_30;
      unaff_x20 = 0x3eb4000;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb4fa4 & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d22cf8);
        bRam0000000003eb4fa4 = 1;
      }
      if (extraout_x1_00 != (long *)0x0) {
        uVar16 = (**(code **)(*extraout_x1_00 + 0x178))
                           (extraout_x1_00,*(undefined8 *)(*extraout_x1_00 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
        if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar19 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
        if ((bRam0000000003eb574c & 1) == 0) {
          func_0x00f78a20(0x3d21270,uVar19,0);
          bRam0000000003eb574c = 1;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar19);
        return (ulong)(uVar5 ^ 1);
      }
      unaff_x30 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
      func_0x00f78af4();
      if (extraout_x1_01 == 0) {
        uVar14 = func_0x00f78af4();
        return uVar14;
      }
      unaff_x19 = 0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      param_2 = extraout_x1_01;
      goto Atlas_UI_LoadoutMetagameData__get_DisplayName;
    }
    auVar22._8_8_ = 0;
    auVar22._0_8_ = extraout_x1;
  }
  else {
Atlas_UI_LoadoutMetagameData__get_DisplayName:
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar7 = *(long *)(param_2 + 0x20);
    if (lVar7 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar15 = *(long *)(*(long *)(param_2 + 0x30) + 0x30);
      puVar20 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar21 = *(undefined **)((long)register0x00000008 + -8);
      puVar4 = (undefined1 *)register0x00000008;
      goto code_r0x0164feb4;
    }
    puVar21 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar22 = func_0x00f78af4();
    unaff_x19 = param_2;
  }
  *(undefined1 **)(puVar3 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)(puVar3 + -8) = puVar21;
  lVar7 = *(long *)(auVar22._0_8_ + 0x10);
  if (lVar7 == 0) {
    return 0;
  }
  lVar15 = *(long *)(auVar22._0_8_ + 0x38);
  if (lVar15 != 0) {
    uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar7,*(undefined8 *)(lVar15 + 0x18),0);
    return (ulong)(uVar5 ^ 1);
  }
  lVar7 = func_0x00f78af4(lVar7,auVar22._8_8_);
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar15 = *(long *)(lVar7 + 0x10);
  if (lVar15 == 0) {
    return 0;
  }
  if (*(long *)(lVar7 + 0x38) != 0) {
    uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18);
    *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x20;
    *(long *)(puVar3 + -0x28) = unaff_x19;
    *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)(puVar3 + -0x68) = 0;
    *(undefined8 *)(puVar3 + -0x70) = 0;
    *(undefined8 *)(puVar3 + -0x58) = 0;
    *(undefined8 *)(puVar3 + -0x60) = 0;
    lVar7 = *(long *)(lVar15 + 0x20);
    if (((lVar7 == 0) || (lVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar7,0), lVar7 == 0)) ||
       (*(long *)(lVar7 + 0x38) == 0)) {
      auVar23 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(puVar3 + -0x70,*(long *)(lVar7 + 0x38),uRam0000000003d3d950);
      do {
        uVar14 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(puVar3 + -0x70,uRam0000000003d33740);
        if ((uVar14 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)(puVar3 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar19 = *(undefined8 *)(puVar3 + -0x58);
        uVar14 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(puVar3 + -0x60),uVar16,4,0);
      } while ((uVar14 & 1) == 0);
      puVar3[-0x71] = (char)uVar19;
      lVar7 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,puVar3 + -0x71);
      puVar3[-0x72] = 2;
      uVar16 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,puVar3 + -0x72);
      auVar23._8_8_ = uVar16;
      auVar23._0_8_ = uVar16;
      if (lVar7 != 0) {
        uVar14 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar7,uVar16,0);
        if ((uVar14 & 1) == 0) {
code_r0x015218ec:
          uVar14 = 0;
        }
        else {
          uVar14 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(puVar3 + -0x70,uRam0000000003d33738);
        return uVar14;
      }
    }
    func_0x00f78af4(auVar23._0_8_,auVar23._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar7 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x20;
  *(undefined **)(puVar3 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar7 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar7 + 0x30) + 0x61);
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0x50) = unaff_x20;
  *(long *)(puVar3 + -0x48) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x30;
  *(undefined **)(puVar3 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar7 + 0x30) != 0) &&
     (uVar14 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar7 + 0x30),0), *(long *)(uVar14 + 8) != 0)) {
    return uVar14;
  }
  plVar8 = (long *)func_0x00f78af4();
  puVar4 = puVar3 + -0x130;
  *(undefined8 *)(puVar3 + -0xb0) = unaff_x28;
  *(undefined8 *)(puVar3 + -0xa8) = unaff_x27;
  *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x88) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x78) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x70) = 0x3eb4000;
  *(long *)(puVar3 + -0x68) = lVar7;
  *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  puVar20 = puVar3 + -0x60;
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)(puVar3 + -0xc0) = 0;
  *(undefined8 *)(puVar3 + -0xb8) = 0;
  *(undefined8 *)(puVar3 + -0xd0) = 0;
  *(undefined8 *)(puVar3 + -200) = 0;
  *(undefined8 *)(puVar3 + -0xe0) = 0;
  *(undefined8 *)(puVar3 + -0xd8) = 0;
  *(undefined8 *)(puVar3 + -0xf0) = 0;
  *(undefined8 *)(puVar3 + -0xe8) = 0;
  *(undefined4 *)(puVar3 + -0xf8) = 0;
  puVar18 = (ulong *)(plVar8 + 5);
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar18,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar6 == 0) goto code_r0x014891b4;
  if (plVar8[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],puVar3 + -0xb8,uRam0000000003d57548);
    if (*(long *)(puVar3 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)(puVar3 + -0x120) = puVar18;
    plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar3 + -0xb8),uRam0000000003d3fe40);
    if (plVar9 != (long *)0x0) {
      do {
        lVar7 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar17 = piVar17 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar14 & 1) == 0) break;
        lVar7 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar17 = piVar17 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 != (long *)0x0) {
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar11,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar6 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar6) {
            uVar16 = **(undefined8 **)(puVar3 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar16 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar11,iVar6,0);
          uVar19 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
          uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar19,0);
          if ((uVar14 & 1) != 0) break;
          iVar6 = iVar6 + 1;
        }
        if (plVar8[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,puVar3 + -0xc0,0);
        if (plVar8[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],plVar11[6],puVar3 + -200,0);
        uVar16 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)(puVar3 + -0xc0),*(undefined8 *)(puVar3 + -200),0);
        **(undefined8 **)(puVar3 + -0x120) = uVar16;
code_r0x0148868c:
        uVar14 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar14 & 1) == 0);
      *(undefined4 *)(puVar3 + -0x118) = 199;
      *(undefined4 *)(puVar3 + -0xf8) = 1;
      if (plVar9 != (long *)0x0) {
        lVar7 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar17 = piVar17 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      if (*(int *)(puVar3 + -0x118) == 199) {
        *(undefined4 *)(puVar3 + -0xf8) = 0;
      }
      uVar5 = (uint)(*(int *)(puVar3 + -0x118) != 199);
      puVar10 = *(undefined8 **)(puVar3 + -0x120);
      iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar6 == 0) {
code_r0x01488a60:
        iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar6 == 0) {
code_r0x01488d78:
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar6 == 0) {
code_r0x01488eb4:
            puVar18 = *(ulong **)(puVar3 + -0x120);
            iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar18,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar6 == 0) goto code_r0x01489170;
            if (plVar8[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],puVar3 + -0xb8,uRam0000000003d57590);
              if (*(long *)(puVar3 + -0xb8) != 0) {
                plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar3 + -0xb8),uRam0000000003d3fe40);
                if (plVar9 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar7 = *plVar9;
                    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
                    if (uVar14 != 0) {
                      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar17 = piVar17 + 4;
                        uVar14 = uVar14 - 1;
                      } while (uVar14 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    if ((uVar14 & 1) == 0) {
                      *(undefined4 *)(puVar3 + (long)(int)uVar5 * 4 + -0x118) = 0x378;
                      *(int *)(puVar3 + -0xf8) = *(int *)(puVar3 + -0xf8) + 1;
                      puVar18 = *(ulong **)(puVar3 + -0x120);
                      if (plVar9 == (long *)0x0) goto code_r0x01489170;
                      lVar7 = *plVar9;
                      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
                      if (uVar14 == 0) goto code_r0x01489144;
                      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar7 = *plVar9;
                    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
                    if (uVar14 != 0) {
                      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar17 = piVar17 + 4;
                        uVar14 = uVar14 - 1;
                      } while (uVar14 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    if (plVar11 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar11 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar11);
                      goto code_r0x014892b8;
                    }
                    lVar7 = plVar11[4];
                    uVar16 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                    uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar7,uVar16,0);
                  } while ((uVar14 & 1) == 0);
                  if (plVar8[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,puVar3 + -0xf0,0);
                    lVar7 = plVar8[4];
                    if (lVar7 != 0) {
                      lVar15 = plVar11[7];
                      puVar21 = &UNK_014890b0;
                      puVar4 = puVar3 + -0x130;
code_r0x0164feb4:
                      *(undefined1 **)(puVar4 + -0x10) = puVar20;
                      *(undefined **)(puVar4 + -8) = puVar21;
                      *(undefined8 *)(puVar4 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar7,lVar15,puVar4 + -0x18);
                      return *(ulong *)(puVar4 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar7 = plVar8[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar7 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar7,uVar16,puVar3 + -0xe0,uRam0000000003d574e0);
              if ((*(long *)(puVar3 + -0xe0) != 0) &&
                 (lVar7 = *(long *)(*(long *)(puVar3 + -0xe0) + 0x28), lVar7 != 0)) {
                if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                  uVar14 = 0;
                  uVar13 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                  do {
                    if (uVar13 <= uVar14) goto code_r0x01489258;
                    uVar19 = *(undefined8 *)(lVar7 + 0x20 + uVar14 * 8);
                    uVar16 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                    iVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar19,uVar16,0);
                    if (iVar6 != 0) {
                      if (plVar8[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,puVar3 + -0xe8,0);
                      **(undefined8 **)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0xe8);
                      break;
                    }
                    uVar14 = uVar14 + 1;
                    uVar13 = (ulong)*(uint *)(lVar7 + 0x18);
                  } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar8[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],puVar3 + -0xb8,uRam0000000003d575b0);
          if (*(long *)(puVar3 + -0xb8) != 0) {
            *(uint *)(puVar3 + -0x124) = uVar5;
            plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar3 + -0xb8),uRam0000000003d3fe40);
            if (plVar9 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar7 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar14 != 0) {
                piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar17 = piVar17 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar14 & 1) == 0) break;
              lVar7 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar14 != 0) {
                piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar17 = piVar17 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
              if (plVar11 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar11);
                goto code_r0x014892b8;
              }
              lVar7 = plVar11[8];
              if (lVar7 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar14 = 0;
              while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18)) {
                if (*(uint *)(lVar7 + 0x18) <= uVar14) {
                  uVar16 = func_0x00f78b24();
                  func_0x00f78ac0(uVar16,0);
                  goto code_r0x014892b8;
                }
                uVar19 = *(undefined8 *)(lVar7 + uVar14 * 8 + 0x20);
                uVar16 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar19,uVar16,0);
                if ((uVar13 & 1) != 0) {
                  if (plVar8[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,puVar3 + -0xd8,0);
                  lVar7 = plVar8[4];
                  if (lVar7 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar15 = plVar11[4];
                  puVar21 = &UNK_01488c94;
                  puVar4 = puVar3 + -0x130;
                  goto code_r0x0164feb4;
                }
                uVar14 = uVar14 + 1;
                lVar7 = plVar11[8];
                if (lVar7 == 0) goto code_r0x014891e0;
              }
              uVar14 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)(puVar3 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar14 & 1) == 0);
            *(undefined4 *)(puVar3 + (long)*(int *)(puVar3 + -0x124) * 4 + -0x118) = 0x260;
            uVar1 = *(uint *)(puVar3 + -0xf8);
            uVar5 = uVar1 + 1;
            *(uint *)(puVar3 + -0xf8) = uVar5;
            puVar10 = *(undefined8 **)(puVar3 + -0x120);
            if (plVar9 != (long *)0x0) {
              lVar7 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar14 != 0) {
                piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar17 = piVar17 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar12)(plVar9,puVar12[1]);
            }
            if ((uVar5 != 0) && (*(int *)(puVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x260)) {
              *(uint *)(puVar3 + -0xf8) = uVar1;
              uVar5 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar8[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],puVar3 + -0xb8,uRam0000000003d57550);
        if (*(long *)(puVar3 + -0xb8) != 0) {
          *(uint *)(puVar3 + -0x124) = uVar5;
          plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar3 + -0xb8),uRam0000000003d3fe40);
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar7 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar14 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar17 = piVar17 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar14 & 1) == 0) break;
            lVar7 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar14 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar17 = piVar17 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar11 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar11);
              goto code_r0x014892b8;
            }
            iVar6 = 0;
            do {
              uVar16 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar11,iVar6,0);
              uVar19 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
              uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar19,0);
              if ((uVar14 & 1) != 0) {
                if (plVar8[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,puVar3 + -0xd0,0);
                lVar7 = plVar8[4];
                if (lVar7 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar15 = plVar11[6];
                puVar21 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 3);
            uVar14 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)(puVar3 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar14 & 1) == 0);
          *(undefined4 *)(puVar3 + (long)*(int *)(puVar3 + -0x124) * 4 + -0x118) = 0x18d;
          uVar1 = *(uint *)(puVar3 + -0xf8);
          uVar5 = uVar1 + 1;
          *(uint *)(puVar3 + -0xf8) = uVar5;
          puVar10 = *(undefined8 **)(puVar3 + -0x120);
          if (plVar9 != (long *)0x0) {
            lVar7 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar14 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar17 = piVar17 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar12)(plVar9,puVar12[1]);
          }
          if ((uVar5 != 0) && (*(int *)(puVar3 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)(puVar3 + -0xf8) = uVar1;
            uVar5 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar17 = piVar17 + 4;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
code_r0x01489170:
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar18,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar6 == 0) {
code_r0x014891b4:
    return *puVar18;
  }
  if (plVar8[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar18,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555c3c | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_13
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_13(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *extraout_x1;
  long extraout_x1_00;
  int *piVar17;
  long unaff_x19;
  ulong *puVar18;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***unaff_x29;
  undefined1 **ppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_d2 [114];
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_2 == 0) {
    func_0x00f78af4();
    puStack_18 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14;
    puStack_20 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fa4 & 1) == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d22cf8);
      bRam0000000003eb4fa4 = 1;
    }
    if (extraout_x1 != (long *)0x0) {
      uVar16 = (**(code **)(*extraout_x1 + 0x178))
                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x180));
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
      if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
      if ((bRam0000000003eb574c & 1) == 0) {
        func_0x00f78a20(0x3d21270,uVar19,0);
        bRam0000000003eb574c = 1;
      }
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar19);
      return (ulong)(uVar4 ^ 1);
    }
    func_0x00f78af4();
    ppuStack_50 = &puStack_20;
    if (extraout_x1_00 == 0) {
      puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
      uVar15 = func_0x00f78af4();
      return uVar15;
    }
    puVar14 = &uStack_60;
    uStack_60 = 0x3eb4000;
    puStack_48 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
    unaff_x29 = &ppuStack_50;
    unaff_x20 = 0x3eb4000;
    plStack_58 = extraout_x1;
    if ((bRam0000000003eb4954 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb4954 = 1;
    }
    lVar6 = *(long *)(extraout_x1_00 + 0x20);
    if (lVar6 == 0) {
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(extraout_x1_00 + 0x30) != 0) {
      lVar7 = *(long *)(*(long *)(extraout_x1_00 + 0x30) + 0x30);
      puVar3 = &stack0xffffffffffffffc0;
      ppuVar20 = ppuStack_50;
      puVar21 = puStack_48;
      goto code_r0x0164feb4;
    }
    unaff_x30 = &Atlas_UI_LoadoutMetagameData__get_IsLocked;
    auVar22 = func_0x00f78af4();
    uVar16 = auVar22._8_8_;
    param_2 = auVar22._0_8_;
    unaff_x19 = extraout_x1_00;
  }
  else {
    uVar16 = 0;
    puVar14 = (undefined8 *)register0x00000008;
  }
  *(undefined1 ****)((long)puVar14 + -0x10) = unaff_x29;
  *(undefined **)((long)puVar14 + -8) = unaff_x30;
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar6,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
    return (ulong)(uVar4 ^ 1);
  }
  lVar6 = func_0x00f78af4(lVar6,uVar16);
  *(undefined1 **)((long)puVar14 + -0x20) = (undefined1 *)((long)puVar14 + -0x10);
  *(undefined **)((long)puVar14 + -0x18) = &Atlas_UI_LoadoutMetagameData__get_IsNew;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18);
    *(undefined8 *)((long)puVar14 + -0x50) = unaff_x24;
    *(undefined8 *)((long)puVar14 + -0x48) = unaff_x23;
    *(undefined8 *)((long)puVar14 + -0x40) = unaff_x22;
    *(undefined8 *)((long)puVar14 + -0x38) = unaff_x21;
    *(undefined8 *)((long)puVar14 + -0x30) = unaff_x20;
    *(long *)((long)puVar14 + -0x28) = unaff_x19;
    *(undefined8 *)((long)puVar14 + -0x20) = *(undefined8 *)((long)puVar14 + -0x20);
    *(undefined8 *)((long)puVar14 + -0x18) = *(undefined8 *)((long)puVar14 + -0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)puVar14 + -0x68) = 0;
    *(undefined8 *)((long)puVar14 + -0x70) = 0;
    *(undefined8 *)((long)puVar14 + -0x58) = 0;
    *(undefined8 *)((long)puVar14 + -0x60) = 0;
    lVar6 = *(long *)(lVar7 + 0x20);
    if (((lVar6 == 0) || (lVar6 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar6,0), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x38) == 0)) {
      auVar22 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)puVar14 + -0x70),*(long *)(lVar6 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar15 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)puVar14 + -0x70),uRam0000000003d33740);
        if ((uVar15 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)puVar14 + -0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar19 = *(undefined8 *)((long)puVar14 + -0x58);
        uVar15 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)puVar14 + -0x60),uVar16,4,0);
      } while ((uVar15 & 1) == 0);
      *(char *)((long)puVar14 + -0x71) = (char)uVar19;
      lVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)puVar14 + -0x71));
      *(undefined1 *)((long)puVar14 + -0x72) = 2;
      uVar16 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)puVar14 + -0x72));
      auVar22._8_8_ = uVar16;
      auVar22._0_8_ = uVar16;
      if (lVar6 != 0) {
        uVar15 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar6,uVar16,0);
        if ((uVar15 & 1) == 0) {
code_r0x015218ec:
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)puVar14 + -0x70),uRam0000000003d33738);
        return uVar15;
      }
    }
    func_0x00f78af4(auVar22._0_8_,auVar22._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar6 = func_0x00f78af4();
  *(undefined1 **)((long)puVar14 + -0x30) = (undefined1 *)((long)puVar14 + -0x20);
  *(undefined **)((long)puVar14 + -0x28) = &Atlas_UI_LoadoutMetagameData__get_EnableImageMask;
  if (*(long *)(lVar6 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar6 + 0x30) + 0x61);
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)((long)puVar14 + -0x50) = unaff_x20;
  *(long *)((long)puVar14 + -0x48) = unaff_x19;
  *(undefined1 **)((long)puVar14 + -0x40) = (undefined1 *)((long)puVar14 + -0x30);
  *(undefined **)((long)puVar14 + -0x38) = &Atlas_UI_LoadoutMetagameData__get_BackingColour;
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar6 + 0x30) != 0) &&
     (uVar15 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar6 + 0x30),0), *(long *)(uVar15 + 8) != 0)) {
    return uVar15;
  }
  plVar8 = (long *)func_0x00f78af4();
  puVar3 = (undefined1 *)((long)puVar14 + -0x130);
  *(undefined8 *)((long)puVar14 + -0xb0) = unaff_x28;
  *(undefined8 *)((long)puVar14 + -0xa8) = unaff_x27;
  *(undefined8 *)((long)puVar14 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)puVar14 + -0x98) = unaff_x25;
  *(undefined8 *)((long)puVar14 + -0x90) = unaff_x24;
  *(undefined8 *)((long)puVar14 + -0x88) = unaff_x23;
  *(undefined8 *)((long)puVar14 + -0x80) = unaff_x22;
  *(undefined8 *)((long)puVar14 + -0x78) = unaff_x21;
  *(undefined8 *)((long)puVar14 + -0x70) = 0x3eb4000;
  *(long *)((long)puVar14 + -0x68) = lVar6;
  *(undefined1 **)((long)puVar14 + -0x60) = (undefined1 *)((long)puVar14 + -0x40);
  *(undefined **)((long)puVar14 + -0x58) = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  ppuVar20 = (undefined1 **)((long)puVar14 + -0x60);
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  *(undefined8 *)((long)puVar14 + -0xc0) = 0;
  *(undefined8 *)((long)puVar14 + -0xb8) = 0;
  *(undefined8 *)((long)puVar14 + -0xd0) = 0;
  *(undefined8 *)((long)puVar14 + -200) = 0;
  *(undefined8 *)((long)puVar14 + -0xe0) = 0;
  *(undefined8 *)((long)puVar14 + -0xd8) = 0;
  *(undefined8 *)((long)puVar14 + -0xf0) = 0;
  *(undefined8 *)((long)puVar14 + -0xe8) = 0;
  *(undefined4 *)((long)puVar14 + -0xf8) = 0;
  puVar18 = (ulong *)(plVar8 + 5);
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar18,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) goto code_r0x014891b4;
  if (plVar8[3] == 0) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],(undefined1 *)((long)puVar14 + -0xb8),uRam0000000003d57548);
    if (*(long *)((long)puVar14 + -0xb8) == 0) goto code_r0x01489254;
    *(ulong **)((long)puVar14 + -0x120) = puVar18;
    plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)puVar14 + -0xb8),uRam0000000003d3fe40);
    if (plVar9 != (long *)0x0) {
      do {
        lVar6 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar17 = piVar17 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar15 & 1) == 0) break;
        lVar6 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar17 = piVar17 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 != (long *)0x0) {
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar11,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar5 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar5) {
            uVar16 = **(undefined8 **)((long)puVar14 + -0x120);
            goto code_r0x0148868c;
          }
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar16 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar11,iVar5,0);
          uVar19 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
          uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar19,0);
          if ((uVar15 & 1) != 0) break;
          iVar5 = iVar5 + 1;
        }
        if (plVar8[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,(undefined1 *)((long)puVar14 + -0xc0),0);
        if (plVar8[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],plVar11[6],(undefined1 *)((long)puVar14 + -200),0);
        uVar16 = /*System.String$$Format*/ func_0x029bc688(*(undefined8 *)((long)puVar14 + -0xc0),
                                 *(undefined8 *)((long)puVar14 + -200),0);
        **(undefined8 **)((long)puVar14 + -0x120) = uVar16;
code_r0x0148868c:
        uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar15 & 1) == 0);
      *(undefined4 *)((long)puVar14 + -0x118) = 199;
      *(undefined4 *)((long)puVar14 + -0xf8) = 1;
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar17 = piVar17 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      if (*(int *)((long)puVar14 + -0x118) == 199) {
        *(undefined4 *)((long)puVar14 + -0xf8) = 0;
      }
      uVar4 = (uint)(*(int *)((long)puVar14 + -0x118) != 199);
      puVar10 = *(undefined8 **)((long)puVar14 + -0x120);
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 == 0) {
code_r0x01488a60:
        iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        if (iVar5 == 0) {
code_r0x01488d78:
          iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          if (iVar5 == 0) {
code_r0x01488eb4:
            puVar18 = *(ulong **)((long)puVar14 + -0x120);
            iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar18,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            if (iVar5 == 0) goto code_r0x01489170;
            if (plVar8[3] != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],(undefined1 *)((long)puVar14 + -0xb8),uRam0000000003d57590);
              if (*(long *)((long)puVar14 + -0xb8) != 0) {
                plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)puVar14 + -0xb8),
                                                 uRam0000000003d3fe40);
                if (plVar9 == (long *)0x0) {
                  func_0x00f78af4();
                }
                else {
                  do {
                    lVar6 = *plVar9;
                    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
                    if (uVar15 != 0) {
                      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                          puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                          goto code_r0x01488f88;
                        }
                        piVar17 = piVar17 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
                    uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    if ((uVar15 & 1) == 0) {
                      *(undefined4 *)((long)puVar14 + (long)(int)uVar4 * 4 + -0x118) = 0x378;
                      *(int *)((long)puVar14 + -0xf8) = *(int *)((long)puVar14 + -0xf8) + 1;
                      puVar18 = *(ulong **)((long)puVar14 + -0x120);
                      if (plVar9 == (long *)0x0) goto code_r0x01489170;
                      lVar6 = *plVar9;
                      uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
                      if (uVar15 == 0) goto code_r0x01489144;
                      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      goto code_r0x0148912c;
                    }
                    lVar6 = *plVar9;
                    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
                    if (uVar15 != 0) {
                      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                          puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                          goto code_r0x01488fe4;
                        }
                        piVar17 = piVar17 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
                    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    if (plVar11 == (long *)0x0) {
                      func_0x00f78af4();
                      goto code_r0x014892b8;
                    }
                    if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
                       (*(long *)(*(long *)(*plVar11 + 200) +
                                  (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                        /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
                      func_0x00f78e5c(plVar11);
                      goto code_r0x014892b8;
                    }
                    lVar6 = plVar11[4];
                    uVar16 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                    uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar6,uVar16,0);
                  } while ((uVar15 & 1) == 0);
                  if (plVar8[4] == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,
                                    (undefined1 *)((long)puVar14 + -0xf0),0);
                    lVar6 = plVar8[4];
                    if (lVar6 != 0) {
                      lVar7 = plVar11[7];
                      puVar3 = (undefined1 *)((long)puVar14 + -0x130);
                      puVar21 = &UNK_014890b0;
code_r0x0164feb4:
                      *(undefined1 ***)(puVar3 + -0x10) = ppuVar20;
                      *(undefined **)(puVar3 + -8) = puVar21;
                      *(undefined8 *)(puVar3 + -0x18) = 0;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar6,lVar7,puVar3 + -0x18);
                      return *(ulong *)(puVar3 + -0x18);
                    }
                    func_0x00f78af4();
                  }
                }
                goto code_r0x014892b8;
              }
            }
          }
          else {
            lVar6 = plVar8[3];
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
            if (lVar6 != 0) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar6,uVar16,(undefined1 *)((long)puVar14 + -0xe0),
                              uRam0000000003d574e0);
              if ((*(long *)((long)puVar14 + -0xe0) != 0) &&
                 (lVar6 = *(long *)(*(long *)((long)puVar14 + -0xe0) + 0x28), lVar6 != 0)) {
                if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
                  uVar15 = 0;
                  uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                  do {
                    if (uVar13 <= uVar15) goto code_r0x01489258;
                    uVar19 = *(undefined8 *)(lVar6 + 0x20 + uVar15 * 8);
                    uVar16 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180))
                    ;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                    iVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar19,uVar16,0);
                    if (iVar5 != 0) {
                      if (plVar8[4] == 0) goto code_r0x01489254;
                      /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,
                                      (undefined1 *)((long)puVar14 + -0xe8),0);
                      **(undefined8 **)((long)puVar14 + -0x120) =
                           *(undefined8 *)((long)puVar14 + -0xe8);
                      break;
                    }
                    uVar15 = uVar15 + 1;
                    uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
                  } while ((long)uVar15 < (long)(int)*(uint *)(lVar6 + 0x18));
                }
                goto code_r0x01488eb4;
              }
            }
          }
        }
        else if (plVar8[3] != 0) {
          /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],(undefined1 *)((long)puVar14 + -0xb8),uRam0000000003d575b0);
          if (*(long *)((long)puVar14 + -0xb8) != 0) {
            *(uint *)((long)puVar14 + -0x124) = uVar4;
            plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)puVar14 + -0xb8),uRam0000000003d3fe40);
            if (plVar9 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            do {
              lVar6 = *plVar9;
              uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                    goto code_r0x01488b30;
                  }
                  piVar17 = piVar17 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
              uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar15 & 1) == 0) break;
              lVar6 = *plVar9;
              uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                    goto code_r0x01488b8c;
                  }
                  piVar17 = piVar17 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
              plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
              if (plVar11 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
                func_0x00f78e5c(plVar11);
                goto code_r0x014892b8;
              }
              lVar6 = plVar11[8];
              if (lVar6 == 0) {
code_r0x014891e0:
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar15 = 0;
              while ((long)uVar15 < (long)(int)*(uint *)(lVar6 + 0x18)) {
                if (*(uint *)(lVar6 + 0x18) <= uVar15) {
                  uVar16 = func_0x00f78b24();
                  func_0x00f78ac0(uVar16,0);
                  goto code_r0x014892b8;
                }
                uVar19 = *(undefined8 *)(lVar6 + uVar15 * 8 + 0x20);
                uVar16 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
                uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar19,uVar16,0);
                if ((uVar13 & 1) != 0) {
                  if (plVar8[4] == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,
                                  (undefined1 *)((long)puVar14 + -0xd8),0);
                  lVar6 = plVar8[4];
                  if (lVar6 == 0) {
                    func_0x00f78af4();
                    goto code_r0x014892b8;
                  }
                  lVar7 = plVar11[4];
                  puVar3 = (undefined1 *)((long)puVar14 + -0x130);
                  puVar21 = &UNK_01488c94;
                  goto code_r0x0164feb4;
                }
                uVar15 = uVar15 + 1;
                lVar6 = plVar11[8];
                if (lVar6 == 0) goto code_r0x014891e0;
              }
              uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)puVar14 + -0x120),
                                       **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
            } while ((uVar15 & 1) == 0);
            *(undefined4 *)((long)puVar14 + (long)*(int *)((long)puVar14 + -0x124) * 4 + -0x118) =
                 0x260;
            uVar1 = *(uint *)((long)puVar14 + -0xf8);
            uVar4 = uVar1 + 1;
            *(uint *)((long)puVar14 + -0xf8) = uVar4;
            puVar10 = *(undefined8 **)((long)puVar14 + -0x120);
            if (plVar9 != (long *)0x0) {
              lVar6 = *plVar9;
              uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar12 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                    goto code_r0x01488d48;
                  }
                  piVar17 = piVar17 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
              (*(code *)*puVar12)(plVar9,puVar12[1]);
            }
            if ((uVar4 != 0) && (*(int *)((long)puVar14 + (long)(int)uVar1 * 4 + -0x118) == 0x260))
            {
              *(uint *)((long)puVar14 + -0xf8) = uVar1;
              uVar4 = uVar1;
            }
            goto code_r0x01488d78;
          }
        }
      }
      else if (plVar8[3] != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],(undefined1 *)((long)puVar14 + -0xb8),uRam0000000003d57550);
        if (*(long *)((long)puVar14 + -0xb8) != 0) {
          *(uint *)((long)puVar14 + -0x124) = uVar4;
          plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)((long)puVar14 + -0xb8),uRam0000000003d3fe40);
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          do {
            lVar6 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x0148882c;
                }
                piVar17 = piVar17 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
            uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar15 & 1) == 0) break;
            lVar6 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar10 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x01488888;
                }
                piVar17 = piVar17 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
            plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(*plVar11 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
                /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              func_0x00f78e5c(plVar11);
              goto code_r0x014892b8;
            }
            iVar5 = 0;
            do {
              uVar16 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar11,iVar5,0);
              uVar19 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
              uVar15 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar16,uVar19,0);
              if ((uVar15 & 1) != 0) {
                if (plVar8[4] == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,(undefined1 *)((long)puVar14 + -0xd0)
                                ,0);
                lVar6 = plVar8[4];
                if (lVar6 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014892b8;
                }
                lVar7 = plVar11[6];
                puVar21 = &UNK_0148897c;
                goto code_r0x0164feb4;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 != 3);
            uVar15 = /*System.String$$op_Inequality*/ func_0x029bd9d4(**(undefined8 **)((long)puVar14 + -0x120),
                                     **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
          } while ((uVar15 & 1) == 0);
          *(undefined4 *)((long)puVar14 + (long)*(int *)((long)puVar14 + -0x124) * 4 + -0x118) =
               0x18d;
          uVar1 = *(uint *)((long)puVar14 + -0xf8);
          uVar4 = uVar1 + 1;
          *(uint *)((long)puVar14 + -0xf8) = uVar4;
          puVar10 = *(undefined8 **)((long)puVar14 + -0x120);
          if (plVar9 != (long *)0x0) {
            lVar6 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar12 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x01488a30;
                }
                piVar17 = piVar17 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
            (*(code *)*puVar12)(plVar9,puVar12[1]);
          }
          if ((uVar4 != 0) && (*(int *)((long)puVar14 + (long)(int)uVar1 * 4 + -0x118) == 0x18d)) {
            *(uint *)((long)puVar14 + -0xf8) = uVar1;
            uVar4 = uVar1;
          }
          goto code_r0x01488a60;
        }
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar17 = piVar17 + 4;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar14 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar14)(plVar9,puVar14[1]);
code_r0x01489170:
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar18,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) {
code_r0x014891b4:
    return *puVar18;
  }
  if (plVar8[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar18,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555c58 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_14
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_14(undefined8 param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long extraout_x1;
  int *piVar16;
  ulong *puVar17;
  undefined1 **ppuVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_180 [12];
  uint uStack_174;
  ulong *puStack_170;
  int aiStack_168 [8];
  uint uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  long alStack_130 [6];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_38;
  
  ppuVar18 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4fa4 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22cf8);
    bRam0000000003eb4fa4 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar13 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar13,0);
    if (((*(ushort *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.KartSelectScreen_TypeInfo*/ lRam0000000003d22cf8 + 0xb8) + 0x10);
    if ((bRam0000000003eb574c & 1) == 0) {
      func_0x00f78a20(0x3d21270,uVar15,0);
      bRam0000000003eb574c = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar13,uVar15);
    return (ulong)(uVar5 ^ 1);
  }
  func_0x00f78af4();
  if (extraout_x1 == 0) {
    uVar12 = func_0x00f78af4();
    return uVar12;
  }
  puStack_38 = &Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15;
  if ((bRam0000000003eb4954 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0,0);
    bRam0000000003eb4954 = 1;
  }
  lVar6 = *(long *)(extraout_x1 + 0x20);
  if (lVar6 == 0) {
    return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  if (*(long *)(extraout_x1 + 0x30) != 0) {
    lVar14 = *(long *)(*(long *)(extraout_x1 + 0x30) + 0x30);
    puVar3 = &stack0xffffffffffffffd0;
    goto code_r0x0164feb4;
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x10) == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar6 + 0x10),*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18),
                            0);
    return (ulong)(uVar5 ^ 1);
  }
  lVar6 = func_0x00f78af4();
  lVar14 = *(long *)(lVar6 + 0x10);
  if (lVar14 == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    lStack_b8 = 0;
    uStack_c0 = 0;
    puStack_a8 = (undefined *)0x0;
    puStack_b0 = (undefined1 *)0x0;
    lVar6 = *(long *)(lVar14 + 0x20);
    if (((lVar6 == 0) || (lVar6 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar6,0), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x38) == 0)) {
      auVar19 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_c0,*(long *)(lVar6 + 0x38),uRam0000000003d3d950);
      do {
        uVar12 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_c0,uRam0000000003d33740);
        if ((uVar12 & 1) == 0) goto code_r0x015218ec;
        if (puStack_b0 == (undefined1 *)0x0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar12 = /*System.String$$Equals*/ func_0x029caa48(puStack_b0,uVar13,4,0);
      } while ((uVar12 & 1) == 0);
      lVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff3f);
      uVar13 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff3e);
      auVar19._8_8_ = uVar13;
      auVar19._0_8_ = uVar13;
      if (lVar6 != 0) {
        uVar12 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar6,uVar13,0);
        if ((uVar12 & 1) == 0) {
code_r0x015218ec:
          uVar12 = 0;
        }
        else {
          uVar12 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_c0,uRam0000000003d33738);
        return uVar12;
      }
    }
    func_0x00f78af4(auVar19._0_8_,auVar19._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar6 + 0x30) + 0x61);
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar6 + 0x30) != 0) &&
     (uVar12 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar6 + 0x30),0), *(long *)(uVar12 + 8) != 0)) {
    return uVar12;
  }
  plVar7 = (long *)func_0x00f78af4();
  puVar3 = auStack_180;
  uStack_c0 = 0x3eb4000;
  puStack_a8 = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  ppuVar18 = &puStack_b0;
  lStack_b8 = lVar6;
  puStack_b0 = &stack0xffffffffffffff70;
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  alStack_130[4] = 0;
  alStack_130[5] = 0;
  alStack_130[2] = 0;
  alStack_130[3] = 0;
  alStack_130[0] = 0;
  alStack_130[1] = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  puVar17 = (ulong *)(plVar7 + 5);
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar4 == 0) goto code_r0x014891b4;
  if ((plVar7[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_130 + 5,uRam0000000003d57548), alStack_130[5] == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar13 = func_0x00f78b24();
    func_0x00f78ac0(uVar13,0);
  }
  else {
    puStack_170 = puVar17;
    plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_130[5],uRam0000000003d3fe40);
    if (plVar8 != (long *)0x0) {
      do {
        lVar6 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar16 = piVar16 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) break;
        lVar6 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar16 = piVar16 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 != (long *)0x0) {
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar10,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar4 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar4) {
            uVar12 = *puStack_170;
            goto code_r0x0148868c;
          }
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar13 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar10,iVar4,0);
          uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
          uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar13,uVar15,0);
          if ((uVar12 & 1) != 0) break;
          iVar4 = iVar4 + 1;
        }
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,alStack_130 + 4,0);
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],plVar10[6],alStack_130 + 3,0);
        uVar12 = /*System.String$$Format*/ func_0x029bc688(alStack_130[4],alStack_130[3],0);
        *puStack_170 = uVar12;
code_r0x0148868c:
        uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar12,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar12 & 1) == 0);
      aiStack_168[0] = 199;
      uStack_148 = 1;
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar16 = piVar16 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      puVar17 = puStack_170;
      if (aiStack_168[0] == 199) {
        uStack_148 = 0;
      }
      uVar5 = (uint)(aiStack_168[0] != 199);
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_170,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_130 + 5,uRam0000000003d57550), alStack_130[5] == 0))
        goto code_r0x01489254;
        uStack_174 = uVar5;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_130[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar16 = piVar16 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar12 & 1) == 0) break;
          lVar6 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar16 = piVar16 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          iVar4 = 0;
          do {
            uVar13 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar10,iVar4,0);
            uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar13,uVar15,0);
            if ((uVar12 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,alStack_130 + 2,0);
              lVar6 = plVar7[4];
              if (lVar6 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar14 = plVar10[6];
              puStack_38 = &UNK_0148897c;
              goto code_r0x0164feb4;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
          uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_170,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar12 & 1) == 0);
        puVar17 = puStack_170;
        aiStack_168[(int)uStack_174] = 0x18d;
        uVar1 = uStack_148;
        uVar5 = uStack_148 + 1;
        uStack_148 = uVar5;
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar16 = piVar16 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar5 != 0) && (aiStack_168[(int)uVar1] == 0x18d)) {
          uVar5 = uVar1;
          uStack_148 = uVar1;
        }
      }
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_130 + 5,uRam0000000003d575b0), alStack_130[5] == 0))
        goto code_r0x01489254;
        uStack_174 = uVar5;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_130[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar16 = piVar16 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar12 & 1) == 0) break;
          lVar6 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar16 = piVar16 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          lVar6 = plVar10[8];
          if (lVar6 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar12 = 0;
          while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18)) {
            if (*(uint *)(lVar6 + 0x18) <= uVar12) {
              uVar13 = func_0x00f78b24();
              func_0x00f78ac0(uVar13,0);
              goto code_r0x014892b8;
            }
            uVar15 = *(undefined8 *)(lVar6 + uVar12 * 8 + 0x20);
            uVar13 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar13,0);
            uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar13,0);
            if ((uVar11 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,alStack_130 + 1,0);
              lVar6 = plVar7[4];
              if (lVar6 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar14 = plVar10[4];
              puStack_38 = &UNK_01488c94;
              puVar3 = auStack_180;
              goto code_r0x0164feb4;
            }
            uVar12 = uVar12 + 1;
            lVar6 = plVar10[8];
            if (lVar6 == 0) goto code_r0x014891e0;
          }
          uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_170,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar12 & 1) == 0);
        puVar17 = puStack_170;
        aiStack_168[(int)uStack_174] = 0x260;
        uVar1 = uStack_148;
        uVar5 = uStack_148 + 1;
        uStack_148 = uVar5;
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar16 = piVar16 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar5 != 0) && (aiStack_168[(int)uVar1] == 0x260)) {
          uVar5 = uVar1;
          uStack_148 = uVar1;
        }
      }
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 != 0) {
        lVar6 = plVar7[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar6 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar6,uVar13,alStack_130,uRam0000000003d574e0), alStack_130[0] == 0))
           || (lVar6 = *(long *)(alStack_130[0] + 0x28), lVar6 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar12 = 0;
          uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar12) goto code_r0x01489258;
            uVar15 = *(undefined8 *)(lVar6 + 0x20 + uVar12 * 8);
            uVar13 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar13,0);
            iVar4 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar13,0);
            if (iVar4 != 0) {
              if (plVar7[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&uStack_138,0);
              *puStack_170 = uStack_138;
              break;
            }
            uVar12 = uVar12 + 1;
            uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
      }
      puVar17 = puStack_170;
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_170,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 == 0) goto code_r0x01489170;
      if ((plVar7[3] != 0) &&
         (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_130 + 5,uRam0000000003d57590), alStack_130[5] != 0)) {
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_130[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
        }
        else {
          do {
            lVar6 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar12 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488f88;
                }
                piVar16 = piVar16 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
            uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            puVar17 = puStack_170;
            if ((uVar12 & 1) == 0) {
              aiStack_168[(int)uVar5] = 0x378;
              uStack_148 = uStack_148 + 1;
              if (plVar8 == (long *)0x0) goto code_r0x01489170;
              lVar6 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar12 == 0) goto code_r0x01489144;
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto code_r0x0148912c;
            }
            lVar6 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar12 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488fe4;
                }
                piVar16 = piVar16 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
            plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
            if (plVar10 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
               (*(long *)(*(long *)(*plVar10 + 200) +
                          (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
              func_0x00f78e5c(plVar10);
              goto code_r0x014892b8;
            }
            lVar6 = plVar10[4];
            uVar13 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar13,0);
            uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar6,uVar13,0);
          } while ((uVar12 & 1) == 0);
          if (plVar7[4] == 0) {
            func_0x00f78af4();
          }
          else {
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_140,0);
            lVar6 = plVar7[4];
            if (lVar6 != 0) {
              lVar14 = plVar10[7];
              puStack_38 = &UNK_014890b0;
              puVar3 = auStack_180;
code_r0x0164feb4:
              *(undefined1 ***)(puVar3 + -0x10) = ppuVar18;
              *(undefined **)(puVar3 + -8) = puStack_38;
              *(undefined8 *)(puVar3 + -0x18) = 0;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar6,lVar14,puVar3 + -0x18);
              return *(ulong *)(puVar3 + -0x18);
            }
            func_0x00f78af4();
          }
        }
        goto code_r0x014892b8;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar16 = piVar16 + 4;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
code_r0x01489170:
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar4 == 0) {
code_r0x014891b4:
    return *puVar17;
  }
  if (plVar7[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar17,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1555d28 | Atlas.UI.Screens.KartSelectScreen.<>c.<SetupData>b__31_15
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_Screens_KartSelectScreen___c___SetupData_b__31_15(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong *puVar17;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar18 [16];
  undefined1 auStack_150 [12];
  uint uStack_144;
  ulong *puStack_140;
  int aiStack_138 [8];
  uint uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long alStack_100 [6];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  if (param_2 == 0) {
    uVar13 = func_0x00f78af4();
    return uVar13;
  }
  if ((bRam0000000003eb4954 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0,0);
    bRam0000000003eb4954 = 1;
  }
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar14 = *(long *)(*(long *)(param_2 + 0x30) + 0x30);
    puVar3 = (undefined1 *)register0x00000008;
    goto code_r0x0164feb4;
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x10) == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar6 + 0x10),*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18),
                            0);
    return (ulong)(uVar4 ^ 1);
  }
  lVar6 = func_0x00f78af4();
  lVar14 = *(long *)(lVar6 + 0x10);
  if (lVar14 == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    lStack_88 = 0;
    uStack_90 = 0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined1 *)0x0;
    lVar6 = *(long *)(lVar14 + 0x20);
    if (((lVar6 == 0) || (lVar6 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar6,0), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x38) == 0)) {
      auVar18 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_90,*(long *)(lVar6 + 0x38),uRam0000000003d3d950);
      do {
        uVar13 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_90,uRam0000000003d33740);
        if ((uVar13 & 1) == 0) goto code_r0x015218ec;
        if (puStack_80 == (undefined1 *)0x0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar13 = /*System.String$$Equals*/ func_0x029caa48(puStack_80,uVar15,4,0);
      } while ((uVar13 & 1) == 0);
      lVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff6f);
      uVar15 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff6e);
      auVar18._8_8_ = uVar15;
      auVar18._0_8_ = uVar15;
      if (lVar6 != 0) {
        uVar13 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar6,uVar15,0);
        if ((uVar13 & 1) == 0) {
code_r0x015218ec:
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_90,uRam0000000003d33738);
        return uVar13;
      }
    }
    func_0x00f78af4(auVar18._0_8_,auVar18._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar6 + 0x30) + 0x61);
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar6 + 0x30) != 0) &&
     (uVar13 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar6 + 0x30),0), *(long *)(uVar13 + 8) != 0)) {
    return uVar13;
  }
  plVar7 = (long *)func_0x00f78af4();
  puVar3 = auStack_150;
  uStack_90 = 0x3eb4000;
  puStack_78 = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  unaff_x29 = &puStack_80;
  lStack_88 = lVar6;
  puStack_80 = &stack0xffffffffffffffa0;
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  alStack_100[4] = 0;
  alStack_100[5] = 0;
  alStack_100[2] = 0;
  alStack_100[3] = 0;
  alStack_100[0] = 0;
  alStack_100[1] = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  puVar17 = (ulong *)(plVar7 + 5);
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) goto code_r0x014891b4;
  if ((plVar7[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d57548), alStack_100[5] == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
  }
  else {
    puStack_140 = puVar17;
    plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
    if (plVar8 != (long *)0x0) {
      do {
        lVar6 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar16 = piVar16 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) break;
        lVar6 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar16 = piVar16 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 != (long *)0x0) {
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar10,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar5 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar5) {
            uVar13 = *puStack_140;
            goto code_r0x0148868c;
          }
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar15 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar10,iVar5,0);
          uVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
          uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar11,0);
          if ((uVar13 & 1) != 0) break;
          iVar5 = iVar5 + 1;
        }
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,alStack_100 + 4,0);
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],plVar10[6],alStack_100 + 3,0);
        uVar13 = /*System.String$$Format*/ func_0x029bc688(alStack_100[4],alStack_100[3],0);
        *puStack_140 = uVar13;
code_r0x0148868c:
        uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar13 & 1) == 0);
      aiStack_138[0] = 199;
      uStack_118 = 1;
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar16 = piVar16 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      puVar17 = puStack_140;
      if (aiStack_138[0] == 199) {
        uStack_118 = 0;
      }
      uVar4 = (uint)(aiStack_138[0] != 199);
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d57550), alStack_100[5] == 0))
        goto code_r0x01489254;
        uStack_144 = uVar4;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) break;
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          iVar5 = 0;
          do {
            uVar15 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar10,iVar5,0);
            uVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar11,0);
            if ((uVar13 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,alStack_100 + 2,0);
              lVar6 = plVar7[4];
              if (lVar6 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar14 = plVar10[6];
              unaff_x30 = &UNK_0148897c;
              goto code_r0x0164feb4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 3);
          uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar13 & 1) == 0);
        puVar17 = puStack_140;
        aiStack_138[(int)uStack_144] = 0x18d;
        uVar1 = uStack_118;
        uVar4 = uStack_118 + 1;
        uStack_118 = uVar4;
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar4 != 0) && (aiStack_138[(int)uVar1] == 0x18d)) {
          uVar4 = uVar1;
          uStack_118 = uVar1;
        }
      }
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d575b0), alStack_100[5] == 0))
        goto code_r0x01489254;
        uStack_144 = uVar4;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) break;
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          lVar6 = plVar10[8];
          if (lVar6 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar13 = 0;
          while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18)) {
            if (*(uint *)(lVar6 + 0x18) <= uVar13) {
              uVar15 = func_0x00f78b24();
              func_0x00f78ac0(uVar15,0);
              goto code_r0x014892b8;
            }
            uVar11 = *(undefined8 *)(lVar6 + uVar13 * 8 + 0x20);
            uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar15,0);
            if ((uVar12 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,alStack_100 + 1,0);
              lVar6 = plVar7[4];
              if (lVar6 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar14 = plVar10[4];
              unaff_x30 = &UNK_01488c94;
              puVar3 = auStack_150;
              goto code_r0x0164feb4;
            }
            uVar13 = uVar13 + 1;
            lVar6 = plVar10[8];
            if (lVar6 == 0) goto code_r0x014891e0;
          }
          uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar13 & 1) == 0);
        puVar17 = puStack_140;
        aiStack_138[(int)uStack_144] = 0x260;
        uVar1 = uStack_118;
        uVar4 = uStack_118 + 1;
        uStack_118 = uVar4;
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar4 != 0) && (aiStack_138[(int)uVar1] == 0x260)) {
          uVar4 = uVar1;
          uStack_118 = uVar1;
        }
      }
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        lVar6 = plVar7[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar6 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar6,uVar15,alStack_100,uRam0000000003d574e0), alStack_100[0] == 0))
           || (lVar6 = *(long *)(alStack_100[0] + 0x28), lVar6 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar13 = 0;
          uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar13) goto code_r0x01489258;
            uVar11 = *(undefined8 *)(lVar6 + 0x20 + uVar13 * 8);
            uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            iVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar15,0);
            if (iVar5 != 0) {
              if (plVar7[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&uStack_108,0);
              *puStack_140 = uStack_108;
              break;
            }
            uVar13 = uVar13 + 1;
            uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
      }
      puVar17 = puStack_140;
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 == 0) goto code_r0x01489170;
      if ((plVar7[3] != 0) &&
         (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d57590), alStack_100[5] != 0)) {
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
        }
        else {
          do {
            lVar6 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488f88;
                }
                piVar16 = piVar16 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
            uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            puVar17 = puStack_140;
            if ((uVar13 & 1) == 0) {
              aiStack_138[(int)uVar4] = 0x378;
              uStack_118 = uStack_118 + 1;
              if (plVar8 == (long *)0x0) goto code_r0x01489170;
              lVar6 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar13 == 0) goto code_r0x01489144;
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto code_r0x0148912c;
            }
            lVar6 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488fe4;
                }
                piVar16 = piVar16 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
            plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
            if (plVar10 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
               (*(long *)(*(long *)(*plVar10 + 200) +
                          (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
              func_0x00f78e5c(plVar10);
              goto code_r0x014892b8;
            }
            lVar6 = plVar10[4];
            uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar6,uVar15,0);
          } while ((uVar13 & 1) == 0);
          if (plVar7[4] == 0) {
            func_0x00f78af4();
          }
          else {
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_110,0);
            lVar6 = plVar7[4];
            if (lVar6 != 0) {
              lVar14 = plVar10[7];
              unaff_x30 = &UNK_014890b0;
              puVar3 = auStack_150;
code_r0x0164feb4:
              *(undefined1 ***)(puVar3 + -0x10) = unaff_x29;
              *(undefined **)(puVar3 + -8) = unaff_x30;
              *(undefined8 *)(puVar3 + -0x18) = 0;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar6,lVar14,puVar3 + -0x18);
              return *(ulong *)(puVar3 + -0x18);
            }
            func_0x00f78af4();
          }
        }
        goto code_r0x014892b8;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar16 = piVar16 + 4;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
code_r0x01489170:
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) {
code_r0x014891b4:
    return *puVar17;
  }
  if (plVar7[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar17,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



