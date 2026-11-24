// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.SeasonsManager

// ============================================================
// RVA: 0x14ef730 | Atlas.Stats.SeasonsManager.GetRewardThreshold
// ============================================================

ulong Atlas_Stats_SeasonsManager__GetRewardThreshold(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar8;
  undefined8 unaff_x25;
  long *plVar9;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x50), lVar6 == 0)) {
      func_0x00f78af4();
    }
    else if (param_2 < *(uint *)(lVar6 + 0x18)) {
      return (ulong)*(uint *)(lVar6 + (long)(int)param_2 * 4 + 0x20);
    }
    uVar2 = func_0x00f78b24();
    lVar6 = func_0x00f78ac0(uVar2,0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) =
         Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = *(long *)(lVar6 + 0x50);
    if (param_1 == 0) break;
    param_2 = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) - 1;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d247f0;
  *(long *)((long)register0x00000008 + -0x58) = lVar6;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(ulong *)(lVar3 + 0x30) != 0) {
    return *(ulong *)(lVar3 + 0x30);
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x30);
    uVar4 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(uVar4,uVar2,0);
    *(ulong *)(lVar3 + 0x30) = uVar4;
    return uVar4;
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(long *)((long)register0x00000008 + -0x88) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x78) = Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(ulong *)(lVar6 + 0x38) != 0) {
    return *(ulong *)(lVar6 + 0x38);
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x50);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(uVar4,uVar2,uVar7,0,0);
    *(ulong *)(lVar6 + 0x38) = uVar4;
    return uVar4;
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -200) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  *(long *)((long)register0x00000008 + -0xb8) = lVar6;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(code **)((long)register0x00000008 + -0xa8) = Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar3 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x58), lVar6 != 0)) {
    uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar6 + 0x18),0);
    lVar6 = *(long *)(lVar3 + 0x40);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_014efa98;
      lVar8 = (long)(int)uVar1;
      if (*(long *)(lVar6 + lVar8 * 8 + 0x20) != 0) {
LAB_014efa68:
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          return *(ulong *)(lVar6 + lVar8 * 8 + 0x20);
        }
        goto LAB_014efa98;
      }
      if ((*(long *)(lVar3 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x58), lVar6 != 0)) {
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + lVar8 * 8 + 0x20);
        if (lVar6 != 0) {
          uVar2 = *(undefined8 *)(lVar6 + 0x18);
          plVar9 = *(long **)(lVar3 + 0x40);
          uVar7 = *(undefined8 *)(lVar3 + 0x28);
          lVar6 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar6,uVar2,uVar7,0,0);
          if (plVar9 != (long *)0x0) {
            if ((lVar6 != 0) &&
               (lVar5 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
            goto LAB_014efaa4;
            if (*(uint *)(plVar9 + 3) <= uVar1) goto LAB_014efa98;
            plVar9[lVar8 + 4] = lVar6;
            lVar6 = *(long *)(lVar3 + 0x40);
            if (lVar6 != 0) goto LAB_014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_014efa98:
  uVar2 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar2,0);
LAB_014efaa4:
    uVar2 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14efc88 | Atlas.Stats.SeasonsManager.GetStarsForSeason
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14efe8c | Atlas.Stats.SeasonsManager.IsSeasonActive
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14f017c | Atlas.Stats.SeasonsManager.GetActiveDateRange
// ============================================================

/* WARNING: Possible PIC construction at 0x014f0318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016bc660) */
/* WARNING: Removing unreachable block (ram,0x016bc66c) */
/* WARNING: Removing unreachable block (ram,0x016bc674) */
/* WARNING: Removing unreachable block (ram,0x014f031c) */
/* WARNING: Removing unreachable block (ram,0x014f0324) */
/* WARNING: Removing unreachable block (ram,0x014f0374) */
/* WARNING: Removing unreachable block (ram,0x014f038c) */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

undefined1  [16] Atlas_Stats_SeasonsManager__GetActiveDateRange(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong *puVar4;
  undefined4 uVar5;
  long lVar7;
  long lVar8;
  int iVar6;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  int iVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  int *piVar20;
  long *plVar21;
  uint uVar22;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  long lVar23;
  undefined1 ****ppppuVar24;
  undefined *puVar25;
  undefined4 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uStack_168;
  code *pcStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if ((bRam0000000003eb4c7f & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    bRam0000000003eb4c7f = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                      (*(long *)(param_1 + 0x28),0);
    if (*(long *)(lVar7 + 8) != 0) {
      Atlas_Definitions_SeasonRotationHelper__GetSeasonDefinitions
                (*(undefined8 *)(*(long *)(lVar7 + 8) + 0x30));
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                          (*(long *)(param_1 + 0x28),0);
        if ((*(long *)(lVar7 + 8) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
          iVar6 = *(int *)(*(long *)(lVar7 + 8) + 0x20);
          lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                            (*(long *)(param_1 + 0x28),0);
          if (*(long *)(lVar7 + 8) != 0) {
            pcStack_58 = (code *)Atlas_Definitions_SeasonsRotationDefinition__get_StartDate();
            if (*(long *)(param_1 + 0x28) != 0) {
              lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                (*(long *)(param_1 + 0x28),0);
              if (*(long *)(lVar7 + 8) != 0) {
                iVar17 = *(int *)(*(long *)(lVar7 + 8) + 0x24);
                uVar18 = *(undefined8 *)(param_1 + 0x38);
                if (iVar6 == 3) {
Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange:
                  if ((bRam0000000003eb4c76 & 1) == 0) {
                    func_0x00f78a20(0x3d21060);
                    bRam0000000003eb4c76 = 1;
                  }
                  iVar6 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffffb8,0);
                  iVar6 = iVar6 + 1;
                  uVar14 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffb8,0);
                  if (0xc < iVar6) {
                    iVar6 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffb8,0);
                    uVar14 = (ulong)(iVar6 + 1);
                    iVar6 = 1;
                  }
                  uVar18 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffffb8,0);
                  uVar10 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffb8,0);
                  auVar30._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  Atlas_Definitions_Date___ctor(auVar30._0_8_,1,uVar18,uVar10,0);
                  uVar18 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  Atlas_Definitions_Date___ctor(uVar18,1,iVar6,uVar14,0);
                  auVar30._8_8_ = uVar18;
                  return auVar30;
                }
                if (iVar6 != 2) {
                  if (iVar6 != 1) goto Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange;
                  iVar17 = 1;
                }
                if ((bRam0000000003eb4c77 & 1) == 0) {
                  func_0x00f78a20(0x3d21070);
                  func_0x00f78a20(0x3d21060);
                  bRam0000000003eb4c77 = 1;
                }
                puStack_60 = (undefined1 *)0x0;
                uVar10 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&pcStack_58,0);
                uVar11 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&pcStack_58,0);
                uVar12 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&pcStack_58,0);
                /*System.DateTime$$.ctor*/ func_0x02a8c93c(&puStack_60,uVar10,uVar11,uVar12,0);
                puVar13 = puStack_60;
                if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lStack_68 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar18,puVar13,0);
                iVar6 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&lStack_68,0);
                dVar27 = (double)(iVar17 * 7);
                while (iVar17 * 7 < iVar6) {
                  puVar13 = (undefined1 *)/*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar27,&puStack_60,0);
                  puStack_60 = puVar13;
                  if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lStack_68 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar18,puVar13,0);
                  iVar6 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&lStack_68,0);
                }
                uVar18 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&puStack_60,0);
                uVar10 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&puStack_60,0);
                uVar11 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&puStack_60,0);
                auVar28._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                Atlas_Definitions_Date___ctor(auVar28._0_8_,uVar18,uVar10,uVar11,0);
                puStack_60 = (undefined1 *)/*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar27,&puStack_60,0);
                uVar18 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&puStack_60,0);
                uVar10 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&puStack_60,0);
                uVar11 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&puStack_60,0);
                uVar12 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                Atlas_Definitions_Date___ctor(uVar12,uVar18,uVar10,uVar11,0);
                auVar28._8_8_ = uVar12;
                return auVar28;
              }
            }
          }
        }
      }
    }
  }
  lStack_68 = func_0x00f78af4();
  if ((bRam0000000003eb4c6b & 1) == 0) {
    func_0x00f78a20(0x3d6c018);
    bRam0000000003eb4c6b = 1;
  }
  if (*(long *)(lStack_68 + 0x28) != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lStack_68 + 0x28),/*STR('EPISODES_NOW')*/ uRam0000000003d6c018,&stack0xffffffffffffffb8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = extraout_x1_00;
    return auVar1 << 0x40;
  }
  auVar28 = func_0x00f78af4();
  lVar7 = auVar28._8_8_;
  pcStack_58 = Atlas_UI_SeasonProgressPanelBehaviour__Init;
  uVar18 = 0x3eb4000;
  puStack_60 = &stack0xffffffffffffffc0;
  if ((bRam0000000003eb4c6c & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d247f8);
    func_0x00f78a20(0x3d790b0);
    func_0x00f78a20(0x3d79118);
    bRam0000000003eb4c6c = 1;
  }
  if (lVar7 == 0) {
LAB_014f0410:
    puVar25 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
    lVar8 = func_0x00f78af4();
  }
  else {
    lVar8 = *(long *)(lVar7 + 0xd0);
    uVar10 = *(undefined8 *)(lVar7 + 0x20);
    *(long *)(auVar28._0_8_ + 0x48) = lVar8;
    *(undefined8 *)(auVar28._0_8_ + 0x50) = uVar10;
    if (lVar8 == 0) goto LAB_014f0410;
    puVar25 = (undefined *)0x14f031c;
  }
  uVar10 = 0x3eb4000;
  ppuStack_b0 = &puStack_60;
  puStack_a8 = puVar25;
  if ((bRam0000000003eb4c7b & 1) == 0) {
    func_0x00f78a20(0x3d2dca0);
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c7b = 1;
  }
  if (*(long *)(lVar8 + 0x28) != 0) {
    puVar19 = (undefined8 *)
              Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                        (*(long *)(lVar8 + 0x28),0);
    uStack_e8 = *puVar19;
    iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_e8,0);
    uVar10 = 0;
    if (iVar6 == 0) {
code_r0x014f0548:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
      auVar2._8_8_ = extraout_x1;
      auVar2._0_8_ = uVar10;
      auVar29._8_8_ = extraout_x1;
      auVar29._0_8_ = uVar10;
      if ((iVar6 != 0) && (auVar29 = auVar2, *(char *)(lVar8 + 0x20) != '\0')) {
        auVar29 = /*Atlas.Stats.SeasonsManager$$GetSeasonByDateRange*/ func_0x014f22f4(lVar8);
      }
      return auVar29;
    }
    if (*(long *)(lVar8 + 0x28) != 0) {
      lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                        (*(long *)(lVar8 + 0x28),0);
      if (*(long *)(lVar7 + 8) != 0) {
        uVar10 = Atlas_Definitions_SeasonRotationHelper__GetSeasonDefinitions
                           (*(undefined8 *)(*(long *)(lVar7 + 8) + 0x30));
        if (*(long *)(lVar8 + 0x28) != 0) {
          lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                            (*(long *)(lVar8 + 0x28),0);
          if ((*(long *)(lVar7 + 8) != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
            uVar18 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x28);
            lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                              (*(long *)(lVar8 + 0x28),0);
            if ((*(long *)(lVar7 + 8) != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
              unaff_x22 = (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x20);
              lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                (*(long *)(lVar8 + 0x28),0);
              if ((*(long *)(lVar7 + 8) != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
                unaff_x23 = (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x24);
                lVar7 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                  (*(long *)(lVar8 + 0x28),0);
                if (*(long *)(lVar7 + 8) != 0) {
                  uVar11 = Atlas_Definitions_SeasonsRotationDefinition__get_StartDate();
                  uVar10 = Atlas_Definitions_SeasonRotationHelper__GetCurrentEpisode
                                     (uVar10,unaff_x22,*(undefined8 *)(lVar8 + 0x38),uVar11,uVar18,
                                      unaff_x23);
                  goto code_r0x014f0548;
                }
              }
            }
          }
        }
      }
    }
  }
  plVar15 = (long *)func_0x00f78af4();
  pcStack_f8 = Atlas_UI_SeasonProgressPanelBehaviour__SetData;
  ppppuVar24 = &pppuStack_100;
  uVar11 = 0x3d247f0;
  uStack_120 = unaff_x22;
  uStack_118 = uVar18;
  uStack_110 = uVar10;
  lStack_108 = lVar8;
  pppuStack_100 = &ppuStack_b0;
  if ((bRam0000000003eb4c6d & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4c6d = 1;
  }
  lVar7 = plVar15[9];
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar9 = (long *)0x0;
  if (lVar7 != 0) {
    unaff_x22 = 0x3d25000;
    plVar9 = (long *)Atlas_Stats_SeasonsManager__GetRewardThreshold
                               (lVar7,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
    uVar11 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(plVar9,(int)plVar15[0xd],0);
    plVar21 = (long *)plVar15[6];
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar18 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar11,plVar9,0);
    plVar15 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar28 = (**(code **)(*plVar21 + 0x558))(plVar21,uVar18,*(undefined8 *)(*plVar21 + 0x560));
      return auVar28;
    }
  }
  lVar7 = func_0x00f78af4();
  pcStack_128 = Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
  if (*(long *)(lVar7 + 0x78) == 0) {
    lVar7 = func_0x00f78af4();
    uStack_168 = uVar11;
    if ((bRam0000000003eb4c6e & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d2da20);
      func_0x00f78a20(0x3d1c098);
      func_0x00f78a20(0x3d2dae8);
      func_0x00f78a20(0x3d1c0e8);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d247f0);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6f0);
      func_0x00f78a20(0x3d5e740);
      func_0x00f78a20(0x3d5e7b0);
      func_0x00f78a20(0x3d63d00);
      func_0x00f78a20(0x3d63d08);
      func_0x00f78a20(0x3d63d10);
      func_0x00f78a20(0x3d63d18);
      func_0x00f78a20(0x3d63d20);
      func_0x00f78a20(0x3d63d28);
      func_0x00f78a20(0x3d28ba0);
      func_0x00f78a20(0x3d28b98);
      func_0x00f78a20(0x3d78fc0);
      bRam0000000003eb4c6e = 1;
    }
    lVar8 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
    Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___ctor(lVar8,0);
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar7;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(lVar7 + 0x60) = uVar18;
      lVar23 = *(long *)(lVar7 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar23 != 0) {
        uVar18 = Atlas_Stats_SeasonsManager__GetRewardThreshold
                           (lVar23,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        *(int *)(lVar8 + 0x18) = (int)uVar18;
        if (*(long *)(lVar7 + 0x58) != 0) {
          uVar10 = Atlas_UI_SeasonMetagameData__StarsForSeason();
          uVar5 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar18,uVar10,0);
          *(undefined4 *)(lVar8 + 0x1c) = uVar5;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
          uVar11 = *(undefined8 *)(lVar7 + 0x60);
          uVar18 = *(undefined8 *)(lVar7 + 0x20);
          uVar10 = *(undefined8 *)(lVar7 + 0x28);
          if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar19 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          lVar23 = puVar19[1];
          if (lVar23 == 0) {
            if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar19 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
            }
            uVar12 = *puVar19;
            lVar23 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar23,uVar12,uRam0000000003d63d00,0);
            *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar23;
          }
          uVar18 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar10,uVar18,lVar23,0);
          uVar18 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar11,uVar18,0);
          uVar10 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar10,lVar8,uRam0000000003d63d08,0);
          uVar18 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar18,uVar10,0);
          uVar10 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
          /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar10,lVar8,uRam0000000003d63d10,uRam0000000003d2da20);
          uVar11 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
          /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar11,lVar8,uRam0000000003d63d18,uRam0000000003d2dae8);
          uVar26 = *(undefined4 *)(lVar7 + 0x38);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar10 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar26,uVar10,uVar11,uVar5,0);
          uVar18 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar18,uVar10,0);
          uVar18 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar18,*(undefined4 *)(lVar7 + 0x3c),uRam0000000003d5e7b0);
          uVar10 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar10,lVar8,uRam0000000003d63d20,0);
          auVar32._0_8_ = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar18,uVar10,uRam0000000003d5e740);
          uVar18 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar18,lVar8,uRam0000000003d63d28,0);
          if ((auVar32._0_8_ != 0) && (*(char *)(auVar32._0_8_ + 0xe8) != '\0')) {
            *(undefined8 *)(auVar32._0_8_ + 0x80) = uVar18;
          }
          auVar32._8_8_ = uVar18;
          return auVar32;
        }
      }
    }
    auVar33._0_8_ = func_0x00f78af4();
    *(undefined8 *)(auVar33._0_8_ + 0x38) = 0x83f000000;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar33._8_8_ = 0;
    return auVar33;
  }
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar7 + 0x78),0,0);
  plVar21 = *(long **)(lVar7 + 0x60);
  uVar18 = 0;
  if ((bRam0000000003eb5c52 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c52 = 1;
    uVar18 = extraout_x1_01;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar18 = extraout_x1_02;
  }
  auVar31._8_8_ = uVar18;
  auVar31._0_8_ = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
    return auVar31;
  }
  if (plVar21 == (long *)0x0) {
    if (cRam0000000003cc2ae1 == '\0') {
      auVar31 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return auVar31;
    }
    if ((bRam0000000003eb5b2e & 1) == 0) {
      func_0x00f78a20(0x3d70738,0);
      bRam0000000003eb5b2e = 1;
    }
    plVar21 = (long *)0x0;
    plVar15 = /*STR('Null Tween')*/ plRam0000000003d70738;
  }
  else if ((char)plVar21[0x1d] == '\0') {
    if (cRam0000000003cc2ae1 == '\0') {
      auVar31 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return auVar31;
    }
    if ((bRam0000000003eb5b2c & 1) == 0) {
      func_0x00f78a20(0x3d74b30,0);
      bRam0000000003eb5b2c = 1;
    }
    plVar21 = (long *)0x0;
    plVar15 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
  }
  else {
    if (*(char *)((long)plVar21 + 0xe9) == '\0') {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar18 = extraout_x1_03;
      }
      auVar3._8_8_ = uVar18;
      auVar3._0_8_ = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
        *(undefined1 *)(plVar21 + 0x1d) = 0;
        return auVar3;
      }
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      bVar16 = true;
      puVar4 = &uStack_120;
      while( true ) {
        while( true ) {
          *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
          *(ulong *)((long)puVar4 + -0x38) = unaff_x23;
          *(ulong *)((long)puVar4 + -0x30) = unaff_x22;
          *(undefined8 *)((long)puVar4 + -0x28) = uVar11;
          *(long **)((long)puVar4 + -0x20) = plVar9;
          *(long **)((long)puVar4 + -0x18) = plVar15;
          *(undefined1 *****)((long)puVar4 + -0x10) = ppppuVar24;
          *(code **)((long)puVar4 + -8) = pcStack_128;
          ppppuVar24 = (undefined1 ****)((long)puVar4 + -0x10);
          if ((bRam0000000003eb5c68 & 1) == 0) {
            func_0x00f78a20(0x3d3c4d0);
            func_0x00f78a20(0x3d3c4d8);
            func_0x00f78a20(0x3d24878);
            func_0x00f78a20(0x3d404c0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb5c68 = 1;
          }
          if (plVar21 == (long *)0x0) goto code_r0x016bc740;
          if (plVar21[0x11] != 0) {
            /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar21[0x11],plVar21);
          }
          if (bVar16) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar21);
          }
          iVar6 = (int)plVar21[2];
          plVar15 = plVar21;
          if (*(char *)((long)plVar21 + 0x9a) != '\0') break;
          if (iVar6 == 0) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            piVar20 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x3c);
            iVar6 = -1;
            goto code_r0x016bca08;
          }
          if (iVar6 != 1) goto code_r0x016bca14;
          uVar11 = 0x3d25440;
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) =
               *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) + -1;
          if (*plVar21 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
          lVar7 = plVar21[0x24];
          if (lVar7 == 0) goto code_r0x016bc740;
          unaff_x22 = (ulong)*(uint *)(lVar7 + 0x18);
          if ((int)*(uint *)(lVar7 + 0x18) < 1) goto code_r0x016bca14;
          unaff_x23 = 0;
          if (*(int *)(lVar7 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar9 = *(long **)(*(long *)(lVar7 + 0x10) + 0x20);
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          bVar16 = false;
          pcStack_128 = (code *)&UNK_016bc72c;
          puVar4 = (ulong *)((long)puVar4 + -0x40);
          plVar21 = plVar9;
        }
        if (iVar6 == 0) goto code_r0x016bc744;
        if (iVar6 != 1) break;
        uVar11 = 0x3d25440;
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x58);
        if (lVar7 == 0) goto code_r0x016bc740;
        /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar7,plVar21,uRam0000000003d404c0);
        *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) =
             *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) + 1;
        if (*plVar21 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
        lVar7 = plVar21[0x24];
        if (lVar7 == 0) goto code_r0x016bc740;
        unaff_x22 = (ulong)*(uint *)(lVar7 + 0x18);
        if ((int)*(uint *)(lVar7 + 0x18) < 1) break;
        unaff_x23 = 0;
        if (*(int *)(lVar7 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar9 = *(long **)(*(long *)(lVar7 + 0x10) + 0x20);
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        bVar16 = false;
        pcStack_128 = (code *)&UNK_016bc660;
        puVar4 = (ulong *)((long)puVar4 + -0x40);
        plVar21 = plVar9;
      }
code_r0x016bca14:
      *(undefined1 *)(plVar21 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar28 = (**(code **)(*plVar21 + 0x178))(plVar21,*(undefined8 *)(*plVar21 + 0x180));
      return auVar28;
    }
    if (cRam0000000003cc2ae1 == '\0') {
      auVar31 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return auVar31;
    }
    plVar15 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    if ((bRam0000000003eb5b2d & 1) == 0) {
      func_0x00f78a20(0x3d74b40,0);
      bRam0000000003eb5b2d = 1;
      plVar15 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    }
  }
  if ((bRam0000000003eb5b28 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d35ae8);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d65de0);
    func_0x00f78a20(0x3d68098);
    func_0x00f78a20(0x3d67238);
    func_0x00f78a20(0x3d67230);
    func_0x00f78a20(0x3d67240);
    bRam0000000003eb5b28 = 1;
  }
  uVar18 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
  if (plVar15 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
  }
  plVar15 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar18,uVar10,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((plVar21 != (long *)0x0) && (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')
     ) {
    lVar23 = plVar21[0x19];
    lVar8 = plVar21[7];
    lVar7 = plVar21[8];
    if ((lVar23 != 0) || ((lVar8 != 0 || ((int)lVar7 != -999)))) {
      if (plVar15 == (long *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
      }
      plVar15 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar18,/*STR('\n')*/ uRam0000000003d65de0,0);
      if (lVar23 != 0) {
        uVar18 = 0;
        if (plVar15 != (long *)0x0) {
          uVar18 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        }
        uVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar21[0x19],0);
        plVar15 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar18,uVar10,0);
      }
      if (lVar8 != 0) {
        uVar18 = 0;
        if (plVar15 != (long *)0x0) {
          uVar18 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        }
        uVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar21[7],0);
        plVar15 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar18,uVar10,0);
      }
      if ((int)lVar7 != -999) {
        uVar18 = 0;
        if (plVar15 != (long *)0x0) {
          uVar18 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        }
        uStack_168 = CONCAT44((int)plVar21[8],(undefined4)uStack_168);
        uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_168 + 4);
        uVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar10,0);
        plVar15 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar18,uVar10,0);
      }
    }
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
  if (lVar7 != 0) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar7 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        if ((bRam0000000003eb5b0e & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5b0e = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar18 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar28 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,lVar7,0);
        if (auVar28._0_4_ == 0) {
          return auVar28;
        }
        *(undefined1 *)(lVar7 + 0x2d) = 1;
        uVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec0230 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ec0230 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (pcRam0000000003ec0228 == (code *)0x0) {
          pcRam0000000003ec0228 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar28 = (*pcRam0000000003ec0228)(0,uVar18);
        return auVar28;
      }
    }
    auVar28 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar7,2,plVar15,uRam0000000003d35ae8);
    if (auVar28._0_4_ == 0) {
      return auVar28;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar28 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar15,0);
  return auVar28;
  while( true ) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      uVar22 = *(uint *)(lVar8 + 0x84);
    }
    plVar15 = *(long **)(lVar8 + 0x50);
    if (plVar15 != (long *)0x0) break;
code_r0x016bc740:
    func_0x00f78af4();
code_r0x016bc744:
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
    lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    if (*(int *)(lVar8 + 0x84) == -1) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      }
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      iVar6 = *(int *)(lVar8 + 8) + -1;
      *(int *)(lVar8 + 0x80) = iVar6;
      *(int *)(lVar8 + 0x84) = iVar6;
    }
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    lVar8 = *(long *)(lVar7 + 0xb8);
    uVar22 = *(uint *)(lVar8 + 0x84);
    if (*(int *)(lVar8 + 8) + -1 <= (int)uVar22) {
      if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar22 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x84);
        lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      if ((int)uVar22 < 0) goto code_r0x016bc9e4;
      lVar8 = (ulong)uVar22 * 8 + 0x20;
      while( true ) {
        if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        plVar15 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x50);
        if (plVar15 == (long *)0x0) goto code_r0x016bc740;
        if (*(uint *)(plVar15 + 3) <= uVar22) goto code_r0x016bca38;
        if (plVar15[(ulong)uVar22 + 4] == 0) break;
        lVar8 = lVar8 + -8;
        bVar16 = (int)uVar22 < 1;
        uVar22 = uVar22 - 1;
        if (bVar16) goto code_r0x016bc9e4;
      }
      if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar15 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x50);
        if (plVar15 == (long *)0x0) goto code_r0x016bc740;
      }
      lVar7 = func_0x00f78adc(plVar21,*(undefined8 *)(*plVar15 + 0x40));
      if (lVar7 == 0) goto code_r0x016bca4c;
      if (*(uint *)(plVar15 + 3) <= uVar22) goto code_r0x016bca38;
      *(long **)((long)plVar15 + lVar8) = plVar21;
      lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if ((int)uVar22 < *(int *)(lVar8 + 0x80)) {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
        }
        lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        *(uint *)(lVar8 + 0x80) = uVar22;
      }
      if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      lVar8 = *(long *)(lVar7 + 0xb8);
      iVar6 = *(int *)(lVar8 + 0x80);
      if (*(int *)(lVar8 + 0x84) < iVar6) {
        if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
          iVar6 = *(int *)(lVar8 + 0x80);
          lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        *(int *)(lVar8 + 0x84) = iVar6;
      }
      goto code_r0x016bc9e4;
    }
  }
  lVar7 = func_0x00f78adc(plVar21,*(undefined8 *)(*plVar15 + 0x40));
  if (lVar7 == 0) goto code_r0x016bca4c;
  if (*(uint *)(plVar15 + 3) <= uVar22 + 1) {
code_r0x016bca38:
    uVar18 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar18,0);
code_r0x016bca44:
      func_0x00f78e5c(plVar21);
code_r0x016bca4c:
      uVar18 = func_0x00f78b14();
    } while( true );
  }
  plVar15[(long)(int)(uVar22 + 1) + 4] = (long)plVar21;
  lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
  iVar6 = *(int *)(lVar8 + 0x84) + 1;
  *(int *)(lVar8 + 0x84) = iVar6;
  if (iVar6 < *(int *)(lVar8 + 0x80)) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar8 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      iVar6 = *(int *)(lVar8 + 0x84);
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    *(int *)(lVar8 + 0x80) = iVar6;
  }
code_r0x016bc9e4:
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  }
  piVar20 = (int *)(*(long *)(lVar7 + 0xb8) + 0x34);
  iVar6 = 1;
code_r0x016bca08:
  *piVar20 = *piVar20 + iVar6;
  goto code_r0x016bca14;
}



// ============================================================
// RVA: 0x14f0414 | Atlas.Stats.SeasonsManager.GetCurrentSeason
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14f1f98 | Atlas.Stats.SeasonsManager.get_StarsAmountBeforeAwards
// ============================================================

undefined4 Atlas_Stats_SeasonsManager__get_StarsAmountBeforeAwards(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14f1fa0 | Atlas.Stats.SeasonsManager.set_StarsAmountBeforeAwards
// ============================================================

void Atlas_Stats_SeasonsManager__set_StarsAmountBeforeAwards(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ============================================================
// RVA: 0x14f1fa8 | Atlas.Stats.SeasonsManager.get_CurrentDateTime
// ============================================================

undefined8 Atlas_Stats_SeasonsManager__get_CurrentDateTime(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14f1fb0 | Atlas.Stats.SeasonsManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014f2094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014f2098) */
/* WARNING: Removing unreachable block (ram,0x014f20a4) */
/* WARNING: Removing unreachable block (ram,0x014f20ac) */
/* WARNING: Removing unreachable block (ram,0x014f20b0) */

void Atlas_Stats_SeasonsManager__Init(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long lStack_88;
  
  if ((bRam0000000003eb4c7a & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d551c0);
    func_0x00f78a20(0x3d57360);
    bRam0000000003eb4c7a = 1;
  }
  if (param_2 != 0) {
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551c0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55188);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) {
      uVar2 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(lVar3,uRam0000000003d57360);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      goto code_r0x014f20d0;
    }
  }
  param_1 = func_0x00f78af4();
code_r0x014f20d0:
  if ((bRam0000000003eb4c84 & 1) == 0) {
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d3a390);
    func_0x00f78a20(0x3d3a398);
    func_0x00f78a20(0x3d3fe48);
    func_0x00f78a20(0x3d3fe50);
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c84 = 1;
  }
  lStack_88 = 0;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) &&
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar3,&lStack_88,uRam0000000003d575b0), lStack_88 != 0)) {
    iVar5 = 0;
    while( true ) {
      iVar1 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_88,uRam0000000003d3fe48);
      if (iVar1 <= iVar5) {
        return;
      }
      if ((lStack_88 == 0) ||
         (plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_88,iVar5,uRam0000000003d3fe50),
         plVar4 == (long *)0x0)) break;
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
         ((*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 +
                    -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 || (lVar3 = plVar4[7], lVar3 == 0)))) break;
      uVar6 = 0;
      while ((int)uVar6 < (int)*(uint *)(lVar3 + 0x18)) {
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar6 * 0x10 + 0x20);
        if (lVar3 == 0) goto code_r0x014f2284;
        Atlas_Definitions_Date__IsValidDate(lVar3,0);
        lVar3 = plVar4[7];
        if (lVar3 == 0) goto code_r0x014f2284;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar6 * 0x10 + 0x28);
        if (lVar3 == 0) goto code_r0x014f2284;
        Atlas_Definitions_Date__IsValidDate(lVar3,0);
        uVar6 = uVar6 + 1;
        lVar3 = plVar4[7];
        if (lVar3 == 0) goto code_r0x014f2284;
      }
      iVar5 = iVar5 + 1;
      if (lStack_88 == 0) break;
    }
  }
code_r0x014f2284:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14f20d0 | Atlas.Stats.SeasonsManager.ValidateDefinitions
// ============================================================

void Atlas_Stats_SeasonsManager__ValidateDefinitions(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lStack_58;
  
  if ((bRam0000000003eb4c84 & 1) == 0) {
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d3a390);
    func_0x00f78a20(0x3d3a398);
    func_0x00f78a20(0x3d3fe48);
    func_0x00f78a20(0x3d3fe50);
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c84 = 1;
  }
  lStack_58 = 0;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 != 0)) &&
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar2,&lStack_58,uRam0000000003d575b0), lStack_58 != 0)) {
    iVar4 = 0;
    while( true ) {
      iVar1 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_58,uRam0000000003d3fe48);
      if (iVar1 <= iVar4) {
        return;
      }
      if ((lStack_58 == 0) ||
         (plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_58,iVar4,uRam0000000003d3fe50),
         plVar3 == (long *)0x0)) break;
      if ((*(byte *)(*plVar3 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
         ((*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 +
                    -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 || (lVar2 = plVar3[7], lVar2 == 0)))) break;
      uVar5 = 0;
      while ((int)uVar5 < (int)*(uint *)(lVar2 + 0x18)) {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar5 * 0x10 + 0x20);
        if (lVar2 == 0) goto LAB_014f2284;
        Atlas_Definitions_Date__IsValidDate(lVar2,0);
        lVar2 = plVar3[7];
        if (lVar2 == 0) goto LAB_014f2284;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar5 * 0x10 + 0x28);
        if (lVar2 == 0) goto LAB_014f2284;
        Atlas_Definitions_Date__IsValidDate(lVar2,0);
        uVar5 = uVar5 + 1;
        lVar2 = plVar3[7];
        if (lVar2 == 0) goto LAB_014f2284;
      }
      iVar4 = iVar4 + 1;
      if (lStack_58 == 0) break;
    }
  }
LAB_014f2284:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14f22a4 | Atlas.Stats.SeasonsManager.SetCurrentDateTime
// ============================================================

void Atlas_Stats_SeasonsManager__SetCurrentDateTime(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x14f22ac | Atlas.Stats.SeasonsManager.DeInit
// ============================================================

void Atlas_Stats_SeasonsManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x14f22f4 | Atlas.Stats.SeasonsManager.GetSeasonByDateRange
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14f2774 | Atlas.Stats.SeasonsManager.IsCurrentSeasonActive
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14f2810 | Atlas.Stats.SeasonsManager.HasUnlockedAndSeenAllRewardsInSeason
// ============================================================

ulong Atlas_Stats_SeasonsManager__HasUnlockedAndSeenAllRewardsInSeason(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long extraout_x1;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long unaff_x22;
  ulong unaff_x23;
  long lVar16;
  ulong unaff_x24;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint uStack_180;
  uint uStack_17c;
  long lStack_178;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3d23990;
  if ((bRam0000000003eb4c80 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c80 = 1;
  }
  lVar6 = Atlas_Stats_SeasonsManager__GetCurrentSeason(param_1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0);
  uVar3 = (uint)uVar13;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    if ((lVar6 == 0) || (unaff_x22 = *(long *)(lVar6 + 0x40), unaff_x22 == 0)) {
LAB_014f2938:
      func_0x00f78af4();
LAB_014f293c:
      uVar13 = func_0x00f78b24();
      auVar18 = func_0x00f78ac0(uVar13,0);
      lVar17 = auVar18._8_8_;
      lVar16 = auVar18._0_8_;
      puStack_58 = &Atlas_Stats_SeasonsManager__IsContentAvailable;
      uStack_90 = unaff_x24;
      uStack_88 = unaff_x23;
      lStack_80 = unaff_x22;
      uStack_78 = uVar7;
      lStack_70 = lVar6;
      lStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4c81 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d2dc88);
        bRam0000000003eb4c81 = 1;
      }
      if (*(long *)(lVar16 + 0x10) != 0) {
        uVar3 = 0;
        uVar14 = Atlas_Definitions_AtlasDefinitions__IsContentValid(*(long *)(lVar16 + 0x10),lVar17)
        ;
        if ((int)uVar14 == 0) {
          return uVar14;
        }
        if (lVar17 != 0) {
          puVar8 = (undefined8 *)
                   Atlas_Definitions_ContentDefinition__get_SeasonDefinitionRef(lVar17,0);
          uStack_98 = *puVar8;
          iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
          if (iVar2 == 0) {
            return 1;
          }
          lVar6 = *(long *)(lVar16 + 0x18);
          puVar8 = (undefined8 *)
                   Atlas_Definitions_ContentDefinition__get_SeasonDefinitionRef(lVar17,0);
          if (lVar6 != 0) {
            uVar3 = 0;
            uVar14 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar6,*puVar8);
            if ((int)uVar14 == 0) {
              return uVar14;
            }
            lVar6 = Atlas_Stats_SeasonsManager__GetCurrentSeason(lVar16);
            puVar8 = (undefined8 *)
                     Atlas_Definitions_ContentDefinition__get_SeasonDefinitionRef(lVar17,0);
            if (lVar6 != 0) {
              uVar7 = *puVar8;
              uVar13 = *(undefined8 *)(lVar6 + 0x18);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar3 = 0;
              iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar7,uVar13);
              if ((iVar2 != 0) &&
                 (uVar14 = Atlas_Stats_SeasonsManager__IsSeasonActive(lVar16,lVar6),
                 (uVar14 & 1) != 0)) {
                return 1;
              }
              if (*(long *)(lVar16 + 0x18) != 0) {
                uVar14 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar16 + 0x18),*(undefined8 *)(lVar17 + 0x18),0);
                return uVar14;
              }
            }
          }
        }
      }
      auVar18 = func_0x00f78af4();
      uVar12 = uVar3;
      iVar2 = Atlas_Stats_SeasonsManager__GetStarsForSeason();
      if ((auVar18._8_8_ == 0) || (lVar6 = *(long *)(auVar18._0_8_ + 0x30), lVar6 == 0)) {
        func_0x00f78af4();
        if ((extraout_x1 == 0) || (lVar6 = *(long *)(extraout_x1 + 0x40), lVar6 == 0)) {
          func_0x00f78af4();
        }
        else if (uVar12 < *(uint *)(lVar6 + 0x18)) {
          return *(ulong *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
        }
        uVar7 = func_0x00f78b24();
        lVar6 = func_0x00f78ac0(uVar7,0);
        if ((bRam0000000003eb4c82 & 1) == 0) {
          func_0x00f78a20(0x3d2dca8);
          func_0x00f78a20(0x3d3bc38);
          bRam0000000003eb4c82 = 1;
        }
        if (*(long *)(lVar6 + 0x28) != 0) {
          lVar16 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                             (*(long *)(lVar6 + 0x28),0);
          if (((*(long *)(lVar16 + 8) != 0) &&
              (lVar16 = *(long *)(*(long *)(lVar16 + 8) + 0x30), lVar16 != 0)) &&
             (*(long *)(lVar6 + 0x28) != 0)) {
            uVar1 = *(undefined4 *)(lVar16 + 0x18);
            uVar7 = *(undefined8 *)(lVar6 + 0x38);
            lVar16 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                               (*(long *)(lVar6 + 0x28),0);
            if (*(long *)(lVar16 + 8) != 0) {
              uVar13 = Atlas_Definitions_SeasonsRotationDefinition__get_StartDate();
              if (*(long *)(lVar6 + 0x28) != 0) {
                lVar16 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                   (*(long *)(lVar6 + 0x28),0);
                if (*(long *)(lVar16 + 8) != 0) {
                  iVar2 = Atlas_Definitions_SeasonRotationHelper__GetNumberOfReruns
                                    (uVar7,uVar13,*(undefined4 *)(*(long *)(lVar16 + 8) + 0x20),
                                     uVar1);
                  if (*(long *)(lVar6 + 0x28) != 0) {
                    lVar6 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                      (*(long *)(lVar6 + 0x28),0);
                    if (*(long *)(lVar6 + 8) != 0) {
                      return (ulong)(uint)(*(int *)(*(long *)(lVar6 + 8) + 0x40) + iVar2);
                    }
                  }
                }
              }
            }
          }
        }
        lVar6 = func_0x00f78af4();
        if ((bRam0000000003eb4c83 & 1) == 0) {
          func_0x00f78a20(0x3d575b0);
          func_0x00f78a20(0x3d3a390);
          func_0x00f78a20(0x3d3a398);
          func_0x00f78a20(0x3d3fe48);
          func_0x00f78a20(0x3d3fe50);
          func_0x00f78a20(0x3d247f0);
          func_0x00f78a20(0x3d1f498);
          func_0x00f78a20(0x3d66390);
          func_0x00f78a20(0x3d66210);
          bRam0000000003eb4c83 = 1;
        }
        uStack_180 = 0;
        uStack_17c = 0;
        lStack_178 = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        if (((*(long *)(lVar6 + 0x10) != 0) &&
            (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar6 != 0)) &&
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar6,&lStack_178,uRam0000000003d575b0), lStack_178 != 0)) {
          iVar2 = 0;
          while( true ) {
            uVar14 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_178,uRam0000000003d3fe48);
            if ((int)uVar14 <= iVar2) {
              return uVar14;
            }
            if (lStack_178 == 0) break;
            plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_178,iVar2,uRam0000000003d3fe50);
            if (plVar9 == (long *)0x0) {
code_r0x014f2d58:
              plVar9 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
              goto code_r0x014f2d58;
              if (*(long *)(*(long *)(*plVar9 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
                plVar9 = (long *)0x0;
              }
            }
            if (lStack_178 == 0) break;
            iVar15 = 0;
            while (iVar4 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_178,uRam0000000003d3fe48), iVar15 < iVar4) {
              if (lStack_178 == 0) goto code_r0x014f3068;
              plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_178,iVar15,uRam0000000003d3fe50);
              if (plVar10 == (long *)0x0) {
code_r0x014f2dd8:
                plVar10 = (long *)0x0;
              }
              else {
                if (*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
                goto code_r0x014f2dd8;
                if (*(long *)(*(long *)(*plVar10 + 200) +
                              (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                    /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
                  plVar10 = (long *)0x0;
                }
              }
              uStack_17c = 0;
              if (plVar9 == (long *)0x0) goto code_r0x014f3068;
              lVar6 = plVar9[7];
              while( true ) {
                if (lVar6 == 0) goto code_r0x014f3068;
                if (*(int *)(lVar6 + 0x18) <= (int)uStack_17c) break;
                uStack_180 = 0;
                if (plVar10 == (long *)0x0) goto code_r0x014f3068;
                lVar6 = plVar10[7];
                while( true ) {
                  if (lVar6 == 0) goto code_r0x014f3068;
                  lVar16 = (long)(int)uStack_17c;
                  if (*(int *)(lVar6 + 0x18) <= (int)uStack_180) break;
                  if ((iVar2 != iVar15) || (uStack_17c != uStack_180)) {
                    lVar17 = plVar9[7];
                    if (lVar17 == 0) goto code_r0x014f3068;
                    if (*(uint *)(lVar17 + 0x18) <= uStack_17c) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar6 = plVar10[7];
                    }
                    uVar3 = uStack_180;
                    lVar16 = *(long *)(lVar17 + 0x10) + lVar16 * 0x10;
                    uStack_188 = *(undefined8 *)(lVar16 + 0x28);
                    uStack_190 = *(undefined8 *)(lVar16 + 0x20);
                    if (lVar6 == 0) goto code_r0x014f3068;
                    if (*(uint *)(lVar6 + 0x18) <= uStack_180) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar6 = *(long *)(lVar6 + 0x10) + (long)(int)uVar3 * 0x10;
                    iVar4 = Atlas_Definitions_DateRange__DoesDateRangeOverlap
                                      (&uStack_190,*(undefined8 *)(lVar6 + 0x20),
                                       *(undefined8 *)(lVar6 + 0x28),0);
                    if (iVar4 != 0) {
                      plVar11 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
                      if (plVar11 == (long *)0x0) goto code_r0x014f3068;
                      lVar6 = plVar9[3];
                      if ((lVar6 == 0) ||
                         (lVar16 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar16 != 0)) {
                        uVar14 = plVar11[3];
                        if ((int)uVar14 == 0) goto code_r0x014f306c;
                        plVar11[4] = lVar6;
                        if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                          lVar6 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,
                                                  *(undefined8 *)(*plVar11 + 0x40));
                          if (lVar6 == 0) goto code_r0x014f3094;
                          uVar14 = plVar11[3];
                        }
                        if ((uVar14 & 0xfffffffe) == 0) goto code_r0x014f306c;
                        plVar11[5] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                        lVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_17c,0);
                        if ((lVar6 == 0) ||
                           (lVar16 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar16 != 0)) {
                          uVar14 = plVar11[3];
                          if ((uint)uVar14 < 3) goto code_r0x014f306c;
                          plVar11[6] = lVar6;
                          if (/*STR(' overlaps ')*/ lRam0000000003d66390 != 0) {
                            lVar6 = func_0x00f78adc(/*STR(' overlaps ')*/ lRam0000000003d66390,
                                                    *(undefined8 *)(*plVar11 + 0x40));
                            if (lVar6 == 0) goto code_r0x014f3094;
                            uVar14 = plVar11[3];
                          }
                          uVar3 = (uint)uVar14;
                          if ((uVar14 & 0xfffffffc) == 0) goto code_r0x014f306c;
                          plVar11[7] = /*STR(' overlaps ')*/ lRam0000000003d66390;
                          lVar6 = plVar10[3];
                          if (lVar6 != 0) {
                            lVar16 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar11 + 0x40));
                            if (lVar16 == 0) goto code_r0x014f3094;
                            uVar3 = (uint)plVar11[3];
                          }
                          if (uVar3 < 5) goto code_r0x014f306c;
                          plVar11[8] = lVar6;
                          if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                            lVar6 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,
                                                    *(undefined8 *)(*plVar11 + 0x40));
                            if (lVar6 == 0) goto code_r0x014f3094;
                            uVar3 = *(uint *)(plVar11 + 3);
                          }
                          if (uVar3 < 6) goto code_r0x014f306c;
                          plVar11[9] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                          lVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_180,0);
                          if ((lVar6 == 0) ||
                             (lVar16 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar11 + 0x40)),
                             lVar16 != 0)) {
                            if (6 < *(uint *)(plVar11 + 3)) {
                              plVar11[10] = lVar6;
                              /*System.String$$Concat*/ func_0x029cfadc(plVar11,0);
                              goto code_r0x014f3020;
                            }
                            goto code_r0x014f306c;
                          }
                        }
                      }
code_r0x014f3094:
                      uVar7 = func_0x00f78b14();
                      goto code_r0x014f3098;
                    }
                  }
code_r0x014f3020:
                  uStack_180 = uStack_180 + 1;
                  lVar6 = plVar10[7];
                }
                uStack_17c = uStack_17c + 1;
                lVar6 = plVar9[7];
              }
              iVar15 = iVar15 + 1;
              if (lStack_178 == 0) goto code_r0x014f3068;
            }
            iVar2 = iVar2 + 1;
            if (lStack_178 == 0) break;
          }
        }
code_r0x014f3068:
        func_0x00f78af4();
code_r0x014f306c:
        uVar7 = func_0x00f78b24();
code_r0x014f3098:
        lVar6 = func_0x00f78ac0(uVar7,0);
        if ((bRam0000000003eb4c85 & 1) == 0) {
          func_0x00f78a20(0x3d21070);
          bRam0000000003eb4c85 = 1;
        }
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
        *(ulong *)(lVar6 + 0x38) = uVar14;
        return uVar14;
      }
      uVar7 = *(undefined8 *)(auVar18._8_8_ + 0x18);
      iVar2 = iVar2 + uVar3;
      if ((bRam0000000003eb4c47 & 1) == 0) {
        func_0x00f78a20(0x3d3d8f0);
        func_0x00f78a20(0x3d3d900);
        func_0x00f78a20(0x3d3d908);
        bRam0000000003eb4c47 = 1;
      }
      uVar14 = Atlas_Save_SaveManager__GetIntDataIndex(lVar6,uVar7);
      uVar5 = Atlas_Save_SaveManager__get_SaveData(lVar6);
      if ((int)(uint)uVar14 < 0) {
        if ((uVar5 != 0) && (*(long *)(uVar5 + 0x110) != 0)) {
          uVar14 = /*System.Collections.Generic.List<SaveData.KeyValueInt>$$Add*/ func_0x0258c934(*(long *)(uVar5 + 0x110),uVar7,iVar2,uRam0000000003d3d8f0);
LAB_014ecf58:
          *(undefined1 *)(lVar6 + 0x110) = 1;
          return uVar14;
        }
      }
      else if ((uVar5 != 0) && (lVar16 = *(long *)(uVar5 + 0x110), lVar16 != 0)) {
        if (*(uint *)(lVar16 + 0x18) <= (uint)uVar14) {
          uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar16 + 0x10) + (uVar14 & 0xffffffff) * 0x10 + 0x28) == iVar2) {
          return uVar5;
        }
        lVar16 = Atlas_Save_SaveManager__get_SaveData(lVar6);
        if ((lVar16 != 0) && (*(long *)(lVar16 + 0x110) != 0)) {
          uVar14 = /*System.Collections.Generic.List<SaveData.KeyValueInt>$$set_Item*/ func_0x0258c5d8(*(long *)(lVar16 + 0x110),uVar14,uVar7,iVar2,uRam0000000003d3d908
                                  );
          goto LAB_014ecf58;
        }
      }
      auVar18 = func_0x00f78af4();
      if ((bRam0000000003eb4c49 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c49 = 1;
      }
      lVar6 = Atlas_Save_SaveManager__get_SaveData(auVar18._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb4c4d & 1) == 0) {
        func_0x00f78a20(0x3d3d8f8);
        func_0x00f78a20(0x3d3d900);
        bRam0000000003eb4c4d = 1;
      }
      if ((lVar6 != 0) && (lVar16 = *(long *)(lVar6 + 0x110), lVar16 != 0)) {
        uVar14 = 0;
        do {
          uVar3 = (uint)uVar14;
          if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar3) {
            return 0xffffffff;
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar3) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
          if (lVar16 == 0) break;
          uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar16,auVar18._8_8_,5,0);
          if ((uVar5 & 1) != 0) {
            return uVar14;
          }
          uVar14 = (ulong)(uVar3 + 1);
          lVar16 = *(long *)(lVar6 + 0x110);
        } while (lVar16 != 0);
      }
      func_0x00f78af4();
      return 0xffffffff;
    }
    iVar2 = (int)*(ulong *)(unaff_x22 + 0x18);
    unaff_x23 = (ulong)(0 < iVar2);
    if (0 < iVar2) {
      unaff_x24 = 0;
      uVar14 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
      do {
        uVar3 = (uint)uVar13;
        if (uVar14 <= unaff_x24) goto LAB_014f293c;
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f2938;
        lVar6 = *(long *)(unaff_x22 + 0x20 + unaff_x24 * 8);
        uVar3 = 0;
        uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x18),lVar6);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_014f2938;
        uVar13 = 0;
        uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_1 + 0x18),lVar6);
        if (((uint)uVar7 == 0) || (((uint)uVar7 & uVar3 & 1) != 0)) break;
        unaff_x24 = unaff_x24 + 1;
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        uVar14 = (ulong)uVar3;
        unaff_x23 = (ulong)((long)unaff_x24 < (long)(int)uVar3);
      } while ((long)unaff_x24 < (long)(int)uVar3);
    }
    uVar3 = (uint)unaff_x23 ^ 1;
  }
  return (ulong)uVar3;
}



// ============================================================
// RVA: 0x14f2948 | Atlas.Stats.SeasonsManager.IsContentAvailable
// ============================================================

ulong Atlas_Stats_SeasonsManager__IsContentAvailable(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long extraout_x1;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  uint uStack_12c;
  long lStack_128;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4c81 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc88);
    bRam0000000003eb4c81 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    param_3 = 0;
    uVar5 = Atlas_Definitions_AtlasDefinitions__IsContentValid(*(long *)(param_1 + 0x10),param_2);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (param_2 != 0) {
      puVar6 = (undefined8 *)Atlas_Definitions_ContentDefinition__get_SeasonDefinitionRef(param_2,0)
      ;
      uStack_48 = *puVar6;
      iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_48,0);
      if (iVar2 == 0) {
        return 1;
      }
      lVar12 = *(long *)(param_1 + 0x18);
      puVar6 = (undefined8 *)Atlas_Definitions_ContentDefinition__get_SeasonDefinitionRef(param_2,0)
      ;
      if (lVar12 != 0) {
        param_3 = 0;
        uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar12,*puVar6);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        lVar12 = Atlas_Stats_SeasonsManager__GetCurrentSeason(param_1);
        puVar6 = (undefined8 *)
                 Atlas_Definitions_ContentDefinition__get_SeasonDefinitionRef(param_2,0);
        if (lVar12 != 0) {
          uVar13 = *puVar6;
          uVar14 = *(undefined8 *)(lVar12 + 0x18);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar13,uVar14);
          if ((iVar2 != 0) &&
             (uVar5 = Atlas_Stats_SeasonsManager__IsSeasonActive(param_1,lVar12), (uVar5 & 1) != 0))
          {
            return 1;
          }
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0);
            return uVar5;
          }
        }
      }
    }
  }
  auVar17 = func_0x00f78af4();
  uVar11 = param_3;
  iVar2 = Atlas_Stats_SeasonsManager__GetStarsForSeason();
  if ((auVar17._8_8_ == 0) || (lVar12 = *(long *)(auVar17._0_8_ + 0x30), lVar12 == 0)) {
    func_0x00f78af4();
    if ((extraout_x1 == 0) || (lVar12 = *(long *)(extraout_x1 + 0x40), lVar12 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar11 < *(uint *)(lVar12 + 0x18)) {
      return *(ulong *)(lVar12 + (long)(int)uVar11 * 8 + 0x20);
    }
    uVar13 = func_0x00f78b24();
    lVar12 = func_0x00f78ac0(uVar13,0);
    if ((bRam0000000003eb4c82 & 1) == 0) {
      func_0x00f78a20(0x3d2dca8);
      func_0x00f78a20(0x3d3bc38);
      bRam0000000003eb4c82 = 1;
    }
    if (*(long *)(lVar12 + 0x28) != 0) {
      lVar15 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                         (*(long *)(lVar12 + 0x28),0);
      if (((*(long *)(lVar15 + 8) != 0) &&
          (lVar15 = *(long *)(*(long *)(lVar15 + 8) + 0x30), lVar15 != 0)) &&
         (*(long *)(lVar12 + 0x28) != 0)) {
        uVar1 = *(undefined4 *)(lVar15 + 0x18);
        uVar13 = *(undefined8 *)(lVar12 + 0x38);
        lVar15 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                           (*(long *)(lVar12 + 0x28),0);
        if (*(long *)(lVar15 + 8) != 0) {
          uVar14 = Atlas_Definitions_SeasonsRotationDefinition__get_StartDate();
          if (*(long *)(lVar12 + 0x28) != 0) {
            lVar15 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                               (*(long *)(lVar12 + 0x28),0);
            if (*(long *)(lVar15 + 8) != 0) {
              iVar2 = Atlas_Definitions_SeasonRotationHelper__GetNumberOfReruns
                                (uVar13,uVar14,*(undefined4 *)(*(long *)(lVar15 + 8) + 0x20),uVar1);
              if (*(long *)(lVar12 + 0x28) != 0) {
                lVar12 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                   (*(long *)(lVar12 + 0x28),0);
                if (*(long *)(lVar12 + 8) != 0) {
                  return (ulong)(uint)(*(int *)(*(long *)(lVar12 + 8) + 0x40) + iVar2);
                }
              }
            }
          }
        }
      }
    }
    lVar12 = func_0x00f78af4();
    if ((bRam0000000003eb4c83 & 1) == 0) {
      func_0x00f78a20(0x3d575b0);
      func_0x00f78a20(0x3d3a390);
      func_0x00f78a20(0x3d3a398);
      func_0x00f78a20(0x3d3fe48);
      func_0x00f78a20(0x3d3fe50);
      func_0x00f78a20(0x3d247f0);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d66390);
      func_0x00f78a20(0x3d66210);
      bRam0000000003eb4c83 = 1;
    }
    uStack_130 = 0;
    uStack_12c = 0;
    lStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    if (((*(long *)(lVar12 + 0x10) != 0) &&
        (lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x10), lVar12 != 0)) &&
       (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar12,&lStack_128,uRam0000000003d575b0), lStack_128 != 0)) {
      iVar2 = 0;
      while( true ) {
        uVar5 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_128,uRam0000000003d3fe48);
        if ((int)uVar5 <= iVar2) {
          return uVar5;
        }
        if (lStack_128 == 0) break;
        plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_128,iVar2,uRam0000000003d3fe50);
        if (plVar7 == (long *)0x0) {
code_r0x014f2d58:
          plVar7 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
          goto code_r0x014f2d58;
          if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
            plVar7 = (long *)0x0;
          }
        }
        if (lStack_128 == 0) break;
        iVar10 = 0;
        while (iVar3 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_128,uRam0000000003d3fe48), iVar10 < iVar3) {
          if (lStack_128 == 0) goto code_r0x014f3068;
          plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_128,iVar10,uRam0000000003d3fe50);
          if (plVar8 == (long *)0x0) {
code_r0x014f2dd8:
            plVar8 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
            goto code_r0x014f2dd8;
            if (*(long *)(*(long *)(*plVar8 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
              plVar8 = (long *)0x0;
            }
          }
          uStack_12c = 0;
          if (plVar7 == (long *)0x0) goto code_r0x014f3068;
          lVar12 = plVar7[7];
          while( true ) {
            if (lVar12 == 0) goto code_r0x014f3068;
            if (*(int *)(lVar12 + 0x18) <= (int)uStack_12c) break;
            uStack_130 = 0;
            if (plVar8 == (long *)0x0) goto code_r0x014f3068;
            lVar12 = plVar8[7];
            while( true ) {
              if (lVar12 == 0) goto code_r0x014f3068;
              lVar15 = (long)(int)uStack_12c;
              if (*(int *)(lVar12 + 0x18) <= (int)uStack_130) break;
              if ((iVar2 != iVar10) || (uStack_12c != uStack_130)) {
                lVar16 = plVar7[7];
                if (lVar16 == 0) goto code_r0x014f3068;
                if (*(uint *)(lVar16 + 0x18) <= uStack_12c) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  lVar12 = plVar8[7];
                }
                uVar11 = uStack_130;
                lVar15 = *(long *)(lVar16 + 0x10) + lVar15 * 0x10;
                uStack_138 = *(undefined8 *)(lVar15 + 0x28);
                uStack_140 = *(undefined8 *)(lVar15 + 0x20);
                if (lVar12 == 0) goto code_r0x014f3068;
                if (*(uint *)(lVar12 + 0x18) <= uStack_130) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar12 = *(long *)(lVar12 + 0x10) + (long)(int)uVar11 * 0x10;
                iVar3 = Atlas_Definitions_DateRange__DoesDateRangeOverlap
                                  (&uStack_140,*(undefined8 *)(lVar12 + 0x20),
                                   *(undefined8 *)(lVar12 + 0x28),0);
                if (iVar3 != 0) {
                  plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
                  if (plVar9 == (long *)0x0) goto code_r0x014f3068;
                  lVar12 = plVar7[3];
                  if ((lVar12 == 0) ||
                     (lVar15 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar15 != 0)
                     ) {
                    uVar5 = plVar9[3];
                    if ((int)uVar5 == 0) goto code_r0x014f306c;
                    plVar9[4] = lVar12;
                    if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                      lVar12 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar9 + 0x40))
                      ;
                      if (lVar12 == 0) goto code_r0x014f3094;
                      uVar5 = plVar9[3];
                    }
                    if ((uVar5 & 0xfffffffe) == 0) goto code_r0x014f306c;
                    plVar9[5] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                    lVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_12c,0);
                    if ((lVar12 == 0) ||
                       (lVar15 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar15 != 0)) {
                      uVar5 = plVar9[3];
                      if ((uint)uVar5 < 3) goto code_r0x014f306c;
                      plVar9[6] = lVar12;
                      if (/*STR(' overlaps ')*/ lRam0000000003d66390 != 0) {
                        lVar12 = func_0x00f78adc(/*STR(' overlaps ')*/ lRam0000000003d66390,
                                                 *(undefined8 *)(*plVar9 + 0x40));
                        if (lVar12 == 0) goto code_r0x014f3094;
                        uVar5 = plVar9[3];
                      }
                      uVar11 = (uint)uVar5;
                      if ((uVar5 & 0xfffffffc) == 0) goto code_r0x014f306c;
                      plVar9[7] = /*STR(' overlaps ')*/ lRam0000000003d66390;
                      lVar12 = plVar8[3];
                      if (lVar12 != 0) {
                        lVar15 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar9 + 0x40));
                        if (lVar15 == 0) goto code_r0x014f3094;
                        uVar11 = (uint)plVar9[3];
                      }
                      if (uVar11 < 5) goto code_r0x014f306c;
                      plVar9[8] = lVar12;
                      if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                        lVar12 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,
                                                 *(undefined8 *)(*plVar9 + 0x40));
                        if (lVar12 == 0) goto code_r0x014f3094;
                        uVar11 = *(uint *)(plVar9 + 3);
                      }
                      if (uVar11 < 6) goto code_r0x014f306c;
                      plVar9[9] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                      lVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_130,0);
                      if ((lVar12 == 0) ||
                         (lVar15 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar15 != 0)) {
                        if (6 < *(uint *)(plVar9 + 3)) {
                          plVar9[10] = lVar12;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
                          goto code_r0x014f3020;
                        }
                        goto code_r0x014f306c;
                      }
                    }
                  }
code_r0x014f3094:
                  uVar13 = func_0x00f78b14();
                  goto code_r0x014f3098;
                }
              }
code_r0x014f3020:
              uStack_130 = uStack_130 + 1;
              lVar12 = plVar8[7];
            }
            uStack_12c = uStack_12c + 1;
            lVar12 = plVar7[7];
          }
          iVar10 = iVar10 + 1;
          if (lStack_128 == 0) goto code_r0x014f3068;
        }
        iVar2 = iVar2 + 1;
        if (lStack_128 == 0) break;
      }
    }
code_r0x014f3068:
    func_0x00f78af4();
code_r0x014f306c:
    uVar13 = func_0x00f78b24();
code_r0x014f3098:
    lVar12 = func_0x00f78ac0(uVar13,0);
    if ((bRam0000000003eb4c85 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c85 = 1;
    }
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    *(ulong *)(lVar12 + 0x38) = uVar5;
    return uVar5;
  }
  uVar13 = *(undefined8 *)(auVar17._8_8_ + 0x18);
  iVar2 = iVar2 + param_3;
  if ((bRam0000000003eb4c47 & 1) == 0) {
    func_0x00f78a20(0x3d3d8f0);
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d3d908);
    bRam0000000003eb4c47 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetIntDataIndex(lVar12,uVar13);
  uVar4 = Atlas_Save_SaveManager__get_SaveData(lVar12);
  if ((int)(uint)uVar5 < 0) {
    if ((uVar4 != 0) && (*(long *)(uVar4 + 0x110) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueInt>$$Add*/ func_0x0258c934(*(long *)(uVar4 + 0x110),uVar13,iVar2,uRam0000000003d3d8f0);
LAB_014ecf58:
      *(undefined1 *)(lVar12 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((uVar4 != 0) && (lVar15 = *(long *)(uVar4 + 0x110), lVar15 != 0)) {
    if (*(uint *)(lVar15 + 0x18) <= (uint)uVar5) {
      uVar4 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(int *)(*(long *)(lVar15 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28) == iVar2) {
      return uVar4;
    }
    lVar15 = Atlas_Save_SaveManager__get_SaveData(lVar12);
    if ((lVar15 != 0) && (*(long *)(lVar15 + 0x110) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueInt>$$set_Item*/ func_0x0258c5d8(*(long *)(lVar15 + 0x110),uVar5,uVar13,iVar2,uRam0000000003d3d908);
      goto LAB_014ecf58;
    }
  }
  auVar17 = func_0x00f78af4();
  if ((bRam0000000003eb4c49 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c49 = 1;
  }
  lVar12 = Atlas_Save_SaveManager__get_SaveData(auVar17._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4d & 1) == 0) {
    func_0x00f78a20(0x3d3d8f8);
    func_0x00f78a20(0x3d3d900);
    bRam0000000003eb4c4d = 1;
  }
  if ((lVar12 != 0) && (lVar15 = *(long *)(lVar12 + 0x110), lVar15 != 0)) {
    uVar5 = 0;
    do {
      uVar11 = (uint)uVar5;
      if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar11) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar11 * 0x10 + 0x20);
      if (lVar15 == 0) break;
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar15,auVar17._8_8_,5,0);
      if ((uVar4 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar11 + 1);
      lVar15 = *(long *)(lVar12 + 0x110);
    } while (lVar15 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14f2a9c | Atlas.Stats.SeasonsManager.AddStarsToSeason
// ============================================================

ulong Atlas_Stats_SeasonsManager__AddStarsToSeason(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long extraout_x1;
  long lVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  long lStack_d8;
  
  uVar13 = param_3;
  iVar2 = Atlas_Stats_SeasonsManager__GetStarsForSeason();
  if ((param_2 == 0) || (lVar11 = *(long *)(param_1 + 0x30), lVar11 == 0)) {
    func_0x00f78af4();
    if ((extraout_x1 == 0) || (lVar11 = *(long *)(extraout_x1 + 0x40), lVar11 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar13 < *(uint *)(lVar11 + 0x18)) {
      return *(ulong *)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
    }
    uVar10 = func_0x00f78b24();
    lVar11 = func_0x00f78ac0(uVar10,0);
    if ((bRam0000000003eb4c82 & 1) == 0) {
      func_0x00f78a20(0x3d2dca8);
      func_0x00f78a20(0x3d3bc38);
      bRam0000000003eb4c82 = 1;
    }
    if (*(long *)(lVar11 + 0x28) != 0) {
      lVar14 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                         (*(long *)(lVar11 + 0x28),0);
      if (((*(long *)(lVar14 + 8) != 0) &&
          (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x30), lVar14 != 0)) &&
         (*(long *)(lVar11 + 0x28) != 0)) {
        uVar1 = *(undefined4 *)(lVar14 + 0x18);
        uVar10 = *(undefined8 *)(lVar11 + 0x38);
        lVar14 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                           (*(long *)(lVar11 + 0x28),0);
        if (*(long *)(lVar14 + 8) != 0) {
          uVar6 = Atlas_Definitions_SeasonsRotationDefinition__get_StartDate();
          if (*(long *)(lVar11 + 0x28) != 0) {
            lVar14 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                               (*(long *)(lVar11 + 0x28),0);
            if (*(long *)(lVar14 + 8) != 0) {
              iVar2 = Atlas_Definitions_SeasonRotationHelper__GetNumberOfReruns
                                (uVar10,uVar6,*(undefined4 *)(*(long *)(lVar14 + 8) + 0x20),uVar1);
              if (*(long *)(lVar11 + 0x28) != 0) {
                lVar11 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                   (*(long *)(lVar11 + 0x28),0);
                if (*(long *)(lVar11 + 8) != 0) {
                  return (ulong)(uint)(*(int *)(*(long *)(lVar11 + 8) + 0x40) + iVar2);
                }
              }
            }
          }
        }
      }
    }
    lVar11 = func_0x00f78af4();
    if ((bRam0000000003eb4c83 & 1) == 0) {
      func_0x00f78a20(0x3d575b0);
      func_0x00f78a20(0x3d3a390);
      func_0x00f78a20(0x3d3a398);
      func_0x00f78a20(0x3d3fe48);
      func_0x00f78a20(0x3d3fe50);
      func_0x00f78a20(0x3d247f0);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d66390);
      func_0x00f78a20(0x3d66210);
      bRam0000000003eb4c83 = 1;
    }
    uStack_e0 = 0;
    uStack_dc = 0;
    lStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    if (((*(long *)(lVar11 + 0x10) != 0) &&
        (lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + 0x10), lVar11 != 0)) &&
       (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar11,&lStack_d8,uRam0000000003d575b0), lStack_d8 != 0)) {
      iVar2 = 0;
      while( true ) {
        uVar4 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_d8,uRam0000000003d3fe48);
        if ((int)uVar4 <= iVar2) {
          return uVar4;
        }
        if (lStack_d8 == 0) break;
        plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_d8,iVar2,uRam0000000003d3fe50);
        if (plVar7 == (long *)0x0) {
code_r0x014f2d58:
          plVar7 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
          goto code_r0x014f2d58;
          if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
            plVar7 = (long *)0x0;
          }
        }
        if (lStack_d8 == 0) break;
        iVar12 = 0;
        while (iVar3 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_d8,uRam0000000003d3fe48), iVar12 < iVar3) {
          if (lStack_d8 == 0) goto code_r0x014f3068;
          plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_d8,iVar12,uRam0000000003d3fe50);
          if (plVar8 == (long *)0x0) {
code_r0x014f2dd8:
            plVar8 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
            goto code_r0x014f2dd8;
            if (*(long *)(*(long *)(*plVar8 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 + -8) !=
                /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
              plVar8 = (long *)0x0;
            }
          }
          uStack_dc = 0;
          if (plVar7 == (long *)0x0) goto code_r0x014f3068;
          lVar11 = plVar7[7];
          while( true ) {
            if (lVar11 == 0) goto code_r0x014f3068;
            if (*(int *)(lVar11 + 0x18) <= (int)uStack_dc) break;
            uStack_e0 = 0;
            if (plVar8 == (long *)0x0) goto code_r0x014f3068;
            lVar11 = plVar8[7];
            while( true ) {
              if (lVar11 == 0) goto code_r0x014f3068;
              lVar14 = (long)(int)uStack_dc;
              if (*(int *)(lVar11 + 0x18) <= (int)uStack_e0) break;
              if ((iVar2 != iVar12) || (uStack_dc != uStack_e0)) {
                lVar15 = plVar7[7];
                if (lVar15 == 0) goto code_r0x014f3068;
                if (*(uint *)(lVar15 + 0x18) <= uStack_dc) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  lVar11 = plVar8[7];
                }
                uVar13 = uStack_e0;
                lVar14 = *(long *)(lVar15 + 0x10) + lVar14 * 0x10;
                uStack_e8 = *(undefined8 *)(lVar14 + 0x28);
                uStack_f0 = *(undefined8 *)(lVar14 + 0x20);
                if (lVar11 == 0) goto code_r0x014f3068;
                if (*(uint *)(lVar11 + 0x18) <= uStack_e0) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar11 = *(long *)(lVar11 + 0x10) + (long)(int)uVar13 * 0x10;
                iVar3 = Atlas_Definitions_DateRange__DoesDateRangeOverlap
                                  (&uStack_f0,*(undefined8 *)(lVar11 + 0x20),
                                   *(undefined8 *)(lVar11 + 0x28),0);
                if (iVar3 != 0) {
                  plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
                  if (plVar9 == (long *)0x0) goto code_r0x014f3068;
                  lVar11 = plVar7[3];
                  if ((lVar11 == 0) ||
                     (lVar14 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar14 != 0)
                     ) {
                    uVar4 = plVar9[3];
                    if ((int)uVar4 == 0) goto code_r0x014f306c;
                    plVar9[4] = lVar11;
                    if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                      lVar11 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar9 + 0x40))
                      ;
                      if (lVar11 == 0) goto code_r0x014f3094;
                      uVar4 = plVar9[3];
                    }
                    if ((uVar4 & 0xfffffffe) == 0) goto code_r0x014f306c;
                    plVar9[5] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                    lVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_dc,0);
                    if ((lVar11 == 0) ||
                       (lVar14 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar14 != 0)) {
                      uVar4 = plVar9[3];
                      if ((uint)uVar4 < 3) goto code_r0x014f306c;
                      plVar9[6] = lVar11;
                      if (/*STR(' overlaps ')*/ lRam0000000003d66390 != 0) {
                        lVar11 = func_0x00f78adc(/*STR(' overlaps ')*/ lRam0000000003d66390,
                                                 *(undefined8 *)(*plVar9 + 0x40));
                        if (lVar11 == 0) goto code_r0x014f3094;
                        uVar4 = plVar9[3];
                      }
                      uVar13 = (uint)uVar4;
                      if ((uVar4 & 0xfffffffc) == 0) goto code_r0x014f306c;
                      plVar9[7] = /*STR(' overlaps ')*/ lRam0000000003d66390;
                      lVar11 = plVar8[3];
                      if (lVar11 != 0) {
                        lVar14 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40));
                        if (lVar14 == 0) goto code_r0x014f3094;
                        uVar13 = (uint)plVar9[3];
                      }
                      if (uVar13 < 5) goto code_r0x014f306c;
                      plVar9[8] = lVar11;
                      if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                        lVar11 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,
                                                 *(undefined8 *)(*plVar9 + 0x40));
                        if (lVar11 == 0) goto code_r0x014f3094;
                        uVar13 = *(uint *)(plVar9 + 3);
                      }
                      if (uVar13 < 6) goto code_r0x014f306c;
                      plVar9[9] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                      lVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_e0,0);
                      if ((lVar11 == 0) ||
                         (lVar14 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar14 != 0)) {
                        if (6 < *(uint *)(plVar9 + 3)) {
                          plVar9[10] = lVar11;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
                          goto code_r0x014f3020;
                        }
                        goto code_r0x014f306c;
                      }
                    }
                  }
code_r0x014f3094:
                  uVar10 = func_0x00f78b14();
                  goto code_r0x014f3098;
                }
              }
code_r0x014f3020:
              uStack_e0 = uStack_e0 + 1;
              lVar11 = plVar8[7];
            }
            uStack_dc = uStack_dc + 1;
            lVar11 = plVar7[7];
          }
          iVar12 = iVar12 + 1;
          if (lStack_d8 == 0) goto code_r0x014f3068;
        }
        iVar2 = iVar2 + 1;
        if (lStack_d8 == 0) break;
      }
    }
code_r0x014f3068:
    func_0x00f78af4();
code_r0x014f306c:
    uVar10 = func_0x00f78b24();
code_r0x014f3098:
    lVar11 = func_0x00f78ac0(uVar10,0);
    if ((bRam0000000003eb4c85 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c85 = 1;
    }
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    *(ulong *)(lVar11 + 0x38) = uVar4;
    return uVar4;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  iVar2 = iVar2 + param_3;
  if ((bRam0000000003eb4c47 & 1) == 0) {
    func_0x00f78a20(0x3d3d8f0);
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d3d908);
    bRam0000000003eb4c47 = 1;
  }
  uVar4 = Atlas_Save_SaveManager__GetIntDataIndex(lVar11,uVar10);
  uVar5 = Atlas_Save_SaveManager__get_SaveData(lVar11);
  if ((int)(uint)uVar4 < 0) {
    if ((uVar5 != 0) && (*(long *)(uVar5 + 0x110) != 0)) {
      uVar4 = /*System.Collections.Generic.List<SaveData.KeyValueInt>$$Add*/ func_0x0258c934(*(long *)(uVar5 + 0x110),uVar10,iVar2,uRam0000000003d3d8f0);
LAB_014ecf58:
      *(undefined1 *)(lVar11 + 0x110) = 1;
      return uVar4;
    }
  }
  else if ((uVar5 != 0) && (lVar14 = *(long *)(uVar5 + 0x110), lVar14 != 0)) {
    if (*(uint *)(lVar14 + 0x18) <= (uint)uVar4) {
      uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(int *)(*(long *)(lVar14 + 0x10) + (uVar4 & 0xffffffff) * 0x10 + 0x28) == iVar2) {
      return uVar5;
    }
    lVar14 = Atlas_Save_SaveManager__get_SaveData(lVar11);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x110) != 0)) {
      uVar4 = /*System.Collections.Generic.List<SaveData.KeyValueInt>$$set_Item*/ func_0x0258c5d8(*(long *)(lVar14 + 0x110),uVar4,uVar10,iVar2,uRam0000000003d3d908);
      goto LAB_014ecf58;
    }
  }
  auVar16 = func_0x00f78af4();
  if ((bRam0000000003eb4c49 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c49 = 1;
  }
  lVar11 = Atlas_Save_SaveManager__get_SaveData(auVar16._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4d & 1) == 0) {
    func_0x00f78a20(0x3d3d8f8);
    func_0x00f78a20(0x3d3d900);
    bRam0000000003eb4c4d = 1;
  }
  if ((lVar11 != 0) && (lVar14 = *(long *)(lVar11 + 0x110), lVar14 != 0)) {
    uVar4 = 0;
    do {
      uVar13 = (uint)uVar4;
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar13) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar13) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar13 * 0x10 + 0x20);
      if (lVar14 == 0) break;
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar14,auVar16._8_8_,5,0);
      if ((uVar5 & 1) != 0) {
        return uVar4;
      }
      uVar4 = (ulong)(uVar13 + 1);
      lVar14 = *(long *)(lVar11 + 0x110);
    } while (lVar14 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14f2ae8 | Atlas.Stats.SeasonsManager.GetRewardForIndex
// ============================================================

ulong Atlas_Stats_SeasonsManager__GetRewardForIndex(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  long lStack_a8;
  
  if ((param_2 == 0) || (lVar12 = *(long *)(param_2 + 0x40), lVar12 == 0)) {
    func_0x00f78af4();
  }
  else if (param_3 < *(uint *)(lVar12 + 0x18)) {
    return *(ulong *)(lVar12 + (long)(int)param_3 * 8 + 0x20);
  }
  uVar4 = func_0x00f78b24();
  lVar12 = func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb4c82 & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d3bc38);
    bRam0000000003eb4c82 = 1;
  }
  if (*(long *)(lVar12 + 0x28) != 0) {
    lVar5 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef(*(long *)(lVar12 + 0x28),0)
    ;
    if (((*(long *)(lVar5 + 8) != 0) && (lVar5 = *(long *)(*(long *)(lVar5 + 8) + 0x30), lVar5 != 0)
        ) && (*(long *)(lVar12 + 0x28) != 0)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x18);
      uVar4 = *(undefined8 *)(lVar12 + 0x38);
      lVar5 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                        (*(long *)(lVar12 + 0x28),0);
      if (*(long *)(lVar5 + 8) != 0) {
        uVar6 = Atlas_Definitions_SeasonsRotationDefinition__get_StartDate();
        if (*(long *)(lVar12 + 0x28) != 0) {
          lVar5 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                            (*(long *)(lVar12 + 0x28),0);
          if (*(long *)(lVar5 + 8) != 0) {
            iVar2 = Atlas_Definitions_SeasonRotationHelper__GetNumberOfReruns
                              (uVar4,uVar6,*(undefined4 *)(*(long *)(lVar5 + 8) + 0x20),uVar1);
            if (*(long *)(lVar12 + 0x28) != 0) {
              lVar12 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                 (*(long *)(lVar12 + 0x28),0);
              if (*(long *)(lVar12 + 8) != 0) {
                return (ulong)(uint)(*(int *)(*(long *)(lVar12 + 8) + 0x40) + iVar2);
              }
            }
          }
        }
      }
    }
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb4c83 & 1) == 0) {
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d3a390);
    func_0x00f78a20(0x3d3a398);
    func_0x00f78a20(0x3d3fe48);
    func_0x00f78a20(0x3d3fe50);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66390);
    func_0x00f78a20(0x3d66210);
    bRam0000000003eb4c83 = 1;
  }
  uStack_b0 = 0;
  uStack_ac = 0;
  lStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (((*(long *)(lVar12 + 0x10) != 0) &&
      (lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x10), lVar12 != 0)) &&
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar12,&lStack_a8,uRam0000000003d575b0), lStack_a8 != 0)) {
    iVar2 = 0;
    while( true ) {
      uVar7 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_a8,uRam0000000003d3fe48);
      if ((int)uVar7 <= iVar2) {
        return uVar7;
      }
      if (lStack_a8 == 0) break;
      plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_a8,iVar2,uRam0000000003d3fe50);
      if (plVar8 == (long *)0x0) {
code_r0x014f2d58:
        plVar8 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) goto code_r0x014f2d58;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 +
                     -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
          plVar8 = (long *)0x0;
        }
      }
      if (lStack_a8 == 0) break;
      iVar13 = 0;
      while (iVar3 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_a8,uRam0000000003d3fe48), iVar13 < iVar3) {
        if (lStack_a8 == 0) goto code_r0x014f3068;
        plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_a8,iVar13,uRam0000000003d3fe50);
        if (plVar9 == (long *)0x0) {
code_r0x014f2dd8:
          plVar9 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
          goto code_r0x014f2dd8;
          if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
            plVar9 = (long *)0x0;
          }
        }
        uStack_ac = 0;
        if (plVar8 == (long *)0x0) goto code_r0x014f3068;
        lVar12 = plVar8[7];
        while( true ) {
          if (lVar12 == 0) goto code_r0x014f3068;
          if (*(int *)(lVar12 + 0x18) <= (int)uStack_ac) break;
          uStack_b0 = 0;
          if (plVar9 == (long *)0x0) goto code_r0x014f3068;
          lVar12 = plVar9[7];
          while( true ) {
            if (lVar12 == 0) goto code_r0x014f3068;
            lVar5 = (long)(int)uStack_ac;
            if (*(int *)(lVar12 + 0x18) <= (int)uStack_b0) break;
            if ((iVar2 != iVar13) || (uStack_ac != uStack_b0)) {
              lVar14 = plVar8[7];
              if (lVar14 == 0) goto code_r0x014f3068;
              if (*(uint *)(lVar14 + 0x18) <= uStack_ac) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar12 = plVar9[7];
              }
              uVar11 = uStack_b0;
              lVar5 = *(long *)(lVar14 + 0x10) + lVar5 * 0x10;
              uStack_b8 = *(undefined8 *)(lVar5 + 0x28);
              uStack_c0 = *(undefined8 *)(lVar5 + 0x20);
              if (lVar12 == 0) goto code_r0x014f3068;
              if (*(uint *)(lVar12 + 0x18) <= uStack_b0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar12 = *(long *)(lVar12 + 0x10) + (long)(int)uVar11 * 0x10;
              iVar3 = Atlas_Definitions_DateRange__DoesDateRangeOverlap
                                (&uStack_c0,*(undefined8 *)(lVar12 + 0x20),
                                 *(undefined8 *)(lVar12 + 0x28),0);
              if (iVar3 != 0) {
                plVar10 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
                if (plVar10 == (long *)0x0) goto code_r0x014f3068;
                lVar12 = plVar8[3];
                if ((lVar12 == 0) ||
                   (lVar5 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar5 != 0)) {
                  uVar7 = plVar10[3];
                  if ((int)uVar7 == 0) goto code_r0x014f306c;
                  plVar10[4] = lVar12;
                  if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                    lVar12 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar10 + 0x40));
                    if (lVar12 == 0) goto code_r0x014f3094;
                    uVar7 = plVar10[3];
                  }
                  if ((uVar7 & 0xfffffffe) == 0) goto code_r0x014f306c;
                  plVar10[5] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                  lVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_ac,0);
                  if ((lVar12 == 0) ||
                     (lVar5 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar5 != 0))
                  {
                    uVar7 = plVar10[3];
                    if ((uint)uVar7 < 3) goto code_r0x014f306c;
                    plVar10[6] = lVar12;
                    if (/*STR(' overlaps ')*/ lRam0000000003d66390 != 0) {
                      lVar12 = func_0x00f78adc(/*STR(' overlaps ')*/ lRam0000000003d66390,*(undefined8 *)(*plVar10 + 0x40)
                                              );
                      if (lVar12 == 0) goto code_r0x014f3094;
                      uVar7 = plVar10[3];
                    }
                    uVar11 = (uint)uVar7;
                    if ((uVar7 & 0xfffffffc) == 0) goto code_r0x014f306c;
                    plVar10[7] = /*STR(' overlaps ')*/ lRam0000000003d66390;
                    lVar12 = plVar9[3];
                    if (lVar12 != 0) {
                      lVar5 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                      if (lVar5 == 0) goto code_r0x014f3094;
                      uVar11 = (uint)plVar10[3];
                    }
                    if (uVar11 < 5) goto code_r0x014f306c;
                    plVar10[8] = lVar12;
                    if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                      lVar12 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar10 + 0x40)
                                              );
                      if (lVar12 == 0) goto code_r0x014f3094;
                      uVar11 = *(uint *)(plVar10 + 3);
                    }
                    if (uVar11 < 6) goto code_r0x014f306c;
                    plVar10[9] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                    lVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_b0,0);
                    if ((lVar12 == 0) ||
                       (lVar5 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar5 != 0
                       )) {
                      if (6 < *(uint *)(plVar10 + 3)) {
                        plVar10[10] = lVar12;
                        /*System.String$$Concat*/ func_0x029cfadc(plVar10,0);
                        goto code_r0x014f3020;
                      }
                      goto code_r0x014f306c;
                    }
                  }
                }
code_r0x014f3094:
                uVar4 = func_0x00f78b14();
                goto code_r0x014f3098;
              }
            }
code_r0x014f3020:
            uStack_b0 = uStack_b0 + 1;
            lVar12 = plVar9[7];
          }
          uStack_ac = uStack_ac + 1;
          lVar12 = plVar8[7];
        }
        iVar13 = iVar13 + 1;
        if (lStack_a8 == 0) goto code_r0x014f3068;
      }
      iVar2 = iVar2 + 1;
      if (lStack_a8 == 0) break;
    }
  }
code_r0x014f3068:
  func_0x00f78af4();
code_r0x014f306c:
  uVar4 = func_0x00f78b24();
code_r0x014f3098:
  lVar12 = func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb4c85 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c85 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  *(ulong *)(lVar12 + 0x38) = uVar7;
  return uVar7;
}



// ============================================================
// RVA: 0x14f2b28 | Atlas.Stats.SeasonsManager.GetNumberOfSeasonReruns
// ============================================================

ulong Atlas_Stats_SeasonsManager__GetNumberOfSeasonReruns(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  long lStack_98;
  
  if ((bRam0000000003eb4c82 & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d3bc38);
    bRam0000000003eb4c82 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                      (*(long *)(param_1 + 0x28),0);
    if (((*(long *)(lVar4 + 8) != 0) && (lVar4 = *(long *)(*(long *)(lVar4 + 8) + 0x30), lVar4 != 0)
        ) && (*(long *)(param_1 + 0x28) != 0)) {
      uVar1 = *(undefined4 *)(lVar4 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      lVar4 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                        (*(long *)(param_1 + 0x28),0);
      if (*(long *)(lVar4 + 8) != 0) {
        uVar5 = Atlas_Definitions_SeasonsRotationDefinition__get_StartDate();
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar4 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                            (*(long *)(param_1 + 0x28),0);
          if (*(long *)(lVar4 + 8) != 0) {
            iVar2 = Atlas_Definitions_SeasonRotationHelper__GetNumberOfReruns
                              (uVar12,uVar5,*(undefined4 *)(*(long *)(lVar4 + 8) + 0x20),uVar1);
            if (*(long *)(param_1 + 0x28) != 0) {
              lVar4 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                                (*(long *)(param_1 + 0x28),0);
              if (*(long *)(lVar4 + 8) != 0) {
                return (ulong)(uint)(*(int *)(*(long *)(lVar4 + 8) + 0x40) + iVar2);
              }
            }
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4c83 & 1) == 0) {
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d3a390);
    func_0x00f78a20(0x3d3a398);
    func_0x00f78a20(0x3d3fe48);
    func_0x00f78a20(0x3d3fe50);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66390);
    func_0x00f78a20(0x3d66210);
    bRam0000000003eb4c83 = 1;
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  lStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (((*(long *)(lVar4 + 0x10) != 0) &&
      (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 != 0)) &&
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar4,&lStack_98,uRam0000000003d575b0), lStack_98 != 0)) {
    iVar2 = 0;
    while( true ) {
      uVar6 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_98,uRam0000000003d3fe48);
      if ((int)uVar6 <= iVar2) {
        return uVar6;
      }
      if (lStack_98 == 0) break;
      plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_98,iVar2,uRam0000000003d3fe50);
      if (plVar7 == (long *)0x0) {
code_r0x014f2d58:
        plVar7 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) goto code_r0x014f2d58;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 +
                     -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
          plVar7 = (long *)0x0;
        }
      }
      if (lStack_98 == 0) break;
      iVar11 = 0;
      while (iVar3 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_98,uRam0000000003d3fe48), iVar11 < iVar3) {
        if (lStack_98 == 0) goto code_r0x014f3068;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_98,iVar11,uRam0000000003d3fe50);
        if (plVar8 == (long *)0x0) {
code_r0x014f2dd8:
          plVar8 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
          goto code_r0x014f2dd8;
          if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
            plVar8 = (long *)0x0;
          }
        }
        uStack_9c = 0;
        if (plVar7 == (long *)0x0) goto code_r0x014f3068;
        lVar4 = plVar7[7];
        while( true ) {
          if (lVar4 == 0) goto code_r0x014f3068;
          if (*(int *)(lVar4 + 0x18) <= (int)uStack_9c) break;
          uStack_a0 = 0;
          if (plVar8 == (long *)0x0) goto code_r0x014f3068;
          lVar4 = plVar8[7];
          while( true ) {
            if (lVar4 == 0) goto code_r0x014f3068;
            lVar13 = (long)(int)uStack_9c;
            if (*(int *)(lVar4 + 0x18) <= (int)uStack_a0) break;
            if ((iVar2 != iVar11) || (uStack_9c != uStack_a0)) {
              lVar14 = plVar7[7];
              if (lVar14 == 0) goto code_r0x014f3068;
              if (*(uint *)(lVar14 + 0x18) <= uStack_9c) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar4 = plVar8[7];
              }
              uVar10 = uStack_a0;
              lVar13 = *(long *)(lVar14 + 0x10) + lVar13 * 0x10;
              uStack_a8 = *(undefined8 *)(lVar13 + 0x28);
              uStack_b0 = *(undefined8 *)(lVar13 + 0x20);
              if (lVar4 == 0) goto code_r0x014f3068;
              if (*(uint *)(lVar4 + 0x18) <= uStack_a0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar4 = *(long *)(lVar4 + 0x10) + (long)(int)uVar10 * 0x10;
              iVar3 = Atlas_Definitions_DateRange__DoesDateRangeOverlap
                                (&uStack_b0,*(undefined8 *)(lVar4 + 0x20),
                                 *(undefined8 *)(lVar4 + 0x28),0);
              if (iVar3 != 0) {
                plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
                if (plVar9 == (long *)0x0) goto code_r0x014f3068;
                lVar4 = plVar7[3];
                if ((lVar4 == 0) ||
                   (lVar13 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar13 != 0)) {
                  uVar6 = plVar9[3];
                  if ((int)uVar6 == 0) goto code_r0x014f306c;
                  plVar9[4] = lVar4;
                  if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                    lVar4 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar4 == 0) goto code_r0x014f3094;
                    uVar6 = plVar9[3];
                  }
                  if ((uVar6 & 0xfffffffe) == 0) goto code_r0x014f306c;
                  plVar9[5] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                  lVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_9c,0);
                  if ((lVar4 == 0) ||
                     (lVar13 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar13 != 0))
                  {
                    uVar6 = plVar9[3];
                    if ((uint)uVar6 < 3) goto code_r0x014f306c;
                    plVar9[6] = lVar4;
                    if (/*STR(' overlaps ')*/ lRam0000000003d66390 != 0) {
                      lVar4 = func_0x00f78adc(/*STR(' overlaps ')*/ lRam0000000003d66390,*(undefined8 *)(*plVar9 + 0x40));
                      if (lVar4 == 0) goto code_r0x014f3094;
                      uVar6 = plVar9[3];
                    }
                    uVar10 = (uint)uVar6;
                    if ((uVar6 & 0xfffffffc) == 0) goto code_r0x014f306c;
                    plVar9[7] = /*STR(' overlaps ')*/ lRam0000000003d66390;
                    lVar4 = plVar8[3];
                    if (lVar4 != 0) {
                      lVar13 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar9 + 0x40));
                      if (lVar13 == 0) goto code_r0x014f3094;
                      uVar10 = (uint)plVar9[3];
                    }
                    if (uVar10 < 5) goto code_r0x014f306c;
                    plVar9[8] = lVar4;
                    if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                      lVar4 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar9 + 0x40));
                      if (lVar4 == 0) goto code_r0x014f3094;
                      uVar10 = *(uint *)(plVar9 + 3);
                    }
                    if (uVar10 < 6) goto code_r0x014f306c;
                    plVar9[9] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                    lVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_a0,0);
                    if ((lVar4 == 0) ||
                       (lVar13 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar13 != 0
                       )) {
                      if (6 < *(uint *)(plVar9 + 3)) {
                        plVar9[10] = lVar4;
                        /*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
                        goto code_r0x014f3020;
                      }
                      goto code_r0x014f306c;
                    }
                  }
                }
code_r0x014f3094:
                uVar12 = func_0x00f78b14();
                goto code_r0x014f3098;
              }
            }
code_r0x014f3020:
            uStack_a0 = uStack_a0 + 1;
            lVar4 = plVar8[7];
          }
          uStack_9c = uStack_9c + 1;
          lVar4 = plVar7[7];
        }
        iVar11 = iVar11 + 1;
        if (lStack_98 == 0) goto code_r0x014f3068;
      }
      iVar2 = iVar2 + 1;
      if (lStack_98 == 0) break;
    }
  }
code_r0x014f3068:
  func_0x00f78af4();
code_r0x014f306c:
  uVar12 = func_0x00f78b24();
code_r0x014f3098:
  lVar4 = func_0x00f78ac0(uVar12,0);
  if ((bRam0000000003eb4c85 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c85 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  *(ulong *)(lVar4 + 0x38) = uVar6;
  return uVar6;
}



// ============================================================
// RVA: 0x14f2c14 | Atlas.Stats.SeasonsManager.CheckIfDateRangesOveralp
// ============================================================

void Atlas_Stats_SeasonsManager__CheckIfDateRangesOveralp(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003eb4c83 & 1) == 0) {
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d3a390);
    func_0x00f78a20(0x3d3a398);
    func_0x00f78a20(0x3d3fe48);
    func_0x00f78a20(0x3d3fe50);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66390);
    func_0x00f78a20(0x3d66210);
    bRam0000000003eb4c83 = 1;
  }
  uStack_70 = 0;
  uStack_6c = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) &&
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar3,&lStack_68,uRam0000000003d575b0), lStack_68 != 0)) {
    iVar10 = 0;
    while( true ) {
      iVar1 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_68,uRam0000000003d3fe48);
      if (iVar1 <= iVar10) {
        return;
      }
      if (lStack_68 == 0) break;
      plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_68,iVar10,uRam0000000003d3fe50);
      if (plVar4 == (long *)0x0) {
LAB_014f2d58:
        plVar4 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) goto LAB_014f2d58;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8 +
                     -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
          plVar4 = (long *)0x0;
        }
      }
      if (lStack_68 == 0) break;
      iVar1 = 0;
      while (iVar2 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(lStack_68,uRam0000000003d3fe48), iVar1 < iVar2) {
        if (lStack_68 == 0) goto LAB_014f3068;
        plVar5 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Item*/ func_0x027bcbf4(lStack_68,iVar1,uRam0000000003d3fe50);
        if (plVar5 == (long *)0x0) {
code_r0x014f2dd8:
          plVar5 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar5 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300))
          goto code_r0x014f2dd8;
          if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0) {
            plVar5 = (long *)0x0;
          }
        }
        uStack_6c = 0;
        if (plVar4 == (long *)0x0) goto LAB_014f3068;
        lVar3 = plVar4[7];
        while( true ) {
          if (lVar3 == 0) goto LAB_014f3068;
          if (*(int *)(lVar3 + 0x18) <= (int)uStack_6c) break;
          uStack_70 = 0;
          if (plVar5 == (long *)0x0) goto LAB_014f3068;
          lVar3 = plVar5[7];
          while( true ) {
            if (lVar3 == 0) goto LAB_014f3068;
            lVar11 = (long)(int)uStack_6c;
            if (*(int *)(lVar3 + 0x18) <= (int)uStack_70) break;
            if ((iVar10 != iVar1) || (uStack_6c != uStack_70)) {
              lVar12 = plVar4[7];
              if (lVar12 == 0) goto LAB_014f3068;
              if (*(uint *)(lVar12 + 0x18) <= uStack_6c) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar3 = plVar5[7];
              }
              uVar8 = uStack_70;
              lVar11 = *(long *)(lVar12 + 0x10) + lVar11 * 0x10;
              uStack_78 = *(undefined8 *)(lVar11 + 0x28);
              uStack_80 = *(undefined8 *)(lVar11 + 0x20);
              if (lVar3 == 0) goto LAB_014f3068;
              if (*(uint *)(lVar3 + 0x18) <= uStack_70) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar3 = *(long *)(lVar3 + 0x10) + (long)(int)uVar8 * 0x10;
              iVar2 = Atlas_Definitions_DateRange__DoesDateRangeOverlap
                                (&uStack_80,*(undefined8 *)(lVar3 + 0x20),
                                 *(undefined8 *)(lVar3 + 0x28),0);
              if (iVar2 != 0) {
                plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
                if (plVar6 == (long *)0x0) goto LAB_014f3068;
                lVar3 = plVar4[3];
                if ((lVar3 == 0) ||
                   (lVar11 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0)) {
                  uVar9 = plVar6[3];
                  if ((int)uVar9 == 0) goto code_r0x014f306c;
                  plVar6[4] = lVar3;
                  if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                    lVar3 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar6 + 0x40));
                    if (lVar3 == 0) goto code_r0x014f3094;
                    uVar9 = plVar6[3];
                  }
                  if ((uVar9 & 0xfffffffe) == 0) goto code_r0x014f306c;
                  plVar6[5] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                  lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_6c,0);
                  if ((lVar3 == 0) ||
                     (lVar11 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0))
                  {
                    uVar9 = plVar6[3];
                    if ((uint)uVar9 < 3) goto code_r0x014f306c;
                    plVar6[6] = lVar3;
                    if (/*STR(' overlaps ')*/ lRam0000000003d66390 != 0) {
                      lVar3 = func_0x00f78adc(/*STR(' overlaps ')*/ lRam0000000003d66390,*(undefined8 *)(*plVar6 + 0x40));
                      if (lVar3 == 0) goto code_r0x014f3094;
                      uVar9 = plVar6[3];
                    }
                    uVar8 = (uint)uVar9;
                    if ((uVar9 & 0xfffffffc) == 0) goto code_r0x014f306c;
                    plVar6[7] = /*STR(' overlaps ')*/ lRam0000000003d66390;
                    lVar3 = plVar5[3];
                    if (lVar3 != 0) {
                      lVar11 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar6 + 0x40));
                      if (lVar11 == 0) goto code_r0x014f3094;
                      uVar8 = (uint)plVar6[3];
                    }
                    if (uVar8 < 5) goto code_r0x014f306c;
                    plVar6[8] = lVar3;
                    if (/*STR(' date range Index: ')*/ lRam0000000003d66210 != 0) {
                      lVar3 = func_0x00f78adc(/*STR(' date range Index: ')*/ lRam0000000003d66210,*(undefined8 *)(*plVar6 + 0x40));
                      if (lVar3 == 0) goto code_r0x014f3094;
                      uVar8 = *(uint *)(plVar6 + 3);
                    }
                    if (uVar8 < 6) goto code_r0x014f306c;
                    plVar6[9] = /*STR(' date range Index: ')*/ lRam0000000003d66210;
                    lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_70,0);
                    if ((lVar3 == 0) ||
                       (lVar11 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0
                       )) {
                      if (6 < *(uint *)(plVar6 + 3)) {
                        plVar6[10] = lVar3;
                        /*System.String$$Concat*/ func_0x029cfadc(plVar6,0);
                        goto code_r0x014f3020;
                      }
                      goto code_r0x014f306c;
                    }
                  }
                }
code_r0x014f3094:
                uVar7 = func_0x00f78b14();
                goto code_r0x014f3098;
              }
            }
code_r0x014f3020:
            uStack_70 = uStack_70 + 1;
            lVar3 = plVar5[7];
          }
          uStack_6c = uStack_6c + 1;
          lVar3 = plVar4[7];
        }
        iVar1 = iVar1 + 1;
        if (lStack_68 == 0) goto LAB_014f3068;
      }
      iVar10 = iVar10 + 1;
      if (lStack_68 == 0) break;
    }
  }
LAB_014f3068:
  func_0x00f78af4();
code_r0x014f306c:
  uVar7 = func_0x00f78b24();
code_r0x014f3098:
  lVar3 = func_0x00f78ac0(uVar7,0);
  if ((bRam0000000003eb4c85 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c85 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  *(undefined8 *)(lVar3 + 0x38) = uVar7;
  return;
}



// ============================================================
// RVA: 0x14f30a0 | Atlas.Stats.SeasonsManager.UpdateCurrentDateTime
// ============================================================

void Atlas_Stats_SeasonsManager__UpdateCurrentDateTime(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4c85 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c85 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14f3110 | Atlas.Stats.SeasonsManager..ctor
// ============================================================

void Atlas_Stats_SeasonsManager___ctor(void)

{
  return;
}



