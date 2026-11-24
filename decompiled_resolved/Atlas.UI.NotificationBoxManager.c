// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.NotificationBoxManager

// ============================================================
// RVA: 0x14b27a4 | Atlas.UI.NotificationBoxManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
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
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */
/* WARNING: Removing unreachable block (ram,0x014b2b88) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_UI_NotificationBoxManager__Init
                  (dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined **ppuVar6;
  dword **ppdVar7;
  dword **ppdVar8;
  dword **ppdVar9;
  undefined8 *puVar10;
  dword **ppdVar11;
  undefined1 *puVar12;
  bool bVar13;
  uint uVar14;
  dword *pdVar18;
  int iVar15;
  dword *pdVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  long lVar24;
  uint uVar16;
  ulong uVar25;
  undefined8 uVar26;
  dword *pdVar27;
  ulong uVar28;
  dword *pdVar29;
  int iVar17;
  int extraout_w1;
  undefined8 uVar30;
  long *plVar32;
  dword *pdVar33;
  long *extraout_x1;
  long *plVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 *puVar37;
  dword *pdVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int *piVar42;
  dword *pdVar43;
  uint uVar44;
  dword *pdVar45;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar46;
  undefined8 unaff_x28;
  dword **ppdVar47;
  dword **ppdVar48;
  undefined *puVar49;
  code *pcVar50;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  dword *apdStack_148 [5];
  long alStack_110 [2];
  dword *pdStack_100;
  long lStack_f8;
  dword *apdStack_f0 [4];
  dword *pdStack_b0;
  undefined8 uStack_a8;
  dword *pdStack_a0;
  dword *pdStack_98;
  undefined8 uStack_90;
  dword *pdStack_88;
  dword *pdStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  dword *pdStack_60;
  dword *pdStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long *plVar31;
  
  if ((bRam0000000003eb4aa2 & 1) == 0) {
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d3e128);
    bRam0000000003eb4aa2 = 1;
  }
  Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___Init
            (param_1,param_2,param_3,param_4,uRam0000000003d3e128);
  if (param_2 != (dword *)0x0) {
    lVar39 = *(long *)(param_2 + 8);
    lVar41 = *(long *)(param_2 + 0x14);
    *(long *)(param_1 + 0x12) = lVar39;
    *(long *)(param_1 + 0x14) = lVar41;
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x36);
    if ((lVar39 != 0) && (*(long *)(lVar39 + 0x10) != 0)) {
      pdVar19 = (dword *)/*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(lVar39 + 0x10),uRam0000000003d57360);
      *(dword **)(param_1 + 0x16) = pdVar19;
      return pdVar19;
    }
  }
  lVar39 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_NotificationBoxManager__ShowScreenBase;
  puVar49 = (undefined *)0x3d28418;
  pdStack_70 = param_3;
  pdStack_68 = param_4;
  pdStack_60 = param_2;
  pdStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4aa3 & 1) == 0) {
    func_0x00f78a20(0x3d3e140);
    func_0x00f78a20(0x3d28418);
    bRam0000000003eb4aa3 = 1;
  }
  pdVar19 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.NotificationBoxScreen.TransitionData_TypeInfo*/ uRam0000000003d28418);
  Atlas_UI_Screens_NotificationBoxScreen_TransitionData___ctor(pdVar19,0);
  if (pdVar19 == (dword *)0x0) {
    puVar20 = (undefined *)func_0x00f78af4();
    pdStack_b0 = (dword *)0x3d3e128;
    uStack_a8 = (code *)0x3eb4000;
    pdStack_98 = (dword *)0x3d28418;
    pdStack_78 = (dword *)&Atlas_UI_NotificationBoxManager__ShowNotificationsIfRequired;
    ppdVar48 = &pdStack_80;
    pdStack_a0 = param_3;
    uStack_90 = pdVar19;
    pdStack_88 = (dword *)lVar39;
    pdStack_80 = (dword *)&puStack_50;
    if ((bRam0000000003eb4aa4 & 1) == 0) {
      func_0x00f78a20(0x3d33618);
      func_0x00f78a20(0x3d32f80);
      func_0x00f78a20(0x3d33620);
      func_0x00f78a20(0x3d32f88);
      func_0x00f78a20(0x3d32f90);
      func_0x00f78a20(0x3d33628);
      func_0x00f78a20(0x3d3d580);
      func_0x00f78a20(0x3d3bfd0);
      func_0x00f78a20(0x3d3e138);
      bRam0000000003eb4aa4 = 1;
    }
    alStack_110[0] = 0;
    alStack_110[1] = 0;
    pdStack_100 = (dword *)0x0;
    if ((*(long *)(puVar20 + 0x58) != 0) &&
       (lVar39 = *(long *)(*(long *)(puVar20 + 0x58) + 0x158), lVar39 != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(apdStack_148 + 2,lVar39,uRam0000000003d3d580);
      apdStack_f0[1] = apdStack_148[3];
      apdStack_f0[0] = apdStack_148[2];
      apdStack_f0[2] = apdStack_148[4];
      iVar17 = 0;
      while( true ) {
        uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(apdStack_f0,uRam0000000003d33620);
        pdVar19 = apdStack_f0[2];
        if ((uVar28 & 1) == 0) {
          *(undefined4 *)(&stack0xfffffffffffffee0 + (long)iVar17 * 4) = 0x98;
          pdVar19 = (dword *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(apdStack_f0,uRam0000000003d33618);
          return pdVar19;
        }
        if (apdStack_f0[2] == (dword *)0x0) break;
        if (*(long *)(apdStack_f0[2] + 0x12) == 0) {
          func_0x00f78af4();
          goto code_r0x014b2b9c;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(apdStack_148 + 2,*(long *)(apdStack_f0[2] + 0x12),uRam0000000003d3bfd0);
        alStack_110[1] = (long)apdStack_148[3];
        alStack_110[0] = (long)apdStack_148[2];
        pdStack_100 = apdStack_148[4];
        do {
          uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(alStack_110,uRam0000000003d32f88);
          if ((uVar28 & 1) == 0) {
            uVar16 = 1;
            goto code_r0x014b2a70;
          }
          if (*(long *)(puVar20 + 0x50) == 0) {
            func_0x00f78af4();
            goto code_r0x014b2b9c;
          }
          uVar28 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(puVar20 + 0x50),pdStack_100,0);
        } while ((uVar28 & 1) != 0);
        uVar16 = 0;
code_r0x014b2a70:
        *(undefined4 *)(&stack0xfffffffffffffee0 + (long)iVar17 * 4) = 0x60;
        iVar15 = iVar17 + 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(alStack_110,uRam0000000003d32f80);
        if ((iVar15 != 0) && (*(int *)(&stack0xfffffffffffffee0 + (long)iVar17 * 4) == 0x60)) {
          iVar15 = iVar17;
        }
        lVar39 = *(long *)(puVar20 + 0x50);
        uVar30 = (**(code **)(*(long *)pdVar19 + 0x178))
                           (pdVar19,*(undefined8 *)(*(long *)pdVar19 + 0x180));
        if (lVar39 == 0) {
          func_0x00f78af4(uVar30,uVar30);
          goto code_r0x014b2b9c;
        }
        uVar14 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar39,uVar30,0);
        iVar17 = iVar15;
        if ((uVar16 & (uVar14 ^ 1)) != 0) {
          Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                    (puVar20,pdVar19,uRam0000000003d3e138);
        }
      }
      func_0x00f78af4();
code_r0x014b2b9c:
                    /* WARNING: Does not return */
      pcVar50 = (code *)SoftwareBreakpoint(1,0x14b2ba0);
      (*pcVar50)();
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      puVar23 = (undefined8 *)___cxa_begin_catch();
      puVar20 = (undefined *)*puVar23;
      ___cxa_end_catch();
      pdVar19 = (dword *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(apdStack_f0,uRam0000000003d33618);
      if (puVar20 == (undefined *)0x0) {
        return pdVar19;
      }
      func_0x00f78ac0(puVar20,0);
    }
    auVar51 = __Unwind_Resume();
    plVar34 = auVar51._8_8_;
    apdStack_148[0] = (dword *)&Atlas_UI_NotificationBoxManager__OnModalHidden;
    if (plVar34 != (long *)0x0) {
      lVar39 = *(long *)(auVar51._0_8_ + 0x50);
      puVar21 = (undefined *)
                (**(code **)(*plVar34 + 0x178))(plVar34,*(undefined8 *)(*plVar34 + 0x180));
      if (lVar39 != 0) {
        puVar35 = (undefined *)0x0;
        auVar51._8_8_ = 0x3eb4000;
        auVar51._0_8_ = lVar39;
        ppuVar6 = (undefined **)(apdStack_148 + 1);
        do {
          while( true ) {
            puVar22 = auVar51._0_8_;
            ppuVar6[0xfffffffffffffffa] = (undefined *)param_3;
            ppuVar6[0xfffffffffffffffb] = puVar49;
            ppuVar6[0xfffffffffffffffc] = auVar51._8_8_;
            ppuVar6[0xfffffffffffffffd] = puVar20;
            ppuVar6[0xfffffffffffffffe] = (undefined *)ppdVar48;
            ppuVar6[0xffffffffffffffff] = (undefined *)apdStack_148[0];
            param_3 = (dword *)0x3eb4000;
            puVar36 = puVar35;
            if ((bRam0000000003eb4e3b & 1) == 0) {
              func_0x00f78a20(0x3d3d940);
              bRam0000000003eb4e3b = 1;
            }
            uVar28 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(puVar21,0);
            if (((uVar28 & 1) != 0) ||
               (uVar28 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(puVar22,puVar21), (uVar28 & 1) != 0)) {
              return (dword *)0x0;
            }
            puVar49 = (undefined *)0x3;
            if ((int)puVar35 == 0) {
              puVar49 = (undefined *)0x0;
            }
            if (((*(long *)(puVar22 + 0x20) != 0) &&
                (lVar39 = Atlas_Save_SaveManager__get_SaveData(*(long *)(puVar22 + 0x20),0),
                lVar39 != 0)) && (*(long *)(lVar39 + 0x38) != 0)) {
              puVar36 = puVar49;
              /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar39 + 0x38),puVar21,puVar49,uRam0000000003d3d940);
              if (*(long *)(puVar22 + 0x20) != 0) {
                Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(puVar22 + 0x20),0);
                return (dword *)((long)&MACH_HEADER.magic + 1);
              }
            }
            auVar51 = func_0x00f78af4();
            lVar39 = auVar51._8_8_;
            puVar20 = auVar51._0_8_;
            ppuVar6[0xfffffffffffffff4] = (undefined *)0x3eb4000;
            ppuVar6[0xfffffffffffffff5] = puVar49;
            ppuVar6[0xfffffffffffffff6] = puVar21;
            ppuVar6[0xfffffffffffffff7] = puVar22;
            ppuVar6[0xfffffffffffffff8] = (undefined *)(ppuVar6 + 0xfffffffffffffffe);
            ppuVar6[0xfffffffffffffff9] =
                 &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
            ppdVar48 = (dword **)(ppuVar6 + 0xfffffffffffffff8);
            puVar49 = (undefined *)0x3eb4000;
            puVar35 = puVar36;
            if ((bRam0000000003eb4e38 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d57398);
              func_0x00f78a20(0x3d257d8);
              func_0x00f78a20(0x3d69c18);
              bRam0000000003eb4e38 = 1;
              puVar35 = puVar36;
            }
            ppuVar6[0xfffffffffffffff3] = (undefined *)0x0;
            iVar17 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(puVar20,lVar39);
            if (iVar17 == 0) break;
            if (lVar39 == 0) {
code_r0x01522270:
              apdStack_148[0] = (dword *)&Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
              auVar54 = func_0x00f78af4();
              puVar21 = auVar54._8_8_;
              auVar51._8_8_ = lVar39;
              auVar51._0_8_ = auVar54._0_8_;
              ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
            }
            else {
              ppuVar6[0xfffffffffffffff3] = *(undefined **)(lVar39 + 0x58);
              iVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(ppuVar6 + 0xfffffffffffffff3,0);
              if (iVar17 == 0) break;
              puVar21 = *(undefined **)(lVar39 + 0x58);
              puVar35 = (undefined *)0x1;
              apdStack_148[0] = (dword *)&UNK_0152208c;
              ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
            }
          }
          iVar17 = /*Atlas.Stats.UnlockManager$$HasCompletedAllChallengesForCampaign*/ func_0x01520e74(puVar20,lVar39);
          if (iVar17 == 0) {
code_r0x01522148:
            if (*(long *)(puVar20 + 0x20) == 0) goto code_r0x01522270;
            uVar30 = Atlas_Save_SaveManager__get_SaveData(*(long *)(puVar20 + 0x20),0);
            auVar51._8_8_ = uVar30;
            auVar51._0_8_ = puVar20;
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            pdVar19 = (dword *)/*Atlas.Stats.UnlockManager$$HasCompletedRequiredChallengesForLeague*/ func_0x01520ec4(uVar30);
            if ((int)pdVar19 == 0) {
              return pdVar19;
            }
            puVar49 = (undefined *)0x3d21270;
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            param_3 = (dword *)0x3d69c18;
            puVar21 = (undefined *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            puVar35 = (undefined *)0x1;
            apdStack_148[0] = (dword *)&UNK_015221cc;
            ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
          }
          else {
            if (lVar39 == 0) goto code_r0x01522270;
            ppuVar6[0xfffffffffffffff3] = *(undefined **)(lVar39 + 0x60);
            iVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(ppuVar6 + 0xfffffffffffffff3,0);
            if (iVar17 == 0) goto code_r0x01522148;
            puVar21 = *(undefined **)(lVar39 + 0x60);
            puVar35 = (undefined *)0x1;
            apdStack_148[0] = (dword *)&UNK_01522108;
            ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
          }
        } while( true );
      }
    }
    pdVar19 = (dword *)func_0x00f78af4();
    if ((bRam0000000003eb4aa5 & 1) == 0) {
      func_0x00f78a20(0x3d3e118);
      bRam0000000003eb4aa5 = 1;
    }
    if ((bRam0000000003eb8334 & 1) == 0) {
      func_0x00f78a20(0x3d3b328,uRam0000000003d3e118);
      func_0x00f78a20(0x3d1dbe8);
      bRam0000000003eb8334 = 1;
    }
    uVar30 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar30,uRam0000000003d3b328);
    *(undefined8 *)(pdVar19 + 0xe) = uVar30;
    return pdVar19;
  }
  *(long *)(pdVar19 + 4) = lVar39;
  puVar23 = puRam0000000003d3e140;
  ppdVar48 = &pdStack_70;
  ppdVar9 = &pdStack_70;
  lVar41 = 0x3eb8000;
  puVar37 = puRam0000000003d3e140;
  if ((bRam0000000003eb8328 & 1) == 0) {
    func_0x00f78a20(0x3d72968);
    bRam0000000003eb8328 = 1;
  }
  if (lVar39 != 0) {
    puVar37 = *(undefined8 **)(*(long *)(puVar23[3] + 0xc0) + 8);
    (*(code *)*puVar37)(lVar39,/*STR('ShowScreen')*/ uRam0000000003d72968);
    if ((*(long *)(lVar39 + 0x18) != 0) &&
       (lVar24 = *(long *)(*(long *)(lVar39 + 0x18) + 0xa8), lVar24 != 0)) {
      puVar37 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      /*Core.Input.InputManager$$SetScreenLayerInputExclusive*/ func_0x0164b04c(lVar24,*(undefined4 *)(lVar39 + 0x30),1,0);
      pdVar29 = pdStack_58;
      pdVar27 = pdStack_60;
      pdVar43 = pdStack_68;
      pdVar45 = pdStack_70;
      if ((*(long *)(lVar39 + 0x18) != 0) &&
         (lVar24 = *(long *)(*(long *)(lVar39 + 0x18) + 0x10), lVar24 != 0)) {
        pdVar38 = (dword *)(ulong)*(uint *)(lVar39 + 0x30);
        uVar30 = *(undefined8 *)(lVar39 + 0x28);
        pdVar18 = *(dword **)(lVar24 + 0x10);
        if (pdVar18 != (dword *)0x0) {
          pdStack_80 = (dword *)0x3d3e128;
          pdStack_78 = (dword *)0x3eb4000;
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          alStack_110[0] = 0x3ebc000;
          lStack_f8 = 0;
          apdStack_f0[3] = (dword *)&UNK_02f87f9c;
          alStack_110[1] = uVar30;
          pdStack_100 = pdVar19;
          apdStack_f0[0] = pdVar18;
          apdStack_f0[1] = pdVar38;
          apdStack_f0[2] = (dword *)&puStack_50;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar39 = *(long *)(pdVar18 + 0x1e);
          if (lVar39 != 0) {
            iVar17 = *(int *)(lVar39 + 0x18);
            if (iVar17 < 1) {
              return (dword *)0x0;
            }
            iVar15 = 1;
            pdVar19 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar39 + 0x18) <= iVar15 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)(iVar15 - 1U) * 0x20 + 0x20);
              if (lVar39 == 0) break;
              uVar28 = /*System.String$$Equals*/ func_0x029caa48(lVar39,uVar30,5,0);
              if ((uVar28 & 1) != 0) {
                return pdVar19;
              }
              pdVar19 = (dword *)(ulong)(iVar15 < iVar17);
              if (iVar17 == iVar15) {
                return pdVar19;
              }
              lVar39 = *(long *)(pdVar18 + 0x1e);
              iVar15 = iVar15 + 1;
            } while (lVar39 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar51 = func_0x00f78af4();
        uVar30 = auVar51._8_8_;
        ppdVar47 = &pdStack_60;
        pdStack_58 = (dword *)Atlas_UI_AtlasUIManager__HideScreen;
        pdVar18 = *(dword **)(auVar51._0_8_ + 0x10);
        if (pdVar18 != (dword *)0x0) {
          pdVar38 = (dword *)0x0;
          pdStack_80 = pdVar45;
          pdStack_78 = pdVar43;
          pdStack_70 = pdVar27;
          pdStack_68 = pdVar29;
          pdStack_58 = (dword *)Atlas_UI_AtlasUIManager__HideScreen;
          pdStack_60 = (dword *)&puStack_50;
          if ((bRam0000000003ebc64b & 1) == 0) {
            pdStack_60 = (dword *)&puStack_50;
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar39 = *(long *)(pdVar18 + 0x1c);
          if (lVar39 != 0) {
            lVar41 = lVar39;
            if (*(uint *)(lVar39 + 0x18) <= auVar51._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar41 = *(long *)(pdVar18 + 0x1c);
            }
            if (lVar41 != 0) {
              lVar39 = *(long *)(lVar39 + 0x10) + (long)(int)auVar51._8_4_ * 0x28;
              uStack_a8 = *(code **)(lVar39 + 0x28);
              pdStack_b0 = *(dword **)(lVar39 + 0x20);
              pdStack_a0 = (dword *)0x0;
              pdStack_98 = (dword *)0x0;
              uStack_90 = (dword *)CONCAT26(*(undefined2 *)(lVar39 + 0x46),
                                            CONCAT42(*(undefined4 *)(lVar39 + 0x42),1));
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar41,uVar30,&pdStack_b0,uRam0000000003d3ddd0);
              pdVar19 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(pdVar18,uVar30);
              return pdVar19;
            }
          }
          auVar51 = func_0x00f78af4();
          pdVar33 = auVar51._8_8_;
          ppdVar8 = &pdStack_100;
          pdStack_100 = pdVar45;
          apdStack_f0[3] = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
          ppdVar48 = apdStack_f0 + 2;
          lStack_f8 = lVar39;
          apdStack_f0[0] = pdVar18;
          apdStack_f0[1] = (dword *)uVar30;
          apdStack_f0[2] = (dword *)&pdStack_60;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar39 = *(long *)(auVar51._0_8_ + 0x70);
          if (lVar39 == 0) {
            puVar49 = &Core_UI2_UIScreen__ForceExit;
            pdVar29 = (dword *)func_0x00f78af4();
            pdVar27 = (dword *)0x0;
            pdVar43 = (dword *)0x3ebc000;
            goto code_r0x02f882d8;
          }
          if (*(uint *)(lVar39 + 0x18) <= auVar51._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)auVar51._8_4_ * 0x28 + 0x28);
          if (lVar39 == 0) {
            pdVar19 = (dword *)0x0;
          }
          else {
            pdVar19 = *(dword **)(lVar39 + 0x40);
          }
          return pdVar19;
        }
        pdStack_60 = (dword *)&puStack_50;
        auVar51 = func_0x00f78af4();
        pdVar33 = auVar51._8_8_;
        pdStack_70 = (dword *)&pdStack_60;
        pdStack_68 = (dword *)Atlas_UI_AtlasUIManager__ClearLayer;
        lVar39 = *(long *)(auVar51._0_8_ + 0x10);
        auVar54._8_8_ = pdVar43;
        auVar54._0_8_ = lVar39;
        if (lVar39 != 0) {
          pdVar38 = (dword *)0x0;
          ppdVar7 = &pdStack_60;
          pcVar50 = Atlas_UI_AtlasUIManager__ClearLayer;
          pdVar43 = pdVar27;
          goto code_r0x02f877a8;
        }
        auVar51 = func_0x00f78af4();
        pdStack_80 = (dword *)&pdStack_70;
        pdStack_78 = (dword *)Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        lVar39 = *(long *)(auVar51._0_8_ + 0x10);
        auVar54._8_8_ = auVar51._8_8_;
        auVar54._0_8_ = lVar39;
        if (lVar39 != 0) {
          pcVar50 = Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar33 = pdVar38;
          while( true ) {
            ppdVar7 = (dword **)((long)ppdVar9 + -0x30);
            *(dword **)((long)ppdVar9 + -0x30) = pdVar45;
            *(dword **)((long)ppdVar9 + -0x28) = pdVar43;
            *(dword **)((long)ppdVar9 + -0x20) = pdVar27;
            *(dword **)((long)ppdVar9 + -0x18) = pdVar29;
            *(dword ***)((long)ppdVar9 + -0x10) = ppdVar48;
            *(code **)((long)ppdVar9 + -8) = pcVar50;
            ppdVar47 = (dword **)((long)ppdVar9 + -0x10);
            pcVar50 = (code *)&UNK_02f883d8;
            pdVar38 = pdVar33;
            pdVar29 = pdVar19;
            pdVar43 = pdVar33;
            pdVar45 = auVar54._0_8_;
code_r0x02f877a8:
            pdVar27 = auVar54._0_8_;
            ppdVar8 = (dword **)((long)ppdVar7 + -0x60);
            *(dword **)((long)ppdVar7 + -0x30) = pdVar45;
            *(long *)((long)ppdVar7 + -0x28) = auVar54._8_8_;
            *(dword **)((long)ppdVar7 + -0x20) = pdVar43;
            *(dword **)((long)ppdVar7 + -0x18) = pdVar29;
            *(dword ***)((long)ppdVar7 + -0x10) = ppdVar47;
            *(code **)((long)ppdVar7 + -8) = pcVar50;
            ppdVar48 = (dword **)((long)ppdVar7 + -0x10);
            pdVar29 = pdVar27;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar29 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar16 = (uint)pdVar33;
            if (((int)uVar16 < 0) || ((int)pdVar27[0x14] <= (int)uVar16)) {
              return pdVar29;
            }
            lVar39 = *(long *)(pdVar27 + 0x1c);
            if (lVar39 == 0) break;
            if (*(uint *)(lVar39 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar39 = *(long *)(lVar39 + 0x10) + ((ulong)pdVar33 & 0xffffffff) * 0x28;
            pdVar45 = *(dword **)(lVar39 + 0x20);
            pdVar29 = *(dword **)(lVar39 + 0x28);
            *(undefined4 *)((long)ppdVar7 + -0x60) = *(undefined4 *)(lVar39 + 0x42);
            *(undefined2 *)((long)ppdVar7 + -0x5c) = *(undefined2 *)(lVar39 + 0x46);
            if (pdVar29 == (dword *)0x0) {
              lVar39 = *(long *)(pdVar27 + 0x1c);
              if (lVar39 != 0) {
                *(dword **)((long)ppdVar7 + -0x58) = pdVar45;
                *(undefined8 *)((long)ppdVar7 + -0x50) = 0;
                *(undefined8 *)((long)ppdVar7 + -0x48) = 0;
                *(undefined8 *)((long)ppdVar7 + -0x40) = 0;
                *(undefined2 *)((long)ppdVar7 + -0x38) = 0;
                *(undefined4 *)((long)ppdVar7 + -0x36) = *(undefined4 *)((long)ppdVar7 + -0x60);
                *(undefined2 *)((long)ppdVar7 + -0x32) = *(undefined2 *)((long)ppdVar7 + -0x5c);
                pdVar19 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar39,pdVar33,
                                                   (undefined1 *)((long)ppdVar7 + -0x58),
                                                   uRam0000000003d3ddd0);
                return pdVar19;
              }
              break;
            }
            puVar49 = &UNK_02f87848;
            pdVar43 = pdVar29;
code_r0x02f882d8:
            *(dword **)((long)ppdVar8 + -0x20) = pdVar27;
            *(dword **)((long)ppdVar8 + -0x18) = pdVar33;
            *(dword ***)((long)ppdVar8 + -0x10) = ppdVar48;
            *(undefined **)((long)ppdVar8 + -8) = puVar49;
            (**(code **)(*(long *)pdVar29 + 0x218))
                      (pdVar29,*(undefined8 *)(*(long *)pdVar29 + 0x220));
            if (*(long *)(pdVar29 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar29 + 10),0);
              pdVar29[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar29,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar19 = (dword *)(**(code **)(*(long *)pdVar29 + 0x228))
                                           (pdVar29,*(undefined8 *)(*(long *)pdVar29 + 0x230));
              return pdVar19;
            }
            func_0x00f78af4();
            ppdVar9 = (dword **)((long)ppdVar8 + -0x40);
            *(dword **)((long)ppdVar8 + -0x40) = pdVar27;
            *(dword **)((long)ppdVar8 + -0x38) = pdVar29;
            *(undefined1 **)((long)ppdVar8 + -0x30) = (undefined1 *)((long)ppdVar8 + -0x10);
            *(undefined **)((long)ppdVar8 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            ppdVar48 = (dword **)((long)ppdVar8 + -0x30);
            if (extraout_x1 != (long *)0x0) {
              lVar39 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar30 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar30,lVar39);
              pdVar19 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar19;
            }
            pcVar50 = (code *)&Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar54 = func_0x00f78af4();
            pdVar33 = pdVar38;
          }
          lVar39 = func_0x00f78af4();
          *(undefined8 *)((long)ppdVar7 + -0xa0) = unaff_d9;
          *(undefined8 *)((long)ppdVar7 + -0x98) = unaff_d8;
          *(dword **)((long)ppdVar7 + -0x90) = pdVar45;
          *(undefined8 *)((long)ppdVar7 + -0x88) = 0;
          *(dword **)((long)ppdVar7 + -0x80) = pdVar27;
          *(dword **)((long)ppdVar7 + -0x78) = pdVar33;
          *(dword ***)((long)ppdVar7 + -0x70) = ppdVar48;
          *(undefined **)((long)ppdVar7 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar30 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar30,0);
          if (0 < *(int *)(lVar39 + 0x50)) {
            iVar17 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar39,iVar17);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar39,iVar17);
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(lVar39 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar39);
          *(undefined8 *)((long)ppdVar7 + -0x80) = *(undefined8 *)((long)ppdVar7 + -0x80);
          *(undefined8 *)((long)ppdVar7 + -0x78) = *(undefined8 *)((long)ppdVar7 + -0x78);
          *(undefined8 *)((long)ppdVar7 + -0x70) = *(undefined8 *)((long)ppdVar7 + -0x70);
          *(undefined8 *)((long)ppdVar7 + -0x68) = *(undefined8 *)((long)ppdVar7 + -0x68);
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar19 = (dword *)(*pcRam0000000003ec05a0)(uVar30);
          return pdVar19;
        }
        auVar51 = func_0x00f78af4();
        pdStack_88 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar39 = *(long *)(auVar51._0_8_ + 0x10);
        if (lVar39 == 0) {
          uStack_90 = (dword *)&pdStack_80;
          auVar51 = func_0x00f78af4();
          ppdVar48 = &pdStack_a0;
          pdStack_98 = (dword *)Atlas_UI_AtlasUIManager__GetLayerState;
          lVar39 = *(long *)(auVar51._0_8_ + 0x10);
          auVar55._8_8_ = auVar51._8_8_;
          auVar55._0_8_ = lVar39;
          if (lVar39 != 0) {
            pdVar19 = (dword *)0x0;
            puVar10 = &uStack_90;
            pcVar50 = Atlas_UI_AtlasUIManager__GetLayerState;
            pdStack_a0 = (dword *)&uStack_90;
            goto code_r0x02f884dc;
          }
          pdStack_a0 = (dword *)&uStack_90;
          auVar51 = func_0x00f78af4();
          puVar46 = (undefined1 *)&pdStack_b0;
          uStack_a8 = Atlas_UI_AtlasUIManager__EnableInput;
          lVar39 = *(long *)(auVar51._0_8_ + 0x10);
          auVar56._8_8_ = auVar51._8_8_;
          auVar56._0_8_ = lVar39;
          if (lVar39 == 0) {
            pdStack_b0 = (dword *)&pdStack_a0;
            auVar51 = func_0x00f78af4();
            lVar39 = *(long *)(auVar51._0_8_ + 0x10);
            auVar57._8_8_ = auVar51._8_8_;
            auVar57._0_8_ = lVar39;
            if (lVar39 == 0) {
              pdVar19 = (dword *)func_0x00f78af4();
              apdStack_f0[0] = pdVar45;
              apdStack_f0[1] = pdVar43;
              apdStack_f0[2] = pdVar27;
              apdStack_f0[3] = pdVar29;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
              }
              uVar30 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar30,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar19 + 0xc) = uVar30;
              return pdVar19;
            }
            puVar12 = (undefined1 *)&pdStack_b0;
            pcVar50 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            goto code_r0x02f88674;
          }
          ppdVar11 = &pdStack_a0;
          pcVar50 = Atlas_UI_AtlasUIManager__EnableInput;
          pdVar19 = pdVar38;
          pdVar38 = pdVar43;
          pdStack_b0 = (dword *)&pdStack_a0;
        }
        else {
          pdVar19 = (dword *)0x0;
          puVar10 = &pdStack_b0;
          pdStack_b0 = pdVar45;
          uStack_a8 = (code *)pdVar43;
          pdStack_a0 = pdVar27;
          pdStack_98 = pdVar29;
          pdStack_88 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
          pdVar43 = (dword *)0x3ebc000;
          uStack_90 = (dword *)&pdStack_80;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_90 = (dword *)&pdStack_80;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar16 = auVar51._8_4_;
          if (((int)uVar16 < 0) || (*(int *)(lVar39 + 0x50) <= (int)uVar16)) {
            return (dword *)0x0;
          }
          lVar39 = *(long *)(lVar39 + 0x70);
          if (lVar39 != 0) {
            if (*(uint *)(lVar39 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar41 = *(long *)(lVar39 + 0x10) + ((ulong)auVar51._8_8_ & 0xffffffff) * 0x28;
            lVar39 = *(long *)(lVar41 + 0x28);
            cVar2 = *(char *)(lVar41 + 0x40);
            iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar41 + 0x30),0);
            if (iVar17 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar39 != 0) && (*(int *)(lVar39 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          pcVar50 = (code *)&Core_UI2_UIManager__GetLayerState;
          auVar55 = func_0x00f78af4();
          pdVar27 = (dword *)0x0;
          pdVar29 = auVar51._8_8_;
code_r0x02f884dc:
          ppdVar11 = (dword **)((long)puVar10 + -0x30);
          *(dword **)((long)puVar10 + -0x30) = pdVar45;
          *(dword **)((long)puVar10 + -0x28) = pdVar43;
          *(dword **)((long)puVar10 + -0x20) = pdVar27;
          *(dword **)((long)puVar10 + -0x18) = pdVar29;
          *(undefined8 **)((long)puVar10 + -0x10) = &uStack_90;
          *(code **)((long)puVar10 + -8) = pcVar50;
          ppdVar48 = (dword **)((long)puVar10 + -0x10);
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar39 = *(long *)(auVar55._0_8_ + 0x70);
          if (lVar39 != 0) {
            if (*(uint *)(lVar39 + 0x18) <= auVar55._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)auVar55._8_4_ * 0x28 + 0x28);
            if (lVar39 == 0) {
              pdVar19 = &MACH_HEADER.cputype;
            }
            else {
              pdVar19 = (dword *)(ulong)*(uint *)(lVar39 + 0x4c);
            }
            return pdVar19;
          }
          pcVar50 = (code *)&Core_UI2_UIManager__EnableInput;
          auVar56 = func_0x00f78af4();
          pdVar27 = (dword *)0x0;
          pdVar29 = auVar55._8_8_;
          pdVar38 = (dword *)0x3ebc000;
        }
        pdVar18 = auVar56._8_8_;
        pdVar43 = auVar56._0_8_;
        puVar12 = (undefined1 *)((long)ppdVar11 + -0x40);
        *(undefined8 *)((long)ppdVar11 + -0x40) = 0x3d3e128;
        *(undefined8 *)((long)ppdVar11 + -0x38) = 0x3eb4000;
        *(dword **)((long)ppdVar11 + -0x30) = pdVar45;
        *(dword **)((long)ppdVar11 + -0x28) = pdVar38;
        *(dword **)((long)ppdVar11 + -0x20) = pdVar27;
        *(dword **)((long)ppdVar11 + -0x18) = pdVar29;
        *(dword ***)((long)ppdVar11 + -0x10) = ppdVar48;
        *(code **)((long)ppdVar11 + -8) = pcVar50;
        puVar46 = (undefined1 *)((long)ppdVar11 + -0x10);
        pdVar45 = (dword *)0x3ebc000;
        pdVar38 = pdVar19;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(pdVar43 + 0x1a) != 0) {
          pdVar38 = (dword *)(ulong)((uint)pdVar19 ^ 1);
          pdVar29 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar43 + 0x1a),pdVar18,pdVar38,0);
          lVar39 = *(long *)(pdVar43 + 0x1c);
          pdVar45 = (dword *)0x0;
          if (lVar39 != 0) {
            uVar16 = auVar56._8_4_;
            if (*(uint *)(lVar39 + 0x18) <= uVar16) {
              pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar39 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28) == 0) ||
               (pdVar45 = *(dword **)(pdVar43 + 0xc), pdVar45 == (dword *)0x0)) {
              return pdVar29;
            }
            lVar39 = *(long *)(pdVar43 + 0x1c);
            pdVar43 = (dword *)0x0;
            if (lVar39 != 0) {
              if (*(uint *)(lVar39 + 0x18) <= uVar16) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar34 = *(long **)(*(long *)(lVar39 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28);
              *(undefined8 *)((long)ppdVar11 + -0x60) = unaff_x28;
              *(undefined8 *)((long)ppdVar11 + -0x58) = unaff_x27;
              *(undefined8 *)((long)ppdVar11 + -0x50) = unaff_x26;
              *(undefined8 *)((long)ppdVar11 + -0x48) = unaff_x25;
              *(undefined8 *)((long)ppdVar11 + -0x40) = *(undefined8 *)((long)ppdVar11 + -0x40);
              *(undefined8 *)((long)ppdVar11 + -0x38) = *(undefined8 *)((long)ppdVar11 + -0x38);
              *(undefined8 *)((long)ppdVar11 + -0x30) = *(undefined8 *)((long)ppdVar11 + -0x30);
              *(undefined8 *)((long)ppdVar11 + -0x28) = *(undefined8 *)((long)ppdVar11 + -0x28);
              *(undefined8 *)((long)ppdVar11 + -0x20) = *(undefined8 *)((long)ppdVar11 + -0x20);
              *(undefined8 *)((long)ppdVar11 + -0x18) = *(undefined8 *)((long)ppdVar11 + -0x18);
              *(undefined8 *)((long)ppdVar11 + -0x10) = *(undefined8 *)((long)ppdVar11 + -0x10);
              *(undefined8 *)((long)ppdVar11 + -8) = *(undefined8 *)((long)ppdVar11 + -8);
              *(dword **)((long)ppdVar11 + -0x68) = pdVar45;
              lVar39 = *(long *)(pdVar45 + 0x1a);
              if (lVar39 == 0) {
                puVar46 = (undefined1 *)((long)ppdVar11 + -0x68);
                lVar41 = 1;
              }
              else {
                lVar41 = *(long *)(lVar39 + 0x18);
                if (lVar41 == 0) {
                  return pdVar45;
                }
                puVar46 = (undefined1 *)(lVar39 + 0x20);
              }
              lVar39 = 0;
              do {
                lVar24 = *(long *)(puVar46 + lVar39 * 8);
                pcVar50 = *(code **)(lVar24 + 0x10);
                plVar31 = *(long **)(lVar24 + 0x20);
                lVar24 = *(long *)(lVar24 + 0x28);
                if (*(short *)(lVar24 + 0x48) == -1) {
                  func_0x00f78ad8(lVar24);
                }
                iVar17 = func_0x00f78a4c(lVar24);
                bVar13 = *(char *)(lVar24 + 0x4a) == '\x03';
                if (iVar17 == 0) {
                  if (bVar13) {
                    if (plVar31 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar29 = (dword *)(*pcVar50)(plVar34,pdVar18,pdVar19,lVar24);
                    }
                    else {
                      if (((*(short *)(lVar24 + 0x48) == -1) ||
                          ((*(byte *)(*plVar31 + 0x115) & 1) != 0)) || (*(long *)(pdVar45 + 6) == 0)
                         ) goto code_r0x01e71aac;
                      iVar17 = func_0x00f78a44(lVar24);
                      iVar15 = func_0x00f78ec0(lVar24);
                      if (iVar17 == 0) {
                        uVar3 = *(ushort *)(lVar24 + 0x48);
                        if (iVar15 == 0) {
                          lVar24 = *plVar31 + (ulong)uVar3 * 0x10;
                          pdVar29 = (dword *)(**(code **)(lVar24 + 0x138))
                                                       (plVar31,plVar34,pdVar18,pdVar19,
                                                        *(undefined8 *)(lVar24 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar24 = func_0x00f78a48(lVar24);
                        lVar40 = *plVar31;
                        uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                        if (uVar28 != 0) {
                          piVar42 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar42 + -2) == lVar24) {
                              puVar23 = (undefined8 *)
                                        (lVar40 + (long)(int)(*piVar42 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar42 = piVar42 + 4;
                            uVar28 = uVar28 - 1;
                          } while (uVar28 != 0);
                        }
                        puVar23 = (undefined8 *)func_0x00fac1f0(plVar31,lVar24,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar50 = (code *)*puVar23;
                        puVar23 = (undefined8 *)puVar23[1];
                      }
                      else {
                        if (iVar15 == 0) {
                          uVar30 = *(undefined8 *)
                                    (*plVar31 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar40 = *plVar31;
                          uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                          if (uVar28 != 0) {
                            piVar42 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar42 + -2) == *(long *)(lVar24 + 0x18)) {
                                lVar40 = lVar40 + (long)(int)(*piVar42 +
                                                             (uint)*(ushort *)(lVar24 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar42 = piVar42 + 4;
                              uVar28 = uVar28 - 1;
                            } while (uVar28 != 0);
                          }
                          lVar40 = func_0x00fac1f0(plVar31);
code_r0x01e71d4c:
                          uVar30 = *(undefined8 *)(lVar40 + 8);
                        }
                        puVar23 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
                        pcVar50 = (code *)*puVar23;
                      }
                      pdVar29 = (dword *)(*pcVar50)(plVar31,plVar34,pdVar18,pdVar19,puVar23);
                    }
                  }
                  else {
                    if ((*(short *)(lVar24 + 0x48) == -1) || (*(long *)(pdVar45 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar17 = func_0x00f78a44(lVar24);
                    iVar15 = func_0x00f78ec0(lVar24);
                    if (iVar17 == 0) {
                      uVar3 = *(ushort *)(lVar24 + 0x48);
                      if (iVar15 == 0) {
                        lVar24 = *plVar34 + (ulong)uVar3 * 0x10;
                        pdVar29 = (dword *)(**(code **)(lVar24 + 0x138))
                                                     (plVar34,pdVar18,pdVar19,
                                                      *(undefined8 *)(lVar24 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar24 = func_0x00f78a48(lVar24);
                      lVar40 = *plVar34;
                      uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                      if (uVar28 != 0) {
                        piVar42 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar42 + -2) == lVar24) {
                            puVar23 = (undefined8 *)
                                      (lVar40 + (long)(int)(*piVar42 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar42 = piVar42 + 4;
                          uVar28 = uVar28 - 1;
                        } while (uVar28 != 0);
                      }
                      puVar23 = (undefined8 *)func_0x00fac1f0(plVar34,lVar24,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar50 = (code *)*puVar23;
                      puVar23 = (undefined8 *)puVar23[1];
                    }
                    else {
                      if (iVar15 == 0) {
                        uVar30 = *(undefined8 *)
                                  (*plVar34 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar40 = *plVar34;
                        uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                        if (uVar28 != 0) {
                          piVar42 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar42 + -2) == *(long *)(lVar24 + 0x18)) {
                              lVar40 = lVar40 + (long)(int)(*piVar42 +
                                                           (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar42 = piVar42 + 4;
                            uVar28 = uVar28 - 1;
                          } while (uVar28 != 0);
                        }
                        lVar40 = func_0x00fac1f0(plVar34);
code_r0x01e71cd8:
                        uVar30 = *(undefined8 *)(lVar40 + 8);
                      }
                      puVar23 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
                      pcVar50 = (code *)*puVar23;
                    }
                    pdVar29 = (dword *)(*pcVar50)(plVar34,pdVar18,pdVar19,puVar23);
                  }
                }
                else {
                  if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar29 = (dword *)(*pcVar50)(plVar31,plVar34,pdVar18,pdVar19,lVar24);
                }
code_r0x01e71bd0:
                lVar39 = lVar39 + 1;
                if (lVar39 == lVar41) {
                  return pdVar29;
                }
              } while( true );
            }
          }
        }
        pcVar50 = (code *)&Core_UI2_UIManager__SetScreenVisible;
        auVar57 = func_0x00f78af4();
        pdVar29 = pdVar19;
        pdVar27 = pdVar18;
code_r0x02f88674:
        pdVar18 = auVar57._0_8_;
        *(dword **)(puVar12 + -0x30) = pdVar45;
        *(dword **)(puVar12 + -0x28) = pdVar43;
        *(dword **)(puVar12 + -0x20) = pdVar27;
        *(dword **)(puVar12 + -0x18) = pdVar29;
        *(undefined1 **)(puVar12 + -0x10) = puVar46;
        *(code **)(puVar12 + -8) = pcVar50;
        pdVar19 = pdVar18;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar19 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar39 = *(long *)(pdVar18 + 0x1c);
        if (lVar39 != 0) {
          uVar16 = auVar57._8_4_;
          if (*(uint *)(lVar39 + 0x18) <= uVar16) {
            pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar39 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28) == 0) {
            return pdVar19;
          }
          lVar39 = *(long *)(pdVar18 + 0x1c);
          if (lVar39 != 0) {
            if (*(uint *)(lVar39 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28);
            if ((lVar39 != 0) && (plVar34 = *(long **)(lVar39 + 0x28), plVar34 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar19 = (dword *)(**(code **)(*plVar34 + 0x178))
                                           (plVar34,pdVar38,*(undefined8 *)(*plVar34 + 0x180));
              return pdVar19;
            }
          }
        }
        auVar51 = func_0x00f78af4();
        uVar30 = auVar51._0_8_;
        *(long *)(puVar12 + -0x50) = auVar57._8_8_;
        *(dword **)(puVar12 + -0x48) = pdVar38;
        *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
        *(undefined **)(puVar12 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)(puVar12 + -0x68) = 0;
        *(undefined8 *)(puVar12 + -0x70) = 0;
        *(undefined8 *)(puVar12 + -0x58) = 0;
        *(undefined8 *)(puVar12 + -0x60) = 0;
        pdVar19 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar30,auVar51._8_8_,puVar12 + -0x70);
        if ((int)pdVar19 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar30,*(undefined8 *)(puVar12 + -0x60),*(undefined8 *)(puVar12 + -0x58));
          *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x68);
          *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x70);
          *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x58);
          *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x60);
          pdVar19 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar30,puVar12 + -0x90,1);
        }
        return pdVar19;
      }
    }
  }
  auVar52 = func_0x00f78af4();
  lVar24 = auVar52._8_8_;
  plVar34 = auVar52._0_8_;
  pdStack_a0 = (dword *)0x3eb8000;
  pdStack_98 = (dword *)puVar23;
  pdStack_78 = (dword *)
               Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___Update
  ;
  uVar28 = 0x3eb8000;
  uStack_90 = (dword *)lVar39;
  pdStack_88 = pdVar19;
  pdStack_80 = (dword *)&puStack_50;
  if ((bRam0000000003eb8329 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb8329 = 1;
  }
  uStack_a8 = (code *)(ulong)(uint)uStack_a8;
  if (plVar34[7] != 0) {
    uVar16 = *(uint *)(plVar34[7] + 0x18);
    uVar28 = (ulong)uVar16;
    pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x30))(plVar34);
    if ((int)uVar16 < 1) {
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      lVar39 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x10))
                         (plVar34);
      if ((lVar39 != 0) && (*(long *)(lVar39 + 0x68) != 0)) {
        pdVar19 = (dword *)/*ModalBehaviour$$get_IsShowing*/ func_0x014969fc(*(long *)(lVar39 + 0x68),0);
        if (((ulong)pdVar19 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x50))
                                       (plVar34);
          return pdVar19;
        }
        return pdVar19;
      }
    }
    else {
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      pdVar19 = (dword *)(**(code **)(*plVar34 + 0x188))(plVar34,*(undefined8 *)(*plVar34 + 400));
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      puVar37 = *(undefined8 **)(*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x40);
      pdVar19 = (dword *)(*(code *)*puVar37)(plVar34,(long)&uStack_a8 + 4);
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      uVar28 = plVar34[7];
      if (uVar28 != 0) {
        lVar41 = (long)(int)uStack_a8._4_4_;
        uVar25 = uVar28;
        if (uStack_a8._4_4_ < *(uint *)(uVar28 + 0x18)) {
LAB_025dfa50:
          uVar30 = *(undefined8 *)(*(long *)(uVar28 + 0x10) + lVar41 * 8 + 0x20);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(uVar25,uStack_a8._4_4_,uRam0000000003d3b350);
          pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x48))
                                       (plVar34,uVar30);
          return pdVar19;
        }
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar25 = plVar34[7];
        if (uVar25 != 0) goto LAB_025dfa50;
      }
    }
  }
  auVar51 = func_0x00f78af4();
  if (auVar51._0_8_ != 0) {
    uVar16 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar51._8_8_ + 0x18) + 0xc0) + 0x58))
                       ();
    return (dword *)(ulong)(uVar16 ^ 1);
  }
  auVar51 = func_0x00f78af4();
  auVar4 = auVar52;
  if (auVar51._0_8_ != 0) {
    apdStack_f0[2] = (dword *)lVar24;
    apdStack_f0[3] = (dword *)plVar34;
    pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(auVar51._8_8_ + 0x18) + 0xc0) + 0x30))();
    if ((int)pdVar19 == 0) {
      return pdVar19;
    }
    lVar39 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar51._8_8_ + 0x18) + 0xc0) + 0x10))
                       (auVar51._0_8_);
    auVar5._8_8_ = apdStack_f0[2];
    auVar5._0_8_ = apdStack_f0[3];
    auVar4._8_8_ = apdStack_f0[2];
    auVar4._0_8_ = apdStack_f0[3];
    auVar52 = auVar51;
    if ((lVar39 != 0) &&
       (plVar34 = *(long **)(lVar39 + 0x68), auVar4 = auVar5, plVar34 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar19 = (dword *)(**(code **)(*plVar34 + 0x1a8))(plVar34,*(undefined8 *)(*plVar34 + 0x1b0));
      return pdVar19;
    }
  }
  apdStack_f0[2] = auVar4._8_8_;
  apdStack_f0[3] = auVar4._0_8_;
  auVar53 = func_0x00f78af4();
  plVar31 = auVar53._8_8_;
  plVar34 = auVar53._0_8_;
  apdStack_f0[1] =
       (dword *)
       Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal;
  uVar30 = 0x3eb8000;
  puVar23 = puVar37;
  alStack_110[0] = lVar41;
  alStack_110[1] = uVar28;
  apdStack_f0[0] = (dword *)&stack0xffffffffffffff30;
  if ((bRam0000000003eb832a & 1) == 0) {
    pdStack_100 = auVar52._8_8_;
    lStack_f8 = auVar52._0_8_;
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    auVar52._8_8_ = pdStack_100;
    auVar52._0_8_ = lStack_f8;
    bRam0000000003eb832a = 1;
  }
  pdStack_100 = auVar52._8_8_;
  lStack_f8 = auVar52._0_8_;
  if (plVar31 != (long *)0x0) {
    uVar30 = 0x3d71000;
    uVar26 = (**(code **)(*plVar31 + 0x178))(plVar31,*(undefined8 *)(*plVar31 + 0x180));
    puVar23 = (undefined8 *)0x0;
    uVar26 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar26);
    auVar52._8_8_ = pdStack_100;
    auVar52._0_8_ = lStack_f8;
    if (plVar34 != (long *)0x0) {
      puVar23 = *(undefined8 **)(*(long *)(puVar37[3] + 0xc0) + 8);
      (*(code *)*puVar23)(plVar34,uVar26);
      auVar52._8_8_ = pdStack_100;
      auVar52._0_8_ = lStack_f8;
      if (plVar34[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar34[7],plVar31,uRam0000000003d3b330);
        auVar52._8_8_ = pdStack_100;
        auVar52._0_8_ = lStack_f8;
        puVar23 = (undefined8 *)plVar34[8];
        if ((puVar23 == (undefined8 *)0x0) || ((int)plVar31[2] <= *(int *)(puVar23 + 2))) {
LAB_025dfcb4:
          pdVar19 = (dword *)(*(code *)**(undefined8 **)(*(long *)(puVar37[3] + 0xc0) + 0x30))
                                       (plVar34);
          if (((ulong)pdVar19 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar19 = (dword *)(**(code **)(*plVar34 + 0x1a8))
                                         (plVar34,*(undefined8 *)(*plVar34 + 0x1b0));
            return pdVar19;
          }
          return pdVar19;
        }
        if (plVar34[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar34[7],0,puVar23,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar37[3] + 0xc0) + 0x60))(plVar34);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  pdStack_100 = auVar52._8_8_;
  lStack_f8 = auVar52._0_8_;
  auVar51 = func_0x00f78af4();
  plVar32 = auVar51._8_8_;
  lVar39 = auVar51._0_8_;
  apdStack_148[1] = (dword *)uVar30;
  apdStack_148[3] = (dword *)puVar37;
  if (plVar32 != (long *)0x0) {
    apdStack_148[2] = (dword *)plVar31;
    apdStack_148[4] = (dword *)plVar34;
    uVar30 = (**(code **)(*plVar32 + 0x178))(plVar32,*(undefined8 *)(*plVar32 + 0x180));
    auVar53._8_8_ = apdStack_148[2];
    auVar53._0_8_ = apdStack_148[4];
    if (lVar39 != 0) {
      uVar16 = (*(code *)**(undefined8 **)(*(long *)(puVar23[3] + 0xc0) + 0x70))(lVar39,uVar30);
      if ((uVar16 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar23[3] + 0xc0) + 0x78))(lVar39,plVar32);
      }
      return (dword *)(ulong)(uVar16 ^ 1);
    }
  }
  apdStack_148[2] = auVar53._8_8_;
  apdStack_148[4] = auVar53._0_8_;
  auVar51 = func_0x00f78af4();
  iVar17 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar39 = *(long *)(auVar51._0_8_ + 0x38);
  if (lVar39 != 0) {
    iVar17 = *(int *)(lVar39 + 0x18);
    if (iVar17 < 1) goto LAB_025dfe48;
    uVar16 = 0;
    iVar15 = -0x80000000;
    uVar14 = 0;
    do {
      if (*(uint *)(lVar39 + 0x18) <= uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)uVar16 * 8 + 0x20);
      if (lVar39 == 0) break;
      iVar1 = *(int *)(lVar39 + 0x10);
      uVar44 = uVar16;
      if (iVar1 <= iVar15) {
        uVar44 = uVar14;
      }
      if (iVar17 - 1U == uVar16) goto LAB_025dfe4c;
      if (iVar1 <= iVar15) {
        iVar1 = iVar15;
      }
      lVar39 = *(long *)(auVar51._0_8_ + 0x38);
      uVar16 = uVar16 + 1;
      iVar15 = iVar1;
      uVar14 = uVar44;
    } while (lVar39 != 0);
  }
  func_0x00f78af4();
LAB_025dfe48:
  uVar44 = 0;
LAB_025dfe4c:
  *auVar51._8_8_ = uVar44;
  return (dword *)(ulong)(0 < iVar17);
}



// ============================================================
// RVA: 0x14b2864 | Atlas.UI.NotificationBoxManager.ShowScreenBase
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
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
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */
/* WARNING: Removing unreachable block (ram,0x014b2b88) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_UI_NotificationBoxManager__ShowScreenBase(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined **ppuVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  uint uVar14;
  dword *pdVar18;
  int iVar15;
  dword *pdVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  long lVar24;
  uint uVar16;
  ulong uVar25;
  undefined8 uVar26;
  dword *pdVar27;
  ulong uVar28;
  long lVar29;
  int iVar17;
  dword *pdVar30;
  int extraout_w1;
  undefined8 uVar31;
  long *plVar33;
  long *extraout_x1;
  long *plVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 *puVar37;
  dword *pdVar38;
  long lVar39;
  long lVar40;
  int *piVar41;
  dword *unaff_x19;
  dword *unaff_x20;
  dword *unaff_x21;
  uint uVar42;
  dword *unaff_x22;
  code *pcVar43;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar44;
  undefined8 unaff_x28;
  undefined **ppuVar45;
  undefined1 *puVar46;
  undefined *puVar47;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  code *apcStack_108 [4];
  long *plStack_e8;
  code *pcStack_d0;
  ulong uStack_c8;
  dword *pdStack_c0;
  ulong uStack_b8;
  code *pcStack_b0;
  dword *pdStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_50;
  dword *pdStack_48;
  long *plVar32;
  
  puVar47 = (undefined *)0x3d28418;
  if ((bRam0000000003eb4aa3 & 1) == 0) {
    func_0x00f78a20(0x3d3e140);
    func_0x00f78a20(0x3d28418);
    bRam0000000003eb4aa3 = 1;
  }
  pdVar19 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.NotificationBoxScreen.TransitionData_TypeInfo*/ uRam0000000003d28418);
  Atlas_UI_Screens_NotificationBoxScreen_TransitionData___ctor(pdVar19,0);
  if (pdVar19 == (dword *)0x0) {
    puVar20 = (undefined *)func_0x00f78af4();
    ppuVar45 = (undefined **)&stack0xffffffffffffffc0;
    uStack_50 = pdVar19;
    pdStack_48 = (dword *)param_1;
    if ((bRam0000000003eb4aa4 & 1) == 0) {
      func_0x00f78a20(0x3d33618);
      func_0x00f78a20(0x3d32f80);
      func_0x00f78a20(0x3d33620);
      func_0x00f78a20(0x3d32f88);
      func_0x00f78a20(0x3d32f90);
      func_0x00f78a20(0x3d33628);
      func_0x00f78a20(0x3d3d580);
      func_0x00f78a20(0x3d3bfd0);
      func_0x00f78a20(0x3d3e138);
      bRam0000000003eb4aa4 = 1;
    }
    pcStack_d0 = (code *)0x0;
    uStack_c8 = 0;
    pdStack_c0 = (dword *)0x0;
    if ((*(long *)(puVar20 + 0x58) != 0) &&
       (lVar24 = *(long *)(*(long *)(puVar20 + 0x58) + 0x158), lVar24 != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(apcStack_108 + 2,lVar24,uRam0000000003d3d580);
      pdStack_a8 = (dword *)apcStack_108[3];
      pcStack_b0 = apcStack_108[2];
      plStack_a0 = plStack_e8;
      iVar17 = 0;
      while( true ) {
        uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&pcStack_b0,uRam0000000003d33620);
        plVar34 = plStack_a0;
        if ((uVar28 & 1) == 0) {
          *(undefined4 *)(&stack0xffffffffffffff20 + (long)iVar17 * 4) = 0x98;
          pdVar19 = (dword *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&pcStack_b0,uRam0000000003d33618);
          return pdVar19;
        }
        if (plStack_a0 == (long *)0x0) break;
        if (plStack_a0[9] == 0) {
          func_0x00f78af4();
          goto code_r0x014b2b9c;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(apcStack_108 + 2,plStack_a0[9],uRam0000000003d3bfd0);
        uStack_c8 = (ulong)apcStack_108[3];
        pcStack_d0 = apcStack_108[2];
        pdStack_c0 = (dword *)plStack_e8;
        do {
          uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&pcStack_d0,uRam0000000003d32f88);
          if ((uVar28 & 1) == 0) {
            uVar16 = 1;
            goto code_r0x014b2a70;
          }
          if (*(long *)(puVar20 + 0x50) == 0) {
            func_0x00f78af4();
            goto code_r0x014b2b9c;
          }
          uVar28 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(puVar20 + 0x50),pdStack_c0,0);
        } while ((uVar28 & 1) != 0);
        uVar16 = 0;
code_r0x014b2a70:
        *(undefined4 *)(&stack0xffffffffffffff20 + (long)iVar17 * 4) = 0x60;
        iVar15 = iVar17 + 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&pcStack_d0,uRam0000000003d32f80);
        if ((iVar15 != 0) && (*(int *)(&stack0xffffffffffffff20 + (long)iVar17 * 4) == 0x60)) {
          iVar15 = iVar17;
        }
        lVar24 = *(long *)(puVar20 + 0x50);
        uVar31 = (**(code **)(*plVar34 + 0x178))(plVar34,*(undefined8 *)(*plVar34 + 0x180));
        if (lVar24 == 0) {
          func_0x00f78af4(uVar31,uVar31);
          goto code_r0x014b2b9c;
        }
        uVar14 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar24,uVar31,0);
        iVar17 = iVar15;
        if ((uVar16 & (uVar14 ^ 1)) != 0) {
          Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                    (puVar20,plVar34,uRam0000000003d3e138);
        }
      }
      func_0x00f78af4();
code_r0x014b2b9c:
                    /* WARNING: Does not return */
      pcVar43 = (code *)SoftwareBreakpoint(1,0x14b2ba0);
      (*pcVar43)();
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      puVar23 = (undefined8 *)___cxa_begin_catch();
      puVar20 = (undefined *)*puVar23;
      ___cxa_end_catch();
      pdVar19 = (dword *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&pcStack_b0,uRam0000000003d33618);
      if (puVar20 == (undefined *)0x0) {
        return pdVar19;
      }
      func_0x00f78ac0(puVar20,0);
    }
    auVar48 = __Unwind_Resume();
    plVar34 = auVar48._8_8_;
    apcStack_108[0] = (code *)&Atlas_UI_NotificationBoxManager__OnModalHidden;
    if (plVar34 != (long *)0x0) {
      lVar24 = *(long *)(auVar48._0_8_ + 0x50);
      puVar21 = (undefined *)
                (**(code **)(*plVar34 + 0x178))(plVar34,*(undefined8 *)(*plVar34 + 0x180));
      if (lVar24 != 0) {
        puVar35 = (undefined *)0x0;
        auVar48._8_8_ = 0x3eb4000;
        auVar48._0_8_ = lVar24;
        ppuVar6 = apcStack_108 + 1;
        do {
          while( true ) {
            puVar22 = auVar48._0_8_;
            ppuVar6[0xfffffffffffffffa] = (undefined *)unaff_x22;
            ppuVar6[0xfffffffffffffffb] = puVar47;
            ppuVar6[0xfffffffffffffffc] = auVar48._8_8_;
            ppuVar6[0xfffffffffffffffd] = puVar20;
            ppuVar6[0xfffffffffffffffe] = (undefined *)ppuVar45;
            ppuVar6[0xffffffffffffffff] = apcStack_108[0];
            unaff_x22 = (dword *)0x3eb4000;
            puVar36 = puVar35;
            if ((bRam0000000003eb4e3b & 1) == 0) {
              func_0x00f78a20(0x3d3d940);
              bRam0000000003eb4e3b = 1;
            }
            uVar28 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(puVar21,0);
            if (((uVar28 & 1) != 0) ||
               (uVar28 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(puVar22,puVar21), (uVar28 & 1) != 0)) {
              return (dword *)0x0;
            }
            puVar47 = (undefined *)0x3;
            if ((int)puVar35 == 0) {
              puVar47 = (undefined *)0x0;
            }
            if (((*(long *)(puVar22 + 0x20) != 0) &&
                (lVar24 = Atlas_Save_SaveManager__get_SaveData(*(long *)(puVar22 + 0x20),0),
                lVar24 != 0)) && (*(long *)(lVar24 + 0x38) != 0)) {
              puVar36 = puVar47;
              /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar24 + 0x38),puVar21,puVar47,uRam0000000003d3d940);
              if (*(long *)(puVar22 + 0x20) != 0) {
                Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(puVar22 + 0x20),0);
                return (dword *)((long)&MACH_HEADER.magic + 1);
              }
            }
            auVar48 = func_0x00f78af4();
            lVar24 = auVar48._8_8_;
            puVar20 = auVar48._0_8_;
            ppuVar6[0xfffffffffffffff4] = (undefined *)0x3eb4000;
            ppuVar6[0xfffffffffffffff5] = puVar47;
            ppuVar6[0xfffffffffffffff6] = puVar21;
            ppuVar6[0xfffffffffffffff7] = puVar22;
            ppuVar6[0xfffffffffffffff8] = (undefined *)(ppuVar6 + 0xfffffffffffffffe);
            ppuVar6[0xfffffffffffffff9] =
                 &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
            ppuVar45 = ppuVar6 + 0xfffffffffffffff8;
            puVar47 = (undefined *)0x3eb4000;
            puVar35 = puVar36;
            if ((bRam0000000003eb4e38 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d57398);
              func_0x00f78a20(0x3d257d8);
              func_0x00f78a20(0x3d69c18);
              bRam0000000003eb4e38 = 1;
              puVar35 = puVar36;
            }
            ppuVar6[0xfffffffffffffff3] = (undefined *)0x0;
            iVar17 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(puVar20,lVar24);
            if (iVar17 == 0) break;
            if (lVar24 == 0) {
code_r0x01522270:
              apcStack_108[0] = (code *)&Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
              auVar51 = func_0x00f78af4();
              puVar21 = auVar51._8_8_;
              auVar48._8_8_ = lVar24;
              auVar48._0_8_ = auVar51._0_8_;
              ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
            }
            else {
              ppuVar6[0xfffffffffffffff3] = *(undefined **)(lVar24 + 0x58);
              iVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(ppuVar6 + 0xfffffffffffffff3,0);
              if (iVar17 == 0) break;
              puVar21 = *(undefined **)(lVar24 + 0x58);
              puVar35 = (undefined *)0x1;
              apcStack_108[0] = (code *)&UNK_0152208c;
              ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
            }
          }
          iVar17 = /*Atlas.Stats.UnlockManager$$HasCompletedAllChallengesForCampaign*/ func_0x01520e74(puVar20,lVar24);
          if (iVar17 == 0) {
code_r0x01522148:
            if (*(long *)(puVar20 + 0x20) == 0) goto code_r0x01522270;
            uVar31 = Atlas_Save_SaveManager__get_SaveData(*(long *)(puVar20 + 0x20),0);
            auVar48._8_8_ = uVar31;
            auVar48._0_8_ = puVar20;
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            pdVar19 = (dword *)/*Atlas.Stats.UnlockManager$$HasCompletedRequiredChallengesForLeague*/ func_0x01520ec4(uVar31);
            if ((int)pdVar19 == 0) {
              return pdVar19;
            }
            puVar47 = (undefined *)0x3d21270;
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x22 = (dword *)0x3d69c18;
            puVar21 = (undefined *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            puVar35 = (undefined *)0x1;
            apcStack_108[0] = (code *)&UNK_015221cc;
            ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
          }
          else {
            if (lVar24 == 0) goto code_r0x01522270;
            ppuVar6[0xfffffffffffffff3] = *(undefined **)(lVar24 + 0x60);
            iVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(ppuVar6 + 0xfffffffffffffff3,0);
            if (iVar17 == 0) goto code_r0x01522148;
            puVar21 = *(undefined **)(lVar24 + 0x60);
            puVar35 = (undefined *)0x1;
            apcStack_108[0] = (code *)&UNK_01522108;
            ppuVar6 = ppuVar6 + 0xfffffffffffffff2;
          }
        } while( true );
      }
    }
    pdVar19 = (dword *)func_0x00f78af4();
    if ((bRam0000000003eb4aa5 & 1) == 0) {
      func_0x00f78a20(0x3d3e118);
      bRam0000000003eb4aa5 = 1;
    }
    if ((bRam0000000003eb8334 & 1) == 0) {
      func_0x00f78a20(0x3d3b328,uRam0000000003d3e118);
      func_0x00f78a20(0x3d1dbe8);
      bRam0000000003eb8334 = 1;
    }
    uVar31 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar31,uRam0000000003d3b328);
    *(undefined8 *)(pdVar19 + 0xe) = uVar31;
    return pdVar19;
  }
  *(long *)(pdVar19 + 4) = param_1;
  puVar23 = puRam0000000003d3e140;
  puVar8 = (ulong *)&stack0xffffffffffffffd0;
  puVar9 = (ulong *)&stack0xffffffffffffffd0;
  pcVar43 = (code *)0x3eb8000;
  puVar37 = puRam0000000003d3e140;
  if ((bRam0000000003eb8328 & 1) == 0) {
    func_0x00f78a20(0x3d72968);
    bRam0000000003eb8328 = 1;
  }
  if (param_1 != 0) {
    puVar37 = *(undefined8 **)(*(long *)(puVar23[3] + 0xc0) + 8);
    (*(code *)*puVar37)(param_1,/*STR('ShowScreen')*/ uRam0000000003d72968);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar24 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8), lVar24 != 0)) {
      puVar37 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      /*Core.Input.InputManager$$SetScreenLayerInputExclusive*/ func_0x0164b04c(lVar24,*(undefined4 *)(param_1 + 0x30),1,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar24 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar24 != 0)) {
        pdVar38 = (dword *)(ulong)*(uint *)(param_1 + 0x30);
        uVar31 = *(undefined8 *)(param_1 + 0x28);
        pcVar43 = *(code **)(lVar24 + 0x10);
        if (pcVar43 != (code *)0x0) {
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          pcStack_d0 = (code *)0x3ebc000;
          uStack_b8 = 0;
          plStack_98 = (long *)&UNK_02f87f9c;
          uStack_c8 = uVar31;
          pdStack_c0 = pdVar19;
          pcStack_b0 = pcVar43;
          pdStack_a8 = pdVar38;
          plStack_a0 = (long *)&stack0xfffffffffffffff0;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar24 = *(long *)(pcVar43 + 0x78);
          if (lVar24 != 0) {
            iVar17 = *(int *)(lVar24 + 0x18);
            if (iVar17 < 1) {
              return (dword *)0x0;
            }
            iVar15 = 1;
            pdVar19 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar24 + 0x18) <= iVar15 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)(iVar15 - 1U) * 0x20 + 0x20);
              if (lVar24 == 0) break;
              uVar28 = /*System.String$$Equals*/ func_0x029caa48(lVar24,uVar31,5,0);
              if ((uVar28 & 1) != 0) {
                return pdVar19;
              }
              pdVar19 = (dword *)(ulong)(iVar15 < iVar17);
              if (iVar17 == iVar15) {
                return pdVar19;
              }
              lVar24 = *(long *)(pcVar43 + 0x78);
              iVar15 = iVar15 + 1;
            } while (lVar24 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar48 = func_0x00f78af4();
        uVar31 = auVar48._8_8_;
        puVar44 = &stack0xffffffffffffffe0;
        pcVar43 = *(code **)(auVar48._0_8_ + 0x10);
        if (pcVar43 != (code *)0x0) {
          pdVar38 = (dword *)0x0;
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar24 = *(long *)(pcVar43 + 0x70);
          if (lVar24 != 0) {
            lVar29 = lVar24;
            if (*(uint *)(lVar24 + 0x18) <= auVar48._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar29 = *(long *)(pcVar43 + 0x70);
            }
            if (lVar29 != 0) {
              lVar24 = *(long *)(lVar24 + 0x10) + (long)(int)auVar48._8_4_ * 0x28;
              uStack_50 = (dword *)CONCAT26(*(undefined2 *)(lVar24 + 0x46),
                                            CONCAT42(*(undefined4 *)(lVar24 + 0x42),1));
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar29,uVar31,&stack0xffffffffffffff90,uRam0000000003d3ddd0);
              pdVar19 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(pcVar43,uVar31);
              return pdVar19;
            }
          }
          auVar48 = func_0x00f78af4();
          pdVar30 = auVar48._8_8_;
          puVar8 = (ulong *)&pdStack_c0;
          plStack_98 = (long *)&Core_UI2_UIManager__GetCurrentScreenID;
          puVar44 = (undefined1 *)&plStack_a0;
          uStack_b8 = lVar24;
          pcStack_b0 = pcVar43;
          pdStack_a8 = (dword *)uVar31;
          plStack_a0 = (long *)&stack0xffffffffffffffe0;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar24 = *(long *)(auVar48._0_8_ + 0x70);
          if (lVar24 == 0) {
            puVar47 = &Core_UI2_UIScreen__ForceExit;
            unaff_x19 = (dword *)func_0x00f78af4();
            pdVar18 = (dword *)0x0;
            unaff_x21 = (dword *)0x3ebc000;
            goto code_r0x02f882d8;
          }
          if (*(uint *)(lVar24 + 0x18) <= auVar48._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)auVar48._8_4_ * 0x28 + 0x28);
          if (lVar24 == 0) {
            pdVar19 = (dword *)0x0;
          }
          else {
            pdVar19 = *(dword **)(lVar24 + 0x40);
          }
          return pdVar19;
        }
        auVar48 = func_0x00f78af4();
        pdVar30 = auVar48._8_8_;
        pdVar18 = *(dword **)(auVar48._0_8_ + 0x10);
        if (pdVar18 != (dword *)0x0) {
          pdVar38 = (dword *)0x0;
          puVar7 = &stack0xffffffffffffffe0;
          pcVar43 = Atlas_UI_AtlasUIManager__ClearLayer;
          goto code_r0x02f877a8;
        }
        auVar48 = func_0x00f78af4();
        lVar24 = *(long *)(auVar48._0_8_ + 0x10);
        auVar51._8_8_ = auVar48._8_8_;
        auVar51._0_8_ = lVar24;
        if (lVar24 != 0) {
          pcVar43 = Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar30 = pdVar38;
          while( true ) {
            pdVar18 = auVar51._0_8_;
            puVar7 = (undefined1 *)((long)puVar9 + -0x30);
            *(dword **)((long)puVar9 + -0x30) = unaff_x22;
            *(dword **)((long)puVar9 + -0x28) = unaff_x21;
            *(dword **)((long)puVar9 + -0x20) = unaff_x20;
            *(dword **)((long)puVar9 + -0x18) = unaff_x19;
            *(ulong **)((long)puVar9 + -0x10) = puVar8;
            *(code **)((long)puVar9 + -8) = pcVar43;
            puVar44 = (undefined1 *)((long)puVar9 + -0x10);
            pcVar43 = (code *)&UNK_02f883d8;
            pdVar38 = pdVar30;
            unaff_x19 = pdVar19;
            unaff_x20 = pdVar30;
            unaff_x21 = auVar51._8_8_;
            unaff_x22 = pdVar18;
code_r0x02f877a8:
            puVar8 = (ulong *)(puVar7 + -0x60);
            *(dword **)(puVar7 + -0x30) = unaff_x22;
            *(dword **)(puVar7 + -0x28) = unaff_x21;
            *(dword **)(puVar7 + -0x20) = unaff_x20;
            *(dword **)(puVar7 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x10) = puVar44;
            *(code **)(puVar7 + -8) = pcVar43;
            puVar44 = puVar7 + -0x10;
            pdVar27 = pdVar18;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar27 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar16 = (uint)pdVar30;
            if (((int)uVar16 < 0) || ((int)*(long *)(pdVar18 + 0x14) <= (int)uVar16)) {
              return pdVar27;
            }
            lVar24 = *(long *)(pdVar18 + 0x1c);
            if (lVar24 == 0) break;
            if (*(uint *)(lVar24 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar24 = *(long *)(lVar24 + 0x10) + ((ulong)pdVar30 & 0xffffffff) * 0x28;
            unaff_x22 = *(dword **)(lVar24 + 0x20);
            unaff_x19 = *(dword **)(lVar24 + 0x28);
            *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar24 + 0x42);
            *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar24 + 0x46);
            if (unaff_x19 == (dword *)0x0) {
              lVar24 = *(long *)(pdVar18 + 0x1c);
              if (lVar24 != 0) {
                *(dword **)(puVar7 + -0x58) = unaff_x22;
                *(undefined8 *)(puVar7 + -0x50) = 0;
                *(undefined8 *)(puVar7 + -0x48) = 0;
                *(undefined8 *)(puVar7 + -0x40) = 0;
                *(undefined2 *)(puVar7 + -0x38) = 0;
                *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
                *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
                pdVar19 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar24,pdVar30,puVar7 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar19;
              }
              break;
            }
            puVar47 = &UNK_02f87848;
            unaff_x21 = unaff_x19;
code_r0x02f882d8:
            puVar8[0xfffffffffffffffc] = (ulong)pdVar18;
            puVar8[0xfffffffffffffffd] = (ulong)pdVar30;
            puVar8[0xfffffffffffffffe] = (ulong)puVar44;
            puVar8[0xffffffffffffffff] = (ulong)puVar47;
            (**(code **)(*(long *)unaff_x19 + 0x218))
                      (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x220));
            if (*(long *)(unaff_x19 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(unaff_x19 + 10),0);
              unaff_x19[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(unaff_x19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar19 = (dword *)(**(code **)(*(long *)unaff_x19 + 0x228))
                                           (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x230));
              return pdVar19;
            }
            func_0x00f78af4();
            puVar9 = puVar8 + 0xfffffffffffffff8;
            puVar8[0xfffffffffffffff8] = (ulong)pdVar18;
            puVar8[0xfffffffffffffff9] = (ulong)unaff_x19;
            puVar8[0xfffffffffffffffa] = (ulong)(puVar8 + 0xfffffffffffffffe);
            puVar8[0xfffffffffffffffb] = (ulong)&Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar8 = puVar8 + 0xfffffffffffffffa;
            if (extraout_x1 != (long *)0x0) {
              lVar24 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar31 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar31,lVar24);
              pdVar19 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar19;
            }
            pcVar43 = (code *)&Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar51 = func_0x00f78af4();
            pdVar30 = pdVar38;
            unaff_x20 = pdVar18;
          }
          lVar24 = func_0x00f78af4();
          *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
          *(dword **)(puVar7 + -0x90) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x88) = 0;
          *(dword **)(puVar7 + -0x80) = pdVar18;
          *(dword **)(puVar7 + -0x78) = pdVar30;
          *(undefined1 **)(puVar7 + -0x70) = puVar44;
          *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
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
          if (0 < *(int *)(lVar24 + 0x50)) {
            iVar17 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar24,iVar17);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar24,iVar17);
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(lVar24 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar24);
          *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x80);
          *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x78);
          *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
          *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar19 = (dword *)(*pcRam0000000003ec05a0)(uVar31);
          return pdVar19;
        }
        auVar48 = func_0x00f78af4();
        pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar24 = *(long *)(auVar48._0_8_ + 0x10);
        if (lVar24 == 0) {
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          auVar48 = func_0x00f78af4();
          puVar44 = &stack0xffffffffffffffa0;
          lVar24 = *(long *)(auVar48._0_8_ + 0x10);
          auVar52._8_8_ = auVar48._8_8_;
          auVar52._0_8_ = lVar24;
          if (lVar24 != 0) {
            pdVar19 = (dword *)0x0;
            puVar10 = &uStack_50;
            pcVar43 = Atlas_UI_AtlasUIManager__GetLayerState;
            goto code_r0x02f884dc;
          }
          auVar48 = func_0x00f78af4();
          puVar46 = &stack0xffffffffffffff90;
          lVar24 = *(long *)(auVar48._0_8_ + 0x10);
          auVar53._8_8_ = auVar48._8_8_;
          auVar53._0_8_ = lVar24;
          if (lVar24 == 0) {
            auVar48 = func_0x00f78af4();
            lVar24 = *(long *)(auVar48._0_8_ + 0x10);
            auVar54._8_8_ = auVar48._8_8_;
            auVar54._0_8_ = lVar24;
            if (lVar24 == 0) {
              pdVar19 = (dword *)func_0x00f78af4();
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
              }
              uVar31 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar31,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar19 + 0xc) = uVar31;
              return pdVar19;
            }
            puVar12 = &stack0xffffffffffffff90;
            pcVar43 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            goto code_r0x02f88674;
          }
          puVar11 = &stack0xffffffffffffffa0;
          pcVar43 = Atlas_UI_AtlasUIManager__EnableInput;
          pdVar19 = pdVar38;
          pdVar38 = unaff_x21;
        }
        else {
          pdVar19 = (dword *)0x0;
          puVar10 = (undefined8 *)&stack0xffffffffffffff90;
          pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
          unaff_x21 = (dword *)0x3ebc000;
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_50 = (dword *)&stack0xffffffffffffffc0;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar16 = auVar48._8_4_;
          if (((int)uVar16 < 0) || (*(int *)(lVar24 + 0x50) <= (int)uVar16)) {
            return (dword *)0x0;
          }
          lVar24 = *(long *)(lVar24 + 0x70);
          if (lVar24 != 0) {
            if (*(uint *)(lVar24 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar29 = *(long *)(lVar24 + 0x10) + ((ulong)auVar48._8_8_ & 0xffffffff) * 0x28;
            lVar24 = *(long *)(lVar29 + 0x28);
            cVar2 = *(char *)(lVar29 + 0x40);
            iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar29 + 0x30),0);
            if (iVar17 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar24 != 0) && (*(int *)(lVar24 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          pcVar43 = (code *)&Core_UI2_UIManager__GetLayerState;
          auVar52 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar48._8_8_;
code_r0x02f884dc:
          puVar11 = (undefined1 *)((long)puVar10 + -0x30);
          *(dword **)((long)puVar10 + -0x30) = unaff_x22;
          *(dword **)((long)puVar10 + -0x28) = unaff_x21;
          *(dword **)((long)puVar10 + -0x20) = unaff_x20;
          *(dword **)((long)puVar10 + -0x18) = unaff_x19;
          *(undefined8 **)((long)puVar10 + -0x10) = &uStack_50;
          *(code **)((long)puVar10 + -8) = pcVar43;
          puVar44 = (undefined1 *)((long)puVar10 + -0x10);
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar24 = *(long *)(auVar52._0_8_ + 0x70);
          if (lVar24 != 0) {
            if (*(uint *)(lVar24 + 0x18) <= auVar52._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)auVar52._8_4_ * 0x28 + 0x28);
            if (lVar24 == 0) {
              pdVar19 = &MACH_HEADER.cputype;
            }
            else {
              pdVar19 = (dword *)(ulong)*(uint *)(lVar24 + 0x4c);
            }
            return pdVar19;
          }
          pcVar43 = (code *)&Core_UI2_UIManager__EnableInput;
          auVar53 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar52._8_8_;
          pdVar38 = (dword *)0x3ebc000;
        }
        pdVar30 = auVar53._8_8_;
        unaff_x21 = auVar53._0_8_;
        puVar12 = puVar11 + -0x40;
        *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
        *(dword **)(puVar11 + -0x30) = unaff_x22;
        *(dword **)(puVar11 + -0x28) = pdVar38;
        *(dword **)(puVar11 + -0x20) = unaff_x20;
        *(dword **)(puVar11 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar11 + -0x10) = puVar44;
        *(code **)(puVar11 + -8) = pcVar43;
        puVar46 = puVar11 + -0x10;
        unaff_x22 = (dword *)0x3ebc000;
        pdVar38 = pdVar19;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(unaff_x21 + 0x1a) != 0) {
          pdVar38 = (dword *)(ulong)((uint)pdVar19 ^ 1);
          pdVar18 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x1a),pdVar30,pdVar38,0);
          lVar24 = *(long *)(unaff_x21 + 0x1c);
          unaff_x22 = (dword *)0x0;
          if (lVar24 != 0) {
            uVar16 = auVar53._8_4_;
            if (*(uint *)(lVar24 + 0x18) <= uVar16) {
              pdVar18 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28) == 0) ||
               (unaff_x22 = *(dword **)(unaff_x21 + 0xc), unaff_x22 == (dword *)0x0)) {
              return pdVar18;
            }
            lVar24 = *(long *)(unaff_x21 + 0x1c);
            unaff_x21 = (dword *)0x0;
            if (lVar24 != 0) {
              if (*(uint *)(lVar24 + 0x18) <= uVar16) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar34 = *(long **)(*(long *)(lVar24 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28);
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
              *(dword **)(puVar11 + -0x68) = unaff_x22;
              lVar24 = *(long *)(unaff_x22 + 0x1a);
              if (lVar24 == 0) {
                puVar44 = puVar11 + -0x68;
                lVar29 = 1;
              }
              else {
                lVar29 = *(long *)(lVar24 + 0x18);
                if (lVar29 == 0) {
                  return unaff_x22;
                }
                puVar44 = (undefined1 *)(lVar24 + 0x20);
              }
              lVar24 = 0;
              do {
                lVar39 = *(long *)(puVar44 + lVar24 * 8);
                pcVar43 = *(code **)(lVar39 + 0x10);
                plVar32 = *(long **)(lVar39 + 0x20);
                lVar39 = *(long *)(lVar39 + 0x28);
                if (*(short *)(lVar39 + 0x48) == -1) {
                  func_0x00f78ad8(lVar39);
                }
                iVar17 = func_0x00f78a4c(lVar39);
                bVar13 = *(char *)(lVar39 + 0x4a) == '\x03';
                if (iVar17 == 0) {
                  if (bVar13) {
                    if (plVar32 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar38 = (dword *)(*pcVar43)(plVar34,pdVar30,pdVar19,lVar39);
                    }
                    else {
                      if (((*(short *)(lVar39 + 0x48) == -1) ||
                          ((*(byte *)(*plVar32 + 0x115) & 1) != 0)) ||
                         (*(long *)(unaff_x22 + 6) == 0)) goto code_r0x01e71aac;
                      iVar17 = func_0x00f78a44(lVar39);
                      iVar15 = func_0x00f78ec0(lVar39);
                      if (iVar17 == 0) {
                        uVar3 = *(ushort *)(lVar39 + 0x48);
                        if (iVar15 == 0) {
                          lVar39 = *plVar32 + (ulong)uVar3 * 0x10;
                          pdVar38 = (dword *)(**(code **)(lVar39 + 0x138))
                                                       (plVar32,plVar34,pdVar30,pdVar19,
                                                        *(undefined8 *)(lVar39 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar39 = func_0x00f78a48(lVar39);
                        lVar40 = *plVar32;
                        uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                        if (uVar28 != 0) {
                          piVar41 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar41 + -2) == lVar39) {
                              puVar23 = (undefined8 *)
                                        (lVar40 + (long)(int)(*piVar41 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar41 = piVar41 + 4;
                            uVar28 = uVar28 - 1;
                          } while (uVar28 != 0);
                        }
                        puVar23 = (undefined8 *)func_0x00fac1f0(plVar32,lVar39,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar43 = (code *)*puVar23;
                        puVar23 = (undefined8 *)puVar23[1];
                      }
                      else {
                        if (iVar15 == 0) {
                          uVar31 = *(undefined8 *)
                                    (*plVar32 + (ulong)*(ushort *)(lVar39 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar40 = *plVar32;
                          uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                          if (uVar28 != 0) {
                            piVar41 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar41 + -2) == *(long *)(lVar39 + 0x18)) {
                                lVar40 = lVar40 + (long)(int)(*piVar41 +
                                                             (uint)*(ushort *)(lVar39 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar41 = piVar41 + 4;
                              uVar28 = uVar28 - 1;
                            } while (uVar28 != 0);
                          }
                          lVar40 = func_0x00fac1f0(plVar32);
code_r0x01e71d4c:
                          uVar31 = *(undefined8 *)(lVar40 + 8);
                        }
                        puVar23 = (undefined8 *)func_0x00f78acc(uVar31,lVar39);
                        pcVar43 = (code *)*puVar23;
                      }
                      pdVar38 = (dword *)(*pcVar43)(plVar32,plVar34,pdVar30,pdVar19,puVar23);
                    }
                  }
                  else {
                    if ((*(short *)(lVar39 + 0x48) == -1) || (*(long *)(unaff_x22 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar17 = func_0x00f78a44(lVar39);
                    iVar15 = func_0x00f78ec0(lVar39);
                    if (iVar17 == 0) {
                      uVar3 = *(ushort *)(lVar39 + 0x48);
                      if (iVar15 == 0) {
                        lVar39 = *plVar34 + (ulong)uVar3 * 0x10;
                        pdVar38 = (dword *)(**(code **)(lVar39 + 0x138))
                                                     (plVar34,pdVar30,pdVar19,
                                                      *(undefined8 *)(lVar39 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar39 = func_0x00f78a48(lVar39);
                      lVar40 = *plVar34;
                      uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                      if (uVar28 != 0) {
                        piVar41 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar41 + -2) == lVar39) {
                            puVar23 = (undefined8 *)
                                      (lVar40 + (long)(int)(*piVar41 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar41 = piVar41 + 4;
                          uVar28 = uVar28 - 1;
                        } while (uVar28 != 0);
                      }
                      puVar23 = (undefined8 *)func_0x00fac1f0(plVar34,lVar39,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar43 = (code *)*puVar23;
                      puVar23 = (undefined8 *)puVar23[1];
                    }
                    else {
                      if (iVar15 == 0) {
                        uVar31 = *(undefined8 *)
                                  (*plVar34 + (ulong)*(ushort *)(lVar39 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar40 = *plVar34;
                        uVar28 = (ulong)*(ushort *)(lVar40 + 0x12a);
                        if (uVar28 != 0) {
                          piVar41 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar41 + -2) == *(long *)(lVar39 + 0x18)) {
                              lVar40 = lVar40 + (long)(int)(*piVar41 +
                                                           (uint)*(ushort *)(lVar39 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar41 = piVar41 + 4;
                            uVar28 = uVar28 - 1;
                          } while (uVar28 != 0);
                        }
                        lVar40 = func_0x00fac1f0(plVar34);
code_r0x01e71cd8:
                        uVar31 = *(undefined8 *)(lVar40 + 8);
                      }
                      puVar23 = (undefined8 *)func_0x00f78acc(uVar31,lVar39);
                      pcVar43 = (code *)*puVar23;
                    }
                    pdVar38 = (dword *)(*pcVar43)(plVar34,pdVar30,pdVar19,puVar23);
                  }
                }
                else {
                  if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar38 = (dword *)(*pcVar43)(plVar32,plVar34,pdVar30,pdVar19,lVar39);
                }
code_r0x01e71bd0:
                lVar24 = lVar24 + 1;
                if (lVar24 == lVar29) {
                  return pdVar38;
                }
              } while( true );
            }
          }
        }
        pcVar43 = (code *)&Core_UI2_UIManager__SetScreenVisible;
        auVar54 = func_0x00f78af4();
        unaff_x19 = pdVar19;
        unaff_x20 = pdVar30;
code_r0x02f88674:
        pdVar30 = auVar54._0_8_;
        *(dword **)(puVar12 + -0x30) = unaff_x22;
        *(dword **)(puVar12 + -0x28) = unaff_x21;
        *(dword **)(puVar12 + -0x20) = unaff_x20;
        *(dword **)(puVar12 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar12 + -0x10) = puVar46;
        *(code **)(puVar12 + -8) = pcVar43;
        pdVar19 = pdVar30;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar19 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar24 = *(long *)(pdVar30 + 0x1c);
        if (lVar24 != 0) {
          uVar16 = auVar54._8_4_;
          if (*(uint *)(lVar24 + 0x18) <= uVar16) {
            pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28) == 0) {
            return pdVar19;
          }
          lVar24 = *(long *)(pdVar30 + 0x1c);
          if (lVar24 != 0) {
            if (*(uint *)(lVar24 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar16 * 0x28 + 0x28);
            if ((lVar24 != 0) && (plVar34 = *(long **)(lVar24 + 0x28), plVar34 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar19 = (dword *)(**(code **)(*plVar34 + 0x178))
                                           (plVar34,pdVar38,*(undefined8 *)(*plVar34 + 0x180));
              return pdVar19;
            }
          }
        }
        auVar48 = func_0x00f78af4();
        uVar31 = auVar48._0_8_;
        *(long *)(puVar12 + -0x50) = auVar54._8_8_;
        *(dword **)(puVar12 + -0x48) = pdVar38;
        *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
        *(undefined **)(puVar12 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)(puVar12 + -0x68) = 0;
        *(undefined8 *)(puVar12 + -0x70) = 0;
        *(undefined8 *)(puVar12 + -0x58) = 0;
        *(undefined8 *)(puVar12 + -0x60) = 0;
        pdVar19 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar31,auVar48._8_8_,puVar12 + -0x70);
        if ((int)pdVar19 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar31,*(undefined8 *)(puVar12 + -0x60),*(undefined8 *)(puVar12 + -0x58));
          *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x68);
          *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x70);
          *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x58);
          *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x60);
          pdVar19 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar31,puVar12 + -0x90,1);
        }
        return pdVar19;
      }
    }
  }
  auVar49 = func_0x00f78af4();
  lVar24 = auVar49._8_8_;
  plVar34 = auVar49._0_8_;
  uVar28 = 0x3eb8000;
  uStack_50 = (dword *)param_1;
  pdStack_48 = pdVar19;
  if ((bRam0000000003eb8329 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb8329 = 1;
  }
  if (plVar34[7] != 0) {
    uVar16 = *(uint *)(plVar34[7] + 0x18);
    uVar28 = (ulong)uVar16;
    pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x30))(plVar34);
    if ((int)uVar16 < 1) {
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      lVar29 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x10))
                         (plVar34);
      if ((lVar29 != 0) && (*(long *)(lVar29 + 0x68) != 0)) {
        pdVar19 = (dword *)/*ModalBehaviour$$get_IsShowing*/ func_0x014969fc(*(long *)(lVar29 + 0x68),0);
        if (((ulong)pdVar19 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x50))
                                       (plVar34);
          return pdVar19;
        }
        return pdVar19;
      }
    }
    else {
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      pdVar19 = (dword *)(**(code **)(*plVar34 + 0x188))(plVar34,*(undefined8 *)(*plVar34 + 400));
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      puVar37 = *(undefined8 **)(*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x40);
      pdVar19 = (dword *)(*(code *)*puVar37)(plVar34,&stack0xffffffffffffff9c);
      if ((int)pdVar19 == 0) {
        return pdVar19;
      }
      uVar28 = plVar34[7];
      if (uVar28 != 0) {
        pcVar43 = (code *)0x0;
        uVar25 = uVar28;
        if (*(int *)(uVar28 + 0x18) != 0) {
LAB_025dfa50:
          uVar31 = *(undefined8 *)(*(long *)(uVar28 + 0x10) + 0x20);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(uVar25,0,uRam0000000003d3b350);
          pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar24 + 0x18) + 0xc0) + 0x48))
                                       (plVar34,uVar31);
          return pdVar19;
        }
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar25 = plVar34[7];
        if (uVar25 != 0) goto LAB_025dfa50;
      }
    }
  }
  auVar48 = func_0x00f78af4();
  if (auVar48._0_8_ != 0) {
    uVar16 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar48._8_8_ + 0x18) + 0xc0) + 0x58))
                       ();
    return (dword *)(ulong)(uVar16 ^ 1);
  }
  auVar48 = func_0x00f78af4();
  auVar4 = auVar49;
  if (auVar48._0_8_ != 0) {
    plStack_a0 = (long *)lVar24;
    plStack_98 = plVar34;
    pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(auVar48._8_8_ + 0x18) + 0xc0) + 0x30))();
    if ((int)pdVar19 == 0) {
      return pdVar19;
    }
    lVar24 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar48._8_8_ + 0x18) + 0xc0) + 0x10))
                       (auVar48._0_8_);
    auVar5._8_8_ = plStack_a0;
    auVar5._0_8_ = plStack_98;
    auVar4._8_8_ = plStack_a0;
    auVar4._0_8_ = plStack_98;
    auVar49 = auVar48;
    if ((lVar24 != 0) &&
       (plVar34 = *(long **)(lVar24 + 0x68), auVar4 = auVar5, plVar34 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar19 = (dword *)(**(code **)(*plVar34 + 0x1a8))(plVar34,*(undefined8 *)(*plVar34 + 0x1b0));
      return pdVar19;
    }
  }
  plStack_a0 = auVar4._8_8_;
  plStack_98 = auVar4._0_8_;
  auVar50 = func_0x00f78af4();
  plVar32 = auVar50._8_8_;
  plVar34 = auVar50._0_8_;
  pdStack_a8 = (dword *)
               Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
  ;
  uVar31 = 0x3eb8000;
  puVar23 = puVar37;
  pcStack_d0 = pcVar43;
  uStack_c8 = uVar28;
  pcStack_b0 = (code *)&stack0xffffffffffffff70;
  if ((bRam0000000003eb832a & 1) == 0) {
    pdStack_c0 = (dword *)auVar49._8_8_;
    uStack_b8 = auVar49._0_8_;
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    auVar49._8_8_ = pdStack_c0;
    auVar49._0_8_ = uStack_b8;
    bRam0000000003eb832a = 1;
  }
  pdStack_c0 = auVar49._8_8_;
  uStack_b8 = auVar49._0_8_;
  if (plVar32 != (long *)0x0) {
    uVar31 = 0x3d71000;
    uVar26 = (**(code **)(*plVar32 + 0x178))(plVar32,*(undefined8 *)(*plVar32 + 0x180));
    puVar23 = (undefined8 *)0x0;
    uVar26 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar26);
    auVar49._8_8_ = pdStack_c0;
    auVar49._0_8_ = uStack_b8;
    if (plVar34 != (long *)0x0) {
      puVar23 = *(undefined8 **)(*(long *)(puVar37[3] + 0xc0) + 8);
      (*(code *)*puVar23)(plVar34,uVar26);
      auVar49._8_8_ = pdStack_c0;
      auVar49._0_8_ = uStack_b8;
      if (plVar34[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar34[7],plVar32,uRam0000000003d3b330);
        auVar49._8_8_ = pdStack_c0;
        auVar49._0_8_ = uStack_b8;
        puVar23 = (undefined8 *)plVar34[8];
        if ((puVar23 == (undefined8 *)0x0) || ((int)plVar32[2] <= *(int *)(puVar23 + 2))) {
LAB_025dfcb4:
          pdVar19 = (dword *)(*(code *)**(undefined8 **)(*(long *)(puVar37[3] + 0xc0) + 0x30))
                                       (plVar34);
          if (((ulong)pdVar19 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar19 = (dword *)(**(code **)(*plVar34 + 0x1a8))
                                         (plVar34,*(undefined8 *)(*plVar34 + 0x1b0));
            return pdVar19;
          }
          return pdVar19;
        }
        if (plVar34[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar34[7],0,puVar23,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar37[3] + 0xc0) + 0x60))(plVar34);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  pdStack_c0 = auVar49._8_8_;
  uStack_b8 = auVar49._0_8_;
  auVar48 = func_0x00f78af4();
  plVar33 = auVar48._8_8_;
  lVar24 = auVar48._0_8_;
  apcStack_108[1] = (code *)uVar31;
  apcStack_108[3] = (code *)puVar37;
  if (plVar33 != (long *)0x0) {
    apcStack_108[2] = (code *)plVar32;
    plStack_e8 = plVar34;
    uVar31 = (**(code **)(*plVar33 + 0x178))(plVar33,*(undefined8 *)(*plVar33 + 0x180));
    auVar50._8_8_ = apcStack_108[2];
    auVar50._0_8_ = plStack_e8;
    if (lVar24 != 0) {
      uVar16 = (*(code *)**(undefined8 **)(*(long *)(puVar23[3] + 0xc0) + 0x70))(lVar24,uVar31);
      if ((uVar16 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar23[3] + 0xc0) + 0x78))(lVar24,plVar33);
      }
      return (dword *)(ulong)(uVar16 ^ 1);
    }
  }
  apcStack_108[2] = auVar50._8_8_;
  plStack_e8 = auVar50._0_8_;
  auVar48 = func_0x00f78af4();
  iVar17 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar24 = *(long *)(auVar48._0_8_ + 0x38);
  if (lVar24 != 0) {
    iVar17 = *(int *)(lVar24 + 0x18);
    if (iVar17 < 1) goto LAB_025dfe48;
    uVar16 = 0;
    iVar15 = -0x80000000;
    uVar14 = 0;
    do {
      if (*(uint *)(lVar24 + 0x18) <= uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar16 * 8 + 0x20);
      if (lVar24 == 0) break;
      iVar1 = *(int *)(lVar24 + 0x10);
      uVar42 = uVar16;
      if (iVar1 <= iVar15) {
        uVar42 = uVar14;
      }
      if (iVar17 - 1U == uVar16) goto LAB_025dfe4c;
      if (iVar1 <= iVar15) {
        iVar1 = iVar15;
      }
      lVar24 = *(long *)(auVar48._0_8_ + 0x38);
      uVar16 = uVar16 + 1;
      iVar15 = iVar1;
      uVar14 = uVar42;
    } while (lVar24 != 0);
  }
  func_0x00f78af4();
LAB_025dfe48:
  uVar42 = 0;
LAB_025dfe4c:
  *auVar48._8_8_ = uVar42;
  return (dword *)(ulong)(0 < iVar17);
}



// ============================================================
// RVA: 0x14b28f0 | Atlas.UI.NotificationBoxManager.ShowNotificationsIfRequired
// ============================================================

/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */
/* WARNING: Removing unreachable block (ram,0x014b2b88) */

long Atlas_UI_NotificationBoxManager__ShowNotificationsIfRequired(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  int extraout_w1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4aa4 & 1) == 0) {
    func_0x00f78a20(0x3d33618);
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d33620);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d33628);
    func_0x00f78a20(0x3d3d580);
    func_0x00f78a20(0x3d3bfd0);
    func_0x00f78a20(0x3d3e138);
    bRam0000000003eb4aa4 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  aiStack_b0[3] = 0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x158), lVar7 != 0)) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar7,uRam0000000003d3d580);
    iVar6 = 0;
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    plStack_70 = plStack_b8;
    while( true ) {
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d33620);
      plVar10 = plStack_70;
      if ((uVar8 & 1) == 0) {
        aiStack_b0[iVar6] = 0x98;
        aiStack_b0[3] = aiStack_b0[3] + 1;
        lVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d33618);
        return lVar7;
      }
      if (plStack_70 == (long *)0x0) break;
      if (plStack_70[9] == 0) {
        func_0x00f78af4();
        goto code_r0x014b2b9c;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,plStack_70[9],uRam0000000003d3bfd0);
      uStack_98 = uStack_c0;
      uStack_a0 = uStack_c8;
      plStack_90 = plStack_b8;
      do {
        uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d32f88);
        if ((uVar8 & 1) == 0) {
          uVar14 = 1;
          goto LAB_014b2a70;
        }
        if (*(long *)(param_1 + 0x50) == 0) {
          func_0x00f78af4();
          goto code_r0x014b2b9c;
        }
        uVar8 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x50),plStack_90,0);
      } while ((uVar8 & 1) != 0);
      uVar14 = 0;
LAB_014b2a70:
      aiStack_b0[iVar6] = 0x60;
      iVar2 = aiStack_b0[3];
      iVar6 = aiStack_b0[3] + 1;
      aiStack_b0[3] = iVar6;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d32f80);
      if ((iVar6 != 0) && (aiStack_b0[iVar2] == 0x60)) {
        iVar6 = iVar2;
        aiStack_b0[3] = iVar2;
      }
      lVar7 = *(long *)(param_1 + 0x50);
      uVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      if (lVar7 == 0) {
        func_0x00f78af4(uVar9,uVar9);
        goto code_r0x014b2b9c;
      }
      uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar7,uVar9,0);
      if ((uVar14 & (uVar5 ^ 1)) != 0) {
        Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                  (param_1,plVar10,uRam0000000003d3e138);
      }
    }
    func_0x00f78af4();
code_r0x014b2b9c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x14b2ba0);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    param_1 = *plVar10;
    ___cxa_end_catch();
    lVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d33618);
    if (param_1 == 0) {
      return lVar7;
    }
    func_0x00f78ac0(param_1,0);
  }
  auVar16 = __Unwind_Resume();
  plVar10 = auVar16._8_8_;
  puStack_d8 = &Atlas_UI_NotificationBoxManager__OnModalHidden;
  if (plVar10 != (long *)0x0) {
    lVar7 = *(long *)(auVar16._0_8_ + 0x50);
    uVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    if (lVar7 != 0) {
      uVar12 = 0;
      auVar16._8_8_ = 0x3eb4000;
      auVar16._0_8_ = lVar7;
      puVar4 = auStack_d0;
code_r0x01521f20:
      while( true ) {
        lVar7 = auVar16._0_8_;
        *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
        *(long *)(puVar4 + -0x20) = auVar16._8_8_;
        *(long *)(puVar4 + -0x18) = param_1;
        *(undefined1 **)(puVar4 + -0x10) = puVar15;
        *(undefined **)(puVar4 + -8) = puStack_d8;
        unaff_x22 = 0x3eb4000;
        uVar13 = uVar12;
        if ((bRam0000000003eb4e3b & 1) == 0) {
          func_0x00f78a20(0x3d3d940);
          bRam0000000003eb4e3b = 1;
        }
        uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar9,0);
        if (((uVar8 & 1) != 0) || (uVar8 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar7,uVar9), (uVar8 & 1) != 0)) {
          return 0;
        }
        uVar1 = 3;
        if ((int)uVar12 == 0) {
          uVar1 = 0;
        }
        if (((*(long *)(lVar7 + 0x20) != 0) &&
            (lVar11 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x20),0), lVar11 != 0))
           && (*(long *)(lVar11 + 0x38) != 0)) {
          uVar13 = uVar1;
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar11 + 0x38),uVar9,uVar1,uRam0000000003d3d940);
          if (*(long *)(lVar7 + 0x20) != 0) {
            Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar7 + 0x20),0);
            return 1;
          }
        }
        auVar16 = func_0x00f78af4();
        lVar11 = auVar16._8_8_;
        param_1 = auVar16._0_8_;
        *(undefined8 *)(puVar4 + -0x60) = 0x3eb4000;
        *(undefined8 *)(puVar4 + -0x58) = uVar1;
        *(undefined8 *)(puVar4 + -0x50) = uVar9;
        *(long *)(puVar4 + -0x48) = lVar7;
        *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x38) =
             &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
        puVar15 = puVar4 + -0x40;
        unaff_x21 = 0x3eb4000;
        uVar12 = uVar13;
        if ((bRam0000000003eb4e38 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d57398);
          func_0x00f78a20(0x3d257d8);
          func_0x00f78a20(0x3d69c18);
          bRam0000000003eb4e38 = 1;
          uVar12 = uVar13;
        }
        *(undefined8 *)(puVar4 + -0x68) = 0;
        iVar6 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(param_1,lVar11);
        if (iVar6 == 0) break;
        if (lVar11 == 0) goto code_r0x01522270;
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(lVar11 + 0x58);
        iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar4 + -0x68,0);
        if (iVar6 == 0) break;
        uVar9 = *(undefined8 *)(lVar11 + 0x58);
        uVar12 = 1;
        puStack_d8 = &UNK_0152208c;
        puVar4 = puVar4 + -0x70;
      }
      iVar6 = /*Atlas.Stats.UnlockManager$$HasCompletedAllChallengesForCampaign*/ func_0x01520e74(param_1,lVar11);
      if (iVar6 != 0) {
        if (lVar11 == 0) goto code_r0x01522270;
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(lVar11 + 0x60);
        iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar4 + -0x68,0);
        if (iVar6 != 0) {
          uVar9 = *(undefined8 *)(lVar11 + 0x60);
          uVar12 = 1;
          puStack_d8 = &UNK_01522108;
          puVar4 = puVar4 + -0x70;
          goto code_r0x01521f20;
        }
      }
      if (*(long *)(param_1 + 0x20) == 0) {
code_r0x01522270:
        puStack_d8 = &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
        auVar17 = func_0x00f78af4();
        uVar9 = auVar17._8_8_;
        auVar16._8_8_ = lVar11;
        auVar16._0_8_ = auVar17._0_8_;
        puVar4 = puVar4 + -0x70;
      }
      else {
        uVar9 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0);
        auVar16._8_8_ = uVar9;
        auVar16._0_8_ = param_1;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = /*Atlas.Stats.UnlockManager$$HasCompletedRequiredChallengesForLeague*/ func_0x01520ec4(uVar9);
        if ((int)lVar7 == 0) {
          return lVar7;
        }
        unaff_x21 = 0x3d21270;
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = 0x3d69c18;
        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        uVar12 = 1;
        puStack_d8 = &UNK_015221cc;
        puVar4 = puVar4 + -0x70;
      }
      goto code_r0x01521f20;
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4aa5 & 1) == 0) {
    func_0x00f78a20(0x3d3e118);
    bRam0000000003eb4aa5 = 1;
  }
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328,uRam0000000003d3e118);
    func_0x00f78a20(0x3d1dbe8);
    bRam0000000003eb8334 = 1;
  }
  uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3b328);
  *(undefined8 *)(lVar7 + 0x38) = uVar9;
  return lVar7;
}



// ============================================================
// RVA: 0x14b2c08 | Atlas.UI.NotificationBoxManager.OnModalHidden
// ============================================================

/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */

long Atlas_UI_NotificationBoxManager__OnModalHidden(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar8;
  
  auVar11._8_8_ = unaff_x20;
  auVar11._0_8_ = unaff_x19;
  if (param_2 != (long *)0x0) {
    lVar10 = *(long *)(param_1 + 0x50);
    uVar4 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    auVar12._8_8_ = uVar4;
    auVar12._0_8_ = lVar10;
    if (lVar10 != 0) {
      uVar4 = 0;
      puVar2 = (undefined1 *)register0x00000008;
      do {
        while( true ) {
          uVar7 = auVar12._8_8_;
          lVar10 = auVar12._0_8_;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
          *(long *)(puVar2 + -0x20) = auVar11._8_8_;
          *(long *)(puVar2 + -0x18) = auVar11._0_8_;
          *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
          *(undefined **)(puVar2 + -8) = unaff_x30;
          unaff_x22 = 0x3eb4000;
          uVar9 = uVar4;
          if ((bRam0000000003eb4e3b & 1) == 0) {
            func_0x00f78a20(0x3d3d940);
            bRam0000000003eb4e3b = 1;
          }
          uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar7,0);
          if (((uVar5 & 1) != 0) || (uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar10,uVar7), (uVar5 & 1) != 0)) {
            return 0;
          }
          uVar1 = 3;
          if ((int)uVar4 == 0) {
            uVar1 = 0;
          }
          if (((*(long *)(lVar10 + 0x20) != 0) &&
              (lVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar10 + 0x20),0), lVar6 != 0)
              ) && (*(long *)(lVar6 + 0x38) != 0)) {
            uVar9 = uVar1;
            /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar6 + 0x38),uVar7,uVar1,uRam0000000003d3d940);
            if (*(long *)(lVar10 + 0x20) != 0) {
              Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar10 + 0x20),0);
              return 1;
            }
          }
          auVar11 = func_0x00f78af4();
          lVar8 = auVar11._8_8_;
          lVar6 = auVar11._0_8_;
          *(undefined8 *)(puVar2 + -0x60) = 0x3eb4000;
          *(undefined8 *)(puVar2 + -0x58) = uVar1;
          *(undefined8 *)(puVar2 + -0x50) = uVar7;
          *(long *)(puVar2 + -0x48) = lVar10;
          *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x38) =
               &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
          unaff_x29 = puVar2 + -0x40;
          unaff_x21 = 0x3eb4000;
          uVar4 = uVar9;
          if ((bRam0000000003eb4e38 & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d57398);
            func_0x00f78a20(0x3d257d8);
            func_0x00f78a20(0x3d69c18);
            bRam0000000003eb4e38 = 1;
            uVar4 = uVar9;
          }
          *(undefined8 *)(puVar2 + -0x68) = 0;
          iVar3 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar6,lVar8);
          if (iVar3 == 0) break;
          if (lVar8 == 0) {
code_r0x01522270:
            unaff_x30 = &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
            auVar12 = func_0x00f78af4();
            puVar2 = puVar2 + -0x70;
          }
          else {
            *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(lVar8 + 0x58);
            iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar2 + -0x68,0);
            if (iVar3 == 0) break;
            auVar12._8_8_ = *(undefined8 *)(lVar8 + 0x58);
            auVar12._0_8_ = lVar6;
            uVar4 = 1;
            unaff_x30 = &UNK_0152208c;
            puVar2 = puVar2 + -0x70;
          }
        }
        iVar3 = /*Atlas.Stats.UnlockManager$$HasCompletedAllChallengesForCampaign*/ func_0x01520e74(lVar6,lVar8);
        if (iVar3 == 0) {
code_r0x01522148:
          if (*(long *)(lVar6 + 0x20) == 0) goto code_r0x01522270;
          uVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0);
          auVar11._8_8_ = uVar4;
          auVar11._0_8_ = lVar6;
          if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar10 = /*Atlas.Stats.UnlockManager$$HasCompletedRequiredChallengesForLeague*/ func_0x01520ec4(uVar4);
          if ((int)lVar10 == 0) {
            return lVar10;
          }
          unaff_x21 = 0x3d21270;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x22 = 0x3d69c18;
          uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          auVar12._8_8_ = uVar4;
          auVar12._0_8_ = lVar6;
          uVar4 = 1;
          unaff_x30 = &UNK_015221cc;
          puVar2 = puVar2 + -0x70;
        }
        else {
          if (lVar8 == 0) goto code_r0x01522270;
          *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(lVar8 + 0x60);
          iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar2 + -0x68,0);
          if (iVar3 == 0) goto code_r0x01522148;
          auVar12._8_8_ = *(undefined8 *)(lVar8 + 0x60);
          auVar12._0_8_ = lVar6;
          uVar4 = 1;
          unaff_x30 = &UNK_01522108;
          puVar2 = puVar2 + -0x70;
        }
      } while( true );
    }
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4aa5 & 1) == 0) {
    func_0x00f78a20(0x3d3e118);
    bRam0000000003eb4aa5 = 1;
  }
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328,uRam0000000003d3e118);
    func_0x00f78a20(0x3d1dbe8);
    bRam0000000003eb8334 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3b328);
  *(undefined8 *)(lVar10 + 0x38) = uVar4;
  return lVar10;
}



// ============================================================
// RVA: 0x14b2c54 | Atlas.UI.NotificationBoxManager..ctor
// ============================================================

undefined1  [16] Atlas_UI_NotificationBoxManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4aa5 & 1) == 0) {
    func_0x00f78a20(0x3d3e118);
    bRam0000000003eb4aa5 = 1;
  }
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328,uRam0000000003d3e118);
    func_0x00f78a20(0x3d1dbe8);
    bRam0000000003eb8334 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b328);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



