// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeagueModeUIManager

// ============================================================
// RVA: 0x147d678 | Atlas.League.LeagueModeUIManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x147d840 | Atlas.League.LeagueModeUIManager.ShowLeagueWeeklySchedule
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x147da34 | Atlas.League.LeagueModeUIManager.LeagueDaySelected
// ============================================================

/* WARNING: Possible PIC construction at 0x0147dd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x0147dd28) */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__LeagueDaySelected
                  (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined8 uVar18;
  ulong uVar19;
  dword *pdVar20;
  int iVar16;
  dword *pdVar21;
  long lVar22;
  undefined8 *puVar23;
  int iVar17;
  long *extraout_x1;
  dword *pdVar24;
  long *plVar25;
  dword *pdVar26;
  dword *pdVar27;
  long lVar28;
  long lVar29;
  int *piVar30;
  uint uVar31;
  dword *pdVar32;
  dword *pdVar33;
  long lVar34;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar35;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar36;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar37;
  undefined *puVar38;
  undefined4 extraout_s0;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  long lStack_e0;
  dword *pdStack_d8;
  dword *pdStack_d0;
  long lStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb48cf & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572d0);
    func_0x00f78a20(0x3d71920);
    func_0x00f78a20(0x3d6f370);
    bRam0000000003eb48cf = 1;
  }
  lVar34 = *(long *)(param_1 + 0x10);
  if ((lVar34 != 0) && (lVar28 = *(long *)(lVar34 + 0x18), lVar28 != 0)) {
    *(undefined8 *)(lVar28 + 0x18) = param_2;
    *(undefined8 *)(lVar28 + 0x20) = param_3;
    *(undefined4 *)(lVar28 + 0x10) = 9;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_3,0);
    *(undefined8 *)(lVar34 + 0x30) = uVar18;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar34 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar34 != 0)) {
      uVar19 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar34 + 0x18),/*STR('RaceGameContext')*/ lRam0000000003d71920,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar34 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
        uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('LeagueMode')*/ uRam0000000003d6f370,0);
        if (lVar34 != 0) {
          lVar34 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar34,uVar18,uRam0000000003d572d0);
          if ((uVar19 & 1) == 0) {
            if ((lVar34 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
              lVar34 = *(long *)(lVar34 + 0x28);
              pdVar20 = (dword *)Atlas_League_LeagueManager__GetCurrentLeagueDefinition
                                           (*(long *)(param_1 + 0x50),0);
              if ((pdVar20 != (dword *)0x0) && (lVar34 != 0)) {
                puVar23 = (undefined8 *)(pdVar20 + 0x14);
                goto LAB_0147dba0;
              }
            }
          }
          else if ((lVar34 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
            lVar34 = *(long *)(lVar34 + 0x20);
            pdVar20 = (dword *)Atlas_League_LeagueManager__GetCurrentLeagueDefinition
                                         (*(long *)(param_1 + 0x50),0);
            if ((pdVar20 != (dword *)0x0) && (lVar34 != 0)) {
              puVar23 = (undefined8 *)(pdVar20 + 0x12);
LAB_0147dba0:
              *(undefined8 *)(lVar34 + 0x68) = *puVar23;
              if ((*(long *)(param_1 + 0x10) != 0) &&
                 (lVar28 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar28 != 0)) {
                *(long *)(lVar28 + 0x70) = lVar34;
                return pdVar20;
              }
            }
          }
        }
      }
    }
  }
  auVar41 = func_0x00f78af4();
  lVar28 = auVar41._0_8_;
  puVar23 = (undefined8 *)&stack0xffffffffffffff90;
  puStack_38 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardPostEvent;
  lVar34 = 0x3d27e58;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48d0 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e28);
    func_0x00f78a20(0x3d27e30);
    func_0x00f78a20(0x3d63588);
    func_0x00f78a20(0x3d27e58);
    bRam0000000003eb48d0 = 1;
  }
  pdVar20 = (dword *)func_0x00f78aec(/*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d27e58);
  /*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0$$.ctor*/ func_0x0155bc64(pdVar20,0);
  if (pdVar20 == (dword *)0x0) {
code_r0x0147dd40:
    pdVar33 = pdVar20;
    lVar28 = func_0x00f78af4();
    puStack_78 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardWithBackButton;
    pppppppuStack_80 = &ppppppuStack_40;
    if ((bRam0000000003eb48d1 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d59ee0);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d1 = 1;
    }
    pdVar21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar21,0);
    pdVar20 = (dword *)0x3d27e30;
    lVar22 = lVar34;
    uVar18 = unaff_x23;
    if (pdVar21 != (dword *)0x0) {
      lVar29 = *(long *)(lVar28 + 0x20);
      lVar2 = *(long *)(lVar28 + 0x28);
      *(long *)(pdVar21 + 6) = 0;
      *(long *)(pdVar21 + 8) = lVar2;
      if (lVar29 != 0) {
        *(long *)(pdVar21 + 4) = *(long *)(lVar29 + 0x10);
        pdVar20 = *(dword **)(lVar28 + 0x38);
        lVar22 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar22,lVar28,uRam0000000003d59ee0,0);
        uVar18 = 0x3d59000;
        if (pdVar20 != (dword *)0x0) {
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(pdVar20,0,lVar22,0);
          pdVar32 = *(dword **)(lVar28 + 0x30);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar28 = 0;
          uVar18 = 0x3d1feb8;
          if (pdVar32 != (dword *)0x0) {
            pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
            puVar23 = (undefined8 *)&stack0xffffffffffffff90;
            pppppppuVar37 = pppppppuStack_80;
            puVar38 = puStack_78;
            goto code_r0x0147079c;
          }
        }
      }
    }
    unaff_x23 = uVar18;
    lVar34 = lVar22;
    pdVar33 = pdVar20;
    lVar22 = func_0x00f78af4();
    puStack_b8 = &Atlas_League_LeagueModeUIManager__DoPodiumSequence;
    uVar18 = 0x3eb4000;
    lStack_e0 = lVar34;
    pdStack_d8 = pdVar33;
    pdStack_d0 = pdVar21;
    lStack_c8 = lVar28;
    pppppppuStack_c0 = &pppppppuStack_80;
    if ((bRam0000000003eb48d2 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e68);
      func_0x00f78a20(0x3d59ef8);
      func_0x00f78a20(0x3d27e78);
      bRam0000000003eb48d2 = 1;
    }
    if ((*(long *)(lVar22 + 0x28) == 0) ||
       (lVar28 = *(long *)(*(long *)(lVar22 + 0x28) + 0x80), lVar28 == 0)) {
      puVar38 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
      lVar28 = func_0x00f78af4();
    }
    else {
      uVar18 = 0x3d27000;
      pdVar33 = (dword *)0x3d27000;
      lVar34 = 0x3d59000;
      puVar38 = &UNK_0147df04;
    }
    uStack_140 = uVar18;
    lStack_138 = lVar22;
    pppppppuStack_130 = &pppppppuStack_c0;
    puStack_128 = puVar38;
    if ((bRam0000000003eb493a & 1) == 0) {
      func_0x00f78a20(0x3d3d470);
      bRam0000000003eb493a = 1;
    }
    pdVar20 = *(dword **)(lVar28 + 0x18);
    if (pdVar20 != (dword *)0x0) {
      pdVar21 = pdVar20;
      if (0 < (int)pdVar20[6]) {
        pdVar21 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar20 + 4),0,pdVar20[6],0);
        pdVar20[6] = 0;
      }
      pdVar20[7] = pdVar20[7] + 1;
      return pdVar21;
    }
    lVar29 = func_0x00f78af4();
    puStack_148 = &Atlas_League_LeagueModeUIManager__ShowPromotion;
    lVar22 = 0x3d59f00;
    pppppppuStack_150 = &pppppppuStack_130;
    if ((bRam0000000003eb48d3 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e88);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d27e90);
      bRam0000000003eb48d3 = 1;
    }
    pdVar21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
    Atlas_UI_Screens_LeaguePromotionScreen_TransitionData___ctor(pdVar21,0);
    pdVar20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
    Atlas_UI_Screens_LeaguePromotionScreen_ContinueSelected___ctor
              (pdVar20,lVar29,uRam0000000003d59f00,0);
    if (pdVar21 != (dword *)0x0) {
      *(dword **)(pdVar21 + 4) = pdVar20;
      if (*(long *)(lVar29 + 0x38) != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar29 + 0x38),0,0,0);
        pdVar32 = *(dword **)(lVar29 + 0x30);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar29 = 0;
        pdVar20 = (dword *)0x3d1feb8;
        if (pdVar32 != (dword *)0x0) {
          pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
          auVar41._8_8_ = 0x3eb4000;
          auVar41._0_8_ = lVar28;
          puVar23 = &uStack_140;
          pppppppuVar37 = pppppppuStack_150;
          puVar38 = puStack_148;
          goto code_r0x0147079c;
        }
      }
    }
    pdVar33 = pdVar20;
    auVar41._8_8_ = pdVar21;
    auVar41._0_8_ = lVar29;
    lVar34 = func_0x00f78af4();
    puVar23 = (undefined8 *)&stack0xfffffffffffffe40;
    puStack_188 = &Atlas_League_LeagueModeUIManager__ShowReward;
    pdVar20 = (dword *)0x3eb4000;
    pppppppuStack_190 = &pppppppuStack_150;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    lVar28 = lVar34;
    pdVar26 = pdVar33;
    unaff_x23 = 0x3d27e90;
    if (*(long *)(lVar34 + 0x50) == 0) {
code_r0x0147e318:
      pdVar33 = pdVar26;
      lVar34 = func_0x00f78af4();
      lVar29 = lVar28;
      pdVar21 = pdVar20;
      pppppppuVar37 = &pppppppuStack_190;
      puVar38 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
    }
    else {
      pdVar20 = (dword *)Atlas_League_LeagueManager__GetUnlockedRewardOrNull
                                   (*(long *)(lVar34 + 0x50),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar17 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar20,uVar18,0);
      if (iVar17 != 0) {
        pdVar21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar21,0);
        lVar22 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor
                  (lVar22,lVar34,uRam0000000003d59f08,0);
        pdVar26 = pdVar21;
        unaff_x23 = 0x3d21270;
        if (pdVar21 != (dword *)0x0) {
          *(long *)(pdVar21 + 4) = lVar22;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar20,0);
          *(long *)(pdVar21 + 0xc) = lVar28;
          pdVar32 = *(dword **)(lVar34 + 0x30);
          *(long *)(pdVar21 + 0xe) = *(long *)(lVar34 + 0x28);
          *(undefined1 *)(pdVar21 + 0x10) = 1;
          pdVar20 = (dword *)0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar28 = 0;
          unaff_x23 = 0x3d21270;
          if (pdVar32 != (dword *)0x0) {
            pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            lVar34 = 0x3d59f00;
            puVar23 = (undefined8 *)&stack0xfffffffffffffe80;
            unaff_x23 = 0x3d27e90;
            pppppppuVar37 = pppppppuStack_190;
            puVar38 = puStack_188;
            goto code_r0x0147079c;
          }
        }
        goto code_r0x0147e318;
      }
      lVar22 = 0x3d59f00;
      puVar23 = (undefined8 *)&stack0xfffffffffffffe80;
      unaff_x23 = 0x3d27e90;
      pppppppuVar37 = pppppppuStack_190;
      puVar38 = puStack_188;
    }
    *(long *)((long)puVar23 + -0x30) = lVar22;
    *(dword **)((long)puVar23 + -0x28) = pdVar33;
    *(dword **)((long)puVar23 + -0x20) = pdVar21;
    *(long *)((long)puVar23 + -0x18) = lVar29;
    *(undefined8 ********)((long)puVar23 + -0x10) = pppppppuVar37;
    *(undefined **)((long)puVar23 + -8) = puVar38;
    puVar36 = (undefined1 *)((long)puVar23 + -0x10);
    pdVar21 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    lVar28 = lVar34;
    if (*(long *)(lVar34 + 0x50) == 0) {
code_r0x0147e554:
      puVar38 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      lVar34 = func_0x00f78af4();
      puVar23 = (undefined8 *)((long)puVar23 + -0x30);
    }
    else {
      iVar17 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(lVar34 + 0x50),0);
      if (iVar17 == 0) {
        pdVar21 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar21,0);
        if (pdVar21 != (dword *)0x0) {
          pdVar21[4] = 9;
          *(long *)(pdVar21 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          pdVar33 = *(dword **)(lVar34 + 0x60);
          if (pdVar33 != (dword *)0x0) {
            uVar18 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(pdVar33,0);
            uVar15 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(pdVar33,uVar18,0);
            pdVar33[0x10] = uVar15;
            if (*(long *)(lVar34 + 0x50) != 0) {
              pdVar33 = *(dword **)(lVar34 + 0x58);
              lVar22 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(lVar34 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (pdVar33 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(pdVar33,lVar22,uVar18,*(undefined8 *)(lVar34 + 0x40),pdVar21,0);
                if (*(long *)(lVar34 + 0x50) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(lVar34 + 0x50),0);
                  if (*(long *)(lVar34 + 0x38) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar34 + 0x38),0,0,0);
                    pdVar21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar21,0);
                    pdVar33 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (pdVar33,lVar34,uRam0000000003d59f00,0);
                    if (pdVar21 != (dword *)0x0) {
                      *(dword **)(pdVar21 + 4) = pdVar33;
                      *(undefined1 *)((long)pdVar21 + 0x19) = 1;
                      pdVar32 = *(dword **)(lVar34 + 0x30);
                      pdVar33 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar28 = 0;
                      if (pdVar32 != (dword *)0x0) {
                        pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        pppppppuVar37 = *(undefined8 ********)((long)puVar23 + -0x10);
                        puVar38 = *(undefined **)((long)puVar23 + -8);
                        auVar41._8_8_ = *(undefined8 *)((long)puVar23 + -0x20);
                        auVar41._0_8_ = *(undefined8 *)((long)puVar23 + -0x18);
                        lVar34 = *(long *)((long)puVar23 + -0x30);
                        pdVar33 = *(dword **)((long)puVar23 + -0x28);
                        goto code_r0x0147079c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar36 = *(undefined1 **)((long)puVar23 + -0x10);
      puVar38 = *(undefined **)((long)puVar23 + -8);
      pdVar21 = *(dword **)((long)puVar23 + -0x20);
      lVar28 = *(long *)((long)puVar23 + -0x18);
      lVar22 = *(long *)((long)puVar23 + -0x30);
      pdVar33 = *(dword **)((long)puVar23 + -0x28);
    }
    *(undefined8 *)((long)puVar23 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar23 + -0x38) = unaff_x23;
    *(long *)((long)puVar23 + -0x30) = lVar22;
    *(dword **)((long)puVar23 + -0x28) = pdVar33;
    *(dword **)((long)puVar23 + -0x20) = pdVar21;
    *(long *)((long)puVar23 + -0x18) = lVar28;
    *(undefined1 **)((long)puVar23 + -0x10) = puVar36;
    *(undefined **)((long)puVar23 + -8) = puVar38;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar21,0);
    lVar28 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar28,lVar34,uRam0000000003d59ed8,0);
    if (pdVar21 == (dword *)0x0) {
code_r0x0147e694:
      pdVar20 = (dword *)func_0x00f78af4();
      return pdVar20;
    }
    *(long *)(pdVar21 + 6) = lVar28;
    if (*(long *)(lVar34 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar21 + 4) = *(long *)(*(long *)(lVar34 + 0x20) + 0x10);
    *(long *)(pdVar21 + 8) = *(long *)(lVar34 + 0x28);
    *(undefined1 *)(pdVar21 + 10) = 1;
    if (*(long *)(lVar34 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar34 + 0x38),0,0,0);
    pdVar32 = *(dword **)(lVar34 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar32 == (dword *)0x0) goto code_r0x0147e694;
    pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    pppppppuVar37 = *(undefined8 ********)((long)puVar23 + -0x10);
    puVar38 = *(undefined **)((long)puVar23 + -8);
    auVar41._8_8_ = *(undefined8 *)((long)puVar23 + -0x20);
    auVar41._0_8_ = *(undefined8 *)((long)puVar23 + -0x18);
    lVar34 = *(long *)((long)puVar23 + -0x30);
    pdVar33 = *(dword **)((long)puVar23 + -0x28);
    unaff_x24 = *(undefined8 *)((long)puVar23 + -0x40);
    unaff_x23 = *(undefined8 *)((long)puVar23 + -0x38);
  }
  else {
    unaff_x23 = 0x3d63000;
    *(undefined1 (*) [16])(pdVar20 + 4) = auVar41;
    pdVar21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    auVar7._8_8_ = pdVar21;
    auVar7._0_8_ = lVar28;
    auVar6._8_8_ = pdVar21;
    auVar6._0_8_ = lVar28;
    auVar41._8_8_ = pdVar21;
    auVar41._0_8_ = lVar28;
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar21,0);
    lVar34 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar34,pdVar20,uRam0000000003d63588,0);
    if (pdVar21 == (dword *)0x0) goto code_r0x0147dd40;
    *(long *)(pdVar21 + 6) = lVar34;
    auVar41 = auVar6;
    if (*(long *)(lVar28 + 0x20) == 0) goto code_r0x0147dd40;
    *(long *)(pdVar21 + 4) = *(long *)(*(long *)(lVar28 + 0x20) + 0x10);
    *(long *)(pdVar21 + 8) = *(long *)(lVar28 + 0x28);
    auVar41 = auVar7;
    if (*(long *)(lVar28 + 0x38) == 0) goto code_r0x0147dd40;
    pdVar33 = (dword *)0x3d1feb8;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar28 + 0x38),0,0,0);
    pdVar32 = *(dword **)(lVar28 + 0x30);
    auVar41._0_8_ = pdVar32;
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar20 = (dword *)0x3d1feb8;
    if (pdVar32 == (dword *)0x0) goto code_r0x0147dd40;
    pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    pppppppuVar37 = &ppppppuStack_40;
    puVar38 = &UNK_0147dd28;
  }
code_r0x0147079c:
  uVar18 = 0;
  pdVar26 = (dword *)0x0;
  *(undefined8 *)((long)puVar23 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar23 + -0x38) = unaff_x23;
  *(long *)((long)puVar23 + -0x30) = lVar34;
  *(dword **)((long)puVar23 + -0x28) = pdVar33;
  *(long *)((long)puVar23 + -0x20) = auVar41._8_8_;
  *(long *)((long)puVar23 + -0x18) = auVar41._0_8_;
  *(undefined8 ********)((long)puVar23 + -0x10) = pppppppuVar37;
  *(undefined **)((long)puVar23 + -8) = puVar38;
  puVar36 = (undefined1 *)((long)puVar23 + -0x10);
  pdVar33 = (dword *)0x0;
  pdVar27 = pdVar21;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)puVar23 + -0x48) = 0;
  lVar34 = *(long *)(pdVar32 + 4);
  if (lVar34 != 0) {
    pdVar26 = (dword *)0x0;
    uVar18 = 0;
    puVar38 = &UNK_01470820;
    pdVar24 = pdVar20;
    pdVar27 = pdVar21;
code_r0x02f87f38:
    *(undefined8 *)((long)puVar23 + -0x90) = unaff_x24;
    *(undefined8 *)((long)puVar23 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)puVar23 + -0x80) = 0;
    *(dword **)((long)puVar23 + -0x78) = pdVar21;
    *(dword **)((long)puVar23 + -0x70) = pdVar32;
    *(dword **)((long)puVar23 + -0x68) = pdVar20;
    *(undefined1 **)((long)puVar23 + -0x60) = puVar36;
    *(undefined **)((long)puVar23 + -0x58) = puVar38;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)puVar23 + -0x130) = unaff_x26;
    *(undefined8 *)((long)puVar23 + -0x128) = unaff_x25;
    *(undefined8 *)((long)puVar23 + -0x120) = 0x3ebc000;
    *(dword **)((long)puVar23 + -0x118) = pdVar24;
    *(dword **)((long)puVar23 + -0x110) = pdVar27;
    *(undefined8 *)((long)puVar23 + -0x108) = uVar18;
    *(long *)((long)puVar23 + -0x100) = lVar34;
    *(dword **)((long)puVar23 + -0xf8) = pdVar26;
    *(undefined1 **)((long)puVar23 + -0xf0) = (undefined1 *)((long)puVar23 + -0x60);
    *(undefined **)((long)puVar23 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar28 = *(long *)(lVar34 + 0x78);
    if (lVar28 != 0) {
      iVar17 = *(int *)(lVar28 + 0x18);
      if (iVar17 < 1) {
        return (dword *)0x0;
      }
      iVar16 = 1;
      pdVar20 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar28 + 0x18) <= iVar16 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar28 = *(long *)(*(long *)(lVar28 + 0x10) + (long)(int)(iVar16 - 1U) * 0x20 + 0x20);
        if (lVar28 == 0) break;
        uVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar28,pdVar24,5,0);
        if ((uVar19 & 1) != 0) {
          return pdVar20;
        }
        pdVar20 = (dword *)(ulong)(iVar16 < iVar17);
        if (iVar17 == iVar16) {
          return pdVar20;
        }
        lVar28 = *(long *)(lVar34 + 0x78);
        iVar16 = iVar16 + 1;
      } while (lVar28 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar41 = func_0x00f78af4();
  pdVar24 = auVar41._8_8_;
  *(undefined1 **)((long)puVar23 + -0x60) = puVar36;
  *(undefined **)((long)puVar23 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar34 = *(long *)(auVar41._0_8_ + 0x10);
  if (lVar34 != 0) {
    puVar36 = *(undefined1 **)((long)puVar23 + -0x60);
    puVar38 = *(undefined **)((long)puVar23 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar41 = func_0x00f78af4();
  uVar18 = auVar41._8_8_;
  *(undefined1 **)((long)puVar23 + -0x70) = (undefined1 *)((long)puVar23 + -0x60);
  *(undefined **)((long)puVar23 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar34 = *(long *)(auVar41._0_8_ + 0x10);
  if (lVar34 != 0) {
    pdVar26 = (dword *)0x0;
    *(undefined8 *)((long)puVar23 + -0x90) = 0;
    *(dword **)((long)puVar23 + -0x88) = pdVar21;
    *(dword **)((long)puVar23 + -0x80) = pdVar32;
    *(dword **)((long)puVar23 + -0x78) = pdVar20;
    *(undefined8 *)((long)puVar23 + -0x70) = *(undefined8 *)((long)puVar23 + -0x70);
    *(undefined8 *)((long)puVar23 + -0x68) = *(undefined8 *)((long)puVar23 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar28 = *(long *)(lVar34 + 0x70);
    if (lVar28 != 0) {
      lVar22 = lVar28;
      if (*(uint *)(lVar28 + 0x18) <= auVar41._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar22 = *(long *)(lVar34 + 0x70);
      }
      if (lVar22 != 0) {
        lVar28 = *(long *)(lVar28 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
        uVar40 = *(undefined8 *)(lVar28 + 0x28);
        uVar39 = *(undefined8 *)(lVar28 + 0x20);
        uVar15 = *(undefined4 *)(lVar28 + 0x42);
        *(undefined4 *)((long)puVar23 + -0xd8) = uVar15;
        uVar5 = *(undefined2 *)(lVar28 + 0x46);
        *(undefined2 *)((long)puVar23 + -0xd4) = uVar5;
        *(undefined8 *)((long)puVar23 + -200) = uVar40;
        *(undefined8 *)((long)puVar23 + -0xd0) = uVar39;
        *(undefined8 *)((long)puVar23 + -0xb8) = uVar40;
        *(undefined8 *)((long)puVar23 + -0xc0) = uVar39;
        *(undefined8 *)((long)puVar23 + -0xb0) = 0;
        *(undefined8 *)((long)puVar23 + -0xa8) = 0;
        *(undefined2 *)((long)puVar23 + -0xa0) = 1;
        *(undefined4 *)((long)puVar23 + -0x9e) = uVar15;
        *(undefined2 *)((long)puVar23 + -0x9a) = uVar5;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar18,(undefined1 *)((long)puVar23 + -0xc0),uRam0000000003d3ddd0);
        pdVar20 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar34,uVar18);
        return pdVar20;
      }
    }
    auVar41 = func_0x00f78af4();
    pdVar24 = auVar41._8_8_;
    puVar13 = (undefined1 *)((long)puVar23 + -0x110);
    *(undefined8 *)((long)puVar23 + -0x110) = 0;
    *(long *)((long)puVar23 + -0x108) = lVar28;
    *(long *)((long)puVar23 + -0x100) = lVar34;
    *(undefined8 *)((long)puVar23 + -0xf8) = uVar18;
    *(undefined1 **)((long)puVar23 + -0xf0) = (undefined1 *)((long)puVar23 + -0x70);
    *(undefined **)((long)puVar23 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar36 = (undefined1 *)((long)puVar23 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar34 = *(long *)(auVar41._0_8_ + 0x70);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= auVar41._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 + 0x28);
      if (lVar34 == 0) {
        pdVar20 = (dword *)0x0;
      }
      else {
        pdVar20 = *(dword **)(lVar34 + 0x40);
      }
      return pdVar20;
    }
    puVar38 = &Core_UI2_UIScreen__ForceExit;
    pdVar20 = (dword *)func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar21 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar41 = func_0x00f78af4();
  pdVar24 = auVar41._8_8_;
  *(undefined1 **)((long)puVar23 + -0x80) = (undefined1 *)((long)puVar23 + -0x70);
  *(undefined **)((long)puVar23 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar34 = *(long *)(auVar41._0_8_ + 0x10);
  auVar42._8_8_ = pdVar21;
  auVar42._0_8_ = lVar34;
  if (lVar34 != 0) {
    pdVar26 = (dword *)0x0;
    puVar8 = (undefined1 *)((long)puVar23 + -0x70);
    puVar36 = *(undefined1 **)((long)puVar23 + -0x80);
    puVar38 = *(undefined **)((long)puVar23 + -0x78);
    pdVar21 = pdVar32;
    goto code_r0x02f877a8;
  }
  auVar41 = func_0x00f78af4();
  *(undefined1 **)((long)puVar23 + -0x90) = (undefined1 *)((long)puVar23 + -0x80);
  *(undefined **)((long)puVar23 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar34 = *(long *)(auVar41._0_8_ + 0x10);
  auVar42._8_8_ = auVar41._8_8_;
  auVar42._0_8_ = lVar34;
  if (lVar34 != 0) {
    puVar9 = (undefined1 *)((long)puVar23 + -0x80);
    puVar36 = *(undefined1 **)((long)puVar23 + -0x90);
    puVar38 = *(undefined **)((long)puVar23 + -0x88);
    pdVar24 = pdVar26;
    while( true ) {
      puVar8 = puVar9 + -0x30;
      *(dword **)(puVar9 + -0x30) = pdVar33;
      *(dword **)(puVar9 + -0x28) = pdVar21;
      *(dword **)(puVar9 + -0x20) = pdVar32;
      *(dword **)(puVar9 + -0x18) = pdVar20;
      *(undefined1 **)(puVar9 + -0x10) = puVar36;
      *(undefined **)(puVar9 + -8) = puVar38;
      puVar36 = puVar9 + -0x10;
      puVar38 = &UNK_02f883d8;
      pdVar26 = pdVar24;
      pdVar20 = pdVar27;
      pdVar21 = pdVar24;
      pdVar33 = auVar42._0_8_;
code_r0x02f877a8:
      pdVar32 = auVar42._0_8_;
      puVar13 = puVar8 + -0x60;
      *(dword **)(puVar8 + -0x30) = pdVar33;
      *(long *)(puVar8 + -0x28) = auVar42._8_8_;
      *(dword **)(puVar8 + -0x20) = pdVar21;
      *(dword **)(puVar8 + -0x18) = pdVar20;
      *(undefined1 **)(puVar8 + -0x10) = puVar36;
      *(undefined **)(puVar8 + -8) = puVar38;
      puVar36 = puVar8 + -0x10;
      pdVar20 = pdVar32;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar20 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar31 = (uint)pdVar24;
      if (((int)uVar31 < 0) || ((int)*(long *)(pdVar32 + 0x14) <= (int)uVar31)) {
        return pdVar20;
      }
      lVar34 = *(long *)(pdVar32 + 0x1c);
      if (lVar34 == 0) break;
      if (*(uint *)(lVar34 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(lVar34 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
      pdVar33 = *(dword **)(lVar34 + 0x20);
      pdVar20 = *(dword **)(lVar34 + 0x28);
      *(undefined4 *)(puVar8 + -0x60) = *(undefined4 *)(lVar34 + 0x42);
      *(undefined2 *)(puVar8 + -0x5c) = *(undefined2 *)(lVar34 + 0x46);
      if (pdVar20 == (dword *)0x0) {
        lVar34 = *(long *)(pdVar32 + 0x1c);
        if (lVar34 != 0) {
          *(dword **)(puVar8 + -0x58) = pdVar33;
          *(undefined8 *)(puVar8 + -0x50) = 0;
          *(undefined8 *)(puVar8 + -0x48) = 0;
          *(undefined8 *)(puVar8 + -0x40) = 0;
          *(undefined2 *)(puVar8 + -0x38) = 0;
          *(undefined4 *)(puVar8 + -0x36) = *(undefined4 *)(puVar8 + -0x60);
          *(undefined2 *)(puVar8 + -0x32) = *(undefined2 *)(puVar8 + -0x5c);
          pdVar20 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar34,pdVar24,puVar8 + -0x58,uRam0000000003d3ddd0);
          return pdVar20;
        }
        break;
      }
      puVar38 = &UNK_02f87848;
      pdVar21 = pdVar20;
code_r0x02f882d8:
      *(dword **)(puVar13 + -0x20) = pdVar32;
      *(dword **)(puVar13 + -0x18) = pdVar24;
      *(undefined1 **)(puVar13 + -0x10) = puVar36;
      *(undefined **)(puVar13 + -8) = puVar38;
      (**(code **)(*(long *)pdVar20 + 0x218))(pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x220));
      if (*(long *)(pdVar20 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar20 + 10),0);
        pdVar20[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar20,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar20 = (dword *)(**(code **)(*(long *)pdVar20 + 0x228))
                                     (pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x230));
        return pdVar20;
      }
      func_0x00f78af4();
      puVar9 = puVar13 + -0x40;
      *(dword **)(puVar13 + -0x40) = pdVar32;
      *(dword **)(puVar13 + -0x38) = pdVar20;
      *(undefined1 **)(puVar13 + -0x30) = puVar13 + -0x10;
      *(undefined **)(puVar13 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar36 = puVar13 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar34 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar18 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar18,lVar34);
        pdVar20 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar20;
      }
      puVar38 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar42 = func_0x00f78af4();
      pdVar24 = pdVar26;
    }
    lVar34 = func_0x00f78af4();
    *(undefined8 *)(puVar8 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar8 + -0x98) = unaff_d8;
    *(dword **)(puVar8 + -0x90) = pdVar33;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(dword **)(puVar8 + -0x80) = pdVar32;
    *(dword **)(puVar8 + -0x78) = pdVar24;
    *(undefined1 **)(puVar8 + -0x70) = puVar36;
    *(undefined **)(puVar8 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar18 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar18,0);
    if (0 < *(int *)(lVar34 + 0x50)) {
      iVar17 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar34,iVar17);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar34,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(lVar34 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar34);
    *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0x80);
    *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0x78);
    *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x70);
    *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar20 = (dword *)(*pcRam0000000003ec05a0)(uVar18);
    return pdVar20;
  }
  auVar41 = func_0x00f78af4();
  *(undefined1 **)((long)puVar23 + -0xa0) = (undefined1 *)((long)puVar23 + -0x90);
  *(undefined **)((long)puVar23 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar34 = *(long *)(auVar41._0_8_ + 0x10);
  if (lVar34 == 0) {
    auVar41 = func_0x00f78af4();
    *(undefined1 **)((long)puVar23 + -0xb0) = (undefined1 *)((long)puVar23 + -0xa0);
    *(undefined **)((long)puVar23 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar34 = *(long *)(auVar41._0_8_ + 0x10);
    auVar43._8_8_ = auVar41._8_8_;
    auVar43._0_8_ = lVar34;
    if (lVar34 != 0) {
      pdVar27 = (dword *)0x0;
      puVar10 = (undefined1 *)((long)puVar23 + -0xa0);
      puVar36 = *(undefined1 **)((long)puVar23 + -0xb0);
      puVar38 = *(undefined **)((long)puVar23 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar41 = func_0x00f78af4();
    *(undefined1 **)((long)puVar23 + -0xc0) = (undefined1 *)((long)puVar23 + -0xb0);
    *(undefined **)((long)puVar23 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar34 = *(long *)(auVar41._0_8_ + 0x10);
    auVar44._8_8_ = auVar41._8_8_;
    auVar44._0_8_ = lVar34;
    if (lVar34 == 0) {
      auVar41 = func_0x00f78af4();
      *(undefined1 **)((long)puVar23 + -0xd0) = (undefined1 *)((long)puVar23 + -0xc0);
      *(undefined **)((long)puVar23 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar34 = *(long *)(auVar41._0_8_ + 0x10);
      auVar45._8_8_ = auVar41._8_8_;
      auVar45._0_8_ = lVar34;
      if (lVar34 == 0) {
        pdVar33 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)puVar23 + -0x100) = 0;
        *(dword **)((long)puVar23 + -0xf8) = pdVar21;
        *(dword **)((long)puVar23 + -0xf0) = pdVar32;
        *(dword **)((long)puVar23 + -0xe8) = pdVar20;
        *(undefined1 **)((long)puVar23 + -0xe0) = (undefined1 *)((long)puVar23 + -0xd0);
        *(undefined **)((long)puVar23 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar18 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar18,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar33 + 0xc) = uVar18;
        return pdVar33;
      }
      puVar12 = (undefined1 *)((long)puVar23 + -0xc0);
      puVar36 = *(undefined1 **)((long)puVar23 + -0xd0);
      puVar38 = *(undefined **)((long)puVar23 + -200);
      goto code_r0x02f88674;
    }
    puVar11 = (undefined1 *)((long)puVar23 + -0xb0);
    puVar36 = *(undefined1 **)((long)puVar23 + -0xc0);
    puVar38 = *(undefined **)((long)puVar23 + -0xb8);
    pdVar27 = pdVar26;
    pdVar33 = pdVar21;
  }
  else {
    pdVar27 = (dword *)0x0;
    puVar10 = (undefined1 *)((long)puVar23 + -0xc0);
    *(undefined8 *)((long)puVar23 + -0xc0) = 0;
    *(dword **)((long)puVar23 + -0xb8) = pdVar21;
    *(dword **)((long)puVar23 + -0xb0) = pdVar32;
    *(dword **)((long)puVar23 + -0xa8) = pdVar20;
    *(undefined8 *)((long)puVar23 + -0xa0) = *(undefined8 *)((long)puVar23 + -0xa0);
    *(undefined8 *)((long)puVar23 + -0x98) = *(undefined8 *)((long)puVar23 + -0x98);
    puVar36 = (undefined1 *)((long)puVar23 + -0xa0);
    pdVar21 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar31 = auVar41._8_4_;
    if (((int)uVar31 < 0) || (*(int *)(lVar34 + 0x50) <= (int)uVar31)) {
      return (dword *)0x0;
    }
    lVar34 = *(long *)(lVar34 + 0x70);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar28 = *(long *)(lVar34 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
      lVar34 = *(long *)(lVar28 + 0x28);
      cVar3 = *(char *)(lVar28 + 0x40);
      iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar28 + 0x30),0);
      if (iVar17 == 0 || cVar3 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar34 != 0) && (*(int *)(lVar34 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar38 = &Core_UI2_UIManager__GetLayerState;
    auVar43 = func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar20 = auVar41._8_8_;
code_r0x02f884dc:
    puVar11 = puVar10 + -0x30;
    *(undefined8 *)(puVar10 + -0x30) = 0;
    *(dword **)(puVar10 + -0x28) = pdVar21;
    *(dword **)(puVar10 + -0x20) = pdVar32;
    *(dword **)(puVar10 + -0x18) = pdVar20;
    *(undefined1 **)(puVar10 + -0x10) = puVar36;
    *(undefined **)(puVar10 + -8) = puVar38;
    puVar36 = puVar10 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar34 = *(long *)(auVar43._0_8_ + 0x70);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= auVar43._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 + 0x28);
      if (lVar34 == 0) {
        pdVar20 = &MACH_HEADER.cputype;
      }
      else {
        pdVar20 = (dword *)(ulong)*(uint *)(lVar34 + 0x4c);
      }
      return pdVar20;
    }
    puVar38 = &Core_UI2_UIManager__EnableInput;
    auVar44 = func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar20 = auVar43._8_8_;
    pdVar33 = (dword *)0x3ebc000;
  }
  pdVar24 = auVar44._8_8_;
  pdVar21 = auVar44._0_8_;
  puVar12 = puVar11 + -0x40;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar11 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar11 + -0x30) = 0;
  *(dword **)(puVar11 + -0x28) = pdVar33;
  *(dword **)(puVar11 + -0x20) = pdVar32;
  *(dword **)(puVar11 + -0x18) = pdVar20;
  *(undefined1 **)(puVar11 + -0x10) = puVar36;
  *(undefined **)(puVar11 + -8) = puVar38;
  puVar36 = puVar11 + -0x10;
  pdVar33 = (dword *)0x3ebc000;
  pdVar26 = pdVar27;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar21 + 0x1a) != 0) {
    pdVar26 = (dword *)(ulong)((uint)pdVar27 ^ 1);
    pdVar20 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar21 + 0x1a),pdVar24,pdVar26,0);
    lVar34 = *(long *)(pdVar21 + 0x1c);
    pdVar33 = (dword *)0x0;
    if (lVar34 != 0) {
      uVar31 = auVar44._8_4_;
      if (*(uint *)(lVar34 + 0x18) <= uVar31) {
        pdVar20 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) ||
         (pdVar33 = *(dword **)(pdVar21 + 0xc), pdVar33 == (dword *)0x0)) {
        return pdVar20;
      }
      lVar34 = *(long *)(pdVar21 + 0x1c);
      pdVar21 = (dword *)0x0;
      if (lVar34 != 0) {
        if (*(uint *)(lVar34 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar25 = *(long **)(*(long *)(lVar34 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
        *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
        *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
        *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
        *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
        *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
        *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        *(dword **)(puVar11 + -0x68) = pdVar33;
        lVar34 = *(long *)(pdVar33 + 0x1a);
        if (lVar34 == 0) {
          puVar36 = puVar11 + -0x68;
          lVar28 = 1;
        }
        else {
          lVar28 = *(long *)(lVar34 + 0x18);
          if (lVar28 == 0) {
            return pdVar33;
          }
          puVar36 = (undefined1 *)(lVar34 + 0x20);
        }
        lVar34 = 0;
        do {
          lVar22 = *(long *)(puVar36 + lVar34 * 8);
          pcVar35 = *(code **)(lVar22 + 0x10);
          plVar1 = *(long **)(lVar22 + 0x20);
          lVar22 = *(long *)(lVar22 + 0x28);
          if (*(short *)(lVar22 + 0x48) == -1) {
            func_0x00f78ad8(lVar22);
          }
          iVar17 = func_0x00f78a4c(lVar22);
          bVar14 = *(char *)(lVar22 + 0x4a) == '\x03';
          if (iVar17 == 0) {
            if (bVar14) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar20 = (dword *)(*pcVar35)(plVar25,pdVar24,pdVar27,lVar22);
              }
              else {
                if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar33 + 6) == 0)) goto code_r0x01e71aac;
                iVar17 = func_0x00f78a44(lVar22);
                iVar16 = func_0x00f78ec0(lVar22);
                if (iVar17 == 0) {
                  uVar4 = *(ushort *)(lVar22 + 0x48);
                  if (iVar16 == 0) {
                    lVar22 = *plVar1 + (ulong)uVar4 * 0x10;
                    pdVar20 = (dword *)(**(code **)(lVar22 + 0x138))
                                                 (plVar1,plVar25,pdVar24,pdVar27,
                                                  *(undefined8 *)(lVar22 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar22 = func_0x00f78a48(lVar22);
                  lVar29 = *plVar1;
                  uVar19 = (ulong)*(ushort *)(lVar29 + 0x12a);
                  if (uVar19 != 0) {
                    piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == lVar22) {
                        puVar23 = (undefined8 *)
                                  (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar30 = piVar30 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  puVar23 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar4);
code_r0x01e71d74:
                  pcVar35 = (code *)*puVar23;
                  puVar23 = (undefined8 *)puVar23[1];
                }
                else {
                  if (iVar16 == 0) {
                    uVar18 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar29 = *plVar1;
                    uVar19 = (ulong)*(ushort *)(lVar29 + 0x12a);
                    if (uVar19 != 0) {
                      piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                          lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar30 = piVar30 + 4;
                        uVar19 = uVar19 - 1;
                      } while (uVar19 != 0);
                    }
                    lVar29 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar18 = *(undefined8 *)(lVar29 + 8);
                  }
                  puVar23 = (undefined8 *)func_0x00f78acc(uVar18,lVar22);
                  pcVar35 = (code *)*puVar23;
                }
                pdVar20 = (dword *)(*pcVar35)(plVar1,plVar25,pdVar24,pdVar27,puVar23);
              }
            }
            else {
              if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar33 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar17 = func_0x00f78a44(lVar22);
              iVar16 = func_0x00f78ec0(lVar22);
              if (iVar17 == 0) {
                uVar4 = *(ushort *)(lVar22 + 0x48);
                if (iVar16 == 0) {
                  lVar22 = *plVar25 + (ulong)uVar4 * 0x10;
                  pdVar20 = (dword *)(**(code **)(lVar22 + 0x138))
                                               (plVar25,pdVar24,pdVar27,
                                                *(undefined8 *)(lVar22 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar22 = func_0x00f78a48(lVar22);
                lVar29 = *plVar25;
                uVar19 = (ulong)*(ushort *)(lVar29 + 0x12a);
                if (uVar19 != 0) {
                  piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == lVar22) {
                      puVar23 = (undefined8 *)
                                (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar30 = piVar30 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                puVar23 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar4);
code_r0x01e71d00:
                pcVar35 = (code *)*puVar23;
                puVar23 = (undefined8 *)puVar23[1];
              }
              else {
                if (iVar16 == 0) {
                  uVar18 = *(undefined8 *)
                            (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar29 = *plVar25;
                  uVar19 = (ulong)*(ushort *)(lVar29 + 0x12a);
                  if (uVar19 != 0) {
                    piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                        lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar30 = piVar30 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  lVar29 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                  uVar18 = *(undefined8 *)(lVar29 + 8);
                }
                puVar23 = (undefined8 *)func_0x00f78acc(uVar18,lVar22);
                pcVar35 = (code *)*puVar23;
              }
              pdVar20 = (dword *)(*pcVar35)(plVar25,pdVar24,pdVar27,puVar23);
            }
          }
          else {
            if (bVar14) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar20 = (dword *)(*pcVar35)(plVar1,plVar25,pdVar24,pdVar27,lVar22);
          }
code_r0x01e71bd0:
          lVar34 = lVar34 + 1;
          if (lVar34 == lVar28) {
            return pdVar20;
          }
        } while( true );
      }
    }
  }
  puVar38 = &Core_UI2_UIManager__SetScreenVisible;
  auVar45 = func_0x00f78af4();
  pdVar20 = pdVar27;
  pdVar32 = pdVar24;
code_r0x02f88674:
  pdVar27 = auVar45._0_8_;
  *(dword **)(puVar12 + -0x30) = pdVar33;
  *(dword **)(puVar12 + -0x28) = pdVar21;
  *(dword **)(puVar12 + -0x20) = pdVar32;
  *(dword **)(puVar12 + -0x18) = pdVar20;
  *(undefined1 **)(puVar12 + -0x10) = puVar36;
  *(undefined **)(puVar12 + -8) = puVar38;
  pdVar20 = pdVar27;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar20 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar34 = *(long *)(pdVar27 + 0x1c);
  if (lVar34 != 0) {
    uVar31 = auVar45._8_4_;
    if (*(uint *)(lVar34 + 0x18) <= uVar31) {
      pdVar20 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) {
      return pdVar20;
    }
    lVar34 = *(long *)(pdVar27 + 0x1c);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
      if ((lVar34 != 0) && (plVar25 = *(long **)(lVar34 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar20 = (dword *)(**(code **)(*plVar25 + 0x178))
                                     (plVar25,pdVar26,*(undefined8 *)(*plVar25 + 0x180));
        return pdVar20;
      }
    }
  }
  auVar41 = func_0x00f78af4();
  uVar18 = auVar41._0_8_;
  *(long *)(puVar12 + -0x50) = auVar45._8_8_;
  *(dword **)(puVar12 + -0x48) = pdVar26;
  *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar12 + -0x68) = 0;
  *(undefined8 *)(puVar12 + -0x70) = 0;
  *(undefined8 *)(puVar12 + -0x58) = 0;
  *(undefined8 *)(puVar12 + -0x60) = 0;
  pdVar20 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar18,auVar41._8_8_,puVar12 + -0x70);
  if ((int)pdVar20 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar18,*(undefined8 *)(puVar12 + -0x60),*(undefined8 *)(puVar12 + -0x58));
    *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x68);
    *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x70);
    *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x58);
    *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x60);
    pdVar20 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar18,puVar12 + -0x90,1);
  }
  return pdVar20;
}



// ============================================================
// RVA: 0x147dbd0 | Atlas.League.LeagueModeUIManager.ShowLeaderboardPostEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x0147dd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x0147dd28) */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__ShowLeaderboardPostEvent(dword *param_1,dword *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  dword *pdVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  dword *pdVar22;
  long *extraout_x1;
  dword *pdVar23;
  long *plVar24;
  dword *pdVar25;
  dword *pdVar26;
  undefined8 uVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  dword *pdVar31;
  dword *pdVar32;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar33;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar34;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar35;
  undefined *puVar36;
  undefined4 extraout_s0;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  long lStack_b0;
  dword *pdStack_a8;
  dword *pdStack_a0;
  long lStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  puVar20 = (undefined8 *)&stack0xffffffffffffffc0;
  lVar17 = 0x3d27e58;
  if ((bRam0000000003eb48d0 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e28);
    func_0x00f78a20(0x3d27e30);
    func_0x00f78a20(0x3d63588);
    func_0x00f78a20(0x3d27e58);
    bRam0000000003eb48d0 = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d27e58);
  /*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0$$.ctor*/ func_0x0155bc64(pdVar16,0);
  if (pdVar16 == (dword *)0x0) {
LAB_0147dd40:
    pdVar32 = pdVar16;
    lVar18 = func_0x00f78af4();
    puStack_48 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardWithBackButton;
    pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48d1 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d59ee0);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d1 = 1;
    }
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar16,0);
    pdVar22 = (dword *)0x3d27e30;
    lVar19 = lVar17;
    uVar27 = unaff_x23;
    if (pdVar16 != (dword *)0x0) {
      lVar28 = *(long *)(lVar18 + 0x20);
      lVar2 = *(long *)(lVar18 + 0x28);
      *(long *)(pdVar16 + 6) = 0;
      *(long *)(pdVar16 + 8) = lVar2;
      if (lVar28 != 0) {
        *(long *)(pdVar16 + 4) = *(long *)(lVar28 + 0x10);
        pdVar22 = *(dword **)(lVar18 + 0x38);
        lVar19 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar19,lVar18,uRam0000000003d59ee0,0);
        uVar27 = 0x3d59000;
        if (pdVar22 != (dword *)0x0) {
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(pdVar22,0,lVar19,0);
          pdVar31 = *(dword **)(lVar18 + 0x30);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar18 = 0;
          uVar27 = 0x3d1feb8;
          if (pdVar31 != (dword *)0x0) {
            pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
            puVar20 = (undefined8 *)&stack0xffffffffffffffc0;
            pppppppuVar35 = pppppppuStack_50;
            puVar36 = puStack_48;
            goto code_r0x0147079c;
          }
        }
      }
    }
    unaff_x23 = uVar27;
    lVar17 = lVar19;
    pdVar32 = pdVar22;
    lVar19 = func_0x00f78af4();
    puStack_88 = &Atlas_League_LeagueModeUIManager__DoPodiumSequence;
    uVar27 = 0x3eb4000;
    lStack_b0 = lVar17;
    pdStack_a8 = pdVar32;
    pdStack_a0 = pdVar16;
    lStack_98 = lVar18;
    pppppppuStack_90 = &pppppppuStack_50;
    if ((bRam0000000003eb48d2 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e68);
      func_0x00f78a20(0x3d59ef8);
      func_0x00f78a20(0x3d27e78);
      bRam0000000003eb48d2 = 1;
    }
    if ((*(long *)(lVar19 + 0x28) == 0) ||
       (param_1 = *(dword **)(*(long *)(lVar19 + 0x28) + 0x80), param_1 == (dword *)0x0)) {
      puVar36 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
      param_1 = (dword *)func_0x00f78af4();
    }
    else {
      uVar27 = 0x3d27000;
      pdVar32 = (dword *)0x3d27000;
      lVar17 = 0x3d59000;
      puVar36 = &UNK_0147df04;
    }
    uStack_110 = uVar27;
    lStack_108 = lVar19;
    pppppppuStack_100 = &pppppppuStack_90;
    puStack_f8 = puVar36;
    if ((bRam0000000003eb493a & 1) == 0) {
      func_0x00f78a20(0x3d3d470);
      bRam0000000003eb493a = 1;
    }
    pdVar16 = *(dword **)(param_1 + 6);
    if (pdVar16 != (dword *)0x0) {
      pdVar32 = pdVar16;
      if (0 < (int)pdVar16[6]) {
        pdVar32 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar16 + 4),0,pdVar16[6],0);
        pdVar16[6] = 0;
      }
      pdVar16[7] = pdVar16[7] + 1;
      return pdVar32;
    }
    pdVar16 = (dword *)func_0x00f78af4();
    puStack_118 = &Atlas_League_LeagueModeUIManager__ShowPromotion;
    lVar18 = 0x3d59f00;
    pppppppuStack_120 = &pppppppuStack_100;
    if ((bRam0000000003eb48d3 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e88);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d27e90);
      bRam0000000003eb48d3 = 1;
    }
    param_2 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
    Atlas_UI_Screens_LeaguePromotionScreen_TransitionData___ctor(param_2,0);
    pdVar22 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
    Atlas_UI_Screens_LeaguePromotionScreen_ContinueSelected___ctor
              (pdVar22,pdVar16,uRam0000000003d59f00,0);
    if (param_2 != (dword *)0x0) {
      *(dword **)(param_2 + 4) = pdVar22;
      if (*(long *)(pdVar16 + 0xe) != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(pdVar16 + 0xe),0,0,0);
        pdVar31 = *(dword **)(pdVar16 + 0xc);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar16 = (dword *)0x0;
        pdVar22 = (dword *)0x3d1feb8;
        if (pdVar31 != (dword *)0x0) {
          pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
          puVar20 = &uStack_110;
          pdVar16 = param_2;
          param_2 = (dword *)0x3eb4000;
          pppppppuVar35 = pppppppuStack_120;
          puVar36 = puStack_118;
          goto code_r0x0147079c;
        }
      }
    }
    pdVar32 = pdVar22;
    param_1 = pdVar16;
    pdVar25 = (dword *)func_0x00f78af4();
    puVar20 = (undefined8 *)&stack0xfffffffffffffe70;
    puStack_158 = &Atlas_League_LeagueModeUIManager__ShowReward;
    pdVar22 = (dword *)0x3eb4000;
    pppppppuStack_160 = &pppppppuStack_120;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    pdVar26 = pdVar25;
    pdVar16 = pdVar32;
    unaff_x23 = 0x3d27e90;
    if (*(long *)(pdVar25 + 0x14) == 0) {
code_r0x0147e318:
      pdVar32 = pdVar16;
      pdVar25 = (dword *)func_0x00f78af4();
      param_1 = pdVar26;
      param_2 = pdVar22;
      pppppppuVar35 = &pppppppuStack_160;
      puVar36 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
    }
    else {
      pdVar22 = (dword *)Atlas_League_LeagueManager__GetUnlockedRewardOrNull
                                   (*(long *)(pdVar25 + 0x14),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar27 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar15 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar22,uVar27,0);
      if (iVar15 != 0) {
        pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar16,0);
        lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor
                  (lVar18,pdVar25,uRam0000000003d59f08,0);
        unaff_x23 = 0x3d21270;
        if (pdVar16 != (dword *)0x0) {
          *(long *)(pdVar16 + 4) = lVar18;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar22,0);
          *(long *)(pdVar16 + 0xc) = lVar17;
          pdVar31 = *(dword **)(pdVar25 + 0xc);
          *(long *)(pdVar16 + 0xe) = *(long *)(pdVar25 + 10);
          *(undefined1 *)(pdVar16 + 0x10) = 1;
          pdVar22 = (dword *)0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          pdVar26 = (dword *)0x0;
          unaff_x23 = 0x3d21270;
          if (pdVar31 != (dword *)0x0) {
            pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            lVar17 = 0x3d59f00;
            puVar20 = (undefined8 *)&stack0xfffffffffffffeb0;
            unaff_x23 = 0x3d27e90;
            pppppppuVar35 = pppppppuStack_160;
            puVar36 = puStack_158;
            goto code_r0x0147079c;
          }
        }
        goto code_r0x0147e318;
      }
      lVar18 = 0x3d59f00;
      puVar20 = (undefined8 *)&stack0xfffffffffffffeb0;
      unaff_x23 = 0x3d27e90;
      pppppppuVar35 = pppppppuStack_160;
      puVar36 = puStack_158;
    }
    *(long *)((long)puVar20 + -0x30) = lVar18;
    *(dword **)((long)puVar20 + -0x28) = pdVar32;
    *(dword **)((long)puVar20 + -0x20) = param_2;
    *(dword **)((long)puVar20 + -0x18) = param_1;
    *(undefined8 ********)((long)puVar20 + -0x10) = pppppppuVar35;
    *(undefined **)((long)puVar20 + -8) = puVar36;
    puVar34 = (undefined1 *)((long)puVar20 + -0x10);
    pdVar16 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    pdVar22 = pdVar25;
    if (*(long *)(pdVar25 + 0x14) == 0) {
code_r0x0147e554:
      puVar36 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      pdVar25 = (dword *)func_0x00f78af4();
      puVar20 = (undefined8 *)((long)puVar20 + -0x30);
    }
    else {
      iVar15 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(pdVar25 + 0x14),0);
      if (iVar15 == 0) {
        pdVar16 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar16,0);
        if (pdVar16 != (dword *)0x0) {
          pdVar16[4] = 9;
          *(long *)(pdVar16 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          pdVar32 = *(dword **)(pdVar25 + 0x18);
          if (pdVar32 != (dword *)0x0) {
            uVar27 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(pdVar32,0);
            uVar13 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(pdVar32,uVar27,0);
            pdVar32[0x10] = uVar13;
            if (*(long *)(pdVar25 + 0x14) != 0) {
              pdVar32 = *(dword **)(pdVar25 + 0x16);
              lVar18 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(pdVar25 + 0x14),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar27 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (pdVar32 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(pdVar32,lVar18,uVar27,*(long *)(pdVar25 + 0x10),pdVar16,0);
                if (*(long *)(pdVar25 + 0x14) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(pdVar25 + 0x14),0);
                  if (*(long *)(pdVar25 + 0xe) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(pdVar25 + 0xe),0,0,0);
                    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar16,0);
                    pdVar32 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (pdVar32,pdVar25,uRam0000000003d59f00,0);
                    if (pdVar16 != (dword *)0x0) {
                      *(dword **)(pdVar16 + 4) = pdVar32;
                      *(undefined1 *)((long)pdVar16 + 0x19) = 1;
                      pdVar31 = *(dword **)(pdVar25 + 0xc);
                      pdVar32 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      pdVar22 = (dword *)0x0;
                      if (pdVar31 != (dword *)0x0) {
                        pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        pppppppuVar35 = *(undefined8 ********)((long)puVar20 + -0x10);
                        puVar36 = *(undefined **)((long)puVar20 + -8);
                        param_2 = *(dword **)((long)puVar20 + -0x20);
                        param_1 = *(dword **)((long)puVar20 + -0x18);
                        lVar17 = *(long *)((long)puVar20 + -0x30);
                        pdVar32 = *(dword **)((long)puVar20 + -0x28);
                        goto code_r0x0147079c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar34 = *(undefined1 **)((long)puVar20 + -0x10);
      puVar36 = *(undefined **)((long)puVar20 + -8);
      pdVar16 = *(dword **)((long)puVar20 + -0x20);
      pdVar22 = *(dword **)((long)puVar20 + -0x18);
      lVar18 = *(long *)((long)puVar20 + -0x30);
      pdVar32 = *(dword **)((long)puVar20 + -0x28);
    }
    *(undefined8 *)((long)puVar20 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar20 + -0x38) = unaff_x23;
    *(long *)((long)puVar20 + -0x30) = lVar18;
    *(dword **)((long)puVar20 + -0x28) = pdVar32;
    *(dword **)((long)puVar20 + -0x20) = pdVar16;
    *(dword **)((long)puVar20 + -0x18) = pdVar22;
    *(undefined1 **)((long)puVar20 + -0x10) = puVar34;
    *(undefined **)((long)puVar20 + -8) = puVar36;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar16,0);
    lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar17,pdVar25,uRam0000000003d59ed8,0);
    if (pdVar16 == (dword *)0x0) {
code_r0x0147e694:
      pdVar16 = (dword *)func_0x00f78af4();
      return pdVar16;
    }
    *(long *)(pdVar16 + 6) = lVar17;
    if (*(long *)(pdVar25 + 8) == 0) goto code_r0x0147e694;
    *(long *)(pdVar16 + 4) = *(long *)(*(long *)(pdVar25 + 8) + 0x10);
    *(long *)(pdVar16 + 8) = *(long *)(pdVar25 + 10);
    *(undefined1 *)(pdVar16 + 10) = 1;
    if (*(long *)(pdVar25 + 0xe) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(pdVar25 + 0xe),0,0,0);
    pdVar31 = *(dword **)(pdVar25 + 0xc);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar31 == (dword *)0x0) goto code_r0x0147e694;
    pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    pppppppuVar35 = *(undefined8 ********)((long)puVar20 + -0x10);
    puVar36 = *(undefined **)((long)puVar20 + -8);
    param_2 = *(dword **)((long)puVar20 + -0x20);
    param_1 = *(dword **)((long)puVar20 + -0x18);
    lVar17 = *(long *)((long)puVar20 + -0x30);
    pdVar32 = *(dword **)((long)puVar20 + -0x28);
    unaff_x24 = *(undefined8 *)((long)puVar20 + -0x40);
    unaff_x23 = *(undefined8 *)((long)puVar20 + -0x38);
  }
  else {
    unaff_x23 = 0x3d63000;
    *(dword **)(pdVar16 + 4) = param_1;
    *(dword **)(pdVar16 + 6) = param_2;
    param_2 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(param_2,0);
    lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar17,pdVar16,uRam0000000003d63588,0);
    if (param_2 == (dword *)0x0) goto LAB_0147dd40;
    *(long *)(param_2 + 6) = lVar17;
    if (*(long *)(param_1 + 8) == 0) goto LAB_0147dd40;
    *(long *)(param_2 + 4) = *(long *)(*(long *)(param_1 + 8) + 0x10);
    *(long *)(param_2 + 8) = *(long *)(param_1 + 10);
    if (*(long *)(param_1 + 0xe) == 0) goto LAB_0147dd40;
    pdVar32 = (dword *)0x3d1feb8;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0xe),0,0,0);
    pdVar31 = *(dword **)(param_1 + 0xc);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = pdVar31;
    pdVar16 = (dword *)0x3d1feb8;
    if (pdVar31 == (dword *)0x0) goto LAB_0147dd40;
    pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    pdVar16 = param_2;
    pppppppuVar35 = (undefined8 *******)&stack0xfffffffffffffff0;
    puVar36 = (undefined *)0x147dd28;
  }
code_r0x0147079c:
  uVar27 = 0;
  pdVar25 = (dword *)0x0;
  *(undefined8 *)((long)puVar20 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar20 + -0x38) = unaff_x23;
  *(long *)((long)puVar20 + -0x30) = lVar17;
  *(dword **)((long)puVar20 + -0x28) = pdVar32;
  *(dword **)((long)puVar20 + -0x20) = param_2;
  *(dword **)((long)puVar20 + -0x18) = param_1;
  *(undefined8 ********)((long)puVar20 + -0x10) = pppppppuVar35;
  *(undefined **)((long)puVar20 + -8) = puVar36;
  puVar34 = (undefined1 *)((long)puVar20 + -0x10);
  pdVar32 = (dword *)0x0;
  pdVar26 = pdVar16;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)puVar20 + -0x48) = 0;
  lVar17 = *(long *)(pdVar31 + 4);
  if (lVar17 != 0) {
    pdVar25 = (dword *)0x0;
    uVar27 = 0;
    puVar36 = &UNK_01470820;
    pdVar23 = pdVar22;
    pdVar26 = pdVar16;
code_r0x02f87f38:
    *(undefined8 *)((long)puVar20 + -0x90) = unaff_x24;
    *(undefined8 *)((long)puVar20 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)puVar20 + -0x80) = 0;
    *(dword **)((long)puVar20 + -0x78) = pdVar16;
    *(dword **)((long)puVar20 + -0x70) = pdVar31;
    *(dword **)((long)puVar20 + -0x68) = pdVar22;
    *(undefined1 **)((long)puVar20 + -0x60) = puVar34;
    *(undefined **)((long)puVar20 + -0x58) = puVar36;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)puVar20 + -0x130) = unaff_x26;
    *(undefined8 *)((long)puVar20 + -0x128) = unaff_x25;
    *(undefined8 *)((long)puVar20 + -0x120) = 0x3ebc000;
    *(dword **)((long)puVar20 + -0x118) = pdVar23;
    *(dword **)((long)puVar20 + -0x110) = pdVar26;
    *(undefined8 *)((long)puVar20 + -0x108) = uVar27;
    *(long *)((long)puVar20 + -0x100) = lVar17;
    *(dword **)((long)puVar20 + -0xf8) = pdVar25;
    *(undefined1 **)((long)puVar20 + -0xf0) = (undefined1 *)((long)puVar20 + -0x60);
    *(undefined **)((long)puVar20 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar18 = *(long *)(lVar17 + 0x78);
    if (lVar18 != 0) {
      iVar15 = *(int *)(lVar18 + 0x18);
      if (iVar15 < 1) {
        return (dword *)0x0;
      }
      iVar14 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar18 + 0x18) <= iVar14 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
        if (lVar18 == 0) break;
        uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar18,pdVar23,5,0);
        if ((uVar21 & 1) != 0) {
          return pdVar16;
        }
        pdVar16 = (dword *)(ulong)(iVar14 < iVar15);
        if (iVar15 == iVar14) {
          return pdVar16;
        }
        lVar18 = *(long *)(lVar17 + 0x78);
        iVar14 = iVar14 + 1;
      } while (lVar18 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar39 = func_0x00f78af4();
  pdVar23 = auVar39._8_8_;
  *(undefined1 **)((long)puVar20 + -0x60) = puVar34;
  *(undefined **)((long)puVar20 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar17 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar17 != 0) {
    puVar34 = *(undefined1 **)((long)puVar20 + -0x60);
    puVar36 = *(undefined **)((long)puVar20 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar39 = func_0x00f78af4();
  uVar27 = auVar39._8_8_;
  *(undefined1 **)((long)puVar20 + -0x70) = (undefined1 *)((long)puVar20 + -0x60);
  *(undefined **)((long)puVar20 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar17 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar17 != 0) {
    pdVar25 = (dword *)0x0;
    *(undefined8 *)((long)puVar20 + -0x90) = 0;
    *(dword **)((long)puVar20 + -0x88) = pdVar16;
    *(dword **)((long)puVar20 + -0x80) = pdVar31;
    *(dword **)((long)puVar20 + -0x78) = pdVar22;
    *(undefined8 *)((long)puVar20 + -0x70) = *(undefined8 *)((long)puVar20 + -0x70);
    *(undefined8 *)((long)puVar20 + -0x68) = *(undefined8 *)((long)puVar20 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar18 = *(long *)(lVar17 + 0x70);
    if (lVar18 != 0) {
      lVar19 = lVar18;
      if (*(uint *)(lVar18 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = *(long *)(lVar17 + 0x70);
      }
      if (lVar19 != 0) {
        lVar18 = *(long *)(lVar18 + 0x10) + (long)(int)auVar39._8_4_ * 0x28;
        uVar38 = *(undefined8 *)(lVar18 + 0x28);
        uVar37 = *(undefined8 *)(lVar18 + 0x20);
        uVar13 = *(undefined4 *)(lVar18 + 0x42);
        *(undefined4 *)((long)puVar20 + -0xd8) = uVar13;
        uVar5 = *(undefined2 *)(lVar18 + 0x46);
        *(undefined2 *)((long)puVar20 + -0xd4) = uVar5;
        *(undefined8 *)((long)puVar20 + -200) = uVar38;
        *(undefined8 *)((long)puVar20 + -0xd0) = uVar37;
        *(undefined8 *)((long)puVar20 + -0xb8) = uVar38;
        *(undefined8 *)((long)puVar20 + -0xc0) = uVar37;
        *(undefined8 *)((long)puVar20 + -0xb0) = 0;
        *(undefined8 *)((long)puVar20 + -0xa8) = 0;
        *(undefined2 *)((long)puVar20 + -0xa0) = 1;
        *(undefined4 *)((long)puVar20 + -0x9e) = uVar13;
        *(undefined2 *)((long)puVar20 + -0x9a) = uVar5;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,uVar27,(undefined1 *)((long)puVar20 + -0xc0),uRam0000000003d3ddd0);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,uVar27);
        return pdVar16;
      }
    }
    auVar39 = func_0x00f78af4();
    pdVar23 = auVar39._8_8_;
    puVar11 = (undefined1 *)((long)puVar20 + -0x110);
    *(undefined8 *)((long)puVar20 + -0x110) = 0;
    *(long *)((long)puVar20 + -0x108) = lVar18;
    *(long *)((long)puVar20 + -0x100) = lVar17;
    *(undefined8 *)((long)puVar20 + -0xf8) = uVar27;
    *(undefined1 **)((long)puVar20 + -0xf0) = (undefined1 *)((long)puVar20 + -0x70);
    *(undefined **)((long)puVar20 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar34 = (undefined1 *)((long)puVar20 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar17 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar17 == 0) {
        pdVar16 = (dword *)0x0;
      }
      else {
        pdVar16 = *(dword **)(lVar17 + 0x40);
      }
      return pdVar16;
    }
    puVar36 = &Core_UI2_UIScreen__ForceExit;
    pdVar22 = (dword *)func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar16 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar39 = func_0x00f78af4();
  pdVar23 = auVar39._8_8_;
  *(undefined1 **)((long)puVar20 + -0x80) = (undefined1 *)((long)puVar20 + -0x70);
  *(undefined **)((long)puVar20 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar17 = *(long *)(auVar39._0_8_ + 0x10);
  auVar39._8_8_ = pdVar16;
  auVar39._0_8_ = lVar17;
  if (lVar17 != 0) {
    pdVar25 = (dword *)0x0;
    puVar6 = (undefined1 *)((long)puVar20 + -0x70);
    puVar34 = *(undefined1 **)((long)puVar20 + -0x80);
    puVar36 = *(undefined **)((long)puVar20 + -0x78);
    pdVar16 = pdVar31;
    goto code_r0x02f877a8;
  }
  auVar39 = func_0x00f78af4();
  *(undefined1 **)((long)puVar20 + -0x90) = (undefined1 *)((long)puVar20 + -0x80);
  *(undefined **)((long)puVar20 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar17 = *(long *)(auVar39._0_8_ + 0x10);
  auVar39._8_8_ = auVar39._8_8_;
  auVar39._0_8_ = lVar17;
  if (lVar17 != 0) {
    puVar7 = (undefined1 *)((long)puVar20 + -0x80);
    puVar34 = *(undefined1 **)((long)puVar20 + -0x90);
    puVar36 = *(undefined **)((long)puVar20 + -0x88);
    pdVar23 = pdVar25;
    while( true ) {
      puVar6 = puVar7 + -0x30;
      *(dword **)(puVar7 + -0x30) = pdVar32;
      *(dword **)(puVar7 + -0x28) = pdVar16;
      *(dword **)(puVar7 + -0x20) = pdVar31;
      *(dword **)(puVar7 + -0x18) = pdVar22;
      *(undefined1 **)(puVar7 + -0x10) = puVar34;
      *(undefined **)(puVar7 + -8) = puVar36;
      puVar34 = puVar7 + -0x10;
      puVar36 = &UNK_02f883d8;
      pdVar25 = pdVar23;
      pdVar22 = pdVar26;
      pdVar16 = pdVar23;
      pdVar32 = auVar39._0_8_;
code_r0x02f877a8:
      pdVar31 = auVar39._0_8_;
      puVar11 = puVar6 + -0x60;
      *(dword **)(puVar6 + -0x30) = pdVar32;
      *(long *)(puVar6 + -0x28) = auVar39._8_8_;
      *(dword **)(puVar6 + -0x20) = pdVar16;
      *(dword **)(puVar6 + -0x18) = pdVar22;
      *(undefined1 **)(puVar6 + -0x10) = puVar34;
      *(undefined **)(puVar6 + -8) = puVar36;
      puVar34 = puVar6 + -0x10;
      pdVar16 = pdVar31;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar16 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar30 = (uint)pdVar23;
      if (((int)uVar30 < 0) || ((int)*(long *)(pdVar31 + 0x14) <= (int)uVar30)) {
        return pdVar16;
      }
      lVar17 = *(long *)(pdVar31 + 0x1c);
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(lVar17 + 0x10) + ((ulong)pdVar23 & 0xffffffff) * 0x28;
      pdVar32 = *(dword **)(lVar17 + 0x20);
      pdVar22 = *(dword **)(lVar17 + 0x28);
      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar17 + 0x42);
      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar17 + 0x46);
      if (pdVar22 == (dword *)0x0) {
        lVar17 = *(long *)(pdVar31 + 0x1c);
        if (lVar17 != 0) {
          *(dword **)(puVar6 + -0x58) = pdVar32;
          *(undefined8 *)(puVar6 + -0x50) = 0;
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined2 *)(puVar6 + -0x38) = 0;
          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
          pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,pdVar23,puVar6 + -0x58,uRam0000000003d3ddd0);
          return pdVar16;
        }
        break;
      }
      puVar36 = &UNK_02f87848;
      pdVar16 = pdVar22;
code_r0x02f882d8:
      *(dword **)(puVar11 + -0x20) = pdVar31;
      *(dword **)(puVar11 + -0x18) = pdVar23;
      *(undefined1 **)(puVar11 + -0x10) = puVar34;
      *(undefined **)(puVar11 + -8) = puVar36;
      (**(code **)(*(long *)pdVar22 + 0x218))(pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x220));
      if (*(long *)(pdVar22 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar22 + 10),0);
        pdVar22[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar22,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*(long *)pdVar22 + 0x228))
                                     (pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x230));
        return pdVar16;
      }
      func_0x00f78af4();
      puVar7 = puVar11 + -0x40;
      *(dword **)(puVar11 + -0x40) = pdVar31;
      *(dword **)(puVar11 + -0x38) = pdVar22;
      *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar34 = puVar11 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar17 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar27 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar27,lVar17);
        pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar16;
      }
      puVar36 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar39 = func_0x00f78af4();
      pdVar23 = pdVar25;
    }
    lVar17 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar32;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar31;
    *(dword **)(puVar6 + -0x78) = pdVar23;
    *(undefined1 **)(puVar6 + -0x70) = puVar34;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar27 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar27,0);
    if (0 < *(int *)(lVar17 + 0x50)) {
      iVar15 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,iVar15);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar17,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar17 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar17);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar27);
    return pdVar16;
  }
  auVar39 = func_0x00f78af4();
  *(undefined1 **)((long)puVar20 + -0xa0) = (undefined1 *)((long)puVar20 + -0x90);
  *(undefined **)((long)puVar20 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar17 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar17 == 0) {
    auVar39 = func_0x00f78af4();
    *(undefined1 **)((long)puVar20 + -0xb0) = (undefined1 *)((long)puVar20 + -0xa0);
    *(undefined **)((long)puVar20 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar17 = *(long *)(auVar39._0_8_ + 0x10);
    auVar40._8_8_ = auVar39._8_8_;
    auVar40._0_8_ = lVar17;
    if (lVar17 != 0) {
      pdVar26 = (dword *)0x0;
      puVar8 = (undefined1 *)((long)puVar20 + -0xa0);
      puVar34 = *(undefined1 **)((long)puVar20 + -0xb0);
      puVar36 = *(undefined **)((long)puVar20 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar39 = func_0x00f78af4();
    *(undefined1 **)((long)puVar20 + -0xc0) = (undefined1 *)((long)puVar20 + -0xb0);
    *(undefined **)((long)puVar20 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar17 = *(long *)(auVar39._0_8_ + 0x10);
    auVar41._8_8_ = auVar39._8_8_;
    auVar41._0_8_ = lVar17;
    if (lVar17 == 0) {
      auVar39 = func_0x00f78af4();
      *(undefined1 **)((long)puVar20 + -0xd0) = (undefined1 *)((long)puVar20 + -0xc0);
      *(undefined **)((long)puVar20 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar17 = *(long *)(auVar39._0_8_ + 0x10);
      auVar42._8_8_ = auVar39._8_8_;
      auVar42._0_8_ = lVar17;
      if (lVar17 == 0) {
        pdVar32 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)puVar20 + -0x100) = 0;
        *(dword **)((long)puVar20 + -0xf8) = pdVar16;
        *(dword **)((long)puVar20 + -0xf0) = pdVar31;
        *(dword **)((long)puVar20 + -0xe8) = pdVar22;
        *(undefined1 **)((long)puVar20 + -0xe0) = (undefined1 *)((long)puVar20 + -0xd0);
        *(undefined **)((long)puVar20 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar27 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar27,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar32 + 0xc) = uVar27;
        return pdVar32;
      }
      puVar10 = (undefined1 *)((long)puVar20 + -0xc0);
      puVar34 = *(undefined1 **)((long)puVar20 + -0xd0);
      puVar36 = *(undefined **)((long)puVar20 + -200);
      goto code_r0x02f88674;
    }
    puVar9 = (undefined1 *)((long)puVar20 + -0xb0);
    puVar34 = *(undefined1 **)((long)puVar20 + -0xc0);
    puVar36 = *(undefined **)((long)puVar20 + -0xb8);
    pdVar26 = pdVar25;
    pdVar32 = pdVar16;
  }
  else {
    pdVar26 = (dword *)0x0;
    puVar8 = (undefined1 *)((long)puVar20 + -0xc0);
    *(undefined8 *)((long)puVar20 + -0xc0) = 0;
    *(dword **)((long)puVar20 + -0xb8) = pdVar16;
    *(dword **)((long)puVar20 + -0xb0) = pdVar31;
    *(dword **)((long)puVar20 + -0xa8) = pdVar22;
    *(undefined8 *)((long)puVar20 + -0xa0) = *(undefined8 *)((long)puVar20 + -0xa0);
    *(undefined8 *)((long)puVar20 + -0x98) = *(undefined8 *)((long)puVar20 + -0x98);
    puVar34 = (undefined1 *)((long)puVar20 + -0xa0);
    pdVar16 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar30 = auVar39._8_4_;
    if (((int)uVar30 < 0) || (*(int *)(lVar17 + 0x50) <= (int)uVar30)) {
      return (dword *)0x0;
    }
    lVar17 = *(long *)(lVar17 + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(lVar17 + 0x10) + ((ulong)auVar39._8_8_ & 0xffffffff) * 0x28;
      lVar17 = *(long *)(lVar18 + 0x28);
      cVar3 = *(char *)(lVar18 + 0x40);
      iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar18 + 0x30),0);
      if (iVar15 == 0 || cVar3 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar17 != 0) && (*(int *)(lVar17 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar36 = &Core_UI2_UIManager__GetLayerState;
    auVar40 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar22 = auVar39._8_8_;
code_r0x02f884dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = 0;
    *(dword **)(puVar8 + -0x28) = pdVar16;
    *(dword **)(puVar8 + -0x20) = pdVar31;
    *(dword **)(puVar8 + -0x18) = pdVar22;
    *(undefined1 **)(puVar8 + -0x10) = puVar34;
    *(undefined **)(puVar8 + -8) = puVar36;
    puVar34 = puVar8 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar17 = *(long *)(auVar40._0_8_ + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= auVar40._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar40._8_4_ * 0x28 + 0x28);
      if (lVar17 == 0) {
        pdVar16 = &MACH_HEADER.cputype;
      }
      else {
        pdVar16 = (dword *)(ulong)*(uint *)(lVar17 + 0x4c);
      }
      return pdVar16;
    }
    puVar36 = &Core_UI2_UIManager__EnableInput;
    auVar41 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar22 = auVar40._8_8_;
    pdVar32 = (dword *)0x3ebc000;
  }
  pdVar23 = auVar41._8_8_;
  pdVar16 = auVar41._0_8_;
  puVar10 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(dword **)(puVar9 + -0x28) = pdVar32;
  *(dword **)(puVar9 + -0x20) = pdVar31;
  *(dword **)(puVar9 + -0x18) = pdVar22;
  *(undefined1 **)(puVar9 + -0x10) = puVar34;
  *(undefined **)(puVar9 + -8) = puVar36;
  puVar34 = puVar9 + -0x10;
  pdVar32 = (dword *)0x3ebc000;
  pdVar25 = pdVar26;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar16 + 0x1a) != 0) {
    pdVar25 = (dword *)(ulong)((uint)pdVar26 ^ 1);
    pdVar31 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar16 + 0x1a),pdVar23,pdVar25,0);
    lVar17 = *(long *)(pdVar16 + 0x1c);
    pdVar32 = (dword *)0x0;
    if (lVar17 != 0) {
      uVar30 = auVar41._8_4_;
      if (*(uint *)(lVar17 + 0x18) <= uVar30) {
        pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) ||
         (pdVar32 = *(dword **)(pdVar16 + 0xc), pdVar32 == (dword *)0x0)) {
        return pdVar31;
      }
      lVar17 = *(long *)(pdVar16 + 0x1c);
      pdVar16 = (dword *)0x0;
      if (lVar17 != 0) {
        if (*(uint *)(lVar17 + 0x18) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar24 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar9 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
        *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
        *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        *(dword **)(puVar9 + -0x68) = pdVar32;
        lVar17 = *(long *)(pdVar32 + 0x1a);
        if (lVar17 == 0) {
          puVar34 = puVar9 + -0x68;
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar17 + 0x18);
          if (lVar18 == 0) {
            return pdVar32;
          }
          puVar34 = (undefined1 *)(lVar17 + 0x20);
        }
        lVar17 = 0;
        do {
          lVar19 = *(long *)(puVar34 + lVar17 * 8);
          pcVar33 = *(code **)(lVar19 + 0x10);
          plVar1 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar15 = func_0x00f78a4c(lVar19);
          bVar12 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar15 == 0) {
            if (bVar12) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar16 = (dword *)(*pcVar33)(plVar24,pdVar23,pdVar26,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e71aac;
                iVar15 = func_0x00f78a44(lVar19);
                iVar14 = func_0x00f78ec0(lVar19);
                if (iVar15 == 0) {
                  uVar4 = *(ushort *)(lVar19 + 0x48);
                  if (iVar14 == 0) {
                    lVar19 = *plVar1 + (ulong)uVar4 * 0x10;
                    pdVar16 = (dword *)(**(code **)(lVar19 + 0x138))
                                                 (plVar1,plVar24,pdVar23,pdVar26,
                                                  *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar28 = *plVar1;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar19) {
                        puVar20 = (undefined8 *)
                                  (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar29 = piVar29 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar4);
code_r0x01e71d74:
                  pcVar33 = (code *)*puVar20;
                  puVar20 = (undefined8 *)puVar20[1];
                }
                else {
                  if (iVar14 == 0) {
                    uVar27 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar28 = *plVar1;
                    uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                    if (uVar21 != 0) {
                      piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar29 = piVar29 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar28 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar27 = *(undefined8 *)(lVar28 + 8);
                  }
                  puVar20 = (undefined8 *)func_0x00f78acc(uVar27,lVar19);
                  pcVar33 = (code *)*puVar20;
                }
                pdVar16 = (dword *)(*pcVar33)(plVar1,plVar24,pdVar23,pdVar26,puVar20);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar15 = func_0x00f78a44(lVar19);
              iVar14 = func_0x00f78ec0(lVar19);
              if (iVar15 == 0) {
                uVar4 = *(ushort *)(lVar19 + 0x48);
                if (iVar14 == 0) {
                  lVar19 = *plVar24 + (ulong)uVar4 * 0x10;
                  pdVar16 = (dword *)(**(code **)(lVar19 + 0x138))
                                               (plVar24,pdVar23,pdVar26,
                                                *(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar28 = *plVar24;
                uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar21 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar19) {
                      puVar20 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar29 = piVar29 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar20 = (undefined8 *)func_0x00fac1f0(plVar24,lVar19,(ulong)uVar4);
code_r0x01e71d00:
                pcVar33 = (code *)*puVar20;
                puVar20 = (undefined8 *)puVar20[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar27 = *(undefined8 *)
                            (*plVar24 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar24;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar29 = piVar29 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar28 = func_0x00fac1f0(plVar24);
code_r0x01e71cd8:
                  uVar27 = *(undefined8 *)(lVar28 + 8);
                }
                puVar20 = (undefined8 *)func_0x00f78acc(uVar27,lVar19);
                pcVar33 = (code *)*puVar20;
              }
              pdVar16 = (dword *)(*pcVar33)(plVar24,pdVar23,pdVar26,puVar20);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar16 = (dword *)(*pcVar33)(plVar1,plVar24,pdVar23,pdVar26,lVar19);
          }
code_r0x01e71bd0:
          lVar17 = lVar17 + 1;
          if (lVar17 == lVar18) {
            return pdVar16;
          }
        } while( true );
      }
    }
  }
  puVar36 = &Core_UI2_UIManager__SetScreenVisible;
  auVar42 = func_0x00f78af4();
  pdVar22 = pdVar26;
  pdVar31 = pdVar23;
code_r0x02f88674:
  pdVar26 = auVar42._0_8_;
  *(dword **)(puVar10 + -0x30) = pdVar32;
  *(dword **)(puVar10 + -0x28) = pdVar16;
  *(dword **)(puVar10 + -0x20) = pdVar31;
  *(dword **)(puVar10 + -0x18) = pdVar22;
  *(undefined1 **)(puVar10 + -0x10) = puVar34;
  *(undefined **)(puVar10 + -8) = puVar36;
  pdVar16 = pdVar26;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar17 = *(long *)(pdVar26 + 0x1c);
  if (lVar17 != 0) {
    uVar30 = auVar42._8_4_;
    if (*(uint *)(lVar17 + 0x18) <= uVar30) {
      pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
      return pdVar16;
    }
    lVar17 = *(long *)(pdVar26 + 0x1c);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
      if ((lVar17 != 0) && (plVar24 = *(long **)(lVar17 + 0x28), plVar24 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar24 + 0x178))
                                     (plVar24,pdVar25,*(undefined8 *)(*plVar24 + 0x180));
        return pdVar16;
      }
    }
  }
  auVar39 = func_0x00f78af4();
  uVar27 = auVar39._0_8_;
  *(long *)(puVar10 + -0x50) = auVar42._8_8_;
  *(dword **)(puVar10 + -0x48) = pdVar25;
  *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar10 + -0x68) = 0;
  *(undefined8 *)(puVar10 + -0x70) = 0;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(undefined8 *)(puVar10 + -0x60) = 0;
  pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar27,auVar39._8_8_,puVar10 + -0x70);
  if ((int)pdVar16 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar27,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
    pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar27,puVar10 + -0x90,1);
  }
  return pdVar16;
}



// ============================================================
// RVA: 0x147dd44 | Atlas.League.LeagueModeUIManager.ShowLeaderboardWithBackButton
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__ShowLeaderboardWithBackButton(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  long lVar15;
  int iVar13;
  int iVar14;
  dword *pdVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long *extraout_x1;
  dword *pdVar21;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  long unaff_x19;
  dword *pdVar28;
  dword *unaff_x20;
  dword *unaff_x21;
  dword *pdVar29;
  dword *pdVar30;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  code *pcVar32;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar33;
  undefined8 unaff_x28;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar34;
  undefined *puVar35;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_70;
  dword *pdStack_68;
  dword *pdStack_60;
  long lStack_58;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb48d1 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d59ee0);
    func_0x00f78a20(0x3d27e30);
    bRam0000000003eb48d1 = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
  Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar16,0);
  pdVar29 = (dword *)0x3d27e30;
  uVar17 = unaff_x22;
  uVar36 = unaff_x23;
  if (pdVar16 == (dword *)0x0) {
LAB_0147de74:
    unaff_x23 = uVar36;
    unaff_x22 = uVar17;
    unaff_x21 = pdVar29;
    lVar15 = func_0x00f78af4();
    puStack_48 = &Atlas_League_LeagueModeUIManager__DoPodiumSequence;
    uVar17 = 0x3eb4000;
    uStack_70 = unaff_x22;
    pdStack_68 = unaff_x21;
    pdStack_60 = pdVar16;
    lStack_58 = param_1;
    pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48d2 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e68);
      func_0x00f78a20(0x3d59ef8);
      func_0x00f78a20(0x3d27e78);
      bRam0000000003eb48d2 = 1;
    }
    if ((*(long *)(lVar15 + 0x28) == 0) ||
       (unaff_x19 = *(long *)(*(long *)(lVar15 + 0x28) + 0x80), unaff_x19 == 0)) {
      puVar35 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
      unaff_x19 = func_0x00f78af4();
    }
    else {
      uVar17 = 0x3d27000;
      unaff_x21 = (dword *)0x3d27000;
      unaff_x22 = 0x3d59000;
      puVar35 = &UNK_0147df04;
    }
    uStack_d0 = uVar17;
    lStack_c8 = lVar15;
    ppppppuStack_c0 = &pppppuStack_50;
    puStack_b8 = puVar35;
    if ((bRam0000000003eb493a & 1) == 0) {
      func_0x00f78a20(0x3d3d470);
      bRam0000000003eb493a = 1;
    }
    pdVar16 = *(dword **)(unaff_x19 + 0x18);
    if (pdVar16 != (dword *)0x0) {
      pdVar29 = pdVar16;
      if (0 < (int)pdVar16[6]) {
        pdVar29 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar16 + 4),0,pdVar16[6],0);
        pdVar16[6] = 0;
      }
      pdVar16[7] = pdVar16[7] + 1;
      return pdVar29;
    }
    lVar31 = func_0x00f78af4();
    puStack_d8 = &Atlas_League_LeagueModeUIManager__ShowPromotion;
    lVar15 = 0x3d59f00;
    pppppppuStack_e0 = &ppppppuStack_c0;
    if ((bRam0000000003eb48d3 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e88);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d27e90);
      bRam0000000003eb48d3 = 1;
    }
    unaff_x20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
    Atlas_UI_Screens_LeaguePromotionScreen_TransitionData___ctor(unaff_x20,0);
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
    Atlas_UI_Screens_LeaguePromotionScreen_ContinueSelected___ctor
              (pdVar16,lVar31,uRam0000000003d59f00,0);
    if (unaff_x20 != (dword *)0x0) {
      *(dword **)(unaff_x20 + 4) = pdVar16;
      if (*(long *)(lVar31 + 0x38) != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar31 + 0x38),0,0,0);
        pdVar28 = *(dword **)(lVar31 + 0x30);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar31 = 0;
        pdVar16 = (dword *)0x3d1feb8;
        if (pdVar28 != (dword *)0x0) {
          pdVar29 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
          register0x00000008 = (BADSPACEBASE *)&uStack_d0;
          pdVar16 = unaff_x20;
          unaff_x20 = (dword *)0x3eb4000;
          unaff_x29 = pppppppuStack_e0;
          unaff_x30 = puStack_d8;
          goto code_r0x0147079c;
        }
      }
    }
    unaff_x21 = pdVar16;
    unaff_x19 = lVar31;
    lVar31 = func_0x00f78af4();
    puStack_118 = &Atlas_League_LeagueModeUIManager__ShowReward;
    pppppppuVar34 = &pppppppuStack_120;
    pdVar29 = (dword *)0x3eb4000;
    pppppppuStack_120 = &pppppppuStack_e0;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    lVar20 = lVar31;
    pdVar16 = unaff_x21;
    unaff_x23 = 0x3d27e90;
    if (*(long *)(lVar31 + 0x50) == 0) {
code_r0x0147e318:
      unaff_x21 = pdVar16;
      lVar31 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffeb0;
      unaff_x19 = lVar20;
      unaff_x20 = pdVar29;
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
    }
    else {
      pdVar29 = (dword *)Atlas_League_LeagueManager__GetUnlockedRewardOrNull
                                   (*(long *)(lVar31 + 0x50),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar14 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar29,uVar17,0);
      if (iVar14 != 0) {
        pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar16,0);
        lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor
                  (lVar15,lVar31,uRam0000000003d59f08,0);
        unaff_x23 = 0x3d21270;
        if (pdVar16 != (dword *)0x0) {
          *(long *)(pdVar16 + 4) = lVar15;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar29,0);
          *(long *)(pdVar16 + 0xc) = lVar20;
          pdVar28 = *(dword **)(lVar31 + 0x30);
          *(long *)(pdVar16 + 0xe) = *(long *)(lVar31 + 0x28);
          *(undefined1 *)(pdVar16 + 0x10) = 1;
          pdVar29 = (dword *)0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar20 = 0;
          unaff_x23 = 0x3d21270;
          if (pdVar28 != (dword *)0x0) {
            pdVar29 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            unaff_x22 = 0x3d59f00;
            register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffef0;
            unaff_x23 = 0x3d27e90;
            unaff_x29 = pppppppuStack_120;
            unaff_x30 = puStack_118;
            goto code_r0x0147079c;
          }
        }
        goto code_r0x0147e318;
      }
      lVar15 = 0x3d59f00;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffef0;
      unaff_x23 = 0x3d27e90;
      pppppppuVar34 = pppppppuStack_120;
      puVar35 = puStack_118;
    }
    *(long *)((long)register0x00000008 + -0x30) = lVar15;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuVar34;
    *(undefined **)((long)register0x00000008 + -8) = puVar35;
    puVar33 = (undefined1 *)((long)register0x00000008 + -0x10);
    pdVar16 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    lVar20 = lVar31;
    if (*(long *)(lVar31 + 0x50) == 0) {
code_r0x0147e554:
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      lVar31 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    }
    else {
      iVar14 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(lVar31 + 0x50),0);
      if (iVar14 == 0) {
        pdVar16 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar16,0);
        if (pdVar16 != (dword *)0x0) {
          pdVar16[4] = 9;
          *(long *)(pdVar16 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          unaff_x21 = *(dword **)(lVar31 + 0x60);
          if (unaff_x21 != (dword *)0x0) {
            uVar17 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x21,0);
            uVar12 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x21,uVar17,0);
            unaff_x21[0x10] = uVar12;
            if (*(long *)(lVar31 + 0x50) != 0) {
              unaff_x21 = *(dword **)(lVar31 + 0x58);
              lVar15 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(lVar31 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (unaff_x21 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(unaff_x21,lVar15,uVar17,*(undefined8 *)(lVar31 + 0x40),pdVar16,0);
                if (*(long *)(lVar31 + 0x50) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(lVar31 + 0x50),0);
                  if (*(long *)(lVar31 + 0x38) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar31 + 0x38),0,0,0);
                    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar16,0);
                    unaff_x21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (unaff_x21,lVar31,uRam0000000003d59f00,0);
                    if (pdVar16 != (dword *)0x0) {
                      *(dword **)(pdVar16 + 4) = unaff_x21;
                      *(undefined1 *)((long)pdVar16 + 0x19) = 1;
                      pdVar28 = *(dword **)(lVar31 + 0x30);
                      unaff_x21 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar20 = 0;
                      if (pdVar28 != (dword *)0x0) {
                        pdVar29 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
                        unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
                        unaff_x20 = *(dword **)((long)register0x00000008 + -0x20);
                        unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
                        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
                        unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
                        goto code_r0x0147079c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar33 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar35 = *(undefined **)((long)register0x00000008 + -8);
      pdVar16 = *(dword **)((long)register0x00000008 + -0x20);
      lVar20 = *(long *)((long)register0x00000008 + -0x18);
      lVar15 = *(long *)((long)register0x00000008 + -0x30);
      unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = lVar15;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = pdVar16;
    *(long *)((long)register0x00000008 + -0x18) = lVar20;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar33;
    *(undefined **)((long)register0x00000008 + -8) = puVar35;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar16,0);
    lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar15,lVar31,uRam0000000003d59ed8,0);
    if (pdVar16 == (dword *)0x0) {
code_r0x0147e694:
      pdVar16 = (dword *)func_0x00f78af4();
      return pdVar16;
    }
    *(long *)(pdVar16 + 6) = lVar15;
    if (*(long *)(lVar31 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar16 + 4) = *(long *)(*(long *)(lVar31 + 0x20) + 0x10);
    *(long *)(pdVar16 + 8) = *(long *)(lVar31 + 0x28);
    *(undefined1 *)(pdVar16 + 10) = 1;
    if (*(long *)(lVar31 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar31 + 0x38),0,0,0);
    pdVar28 = *(dword **)(lVar31 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar28 == (dword *)0x0) goto code_r0x0147e694;
    pdVar29 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(dword **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
  }
  else {
    lVar15 = *(long *)(param_1 + 0x20);
    lVar31 = *(long *)(param_1 + 0x28);
    *(long *)(pdVar16 + 6) = 0;
    *(long *)(pdVar16 + 8) = lVar31;
    if (lVar15 == 0) goto LAB_0147de74;
    *(long *)(pdVar16 + 4) = *(long *)(lVar15 + 0x10);
    pdVar29 = *(dword **)(param_1 + 0x38);
    uVar17 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar17,param_1,uRam0000000003d59ee0,0);
    uVar36 = 0x3d59000;
    if (pdVar29 == (dword *)0x0) goto LAB_0147de74;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(pdVar29,0,uVar17,0);
    pdVar28 = *(dword **)(param_1 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = 0;
    uVar36 = 0x3d1feb8;
    if (pdVar28 == (dword *)0x0) goto LAB_0147de74;
    pdVar29 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
  }
code_r0x0147079c:
  uVar17 = 0;
  pdVar23 = (dword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar33 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar30 = (dword *)0x0;
  pdVar24 = pdVar16;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar15 = *(long *)(pdVar28 + 4);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    uVar17 = 0;
    puVar35 = &UNK_01470820;
    pdVar21 = pdVar29;
    pdVar24 = pdVar16;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar16;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar28;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar29;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar33;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar35;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar21;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar24;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar17;
    *(long *)((long)register0x00000008 + -0x100) = lVar15;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar23;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x78);
    if (lVar31 != 0) {
      iVar14 = *(int *)(lVar31 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar31 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar31 == 0) break;
        uVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar31,pdVar21,5,0);
        if ((uVar19 & 1) != 0) {
          return pdVar16;
        }
        pdVar16 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar16;
        }
        lVar31 = *(long *)(lVar15 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar31 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar33;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar17 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = pdVar16;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar28;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar29;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x70);
    if (lVar31 != 0) {
      lVar20 = lVar31;
      if (*(uint *)(lVar31 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar20 = *(long *)(lVar15 + 0x70);
      }
      if (lVar20 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        uVar37 = *(undefined8 *)(lVar31 + 0x28);
        uVar36 = *(undefined8 *)(lVar31 + 0x20);
        uVar12 = *(undefined4 *)(lVar31 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar12;
        uVar4 = *(undefined2 *)(lVar31 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar37;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar37;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar12;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,uVar17,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,uVar17);
        return pdVar16;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar21 = auVar38._8_8_;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar31;
    *(long *)((long)register0x00000008 + -0x100) = lVar15;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar17;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar33 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar15 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = (dword *)0x0;
      }
      else {
        pdVar16 = *(dword **)(lVar15 + 0x40);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar29 = (dword *)func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar16 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = pdVar16;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar16 = pdVar28;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = auVar38._8_8_;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar21 = pdVar23;
    while( true ) {
      puVar5 = puVar6 + -0x30;
      *(dword **)(puVar6 + -0x30) = pdVar30;
      *(dword **)(puVar6 + -0x28) = pdVar16;
      *(dword **)(puVar6 + -0x20) = pdVar28;
      *(dword **)(puVar6 + -0x18) = pdVar29;
      *(undefined1 **)(puVar6 + -0x10) = puVar33;
      *(undefined **)(puVar6 + -8) = puVar35;
      puVar33 = puVar6 + -0x10;
      puVar35 = &UNK_02f883d8;
      pdVar23 = pdVar21;
      pdVar29 = pdVar24;
      pdVar16 = pdVar21;
      pdVar30 = auVar38._0_8_;
code_r0x02f877a8:
      pdVar28 = auVar38._0_8_;
      puVar10 = puVar5 + -0x60;
      *(dword **)(puVar5 + -0x30) = pdVar30;
      *(long *)(puVar5 + -0x28) = auVar38._8_8_;
      *(dword **)(puVar5 + -0x20) = pdVar16;
      *(dword **)(puVar5 + -0x18) = pdVar29;
      *(undefined1 **)(puVar5 + -0x10) = puVar33;
      *(undefined **)(puVar5 + -8) = puVar35;
      puVar33 = puVar5 + -0x10;
      pdVar16 = pdVar28;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar16 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar27 = (uint)pdVar21;
      if (((int)uVar27 < 0) || ((int)*(long *)(pdVar28 + 0x14) <= (int)uVar27)) {
        return pdVar16;
      }
      lVar15 = *(long *)(pdVar28 + 0x1c);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar21 & 0xffffffff) * 0x28;
      pdVar30 = *(dword **)(lVar15 + 0x20);
      pdVar29 = *(dword **)(lVar15 + 0x28);
      *(undefined4 *)(puVar5 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
      *(undefined2 *)(puVar5 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
      if (pdVar29 == (dword *)0x0) {
        lVar15 = *(long *)(pdVar28 + 0x1c);
        if (lVar15 != 0) {
          *(dword **)(puVar5 + -0x58) = pdVar30;
          *(undefined8 *)(puVar5 + -0x50) = 0;
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined2 *)(puVar5 + -0x38) = 0;
          *(undefined4 *)(puVar5 + -0x36) = *(undefined4 *)(puVar5 + -0x60);
          *(undefined2 *)(puVar5 + -0x32) = *(undefined2 *)(puVar5 + -0x5c);
          pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar21,puVar5 + -0x58,uRam0000000003d3ddd0);
          return pdVar16;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar16 = pdVar29;
code_r0x02f882d8:
      *(dword **)(puVar10 + -0x20) = pdVar28;
      *(dword **)(puVar10 + -0x18) = pdVar21;
      *(undefined1 **)(puVar10 + -0x10) = puVar33;
      *(undefined **)(puVar10 + -8) = puVar35;
      (**(code **)(*(long *)pdVar29 + 0x218))(pdVar29,*(undefined8 *)(*(long *)pdVar29 + 0x220));
      if (*(long *)(pdVar29 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar29 + 10),0);
        pdVar29[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar29,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*(long *)pdVar29 + 0x228))
                                     (pdVar29,*(undefined8 *)(*(long *)pdVar29 + 0x230));
        return pdVar16;
      }
      func_0x00f78af4();
      puVar6 = puVar10 + -0x40;
      *(dword **)(puVar10 + -0x40) = pdVar28;
      *(dword **)(puVar10 + -0x38) = pdVar29;
      *(undefined1 **)(puVar10 + -0x30) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar33 = puVar10 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar15 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar17 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar17,lVar15);
        pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar16;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar38 = func_0x00f78af4();
      pdVar21 = pdVar23;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x98) = unaff_d8;
    *(dword **)(puVar5 + -0x90) = pdVar30;
    *(undefined8 *)(puVar5 + -0x88) = 0;
    *(dword **)(puVar5 + -0x80) = pdVar28;
    *(dword **)(puVar5 + -0x78) = pdVar21;
    *(undefined1 **)(puVar5 + -0x70) = puVar33;
    *(undefined **)(puVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar17,0);
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar17);
    return pdVar16;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 == 0) {
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = lVar15;
    if (lVar15 != 0) {
      pdVar24 = (dword *)0x0;
      puVar7 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar33 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar35 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar15;
    if (lVar15 == 0) {
      auVar38 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar15 = *(long *)(auVar38._0_8_ + 0x10);
      auVar41._8_8_ = auVar38._8_8_;
      auVar41._0_8_ = lVar15;
      if (lVar15 == 0) {
        pdVar30 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = pdVar16;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar28;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar29;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar17 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar17,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar30 + 0xc) = uVar17;
        return pdVar30;
      }
      puVar9 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar33 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar35 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar35 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar24 = pdVar23;
    pdVar30 = pdVar16;
  }
  else {
    pdVar24 = (dword *)0x0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = pdVar16;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar28;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar29;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar33 = (undefined1 *)((long)register0x00000008 + -0xa0);
    pdVar16 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar27 = auVar38._8_4_;
    if (((int)uVar27 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar27)) {
      return (dword *)0x0;
    }
    lVar15 = *(long *)(lVar15 + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(lVar15 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar15 = *(long *)(lVar31 + 0x28);
      cVar2 = *(char *)(lVar31 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar31 + 0x30),0);
      if (iVar14 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar35 = &Core_UI2_UIManager__GetLayerState;
    auVar39 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar29 = auVar38._8_8_;
code_r0x02f884dc:
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(dword **)(puVar7 + -0x28) = pdVar16;
    *(dword **)(puVar7 + -0x20) = pdVar28;
    *(dword **)(puVar7 + -0x18) = pdVar29;
    *(undefined1 **)(puVar7 + -0x10) = puVar33;
    *(undefined **)(puVar7 + -8) = puVar35;
    puVar33 = puVar7 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar15 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = &MACH_HEADER.cputype;
      }
      else {
        pdVar16 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIManager__EnableInput;
    auVar40 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar29 = auVar39._8_8_;
    pdVar30 = (dword *)0x3ebc000;
  }
  pdVar21 = auVar40._8_8_;
  pdVar16 = auVar40._0_8_;
  puVar9 = puVar8 + -0x40;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar8 + -0x30) = 0;
  *(dword **)(puVar8 + -0x28) = pdVar30;
  *(dword **)(puVar8 + -0x20) = pdVar28;
  *(dword **)(puVar8 + -0x18) = pdVar29;
  *(undefined1 **)(puVar8 + -0x10) = puVar33;
  *(undefined **)(puVar8 + -8) = puVar35;
  puVar33 = puVar8 + -0x10;
  pdVar30 = (dword *)0x3ebc000;
  pdVar23 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar16 + 0x1a) != 0) {
    pdVar23 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar29 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar16 + 0x1a),pdVar21,pdVar23,0);
    lVar15 = *(long *)(pdVar16 + 0x1c);
    pdVar30 = (dword *)0x0;
    if (lVar15 != 0) {
      uVar27 = auVar40._8_4_;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) ||
         (pdVar30 = *(dword **)(pdVar16 + 0xc), pdVar30 == (dword *)0x0)) {
        return pdVar29;
      }
      lVar15 = *(long *)(pdVar16 + 0x1c);
      pdVar16 = (dword *)0x0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar22 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
        *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
        *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
        *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        *(dword **)(puVar8 + -0x68) = pdVar30;
        lVar15 = *(long *)(pdVar30 + 0x1a);
        if (lVar15 == 0) {
          puVar33 = puVar8 + -0x68;
          lVar31 = 1;
        }
        else {
          lVar31 = *(long *)(lVar15 + 0x18);
          if (lVar31 == 0) {
            return pdVar30;
          }
          puVar33 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar20 = *(long *)(puVar33 + lVar15 * 8);
          pcVar32 = *(code **)(lVar20 + 0x10);
          plVar1 = *(long **)(lVar20 + 0x20);
          lVar20 = *(long *)(lVar20 + 0x28);
          if (*(short *)(lVar20 + 0x48) == -1) {
            func_0x00f78ad8(lVar20);
          }
          iVar14 = func_0x00f78a4c(lVar20);
          bVar11 = *(char *)(lVar20 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar16 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,lVar20);
              }
              else {
                if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar30 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar20);
                iVar13 = func_0x00f78ec0(lVar20);
                if (iVar14 == 0) {
                  uVar3 = *(ushort *)(lVar20 + 0x48);
                  if (iVar13 == 0) {
                    lVar20 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar16 = (dword *)(**(code **)(lVar20 + 0x138))
                                                 (plVar1,plVar22,pdVar21,pdVar24,
                                                  *(undefined8 *)(lVar20 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar20 = func_0x00f78a48(lVar20);
                  lVar25 = *plVar1;
                  uVar19 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar19 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar20) {
                        puVar18 = (undefined8 *)
                                  (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar26 = piVar26 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar32 = (code *)*puVar18;
                  puVar18 = (undefined8 *)puVar18[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar17 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar25 = *plVar1;
                    uVar19 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar19 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar20 + 0x18)) {
                          lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar20 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar26 = piVar26 + 4;
                        uVar19 = uVar19 - 1;
                      } while (uVar19 != 0);
                    }
                    lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar17 = *(undefined8 *)(lVar25 + 8);
                  }
                  puVar18 = (undefined8 *)func_0x00f78acc(uVar17,lVar20);
                  pcVar32 = (code *)*puVar18;
                }
                pdVar16 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,puVar18);
              }
            }
            else {
              if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar30 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar20);
              iVar13 = func_0x00f78ec0(lVar20);
              if (iVar14 == 0) {
                uVar3 = *(ushort *)(lVar20 + 0x48);
                if (iVar13 == 0) {
                  lVar20 = *plVar22 + (ulong)uVar3 * 0x10;
                  pdVar16 = (dword *)(**(code **)(lVar20 + 0x138))
                                               (plVar22,pdVar21,pdVar24,
                                                *(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar20 = func_0x00f78a48(lVar20);
                lVar25 = *plVar22;
                uVar19 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar19 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar20) {
                      puVar18 = (undefined8 *)
                                (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar26 = piVar26 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar22,lVar20,(ulong)uVar3);
code_r0x01e71d00:
                pcVar32 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar17 = *(undefined8 *)
                            (*plVar22 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar25 = *plVar22;
                  uVar19 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar19 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar26 = piVar26 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  lVar25 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                  uVar17 = *(undefined8 *)(lVar25 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar17,lVar20);
                pcVar32 = (code *)*puVar18;
              }
              pdVar16 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,puVar18);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar16 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,lVar20);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar31) {
            return pdVar16;
          }
        } while( true );
      }
    }
  }
  puVar35 = &Core_UI2_UIManager__SetScreenVisible;
  auVar41 = func_0x00f78af4();
  pdVar29 = pdVar24;
  pdVar28 = pdVar21;
code_r0x02f88674:
  pdVar24 = auVar41._0_8_;
  *(dword **)(puVar9 + -0x30) = pdVar30;
  *(dword **)(puVar9 + -0x28) = pdVar16;
  *(dword **)(puVar9 + -0x20) = pdVar28;
  *(dword **)(puVar9 + -0x18) = pdVar29;
  *(undefined1 **)(puVar9 + -0x10) = puVar33;
  *(undefined **)(puVar9 + -8) = puVar35;
  pdVar16 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar15 = *(long *)(pdVar24 + 0x1c);
  if (lVar15 != 0) {
    uVar27 = auVar41._8_4_;
    if (*(uint *)(lVar15 + 0x18) <= uVar27) {
      pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
      return pdVar16;
    }
    lVar15 = *(long *)(pdVar24 + 0x1c);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
      if ((lVar15 != 0) && (plVar22 = *(long **)(lVar15 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar22 + 0x178))
                                     (plVar22,pdVar23,*(undefined8 *)(*plVar22 + 0x180));
        return pdVar16;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar17 = auVar38._0_8_;
  *(long *)(puVar9 + -0x50) = auVar41._8_8_;
  *(dword **)(puVar9 + -0x48) = pdVar23;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar17,auVar38._8_8_,puVar9 + -0x70);
  if ((int)pdVar16 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar17,*(undefined8 *)(puVar9 + -0x60),*(undefined8 *)(puVar9 + -0x58));
    *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x68);
    *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x70);
    *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x58);
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x60);
    pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar17,puVar9 + -0x90,1);
  }
  return pdVar16;
}



// ============================================================
// RVA: 0x147de78 | Atlas.League.LeagueModeUIManager.DoPodiumSequence
// ============================================================

/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__DoPodiumSequence(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  dword *pdVar16;
  long lVar17;
  undefined8 *puVar18;
  dword *pdVar19;
  ulong uVar20;
  long *extraout_x1;
  dword *pdVar21;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  dword *pdVar28;
  undefined8 uVar29;
  dword *unaff_x21;
  dword *pdVar30;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  code *pcVar32;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar33;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar34;
  undefined *puVar35;
  undefined4 extraout_s0;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  dword *pdStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  
  uVar29 = 0x3eb4000;
  if ((bRam0000000003eb48d2 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e68);
    func_0x00f78a20(0x3d59ef8);
    func_0x00f78a20(0x3d27e78);
    bRam0000000003eb48d2 = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar15 = *(long *)(*(long *)(param_1 + 0x28) + 0x80), lVar15 == 0)) {
    puVar35 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
    lVar15 = func_0x00f78af4();
  }
  else {
    uVar29 = 0x3d27000;
    unaff_x21 = (dword *)0x3d27000;
    unaff_x22 = 0x3d59000;
    puVar35 = &UNK_0147df04;
  }
  uStack_90 = uVar29;
  lStack_88 = param_1;
  ppppppuStack_80 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_78 = puVar35;
  if ((bRam0000000003eb493a & 1) == 0) {
    func_0x00f78a20(0x3d3d470);
    bRam0000000003eb493a = 1;
  }
  pdVar16 = *(dword **)(lVar15 + 0x18);
  if (pdVar16 != (dword *)0x0) {
    pdVar19 = pdVar16;
    if (0 < (int)pdVar16[6]) {
      pdVar19 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar16 + 4),0,pdVar16[6],0);
      pdVar16[6] = 0;
    }
    pdVar16[7] = pdVar16[7] + 1;
    return pdVar19;
  }
  lVar17 = func_0x00f78af4();
  pdStack_b0 = (dword *)0x3eb4000;
  puStack_98 = &Atlas_League_LeagueModeUIManager__ShowPromotion;
  lVar31 = 0x3d59f00;
  pppppppuStack_a0 = &ppppppuStack_80;
  if ((bRam0000000003eb48d3 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e88);
    func_0x00f78a20(0x3d59f00);
    func_0x00f78a20(0x3d27e90);
    bRam0000000003eb48d3 = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
  Atlas_UI_Screens_LeaguePromotionScreen_TransitionData___ctor(pdVar16,0);
  pdVar19 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
  Atlas_UI_Screens_LeaguePromotionScreen_ContinueSelected___ctor
            (pdVar19,lVar17,uRam0000000003d59f00,0);
  if (pdVar16 == (dword *)0x0) {
code_r0x0147e164:
    unaff_x21 = pdVar19;
    lVar15 = lVar17;
    lVar17 = func_0x00f78af4();
    puVar18 = (undefined8 *)&stack0xfffffffffffffef0;
    puStack_d8 = &Atlas_League_LeagueModeUIManager__ShowReward;
    pdVar19 = (dword *)0x3eb4000;
    pppppppuStack_e0 = &pppppppuStack_a0;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    lVar25 = lVar17;
    pdVar30 = unaff_x21;
    unaff_x23 = 0x3d27e90;
    if (*(long *)(lVar17 + 0x50) == 0) {
code_r0x0147e318:
      unaff_x21 = pdVar30;
      lVar17 = func_0x00f78af4();
      lVar15 = lVar25;
      pdVar16 = pdVar19;
      pppppppuVar34 = &pppppppuStack_e0;
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
    }
    else {
      pdVar19 = (dword *)Atlas_League_LeagueManager__GetUnlockedRewardOrNull
                                   (*(long *)(lVar17 + 0x50),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar29 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar14 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar19,uVar29,0);
      if (iVar14 != 0) {
        pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar30,0);
        lVar31 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor
                  (lVar31,lVar17,uRam0000000003d59f08,0);
        unaff_x23 = 0x3d21270;
        if (pdVar30 != (dword *)0x0) {
          *(long *)(pdVar30 + 4) = lVar31;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar19,0);
          *(long *)(pdVar30 + 0xc) = lVar25;
          pdVar28 = *(dword **)(lVar17 + 0x30);
          *(long *)(pdVar30 + 0xe) = *(long *)(lVar17 + 0x28);
          *(undefined1 *)(pdVar30 + 0x10) = 1;
          pdVar19 = (dword *)0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar25 = 0;
          unaff_x23 = 0x3d21270;
          if (pdVar28 != (dword *)0x0) {
            pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            unaff_x22 = 0x3d59f00;
            puVar18 = (undefined8 *)&stack0xffffffffffffff30;
            unaff_x23 = 0x3d27e90;
            pppppppuVar34 = pppppppuStack_e0;
            puVar35 = puStack_d8;
            goto code_r0x0147079c;
          }
        }
        goto code_r0x0147e318;
      }
      lVar31 = 0x3d59f00;
      puVar18 = (undefined8 *)&stack0xffffffffffffff30;
      unaff_x23 = 0x3d27e90;
      pppppppuVar34 = pppppppuStack_e0;
      puVar35 = puStack_d8;
    }
    *(long *)((long)puVar18 + -0x30) = lVar31;
    *(dword **)((long)puVar18 + -0x28) = unaff_x21;
    *(dword **)((long)puVar18 + -0x20) = pdVar16;
    *(long *)((long)puVar18 + -0x18) = lVar15;
    *(undefined8 ********)((long)puVar18 + -0x10) = pppppppuVar34;
    *(undefined **)((long)puVar18 + -8) = puVar35;
    puVar33 = (undefined1 *)((long)puVar18 + -0x10);
    pdVar30 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    lVar15 = lVar17;
    if (*(long *)(lVar17 + 0x50) == 0) {
code_r0x0147e554:
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      lVar17 = func_0x00f78af4();
      puVar18 = (undefined8 *)((long)puVar18 + -0x30);
    }
    else {
      iVar14 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(lVar17 + 0x50),0);
      if (iVar14 == 0) {
        pdVar30 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar30,0);
        if (pdVar30 != (dword *)0x0) {
          pdVar30[4] = 9;
          *(long *)(pdVar30 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          unaff_x21 = *(dword **)(lVar17 + 0x60);
          if (unaff_x21 != (dword *)0x0) {
            uVar29 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x21,0);
            uVar12 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x21,uVar29,0);
            unaff_x21[0x10] = uVar12;
            if (*(long *)(lVar17 + 0x50) != 0) {
              unaff_x21 = *(dword **)(lVar17 + 0x58);
              lVar31 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(lVar17 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar29 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (unaff_x21 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(unaff_x21,lVar31,uVar29,*(undefined8 *)(lVar17 + 0x40),pdVar30,0);
                if (*(long *)(lVar17 + 0x50) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(lVar17 + 0x50),0);
                  if (*(long *)(lVar17 + 0x38) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar17 + 0x38),0,0,0);
                    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar30,0);
                    unaff_x21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (unaff_x21,lVar17,uRam0000000003d59f00,0);
                    if (pdVar30 != (dword *)0x0) {
                      *(dword **)(pdVar30 + 4) = unaff_x21;
                      *(undefined1 *)((long)pdVar30 + 0x19) = 1;
                      pdVar28 = *(dword **)(lVar17 + 0x30);
                      unaff_x21 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar15 = 0;
                      if (pdVar28 != (dword *)0x0) {
                        pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        pppppppuVar34 = *(undefined8 ********)((long)puVar18 + -0x10);
                        puVar35 = *(undefined **)((long)puVar18 + -8);
                        pdVar16 = *(dword **)((long)puVar18 + -0x20);
                        lVar15 = *(long *)((long)puVar18 + -0x18);
                        unaff_x22 = *(undefined8 *)((long)puVar18 + -0x30);
                        unaff_x21 = *(dword **)((long)puVar18 + -0x28);
                        goto code_r0x0147079c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar33 = *(undefined1 **)((long)puVar18 + -0x10);
      puVar35 = *(undefined **)((long)puVar18 + -8);
      pdVar30 = *(dword **)((long)puVar18 + -0x20);
      lVar15 = *(long *)((long)puVar18 + -0x18);
      lVar31 = *(long *)((long)puVar18 + -0x30);
      unaff_x21 = *(dword **)((long)puVar18 + -0x28);
    }
    *(undefined8 *)((long)puVar18 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar18 + -0x38) = unaff_x23;
    *(long *)((long)puVar18 + -0x30) = lVar31;
    *(dword **)((long)puVar18 + -0x28) = unaff_x21;
    *(dword **)((long)puVar18 + -0x20) = pdVar30;
    *(long *)((long)puVar18 + -0x18) = lVar15;
    *(undefined1 **)((long)puVar18 + -0x10) = puVar33;
    *(undefined **)((long)puVar18 + -8) = puVar35;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar30,0);
    lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar15,lVar17,uRam0000000003d59ed8,0);
    if (pdVar30 == (dword *)0x0) {
code_r0x0147e694:
      pdVar16 = (dword *)func_0x00f78af4();
      return pdVar16;
    }
    *(long *)(pdVar30 + 6) = lVar15;
    if (*(long *)(lVar17 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar30 + 4) = *(long *)(*(long *)(lVar17 + 0x20) + 0x10);
    *(long *)(pdVar30 + 8) = *(long *)(lVar17 + 0x28);
    *(undefined1 *)(pdVar30 + 10) = 1;
    if (*(long *)(lVar17 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar17 + 0x38),0,0,0);
    pdVar28 = *(dword **)(lVar17 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar28 == (dword *)0x0) goto code_r0x0147e694;
    pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    pppppppuVar34 = *(undefined8 ********)((long)puVar18 + -0x10);
    puVar35 = *(undefined **)((long)puVar18 + -8);
    pdVar16 = *(dword **)((long)puVar18 + -0x20);
    lVar15 = *(long *)((long)puVar18 + -0x18);
    unaff_x22 = *(undefined8 *)((long)puVar18 + -0x30);
    unaff_x21 = *(dword **)((long)puVar18 + -0x28);
    unaff_x24 = *(undefined8 *)((long)puVar18 + -0x40);
    unaff_x23 = *(undefined8 *)((long)puVar18 + -0x38);
  }
  else {
    *(dword **)(pdVar16 + 4) = pdVar19;
    if (*(long *)(lVar17 + 0x38) == 0) goto code_r0x0147e164;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar17 + 0x38),0,0,0);
    pdVar28 = *(dword **)(lVar17 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar17 = 0;
    pdVar19 = (dword *)0x3d1feb8;
    if (pdVar28 == (dword *)0x0) goto code_r0x0147e164;
    pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
    puVar18 = &uStack_90;
    pdVar30 = pdVar16;
    pdVar16 = pdStack_b0;
    pppppppuVar34 = pppppppuStack_a0;
    puVar35 = puStack_98;
  }
code_r0x0147079c:
  uVar29 = 0;
  pdVar23 = (dword *)0x0;
  *(undefined8 *)((long)puVar18 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar18 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar18 + -0x30) = unaff_x22;
  *(dword **)((long)puVar18 + -0x28) = unaff_x21;
  *(dword **)((long)puVar18 + -0x20) = pdVar16;
  *(long *)((long)puVar18 + -0x18) = lVar15;
  *(undefined8 ********)((long)puVar18 + -0x10) = pppppppuVar34;
  *(undefined **)((long)puVar18 + -8) = puVar35;
  puVar33 = (undefined1 *)((long)puVar18 + -0x10);
  pdVar16 = (dword *)0x0;
  pdVar24 = pdVar30;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)puVar18 + -0x48) = 0;
  lVar15 = *(long *)(pdVar28 + 4);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    uVar29 = 0;
    puVar35 = &UNK_01470820;
    pdVar21 = pdVar19;
    pdVar24 = pdVar30;
code_r0x02f87f38:
    *(undefined8 *)((long)puVar18 + -0x90) = unaff_x24;
    *(undefined8 *)((long)puVar18 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)puVar18 + -0x80) = 0;
    *(dword **)((long)puVar18 + -0x78) = pdVar30;
    *(dword **)((long)puVar18 + -0x70) = pdVar28;
    *(dword **)((long)puVar18 + -0x68) = pdVar19;
    *(undefined1 **)((long)puVar18 + -0x60) = puVar33;
    *(undefined **)((long)puVar18 + -0x58) = puVar35;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)puVar18 + -0x130) = unaff_x26;
    *(undefined8 *)((long)puVar18 + -0x128) = unaff_x25;
    *(undefined8 *)((long)puVar18 + -0x120) = 0x3ebc000;
    *(dword **)((long)puVar18 + -0x118) = pdVar21;
    *(dword **)((long)puVar18 + -0x110) = pdVar24;
    *(undefined8 *)((long)puVar18 + -0x108) = uVar29;
    *(long *)((long)puVar18 + -0x100) = lVar15;
    *(dword **)((long)puVar18 + -0xf8) = pdVar23;
    *(undefined1 **)((long)puVar18 + -0xf0) = (undefined1 *)((long)puVar18 + -0x60);
    *(undefined **)((long)puVar18 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x78);
    if (lVar31 != 0) {
      iVar14 = *(int *)(lVar31 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar31 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar31 == 0) break;
        uVar20 = /*System.String$$Equals*/ func_0x029caa48(lVar31,pdVar21,5,0);
        if ((uVar20 & 1) != 0) {
          return pdVar16;
        }
        pdVar16 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar16;
        }
        lVar31 = *(long *)(lVar15 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar31 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)puVar18 + -0x60) = puVar33;
  *(undefined **)((long)puVar18 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    puVar33 = *(undefined1 **)((long)puVar18 + -0x60);
    puVar35 = *(undefined **)((long)puVar18 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar29 = auVar38._8_8_;
  *(undefined1 **)((long)puVar18 + -0x70) = (undefined1 *)((long)puVar18 + -0x60);
  *(undefined **)((long)puVar18 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    *(undefined8 *)((long)puVar18 + -0x90) = 0;
    *(dword **)((long)puVar18 + -0x88) = pdVar30;
    *(dword **)((long)puVar18 + -0x80) = pdVar28;
    *(dword **)((long)puVar18 + -0x78) = pdVar19;
    *(undefined8 *)((long)puVar18 + -0x70) = *(undefined8 *)((long)puVar18 + -0x70);
    *(undefined8 *)((long)puVar18 + -0x68) = *(undefined8 *)((long)puVar18 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x70);
    if (lVar31 != 0) {
      lVar17 = lVar31;
      if (*(uint *)(lVar31 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar17 = *(long *)(lVar15 + 0x70);
      }
      if (lVar17 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        uVar37 = *(undefined8 *)(lVar31 + 0x28);
        uVar36 = *(undefined8 *)(lVar31 + 0x20);
        uVar12 = *(undefined4 *)(lVar31 + 0x42);
        *(undefined4 *)((long)puVar18 + -0xd8) = uVar12;
        uVar4 = *(undefined2 *)(lVar31 + 0x46);
        *(undefined2 *)((long)puVar18 + -0xd4) = uVar4;
        *(undefined8 *)((long)puVar18 + -200) = uVar37;
        *(undefined8 *)((long)puVar18 + -0xd0) = uVar36;
        *(undefined8 *)((long)puVar18 + -0xb8) = uVar37;
        *(undefined8 *)((long)puVar18 + -0xc0) = uVar36;
        *(undefined8 *)((long)puVar18 + -0xb0) = 0;
        *(undefined8 *)((long)puVar18 + -0xa8) = 0;
        *(undefined2 *)((long)puVar18 + -0xa0) = 1;
        *(undefined4 *)((long)puVar18 + -0x9e) = uVar12;
        *(undefined2 *)((long)puVar18 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,uVar29,(undefined1 *)((long)puVar18 + -0xc0),uRam0000000003d3ddd0);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,uVar29);
        return pdVar16;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar21 = auVar38._8_8_;
    puVar10 = (undefined1 *)((long)puVar18 + -0x110);
    *(undefined8 *)((long)puVar18 + -0x110) = 0;
    *(long *)((long)puVar18 + -0x108) = lVar31;
    *(long *)((long)puVar18 + -0x100) = lVar15;
    *(undefined8 *)((long)puVar18 + -0xf8) = uVar29;
    *(undefined1 **)((long)puVar18 + -0xf0) = (undefined1 *)((long)puVar18 + -0x70);
    *(undefined **)((long)puVar18 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar33 = (undefined1 *)((long)puVar18 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar15 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = (dword *)0x0;
      }
      else {
        pdVar16 = *(dword **)(lVar15 + 0x40);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar19 = (dword *)func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar30 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)puVar18 + -0x80) = (undefined1 *)((long)puVar18 + -0x70);
  *(undefined **)((long)puVar18 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = pdVar30;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    puVar5 = (undefined1 *)((long)puVar18 + -0x70);
    puVar33 = *(undefined1 **)((long)puVar18 + -0x80);
    puVar35 = *(undefined **)((long)puVar18 + -0x78);
    pdVar30 = pdVar28;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)puVar18 + -0x90) = (undefined1 *)((long)puVar18 + -0x80);
  *(undefined **)((long)puVar18 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = auVar38._8_8_;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    puVar6 = (undefined1 *)((long)puVar18 + -0x80);
    puVar33 = *(undefined1 **)((long)puVar18 + -0x90);
    puVar35 = *(undefined **)((long)puVar18 + -0x88);
    pdVar21 = pdVar23;
    while( true ) {
      puVar5 = puVar6 + -0x30;
      *(dword **)(puVar6 + -0x30) = pdVar16;
      *(dword **)(puVar6 + -0x28) = pdVar30;
      *(dword **)(puVar6 + -0x20) = pdVar28;
      *(dword **)(puVar6 + -0x18) = pdVar19;
      *(undefined1 **)(puVar6 + -0x10) = puVar33;
      *(undefined **)(puVar6 + -8) = puVar35;
      puVar33 = puVar6 + -0x10;
      puVar35 = &UNK_02f883d8;
      pdVar23 = pdVar21;
      pdVar19 = pdVar24;
      pdVar30 = pdVar21;
      pdVar16 = auVar38._0_8_;
code_r0x02f877a8:
      pdVar28 = auVar38._0_8_;
      puVar10 = puVar5 + -0x60;
      *(dword **)(puVar5 + -0x30) = pdVar16;
      *(long *)(puVar5 + -0x28) = auVar38._8_8_;
      *(dword **)(puVar5 + -0x20) = pdVar30;
      *(dword **)(puVar5 + -0x18) = pdVar19;
      *(undefined1 **)(puVar5 + -0x10) = puVar33;
      *(undefined **)(puVar5 + -8) = puVar35;
      puVar33 = puVar5 + -0x10;
      pdVar19 = pdVar28;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar19 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar27 = (uint)pdVar21;
      if (((int)uVar27 < 0) || ((int)*(long *)(pdVar28 + 0x14) <= (int)uVar27)) {
        return pdVar19;
      }
      lVar15 = *(long *)(pdVar28 + 0x1c);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar21 & 0xffffffff) * 0x28;
      pdVar16 = *(dword **)(lVar15 + 0x20);
      pdVar19 = *(dword **)(lVar15 + 0x28);
      *(undefined4 *)(puVar5 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
      *(undefined2 *)(puVar5 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
      if (pdVar19 == (dword *)0x0) {
        lVar15 = *(long *)(pdVar28 + 0x1c);
        if (lVar15 != 0) {
          *(dword **)(puVar5 + -0x58) = pdVar16;
          *(undefined8 *)(puVar5 + -0x50) = 0;
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined2 *)(puVar5 + -0x38) = 0;
          *(undefined4 *)(puVar5 + -0x36) = *(undefined4 *)(puVar5 + -0x60);
          *(undefined2 *)(puVar5 + -0x32) = *(undefined2 *)(puVar5 + -0x5c);
          pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar21,puVar5 + -0x58,uRam0000000003d3ddd0);
          return pdVar16;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar30 = pdVar19;
code_r0x02f882d8:
      *(dword **)(puVar10 + -0x20) = pdVar28;
      *(dword **)(puVar10 + -0x18) = pdVar21;
      *(undefined1 **)(puVar10 + -0x10) = puVar33;
      *(undefined **)(puVar10 + -8) = puVar35;
      (**(code **)(*(long *)pdVar19 + 0x218))(pdVar19,*(undefined8 *)(*(long *)pdVar19 + 0x220));
      if (*(long *)(pdVar19 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar19 + 10),0);
        pdVar19[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*(long *)pdVar19 + 0x228))
                                     (pdVar19,*(undefined8 *)(*(long *)pdVar19 + 0x230));
        return pdVar16;
      }
      func_0x00f78af4();
      puVar6 = puVar10 + -0x40;
      *(dword **)(puVar10 + -0x40) = pdVar28;
      *(dword **)(puVar10 + -0x38) = pdVar19;
      *(undefined1 **)(puVar10 + -0x30) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar33 = puVar10 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar15 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar29 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar29,lVar15);
        pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar16;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar38 = func_0x00f78af4();
      pdVar21 = pdVar23;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x98) = unaff_d8;
    *(dword **)(puVar5 + -0x90) = pdVar16;
    *(undefined8 *)(puVar5 + -0x88) = 0;
    *(dword **)(puVar5 + -0x80) = pdVar28;
    *(dword **)(puVar5 + -0x78) = pdVar21;
    *(undefined1 **)(puVar5 + -0x70) = puVar33;
    *(undefined **)(puVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar29 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar29,0);
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar29);
    return pdVar16;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)puVar18 + -0xa0) = (undefined1 *)((long)puVar18 + -0x90);
  *(undefined **)((long)puVar18 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 == 0) {
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)puVar18 + -0xb0) = (undefined1 *)((long)puVar18 + -0xa0);
    *(undefined **)((long)puVar18 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = lVar15;
    if (lVar15 != 0) {
      pdVar24 = (dword *)0x0;
      puVar7 = (undefined1 *)((long)puVar18 + -0xa0);
      puVar33 = *(undefined1 **)((long)puVar18 + -0xb0);
      puVar35 = *(undefined **)((long)puVar18 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)puVar18 + -0xc0) = (undefined1 *)((long)puVar18 + -0xb0);
    *(undefined **)((long)puVar18 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar15;
    if (lVar15 == 0) {
      auVar38 = func_0x00f78af4();
      *(undefined1 **)((long)puVar18 + -0xd0) = (undefined1 *)((long)puVar18 + -0xc0);
      *(undefined **)((long)puVar18 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar15 = *(long *)(auVar38._0_8_ + 0x10);
      auVar41._8_8_ = auVar38._8_8_;
      auVar41._0_8_ = lVar15;
      if (lVar15 == 0) {
        pdVar16 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)puVar18 + -0x100) = 0;
        *(dword **)((long)puVar18 + -0xf8) = pdVar30;
        *(dword **)((long)puVar18 + -0xf0) = pdVar28;
        *(dword **)((long)puVar18 + -0xe8) = pdVar19;
        *(undefined1 **)((long)puVar18 + -0xe0) = (undefined1 *)((long)puVar18 + -0xd0);
        *(undefined **)((long)puVar18 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar29 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar29,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar16 + 0xc) = uVar29;
        return pdVar16;
      }
      puVar9 = (undefined1 *)((long)puVar18 + -0xc0);
      puVar33 = *(undefined1 **)((long)puVar18 + -0xd0);
      puVar35 = *(undefined **)((long)puVar18 + -200);
      goto code_r0x02f88674;
    }
    puVar8 = (undefined1 *)((long)puVar18 + -0xb0);
    puVar33 = *(undefined1 **)((long)puVar18 + -0xc0);
    puVar35 = *(undefined **)((long)puVar18 + -0xb8);
    pdVar24 = pdVar23;
    pdVar16 = pdVar30;
  }
  else {
    pdVar24 = (dword *)0x0;
    puVar7 = (undefined1 *)((long)puVar18 + -0xc0);
    *(undefined8 *)((long)puVar18 + -0xc0) = 0;
    *(dword **)((long)puVar18 + -0xb8) = pdVar30;
    *(dword **)((long)puVar18 + -0xb0) = pdVar28;
    *(dword **)((long)puVar18 + -0xa8) = pdVar19;
    *(undefined8 *)((long)puVar18 + -0xa0) = *(undefined8 *)((long)puVar18 + -0xa0);
    *(undefined8 *)((long)puVar18 + -0x98) = *(undefined8 *)((long)puVar18 + -0x98);
    puVar33 = (undefined1 *)((long)puVar18 + -0xa0);
    pdVar30 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar27 = auVar38._8_4_;
    if (((int)uVar27 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar27)) {
      return (dword *)0x0;
    }
    lVar15 = *(long *)(lVar15 + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(lVar15 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar15 = *(long *)(lVar31 + 0x28);
      cVar2 = *(char *)(lVar31 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar31 + 0x30),0);
      if (iVar14 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar35 = &Core_UI2_UIManager__GetLayerState;
    auVar39 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar38._8_8_;
code_r0x02f884dc:
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(dword **)(puVar7 + -0x28) = pdVar30;
    *(dword **)(puVar7 + -0x20) = pdVar28;
    *(dword **)(puVar7 + -0x18) = pdVar19;
    *(undefined1 **)(puVar7 + -0x10) = puVar33;
    *(undefined **)(puVar7 + -8) = puVar35;
    puVar33 = puVar7 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar15 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = &MACH_HEADER.cputype;
      }
      else {
        pdVar16 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIManager__EnableInput;
    auVar40 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar39._8_8_;
    pdVar16 = (dword *)0x3ebc000;
  }
  pdVar21 = auVar40._8_8_;
  pdVar30 = auVar40._0_8_;
  puVar9 = puVar8 + -0x40;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar8 + -0x30) = 0;
  *(dword **)(puVar8 + -0x28) = pdVar16;
  *(dword **)(puVar8 + -0x20) = pdVar28;
  *(dword **)(puVar8 + -0x18) = pdVar19;
  *(undefined1 **)(puVar8 + -0x10) = puVar33;
  *(undefined **)(puVar8 + -8) = puVar35;
  puVar33 = puVar8 + -0x10;
  pdVar16 = (dword *)0x3ebc000;
  pdVar23 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar30 + 0x1a) != 0) {
    pdVar23 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar19 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar30 + 0x1a),pdVar21,pdVar23,0);
    lVar15 = *(long *)(pdVar30 + 0x1c);
    pdVar16 = (dword *)0x0;
    if (lVar15 != 0) {
      uVar27 = auVar40._8_4_;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) ||
         (pdVar16 = *(dword **)(pdVar30 + 0xc), pdVar16 == (dword *)0x0)) {
        return pdVar19;
      }
      lVar15 = *(long *)(pdVar30 + 0x1c);
      pdVar30 = (dword *)0x0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar22 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
        *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
        *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
        *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        *(dword **)(puVar8 + -0x68) = pdVar16;
        lVar15 = *(long *)(pdVar16 + 0x1a);
        if (lVar15 == 0) {
          puVar33 = puVar8 + -0x68;
          lVar31 = 1;
        }
        else {
          lVar31 = *(long *)(lVar15 + 0x18);
          if (lVar31 == 0) {
            return pdVar16;
          }
          puVar33 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar17 = *(long *)(puVar33 + lVar15 * 8);
          pcVar32 = *(code **)(lVar17 + 0x10);
          plVar1 = *(long **)(lVar17 + 0x20);
          lVar17 = *(long *)(lVar17 + 0x28);
          if (*(short *)(lVar17 + 0x48) == -1) {
            func_0x00f78ad8(lVar17);
          }
          iVar14 = func_0x00f78a4c(lVar17);
          bVar11 = *(char *)(lVar17 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar19 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,lVar17);
              }
              else {
                if (((*(short *)(lVar17 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar16 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar17);
                iVar13 = func_0x00f78ec0(lVar17);
                if (iVar14 == 0) {
                  uVar3 = *(ushort *)(lVar17 + 0x48);
                  if (iVar13 == 0) {
                    lVar17 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar19 = (dword *)(**(code **)(lVar17 + 0x138))
                                                 (plVar1,plVar22,pdVar21,pdVar24,
                                                  *(undefined8 *)(lVar17 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar17 = func_0x00f78a48(lVar17);
                  lVar25 = *plVar1;
                  uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar20 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar17) {
                        puVar18 = (undefined8 *)
                                  (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar26 = piVar26 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar17,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar32 = (code *)*puVar18;
                  puVar18 = (undefined8 *)puVar18[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar29 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar25 = *plVar1;
                    uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar20 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                          lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar26 = piVar26 + 4;
                        uVar20 = uVar20 - 1;
                      } while (uVar20 != 0);
                    }
                    lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar29 = *(undefined8 *)(lVar25 + 8);
                  }
                  puVar18 = (undefined8 *)func_0x00f78acc(uVar29,lVar17);
                  pcVar32 = (code *)*puVar18;
                }
                pdVar19 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,puVar18);
              }
            }
            else {
              if ((*(short *)(lVar17 + 0x48) == -1) || (*(long *)(pdVar16 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar17);
              iVar13 = func_0x00f78ec0(lVar17);
              if (iVar14 == 0) {
                uVar3 = *(ushort *)(lVar17 + 0x48);
                if (iVar13 == 0) {
                  lVar17 = *plVar22 + (ulong)uVar3 * 0x10;
                  pdVar19 = (dword *)(**(code **)(lVar17 + 0x138))
                                               (plVar22,pdVar21,pdVar24,
                                                *(undefined8 *)(lVar17 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar17 = func_0x00f78a48(lVar17);
                lVar25 = *plVar22;
                uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar20 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar17) {
                      puVar18 = (undefined8 *)
                                (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar26 = piVar26 + 4;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar22,lVar17,(ulong)uVar3);
code_r0x01e71d00:
                pcVar32 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar29 = *(undefined8 *)
                            (*plVar22 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar25 = *plVar22;
                  uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar20 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar26 = piVar26 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  lVar25 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                  uVar29 = *(undefined8 *)(lVar25 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar29,lVar17);
                pcVar32 = (code *)*puVar18;
              }
              pdVar19 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,puVar18);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar19 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,lVar17);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar31) {
            return pdVar19;
          }
        } while( true );
      }
    }
  }
  puVar35 = &Core_UI2_UIManager__SetScreenVisible;
  auVar41 = func_0x00f78af4();
  pdVar19 = pdVar24;
  pdVar28 = pdVar21;
code_r0x02f88674:
  pdVar24 = auVar41._0_8_;
  *(dword **)(puVar9 + -0x30) = pdVar16;
  *(dword **)(puVar9 + -0x28) = pdVar30;
  *(dword **)(puVar9 + -0x20) = pdVar28;
  *(dword **)(puVar9 + -0x18) = pdVar19;
  *(undefined1 **)(puVar9 + -0x10) = puVar33;
  *(undefined **)(puVar9 + -8) = puVar35;
  pdVar16 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar15 = *(long *)(pdVar24 + 0x1c);
  if (lVar15 != 0) {
    uVar27 = auVar41._8_4_;
    if (*(uint *)(lVar15 + 0x18) <= uVar27) {
      pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
      return pdVar16;
    }
    lVar15 = *(long *)(pdVar24 + 0x1c);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
      if ((lVar15 != 0) && (plVar22 = *(long **)(lVar15 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar22 + 0x178))
                                     (plVar22,pdVar23,*(undefined8 *)(*plVar22 + 0x180));
        return pdVar16;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar29 = auVar38._0_8_;
  *(long *)(puVar9 + -0x50) = auVar41._8_8_;
  *(dword **)(puVar9 + -0x48) = pdVar23;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar29,auVar38._8_8_,puVar9 + -0x70);
  if ((int)pdVar16 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar29,*(undefined8 *)(puVar9 + -0x60),*(undefined8 *)(puVar9 + -0x58));
    *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x68);
    *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x70);
    *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x58);
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x60);
    pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar29,puVar9 + -0x90,1);
  }
  return pdVar16;
}



// ============================================================
// RVA: 0x147de7c | Atlas.League.LeagueModeUIManager.ShowPodium
// ============================================================

/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__ShowPodium(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  dword *pdVar16;
  long lVar17;
  undefined8 *puVar18;
  dword *pdVar19;
  ulong uVar20;
  long *extraout_x1;
  dword *pdVar21;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  dword *pdVar28;
  undefined8 uVar29;
  dword *unaff_x21;
  dword *pdVar30;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  code *pcVar32;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar33;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar34;
  undefined *puVar35;
  undefined4 extraout_s0;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  dword *pdStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  
  uVar29 = 0x3eb4000;
  if ((bRam0000000003eb48d2 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e68);
    func_0x00f78a20(0x3d59ef8);
    func_0x00f78a20(0x3d27e78);
    bRam0000000003eb48d2 = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar15 = *(long *)(*(long *)(param_1 + 0x28) + 0x80), lVar15 == 0)) {
    puVar35 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
    lVar15 = func_0x00f78af4();
  }
  else {
    uVar29 = 0x3d27000;
    unaff_x21 = (dword *)0x3d27000;
    unaff_x22 = 0x3d59000;
    puVar35 = (undefined *)0x147df04;
  }
  uStack_90 = uVar29;
  lStack_88 = param_1;
  ppppppuStack_80 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_78 = puVar35;
  if ((bRam0000000003eb493a & 1) == 0) {
    func_0x00f78a20(0x3d3d470);
    bRam0000000003eb493a = 1;
  }
  pdVar16 = *(dword **)(lVar15 + 0x18);
  if (pdVar16 != (dword *)0x0) {
    pdVar19 = pdVar16;
    if (0 < (int)pdVar16[6]) {
      pdVar19 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar16 + 4),0,pdVar16[6],0);
      pdVar16[6] = 0;
    }
    pdVar16[7] = pdVar16[7] + 1;
    return pdVar19;
  }
  lVar17 = func_0x00f78af4();
  pdStack_b0 = (dword *)0x3eb4000;
  puStack_98 = &Atlas_League_LeagueModeUIManager__ShowPromotion;
  lVar31 = 0x3d59f00;
  pppppppuStack_a0 = &ppppppuStack_80;
  if ((bRam0000000003eb48d3 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e88);
    func_0x00f78a20(0x3d59f00);
    func_0x00f78a20(0x3d27e90);
    bRam0000000003eb48d3 = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
  Atlas_UI_Screens_LeaguePromotionScreen_TransitionData___ctor(pdVar16,0);
  pdVar19 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
  Atlas_UI_Screens_LeaguePromotionScreen_ContinueSelected___ctor
            (pdVar19,lVar17,uRam0000000003d59f00,0);
  if (pdVar16 == (dword *)0x0) {
code_r0x0147e164:
    unaff_x21 = pdVar19;
    lVar15 = lVar17;
    lVar17 = func_0x00f78af4();
    puVar18 = (undefined8 *)&stack0xfffffffffffffef0;
    puStack_d8 = &Atlas_League_LeagueModeUIManager__ShowReward;
    pdVar19 = (dword *)0x3eb4000;
    pppppppuStack_e0 = &pppppppuStack_a0;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    lVar25 = lVar17;
    pdVar30 = unaff_x21;
    unaff_x23 = 0x3d27e90;
    if (*(long *)(lVar17 + 0x50) == 0) {
code_r0x0147e318:
      unaff_x21 = pdVar30;
      lVar17 = func_0x00f78af4();
      lVar15 = lVar25;
      pdVar16 = pdVar19;
      pppppppuVar34 = &pppppppuStack_e0;
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
    }
    else {
      pdVar19 = (dword *)Atlas_League_LeagueManager__GetUnlockedRewardOrNull
                                   (*(long *)(lVar17 + 0x50),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar29 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar14 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar19,uVar29,0);
      if (iVar14 != 0) {
        pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar30,0);
        lVar31 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor
                  (lVar31,lVar17,uRam0000000003d59f08,0);
        unaff_x23 = 0x3d21270;
        if (pdVar30 != (dword *)0x0) {
          *(long *)(pdVar30 + 4) = lVar31;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar19,0);
          *(long *)(pdVar30 + 0xc) = lVar25;
          pdVar28 = *(dword **)(lVar17 + 0x30);
          *(long *)(pdVar30 + 0xe) = *(long *)(lVar17 + 0x28);
          *(undefined1 *)(pdVar30 + 0x10) = 1;
          pdVar19 = (dword *)0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar25 = 0;
          unaff_x23 = 0x3d21270;
          if (pdVar28 != (dword *)0x0) {
            pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            unaff_x22 = 0x3d59f00;
            puVar18 = (undefined8 *)&stack0xffffffffffffff30;
            unaff_x23 = 0x3d27e90;
            pppppppuVar34 = pppppppuStack_e0;
            puVar35 = puStack_d8;
            goto code_r0x0147079c;
          }
        }
        goto code_r0x0147e318;
      }
      lVar31 = 0x3d59f00;
      puVar18 = (undefined8 *)&stack0xffffffffffffff30;
      unaff_x23 = 0x3d27e90;
      pppppppuVar34 = pppppppuStack_e0;
      puVar35 = puStack_d8;
    }
    *(long *)((long)puVar18 + -0x30) = lVar31;
    *(dword **)((long)puVar18 + -0x28) = unaff_x21;
    *(dword **)((long)puVar18 + -0x20) = pdVar16;
    *(long *)((long)puVar18 + -0x18) = lVar15;
    *(undefined8 ********)((long)puVar18 + -0x10) = pppppppuVar34;
    *(undefined **)((long)puVar18 + -8) = puVar35;
    puVar33 = (undefined1 *)((long)puVar18 + -0x10);
    pdVar30 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    lVar15 = lVar17;
    if (*(long *)(lVar17 + 0x50) == 0) {
code_r0x0147e554:
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      lVar17 = func_0x00f78af4();
      puVar18 = (undefined8 *)((long)puVar18 + -0x30);
    }
    else {
      iVar14 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(lVar17 + 0x50),0);
      if (iVar14 == 0) {
        pdVar30 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar30,0);
        if (pdVar30 != (dword *)0x0) {
          pdVar30[4] = 9;
          *(long *)(pdVar30 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          unaff_x21 = *(dword **)(lVar17 + 0x60);
          if (unaff_x21 != (dword *)0x0) {
            uVar29 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x21,0);
            uVar12 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x21,uVar29,0);
            unaff_x21[0x10] = uVar12;
            if (*(long *)(lVar17 + 0x50) != 0) {
              unaff_x21 = *(dword **)(lVar17 + 0x58);
              lVar31 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(lVar17 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar29 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (unaff_x21 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(unaff_x21,lVar31,uVar29,*(undefined8 *)(lVar17 + 0x40),pdVar30,0);
                if (*(long *)(lVar17 + 0x50) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(lVar17 + 0x50),0);
                  if (*(long *)(lVar17 + 0x38) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar17 + 0x38),0,0,0);
                    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar30,0);
                    unaff_x21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (unaff_x21,lVar17,uRam0000000003d59f00,0);
                    if (pdVar30 != (dword *)0x0) {
                      *(dword **)(pdVar30 + 4) = unaff_x21;
                      *(undefined1 *)((long)pdVar30 + 0x19) = 1;
                      pdVar28 = *(dword **)(lVar17 + 0x30);
                      unaff_x21 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar15 = 0;
                      if (pdVar28 != (dword *)0x0) {
                        pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        pppppppuVar34 = *(undefined8 ********)((long)puVar18 + -0x10);
                        puVar35 = *(undefined **)((long)puVar18 + -8);
                        pdVar16 = *(dword **)((long)puVar18 + -0x20);
                        lVar15 = *(long *)((long)puVar18 + -0x18);
                        unaff_x22 = *(undefined8 *)((long)puVar18 + -0x30);
                        unaff_x21 = *(dword **)((long)puVar18 + -0x28);
                        goto code_r0x0147079c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar33 = *(undefined1 **)((long)puVar18 + -0x10);
      puVar35 = *(undefined **)((long)puVar18 + -8);
      pdVar30 = *(dword **)((long)puVar18 + -0x20);
      lVar15 = *(long *)((long)puVar18 + -0x18);
      lVar31 = *(long *)((long)puVar18 + -0x30);
      unaff_x21 = *(dword **)((long)puVar18 + -0x28);
    }
    *(undefined8 *)((long)puVar18 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar18 + -0x38) = unaff_x23;
    *(long *)((long)puVar18 + -0x30) = lVar31;
    *(dword **)((long)puVar18 + -0x28) = unaff_x21;
    *(dword **)((long)puVar18 + -0x20) = pdVar30;
    *(long *)((long)puVar18 + -0x18) = lVar15;
    *(undefined1 **)((long)puVar18 + -0x10) = puVar33;
    *(undefined **)((long)puVar18 + -8) = puVar35;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar30,0);
    lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar15,lVar17,uRam0000000003d59ed8,0);
    if (pdVar30 == (dword *)0x0) {
code_r0x0147e694:
      pdVar16 = (dword *)func_0x00f78af4();
      return pdVar16;
    }
    *(long *)(pdVar30 + 6) = lVar15;
    if (*(long *)(lVar17 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar30 + 4) = *(long *)(*(long *)(lVar17 + 0x20) + 0x10);
    *(long *)(pdVar30 + 8) = *(long *)(lVar17 + 0x28);
    *(undefined1 *)(pdVar30 + 10) = 1;
    if (*(long *)(lVar17 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar17 + 0x38),0,0,0);
    pdVar28 = *(dword **)(lVar17 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar28 == (dword *)0x0) goto code_r0x0147e694;
    pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    pppppppuVar34 = *(undefined8 ********)((long)puVar18 + -0x10);
    puVar35 = *(undefined **)((long)puVar18 + -8);
    pdVar16 = *(dword **)((long)puVar18 + -0x20);
    lVar15 = *(long *)((long)puVar18 + -0x18);
    unaff_x22 = *(undefined8 *)((long)puVar18 + -0x30);
    unaff_x21 = *(dword **)((long)puVar18 + -0x28);
    unaff_x24 = *(undefined8 *)((long)puVar18 + -0x40);
    unaff_x23 = *(undefined8 *)((long)puVar18 + -0x38);
  }
  else {
    *(dword **)(pdVar16 + 4) = pdVar19;
    if (*(long *)(lVar17 + 0x38) == 0) goto code_r0x0147e164;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar17 + 0x38),0,0,0);
    pdVar28 = *(dword **)(lVar17 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar17 = 0;
    pdVar19 = (dword *)0x3d1feb8;
    if (pdVar28 == (dword *)0x0) goto code_r0x0147e164;
    pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
    puVar18 = &uStack_90;
    pdVar30 = pdVar16;
    pdVar16 = pdStack_b0;
    pppppppuVar34 = pppppppuStack_a0;
    puVar35 = puStack_98;
  }
code_r0x0147079c:
  uVar29 = 0;
  pdVar23 = (dword *)0x0;
  *(undefined8 *)((long)puVar18 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar18 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar18 + -0x30) = unaff_x22;
  *(dword **)((long)puVar18 + -0x28) = unaff_x21;
  *(dword **)((long)puVar18 + -0x20) = pdVar16;
  *(long *)((long)puVar18 + -0x18) = lVar15;
  *(undefined8 ********)((long)puVar18 + -0x10) = pppppppuVar34;
  *(undefined **)((long)puVar18 + -8) = puVar35;
  puVar33 = (undefined1 *)((long)puVar18 + -0x10);
  pdVar16 = (dword *)0x0;
  pdVar24 = pdVar30;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)puVar18 + -0x48) = 0;
  lVar15 = *(long *)(pdVar28 + 4);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    uVar29 = 0;
    puVar35 = &UNK_01470820;
    pdVar21 = pdVar19;
    pdVar24 = pdVar30;
code_r0x02f87f38:
    *(undefined8 *)((long)puVar18 + -0x90) = unaff_x24;
    *(undefined8 *)((long)puVar18 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)puVar18 + -0x80) = 0;
    *(dword **)((long)puVar18 + -0x78) = pdVar30;
    *(dword **)((long)puVar18 + -0x70) = pdVar28;
    *(dword **)((long)puVar18 + -0x68) = pdVar19;
    *(undefined1 **)((long)puVar18 + -0x60) = puVar33;
    *(undefined **)((long)puVar18 + -0x58) = puVar35;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)puVar18 + -0x130) = unaff_x26;
    *(undefined8 *)((long)puVar18 + -0x128) = unaff_x25;
    *(undefined8 *)((long)puVar18 + -0x120) = 0x3ebc000;
    *(dword **)((long)puVar18 + -0x118) = pdVar21;
    *(dword **)((long)puVar18 + -0x110) = pdVar24;
    *(undefined8 *)((long)puVar18 + -0x108) = uVar29;
    *(long *)((long)puVar18 + -0x100) = lVar15;
    *(dword **)((long)puVar18 + -0xf8) = pdVar23;
    *(undefined1 **)((long)puVar18 + -0xf0) = (undefined1 *)((long)puVar18 + -0x60);
    *(undefined **)((long)puVar18 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x78);
    if (lVar31 != 0) {
      iVar14 = *(int *)(lVar31 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar31 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar31 == 0) break;
        uVar20 = /*System.String$$Equals*/ func_0x029caa48(lVar31,pdVar21,5,0);
        if ((uVar20 & 1) != 0) {
          return pdVar16;
        }
        pdVar16 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar16;
        }
        lVar31 = *(long *)(lVar15 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar31 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)puVar18 + -0x60) = puVar33;
  *(undefined **)((long)puVar18 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    puVar33 = *(undefined1 **)((long)puVar18 + -0x60);
    puVar35 = *(undefined **)((long)puVar18 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar29 = auVar38._8_8_;
  *(undefined1 **)((long)puVar18 + -0x70) = (undefined1 *)((long)puVar18 + -0x60);
  *(undefined **)((long)puVar18 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    *(undefined8 *)((long)puVar18 + -0x90) = 0;
    *(dword **)((long)puVar18 + -0x88) = pdVar30;
    *(dword **)((long)puVar18 + -0x80) = pdVar28;
    *(dword **)((long)puVar18 + -0x78) = pdVar19;
    *(undefined8 *)((long)puVar18 + -0x70) = *(undefined8 *)((long)puVar18 + -0x70);
    *(undefined8 *)((long)puVar18 + -0x68) = *(undefined8 *)((long)puVar18 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x70);
    if (lVar31 != 0) {
      lVar17 = lVar31;
      if (*(uint *)(lVar31 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar17 = *(long *)(lVar15 + 0x70);
      }
      if (lVar17 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        uVar37 = *(undefined8 *)(lVar31 + 0x28);
        uVar36 = *(undefined8 *)(lVar31 + 0x20);
        uVar12 = *(undefined4 *)(lVar31 + 0x42);
        *(undefined4 *)((long)puVar18 + -0xd8) = uVar12;
        uVar4 = *(undefined2 *)(lVar31 + 0x46);
        *(undefined2 *)((long)puVar18 + -0xd4) = uVar4;
        *(undefined8 *)((long)puVar18 + -200) = uVar37;
        *(undefined8 *)((long)puVar18 + -0xd0) = uVar36;
        *(undefined8 *)((long)puVar18 + -0xb8) = uVar37;
        *(undefined8 *)((long)puVar18 + -0xc0) = uVar36;
        *(undefined8 *)((long)puVar18 + -0xb0) = 0;
        *(undefined8 *)((long)puVar18 + -0xa8) = 0;
        *(undefined2 *)((long)puVar18 + -0xa0) = 1;
        *(undefined4 *)((long)puVar18 + -0x9e) = uVar12;
        *(undefined2 *)((long)puVar18 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,uVar29,(undefined1 *)((long)puVar18 + -0xc0),uRam0000000003d3ddd0);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,uVar29);
        return pdVar16;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar21 = auVar38._8_8_;
    puVar10 = (undefined1 *)((long)puVar18 + -0x110);
    *(undefined8 *)((long)puVar18 + -0x110) = 0;
    *(long *)((long)puVar18 + -0x108) = lVar31;
    *(long *)((long)puVar18 + -0x100) = lVar15;
    *(undefined8 *)((long)puVar18 + -0xf8) = uVar29;
    *(undefined1 **)((long)puVar18 + -0xf0) = (undefined1 *)((long)puVar18 + -0x70);
    *(undefined **)((long)puVar18 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar33 = (undefined1 *)((long)puVar18 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar15 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = (dword *)0x0;
      }
      else {
        pdVar16 = *(dword **)(lVar15 + 0x40);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar19 = (dword *)func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar30 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)puVar18 + -0x80) = (undefined1 *)((long)puVar18 + -0x70);
  *(undefined **)((long)puVar18 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = pdVar30;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    puVar5 = (undefined1 *)((long)puVar18 + -0x70);
    puVar33 = *(undefined1 **)((long)puVar18 + -0x80);
    puVar35 = *(undefined **)((long)puVar18 + -0x78);
    pdVar30 = pdVar28;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)puVar18 + -0x90) = (undefined1 *)((long)puVar18 + -0x80);
  *(undefined **)((long)puVar18 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = auVar38._8_8_;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    puVar6 = (undefined1 *)((long)puVar18 + -0x80);
    puVar33 = *(undefined1 **)((long)puVar18 + -0x90);
    puVar35 = *(undefined **)((long)puVar18 + -0x88);
    pdVar21 = pdVar23;
    while( true ) {
      puVar5 = puVar6 + -0x30;
      *(dword **)(puVar6 + -0x30) = pdVar16;
      *(dword **)(puVar6 + -0x28) = pdVar30;
      *(dword **)(puVar6 + -0x20) = pdVar28;
      *(dword **)(puVar6 + -0x18) = pdVar19;
      *(undefined1 **)(puVar6 + -0x10) = puVar33;
      *(undefined **)(puVar6 + -8) = puVar35;
      puVar33 = puVar6 + -0x10;
      puVar35 = &UNK_02f883d8;
      pdVar23 = pdVar21;
      pdVar19 = pdVar24;
      pdVar30 = pdVar21;
      pdVar16 = auVar38._0_8_;
code_r0x02f877a8:
      pdVar28 = auVar38._0_8_;
      puVar10 = puVar5 + -0x60;
      *(dword **)(puVar5 + -0x30) = pdVar16;
      *(long *)(puVar5 + -0x28) = auVar38._8_8_;
      *(dword **)(puVar5 + -0x20) = pdVar30;
      *(dword **)(puVar5 + -0x18) = pdVar19;
      *(undefined1 **)(puVar5 + -0x10) = puVar33;
      *(undefined **)(puVar5 + -8) = puVar35;
      puVar33 = puVar5 + -0x10;
      pdVar19 = pdVar28;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar19 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar27 = (uint)pdVar21;
      if (((int)uVar27 < 0) || ((int)*(long *)(pdVar28 + 0x14) <= (int)uVar27)) {
        return pdVar19;
      }
      lVar15 = *(long *)(pdVar28 + 0x1c);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar21 & 0xffffffff) * 0x28;
      pdVar16 = *(dword **)(lVar15 + 0x20);
      pdVar19 = *(dword **)(lVar15 + 0x28);
      *(undefined4 *)(puVar5 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
      *(undefined2 *)(puVar5 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
      if (pdVar19 == (dword *)0x0) {
        lVar15 = *(long *)(pdVar28 + 0x1c);
        if (lVar15 != 0) {
          *(dword **)(puVar5 + -0x58) = pdVar16;
          *(undefined8 *)(puVar5 + -0x50) = 0;
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined2 *)(puVar5 + -0x38) = 0;
          *(undefined4 *)(puVar5 + -0x36) = *(undefined4 *)(puVar5 + -0x60);
          *(undefined2 *)(puVar5 + -0x32) = *(undefined2 *)(puVar5 + -0x5c);
          pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar21,puVar5 + -0x58,uRam0000000003d3ddd0);
          return pdVar16;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar30 = pdVar19;
code_r0x02f882d8:
      *(dword **)(puVar10 + -0x20) = pdVar28;
      *(dword **)(puVar10 + -0x18) = pdVar21;
      *(undefined1 **)(puVar10 + -0x10) = puVar33;
      *(undefined **)(puVar10 + -8) = puVar35;
      (**(code **)(*(long *)pdVar19 + 0x218))(pdVar19,*(undefined8 *)(*(long *)pdVar19 + 0x220));
      if (*(long *)(pdVar19 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar19 + 10),0);
        pdVar19[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*(long *)pdVar19 + 0x228))
                                     (pdVar19,*(undefined8 *)(*(long *)pdVar19 + 0x230));
        return pdVar16;
      }
      func_0x00f78af4();
      puVar6 = puVar10 + -0x40;
      *(dword **)(puVar10 + -0x40) = pdVar28;
      *(dword **)(puVar10 + -0x38) = pdVar19;
      *(undefined1 **)(puVar10 + -0x30) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar33 = puVar10 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar15 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar29 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar29,lVar15);
        pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar16;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar38 = func_0x00f78af4();
      pdVar21 = pdVar23;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x98) = unaff_d8;
    *(dword **)(puVar5 + -0x90) = pdVar16;
    *(undefined8 *)(puVar5 + -0x88) = 0;
    *(dword **)(puVar5 + -0x80) = pdVar28;
    *(dword **)(puVar5 + -0x78) = pdVar21;
    *(undefined1 **)(puVar5 + -0x70) = puVar33;
    *(undefined **)(puVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar29 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar29,0);
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar29);
    return pdVar16;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)puVar18 + -0xa0) = (undefined1 *)((long)puVar18 + -0x90);
  *(undefined **)((long)puVar18 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 == 0) {
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)puVar18 + -0xb0) = (undefined1 *)((long)puVar18 + -0xa0);
    *(undefined **)((long)puVar18 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = lVar15;
    if (lVar15 != 0) {
      pdVar24 = (dword *)0x0;
      puVar7 = (undefined1 *)((long)puVar18 + -0xa0);
      puVar33 = *(undefined1 **)((long)puVar18 + -0xb0);
      puVar35 = *(undefined **)((long)puVar18 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)puVar18 + -0xc0) = (undefined1 *)((long)puVar18 + -0xb0);
    *(undefined **)((long)puVar18 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar15;
    if (lVar15 == 0) {
      auVar38 = func_0x00f78af4();
      *(undefined1 **)((long)puVar18 + -0xd0) = (undefined1 *)((long)puVar18 + -0xc0);
      *(undefined **)((long)puVar18 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar15 = *(long *)(auVar38._0_8_ + 0x10);
      auVar41._8_8_ = auVar38._8_8_;
      auVar41._0_8_ = lVar15;
      if (lVar15 == 0) {
        pdVar16 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)puVar18 + -0x100) = 0;
        *(dword **)((long)puVar18 + -0xf8) = pdVar30;
        *(dword **)((long)puVar18 + -0xf0) = pdVar28;
        *(dword **)((long)puVar18 + -0xe8) = pdVar19;
        *(undefined1 **)((long)puVar18 + -0xe0) = (undefined1 *)((long)puVar18 + -0xd0);
        *(undefined **)((long)puVar18 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar29 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar29,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar16 + 0xc) = uVar29;
        return pdVar16;
      }
      puVar9 = (undefined1 *)((long)puVar18 + -0xc0);
      puVar33 = *(undefined1 **)((long)puVar18 + -0xd0);
      puVar35 = *(undefined **)((long)puVar18 + -200);
      goto code_r0x02f88674;
    }
    puVar8 = (undefined1 *)((long)puVar18 + -0xb0);
    puVar33 = *(undefined1 **)((long)puVar18 + -0xc0);
    puVar35 = *(undefined **)((long)puVar18 + -0xb8);
    pdVar24 = pdVar23;
    pdVar16 = pdVar30;
  }
  else {
    pdVar24 = (dword *)0x0;
    puVar7 = (undefined1 *)((long)puVar18 + -0xc0);
    *(undefined8 *)((long)puVar18 + -0xc0) = 0;
    *(dword **)((long)puVar18 + -0xb8) = pdVar30;
    *(dword **)((long)puVar18 + -0xb0) = pdVar28;
    *(dword **)((long)puVar18 + -0xa8) = pdVar19;
    *(undefined8 *)((long)puVar18 + -0xa0) = *(undefined8 *)((long)puVar18 + -0xa0);
    *(undefined8 *)((long)puVar18 + -0x98) = *(undefined8 *)((long)puVar18 + -0x98);
    puVar33 = (undefined1 *)((long)puVar18 + -0xa0);
    pdVar30 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar27 = auVar38._8_4_;
    if (((int)uVar27 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar27)) {
      return (dword *)0x0;
    }
    lVar15 = *(long *)(lVar15 + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(lVar15 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar15 = *(long *)(lVar31 + 0x28);
      cVar2 = *(char *)(lVar31 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar31 + 0x30),0);
      if (iVar14 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar35 = &Core_UI2_UIManager__GetLayerState;
    auVar39 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar38._8_8_;
code_r0x02f884dc:
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(dword **)(puVar7 + -0x28) = pdVar30;
    *(dword **)(puVar7 + -0x20) = pdVar28;
    *(dword **)(puVar7 + -0x18) = pdVar19;
    *(undefined1 **)(puVar7 + -0x10) = puVar33;
    *(undefined **)(puVar7 + -8) = puVar35;
    puVar33 = puVar7 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar15 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = &MACH_HEADER.cputype;
      }
      else {
        pdVar16 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIManager__EnableInput;
    auVar40 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar39._8_8_;
    pdVar16 = (dword *)0x3ebc000;
  }
  pdVar21 = auVar40._8_8_;
  pdVar30 = auVar40._0_8_;
  puVar9 = puVar8 + -0x40;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar8 + -0x30) = 0;
  *(dword **)(puVar8 + -0x28) = pdVar16;
  *(dword **)(puVar8 + -0x20) = pdVar28;
  *(dword **)(puVar8 + -0x18) = pdVar19;
  *(undefined1 **)(puVar8 + -0x10) = puVar33;
  *(undefined **)(puVar8 + -8) = puVar35;
  puVar33 = puVar8 + -0x10;
  pdVar16 = (dword *)0x3ebc000;
  pdVar23 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar30 + 0x1a) != 0) {
    pdVar23 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar19 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar30 + 0x1a),pdVar21,pdVar23,0);
    lVar15 = *(long *)(pdVar30 + 0x1c);
    pdVar16 = (dword *)0x0;
    if (lVar15 != 0) {
      uVar27 = auVar40._8_4_;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) ||
         (pdVar16 = *(dword **)(pdVar30 + 0xc), pdVar16 == (dword *)0x0)) {
        return pdVar19;
      }
      lVar15 = *(long *)(pdVar30 + 0x1c);
      pdVar30 = (dword *)0x0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar22 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
        *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
        *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
        *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        *(dword **)(puVar8 + -0x68) = pdVar16;
        lVar15 = *(long *)(pdVar16 + 0x1a);
        if (lVar15 == 0) {
          puVar33 = puVar8 + -0x68;
          lVar31 = 1;
        }
        else {
          lVar31 = *(long *)(lVar15 + 0x18);
          if (lVar31 == 0) {
            return pdVar16;
          }
          puVar33 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar17 = *(long *)(puVar33 + lVar15 * 8);
          pcVar32 = *(code **)(lVar17 + 0x10);
          plVar1 = *(long **)(lVar17 + 0x20);
          lVar17 = *(long *)(lVar17 + 0x28);
          if (*(short *)(lVar17 + 0x48) == -1) {
            func_0x00f78ad8(lVar17);
          }
          iVar14 = func_0x00f78a4c(lVar17);
          bVar11 = *(char *)(lVar17 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar19 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,lVar17);
              }
              else {
                if (((*(short *)(lVar17 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar16 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar17);
                iVar13 = func_0x00f78ec0(lVar17);
                if (iVar14 == 0) {
                  uVar3 = *(ushort *)(lVar17 + 0x48);
                  if (iVar13 == 0) {
                    lVar17 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar19 = (dword *)(**(code **)(lVar17 + 0x138))
                                                 (plVar1,plVar22,pdVar21,pdVar24,
                                                  *(undefined8 *)(lVar17 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar17 = func_0x00f78a48(lVar17);
                  lVar25 = *plVar1;
                  uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar20 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar17) {
                        puVar18 = (undefined8 *)
                                  (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar26 = piVar26 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar17,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar32 = (code *)*puVar18;
                  puVar18 = (undefined8 *)puVar18[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar29 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar25 = *plVar1;
                    uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar20 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                          lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar26 = piVar26 + 4;
                        uVar20 = uVar20 - 1;
                      } while (uVar20 != 0);
                    }
                    lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar29 = *(undefined8 *)(lVar25 + 8);
                  }
                  puVar18 = (undefined8 *)func_0x00f78acc(uVar29,lVar17);
                  pcVar32 = (code *)*puVar18;
                }
                pdVar19 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,puVar18);
              }
            }
            else {
              if ((*(short *)(lVar17 + 0x48) == -1) || (*(long *)(pdVar16 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar17);
              iVar13 = func_0x00f78ec0(lVar17);
              if (iVar14 == 0) {
                uVar3 = *(ushort *)(lVar17 + 0x48);
                if (iVar13 == 0) {
                  lVar17 = *plVar22 + (ulong)uVar3 * 0x10;
                  pdVar19 = (dword *)(**(code **)(lVar17 + 0x138))
                                               (plVar22,pdVar21,pdVar24,
                                                *(undefined8 *)(lVar17 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar17 = func_0x00f78a48(lVar17);
                lVar25 = *plVar22;
                uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar20 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar17) {
                      puVar18 = (undefined8 *)
                                (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar26 = piVar26 + 4;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar22,lVar17,(ulong)uVar3);
code_r0x01e71d00:
                pcVar32 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar29 = *(undefined8 *)
                            (*plVar22 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar25 = *plVar22;
                  uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar20 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar26 = piVar26 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  lVar25 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                  uVar29 = *(undefined8 *)(lVar25 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar29,lVar17);
                pcVar32 = (code *)*puVar18;
              }
              pdVar19 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,puVar18);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar19 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,lVar17);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar31) {
            return pdVar19;
          }
        } while( true );
      }
    }
  }
  puVar35 = &Core_UI2_UIManager__SetScreenVisible;
  auVar41 = func_0x00f78af4();
  pdVar19 = pdVar24;
  pdVar28 = pdVar21;
code_r0x02f88674:
  pdVar24 = auVar41._0_8_;
  *(dword **)(puVar9 + -0x30) = pdVar16;
  *(dword **)(puVar9 + -0x28) = pdVar30;
  *(dword **)(puVar9 + -0x20) = pdVar28;
  *(dword **)(puVar9 + -0x18) = pdVar19;
  *(undefined1 **)(puVar9 + -0x10) = puVar33;
  *(undefined **)(puVar9 + -8) = puVar35;
  pdVar16 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar15 = *(long *)(pdVar24 + 0x1c);
  if (lVar15 != 0) {
    uVar27 = auVar41._8_4_;
    if (*(uint *)(lVar15 + 0x18) <= uVar27) {
      pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
      return pdVar16;
    }
    lVar15 = *(long *)(pdVar24 + 0x1c);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
      if ((lVar15 != 0) && (plVar22 = *(long **)(lVar15 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar22 + 0x178))
                                     (plVar22,pdVar23,*(undefined8 *)(*plVar22 + 0x180));
        return pdVar16;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar29 = auVar38._0_8_;
  *(long *)(puVar9 + -0x50) = auVar41._8_8_;
  *(dword **)(puVar9 + -0x48) = pdVar23;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar29,auVar38._8_8_,puVar9 + -0x70);
  if ((int)pdVar16 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar29,*(undefined8 *)(puVar9 + -0x60),*(undefined8 *)(puVar9 + -0x58));
    *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x68);
    *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x70);
    *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x58);
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x60);
    pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar29,puVar9 + -0x90,1);
  }
  return pdVar16;
}



// ============================================================
// RVA: 0x147e048 | Atlas.League.LeagueModeUIManager.ShowPromotion
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__ShowPromotion(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  long lVar15;
  int iVar13;
  int iVar14;
  dword *pdVar16;
  dword *pdVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long *extraout_x1;
  dword *pdVar21;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  undefined8 uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  long unaff_x19;
  dword *pdVar29;
  dword *unaff_x20;
  dword *unaff_x21;
  dword *pdVar30;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  code *pcVar32;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar33;
  undefined8 unaff_x28;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar34;
  undefined *puVar35;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  lVar15 = 0x3d59f00;
  if ((bRam0000000003eb48d3 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e88);
    func_0x00f78a20(0x3d59f00);
    func_0x00f78a20(0x3d27e90);
    bRam0000000003eb48d3 = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
  Atlas_UI_Screens_LeaguePromotionScreen_TransitionData___ctor(pdVar16,0);
  pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
  Atlas_UI_Screens_LeaguePromotionScreen_ContinueSelected___ctor
            (pdVar17,param_1,uRam0000000003d59f00,0);
  if (pdVar16 == (dword *)0x0) {
LAB_0147e164:
    unaff_x21 = pdVar17;
    unaff_x19 = param_1;
    lVar31 = func_0x00f78af4();
    puStack_48 = &Atlas_League_LeagueModeUIManager__ShowReward;
    pppppppuVar34 = &pppppppuStack_50;
    pdVar17 = (dword *)0x3eb4000;
    pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    lVar20 = lVar31;
    pdVar30 = unaff_x21;
    unaff_x23 = 0x3d27e90;
    if (*(long *)(lVar31 + 0x50) == 0) {
code_r0x0147e318:
      unaff_x21 = pdVar30;
      lVar31 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
      unaff_x19 = lVar20;
      pdVar16 = pdVar17;
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
    }
    else {
      pdVar17 = (dword *)Atlas_League_LeagueManager__GetUnlockedRewardOrNull
                                   (*(long *)(lVar31 + 0x50),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar14 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar17,uVar25,0);
      if (iVar14 != 0) {
        pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar30,0);
        lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor
                  (lVar15,lVar31,uRam0000000003d59f08,0);
        unaff_x23 = 0x3d21270;
        if (pdVar30 != (dword *)0x0) {
          *(long *)(pdVar30 + 4) = lVar15;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar17,0);
          *(long *)(pdVar30 + 0xc) = lVar20;
          pdVar29 = *(dword **)(lVar31 + 0x30);
          *(long *)(pdVar30 + 0xe) = *(long *)(lVar31 + 0x28);
          *(undefined1 *)(pdVar30 + 0x10) = 1;
          pdVar17 = (dword *)0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar20 = 0;
          unaff_x23 = 0x3d21270;
          if (pdVar29 != (dword *)0x0) {
            pdVar17 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            unaff_x22 = 0x3d59f00;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            unaff_x23 = 0x3d27e90;
            unaff_x29 = pppppppuStack_50;
            unaff_x30 = puStack_48;
            goto Atlas_UI_AtlasUIManager__TransitionToScreen;
          }
        }
        goto code_r0x0147e318;
      }
      lVar15 = 0x3d59f00;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x23 = 0x3d27e90;
      pppppppuVar34 = pppppppuStack_50;
      puVar35 = puStack_48;
    }
    *(long *)((long)register0x00000008 + -0x30) = lVar15;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = pdVar16;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuVar34;
    *(undefined **)((long)register0x00000008 + -8) = puVar35;
    puVar33 = (undefined1 *)((long)register0x00000008 + -0x10);
    pdVar30 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    lVar20 = lVar31;
    if (*(long *)(lVar31 + 0x50) == 0) {
code_r0x0147e554:
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      lVar31 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    }
    else {
      iVar14 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(lVar31 + 0x50),0);
      if (iVar14 == 0) {
        pdVar30 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar30,0);
        if (pdVar30 != (dword *)0x0) {
          pdVar30[4] = 9;
          *(long *)(pdVar30 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          unaff_x21 = *(dword **)(lVar31 + 0x60);
          if (unaff_x21 != (dword *)0x0) {
            uVar25 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x21,0);
            uVar12 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x21,uVar25,0);
            unaff_x21[0x10] = uVar12;
            if (*(long *)(lVar31 + 0x50) != 0) {
              unaff_x21 = *(dword **)(lVar31 + 0x58);
              lVar15 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(lVar31 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar25 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (unaff_x21 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(unaff_x21,lVar15,uVar25,*(undefined8 *)(lVar31 + 0x40),pdVar30,0);
                if (*(long *)(lVar31 + 0x50) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(lVar31 + 0x50),0);
                  if (*(long *)(lVar31 + 0x38) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar31 + 0x38),0,0,0);
                    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar30,0);
                    unaff_x21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (unaff_x21,lVar31,uRam0000000003d59f00,0);
                    if (pdVar30 != (dword *)0x0) {
                      *(dword **)(pdVar30 + 4) = unaff_x21;
                      *(undefined1 *)((long)pdVar30 + 0x19) = 1;
                      pdVar29 = *(dword **)(lVar31 + 0x30);
                      unaff_x21 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar20 = 0;
                      if (pdVar29 != (dword *)0x0) {
                        pdVar17 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
                        unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
                        pdVar16 = *(dword **)((long)register0x00000008 + -0x20);
                        unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
                        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
                        unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
                        goto Atlas_UI_AtlasUIManager__TransitionToScreen;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar33 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar35 = *(undefined **)((long)register0x00000008 + -8);
      pdVar30 = *(dword **)((long)register0x00000008 + -0x20);
      lVar20 = *(long *)((long)register0x00000008 + -0x18);
      lVar15 = *(long *)((long)register0x00000008 + -0x30);
      unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = lVar15;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = pdVar30;
    *(long *)((long)register0x00000008 + -0x18) = lVar20;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar33;
    *(undefined **)((long)register0x00000008 + -8) = puVar35;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar30,0);
    lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar15,lVar31,uRam0000000003d59ed8,0);
    if (pdVar30 == (dword *)0x0) {
code_r0x0147e694:
      pdVar16 = (dword *)func_0x00f78af4();
      return pdVar16;
    }
    *(long *)(pdVar30 + 6) = lVar15;
    if (*(long *)(lVar31 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar30 + 4) = *(long *)(*(long *)(lVar31 + 0x20) + 0x10);
    *(long *)(pdVar30 + 8) = *(long *)(lVar31 + 0x28);
    *(undefined1 *)(pdVar30 + 10) = 1;
    if (*(long *)(lVar31 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar31 + 0x38),0,0,0);
    pdVar29 = *(dword **)(lVar31 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar29 == (dword *)0x0) goto code_r0x0147e694;
    pdVar17 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    pdVar16 = *(dword **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
  }
  else {
    *(dword **)(pdVar16 + 4) = pdVar17;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0147e164;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x38),0,0,0);
    pdVar29 = *(dword **)(param_1 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = 0;
    pdVar17 = (dword *)0x3d1feb8;
    if (pdVar29 == (dword *)0x0) goto LAB_0147e164;
    pdVar17 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
    pdVar30 = pdVar16;
    pdVar16 = unaff_x20;
  }
Atlas_UI_AtlasUIManager__TransitionToScreen:
  uVar25 = 0;
  pdVar23 = (dword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(dword **)((long)register0x00000008 + -0x20) = pdVar16;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar33 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar16 = (dword *)0x0;
  pdVar24 = pdVar30;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar15 = *(long *)(pdVar29 + 4);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    uVar25 = 0;
    puVar35 = &UNK_01470820;
    pdVar21 = pdVar17;
    pdVar24 = pdVar30;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar30;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar29;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar17;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar33;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar35;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar21;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar24;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar25;
    *(long *)((long)register0x00000008 + -0x100) = lVar15;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar23;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x78);
    if (lVar31 != 0) {
      iVar14 = *(int *)(lVar31 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar31 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar31 == 0) break;
        uVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar31,pdVar21,5,0);
        if ((uVar19 & 1) != 0) {
          return pdVar16;
        }
        pdVar16 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar16;
        }
        lVar31 = *(long *)(lVar15 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar31 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar33;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar25 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = pdVar30;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar29;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar17;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar31 = *(long *)(lVar15 + 0x70);
    if (lVar31 != 0) {
      lVar20 = lVar31;
      if (*(uint *)(lVar31 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar20 = *(long *)(lVar15 + 0x70);
      }
      if (lVar20 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        uVar37 = *(undefined8 *)(lVar31 + 0x28);
        uVar36 = *(undefined8 *)(lVar31 + 0x20);
        uVar12 = *(undefined4 *)(lVar31 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar12;
        uVar4 = *(undefined2 *)(lVar31 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar37;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar37;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar12;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,uVar25,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,uVar25);
        return pdVar16;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar21 = auVar38._8_8_;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar31;
    *(long *)((long)register0x00000008 + -0x100) = lVar15;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar25;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar33 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar15 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = (dword *)0x0;
      }
      else {
        pdVar16 = *(dword **)(lVar15 + 0x40);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar17 = (dword *)func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar30 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = pdVar30;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    pdVar23 = (dword *)0x0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar30 = pdVar29;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = auVar38._8_8_;
  auVar38._0_8_ = lVar15;
  if (lVar15 != 0) {
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar21 = pdVar23;
    while( true ) {
      puVar5 = puVar6 + -0x30;
      *(dword **)(puVar6 + -0x30) = pdVar16;
      *(dword **)(puVar6 + -0x28) = pdVar30;
      *(dword **)(puVar6 + -0x20) = pdVar29;
      *(dword **)(puVar6 + -0x18) = pdVar17;
      *(undefined1 **)(puVar6 + -0x10) = puVar33;
      *(undefined **)(puVar6 + -8) = puVar35;
      puVar33 = puVar6 + -0x10;
      puVar35 = &UNK_02f883d8;
      pdVar23 = pdVar21;
      pdVar17 = pdVar24;
      pdVar30 = pdVar21;
      pdVar16 = auVar38._0_8_;
code_r0x02f877a8:
      pdVar29 = auVar38._0_8_;
      puVar10 = puVar5 + -0x60;
      *(dword **)(puVar5 + -0x30) = pdVar16;
      *(long *)(puVar5 + -0x28) = auVar38._8_8_;
      *(dword **)(puVar5 + -0x20) = pdVar30;
      *(dword **)(puVar5 + -0x18) = pdVar17;
      *(undefined1 **)(puVar5 + -0x10) = puVar33;
      *(undefined **)(puVar5 + -8) = puVar35;
      puVar33 = puVar5 + -0x10;
      pdVar17 = pdVar29;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar17 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar28 = (uint)pdVar21;
      if (((int)uVar28 < 0) || ((int)*(long *)(pdVar29 + 0x14) <= (int)uVar28)) {
        return pdVar17;
      }
      lVar15 = *(long *)(pdVar29 + 0x1c);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar21 & 0xffffffff) * 0x28;
      pdVar16 = *(dword **)(lVar15 + 0x20);
      pdVar17 = *(dword **)(lVar15 + 0x28);
      *(undefined4 *)(puVar5 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
      *(undefined2 *)(puVar5 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
      if (pdVar17 == (dword *)0x0) {
        lVar15 = *(long *)(pdVar29 + 0x1c);
        if (lVar15 != 0) {
          *(dword **)(puVar5 + -0x58) = pdVar16;
          *(undefined8 *)(puVar5 + -0x50) = 0;
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined2 *)(puVar5 + -0x38) = 0;
          *(undefined4 *)(puVar5 + -0x36) = *(undefined4 *)(puVar5 + -0x60);
          *(undefined2 *)(puVar5 + -0x32) = *(undefined2 *)(puVar5 + -0x5c);
          pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar21,puVar5 + -0x58,uRam0000000003d3ddd0);
          return pdVar16;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar30 = pdVar17;
code_r0x02f882d8:
      *(dword **)(puVar10 + -0x20) = pdVar29;
      *(dword **)(puVar10 + -0x18) = pdVar21;
      *(undefined1 **)(puVar10 + -0x10) = puVar33;
      *(undefined **)(puVar10 + -8) = puVar35;
      (**(code **)(*(long *)pdVar17 + 0x218))(pdVar17,*(undefined8 *)(*(long *)pdVar17 + 0x220));
      if (*(long *)(pdVar17 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar17 + 10),0);
        pdVar17[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar17,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*(long *)pdVar17 + 0x228))
                                     (pdVar17,*(undefined8 *)(*(long *)pdVar17 + 0x230));
        return pdVar16;
      }
      func_0x00f78af4();
      puVar6 = puVar10 + -0x40;
      *(dword **)(puVar10 + -0x40) = pdVar29;
      *(dword **)(puVar10 + -0x38) = pdVar17;
      *(undefined1 **)(puVar10 + -0x30) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar33 = puVar10 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar15 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar25 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar25,lVar15);
        pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar16;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar38 = func_0x00f78af4();
      pdVar21 = pdVar23;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x98) = unaff_d8;
    *(dword **)(puVar5 + -0x90) = pdVar16;
    *(undefined8 *)(puVar5 + -0x88) = 0;
    *(dword **)(puVar5 + -0x80) = pdVar29;
    *(dword **)(puVar5 + -0x78) = pdVar21;
    *(undefined1 **)(puVar5 + -0x70) = puVar33;
    *(undefined **)(puVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar25,0);
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
    return pdVar16;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar15 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar15 == 0) {
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = lVar15;
    if (lVar15 != 0) {
      pdVar24 = (dword *)0x0;
      puVar7 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar33 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar35 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar15 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar15;
    if (lVar15 == 0) {
      auVar38 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar15 = *(long *)(auVar38._0_8_ + 0x10);
      auVar41._8_8_ = auVar38._8_8_;
      auVar41._0_8_ = lVar15;
      if (lVar15 == 0) {
        pdVar16 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = pdVar30;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar29;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar17;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar25,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar16 + 0xc) = uVar25;
        return pdVar16;
      }
      puVar9 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar33 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar35 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar33 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar35 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar24 = pdVar23;
    pdVar16 = pdVar30;
  }
  else {
    pdVar24 = (dword *)0x0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = pdVar30;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar29;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar17;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar33 = (undefined1 *)((long)register0x00000008 + -0xa0);
    pdVar30 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar28 = auVar38._8_4_;
    if (((int)uVar28 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar28)) {
      return (dword *)0x0;
    }
    lVar15 = *(long *)(lVar15 + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(lVar15 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar15 = *(long *)(lVar31 + 0x28);
      cVar2 = *(char *)(lVar31 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar31 + 0x30),0);
      if (iVar14 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar35 = &Core_UI2_UIManager__GetLayerState;
    auVar39 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar17 = auVar38._8_8_;
code_r0x02f884dc:
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(dword **)(puVar7 + -0x28) = pdVar30;
    *(dword **)(puVar7 + -0x20) = pdVar29;
    *(dword **)(puVar7 + -0x18) = pdVar17;
    *(undefined1 **)(puVar7 + -0x10) = puVar33;
    *(undefined **)(puVar7 + -8) = puVar35;
    puVar33 = puVar7 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar15 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar16 = &MACH_HEADER.cputype;
      }
      else {
        pdVar16 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIManager__EnableInput;
    auVar40 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar17 = auVar39._8_8_;
    pdVar16 = (dword *)0x3ebc000;
  }
  pdVar21 = auVar40._8_8_;
  pdVar30 = auVar40._0_8_;
  puVar9 = puVar8 + -0x40;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar8 + -0x30) = 0;
  *(dword **)(puVar8 + -0x28) = pdVar16;
  *(dword **)(puVar8 + -0x20) = pdVar29;
  *(dword **)(puVar8 + -0x18) = pdVar17;
  *(undefined1 **)(puVar8 + -0x10) = puVar33;
  *(undefined **)(puVar8 + -8) = puVar35;
  puVar33 = puVar8 + -0x10;
  pdVar16 = (dword *)0x3ebc000;
  pdVar23 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar30 + 0x1a) != 0) {
    pdVar23 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar17 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar30 + 0x1a),pdVar21,pdVar23,0);
    lVar15 = *(long *)(pdVar30 + 0x1c);
    pdVar16 = (dword *)0x0;
    if (lVar15 != 0) {
      uVar28 = auVar40._8_4_;
      if (*(uint *)(lVar15 + 0x18) <= uVar28) {
        pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
         (pdVar16 = *(dword **)(pdVar30 + 0xc), pdVar16 == (dword *)0x0)) {
        return pdVar17;
      }
      lVar15 = *(long *)(pdVar30 + 0x1c);
      pdVar30 = (dword *)0x0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar22 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
        *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
        *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
        *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        *(dword **)(puVar8 + -0x68) = pdVar16;
        lVar15 = *(long *)(pdVar16 + 0x1a);
        if (lVar15 == 0) {
          puVar33 = puVar8 + -0x68;
          lVar31 = 1;
        }
        else {
          lVar31 = *(long *)(lVar15 + 0x18);
          if (lVar31 == 0) {
            return pdVar16;
          }
          puVar33 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar20 = *(long *)(puVar33 + lVar15 * 8);
          pcVar32 = *(code **)(lVar20 + 0x10);
          plVar1 = *(long **)(lVar20 + 0x20);
          lVar20 = *(long *)(lVar20 + 0x28);
          if (*(short *)(lVar20 + 0x48) == -1) {
            func_0x00f78ad8(lVar20);
          }
          iVar14 = func_0x00f78a4c(lVar20);
          bVar11 = *(char *)(lVar20 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar17 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,lVar20);
              }
              else {
                if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar16 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar20);
                iVar13 = func_0x00f78ec0(lVar20);
                if (iVar14 == 0) {
                  uVar3 = *(ushort *)(lVar20 + 0x48);
                  if (iVar13 == 0) {
                    lVar20 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar17 = (dword *)(**(code **)(lVar20 + 0x138))
                                                 (plVar1,plVar22,pdVar21,pdVar24,
                                                  *(undefined8 *)(lVar20 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar20 = func_0x00f78a48(lVar20);
                  lVar26 = *plVar1;
                  uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar19 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar20) {
                        puVar18 = (undefined8 *)
                                  (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar27 = piVar27 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar32 = (code *)*puVar18;
                  puVar18 = (undefined8 *)puVar18[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar25 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar26 = *plVar1;
                    uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar19 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == *(long *)(lVar20 + 0x18)) {
                          lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar20 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar27 = piVar27 + 4;
                        uVar19 = uVar19 - 1;
                      } while (uVar19 != 0);
                    }
                    lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar25 = *(undefined8 *)(lVar26 + 8);
                  }
                  puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                  pcVar32 = (code *)*puVar18;
                }
                pdVar17 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,puVar18);
              }
            }
            else {
              if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar16 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar20);
              iVar13 = func_0x00f78ec0(lVar20);
              if (iVar14 == 0) {
                uVar3 = *(ushort *)(lVar20 + 0x48);
                if (iVar13 == 0) {
                  lVar20 = *plVar22 + (ulong)uVar3 * 0x10;
                  pdVar17 = (dword *)(**(code **)(lVar20 + 0x138))
                                               (plVar22,pdVar21,pdVar24,
                                                *(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar20 = func_0x00f78a48(lVar20);
                lVar26 = *plVar22;
                uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar19 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar20) {
                      puVar18 = (undefined8 *)
                                (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar27 = piVar27 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar22,lVar20,(ulong)uVar3);
code_r0x01e71d00:
                pcVar32 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar22 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar26 = *plVar22;
                  uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar19 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar27 = piVar27 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  lVar26 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                  uVar25 = *(undefined8 *)(lVar26 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                pcVar32 = (code *)*puVar18;
              }
              pdVar17 = (dword *)(*pcVar32)(plVar22,pdVar21,pdVar24,puVar18);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar17 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar21,pdVar24,lVar20);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar31) {
            return pdVar17;
          }
        } while( true );
      }
    }
  }
  puVar35 = &Core_UI2_UIManager__SetScreenVisible;
  auVar41 = func_0x00f78af4();
  pdVar17 = pdVar24;
  pdVar29 = pdVar21;
code_r0x02f88674:
  pdVar24 = auVar41._0_8_;
  *(dword **)(puVar9 + -0x30) = pdVar16;
  *(dword **)(puVar9 + -0x28) = pdVar30;
  *(dword **)(puVar9 + -0x20) = pdVar29;
  *(dword **)(puVar9 + -0x18) = pdVar17;
  *(undefined1 **)(puVar9 + -0x10) = puVar33;
  *(undefined **)(puVar9 + -8) = puVar35;
  pdVar16 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar15 = *(long *)(pdVar24 + 0x1c);
  if (lVar15 != 0) {
    uVar28 = auVar41._8_4_;
    if (*(uint *)(lVar15 + 0x18) <= uVar28) {
      pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
      return pdVar16;
    }
    lVar15 = *(long *)(pdVar24 + 0x1c);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
      if ((lVar15 != 0) && (plVar22 = *(long **)(lVar15 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar22 + 0x178))
                                     (plVar22,pdVar23,*(undefined8 *)(*plVar22 + 0x180));
        return pdVar16;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar25 = auVar38._0_8_;
  *(long *)(puVar9 + -0x50) = auVar41._8_8_;
  *(dword **)(puVar9 + -0x48) = pdVar23;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar38._8_8_,puVar9 + -0x70);
  if ((int)pdVar16 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,*(undefined8 *)(puVar9 + -0x60),*(undefined8 *)(puVar9 + -0x58));
    *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x68);
    *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x70);
    *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x58);
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x60);
    pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,puVar9 + -0x90,1);
  }
  return pdVar16;
}



// ============================================================
// RVA: 0x147e168 | Atlas.League.LeagueModeUIManager.ShowReward
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__ShowReward(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  dword *pdVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  dword *pdVar22;
  dword *pdVar23;
  long *extraout_x1;
  dword *pdVar24;
  long *plVar25;
  dword *pdVar26;
  dword *pdVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar31;
  dword *unaff_x21;
  dword *pdVar32;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar33;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar34;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar35;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 uVar36;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  puVar34 = &stack0xfffffffffffffff0;
  uVar31 = 0x3eb4000;
  if ((bRam0000000003eb48d4 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d59f08);
    func_0x00f78a20(0x3d289a0);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb48d4 = 1;
  }
  lVar18 = param_1;
  pdVar16 = unaff_x21;
  lVar17 = unaff_x22;
  uVar15 = unaff_x23;
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_0147e318;
  uVar31 = Atlas_League_LeagueManager__GetUnlockedRewardOrNull(*(long *)(param_1 + 0x50),0);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
  iVar12 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar31,uVar15,0);
  if (iVar12 == 0) {
code_r0x0147e31c:
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar34 = (undefined1 *)((long)register0x00000008 + -0x10);
    pdVar16 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    lVar18 = param_1;
    if (*(long *)(param_1 + 0x50) == 0) {
code_r0x0147e554:
      puVar35 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      param_1 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    }
    else {
      iVar12 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(param_1 + 0x50),0);
      if (iVar12 == 0) {
        pdVar16 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar16,0);
        if (pdVar16 != (dword *)0x0) {
          pdVar16[4] = 9;
          *(long *)(pdVar16 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          unaff_x21 = *(dword **)(param_1 + 0x60);
          if (unaff_x21 != (dword *)0x0) {
            uVar31 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(unaff_x21,0);
            uVar13 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(unaff_x21,uVar31,0);
            unaff_x21[0x10] = uVar13;
            if (*(long *)(param_1 + 0x50) != 0) {
              unaff_x21 = *(dword **)(param_1 + 0x58);
              unaff_x22 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(param_1 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar31 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (unaff_x21 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(unaff_x21,unaff_x22,uVar31,*(undefined8 *)(param_1 + 0x40),pdVar16,0
                               );
                if (*(long *)(param_1 + 0x50) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(param_1 + 0x50),0);
                  if (*(long *)(param_1 + 0x38) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x38),0,0,0);
                    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar16,0);
                    unaff_x21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (unaff_x21,param_1,uRam0000000003d59f00,0);
                    if (pdVar16 != (dword *)0x0) {
                      *(dword **)(pdVar16 + 4) = unaff_x21;
                      *(undefined1 *)((long)pdVar16 + 0x19) = 1;
                      pdVar22 = *(dword **)(param_1 + 0x30);
                      unaff_x21 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar18 = 0;
                      if (pdVar22 != (dword *)0x0) {
                        pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
                        unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
                        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
                        unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
                        unaff_x22 = *(long *)((long)register0x00000008 + -0x30);
                        unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
                        goto Atlas_UI_AtlasUIManager__TransitionToScreen;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar34 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar35 = *(undefined **)((long)register0x00000008 + -8);
      pdVar16 = *(dword **)((long)register0x00000008 + -0x20);
      lVar18 = *(long *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(long *)((long)register0x00000008 + -0x30);
      unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = pdVar16;
    *(long *)((long)register0x00000008 + -0x18) = lVar18;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar34;
    *(undefined **)((long)register0x00000008 + -8) = puVar35;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar16,0);
    lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar18,param_1,uRam0000000003d59ed8,0);
    if (pdVar16 == (dword *)0x0) {
code_r0x0147e694:
      pdVar16 = (dword *)func_0x00f78af4();
      return pdVar16;
    }
    *(long *)(pdVar16 + 6) = lVar18;
    if (*(long *)(param_1 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar16 + 4) = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    *(long *)(pdVar16 + 8) = *(long *)(param_1 + 0x28);
    *(undefined1 *)(pdVar16 + 10) = 1;
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x38),0,0,0);
    pdVar22 = *(dword **)(param_1 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar22 == (dword *)0x0) goto code_r0x0147e694;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(long *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(dword **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
  }
  else {
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
    Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar16,0);
    lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
    Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor(lVar17,param_1,uRam0000000003d59f08,0);
    uVar15 = 0x3d21270;
    if (pdVar16 == (dword *)0x0) {
LAB_0147e318:
      unaff_x23 = uVar15;
      unaff_x22 = lVar17;
      unaff_x21 = pdVar16;
      unaff_x30 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
      param_1 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = lVar18;
      unaff_x20 = uVar31;
      unaff_x29 = puVar34;
      goto code_r0x0147e31c;
    }
    *(long *)(pdVar16 + 4) = lVar17;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar31,0);
    *(long *)(pdVar16 + 0xc) = lVar18;
    pdVar22 = *(dword **)(param_1 + 0x30);
    *(long *)(pdVar16 + 0xe) = *(long *)(param_1 + 0x28);
    *(undefined1 *)(pdVar16 + 0x10) = 1;
    uVar31 = 0x3d1feb8;
    if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar18 = 0;
    if (pdVar22 == (dword *)0x0) goto LAB_0147e318;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
  }
Atlas_UI_AtlasUIManager__TransitionToScreen:
  uVar31 = 0;
  pdVar26 = (dword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(dword **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar34 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar32 = (dword *)0x0;
  pdVar27 = pdVar16;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar18 = *(long *)(pdVar22 + 4);
  if (lVar18 != 0) {
    pdVar26 = (dword *)0x0;
    uVar31 = 0;
    puVar35 = &UNK_01470820;
    pdVar24 = pdVar23;
    pdVar27 = pdVar16;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar16;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar22;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar23;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar34;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar35;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar24;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar27;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar31;
    *(long *)((long)register0x00000008 + -0x100) = lVar18;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar26;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar17 = *(long *)(lVar18 + 0x78);
    if (lVar17 != 0) {
      iVar12 = *(int *)(lVar17 + 0x18);
      if (iVar12 < 1) {
        return (dword *)0x0;
      }
      iVar14 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar17 + 0x18) <= iVar14 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
        if (lVar17 == 0) break;
        uVar20 = /*System.String$$Equals*/ func_0x029caa48(lVar17,pdVar24,5,0);
        if ((uVar20 & 1) != 0) {
          return pdVar16;
        }
        pdVar16 = (dword *)(ulong)(iVar14 < iVar12);
        if (iVar12 == iVar14) {
          return pdVar16;
        }
        lVar17 = *(long *)(lVar18 + 0x78);
        iVar14 = iVar14 + 1;
      } while (lVar17 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar37 = func_0x00f78af4();
  pdVar24 = auVar37._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar34;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar18 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar18 != 0) {
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar37 = func_0x00f78af4();
  uVar31 = auVar37._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar18 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar18 != 0) {
    pdVar26 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = pdVar16;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar22;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar23;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar17 = *(long *)(lVar18 + 0x70);
    if (lVar17 != 0) {
      lVar21 = lVar17;
      if (*(uint *)(lVar17 + 0x18) <= auVar37._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar21 = *(long *)(lVar18 + 0x70);
      }
      if (lVar21 != 0) {
        lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)auVar37._8_4_ * 0x28;
        uVar36 = *(undefined8 *)(lVar17 + 0x28);
        uVar15 = *(undefined8 *)(lVar17 + 0x20);
        uVar13 = *(undefined4 *)(lVar17 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar13;
        uVar4 = *(undefined2 *)(lVar17 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar13;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar21,uVar31,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar18,uVar31);
        return pdVar16;
      }
    }
    auVar37 = func_0x00f78af4();
    pdVar24 = auVar37._8_8_;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar17;
    *(long *)((long)register0x00000008 + -0x100) = lVar18;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar31;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar34 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar18 = *(long *)(auVar37._0_8_ + 0x70);
    if (lVar18 != 0) {
      if (*(uint *)(lVar18 + 0x18) <= auVar37._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)auVar37._8_4_ * 0x28 + 0x28);
      if (lVar18 == 0) {
        pdVar16 = (dword *)0x0;
      }
      else {
        pdVar16 = *(dword **)(lVar18 + 0x40);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar23 = (dword *)func_0x00f78af4();
    pdVar22 = (dword *)0x0;
    pdVar16 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar37 = func_0x00f78af4();
  pdVar24 = auVar37._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar18 = *(long *)(auVar37._0_8_ + 0x10);
  auVar37._8_8_ = pdVar16;
  auVar37._0_8_ = lVar18;
  if (lVar18 != 0) {
    pdVar26 = (dword *)0x0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar16 = pdVar22;
    goto code_r0x02f877a8;
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar18 = *(long *)(auVar37._0_8_ + 0x10);
  auVar37._8_8_ = auVar37._8_8_;
  auVar37._0_8_ = lVar18;
  if (lVar18 != 0) {
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar24 = pdVar26;
    while( true ) {
      puVar5 = puVar6 + -0x30;
      *(dword **)(puVar6 + -0x30) = pdVar32;
      *(dword **)(puVar6 + -0x28) = pdVar16;
      *(dword **)(puVar6 + -0x20) = pdVar22;
      *(dword **)(puVar6 + -0x18) = pdVar23;
      *(undefined1 **)(puVar6 + -0x10) = puVar34;
      *(undefined **)(puVar6 + -8) = puVar35;
      puVar34 = puVar6 + -0x10;
      puVar35 = &UNK_02f883d8;
      pdVar26 = pdVar24;
      pdVar23 = pdVar27;
      pdVar16 = pdVar24;
      pdVar32 = auVar37._0_8_;
code_r0x02f877a8:
      pdVar22 = auVar37._0_8_;
      puVar10 = puVar5 + -0x60;
      *(dword **)(puVar5 + -0x30) = pdVar32;
      *(long *)(puVar5 + -0x28) = auVar37._8_8_;
      *(dword **)(puVar5 + -0x20) = pdVar16;
      *(dword **)(puVar5 + -0x18) = pdVar23;
      *(undefined1 **)(puVar5 + -0x10) = puVar34;
      *(undefined **)(puVar5 + -8) = puVar35;
      puVar34 = puVar5 + -0x10;
      pdVar16 = pdVar22;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar16 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar30 = (uint)pdVar24;
      if (((int)uVar30 < 0) || ((int)*(long *)(pdVar22 + 0x14) <= (int)uVar30)) {
        return pdVar16;
      }
      lVar18 = *(long *)(pdVar22 + 0x1c);
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(lVar18 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
      pdVar32 = *(dword **)(lVar18 + 0x20);
      pdVar23 = *(dword **)(lVar18 + 0x28);
      *(undefined4 *)(puVar5 + -0x60) = *(undefined4 *)(lVar18 + 0x42);
      *(undefined2 *)(puVar5 + -0x5c) = *(undefined2 *)(lVar18 + 0x46);
      if (pdVar23 == (dword *)0x0) {
        lVar18 = *(long *)(pdVar22 + 0x1c);
        if (lVar18 != 0) {
          *(dword **)(puVar5 + -0x58) = pdVar32;
          *(undefined8 *)(puVar5 + -0x50) = 0;
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined2 *)(puVar5 + -0x38) = 0;
          *(undefined4 *)(puVar5 + -0x36) = *(undefined4 *)(puVar5 + -0x60);
          *(undefined2 *)(puVar5 + -0x32) = *(undefined2 *)(puVar5 + -0x5c);
          pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar18,pdVar24,puVar5 + -0x58,uRam0000000003d3ddd0);
          return pdVar16;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar16 = pdVar23;
code_r0x02f882d8:
      *(dword **)(puVar10 + -0x20) = pdVar22;
      *(dword **)(puVar10 + -0x18) = pdVar24;
      *(undefined1 **)(puVar10 + -0x10) = puVar34;
      *(undefined **)(puVar10 + -8) = puVar35;
      (**(code **)(*(long *)pdVar23 + 0x218))(pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x220));
      if (*(long *)(pdVar23 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar23 + 10),0);
        pdVar23[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar23,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*(long *)pdVar23 + 0x228))
                                     (pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x230));
        return pdVar16;
      }
      func_0x00f78af4();
      puVar6 = puVar10 + -0x40;
      *(dword **)(puVar10 + -0x40) = pdVar22;
      *(dword **)(puVar10 + -0x38) = pdVar23;
      *(undefined1 **)(puVar10 + -0x30) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar34 = puVar10 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar18 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar31 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar31,lVar18);
        pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar16;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar37 = func_0x00f78af4();
      pdVar24 = pdVar26;
    }
    lVar18 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x98) = unaff_d8;
    *(dword **)(puVar5 + -0x90) = pdVar32;
    *(undefined8 *)(puVar5 + -0x88) = 0;
    *(dword **)(puVar5 + -0x80) = pdVar22;
    *(dword **)(puVar5 + -0x78) = pdVar24;
    *(undefined1 **)(puVar5 + -0x70) = puVar34;
    *(undefined **)(puVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar31 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar31,0);
    if (0 < *(int *)(lVar18 + 0x50)) {
      iVar12 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar18,iVar12);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar18,iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar18 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar18);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar31);
    return pdVar16;
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar18 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar18 == 0) {
    auVar37 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar18 = *(long *)(auVar37._0_8_ + 0x10);
    auVar38._8_8_ = auVar37._8_8_;
    auVar38._0_8_ = lVar18;
    if (lVar18 != 0) {
      pdVar27 = (dword *)0x0;
      puVar7 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar34 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar35 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar37 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar18 = *(long *)(auVar37._0_8_ + 0x10);
    auVar39._8_8_ = auVar37._8_8_;
    auVar39._0_8_ = lVar18;
    if (lVar18 == 0) {
      auVar37 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar18 = *(long *)(auVar37._0_8_ + 0x10);
      auVar40._8_8_ = auVar37._8_8_;
      auVar40._0_8_ = lVar18;
      if (lVar18 == 0) {
        pdVar32 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = pdVar16;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar22;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar23;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar31 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar31,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar32 + 0xc) = uVar31;
        return pdVar32;
      }
      puVar9 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar34 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar35 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar35 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar27 = pdVar26;
    pdVar32 = pdVar16;
  }
  else {
    pdVar27 = (dword *)0x0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = pdVar16;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar22;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar23;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar34 = (undefined1 *)((long)register0x00000008 + -0xa0);
    pdVar16 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar30 = auVar37._8_4_;
    if (((int)uVar30 < 0) || (*(int *)(lVar18 + 0x50) <= (int)uVar30)) {
      return (dword *)0x0;
    }
    lVar18 = *(long *)(lVar18 + 0x70);
    if (lVar18 != 0) {
      if (*(uint *)(lVar18 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(lVar18 + 0x10) + ((ulong)auVar37._8_8_ & 0xffffffff) * 0x28;
      lVar18 = *(long *)(lVar17 + 0x28);
      cVar2 = *(char *)(lVar17 + 0x40);
      iVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar17 + 0x30),0);
      if (iVar12 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar18 != 0) && (*(int *)(lVar18 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar35 = &Core_UI2_UIManager__GetLayerState;
    auVar38 = func_0x00f78af4();
    pdVar22 = (dword *)0x0;
    pdVar23 = auVar37._8_8_;
code_r0x02f884dc:
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(dword **)(puVar7 + -0x28) = pdVar16;
    *(dword **)(puVar7 + -0x20) = pdVar22;
    *(dword **)(puVar7 + -0x18) = pdVar23;
    *(undefined1 **)(puVar7 + -0x10) = puVar34;
    *(undefined **)(puVar7 + -8) = puVar35;
    puVar34 = puVar7 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar18 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar18 != 0) {
      if (*(uint *)(lVar18 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar18 == 0) {
        pdVar16 = &MACH_HEADER.cputype;
      }
      else {
        pdVar16 = (dword *)(ulong)*(uint *)(lVar18 + 0x4c);
      }
      return pdVar16;
    }
    puVar35 = &Core_UI2_UIManager__EnableInput;
    auVar39 = func_0x00f78af4();
    pdVar22 = (dword *)0x0;
    pdVar23 = auVar38._8_8_;
    pdVar32 = (dword *)0x3ebc000;
  }
  pdVar24 = auVar39._8_8_;
  pdVar16 = auVar39._0_8_;
  puVar9 = puVar8 + -0x40;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar8 + -0x30) = 0;
  *(dword **)(puVar8 + -0x28) = pdVar32;
  *(dword **)(puVar8 + -0x20) = pdVar22;
  *(dword **)(puVar8 + -0x18) = pdVar23;
  *(undefined1 **)(puVar8 + -0x10) = puVar34;
  *(undefined **)(puVar8 + -8) = puVar35;
  puVar34 = puVar8 + -0x10;
  pdVar32 = (dword *)0x3ebc000;
  pdVar26 = pdVar27;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar16 + 0x1a) != 0) {
    pdVar26 = (dword *)(ulong)((uint)pdVar27 ^ 1);
    pdVar22 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar16 + 0x1a),pdVar24,pdVar26,0);
    lVar18 = *(long *)(pdVar16 + 0x1c);
    pdVar32 = (dword *)0x0;
    if (lVar18 != 0) {
      uVar30 = auVar39._8_4_;
      if (*(uint *)(lVar18 + 0x18) <= uVar30) {
        pdVar22 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) ||
         (pdVar32 = *(dword **)(pdVar16 + 0xc), pdVar32 == (dword *)0x0)) {
        return pdVar22;
      }
      lVar18 = *(long *)(pdVar16 + 0x1c);
      pdVar16 = (dword *)0x0;
      if (lVar18 != 0) {
        if (*(uint *)(lVar18 + 0x18) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar25 = *(long **)(*(long *)(lVar18 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
        *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
        *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
        *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        *(dword **)(puVar8 + -0x68) = pdVar32;
        lVar18 = *(long *)(pdVar32 + 0x1a);
        if (lVar18 == 0) {
          puVar34 = puVar8 + -0x68;
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar18 + 0x18);
          if (lVar17 == 0) {
            return pdVar32;
          }
          puVar34 = (undefined1 *)(lVar18 + 0x20);
        }
        lVar18 = 0;
        do {
          lVar21 = *(long *)(puVar34 + lVar18 * 8);
          pcVar33 = *(code **)(lVar21 + 0x10);
          plVar1 = *(long **)(lVar21 + 0x20);
          lVar21 = *(long *)(lVar21 + 0x28);
          if (*(short *)(lVar21 + 0x48) == -1) {
            func_0x00f78ad8(lVar21);
          }
          iVar12 = func_0x00f78a4c(lVar21);
          bVar11 = *(char *)(lVar21 + 0x4a) == '\x03';
          if (iVar12 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar16 = (dword *)(*pcVar33)(plVar25,pdVar24,pdVar27,lVar21);
              }
              else {
                if (((*(short *)(lVar21 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e71aac;
                iVar12 = func_0x00f78a44(lVar21);
                iVar14 = func_0x00f78ec0(lVar21);
                if (iVar12 == 0) {
                  uVar3 = *(ushort *)(lVar21 + 0x48);
                  if (iVar14 == 0) {
                    lVar21 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar16 = (dword *)(**(code **)(lVar21 + 0x138))
                                                 (plVar1,plVar25,pdVar24,pdVar27,
                                                  *(undefined8 *)(lVar21 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar21 = func_0x00f78a48(lVar21);
                  lVar28 = *plVar1;
                  uVar20 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar20 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar21) {
                        puVar19 = (undefined8 *)
                                  (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar29 = piVar29 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar21,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar33 = (code *)*puVar19;
                  puVar19 = (undefined8 *)puVar19[1];
                }
                else {
                  if (iVar14 == 0) {
                    uVar31 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar28 = *plVar1;
                    uVar20 = (ulong)*(ushort *)(lVar28 + 0x12a);
                    if (uVar20 != 0) {
                      piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == *(long *)(lVar21 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar21 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar29 = piVar29 + 4;
                        uVar20 = uVar20 - 1;
                      } while (uVar20 != 0);
                    }
                    lVar28 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar31 = *(undefined8 *)(lVar28 + 8);
                  }
                  puVar19 = (undefined8 *)func_0x00f78acc(uVar31,lVar21);
                  pcVar33 = (code *)*puVar19;
                }
                pdVar16 = (dword *)(*pcVar33)(plVar1,plVar25,pdVar24,pdVar27,puVar19);
              }
            }
            else {
              if ((*(short *)(lVar21 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar12 = func_0x00f78a44(lVar21);
              iVar14 = func_0x00f78ec0(lVar21);
              if (iVar12 == 0) {
                uVar3 = *(ushort *)(lVar21 + 0x48);
                if (iVar14 == 0) {
                  lVar21 = *plVar25 + (ulong)uVar3 * 0x10;
                  pdVar16 = (dword *)(**(code **)(lVar21 + 0x138))
                                               (plVar25,pdVar24,pdVar27,
                                                *(undefined8 *)(lVar21 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar21 = func_0x00f78a48(lVar21);
                lVar28 = *plVar25;
                uVar20 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar20 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar21) {
                      puVar19 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar29 = piVar29 + 4;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
                puVar19 = (undefined8 *)func_0x00fac1f0(plVar25,lVar21,(ulong)uVar3);
code_r0x01e71d00:
                pcVar33 = (code *)*puVar19;
                puVar19 = (undefined8 *)puVar19[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar31 = *(undefined8 *)
                            (*plVar25 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar25;
                  uVar20 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar20 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar21 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar21 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar29 = piVar29 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  lVar28 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                  uVar31 = *(undefined8 *)(lVar28 + 8);
                }
                puVar19 = (undefined8 *)func_0x00f78acc(uVar31,lVar21);
                pcVar33 = (code *)*puVar19;
              }
              pdVar16 = (dword *)(*pcVar33)(plVar25,pdVar24,pdVar27,puVar19);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar16 = (dword *)(*pcVar33)(plVar1,plVar25,pdVar24,pdVar27,lVar21);
          }
code_r0x01e71bd0:
          lVar18 = lVar18 + 1;
          if (lVar18 == lVar17) {
            return pdVar16;
          }
        } while( true );
      }
    }
  }
  puVar35 = &Core_UI2_UIManager__SetScreenVisible;
  auVar40 = func_0x00f78af4();
  pdVar23 = pdVar27;
  pdVar22 = pdVar24;
code_r0x02f88674:
  pdVar27 = auVar40._0_8_;
  *(dword **)(puVar9 + -0x30) = pdVar32;
  *(dword **)(puVar9 + -0x28) = pdVar16;
  *(dword **)(puVar9 + -0x20) = pdVar22;
  *(dword **)(puVar9 + -0x18) = pdVar23;
  *(undefined1 **)(puVar9 + -0x10) = puVar34;
  *(undefined **)(puVar9 + -8) = puVar35;
  pdVar16 = pdVar27;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar18 = *(long *)(pdVar27 + 0x1c);
  if (lVar18 != 0) {
    uVar30 = auVar40._8_4_;
    if (*(uint *)(lVar18 + 0x18) <= uVar30) {
      pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
      return pdVar16;
    }
    lVar18 = *(long *)(pdVar27 + 0x1c);
    if (lVar18 != 0) {
      if (*(uint *)(lVar18 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
      if ((lVar18 != 0) && (plVar25 = *(long **)(lVar18 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar25 + 0x178))
                                     (plVar25,pdVar26,*(undefined8 *)(*plVar25 + 0x180));
        return pdVar16;
      }
    }
  }
  auVar37 = func_0x00f78af4();
  uVar31 = auVar37._0_8_;
  *(long *)(puVar9 + -0x50) = auVar40._8_8_;
  *(dword **)(puVar9 + -0x48) = pdVar26;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar31,auVar37._8_8_,puVar9 + -0x70);
  if ((int)pdVar16 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar31,*(undefined8 *)(puVar9 + -0x60),*(undefined8 *)(puVar9 + -0x58));
    *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x68);
    *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x70);
    *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x58);
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x60);
    pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar31,puVar9 + -0x90,1);
  }
  return pdVar16;
}



// ============================================================
// RVA: 0x147e31c | Atlas.League.LeagueModeUIManager.ShowStarsConversion
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__ShowStarsConversion(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  dword *pdVar20;
  long *extraout_x1;
  dword *pdVar21;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  undefined8 uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  long unaff_x19;
  dword *pdVar29;
  dword *unaff_x20;
  dword *pdVar30;
  long unaff_x21;
  dword *pdVar31;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar32;
  undefined8 unaff_x25;
  code *pcVar33;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar34;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar35;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 uVar36;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  puVar34 = &stack0xfffffffffffffff0;
  pdVar30 = (dword *)0x3eb4000;
  if ((bRam0000000003eb48d5 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d21688);
    func_0x00f78a20(0x3d59f00);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb48d5 = 1;
  }
  lVar32 = param_1;
  lVar16 = unaff_x21;
  uVar25 = unaff_x22;
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_0147e554;
  iVar12 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(param_1 + 0x50),0);
  if (iVar12 == 0) {
    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
    Atlas_FrontEnd_EventInfo___ctor(pdVar30,0);
    if (pdVar30 == (dword *)0x0) {
LAB_0147e554:
      unaff_x30 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      param_1 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = lVar32;
      unaff_x20 = pdVar30;
      unaff_x21 = lVar16;
      unaff_x22 = uVar25;
      unaff_x29 = puVar34;
      goto code_r0x0147e558;
    }
    pdVar30[4] = 9;
    *(long *)(pdVar30 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
    lVar16 = *(long *)(param_1 + 0x60);
    if (lVar16 == 0) goto LAB_0147e554;
    uVar15 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(lVar16,0);
    uVar13 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(lVar16,uVar15,0);
    *(undefined4 *)(lVar16 + 0x40) = uVar13;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0147e554;
    lVar16 = *(long *)(param_1 + 0x58);
    uVar25 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(param_1 + 0x50),0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar16 == 0) goto LAB_0147e554;
    /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(lVar16,uVar25,uVar15,*(undefined8 *)(param_1 + 0x40),pdVar30,0);
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0147e554;
    Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(param_1 + 0x50),0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0147e554;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x38),0,0,0);
    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar30,0);
    lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor(lVar16,param_1,uRam0000000003d59f00,0);
    if (pdVar30 == (dword *)0x0) goto LAB_0147e554;
    *(long *)(pdVar30 + 4) = lVar16;
    *(undefined1 *)((long)pdVar30 + 0x19) = 1;
    pdVar29 = *(dword **)(param_1 + 0x30);
    lVar16 = 0x3d1feb8;
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar32 = 0;
    if (pdVar29 == (dword *)0x0) goto LAB_0147e554;
    pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
  }
  else {
code_r0x0147e558:
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar30,0);
    lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar16,param_1,uRam0000000003d59ed8,0);
    if (pdVar30 == (dword *)0x0) {
code_r0x0147e694:
      pdVar30 = (dword *)func_0x00f78af4();
      return pdVar30;
    }
    *(long *)(pdVar30 + 6) = lVar16;
    if (*(long *)(param_1 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar30 + 4) = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    *(long *)(pdVar30 + 8) = *(long *)(param_1 + 0x28);
    *(undefined1 *)(pdVar30 + 10) = 1;
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x38),0,0,0);
    pdVar29 = *(dword **)(param_1 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar29 == (dword *)0x0) goto code_r0x0147e694;
    pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(dword **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
  }
  uVar25 = 0;
  pdVar23 = (dword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar34 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar31 = (dword *)0x0;
  pdVar24 = pdVar30;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar16 = *(long *)(pdVar29 + 4);
  if (lVar16 != 0) {
    pdVar23 = (dword *)0x0;
    uVar25 = 0;
    puVar35 = &UNK_01470820;
    pdVar21 = pdVar20;
    pdVar24 = pdVar30;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar30;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar29;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar20;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar34;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar35;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar21;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar24;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar25;
    *(long *)((long)register0x00000008 + -0x100) = lVar16;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar23;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar32 = *(long *)(lVar16 + 0x78);
    if (lVar32 != 0) {
      iVar12 = *(int *)(lVar32 + 0x18);
      if (iVar12 < 1) {
        return (dword *)0x0;
      }
      iVar14 = 1;
      pdVar30 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar32 + 0x18) <= iVar14 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar32 = *(long *)(*(long *)(lVar32 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
        if (lVar32 == 0) break;
        uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar32,pdVar21,5,0);
        if ((uVar18 & 1) != 0) {
          return pdVar30;
        }
        pdVar30 = (dword *)(ulong)(iVar14 < iVar12);
        if (iVar12 == iVar14) {
          return pdVar30;
        }
        lVar32 = *(long *)(lVar16 + 0x78);
        iVar14 = iVar14 + 1;
      } while (lVar32 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar37 = func_0x00f78af4();
  pdVar21 = auVar37._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar34;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar16 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar16 != 0) {
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar37 = func_0x00f78af4();
  uVar25 = auVar37._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar16 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar16 != 0) {
    pdVar23 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = pdVar30;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar29;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar20;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar32 = *(long *)(lVar16 + 0x70);
    if (lVar32 != 0) {
      lVar19 = lVar32;
      if (*(uint *)(lVar32 + 0x18) <= auVar37._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = *(long *)(lVar16 + 0x70);
      }
      if (lVar19 != 0) {
        lVar32 = *(long *)(lVar32 + 0x10) + (long)(int)auVar37._8_4_ * 0x28;
        uVar36 = *(undefined8 *)(lVar32 + 0x28);
        uVar15 = *(undefined8 *)(lVar32 + 0x20);
        uVar13 = *(undefined4 *)(lVar32 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar13;
        uVar4 = *(undefined2 *)(lVar32 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar13;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,uVar25,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar30 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,uVar25);
        return pdVar30;
      }
    }
    auVar37 = func_0x00f78af4();
    pdVar21 = auVar37._8_8_;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar32;
    *(long *)((long)register0x00000008 + -0x100) = lVar16;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar25;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar34 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar16 = *(long *)(auVar37._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar37._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar37._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar30 = (dword *)0x0;
      }
      else {
        pdVar30 = *(dword **)(lVar16 + 0x40);
      }
      return pdVar30;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar20 = (dword *)func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar30 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar37 = func_0x00f78af4();
  pdVar21 = auVar37._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar16 = *(long *)(auVar37._0_8_ + 0x10);
  auVar37._8_8_ = pdVar30;
  auVar37._0_8_ = lVar16;
  if (lVar16 != 0) {
    pdVar23 = (dword *)0x0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar30 = pdVar29;
    goto code_r0x02f877a8;
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar16 = *(long *)(auVar37._0_8_ + 0x10);
  auVar37._8_8_ = auVar37._8_8_;
  auVar37._0_8_ = lVar16;
  if (lVar16 != 0) {
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar35 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar21 = pdVar23;
    while( true ) {
      puVar5 = puVar6 + -0x30;
      *(dword **)(puVar6 + -0x30) = pdVar31;
      *(dword **)(puVar6 + -0x28) = pdVar30;
      *(dword **)(puVar6 + -0x20) = pdVar29;
      *(dword **)(puVar6 + -0x18) = pdVar20;
      *(undefined1 **)(puVar6 + -0x10) = puVar34;
      *(undefined **)(puVar6 + -8) = puVar35;
      puVar34 = puVar6 + -0x10;
      puVar35 = &UNK_02f883d8;
      pdVar23 = pdVar21;
      pdVar20 = pdVar24;
      pdVar30 = pdVar21;
      pdVar31 = auVar37._0_8_;
code_r0x02f877a8:
      pdVar29 = auVar37._0_8_;
      puVar10 = puVar5 + -0x60;
      *(dword **)(puVar5 + -0x30) = pdVar31;
      *(long *)(puVar5 + -0x28) = auVar37._8_8_;
      *(dword **)(puVar5 + -0x20) = pdVar30;
      *(dword **)(puVar5 + -0x18) = pdVar20;
      *(undefined1 **)(puVar5 + -0x10) = puVar34;
      *(undefined **)(puVar5 + -8) = puVar35;
      puVar34 = puVar5 + -0x10;
      pdVar30 = pdVar29;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar30 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar28 = (uint)pdVar21;
      if (((int)uVar28 < 0) || ((int)*(long *)(pdVar29 + 0x14) <= (int)uVar28)) {
        return pdVar30;
      }
      lVar16 = *(long *)(pdVar29 + 0x1c);
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + ((ulong)pdVar21 & 0xffffffff) * 0x28;
      pdVar31 = *(dword **)(lVar16 + 0x20);
      pdVar20 = *(dword **)(lVar16 + 0x28);
      *(undefined4 *)(puVar5 + -0x60) = *(undefined4 *)(lVar16 + 0x42);
      *(undefined2 *)(puVar5 + -0x5c) = *(undefined2 *)(lVar16 + 0x46);
      if (pdVar20 == (dword *)0x0) {
        lVar16 = *(long *)(pdVar29 + 0x1c);
        if (lVar16 != 0) {
          *(dword **)(puVar5 + -0x58) = pdVar31;
          *(undefined8 *)(puVar5 + -0x50) = 0;
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined2 *)(puVar5 + -0x38) = 0;
          *(undefined4 *)(puVar5 + -0x36) = *(undefined4 *)(puVar5 + -0x60);
          *(undefined2 *)(puVar5 + -0x32) = *(undefined2 *)(puVar5 + -0x5c);
          pdVar30 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar16,pdVar21,puVar5 + -0x58,uRam0000000003d3ddd0);
          return pdVar30;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar30 = pdVar20;
code_r0x02f882d8:
      *(dword **)(puVar10 + -0x20) = pdVar29;
      *(dword **)(puVar10 + -0x18) = pdVar21;
      *(undefined1 **)(puVar10 + -0x10) = puVar34;
      *(undefined **)(puVar10 + -8) = puVar35;
      (**(code **)(*(long *)pdVar20 + 0x218))(pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x220));
      if (*(long *)(pdVar20 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar20 + 10),0);
        pdVar20[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar20,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar30 = (dword *)(**(code **)(*(long *)pdVar20 + 0x228))
                                     (pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x230));
        return pdVar30;
      }
      func_0x00f78af4();
      puVar6 = puVar10 + -0x40;
      *(dword **)(puVar10 + -0x40) = pdVar29;
      *(dword **)(puVar10 + -0x38) = pdVar20;
      *(undefined1 **)(puVar10 + -0x30) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar34 = puVar10 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar16 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar25 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar25,lVar16);
        pdVar30 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar30;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar37 = func_0x00f78af4();
      pdVar21 = pdVar23;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x98) = unaff_d8;
    *(dword **)(puVar5 + -0x90) = pdVar31;
    *(undefined8 *)(puVar5 + -0x88) = 0;
    *(dword **)(puVar5 + -0x80) = pdVar29;
    *(dword **)(puVar5 + -0x78) = pdVar21;
    *(undefined1 **)(puVar5 + -0x70) = puVar34;
    *(undefined **)(puVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar25,0);
    if (0 < *(int *)(lVar16 + 0x50)) {
      iVar12 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,iVar12);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar16,iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar16 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar16);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar30 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
    return pdVar30;
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar16 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar16 == 0) {
    auVar37 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar16 = *(long *)(auVar37._0_8_ + 0x10);
    auVar38._8_8_ = auVar37._8_8_;
    auVar38._0_8_ = lVar16;
    if (lVar16 != 0) {
      pdVar24 = (dword *)0x0;
      puVar7 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar34 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar35 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar37 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar16 = *(long *)(auVar37._0_8_ + 0x10);
    auVar39._8_8_ = auVar37._8_8_;
    auVar39._0_8_ = lVar16;
    if (lVar16 == 0) {
      auVar37 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar16 = *(long *)(auVar37._0_8_ + 0x10);
      auVar40._8_8_ = auVar37._8_8_;
      auVar40._0_8_ = lVar16;
      if (lVar16 == 0) {
        pdVar31 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = pdVar30;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar29;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar20;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar25,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar31 + 0xc) = uVar25;
        return pdVar31;
      }
      puVar9 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar34 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar35 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar34 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar35 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar24 = pdVar23;
    pdVar31 = pdVar30;
  }
  else {
    pdVar24 = (dword *)0x0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = pdVar30;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar29;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar20;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar34 = (undefined1 *)((long)register0x00000008 + -0xa0);
    pdVar30 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar28 = auVar37._8_4_;
    if (((int)uVar28 < 0) || (*(int *)(lVar16 + 0x50) <= (int)uVar28)) {
      return (dword *)0x0;
    }
    lVar16 = *(long *)(lVar16 + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar32 = *(long *)(lVar16 + 0x10) + ((ulong)auVar37._8_8_ & 0xffffffff) * 0x28;
      lVar16 = *(long *)(lVar32 + 0x28);
      cVar2 = *(char *)(lVar32 + 0x40);
      iVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar32 + 0x30),0);
      if (iVar12 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar35 = &Core_UI2_UIManager__GetLayerState;
    auVar38 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar20 = auVar37._8_8_;
code_r0x02f884dc:
    puVar8 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(dword **)(puVar7 + -0x28) = pdVar30;
    *(dword **)(puVar7 + -0x20) = pdVar29;
    *(dword **)(puVar7 + -0x18) = pdVar20;
    *(undefined1 **)(puVar7 + -0x10) = puVar34;
    *(undefined **)(puVar7 + -8) = puVar35;
    puVar34 = puVar7 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar16 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar30 = &MACH_HEADER.cputype;
      }
      else {
        pdVar30 = (dword *)(ulong)*(uint *)(lVar16 + 0x4c);
      }
      return pdVar30;
    }
    puVar35 = &Core_UI2_UIManager__EnableInput;
    auVar39 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar20 = auVar38._8_8_;
    pdVar31 = (dword *)0x3ebc000;
  }
  pdVar21 = auVar39._8_8_;
  pdVar30 = auVar39._0_8_;
  puVar9 = puVar8 + -0x40;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar8 + -0x30) = 0;
  *(dword **)(puVar8 + -0x28) = pdVar31;
  *(dword **)(puVar8 + -0x20) = pdVar29;
  *(dword **)(puVar8 + -0x18) = pdVar20;
  *(undefined1 **)(puVar8 + -0x10) = puVar34;
  *(undefined **)(puVar8 + -8) = puVar35;
  puVar34 = puVar8 + -0x10;
  pdVar31 = (dword *)0x3ebc000;
  pdVar23 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar30 + 0x1a) != 0) {
    pdVar23 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar29 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar30 + 0x1a),pdVar21,pdVar23,0);
    lVar16 = *(long *)(pdVar30 + 0x1c);
    pdVar31 = (dword *)0x0;
    if (lVar16 != 0) {
      uVar28 = auVar39._8_4_;
      if (*(uint *)(lVar16 + 0x18) <= uVar28) {
        pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
         (pdVar31 = *(dword **)(pdVar30 + 0xc), pdVar31 == (dword *)0x0)) {
        return pdVar29;
      }
      lVar16 = *(long *)(pdVar30 + 0x1c);
      pdVar30 = (dword *)0x0;
      if (lVar16 != 0) {
        if (*(uint *)(lVar16 + 0x18) <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar22 = *(long **)(*(long *)(lVar16 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
        *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
        *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
        *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        *(dword **)(puVar8 + -0x68) = pdVar31;
        lVar16 = *(long *)(pdVar31 + 0x1a);
        if (lVar16 == 0) {
          puVar34 = puVar8 + -0x68;
          lVar32 = 1;
        }
        else {
          lVar32 = *(long *)(lVar16 + 0x18);
          if (lVar32 == 0) {
            return pdVar31;
          }
          puVar34 = (undefined1 *)(lVar16 + 0x20);
        }
        lVar16 = 0;
        do {
          lVar19 = *(long *)(puVar34 + lVar16 * 8);
          pcVar33 = *(code **)(lVar19 + 0x10);
          plVar1 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar12 = func_0x00f78a4c(lVar19);
          bVar11 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar12 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar30 = (dword *)(*pcVar33)(plVar22,pdVar21,pdVar24,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar31 + 6) == 0)) goto code_r0x01e71aac;
                iVar12 = func_0x00f78a44(lVar19);
                iVar14 = func_0x00f78ec0(lVar19);
                if (iVar12 == 0) {
                  uVar3 = *(ushort *)(lVar19 + 0x48);
                  if (iVar14 == 0) {
                    lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar30 = (dword *)(**(code **)(lVar19 + 0x138))
                                                 (plVar1,plVar22,pdVar21,pdVar24,
                                                  *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar26 = *plVar1;
                  uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar18 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar19) {
                        puVar17 = (undefined8 *)
                                  (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar27 = piVar27 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar33 = (code *)*puVar17;
                  puVar17 = (undefined8 *)puVar17[1];
                }
                else {
                  if (iVar14 == 0) {
                    uVar25 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar26 = *plVar1;
                    uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar18 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar27 = piVar27 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar25 = *(undefined8 *)(lVar26 + 8);
                  }
                  puVar17 = (undefined8 *)func_0x00f78acc(uVar25,lVar19);
                  pcVar33 = (code *)*puVar17;
                }
                pdVar30 = (dword *)(*pcVar33)(plVar1,plVar22,pdVar21,pdVar24,puVar17);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar31 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar12 = func_0x00f78a44(lVar19);
              iVar14 = func_0x00f78ec0(lVar19);
              if (iVar12 == 0) {
                uVar3 = *(ushort *)(lVar19 + 0x48);
                if (iVar14 == 0) {
                  lVar19 = *plVar22 + (ulong)uVar3 * 0x10;
                  pdVar30 = (dword *)(**(code **)(lVar19 + 0x138))
                                               (plVar22,pdVar21,pdVar24,
                                                *(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar26 = *plVar22;
                uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar18 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar19) {
                      puVar17 = (undefined8 *)
                                (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar27 = piVar27 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar22,lVar19,(ulong)uVar3);
code_r0x01e71d00:
                pcVar33 = (code *)*puVar17;
                puVar17 = (undefined8 *)puVar17[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar22 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar26 = *plVar22;
                  uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar18 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar27 = piVar27 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  lVar26 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                  uVar25 = *(undefined8 *)(lVar26 + 8);
                }
                puVar17 = (undefined8 *)func_0x00f78acc(uVar25,lVar19);
                pcVar33 = (code *)*puVar17;
              }
              pdVar30 = (dword *)(*pcVar33)(plVar22,pdVar21,pdVar24,puVar17);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar30 = (dword *)(*pcVar33)(plVar1,plVar22,pdVar21,pdVar24,lVar19);
          }
code_r0x01e71bd0:
          lVar16 = lVar16 + 1;
          if (lVar16 == lVar32) {
            return pdVar30;
          }
        } while( true );
      }
    }
  }
  puVar35 = &Core_UI2_UIManager__SetScreenVisible;
  auVar40 = func_0x00f78af4();
  pdVar20 = pdVar24;
  pdVar29 = pdVar21;
code_r0x02f88674:
  pdVar24 = auVar40._0_8_;
  *(dword **)(puVar9 + -0x30) = pdVar31;
  *(dword **)(puVar9 + -0x28) = pdVar30;
  *(dword **)(puVar9 + -0x20) = pdVar29;
  *(dword **)(puVar9 + -0x18) = pdVar20;
  *(undefined1 **)(puVar9 + -0x10) = puVar34;
  *(undefined **)(puVar9 + -8) = puVar35;
  pdVar30 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar30 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar16 = *(long *)(pdVar24 + 0x1c);
  if (lVar16 != 0) {
    uVar28 = auVar40._8_4_;
    if (*(uint *)(lVar16 + 0x18) <= uVar28) {
      pdVar30 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
      return pdVar30;
    }
    lVar16 = *(long *)(pdVar24 + 0x1c);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
      if ((lVar16 != 0) && (plVar22 = *(long **)(lVar16 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar30 = (dword *)(**(code **)(*plVar22 + 0x178))
                                     (plVar22,pdVar23,*(undefined8 *)(*plVar22 + 0x180));
        return pdVar30;
      }
    }
  }
  auVar37 = func_0x00f78af4();
  uVar25 = auVar37._0_8_;
  *(long *)(puVar9 + -0x50) = auVar40._8_8_;
  *(dword **)(puVar9 + -0x48) = pdVar23;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  *(undefined8 *)(puVar9 + -0x58) = 0;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  pdVar30 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar37._8_8_,puVar9 + -0x70);
  if ((int)pdVar30 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,*(undefined8 *)(puVar9 + -0x60),*(undefined8 *)(puVar9 + -0x58));
    *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x68);
    *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x70);
    *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x58);
    *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x60);
    pdVar30 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,puVar9 + -0x90,1);
  }
  return pdVar30;
}



// ============================================================
// RVA: 0x147e558 | Atlas.League.LeagueModeUIManager.ShowLeaderboardAfterPodium
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  dword ****ppppdVar4;
  dword **ppdVar5;
  dword **ppdVar6;
  dword **ppdVar7;
  dword ***pppdVar8;
  dword ***pppdVar9;
  dword ***pppdVar10;
  bool bVar11;
  int iVar12;
  dword *pdVar14;
  int iVar13;
  dword *pdVar15;
  dword *pdVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  dword *pdVar20;
  dword *pdVar21;
  long *extraout_x1;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  undefined8 uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  long lVar29;
  dword *pdVar30;
  undefined8 unaff_x24;
  long lVar31;
  dword *unaff_x25;
  code *pcVar32;
  dword *unaff_x26;
  dword *unaff_x27;
  dword *unaff_x28;
  undefined1 *puVar33;
  dword **ppdVar34;
  dword ***pppdVar35;
  undefined *puVar36;
  dword **ppdVar37;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  dword *apdStack_158 [5];
  undefined8 uStack_120;
  dword *pdStack_110;
  long lStack_108;
  dword *pdStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword ****ppppdStack_e0;
  undefined *puStack_d8;
  dword ***pppdStack_d0;
  undefined *puStack_c8;
  dword ***pppdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  dword *pdStack_88;
  dword *pdStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb48d6 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d59ed8);
    func_0x00f78a20(0x3d27e28);
    func_0x00f78a20(0x3d27e30);
    bRam0000000003eb48d6 = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
  Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar15,0);
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
  Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
            (pdVar16,param_1,uRam0000000003d59ed8,0);
  if (pdVar15 == (dword *)0x0) {
LAB_0147e694:
    pdVar15 = (dword *)func_0x00f78af4();
    return pdVar15;
  }
  *(dword **)(pdVar15 + 6) = pdVar16;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0147e694;
  *(dword **)(pdVar15 + 4) = *(dword **)(*(long *)(param_1 + 0x20) + 0x10);
  *(dword **)(pdVar15 + 8) = *(dword **)(param_1 + 0x28);
  *(undefined1 *)(pdVar15 + 10) = 1;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_0147e694;
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x38),0,0,0);
  pdVar16 = *(dword **)(param_1 + 0x30);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pdVar16 == (dword *)0x0) goto LAB_0147e694;
  pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
  pdVar24 = (dword *)0x0;
  uVar25 = 0;
  pdVar30 = (dword *)0x0;
  pdVar23 = pdVar15;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  uStack_48 = 0;
  pdVar14 = *(dword **)(pdVar16 + 4);
  puStack_60 = &stack0xfffffffffffffff0;
  if (pdVar14 != (dword *)0x0) {
    pdVar24 = (dword *)0x0;
    uVar25 = 0;
    puStack_58 = &UNK_01470820;
    pdVar21 = pdVar20;
    pdVar23 = pdVar15;
code_r0x02f87f38:
    pdStack_88 = (dword *)0x3eb4000;
    pdStack_80 = (dword *)0x0;
    pdStack_78 = pdVar15;
    pdStack_70 = pdVar16;
    pdStack_68 = pdVar20;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    uStack_120 = 0x3ebc000;
    pdStack_e8 = (dword *)&UNK_02f87f9c;
    pdStack_110 = pdVar23;
    lStack_108 = uVar25;
    pdStack_100 = pdVar14;
    pdStack_f8 = pdVar24;
    pdStack_f0 = (dword *)&puStack_60;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar31 = *(long *)(pdVar14 + 0x1e);
    if (lVar31 != 0) {
      iVar13 = *(int *)(lVar31 + 0x18);
      if (iVar13 < 1) {
        return (dword *)0x0;
      }
      iVar12 = 1;
      pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar31 + 0x18) <= iVar12 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)(iVar12 - 1U) * 0x20 + 0x20);
        if (lVar31 == 0) break;
        uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar31,pdVar21,5,0);
        if ((uVar18 & 1) != 0) {
          return pdVar15;
        }
        pdVar15 = (dword *)(ulong)(iVar12 < iVar13);
        if (iVar13 == iVar12) {
          return pdVar15;
        }
        lVar31 = *(long *)(pdVar14 + 0x1e);
        iVar12 = iVar12 + 1;
      } while (lVar31 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar21 = auVar38._8_8_;
  pdStack_70 = (dword *)&puStack_60;
  puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
  pdVar14 = *(dword **)(auVar38._0_8_ + 0x10);
  if (pdVar14 != (dword *)0x0) {
    puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar25 = auVar38._8_8_;
  ppdVar37 = &pdStack_70;
  pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
  lVar31 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar31 != 0) {
    pdVar24 = (dword *)0x0;
    puStack_90 = (undefined1 *)0x0;
    pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
    pdStack_88 = pdVar15;
    pdStack_80 = pdVar16;
    pdStack_78 = pdVar20;
    pdStack_70 = (dword *)&puStack_60;
    if ((bRam0000000003ebc64b & 1) == 0) {
      pdStack_70 = (dword *)&puStack_60;
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar29 = *(long *)(lVar31 + 0x70);
    if (lVar29 != 0) {
      lVar19 = lVar29;
      if (*(uint *)(lVar29 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = *(long *)(lVar31 + 0x70);
      }
      if (lVar19 != 0) {
        lVar29 = *(long *)(lVar29 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        puStack_c8 = *(undefined **)(lVar29 + 0x28);
        pppdStack_d0 = *(dword ****)(lVar29 + 0x20);
        puStack_d8 = (undefined *)CONCAT26(puStack_d8._6_2_,*(undefined6 *)(lVar29 + 0x42));
        pdStack_b0 = (dword *)0x0;
        pdStack_a8 = (dword *)0x0;
        uStack_a0 = (undefined1 **)
                    CONCAT26(*(undefined2 *)(lVar29 + 0x46),
                             CONCAT42(*(undefined4 *)(lVar29 + 0x42),1));
        pppdStack_c0 = pppdStack_d0;
        pdStack_b8 = (dword *)puStack_c8;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,uVar25,&pppdStack_c0,uRam0000000003d3ddd0);
        pdVar15 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar31,uVar25);
        return pdVar15;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar14 = auVar38._8_8_;
    ppdVar6 = &stack0xfffffffffffffef0;
    pdStack_110 = (dword *)0x0;
    pdStack_e8 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
    puVar33 = (undefined1 *)&pdStack_f0;
    lStack_108 = lVar29;
    pdStack_100 = (dword *)lVar31;
    pdStack_f8 = (dword *)uVar25;
    pdStack_f0 = (dword *)&pdStack_70;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar31 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar31 != 0) {
      if (*(uint *)(lVar31 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar31 == 0) {
        pdVar15 = (dword *)0x0;
      }
      else {
        pdVar15 = *(dword **)(lVar31 + 0x40);
      }
      return pdVar15;
    }
    puVar36 = &Core_UI2_UIScreen__ForceExit;
    pdVar20 = (dword *)func_0x00f78af4();
    pdVar16 = (dword *)0x0;
    pdVar15 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar14 = auVar38._8_8_;
  ppdVar34 = &pdStack_80;
  pdStack_80 = (dword *)&pdStack_70;
  pdStack_78 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
  lVar31 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = pdVar15;
  auVar38._0_8_ = lVar31;
  if (lVar31 != 0) {
    pdVar24 = (dword *)0x0;
    ppdVar5 = &pdStack_70;
    puVar36 = &Atlas_UI_AtlasUIManager__ClearLayer;
    pdVar15 = pdVar16;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  puStack_90 = (undefined1 *)&pdStack_80;
  pdStack_88 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar31 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = auVar38._8_8_;
  auVar38._0_8_ = lVar31;
  if (lVar31 != 0) {
    ppdVar7 = &pdStack_80;
    puVar36 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
    pdVar14 = pdVar24;
    while( true ) {
      ppdVar5 = (dword **)((long)ppdVar7 + -0x30);
      *(dword **)((long)ppdVar7 + -0x30) = pdVar30;
      *(dword **)((long)ppdVar7 + -0x28) = pdVar15;
      *(dword **)((long)ppdVar7 + -0x20) = pdVar16;
      *(dword **)((long)ppdVar7 + -0x18) = pdVar20;
      *(dword ***)((long)ppdVar7 + -0x10) = ppdVar34;
      *(undefined **)((long)ppdVar7 + -8) = puVar36;
      ppdVar37 = (dword **)((long)ppdVar7 + -0x10);
      puVar36 = &UNK_02f883d8;
      pdVar24 = pdVar14;
      pdVar20 = pdVar23;
      pdVar15 = pdVar14;
      pdVar30 = auVar38._0_8_;
code_r0x02f877a8:
      pdVar16 = auVar38._0_8_;
      ppdVar6 = (dword **)((long)ppdVar5 + -0x60);
      *(dword **)((long)ppdVar5 + -0x30) = pdVar30;
      *(long *)((long)ppdVar5 + -0x28) = auVar38._8_8_;
      *(dword **)((long)ppdVar5 + -0x20) = pdVar15;
      *(dword **)((long)ppdVar5 + -0x18) = pdVar20;
      *(dword ***)((long)ppdVar5 + -0x10) = ppdVar37;
      *(undefined **)((long)ppdVar5 + -8) = puVar36;
      puVar33 = (undefined1 *)((long)ppdVar5 + -0x10);
      pdVar15 = pdVar16;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar15 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar28 = (uint)pdVar14;
      if (((int)uVar28 < 0) || ((int)pdVar16[0x14] <= (int)uVar28)) {
        return pdVar15;
      }
      pdVar15 = *(dword **)(pdVar16 + 0x1c);
      if (pdVar15 == (dword *)0x0) break;
      if (pdVar15[6] <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(pdVar15 + 4) + ((ulong)pdVar14 & 0xffffffff) * 0x28;
      pdVar30 = *(dword **)(lVar31 + 0x20);
      pdVar20 = *(dword **)(lVar31 + 0x28);
      *(undefined4 *)((long)ppdVar5 + -0x60) = *(undefined4 *)(lVar31 + 0x42);
      *(undefined2 *)((long)ppdVar5 + -0x5c) = *(undefined2 *)(lVar31 + 0x46);
      if (pdVar20 == (dword *)0x0) {
        pdVar15 = *(dword **)(pdVar16 + 0x1c);
        if (pdVar15 != (dword *)0x0) {
          *(dword **)((long)ppdVar5 + -0x58) = pdVar30;
          *(undefined8 *)((long)ppdVar5 + -0x50) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x40) = 0;
          *(undefined2 *)((long)ppdVar5 + -0x38) = 0;
          *(undefined4 *)((long)ppdVar5 + -0x36) = *(undefined4 *)((long)ppdVar5 + -0x60);
          *(undefined2 *)((long)ppdVar5 + -0x32) = *(undefined2 *)((long)ppdVar5 + -0x5c);
          pdVar15 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(pdVar15,pdVar14,(undefined1 *)((long)ppdVar5 + -0x58),
                                             uRam0000000003d3ddd0);
          return pdVar15;
        }
        break;
      }
      puVar36 = &UNK_02f87848;
      pdVar15 = pdVar20;
code_r0x02f882d8:
      *(dword **)((long)ppdVar6 + -0x20) = pdVar16;
      *(dword **)((long)ppdVar6 + -0x18) = pdVar14;
      *(undefined1 **)((long)ppdVar6 + -0x10) = puVar33;
      *(undefined **)((long)ppdVar6 + -8) = puVar36;
      (**(code **)(*(dword **)pdVar20 + 0x86))(pdVar20,*(undefined8 *)(*(dword **)pdVar20 + 0x88));
      if (*(dword **)(pdVar20 + 10) != (dword *)0x0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(dword **)(pdVar20 + 10),0);
        pdVar20[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar20,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*(dword **)pdVar20 + 0x8a))
                                     (pdVar20,*(undefined8 *)(*(dword **)pdVar20 + 0x8c));
        return pdVar15;
      }
      func_0x00f78af4();
      ppdVar7 = (dword **)((long)ppdVar6 + -0x40);
      *(dword **)((long)ppdVar6 + -0x40) = pdVar16;
      *(dword **)((long)ppdVar6 + -0x38) = pdVar20;
      *(undefined1 **)((long)ppdVar6 + -0x30) = (undefined1 *)((long)ppdVar6 + -0x10);
      *(undefined **)((long)ppdVar6 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      ppdVar34 = (dword **)((long)ppdVar6 + -0x30);
      if (extraout_x1 != (long *)0x0) {
        lVar31 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar25 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar25,lVar31);
        pdVar15 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar15;
      }
      puVar36 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar38 = func_0x00f78af4();
      pdVar14 = pdVar24;
    }
    lVar31 = func_0x00f78af4();
    *(undefined8 *)((long)ppdVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)ppdVar5 + -0x98) = unaff_d8;
    *(dword **)((long)ppdVar5 + -0x90) = pdVar30;
    *(undefined8 *)((long)ppdVar5 + -0x88) = 0;
    *(dword **)((long)ppdVar5 + -0x80) = pdVar16;
    *(dword **)((long)ppdVar5 + -0x78) = pdVar14;
    *(undefined1 **)((long)ppdVar5 + -0x70) = puVar33;
    *(undefined **)((long)ppdVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar25,0);
    if (0 < *(int *)(lVar31 + 0x50)) {
      iVar13 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar31,iVar13);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar31,iVar13);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar31 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar31);
    *(undefined8 *)((long)ppdVar5 + -0x80) = *(undefined8 *)((long)ppdVar5 + -0x80);
    *(undefined8 *)((long)ppdVar5 + -0x78) = *(undefined8 *)((long)ppdVar5 + -0x78);
    *(undefined8 *)((long)ppdVar5 + -0x70) = *(undefined8 *)((long)ppdVar5 + -0x70);
    *(undefined8 *)((long)ppdVar5 + -0x68) = *(undefined8 *)((long)ppdVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar15 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
    return pdVar15;
  }
  auVar38 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar31 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar31 == 0) {
    uStack_a0 = &puStack_90;
    auVar38 = func_0x00f78af4();
    pppdVar8 = (dword ***)&pdStack_b0;
    pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
    lVar31 = *(long *)(auVar38._0_8_ + 0x10);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = lVar31;
    if (lVar31 != 0) {
      pdVar23 = (dword *)0x0;
      pppdVar8 = (dword ***)&uStack_a0;
      ppdVar37 = (dword **)&Atlas_UI_AtlasUIManager__GetLayerState;
      pdStack_b0 = (dword *)&uStack_a0;
      goto code_r0x02f884dc;
    }
    pdStack_b0 = (dword *)&uStack_a0;
    auVar38 = func_0x00f78af4();
    pppdVar35 = (dword ***)&pppdStack_c0;
    pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    lVar31 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar31;
    if (lVar31 == 0) {
      pppdStack_c0 = (dword ***)&pdStack_b0;
      auVar38 = func_0x00f78af4();
      ppppdStack_e0 = &pppdStack_d0;
      puStack_c8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar31 = *(long *)(auVar38._0_8_ + 0x10);
      auVar41._8_8_ = auVar38._8_8_;
      auVar41._0_8_ = lVar31;
      if (lVar31 == 0) {
        pppdStack_d0 = (dword ***)&pppdStack_c0;
        pdVar30 = (dword *)func_0x00f78af4();
        pdStack_100 = (dword *)0x0;
        puStack_d8 = &Atlas_UI_AtlasUIManager___ctor;
        pdStack_f8 = pdVar15;
        pdStack_f0 = pdVar16;
        pdStack_e8 = pdVar20;
        ppppdVar4 = &pppdStack_d0;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
          ppppdVar4 = ppppdStack_e0;
        }
        ppppdStack_e0 = ppppdVar4;
        uVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar25,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar30 + 0xc) = uVar25;
        return pdVar30;
      }
      pppdVar10 = (dword ***)&pppdStack_c0;
      ppdVar37 = (dword **)&Atlas_UI_AtlasUIManager__SetScreenVisible;
      pppdStack_d0 = (dword ***)&pppdStack_c0;
      goto code_r0x02f88674;
    }
    pppdVar9 = (dword ***)&pdStack_b0;
    pdVar30 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    pdVar23 = pdVar24;
    pdVar24 = pdVar15;
    pppdStack_c0 = (dword ***)&pdStack_b0;
  }
  else {
    pdVar23 = (dword *)0x0;
    pppdVar8 = (dword ***)&pppdStack_c0;
    pppdStack_c0 = (dword ***)0x0;
    puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
    pdStack_b8 = pdVar15;
    pdStack_b0 = pdVar16;
    pdStack_a8 = pdVar20;
    uStack_a0 = &puStack_90;
    if ((bRam0000000003ebc64f & 1) == 0) {
      uStack_a0 = &puStack_90;
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar28 = auVar38._8_4_;
    if (((int)uVar28 < 0) || (*(int *)(lVar31 + 0x50) <= (int)uVar28)) {
      return (dword *)0x0;
    }
    lVar31 = *(long *)(lVar31 + 0x70);
    if (lVar31 != 0) {
      if (*(uint *)(lVar31 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar29 = *(long *)(lVar31 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar31 = *(long *)(lVar29 + 0x28);
      cVar2 = *(char *)(lVar29 + 0x40);
      iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar29 + 0x30),0);
      if (iVar13 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar31 != 0) && (*(int *)(lVar31 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    ppdVar37 = (dword **)&Core_UI2_UIManager__GetLayerState;
    auVar39 = func_0x00f78af4();
    pdVar16 = (dword *)0x0;
    pdVar20 = auVar38._8_8_;
    pdVar15 = (dword *)0x3ebc000;
code_r0x02f884dc:
    pppdVar9 = pppdVar8 + -6;
    pppdVar8[-6] = (dword **)0x0;
    pppdVar8[-5] = (dword **)pdVar15;
    pppdVar8[-4] = (dword **)pdVar16;
    pppdVar8[-3] = (dword **)pdVar20;
    pppdVar8[-2] = (dword **)&uStack_a0;
    pppdVar8[-1] = ppdVar37;
    pppdVar8 = pppdVar8 + -2;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar31 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar31 != 0) {
      if (*(uint *)(lVar31 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar31 == 0) {
        pdVar15 = &MACH_HEADER.cputype;
      }
      else {
        pdVar15 = (dword *)(ulong)*(uint *)(lVar31 + 0x4c);
      }
      return pdVar15;
    }
    pdVar30 = (dword *)&Core_UI2_UIManager__EnableInput;
    auVar40 = func_0x00f78af4();
    pdVar16 = (dword *)0x0;
    pdVar20 = auVar39._8_8_;
    pdVar24 = (dword *)0x3ebc000;
  }
  pdVar14 = auVar40._8_8_;
  pdVar15 = auVar40._0_8_;
  pppdVar10 = pppdVar9 + -8;
  pppdVar9[-8] = (dword **)unaff_x24;
  pppdVar9[-7] = (dword **)0x3eb4000;
  pppdVar9[-6] = (dword **)0x0;
  pppdVar9[-5] = (dword **)pdVar24;
  pppdVar9[-4] = (dword **)pdVar16;
  pppdVar9[-3] = (dword **)pdVar20;
  pppdVar9[-2] = (dword **)pppdVar8;
  pppdVar9[-1] = (dword **)pdVar30;
  pppdVar35 = pppdVar9 + -2;
  pdVar30 = (dword *)0x3ebc000;
  pdVar24 = pdVar23;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(dword **)(pdVar15 + 0x1a) != (dword *)0x0) {
    pdVar24 = (dword *)(ulong)((uint)pdVar23 ^ 1);
    pdVar16 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(dword **)(pdVar15 + 0x1a),pdVar14,pdVar24,0);
    pdVar20 = *(dword **)(pdVar15 + 0x1c);
    pdVar30 = (dword *)0x0;
    if (pdVar20 != (dword *)0x0) {
      uVar28 = auVar40._8_4_;
      if (pdVar20[6] <= uVar28) {
        pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(pdVar20 + 4) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
         (pdVar30 = *(dword **)(pdVar15 + 0xc), pdVar30 == (dword *)0x0)) {
        return pdVar16;
      }
      pdVar16 = *(dword **)(pdVar15 + 0x1c);
      pdVar15 = (dword *)0x0;
      if (pdVar16 != (dword *)0x0) {
        if (pdVar16[6] <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar22 = *(long **)(*(long *)(pdVar16 + 4) + (long)(int)uVar28 * 0x28 + 0x28);
        pppdVar9[-0xc] = (dword **)unaff_x28;
        pppdVar9[-0xb] = (dword **)unaff_x27;
        pppdVar9[-10] = (dword **)unaff_x26;
        pppdVar9[-9] = (dword **)unaff_x25;
        pppdVar9[-8] = pppdVar9[-8];
        pppdVar9[-7] = pppdVar9[-7];
        pppdVar9[-6] = pppdVar9[-6];
        pppdVar9[-5] = pppdVar9[-5];
        pppdVar9[-4] = pppdVar9[-4];
        pppdVar9[-3] = pppdVar9[-3];
        pppdVar9[-2] = pppdVar9[-2];
        pppdVar9[-1] = pppdVar9[-1];
        pppdVar9[-0xd] = (dword **)pdVar30;
        lVar31 = *(long *)(pdVar30 + 0x1a);
        if (lVar31 == 0) {
          ppdVar37 = (dword **)(pppdVar9 + -0xd);
          lVar29 = 1;
        }
        else {
          lVar29 = *(long *)(lVar31 + 0x18);
          if (lVar29 == 0) {
            return pdVar30;
          }
          ppdVar37 = (dword **)(lVar31 + 0x20);
        }
        lVar31 = 0;
        do {
          pdVar15 = ppdVar37[lVar31];
          pcVar32 = *(code **)(pdVar15 + 4);
          plVar1 = *(long **)(pdVar15 + 8);
          lVar19 = *(long *)(pdVar15 + 10);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar13 = func_0x00f78a4c(lVar19);
          bVar11 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar13 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar15 = (dword *)(*pcVar32)(plVar22,pdVar14,pdVar23,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar30 + 6) == 0)) goto code_r0x01e71aac;
                iVar13 = func_0x00f78a44(lVar19);
                iVar12 = func_0x00f78ec0(lVar19);
                if (iVar13 == 0) {
                  uVar3 = *(ushort *)(lVar19 + 0x48);
                  if (iVar12 == 0) {
                    lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar15 = (dword *)(**(code **)(lVar19 + 0x138))
                                                 (plVar1,plVar22,pdVar14,pdVar23,
                                                  *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar26 = *plVar1;
                  uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar18 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar19) {
                        puVar17 = (undefined8 *)
                                  (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar27 = piVar27 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar32 = (code *)*puVar17;
                  puVar17 = (undefined8 *)puVar17[1];
                }
                else {
                  if (iVar12 == 0) {
                    uVar25 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar26 = *plVar1;
                    uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar18 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar27 = piVar27 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar25 = *(undefined8 *)(lVar26 + 8);
                  }
                  puVar17 = (undefined8 *)func_0x00f78acc(uVar25,lVar19);
                  pcVar32 = (code *)*puVar17;
                }
                pdVar15 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar14,pdVar23,puVar17);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar30 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar13 = func_0x00f78a44(lVar19);
              iVar12 = func_0x00f78ec0(lVar19);
              if (iVar13 == 0) {
                uVar3 = *(ushort *)(lVar19 + 0x48);
                if (iVar12 == 0) {
                  lVar19 = *plVar22 + (ulong)uVar3 * 0x10;
                  pdVar15 = (dword *)(**(code **)(lVar19 + 0x138))
                                               (plVar22,pdVar14,pdVar23,
                                                *(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar26 = *plVar22;
                uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar18 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar19) {
                      puVar17 = (undefined8 *)
                                (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar27 = piVar27 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar22,lVar19,(ulong)uVar3);
code_r0x01e71d00:
                pcVar32 = (code *)*puVar17;
                puVar17 = (undefined8 *)puVar17[1];
              }
              else {
                if (iVar12 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar22 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar26 = *plVar22;
                  uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar18 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar27 = piVar27 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  lVar26 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                  uVar25 = *(undefined8 *)(lVar26 + 8);
                }
                puVar17 = (undefined8 *)func_0x00f78acc(uVar25,lVar19);
                pcVar32 = (code *)*puVar17;
              }
              pdVar15 = (dword *)(*pcVar32)(plVar22,pdVar14,pdVar23,puVar17);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar15 = (dword *)(*pcVar32)(plVar1,plVar22,pdVar14,pdVar23,lVar19);
          }
code_r0x01e71bd0:
          lVar31 = lVar31 + 1;
          if (lVar31 == lVar29) {
            return pdVar15;
          }
        } while( true );
      }
    }
  }
  ppdVar37 = (dword **)&Core_UI2_UIManager__SetScreenVisible;
  auVar41 = func_0x00f78af4();
  pdVar20 = pdVar23;
  pdVar16 = pdVar14;
code_r0x02f88674:
  pdVar23 = auVar41._0_8_;
  pppdVar10[-6] = (dword **)pdVar30;
  pppdVar10[-5] = (dword **)pdVar15;
  pppdVar10[-4] = (dword **)pdVar16;
  pppdVar10[-3] = (dword **)pdVar20;
  pppdVar10[-2] = (dword **)pppdVar35;
  pppdVar10[-1] = ppdVar37;
  pdVar15 = pdVar23;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar15 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar31 = *(long *)(pdVar23 + 0x1c);
  if (lVar31 != 0) {
    uVar28 = auVar41._8_4_;
    if (*(uint *)(lVar31 + 0x18) <= uVar28) {
      pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar31 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
      return pdVar15;
    }
    lVar31 = *(long *)(pdVar23 + 0x1c);
    if (lVar31 != 0) {
      if (*(uint *)(lVar31 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
      if ((lVar31 != 0) && (plVar22 = *(long **)(lVar31 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*plVar22 + 0x178))
                                     (plVar22,pdVar24,*(undefined8 *)(*plVar22 + 0x180));
        return pdVar15;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar25 = auVar38._0_8_;
  pppdVar10[-10] = auVar41._8_8_;
  pppdVar10[-9] = (dword **)pdVar24;
  pppdVar10[-8] = (dword **)(pppdVar10 + -2);
  pppdVar10[-7] = (dword **)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
  pppdVar10[-0xd] = (dword **)0x0;
  pppdVar10[-0xe] = (dword **)0x0;
  pppdVar10[-0xb] = (dword **)0x0;
  pppdVar10[-0xc] = (dword **)0x0;
  pdVar15 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar38._8_8_,pppdVar10 + -0xe);
  if ((int)pdVar15 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,pppdVar10[-0xc],pppdVar10[-0xb]);
    pppdVar10[-0x11] = pppdVar10[-0xd];
    pppdVar10[-0x12] = pppdVar10[-0xe];
    pppdVar10[-0xf] = pppdVar10[-0xb];
    pppdVar10[-0x10] = pppdVar10[-0xc];
    pdVar15 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,pppdVar10 + -0x12,1);
  }
  return pdVar15;
}



// ============================================================
// RVA: 0x147e698 | Atlas.League.LeagueModeUIManager..ctor
// ============================================================

void Atlas_League_LeagueModeUIManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x147e6a0 | Atlas.League.LeagueModeUIManager.<ShowLeaderboardWithBackButton>b__17_0
// ============================================================

long Atlas_League_LeagueModeUIManager___ShowLeaderboardWithBackButton_b__17_0
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_League_LeagueModeUIManager__ShowLeagueWeeklySchedule
              (param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
    return 1;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x50) != 0) {
    Atlas_League_LeagueManager__SetLastOpenedDate(*(long *)(lVar1 + 0x50),0);
    if (*(long *)(lVar1 + 0x50) != 0) {
      Atlas_League_LeagueManager__ApplyNextLeague(*(long *)(lVar1 + 0x50),0);
      if (*(long *)(lVar1 + 0x50) != 0) {
        Atlas_League_LeagueManager__SetupNewLeague(*(long *)(lVar1 + 0x50),0);
        lVar1 = *(long *)(lVar1 + 0x18);
        if (lVar1 != 0) {
          if ((bRam0000000003eb515b & 1) == 0) {
            func_0x00f78a20(0x3d2a5b0,0);
            func_0x00f78a20(0x3d194c8);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb515b = 1;
          }
          if (*(long *)(lVar1 + 0xb0) != 0) {
            Atlas_FrontEnd_FrontEndScene__ClearOverrideIP();
            uVar2 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
            lVar1 = *(long *)(lVar1 + 0x78);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar2,0);
            if (lVar1 != 0) {
              /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar1,uVar2,0,0,uRam0000000003d2a5b0);
              return 1;
            }
          }
          lVar1 = func_0x00f78af4();
          if ((bRam0000000003eb516d & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            bRam0000000003eb516d = 1;
          }
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)(lVar1 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
          uVar2 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar1);
          if ((bRam0000000003eb516e & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb516e = 1;
          }
          uVar2 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar1,uVar2);
          uVar6 = *(undefined8 *)(lVar1 + 200);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
          if ((int)lVar3 == 0) {
            return lVar3;
          }
          plVar4 = *(long **)(lVar1 + 200);
          if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar1 = (**(code **)(*plVar4 + 0x198))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x1a0));
            return lVar1;
          }
          auVar9 = func_0x00f78af4();
          plVar4 = auVar9._8_8_;
          lVar3 = auVar9._0_8_;
          lVar1 = lVar3;
          if ((bRam0000000003eb5170 & 1) == 0) {
            func_0x00f78a20(0x3d578b8);
            func_0x00f78a20(0x3d21b60);
            func_0x00f78a20(0x3d5b098);
            lVar1 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb5170 = 1;
          }
          if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
LAB_015947d8:
            lVar1 = func_0x00f78e5c(plVar4);
            return lVar1;
          }
          lVar5 = *(long *)(lVar3 + 0x90);
          if (lVar5 != 0) {
            uVar7 = 0;
            while( true ) {
              if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
                return lVar1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar1 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar4,uRam0000000003d5b098);
              lVar5 = *(long *)(lVar3 + 0x90);
              if ((lVar5 == 0) || (lVar1 == 0)) break;
              uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar1,uRam0000000003d578b8);
              if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_015947cc:
                uVar2 = func_0x00f78b24();
                func_0x00f78ac0(uVar2,0);
                goto LAB_015947d8;
              }
              lVar8 = (long)(int)uVar7;
              *(undefined8 *)(lVar5 + lVar8 * 0x40 + 0x40) = uVar2;
              lVar1 = *(long *)(lVar3 + 0x90);
              if (lVar1 == 0) break;
              if (*(uint *)(lVar1 + 0x18) <= uVar7) goto LAB_015947cc;
              lVar1 = *(long *)(lVar1 + lVar8 * 0x40 + 0x40);
              if (lVar1 == 0) break;
              Atlas_FrontEnd_PedestalBehaviour__Init(lVar1,0);
              lVar1 = *(long *)(lVar3 + 0x90);
              if (lVar1 == 0) break;
              if (*(uint *)(lVar1 + 0x18) <= uVar7) goto LAB_015947cc;
              lVar1 = *(long *)(lVar1 + lVar8 * 0x40 + 0x40);
              if (lVar1 == 0) break;
              uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
              lVar1 = *(long *)(lVar3 + 0x90);
              if (lVar1 == 0) break;
              if (*(uint *)(lVar1 + 0x18) <= uVar7) goto LAB_015947cc;
              lVar1 = *(long *)(lVar1 + lVar8 * 0x40 + 0x20);
              if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x18), lVar1 == 0)) ||
                 (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0), lVar1 == 0)) break;
              uVar7 = uVar7 + 1;
              lVar1 = /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar1,uVar2,0,0);
              lVar5 = *(long *)(lVar3 + 0x90);
              if (lVar5 == 0) break;
            }
          }
          lVar1 = func_0x00f78af4();
          return lVar1;
        }
      }
    }
  }
  auVar10 = func_0x00f78af4();
  lVar1 = *(long *)(auVar10._0_8_ + 0x10);
  if (lVar1 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar1 + 0x18)) {
    *(undefined4 *)(lVar1 + (long)(int)auVar10._8_4_ * 4 + 0x20) = param_3;
    return auVar10._0_8_;
  }
  uVar2 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar2,0);
  lVar1 = /*System.Object$$.ctor*/ func_0x0294d018(auVar9._0_8_,0);
  *(long *)(auVar9._0_8_ + 0x10) = auVar9._8_8_;
  return lVar1;
}



// ============================================================
// RVA: 0x147e6c8 | Atlas.League.LeagueModeUIManager.<ShowLeaderboardAfterPodium>b__23_0
// ============================================================

long Atlas_League_LeagueModeUIManager___ShowLeaderboardAfterPodium_b__23_0
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  if (*(long *)(param_1 + 0x50) != 0) {
    Atlas_League_LeagueManager__SetLastOpenedDate(*(long *)(param_1 + 0x50),0);
    if (*(long *)(param_1 + 0x50) != 0) {
      Atlas_League_LeagueManager__ApplyNextLeague(*(long *)(param_1 + 0x50),0);
      if (*(long *)(param_1 + 0x50) != 0) {
        Atlas_League_LeagueManager__SetupNewLeague(*(long *)(param_1 + 0x50),0);
        lVar1 = *(long *)(param_1 + 0x18);
        if (lVar1 != 0) {
          if ((bRam0000000003eb515b & 1) == 0) {
            func_0x00f78a20(0x3d2a5b0,0);
            func_0x00f78a20(0x3d194c8);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb515b = 1;
          }
          if (*(long *)(lVar1 + 0xb0) != 0) {
            Atlas_FrontEnd_FrontEndScene__ClearOverrideIP();
            uVar2 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
            lVar1 = *(long *)(lVar1 + 0x78);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar2,0);
            if (lVar1 != 0) {
              /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar1,uVar2,0,0,uRam0000000003d2a5b0);
              return 1;
            }
          }
          lVar1 = func_0x00f78af4();
          if ((bRam0000000003eb516d & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            bRam0000000003eb516d = 1;
          }
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)(lVar1 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
          uVar2 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar1);
          if ((bRam0000000003eb516e & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb516e = 1;
          }
          uVar2 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar1,uVar2);
          uVar6 = *(undefined8 *)(lVar1 + 200);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
          if ((int)lVar3 == 0) {
            return lVar3;
          }
          plVar4 = *(long **)(lVar1 + 200);
          if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar1 = (**(code **)(*plVar4 + 0x198))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x1a0));
            return lVar1;
          }
          auVar9 = func_0x00f78af4();
          plVar4 = auVar9._8_8_;
          lVar3 = auVar9._0_8_;
          lVar1 = lVar3;
          if ((bRam0000000003eb5170 & 1) == 0) {
            func_0x00f78a20(0x3d578b8);
            func_0x00f78a20(0x3d21b60);
            func_0x00f78a20(0x3d5b098);
            lVar1 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb5170 = 1;
          }
          if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
LAB_015947d8:
            lVar1 = func_0x00f78e5c(plVar4);
            return lVar1;
          }
          lVar5 = *(long *)(lVar3 + 0x90);
          if (lVar5 != 0) {
            uVar7 = 0;
            while( true ) {
              if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
                return lVar1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar1 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar4,uRam0000000003d5b098);
              lVar5 = *(long *)(lVar3 + 0x90);
              if ((lVar5 == 0) || (lVar1 == 0)) break;
              uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar1,uRam0000000003d578b8);
              if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_015947cc:
                uVar2 = func_0x00f78b24();
                func_0x00f78ac0(uVar2,0);
                goto LAB_015947d8;
              }
              lVar8 = (long)(int)uVar7;
              *(undefined8 *)(lVar5 + lVar8 * 0x40 + 0x40) = uVar2;
              lVar1 = *(long *)(lVar3 + 0x90);
              if (lVar1 == 0) break;
              if (*(uint *)(lVar1 + 0x18) <= uVar7) goto LAB_015947cc;
              lVar1 = *(long *)(lVar1 + lVar8 * 0x40 + 0x40);
              if (lVar1 == 0) break;
              Atlas_FrontEnd_PedestalBehaviour__Init(lVar1,0);
              lVar1 = *(long *)(lVar3 + 0x90);
              if (lVar1 == 0) break;
              if (*(uint *)(lVar1 + 0x18) <= uVar7) goto LAB_015947cc;
              lVar1 = *(long *)(lVar1 + lVar8 * 0x40 + 0x40);
              if (lVar1 == 0) break;
              uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
              lVar1 = *(long *)(lVar3 + 0x90);
              if (lVar1 == 0) break;
              if (*(uint *)(lVar1 + 0x18) <= uVar7) goto LAB_015947cc;
              lVar1 = *(long *)(lVar1 + lVar8 * 0x40 + 0x20);
              if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x18), lVar1 == 0)) ||
                 (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0), lVar1 == 0)) break;
              uVar7 = uVar7 + 1;
              lVar1 = /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar1,uVar2,0,0);
              lVar5 = *(long *)(lVar3 + 0x90);
              if (lVar5 == 0) break;
            }
          }
          lVar1 = func_0x00f78af4();
          return lVar1;
        }
      }
    }
  }
  auVar10 = func_0x00f78af4();
  lVar1 = *(long *)(auVar10._0_8_ + 0x10);
  if (lVar1 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar1 + 0x18)) {
    *(undefined4 *)(lVar1 + (long)(int)auVar10._8_4_ * 4 + 0x20) = param_3;
    return auVar10._0_8_;
  }
  uVar2 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar2,0);
  lVar1 = /*System.Object$$.ctor*/ func_0x0294d018(auVar9._0_8_,0);
  *(long *)(auVar9._0_8_ + 0x10) = auVar9._8_8_;
  return lVar1;
}



