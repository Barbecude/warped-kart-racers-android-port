// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Lighting.LightWorld

// ============================================================
// RVA: 0x147dff4 | Atlas.Lighting.LightWorld.UnRegisterAllMembers
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

dword * Atlas_Lighting_LightWorld__UnRegisterAllMembers(long param_1)

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
  undefined1 *puVar11;
  bool bVar12;
  undefined4 uVar13;
  long lVar16;
  int iVar14;
  int iVar15;
  dword *pdVar17;
  long lVar18;
  undefined8 *puVar19;
  dword *pdVar20;
  ulong uVar21;
  long lVar22;
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
  dword *unaff_x21;
  dword *pdVar32;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar33;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar34;
  undefined1 *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined4 extraout_s0;
  undefined8 uVar38;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  dword *pdStack_40;
  undefined8 *******pppppppuStack_30;
  code *pcStack_28;
  
  if ((bRam0000000003eb493a & 1) == 0) {
    func_0x00f78a20(0x3d3d470);
    bRam0000000003eb493a = 1;
  }
  pdVar17 = *(dword **)(param_1 + 0x18);
  if (pdVar17 != (dword *)0x0) {
    pdVar20 = pdVar17;
    if (0 < (int)pdVar17[6]) {
      pdVar20 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar17 + 4),0,pdVar17[6],0);
      pdVar17[6] = 0;
    }
    pdVar17[7] = pdVar17[7] + 1;
    return pdVar20;
  }
  lVar18 = func_0x00f78af4();
  pdStack_40 = (dword *)0x3eb4000;
  pcStack_28 = Atlas_League_LeagueModeUIManager__ShowPromotion;
  lVar16 = 0x3d59f00;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48d3 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d27e88);
    func_0x00f78a20(0x3d59f00);
    func_0x00f78a20(0x3d27e90);
    bRam0000000003eb48d3 = 1;
  }
  pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
  Atlas_UI_Screens_LeaguePromotionScreen_TransitionData___ctor(pdVar17,0);
  pdVar20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
  Atlas_UI_Screens_LeaguePromotionScreen_ContinueSelected___ctor
            (pdVar20,lVar18,uRam0000000003d59f00,0);
  if (pdVar17 == (dword *)0x0) {
LAB_0147e164:
    unaff_x21 = pdVar20;
    param_1 = lVar18;
    lVar18 = func_0x00f78af4();
    puVar5 = &stack0xffffffffffffff60;
    pcStack_68 = Atlas_League_LeagueModeUIManager__ShowReward;
    pdVar20 = (dword *)0x3eb4000;
    pppppppuStack_70 = &pppppppuStack_30;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    lVar22 = lVar18;
    pdVar32 = unaff_x21;
    unaff_x23 = 0x3d27e90;
    if (*(long *)(lVar18 + 0x50) == 0) {
LAB_0147e318:
      unaff_x21 = pdVar32;
      lVar18 = func_0x00f78af4();
      param_1 = lVar22;
      pdVar17 = pdVar20;
      pppppppuVar34 = &pppppppuStack_70;
      pcVar33 = Atlas_League_LeagueModeUIManager__ShowStarsConversion;
    }
    else {
      pdVar20 = (dword *)Atlas_League_LeagueManager__GetUnlockedRewardOrNull
                                   (*(long *)(lVar18 + 0x50),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar27 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar15 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar20,uVar27,0);
      if (iVar15 != 0) {
        pdVar32 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(pdVar32,0);
        lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        Atlas_UI_Screens_RewardScreen_PostRewardSequence___ctor
                  (lVar16,lVar18,uRam0000000003d59f08,0);
        unaff_x23 = 0x3d21270;
        if (pdVar32 != (dword *)0x0) {
          *(long *)(pdVar32 + 4) = lVar16;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar20,0);
          *(long *)(pdVar32 + 0xc) = lVar22;
          pdVar31 = *(dword **)(lVar18 + 0x30);
          *(long *)(pdVar32 + 0xe) = *(long *)(lVar18 + 0x28);
          *(undefined1 *)(pdVar32 + 0x10) = 1;
          pdVar20 = (dword *)0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar22 = 0;
          unaff_x23 = 0x3d21270;
          if (pdVar31 != (dword *)0x0) {
            pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            unaff_x22 = 0x3d59f00;
            puVar5 = &stack0xffffffffffffffa0;
            unaff_x23 = 0x3d27e90;
            pppppppuVar34 = pppppppuStack_70;
            pcVar33 = pcStack_68;
            goto Atlas_UI_AtlasUIManager__TransitionToScreen;
          }
        }
        goto LAB_0147e318;
      }
      lVar16 = 0x3d59f00;
      puVar5 = &stack0xffffffffffffffa0;
      unaff_x23 = 0x3d27e90;
      pppppppuVar34 = pppppppuStack_70;
      pcVar33 = pcStack_68;
    }
    *(long *)(puVar5 + -0x30) = lVar16;
    *(dword **)(puVar5 + -0x28) = unaff_x21;
    *(dword **)(puVar5 + -0x20) = pdVar17;
    *(long *)(puVar5 + -0x18) = param_1;
    *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar34;
    *(code **)(puVar5 + -8) = pcVar33;
    puVar35 = puVar5 + -0x10;
    pdVar32 = (dword *)0x3eb4000;
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
    lVar22 = lVar18;
    if (*(long *)(lVar18 + 0x50) == 0) {
LAB_0147e554:
      pcVar33 = Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      lVar18 = func_0x00f78af4();
      puVar5 = puVar5 + -0x30;
    }
    else {
      iVar15 = Atlas_League_LeagueManager__StarsAwardedLatch(*(long *)(lVar18 + 0x50),0);
      if (iVar15 == 0) {
        pdVar32 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        Atlas_FrontEnd_EventInfo___ctor(pdVar32,0);
        if (pdVar32 != (dword *)0x0) {
          pdVar32[4] = 9;
          *(long *)(pdVar32 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          unaff_x21 = *(dword **)(lVar18 + 0x60);
          if (unaff_x21 != (dword *)0x0) {
            uVar27 = Atlas_Stats_SeasonsManager__GetCurrentSeason(unaff_x21,0);
            uVar13 = Atlas_Stats_SeasonsManager__GetStarsForSeason(unaff_x21,uVar27,0);
            unaff_x21[0x10] = uVar13;
            if (*(long *)(lVar18 + 0x50) != 0) {
              unaff_x21 = *(dword **)(lVar18 + 0x58);
              lVar16 = Atlas_League_LeagueManager__GetPlayerStars(*(long *)(lVar18 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar27 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (unaff_x21 != (dword *)0x0) {
                Atlas_Stats_UnlockManager__EvaluateSeasonAwards
                          (unaff_x21,lVar16,uVar27,*(undefined8 *)(lVar18 + 0x40),pdVar32,0);
                if (*(long *)(lVar18 + 0x50) != 0) {
                  Atlas_League_LeagueManager__SetStarsAwardedLatch(*(long *)(lVar18 + 0x50),0);
                  if (*(long *)(lVar18 + 0x38) != 0) {
                    Atlas_UI_TopBarManager__SetButtonFunc(*(long *)(lVar18 + 0x38),0,0,0);
                    pdVar32 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    Atlas_UI_Screens_SeasonsScreen_TransitionData___ctor(pdVar32,0);
                    unaff_x21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    Atlas_UI_Screens_SeasonsScreen_OptionSelected___ctor
                              (unaff_x21,lVar18,uRam0000000003d59f00,0);
                    if (pdVar32 != (dword *)0x0) {
                      *(dword **)(pdVar32 + 4) = unaff_x21;
                      *(undefined1 *)((long)pdVar32 + 0x19) = 1;
                      pdVar31 = *(dword **)(lVar18 + 0x30);
                      unaff_x21 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar22 = 0;
                      if (pdVar31 != (dword *)0x0) {
                        pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        pppppppuVar34 = *(undefined8 ********)(puVar5 + -0x10);
                        pcVar33 = *(code **)(puVar5 + -8);
                        pdVar17 = *(dword **)(puVar5 + -0x20);
                        param_1 = *(long *)(puVar5 + -0x18);
                        unaff_x22 = *(undefined8 *)(puVar5 + -0x30);
                        unaff_x21 = *(dword **)(puVar5 + -0x28);
                        goto Atlas_UI_AtlasUIManager__TransitionToScreen;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0147e554;
      }
      puVar35 = *(undefined1 **)(puVar5 + -0x10);
      pcVar33 = *(code **)(puVar5 + -8);
      pdVar32 = *(dword **)(puVar5 + -0x20);
      lVar22 = *(long *)(puVar5 + -0x18);
      lVar16 = *(long *)(puVar5 + -0x30);
      unaff_x21 = *(dword **)(puVar5 + -0x28);
    }
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(long *)(puVar5 + -0x30) = lVar16;
    *(dword **)(puVar5 + -0x28) = unaff_x21;
    *(dword **)(puVar5 + -0x20) = pdVar32;
    *(long *)(puVar5 + -0x18) = lVar22;
    *(undefined1 **)(puVar5 + -0x10) = puVar35;
    *(code **)(puVar5 + -8) = pcVar33;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar32 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    Atlas_UI_Screens_LeagueLeaderboardScreen_TransitionData___ctor(pdVar32,0);
    lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    Atlas_UI_Screens_LeagueLeaderboardScreen_NextSelected___ctor
              (lVar16,lVar18,uRam0000000003d59ed8,0);
    if (pdVar32 == (dword *)0x0) {
LAB_0147e694:
      pdVar17 = (dword *)func_0x00f78af4();
      return pdVar17;
    }
    *(long *)(pdVar32 + 6) = lVar16;
    if (*(long *)(lVar18 + 0x20) == 0) goto LAB_0147e694;
    *(long *)(pdVar32 + 4) = *(long *)(*(long *)(lVar18 + 0x20) + 0x10);
    *(long *)(pdVar32 + 8) = *(long *)(lVar18 + 0x28);
    *(undefined1 *)(pdVar32 + 10) = 1;
    if (*(long *)(lVar18 + 0x38) == 0) goto LAB_0147e694;
    Atlas_UI_TopBarManager__SetButtonFunc(*(long *)(lVar18 + 0x38),0,0,0);
    pdVar31 = *(dword **)(lVar18 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar31 == (dword *)0x0) goto LAB_0147e694;
    pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    pppppppuVar34 = *(undefined8 ********)(puVar5 + -0x10);
    pcVar33 = *(code **)(puVar5 + -8);
    pdVar17 = *(dword **)(puVar5 + -0x20);
    param_1 = *(long *)(puVar5 + -0x18);
    unaff_x22 = *(undefined8 *)(puVar5 + -0x30);
    unaff_x21 = *(dword **)(puVar5 + -0x28);
    unaff_x24 = *(undefined8 *)(puVar5 + -0x40);
    unaff_x23 = *(undefined8 *)(puVar5 + -0x38);
  }
  else {
    *(dword **)(pdVar17 + 4) = pdVar20;
    if (*(long *)(lVar18 + 0x38) == 0) goto LAB_0147e164;
    Atlas_UI_TopBarManager__SetButtonFunc(*(long *)(lVar18 + 0x38),0,0,0);
    pdVar31 = *(dword **)(lVar18 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar18 = 0;
    pdVar20 = (dword *)0x3d1feb8;
    if (pdVar31 == (dword *)0x0) goto LAB_0147e164;
    pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
    puVar5 = &stack0xffffffffffffffe0;
    pdVar32 = pdVar17;
    pdVar17 = pdStack_40;
    pppppppuVar34 = pppppppuStack_30;
    pcVar33 = pcStack_28;
  }
Atlas_UI_AtlasUIManager__TransitionToScreen:
  uVar27 = 0;
  pdVar25 = (dword *)0x0;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(dword **)(puVar5 + -0x28) = unaff_x21;
  *(dword **)(puVar5 + -0x20) = pdVar17;
  *(long *)(puVar5 + -0x18) = param_1;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar34;
  *(code **)(puVar5 + -8) = pcVar33;
  puVar35 = puVar5 + -0x10;
  pdVar17 = (dword *)0x0;
  pdVar26 = pdVar32;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)(puVar5 + -0x48) = 0;
  lVar16 = *(long *)(pdVar31 + 4);
  if (lVar16 != 0) {
    pdVar25 = (dword *)0x0;
    uVar27 = 0;
    uVar36 = 0x1470820;
    pdVar23 = pdVar20;
    pdVar26 = pdVar32;
code_r0x02f87f38:
    *(undefined8 *)(puVar5 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x88) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x80) = 0;
    *(dword **)(puVar5 + -0x78) = pdVar32;
    *(dword **)(puVar5 + -0x70) = pdVar31;
    *(dword **)(puVar5 + -0x68) = pdVar20;
    *(undefined1 **)(puVar5 + -0x60) = puVar35;
    *(undefined8 *)(puVar5 + -0x58) = uVar36;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)(puVar5 + -0x130) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x128) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x120) = 0x3ebc000;
    *(dword **)(puVar5 + -0x118) = pdVar23;
    *(dword **)(puVar5 + -0x110) = pdVar26;
    *(undefined8 *)(puVar5 + -0x108) = uVar27;
    *(long *)(puVar5 + -0x100) = lVar16;
    *(dword **)(puVar5 + -0xf8) = pdVar25;
    *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x60;
    *(undefined **)(puVar5 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar18 = *(long *)(lVar16 + 0x78);
    if (lVar18 != 0) {
      iVar15 = *(int *)(lVar18 + 0x18);
      if (iVar15 < 1) {
        return (dword *)0x0;
      }
      iVar14 = 1;
      pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar18 + 0x18) <= iVar14 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
        if (lVar18 == 0) break;
        uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar18,pdVar23,5,0);
        if ((uVar21 & 1) != 0) {
          return pdVar17;
        }
        pdVar17 = (dword *)(ulong)(iVar14 < iVar15);
        if (iVar15 == iVar14) {
          return pdVar17;
        }
        lVar18 = *(long *)(lVar16 + 0x78);
        iVar14 = iVar14 + 1;
      } while (lVar18 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar39 = func_0x00f78af4();
  pdVar23 = auVar39._8_8_;
  *(undefined1 **)(puVar5 + -0x60) = puVar35;
  *(code **)(puVar5 + -0x58) = Atlas_UI_AtlasUIManager__ShowScreen;
  lVar16 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar16 != 0) {
    puVar35 = *(undefined1 **)(puVar5 + -0x60);
    uVar36 = *(undefined8 *)(puVar5 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar39 = func_0x00f78af4();
  uVar27 = auVar39._8_8_;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x60;
  *(code **)(puVar5 + -0x68) = Atlas_UI_AtlasUIManager__HideScreen;
  lVar16 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar16 != 0) {
    pdVar25 = (dword *)0x0;
    *(undefined8 *)(puVar5 + -0x90) = 0;
    *(dword **)(puVar5 + -0x88) = pdVar32;
    *(dword **)(puVar5 + -0x80) = pdVar31;
    *(dword **)(puVar5 + -0x78) = pdVar20;
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar18 = *(long *)(lVar16 + 0x70);
    if (lVar18 != 0) {
      lVar22 = lVar18;
      if (*(uint *)(lVar18 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar22 = *(long *)(lVar16 + 0x70);
      }
      if (lVar22 != 0) {
        lVar18 = *(long *)(lVar18 + 0x10) + (long)(int)auVar39._8_4_ * 0x28;
        uVar38 = *(undefined8 *)(lVar18 + 0x28);
        uVar36 = *(undefined8 *)(lVar18 + 0x20);
        uVar13 = *(undefined4 *)(lVar18 + 0x42);
        *(undefined4 *)(puVar5 + -0xd8) = uVar13;
        uVar4 = *(undefined2 *)(lVar18 + 0x46);
        *(undefined2 *)(puVar5 + -0xd4) = uVar4;
        *(undefined8 *)(puVar5 + -200) = uVar38;
        *(undefined8 *)(puVar5 + -0xd0) = uVar36;
        *(undefined8 *)(puVar5 + -0xb8) = uVar38;
        *(undefined8 *)(puVar5 + -0xc0) = uVar36;
        *(undefined8 *)(puVar5 + -0xb0) = 0;
        *(undefined8 *)(puVar5 + -0xa8) = 0;
        *(undefined2 *)(puVar5 + -0xa0) = 1;
        *(undefined4 *)(puVar5 + -0x9e) = uVar13;
        *(undefined2 *)(puVar5 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar27,puVar5 + -0xc0,uRam0000000003d3ddd0);
        pdVar17 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,uVar27);
        return pdVar17;
      }
    }
    auVar39 = func_0x00f78af4();
    pdVar23 = auVar39._8_8_;
    puVar11 = puVar5 + -0x110;
    *(undefined8 *)(puVar5 + -0x110) = 0;
    *(long *)(puVar5 + -0x108) = lVar18;
    *(long *)(puVar5 + -0x100) = lVar16;
    *(undefined8 *)(puVar5 + -0xf8) = uVar27;
    *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x70;
    *(undefined **)(puVar5 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar5 = puVar5 + -0xf0;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar16 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar17 = (dword *)0x0;
      }
      else {
        pdVar17 = *(dword **)(lVar16 + 0x40);
      }
      return pdVar17;
    }
    puVar37 = &Core_UI2_UIScreen__ForceExit;
    pdVar20 = (dword *)func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar32 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar39 = func_0x00f78af4();
  pdVar23 = auVar39._8_8_;
  *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x70;
  *(code **)(puVar5 + -0x78) = Atlas_UI_AtlasUIManager__ClearLayer;
  lVar16 = *(long *)(auVar39._0_8_ + 0x10);
  auVar39._8_8_ = pdVar32;
  auVar39._0_8_ = lVar16;
  if (lVar16 != 0) {
    pdVar25 = (dword *)0x0;
    puVar6 = puVar5 + -0x70;
    puVar35 = *(undefined1 **)(puVar5 + -0x80);
    puVar37 = *(undefined **)(puVar5 + -0x78);
    pdVar32 = pdVar31;
    goto code_r0x02f877a8;
  }
  auVar39 = func_0x00f78af4();
  *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x80;
  *(code **)(puVar5 + -0x88) = Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar16 = *(long *)(auVar39._0_8_ + 0x10);
  auVar39._8_8_ = auVar39._8_8_;
  auVar39._0_8_ = lVar16;
  if (lVar16 != 0) {
    puVar7 = puVar5 + -0x80;
    puVar35 = *(undefined1 **)(puVar5 + -0x90);
    puVar37 = *(undefined **)(puVar5 + -0x88);
    pdVar23 = pdVar25;
    while( true ) {
      puVar6 = puVar7 + -0x30;
      *(dword **)(puVar7 + -0x30) = pdVar17;
      *(dword **)(puVar7 + -0x28) = pdVar32;
      *(dword **)(puVar7 + -0x20) = pdVar31;
      *(dword **)(puVar7 + -0x18) = pdVar20;
      *(undefined1 **)(puVar7 + -0x10) = puVar35;
      *(undefined **)(puVar7 + -8) = puVar37;
      puVar35 = puVar7 + -0x10;
      puVar37 = &UNK_02f883d8;
      pdVar25 = pdVar23;
      pdVar20 = pdVar26;
      pdVar32 = pdVar23;
      pdVar17 = auVar39._0_8_;
code_r0x02f877a8:
      pdVar31 = auVar39._0_8_;
      puVar11 = puVar6 + -0x60;
      *(dword **)(puVar6 + -0x30) = pdVar17;
      *(long *)(puVar6 + -0x28) = auVar39._8_8_;
      *(dword **)(puVar6 + -0x20) = pdVar32;
      *(dword **)(puVar6 + -0x18) = pdVar20;
      *(undefined1 **)(puVar6 + -0x10) = puVar35;
      *(undefined **)(puVar6 + -8) = puVar37;
      puVar5 = puVar6 + -0x10;
      pdVar20 = pdVar31;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar20 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar30 = (uint)pdVar23;
      if (((int)uVar30 < 0) || ((int)*(long *)(pdVar31 + 0x14) <= (int)uVar30)) {
        return pdVar20;
      }
      lVar16 = *(long *)(pdVar31 + 0x1c);
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + ((ulong)pdVar23 & 0xffffffff) * 0x28;
      pdVar17 = *(dword **)(lVar16 + 0x20);
      pdVar20 = *(dword **)(lVar16 + 0x28);
      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar16 + 0x42);
      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar16 + 0x46);
      if (pdVar20 == (dword *)0x0) {
        lVar16 = *(long *)(pdVar31 + 0x1c);
        if (lVar16 != 0) {
          *(dword **)(puVar6 + -0x58) = pdVar17;
          *(undefined8 *)(puVar6 + -0x50) = 0;
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined2 *)(puVar6 + -0x38) = 0;
          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
          pdVar17 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar16,pdVar23,puVar6 + -0x58,uRam0000000003d3ddd0);
          return pdVar17;
        }
        break;
      }
      puVar37 = &UNK_02f87848;
      pdVar32 = pdVar20;
code_r0x02f882d8:
      *(dword **)(puVar11 + -0x20) = pdVar31;
      *(dword **)(puVar11 + -0x18) = pdVar23;
      *(undefined1 **)(puVar11 + -0x10) = puVar5;
      *(undefined **)(puVar11 + -8) = puVar37;
      (**(code **)(*(long *)pdVar20 + 0x218))(pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x220));
      if (*(long *)(pdVar20 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar20 + 10),0);
        pdVar20[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar20,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar17 = (dword *)(**(code **)(*(long *)pdVar20 + 0x228))
                                     (pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x230));
        return pdVar17;
      }
      func_0x00f78af4();
      puVar7 = puVar11 + -0x40;
      *(dword **)(puVar11 + -0x40) = pdVar31;
      *(dword **)(puVar11 + -0x38) = pdVar20;
      *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar35 = puVar11 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar16 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar27 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar27,lVar16);
        pdVar17 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar17;
      }
      puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar39 = func_0x00f78af4();
      pdVar23 = pdVar25;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar17;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar31;
    *(dword **)(puVar6 + -0x78) = pdVar23;
    *(undefined1 **)(puVar6 + -0x70) = puVar5;
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
    if (0 < *(int *)(lVar16 + 0x50)) {
      iVar15 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,iVar15);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar16,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar16 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar16);
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
    pdVar17 = (dword *)(*pcRam0000000003ec05a0)(uVar27);
    return pdVar17;
  }
  auVar39 = func_0x00f78af4();
  *(undefined1 **)(puVar5 + -0xa0) = puVar5 + -0x90;
  *(code **)(puVar5 + -0x98) = Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar16 = *(long *)(auVar39._0_8_ + 0x10);
  if (lVar16 == 0) {
    auVar39 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0xa0;
    *(code **)(puVar5 + -0xa8) = Atlas_UI_AtlasUIManager__GetLayerState;
    lVar16 = *(long *)(auVar39._0_8_ + 0x10);
    auVar40._8_8_ = auVar39._8_8_;
    auVar40._0_8_ = lVar16;
    if (lVar16 != 0) {
      pdVar26 = (dword *)0x0;
      puVar8 = puVar5 + -0xa0;
      puVar35 = *(undefined1 **)(puVar5 + -0xb0);
      puVar37 = *(undefined **)(puVar5 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar39 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0xb0;
    *(code **)(puVar5 + -0xb8) = Atlas_UI_AtlasUIManager__EnableInput;
    lVar16 = *(long *)(auVar39._0_8_ + 0x10);
    auVar41._8_8_ = auVar39._8_8_;
    auVar41._0_8_ = lVar16;
    if (lVar16 == 0) {
      auVar39 = func_0x00f78af4();
      *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0xc0;
      *(code **)(puVar5 + -200) = Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar16 = *(long *)(auVar39._0_8_ + 0x10);
      auVar42._8_8_ = auVar39._8_8_;
      auVar42._0_8_ = lVar16;
      if (lVar16 == 0) {
        pdVar17 = (dword *)func_0x00f78af4();
        *(undefined8 *)(puVar5 + -0x100) = 0;
        *(dword **)(puVar5 + -0xf8) = pdVar32;
        *(dword **)(puVar5 + -0xf0) = pdVar31;
        *(dword **)(puVar5 + -0xe8) = pdVar20;
        *(undefined1 **)(puVar5 + -0xe0) = puVar5 + -0xd0;
        *(code **)(puVar5 + -0xd8) = Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar27 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar27,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar17 + 0xc) = uVar27;
        return pdVar17;
      }
      puVar10 = puVar5 + -0xc0;
      puVar35 = *(undefined1 **)(puVar5 + -0xd0);
      puVar37 = *(undefined **)(puVar5 + -200);
      goto code_r0x02f88674;
    }
    puVar9 = puVar5 + -0xb0;
    puVar35 = *(undefined1 **)(puVar5 + -0xc0);
    puVar37 = *(undefined **)(puVar5 + -0xb8);
    pdVar26 = pdVar25;
    pdVar17 = pdVar32;
  }
  else {
    pdVar26 = (dword *)0x0;
    puVar8 = puVar5 + -0xc0;
    *(undefined8 *)(puVar5 + -0xc0) = 0;
    *(dword **)(puVar5 + -0xb8) = pdVar32;
    *(dword **)(puVar5 + -0xb0) = pdVar31;
    *(dword **)(puVar5 + -0xa8) = pdVar20;
    *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0xa0);
    *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x98);
    puVar35 = puVar5 + -0xa0;
    pdVar32 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar30 = auVar39._8_4_;
    if (((int)uVar30 < 0) || (*(int *)(lVar16 + 0x50) <= (int)uVar30)) {
      return (dword *)0x0;
    }
    lVar16 = *(long *)(lVar16 + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(lVar16 + 0x10) + ((ulong)auVar39._8_8_ & 0xffffffff) * 0x28;
      lVar16 = *(long *)(lVar18 + 0x28);
      cVar2 = *(char *)(lVar18 + 0x40);
      iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar18 + 0x30),0);
      if (iVar15 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar37 = &Core_UI2_UIManager__GetLayerState;
    auVar40 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar20 = auVar39._8_8_;
code_r0x02f884dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = 0;
    *(dword **)(puVar8 + -0x28) = pdVar32;
    *(dword **)(puVar8 + -0x20) = pdVar31;
    *(dword **)(puVar8 + -0x18) = pdVar20;
    *(undefined1 **)(puVar8 + -0x10) = puVar35;
    *(undefined **)(puVar8 + -8) = puVar37;
    puVar35 = puVar8 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar16 = *(long *)(auVar40._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar40._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar40._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar17 = &MACH_HEADER.cputype;
      }
      else {
        pdVar17 = (dword *)(ulong)*(uint *)(lVar16 + 0x4c);
      }
      return pdVar17;
    }
    puVar37 = &Core_UI2_UIManager__EnableInput;
    auVar41 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar20 = auVar40._8_8_;
    pdVar17 = (dword *)0x3ebc000;
  }
  pdVar23 = auVar41._8_8_;
  pdVar32 = auVar41._0_8_;
  puVar10 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(dword **)(puVar9 + -0x28) = pdVar17;
  *(dword **)(puVar9 + -0x20) = pdVar31;
  *(dword **)(puVar9 + -0x18) = pdVar20;
  *(undefined1 **)(puVar9 + -0x10) = puVar35;
  *(undefined **)(puVar9 + -8) = puVar37;
  puVar35 = puVar9 + -0x10;
  pdVar17 = (dword *)0x3ebc000;
  pdVar25 = pdVar26;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar32 + 0x1a) != 0) {
    pdVar25 = (dword *)(ulong)((uint)pdVar26 ^ 1);
    pdVar20 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar32 + 0x1a),pdVar23,pdVar25,0);
    lVar16 = *(long *)(pdVar32 + 0x1c);
    pdVar17 = (dword *)0x0;
    if (lVar16 != 0) {
      uVar30 = auVar41._8_4_;
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        pdVar20 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) ||
         (pdVar17 = *(dword **)(pdVar32 + 0xc), pdVar17 == (dword *)0x0)) {
        return pdVar20;
      }
      lVar16 = *(long *)(pdVar32 + 0x1c);
      pdVar32 = (dword *)0x0;
      if (lVar16 != 0) {
        if (*(uint *)(lVar16 + 0x18) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar24 = *(long **)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
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
        *(dword **)(puVar9 + -0x68) = pdVar17;
        lVar16 = *(long *)(pdVar17 + 0x1a);
        if (lVar16 == 0) {
          puVar5 = puVar9 + -0x68;
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar16 + 0x18);
          if (lVar18 == 0) {
            return pdVar17;
          }
          puVar5 = (undefined1 *)(lVar16 + 0x20);
        }
        lVar16 = 0;
        do {
          lVar22 = *(long *)(puVar5 + lVar16 * 8);
          pcVar33 = *(code **)(lVar22 + 0x10);
          plVar1 = *(long **)(lVar22 + 0x20);
          lVar22 = *(long *)(lVar22 + 0x28);
          if (*(short *)(lVar22 + 0x48) == -1) {
            func_0x00f78ad8(lVar22);
          }
          iVar15 = func_0x00f78a4c(lVar22);
          bVar12 = *(char *)(lVar22 + 0x4a) == '\x03';
          if (iVar15 == 0) {
            if (bVar12) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar20 = (dword *)(*pcVar33)(plVar24,pdVar23,pdVar26,lVar22);
              }
              else {
                if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar17 + 6) == 0)) goto code_r0x01e71aac;
                iVar15 = func_0x00f78a44(lVar22);
                iVar14 = func_0x00f78ec0(lVar22);
                if (iVar15 == 0) {
                  uVar3 = *(ushort *)(lVar22 + 0x48);
                  if (iVar14 == 0) {
                    lVar22 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar20 = (dword *)(**(code **)(lVar22 + 0x138))
                                                 (plVar1,plVar24,pdVar23,pdVar26,
                                                  *(undefined8 *)(lVar22 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar22 = func_0x00f78a48(lVar22);
                  lVar28 = *plVar1;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar22) {
                        puVar19 = (undefined8 *)
                                  (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar29 = piVar29 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar33 = (code *)*puVar19;
                  puVar19 = (undefined8 *)puVar19[1];
                }
                else {
                  if (iVar14 == 0) {
                    uVar27 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar28 = *plVar1;
                    uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                    if (uVar21 != 0) {
                      piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == *(long *)(lVar22 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar22 + 0x48))
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
                  puVar19 = (undefined8 *)func_0x00f78acc(uVar27,lVar22);
                  pcVar33 = (code *)*puVar19;
                }
                pdVar20 = (dword *)(*pcVar33)(plVar1,plVar24,pdVar23,pdVar26,puVar19);
              }
            }
            else {
              if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar17 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar15 = func_0x00f78a44(lVar22);
              iVar14 = func_0x00f78ec0(lVar22);
              if (iVar15 == 0) {
                uVar3 = *(ushort *)(lVar22 + 0x48);
                if (iVar14 == 0) {
                  lVar22 = *plVar24 + (ulong)uVar3 * 0x10;
                  pdVar20 = (dword *)(**(code **)(lVar22 + 0x138))
                                               (plVar24,pdVar23,pdVar26,
                                                *(undefined8 *)(lVar22 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar22 = func_0x00f78a48(lVar22);
                lVar28 = *plVar24;
                uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar21 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar22) {
                      puVar19 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar29 = piVar29 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar19 = (undefined8 *)func_0x00fac1f0(plVar24,lVar22,(ulong)uVar3);
code_r0x01e71d00:
                pcVar33 = (code *)*puVar19;
                puVar19 = (undefined8 *)puVar19[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar27 = *(undefined8 *)
                            (*plVar24 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar24;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar22 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar22 + 0x48)) *
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
                puVar19 = (undefined8 *)func_0x00f78acc(uVar27,lVar22);
                pcVar33 = (code *)*puVar19;
              }
              pdVar20 = (dword *)(*pcVar33)(plVar24,pdVar23,pdVar26,puVar19);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar20 = (dword *)(*pcVar33)(plVar1,plVar24,pdVar23,pdVar26,lVar22);
          }
code_r0x01e71bd0:
          lVar16 = lVar16 + 1;
          if (lVar16 == lVar18) {
            return pdVar20;
          }
        } while( true );
      }
    }
  }
  puVar37 = &Core_UI2_UIManager__SetScreenVisible;
  auVar42 = func_0x00f78af4();
  pdVar20 = pdVar26;
  pdVar31 = pdVar23;
code_r0x02f88674:
  pdVar26 = auVar42._0_8_;
  *(dword **)(puVar10 + -0x30) = pdVar17;
  *(dword **)(puVar10 + -0x28) = pdVar32;
  *(dword **)(puVar10 + -0x20) = pdVar31;
  *(dword **)(puVar10 + -0x18) = pdVar20;
  *(undefined1 **)(puVar10 + -0x10) = puVar35;
  *(undefined **)(puVar10 + -8) = puVar37;
  pdVar17 = pdVar26;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar17 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar16 = *(long *)(pdVar26 + 0x1c);
  if (lVar16 != 0) {
    uVar30 = auVar42._8_4_;
    if (*(uint *)(lVar16 + 0x18) <= uVar30) {
      pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
      return pdVar17;
    }
    lVar16 = *(long *)(pdVar26 + 0x1c);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
      if ((lVar16 != 0) && (plVar24 = *(long **)(lVar16 + 0x28), plVar24 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar17 = (dword *)(**(code **)(*plVar24 + 0x178))
                                     (plVar24,pdVar25,*(undefined8 *)(*plVar24 + 0x180));
        return pdVar17;
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
  pdVar17 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar27,auVar39._8_8_,puVar10 + -0x70);
  if ((int)pdVar17 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar27,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
    pdVar17 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar27,puVar10 + -0x90,1);
  }
  return pdVar17;
}



// ============================================================
// RVA: 0x1484390 | Atlas.Lighting.LightWorld.ColorToFloat4
// ============================================================

undefined4 Atlas_Lighting_LightWorld__ColorToFloat4(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x1484c1c | Atlas.Lighting.LightWorld.get_GlobalLightVolumeParams
// ============================================================

void Atlas_Lighting_LightWorld__get_GlobalLightVolumeParams(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x74);
  uVar1 = *(undefined8 *)(param_2 + 0x6c);
  uVar3 = *(undefined8 *)(param_2 + 0x7c);
  uVar5 = *(undefined8 *)(param_2 + 0x94);
  uVar4 = *(undefined8 *)(param_2 + 0x8c);
  param_1[5] = *(undefined8 *)(param_2 + 0x84);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x9c);
  uVar3 = *(undefined8 *)(param_2 + 0x5c);
  param_1[1] = *(undefined8 *)(param_2 + 100);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



// ============================================================
// RVA: 0x1484c40 | Atlas.Lighting.LightWorld.set_GlobalLightVolumeParams
// ============================================================

void Atlas_Lighting_LightWorld__set_GlobalLightVolumeParams(long param_1,undefined8 param_2)

{
  _memmove(param_1 + 0x5c,param_2,0x44);
  return;
}



// ============================================================
// RVA: 0x1484c5c | Atlas.Lighting.LightWorld.Init
// ============================================================

void Atlas_Lighting_LightWorld__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4933 & 1) == 0) {
    func_0x00f78a20(0x3d3b020);
    func_0x00f78a20(0x3d3cb58);
    func_0x00f78a20(0x3d3d460);
    func_0x00f78a20(0x3d1e200);
    func_0x00f78a20(0x3d1db60);
    func_0x00f78a20(0x3d1e038);
    bRam0000000003eb4933 = 1;
  }
  if (*(char *)(param_1 + 0xe4) == '\0') {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<LightWorld.Member>_TypeInfo*/ uRam0000000003d1e200);
    /*System.Collections.Generic.List<LightWorld.Member>$$.ctor*/ func_0x0254bd34(uVar1,100,uRam0000000003d3d460);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<float4>_TypeInfo*/ uRam0000000003d1e038);
    /*System.Collections.Generic.List<float4>$$.ctor*/ func_0x0249e620(uVar1,100,uRam0000000003d3cb58);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<LightVolumeParams>_TypeInfo*/ uRam0000000003d1db60);
    /*System.Collections.Generic.List<LightVolumeParams>$$.ctor*/ func_0x023f0d1c(uVar1,100,uRam0000000003d3b020);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined1 *)(param_1 + 0xe4) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x1484d78 | Atlas.Lighting.LightWorld.DeInit
// ============================================================

void Atlas_Lighting_LightWorld__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0xe4) != '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    /*Atlas.Lighting.LightWorld$$DestroyLightVolumeArrays*/ func_0x01484db0();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x1484db0 | Atlas.Lighting.LightWorld.DestroyLightVolumeArrays
// ============================================================

void Atlas_Lighting_LightWorld__DestroyLightVolumeArrays(long param_1)

{
  if ((bRam0000000003eb493d & 1) == 0) {
    func_0x00f78a20(0x3d3e2b0);
    bRam0000000003eb493d = 1;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    /*Unity.Collections.NativeArray<LightVolume>$$Dispose*/ func_0x025f8364(param_1 + 0x30,uRam0000000003d3e2b0);
    /*Unity.Collections.NativeArray<LightVolume>$$Dispose*/ func_0x025f8364(param_1 + 0x40,uRam0000000003d3e2b0);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x1484e18 | Atlas.Lighting.LightWorld.SetLightVolumes
// ============================================================

/* WARNING: Possible PIC construction at 0x014852e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01485d10) */
/* WARNING: Removing unreachable block (ram,0x01485564) */
/* WARNING: Removing unreachable block (ram,0x01485d20) */
/* WARNING: Removing unreachable block (ram,0x01485d38) */

void Atlas_Lighting_LightWorld__SetLightVolumes(long param_1,long param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  long unaff_x20;
  uint uVar11;
  undefined8 unaff_x21;
  ulong uVar12;
  uint uVar13;
  ulong unaff_x22;
  long lVar14;
  long unaff_x23;
  long *plVar15;
  uint uVar16;
  ulong unaff_x24;
  long unaff_x25;
  bool bVar17;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar18;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined8 unaff_d8;
  undefined4 uVar23;
  undefined8 unaff_d9;
  undefined4 uVar24;
  undefined8 unaff_d10;
  undefined4 uVar25;
  undefined8 unaff_d11;
  undefined4 uVar26;
  undefined8 unaff_d12;
  undefined4 uVar27;
  undefined8 unaff_d13;
  undefined4 uVar28;
  undefined8 unaff_d14;
  undefined4 uVar29;
  undefined8 unaff_d15;
  
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(long *)(puVar3 + -0x48) = unaff_x25;
    *(ulong *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    lVar4 = param_1;
    if ((bRam0000000003eb493c & 1) == 0) {
      lVar4 = func_0x00f78a20(0x3d3e2a8);
      bRam0000000003eb493c = 1;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    if ((param_2 == 0) || ((int)*(ulong *)(param_2 + 0x18) < 1)) {
      uVar12 = 0;
      unaff_x22 = 0;
    }
    else {
      unaff_x24 = 0;
      unaff_x22 = 0;
      uVar12 = 0;
      uVar6 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      unaff_x25 = param_2 + 0x20;
      do {
        if (uVar6 <= unaff_x24) goto code_r0x014850bc;
        unaff_x23 = *(long *)(unaff_x25 + unaff_x24 * 8);
        lVar4 = /*Atlas.Lighting.LightWorld$$IncludeLightVolumeBehaviour*/ func_0x014867a0(lVar4,unaff_x23);
        if ((int)lVar4 != 0) {
          if (unaff_x23 == 0) goto code_r0x014850c8;
          iVar18 = *(int *)(unaff_x23 + 0x18);
          uVar13 = (uint)unaff_x22;
          uVar9 = uVar13;
          if (iVar18 == 0) {
            uVar9 = uVar13 + 1;
          }
          uVar11 = (uint)uVar12;
          if (iVar18 == 1) {
            uVar11 = uVar11 + 1;
          }
          uVar12 = (ulong)uVar11;
          if (iVar18 != 1) {
            uVar13 = uVar9;
          }
          unaff_x22 = (ulong)uVar13;
        }
        unaff_x24 = unaff_x24 + 1;
        uVar6 = (ulong)*(uint *)(param_2 + 0x18);
      } while ((long)unaff_x24 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    if (((*(char *)(param_1 + 0x58) == '\0') || ((int)unaff_x22 != *(int *)(param_1 + 0x38))) ||
       ((int)uVar12 != *(int *)(param_1 + 0x48))) {
      Atlas_Lighting_LightWorld__DestroyLightVolumeArrays(param_1);
      *(undefined8 *)(puVar3 + -0x100) = 0;
      *(undefined8 *)(puVar3 + -0xf8) = 0;
      /*Unity.Collections.NativeArray<LightVolume>$$.ctor*/ func_0x025f7e8c(puVar3 + -0x100,unaff_x22,4,1,uRam0000000003d3e2a8);
      uVar10 = *(undefined8 *)(puVar3 + -0x100);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar3 + -0xf8);
      *(undefined8 *)(param_1 + 0x30) = uVar10;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      lVar4 = /*Unity.Collections.NativeArray<LightVolume>$$.ctor*/ func_0x025f7e8c(puVar3 + -0x60,uVar12,4,1,uRam0000000003d3e2a8);
      uVar10 = *(undefined8 *)(puVar3 + -0x60);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(puVar3 + -0x58);
      *(undefined8 *)(param_1 + 0x40) = uVar10;
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    if ((param_2 == 0) || ((int)*(ulong *)(param_2 + 0x18) < 1)) {
      return;
    }
    unaff_x22 = 0;
    uVar6 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    unaff_x23 = param_2 + 0x20;
    unaff_x24 = 0x94;
    while (unaff_x22 < uVar6) {
      uVar12 = *(ulong *)(unaff_x23 + unaff_x22 * 8);
      lVar4 = /*Atlas.Lighting.LightWorld$$IncludeLightVolumeBehaviour*/ func_0x014867a0(lVar4,uVar12);
      if ((int)lVar4 != 0) {
        if (uVar12 == 0) goto code_r0x014850c8;
        if (*(int *)(uVar12 + 0x18) == 1) {
          unaff_x25 = (long)*(int *)(param_1 + 0x54);
          lVar4 = Atlas_Lighting_LightVolumeBehaviour__GenerateLightVolume(puVar3 + -0x100,uVar12);
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x40) + unaff_x25 * 0x94);
          uVar10 = *(undefined8 *)(puVar3 + -0xa0);
          puVar7[0xd] = *(undefined8 *)(puVar3 + -0x98);
          puVar7[0xc] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0x90);
          puVar7[0xf] = *(undefined8 *)(puVar3 + -0x88);
          puVar7[0xe] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0x80);
          puVar7[0x11] = *(undefined8 *)(puVar3 + -0x78);
          puVar7[0x10] = uVar10;
          *(undefined4 *)(puVar7 + 0x12) = *(undefined4 *)(puVar3 + -0x70);
          uVar10 = *(undefined8 *)(puVar3 + -0xe0);
          puVar7[5] = *(undefined8 *)(puVar3 + -0xd8);
          puVar7[4] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xd0);
          puVar7[7] = *(undefined8 *)(puVar3 + -200);
          puVar7[6] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xc0);
          puVar7[9] = *(undefined8 *)(puVar3 + -0xb8);
          puVar7[8] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xb0);
          puVar7[0xb] = *(undefined8 *)(puVar3 + -0xa8);
          puVar7[10] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0x100);
          puVar7[1] = *(undefined8 *)(puVar3 + -0xf8);
          *puVar7 = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xf0);
          puVar7[3] = *(undefined8 *)(puVar3 + -0xe8);
          puVar7[2] = uVar10;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        }
        else if (*(int *)(uVar12 + 0x18) == 0) {
          unaff_x25 = (long)*(int *)(param_1 + 0x50);
          lVar4 = Atlas_Lighting_LightVolumeBehaviour__GenerateLightVolume(puVar3 + -0x100,uVar12);
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x30) + unaff_x25 * 0x94);
          uVar10 = *(undefined8 *)(puVar3 + -0xa0);
          puVar7[0xd] = *(undefined8 *)(puVar3 + -0x98);
          puVar7[0xc] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0x90);
          puVar7[0xf] = *(undefined8 *)(puVar3 + -0x88);
          puVar7[0xe] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0x80);
          puVar7[0x11] = *(undefined8 *)(puVar3 + -0x78);
          puVar7[0x10] = uVar10;
          *(undefined4 *)(puVar7 + 0x12) = *(undefined4 *)(puVar3 + -0x70);
          uVar10 = *(undefined8 *)(puVar3 + -0xe0);
          puVar7[5] = *(undefined8 *)(puVar3 + -0xd8);
          puVar7[4] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xd0);
          puVar7[7] = *(undefined8 *)(puVar3 + -200);
          puVar7[6] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xc0);
          puVar7[9] = *(undefined8 *)(puVar3 + -0xb8);
          puVar7[8] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xb0);
          puVar7[0xb] = *(undefined8 *)(puVar3 + -0xa8);
          puVar7[10] = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0x100);
          puVar7[1] = *(undefined8 *)(puVar3 + -0xf8);
          *puVar7 = uVar10;
          uVar10 = *(undefined8 *)(puVar3 + -0xf0);
          puVar7[3] = *(undefined8 *)(puVar3 + -0xe8);
          puVar7[2] = uVar10;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        }
      }
      unaff_x22 = unaff_x22 + 1;
      uVar6 = (ulong)*(uint *)(param_2 + 0x18);
      if ((long)(int)*(uint *)(param_2 + 0x18) <= (long)unaff_x22) {
        return;
      }
    }
code_r0x014850bc:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
code_r0x014850c8:
    unaff_x20 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x1a0) = unaff_d15;
    *(undefined8 *)(puVar3 + -0x198) = unaff_d14;
    *(undefined8 *)(puVar3 + -400) = unaff_d13;
    *(undefined8 *)(puVar3 + -0x188) = unaff_d12;
    *(undefined8 *)(puVar3 + -0x180) = unaff_d11;
    *(undefined8 *)(puVar3 + -0x178) = unaff_d10;
    *(undefined8 *)(puVar3 + -0x170) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x168) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x160) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x158) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x150) = unaff_x26;
    *(long *)(puVar3 + -0x148) = unaff_x25;
    *(ulong *)(puVar3 + -0x140) = unaff_x24;
    *(long *)(puVar3 + -0x138) = unaff_x23;
    *(ulong *)(puVar3 + -0x130) = unaff_x22;
    *(ulong *)(puVar3 + -0x128) = uVar12;
    *(long *)(puVar3 + -0x120) = param_1;
    *(long *)(puVar3 + -0x118) = param_2;
    *(undefined1 **)(puVar3 + -0x110) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x108) = &Atlas_Lighting_LightWorld__Update;
    unaff_x29 = puVar3 + -0x110;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4934 & 1) == 0) {
      func_0x00f78a20(0x3d1fec0);
      func_0x00f78a20(0x3d335a0);
      func_0x00f78a20(0x3d329e0);
      func_0x00f78a20(0x3d329e8);
      func_0x00f78a20(0x3d335a8);
      func_0x00f78a20(0x3d329f0);
      func_0x00f78a20(0x3d335b0);
      func_0x00f78a20(0x3d222d0);
      func_0x00f78a20(0x3d22f80);
      func_0x00f78a20(0x3d3cb60);
      func_0x00f78a20(0x3d3cb68);
      func_0x00f78a20(0x3d3b030);
      func_0x00f78a20(0x3d3b1b0);
      func_0x00f78a20(0x3d3d478);
      func_0x00f78a20(0x3d3d480);
      func_0x00f78a20(0x3d3d488);
      func_0x00f78a20(0x3d3b038);
      func_0x00f78a20(0x3d3d490);
      func_0x00f78a20(0x3d3d498);
      func_0x00f78a20(0x3d3e2b8);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4934 = 1;
    }
    *(undefined8 *)(puVar3 + -0x1b0) = 0;
    *(undefined8 *)(puVar3 + -0x1c8) = 0;
    *(undefined8 *)(puVar3 + -0x1d0) = 0;
    *(undefined8 *)(puVar3 + -0x1b8) = 0;
    *(undefined8 *)(puVar3 + -0x1c0) = 0;
    *(undefined8 *)(puVar3 + -0x1e8) = 0;
    *(undefined8 *)(puVar3 + -0x1f0) = 0;
    *(undefined8 *)(puVar3 + -0x1d8) = 0;
    *(undefined8 *)(puVar3 + -0x1e0) = 0;
    *(undefined8 *)(puVar3 + -0x208) = 0;
    *(undefined8 *)(puVar3 + -0x210) = 0;
    *(undefined8 *)(puVar3 + -0x1f8) = 0;
    *(undefined8 *)(puVar3 + -0x200) = 0;
    *(undefined8 *)(puVar3 + -0x228) = 0;
    *(undefined8 *)(puVar3 + -0x230) = 0;
    *(undefined8 *)(puVar3 + -0x218) = 0;
    *(undefined8 *)(puVar3 + -0x220) = 0;
    *(undefined8 *)(puVar3 + -0x248) = 0;
    *(undefined8 *)(puVar3 + -0x250) = 0;
    *(undefined8 *)(puVar3 + -0x238) = 0;
    *(undefined8 *)(puVar3 + -0x240) = 0;
    *(undefined8 *)(puVar3 + -0x268) = 0;
    *(undefined8 *)(puVar3 + -0x270) = 0;
    *(undefined8 *)(puVar3 + -600) = 0;
    *(undefined8 *)(puVar3 + -0x260) = 0;
    *(undefined8 *)(puVar3 + -0x278) = 0;
    *(undefined8 *)(puVar3 + -0x280) = 0;
    *(undefined8 *)(puVar3 + -0x290) = 0;
    *(undefined8 *)(puVar3 + -0x2a8) = 0;
    *(undefined8 *)(puVar3 + -0x2b0) = 0;
    *(undefined8 *)(puVar3 + -0x298) = 0;
    *(undefined8 *)(puVar3 + -0x2a0) = 0;
    *(undefined8 *)(puVar3 + -0x2c8) = 0;
    *(undefined8 *)(puVar3 + -0x2d0) = 0;
    *(undefined8 *)(puVar3 + -0x2b8) = 0;
    *(undefined8 *)(puVar3 + -0x2c0) = 0;
    *(undefined8 *)(puVar3 + -0x2e8) = 0;
    *(undefined8 *)(puVar3 + -0x2f0) = 0;
    *(undefined8 *)(puVar3 + -0x2d8) = 0;
    *(undefined8 *)(puVar3 + -0x2e0) = 0;
    *(undefined8 *)(puVar3 + -0x308) = 0;
    *(undefined8 *)(puVar3 + -0x310) = 0;
    *(undefined8 *)(puVar3 + -0x2f8) = 0;
    *(undefined8 *)(puVar3 + -0x300) = 0;
    *(undefined8 *)(puVar3 + -0x328) = 0;
    *(undefined8 *)(puVar3 + -0x330) = 0;
    *(undefined8 *)(puVar3 + -0x318) = 0;
    *(undefined8 *)(puVar3 + -800) = 0;
    *(undefined8 *)(puVar3 + -0x348) = 0;
    *(undefined8 *)(puVar3 + -0x350) = 0;
    *(undefined8 *)(puVar3 + -0x338) = 0;
    *(undefined8 *)(puVar3 + -0x340) = 0;
    *(undefined4 *)(puVar3 + -0x360) = 0;
    *(undefined8 *)(puVar3 + -0x378) = 0;
    *(undefined8 *)(puVar3 + -0x380) = 0;
    *(undefined8 *)(puVar3 + -0x368) = 0;
    *(undefined8 *)(puVar3 + -0x370) = 0;
    *(undefined8 *)(puVar3 + -0x398) = 0;
    *(undefined8 *)(puVar3 + -0x3a0) = 0;
    *(undefined8 *)(puVar3 + -0x388) = 0;
    *(undefined8 *)(puVar3 + -0x390) = 0;
    *(undefined8 *)(puVar3 + -0x3c0) = 0;
    *(undefined8 *)(puVar3 + -0x3b8) = 0;
    *(undefined8 *)(puVar3 + -0x3b0) = 0;
    *(undefined8 *)(puVar3 + -0x3d8) = 0;
    *(undefined8 *)(puVar3 + -0x3e0) = 0;
    *(undefined8 *)(puVar3 + -0x3c8) = 0;
    *(undefined8 *)(puVar3 + -0x3d0) = 0;
    *(undefined8 *)(puVar3 + -1000) = 0;
    *(undefined8 *)(puVar3 + -0x3f0) = 0;
    *(undefined4 *)(puVar3 + -0x3f4) = 0;
    if (((*(ushort *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = **(undefined8 **)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
    if (*(char *)(unaff_x20 + 0xe4) == '\0') {
      *(undefined4 *)(puVar3 + -0x408) = 0x43d;
      iVar18 = 1;
      goto code_r0x01485c98;
    }
    *(undefined8 *)(puVar3 + -0x510) = uVar10;
    unaff_x19 = 0x3d3e2b8;
    uVar12 = /*Unity.Collections.NativeArray<LightVolume>$$get_IsCreated*/ func_0x025f8354(unaff_x20 + 0x30,uRam0000000003d3e2b8);
    if (((uVar12 & 1) != 0) &&
       (uVar12 = /*Unity.Collections.NativeArray<LightVolume>$$get_IsCreated*/ func_0x025f8354(unaff_x20 + 0x40,uRam0000000003d3e2b8), (uVar12 & 1) != 0)) break;
    param_2 = 0;
    unaff_x30 = &UNK_014852e8;
    puVar3 = puVar3 + -0x510;
    param_1 = unaff_x20;
  } while( true );
  puVar7 = (undefined8 *)(unaff_x20 + 0x5c);
  uVar12 = /*Atlas.Lighting.LightWorld$$CelShadingParamsEqual*/ func_0x01485e80(uVar12,puVar7,(undefined8 *)(unaff_x20 + 0xa0));
  if ((uVar12 & 1) == 0) {
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar22 = **(undefined4 **)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
    /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(unaff_x20 + 0x7c),*(undefined4 *)(unaff_x20 + 0x80),
                    *(undefined4 *)(unaff_x20 + 0x84),*(undefined4 *)(unaff_x20 + 0x88),0);
    /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar22,0);
    uVar22 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 4);
    /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(unaff_x20 + 0x6c),*(undefined4 *)(unaff_x20 + 0x70),
                    *(undefined4 *)(unaff_x20 + 0x74),*(undefined4 *)(unaff_x20 + 0x78),0);
    /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar22,0);
    uVar22 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 8);
    /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(unaff_x20 + 0x5c),*(undefined4 *)(unaff_x20 + 0x60),
                    *(undefined4 *)(unaff_x20 + 100),*(undefined4 *)(unaff_x20 + 0x68),0);
    /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar22,0);
  }
  fVar19 = *(float *)(unaff_x20 + 0x8c);
  if ((((fVar19 != *(float *)(unaff_x20 + 0xd0)) ||
       (*(float *)(unaff_x20 + 0x90) != *(float *)(unaff_x20 + 0xd4))) ||
      (*(float *)(unaff_x20 + 0x94) != *(float *)(unaff_x20 + 0xd8))) ||
     (*(float *)(unaff_x20 + 0x98) != *(float *)(unaff_x20 + 0xdc))) {
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      fVar19 = *(float *)(unaff_x20 + 0x8c);
    }
    uVar22 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0xc);
    /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(fVar19,*(undefined4 *)(unaff_x20 + 0x90),*(undefined4 *)(unaff_x20 + 0x94),
                    *(undefined4 *)(unaff_x20 + 0x98),0);
    /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar22,0);
  }
  *(undefined8 *)(unaff_x20 + 200) = *(undefined8 *)(unaff_x20 + 0x84);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0x7c);
  *(undefined8 *)(unaff_x20 + 0xd8) = *(undefined8 *)(unaff_x20 + 0x94);
  *(undefined8 *)(unaff_x20 + 0xd0) = *(undefined8 *)(unaff_x20 + 0x8c);
  *(undefined4 *)(unaff_x20 + 0xe0) = *(undefined4 *)(unaff_x20 + 0x9c);
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x20 + 100);
  *(undefined8 *)(unaff_x20 + 0xa0) = *puVar7;
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x74);
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x20 + 0x6c);
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<LightWorld.Member>$$GetEnumerator*/ func_0x0254d834(puVar3 + -0x4e0,*(long *)(unaff_x20 + 0x18),uRam0000000003d3d478);
    *(undefined8 *)(puVar3 + -0x1d8) = *(undefined8 *)(puVar3 + -0x438);
    *(undefined8 *)(puVar3 + -0x1e0) = *(undefined8 *)(puVar3 + -0x440);
    *(undefined8 *)(puVar3 + -0x1c8) = *(undefined8 *)(puVar3 + -0x428);
    *(undefined8 *)(puVar3 + -0x1d0) = *(undefined8 *)(puVar3 + -0x430);
    *(undefined8 *)(puVar3 + -0x1b8) = *(undefined8 *)(puVar3 + -0x418);
    *(undefined8 *)(puVar3 + -0x1c0) = *(undefined8 *)(puVar3 + -0x420);
    *(undefined8 *)(puVar3 + -0x1b0) = *(undefined8 *)(puVar3 + -0x410);
    *(undefined8 *)(puVar3 + -0x218) = *(undefined8 *)(puVar3 + -0x478);
    *(undefined8 *)(puVar3 + -0x220) = *(undefined8 *)(puVar3 + -0x480);
    *(undefined8 *)(puVar3 + -0x208) = *(undefined8 *)(puVar3 + -0x468);
    *(undefined8 *)(puVar3 + -0x210) = *(undefined8 *)(puVar3 + -0x470);
    *(undefined8 *)(puVar3 + -0x1f8) = *(undefined8 *)(puVar3 + -0x458);
    *(undefined8 *)(puVar3 + -0x200) = *(undefined8 *)(puVar3 + -0x460);
    *(undefined8 *)(puVar3 + -0x1e8) = *(undefined8 *)(puVar3 + -0x448);
    *(undefined8 *)(puVar3 + -0x1f0) = *(undefined8 *)(puVar3 + -0x450);
    *(undefined8 *)(puVar3 + -600) = *(undefined8 *)(puVar3 + -0x4b8);
    *(undefined8 *)(puVar3 + -0x260) = *(undefined8 *)(puVar3 + -0x4c0);
    *(undefined8 *)(puVar3 + -0x248) = *(undefined8 *)(puVar3 + -0x4a8);
    *(undefined8 *)(puVar3 + -0x250) = *(undefined8 *)(puVar3 + -0x4b0);
    *(undefined8 *)(puVar3 + -0x238) = *(undefined8 *)(puVar3 + -0x498);
    *(undefined8 *)(puVar3 + -0x240) = *(undefined8 *)(puVar3 + -0x4a0);
    *(undefined8 *)(puVar3 + -0x228) = *(undefined8 *)(puVar3 + -0x488);
    *(undefined8 *)(puVar3 + -0x230) = *(undefined8 *)(puVar3 + -0x490);
    *(undefined8 *)(puVar3 + -0x278) = *(undefined8 *)(puVar3 + -0x4d8);
    *(undefined8 *)(puVar3 + -0x280) = *(undefined8 *)(puVar3 + -0x4e0);
    *(undefined8 *)(puVar3 + -0x268) = *(undefined8 *)(puVar3 + -0x4c8);
    *(undefined8 *)(puVar3 + -0x270) = *(undefined8 *)(puVar3 + -0x4d0);
    while (uVar12 = /*System.Collections.Generic.List.Enumerator<LightWorld.Member>$$MoveNext*/ func_0x01f7fe90(puVar3 + -0x280,uRam0000000003d335a8), (uVar12 & 1) != 0) {
      plVar15 = *(long **)(puVar3 + -0x270);
      if (plVar15 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01485d5c;
      }
      lVar14 = *(long *)(unaff_x20 + 0x20);
      lVar4 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar12 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Atlas.Lighting.ILightWorldSample_TypeInfo*/ lRam0000000003d222d0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x01485518;
          }
          piVar8 = piVar8 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar15,/*Atlas.Lighting.ILightWorldSample_TypeInfo*/ lRam0000000003d222d0,0);
code_r0x01485518:
      (*(code *)*puVar5)(plVar15,puVar5[1]);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x01485d5c;
      }
      /*System.Collections.Generic.List<float4>$$Add*/ func_0x0249f22c(lVar14,uRam0000000003d3cb60);
    }
    *(undefined4 *)(puVar3 + -0x408) = 0x170;
    *(undefined4 *)(puVar3 + -0x3f4) = 1;
    /*System.Collections.Generic.List.Enumerator<LightWorld.Member>$$Dispose*/ func_0x01f7fe8c(puVar3 + -0x280,uRam0000000003d335a0);
    if (*(int *)(puVar3 + -0x408) == 0x170) {
      *(undefined4 *)(puVar3 + -0x3f4) = 0;
    }
    bVar17 = *(int *)(puVar3 + -0x408) != 0x170;
    uVar9 = (uint)bVar17;
    uVar13 = (uint)bVar17;
    uVar12 = /*Atlas.Lighting.LightWorld$$RunQueryJob*/ func_0x01485f98(unaff_x20,*(undefined8 *)(unaff_x20 + 0x20),
                             *(undefined8 *)(unaff_x20 + 0x28),puVar7);
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else {
      iVar18 = *(int *)(lVar4 + 0x18);
      if (iVar18 < 1) {
code_r0x01485c50:
        if (*(long *)(unaff_x20 + 0x20) == 0) {
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<float4>$$Clear*/ func_0x0249f538(*(long *)(unaff_x20 + 0x20),uRam0000000003d3cb68);
          if (*(long *)(unaff_x20 + 0x28) != 0) {
            /*System.Collections.Generic.List<LightVolumeParams>$$Clear*/ func_0x023f1d20(*(long *)(unaff_x20 + 0x28),uRam0000000003d3b030);
            *(undefined4 *)(puVar3 + (long)(int)uVar13 * 4 + -0x408) = 0x43d;
            iVar18 = *(int *)(puVar3 + -0x3f4) + 1;
            uVar10 = *(undefined8 *)(puVar3 + -0x510);
code_r0x01485c98:
            *(int *)(puVar3 + -0x3f4) = iVar18;
            /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar10,0);
            return;
          }
          func_0x00f78af4();
        }
      }
      else {
        uVar11 = 0;
        *(undefined1 **)(puVar3 + -0x508) = puVar3 + -0x330;
        *(undefined1 **)(puVar3 + -0x500) = puVar3 + -0x2cc;
        *(undefined1 **)(puVar3 + -0x4f8) = puVar3 + -0x2fc;
        uVar16 = uVar9;
        uVar13 = uVar9;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar11) {
            uVar12 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar4 = *(long *)(lVar4 + 0x10) + (long)(int)uVar11 * 200;
          uVar10 = *(undefined8 *)(lVar4 + 0xc0);
          uVar21 = *(undefined8 *)(lVar4 + 0xd8);
          uVar20 = *(undefined8 *)(lVar4 + 0xd0);
          *(undefined8 *)(puVar3 + -0x2a8) = *(undefined8 *)(lVar4 + 200);
          *(undefined8 *)(puVar3 + -0x2b0) = uVar10;
          *(undefined8 *)(puVar3 + -0x298) = uVar21;
          *(undefined8 *)(puVar3 + -0x2a0) = uVar20;
          *(undefined8 *)(puVar3 + -0x290) = *(undefined8 *)(lVar4 + 0xe0);
          uVar10 = *(undefined8 *)(lVar4 + 0x80);
          uVar21 = *(undefined8 *)(lVar4 + 0x98);
          uVar20 = *(undefined8 *)(lVar4 + 0x90);
          *(undefined8 *)(puVar3 + -0x2e8) = *(undefined8 *)(lVar4 + 0x88);
          *(undefined8 *)(puVar3 + -0x2f0) = uVar10;
          *(undefined8 *)(puVar3 + -0x2d8) = uVar21;
          *(undefined8 *)(puVar3 + -0x2e0) = uVar20;
          uVar21 = *(undefined8 *)(lVar4 + 0xa0);
          uVar20 = *(undefined8 *)(lVar4 + 0xb8);
          uVar10 = *(undefined8 *)(lVar4 + 0xb0);
          *(undefined8 *)(puVar3 + -0x2c8) = *(undefined8 *)(lVar4 + 0xa8);
          *(undefined8 *)(puVar3 + -0x2d0) = uVar21;
          *(undefined8 *)(puVar3 + -0x2b8) = uVar20;
          *(undefined8 *)(puVar3 + -0x2c0) = uVar10;
          uVar10 = *(undefined8 *)(lVar4 + 0x40);
          uVar21 = *(undefined8 *)(lVar4 + 0x58);
          uVar20 = *(undefined8 *)(lVar4 + 0x50);
          *(undefined8 *)(puVar3 + -0x328) = *(undefined8 *)(lVar4 + 0x48);
          *(undefined8 *)(puVar3 + -0x330) = uVar10;
          *(undefined8 *)(puVar3 + -0x318) = uVar21;
          *(undefined8 *)(puVar3 + -800) = uVar20;
          uVar21 = *(undefined8 *)(lVar4 + 0x60);
          uVar20 = *(undefined8 *)(lVar4 + 0x78);
          uVar10 = *(undefined8 *)(lVar4 + 0x70);
          *(undefined8 *)(puVar3 + -0x308) = *(undefined8 *)(lVar4 + 0x68);
          *(undefined8 *)(puVar3 + -0x310) = uVar21;
          *(undefined8 *)(puVar3 + -0x2f8) = uVar20;
          *(undefined8 *)(puVar3 + -0x300) = uVar10;
          uVar21 = *(undefined8 *)(lVar4 + 0x20);
          uVar20 = *(undefined8 *)(lVar4 + 0x38);
          uVar10 = *(undefined8 *)(lVar4 + 0x30);
          *(undefined8 *)(puVar3 + -0x348) = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(puVar3 + -0x350) = uVar21;
          *(undefined8 *)(puVar3 + -0x338) = uVar20;
          *(undefined8 *)(puVar3 + -0x340) = uVar10;
          lVar4 = *(long *)(unaff_x20 + 0x28);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x01485d5c;
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar11) {
            uVar12 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar4 = *(long *)(lVar4 + 0x10) + (long)(int)uVar11 * 0x44;
          uVar10 = *(undefined8 *)(lVar4 + 0x40);
          uVar21 = *(undefined8 *)(lVar4 + 0x58);
          uVar20 = *(undefined8 *)(lVar4 + 0x50);
          *(undefined8 *)(puVar3 + -0x378) = *(undefined8 *)(lVar4 + 0x48);
          *(undefined8 *)(puVar3 + -0x380) = uVar10;
          *(undefined8 *)(puVar3 + -0x368) = uVar21;
          *(undefined8 *)(puVar3 + -0x370) = uVar20;
          *(undefined4 *)(puVar3 + -0x360) = *(undefined4 *)(lVar4 + 0x60);
          uVar21 = *(undefined8 *)(lVar4 + 0x20);
          uVar20 = *(undefined8 *)(lVar4 + 0x38);
          uVar10 = *(undefined8 *)(lVar4 + 0x30);
          *(undefined8 *)(puVar3 + -0x398) = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(puVar3 + -0x3a0) = uVar21;
          *(undefined8 *)(puVar3 + -0x388) = uVar20;
          *(undefined8 *)(puVar3 + -0x390) = uVar10;
          lVar4 = *(long *)(puVar3 + -0x340);
          if ((lVar4 == 0) ||
             (uVar12 = /*Atlas.Lighting.LightWorld$$CelShadingParamsEqual*/ func_0x01485e80(uVar12,*(undefined8 *)(puVar3 + -0x4f8),puVar3 + -0x3a0),
             (uVar12 & 1) != 0)) {
            bVar17 = false;
          }
          else {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar3 + -0x4e0,lVar4,uRam0000000003d3b1b0);
            *(undefined8 *)(puVar3 + -0x3b8) = *(undefined8 *)(puVar3 + -0x4d8);
            *(undefined8 *)(puVar3 + -0x3c0) = *(undefined8 *)(puVar3 + -0x4e0);
            *(undefined8 *)(puVar3 + -0x3b0) = *(undefined8 *)(puVar3 + -0x4d0);
            *(undefined4 *)(puVar3 + -0x4e8) = *(undefined4 *)(puVar3 + -0x37c);
            *(undefined4 *)(puVar3 + -0x4e4) = *(undefined4 *)(puVar3 + -0x380);
            *(undefined4 *)(puVar3 + -0x4f0) = *(undefined4 *)(puVar3 + -0x374);
            *(undefined4 *)(puVar3 + -0x4ec) = *(undefined4 *)(puVar3 + -0x378);
            uVar26 = *(undefined4 *)(puVar3 + -0x390);
            uVar27 = *(undefined4 *)(puVar3 + -0x38c);
            uVar28 = *(undefined4 *)(puVar3 + -0x388);
            uVar29 = *(undefined4 *)(puVar3 + -900);
            uVar22 = *(undefined4 *)(puVar3 + -0x3a0);
            uVar23 = *(undefined4 *)(puVar3 + -0x39c);
            uVar24 = *(undefined4 *)(puVar3 + -0x398);
            uVar25 = *(undefined4 *)(puVar3 + -0x394);
            while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar3 + -0x3c0,uRam0000000003d329e8), (uVar12 & 1) != 0
                  ) {
              lVar4 = *(long *)(puVar3 + -0x3b0);
              if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar1 = **(undefined4 **)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
              /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(puVar3 + -0x4e4),*(undefined4 *)(puVar3 + -0x4e8),
                              *(undefined4 *)(puVar3 + -0x4ec),*(undefined4 *)(puVar3 + -0x4f0),0);
              if (lVar4 == 0) {
                func_0x00f78af4();
                goto code_r0x01485d5c;
              }
              /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar4,uVar1,0);
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 4);
              /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar26,uVar27,uVar28,uVar29,0);
              /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar4,uVar1,0);
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 8);
              /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar22,uVar23,uVar24,uVar25,0);
              /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar4,uVar1,0);
            }
            *(undefined4 *)(puVar3 + (long)(int)uVar9 * 4 + -0x408) = 0x27f;
            uVar13 = *(uint *)(puVar3 + -0x3f4);
            uVar9 = uVar13 + 1;
            *(uint *)(puVar3 + -0x3f4) = uVar9;
            uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x3c0,uRam0000000003d329e0);
            if ((uVar9 != 0) && (*(int *)(puVar3 + (long)(int)uVar13 * 4 + -0x408) == 0x27f)) {
              *(uint *)(puVar3 + -0x3f4) = uVar13;
              uVar9 = uVar13;
            }
            uVar10 = *(undefined8 *)(puVar3 + -0x3a0);
            uVar21 = *(undefined8 *)(puVar3 + -0x388);
            uVar20 = *(undefined8 *)(puVar3 + -0x390);
            puVar7 = *(undefined8 **)(puVar3 + -0x4f8);
            puVar7[1] = *(undefined8 *)(puVar3 + -0x398);
            *puVar7 = uVar10;
            puVar7[3] = uVar21;
            puVar7[2] = uVar20;
            uVar10 = *(undefined8 *)(puVar3 + -0x380);
            puVar7[5] = *(undefined8 *)(puVar3 + -0x378);
            puVar7[4] = uVar10;
            bVar17 = true;
            uVar16 = uVar9;
            uVar13 = uVar9;
          }
          lVar4 = *(long *)(puVar3 + -0x348);
          if (lVar4 != 0) {
            *(undefined8 *)(puVar3 + -1000) = *(undefined8 *)(puVar3 + -0x398);
            *(undefined8 *)(puVar3 + -0x3f0) = *(undefined8 *)(puVar3 + -0x3a0);
            *(undefined8 *)(puVar3 + -0x3d8) = *(undefined8 *)(puVar3 + -0x388);
            *(undefined8 *)(puVar3 + -0x3e0) = *(undefined8 *)(puVar3 + -0x390);
            *(undefined8 *)(puVar3 + -0x3c8) = *(undefined8 *)(puVar3 + -0x378);
            *(undefined8 *)(puVar3 + -0x3d0) = *(undefined8 *)(puVar3 + -0x380);
            if (0.0 < *(float *)(puVar3 + -0x300)) {
              uVar12 = /*Atlas.Lighting.LightWorld$$CelShadingBlend*/ func_0x014861e8(uVar12,puVar3 + -0x3f0,*(undefined8 *)(puVar3 + -0x508));
            }
            uVar12 = /*Atlas.Lighting.LightWorld$$CelShadingParamsEqual*/ func_0x01485e80(uVar12,*(undefined8 *)(puVar3 + -0x500),puVar3 + -0x3f0);
            if ((uVar12 & 1) == 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar3 + -0x4e0,lVar4,uRam0000000003d3b1b0);
              *(undefined8 *)(puVar3 + -0x3b8) = *(undefined8 *)(puVar3 + -0x4d8);
              *(undefined8 *)(puVar3 + -0x3c0) = *(undefined8 *)(puVar3 + -0x4e0);
              *(undefined8 *)(puVar3 + -0x3b0) = *(undefined8 *)(puVar3 + -0x4d0);
              *(undefined4 *)(puVar3 + -0x4e8) = *(undefined4 *)(puVar3 + -0x3cc);
              *(undefined4 *)(puVar3 + -0x4e4) = *(undefined4 *)(puVar3 + -0x3d0);
              *(undefined4 *)(puVar3 + -0x4f0) = *(undefined4 *)(puVar3 + -0x3c4);
              *(undefined4 *)(puVar3 + -0x4ec) = *(undefined4 *)(puVar3 + -0x3c8);
              uVar26 = *(undefined4 *)(puVar3 + -0x3e0);
              uVar27 = *(undefined4 *)(puVar3 + -0x3dc);
              uVar28 = *(undefined4 *)(puVar3 + -0x3d8);
              uVar29 = *(undefined4 *)(puVar3 + -0x3d4);
              uVar22 = *(undefined4 *)(puVar3 + -0x3f0);
              uVar23 = *(undefined4 *)(puVar3 + -0x3ec);
              uVar24 = *(undefined4 *)(puVar3 + -1000);
              uVar25 = *(undefined4 *)(puVar3 + -0x3e4);
              while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar3 + -0x3c0,uRam0000000003d329e8),
                    (uVar12 & 1) != 0) {
                lVar4 = *(long *)(puVar3 + -0x3b0);
                if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar1 = **(undefined4 **)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
                /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(puVar3 + -0x4e4),*(undefined4 *)(puVar3 + -0x4e8),
                                *(undefined4 *)(puVar3 + -0x4ec),*(undefined4 *)(puVar3 + -0x4f0),0)
                ;
                if (lVar4 == 0) {
                  func_0x00f78af4();
                  goto code_r0x01485d5c;
                }
                /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar4,uVar1,0);
                uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 4);
                /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar26,uVar27,uVar28,uVar29,0);
                /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar4,uVar1,0);
                uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 8);
                /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar22,uVar23,uVar24,uVar25,0);
                /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar4,uVar1,0);
              }
              *(undefined4 *)(puVar3 + (long)(int)uVar16 * 4 + -0x408) = 0x35f;
              uVar9 = *(uint *)(puVar3 + -0x3f4);
              uVar13 = uVar9 + 1;
              *(uint *)(puVar3 + -0x3f4) = uVar13;
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x3c0,uRam0000000003d329e0);
              if ((uVar13 != 0) && (*(int *)(puVar3 + (long)(int)uVar9 * 4 + -0x408) == 0x35f)) {
                *(uint *)(puVar3 + -0x3f4) = uVar9;
                uVar13 = uVar9;
              }
              uVar10 = *(undefined8 *)(puVar3 + -0x3f0);
              uVar21 = *(undefined8 *)(puVar3 + -0x3d8);
              uVar20 = *(undefined8 *)(puVar3 + -0x3e0);
              puVar7 = *(undefined8 **)(puVar3 + -0x500);
              puVar7[1] = *(undefined8 *)(puVar3 + -1000);
              *puVar7 = uVar10;
              puVar7[3] = uVar21;
              puVar7[2] = uVar20;
              uVar10 = *(undefined8 *)(puVar3 + -0x3d0);
              puVar7[5] = *(undefined8 *)(puVar3 + -0x3c8);
              puVar7[4] = uVar10;
              bVar17 = true;
              uVar16 = uVar13;
              uVar9 = uVar13;
            }
          }
          lVar4 = *(long *)(puVar3 + -0x338);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
          if (((uVar12 & 1) == 0) ||
             ((((fVar19 = *(float *)(puVar3 + -0x370), *(float *)(puVar3 + -0x29c) == fVar19 &&
                (*(float *)(puVar3 + -0x298) == *(float *)(puVar3 + -0x36c))) &&
               (*(float *)(puVar3 + -0x294) == *(float *)(puVar3 + -0x368))) &&
              (*(float *)(puVar3 + -0x290) == *(float *)(puVar3 + -0x364))))) {
            if (bVar17) goto code_r0x01485b18;
          }
          else {
            if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar22 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0xc);
            uVar23 = *(undefined4 *)(puVar3 + -0x36c);
            uVar24 = *(undefined4 *)(puVar3 + -0x368);
            uVar25 = *(undefined4 *)(puVar3 + -0x364);
            /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(fVar19,uVar23,uVar24,uVar25,0);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x01485d5c;
            }
            /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar4,uVar22,0);
            *(float *)(puVar3 + -0x29c) = fVar19;
            *(undefined4 *)(puVar3 + -0x298) = uVar23;
            *(undefined4 *)(puVar3 + -0x294) = uVar24;
            *(undefined4 *)(puVar3 + -0x290) = uVar25;
code_r0x01485b18:
            lVar4 = *(long *)(unaff_x20 + 0x18);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x01485d5c;
            }
            *(undefined8 *)(puVar3 + -0x438) = *(undefined8 *)(puVar3 + -0x2a8);
            *(undefined8 *)(puVar3 + -0x440) = *(undefined8 *)(puVar3 + -0x2b0);
            *(undefined8 *)(puVar3 + -0x428) = *(undefined8 *)(puVar3 + -0x298);
            *(undefined8 *)(puVar3 + -0x430) = *(undefined8 *)(puVar3 + -0x2a0);
            *(undefined8 *)(puVar3 + -0x420) = *(undefined8 *)(puVar3 + -0x290);
            *(undefined8 *)(puVar3 + -0x478) = *(undefined8 *)(puVar3 + -0x2e8);
            *(undefined8 *)(puVar3 + -0x480) = *(undefined8 *)(puVar3 + -0x2f0);
            *(undefined8 *)(puVar3 + -0x468) = *(undefined8 *)(puVar3 + -0x2d8);
            *(undefined8 *)(puVar3 + -0x470) = *(undefined8 *)(puVar3 + -0x2e0);
            *(undefined8 *)(puVar3 + -0x458) = *(undefined8 *)(puVar3 + -0x2c8);
            *(undefined8 *)(puVar3 + -0x460) = *(undefined8 *)(puVar3 + -0x2d0);
            *(undefined8 *)(puVar3 + -0x448) = *(undefined8 *)(puVar3 + -0x2b8);
            *(undefined8 *)(puVar3 + -0x450) = *(undefined8 *)(puVar3 + -0x2c0);
            *(undefined8 *)(puVar3 + -0x4b8) = *(undefined8 *)(puVar3 + -0x328);
            *(undefined8 *)(puVar3 + -0x4c0) = *(undefined8 *)(puVar3 + -0x330);
            *(undefined8 *)(puVar3 + -0x4a8) = *(undefined8 *)(puVar3 + -0x318);
            *(undefined8 *)(puVar3 + -0x4b0) = *(undefined8 *)(puVar3 + -800);
            *(undefined8 *)(puVar3 + -0x498) = *(undefined8 *)(puVar3 + -0x308);
            *(undefined8 *)(puVar3 + -0x4a0) = *(undefined8 *)(puVar3 + -0x310);
            *(undefined8 *)(puVar3 + -0x488) = *(undefined8 *)(puVar3 + -0x2f8);
            *(undefined8 *)(puVar3 + -0x490) = *(undefined8 *)(puVar3 + -0x300);
            *(undefined8 *)(puVar3 + -0x4d8) = *(undefined8 *)(puVar3 + -0x348);
            *(undefined8 *)(puVar3 + -0x4e0) = *(undefined8 *)(puVar3 + -0x350);
            *(undefined8 *)(puVar3 + -0x4c8) = *(undefined8 *)(puVar3 + -0x338);
            *(undefined8 *)(puVar3 + -0x4d0) = *(undefined8 *)(puVar3 + -0x340);
            uVar12 = /*System.Collections.Generic.List<LightWorld.Member>$$set_Item*/ func_0x0254c69c(lVar4,uVar11,puVar3 + -0x4e0,uRam0000000003d3d498);
          }
          if (puVar3[-0x28c] != '\0') {
            if (*(long *)(unaff_x20 + 0x18) == 0) {
              func_0x00f78af4();
              goto code_r0x01485d5c;
            }
            uVar12 = /*System.Collections.Generic.List<LightWorld.Member>$$RemoveAt*/ func_0x0254e8a0(*(long *)(unaff_x20 + 0x18),uVar11,uRam0000000003d3d480);
            uVar11 = uVar11 - 1;
            iVar18 = iVar18 + -1;
          }
          uVar11 = uVar11 + 1;
          if (iVar18 <= (int)uVar11) goto code_r0x01485c50;
          lVar4 = *(long *)(unaff_x20 + 0x18);
        } while (lVar4 != 0);
        func_0x00f78af4();
      }
    }
  }
code_r0x01485d5c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1485d60);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1484e1c | Atlas.Lighting.LightWorld.CreateLightVolumeArray
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14850cc | Atlas.Lighting.LightWorld.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01485d10) */
/* WARNING: Removing unreachable block (ram,0x01485564) */
/* WARNING: Removing unreachable block (ram,0x01485d20) */
/* WARNING: Removing unreachable block (ram,0x01485d38) */

void Atlas_Lighting_LightWorld__Update(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *plVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  undefined8 uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  bool bVar27;
  int iVar28;
  float fVar29;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
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
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  int aiStack_308 [5];
  uint uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  long lStack_238;
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
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uVar22;
  
  if ((bRam0000000003eb4934 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d335a0);
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d335a8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d335b0);
    func_0x00f78a20(0x3d222d0);
    func_0x00f78a20(0x3d22f80);
    func_0x00f78a20(0x3d3cb60);
    func_0x00f78a20(0x3d3cb68);
    func_0x00f78a20(0x3d3b030);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d3d478);
    func_0x00f78a20(0x3d3d480);
    func_0x00f78a20(0x3d3d488);
    func_0x00f78a20(0x3d3b038);
    func_0x00f78a20(0x3d3d490);
    func_0x00f78a20(0x3d3d498);
    func_0x00f78a20(0x3d3e2b8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4934 = 1;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  lStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_260 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2c0 = 0;
  lStack_2b8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2f4 = 0;
  if (((*(ushort *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar23 = **(undefined8 **)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar23,0);
  if (*(char *)(param_1 + 0xe4) != '\0') {
    uVar16 = /*Unity.Collections.NativeArray<LightVolume>$$get_IsCreated*/ func_0x025f8354(param_1 + 0x30,uRam0000000003d3e2b8);
    if (((uVar16 & 1) == 0) ||
       (uVar16 = /*Unity.Collections.NativeArray<LightVolume>$$get_IsCreated*/ func_0x025f8354(param_1 + 0x40,uRam0000000003d3e2b8), (uVar16 & 1) == 0)) {
      uVar16 = Atlas_Lighting_LightWorld__CreateLightVolumeArray(param_1,0);
    }
    puVar1 = (undefined8 *)(param_1 + 0x5c);
    uVar16 = /*Atlas.Lighting.LightWorld$$CelShadingParamsEqual*/ func_0x01485e80(uVar16,puVar1,(undefined8 *)(param_1 + 0xa0));
    if ((uVar16 & 1) == 0) {
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = **(undefined4 **)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
      /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                      *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),0);
      /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar2,0);
      uVar2 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 4);
      /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                      *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),0);
      /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar2,0);
      uVar2 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 8);
      /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                      *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0);
      /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar2,0);
    }
    fVar29 = *(float *)(param_1 + 0x8c);
    if ((((fVar29 != *(float *)(param_1 + 0xd0)) ||
         (*(float *)(param_1 + 0x90) != *(float *)(param_1 + 0xd4))) ||
        (*(float *)(param_1 + 0x94) != *(float *)(param_1 + 0xd8))) ||
       (*(float *)(param_1 + 0x98) != *(float *)(param_1 + 0xdc))) {
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
        fVar29 = *(float *)(param_1 + 0x8c);
      }
      uVar2 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0xc);
      /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(fVar29,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                      *(undefined4 *)(param_1 + 0x98),0);
      /*UnityEngine.Shader$$SetGlobalVector*/ func_0x03262d44(uVar2,0);
    }
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x84);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 100);
    *(undefined8 *)(param_1 + 0xa0) = *puVar1;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x74);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x6c);
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<LightWorld.Member>$$GetEnumerator*/ func_0x0254d834(&uStack_3e0,*(long *)(param_1 + 0x18),uRam0000000003d3d478);
      uStack_d8 = uStack_338;
      uStack_e0 = uStack_340;
      uStack_c8 = uStack_328;
      uStack_d0 = uStack_330;
      uStack_b8 = uStack_318;
      uStack_c0 = uStack_320;
      uStack_b0 = uStack_310;
      uStack_118 = uStack_378;
      uStack_120 = uStack_380;
      uStack_108 = uStack_368;
      uStack_110 = uStack_370;
      uStack_f8 = uStack_358;
      uStack_100 = uStack_360;
      uStack_e8 = uStack_348;
      uStack_f0 = uStack_350;
      uStack_158 = uStack_3b8;
      uStack_160 = uStack_3c0;
      uStack_148 = uStack_3a8;
      uStack_150 = uStack_3b0;
      uStack_138 = uStack_398;
      uStack_140 = uStack_3a0;
      uStack_128 = uStack_388;
      uStack_130 = uStack_390;
      lStack_178 = lStack_3d8;
      uStack_180 = uStack_3e0;
      lStack_168 = lStack_3c8;
      plStack_170 = plStack_3d0;
      while (uVar16 = /*System.Collections.Generic.List.Enumerator<LightWorld.Member>$$MoveNext*/ func_0x01f7fe90(&uStack_180,uRam0000000003d335a8), plVar14 = plStack_170,
            (uVar16 & 1) != 0) {
        if (plStack_170 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01485d5c;
        }
        lVar25 = *(long *)(param_1 + 0x20);
        lVar19 = *plStack_170;
        uVar16 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar16 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*Atlas.Lighting.ILightWorldSample_TypeInfo*/ lRam0000000003d222d0) {
              puVar17 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01485518;
            }
            piVar20 = piVar20 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plStack_170,/*Atlas.Lighting.ILightWorldSample_TypeInfo*/ lRam0000000003d222d0,0);
LAB_01485518:
        (*(code *)*puVar17)(plVar14,puVar17[1]);
        if (lVar25 == 0) {
          func_0x00f78af4();
          goto code_r0x01485d5c;
        }
        /*System.Collections.Generic.List<float4>$$Add*/ func_0x0249f22c(lVar25,uRam0000000003d3cb60);
      }
      aiStack_308[0] = 0x170;
      uStack_2f4 = 1;
      /*System.Collections.Generic.List.Enumerator<LightWorld.Member>$$Dispose*/ func_0x01f7fe8c(&uStack_180,uRam0000000003d335a0);
      if (aiStack_308[0] == 0x170) {
        uStack_2f4 = 0;
      }
      bVar27 = aiStack_308[0] != 0x170;
      uVar21 = (uint)bVar27;
      uVar22 = (uint)bVar27;
      uVar16 = /*Atlas.Lighting.LightWorld$$RunQueryJob*/ func_0x01485f98(param_1,*(undefined8 *)(param_1 + 0x20),
                               *(undefined8 *)(param_1 + 0x28),puVar1);
      lVar19 = *(long *)(param_1 + 0x18);
      if (lVar19 == 0) {
        func_0x00f78af4();
      }
      else {
        iVar28 = *(int *)(lVar19 + 0x18);
        if (iVar28 < 1) {
code_r0x01485c50:
          if (*(long *)(param_1 + 0x20) == 0) {
            func_0x00f78af4();
          }
          else {
            /*System.Collections.Generic.List<float4>$$Clear*/ func_0x0249f538(*(long *)(param_1 + 0x20),uRam0000000003d3cb68);
            if (*(long *)(param_1 + 0x28) != 0) {
              /*System.Collections.Generic.List<LightVolumeParams>$$Clear*/ func_0x023f1d20(*(long *)(param_1 + 0x28),uRam0000000003d3b030);
              aiStack_308[(int)uVar22] = 0x43d;
              uStack_2f4 = uStack_2f4 + 1;
              goto code_r0x01485c98;
            }
            func_0x00f78af4();
          }
        }
        else {
          uVar24 = 0;
          uVar26 = uVar21;
          uVar22 = uVar21;
          do {
            if (*(uint *)(lVar19 + 0x18) <= uVar24) {
              uVar16 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(lVar19 + 0x10) + (long)(int)uVar24 * 200;
            uStack_1a8 = *(undefined8 *)(lVar19 + 200);
            uStack_1b0 = *(undefined8 *)(lVar19 + 0xc0);
            uStack_198 = *(undefined8 *)(lVar19 + 0xd8);
            uStack_1a0 = *(undefined8 *)(lVar19 + 0xd0);
            uStack_190 = *(undefined8 *)(lVar19 + 0xe0);
            uStack_1e8 = *(undefined8 *)(lVar19 + 0x88);
            uStack_1f0 = *(undefined8 *)(lVar19 + 0x80);
            uStack_1d8 = *(undefined8 *)(lVar19 + 0x98);
            uStack_1e0 = *(undefined8 *)(lVar19 + 0x90);
            uStack_1c8 = *(undefined8 *)(lVar19 + 0xa8);
            uStack_1d0 = *(undefined8 *)(lVar19 + 0xa0);
            uStack_1b8 = *(undefined8 *)(lVar19 + 0xb8);
            uStack_1c0 = *(undefined8 *)(lVar19 + 0xb0);
            uStack_228 = *(undefined8 *)(lVar19 + 0x48);
            uStack_230 = *(undefined8 *)(lVar19 + 0x40);
            uStack_218 = *(undefined8 *)(lVar19 + 0x58);
            uStack_220 = *(undefined8 *)(lVar19 + 0x50);
            uStack_208 = *(undefined8 *)(lVar19 + 0x68);
            uStack_210 = *(undefined8 *)(lVar19 + 0x60);
            uStack_1f8 = *(undefined8 *)(lVar19 + 0x78);
            uStack_200 = *(undefined8 *)(lVar19 + 0x70);
            lStack_248 = *(long *)(lVar19 + 0x28);
            uStack_250 = *(undefined8 *)(lVar19 + 0x20);
            lStack_238 = *(long *)(lVar19 + 0x38);
            plStack_240 = *(long **)(lVar19 + 0x30);
            lVar19 = *(long *)(param_1 + 0x28);
            if (lVar19 == 0) {
              func_0x00f78af4();
              goto code_r0x01485d5c;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar24) {
              uVar16 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar14 = plStack_240;
            lVar19 = *(long *)(lVar19 + 0x10) + (long)(int)uVar24 * 0x44;
            uStack_278 = *(undefined8 *)(lVar19 + 0x48);
            uStack_280 = *(undefined8 *)(lVar19 + 0x40);
            uStack_268 = *(undefined8 *)(lVar19 + 0x58);
            uStack_270 = *(ulong *)(lVar19 + 0x50);
            uStack_260 = *(undefined4 *)(lVar19 + 0x60);
            uStack_298 = *(undefined8 *)(lVar19 + 0x28);
            uStack_2a0 = *(ulong *)(lVar19 + 0x20);
            uStack_288 = *(undefined8 *)(lVar19 + 0x38);
            uStack_290 = *(ulong *)(lVar19 + 0x30);
            if ((plStack_240 == (long *)0x0) ||
               (uVar16 = /*Atlas.Lighting.LightWorld$$CelShadingParamsEqual*/ func_0x01485e80(uVar16,(long)&uStack_200 + 4,&uStack_2a0),
               (uVar16 & 1) != 0)) {
              bVar27 = false;
            }
            else {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_3e0,plVar14,uRam0000000003d3b1b0);
              uVar6 = uStack_290;
              uVar16 = uStack_2a0;
              lStack_2b8 = lStack_3d8;
              uStack_2c0 = uStack_3e0;
              plStack_2b0 = plStack_3d0;
              uVar10 = (undefined4)uStack_280;
              uVar11 = uStack_280._4_4_;
              uVar12 = (undefined4)uStack_278;
              uVar13 = uStack_278._4_4_;
              uVar7 = uStack_290._4_4_;
              uVar8 = (undefined4)uStack_288;
              uVar9 = uStack_288._4_4_;
              uVar2 = uStack_2a0._4_4_;
              uVar4 = (undefined4)uStack_298;
              uVar5 = uStack_298._4_4_;
              while (uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_2c0,uRam0000000003d329e8),
                    plVar14 = plStack_2b0, (uVar18 & 1) != 0) {
                if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar3 = **(undefined4 **)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
                /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar10,uVar11,uVar12,uVar13,0);
                if (plVar14 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x01485d5c;
                }
                /*UnityEngine.Material$$SetVector*/ func_0x0323af88(plVar14,uVar3,0);
                uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 4);
                /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar6 & 0xffffffff,uVar7,uVar8,uVar9,0);
                /*UnityEngine.Material$$SetVector*/ func_0x0323af88(plVar14,uVar3,0);
                uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 8);
                /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar16 & 0xffffffff,uVar2,uVar4,uVar5,0);
                /*UnityEngine.Material$$SetVector*/ func_0x0323af88(plVar14,uVar3,0);
              }
              aiStack_308[(int)uVar21] = 0x27f;
              uVar22 = uStack_2f4;
              uVar21 = uStack_2f4 + 1;
              uStack_2f4 = uVar21;
              uVar16 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2c0,uRam0000000003d329e0);
              if ((uVar21 != 0) && (aiStack_308[(int)uVar22] == 0x27f)) {
                uStack_2f4 = uVar22;
                uVar21 = uVar22;
              }
              bVar27 = true;
              uVar26 = uVar21;
              uVar22 = uVar21;
            }
            lVar19 = lStack_248;
            if (lStack_248 != 0) {
              uStack_2e8 = uStack_298;
              uStack_2f0 = uStack_2a0;
              uStack_2d8 = uStack_288;
              uStack_2e0 = uStack_290;
              uStack_2c8 = uStack_278;
              uStack_2d0 = uStack_280;
              if (0.0 < (float)uStack_200) {
                uVar16 = /*Atlas.Lighting.LightWorld$$CelShadingBlend*/ func_0x014861e8(uVar16,&uStack_2f0,&uStack_230);
              }
              uVar16 = /*Atlas.Lighting.LightWorld$$CelShadingParamsEqual*/ func_0x01485e80(uVar16,(long)&uStack_1d0 + 4,&uStack_2f0);
              if ((uVar16 & 1) == 0) {
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_3e0,lVar19,uRam0000000003d3b1b0);
                uVar6 = uStack_2e0;
                uVar16 = uStack_2f0;
                lStack_2b8 = lStack_3d8;
                uStack_2c0 = uStack_3e0;
                plStack_2b0 = plStack_3d0;
                uVar10 = (undefined4)uStack_2d0;
                uVar11 = uStack_2d0._4_4_;
                uVar12 = (undefined4)uStack_2c8;
                uVar13 = uStack_2c8._4_4_;
                uVar7 = uStack_2e0._4_4_;
                uVar8 = (undefined4)uStack_2d8;
                uVar9 = uStack_2d8._4_4_;
                uVar2 = uStack_2f0._4_4_;
                uVar4 = (undefined4)uStack_2e8;
                uVar5 = uStack_2e8._4_4_;
                while (uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_2c0,uRam0000000003d329e8),
                      plVar14 = plStack_2b0, (uVar18 & 1) != 0) {
                  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar3 = **(undefined4 **)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
                  /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar10,uVar11,uVar12,uVar13,0);
                  if (plVar14 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x01485d5c;
                  }
                  /*UnityEngine.Material$$SetVector*/ func_0x0323af88(plVar14,uVar3,0);
                  uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 4);
                  /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar6 & 0xffffffff,uVar7,uVar8,uVar9,0);
                  /*UnityEngine.Material$$SetVector*/ func_0x0323af88(plVar14,uVar3,0);
                  uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 8);
                  /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar16 & 0xffffffff,uVar2,uVar4,uVar5,0);
                  /*UnityEngine.Material$$SetVector*/ func_0x0323af88(plVar14,uVar3,0);
                }
                aiStack_308[(int)uVar26] = 0x35f;
                uVar21 = uStack_2f4;
                uVar22 = uStack_2f4 + 1;
                uStack_2f4 = uVar22;
                /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2c0,uRam0000000003d329e0);
                if ((uVar22 != 0) && (aiStack_308[(int)uVar21] == 0x35f)) {
                  uStack_2f4 = uVar21;
                  uVar22 = uVar21;
                }
                bVar27 = true;
                uVar26 = uVar22;
                uVar21 = uVar22;
              }
            }
            lVar19 = lStack_238;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar19,0,0);
            uVar6 = uStack_270;
            if ((uVar16 & 1) == 0) {
code_r0x01485aa4:
              if (bVar27) goto code_r0x01485b18;
            }
            else {
              fVar29 = (float)uStack_270;
              if (uStack_1a0._4_4_ == (float)uStack_270) {
                if ((float)uStack_198 == uStack_270._4_4_) {
                  if (uStack_198._4_4_ == (float)uStack_268) {
                    if ((float)uStack_190 == uStack_268._4_4_) goto code_r0x01485aa4;
                  }
                }
              }
              if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar2 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0xc);
              uVar4 = uStack_270._4_4_;
              uVar5 = (float)uStack_268;
              uVar7 = uStack_268._4_4_;
              /*Unity.Mathematics.float4$$op_Implicit*/ func_0x030c3470(uVar6 & 0xffffffff,uStack_270._4_4_,(float)uStack_268,uStack_268._4_4_
                              ,0);
              if (lVar19 == 0) {
                func_0x00f78af4();
                goto code_r0x01485d5c;
              }
              /*UnityEngine.Material$$SetVector*/ func_0x0323af88(lVar19,uVar2,0);
              uStack_1a0 = CONCAT44(fVar29,(undefined4)uStack_1a0);
              uStack_198 = CONCAT44(uVar5,uVar4);
              uStack_190 = CONCAT44(uStack_190._4_4_,uVar7);
code_r0x01485b18:
              if (*(long *)(param_1 + 0x18) == 0) {
                func_0x00f78af4();
                goto code_r0x01485d5c;
              }
              uStack_338 = uStack_1a8;
              uStack_340 = uStack_1b0;
              uStack_328 = uStack_198;
              uStack_330 = uStack_1a0;
              uStack_320 = uStack_190;
              uStack_378 = uStack_1e8;
              uStack_380 = uStack_1f0;
              uStack_368 = uStack_1d8;
              uStack_370 = uStack_1e0;
              uStack_358 = uStack_1c8;
              uStack_360 = uStack_1d0;
              uStack_348 = uStack_1b8;
              uStack_350 = uStack_1c0;
              uStack_3b8 = uStack_228;
              uStack_3c0 = uStack_230;
              uStack_3a8 = uStack_218;
              uStack_3b0 = uStack_220;
              uStack_398 = uStack_208;
              uStack_3a0 = uStack_210;
              uStack_388 = uStack_1f8;
              uStack_390 = uStack_200;
              lStack_3d8 = lStack_248;
              uStack_3e0 = uStack_250;
              lStack_3c8 = lStack_238;
              plStack_3d0 = plStack_240;
              uVar16 = /*System.Collections.Generic.List<LightWorld.Member>$$set_Item*/ func_0x0254c69c(*(long *)(param_1 + 0x18),uVar24,&uStack_3e0,
                                       uRam0000000003d3d498);
            }
            if (uStack_190._4_1_ != '\0') {
              if (*(long *)(param_1 + 0x18) == 0) {
                func_0x00f78af4();
                goto code_r0x01485d5c;
              }
              uVar16 = /*System.Collections.Generic.List<LightWorld.Member>$$RemoveAt*/ func_0x0254e8a0(*(long *)(param_1 + 0x18),uVar24,uRam0000000003d3d480);
              uVar24 = uVar24 - 1;
              iVar28 = iVar28 + -1;
            }
            uVar24 = uVar24 + 1;
            if (iVar28 <= (int)uVar24) goto code_r0x01485c50;
            lVar19 = *(long *)(param_1 + 0x18);
          } while (lVar19 != 0);
          func_0x00f78af4();
        }
      }
    }
code_r0x01485d5c:
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1485d60);
    (*pcVar15)();
  }
  aiStack_308[0] = 0x43d;
  uStack_2f4 = 1;
code_r0x01485c98:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar23,0);
  return;
}



// ============================================================
// RVA: 0x1485e80 | Atlas.Lighting.LightWorld.CelShadingParamsEqual
// ============================================================

bool Atlas_Lighting_LightWorld__CelShadingParamsEqual
               (undefined8 param_1,float *param_2,float *param_3)

{
  if ((((((param_2[8] == param_3[8]) && (param_2[9] == param_3[9])) && (param_2[10] == param_3[10]))
       && ((param_2[0xb] == param_3[0xb] && (param_2[4] == param_3[4])))) &&
      ((param_2[5] == param_3[5] && ((param_2[6] == param_3[6] && (param_2[7] == param_3[7])))))) &&
     ((*param_2 == *param_3 && ((param_2[1] == param_3[1] && (param_2[2] == param_3[2])))))) {
    return param_2[3] == param_3[3];
  }
  return false;
}



// ============================================================
// RVA: 0x1485f4c | Atlas.Lighting.LightWorld.ShadowingParamsEqual
// ============================================================

bool Atlas_Lighting_LightWorld__ShadowingParamsEqual
               (undefined8 param_1,float *param_2,float *param_3)

{
  if (((*param_2 == *param_3) && (param_2[1] == param_3[1])) && (param_2[2] == param_3[2])) {
    return param_2[3] == param_3[3];
  }
  return false;
}



// ============================================================
// RVA: 0x1485f98 | Atlas.Lighting.LightWorld.RunQueryJob
// ============================================================

void Atlas_Lighting_LightWorld__RunQueryJob
               (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x1;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar4 = param_3;
  if ((bRam0000000003eb4935 & 1) == 0) {
    func_0x00f78a20(0x3d57fa8);
    func_0x00f78a20(0x3d3b028);
    func_0x00f78a20(0x3d3cb70);
    func_0x00f78a20(0x3d3cb78);
    func_0x00f78a20(0x3d3e2c8);
    func_0x00f78a20(0x3d3e3e0);
    func_0x00f78a20(0x3d3e2c0);
    func_0x00f78a20(0x3d3e3d8);
    bRam0000000003eb4935 = 1;
  }
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  if (*(char *)(param_1 + 0xe4) != '\0') {
    if (param_2 == 0) {
LAB_014861e4:
      fVar8 = (float)func_0x00f78af4();
      uVar9 = puVar4[4];
      fVar10 = (float)extraout_x1[4];
      fVar11 = (float)((ulong)extraout_x1[4] >> 0x20);
      fVar12 = (float)extraout_x1[5];
      fVar13 = (float)((ulong)extraout_x1[5] >> 0x20);
      extraout_x1[5] =
           CONCAT44(fVar13 + ((float)((ulong)puVar4[5] >> 0x20) - fVar13) * fVar8,
                    fVar12 + ((float)puVar4[5] - fVar12) * fVar8);
      extraout_x1[4] =
           CONCAT44(fVar11 + ((float)((ulong)uVar9 >> 0x20) - fVar11) * fVar8,
                    fVar10 + ((float)uVar9 - fVar10) * fVar8);
      uVar9 = puVar4[2];
      fVar10 = (float)extraout_x1[2];
      fVar11 = (float)((ulong)extraout_x1[2] >> 0x20);
      fVar12 = (float)extraout_x1[3];
      fVar13 = (float)((ulong)extraout_x1[3] >> 0x20);
      extraout_x1[3] =
           CONCAT44(fVar13 + ((float)((ulong)puVar4[3] >> 0x20) - fVar13) * fVar8,
                    fVar12 + ((float)puVar4[3] - fVar12) * fVar8);
      extraout_x1[2] =
           CONCAT44(fVar11 + ((float)((ulong)uVar9 >> 0x20) - fVar11) * fVar8,
                    fVar10 + ((float)uVar9 - fVar10) * fVar8);
      uVar9 = *puVar4;
      fVar10 = (float)*extraout_x1;
      fVar11 = (float)((ulong)*extraout_x1 >> 0x20);
      fVar12 = (float)extraout_x1[1];
      fVar13 = (float)((ulong)extraout_x1[1] >> 0x20);
      extraout_x1[1] =
           CONCAT44(fVar13 + ((float)((ulong)puVar4[1] >> 0x20) - fVar13) * fVar8,
                    fVar12 + ((float)puVar4[1] - fVar12) * fVar8);
      *extraout_x1 = CONCAT44(fVar11 + ((float)((ulong)uVar9 >> 0x20) - fVar11) * fVar8,
                              fVar10 + ((float)uVar9 - fVar10) * fVar8);
      return;
    }
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar6 = (ulong)uVar2;
    if (uVar2 != 0) {
      /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&lStack_f0,uVar6,3,1,uRam0000000003d3e3d8);
      puVar4 = (undefined8 *)((long)&MACH_HEADER.magic + 3);
      /*Unity.Collections.NativeArray<LightVolumeParams>$$.ctor*/ func_0x025f8f68(&lStack_100,uVar6,3,1,uRam0000000003d3e2c0);
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (*(uint *)(param_2 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar5 = *(long *)(param_2 + 0x10) + uVar7 * 0x10;
          uVar9 = *(undefined8 *)(lVar5 + 0x20);
          puVar3 = (undefined8 *)(lStack_f0 + uVar7 * 0x10);
          puVar3[1] = *(undefined8 *)(lVar5 + 0x28);
          *puVar3 = uVar9;
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      lStack_c8 = *(long *)(param_1 + 0x38);
      lStack_d0 = *(long *)(param_1 + 0x30);
      uStack_ac = (undefined4)*(undefined8 *)(param_1 + 0x50);
      uStack_a8 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
      uStack_9c = param_4[1];
      uStack_8c = param_4[3];
      uStack_94 = param_4[2];
      uStack_7c = param_4[5];
      uStack_84 = param_4[4];
      uStack_6c = param_4[7];
      uStack_74 = param_4[6];
      lStack_c0 = *(long *)(param_1 + 0x40);
      lStack_b8 = *(long *)(param_1 + 0x48);
      lStack_e0 = lStack_f0;
      lStack_d8 = lStack_e8;
      uStack_64 = *(undefined4 *)(param_4 + 8);
      uStack_a4 = (undefined4)*param_4;
      uStack_a0 = (undefined4)((ulong)*param_4 >> 0x20);
      lStack_60 = lStack_100;
      uStack_58 = uStack_f8;
      uStack_b0 = uVar2;
      /*Unity.Jobs.IJobExtensions$$Run<LightVolumeQueryJob>*/ func_0x0185e728(&lStack_e0,uRam0000000003d57fa8);
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          if (param_3 == (undefined8 *)0x0) goto LAB_014861e4;
          plVar1 = (long *)(lStack_100 + lVar5);
          lStack_b8 = plVar1[5];
          lStack_c0 = plVar1[4];
          uStack_a0 = (undefined4)plVar1[8];
          lStack_d8 = plVar1[1];
          lStack_e0 = *plVar1;
          lStack_c8 = plVar1[3];
          lStack_d0 = plVar1[2];
          uStack_a8 = (undefined4)plVar1[7];
          uStack_a4 = (undefined4)((ulong)plVar1[7] >> 0x20);
          uStack_b0 = (uint)plVar1[6];
          uStack_ac = (undefined4)((ulong)plVar1[6] >> 0x20);
          puVar4 = puRam0000000003d3b028;
          /*System.Collections.Generic.List<LightVolumeParams>$$Add*/ func_0x023f19c0(param_3,&lStack_e0);
          lVar5 = lVar5 + 0x44;
        } while (uVar6 * 0x44 - lVar5 != 0);
      }
      /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(&lStack_f0,uRam0000000003d3e3e0);
      /*Unity.Collections.NativeArray<LightVolumeParams>$$Dispose*/ func_0x025f93ec(&lStack_100,uRam0000000003d3e2c8);
    }
  }
  return;
}



// ============================================================
// RVA: 0x14861e8 | Atlas.Lighting.LightWorld.CelShadingBlend
// ============================================================

void Atlas_Lighting_LightWorld__CelShadingBlend
               (float param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  float fVar4;
  float fVar5;
  
  uVar2 = param_4[4];
  fVar1 = (float)param_3[4];
  fVar3 = (float)((ulong)param_3[4] >> 0x20);
  fVar4 = (float)param_3[5];
  fVar5 = (float)((ulong)param_3[5] >> 0x20);
  param_3[5] = CONCAT44(fVar5 + ((float)((ulong)param_4[5] >> 0x20) - fVar5) * param_1,
                        fVar4 + ((float)param_4[5] - fVar4) * param_1);
  param_3[4] = CONCAT44(fVar3 + ((float)((ulong)uVar2 >> 0x20) - fVar3) * param_1,
                        fVar1 + ((float)uVar2 - fVar1) * param_1);
  uVar2 = param_4[2];
  fVar1 = (float)param_3[2];
  fVar3 = (float)((ulong)param_3[2] >> 0x20);
  fVar4 = (float)param_3[3];
  fVar5 = (float)((ulong)param_3[3] >> 0x20);
  param_3[3] = CONCAT44(fVar5 + ((float)((ulong)param_4[3] >> 0x20) - fVar5) * param_1,
                        fVar4 + ((float)param_4[3] - fVar4) * param_1);
  param_3[2] = CONCAT44(fVar3 + ((float)((ulong)uVar2 >> 0x20) - fVar3) * param_1,
                        fVar1 + ((float)uVar2 - fVar1) * param_1);
  uVar2 = *param_4;
  fVar1 = (float)*param_3;
  fVar3 = (float)((ulong)*param_3 >> 0x20);
  fVar4 = (float)param_3[1];
  fVar5 = (float)((ulong)param_3[1] >> 0x20);
  param_3[1] = CONCAT44(fVar5 + ((float)((ulong)param_4[1] >> 0x20) - fVar5) * param_1,
                        fVar4 + ((float)param_4[1] - fVar4) * param_1);
  *param_3 = CONCAT44(fVar3 + ((float)((ulong)uVar2 >> 0x20) - fVar3) * param_1,
                      fVar1 + ((float)uVar2 - fVar1) * param_1);
  return;
}



// ============================================================
// RVA: 0x1486230 | Atlas.Lighting.LightWorld.OverrideMemberCelShading
// ============================================================

/* WARNING: Possible PIC construction at 0x01486290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01486294) */
/* WARNING: Removing unreachable block (ram,0x01486298) */
/* WARNING: Removing unreachable block (ram,0x014862a0) */
/* WARNING: Removing unreachable block (ram,0x014862b4) */
/* WARNING: Removing unreachable block (ram,0x014862c0) */
/* WARNING: Removing unreachable block (ram,0x014863b0) */
/* WARNING: Removing unreachable block (ram,0x014862e8) */
/* WARNING: Removing unreachable block (ram,0x01486394) */

uint Atlas_Lighting_LightWorld__OverrideMemberCelShading(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4936 & 1) == 0) {
    func_0x00f78a20(0x3d3d490);
    func_0x00f78a20(0x3d3d498);
    bRam0000000003eb4936 = 1;
  }
  if ((bRam0000000003eb493b & 1) == 0) {
    func_0x00f78a20(0x3d3d488);
    func_0x00f78a20(0x3d3d490);
    bRam0000000003eb493b = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 200 + 0x20) == param_2) {
        return uVar2;
      }
      if (iVar1 - 1U == uVar2) {
        return 0xffffffff;
      }
      lVar3 = *(long *)(param_1 + 0x18);
      uVar2 = uVar2 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14863b4 | Atlas.Lighting.LightWorld.GetMemberIndex
// ============================================================

uint Atlas_Lighting_LightWorld__GetMemberIndex(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb493b & 1) == 0) {
    func_0x00f78a20(0x3d3d488);
    func_0x00f78a20(0x3d3d490);
    bRam0000000003eb493b = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 200 + 0x20) == param_2) {
        return uVar2;
      }
      if (iVar1 - 1U == uVar2) {
        return 0xffffffff;
      }
      lVar3 = *(long *)(param_1 + 0x18);
      uVar2 = uVar2 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x1486474 | Atlas.Lighting.LightWorld.ClearOverrideMemberCelShading
// ============================================================

void Atlas_Lighting_LightWorld__ClearOverrideMemberCelShading(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  Atlas_Lighting_LightWorld__OverrideMemberCelShading(0,param_1,param_2,&uStack_40);
  return;
}



// ============================================================
// RVA: 0x14864a4 | Atlas.Lighting.LightWorld.RegisterMember
// ============================================================

void Atlas_Lighting_LightWorld__RegisterMember
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 unaff_x19;
  int iVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x25 = 0x3eb4000;
    if ((bRam0000000003eb4937 & 1) == 0) {
      func_0x00f78a20(0x3d3d468);
      bRam0000000003eb4937 = 1;
    }
    lVar6 = *(long *)(auVar14._0_8_ + 0x18);
    if (lVar6 != 0) {
      *(long *)((long)register0x00000008 + -0x118) = auVar14._8_8_;
      *(long *)((long)register0x00000008 + -0x110) = param_3;
      *(undefined8 *)((long)register0x00000008 + -0x108) = param_4;
      *(undefined8 *)((long)register0x00000008 + -0x100) = param_5;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x58) = 0;
      *(char *)((long)register0x00000008 + -0x54) = (char)param_6;
      *(undefined2 *)((long)register0x00000008 + -0x53) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x51) = 0;
      /*System.Collections.Generic.List<LightWorld.Member>$$Add*/ func_0x0254caa8(lVar6,(undefined1 *)((long)register0x00000008 + -0x118),uRam0000000003d3d468);
      return;
    }
    auVar13 = func_0x00f78af4();
    *(undefined1 (*) [16])((long)register0x00000008 + -0x160) = auVar14;
    *(long *)((long)register0x00000008 + -0x150) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x148) = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x140) = param_5;
    *(undefined8 *)((long)register0x00000008 + -0x138) = param_6;
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x128) = &Atlas_Lighting_LightWorld__RegisterMember;
    param_5 = 0x3eb4000;
    if ((bRam0000000003eb4938 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4938 = 1;
    }
    if ((auVar13._8_8_ == 0) || (lVar6 = *(long *)(auVar13._8_8_ + 0x28), lVar6 == 0))
    goto code_r0x014866f4;
    param_3 = *(long *)(lVar6 + 0x108);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_3,0,0);
    param_5 = 0;
    if (iVar4 != 0) {
      if (param_3 == 0) {
code_r0x014866f4:
        auVar14 = func_0x00f78af4();
        *(long *)((long)register0x00000008 + -400) = param_3;
        *(undefined8 *)((long)register0x00000008 + -0x188) = param_5;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x180) = auVar13;
        *(undefined1 **)((long)register0x00000008 + -0x170) =
             (undefined1 *)((long)register0x00000008 + -0x130);
        *(undefined **)((long)register0x00000008 + -0x168) =
             &Atlas_Lighting_LightWorld__UnRegisterMember;
        if ((bRam0000000003eb4939 & 1) == 0) {
          func_0x00f78a20(0x3d3d480);
          bRam0000000003eb4939 = 1;
        }
        uVar7 = Atlas_Lighting_LightWorld__GetMemberIndex(auVar14._0_8_,auVar14._8_8_);
        uVar5 = (uint)uVar7;
        if (uVar5 == 0xffffffff) {
          return;
        }
        lVar6 = *(long *)(auVar14._0_8_ + 0x18);
        if (lVar6 == 0) {
          func_0x00f78af4();
          return;
        }
        uVar1 = *(undefined8 *)((long)register0x00000008 + -400);
        uVar2 = *(undefined8 *)((long)register0x00000008 + -0x188);
        *(undefined8 *)((long)register0x00000008 + -0x180) =
             *(undefined8 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x178) =
             *(undefined8 *)((long)register0x00000008 + -0x178);
        *(undefined8 *)((long)register0x00000008 + -0x170) =
             *(undefined8 *)((long)register0x00000008 + -0x170);
        *(undefined8 *)((long)register0x00000008 + -0x168) =
             *(undefined8 *)((long)register0x00000008 + -0x168);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar8 = uRam0000000003d3d480;
        if (uVar10 <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar10 = *(uint *)(lVar6 + 0x18);
        }
        uVar10 = uVar10 - 1;
        *(uint *)(lVar6 + 0x18) = uVar10;
        if (uVar10 - uVar5 != 0 && (int)uVar5 <= (int)uVar10) {
          uVar8 = *(undefined8 *)(lVar6 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar8,uVar5 + 1,uVar8,uVar7,uVar10 - uVar5,0);
          uVar10 = *(uint *)(lVar6 + 0x18);
        }
        lVar11 = *(long *)(lVar6 + 0x10);
        if (lVar11 == 0) {
          func_0x00f78af4();
        }
        else if (uVar10 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar10 * 200;
          *(undefined8 *)(lVar11 + 0xe0) = 0;
          *(undefined8 *)(lVar11 + 200) = 0;
          *(undefined8 *)(lVar11 + 0xc0) = 0;
          *(undefined8 *)(lVar11 + 0xd8) = 0;
          *(undefined8 *)(lVar11 + 0xd0) = 0;
          *(undefined8 *)(lVar11 + 0xa8) = 0;
          *(undefined8 *)(lVar11 + 0xa0) = 0;
          *(undefined8 *)(lVar11 + 0xb8) = 0;
          *(undefined8 *)(lVar11 + 0xb0) = 0;
          *(undefined8 *)(lVar11 + 0x88) = 0;
          *(undefined8 *)(lVar11 + 0x80) = 0;
          *(undefined8 *)(lVar11 + 0x98) = 0;
          *(undefined8 *)(lVar11 + 0x90) = 0;
          *(undefined8 *)(lVar11 + 0x68) = 0;
          *(undefined8 *)(lVar11 + 0x60) = 0;
          *(undefined8 *)(lVar11 + 0x78) = 0;
          *(undefined8 *)(lVar11 + 0x70) = 0;
          *(undefined8 *)(lVar11 + 0x48) = 0;
          *(undefined8 *)(lVar11 + 0x40) = 0;
          *(undefined8 *)(lVar11 + 0x58) = 0;
          *(undefined8 *)(lVar11 + 0x50) = 0;
          *(undefined8 *)(lVar11 + 0x28) = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0;
          *(undefined8 *)(lVar11 + 0x38) = 0;
          *(undefined8 *)(lVar11 + 0x30) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          return;
        }
        uVar9 = func_0x00f78b24();
        auVar14 = func_0x00f78ac0(uVar9,0);
        lVar11 = auVar14._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar1;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar2;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar7;
        *(long *)((long)register0x00000008 + -0x198) = lVar6;
        *(undefined1 **)((long)register0x00000008 + -400) =
             (undefined1 *)((long)register0x00000008 + -0x170);
        *(undefined **)((long)register0x00000008 + -0x188) =
             &System_Collections_Generic_List_LightWorld_Member___RemoveRange;
        iVar4 = auVar14._8_4_;
        iVar12 = (int)uVar8;
        if (iVar4 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar12 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar11 + 0x18) - iVar4 < iVar12) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar12) {
          iVar3 = *(int *)(lVar11 + 0x18) - iVar12;
          *(int *)(lVar11 + 0x18) = iVar3;
          if (iVar3 - iVar4 != 0 && iVar4 <= iVar3) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar11 + 0x10),iVar12 + iVar4,
                            *(undefined8 *)(lVar11 + 0x10),auVar14._8_8_,iVar3 - iVar4,0);
            iVar3 = *(int *)(lVar11 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar11 + 0x10),iVar3,uVar8,0);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        }
        return;
      }
      param_3 = *(long *)(param_3 + 0x60);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_3,0);
      param_5 = 0;
      if (iVar4 != 0) {
        if (param_3 == 0) goto code_r0x014866f4;
        param_5 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(param_3,0);
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_3,0,0);
      if (iVar4 != 0) {
        lVar11 = *(long *)(auVar13._0_8_ + 0x10);
        if ((lVar11 == 0) || (*(char *)(lVar11 + 0x84) == '\0')) {
          if ((param_3 == 0) || (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_3,0), lVar11 == 0))
          goto code_r0x014866f4;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,0,0);
        }
        else {
          if (param_3 == 0) goto code_r0x014866f4;
          param_5 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(param_3,0);
        }
      }
    }
    if ((*(long *)(lVar6 + 0x20) == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto code_r0x014866f4;
    param_3 = *(long *)(*(long *)(lVar6 + 0x20) + 0x18);
    param_4 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x18);
    param_6 = 0;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x130);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x128);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x140);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x138);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x150);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x148);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x160);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x158);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
    auVar14 = auVar13;
  } while( true );
}



// ============================================================
// RVA: 0x1486578 | Atlas.Lighting.LightWorld.RegisterMember
// ============================================================

void Atlas_Lighting_LightWorld__RegisterMember(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  undefined8 unaff_x19;
  int iVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar16 [16];
  
  auVar5._8_8_ = unaff_x23;
  auVar5._0_8_ = unaff_x24;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  while( true ) {
    auVar4 = auVar16;
    lVar9 = auVar4._8_8_;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x40) = auVar5;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4938 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4938 = 1;
    }
    if ((lVar9 == 0) || (lVar15 = *(long *)(lVar9 + 0x28), lVar15 == 0)) break;
    unaff_x22 = *(long *)(lVar15 + 0x108);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
    unaff_x20 = 0;
    if (iVar6 != 0) {
      if (unaff_x22 == 0) break;
      unaff_x22 = *(long *)(unaff_x22 + 0x60);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x22,0);
      unaff_x20 = 0;
      if (iVar6 != 0) {
        if (unaff_x22 == 0) break;
        unaff_x20 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(unaff_x22,0);
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
      if (iVar6 != 0) {
        lVar13 = *(long *)(auVar4._0_8_ + 0x10);
        if ((lVar13 == 0) || (*(char *)(lVar13 + 0x84) == '\0')) {
          if ((unaff_x22 == 0) || (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar13 == 0)) break;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,0,0);
        }
        else {
          if (unaff_x22 == 0) break;
          unaff_x20 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(unaff_x22,0);
        }
      }
    }
    if ((*(long *)(lVar15 + 0x20) == 0) || (*(long *)(lVar15 + 0x28) == 0)) break;
    unaff_x22 = *(long *)(*(long *)(lVar15 + 0x20) + 0x18);
    unaff_x21 = *(undefined8 *)(*(long *)(lVar15 + 0x28) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = 0;
    unaff_x25 = 0x3eb4000;
    if ((bRam0000000003eb4937 & 1) == 0) {
      func_0x00f78a20(0x3d3d468);
      bRam0000000003eb4937 = 1;
    }
    lVar15 = *(long *)(auVar4._0_8_ + 0x18);
    if (lVar15 != 0) {
      *(long *)((long)register0x00000008 + -0x118) = lVar9;
      *(long *)((long)register0x00000008 + -0x110) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x54) = 0;
      *(undefined2 *)((long)register0x00000008 + -0x53) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x51) = 0;
      /*System.Collections.Generic.List<LightWorld.Member>$$Add*/ func_0x0254caa8(lVar15,(undefined1 *)((long)register0x00000008 + -0x118),uRam0000000003d3d468)
      ;
      return;
    }
    unaff_x30 = Atlas_Lighting_LightWorld__RegisterMember;
    auVar16 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
    auVar5 = auVar4;
  }
  auVar16 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x20;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x60) = auVar4;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_Lighting_LightWorld__UnRegisterMember;
  if ((bRam0000000003eb4939 & 1) == 0) {
    func_0x00f78a20(0x3d3d480);
    bRam0000000003eb4939 = 1;
  }
  uVar8 = Atlas_Lighting_LightWorld__GetMemberIndex(auVar16._0_8_,auVar16._8_8_);
  uVar7 = (uint)uVar8;
  if (uVar7 == 0xffffffff) {
    return;
  }
  lVar9 = *(long *)(auVar16._0_8_ + 0x18);
  if (lVar9 == 0) {
    func_0x00f78af4();
    return;
  }
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x70);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x50) =
       *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar12 = *(uint *)(lVar9 + 0x18);
  uVar10 = uRam0000000003d3d480;
  if (uVar12 <= uVar7) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar12 = *(uint *)(lVar9 + 0x18);
  }
  uVar12 = uVar12 - 1;
  *(uint *)(lVar9 + 0x18) = uVar12;
  if (uVar12 - uVar7 != 0 && (int)uVar7 <= (int)uVar12) {
    uVar10 = *(undefined8 *)(lVar9 + 0x10);
    /*System.Array$$Copy*/ func_0x0292b4cc(uVar10,uVar7 + 1,uVar10,uVar8,uVar12 - uVar7,0);
    uVar12 = *(uint *)(lVar9 + 0x18);
  }
  lVar15 = *(long *)(lVar9 + 0x10);
  if (lVar15 == 0) {
    func_0x00f78af4();
  }
  else if (uVar12 < *(uint *)(lVar15 + 0x18)) {
    lVar15 = lVar15 + (long)(int)uVar12 * 200;
    *(undefined8 *)(lVar15 + 0xe0) = 0;
    *(undefined8 *)(lVar15 + 200) = 0;
    *(undefined8 *)(lVar15 + 0xc0) = 0;
    *(undefined8 *)(lVar15 + 0xd8) = 0;
    *(undefined8 *)(lVar15 + 0xd0) = 0;
    *(undefined8 *)(lVar15 + 0xa8) = 0;
    *(undefined8 *)(lVar15 + 0xa0) = 0;
    *(undefined8 *)(lVar15 + 0xb8) = 0;
    *(undefined8 *)(lVar15 + 0xb0) = 0;
    *(undefined8 *)(lVar15 + 0x88) = 0;
    *(undefined8 *)(lVar15 + 0x80) = 0;
    *(undefined8 *)(lVar15 + 0x98) = 0;
    *(undefined8 *)(lVar15 + 0x90) = 0;
    *(undefined8 *)(lVar15 + 0x68) = 0;
    *(undefined8 *)(lVar15 + 0x60) = 0;
    *(undefined8 *)(lVar15 + 0x78) = 0;
    *(undefined8 *)(lVar15 + 0x70) = 0;
    *(undefined8 *)(lVar15 + 0x48) = 0;
    *(undefined8 *)(lVar15 + 0x40) = 0;
    *(undefined8 *)(lVar15 + 0x58) = 0;
    *(undefined8 *)(lVar15 + 0x50) = 0;
    *(undefined8 *)(lVar15 + 0x28) = 0;
    *(undefined8 *)(lVar15 + 0x20) = 0;
    *(undefined8 *)(lVar15 + 0x38) = 0;
    *(undefined8 *)(lVar15 + 0x30) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    return;
  }
  uVar11 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar11,0);
  lVar15 = auVar16._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar1;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar8;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &System_Collections_Generic_List_LightWorld_Member___RemoveRange;
  iVar6 = auVar16._8_4_;
  iVar14 = (int)uVar10;
  if (iVar6 < 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar14 < 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(lVar15 + 0x18) - iVar6 < iVar14) {
    /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar14) {
    iVar3 = *(int *)(lVar15 + 0x18) - iVar14;
    *(int *)(lVar15 + 0x18) = iVar3;
    if (iVar3 - iVar6 != 0 && iVar6 <= iVar3) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar15 + 0x10),iVar14 + iVar6,*(undefined8 *)(lVar15 + 0x10),
                      auVar16._8_8_,iVar3 - iVar6,0);
      iVar3 = *(int *)(lVar15 + 0x18);
    }
    /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar15 + 0x10),iVar3,uVar10,0);
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  }
  return;
}



// ============================================================
// RVA: 0x14866f8 | Atlas.Lighting.LightWorld.UnRegisterMember
// ============================================================

void Atlas_Lighting_LightWorld__UnRegisterMember(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar8;
  long lVar9;
  undefined8 unaff_x19;
  int iVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar11 [16];
  undefined1 *puVar12;
  undefined *puVar13;
  
  if ((bRam0000000003eb4939 & 1) == 0) {
    func_0x00f78a20(0x3d3d480);
    bRam0000000003eb4939 = 1;
  }
  uVar3 = Atlas_Lighting_LightWorld__GetMemberIndex(param_1,param_2);
  uVar2 = (uint)uVar3;
  if (uVar2 == 0xffffffff) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    func_0x00f78af4();
    return;
  }
  puVar12 = &stack0xfffffffffffffff0;
  uVar8 = *(uint *)(lVar4 + 0x18);
  uVar5 = uRam0000000003d3d480;
  if (uVar8 <= uVar2) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar8 = *(uint *)(lVar4 + 0x18);
  }
  uVar8 = uVar8 - 1;
  *(uint *)(lVar4 + 0x18) = uVar8;
  if (uVar8 - uVar2 != 0 && (int)uVar2 <= (int)uVar8) {
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    /*System.Array$$Copy*/ func_0x0292b4cc(uVar5,uVar2 + 1,uVar5,uVar3,uVar8 - uVar2,0,in_x6,in_x7,unaff_x20,unaff_x19);
    uVar8 = *(uint *)(lVar4 + 0x18);
  }
  lVar9 = *(long *)(lVar4 + 0x10);
  if (lVar9 == 0) {
    func_0x00f78af4();
  }
  else if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    lVar9 = lVar9 + (long)(int)uVar8 * 200;
    *(undefined8 *)(lVar9 + 0xe0) = 0;
    *(undefined8 *)(lVar9 + 200) = 0;
    *(undefined8 *)(lVar9 + 0xc0) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 *)(lVar9 + 0xd0) = 0;
    *(undefined8 *)(lVar9 + 0xa8) = 0;
    *(undefined8 *)(lVar9 + 0xa0) = 0;
    *(undefined8 *)(lVar9 + 0xb8) = 0;
    *(undefined8 *)(lVar9 + 0xb0) = 0;
    *(undefined8 *)(lVar9 + 0x88) = 0;
    *(undefined8 *)(lVar9 + 0x80) = 0;
    *(undefined8 *)(lVar9 + 0x98) = 0;
    *(undefined8 *)(lVar9 + 0x90) = 0;
    *(undefined8 *)(lVar9 + 0x68) = 0;
    *(undefined8 *)(lVar9 + 0x60) = 0;
    *(undefined8 *)(lVar9 + 0x78) = 0;
    *(undefined8 *)(lVar9 + 0x70) = 0;
    *(undefined8 *)(lVar9 + 0x48) = 0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(undefined8 *)(lVar9 + 0x58) = 0;
    *(undefined8 *)(lVar9 + 0x50) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x20) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    return;
  }
  uVar6 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar6,0);
  lVar9 = auVar11._0_8_;
  puVar13 = &System_Collections_Generic_List_LightWorld_Member___RemoveRange;
  iVar7 = auVar11._8_4_;
  iVar10 = (int)uVar5;
  if (iVar7 < 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar10 < 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(lVar9 + 0x18) - iVar7 < iVar10) {
    /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar10) {
    iVar1 = *(int *)(lVar9 + 0x18) - iVar10;
    *(int *)(lVar9 + 0x18) = iVar1;
    if (iVar1 - iVar7 != 0 && iVar7 <= iVar1) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar9 + 0x10),iVar10 + iVar7,*(undefined8 *)(lVar9 + 0x10),
                      auVar11._8_8_,iVar1 - iVar7,0,in_x6,in_x7,unaff_x22,unaff_x21,uVar3,lVar4,
                      puVar12,puVar13);
      iVar1 = *(int *)(lVar9 + 0x18);
    }
    /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar9 + 0x10),iVar1,uVar5,0);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  }
  return;
}



// ============================================================
// RVA: 0x1486780 | Atlas.Lighting.LightWorld.UnRegisterMember
// ============================================================

void Atlas_Lighting_LightWorld__UnRegisterMember(void)

{
  return;
}



// ============================================================
// RVA: 0x1486784 | Atlas.Lighting.LightWorld.HasMember
// ============================================================

uint Atlas_Lighting_LightWorld__HasMember(void)

{
  uint uVar1;
  
  uVar1 = Atlas_Lighting_LightWorld__GetMemberIndex();
  return ~uVar1 >> 0x1f;
}



// ============================================================
// RVA: 0x14867a0 | Atlas.Lighting.LightWorld.IncludeLightVolumeBehaviour
// ============================================================

void Atlas_Lighting_LightWorld__IncludeLightVolumeBehaviour(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if ((bRam0000000003eb493e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb493e = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0,0);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      if (pcRam0000000003ebe9e0 == (code *)0x0) {
        pcRam0000000003ebe9e0 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::get_isActiveAndEnabled()");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebe9e0)(param_2);
      return;
    }
    func_0x00f78af4();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x1486838 | Atlas.Lighting.LightWorld..ctor
// ============================================================

void Atlas_Lighting_LightWorld___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1486840 | Atlas.Lighting.LightWorld..cctor
// ============================================================

void Atlas_Lighting_LightWorld___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb493f & 1) == 0) {
    func_0x00f78a20(0x3d22f80);
    func_0x00f78a20(0x3d6f4d8);
    bRam0000000003eb493f = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('LightWorld.Update()')*/ uRam0000000003d6f4d8,1,0,0,0);
  **(undefined8 **)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xb8) = uVar1;
  return;
}



