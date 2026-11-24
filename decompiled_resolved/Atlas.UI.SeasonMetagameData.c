// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SeasonMetagameData

// ============================================================
// RVA: 0x14ef3c4 | Atlas.UI.SeasonMetagameData.get_ShowAsInActive
// ============================================================

undefined1 Atlas_UI_SeasonMetagameData__get_ShowAsInActive(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14ef3cc | Atlas.UI.SeasonMetagameData..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x014ef4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x014ef4f8) */
/* WARNING: Removing unreachable block (ram,0x014ef4fc) */
/* WARNING: Removing unreachable block (ram,0x014ef504) */
/* WARNING: Removing unreachable block (ram,0x014ef50c) */
/* WARNING: Removing unreachable block (ram,0x014ef518) */
/* WARNING: Removing unreachable block (ram,0x014ef520) */
/* WARNING: Removing unreachable block (ram,0x014ef534) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_UI_SeasonMetagameData___ctor
                 (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined1 ****param_6,undefined8 param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 ****ppppuVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined1 ***pppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  int extraout_w1;
  long lVar17;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 ****ppppuStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined1 ****ppppuStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 ****ppppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  auVar2._8_8_ = param_7;
  auVar2._0_8_ = param_1;
  auVar22._8_8_ = param_7;
  auVar22._0_8_ = param_1;
  if ((bRam0000000003eb4c5f & 1) == 0) {
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d1f1d0);
    bRam0000000003eb4c5f = 1;
  }
  Atlas_UI_MetagameData___ctor(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined1 *****)(param_1 + 0x50) = param_6;
  *(char *)(param_1 + 0x58) = (char)param_7;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x58) != 0)) {
    plVar8 = (long *)func_0x00f78a34(/*Atlas.UI.MapMetagameData[]_TypeInfo*/ uRam0000000003d1f1d0,
                                     *(undefined4 *)(*(long *)(param_2 + 0x58) + 0x18));
    *(long **)(param_1 + 0x40) = plVar8;
    return plVar8;
  }
  lVar9 = func_0x00f78af4();
  ppuStack_70 = (undefined8 **)&puStack_60;
  puStack_58 = &Atlas_UI_SeasonMetagameData__get_ID;
  if (*(long *)(lVar9 + 0x10) != 0) {
    return *(long **)(*(long *)(lVar9 + 0x10) + 0x18);
  }
  puStack_60 = &stack0xfffffffffffffff0;
  auVar20 = func_0x00f78af4();
  uVar16 = auVar20._8_8_;
  puStack_68 = &Atlas_UI_SeasonMetagameData__IsRewardUnlockedAndUnseen;
  lVar9 = *(long *)(auVar20._0_8_ + 0x10);
  pppuStack_a0 = &ppuStack_70;
  ppppuStack_90 = param_6;
  lStack_88 = param_2;
  uStack_80 = param_7;
  lStack_78 = param_1;
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x40), auVar22 = auVar2, lVar9 == 0)) {
code_r0x014ef544:
    uVar16 = auVar22._8_8_;
    param_1 = auVar22._0_8_;
    func_0x00f78af4();
    ppuVar4 = ppuStack_70;
  }
  else {
    uVar7 = auVar20._8_4_;
    ppuVar4 = (undefined8 **)&puStack_60;
    if (uVar7 < *(uint *)(lVar9 + 0x18)) {
      pppuVar10 = *(undefined1 ****)(auVar20._0_8_ + 0x18);
      auVar22 = auVar20;
      if (pppuVar10 != (undefined1 ***)0x0) {
        lVar9 = *(long *)(lVar9 + (long)(int)uVar7 * 8 + 0x20);
        puStack_98 = &UNK_014ef4f8;
        lStack_b8 = (long)(int)uVar7;
        ppuStack_70 = (undefined8 **)&puStack_60;
        goto code_r0x0151fea0;
      }
      goto code_r0x014ef544;
    }
  }
  ppuStack_70 = ppuVar4;
  auVar20._8_8_ = uVar16;
  auVar20._0_8_ = param_1;
  uVar11 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar11,0);
  puStack_98 = &Atlas_UI_SeasonMetagameData__IsRewardUnlocked;
  lVar9 = *(long *)(auVar24._0_8_ + 0x10);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) {
code_r0x014ef594:
    func_0x00f78af4();
  }
  else if (auVar24._8_4_ < *(uint *)(lVar9 + 0x18)) {
    pppuVar10 = *(undefined1 ****)(auVar24._0_8_ + 0x18);
    if (pppuVar10 != (undefined1 ***)0x0) {
      lVar9 = *(long *)(lVar9 + (long)(int)auVar24._8_4_ * 8 + 0x20);
      puStack_98 = &Atlas_UI_SeasonMetagameData__IsRewardUnlocked;
      lStack_b8 = param_2;
code_r0x0151fea0:
      ppuStack_b0 = auVar20._8_8_;
      puStack_a8 = auVar20._0_8_;
      ppppuStack_c0 = param_6;
      if ((bRam0000000003eb4e2b & 1) == 0) {
        func_0x00f78a20(0x3d257d8,lVar9,0);
        auVar20._8_8_ = ppuStack_b0;
        auVar20._0_8_ = puStack_a8;
        bRam0000000003eb4e2b = 1;
      }
      ppuStack_b0 = auVar20._8_8_;
      puStack_a8 = auVar20._0_8_;
      uStack_130 = param_4;
      uStack_128 = param_5;
      if (pppuVar10[4] != (undefined1 **)0x0) {
        lVar14 = Atlas_Save_SaveManager__get_SaveData(pppuVar10[4],0);
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        ppppuVar3 = ppppuStack_c0;
        if ((bRam0000000003eb4e2c & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          bRam0000000003eb4e2c = 1;
        }
        puStack_d8 = (undefined *)0x0;
        pppuStack_e0 = (undefined8 ***)0x0;
        puStack_c8 = (undefined *)0x0;
        ppppuStack_d0 = (undefined1 ****)0x0;
        if ((lVar14 != 0) && (*(long *)(lVar14 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&pppuStack_e0,*(long *)(lVar14 + 0x38),uRam0000000003d3d950);
          do {
            plVar8 = (long *)/*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&pppuStack_e0,uRam0000000003d33740);
            if (((ulong)plVar8 & 1) == 0) {
              auStack_f0._0_4_ = 0x40;
              goto code_r0x01521720;
            }
            if (ppppuStack_d0 == (undefined1 ****)0x0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1521764);
              (*pcVar5)();
            }
            uVar15 = /*System.String$$Equals*/ func_0x029caa48(ppppuStack_d0,lVar9,4,0);
          } while ((uVar15 & 1) == 0);
          auStack_f0._0_4_ = 0x42;
code_r0x01521720:
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&pppuStack_e0,uRam0000000003d33738);
          if (auStack_f0._0_4_ != 0x42) {
            plVar8 = (long *)0x0;
          }
          return plVar8;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar8 = (long *)___cxa_begin_catch();
          lVar9 = *plVar8;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&pppuStack_e0,uRam0000000003eb4000);
          if (lVar9 == 0) {
            return (long *)0x0;
          }
        }
        else {
          __Unwind_Resume();
        }
        auVar22 = func_0x00f78ac0(lVar9,0);
        ppppuStack_120 = ppppuVar3;
        uStack_118 = 0x3eb4000;
        puStack_f8 = &Atlas_Stats_UnlockManager__IsUnlockUnseen;
        auStack_110._0_8_ = lVar14;
        auStack_110._8_8_ = lVar9;
        pppppuStack_100 = (undefined1 *****)&pppuStack_a0;
        if ((bRam0000000003eb4e2d & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          func_0x00f78a20(0x3d29680);
          bRam0000000003eb4e2d = 1;
        }
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        lStack_140 = 0;
        lVar9 = *(long *)(auVar22._0_8_ + 0x20);
        if (((lVar9 == 0) || (lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar9,0), lVar9 == 0)) ||
           (*(long *)(lVar9 + 0x38) == 0)) {
          auVar23 = func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_150,*(long *)(lVar9 + 0x38),uRam0000000003d3d950);
          do {
            uVar15 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_150,uRam0000000003d33740);
            uVar16 = uStack_138;
            if ((uVar15 & 1) == 0) goto code_r0x015218ec;
            if (lStack_140 == 0) {
              func_0x00f78af4();
              goto code_r0x01521928;
            }
            uVar15 = /*System.String$$Equals*/ func_0x029caa48(lStack_140,auVar22._8_8_,4,0);
          } while ((uVar15 & 1) == 0);
          uStack_151 = (undefined1)uVar16;
          lVar9 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_151);
          uStack_152 = 1;
          uVar16 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_152);
          auVar23._8_8_ = uVar16;
          auVar23._0_8_ = uVar16;
          if (lVar9 != 0) {
            uVar15 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar9,uVar16,0);
            if ((uVar15 & 1) == 0) {
code_r0x015218ec:
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
            }
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_150,uRam0000000003d33738);
            return plVar8;
          }
        }
        func_0x00f78af4(auVar23._0_8_,auVar23._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x152192c);
        (*pcVar5)();
      }
      auVar22 = func_0x00f78af4();
      lVar14 = auVar22._8_8_;
      auStack_f0._8_8_ = 0x3eb4000;
      puStack_c8 = &Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent;
      auStack_f0._0_8_ = param_6;
      pppuStack_e0 = (undefined8 ***)pppuVar10;
      puStack_d8 = (undefined *)lVar9;
      ppppuStack_d0 = (undefined1 ****)&pppuStack_a0;
      if ((bRam0000000003eb4e11 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        func_0x00f78a20(0x3d257d8);
        bRam0000000003eb4e11 = 1;
      }
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      ppppuStack_120 = (undefined1 ****)0x3d257d8;
      uStack_118 = 0x3eb4000;
      puStack_f8 = &UNK_0151ffa4;
      pppppuStack_100 = &ppppuStack_d0;
      auStack_110 = auVar22;
      if ((bRam0000000003eb4e46 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        bRam0000000003eb4e46 = 1;
      }
      if ((lVar14 != 0) && (lVar9 = *(long *)(lVar14 + 0x58), lVar9 != 0)) {
        iVar1 = *(int *)(lVar9 + 0x18);
        if (iVar1 < 1) {
          return (long *)0xffffffff;
        }
        plVar8 = (long *)0x0;
        do {
          uVar7 = (uint)plVar8;
          if (*(uint *)(lVar9 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar7 * 0x10 + 0x20);
          if (lVar9 == 0) break;
          uVar15 = /*System.String$$Equals*/ func_0x029caa48(lVar9,auVar22._0_8_,4,0);
          if ((uVar15 & 1) != 0) {
            return plVar8;
          }
          if (iVar1 - 1U == uVar7) {
            return (long *)0xffffffff;
          }
          lVar9 = *(long *)(lVar14 + 0x58);
          plVar8 = (long *)(ulong)(uVar7 + 1);
        } while (lVar9 != 0);
      }
      func_0x00f78af4();
      return (long *)0xffffffff;
    }
    goto code_r0x014ef594;
  }
  uVar11 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar11,0);
  puStack_a8 = &Atlas_UI_SeasonMetagameData__GetRewardAssetDefinition;
  uVar11 = 0x3eb4000;
  ppppuStack_d0 = param_6;
  puStack_c8 = (undefined *)param_2;
  ppppuStack_c0 = (undefined1 ****)uVar16;
  lStack_b8 = param_1;
  ppuStack_b0 = (undefined1 **)&pppuStack_a0;
  if ((bRam0000000003eb4c60 & 1) == 0) {
    ppuStack_b0 = (undefined1 **)&pppuStack_a0;
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c60 = 1;
  }
  lVar9 = *(long *)(auVar22._0_8_ + 0x10);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) {
code_r0x014ef660:
    func_0x00f78af4();
  }
  else if (auVar22._8_4_ < *(uint *)(lVar9 + 0x18)) {
    lVar14 = *(long *)(auVar22._0_8_ + 0x20);
    if (lVar14 != 0) {
      plVar8 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar14,*(undefined8 *)
                                               (lVar9 + (long)(int)auVar22._8_4_ * 8 + 0x20),0);
      if (plVar8 != (long *)0x0) {
        if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar8 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar8 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar8 = (long *)0x0;
        }
      }
      return plVar8;
    }
    goto code_r0x014ef660;
  }
  uVar16 = func_0x00f78b24();
  lVar9 = func_0x00f78ac0(uVar16,0);
  puStack_d8 = &Atlas_UI_SeasonMetagameData__GetFinalRewardAssetDefinition;
  uVar16 = 0x3eb4000;
  pppuStack_e0 = (undefined8 ***)&ppuStack_b0;
  auStack_f0 = auVar22;
  if ((bRam0000000003eb4c61 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c61 = 1;
  }
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar14 = *(long *)(lVar9 + 0x20);
    uVar12 = /*Atlas.Definitions.SeasonDefinition$$get_FinalRewardID*/ func_0x014ef1f4();
    lVar9 = 0;
    if (lVar14 != 0) {
      plVar8 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar14,uVar12,0);
      if (plVar8 != (long *)0x0) {
        if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar8 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar8 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar8 = (long *)0x0;
        }
      }
      return plVar8;
    }
  }
  auVar22 = func_0x00f78af4();
  pppppuVar6 = &pppppuStack_100;
  pppppuVar18 = &pppppuStack_100;
  puStack_f8 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
  lVar14 = *(long *)(auVar22._0_8_ + 0x50);
  auVar21._8_8_ = auVar22._8_8_;
  auVar21._0_8_ = lVar14;
  pppppuStack_100 = (undefined1 *****)&pppuStack_e0;
  if (lVar14 == 0) {
    puVar19 = &Atlas_Stats_SeasonsManager__GetRewardThreshold;
    auVar21 = func_0x00f78af4();
  }
  else {
    puVar19 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
    pppppuVar6 = (undefined8 *****)auStack_f0;
    pppppuVar18 = (undefined8 *****)&pppuStack_e0;
  }
  while( true ) {
    *(undefined8 ******)((long)pppppuVar6 + -0x10) = pppppuVar18;
    *(undefined **)((long)pppppuVar6 + -8) = puVar19;
    lVar14 = *(long *)(auVar21._0_8_ + 0x28);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x50), lVar14 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar21._8_4_ < *(uint *)(lVar14 + 0x18)) {
      return (long *)(ulong)*(uint *)(lVar14 + (long)(int)auVar21._8_4_ * 4 + 0x20);
    }
    uVar12 = func_0x00f78b24();
    lVar14 = func_0x00f78ac0(uVar12,0);
    *(undefined1 *****)((long)pppppuVar6 + -0x40) = param_6;
    *(undefined8 *)((long)pppppuVar6 + -0x38) = uVar11;
    *(undefined8 *)((long)pppppuVar6 + -0x30) = uVar16;
    *(long *)((long)pppppuVar6 + -0x28) = lVar9;
    *(undefined1 **)((long)pppppuVar6 + -0x20) = (undefined1 *)((long)pppppuVar6 + -0x10);
    *(undefined **)((long)pppppuVar6 + -0x18) = &Atlas_UI_SeasonMetagameData__GetLastRewardThreshold
    ;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(lVar14 + 0x50) == 0) break;
    auVar21._8_4_ = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1;
    auVar21._0_8_ = *(long *)(lVar14 + 0x50);
    auVar21._12_4_ = 0;
    pppppuVar18 = *(undefined8 ******)((long)pppppuVar6 + -0x20);
    puVar19 = *(undefined **)((long)pppppuVar6 + -0x18);
    uVar16 = *(undefined8 *)((long)pppppuVar6 + -0x30);
    lVar9 = *(long *)((long)pppppuVar6 + -0x28);
    param_6 = *(undefined1 *****)((long)pppppuVar6 + -0x40);
    uVar11 = *(undefined8 *)((long)pppppuVar6 + -0x38);
    pppppuVar6 = (undefined8 *****)((long)pppppuVar6 + -0x10);
  }
  lVar9 = func_0x00f78af4();
  *(undefined1 *****)((long)pppppuVar6 + -0x70) = param_6;
  *(undefined8 *)((long)pppppuVar6 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)pppppuVar6 + -0x60) = 0x3d247f0;
  *(long *)((long)pppppuVar6 + -0x58) = lVar14;
  *(undefined1 **)((long)pppppuVar6 + -0x50) = (undefined1 *)((long)pppppuVar6 + -0x20);
  *(undefined **)((long)pppppuVar6 + -0x48) = &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
    return *(long **)(lVar9 + 0x30);
  }
  if (*(long *)(lVar9 + 0x10) != 0) {
    uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x30);
    plVar8 = (long *)func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(plVar8,uVar16,0);
    *(long **)(lVar9 + 0x30) = plVar8;
    return plVar8;
  }
  lVar14 = func_0x00f78af4();
  *(undefined1 *****)((long)pppppuVar6 + -0xa0) = param_6;
  *(undefined8 *)((long)pppppuVar6 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)pppppuVar6 + -0x90) = 0;
  *(long *)((long)pppppuVar6 + -0x88) = lVar9;
  *(undefined1 **)((long)pppppuVar6 + -0x80) = (undefined1 *)((long)pppppuVar6 + -0x50);
  *(undefined **)((long)pppppuVar6 + -0x78) = &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long **)(lVar14 + 0x38) != (long *)0x0) {
    return *(long **)(lVar14 + 0x38);
  }
  if (*(long *)(lVar14 + 0x10) != 0) {
    uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x50);
    uVar11 = *(undefined8 *)(lVar14 + 0x28);
    plVar8 = (long *)func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(plVar8,uVar16,uVar11,0,0);
    *(long **)(lVar14 + 0x38) = plVar8;
    return plVar8;
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)((long)pppppuVar6 + -0xf0) = 0x3eb4000;
  *(undefined8 *)((long)pppppuVar6 + -0xe8) = param_3;
  *(undefined8 *)((long)pppppuVar6 + -0xe0) = param_4;
  *(undefined8 *)((long)pppppuVar6 + -0xd8) = param_5;
  *(undefined1 *****)((long)pppppuVar6 + -0xd0) = param_6;
  *(undefined8 *)((long)pppppuVar6 + -200) = 0x3eb4000;
  *(undefined8 *)((long)pppppuVar6 + -0xc0) = 0;
  *(long *)((long)pppppuVar6 + -0xb8) = lVar14;
  *(undefined1 **)((long)pppppuVar6 + -0xb0) = (undefined1 *)((long)pppppuVar6 + -0x80);
  *(undefined **)((long)pppppuVar6 + -0xa8) = &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar9 + 0x10) != 0) &&
     (lVar14 = *(long *)(*(long *)(lVar9 + 0x10) + 0x58), lVar14 != 0)) {
    uVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar14 + 0x18),0);
    lVar14 = *(long *)(lVar9 + 0x40);
    if (lVar14 != 0) {
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto code_r0x014efa98;
      lVar17 = (long)(int)uVar7;
      if (*(long *)(lVar14 + lVar17 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar7 < *(uint *)(lVar14 + 0x18)) {
          return *(long **)(lVar14 + lVar17 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar9 + 0x10) != 0) &&
         (lVar14 = *(long *)(*(long *)(lVar9 + 0x10) + 0x58), lVar14 != 0)) {
        if (*(uint *)(lVar14 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + lVar17 * 8 + 0x20);
        if (lVar14 != 0) {
          uVar16 = *(undefined8 *)(lVar14 + 0x18);
          plVar8 = *(long **)(lVar9 + 0x40);
          uVar11 = *(undefined8 *)(lVar9 + 0x28);
          lVar14 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar14,uVar16,uVar11,0,0);
          if (plVar8 != (long *)0x0) {
            if ((lVar14 != 0) &&
               (lVar13 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar8 + 3) <= uVar7) goto code_r0x014efa98;
            plVar8[lVar17 + 4] = lVar14;
            lVar14 = *(long *)(lVar9 + 0x40);
            if (lVar14 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar16 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar16,0);
code_r0x014efaa4:
    uVar16 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef488 | Atlas.UI.SeasonMetagameData.get_ID
// ============================================================

/* WARNING: Possible PIC construction at 0x014ef4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x014ef4f8) */
/* WARNING: Removing unreachable block (ram,0x014ef4fc) */
/* WARNING: Removing unreachable block (ram,0x014ef504) */
/* WARNING: Removing unreachable block (ram,0x014ef50c) */
/* WARNING: Removing unreachable block (ram,0x014ef518) */
/* WARNING: Removing unreachable block (ram,0x014ef520) */
/* WARNING: Removing unreachable block (ram,0x014ef534) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Removing unreachable block (ram,0x01521700) */
/* WARNING: Removing unreachable block (ram,0x01521714) */

long * Atlas_UI_SeasonMetagameData__get_ID(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 ****ppppuVar4;
  uint uVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int extraout_w1;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  auVar20._8_8_ = unaff_x20;
  auVar20._0_8_ = unaff_x19;
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long **)(*(long *)(param_1 + 0x10) + 0x18);
  }
  auVar18 = func_0x00f78af4();
  uVar7 = auVar18._8_8_;
  puStack_18 = &Atlas_UI_SeasonMetagameData__IsRewardUnlockedAndUnseen;
  lVar14 = *(long *)(auVar18._0_8_ + 0x10);
  ppuStack_50 = &puStack_20;
  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x40), auVar20 = auVar2, lVar14 == 0)) {
code_r0x014ef544:
    uVar7 = auVar20._8_8_;
    unaff_x19 = auVar20._0_8_;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78af4();
  }
  else {
    puStack_20 = &stack0xfffffffffffffff0;
    if (auVar18._8_4_ < *(uint *)(lVar14 + 0x18)) {
      ppuVar6 = *(undefined1 ***)(auVar18._0_8_ + 0x18);
      auVar20 = auVar18;
      if (ppuVar6 != (undefined1 **)0x0) {
        lVar14 = *(long *)(lVar14 + (long)(int)auVar18._8_4_ * 8 + 0x20);
        puStack_48 = &UNK_014ef4f8;
        puStack_20 = &stack0xfffffffffffffff0;
        goto code_r0x0151fea0;
      }
      goto code_r0x014ef544;
    }
  }
  auVar18._8_8_ = uVar7;
  auVar18._0_8_ = unaff_x19;
  uVar7 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar7,0);
  puStack_48 = &Atlas_UI_SeasonMetagameData__IsRewardUnlocked;
  lVar14 = *(long *)(auVar22._0_8_ + 0x10);
  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x40), lVar14 == 0)) {
code_r0x014ef594:
    func_0x00f78af4();
  }
  else if (auVar22._8_4_ < *(uint *)(lVar14 + 0x18)) {
    ppuVar6 = *(undefined1 ***)(auVar22._0_8_ + 0x18);
    if (ppuVar6 != (undefined1 **)0x0) {
      lVar14 = *(long *)(lVar14 + (long)(int)auVar22._8_4_ * 8 + 0x20);
      puStack_48 = &Atlas_UI_SeasonMetagameData__IsRewardUnlocked;
code_r0x0151fea0:
      puStack_60 = auVar18._8_8_;
      puStack_58 = auVar18._0_8_;
      if ((bRam0000000003eb4e2b & 1) == 0) {
        func_0x00f78a20(0x3d257d8,lVar14,0);
        auVar18._8_8_ = puStack_60;
        auVar18._0_8_ = puStack_58;
        bRam0000000003eb4e2b = 1;
      }
      puStack_60 = auVar18._8_8_;
      puStack_58 = auVar18._0_8_;
      if (ppuVar6[4] != (undefined1 *)0x0) {
        lVar11 = Atlas_Save_SaveManager__get_SaveData(ppuVar6[4],0);
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003eb4e2c & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          bRam0000000003eb4e2c = 1;
        }
        puStack_88 = (undefined *)0x0;
        ppuStack_90 = (undefined1 **)0x0;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&ppuStack_90,*(long *)(lVar11 + 0x38),uRam0000000003d3d950);
          uVar12 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&ppuStack_90,uRam0000000003d33740);
          if ((uVar12 & 1) != 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1521764);
            (*pcVar3)();
          }
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&ppuStack_90,uRam0000000003d33738);
          return (long *)0x0;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar13 = (long *)___cxa_begin_catch();
          lVar14 = *plVar13;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&ppuStack_90,uRam0000000003eb4000);
          if (lVar14 == 0) {
            return (long *)0x0;
          }
        }
        else {
          __Unwind_Resume();
        }
        auVar20 = func_0x00f78ac0(lVar14,0);
        puStack_a8 = &Atlas_Stats_UnlockManager__IsUnlockUnseen;
        pppuStack_b0 = &ppuStack_50;
        if ((bRam0000000003eb4e2d & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          func_0x00f78a20(0x3d29680);
          bRam0000000003eb4e2d = 1;
        }
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        lStack_f0 = 0;
        lVar14 = *(long *)(auVar20._0_8_ + 0x20);
        if (((lVar14 == 0) || (lVar14 = Atlas_Save_SaveManager__get_SaveData(lVar14,0), lVar14 == 0)
            ) || (*(long *)(lVar14 + 0x38) == 0)) {
          auVar21 = func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_100,*(long *)(lVar14 + 0x38),uRam0000000003d3d950);
          do {
            uVar12 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_100,uRam0000000003d33740);
            uVar7 = uStack_e8;
            if ((uVar12 & 1) == 0) goto code_r0x015218ec;
            if (lStack_f0 == 0) {
              func_0x00f78af4();
              goto code_r0x01521928;
            }
            uVar12 = /*System.String$$Equals*/ func_0x029caa48(lStack_f0,auVar20._8_8_,4,0);
          } while ((uVar12 & 1) == 0);
          uStack_101 = (undefined1)uVar7;
          lVar14 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_101);
          uStack_102 = 1;
          uVar7 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_102);
          auVar21._8_8_ = uVar7;
          auVar21._0_8_ = uVar7;
          if (lVar14 != 0) {
            uVar12 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar14,uVar7,0);
            if ((uVar12 & 1) == 0) {
code_r0x015218ec:
              plVar13 = (long *)0x0;
            }
            else {
              plVar13 = (long *)((long)&MACH_HEADER.magic + 1);
            }
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_100,uRam0000000003d33738);
            return plVar13;
          }
        }
        func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x152192c);
        (*pcVar3)();
      }
      auVar20 = func_0x00f78af4();
      lVar11 = auVar20._8_8_;
      ppuStack_90 = ppuVar6;
      puStack_88 = (undefined *)lVar14;
      if ((bRam0000000003eb4e11 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        func_0x00f78a20(0x3d257d8);
        bRam0000000003eb4e11 = 1;
      }
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puStack_a8 = &UNK_0151ffa4;
      pppuStack_b0 = (undefined1 ***)&stack0xffffffffffffff80;
      if ((bRam0000000003eb4e46 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        bRam0000000003eb4e46 = 1;
      }
      if ((lVar11 != 0) && (lVar14 = *(long *)(lVar11 + 0x58), lVar14 != 0)) {
        iVar1 = *(int *)(lVar14 + 0x18);
        if (iVar1 < 1) {
          return (long *)0xffffffff;
        }
        plVar13 = (long *)0x0;
        do {
          uVar5 = (uint)plVar13;
          if (*(uint *)(lVar14 + 0x18) <= uVar5) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar5 * 0x10 + 0x20);
          if (lVar14 == 0) break;
          uVar12 = /*System.String$$Equals*/ func_0x029caa48(lVar14,auVar20._0_8_,4,0);
          if ((uVar12 & 1) != 0) {
            return plVar13;
          }
          if (iVar1 - 1U == uVar5) {
            return (long *)0xffffffff;
          }
          lVar14 = *(long *)(lVar11 + 0x58);
          plVar13 = (long *)(ulong)(uVar5 + 1);
        } while (lVar14 != 0);
      }
      func_0x00f78af4();
      return (long *)0xffffffff;
    }
    goto code_r0x014ef594;
  }
  uVar7 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar7,0);
  puStack_58 = &Atlas_UI_SeasonMetagameData__GetRewardAssetDefinition;
  uVar7 = 0x3eb4000;
  puStack_60 = (undefined1 *)&ppuStack_50;
  if ((bRam0000000003eb4c60 & 1) == 0) {
    puStack_60 = (undefined1 *)&ppuStack_50;
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c60 = 1;
  }
  lVar14 = *(long *)(auVar22._0_8_ + 0x10);
  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x40), lVar14 == 0)) {
code_r0x014ef660:
    func_0x00f78af4();
  }
  else if (auVar22._8_4_ < *(uint *)(lVar14 + 0x18)) {
    lVar11 = *(long *)(auVar22._0_8_ + 0x20);
    if (lVar11 != 0) {
      plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar11,*(undefined8 *)
                                                (lVar14 + (long)(int)auVar22._8_4_ * 8 + 0x20),0);
      if (plVar13 != (long *)0x0) {
        if (*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar13 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar13 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar13 = (long *)0x0;
        }
      }
      return plVar13;
    }
    goto code_r0x014ef660;
  }
  uVar8 = func_0x00f78b24();
  lVar14 = func_0x00f78ac0(uVar8,0);
  puStack_88 = &Atlas_UI_SeasonMetagameData__GetFinalRewardAssetDefinition;
  uVar8 = 0x3eb4000;
  ppuStack_90 = &puStack_60;
  if ((bRam0000000003eb4c61 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c61 = 1;
  }
  if (*(long *)(lVar14 + 0x10) != 0) {
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar9 = /*Atlas.Definitions.SeasonDefinition$$get_FinalRewardID*/ func_0x014ef1f4();
    lVar14 = 0;
    if (lVar11 != 0) {
      plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar11,uVar9,0);
      if (plVar13 != (long *)0x0) {
        if (*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar13 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar13 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar13 = (long *)0x0;
        }
      }
      return plVar13;
    }
  }
  auVar20 = func_0x00f78af4();
  ppppuVar4 = &pppuStack_b0;
  ppppuVar16 = &pppuStack_b0;
  puStack_a8 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
  lVar11 = *(long *)(auVar20._0_8_ + 0x50);
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._0_8_ = lVar11;
  pppuStack_b0 = &ppuStack_90;
  if (lVar11 == 0) {
    puVar17 = &Atlas_Stats_SeasonsManager__GetRewardThreshold;
    auVar19 = func_0x00f78af4();
  }
  else {
    puVar17 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
    ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff60;
    ppppuVar16 = (undefined1 ****)&ppuStack_90;
  }
  while( true ) {
    *(undefined1 *****)((long)ppppuVar4 + -0x10) = ppppuVar16;
    *(undefined **)((long)ppppuVar4 + -8) = puVar17;
    lVar11 = *(long *)(auVar19._0_8_ + 0x28);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x50), lVar11 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar19._8_4_ < *(uint *)(lVar11 + 0x18)) {
      return (long *)(ulong)*(uint *)(lVar11 + (long)(int)auVar19._8_4_ * 4 + 0x20);
    }
    uVar9 = func_0x00f78b24();
    lVar11 = func_0x00f78ac0(uVar9,0);
    *(undefined8 *)((long)ppppuVar4 + -0x40) = unaff_x22;
    *(undefined8 *)((long)ppppuVar4 + -0x38) = uVar7;
    *(undefined8 *)((long)ppppuVar4 + -0x30) = uVar8;
    *(long *)((long)ppppuVar4 + -0x28) = lVar14;
    *(undefined1 **)((long)ppppuVar4 + -0x20) = (undefined1 *)((long)ppppuVar4 + -0x10);
    *(undefined **)((long)ppppuVar4 + -0x18) = &Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(lVar11 + 0x50) == 0) break;
    auVar19._8_4_ = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1;
    auVar19._0_8_ = *(long *)(lVar11 + 0x50);
    auVar19._12_4_ = 0;
    ppppuVar16 = *(undefined1 *****)((long)ppppuVar4 + -0x20);
    puVar17 = *(undefined **)((long)ppppuVar4 + -0x18);
    uVar8 = *(undefined8 *)((long)ppppuVar4 + -0x30);
    lVar14 = *(long *)((long)ppppuVar4 + -0x28);
    unaff_x22 = *(undefined8 *)((long)ppppuVar4 + -0x40);
    uVar7 = *(undefined8 *)((long)ppppuVar4 + -0x38);
    ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x10);
  }
  lVar14 = func_0x00f78af4();
  *(undefined8 *)((long)ppppuVar4 + -0x70) = unaff_x22;
  *(undefined8 *)((long)ppppuVar4 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)ppppuVar4 + -0x60) = 0x3d247f0;
  *(long *)((long)ppppuVar4 + -0x58) = lVar11;
  *(undefined1 **)((long)ppppuVar4 + -0x50) = (undefined1 *)((long)ppppuVar4 + -0x20);
  *(undefined **)((long)ppppuVar4 + -0x48) = &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(long **)(lVar14 + 0x30) != (long *)0x0) {
    return *(long **)(lVar14 + 0x30);
  }
  if (*(long *)(lVar14 + 0x10) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x30);
    plVar13 = (long *)func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(plVar13,uVar7,0);
    *(long **)(lVar14 + 0x30) = plVar13;
    return plVar13;
  }
  lVar11 = func_0x00f78af4();
  *(undefined8 *)((long)ppppuVar4 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)ppppuVar4 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)ppppuVar4 + -0x90) = 0;
  *(long *)((long)ppppuVar4 + -0x88) = lVar14;
  *(undefined1 **)((long)ppppuVar4 + -0x80) = (undefined1 *)((long)ppppuVar4 + -0x50);
  *(undefined **)((long)ppppuVar4 + -0x78) = &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long **)(lVar11 + 0x38) != (long *)0x0) {
    return *(long **)(lVar11 + 0x38);
  }
  if (*(long *)(lVar11 + 0x10) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x50);
    uVar8 = *(undefined8 *)(lVar11 + 0x28);
    plVar13 = (long *)func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(plVar13,uVar7,uVar8,0,0);
    *(long **)(lVar11 + 0x38) = plVar13;
    return plVar13;
  }
  lVar14 = func_0x00f78af4();
  *(undefined8 *)((long)ppppuVar4 + -0xf0) = unaff_x26;
  *(undefined8 *)((long)ppppuVar4 + -0xe8) = unaff_x25;
  *(undefined8 *)((long)ppppuVar4 + -0xe0) = unaff_x24;
  *(undefined8 *)((long)ppppuVar4 + -0xd8) = unaff_x23;
  *(undefined8 *)((long)ppppuVar4 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)ppppuVar4 + -200) = 0x3eb4000;
  *(undefined8 *)((long)ppppuVar4 + -0xc0) = 0;
  *(long *)((long)ppppuVar4 + -0xb8) = lVar11;
  *(undefined1 **)((long)ppppuVar4 + -0xb0) = (undefined1 *)((long)ppppuVar4 + -0x80);
  *(undefined **)((long)ppppuVar4 + -0xa8) = &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar14 + 0x10) != 0) &&
     (lVar11 = *(long *)(*(long *)(lVar14 + 0x10) + 0x58), lVar11 != 0)) {
    uVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar11 + 0x18),0);
    lVar11 = *(long *)(lVar14 + 0x40);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= uVar5) goto code_r0x014efa98;
      lVar15 = (long)(int)uVar5;
      if (*(long *)(lVar11 + lVar15 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar5 < *(uint *)(lVar11 + 0x18)) {
          return *(long **)(lVar11 + lVar15 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar14 + 0x10) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar14 + 0x10) + 0x58), lVar11 != 0)) {
        if (*(uint *)(lVar11 + 0x18) <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + lVar15 * 8 + 0x20);
        if (lVar11 != 0) {
          uVar7 = *(undefined8 *)(lVar11 + 0x18);
          plVar13 = *(long **)(lVar14 + 0x40);
          uVar8 = *(undefined8 *)(lVar14 + 0x28);
          lVar11 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar11,uVar7,uVar8,0,0);
          if (plVar13 != (long *)0x0) {
            if ((lVar11 != 0) &&
               (lVar10 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar13 + 3) <= uVar5) goto code_r0x014efa98;
            plVar13[lVar15 + 4] = lVar11;
            lVar11 = *(long *)(lVar14 + 0x40);
            if (lVar11 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar7 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar7,0);
code_r0x014efaa4:
    uVar7 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef4a8 | Atlas.UI.SeasonMetagameData.IsRewardUnlockedAndUnseen
// ============================================================

/* WARNING: Possible PIC construction at 0x014ef4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x014ef4f8) */
/* WARNING: Removing unreachable block (ram,0x014ef4fc) */
/* WARNING: Removing unreachable block (ram,0x014ef504) */
/* WARNING: Removing unreachable block (ram,0x014ef50c) */
/* WARNING: Removing unreachable block (ram,0x014ef518) */
/* WARNING: Removing unreachable block (ram,0x014ef520) */
/* WARNING: Removing unreachable block (ram,0x014ef534) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Removing unreachable block (ram,0x01521700) */
/* WARNING: Removing unreachable block (ram,0x01521714) */

long * Atlas_UI_SeasonMetagameData__IsRewardUnlockedAndUnseen(long param_1,undefined1 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 ****ppppuVar3;
  uint uVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int extraout_w1;
  long lVar13;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  
  ppuStack_40 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar13 == 0)) {
LAB_014ef544:
    param_2 = unaff_x20;
    func_0x00f78af4();
  }
  else if ((uint)param_2 < *(uint *)(lVar13 + 0x18)) {
    ppuVar5 = *(undefined1 ***)(param_1 + 0x18);
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    if (ppuVar5 != (undefined1 **)0x0) {
      lVar13 = *(long *)(lVar13 + (long)(int)(uint)param_2 * 8 + 0x20);
      puStack_38 = (undefined *)0x14ef4f8;
      goto code_r0x0151fea0;
    }
    goto LAB_014ef544;
  }
  param_1 = unaff_x19;
  uVar6 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar6,0);
  puStack_38 = &Atlas_UI_SeasonMetagameData__IsRewardUnlocked;
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x40), lVar13 == 0)) {
code_r0x014ef594:
    func_0x00f78af4();
  }
  else if (auVar19._8_4_ < *(uint *)(lVar13 + 0x18)) {
    ppuVar5 = *(undefined1 ***)(auVar19._0_8_ + 0x18);
    if (ppuVar5 != (undefined1 **)0x0) {
      lVar13 = *(long *)(lVar13 + (long)(int)auVar19._8_4_ * 8 + 0x20);
      puStack_38 = &Atlas_UI_SeasonMetagameData__IsRewardUnlocked;
code_r0x0151fea0:
      puStack_50 = param_2;
      puStack_48 = (undefined *)param_1;
      if ((bRam0000000003eb4e2b & 1) == 0) {
        func_0x00f78a20(0x3d257d8,lVar13,0);
        bRam0000000003eb4e2b = 1;
      }
      if (ppuVar5[4] != (undefined1 *)0x0) {
        lVar10 = Atlas_Save_SaveManager__get_SaveData(ppuVar5[4],0);
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003eb4e2c & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          bRam0000000003eb4e2c = 1;
        }
        puStack_78 = (undefined *)0x0;
        ppuStack_80 = (undefined1 **)0x0;
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&ppuStack_80,*(long *)(lVar10 + 0x38),uRam0000000003d3d950);
          uVar11 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&ppuStack_80,uRam0000000003d33740);
          if ((uVar11 & 1) != 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1521764);
            (*pcVar2)();
          }
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&ppuStack_80,uRam0000000003d33738);
          return (long *)0x0;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar12 = (long *)___cxa_begin_catch();
          lVar13 = *plVar12;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&ppuStack_80,uRam0000000003eb4000);
          if (lVar13 == 0) {
            return (long *)0x0;
          }
        }
        else {
          __Unwind_Resume();
        }
        auVar18 = func_0x00f78ac0(lVar13,0);
        puStack_98 = &Atlas_Stats_UnlockManager__IsUnlockUnseen;
        pppuStack_a0 = &ppuStack_40;
        if ((bRam0000000003eb4e2d & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          func_0x00f78a20(0x3d29680);
          bRam0000000003eb4e2d = 1;
        }
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        lStack_e0 = 0;
        lVar13 = *(long *)(auVar18._0_8_ + 0x20);
        if (((lVar13 == 0) || (lVar13 = Atlas_Save_SaveManager__get_SaveData(lVar13,0), lVar13 == 0)
            ) || (*(long *)(lVar13 + 0x38) == 0)) {
          auVar18 = func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_f0,*(long *)(lVar13 + 0x38),uRam0000000003d3d950);
          do {
            uVar11 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_f0,uRam0000000003d33740);
            uVar6 = uStack_d8;
            if ((uVar11 & 1) == 0) goto code_r0x015218ec;
            if (lStack_e0 == 0) {
              func_0x00f78af4();
              goto code_r0x01521928;
            }
            uVar11 = /*System.String$$Equals*/ func_0x029caa48(lStack_e0,auVar18._8_8_,4,0);
          } while ((uVar11 & 1) == 0);
          uStack_f1 = (undefined1)uVar6;
          lVar13 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_f1);
          uStack_f2 = 1;
          uVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_f2);
          auVar18._8_8_ = uVar6;
          auVar18._0_8_ = uVar6;
          if (lVar13 != 0) {
            uVar11 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar13,uVar6,0);
            if ((uVar11 & 1) == 0) {
code_r0x015218ec:
              plVar12 = (long *)0x0;
            }
            else {
              plVar12 = (long *)((long)&MACH_HEADER.magic + 1);
            }
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_f0,uRam0000000003d33738);
            return plVar12;
          }
        }
        func_0x00f78af4(auVar18._0_8_,auVar18._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
        (*pcVar2)();
      }
      auVar18 = func_0x00f78af4();
      lVar10 = auVar18._8_8_;
      ppuStack_80 = ppuVar5;
      puStack_78 = (undefined *)lVar13;
      if ((bRam0000000003eb4e11 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        func_0x00f78a20(0x3d257d8);
        bRam0000000003eb4e11 = 1;
      }
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puStack_98 = &UNK_0151ffa4;
      pppuStack_a0 = (undefined1 ***)&stack0xffffffffffffff90;
      if ((bRam0000000003eb4e46 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        bRam0000000003eb4e46 = 1;
      }
      if ((lVar10 != 0) && (lVar13 = *(long *)(lVar10 + 0x58), lVar13 != 0)) {
        iVar1 = *(int *)(lVar13 + 0x18);
        if (iVar1 < 1) {
          return (long *)0xffffffff;
        }
        plVar12 = (long *)0x0;
        do {
          uVar4 = (uint)plVar12;
          if (*(uint *)(lVar13 + 0x18) <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
          if (lVar13 == 0) break;
          uVar11 = /*System.String$$Equals*/ func_0x029caa48(lVar13,auVar18._0_8_,4,0);
          if ((uVar11 & 1) != 0) {
            return plVar12;
          }
          if (iVar1 - 1U == uVar4) {
            return (long *)0xffffffff;
          }
          lVar13 = *(long *)(lVar10 + 0x58);
          plVar12 = (long *)(ulong)(uVar4 + 1);
        } while (lVar13 != 0);
      }
      func_0x00f78af4();
      return (long *)0xffffffff;
    }
    goto code_r0x014ef594;
  }
  uVar6 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar6,0);
  puStack_48 = &Atlas_UI_SeasonMetagameData__GetRewardAssetDefinition;
  uVar6 = 0x3eb4000;
  puStack_50 = (undefined1 *)&ppuStack_40;
  if ((bRam0000000003eb4c60 & 1) == 0) {
    puStack_50 = (undefined1 *)&ppuStack_40;
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c60 = 1;
  }
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x40), lVar13 == 0)) {
code_r0x014ef660:
    func_0x00f78af4();
  }
  else if (auVar19._8_4_ < *(uint *)(lVar13 + 0x18)) {
    lVar10 = *(long *)(auVar19._0_8_ + 0x20);
    if (lVar10 != 0) {
      plVar12 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar10,*(undefined8 *)
                                                (lVar13 + (long)(int)auVar19._8_4_ * 8 + 0x20),0);
      if (plVar12 != (long *)0x0) {
        if (*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar12 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar12 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar12 = (long *)0x0;
        }
      }
      return plVar12;
    }
    goto code_r0x014ef660;
  }
  uVar7 = func_0x00f78b24();
  lVar13 = func_0x00f78ac0(uVar7,0);
  puStack_78 = &Atlas_UI_SeasonMetagameData__GetFinalRewardAssetDefinition;
  uVar7 = 0x3eb4000;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb4c61 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c61 = 1;
  }
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar10 = *(long *)(lVar13 + 0x20);
    uVar8 = /*Atlas.Definitions.SeasonDefinition$$get_FinalRewardID*/ func_0x014ef1f4();
    lVar13 = 0;
    if (lVar10 != 0) {
      plVar12 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar10,uVar8,0);
      if (plVar12 != (long *)0x0) {
        if (*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar12 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar12 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar12 = (long *)0x0;
        }
      }
      return plVar12;
    }
  }
  auVar18 = func_0x00f78af4();
  ppppuVar3 = &pppuStack_a0;
  ppppuVar15 = &pppuStack_a0;
  puStack_98 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
  lVar10 = *(long *)(auVar18._0_8_ + 0x50);
  auVar17._8_8_ = auVar18._8_8_;
  auVar17._0_8_ = lVar10;
  pppuStack_a0 = &ppuStack_80;
  if (lVar10 == 0) {
    puVar16 = &Atlas_Stats_SeasonsManager__GetRewardThreshold;
    auVar17 = func_0x00f78af4();
  }
  else {
    puVar16 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
    ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff70;
    ppppuVar15 = (undefined1 ****)&ppuStack_80;
  }
  while( true ) {
    *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar15;
    *(undefined **)((long)ppppuVar3 + -8) = puVar16;
    lVar10 = *(long *)(auVar17._0_8_ + 0x28);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x50), lVar10 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar17._8_4_ < *(uint *)(lVar10 + 0x18)) {
      return (long *)(ulong)*(uint *)(lVar10 + (long)(int)auVar17._8_4_ * 4 + 0x20);
    }
    uVar8 = func_0x00f78b24();
    lVar10 = func_0x00f78ac0(uVar8,0);
    *(undefined8 *)((long)ppppuVar3 + -0x40) = unaff_x22;
    *(undefined8 *)((long)ppppuVar3 + -0x38) = uVar6;
    *(undefined8 *)((long)ppppuVar3 + -0x30) = uVar7;
    *(long *)((long)ppppuVar3 + -0x28) = lVar13;
    *(undefined1 **)((long)ppppuVar3 + -0x20) = (undefined1 *)((long)ppppuVar3 + -0x10);
    *(undefined **)((long)ppppuVar3 + -0x18) = &Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(lVar10 + 0x50) == 0) break;
    auVar17._8_4_ = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1;
    auVar17._0_8_ = *(long *)(lVar10 + 0x50);
    auVar17._12_4_ = 0;
    ppppuVar15 = *(undefined1 *****)((long)ppppuVar3 + -0x20);
    puVar16 = *(undefined **)((long)ppppuVar3 + -0x18);
    uVar7 = *(undefined8 *)((long)ppppuVar3 + -0x30);
    lVar13 = *(long *)((long)ppppuVar3 + -0x28);
    unaff_x22 = *(undefined8 *)((long)ppppuVar3 + -0x40);
    uVar6 = *(undefined8 *)((long)ppppuVar3 + -0x38);
    ppppuVar3 = (undefined1 ****)((long)ppppuVar3 + -0x10);
  }
  lVar13 = func_0x00f78af4();
  *(undefined8 *)((long)ppppuVar3 + -0x70) = unaff_x22;
  *(undefined8 *)((long)ppppuVar3 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)ppppuVar3 + -0x60) = 0x3d247f0;
  *(long *)((long)ppppuVar3 + -0x58) = lVar10;
  *(undefined1 **)((long)ppppuVar3 + -0x50) = (undefined1 *)((long)ppppuVar3 + -0x20);
  *(undefined **)((long)ppppuVar3 + -0x48) = &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
    return *(long **)(lVar13 + 0x30);
  }
  if (*(long *)(lVar13 + 0x10) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x30);
    plVar12 = (long *)func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(plVar12,uVar6,0);
    *(long **)(lVar13 + 0x30) = plVar12;
    return plVar12;
  }
  lVar10 = func_0x00f78af4();
  *(undefined8 *)((long)ppppuVar3 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)ppppuVar3 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)ppppuVar3 + -0x90) = 0;
  *(long *)((long)ppppuVar3 + -0x88) = lVar13;
  *(undefined1 **)((long)ppppuVar3 + -0x80) = (undefined1 *)((long)ppppuVar3 + -0x50);
  *(undefined **)((long)ppppuVar3 + -0x78) = &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long **)(lVar10 + 0x38) != (long *)0x0) {
    return *(long **)(lVar10 + 0x38);
  }
  if (*(long *)(lVar10 + 0x10) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x50);
    uVar7 = *(undefined8 *)(lVar10 + 0x28);
    plVar12 = (long *)func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(plVar12,uVar6,uVar7,0,0);
    *(long **)(lVar10 + 0x38) = plVar12;
    return plVar12;
  }
  lVar13 = func_0x00f78af4();
  *(undefined8 *)((long)ppppuVar3 + -0xf0) = unaff_x26;
  *(undefined8 *)((long)ppppuVar3 + -0xe8) = unaff_x25;
  *(undefined8 *)((long)ppppuVar3 + -0xe0) = unaff_x24;
  *(undefined8 *)((long)ppppuVar3 + -0xd8) = unaff_x23;
  *(undefined8 *)((long)ppppuVar3 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)ppppuVar3 + -200) = 0x3eb4000;
  *(undefined8 *)((long)ppppuVar3 + -0xc0) = 0;
  *(long *)((long)ppppuVar3 + -0xb8) = lVar10;
  *(undefined1 **)((long)ppppuVar3 + -0xb0) = (undefined1 *)((long)ppppuVar3 + -0x80);
  *(undefined **)((long)ppppuVar3 + -0xa8) = &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar13 + 0x10) != 0) &&
     (lVar10 = *(long *)(*(long *)(lVar13 + 0x10) + 0x58), lVar10 != 0)) {
    uVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar10 + 0x18),0);
    lVar10 = *(long *)(lVar13 + 0x40);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= uVar4) goto code_r0x014efa98;
      lVar14 = (long)(int)uVar4;
      if (*(long *)(lVar10 + lVar14 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar4 < *(uint *)(lVar10 + 0x18)) {
          return *(long **)(lVar10 + lVar14 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar13 + 0x10) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar13 + 0x10) + 0x58), lVar10 != 0)) {
        if (*(uint *)(lVar10 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + lVar14 * 8 + 0x20);
        if (lVar10 != 0) {
          uVar6 = *(undefined8 *)(lVar10 + 0x18);
          plVar12 = *(long **)(lVar13 + 0x40);
          uVar7 = *(undefined8 *)(lVar13 + 0x28);
          lVar10 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar10,uVar6,uVar7,0,0);
          if (plVar12 != (long *)0x0) {
            if ((lVar10 != 0) &&
               (lVar9 = func_0x00f78adc(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar12 + 3) <= uVar4) goto code_r0x014efa98;
            plVar12[lVar14 + 4] = lVar10;
            lVar10 = *(long *)(lVar13 + 0x40);
            if (lVar10 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar6 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar6,0);
code_r0x014efaa4:
    uVar6 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef554 | Atlas.UI.SeasonMetagameData.IsRewardUnlocked
// ============================================================

/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Removing unreachable block (ram,0x01521700) */
/* WARNING: Removing unreachable block (ram,0x01521714) */

long * Atlas_UI_SeasonMetagameData__IsRewardUnlocked(long param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 ***pppuVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  int extraout_w1;
  long lVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***pppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar13 == 0)) {
LAB_014ef594:
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar13 + 0x18)) {
    puVar5 = *(undefined1 **)(param_1 + 0x18);
    if (puVar5 != (undefined1 *)0x0) {
      lVar13 = *(long *)(lVar13 + (long)(int)param_2 * 8 + 0x20);
      if ((bRam0000000003eb4e2b & 1) == 0) {
        func_0x00f78a20(0x3d257d8,lVar13,0);
        bRam0000000003eb4e2b = 1;
      }
      if (*(long *)(puVar5 + 0x20) != 0) {
        lVar9 = Atlas_Save_SaveManager__get_SaveData(*(long *)(puVar5 + 0x20),0);
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003eb4e2c & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          bRam0000000003eb4e2c = 1;
        }
        puStack_48 = (undefined *)0x0;
        puStack_50 = (undefined1 *)0x0;
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&puStack_50,*(long *)(lVar9 + 0x38),uRam0000000003d3d950);
          uVar10 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&puStack_50,uRam0000000003d33740);
          if ((uVar10 & 1) != 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1521764);
            (*pcVar2)();
          }
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&puStack_50,uRam0000000003d33738);
          return (long *)0x0;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar11 = (long *)___cxa_begin_catch();
          lVar13 = *plVar11;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&puStack_50,uRam0000000003eb4000);
          if (lVar13 == 0) {
            return (long *)0x0;
          }
        }
        else {
          __Unwind_Resume();
        }
        auVar18 = func_0x00f78ac0(lVar13,0);
        puStack_68 = &Atlas_Stats_UnlockManager__IsUnlockUnseen;
        ppuStack_70 = (undefined1 **)&stack0xfffffffffffffff0;
        if ((bRam0000000003eb4e2d & 1) == 0) {
          func_0x00f78a20(0x3d33738);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          func_0x00f78a20(0x3d29680);
          bRam0000000003eb4e2d = 1;
        }
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        lStack_b0 = 0;
        lVar13 = *(long *)(auVar18._0_8_ + 0x20);
        if (((lVar13 == 0) || (lVar13 = Atlas_Save_SaveManager__get_SaveData(lVar13,0), lVar13 == 0)
            ) || (*(long *)(lVar13 + 0x38) == 0)) {
          auVar18 = func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_c0,*(long *)(lVar13 + 0x38),uRam0000000003d3d950);
          do {
            uVar10 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_c0,uRam0000000003d33740);
            uVar12 = uStack_a8;
            if ((uVar10 & 1) == 0) goto code_r0x015218ec;
            if (lStack_b0 == 0) {
              func_0x00f78af4();
              goto code_r0x01521928;
            }
            uVar10 = /*System.String$$Equals*/ func_0x029caa48(lStack_b0,auVar18._8_8_,4,0);
          } while ((uVar10 & 1) == 0);
          uStack_c1 = (undefined1)uVar12;
          lVar13 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_c1);
          uStack_c2 = 1;
          uVar12 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_c2);
          auVar18._8_8_ = uVar12;
          auVar18._0_8_ = uVar12;
          if (lVar13 != 0) {
            uVar10 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar13,uVar12,0);
            if ((uVar10 & 1) == 0) {
code_r0x015218ec:
              plVar11 = (long *)0x0;
            }
            else {
              plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
            }
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_c0,uRam0000000003d33738);
            return plVar11;
          }
        }
        func_0x00f78af4(auVar18._0_8_,auVar18._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
        (*pcVar2)();
      }
      auVar18 = func_0x00f78af4();
      lVar9 = auVar18._8_8_;
      puStack_50 = puVar5;
      puStack_48 = (undefined *)lVar13;
      if ((bRam0000000003eb4e11 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        func_0x00f78a20(0x3d257d8);
        bRam0000000003eb4e11 = 1;
      }
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puStack_68 = &UNK_0151ffa4;
      ppuStack_70 = (undefined1 **)&stack0xffffffffffffffc0;
      if ((bRam0000000003eb4e46 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        bRam0000000003eb4e46 = 1;
      }
      if ((lVar9 != 0) && (lVar13 = *(long *)(lVar9 + 0x58), lVar13 != 0)) {
        iVar1 = *(int *)(lVar13 + 0x18);
        if (iVar1 < 1) {
          return (long *)0xffffffff;
        }
        plVar11 = (long *)0x0;
        do {
          uVar4 = (uint)plVar11;
          if (*(uint *)(lVar13 + 0x18) <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
          if (lVar13 == 0) break;
          uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar13,auVar18._0_8_,4,0);
          if ((uVar10 & 1) != 0) {
            return plVar11;
          }
          if (iVar1 - 1U == uVar4) {
            return (long *)0xffffffff;
          }
          lVar13 = *(long *)(lVar9 + 0x58);
          plVar11 = (long *)(ulong)(uVar4 + 1);
        } while (lVar13 != 0);
      }
      func_0x00f78af4();
      return (long *)0xffffffff;
    }
    goto LAB_014ef594;
  }
  uVar12 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar12,0);
  uVar12 = 0x3eb4000;
  if ((bRam0000000003eb4c60 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c60 = 1;
  }
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x40), lVar13 == 0)) {
code_r0x014ef660:
    func_0x00f78af4();
  }
  else if (auVar19._8_4_ < *(uint *)(lVar13 + 0x18)) {
    lVar9 = *(long *)(auVar19._0_8_ + 0x20);
    if (lVar9 != 0) {
      plVar11 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar9,*(undefined8 *)
                                               (lVar13 + (long)(int)auVar19._8_4_ * 8 + 0x20),0);
      if (plVar11 != (long *)0x0) {
        if (*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar11 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar11 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar11 = (long *)0x0;
        }
      }
      return plVar11;
    }
    goto code_r0x014ef660;
  }
  uVar6 = func_0x00f78b24();
  lVar13 = func_0x00f78ac0(uVar6,0);
  puStack_48 = &Atlas_UI_SeasonMetagameData__GetFinalRewardAssetDefinition;
  uVar6 = 0x3eb4000;
  puStack_50 = &stack0xffffffffffffffe0;
  if ((bRam0000000003eb4c61 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c61 = 1;
  }
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar9 = *(long *)(lVar13 + 0x20);
    uVar7 = /*Atlas.Definitions.SeasonDefinition$$get_FinalRewardID*/ func_0x014ef1f4();
    lVar13 = 0;
    if (lVar9 != 0) {
      plVar11 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar9,uVar7,0);
      if (plVar11 != (long *)0x0) {
        if (*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar11 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar11 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar11 = (long *)0x0;
        }
      }
      return plVar11;
    }
  }
  auVar18 = func_0x00f78af4();
  pppuVar3 = &ppuStack_70;
  pppuVar15 = &ppuStack_70;
  puStack_68 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
  lVar9 = *(long *)(auVar18._0_8_ + 0x50);
  auVar17._8_8_ = auVar18._8_8_;
  auVar17._0_8_ = lVar9;
  ppuStack_70 = &puStack_50;
  if (lVar9 == 0) {
    puVar16 = &Atlas_Stats_SeasonsManager__GetRewardThreshold;
    auVar17 = func_0x00f78af4();
  }
  else {
    puVar16 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffa0;
    pppuVar15 = (undefined1 ***)&puStack_50;
  }
  while( true ) {
    *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar15;
    *(undefined **)((long)pppuVar3 + -8) = puVar16;
    lVar9 = *(long *)(auVar17._0_8_ + 0x28);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar17._8_4_ < *(uint *)(lVar9 + 0x18)) {
      return (long *)(ulong)*(uint *)(lVar9 + (long)(int)auVar17._8_4_ * 4 + 0x20);
    }
    uVar7 = func_0x00f78b24();
    lVar9 = func_0x00f78ac0(uVar7,0);
    *(undefined8 *)((long)pppuVar3 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar3 + -0x38) = uVar12;
    *(undefined8 *)((long)pppuVar3 + -0x30) = uVar6;
    *(long *)((long)pppuVar3 + -0x28) = lVar13;
    *(undefined1 **)((long)pppuVar3 + -0x20) = (undefined1 *)((long)pppuVar3 + -0x10);
    *(undefined **)((long)pppuVar3 + -0x18) = &Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(lVar9 + 0x50) == 0) break;
    auVar17._8_4_ = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1;
    auVar17._0_8_ = *(long *)(lVar9 + 0x50);
    auVar17._12_4_ = 0;
    pppuVar15 = *(undefined1 ****)((long)pppuVar3 + -0x20);
    puVar16 = *(undefined **)((long)pppuVar3 + -0x18);
    uVar6 = *(undefined8 *)((long)pppuVar3 + -0x30);
    lVar13 = *(long *)((long)pppuVar3 + -0x28);
    unaff_x22 = *(undefined8 *)((long)pppuVar3 + -0x40);
    uVar12 = *(undefined8 *)((long)pppuVar3 + -0x38);
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x10);
  }
  lVar13 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar3 + -0x70) = unaff_x22;
  *(undefined8 *)((long)pppuVar3 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)pppuVar3 + -0x60) = 0x3d247f0;
  *(long *)((long)pppuVar3 + -0x58) = lVar9;
  *(undefined1 **)((long)pppuVar3 + -0x50) = (undefined1 *)((long)pppuVar3 + -0x20);
  *(undefined **)((long)pppuVar3 + -0x48) = &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
    return *(long **)(lVar13 + 0x30);
  }
  if (*(long *)(lVar13 + 0x10) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x30);
    plVar11 = (long *)func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(plVar11,uVar12,0);
    *(long **)(lVar13 + 0x30) = plVar11;
    return plVar11;
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar3 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)pppuVar3 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)pppuVar3 + -0x90) = 0;
  *(long *)((long)pppuVar3 + -0x88) = lVar13;
  *(undefined1 **)((long)pppuVar3 + -0x80) = (undefined1 *)((long)pppuVar3 + -0x50);
  *(undefined **)((long)pppuVar3 + -0x78) = &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long **)(lVar9 + 0x38) != (long *)0x0) {
    return *(long **)(lVar9 + 0x38);
  }
  if (*(long *)(lVar9 + 0x10) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x50);
    uVar6 = *(undefined8 *)(lVar9 + 0x28);
    plVar11 = (long *)func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(plVar11,uVar12,uVar6,0,0);
    *(long **)(lVar9 + 0x38) = plVar11;
    return plVar11;
  }
  lVar13 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar3 + -0xf0) = unaff_x26;
  *(undefined8 *)((long)pppuVar3 + -0xe8) = unaff_x25;
  *(undefined8 *)((long)pppuVar3 + -0xe0) = unaff_x24;
  *(undefined8 *)((long)pppuVar3 + -0xd8) = unaff_x23;
  *(undefined8 *)((long)pppuVar3 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)pppuVar3 + -200) = 0x3eb4000;
  *(undefined8 *)((long)pppuVar3 + -0xc0) = 0;
  *(long *)((long)pppuVar3 + -0xb8) = lVar9;
  *(undefined1 **)((long)pppuVar3 + -0xb0) = (undefined1 *)((long)pppuVar3 + -0x80);
  *(undefined **)((long)pppuVar3 + -0xa8) = &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar13 + 0x10) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x10) + 0x58), lVar9 != 0)) {
    uVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar9 + 0x18),0);
    lVar9 = *(long *)(lVar13 + 0x40);
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= uVar4) goto code_r0x014efa98;
      lVar14 = (long)(int)uVar4;
      if (*(long *)(lVar9 + lVar14 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar4 < *(uint *)(lVar9 + 0x18)) {
          return *(long **)(lVar9 + lVar14 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar13 + 0x10) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar13 + 0x10) + 0x58), lVar9 != 0)) {
        if (*(uint *)(lVar9 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar14 * 8 + 0x20);
        if (lVar9 != 0) {
          uVar12 = *(undefined8 *)(lVar9 + 0x18);
          plVar11 = *(long **)(lVar13 + 0x40);
          uVar6 = *(undefined8 *)(lVar13 + 0x28);
          lVar9 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar9,uVar12,uVar6,0,0);
          if (plVar11 != (long *)0x0) {
            if ((lVar9 != 0) &&
               (lVar8 = func_0x00f78adc(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar11 + 3) <= uVar4) goto code_r0x014efa98;
            plVar11[lVar14 + 4] = lVar9;
            lVar9 = *(long *)(lVar13 + 0x40);
            if (lVar9 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar12 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar12,0);
code_r0x014efaa4:
    uVar12 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef5a4 | Atlas.UI.SeasonMetagameData.GetRewardAssetDefinition
// ============================================================

long * Atlas_UI_SeasonMetagameData__GetRewardAssetDefinition(long param_1,undefined8 param_2)

{
  undefined1 ***pppuVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar10;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***pppuVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar9 = 0x3eb4000;
  if ((bRam0000000003eb4c60 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c60 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar7 == 0)) {
LAB_014ef660:
    func_0x00f78af4();
  }
  else if ((uint)param_2 < *(uint *)(lVar7 + 0x18)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      plVar3 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(*(long *)(param_1 + 0x20),
                                       *(undefined8 *)(lVar7 + (long)(int)(uint)param_2 * 8 + 0x20),
                                       0);
      if (plVar3 != (long *)0x0) {
        if (*(byte *)(*plVar3 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar3 = (long *)0x0;
        }
      }
      return plVar3;
    }
    goto LAB_014ef660;
  }
  uVar4 = func_0x00f78b24();
  lVar7 = func_0x00f78ac0(uVar4,0);
  puStack_38 = &Atlas_UI_SeasonMetagameData__GetFinalRewardAssetDefinition;
  uVar4 = 0x3eb4000;
  lStack_50 = param_1;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c61 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c61 = 1;
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar8 = *(long *)(lVar7 + 0x20);
    uVar5 = /*Atlas.Definitions.SeasonDefinition$$get_FinalRewardID*/ func_0x014ef1f4();
    lVar7 = 0;
    if (lVar8 != 0) {
      plVar3 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar8,uVar5,0);
      if (plVar3 != (long *)0x0) {
        if (*(byte *)(*plVar3 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar3 = (long *)0x0;
        }
      }
      return plVar3;
    }
  }
  auVar13 = func_0x00f78af4();
  pppuVar1 = &ppuStack_60;
  pppuVar11 = &ppuStack_60;
  puStack_58 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
  lVar8 = *(long *)(auVar13._0_8_ + 0x50);
  auVar13._8_8_ = auVar13._8_8_;
  auVar13._0_8_ = lVar8;
  ppuStack_60 = &puStack_40;
  if (lVar8 == 0) {
    puVar12 = &Atlas_Stats_SeasonsManager__GetRewardThreshold;
    auVar13 = func_0x00f78af4();
  }
  else {
    puVar12 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
    pppuVar1 = (undefined1 ***)&lStack_50;
    pppuVar11 = (undefined1 ***)&puStack_40;
  }
  while( true ) {
    *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar11;
    *(undefined **)((long)pppuVar1 + -8) = puVar12;
    lVar8 = *(long *)(auVar13._0_8_ + 0x28);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x50), lVar8 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar13._8_4_ < *(uint *)(lVar8 + 0x18)) {
      return (long *)(ulong)*(uint *)(lVar8 + (long)(int)auVar13._8_4_ * 4 + 0x20);
    }
    uVar5 = func_0x00f78b24();
    lVar8 = func_0x00f78ac0(uVar5,0);
    *(undefined8 *)((long)pppuVar1 + -0x40) = unaff_x22;
    *(undefined8 *)((long)pppuVar1 + -0x38) = uVar9;
    *(undefined8 *)((long)pppuVar1 + -0x30) = uVar4;
    *(long *)((long)pppuVar1 + -0x28) = lVar7;
    *(undefined1 **)((long)pppuVar1 + -0x20) = (undefined1 *)((long)pppuVar1 + -0x10);
    *(undefined **)((long)pppuVar1 + -0x18) = &Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(lVar8 + 0x50) == 0) break;
    auVar13._8_4_ = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1;
    auVar13._0_8_ = *(long *)(lVar8 + 0x50);
    auVar13._12_4_ = 0;
    pppuVar11 = *(undefined1 ****)((long)pppuVar1 + -0x20);
    puVar12 = *(undefined **)((long)pppuVar1 + -0x18);
    uVar4 = *(undefined8 *)((long)pppuVar1 + -0x30);
    lVar7 = *(long *)((long)pppuVar1 + -0x28);
    unaff_x22 = *(undefined8 *)((long)pppuVar1 + -0x40);
    uVar9 = *(undefined8 *)((long)pppuVar1 + -0x38);
    pppuVar1 = (undefined1 ***)((long)pppuVar1 + -0x10);
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar1 + -0x70) = unaff_x22;
  *(undefined8 *)((long)pppuVar1 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)pppuVar1 + -0x60) = 0x3d247f0;
  *(long *)((long)pppuVar1 + -0x58) = lVar8;
  *(undefined1 **)((long)pppuVar1 + -0x50) = (undefined1 *)((long)pppuVar1 + -0x20);
  *(undefined **)((long)pppuVar1 + -0x48) = &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(long **)(lVar7 + 0x30) != (long *)0x0) {
    return *(long **)(lVar7 + 0x30);
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x30);
    plVar3 = (long *)func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(plVar3,uVar9,0);
    *(long **)(lVar7 + 0x30) = plVar3;
    return plVar3;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar1 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)pppuVar1 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)pppuVar1 + -0x90) = 0;
  *(long *)((long)pppuVar1 + -0x88) = lVar7;
  *(undefined1 **)((long)pppuVar1 + -0x80) = (undefined1 *)((long)pppuVar1 + -0x50);
  *(undefined **)((long)pppuVar1 + -0x78) = &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long **)(lVar8 + 0x38) != (long *)0x0) {
    return *(long **)(lVar8 + 0x38);
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x50);
    uVar4 = *(undefined8 *)(lVar8 + 0x28);
    plVar3 = (long *)func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(plVar3,uVar9,uVar4,0,0);
    *(long **)(lVar8 + 0x38) = plVar3;
    return plVar3;
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar1 + -0xf0) = unaff_x26;
  *(undefined8 *)((long)pppuVar1 + -0xe8) = unaff_x25;
  *(undefined8 *)((long)pppuVar1 + -0xe0) = unaff_x24;
  *(undefined8 *)((long)pppuVar1 + -0xd8) = unaff_x23;
  *(undefined8 *)((long)pppuVar1 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)pppuVar1 + -200) = 0x3eb4000;
  *(undefined8 *)((long)pppuVar1 + -0xc0) = 0;
  *(long *)((long)pppuVar1 + -0xb8) = lVar8;
  *(undefined1 **)((long)pppuVar1 + -0xb0) = (undefined1 *)((long)pppuVar1 + -0x80);
  *(undefined **)((long)pppuVar1 + -0xa8) = &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar7 + 0x10) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x58), lVar8 != 0)) {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar8 + 0x18),0);
    lVar8 = *(long *)(lVar7 + 0x40);
    if (lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x18) <= uVar2) goto code_r0x014efa98;
      lVar10 = (long)(int)uVar2;
      if (*(long *)(lVar8 + lVar10 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          return *(long **)(lVar8 + lVar10 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar7 + 0x10) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x58), lVar8 != 0)) {
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar10 * 8 + 0x20);
        if (lVar8 != 0) {
          uVar9 = *(undefined8 *)(lVar8 + 0x18);
          plVar3 = *(long **)(lVar7 + 0x40);
          uVar4 = *(undefined8 *)(lVar7 + 0x28);
          lVar8 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar8,uVar9,uVar4,0,0);
          if (plVar3 != (long *)0x0) {
            if ((lVar8 != 0) &&
               (lVar6 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar3 + 3) <= uVar2) goto code_r0x014efa98;
            plVar3[lVar10 + 4] = lVar8;
            lVar8 = *(long *)(lVar7 + 0x40);
            if (lVar8 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar9 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar9,0);
code_r0x014efaa4:
    uVar9 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef670 | Atlas.UI.SeasonMetagameData.GetFinalRewardAssetDefinition
// ============================================================

long * Atlas_UI_SeasonMetagameData__GetFinalRewardAssetDefinition(long param_1)

{
  undefined1 **ppuVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar9;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar8 = 0x3eb4000;
  if ((bRam0000000003eb4c61 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4c61 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    uVar3 = /*Atlas.Definitions.SeasonDefinition$$get_FinalRewardID*/ func_0x014ef1f4();
    param_1 = 0;
    if (lVar7 != 0) {
      plVar4 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar7,uVar3,0);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) {
          plVar4 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar4 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar4 = (long *)0x0;
        }
      }
      return plVar4;
    }
  }
  auVar12 = func_0x00f78af4();
  ppuVar1 = &puStack_30;
  ppuVar10 = &puStack_30;
  puStack_28 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
  lVar7 = *(long *)(auVar12._0_8_ + 0x50);
  auVar12._8_8_ = auVar12._8_8_;
  auVar12._0_8_ = lVar7;
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar7 == 0) {
    puVar11 = &Atlas_Stats_SeasonsManager__GetRewardThreshold;
    auVar12 = func_0x00f78af4();
  }
  else {
    puVar11 = &Atlas_UI_SeasonMetagameData__GetRewardThreshold;
    ppuVar1 = (undefined1 **)&stack0xffffffffffffffe0;
    ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  while( true ) {
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar10;
    *(undefined **)((long)ppuVar1 + -8) = puVar11;
    lVar7 = *(long *)(auVar12._0_8_ + 0x28);
    if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x50), lVar7 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar12._8_4_ < *(uint *)(lVar7 + 0x18)) {
      return (long *)(ulong)*(uint *)(lVar7 + (long)(int)auVar12._8_4_ * 4 + 0x20);
    }
    uVar3 = func_0x00f78b24();
    lVar7 = func_0x00f78ac0(uVar3,0);
    *(undefined8 *)((long)ppuVar1 + -0x40) = unaff_x22;
    *(undefined8 *)((long)ppuVar1 + -0x38) = unaff_x21;
    *(undefined8 *)((long)ppuVar1 + -0x30) = uVar8;
    *(long *)((long)ppuVar1 + -0x28) = param_1;
    *(undefined1 **)((long)ppuVar1 + -0x20) = (undefined1 *)((long)ppuVar1 + -0x10);
    *(undefined **)((long)ppuVar1 + -0x18) = &Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(lVar7 + 0x50) == 0) break;
    auVar12._8_4_ = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1;
    auVar12._0_8_ = *(long *)(lVar7 + 0x50);
    auVar12._12_4_ = 0;
    ppuVar10 = *(undefined1 ***)((long)ppuVar1 + -0x20);
    puVar11 = *(undefined **)((long)ppuVar1 + -0x18);
    uVar8 = *(undefined8 *)((long)ppuVar1 + -0x30);
    param_1 = *(long *)((long)ppuVar1 + -0x28);
    unaff_x22 = *(undefined8 *)((long)ppuVar1 + -0x40);
    unaff_x21 = *(undefined8 *)((long)ppuVar1 + -0x38);
    ppuVar1 = (undefined1 **)((long)ppuVar1 + -0x10);
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar1 + -0x70) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)ppuVar1 + -0x60) = 0x3d247f0;
  *(long *)((long)ppuVar1 + -0x58) = lVar7;
  *(undefined1 **)((long)ppuVar1 + -0x50) = (undefined1 *)((long)ppuVar1 + -0x20);
  *(undefined **)((long)ppuVar1 + -0x48) = &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(long **)(lVar5 + 0x30) != (long *)0x0) {
    return *(long **)(lVar5 + 0x30);
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x30);
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(plVar4,uVar8,0);
    *(long **)(lVar5 + 0x30) = plVar4;
    return plVar4;
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar1 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)ppuVar1 + -0x90) = 0;
  *(long *)((long)ppuVar1 + -0x88) = lVar5;
  *(undefined1 **)((long)ppuVar1 + -0x80) = (undefined1 *)((long)ppuVar1 + -0x50);
  *(undefined **)((long)ppuVar1 + -0x78) = &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long **)(lVar7 + 0x38) != (long *)0x0) {
    return *(long **)(lVar7 + 0x38);
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x50);
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(plVar4,uVar8,uVar3,0,0);
    *(long **)(lVar7 + 0x38) = plVar4;
    return plVar4;
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar1 + -0xf0) = unaff_x26;
  *(undefined8 *)((long)ppuVar1 + -0xe8) = unaff_x25;
  *(undefined8 *)((long)ppuVar1 + -0xe0) = unaff_x24;
  *(undefined8 *)((long)ppuVar1 + -0xd8) = unaff_x23;
  *(undefined8 *)((long)ppuVar1 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -200) = 0x3eb4000;
  *(undefined8 *)((long)ppuVar1 + -0xc0) = 0;
  *(long *)((long)ppuVar1 + -0xb8) = lVar7;
  *(undefined1 **)((long)ppuVar1 + -0xb0) = (undefined1 *)((long)ppuVar1 + -0x80);
  *(undefined **)((long)ppuVar1 + -0xa8) = &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar5 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar5 + 0x10) + 0x58), lVar7 != 0)) {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    lVar7 = *(long *)(lVar5 + 0x40);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto code_r0x014efa98;
      lVar9 = (long)(int)uVar2;
      if (*(long *)(lVar7 + lVar9 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          return *(long **)(lVar7 + lVar9 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar5 + 0x10) != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar5 + 0x10) + 0x58), lVar7 != 0)) {
        if (*(uint *)(lVar7 + 0x18) <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar9 * 8 + 0x20);
        if (lVar7 != 0) {
          uVar8 = *(undefined8 *)(lVar7 + 0x18);
          plVar4 = *(long **)(lVar5 + 0x40);
          uVar3 = *(undefined8 *)(lVar5 + 0x28);
          lVar7 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar7,uVar8,uVar3,0,0);
          if (plVar4 != (long *)0x0) {
            if ((lVar7 != 0) &&
               (lVar6 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar4 + 3) <= uVar2) goto code_r0x014efa98;
            plVar4[lVar9 + 4] = lVar7;
            lVar7 = *(long *)(lVar5 + 0x40);
            if (lVar7 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar8 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar8,0);
code_r0x014efaa4:
    uVar8 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef714 | Atlas.UI.SeasonMetagameData.GetRewardThreshold
// ============================================================

ulong Atlas_UI_SeasonMetagameData__GetRewardThreshold(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar10;
  undefined8 unaff_x25;
  long *plVar11;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar12 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 == 0) {
    unaff_x30 = &Atlas_Stats_SeasonsManager__GetRewardThreshold;
    auVar12 = func_0x00f78af4();
    param_2 = auVar12._8_8_;
    lVar4 = auVar12._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((*(long *)(lVar4 + 0x28) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x28) + 0x50), lVar4 == 0)) {
      func_0x00f78af4();
    }
    else if ((uint)param_2 < *(uint *)(lVar4 + 0x18)) {
      return (ulong)*(uint *)(lVar4 + (long)(int)(uint)param_2 * 4 + 0x20);
    }
    uVar5 = func_0x00f78b24();
    lVar6 = func_0x00f78ac0(uVar5,0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x18) =
         &Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = *(long *)(lVar6 + 0x50);
    if (lVar4 == 0) break;
    param_2 = (ulong)(**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) - 1);
    puVar1 = (undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -0x18);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = (undefined1 *)*puVar1;
  }
  lVar4 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d247f0;
  *(long *)((long)register0x00000008 + -0x58) = lVar6;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined **)((long)register0x00000008 + -0x48) =
       &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(ulong *)(lVar4 + 0x30) != 0) {
    return *(ulong *)(lVar4 + 0x30);
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x30);
    uVar7 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(uVar7,uVar5,0);
    *(ulong *)(lVar4 + 0x30) = uVar7;
    return uVar7;
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(long *)((long)register0x00000008 + -0x88) = lVar4;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) =
       &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(ulong *)(lVar6 + 0x38) != 0) {
    return *(ulong *)(lVar6 + 0x38);
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x50);
    uVar9 = *(undefined8 *)(lVar6 + 0x28);
    uVar7 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(uVar7,uVar5,uVar9,0,0);
    *(ulong *)(lVar6 + 0x38) = uVar7;
    return uVar7;
  }
  lVar4 = func_0x00f78af4();
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
  *(undefined **)((long)register0x00000008 + -0xa8) =
       &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar4 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x58), lVar6 != 0)) {
    uVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar6 + 0x18),0);
    lVar6 = *(long *)(lVar4 + 0x40);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto code_r0x014efa98;
      lVar10 = (long)(int)uVar3;
      if (*(long *)(lVar6 + lVar10 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          return *(ulong *)(lVar6 + lVar10 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar4 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x58), lVar6 != 0)) {
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + lVar10 * 8 + 0x20);
        if (lVar6 != 0) {
          uVar5 = *(undefined8 *)(lVar6 + 0x18);
          plVar11 = *(long **)(lVar4 + 0x40);
          uVar9 = *(undefined8 *)(lVar4 + 0x28);
          lVar6 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar6,uVar5,uVar9,0,0);
          if (plVar11 != (long *)0x0) {
            if ((lVar6 != 0) &&
               (lVar8 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar11 + 3) <= uVar3) goto code_r0x014efa98;
            plVar11[lVar10 + 4] = lVar6;
            lVar6 = *(long *)(lVar4 + 0x40);
            if (lVar6 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar5 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar5,0);
code_r0x014efaa4:
    uVar5 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef774 | Atlas.UI.SeasonMetagameData.GetLastRewardThreshold
// ============================================================

ulong Atlas_UI_SeasonMetagameData__GetLastRewardThreshold(long param_1)

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
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4c62 & 1) == 0) {
      func_0x00f78a20(0x3d247f0);
      bRam0000000003eb4c62 = 1;
    }
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == 0) break;
    uVar1 = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) - 1;
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    lVar3 = *(long *)(lVar3 + 0x28);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x50), lVar3 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      return (ulong)*(uint *)(lVar3 + (long)(int)uVar1 * 4 + 0x20);
    }
    uVar2 = func_0x00f78b24();
    unaff_x30 = Atlas_UI_SeasonMetagameData__GetLastRewardThreshold;
    param_1 = func_0x00f78ac0(uVar2,0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d247f0;
  *(long *)((long)register0x00000008 + -0x48) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_SeasonMetagameData__GetIPMetagameData;
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
  lVar5 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(long *)((long)register0x00000008 + -0x78) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_SeasonMetagameData__GetMapMetagameData;
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(ulong *)(lVar5 + 0x38) != 0) {
    return *(ulong *)(lVar5 + 0x38);
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x50);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    uVar4 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(uVar4,uVar2,uVar7,0,0);
    *(ulong *)(lVar5 + 0x38) = uVar4;
    return uVar4;
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(long *)((long)register0x00000008 + -0xa8) = lVar5;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x98) =
       &Atlas_UI_SeasonMetagameData__GetMapToFeatureData;
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar3 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + 0x58), lVar5 != 0)) {
    uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar5 + 0x18),0);
    lVar5 = *(long *)(lVar3 + 0x40);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto code_r0x014efa98;
      lVar8 = (long)(int)uVar1;
      if (*(long *)(lVar5 + lVar8 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          return *(ulong *)(lVar5 + lVar8 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar3 + 0x10) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + 0x58), lVar5 != 0)) {
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar8 * 8 + 0x20);
        if (lVar5 != 0) {
          uVar2 = *(undefined8 *)(lVar5 + 0x18);
          plVar9 = *(long **)(lVar3 + 0x40);
          uVar7 = *(undefined8 *)(lVar3 + 0x28);
          lVar5 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar5,uVar2,uVar7,0,0);
          if (plVar9 != (long *)0x0) {
            if ((lVar5 != 0) &&
               (lVar6 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar9 + 3) <= uVar1) goto code_r0x014efa98;
            plVar9[lVar8 + 4] = lVar5;
            lVar5 = *(long *)(lVar3 + 0x40);
            if (lVar5 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar2 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar2,0);
code_r0x014efaa4:
    uVar2 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef7f4 | Atlas.UI.SeasonMetagameData.GetIPMetagameData
// ============================================================

long Atlas_UI_SeasonMetagameData__GetIPMetagameData(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam0000000003eb4c63 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb4c63 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(long *)(param_1 + 0x30);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar2 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(lVar2,uVar5,0);
    *(long *)(param_1 + 0x30) = lVar2;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    return *(long *)(lVar2 + 0x38);
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x50);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    lVar3 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(lVar3,uVar5,uVar6,0,0);
    *(long *)(lVar2 + 0x38) = lVar3;
    return lVar3;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar2 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x58), lVar3 != 0)) {
    uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar3 + 0x18),0);
    lVar3 = *(long *)(lVar2 + 0x40);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto code_r0x014efa98;
      lVar7 = (long)(int)uVar1;
      if (*(long *)(lVar3 + lVar7 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          return *(long *)(lVar3 + lVar7 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar2 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x58), lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar7 * 8 + 0x20);
        if (lVar3 != 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x18);
          plVar8 = *(long **)(lVar2 + 0x40);
          uVar6 = *(undefined8 *)(lVar2 + 0x28);
          lVar3 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar3,uVar5,uVar6,0,0);
          if (plVar8 != (long *)0x0) {
            if ((lVar3 != 0) &&
               (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar8 + 3) <= uVar1) goto code_r0x014efa98;
            plVar8[lVar7 + 4] = lVar3;
            lVar3 = *(long *)(lVar2 + 0x40);
            if (lVar3 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar5 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar5,0);
code_r0x014efaa4:
    uVar5 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef884 | Atlas.UI.SeasonMetagameData.GetMapMetagameData
// ============================================================

long Atlas_UI_SeasonMetagameData__GetMapMetagameData(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam0000000003eb4c64 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c64 = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    return *(long *)(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
    Atlas_UI_MapMetagameData___ctor(lVar2,uVar5,uVar6,0,0);
    *(long *)(param_1 + 0x38) = lVar2;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(lVar2 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(lVar2 + 0x10) + 0x58), lVar4 != 0)) {
    uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar4 + 0x18),0);
    lVar4 = *(long *)(lVar2 + 0x40);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar1) goto code_r0x014efa98;
      lVar7 = (long)(int)uVar1;
      if (*(long *)(lVar4 + lVar7 * 8 + 0x20) != 0) {
code_r0x014efa68:
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          return *(long *)(lVar4 + lVar7 * 8 + 0x20);
        }
        goto code_r0x014efa98;
      }
      if ((*(long *)(lVar2 + 0x10) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar2 + 0x10) + 0x58), lVar4 != 0)) {
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar7 * 8 + 0x20);
        if (lVar4 != 0) {
          uVar5 = *(undefined8 *)(lVar4 + 0x18);
          plVar8 = *(long **)(lVar2 + 0x40);
          uVar6 = *(undefined8 *)(lVar2 + 0x28);
          lVar4 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar4,uVar5,uVar6,0,0);
          if (plVar8 != (long *)0x0) {
            if ((lVar4 != 0) &&
               (lVar3 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0))
            goto code_r0x014efaa4;
            if (*(uint *)(plVar8 + 3) <= uVar1) goto code_r0x014efa98;
            plVar8[lVar7 + 4] = lVar4;
            lVar4 = *(long *)(lVar2 + 0x40);
            if (lVar4 != 0) goto code_r0x014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014efa98:
  uVar5 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar5,0);
code_r0x014efaa4:
    uVar5 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14ef920 | Atlas.UI.SeasonMetagameData.GetMapToFeatureData
// ============================================================

undefined8 Atlas_UI_SeasonMetagameData__GetMapToFeatureData(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam0000000003eb4c65 & 1) == 0) {
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d3a5e8);
    func_0x00f78a20(0x3d3a5f0);
    func_0x00f78a20(0x3d231f8);
    bRam0000000003eb4c65 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar3 != 0)) {
    uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar3 + 0x18),0);
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_014efa98;
      lVar6 = (long)(int)uVar1;
      if (*(long *)(lVar3 + lVar6 * 8 + 0x20) != 0) {
LAB_014efa68:
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          return *(undefined8 *)(lVar3 + lVar6 * 8 + 0x20);
        }
        goto LAB_014efa98;
      }
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar6 * 8 + 0x20);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x18);
          plVar7 = *(long **)(param_1 + 0x40);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          lVar3 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
          Atlas_UI_MapMetagameData___ctor(lVar3,uVar4,uVar5,0,0);
          if (plVar7 != (long *)0x0) {
            if ((lVar3 != 0) &&
               (lVar2 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0))
            goto LAB_014efaa4;
            if (*(uint *)(plVar7 + 3) <= uVar1) goto LAB_014efa98;
            plVar7[lVar6 + 4] = lVar3;
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != 0) goto LAB_014efa68;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_014efa98:
  uVar4 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar4,0);
LAB_014efaa4:
    uVar4 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14efaac | Atlas.UI.SeasonMetagameData.GetCharacterMetagameData
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14efb3c | Atlas.UI.SeasonMetagameData.DisplayNameFull
// ============================================================

/* WARNING: Possible PIC construction at 0x014efbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014efc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ecd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ed080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014efd1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014efdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f005c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f0318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f08c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc660) */
/* WARNING: Removing unreachable block (ram,0x016bc66c) */
/* WARNING: Removing unreachable block (ram,0x016bc674) */
/* WARNING: Removing unreachable block (ram,0x014f031c) */
/* WARNING: Removing unreachable block (ram,0x014f0324) */
/* WARNING: Removing unreachable block (ram,0x014f0374) */
/* WARNING: Removing unreachable block (ram,0x014f038c) */
/* WARNING: Removing unreachable block (ram,0x014f0060) */
/* WARNING: Removing unreachable block (ram,0x014f0064) */
/* WARNING: Removing unreachable block (ram,0x014f0088) */
/* WARNING: Removing unreachable block (ram,0x014f0090) */
/* WARNING: Removing unreachable block (ram,0x014f0094) */
/* WARNING: Removing unreachable block (ram,0x014f00d0) */
/* WARNING: Removing unreachable block (ram,0x014f00ec) */
/* WARNING: Removing unreachable block (ram,0x014f00f0) */
/* WARNING: Removing unreachable block (ram,0x014efdf4) */
/* WARNING: Removing unreachable block (ram,0x014efdfc) */
/* WARNING: Removing unreachable block (ram,0x014efe08) */
/* WARNING: Removing unreachable block (ram,0x014efe10) */
/* WARNING: Removing unreachable block (ram,0x014efe18) */
/* WARNING: Removing unreachable block (ram,0x014efe28) */
/* WARNING: Removing unreachable block (ram,0x014efe30) */
/* WARNING: Removing unreachable block (ram,0x014efe48) */
/* WARNING: Removing unreachable block (ram,0x014efe4c) */
/* WARNING: Removing unreachable block (ram,0x014efe40) */
/* WARNING: Removing unreachable block (ram,0x014efd20) */
/* WARNING: Removing unreachable block (ram,0x014efd30) */
/* WARNING: Removing unreachable block (ram,0x014efd38) */
/* WARNING: Removing unreachable block (ram,0x014efd3c) */
/* WARNING: Removing unreachable block (ram,0x014efd44) */
/* WARNING: Removing unreachable block (ram,0x014ed084) */
/* WARNING: Removing unreachable block (ram,0x014ed088) */
/* WARNING: Removing unreachable block (ram,0x014ecd5c) */
/* WARNING: Removing unreachable block (ram,0x014efc2c) */
/* WARNING: Removing unreachable block (ram,0x014efc4c) */
/* WARNING: Removing unreachable block (ram,0x014efc34) */
/* WARNING: Removing unreachable block (ram,0x014efc3c) */
/* WARNING: Removing unreachable block (ram,0x014efc50) */
/* WARNING: Removing unreachable block (ram,0x014efc58) */
/* WARNING: Removing unreachable block (ram,0x014efbb4) */
/* WARNING: Removing unreachable block (ram,0x014f08cc) */
/* WARNING: Removing unreachable block (ram,0x014f090c) */
/* WARNING: Removing unreachable block (ram,0x014f0914) */
/* WARNING: Removing unreachable block (ram,0x014f0924) */
/* WARNING: Removing unreachable block (ram,0x014f0968) */
/* WARNING: Removing unreachable block (ram,0x014f0978) */
/* WARNING: Removing unreachable block (ram,0x014f0980) */
/* WARNING: Removing unreachable block (ram,0x014f0994) */
/* WARNING: Removing unreachable block (ram,0x014f09f8) */
/* WARNING: Removing unreachable block (ram,0x014f0aac) */
/* WARNING: Removing unreachable block (ram,0x014f0ab4) */
/* WARNING: Removing unreachable block (ram,0x014f0ab8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

ulong Atlas_UI_SeasonMetagameData__DisplayNameFull(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  uint uVar9;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar10;
  int iVar11;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  int *piVar25;
  uint *puVar26;
  long lVar27;
  ushort *puVar28;
  uint uVar29;
  uint *puVar30;
  code *pcVar31;
  ushort *puVar32;
  ushort *puVar33;
  undefined8 uVar34;
  long *plVar35;
  undefined8 unaff_x21;
  undefined8 uVar36;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 **ppuVar37;
  undefined *puVar38;
  undefined8 unaff_d8;
  double dVar39;
  undefined8 unaff_d9;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  puVar6 = auStack_30;
  puVar4 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c67 & 1) == 0) {
    func_0x00f78a20(0x3d6c010);
    bRam0000000003eb4c67 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x28),/*STR('EPISODES_NAME')*/ uRam0000000003d6c010,&uStack_28,0);
    if ((*(long *)(param_1 + 0x10) != 0) && (lVar15 = *(long *)(param_1 + 0x28), lVar15 != 0)) {
      puVar38 = (undefined *)0x14efbb4;
      puVar6 = auStack_30;
      uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
      goto code_r0x0164feb4;
    }
  }
  lVar16 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_SeasonMetagameData__DisplayNameShort;
  puStack_40 = puVar4;
  if ((*(long *)(lVar16 + 0x10) != 0) && (lVar15 = *(long *)(lVar16 + 0x28), lVar15 != 0)) {
    puVar38 = &Atlas_UI_SeasonMetagameData__DisplayNameShort;
    uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 0x20);
code_r0x0164feb4:
    *(undefined1 **)(puVar6 + -0x10) = puVar4;
    *(undefined **)(puVar6 + -8) = puVar38;
    *(undefined8 *)(puVar6 + -0x18) = 0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar15,uVar23,puVar6 + -0x18);
    return *(ulong *)(puVar6 + -0x18);
  }
  auVar41 = func_0x00f78af4();
  uVar13 = auVar41._0_8_;
  puStack_50 = (undefined1 *)&puStack_40;
  puStack_48 = &Atlas_UI_SeasonMetagameData__GetProgressForRewardSegment;
  ppuVar37 = &puStack_50;
  if (*(long *)(uVar13 + 0x50) == 0) {
    puVar38 = &Atlas_Stats_SeasonsManager__GetStarsForSeason;
    auVar42 = func_0x00f78af4();
    puVar4 = &stack0xffffffffffffff90;
  }
  else {
    auVar42._8_8_ = *(undefined8 *)(uVar13 + 0x10);
    auVar42._0_8_ = *(long *)(uVar13 + 0x50);
    puVar38 = &UNK_014efc2c;
    puVar4 = &stack0xffffffffffffff90;
    param_1 = auVar41._8_8_;
  }
code_r0x014efc88:
  puVar7 = puVar4 + -0x10;
  puVar6 = puVar4 + -0x10;
  *(undefined1 ***)(puVar4 + -0x10) = ppuVar37;
  *(undefined **)(puVar4 + -8) = puVar38;
  if ((auVar42._8_8_ == 0) || (lVar15 = *(long *)(auVar42._0_8_ + 0x30), lVar15 == 0)) {
    puVar38 = &Atlas_UI_SeasonMetagameData__StarsForSeason;
    lVar15 = func_0x00f78af4();
    while( true ) {
      *(undefined1 **)(puVar7 + -0x10) = puVar6;
      *(undefined **)(puVar7 + -8) = puVar38;
      if (*(long *)(lVar15 + 0x50) != 0) break;
      lVar15 = func_0x00f78af4();
      puVar4 = puVar7 + -0x40;
      *(ulong *)(puVar7 + -0x40) = unaff_x22;
      *(undefined8 *)(puVar7 + -0x38) = unaff_x21;
      *(ulong *)(puVar7 + -0x30) = uVar13;
      *(long *)(puVar7 + -0x28) = param_1;
      *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x18) = &Atlas_UI_SeasonMetagameData__SeasonProgress;
      ppuVar37 = (undefined1 **)(puVar7 + -0x20);
      uVar13 = 0x3eb4000;
      if ((bRam0000000003eb4c68 & 1) == 0) {
        func_0x00f78a20(0x3d247f0);
        bRam0000000003eb4c68 = 1;
      }
      if (*(long *)(lVar15 + 0x50) != 0) {
        unaff_x21 = 0x3d247f0;
        auVar42._8_8_ = *(undefined8 *)(lVar15 + 0x10);
        auVar42._0_8_ = *(long *)(lVar15 + 0x50);
        puVar38 = &UNK_014efd20;
        param_1 = lVar15;
        goto code_r0x014efc88;
      }
      param_1 = func_0x00f78af4();
      puVar4 = puVar7 + -0x80;
      *(ulong *)(puVar7 + -0x80) = unaff_x24;
      *(ulong *)(puVar7 + -0x78) = unaff_x23;
      *(ulong *)(puVar7 + -0x70) = unaff_x22;
      *(undefined8 *)(puVar7 + -0x68) = unaff_x21;
      *(undefined8 *)(puVar7 + -0x60) = 0x3eb4000;
      *(long *)(puVar7 + -0x58) = lVar15;
      *(undefined1 ***)(puVar7 + -0x50) = ppuVar37;
      *(undefined **)(puVar7 + -0x48) = &Atlas_UI_SeasonMetagameData__GetCurrentRewardIndex;
      ppuVar37 = (undefined1 **)(puVar7 + -0x50);
      unaff_x23 = 0x3d247f0;
      uVar13 = 0x3d247f0;
      if ((bRam0000000003eb4c69 & 1) == 0) {
        func_0x00f78a20(0x3d247f0);
        bRam0000000003eb4c69 = 1;
      }
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar13 = (ulong)(**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) - 1);
        auVar42._8_8_ = *(undefined8 *)(param_1 + 0x10);
        auVar42._0_8_ = *(long *)(param_1 + 0x50);
        puVar38 = &UNK_014efdf4;
        goto code_r0x014efc88;
      }
      lVar15 = func_0x00f78af4();
      puVar5 = puVar7 + -0x90;
      puVar4 = puVar7 + -0x90;
      *(undefined1 ***)(puVar7 + -0x90) = ppuVar37;
      *(undefined **)(puVar7 + -0x88) = &Atlas_UI_SeasonMetagameData__IsSeasonActive;
      if (*(long *)(lVar15 + 0x50) == 0) {
        puVar38 = &Atlas_Stats_SeasonsManager__IsSeasonActive;
        auVar41 = func_0x00f78af4();
      }
      else {
        auVar41._8_8_ = *(undefined8 *)(lVar15 + 0x10);
        auVar41._0_8_ = *(long *)(lVar15 + 0x50);
        puVar5 = puVar7 + -0x80;
        puVar4 = *(undefined1 **)(puVar7 + -0x90);
        puVar38 = *(undefined **)(puVar7 + -0x88);
      }
      lVar16 = auVar41._8_8_;
      lVar15 = auVar41._0_8_;
      *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
      *(ulong *)(puVar5 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x38) = 0x3d247f0;
      *(ulong *)(puVar5 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar5 + -0x20) = 0x3eb4000;
      *(long *)(puVar5 + -0x18) = param_1;
      *(undefined1 **)(puVar5 + -0x10) = puVar4;
      *(undefined **)(puVar5 + -8) = puVar38;
      uVar23 = 0x3eb4000;
      if ((bRam0000000003eb4c7d & 1) == 0) {
        func_0x00f78a20(0x3d2dca8);
        bRam0000000003eb4c7d = 1;
      }
      if (*(long *)(lVar15 + 0x28) != 0) {
        lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
        if (*(long *)(lVar17 + 8) != 0) {
          uVar23 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar17 + 8) + 0x30));
          unaff_x23 = uVar13;
          if (*(long *)(lVar15 + 0x28) != 0) {
            lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
            if ((*(long *)(lVar17 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
              unaff_x22 = *(ulong *)(*(long *)(lVar17 + 8) + 0x28);
              lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
              if ((*(long *)(lVar17 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
                unaff_x23 = (ulong)*(uint *)(*(long *)(lVar17 + 8) + 0x20);
                lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
                if ((*(long *)(lVar17 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
                  unaff_x24 = (ulong)*(uint *)(*(long *)(lVar17 + 8) + 0x24);
                  lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
                  if (*(long *)(lVar17 + 8) != 0) {
                    unaff_x25 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                    lVar15 = *(long *)(lVar15 + 0x38);
                    uVar13 = /*Atlas.Definitions.SeasonRotationHelper$$IsRotationActive*/ func_0x014f18ec(lVar15,unaff_x25);
                    if ((int)uVar13 == 0) {
                      return uVar13;
                    }
                    lVar17 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar23,unaff_x23,lVar15,unaff_x25,unaff_x22,unaff_x24);
                    if ((lVar16 != 0) && (lVar17 != 0)) {
                      lVar16 = *(long *)(lVar16 + 0x18);
                      lVar15 = *(long *)(lVar17 + 0x18);
                      auVar43._8_8_ = lVar15;
                      auVar43._0_8_ = lVar16;
                      uVar14 = 0;
                      uVar23 = *(undefined8 *)(puVar5 + -0x10);
                      uVar22 = *(undefined8 *)(puVar5 + -8);
                      uVar21 = *(undefined8 *)(puVar5 + -0x20);
                      uVar19 = *(undefined8 *)(puVar5 + -0x18);
                      uVar13 = *(ulong *)(puVar5 + -0x30);
                      uVar36 = *(undefined8 *)(puVar5 + -0x28);
                      if (lVar16 == lVar15) {
                        uVar24 = 1;
                      }
                      else {
                        uVar24 = 0;
                        if ((lVar16 != 0) && (lVar15 != 0)) {
                          if (*(int *)(lVar16 + 0x10) == *(int *)(lVar15 + 0x10))
                          goto System_String__EqualsHelper;
                          uVar24 = 0;
                        }
                      }
                      return uVar24;
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar17 = func_0x00f78af4();
      *(ulong *)(puVar5 + -0x90) = unaff_x24;
      *(ulong *)(puVar5 + -0x88) = unaff_x23;
      *(ulong *)(puVar5 + -0x80) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x78) = uVar23;
      *(long *)(puVar5 + -0x70) = lVar15;
      *(long *)(puVar5 + -0x68) = lVar16;
      *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x58) = &Atlas_UI_SeasonMetagameData__GetTimeLeftString;
      uVar21 = 0x3eb4000;
      if ((bRam0000000003eb4c6a & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d7cca0);
        func_0x00f78a20(0x3d6c020);
        bRam0000000003eb4c6a = 1;
      }
      *(undefined8 *)(puVar5 + -0xa0) = 0;
      lVar15 = *(long *)(lVar17 + 0x50);
      if (lVar15 == 0) {
        puVar38 = &Atlas_Stats_SeasonsManager__GetActiveDateRange;
        lVar15 = func_0x00f78af4();
      }
      else {
        uVar21 = *(undefined8 *)(lVar15 + 0x38);
        puVar38 = &UNK_014f0060;
      }
      *(ulong *)(puVar5 + -0xe0) = unaff_x22;
      *(undefined8 *)(puVar5 + -0xd8) = uVar23;
      *(undefined8 *)(puVar5 + -0xd0) = uVar21;
      *(long *)(puVar5 + -200) = lVar17;
      *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x60;
      *(undefined **)(puVar5 + -0xb8) = puVar38;
      uVar13 = 0x3eb4000;
      if ((bRam0000000003eb4c7f & 1) == 0) {
        func_0x00f78a20(0x3d2dca8);
        bRam0000000003eb4c7f = 1;
      }
      if (*(long *)(lVar15 + 0x28) != 0) {
        lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
        if (*(long *)(lVar16 + 8) != 0) {
          /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x30));
          if (*(long *)(lVar15 + 0x28) != 0) {
            lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
            if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
              uVar9 = *(uint *)(*(long *)(lVar16 + 8) + 0x20);
              uVar13 = (ulong)uVar9;
              lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
              if (*(long *)(lVar16 + 8) != 0) {
                uVar23 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                if (*(long *)(lVar15 + 0x28) != 0) {
                  lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
                  if (*(long *)(lVar16 + 8) != 0) {
                    iVar11 = *(int *)(*(long *)(lVar16 + 8) + 0x24);
                    uVar21 = *(undefined8 *)(lVar15 + 0x38);
                    if (uVar9 == 3) {
Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange:
                      *(ulong *)(puVar5 + -0xf0) = unaff_x24;
                      *(ulong *)(puVar5 + -0xe8) = unaff_x23;
                      *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0xe0);
                      *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0xd8);
                      *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xd0);
                      *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -200);
                      *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0xc0);
                      *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xb8);
                      *(undefined8 *)(puVar5 + -0xf8) = uVar21;
                      if ((bRam0000000003eb4c76 & 1) == 0) {
                        func_0x00f78a20(0x3d21060);
                        bRam0000000003eb4c76 = 1;
                      }
                      iVar11 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar5 + -0xf8,0);
                      iVar11 = iVar11 + 1;
                      uVar13 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar5 + -0xf8,0);
                      if (0xc < iVar11) {
                        iVar11 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar5 + -0xf8,0);
                        uVar13 = (ulong)(iVar11 + 1);
                        iVar11 = 1;
                      }
                      uVar23 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar5 + -0xf8,0);
                      uVar21 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar5 + -0xf8,0);
                      uVar14 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                      /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar14,1,uVar23,uVar21,0);
                      uVar23 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                      /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar23,1,iVar11,uVar13,0);
                      return uVar14;
                    }
                    if (uVar9 != 2) {
                      if (uVar9 != 1)
                      goto Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange;
                      iVar11 = 1;
                    }
                    *(undefined8 *)(puVar5 + -0x100) = unaff_d9;
                    *(undefined8 *)(puVar5 + -0xf8) = unaff_d8;
                    *(ulong *)(puVar5 + -0xf0) = unaff_x24;
                    *(ulong *)(puVar5 + -0xe8) = unaff_x23;
                    *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0xe0);
                    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0xd8);
                    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xd0);
                    *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -200);
                    *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0xc0);
                    *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xb8);
                    *(undefined8 *)(puVar5 + -0x108) = uVar23;
                    if ((bRam0000000003eb4c77 & 1) == 0) {
                      func_0x00f78a20(0x3d21070);
                      func_0x00f78a20(0x3d21060);
                      bRam0000000003eb4c77 = 1;
                    }
                    *(undefined8 *)(puVar5 + -0x110) = 0;
                    uVar23 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar5 + -0x108,0);
                    uVar22 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar5 + -0x108,0);
                    uVar19 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar5 + -0x108,0);
                    /*System.DateTime$$.ctor*/ func_0x02a8c93c(puVar5 + -0x110,uVar23,uVar22,uVar19,0);
                    uVar23 = *(undefined8 *)(puVar5 + -0x110);
                    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar23 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar21,uVar23,0);
                    *(undefined8 *)(puVar5 + -0x118) = uVar23;
                    iVar10 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar5 + -0x118,0);
                    dVar39 = (double)(iVar11 * 7);
                    while (iVar11 * 7 < iVar10) {
                      uVar23 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar39,puVar5 + -0x110,0);
                      *(undefined8 *)(puVar5 + -0x110) = uVar23;
                      if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar23 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar21,uVar23,0);
                      *(undefined8 *)(puVar5 + -0x118) = uVar23;
                      iVar10 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar5 + -0x118,0);
                    }
                    uVar23 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar5 + -0x110,0);
                    uVar21 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar5 + -0x110,0);
                    uVar22 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar5 + -0x110,0);
                    uVar13 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                    /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar13,uVar23,uVar21,uVar22,0);
                    uVar23 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar39,puVar5 + -0x110,0);
                    *(undefined8 *)(puVar5 + -0x110) = uVar23;
                    uVar23 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar5 + -0x110,0);
                    uVar21 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar5 + -0x110,0);
                    uVar22 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar5 + -0x110,0);
                    uVar19 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                    /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar19,uVar23,uVar21,uVar22,0);
                    return uVar13;
                  }
                }
              }
            }
          }
        }
      }
      lVar16 = func_0x00f78af4();
      *(ulong *)(puVar5 + -0x100) = uVar13;
      *(long *)(puVar5 + -0xf8) = lVar15;
      *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xc0;
      *(undefined **)(puVar5 + -0xe8) = &Atlas_UI_SeasonMetagameData__GetFinishedString;
      if ((bRam0000000003eb4c6b & 1) == 0) {
        func_0x00f78a20(0x3d6c018);
        bRam0000000003eb4c6b = 1;
      }
      lVar15 = *(long *)(lVar16 + 0x28);
      if (lVar15 != 0) {
        puVar4 = *(undefined1 **)(puVar5 + -0xf0);
        puVar38 = *(undefined **)(puVar5 + -0xe8);
        puVar6 = puVar5 + -0xe0;
        uVar23 = /*STR('EPISODES_NOW')*/ uRam0000000003d6c018;
        goto code_r0x0164feb4;
      }
      auVar41 = func_0x00f78af4();
      lVar17 = auVar41._8_8_;
      lVar15 = auVar41._0_8_;
      *(undefined8 *)(puVar5 + -0x150) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x148) = unaff_x25;
      *(ulong *)(puVar5 + -0x140) = unaff_x24;
      *(ulong *)(puVar5 + -0x138) = unaff_x23;
      *(ulong *)(puVar5 + -0x130) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x128) = uVar23;
      *(undefined8 *)(puVar5 + -0x120) = 0x3eb4000;
      *(long *)(puVar5 + -0x118) = lVar16;
      *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0xf0;
      *(undefined **)(puVar5 + -0x108) = &Atlas_UI_SeasonProgressPanelBehaviour__Init;
      uVar23 = 0x3eb4000;
      if ((bRam0000000003eb4c6c & 1) == 0) {
        func_0x00f78a20(0x3d1ff30);
        func_0x00f78a20(0x3d247f8);
        func_0x00f78a20(0x3d790b0);
        func_0x00f78a20(0x3d79118);
        bRam0000000003eb4c6c = 1;
      }
      if (lVar17 == 0) {
code_r0x014f0410:
        puVar38 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
        lVar16 = func_0x00f78af4();
      }
      else {
        lVar16 = *(long *)(lVar17 + 0xd0);
        uVar21 = *(undefined8 *)(lVar17 + 0x20);
        *(long *)(lVar15 + 0x48) = lVar16;
        *(undefined8 *)(lVar15 + 0x50) = uVar21;
        if (lVar16 == 0) goto code_r0x014f0410;
        puVar38 = &UNK_014f031c;
      }
      *(ulong *)(puVar5 + -400) = unaff_x24;
      *(ulong *)(puVar5 + -0x188) = unaff_x23;
      *(ulong *)(puVar5 + -0x180) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x178) = 0x3eb4000;
      *(long *)(puVar5 + -0x170) = lVar17;
      *(long *)(puVar5 + -0x168) = lVar15;
      *(undefined1 **)(puVar5 + -0x160) = puVar5 + -0x110;
      *(undefined **)(puVar5 + -0x158) = puVar38;
      uVar13 = 0x3eb4000;
      if ((bRam0000000003eb4c7b & 1) == 0) {
        func_0x00f78a20(0x3d2dca0);
        func_0x00f78a20(0x3d2dca8);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4c7b = 1;
      }
      if (*(long *)(lVar16 + 0x28) != 0) {
        puVar18 = (undefined8 *)/*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar16 + 0x28),0);
        *(undefined8 *)(puVar5 + -0x198) = *puVar18;
        iVar11 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar5 + -0x198,0);
        uVar13 = 0;
        if (iVar11 == 0) {
code_r0x014f0548:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
          if ((iVar11 != 0) && (*(char *)(lVar16 + 0x20) != '\0')) {
            uVar13 = /*Atlas.Stats.SeasonsManager$$GetSeasonByDateRange*/ func_0x014f22f4(lVar16);
          }
          return uVar13;
        }
        if (*(long *)(lVar16 + 0x28) != 0) {
          lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar16 + 0x28),0);
          if (*(long *)(lVar15 + 8) != 0) {
            uVar13 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar15 + 8) + 0x30));
            if (*(long *)(lVar16 + 0x28) != 0) {
              lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar16 + 0x28),0);
              if ((*(long *)(lVar15 + 8) != 0) && (*(long *)(lVar16 + 0x28) != 0)) {
                uVar23 = *(undefined8 *)(*(long *)(lVar15 + 8) + 0x28);
                lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar16 + 0x28),0);
                if ((*(long *)(lVar15 + 8) != 0) && (*(long *)(lVar16 + 0x28) != 0)) {
                  unaff_x22 = (ulong)*(uint *)(*(long *)(lVar15 + 8) + 0x20);
                  lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar16 + 0x28),0);
                  if ((*(long *)(lVar15 + 8) != 0) && (*(long *)(lVar16 + 0x28) != 0)) {
                    unaff_x23 = (ulong)*(uint *)(*(long *)(lVar15 + 8) + 0x24);
                    lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar16 + 0x28),0);
                    if (*(long *)(lVar15 + 8) != 0) {
                      uVar21 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                      uVar13 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar13,unaff_x22,*(undefined8 *)(lVar16 + 0x38),
                                               uVar21,uVar23,unaff_x23);
                      goto code_r0x014f0548;
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar15 = func_0x00f78af4();
      *(ulong *)(puVar5 + -0x1d0) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x1c8) = uVar23;
      *(ulong *)(puVar5 + -0x1c0) = uVar13;
      *(long *)(puVar5 + -0x1b8) = lVar16;
      *(undefined1 **)(puVar5 + -0x1b0) = puVar5 + -0x160;
      *(undefined **)(puVar5 + -0x1a8) = &Atlas_UI_SeasonProgressPanelBehaviour__SetData;
      uVar23 = 0x3d247f0;
      if ((bRam0000000003eb4c6d & 1) == 0) {
        func_0x00f78a20(0x3d247f0);
        func_0x00f78a20(0x3d25608);
        bRam0000000003eb4c6d = 1;
      }
      lVar16 = *(long *)(lVar15 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar21 = 0;
      if (lVar16 != 0) {
        unaff_x22 = 0x3d25000;
        uVar21 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar16,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        uVar23 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar21,*(undefined4 *)(lVar15 + 0x68),0);
        plVar12 = *(long **)(lVar15 + 0x30);
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar22 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar23,uVar21,0);
        lVar15 = 0;
        if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (**(code **)(*plVar12 + 0x558))(plVar12,uVar22,*(undefined8 *)(*plVar12 + 0x560))
          ;
          return uVar13;
        }
      }
      lVar16 = func_0x00f78af4();
      *(undefined8 *)(puVar5 + -0x1f0) = uVar21;
      *(long *)(puVar5 + -0x1e8) = lVar15;
      *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x1b0;
      *(undefined **)(puVar5 + -0x1d8) = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
      if (*(long *)(lVar16 + 0x78) != 0) {
        /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar16 + 0x78),0,0);
        plVar12 = *(long **)(lVar16 + 0x60);
        *(ulong *)(puVar5 + -0x200) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x1f8) = uVar23;
        *(undefined8 *)(puVar5 + -0x1f0) = *(undefined8 *)(puVar5 + -0x1f0);
        *(undefined8 *)(puVar5 + -0x1e8) = *(undefined8 *)(puVar5 + -0x1e8);
        *(undefined8 *)(puVar5 + -0x1e0) = *(undefined8 *)(puVar5 + -0x1e0);
        *(undefined8 *)(puVar5 + -0x1d8) = *(undefined8 *)(puVar5 + -0x1d8);
        if ((bRam0000000003eb5c52 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          func_0x00f78a20(0x3d25440);
          bRam0000000003eb5c52 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
          return /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
        }
        if (plVar12 == (long *)0x0) {
          uVar13 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
          if (cRam0000000003cc2ae1 == '\0') {
            uVar13 = func_0x00f78a20(0x3d21160);
            cRam0000000003cc2ae1 = '\x01';
          }
          if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
            return uVar13;
          }
          uVar23 = *(undefined8 *)(puVar5 + -0x200);
          uVar21 = *(undefined8 *)(puVar5 + -0x1f8);
          *(undefined8 *)(puVar5 + -0x1f0) = *(undefined8 *)(puVar5 + -0x1f0);
          *(undefined8 *)(puVar5 + -0x1e8) = *(undefined8 *)(puVar5 + -0x1e8);
          *(undefined8 *)(puVar5 + -0x1e0) = *(undefined8 *)(puVar5 + -0x1e0);
          *(undefined8 *)(puVar5 + -0x1d8) = *(undefined8 *)(puVar5 + -0x1d8);
          if ((bRam0000000003eb5b2e & 1) == 0) {
            func_0x00f78a20(0x3d70738,0);
            bRam0000000003eb5b2e = 1;
          }
          plVar12 = (long *)0x0;
          uVar22 = *(undefined8 *)(puVar5 + -0x1e0);
          uVar36 = *(undefined8 *)(puVar5 + -0x1d8);
          uVar19 = *(undefined8 *)(puVar5 + -0x1f0);
          uVar34 = *(undefined8 *)(puVar5 + -0x1e8);
          plVar20 = /*STR('Null Tween')*/ plRam0000000003d70738;
        }
        else if ((char)plVar12[0x1d] == '\0') {
          uVar13 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
          if (cRam0000000003cc2ae1 == '\0') {
            uVar13 = func_0x00f78a20(0x3d21160);
            cRam0000000003cc2ae1 = '\x01';
          }
          if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
            return uVar13;
          }
          uVar23 = *(undefined8 *)(puVar5 + -0x200);
          uVar21 = *(undefined8 *)(puVar5 + -0x1f8);
          *(undefined8 *)(puVar5 + -0x1f0) = *(undefined8 *)(puVar5 + -0x1f0);
          *(undefined8 *)(puVar5 + -0x1e8) = *(undefined8 *)(puVar5 + -0x1e8);
          *(undefined8 *)(puVar5 + -0x1e0) = *(undefined8 *)(puVar5 + -0x1e0);
          *(undefined8 *)(puVar5 + -0x1d8) = *(undefined8 *)(puVar5 + -0x1d8);
          if ((bRam0000000003eb5b2c & 1) == 0) {
            func_0x00f78a20(0x3d74b30,0);
            bRam0000000003eb5b2c = 1;
          }
          plVar12 = (long *)0x0;
          uVar22 = *(undefined8 *)(puVar5 + -0x1e0);
          uVar36 = *(undefined8 *)(puVar5 + -0x1d8);
          uVar19 = *(undefined8 *)(puVar5 + -0x1f0);
          uVar34 = *(undefined8 *)(puVar5 + -0x1e8);
          plVar20 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
        }
        else {
          if (*(char *)((long)plVar12 + 0xe9) == '\0') {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
            if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
              *(undefined1 *)(plVar12 + 0x1d) = 0;
              return uVar13;
            }
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            bVar8 = true;
            puVar4 = *(undefined1 **)(puVar5 + -0x1e0);
            puVar38 = *(undefined **)(puVar5 + -0x1d8);
            plVar20 = *(long **)(puVar5 + -0x1f0);
            uVar13 = *(ulong *)(puVar5 + -0x200);
            uVar23 = *(undefined8 *)(puVar5 + -0x1f8);
            puVar6 = puVar5 + -0x1d0;
            plVar35 = *(long **)(puVar5 + -0x1e8);
            goto code_r0x016bc4d0;
          }
          uVar13 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
          if (cRam0000000003cc2ae1 == '\0') {
            uVar13 = func_0x00f78a20(0x3d21160);
            cRam0000000003cc2ae1 = '\x01';
          }
          if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
            return uVar13;
          }
          *(undefined8 *)(puVar5 + -0x200) = *(undefined8 *)(puVar5 + -0x200);
          *(undefined8 *)(puVar5 + -0x1f8) = *(undefined8 *)(puVar5 + -0x1f8);
          *(undefined8 *)(puVar5 + -0x1f0) = *(undefined8 *)(puVar5 + -0x1f0);
          *(undefined8 *)(puVar5 + -0x1e8) = *(undefined8 *)(puVar5 + -0x1e8);
          *(undefined8 *)(puVar5 + -0x1e0) = *(undefined8 *)(puVar5 + -0x1e0);
          *(undefined8 *)(puVar5 + -0x1d8) = *(undefined8 *)(puVar5 + -0x1d8);
          if ((bRam0000000003eb5b2d & 1) == 0) {
            func_0x00f78a20(0x3d74b40,0);
            bRam0000000003eb5b2d = 1;
          }
          uVar22 = *(undefined8 *)(puVar5 + -0x1e0);
          uVar36 = *(undefined8 *)(puVar5 + -0x1d8);
          uVar19 = *(undefined8 *)(puVar5 + -0x1f0);
          uVar34 = *(undefined8 *)(puVar5 + -0x1e8);
          uVar23 = *(undefined8 *)(puVar5 + -0x200);
          uVar21 = *(undefined8 *)(puVar5 + -0x1f8);
          plVar20 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
        }
        *(ulong *)(puVar5 + -0x210) = unaff_x24;
        *(ulong *)(puVar5 + -0x208) = unaff_x23;
        *(undefined8 *)(puVar5 + -0x200) = uVar23;
        *(undefined8 *)(puVar5 + -0x1f8) = uVar21;
        *(undefined8 *)(puVar5 + -0x1f0) = uVar19;
        *(undefined8 *)(puVar5 + -0x1e8) = uVar34;
        *(undefined8 *)(puVar5 + -0x1e0) = uVar22;
        *(undefined8 *)(puVar5 + -0x1d8) = uVar36;
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
        uVar13 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
        if (plVar20 == (long *)0x0) {
          uVar23 = 0;
        }
        else {
          uVar23 = (**(code **)(*plVar20 + 0x168))(plVar20,*(undefined8 *)(*plVar20 + 0x170));
        }
        plVar20 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar13,uVar23,0);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((plVar12 != (long *)0x0) &&
           (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')) {
          lVar16 = plVar12[0x19];
          lVar15 = plVar12[7];
          uVar9 = *(uint *)(plVar12 + 8);
          uVar13 = (ulong)uVar9;
          if ((lVar16 != 0) || ((lVar15 != 0 || (uVar9 != 0xfffffc19)))) {
            if (plVar20 == (long *)0x0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (**(code **)(*plVar20 + 0x168))(plVar20,*(undefined8 *)(*plVar20 + 0x170));
            }
            plVar20 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar23,/*STR('\n')*/ uRam0000000003d65de0,0);
            if (lVar16 != 0) {
              uVar23 = 0;
              if (plVar20 != (long *)0x0) {
                uVar23 = (**(code **)(*plVar20 + 0x168))(plVar20,*(undefined8 *)(*plVar20 + 0x170));
              }
              uVar21 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar12[0x19],0);
              plVar20 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar23,uVar21,0);
            }
            if (lVar15 != 0) {
              uVar23 = 0;
              if (plVar20 != (long *)0x0) {
                uVar23 = (**(code **)(*plVar20 + 0x168))(plVar20,*(undefined8 *)(*plVar20 + 0x170));
              }
              uVar21 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar12[7],0);
              plVar20 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar23,uVar21,0);
            }
            if (uVar9 != 0xfffffc19) {
              uVar23 = 0;
              if (plVar20 != (long *)0x0) {
                uVar23 = (**(code **)(*plVar20 + 0x168))(plVar20,*(undefined8 *)(*plVar20 + 0x170));
              }
              *(int *)(puVar5 + -0x214) = (int)plVar12[8];
              uVar21 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar5 + -0x214);
              uVar21 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar21,0);
              plVar20 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar23,uVar21,0);
            }
          }
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar15 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
        if (lVar15 != 0) {
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar15 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
            if (lVar15 == 0) {
              lVar15 = func_0x00f78af4();
              *(undefined8 *)(puVar5 + -0x250) = 0x3d20bc0;
              *(ulong *)(puVar5 + -0x248) = uVar13;
              *(long **)(puVar5 + -0x240) = plVar20;
              *(long **)(puVar5 + -0x238) = plVar12;
              *(undefined1 **)(puVar5 + -0x230) = puVar5 + -0x1e0;
              *(undefined **)(puVar5 + -0x228) = &DG_Tweening_Core_DOTweenComponent__Start;
              if ((bRam0000000003eb5b0e & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb5b0e = 1;
              }
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar23 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x58);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar23,lVar15,0);
              if ((int)uVar13 == 0) {
                return uVar13;
              }
              *(undefined1 *)(lVar15 + 0x2d) = 1;
              uVar23 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              *(undefined8 *)(puVar5 + -0x250) = *(undefined8 *)(puVar5 + -0x250);
              *(undefined8 *)(puVar5 + -0x248) = *(undefined8 *)(puVar5 + -0x248);
              *(undefined8 *)(puVar5 + -0x240) = *(undefined8 *)(puVar5 + -0x240);
              *(undefined8 *)(puVar5 + -0x238) = *(undefined8 *)(puVar5 + -0x238);
              *(undefined8 *)(puVar5 + -0x230) = *(undefined8 *)(puVar5 + -0x230);
              *(undefined8 *)(puVar5 + -0x228) = *(undefined8 *)(puVar5 + -0x228);
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
              uVar13 = (*pcRam0000000003ec0228)(0,uVar23);
              return uVar13;
            }
          }
          uVar13 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar15,2,plVar20,uRam0000000003d35ae8);
          if ((int)uVar13 == 0) {
            return uVar13;
          }
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar20,0);
        return uVar13;
      }
      param_1 = func_0x00f78af4();
      puVar7 = puVar5 + -0x280;
      *(undefined8 *)(puVar5 + -0x260) = unaff_d9;
      *(undefined8 *)(puVar5 + -600) = unaff_d8;
      *(long *)(puVar5 + -0x250) = unaff_x28;
      *(undefined8 *)(puVar5 + -0x248) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x240) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x238) = unaff_x25;
      *(ulong *)(puVar5 + -0x230) = unaff_x24;
      *(ulong *)(puVar5 + -0x228) = unaff_x23;
      *(ulong *)(puVar5 + -0x220) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x218) = uVar23;
      *(undefined8 *)(puVar5 + -0x210) = uVar21;
      *(long *)(puVar5 + -0x208) = lVar16;
      *(undefined1 **)(puVar5 + -0x200) = puVar5 + -0x1e0;
      *(undefined **)(puVar5 + -0x1f8) = &Atlas_UI_SeasonProgressPanelBehaviour__AnimateStars;
      puVar6 = puVar5 + -0x200;
      uVar13 = 0x3eb4000;
      unaff_x21 = 0x3d28ba0;
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
      unaff_x28 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
      /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(unaff_x28,0);
      if (unaff_x28 == 0) {
code_r0x014f0b94:
        uVar13 = func_0x00f78af4();
        *(undefined8 *)(uVar13 + 0x38) = 0x83f000000;
        *(ulong *)(puVar5 + -0x2b0) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x2a8) = unaff_x21;
        *(undefined8 *)(puVar5 + -0x2a0) = 0x3eb4000;
        *(long *)(puVar5 + -0x298) = param_1;
        *(undefined1 **)(puVar5 + -0x290) = puVar6;
        *(undefined **)(puVar5 + -0x288) = &Atlas_UI_SeasonProgressPanelBehaviour___ctor;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar13;
      }
      unaff_x22 = 0x3d247f0;
      *(long *)(unaff_x28 + 0x10) = param_1;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar23 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(param_1 + 0x60) = uVar23;
      lVar15 = *(long *)(param_1 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x21 = 0;
      if (lVar15 == 0) goto code_r0x014f0b94;
      unaff_x21 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar15,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
      *(int *)(unaff_x28 + 0x18) = (int)unaff_x21;
      lVar15 = *(long *)(param_1 + 0x58);
      if (lVar15 == 0) goto code_r0x014f0b94;
      unaff_x22 = 0x3d78000;
      unaff_x24 = 0x3d28b98;
      puVar38 = &UNK_014f08cc;
    }
    auVar42._8_8_ = *(undefined8 *)(lVar15 + 0x10);
    auVar42._0_8_ = *(long *)(lVar15 + 0x50);
    ppuVar37 = *(undefined1 ***)(puVar7 + -0x10);
    puVar38 = *(undefined **)(puVar7 + -8);
    puVar4 = puVar7;
    goto code_r0x014efc88;
  }
  uVar23 = *(undefined8 *)(auVar42._8_8_ + 0x18);
  *(ulong *)(puVar4 + -0x40) = unaff_x24;
  *(ulong *)(puVar4 + -0x38) = unaff_x23;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(ulong *)(puVar4 + -0x20) = uVar13;
  *(long *)(puVar4 + -0x18) = param_1;
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  plVar12 = (long *)Atlas_Save_SaveManager__get_SaveData(lVar15);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar21 = *(undefined8 *)(puVar4 + -0x40);
  *(undefined8 *)(puVar4 + -0x40) = uVar21;
  *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  plVar20 = plVar12;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = Atlas_Save_SaveManager__GetIntDataIndex(uVar23,plVar12);
  if ((int)uVar9 < 0) {
    return 0;
  }
  if ((plVar12 != (long *)0x0) && (lVar15 = plVar12[0x22], lVar15 != 0)) {
    if (*(uint *)(lVar15 + 0x18) <= uVar9) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar15 + 0x10) + (ulong)uVar9 * 0x10 + 0x28);
  }
  auVar40 = func_0x00f78af4();
  uVar22 = auVar40._8_8_;
  lVar15 = auVar40._0_8_;
  *(undefined8 *)(puVar4 + -0x80) = uVar21;
  *(undefined8 *)(puVar4 + -0x78) = 0x3d246e0;
  *(undefined8 *)(puVar4 + -0x70) = 0x3eb4000;
  *(undefined8 *)(puVar4 + -0x68) = uVar23;
  *(undefined8 *)(puVar4 + -0x60) = 0;
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  puVar6 = puVar4 + -0x50;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar13 = Atlas_Save_SaveManager__GetStringDataIndex(lVar15,uVar22);
  lVar16 = Atlas_Save_SaveManager__get_SaveData(lVar15);
  if ((int)(uint)uVar13 < 0) {
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x118) != 0)) {
      uVar13 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar16 + 0x118),uVar22,plVar20,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar15 + 0x110) = 1;
      return uVar13;
    }
  }
  else if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x118), lVar16 != 0)) {
    if (*(uint *)(lVar16 + 0x18) <= (uint)uVar13) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (uVar13 & 0xffffffff) * 0x10 + 0x28);
    auVar43._8_8_ = plVar20;
    auVar43._0_8_ = lVar16;
    if (lVar16 != 0) {
      uVar24 = 5;
      puVar38 = (undefined *)0x14ecd5c;
      puVar5 = puVar4 + -0x80;
      plVar12 = plVar20;
      goto code_r0x029caa48;
    }
    lVar16 = Atlas_Save_SaveManager__get_SaveData(lVar15);
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x118) != 0)) {
      uVar13 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar16 + 0x118),uVar13,uVar22,plVar20,uRam0000000003d3d930)
      ;
      goto LAB_014ecdb8;
    }
  }
  auVar41 = func_0x00f78af4();
  plVar12 = auVar41._8_8_;
  *(ulong *)(puVar4 + -0xb0) = uVar13;
  *(undefined8 *)(puVar4 + -0xa8) = uVar22;
  *(long **)(puVar4 + -0xa0) = plVar20;
  *(long *)(puVar4 + -0x98) = lVar15;
  *(undefined1 **)(puVar4 + -0x90) = puVar6;
  *(code **)(puVar4 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  uVar14 = Atlas_Save_SaveManager__get_SaveData(auVar41._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0xb0);
  *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xa8);
  *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0xa0);
  *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x98);
  *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0x90);
  *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
  puVar6 = puVar4 + -0x90;
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((uVar14 != 0) && (uVar13 = *(ulong *)(uVar14 + 0x118), uVar13 != 0)) {
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar14;
    if (*(int *)(uVar13 + 0x18) < 1) {
      return 0xffffffff;
    }
    if (*(int *)(uVar13 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar15 = *(long *)(*(long *)(uVar13 + 0x10) + 0x20);
    auVar43._8_8_ = plVar12;
    auVar43._0_8_ = lVar15;
    if (lVar15 != 0) {
      uVar24 = 5;
      puVar38 = (undefined *)0x14ed084;
      puVar5 = puVar4 + -0xb0;
code_r0x029caa48:
      lVar16 = auVar43._8_8_;
      lVar15 = auVar43._0_8_;
      *(ulong *)(puVar5 + -0x30) = uVar13;
      *(long *)(puVar5 + -0x28) = auVar40._8_8_;
      *(long **)(puVar5 + -0x20) = plVar12;
      *(long *)(puVar5 + -0x18) = auVar40._0_8_;
      *(undefined1 **)(puVar5 + -0x10) = puVar6;
      *(undefined **)(puVar5 + -8) = puVar38;
      uVar14 = uVar24;
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50);
        bRam0000000003eb9443 = 1;
      }
      if (5 < (uint)uVar24) {
code_r0x029caca0:
        uVar23 = func_0x00f78a24(0x3d746f0);
        uVar23 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar23,0);
        func_0x00f78a24(0x3d1fce8);
        uVar21 = func_0x00f78aec();
        uVar22 = func_0x00f78a24(0x3d784e0);
        /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar21,uVar23,uVar22,0);
        uVar23 = func_0x00f78a24(0x3d5dae8);
        func_0x00f78ac0(uVar21,uVar23);
        goto code_r0x029cad04;
      }
      if (lVar15 == lVar16) {
        return 1;
      }
      if (lVar16 == 0) {
        return 0;
      }
      switch(uVar24 & 0xffffffff) {
      case 0:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        break;
      case 1:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        goto joined_r0x029caba0;
      case 2:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
        break;
      case 3:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
        if ((plVar12 == (long *)0x0) ||
           (plVar12 = (long *)(**(code **)(*plVar12 + 0x1f8))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x200)),
           plVar12 == (long *)0x0)) goto code_r0x029cad04;
        pcVar31 = *(code **)(*plVar12 + 0x1a8);
        uVar23 = *(undefined8 *)(*plVar12 + 0x1b0);
        uVar21 = 1;
        goto code_r0x029cabc8;
      case 4:
        goto code_r0x029cabd8;
      case 5:
        iVar11 = *(int *)(lVar15 + 0x10);
        if (iVar11 != *(int *)(lVar16 + 0x10)) {
          return 0;
        }
        if (iVar11 == 0) goto code_r0x029cac68;
        lVar27 = (long)iVar11 << 1;
        puVar28 = (ushort *)(lVar15 + 0x16);
        puVar33 = (ushort *)(lVar15 + 0x14);
        lVar17 = lVar27;
        goto code_r0x029cac24;
      default:
        goto code_r0x029caca0;
      }
      if ((plVar12 == (long *)0x0) ||
         (plVar12 = (long *)(**(code **)(*plVar12 + 0x1f8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x200)),
         plVar12 == (long *)0x0)) {
code_r0x029cad04:
        lVar15 = func_0x00f78af4();
        if (*(int *)(lVar15 + 0x10) == 0) {
          return 1;
        }
        lVar16 = (long)*(int *)(lVar15 + 0x10) * 2;
        puVar28 = (ushort *)(lVar15 + 0x14);
        puVar33 = (ushort *)(lVar15 + 0x16);
        do {
          lVar16 = lVar16 + -2;
          uVar3 = *puVar28;
          puVar28 = puVar33;
          puVar33 = puVar33 + 1;
        } while (uVar3 < 0x80 && lVar16 != 0);
        return (ulong)(uVar3 < 0x80);
      }
      pcVar31 = *(code **)(*plVar12 + 0x1a8);
      uVar23 = *(undefined8 *)(*plVar12 + 0x1b0);
      uVar21 = 0;
code_r0x029cabc8:
      iVar11 = (*pcVar31)(plVar12,lVar15,lVar16,uVar21,uVar23);
      goto code_r0x029cabcc;
    }
  }
  func_0x00f78af4();
  return 0xffffffff;
code_r0x016bc4d0:
  *(ulong *)(puVar6 + -0x40) = unaff_x24;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(ulong *)(puVar6 + -0x30) = uVar13;
  *(undefined8 *)(puVar6 + -0x28) = uVar23;
  *(long **)(puVar6 + -0x20) = plVar20;
  *(long **)(puVar6 + -0x18) = plVar35;
  *(undefined1 **)(puVar6 + -0x10) = puVar4;
  *(undefined **)(puVar6 + -8) = puVar38;
  puVar4 = puVar6 + -0x10;
  if ((bRam0000000003eb5c68 & 1) == 0) {
    func_0x00f78a20(0x3d3c4d0);
    func_0x00f78a20(0x3d3c4d8);
    func_0x00f78a20(0x3d24878);
    func_0x00f78a20(0x3d404c0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c68 = 1;
  }
  if (plVar12 == (long *)0x0) goto code_r0x016bc740;
  if (plVar12[0x11] != 0) {
    /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar12[0x11],plVar12);
  }
  if (bVar8) {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar12);
  }
  iVar11 = (int)plVar12[2];
  plVar35 = plVar12;
  if (*(char *)((long)plVar12 + 0x9a) == '\0') {
    if (iVar11 == 0) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      piVar25 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x3c);
      iVar11 = -1;
      goto code_r0x016bca08;
    }
    if (iVar11 != 1) goto code_r0x016bca14;
    uVar23 = 0x3d25440;
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) =
         *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) + -1;
    if (*plVar12 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
    lVar15 = plVar12[0x24];
    if (lVar15 == 0) goto code_r0x016bc740;
    uVar13 = (ulong)*(uint *)(lVar15 + 0x18);
    if ((int)*(uint *)(lVar15 + 0x18) < 1) goto code_r0x016bca14;
    unaff_x23 = 0;
    if (*(int *)(lVar15 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    plVar20 = *(long **)(*(long *)(lVar15 + 0x10) + 0x20);
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    bVar8 = false;
    puVar38 = &UNK_016bc72c;
    puVar6 = puVar6 + -0x40;
    plVar12 = plVar20;
    goto code_r0x016bc4d0;
  }
  if (iVar11 == 0) goto code_r0x016bc744;
  if (iVar11 != 1) goto code_r0x016bca14;
  uVar23 = 0x3d25440;
  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x58);
  if (lVar15 == 0) goto code_r0x016bc740;
  /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar15,plVar12,uRam0000000003d404c0);
  *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) =
       *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) + 1;
  if (*plVar12 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
  lVar15 = plVar12[0x24];
  if (lVar15 == 0) goto code_r0x016bc740;
  uVar13 = (ulong)*(uint *)(lVar15 + 0x18);
  if ((int)*(uint *)(lVar15 + 0x18) < 1) goto code_r0x016bca14;
  unaff_x23 = 0;
  if (*(int *)(lVar15 + 0x18) == 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  plVar20 = *(long **)(*(long *)(lVar15 + 0x10) + 0x20);
  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar8 = false;
  puVar38 = &UNK_016bc660;
  puVar6 = puVar6 + -0x40;
  plVar12 = plVar20;
  goto code_r0x016bc4d0;
code_r0x016bc740:
  func_0x00f78af4();
code_r0x016bc744:
  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
  uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  if (*(int *)(lVar15 + 0x84) == -1) {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    }
    uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    iVar11 = *(int *)(lVar15 + 8) + -1;
    *(int *)(lVar15 + 0x80) = iVar11;
    *(int *)(lVar15 + 0x84) = iVar11;
  }
  if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  }
  lVar15 = *(long *)(uVar13 + 0xb8);
  uVar9 = *(uint *)(lVar15 + 0x84);
  if (*(int *)(lVar15 + 8) + -1 <= (int)uVar9) {
    if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar9 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x84);
      uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    if ((int)uVar9 < 0) goto code_r0x016bc9e4;
    lVar15 = (ulong)uVar9 * 8 + 0x20;
    while( true ) {
      if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      plVar20 = *(long **)(*(long *)(uVar13 + 0xb8) + 0x50);
      if (plVar20 == (long *)0x0) goto code_r0x016bc740;
      if (*(uint *)(plVar20 + 3) <= uVar9) goto code_r0x016bca38;
      if (plVar20[(ulong)uVar9 + 4] == 0) break;
      lVar15 = lVar15 + -8;
      bVar8 = (int)uVar9 < 1;
      uVar9 = uVar9 - 1;
      if (bVar8) goto code_r0x016bc9e4;
    }
    if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar20 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x50);
      if (plVar20 == (long *)0x0) goto code_r0x016bc740;
    }
    lVar16 = func_0x00f78adc(plVar12,*(undefined8 *)(*plVar20 + 0x40));
    if (lVar16 == 0) goto code_r0x016bca4c;
    if (*(uint *)(plVar20 + 3) <= uVar9) goto code_r0x016bca38;
    *(long **)((long)plVar20 + lVar15) = plVar12;
    lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    if ((int)uVar9 < *(int *)(lVar15 + 0x80)) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      }
      uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      *(uint *)(lVar15 + 0x80) = uVar9;
    }
    if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    lVar15 = *(long *)(uVar13 + 0xb8);
    iVar11 = *(int *)(lVar15 + 0x80);
    if (*(int *)(lVar15 + 0x84) < iVar11) {
      if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
        iVar11 = *(int *)(lVar15 + 0x80);
        uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      *(int *)(lVar15 + 0x84) = iVar11;
    }
    goto code_r0x016bc9e4;
  }
  if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    uVar9 = *(uint *)(lVar15 + 0x84);
  }
  plVar20 = *(long **)(lVar15 + 0x50);
  if (plVar20 != (long *)0x0) {
    lVar15 = func_0x00f78adc(plVar12,*(undefined8 *)(*plVar20 + 0x40));
    if (lVar15 == 0) goto code_r0x016bca4c;
    if (*(uint *)(plVar20 + 3) <= uVar9 + 1) {
code_r0x016bca38:
      uVar23 = func_0x00f78b24();
      do {
        func_0x00f78ac0(uVar23,0);
code_r0x016bca44:
        func_0x00f78e5c(plVar12);
code_r0x016bca4c:
        uVar23 = func_0x00f78b14();
      } while( true );
    }
    plVar20[(long)(int)(uVar9 + 1) + 4] = (long)plVar12;
    uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    iVar11 = *(int *)(lVar15 + 0x84) + 1;
    *(int *)(lVar15 + 0x84) = iVar11;
    if (iVar11 < *(int *)(lVar15 + 0x80)) {
      if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
        iVar11 = *(int *)(lVar15 + 0x84);
        uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      *(int *)(lVar15 + 0x80) = iVar11;
    }
code_r0x016bc9e4:
    if (((*(ushort *)(uVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar13 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar13 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    piVar25 = (int *)(*(long *)(uVar13 + 0xb8) + 0x34);
    iVar11 = 1;
code_r0x016bca08:
    *piVar25 = *piVar25 + iVar11;
code_r0x016bca14:
    *(undefined1 *)(plVar12 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
    return uVar13;
  }
  goto code_r0x016bc740;
code_r0x029cac8c:
  iVar11 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar15,lVar16,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar15 + 0x10) != *(int *)(lVar16 + 0x10)) {
    return 0;
  }
  uVar23 = *(undefined8 *)(puVar5 + -0x10);
  uVar22 = *(undefined8 *)(puVar5 + -8);
  uVar21 = *(undefined8 *)(puVar5 + -0x20);
  uVar19 = *(undefined8 *)(puVar5 + -0x18);
  uVar13 = *(ulong *)(puVar5 + -0x30);
  uVar36 = *(undefined8 *)(puVar5 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar15 = auVar43._0_8_;
    *(ulong *)(puVar5 + -0x30) = uVar13;
    *(undefined8 *)(puVar5 + -0x28) = uVar36;
    *(undefined8 *)(puVar5 + -0x20) = uVar21;
    *(undefined8 *)(puVar5 + -0x18) = uVar19;
    *(undefined8 *)(puVar5 + -0x10) = uVar23;
    *(undefined8 *)(puVar5 + -8) = uVar22;
    if ((lVar15 != 0) && (auVar43._8_8_ != 0)) {
      plVar12 = (long *)(lVar15 + 0x14);
      iVar11 = *(int *)(lVar15 + 0x10);
      plVar20 = (long *)(auVar43._8_8_ + 0x14);
      uVar13 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar13 & 1) == 0) {
        iVar10 = iVar11;
        if (9 < iVar11) {
          do {
            if ((int)*plVar12 != (int)*plVar20) {
              return 0;
            }
            if (*(int *)((long)plVar12 + 4) != *(int *)((long)plVar20 + 4)) {
              return 0;
            }
            if ((int)plVar12[1] != (int)plVar20[1]) {
              return 0;
            }
            if (*(int *)((long)plVar12 + 0xc) != *(int *)((long)plVar20 + 0xc)) {
              return 0;
            }
            if ((int)plVar12[2] != (int)plVar20[2]) {
              return 0;
            }
            plVar12 = (long *)((long)plVar12 + 0x14);
            plVar20 = (long *)((long)plVar20 + 0x14);
            iVar11 = iVar10 + -10;
            bVar8 = 0x13 < iVar10;
            iVar10 = iVar11;
          } while (bVar8);
        }
      }
      else {
        iVar10 = iVar11;
        if (0xb < iVar11) {
          do {
            if (((*plVar12 != *plVar20) || (plVar12[1] != plVar20[1])) || (plVar12[2] != plVar20[2])
               ) {
              return 0;
            }
            plVar12 = plVar12 + 3;
            plVar20 = plVar20 + 3;
            iVar11 = iVar10 + -0xc;
            bVar8 = 0x17 < iVar10;
            iVar10 = iVar11;
          } while (bVar8);
        }
      }
      if (iVar11 < 1) {
        uVar13 = 1;
      }
      else {
        iVar11 = iVar11 + 2;
        do {
          bVar8 = (int)*plVar12 == (int)*plVar20;
          uVar13 = (ulong)bVar8;
          if (!bVar8) {
            return uVar13;
          }
          plVar12 = (long *)((long)plVar12 + 4);
          plVar20 = (long *)((long)plVar20 + 4);
          iVar11 = iVar11 + -2;
        } while (2 < iVar11);
      }
      return uVar13;
    }
    auVar41 = func_0x00f78af4();
    lVar16 = auVar41._8_8_;
    lVar15 = auVar41._0_8_;
    *(ulong *)(puVar5 + -0x60) = uVar13;
    *(undefined8 *)(puVar5 + -0x58) = uVar36;
    *(undefined8 *)(puVar5 + -0x50) = uVar21;
    *(undefined8 *)(puVar5 + -0x48) = uVar19;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x38) = &System_String__CompareOrdinalHelper;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
    }
    if ((lVar15 != 0) && (lVar16 != 0)) {
      uVar1 = *(undefined4 *)(lVar15 + 0x10);
      uVar2 = *(undefined4 *)(lVar16 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar11 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar26 = (uint *)(lVar15 + 0x14);
      puVar30 = (uint *)(lVar16 + 0x14);
      if (iVar11 < 10) goto code_r0x029ca8c8;
      lVar17 = 4;
      iVar10 = iVar11;
      goto code_r0x029ca858;
    }
    auVar43 = func_0x00f78af4();
    plVar12 = auVar43._8_8_;
    plVar20 = auVar43._0_8_;
    *(ulong *)(puVar5 + -0x90) = uVar13;
    *(undefined8 *)(puVar5 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])(puVar5 + -0x80) = auVar41;
    *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x68) = &System_String__Equals;
    puVar6 = puVar5 + -0x70;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (plVar20 == (long *)0x0) break;
    if ((plVar12 == (long *)0x0) || (*plVar12 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (plVar20 == plVar12) {
      return 1;
    }
    uVar24 = uVar14;
    if (plVar12 == (long *)0x0) goto code_r0x029caa44;
    if ((int)plVar20[2] != (int)plVar12[2]) {
      return 0;
    }
    uVar23 = *(undefined8 *)(puVar5 + -0x70);
    uVar22 = *(undefined8 *)(puVar5 + -0x68);
    uVar21 = *(undefined8 *)(puVar5 + -0x80);
    uVar19 = *(undefined8 *)(puVar5 + -0x78);
    uVar13 = *(ulong *)(puVar5 + -0x90);
    uVar36 = *(undefined8 *)(puVar5 + -0x88);
    puVar5 = puVar5 + -0x60;
  }
  func_0x00f78a24(0x3d23938);
  plVar20 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar20,0);
  uVar23 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(plVar20,uVar23);
  uVar24 = uVar14;
code_r0x029caa44:
  auVar40._8_8_ = 0x3eb9000;
  auVar40._0_8_ = plVar20;
  puVar38 = &System_String__Equals;
  auVar43 = func_0x00f78af4();
  puVar5 = puVar5 + -0x90;
  goto code_r0x029caa48;
  while( true ) {
    if (puVar26[1] != puVar30[1]) goto code_r0x029ca930;
    if (puVar26[2] != puVar30[2]) {
      lVar17 = 8;
      goto code_r0x029ca930;
    }
    if (puVar26[3] != puVar30[3]) {
      lVar17 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar26[4] != puVar30[4]) {
      lVar17 = 0x10;
      goto code_r0x029ca930;
    }
    puVar26 = puVar26 + 5;
    puVar30 = puVar30 + 5;
    iVar11 = iVar10 + -10;
    bVar8 = iVar10 < 0x14;
    iVar10 = iVar11;
    if (bVar8) break;
code_r0x029ca858:
    if (*puVar26 != *puVar30) {
      lVar17 = 0;
code_r0x029ca930:
      puVar26 = (uint *)(lVar17 + (long)puVar26);
      puVar30 = (uint *)(lVar17 + (long)puVar30);
      uVar9 = (uint)(ushort)*puVar26 - (uint)(ushort)*puVar30;
      if (uVar9 != 0) {
        return (ulong)uVar9;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar11) {
    iVar11 = iVar11 + 2;
    do {
      if (*puVar26 != *puVar30) {
        uVar9 = (*puVar26 & 0xffff) - (*puVar30 & 0xffff);
        if (uVar9 != 0) {
          return (ulong)uVar9;
        }
code_r0x029ca948:
        uVar9 = (uint)*(ushort *)((long)puVar26 + 2);
        uVar29 = (uint)*(ushort *)((long)puVar30 + 2);
        goto code_r0x029ca950;
      }
      puVar26 = puVar26 + 1;
      puVar30 = puVar30 + 1;
      iVar11 = iVar11 + -2;
    } while (2 < iVar11);
  }
  uVar9 = *(uint *)(lVar15 + 0x10);
  uVar29 = *(uint *)(lVar16 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar9 - uVar29);
  while( true ) {
    lVar17 = lVar17 + -2;
    puVar28 = puVar32 + 1;
    puVar33 = puVar32;
    if (lVar17 == 0) break;
code_r0x029cac24:
    puVar32 = puVar28;
    if (0x7f < *puVar33) goto code_r0x029cac8c;
  }
  if (iVar11 != 0) {
    puVar28 = (ushort *)(lVar16 + 0x16);
    puVar33 = (ushort *)(lVar16 + 0x14);
    do {
      puVar32 = puVar28;
      if (0x7f < *puVar33) goto code_r0x029cac8c;
      lVar27 = lVar27 + -2;
      puVar28 = puVar32 + 1;
      puVar33 = puVar32;
    } while (lVar27 != 0);
  }
code_r0x029cac68:
  iVar11 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar15,lVar16);
code_r0x029cabcc:
  return (ulong)(iVar11 == 0);
}



// ============================================================
// RVA: 0x14efbd8 | Atlas.UI.SeasonMetagameData.DisplayNameShort
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14efc04 | Atlas.UI.SeasonMetagameData.GetProgressForRewardSegment
// ============================================================

/* WARNING: Possible PIC construction at 0x014efc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ecd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ed080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014efd1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014efdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f005c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f0318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f08c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc660) */
/* WARNING: Removing unreachable block (ram,0x016bc66c) */
/* WARNING: Removing unreachable block (ram,0x016bc674) */
/* WARNING: Removing unreachable block (ram,0x014f031c) */
/* WARNING: Removing unreachable block (ram,0x014f0324) */
/* WARNING: Removing unreachable block (ram,0x014f0374) */
/* WARNING: Removing unreachable block (ram,0x014f038c) */
/* WARNING: Removing unreachable block (ram,0x014f0060) */
/* WARNING: Removing unreachable block (ram,0x014f0064) */
/* WARNING: Removing unreachable block (ram,0x014f0088) */
/* WARNING: Removing unreachable block (ram,0x014f0090) */
/* WARNING: Removing unreachable block (ram,0x014f0094) */
/* WARNING: Removing unreachable block (ram,0x014f00d0) */
/* WARNING: Removing unreachable block (ram,0x014f00ec) */
/* WARNING: Removing unreachable block (ram,0x014f00f0) */
/* WARNING: Removing unreachable block (ram,0x014efdf4) */
/* WARNING: Removing unreachable block (ram,0x014efdfc) */
/* WARNING: Removing unreachable block (ram,0x014efe08) */
/* WARNING: Removing unreachable block (ram,0x014efe10) */
/* WARNING: Removing unreachable block (ram,0x014efe18) */
/* WARNING: Removing unreachable block (ram,0x014efe28) */
/* WARNING: Removing unreachable block (ram,0x014efe30) */
/* WARNING: Removing unreachable block (ram,0x014efe48) */
/* WARNING: Removing unreachable block (ram,0x014efe4c) */
/* WARNING: Removing unreachable block (ram,0x014efe40) */
/* WARNING: Removing unreachable block (ram,0x014efd20) */
/* WARNING: Removing unreachable block (ram,0x014efd30) */
/* WARNING: Removing unreachable block (ram,0x014efd38) */
/* WARNING: Removing unreachable block (ram,0x014efd3c) */
/* WARNING: Removing unreachable block (ram,0x014efd44) */
/* WARNING: Removing unreachable block (ram,0x014ed084) */
/* WARNING: Removing unreachable block (ram,0x014ed088) */
/* WARNING: Removing unreachable block (ram,0x014ecd5c) */
/* WARNING: Removing unreachable block (ram,0x014efc2c) */
/* WARNING: Removing unreachable block (ram,0x014efc4c) */
/* WARNING: Removing unreachable block (ram,0x014efc34) */
/* WARNING: Removing unreachable block (ram,0x014efc3c) */
/* WARNING: Removing unreachable block (ram,0x014efc50) */
/* WARNING: Removing unreachable block (ram,0x014efc58) */
/* WARNING: Removing unreachable block (ram,0x014f08cc) */
/* WARNING: Removing unreachable block (ram,0x014f090c) */
/* WARNING: Removing unreachable block (ram,0x014f0914) */
/* WARNING: Removing unreachable block (ram,0x014f0924) */
/* WARNING: Removing unreachable block (ram,0x014f0968) */
/* WARNING: Removing unreachable block (ram,0x014f0978) */
/* WARNING: Removing unreachable block (ram,0x014f0980) */
/* WARNING: Removing unreachable block (ram,0x014f0994) */
/* WARNING: Removing unreachable block (ram,0x014f09f8) */
/* WARNING: Removing unreachable block (ram,0x014f0aac) */
/* WARNING: Removing unreachable block (ram,0x014f0ab4) */
/* WARNING: Removing unreachable block (ram,0x014f0ab8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

ulong Atlas_UI_SeasonMetagameData__GetProgressForRewardSegment(ulong param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  uint uVar8;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar9;
  int iVar10;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  int *piVar24;
  uint *puVar25;
  long lVar26;
  ushort *puVar27;
  uint uVar28;
  uint *puVar29;
  code *pcVar30;
  ushort *puVar31;
  ushort *puVar32;
  long unaff_x19;
  undefined8 uVar33;
  long *plVar34;
  undefined8 unaff_x21;
  undefined8 uVar35;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined *puVar38;
  undefined8 unaff_d8;
  double dVar39;
  undefined8 unaff_d9;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  puVar37 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x50) == 0) {
    puVar38 = &Atlas_Stats_SeasonsManager__GetStarsForSeason;
    auVar41 = func_0x00f78af4();
    puVar6 = &stack0xffffffffffffffd0;
  }
  else {
    auVar41._8_8_ = *(undefined8 *)(param_1 + 0x10);
    auVar41._0_8_ = *(long *)(param_1 + 0x50);
    puVar38 = (undefined *)0x14efc2c;
    puVar6 = &stack0xffffffffffffffd0;
    unaff_x19 = param_2;
  }
code_r0x014efc88:
  puVar5 = puVar6 + -0x10;
  puVar36 = puVar6 + -0x10;
  *(undefined1 **)(puVar6 + -0x10) = puVar37;
  *(undefined **)(puVar6 + -8) = puVar38;
  if ((auVar41._8_8_ == 0) || (lVar15 = *(long *)(auVar41._0_8_ + 0x30), lVar15 == 0)) {
    puVar38 = &Atlas_UI_SeasonMetagameData__StarsForSeason;
    lVar15 = func_0x00f78af4();
    while( true ) {
      *(undefined1 **)(puVar5 + -0x10) = puVar36;
      *(undefined **)(puVar5 + -8) = puVar38;
      if (*(long *)(lVar15 + 0x50) != 0) break;
      lVar15 = func_0x00f78af4();
      puVar6 = puVar5 + -0x40;
      *(ulong *)(puVar5 + -0x40) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x38) = unaff_x21;
      *(ulong *)(puVar5 + -0x30) = param_1;
      *(long *)(puVar5 + -0x28) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x18) = &Atlas_UI_SeasonMetagameData__SeasonProgress;
      puVar37 = puVar5 + -0x20;
      param_1 = 0x3eb4000;
      if ((bRam0000000003eb4c68 & 1) == 0) {
        func_0x00f78a20(0x3d247f0);
        bRam0000000003eb4c68 = 1;
      }
      if (*(long *)(lVar15 + 0x50) != 0) {
        unaff_x21 = 0x3d247f0;
        auVar41._8_8_ = *(undefined8 *)(lVar15 + 0x10);
        auVar41._0_8_ = *(long *)(lVar15 + 0x50);
        puVar38 = &UNK_014efd20;
        unaff_x19 = lVar15;
        goto code_r0x014efc88;
      }
      unaff_x19 = func_0x00f78af4();
      puVar6 = puVar5 + -0x80;
      *(ulong *)(puVar5 + -0x80) = unaff_x24;
      *(ulong *)(puVar5 + -0x78) = unaff_x23;
      *(ulong *)(puVar5 + -0x70) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x68) = unaff_x21;
      *(undefined8 *)(puVar5 + -0x60) = 0x3eb4000;
      *(long *)(puVar5 + -0x58) = lVar15;
      *(undefined1 **)(puVar5 + -0x50) = puVar37;
      *(undefined **)(puVar5 + -0x48) = &Atlas_UI_SeasonMetagameData__GetCurrentRewardIndex;
      puVar37 = puVar5 + -0x50;
      unaff_x23 = 0x3d247f0;
      uVar12 = 0x3d247f0;
      if ((bRam0000000003eb4c69 & 1) == 0) {
        func_0x00f78a20(0x3d247f0);
        bRam0000000003eb4c69 = 1;
      }
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        param_1 = (ulong)(**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) - 1);
        auVar41._8_8_ = *(undefined8 *)(unaff_x19 + 0x10);
        auVar41._0_8_ = *(long *)(unaff_x19 + 0x50);
        puVar38 = &UNK_014efdf4;
        goto code_r0x014efc88;
      }
      lVar15 = func_0x00f78af4();
      puVar4 = puVar5 + -0x90;
      puVar6 = puVar5 + -0x90;
      *(undefined1 **)(puVar5 + -0x90) = puVar37;
      *(undefined **)(puVar5 + -0x88) = &Atlas_UI_SeasonMetagameData__IsSeasonActive;
      if (*(long *)(lVar15 + 0x50) == 0) {
        puVar38 = &Atlas_Stats_SeasonsManager__IsSeasonActive;
        auVar42 = func_0x00f78af4();
      }
      else {
        auVar42._8_8_ = *(undefined8 *)(lVar15 + 0x10);
        auVar42._0_8_ = *(long *)(lVar15 + 0x50);
        puVar4 = puVar5 + -0x80;
        puVar6 = *(undefined1 **)(puVar5 + -0x90);
        puVar38 = *(undefined **)(puVar5 + -0x88);
      }
      lVar13 = auVar42._8_8_;
      lVar15 = auVar42._0_8_;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
      *(ulong *)(puVar4 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x38) = 0x3d247f0;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar4 + -0x20) = 0x3eb4000;
      *(long *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = puVar6;
      *(undefined **)(puVar4 + -8) = puVar38;
      uVar22 = 0x3eb4000;
      if ((bRam0000000003eb4c7d & 1) == 0) {
        func_0x00f78a20(0x3d2dca8);
        bRam0000000003eb4c7d = 1;
      }
      if (*(long *)(lVar15 + 0x28) != 0) {
        lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
        if (*(long *)(lVar16 + 8) != 0) {
          uVar22 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x30));
          unaff_x23 = uVar12;
          if (*(long *)(lVar15 + 0x28) != 0) {
            lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
            if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
              unaff_x22 = *(ulong *)(*(long *)(lVar16 + 8) + 0x28);
              lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
              if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
                unaff_x23 = (ulong)*(uint *)(*(long *)(lVar16 + 8) + 0x20);
                lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
                if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
                  unaff_x24 = (ulong)*(uint *)(*(long *)(lVar16 + 8) + 0x24);
                  lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
                  if (*(long *)(lVar16 + 8) != 0) {
                    unaff_x25 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                    lVar15 = *(long *)(lVar15 + 0x38);
                    uVar12 = /*Atlas.Definitions.SeasonRotationHelper$$IsRotationActive*/ func_0x014f18ec(lVar15,unaff_x25);
                    if ((int)uVar12 == 0) {
                      return uVar12;
                    }
                    lVar16 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar22,unaff_x23,lVar15,unaff_x25,unaff_x22,unaff_x24);
                    if ((lVar13 != 0) && (lVar16 != 0)) {
                      lVar13 = *(long *)(lVar13 + 0x18);
                      lVar15 = *(long *)(lVar16 + 0x18);
                      auVar43._8_8_ = lVar15;
                      auVar43._0_8_ = lVar13;
                      uVar14 = 0;
                      uVar22 = *(undefined8 *)(puVar4 + -0x10);
                      uVar21 = *(undefined8 *)(puVar4 + -8);
                      uVar20 = *(undefined8 *)(puVar4 + -0x20);
                      uVar18 = *(undefined8 *)(puVar4 + -0x18);
                      uVar12 = *(ulong *)(puVar4 + -0x30);
                      uVar35 = *(undefined8 *)(puVar4 + -0x28);
                      if (lVar13 == lVar15) {
                        uVar23 = 1;
                      }
                      else {
                        uVar23 = 0;
                        if ((lVar13 != 0) && (lVar15 != 0)) {
                          if (*(int *)(lVar13 + 0x10) == *(int *)(lVar15 + 0x10))
                          goto System_String__EqualsHelper;
                          uVar23 = 0;
                        }
                      }
                      return uVar23;
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar16 = func_0x00f78af4();
      *(ulong *)(puVar4 + -0x90) = unaff_x24;
      *(ulong *)(puVar4 + -0x88) = unaff_x23;
      *(ulong *)(puVar4 + -0x80) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x78) = uVar22;
      *(long *)(puVar4 + -0x70) = lVar15;
      *(long *)(puVar4 + -0x68) = lVar13;
      *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x58) = &Atlas_UI_SeasonMetagameData__GetTimeLeftString;
      uVar20 = 0x3eb4000;
      if ((bRam0000000003eb4c6a & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d7cca0);
        func_0x00f78a20(0x3d6c020);
        bRam0000000003eb4c6a = 1;
      }
      *(undefined8 *)(puVar4 + -0xa0) = 0;
      lVar15 = *(long *)(lVar16 + 0x50);
      if (lVar15 == 0) {
        puVar38 = &Atlas_Stats_SeasonsManager__GetActiveDateRange;
        lVar15 = func_0x00f78af4();
      }
      else {
        uVar20 = *(undefined8 *)(lVar15 + 0x38);
        puVar38 = &UNK_014f0060;
      }
      *(ulong *)(puVar4 + -0xe0) = unaff_x22;
      *(undefined8 *)(puVar4 + -0xd8) = uVar22;
      *(undefined8 *)(puVar4 + -0xd0) = uVar20;
      *(long *)(puVar4 + -200) = lVar16;
      *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0x60;
      *(undefined **)(puVar4 + -0xb8) = puVar38;
      uVar12 = 0x3eb4000;
      if ((bRam0000000003eb4c7f & 1) == 0) {
        func_0x00f78a20(0x3d2dca8);
        bRam0000000003eb4c7f = 1;
      }
      if (*(long *)(lVar15 + 0x28) != 0) {
        lVar13 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
        if (*(long *)(lVar13 + 8) != 0) {
          /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar13 + 8) + 0x30));
          if (*(long *)(lVar15 + 0x28) != 0) {
            lVar13 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
            if ((*(long *)(lVar13 + 8) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
              uVar8 = *(uint *)(*(long *)(lVar13 + 8) + 0x20);
              uVar12 = (ulong)uVar8;
              lVar13 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
              if (*(long *)(lVar13 + 8) != 0) {
                uVar22 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                if (*(long *)(lVar15 + 0x28) != 0) {
                  lVar13 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar15 + 0x28),0);
                  if (*(long *)(lVar13 + 8) != 0) {
                    iVar10 = *(int *)(*(long *)(lVar13 + 8) + 0x24);
                    uVar20 = *(undefined8 *)(lVar15 + 0x38);
                    if (uVar8 == 3) {
Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange:
                      *(ulong *)(puVar4 + -0xf0) = unaff_x24;
                      *(ulong *)(puVar4 + -0xe8) = unaff_x23;
                      *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0xe0);
                      *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xd8);
                      *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
                      *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
                      *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
                      *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
                      *(undefined8 *)(puVar4 + -0xf8) = uVar20;
                      if ((bRam0000000003eb4c76 & 1) == 0) {
                        func_0x00f78a20(0x3d21060);
                        bRam0000000003eb4c76 = 1;
                      }
                      iVar10 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0xf8,0);
                      iVar10 = iVar10 + 1;
                      uVar12 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0xf8,0);
                      if (0xc < iVar10) {
                        iVar10 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0xf8,0);
                        uVar12 = (ulong)(iVar10 + 1);
                        iVar10 = 1;
                      }
                      uVar22 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0xf8,0);
                      uVar20 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0xf8,0);
                      uVar14 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                      /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar14,1,uVar22,uVar20,0);
                      uVar22 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                      /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar22,1,iVar10,uVar12,0);
                      return uVar14;
                    }
                    if (uVar8 != 2) {
                      if (uVar8 != 1)
                      goto Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange;
                      iVar10 = 1;
                    }
                    *(undefined8 *)(puVar4 + -0x100) = unaff_d9;
                    *(undefined8 *)(puVar4 + -0xf8) = unaff_d8;
                    *(ulong *)(puVar4 + -0xf0) = unaff_x24;
                    *(ulong *)(puVar4 + -0xe8) = unaff_x23;
                    *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0xe0);
                    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xd8);
                    *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
                    *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
                    *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
                    *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
                    *(undefined8 *)(puVar4 + -0x108) = uVar22;
                    if ((bRam0000000003eb4c77 & 1) == 0) {
                      func_0x00f78a20(0x3d21070);
                      func_0x00f78a20(0x3d21060);
                      bRam0000000003eb4c77 = 1;
                    }
                    *(undefined8 *)(puVar4 + -0x110) = 0;
                    uVar22 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0x108,0);
                    uVar21 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0x108,0);
                    uVar18 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar4 + -0x108,0);
                    /*System.DateTime$$.ctor*/ func_0x02a8c93c(puVar4 + -0x110,uVar22,uVar21,uVar18,0);
                    uVar22 = *(undefined8 *)(puVar4 + -0x110);
                    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar22 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar20,uVar22,0);
                    *(undefined8 *)(puVar4 + -0x118) = uVar22;
                    iVar9 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar4 + -0x118,0);
                    dVar39 = (double)(iVar10 * 7);
                    while (iVar10 * 7 < iVar9) {
                      uVar22 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar39,puVar4 + -0x110,0);
                      *(undefined8 *)(puVar4 + -0x110) = uVar22;
                      if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar22 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar20,uVar22,0);
                      *(undefined8 *)(puVar4 + -0x118) = uVar22;
                      iVar9 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar4 + -0x118,0);
                    }
                    uVar22 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar4 + -0x110,0);
                    uVar20 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0x110,0);
                    uVar21 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0x110,0);
                    uVar12 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                    /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar12,uVar22,uVar20,uVar21,0);
                    uVar22 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar39,puVar4 + -0x110,0);
                    *(undefined8 *)(puVar4 + -0x110) = uVar22;
                    uVar22 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar4 + -0x110,0);
                    uVar20 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0x110,0);
                    uVar21 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0x110,0);
                    uVar18 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                    /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar18,uVar22,uVar20,uVar21,0);
                    return uVar12;
                  }
                }
              }
            }
          }
        }
      }
      lVar13 = func_0x00f78af4();
      *(ulong *)(puVar4 + -0x100) = uVar12;
      *(long *)(puVar4 + -0xf8) = lVar15;
      *(undefined1 **)(puVar4 + -0xf0) = puVar4 + -0xc0;
      *(undefined **)(puVar4 + -0xe8) = &Atlas_UI_SeasonMetagameData__GetFinishedString;
      if ((bRam0000000003eb4c6b & 1) == 0) {
        func_0x00f78a20(0x3d6c018);
        bRam0000000003eb4c6b = 1;
      }
      lVar15 = *(long *)(lVar13 + 0x28);
      if (lVar15 != 0) {
        *(undefined8 *)(puVar4 + -0xf0) = *(undefined8 *)(puVar4 + -0xf0);
        *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0xe8);
        *(undefined8 *)(puVar4 + -0xf8) = 0;
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar15,/*STR('EPISODES_NOW')*/ uRam0000000003d6c018,puVar4 + -0xf8);
        return *(ulong *)(puVar4 + -0xf8);
      }
      auVar41 = func_0x00f78af4();
      lVar16 = auVar41._8_8_;
      lVar15 = auVar41._0_8_;
      *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x148) = unaff_x25;
      *(ulong *)(puVar4 + -0x140) = unaff_x24;
      *(ulong *)(puVar4 + -0x138) = unaff_x23;
      *(ulong *)(puVar4 + -0x130) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x128) = uVar22;
      *(undefined8 *)(puVar4 + -0x120) = 0x3eb4000;
      *(long *)(puVar4 + -0x118) = lVar13;
      *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0xf0;
      *(undefined **)(puVar4 + -0x108) = &Atlas_UI_SeasonProgressPanelBehaviour__Init;
      uVar22 = 0x3eb4000;
      if ((bRam0000000003eb4c6c & 1) == 0) {
        func_0x00f78a20(0x3d1ff30);
        func_0x00f78a20(0x3d247f8);
        func_0x00f78a20(0x3d790b0);
        func_0x00f78a20(0x3d79118);
        bRam0000000003eb4c6c = 1;
      }
      if (lVar16 == 0) {
code_r0x014f0410:
        puVar38 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
        lVar13 = func_0x00f78af4();
      }
      else {
        lVar13 = *(long *)(lVar16 + 0xd0);
        uVar20 = *(undefined8 *)(lVar16 + 0x20);
        *(long *)(lVar15 + 0x48) = lVar13;
        *(undefined8 *)(lVar15 + 0x50) = uVar20;
        if (lVar13 == 0) goto code_r0x014f0410;
        puVar38 = &UNK_014f031c;
      }
      *(ulong *)(puVar4 + -400) = unaff_x24;
      *(ulong *)(puVar4 + -0x188) = unaff_x23;
      *(ulong *)(puVar4 + -0x180) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x178) = 0x3eb4000;
      *(long *)(puVar4 + -0x170) = lVar16;
      *(long *)(puVar4 + -0x168) = lVar15;
      *(undefined1 **)(puVar4 + -0x160) = puVar4 + -0x110;
      *(undefined **)(puVar4 + -0x158) = puVar38;
      uVar12 = 0x3eb4000;
      if ((bRam0000000003eb4c7b & 1) == 0) {
        func_0x00f78a20(0x3d2dca0);
        func_0x00f78a20(0x3d2dca8);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4c7b = 1;
      }
      if (*(long *)(lVar13 + 0x28) != 0) {
        puVar17 = (undefined8 *)/*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar13 + 0x28),0);
        *(undefined8 *)(puVar4 + -0x198) = *puVar17;
        iVar10 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar4 + -0x198,0);
        uVar12 = 0;
        if (iVar10 == 0) {
code_r0x014f0548:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
          if ((iVar10 != 0) && (*(char *)(lVar13 + 0x20) != '\0')) {
            uVar12 = /*Atlas.Stats.SeasonsManager$$GetSeasonByDateRange*/ func_0x014f22f4(lVar13);
          }
          return uVar12;
        }
        if (*(long *)(lVar13 + 0x28) != 0) {
          lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar13 + 0x28),0);
          if (*(long *)(lVar15 + 8) != 0) {
            uVar12 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar15 + 8) + 0x30));
            if (*(long *)(lVar13 + 0x28) != 0) {
              lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar13 + 0x28),0);
              if ((*(long *)(lVar15 + 8) != 0) && (*(long *)(lVar13 + 0x28) != 0)) {
                uVar22 = *(undefined8 *)(*(long *)(lVar15 + 8) + 0x28);
                lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar13 + 0x28),0);
                if ((*(long *)(lVar15 + 8) != 0) && (*(long *)(lVar13 + 0x28) != 0)) {
                  unaff_x22 = (ulong)*(uint *)(*(long *)(lVar15 + 8) + 0x20);
                  lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar13 + 0x28),0);
                  if ((*(long *)(lVar15 + 8) != 0) && (*(long *)(lVar13 + 0x28) != 0)) {
                    unaff_x23 = (ulong)*(uint *)(*(long *)(lVar15 + 8) + 0x24);
                    lVar15 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar13 + 0x28),0);
                    if (*(long *)(lVar15 + 8) != 0) {
                      uVar20 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                      uVar12 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar12,unaff_x22,*(undefined8 *)(lVar13 + 0x38),
                                               uVar20,uVar22,unaff_x23);
                      goto code_r0x014f0548;
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar15 = func_0x00f78af4();
      *(ulong *)(puVar4 + -0x1d0) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x1c8) = uVar22;
      *(ulong *)(puVar4 + -0x1c0) = uVar12;
      *(long *)(puVar4 + -0x1b8) = lVar13;
      *(undefined1 **)(puVar4 + -0x1b0) = puVar4 + -0x160;
      *(undefined **)(puVar4 + -0x1a8) = &Atlas_UI_SeasonProgressPanelBehaviour__SetData;
      uVar22 = 0x3d247f0;
      if ((bRam0000000003eb4c6d & 1) == 0) {
        func_0x00f78a20(0x3d247f0);
        func_0x00f78a20(0x3d25608);
        bRam0000000003eb4c6d = 1;
      }
      lVar13 = *(long *)(lVar15 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar20 = 0;
      if (lVar13 != 0) {
        unaff_x22 = 0x3d25000;
        uVar20 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar13,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        uVar22 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar20,*(undefined4 *)(lVar15 + 0x68),0);
        plVar11 = *(long **)(lVar15 + 0x30);
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar21 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar22,uVar20,0);
        lVar15 = 0;
        if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar12 = (**(code **)(*plVar11 + 0x558))(plVar11,uVar21,*(undefined8 *)(*plVar11 + 0x560))
          ;
          return uVar12;
        }
      }
      lVar13 = func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0x1f0) = uVar20;
      *(long *)(puVar4 + -0x1e8) = lVar15;
      *(undefined1 **)(puVar4 + -0x1e0) = puVar4 + -0x1b0;
      *(undefined **)(puVar4 + -0x1d8) = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
      if (*(long *)(lVar13 + 0x78) != 0) {
        /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar13 + 0x78),0,0);
        plVar11 = *(long **)(lVar13 + 0x60);
        *(ulong *)(puVar4 + -0x200) = unaff_x22;
        *(undefined8 *)(puVar4 + -0x1f8) = uVar22;
        *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
        *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
        *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
        *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
        if ((bRam0000000003eb5c52 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          func_0x00f78a20(0x3d25440);
          bRam0000000003eb5c52 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
          return /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
        }
        if (plVar11 == (long *)0x0) {
          uVar12 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
          if (cRam0000000003cc2ae1 == '\0') {
            uVar12 = func_0x00f78a20(0x3d21160);
            cRam0000000003cc2ae1 = '\x01';
          }
          if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
            return uVar12;
          }
          uVar22 = *(undefined8 *)(puVar4 + -0x200);
          uVar20 = *(undefined8 *)(puVar4 + -0x1f8);
          *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
          *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
          *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
          *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
          if ((bRam0000000003eb5b2e & 1) == 0) {
            func_0x00f78a20(0x3d70738,0);
            bRam0000000003eb5b2e = 1;
          }
          plVar11 = (long *)0x0;
          uVar21 = *(undefined8 *)(puVar4 + -0x1e0);
          uVar35 = *(undefined8 *)(puVar4 + -0x1d8);
          uVar18 = *(undefined8 *)(puVar4 + -0x1f0);
          uVar33 = *(undefined8 *)(puVar4 + -0x1e8);
          plVar19 = /*STR('Null Tween')*/ plRam0000000003d70738;
        }
        else if ((char)plVar11[0x1d] == '\0') {
          uVar12 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
          if (cRam0000000003cc2ae1 == '\0') {
            uVar12 = func_0x00f78a20(0x3d21160);
            cRam0000000003cc2ae1 = '\x01';
          }
          if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
            return uVar12;
          }
          uVar22 = *(undefined8 *)(puVar4 + -0x200);
          uVar20 = *(undefined8 *)(puVar4 + -0x1f8);
          *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
          *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
          *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
          *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
          if ((bRam0000000003eb5b2c & 1) == 0) {
            func_0x00f78a20(0x3d74b30,0);
            bRam0000000003eb5b2c = 1;
          }
          plVar11 = (long *)0x0;
          uVar21 = *(undefined8 *)(puVar4 + -0x1e0);
          uVar35 = *(undefined8 *)(puVar4 + -0x1d8);
          uVar18 = *(undefined8 *)(puVar4 + -0x1f0);
          uVar33 = *(undefined8 *)(puVar4 + -0x1e8);
          plVar19 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
        }
        else {
          if (*(char *)((long)plVar11 + 0xe9) == '\0') {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
            if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
              *(undefined1 *)(plVar11 + 0x1d) = 0;
              return uVar12;
            }
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            bVar7 = true;
            puVar37 = *(undefined1 **)(puVar4 + -0x1e0);
            puVar38 = *(undefined **)(puVar4 + -0x1d8);
            plVar19 = *(long **)(puVar4 + -0x1f0);
            uVar12 = *(ulong *)(puVar4 + -0x200);
            uVar22 = *(undefined8 *)(puVar4 + -0x1f8);
            puVar6 = puVar4 + -0x1d0;
            plVar34 = *(long **)(puVar4 + -0x1e8);
            goto code_r0x016bc4d0;
          }
          uVar12 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
          if (cRam0000000003cc2ae1 == '\0') {
            uVar12 = func_0x00f78a20(0x3d21160);
            cRam0000000003cc2ae1 = '\x01';
          }
          if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
            return uVar12;
          }
          *(undefined8 *)(puVar4 + -0x200) = *(undefined8 *)(puVar4 + -0x200);
          *(undefined8 *)(puVar4 + -0x1f8) = *(undefined8 *)(puVar4 + -0x1f8);
          *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
          *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
          *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
          *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
          if ((bRam0000000003eb5b2d & 1) == 0) {
            func_0x00f78a20(0x3d74b40,0);
            bRam0000000003eb5b2d = 1;
          }
          uVar21 = *(undefined8 *)(puVar4 + -0x1e0);
          uVar35 = *(undefined8 *)(puVar4 + -0x1d8);
          uVar18 = *(undefined8 *)(puVar4 + -0x1f0);
          uVar33 = *(undefined8 *)(puVar4 + -0x1e8);
          uVar22 = *(undefined8 *)(puVar4 + -0x200);
          uVar20 = *(undefined8 *)(puVar4 + -0x1f8);
          plVar19 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
        }
        *(ulong *)(puVar4 + -0x210) = unaff_x24;
        *(ulong *)(puVar4 + -0x208) = unaff_x23;
        *(undefined8 *)(puVar4 + -0x200) = uVar22;
        *(undefined8 *)(puVar4 + -0x1f8) = uVar20;
        *(undefined8 *)(puVar4 + -0x1f0) = uVar18;
        *(undefined8 *)(puVar4 + -0x1e8) = uVar33;
        *(undefined8 *)(puVar4 + -0x1e0) = uVar21;
        *(undefined8 *)(puVar4 + -0x1d8) = uVar35;
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
        uVar12 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
        if (plVar19 == (long *)0x0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
        }
        plVar19 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar12,uVar22,0);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((plVar11 != (long *)0x0) &&
           (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')) {
          lVar13 = plVar11[0x19];
          lVar15 = plVar11[7];
          uVar8 = *(uint *)(plVar11 + 8);
          uVar12 = (ulong)uVar8;
          if ((lVar13 != 0) || ((lVar15 != 0 || (uVar8 != 0xfffffc19)))) {
            if (plVar19 == (long *)0x0) {
              uVar22 = 0;
            }
            else {
              uVar22 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
            }
            plVar19 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar22,/*STR('\n')*/ uRam0000000003d65de0,0);
            if (lVar13 != 0) {
              uVar22 = 0;
              if (plVar19 != (long *)0x0) {
                uVar22 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
              }
              uVar20 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar11[0x19],0);
              plVar19 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar22,uVar20,0);
            }
            if (lVar15 != 0) {
              uVar22 = 0;
              if (plVar19 != (long *)0x0) {
                uVar22 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
              }
              uVar20 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar11[7],0);
              plVar19 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar22,uVar20,0);
            }
            if (uVar8 != 0xfffffc19) {
              uVar22 = 0;
              if (plVar19 != (long *)0x0) {
                uVar22 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
              }
              *(int *)(puVar4 + -0x214) = (int)plVar11[8];
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar4 + -0x214);
              uVar20 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar20,0);
              plVar19 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar22,uVar20,0);
            }
          }
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar15 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
        if (lVar15 != 0) {
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar15 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
            if (lVar15 == 0) {
              lVar15 = func_0x00f78af4();
              *(undefined8 *)(puVar4 + -0x250) = 0x3d20bc0;
              *(ulong *)(puVar4 + -0x248) = uVar12;
              *(long **)(puVar4 + -0x240) = plVar19;
              *(long **)(puVar4 + -0x238) = plVar11;
              *(undefined1 **)(puVar4 + -0x230) = puVar4 + -0x1e0;
              *(undefined **)(puVar4 + -0x228) = &DG_Tweening_Core_DOTweenComponent__Start;
              if ((bRam0000000003eb5b0e & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb5b0e = 1;
              }
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar22 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x58);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar22,lVar15,0);
              if ((int)uVar12 == 0) {
                return uVar12;
              }
              *(undefined1 *)(lVar15 + 0x2d) = 1;
              uVar22 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              *(undefined8 *)(puVar4 + -0x250) = *(undefined8 *)(puVar4 + -0x250);
              *(undefined8 *)(puVar4 + -0x248) = *(undefined8 *)(puVar4 + -0x248);
              *(undefined8 *)(puVar4 + -0x240) = *(undefined8 *)(puVar4 + -0x240);
              *(undefined8 *)(puVar4 + -0x238) = *(undefined8 *)(puVar4 + -0x238);
              *(undefined8 *)(puVar4 + -0x230) = *(undefined8 *)(puVar4 + -0x230);
              *(undefined8 *)(puVar4 + -0x228) = *(undefined8 *)(puVar4 + -0x228);
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
              uVar12 = (*pcRam0000000003ec0228)(0,uVar22);
              return uVar12;
            }
          }
          uVar12 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar15,2,plVar19,uRam0000000003d35ae8);
          if ((int)uVar12 == 0) {
            return uVar12;
          }
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar19,0);
        return uVar12;
      }
      unaff_x19 = func_0x00f78af4();
      puVar5 = puVar4 + -0x280;
      *(undefined8 *)(puVar4 + -0x260) = unaff_d9;
      *(undefined8 *)(puVar4 + -600) = unaff_d8;
      *(long *)(puVar4 + -0x250) = unaff_x28;
      *(undefined8 *)(puVar4 + -0x248) = unaff_x27;
      *(undefined8 *)(puVar4 + -0x240) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x238) = unaff_x25;
      *(ulong *)(puVar4 + -0x230) = unaff_x24;
      *(ulong *)(puVar4 + -0x228) = unaff_x23;
      *(ulong *)(puVar4 + -0x220) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x218) = uVar22;
      *(undefined8 *)(puVar4 + -0x210) = uVar20;
      *(long *)(puVar4 + -0x208) = lVar13;
      *(undefined1 **)(puVar4 + -0x200) = puVar4 + -0x1e0;
      *(undefined **)(puVar4 + -0x1f8) = &Atlas_UI_SeasonProgressPanelBehaviour__AnimateStars;
      puVar36 = puVar4 + -0x200;
      param_1 = 0x3eb4000;
      unaff_x21 = 0x3d28ba0;
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
      unaff_x28 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
      /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(unaff_x28,0);
      if (unaff_x28 == 0) {
code_r0x014f0b94:
        uVar12 = func_0x00f78af4();
        *(undefined8 *)(uVar12 + 0x38) = 0x83f000000;
        *(ulong *)(puVar4 + -0x2b0) = unaff_x22;
        *(undefined8 *)(puVar4 + -0x2a8) = unaff_x21;
        *(undefined8 *)(puVar4 + -0x2a0) = 0x3eb4000;
        *(long *)(puVar4 + -0x298) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x290) = puVar36;
        *(undefined **)(puVar4 + -0x288) = &Atlas_UI_SeasonProgressPanelBehaviour___ctor;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar12;
      }
      unaff_x22 = 0x3d247f0;
      *(long *)(unaff_x28 + 0x10) = unaff_x19;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(unaff_x19 + 0x60) = uVar22;
      lVar15 = *(long *)(unaff_x19 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x21 = 0;
      if (lVar15 == 0) goto code_r0x014f0b94;
      unaff_x21 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar15,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
      *(int *)(unaff_x28 + 0x18) = (int)unaff_x21;
      lVar15 = *(long *)(unaff_x19 + 0x58);
      if (lVar15 == 0) goto code_r0x014f0b94;
      unaff_x22 = 0x3d78000;
      unaff_x24 = 0x3d28b98;
      puVar38 = &UNK_014f08cc;
    }
    auVar41._8_8_ = *(undefined8 *)(lVar15 + 0x10);
    auVar41._0_8_ = *(long *)(lVar15 + 0x50);
    puVar37 = *(undefined1 **)(puVar5 + -0x10);
    puVar38 = *(undefined **)(puVar5 + -8);
    puVar6 = puVar5;
    goto code_r0x014efc88;
  }
  uVar22 = *(undefined8 *)(auVar41._8_8_ + 0x18);
  *(ulong *)(puVar6 + -0x40) = unaff_x24;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(ulong *)(puVar6 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
  *(ulong *)(puVar6 + -0x20) = param_1;
  *(long *)(puVar6 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
  *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  plVar11 = (long *)Atlas_Save_SaveManager__get_SaveData(lVar15);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar20 = *(undefined8 *)(puVar6 + -0x40);
  *(undefined8 *)(puVar6 + -0x40) = uVar20;
  *(undefined8 *)(puVar6 + -0x38) = *(undefined8 *)(puVar6 + -0x38);
  *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
  *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
  *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
  *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
  *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  plVar19 = plVar11;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = Atlas_Save_SaveManager__GetIntDataIndex(uVar22,plVar11);
  if ((int)uVar8 < 0) {
    return 0;
  }
  if ((plVar11 != (long *)0x0) && (lVar15 = plVar11[0x22], lVar15 != 0)) {
    if (*(uint *)(lVar15 + 0x18) <= uVar8) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar15 + 0x10) + (ulong)uVar8 * 0x10 + 0x28);
  }
  auVar40 = func_0x00f78af4();
  uVar21 = auVar40._8_8_;
  lVar15 = auVar40._0_8_;
  *(undefined8 *)(puVar6 + -0x80) = uVar20;
  *(undefined8 *)(puVar6 + -0x78) = 0x3d246e0;
  *(undefined8 *)(puVar6 + -0x70) = 0x3eb4000;
  *(undefined8 *)(puVar6 + -0x68) = uVar22;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
  *(code **)(puVar6 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  puVar37 = puVar6 + -0x50;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar12 = Atlas_Save_SaveManager__GetStringDataIndex(lVar15,uVar21);
  lVar13 = Atlas_Save_SaveManager__get_SaveData(lVar15);
  if ((int)(uint)uVar12 < 0) {
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x118) != 0)) {
      uVar12 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar13 + 0x118),uVar21,plVar19,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar15 + 0x110) = 1;
      return uVar12;
    }
  }
  else if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x118), lVar13 != 0)) {
    if (*(uint *)(lVar13 + 0x18) <= (uint)uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (uVar12 & 0xffffffff) * 0x10 + 0x28);
    auVar43._8_8_ = plVar19;
    auVar43._0_8_ = lVar13;
    if (lVar13 != 0) {
      uVar23 = 5;
      puVar38 = (undefined *)0x14ecd5c;
      puVar4 = puVar6 + -0x80;
      plVar11 = plVar19;
      goto code_r0x029caa48;
    }
    lVar13 = Atlas_Save_SaveManager__get_SaveData(lVar15);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x118) != 0)) {
      uVar12 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar13 + 0x118),uVar12,uVar21,plVar19,uRam0000000003d3d930)
      ;
      goto LAB_014ecdb8;
    }
  }
  auVar41 = func_0x00f78af4();
  plVar11 = auVar41._8_8_;
  *(ulong *)(puVar6 + -0xb0) = uVar12;
  *(undefined8 *)(puVar6 + -0xa8) = uVar21;
  *(long **)(puVar6 + -0xa0) = plVar19;
  *(long *)(puVar6 + -0x98) = lVar15;
  *(undefined1 **)(puVar6 + -0x90) = puVar37;
  *(code **)(puVar6 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  uVar14 = Atlas_Save_SaveManager__get_SaveData(auVar41._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0xb0);
  *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(puVar6 + -0xa8);
  *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0xa0);
  *(undefined8 *)(puVar6 + -0x98) = *(undefined8 *)(puVar6 + -0x98);
  *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x90);
  *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x88);
  puVar37 = puVar6 + -0x90;
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((uVar14 != 0) && (uVar12 = *(ulong *)(uVar14 + 0x118), uVar12 != 0)) {
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar14;
    if (*(int *)(uVar12 + 0x18) < 1) {
      return 0xffffffff;
    }
    if (*(int *)(uVar12 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar15 = *(long *)(*(long *)(uVar12 + 0x10) + 0x20);
    auVar43._8_8_ = plVar11;
    auVar43._0_8_ = lVar15;
    if (lVar15 != 0) {
      uVar23 = 5;
      puVar38 = (undefined *)0x14ed084;
      puVar4 = puVar6 + -0xb0;
code_r0x029caa48:
      lVar13 = auVar43._8_8_;
      lVar15 = auVar43._0_8_;
      *(ulong *)(puVar4 + -0x30) = uVar12;
      *(long *)(puVar4 + -0x28) = auVar40._8_8_;
      *(long **)(puVar4 + -0x20) = plVar11;
      *(long *)(puVar4 + -0x18) = auVar40._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar37;
      *(undefined **)(puVar4 + -8) = puVar38;
      uVar14 = uVar23;
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50);
        bRam0000000003eb9443 = 1;
      }
      if (5 < (uint)uVar23) {
code_r0x029caca0:
        uVar22 = func_0x00f78a24(0x3d746f0);
        uVar22 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar22,0);
        func_0x00f78a24(0x3d1fce8);
        uVar20 = func_0x00f78aec();
        uVar21 = func_0x00f78a24(0x3d784e0);
        /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar20,uVar22,uVar21,0);
        uVar22 = func_0x00f78a24(0x3d5dae8);
        func_0x00f78ac0(uVar20,uVar22);
        goto code_r0x029cad04;
      }
      if (lVar15 == lVar13) {
        return 1;
      }
      if (lVar13 == 0) {
        return 0;
      }
      switch(uVar23 & 0xffffffff) {
      case 0:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar11 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        break;
      case 1:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar11 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        goto joined_r0x029caba0;
      case 2:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar11 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
        break;
      case 3:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar11 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
        if ((plVar11 == (long *)0x0) ||
           (plVar11 = (long *)(**(code **)(*plVar11 + 0x1f8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x200)),
           plVar11 == (long *)0x0)) goto code_r0x029cad04;
        pcVar30 = *(code **)(*plVar11 + 0x1a8);
        uVar22 = *(undefined8 *)(*plVar11 + 0x1b0);
        uVar20 = 1;
        goto code_r0x029cabc8;
      case 4:
        goto code_r0x029cabd8;
      case 5:
        iVar10 = *(int *)(lVar15 + 0x10);
        if (iVar10 != *(int *)(lVar13 + 0x10)) {
          return 0;
        }
        if (iVar10 == 0) goto code_r0x029cac68;
        lVar26 = (long)iVar10 << 1;
        puVar27 = (ushort *)(lVar15 + 0x16);
        puVar32 = (ushort *)(lVar15 + 0x14);
        lVar16 = lVar26;
        goto code_r0x029cac24;
      default:
        goto code_r0x029caca0;
      }
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x1f8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x200)),
         plVar11 == (long *)0x0)) {
code_r0x029cad04:
        lVar15 = func_0x00f78af4();
        if (*(int *)(lVar15 + 0x10) == 0) {
          return 1;
        }
        lVar13 = (long)*(int *)(lVar15 + 0x10) * 2;
        puVar27 = (ushort *)(lVar15 + 0x14);
        puVar32 = (ushort *)(lVar15 + 0x16);
        do {
          lVar13 = lVar13 + -2;
          uVar3 = *puVar27;
          puVar27 = puVar32;
          puVar32 = puVar32 + 1;
        } while (uVar3 < 0x80 && lVar13 != 0);
        return (ulong)(uVar3 < 0x80);
      }
      pcVar30 = *(code **)(*plVar11 + 0x1a8);
      uVar22 = *(undefined8 *)(*plVar11 + 0x1b0);
      uVar20 = 0;
code_r0x029cabc8:
      iVar10 = (*pcVar30)(plVar11,lVar15,lVar13,uVar20,uVar22);
      goto code_r0x029cabcc;
    }
  }
  func_0x00f78af4();
  return 0xffffffff;
code_r0x016bc4d0:
  *(ulong *)(puVar6 + -0x40) = unaff_x24;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(ulong *)(puVar6 + -0x30) = uVar12;
  *(undefined8 *)(puVar6 + -0x28) = uVar22;
  *(long **)(puVar6 + -0x20) = plVar19;
  *(long **)(puVar6 + -0x18) = plVar34;
  *(undefined1 **)(puVar6 + -0x10) = puVar37;
  *(undefined **)(puVar6 + -8) = puVar38;
  puVar37 = puVar6 + -0x10;
  if ((bRam0000000003eb5c68 & 1) == 0) {
    func_0x00f78a20(0x3d3c4d0);
    func_0x00f78a20(0x3d3c4d8);
    func_0x00f78a20(0x3d24878);
    func_0x00f78a20(0x3d404c0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c68 = 1;
  }
  if (plVar11 == (long *)0x0) goto code_r0x016bc740;
  if (plVar11[0x11] != 0) {
    /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar11[0x11],plVar11);
  }
  if (bVar7) {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar11);
  }
  iVar10 = (int)plVar11[2];
  plVar34 = plVar11;
  if (*(char *)((long)plVar11 + 0x9a) == '\0') {
    if (iVar10 == 0) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      piVar24 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x3c);
      iVar10 = -1;
      goto code_r0x016bca08;
    }
    if (iVar10 != 1) goto code_r0x016bca14;
    uVar22 = 0x3d25440;
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) =
         *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) + -1;
    if (*plVar11 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
    lVar15 = plVar11[0x24];
    if (lVar15 == 0) goto code_r0x016bc740;
    uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
    if ((int)*(uint *)(lVar15 + 0x18) < 1) goto code_r0x016bca14;
    unaff_x23 = 0;
    if (*(int *)(lVar15 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    plVar19 = *(long **)(*(long *)(lVar15 + 0x10) + 0x20);
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    bVar7 = false;
    puVar38 = &UNK_016bc72c;
    puVar6 = puVar6 + -0x40;
    plVar11 = plVar19;
    goto code_r0x016bc4d0;
  }
  if (iVar10 == 0) goto code_r0x016bc744;
  if (iVar10 != 1) goto code_r0x016bca14;
  uVar22 = 0x3d25440;
  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x58);
  if (lVar15 == 0) goto code_r0x016bc740;
  /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar15,plVar11,uRam0000000003d404c0);
  *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) =
       *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) + 1;
  if (*plVar11 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
  lVar15 = plVar11[0x24];
  if (lVar15 == 0) goto code_r0x016bc740;
  uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
  if ((int)*(uint *)(lVar15 + 0x18) < 1) goto code_r0x016bca14;
  unaff_x23 = 0;
  if (*(int *)(lVar15 + 0x18) == 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  plVar19 = *(long **)(*(long *)(lVar15 + 0x10) + 0x20);
  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar7 = false;
  puVar38 = &UNK_016bc660;
  puVar6 = puVar6 + -0x40;
  plVar11 = plVar19;
  goto code_r0x016bc4d0;
code_r0x016bc740:
  func_0x00f78af4();
code_r0x016bc744:
  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
  uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  if (*(int *)(lVar15 + 0x84) == -1) {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    }
    uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    iVar10 = *(int *)(lVar15 + 8) + -1;
    *(int *)(lVar15 + 0x80) = iVar10;
    *(int *)(lVar15 + 0x84) = iVar10;
  }
  if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  }
  lVar15 = *(long *)(uVar12 + 0xb8);
  uVar8 = *(uint *)(lVar15 + 0x84);
  if (*(int *)(lVar15 + 8) + -1 <= (int)uVar8) {
    if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar8 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x84);
      uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    if ((int)uVar8 < 0) goto code_r0x016bc9e4;
    lVar15 = (ulong)uVar8 * 8 + 0x20;
    while( true ) {
      if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      plVar19 = *(long **)(*(long *)(uVar12 + 0xb8) + 0x50);
      if (plVar19 == (long *)0x0) goto code_r0x016bc740;
      if (*(uint *)(plVar19 + 3) <= uVar8) goto code_r0x016bca38;
      if (plVar19[(ulong)uVar8 + 4] == 0) break;
      lVar15 = lVar15 + -8;
      bVar7 = (int)uVar8 < 1;
      uVar8 = uVar8 - 1;
      if (bVar7) goto code_r0x016bc9e4;
    }
    if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar19 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x50);
      if (plVar19 == (long *)0x0) goto code_r0x016bc740;
    }
    lVar13 = func_0x00f78adc(plVar11,*(undefined8 *)(*plVar19 + 0x40));
    if (lVar13 == 0) goto code_r0x016bca4c;
    if (*(uint *)(plVar19 + 3) <= uVar8) goto code_r0x016bca38;
    *(long **)((long)plVar19 + lVar15) = plVar11;
    lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    if ((int)uVar8 < *(int *)(lVar15 + 0x80)) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      }
      uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      *(uint *)(lVar15 + 0x80) = uVar8;
    }
    if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    lVar15 = *(long *)(uVar12 + 0xb8);
    iVar10 = *(int *)(lVar15 + 0x80);
    if (*(int *)(lVar15 + 0x84) < iVar10) {
      if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
        iVar10 = *(int *)(lVar15 + 0x80);
        uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      *(int *)(lVar15 + 0x84) = iVar10;
    }
    goto code_r0x016bc9e4;
  }
  if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    uVar8 = *(uint *)(lVar15 + 0x84);
  }
  plVar19 = *(long **)(lVar15 + 0x50);
  if (plVar19 != (long *)0x0) {
    lVar15 = func_0x00f78adc(plVar11,*(undefined8 *)(*plVar19 + 0x40));
    if (lVar15 == 0) goto code_r0x016bca4c;
    if (*(uint *)(plVar19 + 3) <= uVar8 + 1) {
code_r0x016bca38:
      uVar22 = func_0x00f78b24();
      do {
        func_0x00f78ac0(uVar22,0);
code_r0x016bca44:
        func_0x00f78e5c(plVar11);
code_r0x016bca4c:
        uVar22 = func_0x00f78b14();
      } while( true );
    }
    plVar19[(long)(int)(uVar8 + 1) + 4] = (long)plVar11;
    uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    iVar10 = *(int *)(lVar15 + 0x84) + 1;
    *(int *)(lVar15 + 0x84) = iVar10;
    if (iVar10 < *(int *)(lVar15 + 0x80)) {
      if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
        iVar10 = *(int *)(lVar15 + 0x84);
        uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      *(int *)(lVar15 + 0x80) = iVar10;
    }
code_r0x016bc9e4:
    if (((*(ushort *)(uVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar12 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    piVar24 = (int *)(*(long *)(uVar12 + 0xb8) + 0x34);
    iVar10 = 1;
code_r0x016bca08:
    *piVar24 = *piVar24 + iVar10;
code_r0x016bca14:
    *(undefined1 *)(plVar11 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    return uVar12;
  }
  goto code_r0x016bc740;
code_r0x029cac8c:
  iVar10 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar15,lVar13,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar15 + 0x10) != *(int *)(lVar13 + 0x10)) {
    return 0;
  }
  uVar22 = *(undefined8 *)(puVar4 + -0x10);
  uVar21 = *(undefined8 *)(puVar4 + -8);
  uVar20 = *(undefined8 *)(puVar4 + -0x20);
  uVar18 = *(undefined8 *)(puVar4 + -0x18);
  uVar12 = *(ulong *)(puVar4 + -0x30);
  uVar35 = *(undefined8 *)(puVar4 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar15 = auVar43._0_8_;
    *(ulong *)(puVar4 + -0x30) = uVar12;
    *(undefined8 *)(puVar4 + -0x28) = uVar35;
    *(undefined8 *)(puVar4 + -0x20) = uVar20;
    *(undefined8 *)(puVar4 + -0x18) = uVar18;
    *(undefined8 *)(puVar4 + -0x10) = uVar22;
    *(undefined8 *)(puVar4 + -8) = uVar21;
    if ((lVar15 != 0) && (auVar43._8_8_ != 0)) {
      plVar11 = (long *)(lVar15 + 0x14);
      iVar10 = *(int *)(lVar15 + 0x10);
      plVar19 = (long *)(auVar43._8_8_ + 0x14);
      uVar12 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar12 & 1) == 0) {
        iVar9 = iVar10;
        if (9 < iVar10) {
          do {
            if ((int)*plVar11 != (int)*plVar19) {
              return 0;
            }
            if (*(int *)((long)plVar11 + 4) != *(int *)((long)plVar19 + 4)) {
              return 0;
            }
            if ((int)plVar11[1] != (int)plVar19[1]) {
              return 0;
            }
            if (*(int *)((long)plVar11 + 0xc) != *(int *)((long)plVar19 + 0xc)) {
              return 0;
            }
            if ((int)plVar11[2] != (int)plVar19[2]) {
              return 0;
            }
            plVar11 = (long *)((long)plVar11 + 0x14);
            plVar19 = (long *)((long)plVar19 + 0x14);
            iVar10 = iVar9 + -10;
            bVar7 = 0x13 < iVar9;
            iVar9 = iVar10;
          } while (bVar7);
        }
      }
      else {
        iVar9 = iVar10;
        if (0xb < iVar10) {
          do {
            if (((*plVar11 != *plVar19) || (plVar11[1] != plVar19[1])) || (plVar11[2] != plVar19[2])
               ) {
              return 0;
            }
            plVar11 = plVar11 + 3;
            plVar19 = plVar19 + 3;
            iVar10 = iVar9 + -0xc;
            bVar7 = 0x17 < iVar9;
            iVar9 = iVar10;
          } while (bVar7);
        }
      }
      if (iVar10 < 1) {
        uVar12 = 1;
      }
      else {
        iVar10 = iVar10 + 2;
        do {
          bVar7 = (int)*plVar11 == (int)*plVar19;
          uVar12 = (ulong)bVar7;
          if (!bVar7) {
            return uVar12;
          }
          plVar11 = (long *)((long)plVar11 + 4);
          plVar19 = (long *)((long)plVar19 + 4);
          iVar10 = iVar10 + -2;
        } while (2 < iVar10);
      }
      return uVar12;
    }
    auVar41 = func_0x00f78af4();
    lVar13 = auVar41._8_8_;
    lVar15 = auVar41._0_8_;
    *(ulong *)(puVar4 + -0x60) = uVar12;
    *(undefined8 *)(puVar4 + -0x58) = uVar35;
    *(undefined8 *)(puVar4 + -0x50) = uVar20;
    *(undefined8 *)(puVar4 + -0x48) = uVar18;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x38) = &System_String__CompareOrdinalHelper;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
    }
    if ((lVar15 != 0) && (lVar13 != 0)) {
      uVar1 = *(undefined4 *)(lVar15 + 0x10);
      uVar2 = *(undefined4 *)(lVar13 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar10 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar25 = (uint *)(lVar15 + 0x14);
      puVar29 = (uint *)(lVar13 + 0x14);
      if (iVar10 < 10) goto code_r0x029ca8c8;
      lVar16 = 4;
      iVar9 = iVar10;
      goto code_r0x029ca858;
    }
    auVar43 = func_0x00f78af4();
    plVar11 = auVar43._8_8_;
    plVar19 = auVar43._0_8_;
    *(ulong *)(puVar4 + -0x90) = uVar12;
    *(undefined8 *)(puVar4 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])(puVar4 + -0x80) = auVar41;
    *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x68) = &System_String__Equals;
    puVar37 = puVar4 + -0x70;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (plVar19 == (long *)0x0) break;
    if ((plVar11 == (long *)0x0) || (*plVar11 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (plVar19 == plVar11) {
      return 1;
    }
    uVar23 = uVar14;
    if (plVar11 == (long *)0x0) goto code_r0x029caa44;
    if ((int)plVar19[2] != (int)plVar11[2]) {
      return 0;
    }
    uVar22 = *(undefined8 *)(puVar4 + -0x70);
    uVar21 = *(undefined8 *)(puVar4 + -0x68);
    uVar20 = *(undefined8 *)(puVar4 + -0x80);
    uVar18 = *(undefined8 *)(puVar4 + -0x78);
    uVar12 = *(ulong *)(puVar4 + -0x90);
    uVar35 = *(undefined8 *)(puVar4 + -0x88);
    puVar4 = puVar4 + -0x60;
  }
  func_0x00f78a24(0x3d23938);
  plVar19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar19,0);
  uVar22 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(plVar19,uVar22);
  uVar23 = uVar14;
code_r0x029caa44:
  auVar40._8_8_ = 0x3eb9000;
  auVar40._0_8_ = plVar19;
  puVar38 = &System_String__Equals;
  auVar43 = func_0x00f78af4();
  puVar4 = puVar4 + -0x90;
  goto code_r0x029caa48;
  while( true ) {
    if (puVar25[1] != puVar29[1]) goto code_r0x029ca930;
    if (puVar25[2] != puVar29[2]) {
      lVar16 = 8;
      goto code_r0x029ca930;
    }
    if (puVar25[3] != puVar29[3]) {
      lVar16 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar25[4] != puVar29[4]) {
      lVar16 = 0x10;
      goto code_r0x029ca930;
    }
    puVar25 = puVar25 + 5;
    puVar29 = puVar29 + 5;
    iVar10 = iVar9 + -10;
    bVar7 = iVar9 < 0x14;
    iVar9 = iVar10;
    if (bVar7) break;
code_r0x029ca858:
    if (*puVar25 != *puVar29) {
      lVar16 = 0;
code_r0x029ca930:
      puVar25 = (uint *)(lVar16 + (long)puVar25);
      puVar29 = (uint *)(lVar16 + (long)puVar29);
      uVar8 = (uint)(ushort)*puVar25 - (uint)(ushort)*puVar29;
      if (uVar8 != 0) {
        return (ulong)uVar8;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar10) {
    iVar10 = iVar10 + 2;
    do {
      if (*puVar25 != *puVar29) {
        uVar8 = (*puVar25 & 0xffff) - (*puVar29 & 0xffff);
        if (uVar8 != 0) {
          return (ulong)uVar8;
        }
code_r0x029ca948:
        uVar8 = (uint)*(ushort *)((long)puVar25 + 2);
        uVar28 = (uint)*(ushort *)((long)puVar29 + 2);
        goto code_r0x029ca950;
      }
      puVar25 = puVar25 + 1;
      puVar29 = puVar29 + 1;
      iVar10 = iVar10 + -2;
    } while (2 < iVar10);
  }
  uVar8 = *(uint *)(lVar15 + 0x10);
  uVar28 = *(uint *)(lVar13 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar8 - uVar28);
  while( true ) {
    lVar16 = lVar16 + -2;
    puVar27 = puVar31 + 1;
    puVar32 = puVar31;
    if (lVar16 == 0) break;
code_r0x029cac24:
    puVar31 = puVar27;
    if (0x7f < *puVar32) goto code_r0x029cac8c;
  }
  if (iVar10 != 0) {
    puVar27 = (ushort *)(lVar13 + 0x16);
    puVar32 = (ushort *)(lVar13 + 0x14);
    do {
      puVar31 = puVar27;
      if (0x7f < *puVar32) goto code_r0x029cac8c;
      lVar26 = lVar26 + -2;
      puVar27 = puVar31 + 1;
      puVar32 = puVar31;
    } while (lVar26 != 0);
  }
code_r0x029cac68:
  iVar10 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar15,lVar13);
code_r0x029cabcc:
  return (ulong)(iVar10 == 0);
}



// ============================================================
// RVA: 0x14efcb0 | Atlas.UI.SeasonMetagameData.StarsForSeason
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14efcd4 | Atlas.UI.SeasonMetagameData.SeasonProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x014f005c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014f0060) */
/* WARNING: Removing unreachable block (ram,0x014f0064) */
/* WARNING: Removing unreachable block (ram,0x014f0088) */
/* WARNING: Removing unreachable block (ram,0x014f0090) */
/* WARNING: Removing unreachable block (ram,0x014f0094) */
/* WARNING: Removing unreachable block (ram,0x014f00d0) */
/* WARNING: Removing unreachable block (ram,0x014f00ec) */
/* WARNING: Removing unreachable block (ram,0x014f00f0) */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

ulong Atlas_UI_SeasonMetagameData__SeasonProgress(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 ***pppuVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  ushort *puVar22;
  uint uVar23;
  uint *puVar24;
  code *pcVar25;
  ushort *puVar26;
  long lVar27;
  ushort *puVar28;
  undefined8 uVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined8 unaff_x21;
  undefined8 uVar32;
  ulong unaff_x22;
  ulong uVar33;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar34;
  undefined1 *puVar35;
  undefined *puVar36;
  undefined8 unaff_d8;
  double dVar37;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4c68 & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c68 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    unaff_x21 = 0x3d247f0;
    /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x10));
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar9 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(*(long *)(param_1 + 0x50),**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1
                             );
      return uVar9;
    }
  }
  lVar10 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_SeasonMetagameData__GetCurrentRewardIndex;
  uVar9 = 0x3eb4000;
  uVar33 = 0x3d247f0;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c69 & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c69 = 1;
  }
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(lVar10 + 0x50) != 0) {
    uVar9 = (ulong)(**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) - 1);
    unaff_x21 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(*(long *)(lVar10 + 0x50),*(undefined8 *)(lVar10 + 0x10));
    unaff_x22 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) <= (int)unaff_x22) {
        return uVar9;
      }
      if (*(long *)(lVar10 + 0x50) == 0) break;
      iVar6 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(*(long *)(lVar10 + 0x50),unaff_x22);
      if ((int)unaff_x21 < iVar6) {
        return unaff_x22;
      }
      unaff_x22 = (ulong)((int)unaff_x22 + 1);
    }
  }
  lVar11 = func_0x00f78af4();
  pppuVar4 = &ppuStack_80;
  pppuVar34 = &ppuStack_80;
  puStack_78 = &Atlas_UI_SeasonMetagameData__IsSeasonActive;
  ppuStack_80 = &puStack_40;
  if (*(long *)(lVar11 + 0x50) == 0) {
    puVar36 = &Atlas_Stats_SeasonsManager__IsSeasonActive;
    auVar38 = func_0x00f78af4();
  }
  else {
    auVar38._8_8_ = *(undefined8 *)(lVar11 + 0x10);
    auVar38._0_8_ = *(long *)(lVar11 + 0x50);
    pppuVar4 = (undefined1 ***)&stack0xffffffffffffff90;
    puVar36 = &Atlas_UI_SeasonMetagameData__IsSeasonActive;
    pppuVar34 = (undefined1 ***)&puStack_40;
  }
  lVar27 = auVar38._8_8_;
  lVar11 = auVar38._0_8_;
  *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pppuVar4 + -0x48) = unaff_x25;
  *(ulong *)((long)pppuVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x38) = 0x3d247f0;
  *(ulong *)((long)pppuVar4 + -0x30) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x28) = unaff_x21;
  *(ulong *)((long)pppuVar4 + -0x20) = uVar9;
  *(long *)((long)pppuVar4 + -0x18) = lVar10;
  *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar34;
  *(undefined **)((long)pppuVar4 + -8) = puVar36;
  uVar32 = 0x3eb4000;
  if ((bRam0000000003eb4c7d & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    bRam0000000003eb4c7d = 1;
  }
  uVar9 = 0x3d247f0;
  if (*(long *)(lVar11 + 0x28) != 0) {
    lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
    if (*(long *)(lVar10 + 8) != 0) {
      uVar32 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x30));
      uVar9 = uVar33;
      if (*(long *)(lVar11 + 0x28) != 0) {
        lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
        if ((*(long *)(lVar10 + 8) != 0) && (*(long *)(lVar11 + 0x28) != 0)) {
          unaff_x22 = *(ulong *)(*(long *)(lVar10 + 8) + 0x28);
          lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
          if ((*(long *)(lVar10 + 8) != 0) && (*(long *)(lVar11 + 0x28) != 0)) {
            uVar9 = (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x20);
            lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
            if ((*(long *)(lVar10 + 8) != 0) && (*(long *)(lVar11 + 0x28) != 0)) {
              unaff_x24 = (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x24);
              lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
              if (*(long *)(lVar10 + 8) != 0) {
                unaff_x25 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                lVar11 = *(long *)(lVar11 + 0x38);
                uVar33 = /*Atlas.Definitions.SeasonRotationHelper$$IsRotationActive*/ func_0x014f18ec(lVar11,unaff_x25);
                if ((int)uVar33 == 0) {
                  return uVar33;
                }
                lVar10 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar32,uVar9,lVar11,unaff_x25,unaff_x22,unaff_x24);
                if ((lVar27 != 0) && (lVar10 != 0)) {
                  lVar11 = *(long *)(lVar27 + 0x18);
                  lVar10 = *(long *)(lVar10 + 0x18);
                  auVar39._8_8_ = lVar10;
                  auVar39._0_8_ = lVar11;
                  uVar9 = 0;
                  uVar32 = *(undefined8 *)((long)pppuVar4 + -0x10);
                  uVar12 = *(undefined8 *)((long)pppuVar4 + -8);
                  uVar15 = *(undefined8 *)((long)pppuVar4 + -0x20);
                  uVar31 = *(undefined8 *)((long)pppuVar4 + -0x18);
                  uVar16 = *(undefined8 *)((long)pppuVar4 + -0x30);
                  uVar29 = *(undefined8 *)((long)pppuVar4 + -0x28);
                  if (lVar11 == lVar10) {
                    uVar33 = 1;
                  }
                  else {
                    uVar33 = 0;
                    if ((lVar11 != 0) && (lVar10 != 0)) {
                      if (*(int *)(lVar11 + 0x10) == *(int *)(lVar10 + 0x10)) {
System_String__EqualsHelper:
                        lVar10 = auVar39._0_8_;
                        *(undefined8 *)((long)pppuVar4 + -0x30) = uVar16;
                        *(undefined8 *)((long)pppuVar4 + -0x28) = uVar29;
                        *(undefined8 *)((long)pppuVar4 + -0x20) = uVar15;
                        *(undefined8 *)((long)pppuVar4 + -0x18) = uVar31;
                        *(undefined8 *)((long)pppuVar4 + -0x10) = uVar32;
                        *(undefined8 *)((long)pppuVar4 + -8) = uVar12;
                        if ((lVar10 != 0) && (auVar39._8_8_ != 0)) {
                          plVar14 = (long *)(lVar10 + 0x14);
                          iVar6 = *(int *)(lVar10 + 0x10);
                          plVar13 = (long *)(auVar39._8_8_ + 0x14);
                          uVar9 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
                          if ((uVar9 & 1) == 0) {
                            iVar8 = iVar6;
                            if (9 < iVar6) {
                              do {
                                if ((int)*plVar14 != (int)*plVar13) {
                                  return 0;
                                }
                                if (*(int *)((long)plVar14 + 4) != *(int *)((long)plVar13 + 4)) {
                                  return 0;
                                }
                                if ((int)plVar14[1] != (int)plVar13[1]) {
                                  return 0;
                                }
                                if (*(int *)((long)plVar14 + 0xc) != *(int *)((long)plVar13 + 0xc))
                                {
                                  return 0;
                                }
                                if ((int)plVar14[2] != (int)plVar13[2]) {
                                  return 0;
                                }
                                plVar14 = (long *)((long)plVar14 + 0x14);
                                plVar13 = (long *)((long)plVar13 + 0x14);
                                iVar6 = iVar8 + -10;
                                bVar5 = 0x13 < iVar8;
                                iVar8 = iVar6;
                              } while (bVar5);
                            }
                          }
                          else {
                            iVar8 = iVar6;
                            if (0xb < iVar6) {
                              do {
                                if (((*plVar14 != *plVar13) || (plVar14[1] != plVar13[1])) ||
                                   (plVar14[2] != plVar13[2])) {
                                  return 0;
                                }
                                plVar14 = plVar14 + 3;
                                plVar13 = plVar13 + 3;
                                iVar6 = iVar8 + -0xc;
                                bVar5 = 0x17 < iVar8;
                                iVar8 = iVar6;
                              } while (bVar5);
                            }
                          }
                          if (iVar6 < 1) {
                            uVar9 = 1;
                          }
                          else {
                            iVar6 = iVar6 + 2;
                            do {
                              bVar5 = (int)*plVar14 == (int)*plVar13;
                              uVar9 = (ulong)bVar5;
                              if (!bVar5) {
                                return uVar9;
                              }
                              plVar14 = (long *)((long)plVar14 + 4);
                              plVar13 = (long *)((long)plVar13 + 4);
                              iVar6 = iVar6 + -2;
                            } while (2 < iVar6);
                          }
                          return uVar9;
                        }
                        auVar38 = func_0x00f78af4();
                        lVar11 = auVar38._8_8_;
                        lVar10 = auVar38._0_8_;
                        *(undefined8 *)((long)pppuVar4 + -0x60) = uVar16;
                        *(undefined8 *)((long)pppuVar4 + -0x58) = uVar29;
                        *(undefined8 *)((long)pppuVar4 + -0x50) = uVar15;
                        *(undefined8 *)((long)pppuVar4 + -0x48) = uVar31;
                        *(undefined1 **)((long)pppuVar4 + -0x40) =
                             (undefined1 *)((long)pppuVar4 + -0x10);
                        *(undefined **)((long)pppuVar4 + -0x38) =
                             &System_String__CompareOrdinalHelper;
                        if ((bRam0000000003eb9441 & 1) == 0) {
                          func_0x00f78a20(0x3d232c0);
                          bRam0000000003eb9441 = 1;
                        }
                        if ((lVar10 != 0) && (lVar11 != 0)) {
                          uVar7 = *(undefined4 *)(lVar10 + 0x10);
                          uVar1 = *(undefined4 *)(lVar11 + 0x10);
                          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar6 = /*System.Math$$Min*/ func_0x02b020f4(uVar7,uVar1,0);
                          puVar20 = (uint *)(lVar10 + 0x14);
                          puVar24 = (uint *)(lVar11 + 0x14);
                          if (iVar6 < 10) goto code_r0x029ca8c8;
                          lVar27 = 4;
                          iVar8 = iVar6;
                          goto code_r0x029ca858;
                        }
                        auVar39 = func_0x00f78af4();
                        plVar13 = auVar39._8_8_;
                        plVar14 = auVar39._0_8_;
                        *(undefined8 *)((long)pppuVar4 + -0x90) = uVar16;
                        *(undefined8 *)((long)pppuVar4 + -0x88) = 0x3eb9000;
                        *(undefined1 (*) [16])((long)pppuVar4 + -0x80) = auVar38;
                        *(undefined1 **)((long)pppuVar4 + -0x70) =
                             (undefined1 *)((long)pppuVar4 + -0x40);
                        *(undefined **)((long)pppuVar4 + -0x68) = &System_String__Equals;
                        if ((bRam0000000003eb9442 & 1) == 0) {
                          func_0x00f78a20(0x3d24dd0);
                          bRam0000000003eb9442 = 1;
                        }
                        if (plVar14 != (long *)0x0) {
                          if ((plVar13 != (long *)0x0) && (*plVar13 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
                            if (plVar14 == plVar13) {
                              return 1;
                            }
                            uVar33 = uVar9;
                            if (plVar13 == (long *)0x0) goto code_r0x029caa44;
                            if ((int)plVar14[2] == (int)plVar13[2]) goto code_r0x029ca9f4;
                          }
                          return 0;
                        }
                        func_0x00f78a24(0x3d23938);
                        plVar14 = (long *)func_0x00f78aec();
                        /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar14,0);
                        uVar32 = func_0x00f78a24(0x3d5dad8);
                        func_0x00f78ac0(plVar14,uVar32);
                        uVar33 = uVar9;
code_r0x029caa44:
                        auVar39 = func_0x00f78af4();
                        lVar11 = auVar39._8_8_;
                        lVar10 = auVar39._0_8_;
                        *(undefined8 *)((long)pppuVar4 + -0xc0) = uVar16;
                        *(undefined8 *)((long)pppuVar4 + -0xb8) = 0x3eb9000;
                        *(long **)((long)pppuVar4 + -0xb0) = plVar13;
                        *(long **)((long)pppuVar4 + -0xa8) = plVar14;
                        *(undefined1 **)((long)pppuVar4 + -0xa0) =
                             (undefined1 *)((long)pppuVar4 + -0x70);
                        *(undefined **)((long)pppuVar4 + -0x98) = &System_String__Equals;
                        uVar9 = uVar33;
                        if ((bRam0000000003eb9443 & 1) == 0) {
                          func_0x00f78a20(0x3d20b50);
                          bRam0000000003eb9443 = 1;
                        }
                        if (5 < (uint)uVar33) {
code_r0x029caca0:
                          uVar32 = func_0x00f78a24(0x3d746f0);
                          uVar32 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar32,0);
                          func_0x00f78a24(0x3d1fce8);
                          uVar15 = func_0x00f78aec();
                          uVar16 = func_0x00f78a24(0x3d784e0);
                          /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar15,uVar32,uVar16,0);
                          uVar32 = func_0x00f78a24(0x3d5dae8);
                          func_0x00f78ac0(uVar15,uVar32);
                          goto code_r0x029cad04;
                        }
                        if (lVar10 == lVar11) {
                          return 1;
                        }
                        if (lVar11 == 0) {
                          return 0;
                        }
                        switch(uVar33 & 0xffffffff) {
                        case 0:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar14 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
                          break;
                        case 1:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar14 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
                          goto joined_r0x029caba0;
                        case 2:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar14 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
                          break;
                        case 3:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar14 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
                          if ((plVar14 == (long *)0x0) ||
                             (plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                                          (plVar14,*(undefined8 *)(*plVar14 + 0x200)
                                                          ), plVar14 == (long *)0x0))
                          goto code_r0x029cad04;
                          pcVar25 = *(code **)(*plVar14 + 0x1a8);
                          uVar32 = *(undefined8 *)(*plVar14 + 0x1b0);
                          uVar15 = 1;
                          goto code_r0x029cabc8;
                        case 4:
                          if (*(int *)(lVar10 + 0x10) != *(int *)(lVar11 + 0x10)) {
                            return 0;
                          }
                          uVar32 = *(undefined8 *)((long)pppuVar4 + -0xa0);
                          uVar12 = *(undefined8 *)((long)pppuVar4 + -0x98);
                          uVar15 = *(undefined8 *)((long)pppuVar4 + -0xb0);
                          uVar31 = *(undefined8 *)((long)pppuVar4 + -0xa8);
                          uVar16 = *(undefined8 *)((long)pppuVar4 + -0xc0);
                          uVar29 = *(undefined8 *)((long)pppuVar4 + -0xb8);
                          pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x90);
                          goto System_String__EqualsHelper;
                        case 5:
                          iVar6 = *(int *)(lVar10 + 0x10);
                          if (iVar6 != *(int *)(lVar11 + 0x10)) {
                            return 0;
                          }
                          if (iVar6 == 0) goto code_r0x029cac68;
                          lVar21 = (long)iVar6 << 1;
                          puVar22 = (ushort *)(lVar10 + 0x16);
                          puVar28 = (ushort *)(lVar10 + 0x14);
                          lVar27 = lVar21;
                          goto code_r0x029cac24;
                        default:
                          goto code_r0x029caca0;
                        }
                        if ((plVar14 == (long *)0x0) ||
                           (plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                                        (plVar14,*(undefined8 *)(*plVar14 + 0x200)),
                           plVar14 == (long *)0x0)) {
code_r0x029cad04:
                          lVar10 = func_0x00f78af4();
                          if (*(int *)(lVar10 + 0x10) == 0) {
                            return 1;
                          }
                          lVar11 = (long)*(int *)(lVar10 + 0x10) * 2;
                          puVar22 = (ushort *)(lVar10 + 0x14);
                          puVar28 = (ushort *)(lVar10 + 0x16);
                          do {
                            lVar11 = lVar11 + -2;
                            uVar2 = *puVar22;
                            puVar22 = puVar28;
                            puVar28 = puVar28 + 1;
                          } while (uVar2 < 0x80 && lVar11 != 0);
                          return (ulong)(uVar2 < 0x80);
                        }
                        pcVar25 = *(code **)(*plVar14 + 0x1a8);
                        uVar32 = *(undefined8 *)(*plVar14 + 0x1b0);
                        uVar15 = 0;
code_r0x029cabc8:
                        iVar6 = (*pcVar25)(plVar14,lVar10,lVar11,uVar15,uVar32);
                        goto code_r0x029cabcc;
                      }
                      uVar33 = 0;
                    }
                  }
                  return uVar33;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar10 = func_0x00f78af4();
  *(ulong *)((long)pppuVar4 + -0x90) = unaff_x24;
  *(ulong *)((long)pppuVar4 + -0x88) = uVar9;
  *(ulong *)((long)pppuVar4 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x78) = uVar32;
  *(long *)((long)pppuVar4 + -0x70) = lVar11;
  *(long *)((long)pppuVar4 + -0x68) = lVar27;
  *(undefined1 **)((long)pppuVar4 + -0x60) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(undefined **)((long)pppuVar4 + -0x58) = &Atlas_UI_SeasonMetagameData__GetTimeLeftString;
  uVar15 = 0x3eb4000;
  if ((bRam0000000003eb4c6a & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7cca0);
    func_0x00f78a20(0x3d6c020);
    bRam0000000003eb4c6a = 1;
  }
  *(undefined8 *)((long)pppuVar4 + -0xa0) = 0;
  lVar11 = *(long *)(lVar10 + 0x50);
  if (lVar11 == 0) {
    puVar36 = &Atlas_Stats_SeasonsManager__GetActiveDateRange;
    lVar11 = func_0x00f78af4();
  }
  else {
    uVar15 = *(undefined8 *)(lVar11 + 0x38);
    puVar36 = &UNK_014f0060;
  }
  *(ulong *)((long)pppuVar4 + -0xe0) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0xd8) = uVar32;
  *(undefined8 *)((long)pppuVar4 + -0xd0) = uVar15;
  *(long *)((long)pppuVar4 + -200) = lVar10;
  *(undefined1 **)((long)pppuVar4 + -0xc0) = (undefined1 *)((long)pppuVar4 + -0x60);
  *(undefined **)((long)pppuVar4 + -0xb8) = puVar36;
  uVar33 = 0x3eb4000;
  if ((bRam0000000003eb4c7f & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    bRam0000000003eb4c7f = 1;
  }
  if (*(long *)(lVar11 + 0x28) != 0) {
    lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
    if (*(long *)(lVar10 + 8) != 0) {
      /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x30));
      if (*(long *)(lVar11 + 0x28) != 0) {
        lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
        if ((*(long *)(lVar10 + 8) != 0) && (*(long *)(lVar11 + 0x28) != 0)) {
          uVar17 = *(uint *)(*(long *)(lVar10 + 8) + 0x20);
          uVar33 = (ulong)uVar17;
          lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
          if (*(long *)(lVar10 + 8) != 0) {
            uVar32 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
            if (*(long *)(lVar11 + 0x28) != 0) {
              lVar10 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar11 + 0x28),0);
              if (*(long *)(lVar10 + 8) != 0) {
                iVar6 = *(int *)(*(long *)(lVar10 + 8) + 0x24);
                uVar15 = *(undefined8 *)(lVar11 + 0x38);
                if (uVar17 == 3) {
Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange:
                  *(ulong *)((long)pppuVar4 + -0xf0) = unaff_x24;
                  *(ulong *)((long)pppuVar4 + -0xe8) = uVar9;
                  *(undefined8 *)((long)pppuVar4 + -0xe0) = *(undefined8 *)((long)pppuVar4 + -0xe0);
                  *(undefined8 *)((long)pppuVar4 + -0xd8) = *(undefined8 *)((long)pppuVar4 + -0xd8);
                  *(undefined8 *)((long)pppuVar4 + -0xd0) = *(undefined8 *)((long)pppuVar4 + -0xd0);
                  *(undefined8 *)((long)pppuVar4 + -200) = *(undefined8 *)((long)pppuVar4 + -200);
                  *(undefined8 *)((long)pppuVar4 + -0xc0) = *(undefined8 *)((long)pppuVar4 + -0xc0);
                  *(undefined8 *)((long)pppuVar4 + -0xb8) = *(undefined8 *)((long)pppuVar4 + -0xb8);
                  *(undefined8 *)((long)pppuVar4 + -0xf8) = uVar15;
                  if ((bRam0000000003eb4c76 & 1) == 0) {
                    func_0x00f78a20(0x3d21060);
                    bRam0000000003eb4c76 = 1;
                  }
                  iVar6 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc((undefined1 *)((long)pppuVar4 + -0xf8),0);
                  iVar6 = iVar6 + 1;
                  uVar9 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)pppuVar4 + -0xf8),0);
                  if (0xc < iVar6) {
                    iVar6 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)pppuVar4 + -0xf8),0);
                    uVar9 = (ulong)(iVar6 + 1);
                    iVar6 = 1;
                  }
                  uVar32 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc((undefined1 *)((long)pppuVar4 + -0xf8),0);
                  uVar15 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)pppuVar4 + -0xf8),0);
                  uVar33 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar33,1,uVar32,uVar15,0);
                  uVar32 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar32,1,iVar6,uVar9,0);
                  return uVar33;
                }
                if (uVar17 != 2) {
                  if (uVar17 != 1) goto Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange;
                  iVar6 = 1;
                }
                *(undefined8 *)((long)pppuVar4 + -0x100) = unaff_d9;
                *(undefined8 *)((long)pppuVar4 + -0xf8) = unaff_d8;
                *(ulong *)((long)pppuVar4 + -0xf0) = unaff_x24;
                *(ulong *)((long)pppuVar4 + -0xe8) = uVar9;
                *(undefined8 *)((long)pppuVar4 + -0xe0) = *(undefined8 *)((long)pppuVar4 + -0xe0);
                *(undefined8 *)((long)pppuVar4 + -0xd8) = *(undefined8 *)((long)pppuVar4 + -0xd8);
                *(undefined8 *)((long)pppuVar4 + -0xd0) = *(undefined8 *)((long)pppuVar4 + -0xd0);
                *(undefined8 *)((long)pppuVar4 + -200) = *(undefined8 *)((long)pppuVar4 + -200);
                *(undefined8 *)((long)pppuVar4 + -0xc0) = *(undefined8 *)((long)pppuVar4 + -0xc0);
                *(undefined8 *)((long)pppuVar4 + -0xb8) = *(undefined8 *)((long)pppuVar4 + -0xb8);
                *(undefined8 *)((long)pppuVar4 + -0x108) = uVar32;
                if ((bRam0000000003eb4c77 & 1) == 0) {
                  func_0x00f78a20(0x3d21070);
                  func_0x00f78a20(0x3d21060);
                  bRam0000000003eb4c77 = 1;
                }
                *(undefined8 *)((long)pppuVar4 + -0x110) = 0;
                uVar32 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)pppuVar4 + -0x108),0);
                uVar16 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc((undefined1 *)((long)pppuVar4 + -0x108),0);
                uVar12 = /*System.DateTime$$get_Day*/ func_0x02a8e298((undefined1 *)((long)pppuVar4 + -0x108),0);
                /*System.DateTime$$.ctor*/ func_0x02a8c93c((undefined1 *)((long)pppuVar4 + -0x110),uVar32,uVar16,uVar12,0);
                uVar32 = *(undefined8 *)((long)pppuVar4 + -0x110);
                if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar32 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar15,uVar32,0);
                *(undefined8 *)((long)pppuVar4 + -0x118) = uVar32;
                iVar8 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8((undefined1 *)((long)pppuVar4 + -0x118),0);
                dVar37 = (double)(iVar6 * 7);
                while (iVar6 * 7 < iVar8) {
                  uVar32 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar37,(undefined1 *)((long)pppuVar4 + -0x110),0);
                  *(undefined8 *)((long)pppuVar4 + -0x110) = uVar32;
                  if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar32 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar15,uVar32,0);
                  *(undefined8 *)((long)pppuVar4 + -0x118) = uVar32;
                  iVar8 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8((undefined1 *)((long)pppuVar4 + -0x118),0);
                }
                uVar32 = /*System.DateTime$$get_Day*/ func_0x02a8e298((undefined1 *)((long)pppuVar4 + -0x110),0);
                uVar15 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc((undefined1 *)((long)pppuVar4 + -0x110),0);
                uVar16 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)pppuVar4 + -0x110),0);
                uVar9 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar9,uVar32,uVar15,uVar16,0);
                uVar32 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar37,(undefined1 *)((long)pppuVar4 + -0x110),0);
                *(undefined8 *)((long)pppuVar4 + -0x110) = uVar32;
                uVar32 = /*System.DateTime$$get_Day*/ func_0x02a8e298((undefined1 *)((long)pppuVar4 + -0x110),0);
                uVar15 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc((undefined1 *)((long)pppuVar4 + -0x110),0);
                uVar16 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)pppuVar4 + -0x110),0);
                uVar12 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar12,uVar32,uVar15,uVar16,0);
                return uVar9;
              }
            }
          }
        }
      }
    }
  }
  lVar10 = func_0x00f78af4();
  *(ulong *)((long)pppuVar4 + -0x100) = uVar33;
  *(long *)((long)pppuVar4 + -0xf8) = lVar11;
  *(undefined1 **)((long)pppuVar4 + -0xf0) = (undefined1 *)((long)pppuVar4 + -0xc0);
  *(undefined **)((long)pppuVar4 + -0xe8) = &Atlas_UI_SeasonMetagameData__GetFinishedString;
  if ((bRam0000000003eb4c6b & 1) == 0) {
    func_0x00f78a20(0x3d6c018);
    bRam0000000003eb4c6b = 1;
  }
  lVar11 = *(long *)(lVar10 + 0x28);
  if (lVar11 != 0) {
    *(undefined8 *)((long)pppuVar4 + -0xf0) = *(undefined8 *)((long)pppuVar4 + -0xf0);
    *(undefined8 *)((long)pppuVar4 + -0xe8) = *(undefined8 *)((long)pppuVar4 + -0xe8);
    *(undefined8 *)((long)pppuVar4 + -0xf8) = 0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar11,/*STR('EPISODES_NOW')*/ uRam0000000003d6c018,(undefined1 *)((long)pppuVar4 + -0xf8));
    return *(ulong *)((long)pppuVar4 + -0xf8);
  }
  auVar38 = func_0x00f78af4();
  lVar27 = auVar38._8_8_;
  lVar11 = auVar38._0_8_;
  *(undefined8 *)((long)pppuVar4 + -0x150) = unaff_x26;
  *(undefined8 *)((long)pppuVar4 + -0x148) = unaff_x25;
  *(ulong *)((long)pppuVar4 + -0x140) = unaff_x24;
  *(ulong *)((long)pppuVar4 + -0x138) = uVar9;
  *(ulong *)((long)pppuVar4 + -0x130) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x128) = uVar32;
  *(undefined8 *)((long)pppuVar4 + -0x120) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x118) = lVar10;
  *(undefined1 **)((long)pppuVar4 + -0x110) = (undefined1 *)((long)pppuVar4 + -0xf0);
  *(undefined **)((long)pppuVar4 + -0x108) = &Atlas_UI_SeasonProgressPanelBehaviour__Init;
  uVar32 = 0x3eb4000;
  if ((bRam0000000003eb4c6c & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d247f8);
    func_0x00f78a20(0x3d790b0);
    func_0x00f78a20(0x3d79118);
    bRam0000000003eb4c6c = 1;
  }
  if (lVar27 == 0) {
code_r0x014f0410:
    puVar36 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
    lVar10 = func_0x00f78af4();
  }
  else {
    lVar10 = *(long *)(lVar27 + 0xd0);
    uVar15 = *(undefined8 *)(lVar27 + 0x20);
    *(long *)(lVar11 + 0x48) = lVar10;
    *(undefined8 *)(lVar11 + 0x50) = uVar15;
    if (lVar10 == 0) goto code_r0x014f0410;
    puVar36 = &UNK_014f031c;
  }
  *(ulong *)((long)pppuVar4 + -400) = unaff_x24;
  *(ulong *)((long)pppuVar4 + -0x188) = uVar9;
  *(ulong *)((long)pppuVar4 + -0x180) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x178) = 0x3eb4000;
  *(long *)((long)pppuVar4 + -0x170) = lVar27;
  *(long *)((long)pppuVar4 + -0x168) = lVar11;
  *(undefined1 **)((long)pppuVar4 + -0x160) = (undefined1 *)((long)pppuVar4 + -0x110);
  *(undefined **)((long)pppuVar4 + -0x158) = puVar36;
  uVar33 = 0x3eb4000;
  if ((bRam0000000003eb4c7b & 1) == 0) {
    func_0x00f78a20(0x3d2dca0);
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c7b = 1;
  }
  if (*(long *)(lVar10 + 0x28) != 0) {
    puVar18 = (undefined8 *)/*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar10 + 0x28),0);
    *(undefined8 *)((long)pppuVar4 + -0x198) = *puVar18;
    iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)pppuVar4 + -0x198),0);
    uVar33 = 0;
    if (iVar6 == 0) {
code_r0x014f0548:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar33,0,0);
      if ((iVar6 != 0) && (*(char *)(lVar10 + 0x20) != '\0')) {
        uVar33 = /*Atlas.Stats.SeasonsManager$$GetSeasonByDateRange*/ func_0x014f22f4(lVar10);
      }
      return uVar33;
    }
    if (*(long *)(lVar10 + 0x28) != 0) {
      lVar11 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar10 + 0x28),0);
      if (*(long *)(lVar11 + 8) != 0) {
        uVar33 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar11 + 8) + 0x30));
        if (*(long *)(lVar10 + 0x28) != 0) {
          lVar11 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar10 + 0x28),0);
          if ((*(long *)(lVar11 + 8) != 0) && (*(long *)(lVar10 + 0x28) != 0)) {
            uVar32 = *(undefined8 *)(*(long *)(lVar11 + 8) + 0x28);
            lVar11 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar10 + 0x28),0);
            if ((*(long *)(lVar11 + 8) != 0) && (*(long *)(lVar10 + 0x28) != 0)) {
              unaff_x22 = (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x20);
              lVar11 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar10 + 0x28),0);
              if ((*(long *)(lVar11 + 8) != 0) && (*(long *)(lVar10 + 0x28) != 0)) {
                uVar9 = (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x24);
                lVar11 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar10 + 0x28),0);
                if (*(long *)(lVar11 + 8) != 0) {
                  uVar15 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                  uVar33 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar33,unaff_x22,*(undefined8 *)(lVar10 + 0x38),uVar15,
                                           uVar32,uVar9);
                  goto code_r0x014f0548;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar11 = func_0x00f78af4();
  *(ulong *)((long)pppuVar4 + -0x1d0) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x1c8) = uVar32;
  *(ulong *)((long)pppuVar4 + -0x1c0) = uVar33;
  *(long *)((long)pppuVar4 + -0x1b8) = lVar10;
  *(undefined1 **)((long)pppuVar4 + -0x1b0) = (undefined1 *)((long)pppuVar4 + -0x160);
  *(undefined **)((long)pppuVar4 + -0x1a8) = &Atlas_UI_SeasonProgressPanelBehaviour__SetData;
  uVar32 = 0x3d247f0;
  if ((bRam0000000003eb4c6d & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4c6d = 1;
  }
  lVar10 = *(long *)(lVar11 + 0x48);
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = 0;
  if (lVar10 != 0) {
    unaff_x22 = 0x3d25000;
    uVar15 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar10,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
    uVar32 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar15,*(undefined4 *)(lVar11 + 0x68),0);
    plVar14 = *(long **)(lVar11 + 0x30);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar32,uVar15,0);
    lVar11 = 0;
    if (plVar14 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar14 + 0x558))(plVar14,uVar16,*(undefined8 *)(*plVar14 + 0x560));
      return uVar9;
    }
  }
  lVar10 = func_0x00f78af4();
  *(undefined8 *)((long)pppuVar4 + -0x1f0) = uVar15;
  *(long *)((long)pppuVar4 + -0x1e8) = lVar11;
  *(undefined1 **)((long)pppuVar4 + -0x1e0) = (undefined1 *)((long)pppuVar4 + -0x1b0);
  *(undefined **)((long)pppuVar4 + -0x1d8) = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
  if (*(long *)(lVar10 + 0x78) == 0) {
    lVar11 = func_0x00f78af4();
    *(undefined8 *)((long)pppuVar4 + -0x260) = unaff_d9;
    *(undefined8 *)((long)pppuVar4 + -600) = unaff_d8;
    *(undefined8 *)((long)pppuVar4 + -0x250) = unaff_x28;
    *(undefined8 *)((long)pppuVar4 + -0x248) = unaff_x27;
    *(undefined8 *)((long)pppuVar4 + -0x240) = unaff_x26;
    *(undefined8 *)((long)pppuVar4 + -0x238) = unaff_x25;
    *(ulong *)((long)pppuVar4 + -0x230) = unaff_x24;
    *(ulong *)((long)pppuVar4 + -0x228) = uVar9;
    *(ulong *)((long)pppuVar4 + -0x220) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x218) = uVar32;
    *(undefined8 *)((long)pppuVar4 + -0x210) = uVar15;
    *(long *)((long)pppuVar4 + -0x208) = lVar10;
    *(undefined1 **)((long)pppuVar4 + -0x200) = (undefined1 *)((long)pppuVar4 + -0x1e0);
    *(undefined **)((long)pppuVar4 + -0x1f8) = &Atlas_UI_SeasonProgressPanelBehaviour__AnimateStars;
    uVar32 = 0x3d28ba0;
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
    lVar10 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
    /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar10,0);
    if (lVar10 != 0) {
      unaff_x22 = 0x3d247f0;
      *(long *)(lVar10 + 0x10) = lVar11;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar32 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(lVar11 + 0x60) = uVar32;
      lVar27 = *(long *)(lVar11 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar32 = 0;
      if (lVar27 != 0) {
        uVar32 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar27,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        *(int *)(lVar10 + 0x18) = (int)uVar32;
        if (*(long *)(lVar11 + 0x58) != 0) {
          uVar15 = Atlas_UI_SeasonMetagameData__StarsForSeason();
          uVar7 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar32,uVar15,0);
          *(undefined4 *)(lVar10 + 0x1c) = uVar7;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
          uVar16 = *(undefined8 *)(lVar11 + 0x60);
          uVar32 = *(undefined8 *)(lVar11 + 0x20);
          uVar15 = *(undefined8 *)(lVar11 + 0x28);
          uVar2 = *(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132);
          *(undefined4 *)((long)pppuVar4 + -0x264) = uVar7;
          *(long *)((long)pppuVar4 + -0x270) = lVar11;
          if (((uVar2 >> 10 & 1) != 0) && (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar18 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          lVar11 = puVar18[1];
          if (lVar11 == 0) {
            uVar2 = *(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132);
            *(undefined8 *)((long)pppuVar4 + -0x278) = uVar32;
            if (((uVar2 >> 10 & 1) != 0) && (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar18 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
            }
            uVar32 = *puVar18;
            lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar11,uVar32,uRam0000000003d63d00,0);
            *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar11;
            uVar32 = *(undefined8 *)((long)pppuVar4 + -0x278);
          }
          uVar32 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar15,uVar32,lVar11,0);
          uVar32 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar16,uVar32,0);
          uVar15 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar15,lVar10,uRam0000000003d63d08,0);
          uVar32 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar32,uVar15,0);
          uVar15 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
          /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar15,lVar10,uRam0000000003d63d10,uRam0000000003d2da20);
          uVar16 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
          /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar16,lVar10,uRam0000000003d63d18,uRam0000000003d2dae8);
          lVar11 = *(long *)((long)pppuVar4 + -0x270);
          uVar7 = *(undefined4 *)(lVar11 + 0x38);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar15 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar7,uVar15,uVar16,*(undefined4 *)((long)pppuVar4 + -0x264),0);
          uVar32 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar32,uVar15,0);
          uVar32 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar32,*(undefined4 *)(lVar11 + 0x3c),uRam0000000003d5e7b0);
          uVar15 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar15,lVar10,uRam0000000003d63d20,0);
          uVar9 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar32,uVar15,uRam0000000003d5e740);
          uVar32 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar32,lVar10,uRam0000000003d63d28,0);
          if ((uVar9 != 0) && (*(char *)(uVar9 + 0xe8) != '\0')) {
            *(undefined8 *)(uVar9 + 0x80) = uVar32;
          }
          return uVar9;
        }
      }
    }
    uVar9 = func_0x00f78af4();
    *(undefined8 *)(uVar9 + 0x38) = 0x83f000000;
    *(ulong *)((long)pppuVar4 + -0x2b0) = unaff_x22;
    *(undefined8 *)((long)pppuVar4 + -0x2a8) = uVar32;
    *(undefined8 *)((long)pppuVar4 + -0x2a0) = 0x3eb4000;
    *(long *)((long)pppuVar4 + -0x298) = lVar11;
    *(undefined1 **)((long)pppuVar4 + -0x290) = (undefined1 *)((long)pppuVar4 + -0x200);
    *(undefined **)((long)pppuVar4 + -0x288) = &Atlas_UI_SeasonProgressPanelBehaviour___ctor;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar9;
  }
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar10 + 0x78),0,0);
  plVar14 = *(long **)(lVar10 + 0x60);
  *(ulong *)((long)pppuVar4 + -0x200) = unaff_x22;
  *(undefined8 *)((long)pppuVar4 + -0x1f8) = uVar32;
  *(undefined8 *)((long)pppuVar4 + -0x1f0) = *(undefined8 *)((long)pppuVar4 + -0x1f0);
  *(undefined8 *)((long)pppuVar4 + -0x1e8) = *(undefined8 *)((long)pppuVar4 + -0x1e8);
  *(undefined8 *)((long)pppuVar4 + -0x1e0) = *(undefined8 *)((long)pppuVar4 + -0x1e0);
  *(undefined8 *)((long)pppuVar4 + -0x1d8) = *(undefined8 *)((long)pppuVar4 + -0x1d8);
  if ((bRam0000000003eb5c52 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c52 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
    return /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
  }
  if (plVar14 == (long *)0x0) {
    uVar33 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      uVar33 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return uVar33;
    }
    uVar32 = *(undefined8 *)((long)pppuVar4 + -0x200);
    uVar15 = *(undefined8 *)((long)pppuVar4 + -0x1f8);
    *(undefined8 *)((long)pppuVar4 + -0x1f0) = *(undefined8 *)((long)pppuVar4 + -0x1f0);
    *(undefined8 *)((long)pppuVar4 + -0x1e8) = *(undefined8 *)((long)pppuVar4 + -0x1e8);
    *(undefined8 *)((long)pppuVar4 + -0x1e0) = *(undefined8 *)((long)pppuVar4 + -0x1e0);
    *(undefined8 *)((long)pppuVar4 + -0x1d8) = *(undefined8 *)((long)pppuVar4 + -0x1d8);
    if ((bRam0000000003eb5b2e & 1) == 0) {
      func_0x00f78a20(0x3d70738,0);
      bRam0000000003eb5b2e = 1;
    }
    plVar14 = (long *)0x0;
    uVar16 = *(undefined8 *)((long)pppuVar4 + -0x1e0);
    uVar31 = *(undefined8 *)((long)pppuVar4 + -0x1d8);
    uVar12 = *(undefined8 *)((long)pppuVar4 + -0x1f0);
    uVar29 = *(undefined8 *)((long)pppuVar4 + -0x1e8);
    plVar13 = /*STR('Null Tween')*/ plRam0000000003d70738;
  }
  else if ((char)plVar14[0x1d] == '\0') {
    uVar33 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      uVar33 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return uVar33;
    }
    uVar32 = *(undefined8 *)((long)pppuVar4 + -0x200);
    uVar15 = *(undefined8 *)((long)pppuVar4 + -0x1f8);
    *(undefined8 *)((long)pppuVar4 + -0x1f0) = *(undefined8 *)((long)pppuVar4 + -0x1f0);
    *(undefined8 *)((long)pppuVar4 + -0x1e8) = *(undefined8 *)((long)pppuVar4 + -0x1e8);
    *(undefined8 *)((long)pppuVar4 + -0x1e0) = *(undefined8 *)((long)pppuVar4 + -0x1e0);
    *(undefined8 *)((long)pppuVar4 + -0x1d8) = *(undefined8 *)((long)pppuVar4 + -0x1d8);
    if ((bRam0000000003eb5b2c & 1) == 0) {
      func_0x00f78a20(0x3d74b30,0);
      bRam0000000003eb5b2c = 1;
    }
    plVar14 = (long *)0x0;
    uVar16 = *(undefined8 *)((long)pppuVar4 + -0x1e0);
    uVar31 = *(undefined8 *)((long)pppuVar4 + -0x1d8);
    uVar12 = *(undefined8 *)((long)pppuVar4 + -0x1f0);
    uVar29 = *(undefined8 *)((long)pppuVar4 + -0x1e8);
    plVar13 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
  }
  else {
    if (*(char *)((long)plVar14 + 0xe9) == '\0') {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar33 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
        *(undefined1 *)(plVar14 + 0x1d) = 0;
        return uVar33;
      }
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      bVar5 = true;
      puVar35 = *(undefined1 **)((long)pppuVar4 + -0x1e0);
      puVar36 = *(undefined **)((long)pppuVar4 + -0x1d8);
      plVar13 = *(long **)((long)pppuVar4 + -0x1f0);
      uVar33 = *(ulong *)((long)pppuVar4 + -0x200);
      uVar32 = *(undefined8 *)((long)pppuVar4 + -0x1f8);
      puVar3 = (undefined1 *)((long)pppuVar4 + -0x1d0);
      plVar30 = *(long **)((long)pppuVar4 + -0x1e8);
      while( true ) {
        while( true ) {
          *(ulong *)(puVar3 + -0x40) = unaff_x24;
          *(ulong *)(puVar3 + -0x38) = uVar9;
          *(ulong *)(puVar3 + -0x30) = uVar33;
          *(undefined8 *)(puVar3 + -0x28) = uVar32;
          *(long **)(puVar3 + -0x20) = plVar13;
          *(long **)(puVar3 + -0x18) = plVar30;
          *(undefined1 **)(puVar3 + -0x10) = puVar35;
          *(undefined **)(puVar3 + -8) = puVar36;
          puVar35 = puVar3 + -0x10;
          if ((bRam0000000003eb5c68 & 1) == 0) {
            func_0x00f78a20(0x3d3c4d0);
            func_0x00f78a20(0x3d3c4d8);
            func_0x00f78a20(0x3d24878);
            func_0x00f78a20(0x3d404c0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb5c68 = 1;
          }
          if (plVar14 == (long *)0x0) goto code_r0x016bc740;
          if (plVar14[0x11] != 0) {
            /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar14[0x11],plVar14);
          }
          if (bVar5) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar14);
          }
          iVar6 = (int)plVar14[2];
          plVar30 = plVar14;
          if (*(char *)((long)plVar14 + 0x9a) != '\0') break;
          if (iVar6 == 0) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            piVar19 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x3c);
            iVar6 = -1;
            goto code_r0x016bca08;
          }
          if (iVar6 != 1) goto code_r0x016bca14;
          uVar32 = 0x3d25440;
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) =
               *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) + -1;
          if (*plVar14 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
          lVar10 = plVar14[0x24];
          if (lVar10 == 0) goto code_r0x016bc740;
          uVar33 = (ulong)*(uint *)(lVar10 + 0x18);
          if ((int)*(uint *)(lVar10 + 0x18) < 1) goto code_r0x016bca14;
          uVar9 = 0;
          if (*(int *)(lVar10 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar13 = *(long **)(*(long *)(lVar10 + 0x10) + 0x20);
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          bVar5 = false;
          puVar36 = &UNK_016bc72c;
          puVar3 = puVar3 + -0x40;
          plVar14 = plVar13;
        }
        if (iVar6 == 0) goto code_r0x016bc744;
        if (iVar6 != 1) break;
        uVar32 = 0x3d25440;
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar10 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x58);
        if (lVar10 == 0) goto code_r0x016bc740;
        /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar10,plVar14,uRam0000000003d404c0);
        *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) =
             *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) + 1;
        if (*plVar14 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
        lVar10 = plVar14[0x24];
        if (lVar10 == 0) goto code_r0x016bc740;
        uVar33 = (ulong)*(uint *)(lVar10 + 0x18);
        if ((int)*(uint *)(lVar10 + 0x18) < 1) break;
        uVar9 = 0;
        if (*(int *)(lVar10 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar13 = *(long **)(*(long *)(lVar10 + 0x10) + 0x20);
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        bVar5 = false;
        puVar36 = &UNK_016bc660;
        puVar3 = puVar3 + -0x40;
        plVar14 = plVar13;
      }
code_r0x016bca14:
      *(undefined1 *)(plVar14 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
      return uVar9;
    }
    uVar33 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      uVar33 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return uVar33;
    }
    *(undefined8 *)((long)pppuVar4 + -0x200) = *(undefined8 *)((long)pppuVar4 + -0x200);
    *(undefined8 *)((long)pppuVar4 + -0x1f8) = *(undefined8 *)((long)pppuVar4 + -0x1f8);
    *(undefined8 *)((long)pppuVar4 + -0x1f0) = *(undefined8 *)((long)pppuVar4 + -0x1f0);
    *(undefined8 *)((long)pppuVar4 + -0x1e8) = *(undefined8 *)((long)pppuVar4 + -0x1e8);
    *(undefined8 *)((long)pppuVar4 + -0x1e0) = *(undefined8 *)((long)pppuVar4 + -0x1e0);
    *(undefined8 *)((long)pppuVar4 + -0x1d8) = *(undefined8 *)((long)pppuVar4 + -0x1d8);
    if ((bRam0000000003eb5b2d & 1) == 0) {
      func_0x00f78a20(0x3d74b40,0);
      bRam0000000003eb5b2d = 1;
    }
    uVar16 = *(undefined8 *)((long)pppuVar4 + -0x1e0);
    uVar31 = *(undefined8 *)((long)pppuVar4 + -0x1d8);
    uVar12 = *(undefined8 *)((long)pppuVar4 + -0x1f0);
    uVar29 = *(undefined8 *)((long)pppuVar4 + -0x1e8);
    uVar32 = *(undefined8 *)((long)pppuVar4 + -0x200);
    uVar15 = *(undefined8 *)((long)pppuVar4 + -0x1f8);
    plVar13 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
  }
  *(ulong *)((long)pppuVar4 + -0x210) = unaff_x24;
  *(ulong *)((long)pppuVar4 + -0x208) = uVar9;
  *(undefined8 *)((long)pppuVar4 + -0x200) = uVar32;
  *(undefined8 *)((long)pppuVar4 + -0x1f8) = uVar15;
  *(undefined8 *)((long)pppuVar4 + -0x1f0) = uVar12;
  *(undefined8 *)((long)pppuVar4 + -0x1e8) = uVar29;
  *(undefined8 *)((long)pppuVar4 + -0x1e0) = uVar16;
  *(undefined8 *)((long)pppuVar4 + -0x1d8) = uVar31;
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
  uVar9 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
  if (plVar13 == (long *)0x0) {
    uVar32 = 0;
  }
  else {
    uVar32 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
  }
  plVar13 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar9,uVar32,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((plVar14 != (long *)0x0) && (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')
     ) {
    lVar11 = plVar14[0x19];
    lVar10 = plVar14[7];
    uVar17 = *(uint *)(plVar14 + 8);
    uVar9 = (ulong)uVar17;
    if ((lVar11 != 0) || ((lVar10 != 0 || (uVar17 != 0xfffffc19)))) {
      if (plVar13 == (long *)0x0) {
        uVar32 = 0;
      }
      else {
        uVar32 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      }
      plVar13 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar32,/*STR('\n')*/ uRam0000000003d65de0,0);
      if (lVar11 != 0) {
        uVar32 = 0;
        if (plVar13 != (long *)0x0) {
          uVar32 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        uVar15 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar14[0x19],0);
        plVar13 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar32,uVar15,0);
      }
      if (lVar10 != 0) {
        uVar32 = 0;
        if (plVar13 != (long *)0x0) {
          uVar32 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        uVar15 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar14[7],0);
        plVar13 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar32,uVar15,0);
      }
      if (uVar17 != 0xfffffc19) {
        uVar32 = 0;
        if (plVar13 != (long *)0x0) {
          uVar32 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        *(int *)((long)pppuVar4 + -0x214) = (int)plVar14[8];
        uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(undefined1 *)((long)pppuVar4 + -0x214));
        uVar15 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar15,0);
        plVar13 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar32,uVar15,0);
      }
    }
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
  if (lVar10 != 0) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar10 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
      if (lVar10 == 0) {
        lVar10 = func_0x00f78af4();
        *(undefined8 *)((long)pppuVar4 + -0x250) = 0x3d20bc0;
        *(ulong *)((long)pppuVar4 + -0x248) = uVar9;
        *(long **)((long)pppuVar4 + -0x240) = plVar13;
        *(long **)((long)pppuVar4 + -0x238) = plVar14;
        *(undefined1 **)((long)pppuVar4 + -0x230) = (undefined1 *)((long)pppuVar4 + -0x1e0);
        *(undefined **)((long)pppuVar4 + -0x228) = &DG_Tweening_Core_DOTweenComponent__Start;
        if ((bRam0000000003eb5b0e & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5b0e = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar32 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar32,lVar10,0);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        *(undefined1 *)(lVar10 + 0x2d) = 1;
        uVar32 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)((long)pppuVar4 + -0x250) = *(undefined8 *)((long)pppuVar4 + -0x250);
        *(undefined8 *)((long)pppuVar4 + -0x248) = *(undefined8 *)((long)pppuVar4 + -0x248);
        *(undefined8 *)((long)pppuVar4 + -0x240) = *(undefined8 *)((long)pppuVar4 + -0x240);
        *(undefined8 *)((long)pppuVar4 + -0x238) = *(undefined8 *)((long)pppuVar4 + -0x238);
        *(undefined8 *)((long)pppuVar4 + -0x230) = *(undefined8 *)((long)pppuVar4 + -0x230);
        *(undefined8 *)((long)pppuVar4 + -0x228) = *(undefined8 *)((long)pppuVar4 + -0x228);
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
        uVar9 = (*pcRam0000000003ec0228)(0,uVar32);
        return uVar9;
      }
    }
    uVar9 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar10,2,plVar13,uRam0000000003d35ae8);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar13,0);
  return uVar9;
code_r0x029ca9f4:
  uVar32 = *(undefined8 *)((long)pppuVar4 + -0x70);
  uVar12 = *(undefined8 *)((long)pppuVar4 + -0x68);
  uVar15 = *(undefined8 *)((long)pppuVar4 + -0x80);
  uVar31 = *(undefined8 *)((long)pppuVar4 + -0x78);
  uVar16 = *(undefined8 *)((long)pppuVar4 + -0x90);
  uVar29 = *(undefined8 *)((long)pppuVar4 + -0x88);
  pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x60);
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar6 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar10,lVar11,0);
  goto code_r0x029cabcc;
  while( true ) {
    if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      uVar17 = *(uint *)(lVar10 + 0x84);
    }
    plVar13 = *(long **)(lVar10 + 0x50);
    if (plVar13 != (long *)0x0) break;
code_r0x016bc740:
    func_0x00f78af4();
code_r0x016bc744:
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    if (*(int *)(lVar10 + 0x84) == -1) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      }
      uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      iVar6 = *(int *)(lVar10 + 8) + -1;
      *(int *)(lVar10 + 0x80) = iVar6;
      *(int *)(lVar10 + 0x84) = iVar6;
    }
    if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    lVar10 = *(long *)(uVar9 + 0xb8);
    uVar17 = *(uint *)(lVar10 + 0x84);
    if (*(int *)(lVar10 + 8) + -1 <= (int)uVar17) {
      if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar17 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x84);
        uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      if ((int)uVar17 < 0) goto code_r0x016bc9e4;
      lVar10 = (ulong)uVar17 * 8 + 0x20;
      while( true ) {
        if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
        }
        plVar13 = *(long **)(*(long *)(uVar9 + 0xb8) + 0x50);
        if (plVar13 == (long *)0x0) goto code_r0x016bc740;
        if (*(uint *)(plVar13 + 3) <= uVar17) goto code_r0x016bca38;
        if (plVar13[(ulong)uVar17 + 4] == 0) break;
        lVar10 = lVar10 + -8;
        bVar5 = (int)uVar17 < 1;
        uVar17 = uVar17 - 1;
        if (bVar5) goto code_r0x016bc9e4;
      }
      if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar13 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x50);
        if (plVar13 == (long *)0x0) goto code_r0x016bc740;
      }
      lVar11 = func_0x00f78adc(plVar14,*(undefined8 *)(*plVar13 + 0x40));
      if (lVar11 == 0) goto code_r0x016bca4c;
      if (*(uint *)(plVar13 + 3) <= uVar17) goto code_r0x016bca38;
      *(long **)((long)plVar13 + lVar10) = plVar14;
      lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      if ((int)uVar17 < *(int *)(lVar10 + 0x80)) {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
        }
        uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
        *(uint *)(lVar10 + 0x80) = uVar17;
      }
      if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      lVar10 = *(long *)(uVar9 + 0xb8);
      iVar6 = *(int *)(lVar10 + 0x80);
      if (*(int *)(lVar10 + 0x84) < iVar6) {
        if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
          iVar6 = *(int *)(lVar10 + 0x80);
          uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
        }
        *(int *)(lVar10 + 0x84) = iVar6;
      }
      goto code_r0x016bc9e4;
    }
  }
  lVar10 = func_0x00f78adc(plVar14,*(undefined8 *)(*plVar13 + 0x40));
  if (lVar10 == 0) goto code_r0x016bca4c;
  if (*(uint *)(plVar13 + 3) <= uVar17 + 1) {
code_r0x016bca38:
    uVar32 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar32,0);
code_r0x016bca44:
      func_0x00f78e5c(plVar14);
code_r0x016bca4c:
      uVar32 = func_0x00f78b14();
    } while( true );
  }
  plVar13[(long)(int)(uVar17 + 1) + 4] = (long)plVar14;
  uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
  iVar6 = *(int *)(lVar10 + 0x84) + 1;
  *(int *)(lVar10 + 0x84) = iVar6;
  if (iVar6 < *(int *)(lVar10 + 0x80)) {
    if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar10 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      iVar6 = *(int *)(lVar10 + 0x84);
      uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    *(int *)(lVar10 + 0x80) = iVar6;
  }
code_r0x016bc9e4:
  if (((*(ushort *)(uVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar9 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar9 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  }
  piVar19 = (int *)(*(long *)(uVar9 + 0xb8) + 0x34);
  iVar6 = 1;
code_r0x016bca08:
  *piVar19 = *piVar19 + iVar6;
  goto code_r0x016bca14;
  while( true ) {
    if (puVar20[1] != puVar24[1]) goto code_r0x029ca930;
    if (puVar20[2] != puVar24[2]) {
      lVar27 = 8;
      goto code_r0x029ca930;
    }
    if (puVar20[3] != puVar24[3]) {
      lVar27 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar20[4] != puVar24[4]) {
      lVar27 = 0x10;
      goto code_r0x029ca930;
    }
    puVar20 = puVar20 + 5;
    puVar24 = puVar24 + 5;
    iVar6 = iVar8 + -10;
    bVar5 = iVar8 < 0x14;
    iVar8 = iVar6;
    if (bVar5) break;
code_r0x029ca858:
    if (*puVar20 != *puVar24) {
      lVar27 = 0;
code_r0x029ca930:
      puVar20 = (uint *)(lVar27 + (long)puVar20);
      puVar24 = (uint *)(lVar27 + (long)puVar24);
      uVar17 = (uint)(ushort)*puVar20 - (uint)(ushort)*puVar24;
      if (uVar17 != 0) {
        return (ulong)uVar17;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar6) {
    iVar6 = iVar6 + 2;
    do {
      if (*puVar20 != *puVar24) {
        uVar17 = (*puVar20 & 0xffff) - (*puVar24 & 0xffff);
        if (uVar17 != 0) {
          return (ulong)uVar17;
        }
code_r0x029ca948:
        uVar17 = (uint)*(ushort *)((long)puVar20 + 2);
        uVar23 = (uint)*(ushort *)((long)puVar24 + 2);
        goto code_r0x029ca950;
      }
      puVar20 = puVar20 + 1;
      puVar24 = puVar24 + 1;
      iVar6 = iVar6 + -2;
    } while (2 < iVar6);
  }
  uVar17 = *(uint *)(lVar10 + 0x10);
  uVar23 = *(uint *)(lVar11 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar17 - uVar23);
  while( true ) {
    lVar27 = lVar27 + -2;
    puVar22 = puVar26 + 1;
    puVar28 = puVar26;
    if (lVar27 == 0) break;
code_r0x029cac24:
    puVar26 = puVar22;
    if (0x7f < *puVar28) goto code_r0x029cac8c;
  }
  if (iVar6 != 0) {
    puVar22 = (ushort *)(lVar11 + 0x16);
    puVar28 = (ushort *)(lVar11 + 0x14);
    do {
      puVar26 = puVar22;
      if (0x7f < *puVar28) goto code_r0x029cac8c;
      lVar21 = lVar21 + -2;
      puVar22 = puVar26 + 1;
      puVar28 = puVar26;
    } while (lVar21 != 0);
  }
code_r0x029cac68:
  iVar6 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar10,lVar11);
code_r0x029cabcc:
  return (ulong)(iVar6 == 0);
}



// ============================================================
// RVA: 0x14efd78 | Atlas.UI.SeasonMetagameData.GetCurrentRewardIndex
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14efe68 | Atlas.UI.SeasonMetagameData.IsSeasonActive
// ============================================================

/* WARNING: Possible PIC construction at 0x014f005c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014f0060) */
/* WARNING: Removing unreachable block (ram,0x014f0064) */
/* WARNING: Removing unreachable block (ram,0x014f0088) */
/* WARNING: Removing unreachable block (ram,0x014f0090) */
/* WARNING: Removing unreachable block (ram,0x014f0094) */
/* WARNING: Removing unreachable block (ram,0x014f00d0) */
/* WARNING: Removing unreachable block (ram,0x014f00ec) */
/* WARNING: Removing unreachable block (ram,0x014f00f0) */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

ulong Atlas_UI_SeasonMetagameData__IsSeasonActive(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar8;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  ushort *puVar22;
  ulong uVar23;
  uint uVar24;
  uint *puVar25;
  code *pcVar26;
  ushort *puVar27;
  ushort *puVar28;
  undefined8 unaff_x19;
  undefined8 uVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined8 unaff_x20;
  long lVar32;
  undefined8 unaff_x21;
  undefined8 uVar33;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar34;
  undefined *unaff_x30;
  undefined *puVar35;
  undefined8 unaff_d8;
  double dVar36;
  undefined8 unaff_d9;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  puVar4 = &stack0xfffffffffffffff0;
  puVar34 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x50) == 0) {
    unaff_x30 = &Atlas_Stats_SeasonsManager__IsSeasonActive;
    auVar37 = func_0x00f78af4();
  }
  else {
    auVar37._8_8_ = *(undefined8 *)(param_1 + 0x10);
    auVar37._0_8_ = *(long *)(param_1 + 0x50);
    puVar4 = (undefined1 *)register0x00000008;
    puVar34 = unaff_x29;
  }
  lVar17 = auVar37._8_8_;
  lVar32 = auVar37._0_8_;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(ulong *)(puVar4 + -0x40) = unaff_x24;
  *(ulong *)(puVar4 + -0x38) = unaff_x23;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar34;
  *(undefined **)(puVar4 + -8) = unaff_x30;
  uVar33 = 0x3eb4000;
  if ((bRam0000000003eb4c7d & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    bRam0000000003eb4c7d = 1;
  }
  if (*(long *)(lVar32 + 0x28) != 0) {
    lVar9 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
    if (*(long *)(lVar9 + 8) != 0) {
      uVar33 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar9 + 8) + 0x30));
      if (*(long *)(lVar32 + 0x28) != 0) {
        lVar9 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
        if ((*(long *)(lVar9 + 8) != 0) && (*(long *)(lVar32 + 0x28) != 0)) {
          unaff_x22 = *(ulong *)(*(long *)(lVar9 + 8) + 0x28);
          lVar9 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
          if ((*(long *)(lVar9 + 8) != 0) && (*(long *)(lVar32 + 0x28) != 0)) {
            unaff_x23 = (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x20);
            lVar9 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
            if ((*(long *)(lVar9 + 8) != 0) && (*(long *)(lVar32 + 0x28) != 0)) {
              unaff_x24 = (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x24);
              lVar9 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
              if (*(long *)(lVar9 + 8) != 0) {
                unaff_x25 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                lVar32 = *(long *)(lVar32 + 0x38);
                uVar10 = /*Atlas.Definitions.SeasonRotationHelper$$IsRotationActive*/ func_0x014f18ec(lVar32,unaff_x25);
                if ((int)uVar10 == 0) {
                  return uVar10;
                }
                lVar9 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar33,unaff_x23,lVar32,unaff_x25,unaff_x22,unaff_x24);
                if ((lVar17 != 0) && (lVar9 != 0)) {
                  lVar17 = *(long *)(lVar17 + 0x18);
                  lVar32 = *(long *)(lVar9 + 0x18);
                  auVar38._8_8_ = lVar32;
                  auVar38._0_8_ = lVar17;
                  uVar10 = 0;
                  uVar33 = *(undefined8 *)(puVar4 + -0x10);
                  uVar11 = *(undefined8 *)(puVar4 + -8);
                  uVar14 = *(undefined8 *)(puVar4 + -0x20);
                  uVar31 = *(undefined8 *)(puVar4 + -0x18);
                  uVar15 = *(undefined8 *)(puVar4 + -0x30);
                  uVar29 = *(undefined8 *)(puVar4 + -0x28);
                  if (lVar17 == lVar32) {
                    uVar23 = 1;
                  }
                  else {
                    uVar23 = 0;
                    if ((lVar17 != 0) && (lVar32 != 0)) {
                      if (*(int *)(lVar17 + 0x10) == *(int *)(lVar32 + 0x10)) {
System_String__EqualsHelper:
                        lVar32 = auVar38._0_8_;
                        *(undefined8 *)(puVar4 + -0x30) = uVar15;
                        *(undefined8 *)(puVar4 + -0x28) = uVar29;
                        *(undefined8 *)(puVar4 + -0x20) = uVar14;
                        *(undefined8 *)(puVar4 + -0x18) = uVar31;
                        *(undefined8 *)(puVar4 + -0x10) = uVar33;
                        *(undefined8 *)(puVar4 + -8) = uVar11;
                        if ((lVar32 != 0) && (auVar38._8_8_ != 0)) {
                          plVar13 = (long *)(lVar32 + 0x14);
                          iVar8 = *(int *)(lVar32 + 0x10);
                          plVar12 = (long *)(auVar38._8_8_ + 0x14);
                          uVar10 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
                          if ((uVar10 & 1) == 0) {
                            iVar7 = iVar8;
                            if (9 < iVar8) {
                              do {
                                if ((int)*plVar13 != (int)*plVar12) {
                                  return 0;
                                }
                                if (*(int *)((long)plVar13 + 4) != *(int *)((long)plVar12 + 4)) {
                                  return 0;
                                }
                                if ((int)plVar13[1] != (int)plVar12[1]) {
                                  return 0;
                                }
                                if (*(int *)((long)plVar13 + 0xc) != *(int *)((long)plVar12 + 0xc))
                                {
                                  return 0;
                                }
                                if ((int)plVar13[2] != (int)plVar12[2]) {
                                  return 0;
                                }
                                plVar13 = (long *)((long)plVar13 + 0x14);
                                plVar12 = (long *)((long)plVar12 + 0x14);
                                iVar8 = iVar7 + -10;
                                bVar5 = 0x13 < iVar7;
                                iVar7 = iVar8;
                              } while (bVar5);
                            }
                          }
                          else {
                            iVar7 = iVar8;
                            if (0xb < iVar8) {
                              do {
                                if (((*plVar13 != *plVar12) || (plVar13[1] != plVar12[1])) ||
                                   (plVar13[2] != plVar12[2])) {
                                  return 0;
                                }
                                plVar13 = plVar13 + 3;
                                plVar12 = plVar12 + 3;
                                iVar8 = iVar7 + -0xc;
                                bVar5 = 0x17 < iVar7;
                                iVar7 = iVar8;
                              } while (bVar5);
                            }
                          }
                          if (iVar8 < 1) {
                            uVar10 = 1;
                          }
                          else {
                            iVar8 = iVar8 + 2;
                            do {
                              bVar5 = (int)*plVar13 == (int)*plVar12;
                              uVar10 = (ulong)bVar5;
                              if (!bVar5) {
                                return uVar10;
                              }
                              plVar13 = (long *)((long)plVar13 + 4);
                              plVar12 = (long *)((long)plVar12 + 4);
                              iVar8 = iVar8 + -2;
                            } while (2 < iVar8);
                          }
                          return uVar10;
                        }
                        auVar37 = func_0x00f78af4();
                        lVar17 = auVar37._8_8_;
                        lVar32 = auVar37._0_8_;
                        *(undefined8 *)(puVar4 + -0x60) = uVar15;
                        *(undefined8 *)(puVar4 + -0x58) = uVar29;
                        *(undefined8 *)(puVar4 + -0x50) = uVar14;
                        *(undefined8 *)(puVar4 + -0x48) = uVar31;
                        *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
                        *(undefined **)(puVar4 + -0x38) = &System_String__CompareOrdinalHelper;
                        if ((bRam0000000003eb9441 & 1) == 0) {
                          func_0x00f78a20(0x3d232c0);
                          bRam0000000003eb9441 = 1;
                        }
                        if ((lVar32 != 0) && (lVar17 != 0)) {
                          uVar6 = *(undefined4 *)(lVar32 + 0x10);
                          uVar1 = *(undefined4 *)(lVar17 + 0x10);
                          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar8 = /*System.Math$$Min*/ func_0x02b020f4(uVar6,uVar1,0);
                          puVar20 = (uint *)(lVar32 + 0x14);
                          puVar25 = (uint *)(lVar17 + 0x14);
                          if (iVar8 < 10) goto code_r0x029ca8c8;
                          lVar9 = 4;
                          iVar7 = iVar8;
                          goto code_r0x029ca858;
                        }
                        auVar38 = func_0x00f78af4();
                        plVar12 = auVar38._8_8_;
                        plVar13 = auVar38._0_8_;
                        *(undefined8 *)(puVar4 + -0x90) = uVar15;
                        *(undefined8 *)(puVar4 + -0x88) = 0x3eb9000;
                        *(undefined1 (*) [16])(puVar4 + -0x80) = auVar37;
                        *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
                        *(undefined **)(puVar4 + -0x68) = &System_String__Equals;
                        if ((bRam0000000003eb9442 & 1) == 0) {
                          func_0x00f78a20(0x3d24dd0);
                          bRam0000000003eb9442 = 1;
                        }
                        if (plVar13 != (long *)0x0) {
                          if ((plVar12 != (long *)0x0) && (*plVar12 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
                            if (plVar13 == plVar12) {
                              return 1;
                            }
                            uVar23 = uVar10;
                            if (plVar12 == (long *)0x0) goto code_r0x029caa44;
                            if ((int)plVar13[2] == (int)plVar12[2]) goto code_r0x029ca9f4;
                          }
                          return 0;
                        }
                        func_0x00f78a24(0x3d23938);
                        plVar13 = (long *)func_0x00f78aec();
                        /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar13,0);
                        uVar33 = func_0x00f78a24(0x3d5dad8);
                        func_0x00f78ac0(plVar13,uVar33);
                        uVar23 = uVar10;
code_r0x029caa44:
                        auVar38 = func_0x00f78af4();
                        lVar17 = auVar38._8_8_;
                        lVar32 = auVar38._0_8_;
                        *(undefined8 *)(puVar4 + -0xc0) = uVar15;
                        *(undefined8 *)(puVar4 + -0xb8) = 0x3eb9000;
                        *(long **)(puVar4 + -0xb0) = plVar12;
                        *(long **)(puVar4 + -0xa8) = plVar13;
                        *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
                        *(undefined **)(puVar4 + -0x98) = &System_String__Equals;
                        uVar10 = uVar23;
                        if ((bRam0000000003eb9443 & 1) == 0) {
                          func_0x00f78a20(0x3d20b50);
                          bRam0000000003eb9443 = 1;
                        }
                        if (5 < (uint)uVar23) {
code_r0x029caca0:
                          uVar33 = func_0x00f78a24(0x3d746f0);
                          uVar33 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar33,0);
                          func_0x00f78a24(0x3d1fce8);
                          uVar14 = func_0x00f78aec();
                          uVar15 = func_0x00f78a24(0x3d784e0);
                          /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar14,uVar33,uVar15,0);
                          uVar33 = func_0x00f78a24(0x3d5dae8);
                          func_0x00f78ac0(uVar14,uVar33);
                          goto code_r0x029cad04;
                        }
                        if (lVar32 == lVar17) {
                          return 1;
                        }
                        if (lVar17 == 0) {
                          return 0;
                        }
                        switch(uVar23 & 0xffffffff) {
                        case 0:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar13 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
                          break;
                        case 1:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar13 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
                          goto joined_r0x029caba0;
                        case 2:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar13 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
                          break;
                        case 3:
                          if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar13 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
                          if ((plVar13 == (long *)0x0) ||
                             (plVar13 = (long *)(**(code **)(*plVar13 + 0x1f8))
                                                          (plVar13,*(undefined8 *)(*plVar13 + 0x200)
                                                          ), plVar13 == (long *)0x0))
                          goto code_r0x029cad04;
                          pcVar26 = *(code **)(*plVar13 + 0x1a8);
                          uVar33 = *(undefined8 *)(*plVar13 + 0x1b0);
                          uVar14 = 1;
                          goto code_r0x029cabc8;
                        case 4:
                          if (*(int *)(lVar32 + 0x10) != *(int *)(lVar17 + 0x10)) {
                            return 0;
                          }
                          uVar33 = *(undefined8 *)(puVar4 + -0xa0);
                          uVar11 = *(undefined8 *)(puVar4 + -0x98);
                          uVar14 = *(undefined8 *)(puVar4 + -0xb0);
                          uVar31 = *(undefined8 *)(puVar4 + -0xa8);
                          uVar15 = *(undefined8 *)(puVar4 + -0xc0);
                          uVar29 = *(undefined8 *)(puVar4 + -0xb8);
                          puVar4 = puVar4 + -0x90;
                          goto System_String__EqualsHelper;
                        case 5:
                          iVar8 = *(int *)(lVar32 + 0x10);
                          if (iVar8 != *(int *)(lVar17 + 0x10)) {
                            return 0;
                          }
                          if (iVar8 == 0) goto code_r0x029cac68;
                          lVar21 = (long)iVar8 << 1;
                          puVar22 = (ushort *)(lVar32 + 0x16);
                          puVar28 = (ushort *)(lVar32 + 0x14);
                          lVar9 = lVar21;
                          goto code_r0x029cac24;
                        default:
                          goto code_r0x029caca0;
                        }
                        if ((plVar13 == (long *)0x0) ||
                           (plVar13 = (long *)(**(code **)(*plVar13 + 0x1f8))
                                                        (plVar13,*(undefined8 *)(*plVar13 + 0x200)),
                           plVar13 == (long *)0x0)) {
code_r0x029cad04:
                          lVar32 = func_0x00f78af4();
                          if (*(int *)(lVar32 + 0x10) == 0) {
                            return 1;
                          }
                          lVar17 = (long)*(int *)(lVar32 + 0x10) * 2;
                          puVar22 = (ushort *)(lVar32 + 0x14);
                          puVar28 = (ushort *)(lVar32 + 0x16);
                          do {
                            lVar17 = lVar17 + -2;
                            uVar2 = *puVar22;
                            puVar22 = puVar28;
                            puVar28 = puVar28 + 1;
                          } while (uVar2 < 0x80 && lVar17 != 0);
                          return (ulong)(uVar2 < 0x80);
                        }
                        pcVar26 = *(code **)(*plVar13 + 0x1a8);
                        uVar33 = *(undefined8 *)(*plVar13 + 0x1b0);
                        uVar14 = 0;
code_r0x029cabc8:
                        iVar8 = (*pcVar26)(plVar13,lVar32,lVar17,uVar14,uVar33);
                        goto code_r0x029cabcc;
                      }
                      uVar23 = 0;
                    }
                  }
                  return uVar23;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  *(ulong *)(puVar4 + -0x90) = unaff_x24;
  *(ulong *)(puVar4 + -0x88) = unaff_x23;
  *(ulong *)(puVar4 + -0x80) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x78) = uVar33;
  *(long *)(puVar4 + -0x70) = lVar32;
  *(long *)(puVar4 + -0x68) = lVar17;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x58) = &Atlas_UI_SeasonMetagameData__GetTimeLeftString;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb4c6a & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7cca0);
    func_0x00f78a20(0x3d6c020);
    bRam0000000003eb4c6a = 1;
  }
  *(undefined8 *)(puVar4 + -0xa0) = 0;
  lVar32 = *(long *)(lVar9 + 0x50);
  if (lVar32 == 0) {
    puVar35 = &Atlas_Stats_SeasonsManager__GetActiveDateRange;
    lVar32 = func_0x00f78af4();
  }
  else {
    uVar14 = *(undefined8 *)(lVar32 + 0x38);
    puVar35 = &UNK_014f0060;
  }
  *(ulong *)(puVar4 + -0xe0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0xd8) = uVar33;
  *(undefined8 *)(puVar4 + -0xd0) = uVar14;
  *(long *)(puVar4 + -200) = lVar9;
  *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0x60;
  *(undefined **)(puVar4 + -0xb8) = puVar35;
  uVar10 = 0x3eb4000;
  if ((bRam0000000003eb4c7f & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    bRam0000000003eb4c7f = 1;
  }
  if (*(long *)(lVar32 + 0x28) != 0) {
    lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
    if (*(long *)(lVar17 + 8) != 0) {
      /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar17 + 8) + 0x30));
      if (*(long *)(lVar32 + 0x28) != 0) {
        lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
        if ((*(long *)(lVar17 + 8) != 0) && (*(long *)(lVar32 + 0x28) != 0)) {
          uVar16 = *(uint *)(*(long *)(lVar17 + 8) + 0x20);
          uVar10 = (ulong)uVar16;
          lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
          if (*(long *)(lVar17 + 8) != 0) {
            uVar33 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
            if (*(long *)(lVar32 + 0x28) != 0) {
              lVar17 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar32 + 0x28),0);
              if (*(long *)(lVar17 + 8) != 0) {
                iVar8 = *(int *)(*(long *)(lVar17 + 8) + 0x24);
                uVar14 = *(undefined8 *)(lVar32 + 0x38);
                if (uVar16 == 3) {
Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange:
                  *(ulong *)(puVar4 + -0xf0) = unaff_x24;
                  *(ulong *)(puVar4 + -0xe8) = unaff_x23;
                  *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0xe0);
                  *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xd8);
                  *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
                  *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
                  *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
                  *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
                  *(undefined8 *)(puVar4 + -0xf8) = uVar14;
                  if ((bRam0000000003eb4c76 & 1) == 0) {
                    func_0x00f78a20(0x3d21060);
                    bRam0000000003eb4c76 = 1;
                  }
                  iVar8 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0xf8,0);
                  iVar8 = iVar8 + 1;
                  uVar10 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0xf8,0);
                  if (0xc < iVar8) {
                    iVar8 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0xf8,0);
                    uVar10 = (ulong)(iVar8 + 1);
                    iVar8 = 1;
                  }
                  uVar33 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0xf8,0);
                  uVar14 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0xf8,0);
                  uVar23 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar23,1,uVar33,uVar14,0);
                  uVar33 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar33,1,iVar8,uVar10,0);
                  return uVar23;
                }
                if (uVar16 != 2) {
                  if (uVar16 != 1) goto Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange;
                  iVar8 = 1;
                }
                *(undefined8 *)(puVar4 + -0x100) = unaff_d9;
                *(undefined8 *)(puVar4 + -0xf8) = unaff_d8;
                *(ulong *)(puVar4 + -0xf0) = unaff_x24;
                *(ulong *)(puVar4 + -0xe8) = unaff_x23;
                *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0xe0);
                *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xd8);
                *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
                *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
                *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
                *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
                *(undefined8 *)(puVar4 + -0x108) = uVar33;
                if ((bRam0000000003eb4c77 & 1) == 0) {
                  func_0x00f78a20(0x3d21070);
                  func_0x00f78a20(0x3d21060);
                  bRam0000000003eb4c77 = 1;
                }
                *(undefined8 *)(puVar4 + -0x110) = 0;
                uVar33 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0x108,0);
                uVar15 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0x108,0);
                uVar11 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar4 + -0x108,0);
                /*System.DateTime$$.ctor*/ func_0x02a8c93c(puVar4 + -0x110,uVar33,uVar15,uVar11,0);
                uVar33 = *(undefined8 *)(puVar4 + -0x110);
                if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar33 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar14,uVar33,0);
                *(undefined8 *)(puVar4 + -0x118) = uVar33;
                iVar7 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar4 + -0x118,0);
                dVar36 = (double)(iVar8 * 7);
                while (iVar8 * 7 < iVar7) {
                  uVar33 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar36,puVar4 + -0x110,0);
                  *(undefined8 *)(puVar4 + -0x110) = uVar33;
                  if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar33 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar14,uVar33,0);
                  *(undefined8 *)(puVar4 + -0x118) = uVar33;
                  iVar7 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar4 + -0x118,0);
                }
                uVar33 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar4 + -0x110,0);
                uVar14 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0x110,0);
                uVar15 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0x110,0);
                uVar10 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar10,uVar33,uVar14,uVar15,0);
                uVar33 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar36,puVar4 + -0x110,0);
                *(undefined8 *)(puVar4 + -0x110) = uVar33;
                uVar33 = /*System.DateTime$$get_Day*/ func_0x02a8e298(puVar4 + -0x110,0);
                uVar14 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(puVar4 + -0x110,0);
                uVar15 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(puVar4 + -0x110,0);
                uVar11 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar11,uVar33,uVar14,uVar15,0);
                return uVar10;
              }
            }
          }
        }
      }
    }
  }
  lVar17 = func_0x00f78af4();
  *(ulong *)(puVar4 + -0x100) = uVar10;
  *(long *)(puVar4 + -0xf8) = lVar32;
  *(undefined1 **)(puVar4 + -0xf0) = puVar4 + -0xc0;
  *(undefined **)(puVar4 + -0xe8) = &Atlas_UI_SeasonMetagameData__GetFinishedString;
  if ((bRam0000000003eb4c6b & 1) == 0) {
    func_0x00f78a20(0x3d6c018);
    bRam0000000003eb4c6b = 1;
  }
  lVar32 = *(long *)(lVar17 + 0x28);
  if (lVar32 != 0) {
    *(undefined8 *)(puVar4 + -0xf0) = *(undefined8 *)(puVar4 + -0xf0);
    *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0xe8);
    *(undefined8 *)(puVar4 + -0xf8) = 0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar32,/*STR('EPISODES_NOW')*/ uRam0000000003d6c018,puVar4 + -0xf8);
    return *(ulong *)(puVar4 + -0xf8);
  }
  auVar37 = func_0x00f78af4();
  lVar9 = auVar37._8_8_;
  lVar32 = auVar37._0_8_;
  *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x148) = unaff_x25;
  *(ulong *)(puVar4 + -0x140) = unaff_x24;
  *(ulong *)(puVar4 + -0x138) = unaff_x23;
  *(ulong *)(puVar4 + -0x130) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x128) = uVar33;
  *(undefined8 *)(puVar4 + -0x120) = 0x3eb4000;
  *(long *)(puVar4 + -0x118) = lVar17;
  *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0xf0;
  *(undefined **)(puVar4 + -0x108) = &Atlas_UI_SeasonProgressPanelBehaviour__Init;
  uVar33 = 0x3eb4000;
  if ((bRam0000000003eb4c6c & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d247f8);
    func_0x00f78a20(0x3d790b0);
    func_0x00f78a20(0x3d79118);
    bRam0000000003eb4c6c = 1;
  }
  if (lVar9 == 0) {
code_r0x014f0410:
    puVar35 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
    lVar17 = func_0x00f78af4();
  }
  else {
    lVar17 = *(long *)(lVar9 + 0xd0);
    uVar14 = *(undefined8 *)(lVar9 + 0x20);
    *(long *)(lVar32 + 0x48) = lVar17;
    *(undefined8 *)(lVar32 + 0x50) = uVar14;
    if (lVar17 == 0) goto code_r0x014f0410;
    puVar35 = &UNK_014f031c;
  }
  *(ulong *)(puVar4 + -400) = unaff_x24;
  *(ulong *)(puVar4 + -0x188) = unaff_x23;
  *(ulong *)(puVar4 + -0x180) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x178) = 0x3eb4000;
  *(long *)(puVar4 + -0x170) = lVar9;
  *(long *)(puVar4 + -0x168) = lVar32;
  *(undefined1 **)(puVar4 + -0x160) = puVar4 + -0x110;
  *(undefined **)(puVar4 + -0x158) = puVar35;
  uVar10 = 0x3eb4000;
  if ((bRam0000000003eb4c7b & 1) == 0) {
    func_0x00f78a20(0x3d2dca0);
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c7b = 1;
  }
  if (*(long *)(lVar17 + 0x28) != 0) {
    puVar18 = (undefined8 *)/*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar17 + 0x28),0);
    *(undefined8 *)(puVar4 + -0x198) = *puVar18;
    iVar8 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar4 + -0x198,0);
    uVar10 = 0;
    if (iVar8 == 0) {
code_r0x014f0548:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
      if ((iVar8 != 0) && (*(char *)(lVar17 + 0x20) != '\0')) {
        uVar10 = /*Atlas.Stats.SeasonsManager$$GetSeasonByDateRange*/ func_0x014f22f4(lVar17);
      }
      return uVar10;
    }
    if (*(long *)(lVar17 + 0x28) != 0) {
      lVar32 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar17 + 0x28),0);
      if (*(long *)(lVar32 + 8) != 0) {
        uVar10 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar32 + 8) + 0x30));
        if (*(long *)(lVar17 + 0x28) != 0) {
          lVar32 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar17 + 0x28),0);
          if ((*(long *)(lVar32 + 8) != 0) && (*(long *)(lVar17 + 0x28) != 0)) {
            uVar33 = *(undefined8 *)(*(long *)(lVar32 + 8) + 0x28);
            lVar32 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar17 + 0x28),0);
            if ((*(long *)(lVar32 + 8) != 0) && (*(long *)(lVar17 + 0x28) != 0)) {
              unaff_x22 = (ulong)*(uint *)(*(long *)(lVar32 + 8) + 0x20);
              lVar32 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar17 + 0x28),0);
              if ((*(long *)(lVar32 + 8) != 0) && (*(long *)(lVar17 + 0x28) != 0)) {
                unaff_x23 = (ulong)*(uint *)(*(long *)(lVar32 + 8) + 0x24);
                lVar32 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar17 + 0x28),0);
                if (*(long *)(lVar32 + 8) != 0) {
                  uVar14 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                  uVar10 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar10,unaff_x22,*(undefined8 *)(lVar17 + 0x38),uVar14,
                                           uVar33,unaff_x23);
                  goto code_r0x014f0548;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar32 = func_0x00f78af4();
  *(ulong *)(puVar4 + -0x1d0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x1c8) = uVar33;
  *(ulong *)(puVar4 + -0x1c0) = uVar10;
  *(long *)(puVar4 + -0x1b8) = lVar17;
  *(undefined1 **)(puVar4 + -0x1b0) = puVar4 + -0x160;
  *(undefined **)(puVar4 + -0x1a8) = &Atlas_UI_SeasonProgressPanelBehaviour__SetData;
  uVar33 = 0x3d247f0;
  if ((bRam0000000003eb4c6d & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4c6d = 1;
  }
  lVar17 = *(long *)(lVar32 + 0x48);
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = 0;
  if (lVar17 != 0) {
    unaff_x22 = 0x3d25000;
    uVar14 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar17,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
    uVar33 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar14,*(undefined4 *)(lVar32 + 0x68),0);
    plVar13 = *(long **)(lVar32 + 0x30);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar33,uVar14,0);
    lVar32 = 0;
    if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar13 + 0x558))(plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x560));
      return uVar10;
    }
  }
  lVar17 = func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x1f0) = uVar14;
  *(long *)(puVar4 + -0x1e8) = lVar32;
  *(undefined1 **)(puVar4 + -0x1e0) = puVar4 + -0x1b0;
  *(undefined **)(puVar4 + -0x1d8) = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
  if (*(long *)(lVar17 + 0x78) == 0) {
    lVar32 = func_0x00f78af4();
    *(undefined8 *)(puVar4 + -0x260) = unaff_d9;
    *(undefined8 *)(puVar4 + -600) = unaff_d8;
    *(undefined8 *)(puVar4 + -0x250) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x248) = unaff_x27;
    *(undefined8 *)(puVar4 + -0x240) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x238) = unaff_x25;
    *(ulong *)(puVar4 + -0x230) = unaff_x24;
    *(ulong *)(puVar4 + -0x228) = unaff_x23;
    *(ulong *)(puVar4 + -0x220) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x218) = uVar33;
    *(undefined8 *)(puVar4 + -0x210) = uVar14;
    *(long *)(puVar4 + -0x208) = lVar17;
    *(undefined1 **)(puVar4 + -0x200) = puVar4 + -0x1e0;
    *(undefined **)(puVar4 + -0x1f8) = &Atlas_UI_SeasonProgressPanelBehaviour__AnimateStars;
    uVar33 = 0x3d28ba0;
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
    lVar17 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
    /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar17,0);
    if (lVar17 != 0) {
      unaff_x22 = 0x3d247f0;
      *(long *)(lVar17 + 0x10) = lVar32;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar33 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(lVar32 + 0x60) = uVar33;
      lVar9 = *(long *)(lVar32 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar33 = 0;
      if (lVar9 != 0) {
        uVar33 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar9,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        *(int *)(lVar17 + 0x18) = (int)uVar33;
        if (*(long *)(lVar32 + 0x58) != 0) {
          uVar14 = Atlas_UI_SeasonMetagameData__StarsForSeason();
          uVar6 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar33,uVar14,0);
          *(undefined4 *)(lVar17 + 0x1c) = uVar6;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
          uVar15 = *(undefined8 *)(lVar32 + 0x60);
          uVar33 = *(undefined8 *)(lVar32 + 0x20);
          uVar14 = *(undefined8 *)(lVar32 + 0x28);
          uVar2 = *(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132);
          *(undefined4 *)(puVar4 + -0x264) = uVar6;
          *(long *)(puVar4 + -0x270) = lVar32;
          if (((uVar2 >> 10 & 1) != 0) && (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar18 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          lVar32 = puVar18[1];
          if (lVar32 == 0) {
            uVar2 = *(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132);
            *(undefined8 *)(puVar4 + -0x278) = uVar33;
            if (((uVar2 >> 10 & 1) != 0) && (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar18 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
            }
            uVar33 = *puVar18;
            lVar32 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar32,uVar33,uRam0000000003d63d00,0);
            *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar32;
            uVar33 = *(undefined8 *)(puVar4 + -0x278);
          }
          uVar33 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar14,uVar33,lVar32,0);
          uVar33 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar15,uVar33,0);
          uVar14 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar14,lVar17,uRam0000000003d63d08,0);
          uVar33 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar33,uVar14,0);
          uVar14 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
          /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar14,lVar17,uRam0000000003d63d10,uRam0000000003d2da20);
          uVar15 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
          /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar15,lVar17,uRam0000000003d63d18,uRam0000000003d2dae8);
          lVar32 = *(long *)(puVar4 + -0x270);
          uVar6 = *(undefined4 *)(lVar32 + 0x38);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar6,uVar14,uVar15,*(undefined4 *)(puVar4 + -0x264),0);
          uVar33 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar33,uVar14,0);
          uVar33 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar33,*(undefined4 *)(lVar32 + 0x3c),uRam0000000003d5e7b0);
          uVar14 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar14,lVar17,uRam0000000003d63d20,0);
          uVar10 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar33,uVar14,uRam0000000003d5e740);
          uVar33 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar33,lVar17,uRam0000000003d63d28,0);
          if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
            *(undefined8 *)(uVar10 + 0x80) = uVar33;
          }
          return uVar10;
        }
      }
    }
    uVar10 = func_0x00f78af4();
    *(undefined8 *)(uVar10 + 0x38) = 0x83f000000;
    *(ulong *)(puVar4 + -0x2b0) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x2a8) = uVar33;
    *(undefined8 *)(puVar4 + -0x2a0) = 0x3eb4000;
    *(long *)(puVar4 + -0x298) = lVar32;
    *(undefined1 **)(puVar4 + -0x290) = puVar4 + -0x200;
    *(undefined **)(puVar4 + -0x288) = &Atlas_UI_SeasonProgressPanelBehaviour___ctor;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar10;
  }
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar17 + 0x78),0,0);
  plVar13 = *(long **)(lVar17 + 0x60);
  *(ulong *)(puVar4 + -0x200) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x1f8) = uVar33;
  *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
  *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
  *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
  *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
  if ((bRam0000000003eb5c52 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c52 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
    return /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
  }
  if (plVar13 == (long *)0x0) {
    uVar10 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      uVar10 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return uVar10;
    }
    uVar33 = *(undefined8 *)(puVar4 + -0x200);
    uVar14 = *(undefined8 *)(puVar4 + -0x1f8);
    *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
    *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
    *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
    *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
    if ((bRam0000000003eb5b2e & 1) == 0) {
      func_0x00f78a20(0x3d70738,0);
      bRam0000000003eb5b2e = 1;
    }
    plVar13 = (long *)0x0;
    uVar15 = *(undefined8 *)(puVar4 + -0x1e0);
    uVar31 = *(undefined8 *)(puVar4 + -0x1d8);
    uVar11 = *(undefined8 *)(puVar4 + -0x1f0);
    uVar29 = *(undefined8 *)(puVar4 + -0x1e8);
    plVar12 = /*STR('Null Tween')*/ plRam0000000003d70738;
  }
  else if ((char)plVar13[0x1d] == '\0') {
    uVar10 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      uVar10 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return uVar10;
    }
    uVar33 = *(undefined8 *)(puVar4 + -0x200);
    uVar14 = *(undefined8 *)(puVar4 + -0x1f8);
    *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
    *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
    *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
    *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
    if ((bRam0000000003eb5b2c & 1) == 0) {
      func_0x00f78a20(0x3d74b30,0);
      bRam0000000003eb5b2c = 1;
    }
    plVar13 = (long *)0x0;
    uVar15 = *(undefined8 *)(puVar4 + -0x1e0);
    uVar31 = *(undefined8 *)(puVar4 + -0x1d8);
    uVar11 = *(undefined8 *)(puVar4 + -0x1f0);
    uVar29 = *(undefined8 *)(puVar4 + -0x1e8);
    plVar12 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
  }
  else {
    if (*(char *)((long)plVar13 + 0xe9) == '\0') {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
        *(undefined1 *)(plVar13 + 0x1d) = 0;
        return uVar10;
      }
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      bVar5 = true;
      puVar34 = *(undefined1 **)(puVar4 + -0x1e0);
      puVar35 = *(undefined **)(puVar4 + -0x1d8);
      plVar12 = *(long **)(puVar4 + -0x1f0);
      uVar10 = *(ulong *)(puVar4 + -0x200);
      uVar33 = *(undefined8 *)(puVar4 + -0x1f8);
      puVar3 = puVar4 + -0x1d0;
      plVar30 = *(long **)(puVar4 + -0x1e8);
      while( true ) {
        while( true ) {
          *(ulong *)(puVar3 + -0x40) = unaff_x24;
          *(ulong *)(puVar3 + -0x38) = unaff_x23;
          *(ulong *)(puVar3 + -0x30) = uVar10;
          *(undefined8 *)(puVar3 + -0x28) = uVar33;
          *(long **)(puVar3 + -0x20) = plVar12;
          *(long **)(puVar3 + -0x18) = plVar30;
          *(undefined1 **)(puVar3 + -0x10) = puVar34;
          *(undefined **)(puVar3 + -8) = puVar35;
          puVar34 = puVar3 + -0x10;
          if ((bRam0000000003eb5c68 & 1) == 0) {
            func_0x00f78a20(0x3d3c4d0);
            func_0x00f78a20(0x3d3c4d8);
            func_0x00f78a20(0x3d24878);
            func_0x00f78a20(0x3d404c0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb5c68 = 1;
          }
          if (plVar13 == (long *)0x0) goto code_r0x016bc740;
          if (plVar13[0x11] != 0) {
            /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar13[0x11],plVar13);
          }
          if (bVar5) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar13);
          }
          iVar8 = (int)plVar13[2];
          plVar30 = plVar13;
          if (*(char *)((long)plVar13 + 0x9a) != '\0') break;
          if (iVar8 == 0) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            piVar19 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x3c);
            iVar8 = -1;
            goto code_r0x016bca08;
          }
          if (iVar8 != 1) goto code_r0x016bca14;
          uVar33 = 0x3d25440;
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) =
               *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x40) + -1;
          if (*plVar13 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
          lVar32 = plVar13[0x24];
          if (lVar32 == 0) goto code_r0x016bc740;
          uVar10 = (ulong)*(uint *)(lVar32 + 0x18);
          if ((int)*(uint *)(lVar32 + 0x18) < 1) goto code_r0x016bca14;
          unaff_x23 = 0;
          if (*(int *)(lVar32 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar12 = *(long **)(*(long *)(lVar32 + 0x10) + 0x20);
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          bVar5 = false;
          puVar35 = &UNK_016bc72c;
          puVar3 = puVar3 + -0x40;
          plVar13 = plVar12;
        }
        if (iVar8 == 0) goto code_r0x016bc744;
        if (iVar8 != 1) break;
        uVar33 = 0x3d25440;
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar32 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x58);
        if (lVar32 == 0) goto code_r0x016bc740;
        /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar32,plVar13,uRam0000000003d404c0);
        *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) =
             *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x38) + 1;
        if (*plVar13 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
        lVar32 = plVar13[0x24];
        if (lVar32 == 0) goto code_r0x016bc740;
        uVar10 = (ulong)*(uint *)(lVar32 + 0x18);
        if ((int)*(uint *)(lVar32 + 0x18) < 1) break;
        unaff_x23 = 0;
        if (*(int *)(lVar32 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar12 = *(long **)(*(long *)(lVar32 + 0x10) + 0x20);
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        bVar5 = false;
        puVar35 = &UNK_016bc660;
        puVar3 = puVar3 + -0x40;
        plVar13 = plVar12;
      }
code_r0x016bca14:
      *(undefined1 *)(plVar13 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
      return uVar10;
    }
    uVar10 = /*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      uVar10 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return uVar10;
    }
    *(undefined8 *)(puVar4 + -0x200) = *(undefined8 *)(puVar4 + -0x200);
    *(undefined8 *)(puVar4 + -0x1f8) = *(undefined8 *)(puVar4 + -0x1f8);
    *(undefined8 *)(puVar4 + -0x1f0) = *(undefined8 *)(puVar4 + -0x1f0);
    *(undefined8 *)(puVar4 + -0x1e8) = *(undefined8 *)(puVar4 + -0x1e8);
    *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
    *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
    if ((bRam0000000003eb5b2d & 1) == 0) {
      func_0x00f78a20(0x3d74b40,0);
      bRam0000000003eb5b2d = 1;
    }
    uVar15 = *(undefined8 *)(puVar4 + -0x1e0);
    uVar31 = *(undefined8 *)(puVar4 + -0x1d8);
    uVar11 = *(undefined8 *)(puVar4 + -0x1f0);
    uVar29 = *(undefined8 *)(puVar4 + -0x1e8);
    uVar33 = *(undefined8 *)(puVar4 + -0x200);
    uVar14 = *(undefined8 *)(puVar4 + -0x1f8);
    plVar12 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
  }
  *(ulong *)(puVar4 + -0x210) = unaff_x24;
  *(ulong *)(puVar4 + -0x208) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x200) = uVar33;
  *(undefined8 *)(puVar4 + -0x1f8) = uVar14;
  *(undefined8 *)(puVar4 + -0x1f0) = uVar11;
  *(undefined8 *)(puVar4 + -0x1e8) = uVar29;
  *(undefined8 *)(puVar4 + -0x1e0) = uVar15;
  *(undefined8 *)(puVar4 + -0x1d8) = uVar31;
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
  uVar10 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
  if (plVar12 == (long *)0x0) {
    uVar33 = 0;
  }
  else {
    uVar33 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
  }
  plVar12 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar10,uVar33,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((plVar13 != (long *)0x0) && (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')
     ) {
    lVar17 = plVar13[0x19];
    lVar32 = plVar13[7];
    uVar16 = *(uint *)(plVar13 + 8);
    uVar10 = (ulong)uVar16;
    if ((lVar17 != 0) || ((lVar32 != 0 || (uVar16 != 0xfffffc19)))) {
      if (plVar12 == (long *)0x0) {
        uVar33 = 0;
      }
      else {
        uVar33 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      plVar12 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar33,/*STR('\n')*/ uRam0000000003d65de0,0);
      if (lVar17 != 0) {
        uVar33 = 0;
        if (plVar12 != (long *)0x0) {
          uVar33 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        }
        uVar14 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar13[0x19],0);
        plVar12 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar33,uVar14,0);
      }
      if (lVar32 != 0) {
        uVar33 = 0;
        if (plVar12 != (long *)0x0) {
          uVar33 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        }
        uVar14 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar13[7],0);
        plVar12 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar33,uVar14,0);
      }
      if (uVar16 != 0xfffffc19) {
        uVar33 = 0;
        if (plVar12 != (long *)0x0) {
          uVar33 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        }
        *(int *)(puVar4 + -0x214) = (int)plVar13[8];
        uVar14 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar4 + -0x214);
        uVar14 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar14,0);
        plVar12 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar33,uVar14,0);
      }
    }
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar32 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
  if (lVar32 != 0) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar32 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x28);
      if (lVar32 == 0) {
        lVar32 = func_0x00f78af4();
        *(undefined8 *)(puVar4 + -0x250) = 0x3d20bc0;
        *(ulong *)(puVar4 + -0x248) = uVar10;
        *(long **)(puVar4 + -0x240) = plVar12;
        *(long **)(puVar4 + -0x238) = plVar13;
        *(undefined1 **)(puVar4 + -0x230) = puVar4 + -0x1e0;
        *(undefined **)(puVar4 + -0x228) = &DG_Tweening_Core_DOTweenComponent__Start;
        if ((bRam0000000003eb5b0e & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5b0e = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar33 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ uRam0000000003d20bc0 + 0xb8) + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar33,lVar32,0);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        *(undefined1 *)(lVar32 + 0x2d) = 1;
        uVar33 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar32,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar4 + -0x250) = *(undefined8 *)(puVar4 + -0x250);
        *(undefined8 *)(puVar4 + -0x248) = *(undefined8 *)(puVar4 + -0x248);
        *(undefined8 *)(puVar4 + -0x240) = *(undefined8 *)(puVar4 + -0x240);
        *(undefined8 *)(puVar4 + -0x238) = *(undefined8 *)(puVar4 + -0x238);
        *(undefined8 *)(puVar4 + -0x230) = *(undefined8 *)(puVar4 + -0x230);
        *(undefined8 *)(puVar4 + -0x228) = *(undefined8 *)(puVar4 + -0x228);
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
        uVar10 = (*pcRam0000000003ec0228)(0,uVar33);
        return uVar10;
      }
    }
    uVar10 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar32,2,plVar12,uRam0000000003d35ae8);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar12,0);
  return uVar10;
code_r0x029ca9f4:
  uVar33 = *(undefined8 *)(puVar4 + -0x70);
  uVar11 = *(undefined8 *)(puVar4 + -0x68);
  uVar14 = *(undefined8 *)(puVar4 + -0x80);
  uVar31 = *(undefined8 *)(puVar4 + -0x78);
  uVar15 = *(undefined8 *)(puVar4 + -0x90);
  uVar29 = *(undefined8 *)(puVar4 + -0x88);
  puVar4 = puVar4 + -0x60;
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar8 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar32,lVar17,0);
  goto code_r0x029cabcc;
  while( true ) {
    if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      uVar16 = *(uint *)(lVar32 + 0x84);
    }
    plVar12 = *(long **)(lVar32 + 0x50);
    if (plVar12 != (long *)0x0) break;
code_r0x016bc740:
    func_0x00f78af4();
code_r0x016bc744:
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
    uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    if (*(int *)(lVar32 + 0x84) == -1) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      }
      uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      iVar8 = *(int *)(lVar32 + 8) + -1;
      *(int *)(lVar32 + 0x80) = iVar8;
      *(int *)(lVar32 + 0x84) = iVar8;
    }
    if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    lVar32 = *(long *)(uVar10 + 0xb8);
    uVar16 = *(uint *)(lVar32 + 0x84);
    if (*(int *)(lVar32 + 8) + -1 <= (int)uVar16) {
      if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar16 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x84);
        uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      if ((int)uVar16 < 0) goto code_r0x016bc9e4;
      lVar32 = (ulong)uVar16 * 8 + 0x20;
      while( true ) {
        if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
        }
        plVar12 = *(long **)(*(long *)(uVar10 + 0xb8) + 0x50);
        if (plVar12 == (long *)0x0) goto code_r0x016bc740;
        if (*(uint *)(plVar12 + 3) <= uVar16) goto code_r0x016bca38;
        if (plVar12[(ulong)uVar16 + 4] == 0) break;
        lVar32 = lVar32 + -8;
        bVar5 = (int)uVar16 < 1;
        uVar16 = uVar16 - 1;
        if (bVar5) goto code_r0x016bc9e4;
      }
      if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar12 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8) + 0x50);
        if (plVar12 == (long *)0x0) goto code_r0x016bc740;
      }
      lVar17 = func_0x00f78adc(plVar13,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar17 == 0) goto code_r0x016bca4c;
      if (*(uint *)(plVar12 + 3) <= uVar16) goto code_r0x016bca38;
      *(long **)((long)plVar12 + lVar32) = plVar13;
      lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      if ((int)uVar16 < *(int *)(lVar32 + 0x80)) {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
        }
        uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
        *(uint *)(lVar32 + 0x80) = uVar16;
      }
      if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
      }
      lVar32 = *(long *)(uVar10 + 0xb8);
      iVar8 = *(int *)(lVar32 + 0x80);
      if (*(int *)(lVar32 + 0x84) < iVar8) {
        if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
          iVar8 = *(int *)(lVar32 + 0x80);
          uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
        }
        *(int *)(lVar32 + 0x84) = iVar8;
      }
      goto code_r0x016bc9e4;
    }
  }
  lVar32 = func_0x00f78adc(plVar13,*(undefined8 *)(*plVar12 + 0x40));
  if (lVar32 == 0) goto code_r0x016bca4c;
  if (*(uint *)(plVar12 + 3) <= uVar16 + 1) {
code_r0x016bca38:
    uVar33 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar33,0);
code_r0x016bca44:
      func_0x00f78e5c(plVar13);
code_r0x016bca4c:
      uVar33 = func_0x00f78b14();
    } while( true );
  }
  plVar12[(long)(int)(uVar16 + 1) + 4] = (long)plVar13;
  uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
  iVar8 = *(int *)(lVar32 + 0x84) + 1;
  *(int *)(lVar32 + 0x84) = iVar8;
  if (iVar8 < *(int *)(lVar32 + 0x80)) {
    if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar32 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440 + 0xb8);
      iVar8 = *(int *)(lVar32 + 0x84);
      uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
    }
    *(int *)(lVar32 + 0x80) = iVar8;
  }
code_r0x016bc9e4:
  if (((*(ushort *)(uVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar10 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar10 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ uRam0000000003d25440;
  }
  piVar19 = (int *)(*(long *)(uVar10 + 0xb8) + 0x34);
  iVar8 = 1;
code_r0x016bca08:
  *piVar19 = *piVar19 + iVar8;
  goto code_r0x016bca14;
  while( true ) {
    if (puVar20[1] != puVar25[1]) goto code_r0x029ca930;
    if (puVar20[2] != puVar25[2]) {
      lVar9 = 8;
      goto code_r0x029ca930;
    }
    if (puVar20[3] != puVar25[3]) {
      lVar9 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar20[4] != puVar25[4]) {
      lVar9 = 0x10;
      goto code_r0x029ca930;
    }
    puVar20 = puVar20 + 5;
    puVar25 = puVar25 + 5;
    iVar8 = iVar7 + -10;
    bVar5 = iVar7 < 0x14;
    iVar7 = iVar8;
    if (bVar5) break;
code_r0x029ca858:
    if (*puVar20 != *puVar25) {
      lVar9 = 0;
code_r0x029ca930:
      puVar20 = (uint *)(lVar9 + (long)puVar20);
      puVar25 = (uint *)(lVar9 + (long)puVar25);
      uVar16 = (uint)(ushort)*puVar20 - (uint)(ushort)*puVar25;
      if (uVar16 != 0) {
        return (ulong)uVar16;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar8) {
    iVar8 = iVar8 + 2;
    do {
      if (*puVar20 != *puVar25) {
        uVar16 = (*puVar20 & 0xffff) - (*puVar25 & 0xffff);
        if (uVar16 != 0) {
          return (ulong)uVar16;
        }
code_r0x029ca948:
        uVar16 = (uint)*(ushort *)((long)puVar20 + 2);
        uVar24 = (uint)*(ushort *)((long)puVar25 + 2);
        goto code_r0x029ca950;
      }
      puVar20 = puVar20 + 1;
      puVar25 = puVar25 + 1;
      iVar8 = iVar8 + -2;
    } while (2 < iVar8);
  }
  uVar16 = *(uint *)(lVar32 + 0x10);
  uVar24 = *(uint *)(lVar17 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar16 - uVar24);
  while( true ) {
    lVar9 = lVar9 + -2;
    puVar22 = puVar27 + 1;
    puVar28 = puVar27;
    if (lVar9 == 0) break;
code_r0x029cac24:
    puVar27 = puVar22;
    if (0x7f < *puVar28) goto code_r0x029cac8c;
  }
  if (iVar8 != 0) {
    puVar22 = (ushort *)(lVar17 + 0x16);
    puVar28 = (ushort *)(lVar17 + 0x14);
    do {
      puVar27 = puVar22;
      if (0x7f < *puVar28) goto code_r0x029cac8c;
      lVar21 = lVar21 + -2;
      puVar22 = puVar27 + 1;
      puVar28 = puVar27;
    } while (lVar21 != 0);
  }
code_r0x029cac68:
  iVar8 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar32,lVar17);
code_r0x029cabcc:
  return (ulong)(iVar8 == 0);
}



// ============================================================
// RVA: 0x14effe0 | Atlas.UI.SeasonMetagameData.GetTimeLeftString
// ============================================================

/* WARNING: Possible PIC construction at 0x014f005c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014f0060) */
/* WARNING: Removing unreachable block (ram,0x014f0064) */
/* WARNING: Removing unreachable block (ram,0x014f0088) */
/* WARNING: Removing unreachable block (ram,0x014f0090) */
/* WARNING: Removing unreachable block (ram,0x014f0094) */
/* WARNING: Removing unreachable block (ram,0x014f00d0) */
/* WARNING: Removing unreachable block (ram,0x014f00ec) */
/* WARNING: Removing unreachable block (ram,0x014f00f0) */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

undefined1  [16] Atlas_UI_SeasonMetagameData__GetTimeLeftString(long param_1)

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
  undefined8 uStack_1c8;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  
  if ((bRam0000000003eb4c6a & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7cca0);
    func_0x00f78a20(0x3d6c020);
    bRam0000000003eb4c6a = 1;
  }
  lVar7 = *(long *)(param_1 + 0x50);
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
  }
  if ((bRam0000000003eb4c7f & 1) == 0) {
    func_0x00f78a20(0x3d2dca8);
    bRam0000000003eb4c7f = 1;
  }
  if (*(long *)(lVar7 + 0x28) != 0) {
    lVar8 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar7 + 0x28),0);
    if (*(long *)(lVar8 + 8) != 0) {
      /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar8 + 8) + 0x30));
      if (*(long *)(lVar7 + 0x28) != 0) {
        lVar8 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar7 + 0x28),0);
        if ((*(long *)(lVar8 + 8) != 0) && (*(long *)(lVar7 + 0x28) != 0)) {
          iVar6 = *(int *)(*(long *)(lVar8 + 8) + 0x20);
          lVar8 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar7 + 0x28),0);
          if (*(long *)(lVar8 + 8) != 0) {
            puStack_b8 = (undefined *)/*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
            if (*(long *)(lVar7 + 0x28) != 0) {
              lVar8 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar7 + 0x28),0);
              if (*(long *)(lVar8 + 8) != 0) {
                iVar17 = *(int *)(*(long *)(lVar8 + 8) + 0x24);
                uVar18 = *(undefined8 *)(lVar7 + 0x38);
                if (iVar6 == 3) {
Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange:
                  if ((bRam0000000003eb4c76 & 1) == 0) {
                    func_0x00f78a20(0x3d21060);
                    bRam0000000003eb4c76 = 1;
                  }
                  iVar6 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffff58,0);
                  iVar6 = iVar6 + 1;
                  uVar14 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffff58,0);
                  if (0xc < iVar6) {
                    iVar6 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffff58,0);
                    uVar14 = (ulong)(iVar6 + 1);
                    iVar6 = 1;
                  }
                  uVar18 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffff58,0);
                  uVar10 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffff58,0);
                  auVar30._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(auVar30._0_8_,1,uVar18,uVar10,0);
                  uVar18 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                  /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar18,1,iVar6,uVar14,0);
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
                puStack_c0 = (undefined1 *)0x0;
                uVar10 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&puStack_b8,0);
                uVar11 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&puStack_b8,0);
                uVar12 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&puStack_b8,0);
                /*System.DateTime$$.ctor*/ func_0x02a8c93c(&puStack_c0,uVar10,uVar11,uVar12,0);
                puVar13 = puStack_c0;
                if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lStack_c8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar18,puVar13,0);
                iVar6 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&lStack_c8,0);
                dVar27 = (double)(iVar17 * 7);
                while (iVar17 * 7 < iVar6) {
                  puVar13 = (undefined1 *)/*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar27,&puStack_c0,0);
                  puStack_c0 = puVar13;
                  if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lStack_c8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar18,puVar13,0);
                  iVar6 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&lStack_c8,0);
                }
                uVar18 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&puStack_c0,0);
                uVar10 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&puStack_c0,0);
                uVar11 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&puStack_c0,0);
                auVar28._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(auVar28._0_8_,uVar18,uVar10,uVar11,0);
                puStack_c0 = (undefined1 *)/*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar27,&puStack_c0,0);
                uVar18 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&puStack_c0,0);
                uVar10 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&puStack_c0,0);
                uVar11 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&puStack_c0,0);
                uVar12 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
                /*Atlas.Definitions.Date$$.ctor*/ func_0x01578468(uVar12,uVar18,uVar10,uVar11,0);
                auVar28._8_8_ = uVar12;
                return auVar28;
              }
            }
          }
        }
      }
    }
  }
  lStack_c8 = func_0x00f78af4();
  if ((bRam0000000003eb4c6b & 1) == 0) {
    func_0x00f78a20(0x3d6c018);
    bRam0000000003eb4c6b = 1;
  }
  if (*(long *)(lStack_c8 + 0x28) != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lStack_c8 + 0x28),/*STR('EPISODES_NOW')*/ uRam0000000003d6c018,&stack0xffffffffffffff58);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = extraout_x1_00;
    return auVar1 << 0x40;
  }
  auVar28 = func_0x00f78af4();
  lVar7 = auVar28._8_8_;
  puStack_b8 = &Atlas_UI_SeasonProgressPanelBehaviour__Init;
  uVar18 = 0x3eb4000;
  puStack_c0 = &stack0xffffffffffffff60;
  if ((bRam0000000003eb4c6c & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d247f8);
    func_0x00f78a20(0x3d790b0);
    func_0x00f78a20(0x3d79118);
    bRam0000000003eb4c6c = 1;
  }
  if (lVar7 == 0) {
code_r0x014f0410:
    puVar25 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
    lVar8 = func_0x00f78af4();
  }
  else {
    lVar8 = *(long *)(lVar7 + 0xd0);
    uVar10 = *(undefined8 *)(lVar7 + 0x20);
    *(long *)(auVar28._0_8_ + 0x48) = lVar8;
    *(undefined8 *)(auVar28._0_8_ + 0x50) = uVar10;
    if (lVar8 == 0) goto code_r0x014f0410;
    puVar25 = &UNK_014f031c;
  }
  uVar10 = 0x3eb4000;
  ppuStack_110 = &puStack_c0;
  puStack_108 = puVar25;
  if ((bRam0000000003eb4c7b & 1) == 0) {
    func_0x00f78a20(0x3d2dca0);
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c7b = 1;
  }
  if (*(long *)(lVar8 + 0x28) != 0) {
    puVar19 = (undefined8 *)/*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar8 + 0x28),0);
    uStack_148 = *puVar19;
    iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_148,0);
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
      lVar7 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar8 + 0x28),0);
      if (*(long *)(lVar7 + 8) != 0) {
        uVar10 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar7 + 8) + 0x30));
        if (*(long *)(lVar8 + 0x28) != 0) {
          lVar7 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar8 + 0x28),0);
          if ((*(long *)(lVar7 + 8) != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
            uVar18 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x28);
            lVar7 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar8 + 0x28),0);
            if ((*(long *)(lVar7 + 8) != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
              unaff_x22 = (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x20);
              lVar7 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar8 + 0x28),0);
              if ((*(long *)(lVar7 + 8) != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
                unaff_x23 = (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x24);
                lVar7 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar8 + 0x28),0);
                if (*(long *)(lVar7 + 8) != 0) {
                  uVar11 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                  uVar10 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(uVar10,unaff_x22,*(undefined8 *)(lVar8 + 0x38),uVar11,
                                           uVar18,unaff_x23);
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
  puStack_158 = &Atlas_UI_SeasonProgressPanelBehaviour__SetData;
  ppppuVar24 = &pppuStack_160;
  uVar11 = 0x3d247f0;
  uStack_180 = unaff_x22;
  uStack_178 = uVar18;
  uStack_170 = uVar10;
  lStack_168 = lVar8;
  pppuStack_160 = &ppuStack_110;
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
    plVar9 = (long *)/*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar7,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
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
  puStack_188 = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
  if (*(long *)(lVar7 + 0x78) == 0) {
    lVar7 = func_0x00f78af4();
    uStack_1c8 = uVar11;
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
    /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar8,0);
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
        uVar18 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar23,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
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
      puVar4 = &uStack_180;
      while( true ) {
        while( true ) {
          *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
          *(ulong *)((long)puVar4 + -0x38) = unaff_x23;
          *(ulong *)((long)puVar4 + -0x30) = unaff_x22;
          *(undefined8 *)((long)puVar4 + -0x28) = uVar11;
          *(long **)((long)puVar4 + -0x20) = plVar9;
          *(long **)((long)puVar4 + -0x18) = plVar15;
          *(undefined1 *****)((long)puVar4 + -0x10) = ppppuVar24;
          *(undefined **)((long)puVar4 + -8) = puStack_188;
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
          puStack_188 = &UNK_016bc72c;
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
        puStack_188 = &UNK_016bc660;
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
        uStack_1c8 = CONCAT44((int)plVar21[8],(undefined4)uStack_1c8);
        uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_1c8 + 4);
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
// RVA: 0x14f0248 | Atlas.UI.SeasonMetagameData.GetFinishedString
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

long Atlas_UI_SeasonMetagameData__GetFinishedString(long param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong unaff_x22;
  undefined8 uVar15;
  ulong unaff_x23;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 uVar17;
  undefined1 ****ppppuVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_138;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_b8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4c6b & 1) == 0) {
    func_0x00f78a20(0x3d6c018);
    bRam0000000003eb4c6b = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x28),/*STR('EPISODES_NOW')*/ uRam0000000003d6c018,&stack0xffffffffffffffe8);
    return 0;
  }
  auVar21 = func_0x00f78af4();
  lVar12 = auVar21._8_8_;
  puStack_28 = &Atlas_UI_SeasonProgressPanelBehaviour__Init;
  uVar14 = 0x3eb4000;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c6c & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d247f8);
    func_0x00f78a20(0x3d790b0);
    func_0x00f78a20(0x3d79118);
    bRam0000000003eb4c6c = 1;
  }
  if (lVar12 == 0) {
code_r0x014f0410:
    puVar19 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
    lVar4 = func_0x00f78af4();
  }
  else {
    lVar4 = *(long *)(lVar12 + 0xd0);
    uVar8 = *(undefined8 *)(lVar12 + 0x20);
    *(long *)(auVar21._0_8_ + 0x48) = lVar4;
    *(undefined8 *)(auVar21._0_8_ + 0x50) = uVar8;
    if (lVar4 == 0) goto code_r0x014f0410;
    puVar19 = &UNK_014f031c;
  }
  lVar12 = 0x3eb4000;
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar19;
  if ((bRam0000000003eb4c7b & 1) == 0) {
    func_0x00f78a20(0x3d2dca0);
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c7b = 1;
  }
  if (*(long *)(lVar4 + 0x28) != 0) {
    puVar9 = (undefined8 *)/*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
    uStack_b8 = *puVar9;
    iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_b8,0);
    lVar12 = 0;
    if (iVar2 == 0) {
code_r0x014f0548:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
      if ((iVar2 != 0) && (*(char *)(lVar4 + 0x20) != '\0')) {
        lVar12 = /*Atlas.Stats.SeasonsManager$$GetSeasonByDateRange*/ func_0x014f22f4(lVar4);
      }
      return lVar12;
    }
    if (*(long *)(lVar4 + 0x28) != 0) {
      lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
      if (*(long *)(lVar16 + 8) != 0) {
        lVar12 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x30));
        if (*(long *)(lVar4 + 0x28) != 0) {
          lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
          if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
            uVar14 = *(undefined8 *)(*(long *)(lVar16 + 8) + 0x28);
            lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
            if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
              unaff_x22 = (ulong)*(uint *)(*(long *)(lVar16 + 8) + 0x20);
              lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
              if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
                unaff_x23 = (ulong)*(uint *)(*(long *)(lVar16 + 8) + 0x24);
                lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
                if (*(long *)(lVar16 + 8) != 0) {
                  uVar8 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                  lVar12 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(lVar12,unaff_x22,*(undefined8 *)(lVar4 + 0x38),uVar8,
                                           uVar14,unaff_x23);
                  goto code_r0x014f0548;
                }
              }
            }
          }
        }
      }
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  puStack_c8 = &Atlas_UI_SeasonProgressPanelBehaviour__SetData;
  ppppuVar18 = &pppuStack_d0;
  uVar8 = 0x3d247f0;
  uStack_f0 = unaff_x22;
  uStack_e8 = uVar14;
  lStack_e0 = lVar12;
  lStack_d8 = lVar4;
  pppuStack_d0 = &ppuStack_80;
  if ((bRam0000000003eb4c6d & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4c6d = 1;
  }
  lVar12 = plVar6[9];
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)0x0;
  if (lVar12 != 0) {
    unaff_x22 = 0x3d25000;
    plVar5 = (long *)/*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar12,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
    uVar8 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(plVar5,(int)plVar6[0xd],0);
    plVar11 = (long *)plVar6[6];
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar8,plVar5,0);
    plVar6 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar12 = (**(code **)(*plVar11 + 0x558))(plVar11,uVar14,*(undefined8 *)(*plVar11 + 0x560));
      return lVar12;
    }
  }
  lVar12 = func_0x00f78af4();
  puStack_f8 = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
  if (*(long *)(lVar12 + 0x78) == 0) {
    lVar12 = func_0x00f78af4();
    uStack_138 = uVar8;
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
    lVar4 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
    /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar4,0);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar12;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(lVar12 + 0x60) = uVar14;
      lVar16 = *(long *)(lVar12 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar16 != 0) {
        uVar14 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar16,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        *(int *)(lVar4 + 0x18) = (int)uVar14;
        if (*(long *)(lVar12 + 0x58) != 0) {
          uVar8 = Atlas_UI_SeasonMetagameData__StarsForSeason();
          uVar3 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar14,uVar8,0);
          *(undefined4 *)(lVar4 + 0x1c) = uVar3;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
          uVar15 = *(undefined8 *)(lVar12 + 0x60);
          uVar14 = *(undefined8 *)(lVar12 + 0x20);
          uVar8 = *(undefined8 *)(lVar12 + 0x28);
          if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar9 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          lVar16 = puVar9[1];
          if (lVar16 == 0) {
            if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar9 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
            }
            uVar17 = *puVar9;
            lVar16 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar16,uVar17,uRam0000000003d63d00,0);
            *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar16;
          }
          uVar14 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar8,uVar14,lVar16,0);
          uVar14 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar15,uVar14,0);
          uVar8 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar8,lVar4,uRam0000000003d63d08,0);
          uVar14 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar14,uVar8,0);
          uVar8 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
          /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar8,lVar4,uRam0000000003d63d10,uRam0000000003d2da20);
          uVar15 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
          /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar15,lVar4,uRam0000000003d63d18,uRam0000000003d2dae8);
          uVar20 = *(undefined4 *)(lVar12 + 0x38);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar20,uVar8,uVar15,uVar3,0);
          uVar14 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar14,uVar8,0);
          uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,*(undefined4 *)(lVar12 + 0x3c),uRam0000000003d5e7b0);
          uVar8 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar8,lVar4,uRam0000000003d63d20,0);
          lVar12 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar14,uVar8,uRam0000000003d5e740);
          uVar14 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar14,lVar4,uRam0000000003d63d28,0);
          if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
            *(undefined8 *)(lVar12 + 0x80) = uVar14;
          }
          return lVar12;
        }
      }
    }
    lVar12 = func_0x00f78af4();
    *(undefined8 *)(lVar12 + 0x38) = 0x83f000000;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar12;
  }
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar12 + 0x78),0,0);
  plVar11 = *(long **)(lVar12 + 0x60);
  if ((bRam0000000003eb5c52 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c52 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
    return /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
  }
  if (plVar11 == (long *)0x0) {
    lVar12 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar12 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar12;
    }
    if ((bRam0000000003eb5b2e & 1) == 0) {
      func_0x00f78a20(0x3d70738,0);
      bRam0000000003eb5b2e = 1;
    }
    plVar11 = (long *)0x0;
    plVar6 = /*STR('Null Tween')*/ plRam0000000003d70738;
  }
  else if ((char)plVar11[0x1d] == '\0') {
    lVar12 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar12 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar12;
    }
    if ((bRam0000000003eb5b2c & 1) == 0) {
      func_0x00f78a20(0x3d74b30,0);
      bRam0000000003eb5b2c = 1;
    }
    plVar11 = (long *)0x0;
    plVar6 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
  }
  else {
    if (*(char *)((long)plVar11 + 0xe9) == '\0') {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
        *(undefined1 *)(plVar11 + 0x1d) = 0;
        return lVar12;
      }
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      bVar7 = true;
      puVar1 = &uStack_f0;
      while( true ) {
        while( true ) {
          *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
          *(ulong *)((long)puVar1 + -0x38) = unaff_x23;
          *(ulong *)((long)puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)((long)puVar1 + -0x28) = uVar8;
          *(long **)((long)puVar1 + -0x20) = plVar5;
          *(long **)((long)puVar1 + -0x18) = plVar6;
          *(undefined1 *****)((long)puVar1 + -0x10) = ppppuVar18;
          *(undefined **)((long)puVar1 + -8) = puStack_f8;
          ppppuVar18 = (undefined1 ****)((long)puVar1 + -0x10);
          if ((bRam0000000003eb5c68 & 1) == 0) {
            func_0x00f78a20(0x3d3c4d0);
            func_0x00f78a20(0x3d3c4d8);
            func_0x00f78a20(0x3d24878);
            func_0x00f78a20(0x3d404c0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb5c68 = 1;
          }
          if (plVar11 == (long *)0x0) goto code_r0x016bc740;
          if (plVar11[0x11] != 0) {
            /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar11[0x11],plVar11);
          }
          if (bVar7) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar11);
          }
          iVar2 = (int)plVar11[2];
          plVar6 = plVar11;
          if (*(char *)((long)plVar11 + 0x9a) != '\0') break;
          if (iVar2 == 0) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            piVar10 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x3c);
            iVar2 = -1;
            goto code_r0x016bca08;
          }
          if (iVar2 != 1) goto code_r0x016bca14;
          uVar8 = 0x3d25440;
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) =
               *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) + -1;
          if (*plVar11 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
          lVar12 = plVar11[0x24];
          if (lVar12 == 0) goto code_r0x016bc740;
          unaff_x22 = (ulong)*(uint *)(lVar12 + 0x18);
          if ((int)*(uint *)(lVar12 + 0x18) < 1) goto code_r0x016bca14;
          unaff_x23 = 0;
          if (*(int *)(lVar12 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar5 = *(long **)(*(long *)(lVar12 + 0x10) + 0x20);
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          bVar7 = false;
          puStack_f8 = &UNK_016bc72c;
          puVar1 = (ulong *)((long)puVar1 + -0x40);
          plVar11 = plVar5;
        }
        if (iVar2 == 0) goto code_r0x016bc744;
        if (iVar2 != 1) break;
        uVar8 = 0x3d25440;
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x58);
        if (lVar12 == 0) goto code_r0x016bc740;
        /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar12,plVar11,uRam0000000003d404c0);
        *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) =
             *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) + 1;
        if (*plVar11 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
        lVar12 = plVar11[0x24];
        if (lVar12 == 0) goto code_r0x016bc740;
        unaff_x22 = (ulong)*(uint *)(lVar12 + 0x18);
        if ((int)*(uint *)(lVar12 + 0x18) < 1) break;
        unaff_x23 = 0;
        if (*(int *)(lVar12 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar5 = *(long **)(*(long *)(lVar12 + 0x10) + 0x20);
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        bVar7 = false;
        puStack_f8 = &UNK_016bc660;
        puVar1 = (ulong *)((long)puVar1 + -0x40);
        plVar11 = plVar5;
      }
code_r0x016bca14:
      *(undefined1 *)(plVar11 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar12 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      return lVar12;
    }
    lVar12 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar12 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar12;
    }
    plVar6 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    if ((bRam0000000003eb5b2d & 1) == 0) {
      func_0x00f78a20(0x3d74b40,0);
      bRam0000000003eb5b2d = 1;
      plVar6 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
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
  uVar14 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
  if (plVar6 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
  plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar14,uVar8,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((plVar11 != (long *)0x0) && (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')
     ) {
    lVar16 = plVar11[0x19];
    lVar4 = plVar11[7];
    lVar12 = plVar11[8];
    if ((lVar16 != 0) || ((lVar4 != 0 || ((int)lVar12 != -999)))) {
      if (plVar6 == (long *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar14,/*STR('\n')*/ uRam0000000003d65de0,0);
      if (lVar16 != 0) {
        uVar14 = 0;
        if (plVar6 != (long *)0x0) {
          uVar14 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar8 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar11[0x19],0);
        plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar14,uVar8,0);
      }
      if (lVar4 != 0) {
        uVar14 = 0;
        if (plVar6 != (long *)0x0) {
          uVar14 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar8 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar11[7],0);
        plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar14,uVar8,0);
      }
      if ((int)lVar12 != -999) {
        uVar14 = 0;
        if (plVar6 != (long *)0x0) {
          uVar14 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uStack_138 = CONCAT44((int)plVar11[8],(undefined4)uStack_138);
        uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_138 + 4);
        uVar8 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar8,0);
        plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar14,uVar8,0);
      }
    }
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
  if (lVar12 != 0) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar12 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
      if (lVar12 == 0) {
        lVar12 = func_0x00f78af4();
        if ((bRam0000000003eb5b0e & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5b0e = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,lVar12,0);
        if ((int)lVar4 == 0) {
          return lVar4;
        }
        *(undefined1 *)(lVar12 + 0x2d) = 1;
        uVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0);
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
        lVar12 = (*pcRam0000000003ec0228)(0,uVar14);
        return lVar12;
      }
    }
    lVar12 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar12,2,plVar6,uRam0000000003d35ae8);
    if ((int)lVar12 == 0) {
      return lVar12;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar6,0);
  return lVar12;
  while( true ) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      uVar13 = *(uint *)(lVar4 + 0x84);
    }
    plVar6 = *(long **)(lVar4 + 0x50);
    if (plVar6 != (long *)0x0) break;
code_r0x016bc740:
    func_0x00f78af4();
code_r0x016bc744:
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
    lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    if (*(int *)(lVar4 + 0x84) == -1) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      }
      lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      iVar2 = *(int *)(lVar4 + 8) + -1;
      *(int *)(lVar4 + 0x80) = iVar2;
      *(int *)(lVar4 + 0x84) = iVar2;
    }
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    lVar4 = *(long *)(lVar12 + 0xb8);
    uVar13 = *(uint *)(lVar4 + 0x84);
    if (*(int *)(lVar4 + 8) + -1 <= (int)uVar13) {
      if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar13 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x84);
        lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      if ((int)uVar13 < 0) goto code_r0x016bc9e4;
      lVar4 = (ulong)uVar13 * 8 + 0x20;
      while( true ) {
        if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        plVar6 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x50);
        if (plVar6 == (long *)0x0) goto code_r0x016bc740;
        if (*(uint *)(plVar6 + 3) <= uVar13) goto code_r0x016bca38;
        if (plVar6[(ulong)uVar13 + 4] == 0) break;
        lVar4 = lVar4 + -8;
        bVar7 = (int)uVar13 < 1;
        uVar13 = uVar13 - 1;
        if (bVar7) goto code_r0x016bc9e4;
      }
      if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar6 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x50);
        if (plVar6 == (long *)0x0) goto code_r0x016bc740;
      }
      lVar12 = func_0x00f78adc(plVar11,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar12 == 0) goto code_r0x016bca4c;
      if (*(uint *)(plVar6 + 3) <= uVar13) goto code_r0x016bca38;
      *(long **)((long)plVar6 + lVar4) = plVar11;
      lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if ((int)uVar13 < *(int *)(lVar4 + 0x80)) {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
        }
        lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        *(uint *)(lVar4 + 0x80) = uVar13;
      }
      if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      lVar4 = *(long *)(lVar12 + 0xb8);
      iVar2 = *(int *)(lVar4 + 0x80);
      if (*(int *)(lVar4 + 0x84) < iVar2) {
        if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
          iVar2 = *(int *)(lVar4 + 0x80);
          lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        *(int *)(lVar4 + 0x84) = iVar2;
      }
      goto code_r0x016bc9e4;
    }
  }
  lVar12 = func_0x00f78adc(plVar11,*(undefined8 *)(*plVar6 + 0x40));
  if (lVar12 == 0) goto code_r0x016bca4c;
  if (*(uint *)(plVar6 + 3) <= uVar13 + 1) {
code_r0x016bca38:
    uVar14 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar14,0);
code_r0x016bca44:
      func_0x00f78e5c(plVar11);
code_r0x016bca4c:
      uVar14 = func_0x00f78b14();
    } while( true );
  }
  plVar6[(long)(int)(uVar13 + 1) + 4] = (long)plVar11;
  lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
  iVar2 = *(int *)(lVar4 + 0x84) + 1;
  *(int *)(lVar4 + 0x84) = iVar2;
  if (iVar2 < *(int *)(lVar4 + 0x80)) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar4 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      iVar2 = *(int *)(lVar4 + 0x84);
      lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    *(int *)(lVar4 + 0x80) = iVar2;
  }
code_r0x016bc9e4:
  if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar12 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  }
  piVar10 = (int *)(*(long *)(lVar12 + 0xb8) + 0x34);
  iVar2 = 1;
code_r0x016bca08:
  *piVar10 = *piVar10 + iVar2;
  goto code_r0x016bca14;
}



