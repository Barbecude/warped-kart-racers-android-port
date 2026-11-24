// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueLeaderboardScreen

// ============================================================
// RVA: 0x15ee4ec | Atlas.UI.Screens.LeagueLeaderboardScreen.OnBeforeEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15eee38 | Atlas.UI.Screens.LeagueLeaderboardScreen.SetupLeagueRank
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15eef4c | Atlas.UI.Screens.LeagueLeaderboardScreen.SetupTimeRemaining
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15ef2b8 | Atlas.UI.Screens.LeagueLeaderboardScreen.SetupRewards
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15ef99c | Atlas.UI.Screens.LeagueLeaderboardScreen.SetRowData
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__SetRowData(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar14;
  undefined8 unaff_x26;
  undefined8 uVar15;
  undefined8 unaff_x27;
  undefined8 uVar16;
  undefined8 unaff_x28;
  undefined8 uVar17;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int aiStack_160 [4];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5420 & 1) == 0) {
    func_0x00f78a20(0x3d20658);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3afb8);
    func_0x00f78a20(0x3d410e0);
    func_0x00f78a20(0x3d410e8);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5420 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xe8) != 0)) {
    uStack_a8 = /*Atlas.League.LeagueManager$$GetSavedLeaderboard*/ func_0x015f0c38();
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
    if (lVar6 != 0) {
      uVar13 = 0;
      while (*(long *)(lVar6 + 0x90) != 0) {
        uVar12 = (uint)uVar13;
        if (*(int *)(*(long *)(lVar6 + 0x90) + 0x18) <= (int)uVar12) {
          return;
        }
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x90), lVar6 == 0)) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) {
          uVar7 = func_0x00f78b24();
          lVar6 = func_0x00f78ac0(uVar7,0);
          uStack_108 = 0x3d410f0;
          uStack_e8 = 0x3d410e0;
          puStack_c8 = &Atlas_League_LeagueManager__PrepareLeaderboardData;
          uStack_120 = unaff_x28;
          uStack_118 = unaff_x27;
          uStack_110 = unaff_x26;
          uStack_100 = unaff_x24;
          lStack_f8 = unaff_x23;
          uStack_f0 = uVar13;
          lStack_e0 = param_1;
          lStack_d8 = param_2;
          puStack_d0 = &stack0xfffffffffffffff0;
          if ((bRam0000000003eb5436 & 1) == 0) {
            func_0x00f78a20(0x3d2cee0);
            func_0x00f78a20(0x3d1b920);
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d2e2e8);
            func_0x00f78a20(0x3d33c20);
            func_0x00f78a20(0x3d33c28);
            func_0x00f78a20(0x3d33c30);
            func_0x00f78a20(0x3d391f0);
            func_0x00f78a20(0x3d391f8);
            func_0x00f78a20(0x3d22e80);
            func_0x00f78a20(0x3d3af98);
            func_0x00f78a20(0x3d3afa0);
            func_0x00f78a20(0x3d3afa8);
            func_0x00f78a20(0x3d3afb0);
            func_0x00f78a20(0x3d3afb8);
            func_0x00f78a20(0x3d63578);
            func_0x00f78a20(0x3d63580);
            func_0x00f78a20(0x3d27e38);
            bRam0000000003eb5436 = 1;
          }
          uStack_130 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          aiStack_160[2] = 0;
          if (*(long *)(lVar6 + 0x60) == 0) goto code_r0x015f0388;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar6 + 0x60),uRam0000000003d3afa0);
          if (*(long *)(lVar6 + 0x68) == 0) goto code_r0x015f0388;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar6 + 0x68),uRam0000000003d3afa0);
          if (*(long *)(lVar6 + 0x58) == 0) goto code_r0x015f0388;
          /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$GetEnumerator*/ func_0x01e3c660(&uStack_1a0,*(long *)(lVar6 + 0x58),uRam0000000003d2e2e8);
          uStack_148 = uStack_198;
          uStack_150 = uStack_1a0;
          uStack_138 = uStack_188;
          uStack_140 = uStack_190;
          uStack_130 = uStack_180;
          goto code_r0x015efed4;
        }
        lVar11 = (long)(int)uVar12;
        unaff_x23 = *(long *)(lVar6 + lVar11 * 8 + 0x20);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d410e8);
        if ((lVar6 == 0) || (param_2 == 0)) break;
        lVar6 = *(long *)(lVar6 + 0x10);
        if (*(uint *)(param_2 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = *(long *)(*(long *)(param_2 + 0x10) + lVar11 * 8 + 0x20);
        if ((lVar9 == 0) || (lVar6 == 0)) break;
        uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,*(undefined8 *)(lVar9 + 0x10),uRam0000000003d57270);
        if (*(uint *)(param_2 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = *(long *)(*(long *)(param_2 + 0x10) + lVar11 * 8 + 0x20);
        if (lVar6 == 0) break;
        if (*(char *)(lVar6 + 0x18) == '\0') {
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
          if (lVar6 == 0) break;
          uVar15 = *(undefined8 *)(lVar6 + 0x50);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) break;
          uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x10);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
          if (lVar6 == 0) break;
          uVar17 = *(undefined8 *)(lVar6 + 0x88);
          uVar8 = func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
          /*Atlas.UI.CharacterMetagameData$$.ctor*/ func_0x015411dc(uVar8,uVar7,uVar15,uVar16,uVar17,0);
        }
        else {
          if (*(long *)(param_1 + 0x78) == 0) break;
          /*Atlas.League.LeagueManager$$get_Player*/ func_0x015f12ac(&uStack_80);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
          if (lVar6 == 0) break;
          uVar15 = *(undefined8 *)(lVar6 + 0x50);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) break;
          uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x10);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
          if (lVar6 == 0) break;
          uVar17 = *(undefined8 *)(lVar6 + 0x88);
          uVar8 = func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
          uStack_98 = uStack_78;
          uStack_a0 = uStack_80;
          uStack_88 = uStack_68;
          uStack_90 = uStack_70;
          /*Atlas.UI.CharacterMetagameData$$.ctor*/ func_0x015412cc(uVar8,uVar7,&uStack_a0,uVar15,uVar16,uVar17,0);
        }
        if (*(uint *)(param_2 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x24 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar11 * 8 + 0x20);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0xe8) == 0)) break;
        unaff_x26 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4();
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
        if (lVar6 == 0) break;
        unaff_x27 = *(undefined8 *)(lVar6 + 0x88);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
        if (lVar6 == 0) break;
        unaff_x28 = *(undefined8 *)(lVar6 + 0xe8);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d410e8);
        if ((lVar6 == 0) || (unaff_x23 == 0)) break;
        uVar13 = (ulong)(uVar12 + 1);
        uStack_c0 = uStack_a8;
        /*Atlas.UI.League.LeagueLeaderboardEntryBehaviour$$SetData*/ func_0x015edd20(unaff_x23,uVar13,unaff_x24,uVar8,unaff_x26,unaff_x27,unaff_x28,
                        *(undefined1 *)(lVar6 + 0x28));
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
        if (lVar6 == 0) break;
      }
    }
  }
  func_0x00f78af4();
  return;
code_r0x015efed4:
  uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$MoveNext*/ func_0x01fbbed4(&uStack_150,uRam0000000003d33c28);
  uVar7 = uStack_140;
  if ((uVar13 & 1) == 0) goto code_r0x015eff38;
  uVar4 = /*Atlas.League.LeagueModeHelper$$CalculatePoints*/ func_0x01479c04(*(undefined8 *)(lVar6 + 0x18),uStack_138,0);
  lVar9 = *(long *)(lVar6 + 0x60);
  lVar11 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
  *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
  /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
  *(undefined8 *)(lVar11 + 0x10) = uVar7;
  *(undefined4 *)(lVar11 + 0x1c) = uVar4;
  *(undefined1 *)(lVar11 + 0x18) = 0;
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015f03b8;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9,lVar11,uRam0000000003d3af98);
  goto code_r0x015efed4;
code_r0x015eff38:
  aiStack_160[0] = 0x73;
  /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$Dispose*/ func_0x01fbc04c(&uStack_150,uRam0000000003d33c20);
  aiStack_160[2] = 0;
  if (*(long *)(lVar6 + 0x28) != 0) {
    uVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar6 + 0x28),0);
    Atlas_Gameplay_KartLoadout__FromSaveGame(&uStack_1a0,uVar7,0);
    uVar7 = uStack_1a0;
    uVar4 = /*Atlas.League.LeagueModeHelper$$CalculatePoints*/ func_0x01479c04(*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(lVar6 + 0x50),0);
    lVar9 = *(long *)(lVar6 + 0x60);
    lVar11 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
    *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
    /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar7;
    *(undefined4 *)(lVar11 + 0x1c) = uVar4;
    *(undefined1 *)(lVar11 + 0x18) = 1;
    if (lVar9 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9,lVar11,uRam0000000003d3af98);
      lVar11 = *(long *)(lVar6 + 0x60);
      if (((*(ushort *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar10 = *(undefined8 **)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xb8);
      lVar9 = puVar10[1];
      if (lVar9 == 0) {
        if (((*(ushort *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar10 = *(undefined8 **)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xb8);
        }
        uVar15 = *puVar10;
        lVar9 = func_0x00f78aec(/*System.Comparison<LeagueLeaderboardData>_TypeInfo*/ uRam0000000003d1b920);
        /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(lVar9,uVar15,uRam0000000003d63578,uRam0000000003d2cee0);
        *(long *)(*(long *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xb8) + 8) = lVar9;
      }
      if (lVar11 != 0) {
        /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar11,lVar9,uRam0000000003d3afa8);
        iVar5 = /*Atlas.League.LeagueManager$$IsEventPlayable*/ func_0x015f3bf4(lVar6,1);
        if (iVar5 == 0) {
          return;
        }
        if (*(long *)(lVar6 + 0x20) != 0) {
          iVar5 = /*Atlas.League.LeagueModeHelper$$GetDayIndex*/ func_0x0147a5a4(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x38),0);
          if (*(long *)(lVar6 + 0x58) != 0) {
            /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$GetEnumerator*/ func_0x01e3c660(&uStack_1a0,*(long *)(lVar6 + 0x58),uRam0000000003d2e2e8);
            uStack_148 = uStack_198;
            uStack_150 = uStack_1a0;
            uStack_138 = uStack_188;
            uStack_140 = uStack_190;
            uStack_130 = uStack_180;
            while (uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$MoveNext*/ func_0x01fbbed4(&uStack_150,uRam0000000003d33c28), uVar15 = uStack_140,
                  iVar1 = aiStack_160[2], (uVar13 & 1) != 0) {
              uVar4 = /*Atlas.League.LeagueModeHelper$$CalculatePreviousPoints*/ func_0x01479cd4(*(undefined8 *)(lVar6 + 0x18),uStack_138,iVar5 + -1,0);
              lVar9 = *(long *)(lVar6 + 0x68);
              lVar11 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
              *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
              /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
              *(undefined8 *)(lVar11 + 0x10) = uVar15;
              *(undefined4 *)(lVar11 + 0x1c) = uVar4;
              *(undefined1 *)(lVar11 + 0x18) = 0;
              if (lVar9 == 0) {
                func_0x00f78af4();
code_r0x015f03b8:
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x15f03bc);
                (*pcVar2)();
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9,lVar11,uRam0000000003d3af98);
            }
            bVar3 = aiStack_160[2] != -1;
            aiStack_160[2] = aiStack_160[2] + 1;
            aiStack_160[0] = 0x156;
            /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$Dispose*/ func_0x01fbc04c(&uStack_150,uRam0000000003d33c20);
            if ((bVar3) && (aiStack_160[iVar1] == 0x156)) {
              aiStack_160[2] = iVar1;
            }
            uVar4 = /*Atlas.League.LeagueModeHelper$$CalculatePreviousPoints*/ func_0x01479cd4(*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(lVar6 + 0x50),
                                    iVar5 + -1,0);
            lVar9 = *(long *)(lVar6 + 0x68);
            lVar11 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
            *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
            /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
            *(undefined8 *)(lVar11 + 0x10) = uVar7;
            *(undefined4 *)(lVar11 + 0x1c) = uVar4;
            *(undefined1 *)(lVar11 + 0x18) = 1;
            if (lVar9 != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9,lVar11,uRam0000000003d3af98);
              lVar11 = *(long *)(lVar6 + 0x68);
              if (((*(ushort *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar10 = *(undefined8 **)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xb8);
              lVar9 = puVar10[2];
              if (lVar9 == 0) {
                if (((*(ushort *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                  puVar10 = *(undefined8 **)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xb8);
                }
                uVar7 = *puVar10;
                lVar9 = func_0x00f78aec(/*System.Comparison<LeagueLeaderboardData>_TypeInfo*/ uRam0000000003d1b920);
                /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(lVar9,uVar7,uRam0000000003d63580,uRam0000000003d2cee0);
                *(long *)(*(long *)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xb8) + 0x10) = lVar9;
              }
              if (lVar11 != 0) {
                /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar11,lVar9,uRam0000000003d3afa8);
                lVar11 = *(long *)(lVar6 + 0x68);
                if (lVar11 != 0) {
                  uVar13 = 0;
                  while( true ) {
                    if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar13) {
                      return;
                    }
                    if (*(uint *)(lVar11 + 0x18) <= uVar13) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar9 = *(long *)(lVar6 + 0x60);
                    if (lVar9 == 0) break;
                    lVar14 = 0;
                    lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + uVar13 * 8 + 0x20);
                    while( true ) {
                      if ((int)*(uint *)(lVar9 + 0x18) <= (int)(uint)lVar14) break;
                      if (*(uint *)(lVar9 + 0x18) <= (uint)lVar14) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar14 * 8 + 0x20);
                      if ((lVar9 == 0) || (lVar11 == 0)) goto code_r0x015f0388;
                      uVar7 = *(undefined8 *)(lVar9 + 0x10);
                      uVar15 = *(undefined8 *)(lVar11 + 0x10);
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      iVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar7,uVar15,0);
                      if ((iVar5 != 0) &&
                         ((*(char *)(lVar9 + 0x18) != '\0') == (*(char *)(lVar11 + 0x18) != '\0')))
                      {
                        *(int *)(lVar9 + 0x20) = (int)uVar13;
                        break;
                      }
                      lVar9 = *(long *)(lVar6 + 0x60);
                      lVar14 = lVar14 + 1;
                      if (lVar9 == 0) goto code_r0x015f0388;
                    }
                    uVar13 = uVar13 + 1;
                    lVar11 = *(long *)(lVar6 + 0x68);
                    if (lVar11 == 0) break;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x015f0388:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15f044c | Atlas.UI.Screens.LeagueLeaderboardScreen.AnyLeaderboardChanges
// ============================================================

long * Atlas_UI_Screens_LeagueLeaderboardScreen__AnyLeaderboardChanges(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long **pplVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long unaff_x21;
  long lVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long unaff_x25;
  long lVar26;
  uint uVar27;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 **ppuVar28;
  undefined *puVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 *****pppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb542d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3afb0);
    func_0x00f78a20(0x3d3afb8);
    bRam0000000003eb542d = 1;
  }
  if ((((*(long *)(param_1 + 0xa0) == 0) || (*(int *)(*(long *)(param_1 + 0xa0) + 0x18) < 1)) ||
      (lVar18 = *(long *)(param_1 + 0x98), lVar18 == 0)) ||
     (uVar10 = *(uint *)(lVar18 + 0x18), (int)uVar10 < 1)) {
LAB_015f060c:
    plVar21 = (long *)0x0;
  }
  else {
    uVar24 = 0;
    plVar21 = (long *)0x0;
    uVar25 = 0x3d21270;
    do {
      uVar23 = (uint)uVar24;
      if (uVar10 <= uVar23) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar23 * 8 + 0x20) == 0)
      goto LAB_015f060c;
      lVar18 = *(long *)(param_1 + 0xa0);
      lVar19 = 0;
      if (lVar18 == 0) {
LAB_015f062c:
        uVar11 = func_0x00f78af4();
        puStack_58 = &Atlas_UI_Screens_LeagueLeaderboardScreen__HideEqualSigns;
        plStack_80 = plVar21;
        lStack_78 = unaff_x21;
        lStack_70 = lVar19;
        lStack_68 = param_1;
        puStack_60 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb5421 & 1) == 0) {
          func_0x00f78a20(0x3d410e0);
          bRam0000000003eb5421 = 1;
        }
        plVar12 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d410e0);
        if (plVar12 == (long *)0x0) goto code_r0x015f06dc;
        lVar18 = 0;
        goto code_r0x015f0680;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar23) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      unaff_x25 = (long)(int)uVar23;
      if (*(long *)(*(long *)(lVar18 + 0x10) + unaff_x25 * 8 + 0x20) == 0) goto LAB_015f060c;
      lVar19 = *(long *)(param_1 + 0x98);
      if (lVar19 == 0) goto LAB_015f062c;
      if (*(uint *)(lVar19 + 0x18) <= uVar23) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(*(long *)(lVar19 + 0x10) + unaff_x25 * 8 + 0x20);
      if ((lVar18 == 0) || (unaff_x21 = *(long *)(param_1 + 0xa0), unaff_x21 == 0))
      goto LAB_015f062c;
      lVar19 = *(long *)(lVar18 + 0x10);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar23) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(*(long *)(unaff_x21 + 0x10) + unaff_x25 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_015f062c;
      unaff_x21 = *(long *)(lVar18 + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar9 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(lVar19,unaff_x21,0);
      if (iVar9 != 0) {
        lVar19 = *(long *)(param_1 + 0x98);
        if (lVar19 != 0) {
          if (*(uint *)(lVar19 + 0x18) <= uVar23) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar19 + 0x10) + unaff_x25 * 8 + 0x20);
          if (lVar18 != 0) {
            plVar21 = (long *)(ulong)((uint)(*(char *)(lVar18 + 0x18) == '\0') | (uint)plVar21);
            goto LAB_015f05f0;
          }
        }
        goto LAB_015f062c;
      }
LAB_015f05f0:
      lVar18 = *(long *)(param_1 + 0x98);
      lVar19 = 0;
      if (lVar18 == 0) goto LAB_015f062c;
      uVar24 = (ulong)(uVar23 + 1);
      uVar10 = *(uint *)(lVar18 + 0x18);
    } while ((int)(uVar23 + 1) < (int)uVar10);
  }
  return plVar21;
code_r0x015f0680:
  if (plVar12[0x12] == 0) {
code_r0x015f06dc:
    plVar21 = (long *)func_0x00f78af4();
    return plVar21;
  }
  if (*(int *)(plVar12[0x12] + 0x18) <= (int)(uint)lVar18) {
    return plVar12;
  }
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d410e0);
  if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x90), lVar19 == 0)) goto code_r0x015f06dc;
  if (*(uint *)(lVar19 + 0x18) <= (uint)lVar18) {
    uVar13 = func_0x00f78b24();
    plVar14 = (long *)func_0x00f78ac0(uVar13,0);
    auVar31._8_8_ = uVar11;
    auVar31._0_8_ = 0x3d410e0;
    puStack_88 = &Atlas_UI_Screens_LeagueLeaderboardScreen__SetPreviousPositions;
    lVar19 = 0x3eb5000;
    plVar12 = plVar14;
    ppuStack_90 = &puStack_60;
    if ((bRam0000000003eb542c & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d3afb0);
      func_0x00f78a20(0x3d3afb8);
      func_0x00f78a20(0x3d410f0);
      plVar12 = (long *)func_0x00f78a20(0x3d68ad0);
      bRam0000000003eb542c = 1;
    }
    lVar16 = plVar14[0x13];
    lVar20 = lVar18;
    plVar22 = plVar21;
    if (lVar16 == 0) goto code_r0x015f0904;
    uVar25 = 0;
    plVar22 = (long *)0x0;
    uVar24 = 0;
    lVar26 = 0x3d21270;
    goto code_r0x015f0788;
  }
  if (*(long *)(lVar19 + lVar18 * 8 + 0x20) == 0) goto code_r0x015f06dc;
  /*Atlas.UI.League.LeagueLeaderboardEntryBehaviour$$HideAllRankChangeIndicators*/ func_0x015ee450();
  plVar12 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d410e0);
  lVar18 = lVar18 + 1;
  if (plVar12 == (long *)0x0) goto code_r0x015f06dc;
  goto code_r0x015f0680;
code_r0x015f0f1c:
  uVar11 = func_0x00f78b24();
  goto code_r0x015f0f2c;
code_r0x015f0788:
  uVar23 = (uint)uVar24;
  uVar10 = (uint)plVar22;
  unaff_x25 = lVar26;
  if ((long)uVar25 < (long)*(int *)(lVar16 + 0x18)) {
    lVar19 = plVar14[0x14];
    unaff_x25 = 0x3d21270;
    if (lVar19 == 0) goto code_r0x015f0904;
    unaff_x26 = 0;
    while (uVar27 = (uint)unaff_x26, (int)uVar27 < *(int *)(lVar19 + 0x18)) {
      lVar20 = plVar14[0x13];
      unaff_x25 = 0x3d21270;
      if (lVar20 == 0) goto code_r0x015f0904;
      if (*(uint *)(lVar20 + 0x18) <= uVar25) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = plVar14[0x14];
        unaff_x25 = lVar26;
        if (lVar19 == 0) goto code_r0x015f0904;
      }
      unaff_x27 = *(long *)(*(long *)(lVar20 + 0x10) + uVar25 * 8 + 0x20);
      if (*(uint *)(lVar19 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      unaff_x25 = lVar26;
      if ((unaff_x27 == 0) ||
         (unaff_x28 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar27 * 8 + 0x20),
         unaff_x28 == 0)) goto code_r0x015f0904;
      lVar19 = *(long *)(unaff_x27 + 0x10);
      lVar20 = *(long *)(unaff_x28 + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar12 = (long *)/*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar19,lVar20,0);
      if ((int)plVar12 != 0) {
        cVar3 = *(char *)(unaff_x28 + 0x18);
        if ((*(char *)(unaff_x27 + 0x18) != '\0') == (cVar3 != '\0')) {
          *(uint *)(unaff_x27 + 0x20) = uVar27;
          if (*(char *)(unaff_x27 + 0x18) != '\0') {
            uVar1 = (uint)uVar25;
            if (cVar3 == '\0') {
              uVar1 = uVar23;
            }
            uVar24 = (ulong)uVar1;
            if (cVar3 == '\0') {
              uVar27 = uVar10;
            }
            plVar22 = (long *)(ulong)uVar27;
          }
          break;
        }
      }
      unaff_x26 = (ulong)(uVar27 + 1);
      lVar19 = plVar14[0x14];
      if (lVar19 == 0) goto code_r0x015f0904;
    }
    uVar25 = uVar25 + 1;
    lVar16 = plVar14[0x13];
    unaff_x25 = lVar26;
    if (lVar16 == 0) goto code_r0x015f0904;
    goto code_r0x015f0788;
  }
  if (((int)uVar10 <= (int)uVar23) || ((int)(uVar10 - uVar23) < 5)) {
    return plVar12;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar14,uRam0000000003d410f0);
  if ((lVar16 != 0) &&
     (auVar30._8_8_ = /*STR('Achievement_76')*/ uRam0000000003d68ad0, auVar30._0_8_ = *(long *)(lVar16 + 0x68),
     *(long *)(lVar16 + 0x68) != 0)) {
    pplVar6 = &plStack_80;
    ppuVar28 = ppuStack_90;
    puVar29 = puStack_88;
    do {
      auVar4 = auVar30;
      uVar11 = auVar4._8_8_;
      lVar19 = auVar4._0_8_;
      *(undefined8 *)((long)pplVar6 + -0x40) = unaff_d9;
      *(undefined8 *)((long)pplVar6 + -0x38) = unaff_d8;
      *(long **)((long)pplVar6 + -0x30) = plVar21;
      *(long *)((long)pplVar6 + -0x28) = lVar18;
      *(undefined1 (*) [16])((long)pplVar6 + -0x20) = auVar31;
      *(undefined1 ***)((long)pplVar6 + -0x10) = ppuVar28;
      *(undefined **)((long)pplVar6 + -8) = puVar29;
      ppuVar28 = (undefined1 **)((long)pplVar6 + -0x10);
      unaff_d8 = 0x42c80000;
      lVar18 = 0x3eb4000;
      if ((bRam0000000003eb4717 & 1) == 0) {
        func_0x00f78a20(0x3d2fe08);
        func_0x00f78a20(0x3d2fe18);
        bRam0000000003eb4717 = 1;
      }
      *(undefined4 *)((long)pplVar6 + -0x44) = 0;
      if (*(long *)(lVar19 + 0x60) != 0) {
        plVar12 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar19 + 0x60),uVar11,
                                          (undefined1 *)((long)pplVar6 + -0x44),uRam0000000003d2fe08
                                         );
        bVar7 = true;
        bVar8 = false;
        if ((int)plVar12 != 0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(*(float *)((long)pplVar6 + -0x44))) {
            bVar7 = *(float *)((long)pplVar6 + -0x44) < 100.0;
            bVar8 = false;
          }
        }
        if (bVar7 == bVar8) {
          return plVar12;
        }
        if (*(long *)(lVar19 + 0x60) != 0) {
          lVar18 = 0x3d2fe18;
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar19 + 0x60),uVar11,uRam0000000003d2fe18);
          if (*(long *)(lVar19 + 0x58) != 0) {
            plVar21 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar19 + 0x58),uVar11,
                                              uRam0000000003d2fe18);
            return plVar21;
          }
        }
      }
      puVar29 = &Atlas_Stats_AchievementManager__UnlockAchievement;
      auVar30 = func_0x00f78af4();
      pplVar6 = (long **)((long)pplVar6 + -0x50);
      auVar31 = auVar4;
    } while( true );
  }
code_r0x015f0904:
  lVar18 = func_0x00f78af4();
  puStack_e8 = &Atlas_UI_Screens_LeagueLeaderboardScreen__PrepareAnimation;
  lStack_140 = unaff_x28;
  lStack_138 = unaff_x27;
  uStack_130 = unaff_x26;
  lStack_128 = unaff_x25;
  uStack_120 = uVar25;
  uStack_118 = uVar24;
  plStack_110 = plVar22;
  lStack_108 = lVar20;
  lStack_100 = lVar19;
  plStack_f8 = plVar14;
  pppuStack_f0 = &ppuStack_90;
  if ((bRam0000000003eb541a & 1) == 0) {
    func_0x00f78a20(0x3d53598);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3c650);
    func_0x00f78a20(0x3d3c648);
    func_0x00f78a20(0x3d3afb0);
    func_0x00f78a20(0x3d3afb8);
    func_0x00f78a20(0x3d1df70);
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb541a = 1;
  }
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar18,uRam0000000003d410e0);
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x90), lVar19 != 0)) {
    uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<UITweenLeaf>_TypeInfo*/ uRam0000000003d1df70);
    plVar21 = (long *)/*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar11,*(undefined4 *)(lVar19 + 0x18),uRam0000000003d3c648);
    *(undefined8 *)(lVar18 + 0x80) = uVar11;
    lVar19 = *(long *)(lVar18 + 0x78);
    if (lVar19 != 0) {
      uVar25 = 0;
      while (*(long *)(lVar19 + 0x60) != 0) {
        uVar10 = (uint)uVar25;
        if (*(int *)(*(long *)(lVar19 + 0x60) + 0x18) <= (int)uVar10) {
          return plVar21;
        }
        lVar19 = *(long *)(lVar18 + 0x98);
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar20 = *(long *)(lVar18 + 0xa0), lVar20 == 0)) break;
        uVar11 = *(undefined8 *)(lVar19 + 0x10);
        if (*(uint *)(lVar20 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = (long)(int)uVar10;
        lVar19 = *(long *)(*(long *)(lVar20 + 0x10) + lVar16 * 8 + 0x20);
        if (lVar19 == 0) break;
        lVar19 = *(long *)(lVar19 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar21 = (long *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar11,lVar19,0);
        if (((ulong)plVar21 & 1) == 0) {
          lVar19 = *(long *)(lVar18 + 0x98);
          if (lVar19 == 0) break;
          if (*(uint *)(lVar19 + 0x18) <= uVar10) {
            plVar21 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar20 = *(long *)(*(long *)(lVar19 + 0x10) + lVar16 * 8 + 0x20);
          if ((lVar20 == 0) || (lVar19 = *(long *)(lVar18 + 0xa0), lVar19 == 0)) break;
          cVar3 = *(char *)(lVar20 + 0x18);
          if (*(uint *)(lVar19 + 0x18) <= uVar10) {
            plVar21 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar20 = *(long *)(*(long *)(lVar19 + 0x10) + lVar16 * 8 + 0x20);
          if (lVar20 == 0) break;
          if ((cVar3 != '\0') != (*(char *)(lVar20 + 0x18) != '\0')) goto code_r0x015f0b28;
        }
        else {
code_r0x015f0b28:
          lVar26 = *(long *)(lVar18 + 0x80);
          lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar18,uRam0000000003d410e0);
          if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x90), lVar20 == 0)) break;
          if (*(uint *)(lVar20 + 0x18) <= uVar10) {
            uVar11 = func_0x00f78b24();
            lVar20 = func_0x00f78ac0(uVar11,0);
            uStack_170 = 0x3d410e0;
            puStack_148 = &Atlas_UI_Screens_LeagueLeaderboardScreen__Animate;
            uVar11 = 0x3eb5000;
            lStack_168 = lVar19;
            lStack_160 = lVar26;
            lStack_158 = lVar18;
            ppppuStack_150 = &pppuStack_f0;
            if ((bRam0000000003eb5428 & 1) == 0) {
              func_0x00f78a20(0x3d410f0);
              bRam0000000003eb5428 = 1;
            }
            lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar20,uRam0000000003d410f0);
            if (lVar18 != 0) {
              lVar18 = *(long *)(lVar18 + 0x80);
              uVar13 = /*Atlas.UI.Screens.LeagueLeaderboardScreen$$PlaySlideOut*/ func_0x015f15a0(0x3f000000,lVar20);
              uVar11 = 0;
              if (lVar18 != 0) {
                plVar21 = (long *)Core_Application_CoroutineRunner__StartCoroutine(lVar18,uVar13,0);
                *(long **)(lVar20 + 0x88) = plVar21;
                return plVar21;
              }
            }
            lVar18 = func_0x00f78af4();
            uStack_1c0 = 0x3d3c650;
            uStack_1b8 = 0x3d53598;
            uStack_1b0 = 0x3d21270;
            uStack_1a0 = 0x3d410e0;
            uStack_198 = 0x3d410f0;
            puStack_178 = &Atlas_League_LeagueManager__GetSavedLeaderboard;
            lStack_1d0 = unaff_x28;
            lStack_1c8 = lVar16;
            uStack_1a8 = uVar25;
            uStack_190 = uVar11;
            lStack_188 = lVar20;
            pppppuStack_180 = &ppppuStack_150;
            if ((bRam0000000003eb5442 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d1f198);
              func_0x00f78a20(0x3d22e80);
              func_0x00f78a20(0x3d3af50);
              func_0x00f78a20(0x3d3af58);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb5442 = 1;
            }
            uStack_1d8 = 0;
            plVar21 = (long *)func_0x00f78a34(/*Atlas.League.LeagueLeaderboardData[]_TypeInfo*/ uRam0000000003d1f198,0xc);
            if (*(long *)(lVar18 + 0xb0) == 0) goto code_r0x015f0f24;
            uVar10 = /*Atlas.League.LeaguePlayerSave$$GetPlayerStandingForUI*/ func_0x0147f4f4(*(long *)(lVar18 + 0xb0),0);
            if (0xb < uVar10) {
              return (long *)0x0;
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
            lVar19 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
            *(undefined4 *)(lVar19 + 0x20) = 0xffffffff;
            /*System.Object$$.ctor*/ func_0x0294d018(lVar19,0);
            *(undefined8 *)(lVar19 + 0x10) = uVar11;
            *(undefined4 *)(lVar19 + 0x1c) = 0;
            *(undefined1 *)(lVar19 + 0x18) = 1;
            if (plVar21 == (long *)0x0) goto code_r0x015f0f24;
            lVar20 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar21 + 0x40));
            if (lVar20 == 0) goto code_r0x015f0f28;
            if (*(uint *)(plVar21 + 3) <= uVar10) goto code_r0x015f0f1c;
            plVar21[(ulong)uVar10 + 4] = lVar19;
            lVar19 = /*Atlas.League.LeagueModeSave$$GetCharacterPositions*/ func_0x0147ad78(0xb,*(undefined8 *)(lVar18 + 0x28),0);
            if (lVar19 == 0) goto code_r0x015f0f24;
            if (*(int *)(lVar19 + 0x18) != 0xb) {
              return (long *)0x0;
            }
            if ((*(long *)(lVar18 + 0xb0) == 0) ||
               (lVar18 = /*Atlas.League.LeaguePlayerSave$$GetLeaderboardForUI*/ func_0x0147f430(*(long *)(lVar18 + 0xb0),0), lVar18 == 0))
            goto code_r0x015f0f24;
            uVar10 = *(uint *)(lVar18 + 0x18);
            if ((int)uVar10 < 1) goto code_r0x015f0ec0;
            uVar23 = 0;
            goto code_r0x015f0ddc;
          }
          lVar19 = *(long *)(lVar20 + lVar16 * 8 + 0x20);
          if ((lVar19 == 0) || (uVar11 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar19,uRam0000000003d53598), lVar26 == 0))
          break;
          plVar21 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar26,uVar11,uRam0000000003d3c650);
        }
        uVar25 = (ulong)(uVar10 + 1);
        lVar19 = *(long *)(lVar18 + 0x78);
        if (lVar19 == 0) break;
      }
    }
  }
  plVar21 = (long *)func_0x00f78af4();
  return plVar21;
  while( true ) {
    lVar20 = (long)(int)uVar23;
    uVar10 = *(uint *)(lVar18 + lVar20 * 4 + 0x20);
    if (0xb < uVar10) {
      return (long *)0x0;
    }
    if ((int)*(uint *)(lVar19 + 0x18) < (int)uVar23) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar23) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar16 = *(long *)(*(long *)(lVar19 + 0x10) + lVar20 * 8 + 0x20);
    if (lVar16 == 0) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar23) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar16 = *(long *)(*(long *)(lVar19 + 0x10) + lVar20 * 8 + 0x20);
      if (lVar16 == 0) goto code_r0x015f0f24;
    }
    uStack_1d8 = *(undefined8 *)(lVar16 + 0x10);
    iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_1d8,0);
    uVar11 = uStack_1d8;
    if (iVar9 == 0) {
      return (long *)0x0;
    }
    lVar20 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
    *(undefined4 *)(lVar20 + 0x20) = 0xffffffff;
    /*System.Object$$.ctor*/ func_0x0294d018(lVar20,0);
    *(undefined8 *)(lVar20 + 0x10) = uVar11;
    *(undefined4 *)(lVar20 + 0x1c) = 0;
    *(undefined1 *)(lVar20 + 0x18) = 0;
    lVar16 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar21 + 0x40));
    if (lVar16 == 0) goto code_r0x015f0f28;
    if (*(uint *)(plVar21 + 3) <= uVar10) goto code_r0x015f0f1c;
    plVar21[(ulong)uVar10 + 4] = lVar20;
    uVar23 = uVar23 + 1;
    uVar10 = *(uint *)(lVar18 + 0x18);
    if ((int)uVar10 <= (int)uVar23) break;
code_r0x015f0ddc:
    if (uVar10 <= uVar23) goto code_r0x015f0f1c;
  }
code_r0x015f0ec0:
  iVar9 = (int)plVar21[3];
  if (0 < iVar9) {
    iVar17 = 0;
    do {
      if (iVar9 == iVar17) goto code_r0x015f0f1c;
      if (plVar21[(long)iVar17 + 4] == 0) {
        return (long *)0x0;
      }
      iVar17 = iVar17 + 1;
    } while (iVar9 != iVar17);
  }
  return plVar21;
code_r0x015f0f24:
  func_0x00f78af4();
code_r0x015f0f28:
  uVar11 = func_0x00f78b14();
code_r0x015f0f2c:
  uVar11 = func_0x00f78ac0(uVar11,0);
  if ((bRam0000000003eb5419 & 1) == 0) {
    func_0x00f78a20(0x3d27e98);
    func_0x00f78a20(0x3d3e0a0);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5419 = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d410f0);
  if (lVar18 == 0) {
code_r0x015f0fe0:
    uVar11 = func_0x00f78af4();
    if ((bRam0000000003eb541b & 1) == 0) {
      func_0x00f78a20(0x3d410e0);
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb541b = 1;
    }
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d410f0);
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar18 + 0x78),0,0,0,0);
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d410e0);
      if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x78), lVar18 != 0)) {
        if (pcRam0000000003ec2fc0 == (code *)0x0) {
          pcRam0000000003ec2fc0 =
               (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar21 = (long *)(*pcRam0000000003ec2fc0)(0x3f800000,lVar18);
        return plVar21;
      }
    }
    func_0x00f78af4();
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar12 = *(long **)(lVar18 + 0xf8);
  plVar21 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData_TypeInfo*/ uRam0000000003d27e98);
  /*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData$$.ctor*/ func_0x0155cca4(plVar21,0);
  puVar5 = puRam0000000003d3e0a0;
  if (plVar12 == (long *)0x0) goto code_r0x015f0fe0;
  puVar15 = puRam0000000003d3e0a0;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar21 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar21 + 0x178))(plVar21,*(undefined8 *)(*plVar21 + 0x180));
    puVar15 = (undefined8 *)0x0;
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
    if (plVar12 != (long *)0x0) {
      puVar15 = *(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 8);
      (*(code *)*puVar15)(plVar12,uVar11);
      if (plVar12[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar12[7],plVar21,uRam0000000003d3b330);
        puVar15 = (undefined8 *)plVar12[8];
        if ((puVar15 == (undefined8 *)0x0) || ((int)plVar21[2] <= *(int *)(puVar15 + 2))) {
code_r0x025dfcb4:
          plVar21 = (long *)(*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 0x30))
                                      (plVar12);
          if (((ulong)plVar21 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar21 = (long *)(**(code **)(*plVar12 + 0x1a8))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
            return plVar21;
          }
          return plVar21;
        }
        if (plVar12[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar12[7],0,puVar15,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 0x60))(plVar12);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar31 = func_0x00f78af4();
  plVar21 = auVar31._8_8_;
  lVar18 = auVar31._0_8_;
  if ((plVar21 != (long *)0x0) &&
     (uVar11 = (**(code **)(*plVar21 + 0x178))(plVar21,*(undefined8 *)(*plVar21 + 0x180)),
     lVar18 != 0)) {
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x70))(lVar18,uVar11);
    if ((uVar10 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x78))(lVar18,plVar21);
    }
    return (long *)(ulong)(uVar10 ^ 1);
  }
  auVar31 = func_0x00f78af4();
  iVar9 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar18 = *(long *)(auVar31._0_8_ + 0x38);
  if (lVar18 != 0) {
    iVar9 = *(int *)(lVar18 + 0x18);
    if (iVar9 < 1) goto code_r0x025dfe48;
    uVar10 = 0;
    iVar17 = -0x80000000;
    uVar23 = 0;
    do {
      if (*(uint *)(lVar18 + 0x18) <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
      if (lVar18 == 0) break;
      iVar2 = *(int *)(lVar18 + 0x10);
      uVar27 = uVar10;
      if (iVar2 <= iVar17) {
        uVar27 = uVar23;
      }
      if (iVar9 - 1U == uVar10) goto code_r0x025dfe4c;
      if (iVar2 <= iVar17) {
        iVar2 = iVar17;
      }
      lVar18 = *(long *)(auVar31._0_8_ + 0x38);
      uVar10 = uVar10 + 1;
      iVar17 = iVar2;
      uVar23 = uVar27;
    } while (lVar18 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar27 = 0;
code_r0x025dfe4c:
  *auVar31._8_8_ = uVar27;
  return (long *)(ulong)(0 < iVar9);
}



// ============================================================
// RVA: 0x15f0630 | Atlas.UI.Screens.LeagueLeaderboardScreen.HideEqualSigns
// ============================================================

long * Atlas_UI_Screens_LeagueLeaderboardScreen__HideEqualSigns(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong unaff_x22;
  ulong uVar21;
  uint uVar22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  uint uVar23;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 *puVar24;
  undefined *puVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 ****ppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long lStack_50;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5421 & 1) == 0) {
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb5421 = 1;
  }
  plVar10 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
  if (plVar10 != (long *)0x0) {
    lVar19 = 0;
    while (plVar10[0x12] != 0) {
      if (*(int *)(plVar10[0x12] + 0x18) <= (int)(uint)lVar19) {
        return plVar10;
      }
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x90), lVar11 == 0)) break;
      if (*(uint *)(lVar11 + 0x18) <= (uint)lVar19) {
        uVar12 = func_0x00f78b24();
        plVar13 = (long *)func_0x00f78ac0(uVar12,0);
        lStack_50 = 0x3d410e0;
        puStack_38 = &Atlas_UI_Screens_LeagueLeaderboardScreen__SetPreviousPositions;
        lVar11 = 0x3eb5000;
        plVar10 = plVar13;
        puStack_40 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb542c & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d3afb0);
          func_0x00f78a20(0x3d3afb8);
          func_0x00f78a20(0x3d410f0);
          plVar10 = (long *)func_0x00f78a20(0x3d68ad0);
          bRam0000000003eb542c = 1;
        }
        lVar16 = plVar13[0x13];
        lVar20 = lVar19;
        uVar21 = unaff_x22;
        if (lVar16 == 0) goto code_r0x015f0904;
        unaff_x24 = 0;
        uVar21 = 0;
        unaff_x23 = 0;
        uVar12 = 0x3d21270;
        goto code_r0x015f0788;
      }
      if (*(long *)(lVar11 + lVar19 * 8 + 0x20) == 0) break;
      /*Atlas.UI.League.LeagueLeaderboardEntryBehaviour$$HideAllRankChangeIndicators*/ func_0x015ee450();
      plVar10 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
      lVar19 = lVar19 + 1;
      if (plVar10 == (long *)0x0) break;
    }
  }
  plVar10 = (long *)func_0x00f78af4();
  return plVar10;
code_r0x015f0f1c:
  uVar12 = func_0x00f78b24();
  goto code_r0x015f0f2c;
code_r0x015f0788:
  uVar22 = (uint)unaff_x23;
  uVar8 = (uint)uVar21;
  unaff_x25 = uVar12;
  if ((long)unaff_x24 < (long)*(int *)(lVar16 + 0x18)) {
    lVar11 = plVar13[0x14];
    unaff_x25 = 0x3d21270;
    if (lVar11 == 0) goto code_r0x015f0904;
    unaff_x26 = 0;
    while (uVar23 = (uint)unaff_x26, (int)uVar23 < *(int *)(lVar11 + 0x18)) {
      lVar20 = plVar13[0x13];
      unaff_x25 = 0x3d21270;
      if (lVar20 == 0) goto code_r0x015f0904;
      if (*(uint *)(lVar20 + 0x18) <= unaff_x24) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar11 = plVar13[0x14];
        unaff_x25 = uVar12;
        if (lVar11 == 0) goto code_r0x015f0904;
      }
      unaff_x27 = *(long *)(*(long *)(lVar20 + 0x10) + unaff_x24 * 8 + 0x20);
      if (*(uint *)(lVar11 + 0x18) <= uVar23) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      unaff_x25 = uVar12;
      if ((unaff_x27 == 0) ||
         (unaff_x28 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar23 * 8 + 0x20),
         unaff_x28 == 0)) goto code_r0x015f0904;
      lVar11 = *(long *)(unaff_x27 + 0x10);
      lVar20 = *(long *)(unaff_x28 + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar10 = (long *)/*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar11,lVar20,0);
      if ((int)plVar10 != 0) {
        cVar3 = *(char *)(unaff_x28 + 0x18);
        if ((*(char *)(unaff_x27 + 0x18) != '\0') == (cVar3 != '\0')) {
          *(uint *)(unaff_x27 + 0x20) = uVar23;
          if (*(char *)(unaff_x27 + 0x18) != '\0') {
            uVar1 = (uint)unaff_x24;
            if (cVar3 == '\0') {
              uVar1 = uVar22;
            }
            unaff_x23 = (ulong)uVar1;
            if (cVar3 == '\0') {
              uVar23 = uVar8;
            }
            uVar21 = (ulong)uVar23;
          }
          break;
        }
      }
      unaff_x26 = (ulong)(uVar23 + 1);
      lVar11 = plVar13[0x14];
      if (lVar11 == 0) goto code_r0x015f0904;
    }
    unaff_x24 = unaff_x24 + 1;
    lVar16 = plVar13[0x13];
    unaff_x25 = uVar12;
    if (lVar16 == 0) goto code_r0x015f0904;
    goto code_r0x015f0788;
  }
  if (((int)uVar8 <= (int)uVar22) || ((int)(uVar8 - uVar22) < 5)) {
    return plVar10;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar13,uRam0000000003d410f0);
  if ((lVar16 != 0) &&
     (auVar26._8_8_ = /*STR('Achievement_76')*/ uRam0000000003d68ad0, auVar26._0_8_ = *(long *)(lVar16 + 0x68),
     *(long *)(lVar16 + 0x68) != 0)) {
    puVar5 = &stack0xffffffffffffffd0;
    puVar24 = puStack_40;
    puVar25 = puStack_38;
    do {
      uVar12 = auVar26._8_8_;
      lVar11 = auVar26._0_8_;
      *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
      *(undefined8 *)(puVar5 + -0x38) = unaff_d8;
      *(ulong *)(puVar5 + -0x30) = unaff_x22;
      *(long *)(puVar5 + -0x28) = lVar19;
      *(long *)(puVar5 + -0x20) = lStack_50;
      *(undefined8 *)(puVar5 + -0x18) = param_1;
      *(undefined1 **)(puVar5 + -0x10) = puVar24;
      *(undefined **)(puVar5 + -8) = puVar25;
      puVar24 = puVar5 + -0x10;
      unaff_d8 = 0x42c80000;
      lVar19 = 0x3eb4000;
      if ((bRam0000000003eb4717 & 1) == 0) {
        func_0x00f78a20(0x3d2fe08);
        func_0x00f78a20(0x3d2fe18);
        bRam0000000003eb4717 = 1;
      }
      *(undefined4 *)(puVar5 + -0x44) = 0;
      if (*(long *)(lVar11 + 0x60) != 0) {
        plVar10 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar11 + 0x60),uVar12,puVar5 + -0x44,
                                          uRam0000000003d2fe08);
        bVar6 = true;
        bVar7 = false;
        if ((int)plVar10 != 0) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(*(float *)(puVar5 + -0x44))) {
            bVar6 = *(float *)(puVar5 + -0x44) < 100.0;
            bVar7 = false;
          }
        }
        if (bVar6 == bVar7) {
          return plVar10;
        }
        if (*(long *)(lVar11 + 0x60) != 0) {
          lVar19 = 0x3d2fe18;
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar11 + 0x60),uVar12,uRam0000000003d2fe18);
          if (*(long *)(lVar11 + 0x58) != 0) {
            plVar10 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar11 + 0x58),uVar12,
                                              uRam0000000003d2fe18);
            return plVar10;
          }
        }
      }
      puVar25 = &Atlas_Stats_AchievementManager__UnlockAchievement;
      auVar26 = func_0x00f78af4();
      puVar5 = puVar5 + -0x50;
      param_1 = uVar12;
      lStack_50 = lVar11;
    } while( true );
  }
code_r0x015f0904:
  lVar19 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_Screens_LeagueLeaderboardScreen__PrepareAnimation;
  lStack_f0 = unaff_x28;
  lStack_e8 = unaff_x27;
  uStack_e0 = unaff_x26;
  uStack_d8 = unaff_x25;
  uStack_d0 = unaff_x24;
  uStack_c8 = unaff_x23;
  uStack_c0 = uVar21;
  lStack_b8 = lVar20;
  lStack_b0 = lVar11;
  plStack_a8 = plVar13;
  ppuStack_a0 = &puStack_40;
  if ((bRam0000000003eb541a & 1) == 0) {
    func_0x00f78a20(0x3d53598);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3c650);
    func_0x00f78a20(0x3d3c648);
    func_0x00f78a20(0x3d3afb0);
    func_0x00f78a20(0x3d3afb8);
    func_0x00f78a20(0x3d1df70);
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb541a = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar19,uRam0000000003d410e0);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x90), lVar11 != 0)) {
    uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<UITweenLeaf>_TypeInfo*/ uRam0000000003d1df70);
    plVar10 = (long *)/*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar12,*(undefined4 *)(lVar11 + 0x18),uRam0000000003d3c648);
    *(undefined8 *)(lVar19 + 0x80) = uVar12;
    lVar11 = *(long *)(lVar19 + 0x78);
    if (lVar11 != 0) {
      uVar21 = 0;
      while (*(long *)(lVar11 + 0x60) != 0) {
        uVar8 = (uint)uVar21;
        if (*(int *)(*(long *)(lVar11 + 0x60) + 0x18) <= (int)uVar8) {
          return plVar10;
        }
        lVar11 = *(long *)(lVar19 + 0x98);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar11 == 0) || (lVar20 = *(long *)(lVar19 + 0xa0), lVar20 == 0)) break;
        uVar12 = *(undefined8 *)(lVar11 + 0x10);
        if (*(uint *)(lVar20 + 0x18) <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = (long)(int)uVar8;
        lVar11 = *(long *)(*(long *)(lVar20 + 0x10) + lVar16 * 8 + 0x20);
        if (lVar11 == 0) break;
        lVar11 = *(long *)(lVar11 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar12,lVar11,0);
        if (((ulong)plVar10 & 1) == 0) {
          lVar11 = *(long *)(lVar19 + 0x98);
          if (lVar11 == 0) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar8) {
            plVar10 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar20 = *(long *)(*(long *)(lVar11 + 0x10) + lVar16 * 8 + 0x20);
          if ((lVar20 == 0) || (lVar11 = *(long *)(lVar19 + 0xa0), lVar11 == 0)) break;
          cVar3 = *(char *)(lVar20 + 0x18);
          if (*(uint *)(lVar11 + 0x18) <= uVar8) {
            plVar10 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar20 = *(long *)(*(long *)(lVar11 + 0x10) + lVar16 * 8 + 0x20);
          if (lVar20 == 0) break;
          if ((cVar3 != '\0') != (*(char *)(lVar20 + 0x18) != '\0')) goto code_r0x015f0b28;
        }
        else {
code_r0x015f0b28:
          lVar18 = *(long *)(lVar19 + 0x80);
          lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar19,uRam0000000003d410e0);
          if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x90), lVar20 == 0)) break;
          if (*(uint *)(lVar20 + 0x18) <= uVar8) {
            uVar12 = func_0x00f78b24();
            lVar20 = func_0x00f78ac0(uVar12,0);
            uStack_120 = 0x3d410e0;
            puStack_f8 = &Atlas_UI_Screens_LeagueLeaderboardScreen__Animate;
            uVar12 = 0x3eb5000;
            lStack_118 = lVar11;
            lStack_110 = lVar18;
            lStack_108 = lVar19;
            pppuStack_100 = &ppuStack_a0;
            if ((bRam0000000003eb5428 & 1) == 0) {
              func_0x00f78a20(0x3d410f0);
              bRam0000000003eb5428 = 1;
            }
            lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar20,uRam0000000003d410f0);
            if (lVar19 != 0) {
              lVar19 = *(long *)(lVar19 + 0x80);
              uVar14 = /*Atlas.UI.Screens.LeagueLeaderboardScreen$$PlaySlideOut*/ func_0x015f15a0(0x3f000000,lVar20);
              uVar12 = 0;
              if (lVar19 != 0) {
                plVar10 = (long *)Core_Application_CoroutineRunner__StartCoroutine(lVar19,uVar14,0);
                *(long **)(lVar20 + 0x88) = plVar10;
                return plVar10;
              }
            }
            lVar19 = func_0x00f78af4();
            uStack_170 = 0x3d3c650;
            uStack_168 = 0x3d53598;
            uStack_160 = 0x3d21270;
            uStack_150 = 0x3d410e0;
            uStack_148 = 0x3d410f0;
            puStack_128 = &Atlas_League_LeagueManager__GetSavedLeaderboard;
            lStack_180 = unaff_x28;
            lStack_178 = lVar16;
            uStack_158 = uVar21;
            uStack_140 = uVar12;
            lStack_138 = lVar20;
            ppppuStack_130 = &pppuStack_100;
            if ((bRam0000000003eb5442 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d1f198);
              func_0x00f78a20(0x3d22e80);
              func_0x00f78a20(0x3d3af50);
              func_0x00f78a20(0x3d3af58);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb5442 = 1;
            }
            uStack_188 = 0;
            plVar10 = (long *)func_0x00f78a34(/*Atlas.League.LeagueLeaderboardData[]_TypeInfo*/ uRam0000000003d1f198,0xc);
            if (*(long *)(lVar19 + 0xb0) == 0) goto code_r0x015f0f24;
            uVar8 = /*Atlas.League.LeaguePlayerSave$$GetPlayerStandingForUI*/ func_0x0147f4f4(*(long *)(lVar19 + 0xb0),0);
            if (0xb < uVar8) {
              return (long *)0x0;
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
            lVar11 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
            *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
            /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
            *(undefined8 *)(lVar11 + 0x10) = uVar12;
            *(undefined4 *)(lVar11 + 0x1c) = 0;
            *(undefined1 *)(lVar11 + 0x18) = 1;
            if (plVar10 == (long *)0x0) goto code_r0x015f0f24;
            lVar20 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar20 == 0) goto code_r0x015f0f28;
            if (*(uint *)(plVar10 + 3) <= uVar8) goto code_r0x015f0f1c;
            plVar10[(ulong)uVar8 + 4] = lVar11;
            lVar11 = /*Atlas.League.LeagueModeSave$$GetCharacterPositions*/ func_0x0147ad78(0xb,*(undefined8 *)(lVar19 + 0x28),0);
            if (lVar11 == 0) goto code_r0x015f0f24;
            if (*(int *)(lVar11 + 0x18) != 0xb) {
              return (long *)0x0;
            }
            if ((*(long *)(lVar19 + 0xb0) == 0) ||
               (lVar19 = /*Atlas.League.LeaguePlayerSave$$GetLeaderboardForUI*/ func_0x0147f430(*(long *)(lVar19 + 0xb0),0), lVar19 == 0))
            goto code_r0x015f0f24;
            uVar8 = *(uint *)(lVar19 + 0x18);
            if ((int)uVar8 < 1) goto code_r0x015f0ec0;
            uVar22 = 0;
            goto code_r0x015f0ddc;
          }
          lVar11 = *(long *)(lVar20 + lVar16 * 8 + 0x20);
          if ((lVar11 == 0) || (uVar12 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar11,uRam0000000003d53598), lVar18 == 0))
          break;
          plVar10 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar18,uVar12,uRam0000000003d3c650);
        }
        uVar21 = (ulong)(uVar8 + 1);
        lVar11 = *(long *)(lVar19 + 0x78);
        if (lVar11 == 0) break;
      }
    }
  }
  plVar10 = (long *)func_0x00f78af4();
  return plVar10;
  while( true ) {
    lVar20 = (long)(int)uVar22;
    uVar8 = *(uint *)(lVar19 + lVar20 * 4 + 0x20);
    if (0xb < uVar8) {
      return (long *)0x0;
    }
    if ((int)*(uint *)(lVar11 + 0x18) < (int)uVar22) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar22) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar16 = *(long *)(*(long *)(lVar11 + 0x10) + lVar20 * 8 + 0x20);
    if (lVar16 == 0) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar22) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar16 = *(long *)(*(long *)(lVar11 + 0x10) + lVar20 * 8 + 0x20);
      if (lVar16 == 0) goto code_r0x015f0f24;
    }
    uStack_188 = *(undefined8 *)(lVar16 + 0x10);
    iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_188,0);
    uVar12 = uStack_188;
    if (iVar9 == 0) {
      return (long *)0x0;
    }
    lVar20 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
    *(undefined4 *)(lVar20 + 0x20) = 0xffffffff;
    /*System.Object$$.ctor*/ func_0x0294d018(lVar20,0);
    *(undefined8 *)(lVar20 + 0x10) = uVar12;
    *(undefined4 *)(lVar20 + 0x1c) = 0;
    *(undefined1 *)(lVar20 + 0x18) = 0;
    lVar16 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar10 + 0x40));
    if (lVar16 == 0) goto code_r0x015f0f28;
    if (*(uint *)(plVar10 + 3) <= uVar8) goto code_r0x015f0f1c;
    plVar10[(ulong)uVar8 + 4] = lVar20;
    uVar22 = uVar22 + 1;
    uVar8 = *(uint *)(lVar19 + 0x18);
    if ((int)uVar8 <= (int)uVar22) break;
code_r0x015f0ddc:
    if (uVar8 <= uVar22) goto code_r0x015f0f1c;
  }
code_r0x015f0ec0:
  iVar9 = (int)plVar10[3];
  if (0 < iVar9) {
    iVar17 = 0;
    do {
      if (iVar9 == iVar17) goto code_r0x015f0f1c;
      if (plVar10[(long)iVar17 + 4] == 0) {
        return (long *)0x0;
      }
      iVar17 = iVar17 + 1;
    } while (iVar9 != iVar17);
  }
  return plVar10;
code_r0x015f0f24:
  func_0x00f78af4();
code_r0x015f0f28:
  uVar12 = func_0x00f78b14();
code_r0x015f0f2c:
  uVar12 = func_0x00f78ac0(uVar12,0);
  if ((bRam0000000003eb5419 & 1) == 0) {
    func_0x00f78a20(0x3d27e98);
    func_0x00f78a20(0x3d3e0a0);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5419 = 1;
  }
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d410f0);
  if (lVar19 == 0) {
code_r0x015f0fe0:
    uVar12 = func_0x00f78af4();
    if ((bRam0000000003eb541b & 1) == 0) {
      func_0x00f78a20(0x3d410e0);
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb541b = 1;
    }
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d410f0);
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar19 + 0x78),0,0,0,0);
      lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d410e0);
      if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x78), lVar19 != 0)) {
        if (pcRam0000000003ec2fc0 == (code *)0x0) {
          pcRam0000000003ec2fc0 =
               (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar10 = (long *)(*pcRam0000000003ec2fc0)(0x3f800000,lVar19);
        return plVar10;
      }
    }
    func_0x00f78af4();
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar13 = *(long **)(lVar19 + 0xf8);
  plVar10 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData_TypeInfo*/ uRam0000000003d27e98);
  /*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData$$.ctor*/ func_0x0155cca4(plVar10,0);
  puVar4 = puRam0000000003d3e0a0;
  if (plVar13 == (long *)0x0) goto code_r0x015f0fe0;
  puVar15 = puRam0000000003d3e0a0;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar10 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    puVar15 = (undefined8 *)0x0;
    uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar12);
    if (plVar13 != (long *)0x0) {
      puVar15 = *(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 8);
      (*(code *)*puVar15)(plVar13,uVar12);
      if (plVar13[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar13[7],plVar10,uRam0000000003d3b330);
        puVar15 = (undefined8 *)plVar13[8];
        if ((puVar15 == (undefined8 *)0x0) || ((int)plVar10[2] <= *(int *)(puVar15 + 2))) {
code_r0x025dfcb4:
          plVar10 = (long *)(*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x30))
                                      (plVar13);
          if (((ulong)plVar10 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar10 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
            return plVar10;
          }
          return plVar10;
        }
        if (plVar13[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar13[7],0,puVar15,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x60))(plVar13);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar26 = func_0x00f78af4();
  plVar10 = auVar26._8_8_;
  lVar19 = auVar26._0_8_;
  if ((plVar10 != (long *)0x0) &&
     (uVar12 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
     lVar19 != 0)) {
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x70))(lVar19,uVar12);
    if ((uVar8 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x78))(lVar19,plVar10);
    }
    return (long *)(ulong)(uVar8 ^ 1);
  }
  auVar26 = func_0x00f78af4();
  iVar9 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar19 = *(long *)(auVar26._0_8_ + 0x38);
  if (lVar19 != 0) {
    iVar9 = *(int *)(lVar19 + 0x18);
    if (iVar9 < 1) goto code_r0x025dfe48;
    uVar8 = 0;
    iVar17 = -0x80000000;
    uVar22 = 0;
    do {
      if (*(uint *)(lVar19 + 0x18) <= uVar8) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
      if (lVar19 == 0) break;
      iVar2 = *(int *)(lVar19 + 0x10);
      uVar23 = uVar8;
      if (iVar2 <= iVar17) {
        uVar23 = uVar22;
      }
      if (iVar9 - 1U == uVar8) goto code_r0x025dfe4c;
      if (iVar2 <= iVar17) {
        iVar2 = iVar17;
      }
      lVar19 = *(long *)(auVar26._0_8_ + 0x38);
      uVar8 = uVar8 + 1;
      iVar17 = iVar2;
      uVar22 = uVar23;
    } while (lVar19 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar23 = 0;
code_r0x025dfe4c:
  *auVar26._8_8_ = uVar23;
  return (long *)(ulong)(0 < iVar9);
}



// ============================================================
// RVA: 0x15f06fc | Atlas.UI.Screens.LeagueLeaderboardScreen.SetPreviousPositions
// ============================================================

long * Atlas_UI_Screens_LeagueLeaderboardScreen__SetPreviousPositions(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  undefined8 unaff_x19;
  long *plVar15;
  undefined8 unaff_x20;
  long lVar16;
  long lVar17;
  long unaff_x21;
  long lVar18;
  ulong unaff_x22;
  ulong uVar19;
  uint uVar20;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar21;
  uint uVar22;
  ulong unaff_x26;
  long unaff_x27;
  long lVar23;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  auVar25._8_8_ = unaff_x19;
  auVar25._0_8_ = unaff_x20;
  lVar16 = 0x3eb5000;
  plVar10 = param_1;
  if ((bRam0000000003eb542c & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3afb0);
    func_0x00f78a20(0x3d3afb8);
    func_0x00f78a20(0x3d410f0);
    plVar10 = (long *)func_0x00f78a20(0x3d68ad0);
    bRam0000000003eb542c = 1;
  }
  lVar13 = param_1[0x13];
  lVar18 = unaff_x21;
  uVar19 = unaff_x22;
  if (lVar13 != 0) {
    unaff_x24 = 0;
    uVar19 = 0;
    unaff_x23 = 0;
    uVar21 = 0x3d21270;
    while( true ) {
      uVar20 = (uint)unaff_x23;
      uVar8 = (uint)uVar19;
      unaff_x25 = uVar21;
      if ((long)*(int *)(lVar13 + 0x18) <= (long)unaff_x24) break;
      lVar16 = param_1[0x14];
      unaff_x25 = 0x3d21270;
      if (lVar16 == 0) goto LAB_015f0904;
      unaff_x26 = 0;
      while (uVar22 = (uint)unaff_x26, (int)uVar22 < *(int *)(lVar16 + 0x18)) {
        lVar18 = param_1[0x13];
        unaff_x25 = 0x3d21270;
        if (lVar18 == 0) goto LAB_015f0904;
        if (*(uint *)(lVar18 + 0x18) <= unaff_x24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar16 = param_1[0x14];
          unaff_x25 = uVar21;
          if (lVar16 == 0) goto LAB_015f0904;
        }
        unaff_x27 = *(long *)(*(long *)(lVar18 + 0x10) + unaff_x24 * 8 + 0x20);
        if (*(uint *)(lVar16 + 0x18) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x25 = uVar21;
        if ((unaff_x27 == 0) ||
           (unaff_x28 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar22 * 8 + 0x20),
           unaff_x28 == 0)) goto LAB_015f0904;
        lVar16 = *(long *)(unaff_x27 + 0x10);
        lVar18 = *(long *)(unaff_x28 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar16,lVar18,0);
        if ((int)plVar10 != 0) {
          cVar3 = *(char *)(unaff_x28 + 0x18);
          if ((*(char *)(unaff_x27 + 0x18) != '\0') == (cVar3 != '\0')) {
            *(uint *)(unaff_x27 + 0x20) = uVar22;
            if (*(char *)(unaff_x27 + 0x18) != '\0') {
              uVar1 = (uint)unaff_x24;
              if (cVar3 == '\0') {
                uVar1 = uVar20;
              }
              unaff_x23 = (ulong)uVar1;
              if (cVar3 == '\0') {
                uVar22 = uVar8;
              }
              uVar19 = (ulong)uVar22;
            }
            break;
          }
        }
        unaff_x26 = (ulong)(uVar22 + 1);
        lVar16 = param_1[0x14];
        if (lVar16 == 0) goto LAB_015f0904;
      }
      unaff_x24 = unaff_x24 + 1;
      lVar13 = param_1[0x13];
      unaff_x25 = uVar21;
      if (lVar13 == 0) goto LAB_015f0904;
    }
    if (((int)uVar8 <= (int)uVar20) || ((int)(uVar8 - uVar20) < 5)) {
      return plVar10;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
    if ((lVar13 != 0) &&
       (auVar24._8_8_ = /*STR('Achievement_76')*/ uRam0000000003d68ad0, auVar24._0_8_ = *(long *)(lVar13 + 0x68),
       *(long *)(lVar13 + 0x68) != 0)) {
      do {
        auVar4 = auVar24;
        uVar21 = auVar4._8_8_;
        lVar16 = auVar4._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar25;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_d8 = 0x42c80000;
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4717 & 1) == 0) {
          func_0x00f78a20(0x3d2fe08);
          func_0x00f78a20(0x3d2fe18);
          bRam0000000003eb4717 = 1;
        }
        *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
        if (*(long *)(lVar16 + 0x60) != 0) {
          plVar10 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar16 + 0x60),uVar21,
                                            (undefined1 *)((long)register0x00000008 + -0x44),
                                            uRam0000000003d2fe08);
          bVar6 = true;
          bVar7 = false;
          if ((int)plVar10 != 0) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(*(float *)((long)register0x00000008 + -0x44))) {
              bVar6 = *(float *)((long)register0x00000008 + -0x44) < 100.0;
              bVar7 = false;
            }
          }
          if (bVar6 == bVar7) {
            return plVar10;
          }
          if (*(long *)(lVar16 + 0x60) != 0) {
            unaff_x21 = 0x3d2fe18;
            /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar16 + 0x60),uVar21,uRam0000000003d2fe18);
            if (*(long *)(lVar16 + 0x58) != 0) {
              plVar10 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar16 + 0x58),uVar21,
                                                uRam0000000003d2fe18);
              return plVar10;
            }
          }
        }
        unaff_x30 = &Atlas_Stats_AchievementManager__UnlockAchievement;
        auVar24 = func_0x00f78af4();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
        auVar25 = auVar4;
      } while( true );
    }
  }
LAB_015f0904:
  lVar13 = func_0x00f78af4();
  puStack_68 = &Atlas_UI_Screens_LeagueLeaderboardScreen__PrepareAnimation;
  lStack_c0 = unaff_x28;
  lStack_b8 = unaff_x27;
  uStack_b0 = unaff_x26;
  uStack_a8 = unaff_x25;
  uStack_a0 = unaff_x24;
  uStack_98 = unaff_x23;
  uStack_90 = uVar19;
  lStack_88 = lVar18;
  lStack_80 = lVar16;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb541a & 1) == 0) {
    func_0x00f78a20(0x3d53598);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3c650);
    func_0x00f78a20(0x3d3c648);
    func_0x00f78a20(0x3d3afb0);
    func_0x00f78a20(0x3d3afb8);
    func_0x00f78a20(0x3d1df70);
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb541a = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d410e0);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x90), lVar16 != 0)) {
    uVar21 = func_0x00f78aec(/*System.Collections.Generic.List<UITweenLeaf>_TypeInfo*/ uRam0000000003d1df70);
    plVar10 = (long *)/*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar21,*(undefined4 *)(lVar16 + 0x18),uRam0000000003d3c648);
    *(undefined8 *)(lVar13 + 0x80) = uVar21;
    lVar16 = *(long *)(lVar13 + 0x78);
    if (lVar16 != 0) {
      uVar19 = 0;
      while (*(long *)(lVar16 + 0x60) != 0) {
        uVar8 = (uint)uVar19;
        if (*(int *)(*(long *)(lVar16 + 0x60) + 0x18) <= (int)uVar8) {
          return plVar10;
        }
        lVar16 = *(long *)(lVar13 + 0x98);
        if (lVar16 == 0) break;
        if (*(uint *)(lVar16 + 0x18) <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar16 == 0) || (lVar18 = *(long *)(lVar13 + 0xa0), lVar18 == 0)) break;
        uVar21 = *(undefined8 *)(lVar16 + 0x10);
        if (*(uint *)(lVar18 + 0x18) <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar23 = (long)(int)uVar8;
        lVar16 = *(long *)(*(long *)(lVar18 + 0x10) + lVar23 * 8 + 0x20);
        if (lVar16 == 0) break;
        lVar16 = *(long *)(lVar16 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar21,lVar16,0);
        if (((ulong)plVar10 & 1) == 0) {
          lVar16 = *(long *)(lVar13 + 0x98);
          if (lVar16 == 0) break;
          if (*(uint *)(lVar16 + 0x18) <= uVar8) {
            plVar10 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar16 + 0x10) + lVar23 * 8 + 0x20);
          if ((lVar18 == 0) || (lVar16 = *(long *)(lVar13 + 0xa0), lVar16 == 0)) break;
          cVar3 = *(char *)(lVar18 + 0x18);
          if (*(uint *)(lVar16 + 0x18) <= uVar8) {
            plVar10 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar16 + 0x10) + lVar23 * 8 + 0x20);
          if (lVar18 == 0) break;
          if ((cVar3 != '\0') != (*(char *)(lVar18 + 0x18) != '\0')) goto code_r0x015f0b28;
        }
        else {
code_r0x015f0b28:
          lVar17 = *(long *)(lVar13 + 0x80);
          lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d410e0);
          if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x90), lVar18 == 0)) break;
          if (*(uint *)(lVar18 + 0x18) <= uVar8) {
            uVar21 = func_0x00f78b24();
            lVar18 = func_0x00f78ac0(uVar21,0);
            uStack_f0 = 0x3d410e0;
            puStack_c8 = &Atlas_UI_Screens_LeagueLeaderboardScreen__Animate;
            uVar21 = 0x3eb5000;
            lStack_e8 = lVar16;
            lStack_e0 = lVar17;
            lStack_d8 = lVar13;
            ppuStack_d0 = &puStack_70;
            if ((bRam0000000003eb5428 & 1) == 0) {
              func_0x00f78a20(0x3d410f0);
              bRam0000000003eb5428 = 1;
            }
            lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar18,uRam0000000003d410f0);
            if (lVar16 != 0) {
              lVar16 = *(long *)(lVar16 + 0x80);
              uVar11 = /*Atlas.UI.Screens.LeagueLeaderboardScreen$$PlaySlideOut*/ func_0x015f15a0(0x3f000000,lVar18);
              uVar21 = 0;
              if (lVar16 != 0) {
                plVar10 = (long *)Core_Application_CoroutineRunner__StartCoroutine(lVar16,uVar11,0);
                *(long **)(lVar18 + 0x88) = plVar10;
                return plVar10;
              }
            }
            lVar16 = func_0x00f78af4();
            uStack_140 = 0x3d3c650;
            uStack_138 = 0x3d53598;
            uStack_130 = 0x3d21270;
            uStack_120 = 0x3d410e0;
            uStack_118 = 0x3d410f0;
            puStack_f8 = &Atlas_League_LeagueManager__GetSavedLeaderboard;
            lStack_150 = unaff_x28;
            lStack_148 = lVar23;
            uStack_128 = uVar19;
            uStack_110 = uVar21;
            lStack_108 = lVar18;
            pppuStack_100 = &ppuStack_d0;
            if ((bRam0000000003eb5442 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d1f198);
              func_0x00f78a20(0x3d22e80);
              func_0x00f78a20(0x3d3af50);
              func_0x00f78a20(0x3d3af58);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb5442 = 1;
            }
            uStack_158 = 0;
            plVar10 = (long *)func_0x00f78a34(/*Atlas.League.LeagueLeaderboardData[]_TypeInfo*/ uRam0000000003d1f198,0xc);
            if (*(long *)(lVar16 + 0xb0) == 0) goto code_r0x015f0f24;
            uVar8 = /*Atlas.League.LeaguePlayerSave$$GetPlayerStandingForUI*/ func_0x0147f4f4(*(long *)(lVar16 + 0xb0),0);
            if (0xb < uVar8) {
              return (long *)0x0;
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
            lVar18 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
            *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
            /*System.Object$$.ctor*/ func_0x0294d018(lVar18,0);
            *(undefined8 *)(lVar18 + 0x10) = uVar21;
            *(undefined4 *)(lVar18 + 0x1c) = 0;
            *(undefined1 *)(lVar18 + 0x18) = 1;
            if (plVar10 == (long *)0x0) goto code_r0x015f0f24;
            lVar13 = func_0x00f78adc(lVar18,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar13 == 0) goto code_r0x015f0f28;
            if (*(uint *)(plVar10 + 3) <= uVar8) goto code_r0x015f0f1c;
            plVar10[(ulong)uVar8 + 4] = lVar18;
            lVar18 = /*Atlas.League.LeagueModeSave$$GetCharacterPositions*/ func_0x0147ad78(0xb,*(undefined8 *)(lVar16 + 0x28),0);
            if (lVar18 == 0) goto code_r0x015f0f24;
            if (*(int *)(lVar18 + 0x18) != 0xb) {
              return (long *)0x0;
            }
            if ((*(long *)(lVar16 + 0xb0) == 0) ||
               (lVar16 = /*Atlas.League.LeaguePlayerSave$$GetLeaderboardForUI*/ func_0x0147f430(*(long *)(lVar16 + 0xb0),0), lVar16 == 0))
            goto code_r0x015f0f24;
            uVar8 = *(uint *)(lVar16 + 0x18);
            if ((int)uVar8 < 1) goto code_r0x015f0ec0;
            uVar20 = 0;
            goto code_r0x015f0ddc;
          }
          lVar16 = *(long *)(lVar18 + lVar23 * 8 + 0x20);
          if ((lVar16 == 0) || (uVar21 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar16,uRam0000000003d53598), lVar17 == 0))
          break;
          plVar10 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar17,uVar21,uRam0000000003d3c650);
        }
        uVar19 = (ulong)(uVar8 + 1);
        lVar16 = *(long *)(lVar13 + 0x78);
        if (lVar16 == 0) break;
      }
    }
  }
  plVar10 = (long *)func_0x00f78af4();
  return plVar10;
code_r0x015f0f1c:
  uVar21 = func_0x00f78b24();
  goto code_r0x015f0f2c;
  while( true ) {
    lVar13 = (long)(int)uVar20;
    uVar8 = *(uint *)(lVar16 + lVar13 * 4 + 0x20);
    if (0xb < uVar8) {
      return (long *)0x0;
    }
    if ((int)*(uint *)(lVar18 + 0x18) < (int)uVar20) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar20) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar23 = *(long *)(*(long *)(lVar18 + 0x10) + lVar13 * 8 + 0x20);
    if (lVar23 == 0) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar20) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar23 = *(long *)(*(long *)(lVar18 + 0x10) + lVar13 * 8 + 0x20);
      if (lVar23 == 0) goto code_r0x015f0f24;
    }
    uStack_158 = *(undefined8 *)(lVar23 + 0x10);
    iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_158,0);
    uVar21 = uStack_158;
    if (iVar9 == 0) {
      return (long *)0x0;
    }
    lVar13 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
    *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
    /*System.Object$$.ctor*/ func_0x0294d018(lVar13,0);
    *(undefined8 *)(lVar13 + 0x10) = uVar21;
    *(undefined4 *)(lVar13 + 0x1c) = 0;
    *(undefined1 *)(lVar13 + 0x18) = 0;
    lVar23 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (lVar23 == 0) goto code_r0x015f0f28;
    if (*(uint *)(plVar10 + 3) <= uVar8) goto code_r0x015f0f1c;
    plVar10[(ulong)uVar8 + 4] = lVar13;
    uVar20 = uVar20 + 1;
    uVar8 = *(uint *)(lVar16 + 0x18);
    if ((int)uVar8 <= (int)uVar20) break;
code_r0x015f0ddc:
    if (uVar8 <= uVar20) goto code_r0x015f0f1c;
  }
code_r0x015f0ec0:
  iVar9 = (int)plVar10[3];
  if (0 < iVar9) {
    iVar14 = 0;
    do {
      if (iVar9 == iVar14) goto code_r0x015f0f1c;
      if (plVar10[(long)iVar14 + 4] == 0) {
        return (long *)0x0;
      }
      iVar14 = iVar14 + 1;
    } while (iVar9 != iVar14);
  }
  return plVar10;
code_r0x015f0f24:
  func_0x00f78af4();
code_r0x015f0f28:
  uVar21 = func_0x00f78b14();
code_r0x015f0f2c:
  uVar21 = func_0x00f78ac0(uVar21,0);
  if ((bRam0000000003eb5419 & 1) == 0) {
    func_0x00f78a20(0x3d27e98);
    func_0x00f78a20(0x3d3e0a0);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5419 = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar21,uRam0000000003d410f0);
  if (lVar16 == 0) {
code_r0x015f0fe0:
    uVar21 = func_0x00f78af4();
    if ((bRam0000000003eb541b & 1) == 0) {
      func_0x00f78a20(0x3d410e0);
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb541b = 1;
    }
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar21,uRam0000000003d410f0);
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar16 + 0x78),0,0,0,0);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar21,uRam0000000003d410e0);
      if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) {
        if (pcRam0000000003ec2fc0 == (code *)0x0) {
          pcRam0000000003ec2fc0 =
               (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar10 = (long *)(*pcRam0000000003ec2fc0)(0x3f800000,lVar16);
        return plVar10;
      }
    }
    func_0x00f78af4();
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar15 = *(long **)(lVar16 + 0xf8);
  plVar10 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData_TypeInfo*/ uRam0000000003d27e98);
  /*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData$$.ctor*/ func_0x0155cca4(plVar10,0);
  puVar5 = puRam0000000003d3e0a0;
  if (plVar15 == (long *)0x0) goto code_r0x015f0fe0;
  puVar12 = puRam0000000003d3e0a0;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar10 != (long *)0x0) {
    uVar21 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    puVar12 = (undefined8 *)0x0;
    uVar21 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar21);
    if (plVar15 != (long *)0x0) {
      puVar12 = *(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 8);
      (*(code *)*puVar12)(plVar15,uVar21);
      if (plVar15[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar15[7],plVar10,uRam0000000003d3b330);
        puVar12 = (undefined8 *)plVar15[8];
        if ((puVar12 == (undefined8 *)0x0) || ((int)plVar10[2] <= *(int *)(puVar12 + 2))) {
code_r0x025dfcb4:
          plVar10 = (long *)(*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 0x30))
                                      (plVar15);
          if (((ulong)plVar10 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar10 = (long *)(**(code **)(*plVar15 + 0x1a8))
                                        (plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
            return plVar10;
          }
          return plVar10;
        }
        if (plVar15[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar15[7],0,puVar12,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 0x60))(plVar15);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar25 = func_0x00f78af4();
  plVar10 = auVar25._8_8_;
  lVar16 = auVar25._0_8_;
  if ((plVar10 != (long *)0x0) &&
     (uVar21 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
     lVar16 != 0)) {
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x70))(lVar16,uVar21);
    if ((uVar8 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x78))(lVar16,plVar10);
    }
    return (long *)(ulong)(uVar8 ^ 1);
  }
  auVar25 = func_0x00f78af4();
  iVar9 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar16 = *(long *)(auVar25._0_8_ + 0x38);
  if (lVar16 != 0) {
    iVar9 = *(int *)(lVar16 + 0x18);
    if (iVar9 < 1) goto code_r0x025dfe48;
    uVar8 = 0;
    iVar14 = -0x80000000;
    uVar20 = 0;
    do {
      if (*(uint *)(lVar16 + 0x18) <= uVar8) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
      if (lVar16 == 0) break;
      iVar2 = *(int *)(lVar16 + 0x10);
      uVar22 = uVar8;
      if (iVar2 <= iVar14) {
        uVar22 = uVar20;
      }
      if (iVar9 - 1U == uVar8) goto code_r0x025dfe4c;
      if (iVar2 <= iVar14) {
        iVar2 = iVar14;
      }
      lVar16 = *(long *)(auVar25._0_8_ + 0x38);
      uVar8 = uVar8 + 1;
      iVar14 = iVar2;
      uVar20 = uVar22;
    } while (lVar16 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar22 = 0;
code_r0x025dfe4c:
  *auVar25._8_8_ = uVar22;
  return (long *)(ulong)(0 < iVar9);
}



// ============================================================
// RVA: 0x15f0908 | Atlas.UI.Screens.LeagueLeaderboardScreen.PrepareAnimation
// ============================================================

long * Atlas_UI_Screens_LeagueLeaderboardScreen__PrepareAnimation(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_f8;
  
  if ((bRam0000000003eb541a & 1) == 0) {
    func_0x00f78a20(0x3d53598);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3c650);
    func_0x00f78a20(0x3d3c648);
    func_0x00f78a20(0x3d3afb0);
    func_0x00f78a20(0x3d3afb8);
    func_0x00f78a20(0x3d1df70);
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb541a = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x90), lVar6 != 0)) {
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<UITweenLeaf>_TypeInfo*/ uRam0000000003d1df70);
    plVar8 = (long *)/*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar7,*(undefined4 *)(lVar6 + 0x18),uRam0000000003d3c648);
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 != 0) {
      uVar4 = 0;
      while (*(long *)(lVar6 + 0x60) != 0) {
        if (*(int *)(*(long *)(lVar6 + 0x60) + 0x18) <= (int)uVar4) {
          return plVar8;
        }
        lVar6 = *(long *)(param_1 + 0x98);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar13 = *(long *)(param_1 + 0xa0), lVar13 == 0)) break;
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
        if (*(uint *)(lVar13 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = (long)(int)uVar4;
        lVar6 = *(long *)(*(long *)(lVar13 + 0x10) + lVar17 * 8 + 0x20);
        if (lVar6 == 0) break;
        uVar14 = *(undefined8 *)(lVar6 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar8 = (long *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar7,uVar14,0);
        if (((ulong)plVar8 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0x98);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar4) {
            plVar8 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + lVar17 * 8 + 0x20);
          if ((lVar6 == 0) || (lVar13 = *(long *)(param_1 + 0xa0), lVar13 == 0)) break;
          cVar2 = *(char *)(lVar6 + 0x18);
          if (*(uint *)(lVar13 + 0x18) <= uVar4) {
            plVar8 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar6 = *(long *)(*(long *)(lVar13 + 0x10) + lVar17 * 8 + 0x20);
          if (lVar6 == 0) break;
          if ((cVar2 != '\0') != (*(char *)(lVar6 + 0x18) != '\0')) goto LAB_015f0b28;
        }
        else {
LAB_015f0b28:
          lVar13 = *(long *)(param_1 + 0x80);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x90), lVar6 == 0)) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar4) {
            uVar7 = func_0x00f78b24();
            lVar6 = func_0x00f78ac0(uVar7,0);
            if ((bRam0000000003eb5428 & 1) == 0) {
              func_0x00f78a20(0x3d410f0);
              bRam0000000003eb5428 = 1;
            }
            lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d410f0);
            if (lVar13 != 0) {
              lVar13 = *(long *)(lVar13 + 0x80);
              uVar7 = /*Atlas.UI.Screens.LeagueLeaderboardScreen$$PlaySlideOut*/ func_0x015f15a0(0x3f000000,lVar6);
              if (lVar13 != 0) {
                plVar8 = (long *)Core_Application_CoroutineRunner__StartCoroutine(lVar13,uVar7,0);
                *(long **)(lVar6 + 0x88) = plVar8;
                return plVar8;
              }
            }
            lVar6 = func_0x00f78af4();
            if ((bRam0000000003eb5442 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d1f198);
              func_0x00f78a20(0x3d22e80);
              func_0x00f78a20(0x3d3af50);
              func_0x00f78a20(0x3d3af58);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb5442 = 1;
            }
            uStack_f8 = 0;
            plVar8 = (long *)func_0x00f78a34(/*Atlas.League.LeagueLeaderboardData[]_TypeInfo*/ uRam0000000003d1f198,0xc);
            if (*(long *)(lVar6 + 0xb0) == 0) goto code_r0x015f0f24;
            uVar4 = /*Atlas.League.LeaguePlayerSave$$GetPlayerStandingForUI*/ func_0x0147f4f4(*(long *)(lVar6 + 0xb0),0);
            if (0xb < uVar4) {
              return (long *)0x0;
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
            lVar13 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
            *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
            /*System.Object$$.ctor*/ func_0x0294d018(lVar13,0);
            *(undefined8 *)(lVar13 + 0x10) = uVar7;
            *(undefined4 *)(lVar13 + 0x1c) = 0;
            *(undefined1 *)(lVar13 + 0x18) = 1;
            if (plVar8 == (long *)0x0) goto code_r0x015f0f24;
            lVar17 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar17 == 0) goto code_r0x015f0f28;
            if (*(uint *)(plVar8 + 3) <= uVar4) goto code_r0x015f0f1c;
            plVar8[(ulong)uVar4 + 4] = lVar13;
            lVar13 = /*Atlas.League.LeagueModeSave$$GetCharacterPositions*/ func_0x0147ad78(0xb,*(undefined8 *)(lVar6 + 0x28),0);
            if (lVar13 == 0) goto code_r0x015f0f24;
            if (*(int *)(lVar13 + 0x18) != 0xb) {
              return (long *)0x0;
            }
            if ((*(long *)(lVar6 + 0xb0) == 0) ||
               (lVar6 = /*Atlas.League.LeaguePlayerSave$$GetLeaderboardForUI*/ func_0x0147f430(*(long *)(lVar6 + 0xb0),0), lVar6 == 0))
            goto code_r0x015f0f24;
            uVar4 = *(uint *)(lVar6 + 0x18);
            if ((int)uVar4 < 1) goto code_r0x015f0ec0;
            uVar15 = 0;
            goto code_r0x015f0ddc;
          }
          lVar6 = *(long *)(lVar6 + lVar17 * 8 + 0x20);
          if ((lVar6 == 0) || (uVar7 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar6,uRam0000000003d53598), lVar13 == 0))
          break;
          plVar8 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar13,uVar7,uRam0000000003d3c650);
        }
        uVar4 = uVar4 + 1;
        lVar6 = *(long *)(param_1 + 0x78);
        if (lVar6 == 0) break;
      }
    }
  }
  plVar8 = (long *)func_0x00f78af4();
  return plVar8;
code_r0x015f0f1c:
  uVar7 = func_0x00f78b24();
  goto code_r0x015f0f2c;
  while( true ) {
    lVar17 = (long)(int)uVar15;
    uVar4 = *(uint *)(lVar6 + lVar17 * 4 + 0x20);
    if (0xb < uVar4) {
      return (long *)0x0;
    }
    if ((int)*(uint *)(lVar13 + 0x18) < (int)uVar15) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar15) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(lVar13 + 0x10) + lVar17 * 8 + 0x20);
    if (lVar10 == 0) {
      return (long *)0x0;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar15) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar10 = *(long *)(*(long *)(lVar13 + 0x10) + lVar17 * 8 + 0x20);
      if (lVar10 == 0) goto code_r0x015f0f24;
    }
    uStack_f8 = *(undefined8 *)(lVar10 + 0x10);
    iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_f8,0);
    uVar7 = uStack_f8;
    if (iVar5 == 0) {
      return (long *)0x0;
    }
    lVar17 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
    *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
    /*System.Object$$.ctor*/ func_0x0294d018(lVar17,0);
    *(undefined8 *)(lVar17 + 0x10) = uVar7;
    *(undefined4 *)(lVar17 + 0x1c) = 0;
    *(undefined1 *)(lVar17 + 0x18) = 0;
    lVar10 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar8 + 0x40));
    if (lVar10 == 0) goto code_r0x015f0f28;
    if (*(uint *)(plVar8 + 3) <= uVar4) goto code_r0x015f0f1c;
    plVar8[(ulong)uVar4 + 4] = lVar17;
    uVar15 = uVar15 + 1;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if ((int)uVar4 <= (int)uVar15) break;
code_r0x015f0ddc:
    if (uVar4 <= uVar15) goto code_r0x015f0f1c;
  }
code_r0x015f0ec0:
  iVar5 = (int)plVar8[3];
  if (0 < iVar5) {
    iVar11 = 0;
    do {
      if (iVar5 == iVar11) goto code_r0x015f0f1c;
      if (plVar8[(long)iVar11 + 4] == 0) {
        return (long *)0x0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar5 != iVar11);
  }
  return plVar8;
code_r0x015f0f24:
  func_0x00f78af4();
code_r0x015f0f28:
  uVar7 = func_0x00f78b14();
code_r0x015f0f2c:
  uVar7 = func_0x00f78ac0(uVar7,0);
  if ((bRam0000000003eb5419 & 1) == 0) {
    func_0x00f78a20(0x3d27e98);
    func_0x00f78a20(0x3d3e0a0);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5419 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar7,uRam0000000003d410f0);
  if (lVar6 == 0) {
code_r0x015f0fe0:
    uVar7 = func_0x00f78af4();
    if ((bRam0000000003eb541b & 1) == 0) {
      func_0x00f78a20(0x3d410e0);
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb541b = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar7,uRam0000000003d410f0);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar6 + 0x78),0,0,0,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d410e0);
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x78), lVar6 != 0)) {
        if (pcRam0000000003ec2fc0 == (code *)0x0) {
          pcRam0000000003ec2fc0 =
               (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (long *)(*pcRam0000000003ec2fc0)(0x3f800000,lVar6);
        return plVar8;
      }
    }
    func_0x00f78af4();
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar12 = *(long **)(lVar6 + 0xf8);
  plVar8 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData_TypeInfo*/ uRam0000000003d27e98);
  /*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData$$.ctor*/ func_0x0155cca4(plVar8,0);
  puVar3 = puRam0000000003d3e0a0;
  if (plVar12 == (long *)0x0) goto code_r0x015f0fe0;
  puVar9 = puRam0000000003d3e0a0;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar8 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    puVar9 = (undefined8 *)0x0;
    uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar7);
    if (plVar12 != (long *)0x0) {
      puVar9 = *(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 8);
      (*(code *)*puVar9)(plVar12,uVar7);
      if (plVar12[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar12[7],plVar8,uRam0000000003d3b330);
        puVar9 = (undefined8 *)plVar12[8];
        if ((puVar9 == (undefined8 *)0x0) || ((int)plVar8[2] <= *(int *)(puVar9 + 2))) {
code_r0x025dfcb4:
          plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x30))(plVar12)
          ;
          if (((ulong)plVar8 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar8 = (long *)(**(code **)(*plVar12 + 0x1a8))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
            return plVar8;
          }
          return plVar8;
        }
        if (plVar12[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar12[7],0,puVar9,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x60))(plVar12);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar18 = func_0x00f78af4();
  plVar8 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  if ((plVar8 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180)), lVar6 != 0))
  {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x70))(lVar6,uVar7);
    if ((uVar4 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x78))(lVar6,plVar8);
    }
    return (long *)(ulong)(uVar4 ^ 1);
  }
  auVar18 = func_0x00f78af4();
  iVar5 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar6 = *(long *)(auVar18._0_8_ + 0x38);
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0x18);
    if (iVar5 < 1) goto code_r0x025dfe48;
    uVar4 = 0;
    iVar11 = -0x80000000;
    uVar15 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      if (lVar6 == 0) break;
      iVar1 = *(int *)(lVar6 + 0x10);
      uVar16 = uVar4;
      if (iVar1 <= iVar11) {
        uVar16 = uVar15;
      }
      if (iVar5 - 1U == uVar4) goto code_r0x025dfe4c;
      if (iVar1 <= iVar11) {
        iVar1 = iVar11;
      }
      lVar6 = *(long *)(auVar18._0_8_ + 0x38);
      uVar4 = uVar4 + 1;
      iVar11 = iVar1;
      uVar15 = uVar16;
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar16 = 0;
code_r0x025dfe4c:
  *auVar18._8_8_ = uVar16;
  return (long *)(ulong)(0 < iVar5);
}



// ============================================================
// RVA: 0x15f0bb0 | Atlas.UI.Screens.LeagueLeaderboardScreen.Animate
// ============================================================

long * Atlas_UI_Screens_LeagueLeaderboardScreen__Animate(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_98;
  
  if ((bRam0000000003eb5428 & 1) == 0) {
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5428 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x80);
    uVar6 = /*Atlas.UI.Screens.LeagueLeaderboardScreen$$PlaySlideOut*/ func_0x015f15a0(0x3f000000,param_1);
    if (lVar5 != 0) {
      plVar7 = (long *)Core_Application_CoroutineRunner__StartCoroutine(lVar5,uVar6,0);
      *(long **)(param_1 + 0x88) = plVar7;
      return plVar7;
    }
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb5442 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d1f198);
    func_0x00f78a20(0x3d22e80);
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb5442 = 1;
  }
  uStack_98 = 0;
  plVar7 = (long *)func_0x00f78a34(/*Atlas.League.LeagueLeaderboardData[]_TypeInfo*/ uRam0000000003d1f198,0xc);
  if (*(long *)(lVar5 + 0xb0) == 0) {
code_r0x015f0f24:
    func_0x00f78af4();
code_r0x015f0f28:
    uVar6 = func_0x00f78b14();
  }
  else {
    uVar3 = /*Atlas.League.LeaguePlayerSave$$GetPlayerStandingForUI*/ func_0x0147f4f4(*(long *)(lVar5 + 0xb0),0);
    if (0xb < uVar3) {
      return (long *)0x0;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
    lVar8 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
    *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
    /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
    *(undefined8 *)(lVar8 + 0x10) = uVar6;
    *(undefined4 *)(lVar8 + 0x1c) = 0;
    *(undefined1 *)(lVar8 + 0x18) = 1;
    if (plVar7 == (long *)0x0) goto code_r0x015f0f24;
    lVar9 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar9 == 0) goto code_r0x015f0f28;
    if (uVar3 < *(uint *)(plVar7 + 3)) {
      plVar7[(ulong)uVar3 + 4] = lVar8;
      lVar8 = /*Atlas.League.LeagueModeSave$$GetCharacterPositions*/ func_0x0147ad78(0xb,*(undefined8 *)(lVar5 + 0x28),0);
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) != 0xb) {
          return (long *)0x0;
        }
        if ((*(long *)(lVar5 + 0xb0) != 0) &&
           (lVar5 = /*Atlas.League.LeaguePlayerSave$$GetLeaderboardForUI*/ func_0x0147f430(*(long *)(lVar5 + 0xb0),0), lVar5 != 0)) {
          uVar3 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar3) {
            uVar14 = 0;
            do {
              if (uVar3 <= uVar14) goto code_r0x015f0f1c;
              lVar9 = (long)(int)uVar14;
              uVar3 = *(uint *)(lVar5 + lVar9 * 4 + 0x20);
              if (0xb < uVar3) {
                return (long *)0x0;
              }
              if ((int)*(uint *)(lVar8 + 0x18) < (int)uVar14) {
                return (long *)0x0;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar11 = *(long *)(*(long *)(lVar8 + 0x10) + lVar9 * 8 + 0x20);
              if (lVar11 == 0) {
                return (long *)0x0;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar11 = *(long *)(*(long *)(lVar8 + 0x10) + lVar9 * 8 + 0x20);
                if (lVar11 == 0) goto code_r0x015f0f24;
              }
              uStack_98 = *(undefined8 *)(lVar11 + 0x10);
              iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
              uVar6 = uStack_98;
              if (iVar4 == 0) {
                return (long *)0x0;
              }
              lVar9 = func_0x00f78aec(/*Atlas.League.LeagueLeaderboardData_TypeInfo*/ uRam0000000003d22e80);
              *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
              /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
              *(undefined8 *)(lVar9 + 0x10) = uVar6;
              *(undefined4 *)(lVar9 + 0x1c) = 0;
              *(undefined1 *)(lVar9 + 0x18) = 0;
              lVar11 = func_0x00f78adc(lVar9,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar11 == 0) goto code_r0x015f0f28;
              if (*(uint *)(plVar7 + 3) <= uVar3) goto code_r0x015f0f1c;
              plVar7[(ulong)uVar3 + 4] = lVar9;
              uVar14 = uVar14 + 1;
              uVar3 = *(uint *)(lVar5 + 0x18);
            } while ((int)uVar14 < (int)uVar3);
          }
          iVar4 = (int)plVar7[3];
          if (iVar4 < 1) {
            return plVar7;
          }
          iVar12 = 0;
          while (iVar4 != iVar12) {
            if (plVar7[(long)iVar12 + 4] == 0) {
              return (long *)0x0;
            }
            iVar12 = iVar12 + 1;
            if (iVar4 == iVar12) {
              return plVar7;
            }
          }
          goto code_r0x015f0f1c;
        }
      }
      goto code_r0x015f0f24;
    }
code_r0x015f0f1c:
    uVar6 = func_0x00f78b24();
  }
  uVar6 = func_0x00f78ac0(uVar6,0);
  if ((bRam0000000003eb5419 & 1) == 0) {
    func_0x00f78a20(0x3d27e98);
    func_0x00f78a20(0x3d3e0a0);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5419 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar6,uRam0000000003d410f0);
  if (lVar5 == 0) {
code_r0x015f0fe0:
    uVar6 = func_0x00f78af4();
    if ((bRam0000000003eb541b & 1) == 0) {
      func_0x00f78a20(0x3d410e0);
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb541b = 1;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar6,uRam0000000003d410f0);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar5 + 0x78),0,0,0,0);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d410e0);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x78), lVar5 != 0)) {
        if (pcRam0000000003ec2fc0 == (code *)0x0) {
          pcRam0000000003ec2fc0 =
               (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar7 = (long *)(*pcRam0000000003ec2fc0)(0x3f800000,lVar5);
        return plVar7;
      }
    }
    func_0x00f78af4();
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar13 = *(long **)(lVar5 + 0xf8);
  plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData_TypeInfo*/ uRam0000000003d27e98);
  /*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData$$.ctor*/ func_0x0155cca4(plVar7,0);
  puVar2 = puRam0000000003d3e0a0;
  if (plVar13 == (long *)0x0) goto code_r0x015f0fe0;
  puVar10 = puRam0000000003d3e0a0;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar7 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    puVar10 = (undefined8 *)0x0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar6);
    if (plVar13 != (long *)0x0) {
      puVar10 = *(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 8);
      (*(code *)*puVar10)(plVar13,uVar6);
      if (plVar13[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar13[7],plVar7,uRam0000000003d3b330);
        puVar10 = (undefined8 *)plVar13[8];
        if ((puVar10 == (undefined8 *)0x0) || ((int)plVar7[2] <= *(int *)(puVar10 + 2))) {
code_r0x025dfcb4:
          plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x30))(plVar13)
          ;
          if (((ulong)plVar7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar7 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
            return plVar7;
          }
          return plVar7;
        }
        if (plVar13[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar13[7],0,puVar10,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x60))(plVar13);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar16 = func_0x00f78af4();
  plVar7 = auVar16._8_8_;
  lVar5 = auVar16._0_8_;
  if ((plVar7 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)), lVar5 != 0))
  {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x70))(lVar5,uVar6);
    if ((uVar3 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x78))(lVar5,plVar7);
    }
    return (long *)(ulong)(uVar3 ^ 1);
  }
  auVar16 = func_0x00f78af4();
  iVar4 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar5 = *(long *)(auVar16._0_8_ + 0x38);
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0x18);
    if (iVar4 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar12 = -0x80000000;
    uVar14 = 0;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar5 == 0) break;
      iVar1 = *(int *)(lVar5 + 0x10);
      uVar15 = uVar3;
      if (iVar1 <= iVar12) {
        uVar15 = uVar14;
      }
      if (iVar4 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar1 <= iVar12) {
        iVar1 = iVar12;
      }
      lVar5 = *(long *)(auVar16._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar12 = iVar1;
      uVar14 = uVar15;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar15 = 0;
code_r0x025dfe4c:
  *auVar16._8_8_ = uVar15;
  return (long *)(ulong)(0 < iVar4);
}



// ============================================================
// RVA: 0x15f0f34 | Atlas.UI.Screens.LeagueLeaderboardScreen.ShowStarsBox
// ============================================================

ulong Atlas_UI_Screens_LeagueLeaderboardScreen__ShowStarsBox(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  
  if ((bRam0000000003eb5419 & 1) == 0) {
    func_0x00f78a20(0x3d27e98);
    func_0x00f78a20(0x3d3e0a0);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5419 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
  if (lVar4 == 0) {
LAB_015f0fe0:
    uVar6 = func_0x00f78af4();
    if ((bRam0000000003eb541b & 1) == 0) {
      func_0x00f78a20(0x3d410e0);
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb541b = 1;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar6,uRam0000000003d410f0);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x78),0,0,0,0);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d410e0);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x78), lVar4 != 0)) {
        if (pcRam0000000003ec2fc0 == (code *)0x0) {
          pcRam0000000003ec2fc0 =
               (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*pcRam0000000003ec2fc0)(0x3f800000,lVar4);
        return uVar7;
      }
    }
    func_0x00f78af4();
    return 1;
  }
  plVar9 = *(long **)(lVar4 + 0xf8);
  plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData_TypeInfo*/ uRam0000000003d27e98);
  /*Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData$$.ctor*/ func_0x0155cca4(plVar5,0);
  puVar2 = puRam0000000003d3e0a0;
  if (plVar9 == (long *)0x0) goto LAB_015f0fe0;
  puVar8 = puRam0000000003d3e0a0;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    puVar8 = (undefined8 *)0x0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar6);
    if (plVar9 != (long *)0x0) {
      puVar8 = *(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 8);
      (*(code *)*puVar8)(plVar9,uVar6);
      if (plVar9[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9[7],plVar5,uRam0000000003d3b330);
        puVar8 = (undefined8 *)plVar9[8];
        if ((puVar8 == (undefined8 *)0x0) || ((int)plVar5[2] <= *(int *)(puVar8 + 2))) {
code_r0x025dfcb4:
          uVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x30))(plVar9);
          if ((uVar7 & 1) != 0) {
            return uVar7;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
          return uVar7;
        }
        if (plVar9[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar9[7],0,puVar8,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x60))(plVar9);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar14 = func_0x00f78af4();
  plVar5 = auVar14._8_8_;
  lVar4 = auVar14._0_8_;
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (lVar4 != 0) {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x70))(lVar4,uVar6);
      if ((uVar3 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x78))(lVar4,plVar5);
      }
      return (ulong)(uVar3 ^ 1);
    }
  }
  auVar14 = func_0x00f78af4();
  iVar10 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar4 = *(long *)(auVar14._0_8_ + 0x38);
  if (lVar4 != 0) {
    iVar10 = *(int *)(lVar4 + 0x18);
    if (iVar10 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar13 = -0x80000000;
    uVar11 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar4 == 0) break;
      iVar1 = *(int *)(lVar4 + 0x10);
      uVar12 = uVar3;
      if (iVar1 <= iVar13) {
        uVar12 = uVar11;
      }
      if (iVar10 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar1 <= iVar13) {
        iVar1 = iVar13;
      }
      lVar4 = *(long *)(auVar14._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar13 = iVar1;
      uVar11 = uVar12;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar12 = 0;
code_r0x025dfe4c:
  *auVar14._8_8_ = uVar12;
  return (ulong)(0 < iVar10);
}



// ============================================================
// RVA: 0x15f0fe4 | Atlas.UI.Screens.LeagueLeaderboardScreen.OnStartEnter
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardScreen__OnStartEnter(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb541b & 1) == 0) {
    func_0x00f78a20(0x3d410e0);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb541b = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar1 + 0x78),0,0,0,0);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x78), lVar1 != 0)) {
      if (pcRam0000000003ec2fc0 == (code *)0x0) {
        pcRam0000000003ec2fc0 =
             (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
      }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ec2fc0)(0x3f800000,lVar1);
      return uVar2;
    }
  }
  func_0x00f78af4();
  return 1;
}



// ============================================================
// RVA: 0x15f1094 | Atlas.UI.Screens.LeagueLeaderboardScreen.RequiresBeforeEnterCoroutine
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardScreen__RequiresBeforeEnterCoroutine(void)

{
  return 1;
}



// ============================================================
// RVA: 0x15f109c | Atlas.UI.Screens.LeagueLeaderboardScreen.OnBeforeEnterCoroutine
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150c794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c798) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__OnBeforeEnterCoroutine
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 extraout_w1;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *extraout_x8;
  uint uVar23;
  undefined4 uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 unaff_x22;
  long lVar29;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar30;
  undefined1 *puVar31;
  undefined *puVar32;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb541c & 1) == 0) {
    func_0x00f78a20(0x3d27e10);
    bRam0000000003eb541c = 1;
  }
  puVar14 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16_TypeInfo*/ uRam0000000003d27e10);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16$$.ctor*/ func_0x0155af98(puVar14,0,0);
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[4] = param_1;
    return puVar14;
  }
  uVar15 = func_0x00f78af4();
  puVar9 = &stack0xffffffffffffffa0;
  puStack_38 = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterEnter;
  ppppuVar30 = &pppuStack_40;
  lVar26 = 0x3eb5000;
  uVar19 = 0x3d410e0;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb541d & 1) == 0) {
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb541d = 1;
  }
  /*Core.UI2.UIScreen$$OnAfterEnter*/ func_0x02f8a620(uVar15,0);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d410e0);
  if (lVar16 == 0) {
code_r0x015f11b8:
    puVar32 = &Atlas_UI_Screens_LeagueLeaderboardScreen__SelectButton;
    auVar35 = func_0x00f78af4();
  }
  else {
    lVar26 = *(long *)(lVar16 + 0x198);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d410e0);
    if ((lVar16 == 0) || (lVar26 == 0)) goto code_r0x015f11b8;
    /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar26,*(undefined8 *)(lVar16 + 0x88),0);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d410e0);
    if (lVar16 == 0) goto code_r0x015f11b8;
    auVar35._8_8_ = *(undefined8 *)(lVar16 + 0x198);
    auVar35._0_8_ = uVar15;
    puVar9 = &stack0xffffffffffffffd0;
    uVar19 = 0x3d27e10;
    lVar26 = 0;
    uVar15 = param_1;
    ppppuVar30 = (undefined8 ****)pppuStack_40;
    puVar32 = puStack_38;
  }
  lVar16 = auVar35._8_8_;
  *(undefined8 *)(puVar9 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar9 + -0x28) = uVar19;
  *(long *)(puVar9 + -0x20) = lVar26;
  *(undefined8 *)(puVar9 + -0x18) = uVar15;
  *(undefined8 *****)(puVar9 + -0x10) = ppppuVar30;
  *(undefined **)(puVar9 + -8) = puVar32;
  if ((bRam0000000003eb541e & 1) == 0) {
    func_0x00f78a20(0x3d2c760);
    bRam0000000003eb541e = 1;
  }
  if (lVar16 != 0) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar16,0,0,0,0);
    *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
    *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar16,uRam0000000003d2c760);
      bRam0000000003eb70f8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar9 + -0x60) = 0x3d23990;
    *(undefined8 *)(puVar9 + -0x58) = 0x3eb7000;
    *(undefined1 (*) [16])(puVar9 + -0x50) = auVar35;
    *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
    *(undefined8 *)(puVar9 + -0x38) = 0x1cb56a8;
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar31 = *(undefined1 **)(puVar9 + -0x40);
    puVar32 = *(undefined **)(puVar9 + -0x38);
    lVar26 = *(long *)(puVar9 + -0x50);
    uVar15 = *(undefined8 *)(puVar9 + -0x48);
    puVar10 = puVar9 + -0x30;
    uVar19 = *(undefined8 *)(puVar9 + -0x60);
    uVar27 = *(undefined8 *)(puVar9 + -0x58);
code_r0x03248740:
    *(undefined8 *)(puVar10 + -0x30) = uVar19;
    *(undefined8 *)(puVar10 + -0x28) = uVar27;
    *(long *)(puVar10 + -0x20) = lVar26;
    *(undefined8 *)(puVar10 + -0x18) = uVar15;
    *(undefined1 **)(puVar10 + -0x10) = puVar31;
    *(undefined **)(puVar10 + -8) = puVar32;
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar16 == 0) {
      puVar14 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar16);
      puVar14 = (undefined8 *)(ulong)(uVar12 ^ 1);
    }
    return puVar14;
  }
  lVar26 = func_0x00f78af4();
  *(undefined8 *)(puVar9 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar9 + -0x58) = 0x3eb5000;
  *(long *)(puVar9 + -0x50) = auVar35._0_8_;
  *(undefined8 *)(puVar9 + -0x48) = 0;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions;
  if ((bRam0000000003eb541f & 1) == 0) {
    func_0x00f78a20(0x3d27e08);
    bRam0000000003eb541f = 1;
  }
  puVar14 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19_TypeInfo*/ uRam0000000003d27e08);
  uVar19 = 0;
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19$$.ctor*/ func_0x0155ae6c(puVar14,0);
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[4] = lVar26;
    return puVar14;
  }
  puVar14 = (undefined8 *)func_0x00f78af4();
  *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x40;
  *(undefined **)(puVar9 + -0x68) = &Atlas_League_LeagueManager__get_Player;
  if ((puVar14[0xe] != 0) && (lVar16 = *(long *)(puVar14[0xe] + 0x28), lVar16 != 0)) {
    uVar19 = *(undefined8 *)(lVar16 + 0xe8);
    uVar27 = *(undefined8 *)(lVar16 + 0x100);
    uVar15 = *(undefined8 *)(lVar16 + 0xf8);
    extraout_x8[1] = *(undefined8 *)(lVar16 + 0xf0);
    *extraout_x8 = uVar19;
    extraout_x8[3] = uVar27;
    extraout_x8[2] = uVar15;
    return puVar14;
  }
  lVar16 = func_0x00f78af4();
  *(undefined8 *)(puVar9 + -0x110) = 0;
  *(long *)(puVar9 + -0x108) = lVar26;
  *(undefined1 **)(puVar9 + -0x100) = puVar9 + -0x70;
  *(undefined **)(puVar9 + -0xf8) = &Atlas_League_LeagueManager__GetCurrentLeagueDefinition;
  if ((*(long *)(lVar16 + 0x18) == 0) || (*(long *)(lVar16 + 0xb0) == 0)) {
code_r0x015f1330:
    func_0x00f78af4();
  }
  else {
    lVar26 = *(long *)(*(long *)(lVar16 + 0x18) + 0x30);
    uVar12 = /*Atlas.League.LeaguePlayerSave$$get_PlayerLeague*/ func_0x0147e78c(*(long *)(lVar16 + 0xb0),0);
    if (lVar26 == 0) goto code_r0x015f1330;
    if (uVar12 < *(uint *)(lVar26 + 0x18)) {
      return *(undefined8 **)(lVar26 + (long)(int)uVar12 * 8 + 0x20);
    }
  }
  uVar15 = func_0x00f78b24();
  lVar16 = func_0x00f78ac0(uVar15,0);
  auVar5._8_8_ = 0x3d27e08;
  auVar5._0_8_ = lVar16;
  *(undefined8 *)(puVar9 + -0x130) = 0;
  *(long *)(puVar9 + -0x128) = lVar26;
  *(undefined1 **)(puVar9 + -0x120) = puVar9 + -0x100;
  *(undefined **)(puVar9 + -0x118) = &Atlas_UI_Screens_LeagueLeaderboardScreen__NextPressed;
  if ((bRam0000000003eb5422 & 1) == 0) {
    func_0x00f78a20(0x3d410e8);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5422 = 1;
  }
  if (*(long *)(lVar16 + 0x88) == 0) {
code_r0x015f13b0:
    if (*(long *)(lVar16 + 0x90) != 0) {
      lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar16,uRam0000000003d410f0);
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x80) == 0)) goto code_r0x015f1414;
      uVar19 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar26 + 0x80),*(undefined8 *)(lVar16 + 0x90));
    }
    lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar16,uRam0000000003d410e8);
    if (lVar26 != 0) {
      if (*(long *)(lVar26 + 0x18) != 0) {
        /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$Invoke*/ func_0x0155b4f8(*(long *)(lVar26 + 0x18),0);
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar16,uRam0000000003d410f0);
    if ((lVar26 != 0) && (*(long *)(lVar26 + 0x80) != 0)) {
      uVar19 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar26 + 0x80),*(undefined8 *)(lVar16 + 0x88));
      goto code_r0x015f13b0;
    }
  }
code_r0x015f1414:
  auVar35 = func_0x00f78af4();
  uVar15 = auVar35._8_8_;
  *(undefined1 **)(puVar9 + -0x140) = puVar9 + -0x120;
  *(undefined **)(puVar9 + -0x138) = &Atlas_League_LeagueManager__IsUnlockSeen;
  lVar26 = *(long *)(auVar35._0_8_ + 0xb0);
  if (lVar26 != 0) {
    *(undefined8 *)(puVar9 + -0x160) = unaff_x22;
    *(undefined8 *)(puVar9 + -0x158) = 0x3d27e08;
    *(undefined8 *)(puVar9 + -0x150) = 0x3d410f0;
    *(long *)(puVar9 + -0x148) = lVar16;
    *(undefined8 *)(puVar9 + -0x140) = *(undefined8 *)(puVar9 + -0x140);
    *(undefined8 *)(puVar9 + -0x138) = *(undefined8 *)(puVar9 + -0x138);
    if ((bRam0000000003eb48f7 & 1) == 0) {
      func_0x00f78a20(0x3d6f220,uVar15,0);
      bRam0000000003eb48f7 = 1;
    }
    uVar19 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar15,0);
    if (*(long *)(lVar26 + 0x10) != 0) {
      iVar11 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(lVar26 + 0x10),uVar19,0,0);
      return (undefined8 *)(ulong)(0 < iVar11);
    }
    auVar36 = func_0x00f78af4(0,uVar19);
    *(undefined8 *)(puVar9 + -400) = 0x3d6f220;
    *(undefined8 *)(puVar9 + -0x188) = 0x3eb4000;
    *(undefined8 *)(puVar9 + -0x180) = uVar15;
    *(long *)(puVar9 + -0x178) = lVar26;
    *(undefined1 **)(puVar9 + -0x170) = puVar9 + -0x140;
    *(undefined **)(puVar9 + -0x168) = &Atlas_League_LeaguePlayerSave__GetReplayCountDay;
    *(int *)(puVar9 + -0x194) = auVar36._8_4_;
    if ((bRam0000000003eb48f9 & 1) == 0) {
      func_0x00f78a20(0x3d6f218);
      bRam0000000003eb48f9 = 1;
    }
    uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar9 + -0x194,0);
    uVar19 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar19,0);
    lVar26 = *(long *)(auVar36._0_8_ + 0x10);
    if (lVar26 != 0) {
      puVar14 = (undefined8 *)/*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar26,uVar19,0,0);
      return puVar14;
    }
    func_0x00f78af4(0,uVar19);
    *(undefined8 *)(puVar9 + -0x1e0) = unaff_x24;
    *(undefined8 *)(puVar9 + -0x1d8) = unaff_x23;
    *(undefined8 *)(puVar9 + -0x1d0) = 0x3d6f220;
    *(undefined8 *)(puVar9 + -0x1c8) = 0x3eb4000;
    *(undefined8 *)(puVar9 + -0x1c0) = 0x3d6f218;
    *(long *)(puVar9 + -0x1b8) = auVar36._0_8_;
    *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x170;
    *(undefined **)(puVar9 + -0x1a8) = &Atlas_League_LeaguePlayerSave__ParseLeaderboardAIKey;
    if ((bRam0000000003eb48fa & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d7d010);
      func_0x00f78a20(0x3d6f1e8);
      bRam0000000003eb48fa = 1;
    }
    *(undefined4 *)(puVar9 + -0x1e4) = extraout_w1;
    uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar9 + -0x1e4);
    puVar14 = (undefined8 *)/*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar19,0);
    return puVar14;
  }
  auVar35 = func_0x00f78af4();
  *(undefined1 **)(puVar9 + -0x150) = puVar9 + -0x140;
  *(undefined **)(puVar9 + -0x148) = &Atlas_League_LeagueManager__SetIsSeen;
  lVar26 = *(long *)(auVar35._0_8_ + 0xb0);
  auVar33._8_8_ = auVar35._8_8_;
  auVar33._0_8_ = lVar26;
  if (lVar26 != 0) {
    puVar31 = *(undefined1 **)(puVar9 + -0x150);
    puVar32 = *(undefined **)(puVar9 + -0x148);
    puVar6 = puVar9 + -0x140;
    uVar19 = 1;
    uVar15 = 0x3d410f0;
    do {
      auVar35 = auVar33;
      uVar27 = uVar19;
      *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
      *(long *)(puVar6 + -0x28) = auVar5._8_8_;
      *(undefined8 *)(puVar6 + -0x20) = uVar15;
      *(long *)(puVar6 + -0x18) = auVar5._0_8_;
      *(undefined1 **)(puVar6 + -0x10) = puVar31;
      *(undefined **)(puVar6 + -8) = puVar32;
      puVar31 = puVar6 + -0x10;
      unaff_x22 = 0x3eb4000;
      unaff_x23 = 0x3d6f220;
      if ((bRam0000000003eb48f6 & 1) == 0) {
        func_0x00f78a20(0x3d6f220);
        bRam0000000003eb48f6 = 1;
      }
      uVar19 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar35._8_8_,0);
      lVar26 = *(long *)(auVar35._0_8_ + 0x10);
      if (lVar26 != 0) {
        /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(lVar26,uVar19,uVar27,0);
        puVar14 = *(undefined8 **)(auVar35._0_8_ + 0x10);
        if (puVar14 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar14 + 0x22) = 1;
          return puVar14;
        }
      }
      puVar32 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
      auVar33 = func_0x00f78af4();
      puVar6 = puVar6 + -0x40;
      uVar19 = 0;
      uVar15 = uVar27;
      auVar5 = auVar35;
    } while( true );
  }
  auVar35 = func_0x00f78af4();
  uVar15 = auVar35._0_8_;
  *(undefined8 *)(puVar9 + -400) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x188) = unaff_x23;
  *(undefined8 *)(puVar9 + -0x180) = unaff_x22;
  *(undefined8 *)(puVar9 + -0x178) = 0x3d27e08;
  *(undefined8 *)(puVar9 + -0x170) = 0x3d410f0;
  *(long *)(puVar9 + -0x168) = lVar16;
  *(undefined1 **)(puVar9 + -0x160) = puVar9 + -0x150;
  *(undefined **)(puVar9 + -0x158) = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnRewardPanelClicked
  ;
  lVar26 = 0x3d27e00;
  if ((bRam0000000003eb5426 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d63548);
    func_0x00f78a20(0x3d27e00);
    bRam0000000003eb5426 = 1;
  }
  lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0_TypeInfo*/ uRam0000000003d27e00);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0$$.ctor*/ func_0x0155ac18(lVar16,0);
  if (lVar16 != 0) {
    *(char *)(lVar16 + 0x10) = (char)uVar19;
    *(undefined8 *)(lVar16 + 0x18) = uVar15;
    *(int *)(lVar16 + 0x20) = auVar35._8_4_;
    *(undefined8 *)(lVar16 + 0x28) = param_4;
    puVar14 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar14,lVar16,uRam0000000003d63548,0);
    return puVar14;
  }
  uVar27 = func_0x00f78af4();
  puVar7 = puVar9 + -0x1c0;
  *(undefined8 *)(puVar9 + -0x1c0) = uVar15;
  *(undefined8 *)(puVar9 + -0x1b8) = uVar19;
  *(long *)(puVar9 + -0x1b0) = auVar35._8_8_;
  *(undefined8 *)(puVar9 + -0x1a8) = param_4;
  *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -0x160;
  *(undefined **)(puVar9 + -0x198) = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterExit;
  if ((bRam0000000003eb5427 & 1) == 0) {
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5427 = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d410f0);
  if ((lVar16 == 0) || (puVar14 = *(undefined8 **)(lVar16 + 0xb8), puVar14 == (undefined8 *)0x0)) {
    uVar19 = func_0x00f78af4();
    *(undefined8 *)(puVar9 + -0x200) = unaff_d9;
    *(undefined8 *)(puVar9 + -0x1f8) = unaff_d8;
    *(undefined8 *)(puVar9 + -0x1f0) = uVar15;
    *(undefined8 *)(puVar9 + -0x1e8) = 0x3d410f0;
    *(undefined8 *)(puVar9 + -0x1e0) = 0x3eb5000;
    *(undefined8 *)(puVar9 + -0x1d8) = uVar27;
    *(undefined1 **)(puVar9 + -0x1d0) = puVar9 + -0x1a0;
    *(undefined **)(puVar9 + -0x1c8) = &Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut;
    if ((bRam0000000003eb5429 & 1) == 0) {
      func_0x00f78a20(0x3d27e20);
      bRam0000000003eb5429 = 1;
    }
    puVar14 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar14,0,0);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[5] = uVar19;
      *(int *)(puVar14 + 4) = (int)extraout_d0;
      return puVar14;
    }
    uVar27 = func_0x00f78af4();
    *(undefined8 *)(puVar9 + -0x230) = uVar15;
    *(undefined8 *)(puVar9 + -0x228) = 0x3d27e20;
    *(undefined8 *)(puVar9 + -0x220) = 0;
    *(undefined8 *)(puVar9 + -0x218) = uVar19;
    *(undefined1 **)(puVar9 + -0x210) = puVar9 + -0x1d0;
    *(undefined **)(puVar9 + -0x208) = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnCompleteSlideOut
    ;
    uVar19 = 0x3d410f0;
    if ((bRam0000000003eb542a & 1) == 0) {
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb542a = 1;
    }
    lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d410f0);
    if (lVar26 == 0) {
      return (undefined8 *)0x0;
    }
    puVar14 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d410f0);
    if (puVar14 != (undefined8 *)0x0) {
      if (puVar14[0x10] == 0) {
        return puVar14;
      }
      lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d410f0);
      if (lVar26 != 0) {
        uVar19 = *(undefined8 *)(lVar26 + 0x80);
        uVar24 = 0x3f000000;
        puVar32 = &UNK_015f16a8;
        uVar20 = uVar27;
        goto code_r0x015f16d4;
      }
    }
    puVar32 = &Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn;
    uVar20 = func_0x00f78af4();
    uVar24 = extraout_s0;
code_r0x015f16d4:
    *(undefined8 *)(puVar9 + -0x270) = unaff_d9;
    *(ulong *)(puVar9 + -0x268) = extraout_d0 & 0xffffffff;
    *(undefined8 *)(puVar9 + -0x260) = uVar15;
    *(undefined8 *)(puVar9 + -600) = 0x3eb5000;
    *(undefined8 *)(puVar9 + -0x250) = uVar19;
    *(undefined8 *)(puVar9 + -0x248) = uVar27;
    *(undefined1 **)(puVar9 + -0x240) = puVar9 + -0x210;
    *(undefined **)(puVar9 + -0x238) = puVar32;
    if ((bRam0000000003eb542b & 1) == 0) {
      func_0x00f78a20(0x3d27e18);
      bRam0000000003eb542b = 1;
    }
    puVar14 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar14,0,0);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[4] = uVar20;
      *(undefined4 *)(puVar14 + 5) = uVar24;
      return puVar14;
    }
    lVar26 = func_0x00f78af4();
    *(undefined8 *)(puVar9 + -0x2a0) = uVar15;
    *(undefined8 *)(puVar9 + -0x298) = 0x3d27e18;
    *(undefined8 *)(puVar9 + -0x290) = 0;
    *(undefined8 *)(puVar9 + -0x288) = uVar20;
    *(undefined1 **)(puVar9 + -0x280) = puVar9 + -0x240;
    *(undefined **)(puVar9 + -0x278) = &Atlas_UI_Screens_LeagueLeaderboardScreen___ctor;
    if ((bRam0000000003eb542e & 1) == 0) {
      func_0x00f78a20(0x3d2c750);
      bRam0000000003eb542e = 1;
    }
    *(undefined8 *)(puVar9 + -0x280) = *(undefined8 *)(puVar9 + -0x280);
    *(undefined8 *)(puVar9 + -0x278) = *(undefined8 *)(puVar9 + -0x278);
    if (lVar26 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
      return puVar14;
    }
    auVar35 = func_0x00f78af4();
    puVar18 = auVar35._8_8_;
    puVar14 = auVar35._0_8_;
    uVar15 = puVar18[1];
    uVar19 = *puVar18;
    puVar14[2] = puVar18[2];
    puVar14[1] = uVar15;
    *puVar14 = uVar19;
    return puVar14;
  }
  uVar20 = 0;
  uVar21 = 0;
  uVar19 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + -0x1b0);
  uVar15 = *(undefined8 *)(puVar9 + -0x1a8);
  auVar34 = *(undefined1 (*) [16])(puVar9 + -0x1b0);
  lVar28 = *(long *)(puVar9 + -0x1c0);
  uVar27 = *(undefined8 *)(puVar9 + -0x1b8);
  *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
  *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
  lVar16 = puVar14[6];
  if (lVar16 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar16 + 0x18)) {
    *(undefined8 *)(lVar16 + 0x50) = 0;
    return puVar14;
  }
  uVar13 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar13,0);
  auVar2._8_8_ = auVar35._8_8_;
  auVar2._0_8_ = uVar19;
  *(undefined8 *)(puVar9 + -0x1c0) = uVar19;
  *(undefined8 *)(puVar9 + -0x1b8) = uVar15;
  *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
  *(undefined **)(puVar9 + -0x1a8) = &Atlas_UI_TopBarManager__ButtonPressed;
  puVar31 = puVar9 + -0x1b0;
  lVar16 = *(long *)(auVar35._0_8_ + 0x30);
  if (lVar16 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar12 = auVar35._8_4_;
    auVar34 = auVar2;
    if (uVar12 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = *(long *)(lVar16 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar16 == 0) {
        puVar14 = (undefined8 *)0x0;
        if (8 < uVar12) {
          return (undefined8 *)0x0;
        }
        uVar23 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar12 & 0x1f) & uVar23) == 0) {
          return puVar14;
        }
      }
      else {
        puVar14 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar16,0);
        if ((uVar12 != 0) || (((ulong)puVar14 & 1) == 0)) {
          if (8 < uVar12) {
            return puVar14;
          }
          uVar23 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar16 = *(long *)(auVar35._0_8_ + 0x28);
      auVar36._8_4_ = uVar12;
      auVar36._0_8_ = lVar16;
      auVar34 = auVar35;
      if (lVar16 != 0) {
        uVar20 = 0;
        uVar21 = 1;
        puVar31 = *(undefined1 **)(puVar9 + -0x1b0);
        puVar32 = *(undefined **)(puVar9 + -0x1a8);
        puVar7 = puVar9 + -0x1a0;
        auVar34 = *(undefined1 (*) [16])(puVar9 + -0x1c0);
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar19 = func_0x00f78b24();
  puVar32 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar36 = func_0x00f78ac0(uVar19,0);
code_r0x0150b5b8:
  auVar4._8_8_ = uVar21;
  auVar4._0_8_ = auVar36._0_8_;
  auVar3._8_8_ = uVar21;
  auVar3._0_8_ = auVar36._0_8_;
  if (auVar36._8_4_ < 9) {
    uVar17 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar36._8_4_ * 4);
    auVar4 = auVar3;
  }
  else {
    uVar17 = 0xffffffff;
  }
  do {
    puVar14 = auVar4._0_8_;
    uVar25 = auVar34._8_8_;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar34;
    *(undefined1 **)(puVar7 + -0x10) = puVar31;
    *(undefined **)(puVar7 + -8) = puVar32;
    uVar12 = (uint)uVar17;
    if (uVar12 == 0xffffffff) {
      return puVar14;
    }
    lVar16 = puVar14[0xe];
    if (lVar16 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar25 = uVar17;
      if (uVar12 < *(uint *)(lVar16 + 0x18)) {
        uVar24 = 2;
        if ((int)uVar20 == 0) {
          uVar24 = 0;
        }
        *(undefined4 *)(lVar16 + (long)(int)uVar12 * 0x60 + 0x5c) = uVar24;
        if ((auVar4._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar14,uVar17);
        }
        *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(long *)(puVar7 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar7 + -0x40) = 0x3d27e00;
        *(undefined8 *)(puVar7 + -0x38) = 0;
        *(long *)(puVar7 + -0x30) = lVar28;
        *(undefined8 *)(puVar7 + -0x28) = uVar27;
        *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
        *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
        *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        lVar16 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar22 = puVar14[0xe];
        lVar29 = 0;
        if (lVar22 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar22 + 0x18) <= uVar12) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar12;
        lVar22 = lVar22 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar22 + 0x20);
        lVar28 = *(long *)(lVar22 + 0x28);
        uVar19 = *(undefined8 *)(lVar22 + 0x30);
        uVar27 = *(undefined8 *)(lVar22 + 0x48);
        uVar15 = *(undefined8 *)(lVar22 + 0x40);
        *(undefined8 *)(puVar7 + -0xe8) = *(undefined8 *)(lVar22 + 0x38);
        *(undefined8 *)(puVar7 + -0xf0) = uVar19;
        *(undefined8 *)(puVar7 + -0xd8) = uVar27;
        *(undefined8 *)(puVar7 + -0xe0) = uVar15;
        lVar16 = *(long *)(lVar22 + 0x50);
        iVar11 = *(int *)(lVar22 + 0x58);
        iVar1 = *(int *)(lVar22 + 0x5c);
        lVar29 = *(long *)(lVar22 + 0x60);
        lVar26 = *(long *)(lVar22 + 0x68);
        uVar19 = *(undefined8 *)(lVar22 + 0x70);
        *(undefined8 *)(puVar7 + -0xf8) = *(undefined8 *)(lVar22 + 0x78);
        *(undefined8 *)(puVar7 + -0x100) = uVar19;
        if (iVar1 != iVar11) {
          if (iVar11 == 2) {
            if (iVar1 == 0) {
              if (lVar26 == 0) goto code_r0x0150c7d4;
              uVar15 = *(undefined8 *)(lVar22 + 0x38);
              uVar19 = *(undefined8 *)(lVar22 + 0x30);
              uVar20 = *(undefined8 *)(lVar22 + 0x48);
              uVar27 = *(undefined8 *)(lVar22 + 0x40);
              *(undefined8 *)(puVar7 + -0x118) = uVar15;
              *(undefined8 *)(puVar7 + -0x120) = uVar19;
              *(undefined8 *)(puVar7 + -0x108) = uVar20;
              *(undefined8 *)(puVar7 + -0x110) = uVar27;
              uVar13 = *(undefined8 *)(lVar22 + 0x78);
              uVar21 = *(undefined8 *)(lVar22 + 0x70);
              *(undefined8 *)(puVar7 + -0x128) = uVar13;
              *(undefined8 *)(puVar7 + -0x130) = uVar21;
              *(undefined8 *)(puVar7 + -200) = unaff_x26;
              *(long *)(puVar7 + -0xc0) = lVar28;
              *(undefined8 *)(puVar7 + -0xb0) = uVar15;
              *(undefined8 *)(puVar7 + -0xb8) = uVar19;
              *(undefined8 *)(puVar7 + -0xa0) = uVar20;
              *(undefined8 *)(puVar7 + -0xa8) = uVar27;
              *(long *)(puVar7 + -0x98) = lVar16;
              *(undefined8 *)(puVar7 + -0x90) = _UNK_033f8620;
              *(long *)(puVar7 + -0x88) = lVar29;
              *(long *)(puVar7 + -0x80) = lVar26;
              *(undefined8 *)(puVar7 + -0x70) = uVar13;
              *(undefined8 *)(puVar7 + -0x78) = uVar21;
              lVar22 = lVar26;
code_r0x0150c724:
              /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar22,puVar7 + -200,uRam0000000003d2a408);
              iVar11 = 1;
            }
            else {
              iVar11 = 2;
            }
code_r0x0150c72c:
            lVar22 = puVar14[0xe];
            if (lVar22 != 0) {
              if (*(uint *)(lVar22 + 0x18) <= uVar12) goto code_r0x0150c7d8;
              lVar22 = lVar22 + unaff_x25 * 0x60;
              *(undefined8 *)(lVar22 + 0x20) = unaff_x26;
              *(long *)(lVar22 + 0x28) = lVar28;
              uVar19 = *(undefined8 *)(puVar7 + -0xf0);
              uVar27 = *(undefined8 *)(puVar7 + -0xd8);
              uVar15 = *(undefined8 *)(puVar7 + -0xe0);
              *(undefined8 *)(lVar22 + 0x38) = *(undefined8 *)(puVar7 + -0xe8);
              *(undefined8 *)(lVar22 + 0x30) = uVar19;
              *(undefined8 *)(lVar22 + 0x48) = uVar27;
              *(undefined8 *)(lVar22 + 0x40) = uVar15;
              *(long *)(lVar22 + 0x50) = lVar16;
              *(int *)(lVar22 + 0x58) = iVar11;
              *(int *)(lVar22 + 0x5c) = iVar1;
              *(long *)(lVar22 + 0x60) = lVar29;
              *(long *)(lVar22 + 0x68) = lVar26;
              uVar19 = *(undefined8 *)(puVar7 + -0x100);
              *(undefined8 *)(lVar22 + 0x78) = *(undefined8 *)(puVar7 + -0xf8);
              *(undefined8 *)(lVar22 + 0x70) = uVar19;
              goto code_r0x0150c768;
            }
          }
          else {
            if (iVar11 != 0) goto code_r0x0150c72c;
            if (iVar1 != 2) {
              iVar11 = 0;
              goto code_r0x0150c72c;
            }
            if (((lVar28 != 0) && (lVar22 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar28,0), lVar22 != 0)) &&
               (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar22,1,0), lVar29 != 0)) {
              *(undefined8 *)(puVar7 + -200) = unaff_x26;
              *(long *)(puVar7 + -0xc0) = lVar28;
              *(undefined8 *)(puVar7 + -0xb0) = *(undefined8 *)(puVar7 + -0xe8);
              *(undefined8 *)(puVar7 + -0xb8) = *(undefined8 *)(puVar7 + -0xf0);
              *(undefined8 *)(puVar7 + -0xa0) = *(undefined8 *)(puVar7 + -0xd8);
              *(undefined8 *)(puVar7 + -0xa8) = *(undefined8 *)(puVar7 + -0xe0);
              *(long *)(puVar7 + -0x98) = lVar16;
              *(undefined8 *)(puVar7 + -0x90) = _UNK_033f8628;
              *(long *)(puVar7 + -0x88) = lVar29;
              *(long *)(puVar7 + -0x80) = lVar26;
              *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0xf8);
              *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x100);
              lVar22 = lVar29;
              goto code_r0x0150c724;
            }
          }
code_r0x0150c7d4:
          func_0x00f78af4();
code_r0x0150c7d8:
          uVar19 = func_0x00f78b24();
          auVar35 = func_0x00f78ac0(uVar19,0);
          lVar22 = auVar35._8_8_;
          *(undefined8 *)(puVar7 + -0x180) = unaff_x26;
          *(long *)(puVar7 + -0x178) = unaff_x25;
          *(long *)(puVar7 + -0x170) = lVar26;
          *(long *)(puVar7 + -0x168) = lVar29;
          *(long *)(puVar7 + -0x160) = lVar28;
          *(undefined8 **)(puVar7 + -0x158) = puVar14;
          *(ulong *)(puVar7 + -0x150) = uVar17;
          *(long *)(puVar7 + -0x148) = lVar16;
          *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
          if ((bRam0000000003eb4d55 & 1) == 0) {
            func_0x00f78a20(0x3d5e6e0);
            func_0x00f78a20(0x3d5e7a8);
            func_0x00f78a20(0x3d5e7d0);
            func_0x00f78a20(0x3d5e850);
            func_0x00f78a20(0x3d5e888);
            bRam0000000003eb4d55 = 1;
          }
          uVar19 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar22 + 0x18),*(undefined4 *)(lVar22 + 0x1c),
                                   *(undefined4 *)(lVar22 + 0x20),_UNK_033f8144,
                                   *(undefined8 *)(lVar22 + 0x10),0,0);
          uVar19 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar19,10,uRam0000000003d5e7a8);
          uVar19 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar19,*(undefined8 *)(lVar22 + 0x58),uRam0000000003d5e6e0);
          uVar19 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar19,1,uRam0000000003d5e888);
          puVar14 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar19,auVar35._0_8_,uRam0000000003d5e850);
          if ((puVar14 != (undefined8 *)0x0) && (*(char *)(puVar14 + 0x1d) != '\0')) {
            puVar14[6] = *(undefined8 *)(lVar22 + 0x10);
          }
          return puVar14;
        }
code_r0x0150c768:
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = 0;
        puVar10 = puVar7 + -0x160;
        *(long *)(puVar7 + -0x160) = lVar28;
        *(undefined8 **)(puVar7 + -0x158) = puVar14;
        *(ulong *)(puVar7 + -0x150) = uVar17;
        *(long *)(puVar7 + -0x148) = lVar16;
        *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x138) = &UNK_0150c798;
        puVar31 = puVar7 + -0x140;
        uVar27 = 0x3ec0000;
        uVar19 = 0x3d23990;
        if ((bRam0000000003ec027c & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027c = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar32 = &UNK_03249b00;
        lVar26 = lVar16;
        goto code_r0x03248740;
      }
    }
    uVar19 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar19,0);
    puVar8 = puVar7 + -0x30;
    puVar31 = puVar7 + -0x30;
    *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar16 = *(long *)(auVar35._0_8_ + 0x28);
    auVar34._8_8_ = auVar35._8_8_;
    auVar34._0_8_ = lVar16;
    if (lVar16 == 0) {
      puVar32 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar34 = func_0x00f78af4();
    }
    else {
      puVar8 = puVar7 + -0x20;
      puVar31 = *(undefined1 **)(puVar7 + -0x30);
      puVar32 = *(undefined **)(puVar7 + -0x28);
    }
    puVar7 = puVar8 + -0x20;
    *(undefined8 **)(puVar8 + -0x20) = puVar14;
    *(ulong *)(puVar8 + -0x18) = uVar25;
    *(undefined1 **)(puVar8 + -0x10) = puVar31;
    *(undefined **)(puVar8 + -8) = puVar32;
    puVar31 = puVar8 + -0x10;
    uVar17 = 4;
    uVar20 = 0;
    puVar32 = &UNK_0150bd10;
    auVar4 = auVar34;
  } while( true );
}



// ============================================================
// RVA: 0x15f1110 | Atlas.UI.Screens.LeagueLeaderboardScreen.OnAfterEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150c794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c798) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterEnter
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 extraout_w1;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *extraout_x8;
  uint uVar21;
  undefined4 uVar22;
  ulong uVar23;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar24;
  undefined8 unaff_x21;
  undefined8 uVar25;
  long lVar26;
  undefined8 unaff_x22;
  long lVar27;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined *unaff_x30;
  undefined *puVar29;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  
  puVar5 = &stack0xffffffffffffffd0;
  puVar28 = &stack0xfffffffffffffff0;
  uVar17 = 0x3d410e0;
  if ((bRam0000000003eb541d & 1) == 0) {
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb541d = 1;
  }
  /*Core.UI2.UIScreen$$OnAfterEnter*/ func_0x02f8a620(param_1,0);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
  lVar24 = 0x3eb5000;
  if (lVar12 == 0) {
LAB_015f11b8:
    unaff_x20 = lVar24;
    unaff_x30 = &Atlas_UI_Screens_LeagueLeaderboardScreen__SelectButton;
    auVar32 = func_0x00f78af4();
    lVar24 = auVar32._8_8_;
    uVar13 = auVar32._0_8_;
  }
  else {
    lVar24 = *(long *)(lVar12 + 0x198);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
    if ((lVar12 == 0) || (lVar24 == 0)) goto LAB_015f11b8;
    /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar24,*(undefined8 *)(lVar12 + 0x88),0);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410e0);
    if (lVar12 == 0) goto LAB_015f11b8;
    lVar24 = *(long *)(lVar12 + 0x198);
    puVar5 = (undefined1 *)register0x00000008;
    uVar13 = param_1;
    param_1 = unaff_x19;
    uVar17 = unaff_x21;
    puVar28 = unaff_x29;
  }
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x28) = uVar17;
  *(long *)(puVar5 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar5 + -0x18) = param_1;
  *(undefined1 **)(puVar5 + -0x10) = puVar28;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  if ((bRam0000000003eb541e & 1) == 0) {
    func_0x00f78a20(0x3d2c760);
    bRam0000000003eb541e = 1;
  }
  if (lVar24 != 0) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar24,0,0,0,0);
    *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
    *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
    *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
    *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar24,uRam0000000003d2c760);
      bRam0000000003eb70f8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar5 + -0x60) = 0x3d23990;
    *(undefined8 *)(puVar5 + -0x58) = 0x3eb7000;
    *(undefined8 *)(puVar5 + -0x50) = uVar13;
    *(long *)(puVar5 + -0x48) = lVar24;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(undefined8 *)(puVar5 + -0x38) = 0x1cb56a8;
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar28 = *(undefined1 **)(puVar5 + -0x40);
    puVar29 = *(undefined **)(puVar5 + -0x38);
    lVar12 = *(long *)(puVar5 + -0x50);
    uVar13 = *(undefined8 *)(puVar5 + -0x48);
    puVar8 = puVar5 + -0x30;
    uVar17 = *(undefined8 *)(puVar5 + -0x60);
    uVar25 = *(undefined8 *)(puVar5 + -0x58);
code_r0x03248740:
    *(undefined8 *)(puVar8 + -0x30) = uVar17;
    *(undefined8 *)(puVar8 + -0x28) = uVar25;
    *(long *)(puVar8 + -0x20) = lVar12;
    *(undefined8 *)(puVar8 + -0x18) = uVar13;
    *(undefined1 **)(puVar8 + -0x10) = puVar28;
    *(undefined **)(puVar8 + -8) = puVar29;
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar24 == 0) {
      puVar14 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar24);
      puVar14 = (undefined8 *)(ulong)(uVar10 ^ 1);
    }
    return puVar14;
  }
  lVar24 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x58) = 0x3eb5000;
  *(undefined8 *)(puVar5 + -0x50) = uVar13;
  *(undefined8 *)(puVar5 + -0x48) = 0;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions;
  if ((bRam0000000003eb541f & 1) == 0) {
    func_0x00f78a20(0x3d27e08);
    bRam0000000003eb541f = 1;
  }
  puVar14 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19_TypeInfo*/ uRam0000000003d27e08);
  uVar17 = 0;
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19$$.ctor*/ func_0x0155ae6c(puVar14,0);
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[4] = lVar24;
    return puVar14;
  }
  puVar14 = (undefined8 *)func_0x00f78af4();
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x40;
  *(undefined **)(puVar5 + -0x68) = &Atlas_League_LeagueManager__get_Player;
  if ((puVar14[0xe] != 0) && (lVar12 = *(long *)(puVar14[0xe] + 0x28), lVar12 != 0)) {
    uVar17 = *(undefined8 *)(lVar12 + 0xe8);
    uVar25 = *(undefined8 *)(lVar12 + 0x100);
    uVar13 = *(undefined8 *)(lVar12 + 0xf8);
    extraout_x8[1] = *(undefined8 *)(lVar12 + 0xf0);
    *extraout_x8 = uVar17;
    extraout_x8[3] = uVar25;
    extraout_x8[2] = uVar13;
    return puVar14;
  }
  lVar12 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x110) = 0;
  *(long *)(puVar5 + -0x108) = lVar24;
  *(undefined1 **)(puVar5 + -0x100) = puVar5 + -0x70;
  *(undefined **)(puVar5 + -0xf8) = &Atlas_League_LeagueManager__GetCurrentLeagueDefinition;
  if ((*(long *)(lVar12 + 0x18) == 0) || (*(long *)(lVar12 + 0xb0) == 0)) {
code_r0x015f1330:
    func_0x00f78af4();
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar12 + 0x18) + 0x30);
    uVar10 = /*Atlas.League.LeaguePlayerSave$$get_PlayerLeague*/ func_0x0147e78c(*(long *)(lVar12 + 0xb0),0);
    if (lVar24 == 0) goto code_r0x015f1330;
    if (uVar10 < *(uint *)(lVar24 + 0x18)) {
      return *(undefined8 **)(lVar24 + (long)(int)uVar10 * 8 + 0x20);
    }
  }
  uVar13 = func_0x00f78b24();
  lVar12 = func_0x00f78ac0(uVar13,0);
  auVar32._8_8_ = 0x3d27e08;
  auVar32._0_8_ = lVar12;
  *(undefined8 *)(puVar5 + -0x130) = 0;
  *(long *)(puVar5 + -0x128) = lVar24;
  *(undefined1 **)(puVar5 + -0x120) = puVar5 + -0x100;
  *(undefined **)(puVar5 + -0x118) = &Atlas_UI_Screens_LeagueLeaderboardScreen__NextPressed;
  if ((bRam0000000003eb5422 & 1) == 0) {
    func_0x00f78a20(0x3d410e8);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5422 = 1;
  }
  if (*(long *)(lVar12 + 0x88) == 0) {
code_r0x015f13b0:
    if (*(long *)(lVar12 + 0x90) != 0) {
      lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d410f0);
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x80) == 0)) goto code_r0x015f1414;
      uVar17 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar24 + 0x80),*(undefined8 *)(lVar12 + 0x90));
    }
    lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d410e8);
    if (lVar24 != 0) {
      if (*(long *)(lVar24 + 0x18) != 0) {
        /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$Invoke*/ func_0x0155b4f8(*(long *)(lVar24 + 0x18),0);
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d410f0);
    if ((lVar24 != 0) && (*(long *)(lVar24 + 0x80) != 0)) {
      uVar17 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar24 + 0x80),*(undefined8 *)(lVar12 + 0x88));
      goto code_r0x015f13b0;
    }
  }
code_r0x015f1414:
  auVar31 = func_0x00f78af4();
  uVar13 = auVar31._8_8_;
  *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x120;
  *(undefined **)(puVar5 + -0x138) = &Atlas_League_LeagueManager__IsUnlockSeen;
  lVar24 = *(long *)(auVar31._0_8_ + 0xb0);
  if (lVar24 != 0) {
    *(undefined8 *)(puVar5 + -0x160) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x158) = 0x3d27e08;
    *(undefined8 *)(puVar5 + -0x150) = 0x3d410f0;
    *(long *)(puVar5 + -0x148) = lVar12;
    *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0x140);
    *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0x138);
    if ((bRam0000000003eb48f7 & 1) == 0) {
      func_0x00f78a20(0x3d6f220,uVar13,0);
      bRam0000000003eb48f7 = 1;
    }
    uVar17 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar13,0);
    if (*(long *)(lVar24 + 0x10) != 0) {
      iVar9 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(lVar24 + 0x10),uVar17,0,0);
      return (undefined8 *)(ulong)(0 < iVar9);
    }
    auVar33 = func_0x00f78af4(0,uVar17);
    *(undefined8 *)(puVar5 + -400) = 0x3d6f220;
    *(undefined8 *)(puVar5 + -0x188) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x180) = uVar13;
    *(long *)(puVar5 + -0x178) = lVar24;
    *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0x140;
    *(undefined **)(puVar5 + -0x168) = &Atlas_League_LeaguePlayerSave__GetReplayCountDay;
    *(int *)(puVar5 + -0x194) = auVar33._8_4_;
    if ((bRam0000000003eb48f9 & 1) == 0) {
      func_0x00f78a20(0x3d6f218);
      bRam0000000003eb48f9 = 1;
    }
    uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar5 + -0x194,0);
    uVar17 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar17,0);
    lVar24 = *(long *)(auVar33._0_8_ + 0x10);
    if (lVar24 != 0) {
      puVar14 = (undefined8 *)/*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar24,uVar17,0,0);
      return puVar14;
    }
    func_0x00f78af4(0,uVar17);
    *(undefined8 *)(puVar5 + -0x1e0) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x1d8) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x1d0) = 0x3d6f220;
    *(undefined8 *)(puVar5 + -0x1c8) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x1c0) = 0x3d6f218;
    *(long *)(puVar5 + -0x1b8) = auVar33._0_8_;
    *(undefined1 **)(puVar5 + -0x1b0) = puVar5 + -0x170;
    *(undefined **)(puVar5 + -0x1a8) = &Atlas_League_LeaguePlayerSave__ParseLeaderboardAIKey;
    if ((bRam0000000003eb48fa & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d7d010);
      func_0x00f78a20(0x3d6f1e8);
      bRam0000000003eb48fa = 1;
    }
    *(undefined4 *)(puVar5 + -0x1e4) = extraout_w1;
    uVar17 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar5 + -0x1e4);
    puVar14 = (undefined8 *)/*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar17,0);
    return puVar14;
  }
  auVar31 = func_0x00f78af4();
  *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0x140;
  *(undefined **)(puVar5 + -0x148) = &Atlas_League_LeagueManager__SetIsSeen;
  lVar24 = *(long *)(auVar31._0_8_ + 0xb0);
  auVar31._8_8_ = auVar31._8_8_;
  auVar31._0_8_ = lVar24;
  if (lVar24 != 0) {
    puVar28 = *(undefined1 **)(puVar5 + -0x150);
    puVar29 = *(undefined **)(puVar5 + -0x148);
    puVar5 = puVar5 + -0x140;
    uVar17 = 1;
    uVar13 = 0x3d410f0;
    do {
      auVar30 = auVar31;
      uVar25 = uVar17;
      *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
      *(long *)(puVar5 + -0x28) = auVar32._8_8_;
      *(undefined8 *)(puVar5 + -0x20) = uVar13;
      *(long *)(puVar5 + -0x18) = auVar32._0_8_;
      *(undefined1 **)(puVar5 + -0x10) = puVar28;
      *(undefined **)(puVar5 + -8) = puVar29;
      puVar28 = puVar5 + -0x10;
      unaff_x22 = 0x3eb4000;
      unaff_x23 = 0x3d6f220;
      if ((bRam0000000003eb48f6 & 1) == 0) {
        func_0x00f78a20(0x3d6f220);
        bRam0000000003eb48f6 = 1;
      }
      uVar17 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar30._8_8_,0);
      lVar24 = *(long *)(auVar30._0_8_ + 0x10);
      if (lVar24 != 0) {
        /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(lVar24,uVar17,uVar25,0);
        puVar14 = *(undefined8 **)(auVar30._0_8_ + 0x10);
        if (puVar14 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar14 + 0x22) = 1;
          return puVar14;
        }
      }
      puVar29 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
      auVar31 = func_0x00f78af4();
      puVar5 = puVar5 + -0x40;
      uVar17 = 0;
      uVar13 = uVar25;
      auVar32 = auVar30;
    } while( true );
  }
  auVar32 = func_0x00f78af4();
  uVar13 = auVar32._0_8_;
  *(undefined8 *)(puVar5 + -400) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x188) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x180) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x178) = 0x3d27e08;
  *(undefined8 *)(puVar5 + -0x170) = 0x3d410f0;
  *(long *)(puVar5 + -0x168) = lVar12;
  *(undefined1 **)(puVar5 + -0x160) = puVar5 + -0x150;
  *(undefined **)(puVar5 + -0x158) = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnRewardPanelClicked
  ;
  lVar12 = 0x3d27e00;
  if ((bRam0000000003eb5426 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d63548);
    func_0x00f78a20(0x3d27e00);
    bRam0000000003eb5426 = 1;
  }
  lVar24 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0_TypeInfo*/ uRam0000000003d27e00);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0$$.ctor*/ func_0x0155ac18(lVar24,0);
  if (lVar24 != 0) {
    *(char *)(lVar24 + 0x10) = (char)uVar17;
    *(undefined8 *)(lVar24 + 0x18) = uVar13;
    *(int *)(lVar24 + 0x20) = auVar32._8_4_;
    *(undefined8 *)(lVar24 + 0x28) = param_4;
    puVar14 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar14,lVar24,uRam0000000003d63548,0);
    return puVar14;
  }
  uVar25 = func_0x00f78af4();
  puVar6 = puVar5 + -0x1c0;
  *(undefined8 *)(puVar5 + -0x1c0) = uVar13;
  *(undefined8 *)(puVar5 + -0x1b8) = uVar17;
  *(long *)(puVar5 + -0x1b0) = auVar32._8_8_;
  *(undefined8 *)(puVar5 + -0x1a8) = param_4;
  *(undefined1 **)(puVar5 + -0x1a0) = puVar5 + -0x160;
  *(undefined **)(puVar5 + -0x198) = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterExit;
  if ((bRam0000000003eb5427 & 1) == 0) {
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5427 = 1;
  }
  lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar25,uRam0000000003d410f0);
  if ((lVar24 == 0) || (puVar14 = *(undefined8 **)(lVar24 + 0xb8), puVar14 == (undefined8 *)0x0)) {
    uVar17 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x200) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x1f8) = unaff_d8;
    *(undefined8 *)(puVar5 + -0x1f0) = uVar13;
    *(undefined8 *)(puVar5 + -0x1e8) = 0x3d410f0;
    *(undefined8 *)(puVar5 + -0x1e0) = 0x3eb5000;
    *(undefined8 *)(puVar5 + -0x1d8) = uVar25;
    *(undefined1 **)(puVar5 + -0x1d0) = puVar5 + -0x1a0;
    *(undefined **)(puVar5 + -0x1c8) = &Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut;
    if ((bRam0000000003eb5429 & 1) == 0) {
      func_0x00f78a20(0x3d27e20);
      bRam0000000003eb5429 = 1;
    }
    puVar14 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar14,0,0);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[5] = uVar17;
      *(int *)(puVar14 + 4) = (int)extraout_d0;
      return puVar14;
    }
    uVar25 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x230) = uVar13;
    *(undefined8 *)(puVar5 + -0x228) = 0x3d27e20;
    *(undefined8 *)(puVar5 + -0x220) = 0;
    *(undefined8 *)(puVar5 + -0x218) = uVar17;
    *(undefined1 **)(puVar5 + -0x210) = puVar5 + -0x1d0;
    *(undefined **)(puVar5 + -0x208) = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnCompleteSlideOut
    ;
    uVar17 = 0x3d410f0;
    if ((bRam0000000003eb542a & 1) == 0) {
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb542a = 1;
    }
    lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar25,uRam0000000003d410f0);
    if (lVar24 == 0) {
      return (undefined8 *)0x0;
    }
    puVar14 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar25,uRam0000000003d410f0);
    if (puVar14 != (undefined8 *)0x0) {
      if (puVar14[0x10] == 0) {
        return puVar14;
      }
      lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar25,uRam0000000003d410f0);
      if (lVar24 != 0) {
        uVar17 = *(undefined8 *)(lVar24 + 0x80);
        uVar22 = 0x3f000000;
        puVar29 = &UNK_015f16a8;
        uVar18 = uVar25;
        goto code_r0x015f16d4;
      }
    }
    puVar29 = &Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn;
    uVar18 = func_0x00f78af4();
    uVar22 = extraout_s0;
code_r0x015f16d4:
    *(undefined8 *)(puVar5 + -0x270) = unaff_d9;
    *(ulong *)(puVar5 + -0x268) = extraout_d0 & 0xffffffff;
    *(undefined8 *)(puVar5 + -0x260) = uVar13;
    *(undefined8 *)(puVar5 + -600) = 0x3eb5000;
    *(undefined8 *)(puVar5 + -0x250) = uVar17;
    *(undefined8 *)(puVar5 + -0x248) = uVar25;
    *(undefined1 **)(puVar5 + -0x240) = puVar5 + -0x210;
    *(undefined **)(puVar5 + -0x238) = puVar29;
    if ((bRam0000000003eb542b & 1) == 0) {
      func_0x00f78a20(0x3d27e18);
      bRam0000000003eb542b = 1;
    }
    puVar14 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar14,0,0);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[4] = uVar18;
      *(undefined4 *)(puVar14 + 5) = uVar22;
      return puVar14;
    }
    lVar24 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x2a0) = uVar13;
    *(undefined8 *)(puVar5 + -0x298) = 0x3d27e18;
    *(undefined8 *)(puVar5 + -0x290) = 0;
    *(undefined8 *)(puVar5 + -0x288) = uVar18;
    *(undefined1 **)(puVar5 + -0x280) = puVar5 + -0x240;
    *(undefined **)(puVar5 + -0x278) = &Atlas_UI_Screens_LeagueLeaderboardScreen___ctor;
    if ((bRam0000000003eb542e & 1) == 0) {
      func_0x00f78a20(0x3d2c750);
      bRam0000000003eb542e = 1;
    }
    *(undefined8 *)(puVar5 + -0x280) = *(undefined8 *)(puVar5 + -0x280);
    *(undefined8 *)(puVar5 + -0x278) = *(undefined8 *)(puVar5 + -0x278);
    if (lVar24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
      return puVar14;
    }
    auVar32 = func_0x00f78af4();
    puVar16 = auVar32._8_8_;
    puVar14 = auVar32._0_8_;
    uVar13 = puVar16[1];
    uVar17 = *puVar16;
    puVar14[2] = puVar16[2];
    puVar14[1] = uVar13;
    *puVar14 = uVar17;
    return puVar14;
  }
  uVar18 = 0;
  uVar19 = 0;
  uVar17 = *(undefined8 *)*(undefined1 (*) [16])(puVar5 + -0x1b0);
  uVar13 = *(undefined8 *)(puVar5 + -0x1a8);
  auVar30 = *(undefined1 (*) [16])(puVar5 + -0x1b0);
  lVar26 = *(long *)(puVar5 + -0x1c0);
  uVar25 = *(undefined8 *)(puVar5 + -0x1b8);
  *(undefined8 *)(puVar5 + -0x1a0) = *(undefined8 *)(puVar5 + -0x1a0);
  *(undefined8 *)(puVar5 + -0x198) = *(undefined8 *)(puVar5 + -0x198);
  lVar24 = puVar14[6];
  if (lVar24 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar24 + 0x18)) {
    *(undefined8 *)(lVar24 + 0x50) = 0;
    return puVar14;
  }
  uVar11 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar11,0);
  auVar2._8_8_ = auVar32._8_8_;
  auVar2._0_8_ = uVar17;
  *(undefined8 *)(puVar5 + -0x1c0) = uVar17;
  *(undefined8 *)(puVar5 + -0x1b8) = uVar13;
  *(undefined1 **)(puVar5 + -0x1b0) = puVar5 + -0x1a0;
  *(undefined **)(puVar5 + -0x1a8) = &Atlas_UI_TopBarManager__ButtonPressed;
  puVar28 = puVar5 + -0x1b0;
  lVar24 = *(long *)(auVar32._0_8_ + 0x30);
  if (lVar24 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar10 = auVar32._8_4_;
    auVar30 = auVar2;
    if (uVar10 < *(uint *)(lVar24 + 0x18)) {
      lVar24 = *(long *)(lVar24 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar24 == 0) {
        puVar14 = (undefined8 *)0x0;
        if (8 < uVar10) {
          return (undefined8 *)0x0;
        }
        uVar21 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar10 & 0x1f) & uVar21) == 0) {
          return puVar14;
        }
      }
      else {
        puVar14 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar24,0);
        if ((uVar10 != 0) || (((ulong)puVar14 & 1) == 0)) {
          if (8 < uVar10) {
            return puVar14;
          }
          uVar21 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar24 = *(long *)(auVar32._0_8_ + 0x28);
      auVar33._8_4_ = uVar10;
      auVar33._0_8_ = lVar24;
      auVar30 = auVar32;
      if (lVar24 != 0) {
        uVar18 = 0;
        uVar19 = 1;
        puVar28 = *(undefined1 **)(puVar5 + -0x1b0);
        puVar29 = *(undefined **)(puVar5 + -0x1a8);
        puVar6 = puVar5 + -0x1a0;
        auVar30 = *(undefined1 (*) [16])(puVar5 + -0x1c0);
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar17 = func_0x00f78b24();
  puVar29 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar33 = func_0x00f78ac0(uVar17,0);
code_r0x0150b5b8:
  auVar4._8_8_ = uVar19;
  auVar4._0_8_ = auVar33._0_8_;
  auVar3._8_8_ = uVar19;
  auVar3._0_8_ = auVar33._0_8_;
  if (auVar33._8_4_ < 9) {
    uVar15 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar33._8_4_ * 4);
    auVar4 = auVar3;
  }
  else {
    uVar15 = 0xffffffff;
  }
  do {
    puVar14 = auVar4._0_8_;
    uVar23 = auVar30._8_8_;
    *(undefined1 (*) [16])(puVar6 + -0x20) = auVar30;
    *(undefined1 **)(puVar6 + -0x10) = puVar28;
    *(undefined **)(puVar6 + -8) = puVar29;
    uVar10 = (uint)uVar15;
    if (uVar10 == 0xffffffff) {
      return puVar14;
    }
    lVar24 = puVar14[0xe];
    if (lVar24 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar23 = uVar15;
      if (uVar10 < *(uint *)(lVar24 + 0x18)) {
        uVar22 = 2;
        if ((int)uVar18 == 0) {
          uVar22 = 0;
        }
        *(undefined4 *)(lVar24 + (long)(int)uVar10 * 0x60 + 0x5c) = uVar22;
        if ((auVar4._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar14,uVar15);
        }
        *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
        *(long *)(puVar6 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar6 + -0x40) = 0x3d27e00;
        *(undefined8 *)(puVar6 + -0x38) = 0;
        *(long *)(puVar6 + -0x30) = lVar26;
        *(undefined8 *)(puVar6 + -0x28) = uVar25;
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
        *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        lVar24 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar20 = puVar14[0xe];
        lVar27 = 0;
        if (lVar20 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar20 + 0x18) <= uVar10) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar10;
        lVar20 = lVar20 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar20 + 0x20);
        lVar26 = *(long *)(lVar20 + 0x28);
        uVar17 = *(undefined8 *)(lVar20 + 0x30);
        uVar25 = *(undefined8 *)(lVar20 + 0x48);
        uVar13 = *(undefined8 *)(lVar20 + 0x40);
        *(undefined8 *)(puVar6 + -0xe8) = *(undefined8 *)(lVar20 + 0x38);
        *(undefined8 *)(puVar6 + -0xf0) = uVar17;
        *(undefined8 *)(puVar6 + -0xd8) = uVar25;
        *(undefined8 *)(puVar6 + -0xe0) = uVar13;
        lVar24 = *(long *)(lVar20 + 0x50);
        iVar9 = *(int *)(lVar20 + 0x58);
        iVar1 = *(int *)(lVar20 + 0x5c);
        lVar27 = *(long *)(lVar20 + 0x60);
        lVar12 = *(long *)(lVar20 + 0x68);
        uVar17 = *(undefined8 *)(lVar20 + 0x70);
        *(undefined8 *)(puVar6 + -0xf8) = *(undefined8 *)(lVar20 + 0x78);
        *(undefined8 *)(puVar6 + -0x100) = uVar17;
        if (iVar1 != iVar9) {
          if (iVar9 == 2) {
            if (iVar1 == 0) {
              if (lVar12 == 0) goto code_r0x0150c7d4;
              uVar13 = *(undefined8 *)(lVar20 + 0x38);
              uVar17 = *(undefined8 *)(lVar20 + 0x30);
              uVar18 = *(undefined8 *)(lVar20 + 0x48);
              uVar25 = *(undefined8 *)(lVar20 + 0x40);
              *(undefined8 *)(puVar6 + -0x118) = uVar13;
              *(undefined8 *)(puVar6 + -0x120) = uVar17;
              *(undefined8 *)(puVar6 + -0x108) = uVar18;
              *(undefined8 *)(puVar6 + -0x110) = uVar25;
              uVar11 = *(undefined8 *)(lVar20 + 0x78);
              uVar19 = *(undefined8 *)(lVar20 + 0x70);
              *(undefined8 *)(puVar6 + -0x128) = uVar11;
              *(undefined8 *)(puVar6 + -0x130) = uVar19;
              *(undefined8 *)(puVar6 + -200) = unaff_x26;
              *(long *)(puVar6 + -0xc0) = lVar26;
              *(undefined8 *)(puVar6 + -0xb0) = uVar13;
              *(undefined8 *)(puVar6 + -0xb8) = uVar17;
              *(undefined8 *)(puVar6 + -0xa0) = uVar18;
              *(undefined8 *)(puVar6 + -0xa8) = uVar25;
              *(long *)(puVar6 + -0x98) = lVar24;
              *(undefined8 *)(puVar6 + -0x90) = _UNK_033f8620;
              *(long *)(puVar6 + -0x88) = lVar27;
              *(long *)(puVar6 + -0x80) = lVar12;
              *(undefined8 *)(puVar6 + -0x70) = uVar11;
              *(undefined8 *)(puVar6 + -0x78) = uVar19;
              lVar20 = lVar12;
code_r0x0150c724:
              /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar20,puVar6 + -200,uRam0000000003d2a408);
              iVar9 = 1;
            }
            else {
              iVar9 = 2;
            }
code_r0x0150c72c:
            lVar20 = puVar14[0xe];
            if (lVar20 != 0) {
              if (*(uint *)(lVar20 + 0x18) <= uVar10) goto code_r0x0150c7d8;
              lVar20 = lVar20 + unaff_x25 * 0x60;
              *(undefined8 *)(lVar20 + 0x20) = unaff_x26;
              *(long *)(lVar20 + 0x28) = lVar26;
              uVar17 = *(undefined8 *)(puVar6 + -0xf0);
              uVar25 = *(undefined8 *)(puVar6 + -0xd8);
              uVar13 = *(undefined8 *)(puVar6 + -0xe0);
              *(undefined8 *)(lVar20 + 0x38) = *(undefined8 *)(puVar6 + -0xe8);
              *(undefined8 *)(lVar20 + 0x30) = uVar17;
              *(undefined8 *)(lVar20 + 0x48) = uVar25;
              *(undefined8 *)(lVar20 + 0x40) = uVar13;
              *(long *)(lVar20 + 0x50) = lVar24;
              *(int *)(lVar20 + 0x58) = iVar9;
              *(int *)(lVar20 + 0x5c) = iVar1;
              *(long *)(lVar20 + 0x60) = lVar27;
              *(long *)(lVar20 + 0x68) = lVar12;
              uVar17 = *(undefined8 *)(puVar6 + -0x100);
              *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(puVar6 + -0xf8);
              *(undefined8 *)(lVar20 + 0x70) = uVar17;
              goto code_r0x0150c768;
            }
          }
          else {
            if (iVar9 != 0) goto code_r0x0150c72c;
            if (iVar1 != 2) {
              iVar9 = 0;
              goto code_r0x0150c72c;
            }
            if (((lVar26 != 0) && (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar26,0), lVar20 != 0)) &&
               (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar20,1,0), lVar27 != 0)) {
              *(undefined8 *)(puVar6 + -200) = unaff_x26;
              *(long *)(puVar6 + -0xc0) = lVar26;
              *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0xe8);
              *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0xf0);
              *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0xd8);
              *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(puVar6 + -0xe0);
              *(long *)(puVar6 + -0x98) = lVar24;
              *(undefined8 *)(puVar6 + -0x90) = _UNK_033f8628;
              *(long *)(puVar6 + -0x88) = lVar27;
              *(long *)(puVar6 + -0x80) = lVar12;
              *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0xf8);
              *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x100);
              lVar20 = lVar27;
              goto code_r0x0150c724;
            }
          }
code_r0x0150c7d4:
          func_0x00f78af4();
code_r0x0150c7d8:
          uVar17 = func_0x00f78b24();
          auVar32 = func_0x00f78ac0(uVar17,0);
          lVar20 = auVar32._8_8_;
          *(undefined8 *)(puVar6 + -0x180) = unaff_x26;
          *(long *)(puVar6 + -0x178) = unaff_x25;
          *(long *)(puVar6 + -0x170) = lVar12;
          *(long *)(puVar6 + -0x168) = lVar27;
          *(long *)(puVar6 + -0x160) = lVar26;
          *(undefined8 **)(puVar6 + -0x158) = puVar14;
          *(ulong *)(puVar6 + -0x150) = uVar15;
          *(long *)(puVar6 + -0x148) = lVar24;
          *(undefined1 **)(puVar6 + -0x140) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
          if ((bRam0000000003eb4d55 & 1) == 0) {
            func_0x00f78a20(0x3d5e6e0);
            func_0x00f78a20(0x3d5e7a8);
            func_0x00f78a20(0x3d5e7d0);
            func_0x00f78a20(0x3d5e850);
            func_0x00f78a20(0x3d5e888);
            bRam0000000003eb4d55 = 1;
          }
          uVar17 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar20 + 0x18),*(undefined4 *)(lVar20 + 0x1c),
                                   *(undefined4 *)(lVar20 + 0x20),_UNK_033f8144,
                                   *(undefined8 *)(lVar20 + 0x10),0,0);
          uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar17,10,uRam0000000003d5e7a8);
          uVar17 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar17,*(undefined8 *)(lVar20 + 0x58),uRam0000000003d5e6e0);
          uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar17,1,uRam0000000003d5e888);
          puVar14 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar17,auVar32._0_8_,uRam0000000003d5e850);
          if ((puVar14 != (undefined8 *)0x0) && (*(char *)(puVar14 + 0x1d) != '\0')) {
            puVar14[6] = *(undefined8 *)(lVar20 + 0x10);
          }
          return puVar14;
        }
code_r0x0150c768:
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = 0;
        puVar8 = puVar6 + -0x160;
        *(long *)(puVar6 + -0x160) = lVar26;
        *(undefined8 **)(puVar6 + -0x158) = puVar14;
        *(ulong *)(puVar6 + -0x150) = uVar15;
        *(long *)(puVar6 + -0x148) = lVar24;
        *(undefined1 **)(puVar6 + -0x140) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x138) = &UNK_0150c798;
        puVar28 = puVar6 + -0x140;
        uVar25 = 0x3ec0000;
        uVar17 = 0x3d23990;
        if ((bRam0000000003ec027c & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027c = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar29 = &UNK_03249b00;
        lVar12 = lVar24;
        goto code_r0x03248740;
      }
    }
    uVar17 = func_0x00f78b24();
    auVar32 = func_0x00f78ac0(uVar17,0);
    puVar7 = puVar6 + -0x30;
    puVar28 = puVar6 + -0x30;
    *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar24 = *(long *)(auVar32._0_8_ + 0x28);
    auVar30._8_8_ = auVar32._8_8_;
    auVar30._0_8_ = lVar24;
    if (lVar24 == 0) {
      puVar29 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar30 = func_0x00f78af4();
    }
    else {
      puVar7 = puVar6 + -0x20;
      puVar28 = *(undefined1 **)(puVar6 + -0x30);
      puVar29 = *(undefined **)(puVar6 + -0x28);
    }
    puVar6 = puVar7 + -0x20;
    *(undefined8 **)(puVar7 + -0x20) = puVar14;
    *(ulong *)(puVar7 + -0x18) = uVar23;
    *(undefined1 **)(puVar7 + -0x10) = puVar28;
    *(undefined **)(puVar7 + -8) = puVar29;
    puVar28 = puVar7 + -0x10;
    uVar15 = 4;
    uVar18 = 0;
    puVar29 = &UNK_0150bd10;
    auVar4 = auVar30;
  } while( true );
}



// ============================================================
// RVA: 0x15f11bc | Atlas.UI.Screens.LeagueLeaderboardScreen.SelectButton
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150c794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c798) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__SelectButton
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 extraout_w1;
  ulong uVar19;
  undefined8 *extraout_x8;
  uint uVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 **ppuVar25;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar26;
  undefined1 *puVar27;
  undefined *puVar28;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined8 uStack_1e8;
  undefined8 **ppuStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined *puStack_148;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb541e & 1) == 0) {
    func_0x00f78a20(0x3d2c760);
    bRam0000000003eb541e = 1;
  }
  if (param_2 != 0) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(param_2,0,0,0,0);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,param_2,uRam0000000003d2c760);
      bRam0000000003eb70f8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puStack_38 = (undefined *)0x1cb56a8;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar10 = &stack0xffffffffffffffd0;
    uVar24 = 0x3eb7000;
    lVar14 = param_2;
    puVar27 = puStack_40;
    puVar28 = puStack_38;
code_r0x03248740:
    *(undefined8 *)(puVar10 + -0x30) = 0x3d23990;
    *(undefined8 *)(puVar10 + -0x28) = uVar24;
    *(long *)(puVar10 + -0x20) = param_1;
    *(long *)(puVar10 + -0x18) = lVar14;
    *(undefined1 **)(puVar10 + -0x10) = puVar27;
    *(undefined **)(puVar10 + -8) = puVar28;
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (param_2 == 0) {
      puVar18 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(param_2);
      puVar18 = (undefined8 *)(ulong)(uVar12 ^ 1);
    }
    return puVar18;
  }
  lVar14 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb541f & 1) == 0) {
    func_0x00f78a20(0x3d27e08);
    bRam0000000003eb541f = 1;
  }
  puVar18 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19_TypeInfo*/ uRam0000000003d27e08);
  uVar24 = 0;
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19$$.ctor*/ func_0x0155ae6c(puVar18,0);
  if (puVar18 != (undefined8 *)0x0) {
    puVar18[4] = lVar14;
    return puVar18;
  }
  puVar15 = (undefined8 *)func_0x00f78af4();
  puStack_68 = &Atlas_League_LeagueManager__get_Player;
  pppuStack_100 = &ppuStack_70;
  if ((puVar15[0xe] != 0) && (lVar22 = *(long *)(puVar15[0xe] + 0x28), lVar22 != 0)) {
    uVar24 = *(undefined8 *)(lVar22 + 0xe8);
    uVar13 = *(undefined8 *)(lVar22 + 0x100);
    uVar16 = *(undefined8 *)(lVar22 + 0xf8);
    extraout_x8[1] = *(undefined8 *)(lVar22 + 0xf0);
    *extraout_x8 = uVar24;
    extraout_x8[3] = uVar13;
    extraout_x8[2] = uVar16;
    return puVar15;
  }
  ppuStack_70 = &puStack_40;
  lVar22 = func_0x00f78af4();
  puStack_f8 = &Atlas_League_LeagueManager__GetCurrentLeagueDefinition;
  puStack_110 = puVar18;
  lStack_108 = lVar14;
  if ((*(long *)(lVar22 + 0x18) == 0) || (*(long *)(lVar22 + 0xb0) == 0)) {
code_r0x015f1330:
    func_0x00f78af4();
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar22 + 0x18) + 0x30);
    uVar12 = /*Atlas.League.LeaguePlayerSave$$get_PlayerLeague*/ func_0x0147e78c(*(long *)(lVar22 + 0xb0),0);
    if (lVar14 == 0) goto code_r0x015f1330;
    if (uVar12 < *(uint *)(lVar14 + 0x18)) {
      return *(undefined8 **)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
    }
  }
  uVar16 = func_0x00f78b24();
  lVar22 = func_0x00f78ac0(uVar16,0);
  auVar32._8_8_ = 0x3d27e08;
  auVar32._0_8_ = lVar22;
  puStack_118 = &Atlas_UI_Screens_LeagueLeaderboardScreen__NextPressed;
  puStack_130 = puVar18;
  lStack_128 = lVar14;
  pppuStack_120 = &pppuStack_100;
  if ((bRam0000000003eb5422 & 1) == 0) {
    func_0x00f78a20(0x3d410e8);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5422 = 1;
  }
  if (*(long *)(lVar22 + 0x88) == 0) {
code_r0x015f13b0:
    if (*(long *)(lVar22 + 0x90) != 0) {
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar22,uRam0000000003d410f0);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) goto code_r0x015f1414;
      uVar24 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar14 + 0x80),*(undefined8 *)(lVar22 + 0x90));
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar22,uRam0000000003d410e8);
    if (lVar14 != 0) {
      if (*(long *)(lVar14 + 0x18) != 0) {
        /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$Invoke*/ func_0x0155b4f8(*(long *)(lVar14 + 0x18),0);
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar22,uRam0000000003d410f0);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x80) != 0)) {
      uVar24 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar14 + 0x80),*(undefined8 *)(lVar22 + 0x88));
      goto code_r0x015f13b0;
    }
  }
code_r0x015f1414:
  auVar34 = func_0x00f78af4();
  ppppuVar26 = &pppuStack_140;
  puStack_138 = &Atlas_League_LeagueManager__IsUnlockSeen;
  lVar14 = *(long *)(auVar34._0_8_ + 0xb0);
  pppuStack_140 = &pppuStack_120;
  if (lVar14 != 0) {
    if ((bRam0000000003eb48f7 & 1) == 0) {
      func_0x00f78a20(0x3d6f220,auVar34._8_8_,0);
      bRam0000000003eb48f7 = 1;
    }
    uVar24 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar34._8_8_,0);
    lVar14 = *(long *)(lVar14 + 0x10);
    if (lVar14 != 0) {
      iVar11 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar14,uVar24,0,0);
      return (undefined8 *)(ulong)(0 < iVar11);
    }
    auVar36 = func_0x00f78af4(0,uVar24);
    lVar14 = auVar36._0_8_;
    puStack_168 = &Atlas_League_LeaguePlayerSave__GetReplayCountDay;
    uStack_198 = (undefined *)CONCAT44(auVar36._8_4_,(undefined4)uStack_198);
    pppuStack_170 = &pppuStack_140;
    if ((bRam0000000003eb48f9 & 1) == 0) {
      func_0x00f78a20(0x3d6f218);
      bRam0000000003eb48f9 = 1;
    }
    uVar24 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_198 + 4,0);
    uVar24 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar24,0);
    if (*(long *)(lVar14 + 0x10) != 0) {
      puVar18 = (undefined8 *)/*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(lVar14 + 0x10),uVar24,0,0);
      return puVar18;
    }
    func_0x00f78af4(0,uVar24);
    ppuStack_1c0 = (undefined8 **)0x3d6f218;
    puStack_1a8 = &Atlas_League_LeaguePlayerSave__ParseLeaderboardAIKey;
    lStack_1b8 = lVar14;
    pppuStack_1b0 = &pppuStack_170;
    if ((bRam0000000003eb48fa & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d7d010);
      func_0x00f78a20(0x3d6f1e8);
      bRam0000000003eb48fa = 1;
    }
    uStack_1e8 = CONCAT44(extraout_w1,(undefined4)uStack_1e8);
    uVar24 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_1e8 + 4);
    puVar18 = (undefined8 *)/*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar24,0);
    return puVar18;
  }
  auVar34 = func_0x00f78af4();
  puStack_148 = &Atlas_League_LeagueManager__SetIsSeen;
  lVar14 = *(long *)(auVar34._0_8_ + 0xb0);
  auVar34._8_8_ = auVar34._8_8_;
  auVar34._0_8_ = lVar14;
  if (lVar14 != 0) {
    ppppuVar7 = &pppuStack_140;
    uVar24 = 1;
    uVar16 = 0x3d410f0;
    do {
      auVar35 = auVar34;
      uVar13 = uVar24;
      *(undefined8 *)((long)ppppuVar7 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppppuVar7 + -0x38) = unaff_x23;
      *(undefined8 *)((long)ppppuVar7 + -0x30) = unaff_x22;
      *(long *)((long)ppppuVar7 + -0x28) = auVar32._8_8_;
      *(undefined8 *)((long)ppppuVar7 + -0x20) = uVar16;
      *(long *)((long)ppppuVar7 + -0x18) = auVar32._0_8_;
      *(undefined8 *****)((long)ppppuVar7 + -0x10) = ppppuVar26;
      *(undefined **)((long)ppppuVar7 + -8) = puStack_148;
      ppppuVar26 = (undefined8 ****)((long)ppppuVar7 + -0x10);
      unaff_x22 = 0x3eb4000;
      unaff_x23 = 0x3d6f220;
      if ((bRam0000000003eb48f6 & 1) == 0) {
        func_0x00f78a20(0x3d6f220);
        bRam0000000003eb48f6 = 1;
      }
      uVar24 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar35._8_8_,0);
      lVar14 = *(long *)(auVar35._0_8_ + 0x10);
      if (lVar14 != 0) {
        /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(lVar14,uVar24,uVar13,0);
        puVar18 = *(undefined8 **)(auVar35._0_8_ + 0x10);
        if (puVar18 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar18 + 0x22) = 1;
          return puVar18;
        }
      }
      puStack_148 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
      auVar34 = func_0x00f78af4();
      ppppuVar7 = (undefined8 ****)((long)ppppuVar7 + -0x40);
      uVar24 = 0;
      uVar16 = uVar13;
      auVar32 = auVar35;
    } while( true );
  }
  auVar35 = func_0x00f78af4();
  pppuStack_170 = (undefined8 ***)0x3d410f0;
  lVar14 = 0x3d27e00;
  puStack_168 = (undefined *)lVar22;
  if ((bRam0000000003eb5426 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d63548);
    func_0x00f78a20(0x3d27e00);
    bRam0000000003eb5426 = 1;
  }
  lVar22 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0_TypeInfo*/ uRam0000000003d27e00);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0$$.ctor*/ func_0x0155ac18(lVar22,0);
  if (lVar22 != 0) {
    *(char *)(lVar22 + 0x10) = (char)uVar24;
    *(undefined8 ***)(lVar22 + 0x18) = auVar35._0_8_;
    *(int *)(lVar22 + 0x20) = auVar35._8_4_;
    *(undefined8 *)(lVar22 + 0x28) = param_4;
    puVar18 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar18,lVar22,uRam0000000003d63548,0);
    return puVar18;
  }
  uVar16 = func_0x00f78af4();
  pppuVar8 = &ppuStack_1c0;
  uStack_198 = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterExit;
  lStack_1b8 = uVar24;
  puStack_1a8 = (undefined *)param_4;
  ppuStack_1a0 = (undefined8 **)&stack0xfffffffffffffea0;
  if ((bRam0000000003eb5427 & 1) == 0) {
    ppuStack_1c0 = auVar35._0_8_;
    pppuStack_1b0 = auVar35._8_8_;
    func_0x00f78a20(0x3d410f0);
    auVar35._8_8_ = pppuStack_1b0;
    auVar35._0_8_ = ppuStack_1c0;
    bRam0000000003eb5427 = 1;
  }
  pppuStack_1b0 = auVar35._8_8_;
  ppuStack_1c0 = auVar35._0_8_;
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar16,uRam0000000003d410f0);
  puVar28 = puStack_1a8;
  pppuVar6 = pppuStack_1b0;
  lVar22 = lStack_1b8;
  ppuVar25 = ppuStack_1c0;
  auVar33._8_8_ = puStack_1a8;
  auVar33._0_8_ = pppuStack_1b0;
  if ((lVar17 == 0) || (puVar18 = *(undefined8 **)(lVar17 + 0xb8), puVar18 == (undefined8 *)0x0)) {
    uVar24 = func_0x00f78af4();
    uStack_1e8 = 0x3d410f0;
    if ((bRam0000000003eb5429 & 1) == 0) {
      func_0x00f78a20(0x3d27e20);
      bRam0000000003eb5429 = 1;
    }
    puVar18 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar18,0,0);
    if (puVar18 != (undefined8 *)0x0) {
      puVar18[5] = uVar24;
      *(undefined4 *)(puVar18 + 4) = extraout_s0;
      return puVar18;
    }
    uVar24 = func_0x00f78af4();
    if ((bRam0000000003eb542a & 1) == 0) {
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb542a = 1;
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar24,uRam0000000003d410f0);
    if (lVar14 == 0) {
      return (undefined8 *)0x0;
    }
    puVar18 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar24,uRam0000000003d410f0);
    if (puVar18 != (undefined8 *)0x0) {
      if (puVar18[0x10] == 0) {
        return puVar18;
      }
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar24,uRam0000000003d410f0);
      if (lVar14 != 0) {
        uVar21 = 0x3f000000;
        goto code_r0x015f16d4;
      }
    }
    uVar24 = func_0x00f78af4();
    uVar21 = extraout_s0_00;
code_r0x015f16d4:
    if ((bRam0000000003eb542b & 1) == 0) {
      func_0x00f78a20(0x3d27e18);
      bRam0000000003eb542b = 1;
    }
    puVar18 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar18,0,0);
    if (puVar18 != (undefined8 *)0x0) {
      puVar18[4] = uVar24;
      *(undefined4 *)(puVar18 + 5) = uVar21;
      return puVar18;
    }
    lVar14 = func_0x00f78af4();
    if ((bRam0000000003eb542e & 1) == 0) {
      func_0x00f78a20(0x3d2c750);
      bRam0000000003eb542e = 1;
    }
    if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar18 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
      return puVar18;
    }
    auVar32 = func_0x00f78af4();
    puVar15 = auVar32._8_8_;
    puVar18 = auVar32._0_8_;
    uVar16 = puVar15[1];
    uVar24 = *puVar15;
    puVar18[2] = puVar15[2];
    puVar18[1] = uVar16;
    *puVar18 = uVar24;
    return puVar18;
  }
  uVar24 = 0;
  uVar16 = 0;
  lVar17 = puVar18[6];
  if (lVar17 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar17 + 0x18)) {
    *(undefined8 *)(lVar17 + 0x50) = 0;
    return puVar18;
  }
  uVar13 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar13,0);
  auVar2._8_8_ = auVar32._8_8_;
  auVar2._0_8_ = pppuVar6;
  ppuStack_1c0 = pppuVar6;
  lStack_1b8 = (long)puVar28;
  pppuStack_1b0 = &ppuStack_1a0;
  puStack_1a8 = &Atlas_UI_TopBarManager__ButtonPressed;
  ppppuVar26 = &pppuStack_1b0;
  lVar17 = *(long *)(auVar32._0_8_ + 0x30);
  if (lVar17 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar12 = auVar32._8_4_;
    auVar33 = auVar2;
    if (uVar12 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = *(long *)(lVar17 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar17 == 0) {
        puVar18 = (undefined8 *)0x0;
        if (8 < uVar12) {
          return (undefined8 *)0x0;
        }
        uVar20 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar12 & 0x1f) & uVar20) == 0) {
          return puVar18;
        }
      }
      else {
        puVar18 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar17,0);
        if ((uVar12 != 0) || (((ulong)puVar18 & 1) == 0)) {
          if (8 < uVar12) {
            return puVar18;
          }
          uVar20 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar3._8_8_ = lStack_1b8;
      auVar3._0_8_ = ppuStack_1c0;
      lVar17 = *(long *)(auVar32._0_8_ + 0x28);
      auVar36._8_4_ = uVar12;
      auVar36._0_8_ = lVar17;
      auVar33 = auVar32;
      if (lVar17 != 0) {
        uVar24 = 0;
        uVar16 = 1;
        pppuVar8 = &ppuStack_1a0;
        ppppuVar26 = (undefined8 ****)pppuStack_1b0;
        puVar28 = puStack_1a8;
        auVar33 = auVar3;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar13 = func_0x00f78b24();
  puVar28 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar36 = func_0x00f78ac0(uVar13,0);
code_r0x0150b5b8:
  auVar5._8_8_ = uVar16;
  auVar5._0_8_ = auVar36._0_8_;
  auVar4._8_8_ = uVar16;
  auVar4._0_8_ = auVar36._0_8_;
  if (auVar36._8_4_ < 9) {
    uVar19 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar36._8_4_ * 4);
    auVar5 = auVar4;
  }
  else {
    uVar19 = 0xffffffff;
  }
  do {
    puVar18 = auVar5._0_8_;
    uVar23 = auVar33._8_8_;
    *(undefined1 (*) [16])((long)pppuVar8 + -0x20) = auVar33;
    *(undefined8 *****)((long)pppuVar8 + -0x10) = ppppuVar26;
    *(undefined **)((long)pppuVar8 + -8) = puVar28;
    uVar12 = (uint)uVar19;
    if (uVar12 == 0xffffffff) {
      return puVar18;
    }
    lVar17 = puVar18[0xe];
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar23 = uVar19;
      if (uVar12 < *(uint *)(lVar17 + 0x18)) {
        uVar21 = 2;
        if ((int)uVar24 == 0) {
          uVar21 = 0;
        }
        *(undefined4 *)(lVar17 + (long)(int)uVar12 * 0x60 + 0x5c) = uVar21;
        if ((auVar5._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar18,uVar19);
        }
        *(undefined8 *)((long)pppuVar8 + -0x60) = unaff_x28;
        *(undefined8 *)((long)pppuVar8 + -0x58) = unaff_x27;
        *(undefined8 *)((long)pppuVar8 + -0x50) = unaff_x26;
        *(long *)((long)pppuVar8 + -0x48) = unaff_x25;
        *(undefined8 *)((long)pppuVar8 + -0x40) = 0x3d27e00;
        *(undefined8 *)((long)pppuVar8 + -0x38) = 0;
        *(undefined8 ***)((long)pppuVar8 + -0x30) = ppuVar25;
        *(long *)((long)pppuVar8 + -0x28) = lVar22;
        *(undefined8 *)((long)pppuVar8 + -0x20) = *(undefined8 *)((long)pppuVar8 + -0x20);
        *(undefined8 *)((long)pppuVar8 + -0x18) = *(undefined8 *)((long)pppuVar8 + -0x18);
        *(undefined8 *)((long)pppuVar8 + -0x10) = *(undefined8 *)((long)pppuVar8 + -0x10);
        *(undefined8 *)((long)pppuVar8 + -8) = *(undefined8 *)((long)pppuVar8 + -8);
        param_2 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar17 = puVar18[0xe];
        lVar22 = 0;
        if (lVar17 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar17 + 0x18) <= uVar12) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar12;
        lVar17 = lVar17 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar17 + 0x20);
        ppuVar25 = *(undefined8 ***)(lVar17 + 0x28);
        uVar24 = *(undefined8 *)(lVar17 + 0x30);
        uVar13 = *(undefined8 *)(lVar17 + 0x48);
        uVar16 = *(undefined8 *)(lVar17 + 0x40);
        *(undefined8 *)((long)pppuVar8 + -0xe8) = *(undefined8 *)(lVar17 + 0x38);
        *(undefined8 *)((long)pppuVar8 + -0xf0) = uVar24;
        *(undefined8 *)((long)pppuVar8 + -0xd8) = uVar13;
        *(undefined8 *)((long)pppuVar8 + -0xe0) = uVar16;
        param_2 = *(long *)(lVar17 + 0x50);
        iVar11 = *(int *)(lVar17 + 0x58);
        iVar1 = *(int *)(lVar17 + 0x5c);
        lVar22 = *(long *)(lVar17 + 0x60);
        lVar14 = *(long *)(lVar17 + 0x68);
        uVar24 = *(undefined8 *)(lVar17 + 0x70);
        *(undefined8 *)((long)pppuVar8 + -0xf8) = *(undefined8 *)(lVar17 + 0x78);
        *(undefined8 *)((long)pppuVar8 + -0x100) = uVar24;
        if (iVar1 != iVar11) {
          if (iVar11 == 2) {
            if (iVar1 == 0) {
              if (lVar14 == 0) goto code_r0x0150c7d4;
              uVar16 = *(undefined8 *)(lVar17 + 0x38);
              uVar24 = *(undefined8 *)(lVar17 + 0x30);
              uVar29 = *(undefined8 *)(lVar17 + 0x48);
              uVar13 = *(undefined8 *)(lVar17 + 0x40);
              *(undefined8 *)((long)pppuVar8 + -0x118) = uVar16;
              *(undefined8 *)((long)pppuVar8 + -0x120) = uVar24;
              *(undefined8 *)((long)pppuVar8 + -0x108) = uVar29;
              *(undefined8 *)((long)pppuVar8 + -0x110) = uVar13;
              uVar31 = *(undefined8 *)(lVar17 + 0x78);
              uVar30 = *(undefined8 *)(lVar17 + 0x70);
              *(undefined8 *)((long)pppuVar8 + -0x128) = uVar31;
              *(undefined8 *)((long)pppuVar8 + -0x130) = uVar30;
              *(undefined8 *)((long)pppuVar8 + -200) = unaff_x26;
              *(undefined8 ***)((long)pppuVar8 + -0xc0) = ppuVar25;
              *(undefined8 *)((long)pppuVar8 + -0xb0) = uVar16;
              *(undefined8 *)((long)pppuVar8 + -0xb8) = uVar24;
              *(undefined8 *)((long)pppuVar8 + -0xa0) = uVar29;
              *(undefined8 *)((long)pppuVar8 + -0xa8) = uVar13;
              *(long *)((long)pppuVar8 + -0x98) = param_2;
              *(undefined8 *)((long)pppuVar8 + -0x90) = _UNK_033f8620;
              *(long *)((long)pppuVar8 + -0x88) = lVar22;
              *(long *)((long)pppuVar8 + -0x80) = lVar14;
              *(undefined8 *)((long)pppuVar8 + -0x70) = uVar31;
              *(undefined8 *)((long)pppuVar8 + -0x78) = uVar30;
              lVar17 = lVar14;
code_r0x0150c724:
              /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar17,(undefined1 *)((long)pppuVar8 + -200),uRam0000000003d2a408);
              iVar11 = 1;
            }
            else {
              iVar11 = 2;
            }
code_r0x0150c72c:
            lVar17 = puVar18[0xe];
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= uVar12) goto code_r0x0150c7d8;
              lVar17 = lVar17 + unaff_x25 * 0x60;
              *(undefined8 *)(lVar17 + 0x20) = unaff_x26;
              *(undefined8 ***)(lVar17 + 0x28) = ppuVar25;
              uVar24 = *(undefined8 *)((long)pppuVar8 + -0xf0);
              uVar13 = *(undefined8 *)((long)pppuVar8 + -0xd8);
              uVar16 = *(undefined8 *)((long)pppuVar8 + -0xe0);
              *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)((long)pppuVar8 + -0xe8);
              *(undefined8 *)(lVar17 + 0x30) = uVar24;
              *(undefined8 *)(lVar17 + 0x48) = uVar13;
              *(undefined8 *)(lVar17 + 0x40) = uVar16;
              *(long *)(lVar17 + 0x50) = param_2;
              *(int *)(lVar17 + 0x58) = iVar11;
              *(int *)(lVar17 + 0x5c) = iVar1;
              *(long *)(lVar17 + 0x60) = lVar22;
              *(long *)(lVar17 + 0x68) = lVar14;
              uVar24 = *(undefined8 *)((long)pppuVar8 + -0x100);
              *(undefined8 *)(lVar17 + 0x78) = *(undefined8 *)((long)pppuVar8 + -0xf8);
              *(undefined8 *)(lVar17 + 0x70) = uVar24;
              goto code_r0x0150c768;
            }
          }
          else {
            if (iVar11 != 0) goto code_r0x0150c72c;
            if (iVar1 != 2) {
              iVar11 = 0;
              goto code_r0x0150c72c;
            }
            if (((ppuVar25 != (undefined8 **)0x0) &&
                (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppuVar25,0), lVar17 != 0)) &&
               (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0), lVar22 != 0)) {
              *(undefined8 *)((long)pppuVar8 + -200) = unaff_x26;
              *(undefined8 ***)((long)pppuVar8 + -0xc0) = ppuVar25;
              *(undefined8 *)((long)pppuVar8 + -0xb0) = *(undefined8 *)((long)pppuVar8 + -0xe8);
              *(undefined8 *)((long)pppuVar8 + -0xb8) = *(undefined8 *)((long)pppuVar8 + -0xf0);
              *(undefined8 *)((long)pppuVar8 + -0xa0) = *(undefined8 *)((long)pppuVar8 + -0xd8);
              *(undefined8 *)((long)pppuVar8 + -0xa8) = *(undefined8 *)((long)pppuVar8 + -0xe0);
              *(long *)((long)pppuVar8 + -0x98) = param_2;
              *(undefined8 *)((long)pppuVar8 + -0x90) = _UNK_033f8628;
              *(long *)((long)pppuVar8 + -0x88) = lVar22;
              *(long *)((long)pppuVar8 + -0x80) = lVar14;
              *(undefined8 *)((long)pppuVar8 + -0x70) = *(undefined8 *)((long)pppuVar8 + -0xf8);
              *(undefined8 *)((long)pppuVar8 + -0x78) = *(undefined8 *)((long)pppuVar8 + -0x100);
              lVar17 = lVar22;
              goto code_r0x0150c724;
            }
          }
code_r0x0150c7d4:
          func_0x00f78af4();
code_r0x0150c7d8:
          uVar24 = func_0x00f78b24();
          auVar32 = func_0x00f78ac0(uVar24,0);
          lVar17 = auVar32._8_8_;
          *(undefined8 *)((long)pppuVar8 + -0x180) = unaff_x26;
          *(long *)((long)pppuVar8 + -0x178) = unaff_x25;
          *(long *)((long)pppuVar8 + -0x170) = lVar14;
          *(long *)((long)pppuVar8 + -0x168) = lVar22;
          *(undefined8 ***)((long)pppuVar8 + -0x160) = ppuVar25;
          *(undefined8 **)((long)pppuVar8 + -0x158) = puVar18;
          *(ulong *)((long)pppuVar8 + -0x150) = uVar19;
          *(long *)((long)pppuVar8 + -0x148) = param_2;
          *(undefined1 **)((long)pppuVar8 + -0x140) = (undefined1 *)((long)pppuVar8 + -0x10);
          *(undefined **)((long)pppuVar8 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
          if ((bRam0000000003eb4d55 & 1) == 0) {
            func_0x00f78a20(0x3d5e6e0);
            func_0x00f78a20(0x3d5e7a8);
            func_0x00f78a20(0x3d5e7d0);
            func_0x00f78a20(0x3d5e850);
            func_0x00f78a20(0x3d5e888);
            bRam0000000003eb4d55 = 1;
          }
          uVar24 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar17 + 0x18),*(undefined4 *)(lVar17 + 0x1c),
                                   *(undefined4 *)(lVar17 + 0x20),_UNK_033f8144,
                                   *(undefined8 *)(lVar17 + 0x10),0,0);
          uVar24 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar24,10,uRam0000000003d5e7a8);
          uVar24 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar24,*(undefined8 *)(lVar17 + 0x58),uRam0000000003d5e6e0);
          uVar24 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar24,1,uRam0000000003d5e888);
          puVar18 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar24,auVar32._0_8_,uRam0000000003d5e850);
          if ((puVar18 != (undefined8 *)0x0) && (*(char *)(puVar18 + 0x1d) != '\0')) {
            puVar18[6] = *(undefined8 *)(lVar17 + 0x10);
          }
          return puVar18;
        }
code_r0x0150c768:
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar10 = (undefined1 *)((long)pppuVar8 + -0x160);
        *(undefined8 ***)((long)pppuVar8 + -0x160) = ppuVar25;
        *(undefined8 **)((long)pppuVar8 + -0x158) = puVar18;
        *(ulong *)((long)pppuVar8 + -0x150) = uVar19;
        *(long *)((long)pppuVar8 + -0x148) = param_2;
        *(undefined1 **)((long)pppuVar8 + -0x140) = (undefined1 *)((long)pppuVar8 + -0x10);
        *(undefined **)((long)pppuVar8 + -0x138) = &UNK_0150c798;
        uVar24 = 0x3ec0000;
        if ((bRam0000000003ec027c & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027c = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = 0;
        param_1 = param_2;
        puVar27 = (undefined1 *)((long)pppuVar8 + -0x140);
        puVar28 = &UNK_03249b00;
        goto code_r0x03248740;
      }
    }
    uVar24 = func_0x00f78b24();
    auVar32 = func_0x00f78ac0(uVar24,0);
    puVar9 = (undefined1 *)((long)pppuVar8 + -0x30);
    puVar27 = (undefined1 *)((long)pppuVar8 + -0x30);
    *(undefined1 **)((long)pppuVar8 + -0x30) = (undefined1 *)((long)pppuVar8 + -0x10);
    *(undefined **)((long)pppuVar8 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar17 = *(long *)(auVar32._0_8_ + 0x28);
    auVar33._8_8_ = auVar32._8_8_;
    auVar33._0_8_ = lVar17;
    if (lVar17 == 0) {
      puVar28 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar33 = func_0x00f78af4();
    }
    else {
      puVar9 = (undefined1 *)((long)pppuVar8 + -0x20);
      puVar27 = *(undefined1 **)((long)pppuVar8 + -0x30);
      puVar28 = *(undefined **)((long)pppuVar8 + -0x28);
    }
    pppuVar8 = (undefined8 ***)(puVar9 + -0x20);
    *(undefined8 **)(puVar9 + -0x20) = puVar18;
    *(ulong *)(puVar9 + -0x18) = uVar23;
    *(undefined1 **)(puVar9 + -0x10) = puVar27;
    *(undefined **)(puVar9 + -8) = puVar28;
    ppppuVar26 = (undefined8 ****)(puVar9 + -0x10);
    uVar19 = 4;
    uVar24 = 0;
    puVar28 = &UNK_0150bd10;
    auVar5 = auVar33;
  } while( true );
}



// ============================================================
// RVA: 0x15f1238 | Atlas.UI.Screens.LeagueLeaderboardScreen.BuildOptions
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uVar12;
  uint uVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined4 extraout_w1;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *extraout_x8;
  uint uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 **ppuVar25;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar26;
  undefined1 *puVar27;
  undefined *puVar28;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined8 uStack_1b8;
  undefined8 **ppuStack_190;
  long lStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined *puStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb541f & 1) == 0) {
    func_0x00f78a20(0x3d27e08);
    bRam0000000003eb541f = 1;
  }
  puVar13 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19_TypeInfo*/ uRam0000000003d27e08);
  uVar19 = 0;
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19$$.ctor*/ func_0x0155ae6c(puVar13,0);
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[4] = param_1;
    return puVar13;
  }
  puVar14 = (undefined8 *)func_0x00f78af4();
  puStack_38 = &Atlas_League_LeagueManager__get_Player;
  ppuStack_d0 = &puStack_40;
  if ((puVar14[0xe] != 0) && (lVar23 = *(long *)(puVar14[0xe] + 0x28), lVar23 != 0)) {
    uVar19 = *(undefined8 *)(lVar23 + 0xe8);
    uVar12 = *(undefined8 *)(lVar23 + 0x100);
    uVar15 = *(undefined8 *)(lVar23 + 0xf8);
    extraout_x8[1] = *(undefined8 *)(lVar23 + 0xf0);
    *extraout_x8 = uVar19;
    extraout_x8[3] = uVar12;
    extraout_x8[2] = uVar15;
    return puVar14;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  lVar23 = func_0x00f78af4();
  puStack_c8 = &Atlas_League_LeagueManager__GetCurrentLeagueDefinition;
  puStack_e0 = puVar13;
  lStack_d8 = param_1;
  if ((*(long *)(lVar23 + 0x18) == 0) || (*(long *)(lVar23 + 0xb0) == 0)) {
code_r0x015f1330:
    func_0x00f78af4();
  }
  else {
    param_1 = *(long *)(*(long *)(lVar23 + 0x18) + 0x30);
    uVar11 = /*Atlas.League.LeaguePlayerSave$$get_PlayerLeague*/ func_0x0147e78c(*(long *)(lVar23 + 0xb0),0);
    if (param_1 == 0) goto code_r0x015f1330;
    if (uVar11 < *(uint *)(param_1 + 0x18)) {
      return *(undefined8 **)(param_1 + (long)(int)uVar11 * 8 + 0x20);
    }
  }
  uVar15 = func_0x00f78b24();
  lVar23 = func_0x00f78ac0(uVar15,0);
  auVar32._8_8_ = 0x3d27e08;
  auVar32._0_8_ = lVar23;
  puStack_e8 = &Atlas_UI_Screens_LeagueLeaderboardScreen__NextPressed;
  puStack_100 = puVar13;
  lStack_f8 = param_1;
  pppuStack_f0 = &ppuStack_d0;
  if ((bRam0000000003eb5422 & 1) == 0) {
    func_0x00f78a20(0x3d410e8);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5422 = 1;
  }
  if (*(long *)(lVar23 + 0x88) == 0) {
code_r0x015f13b0:
    if (*(long *)(lVar23 + 0x90) != 0) {
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar23,uRam0000000003d410f0);
      if ((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) goto code_r0x015f1414;
      uVar19 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar16 + 0x80),*(undefined8 *)(lVar23 + 0x90));
    }
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar23,uRam0000000003d410e8);
    if (lVar16 != 0) {
      if (*(long *)(lVar16 + 0x18) != 0) {
        /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$Invoke*/ func_0x0155b4f8(*(long *)(lVar16 + 0x18),0);
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar23,uRam0000000003d410f0);
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x80) != 0)) {
      uVar19 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar16 + 0x80),*(undefined8 *)(lVar23 + 0x88));
      goto code_r0x015f13b0;
    }
  }
code_r0x015f1414:
  auVar34 = func_0x00f78af4();
  ppppuVar26 = &pppuStack_110;
  puStack_108 = &Atlas_League_LeagueManager__IsUnlockSeen;
  lVar16 = *(long *)(auVar34._0_8_ + 0xb0);
  pppuStack_110 = &pppuStack_f0;
  if (lVar16 != 0) {
    if ((bRam0000000003eb48f7 & 1) == 0) {
      func_0x00f78a20(0x3d6f220,auVar34._8_8_,0);
      bRam0000000003eb48f7 = 1;
    }
    uVar19 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar34._8_8_,0);
    lVar23 = *(long *)(lVar16 + 0x10);
    if (lVar23 != 0) {
      iVar10 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar23,uVar19,0,0);
      return (undefined8 *)(ulong)(0 < iVar10);
    }
    auVar36 = func_0x00f78af4(0,uVar19);
    lVar23 = auVar36._0_8_;
    puStack_138 = &Atlas_League_LeaguePlayerSave__GetReplayCountDay;
    uStack_168 = (undefined *)CONCAT44(auVar36._8_4_,(undefined4)uStack_168);
    pppuStack_140 = &pppuStack_110;
    if ((bRam0000000003eb48f9 & 1) == 0) {
      func_0x00f78a20(0x3d6f218);
      bRam0000000003eb48f9 = 1;
    }
    uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_168 + 4,0);
    uVar19 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar19,0);
    if (*(long *)(lVar23 + 0x10) == 0) {
      func_0x00f78af4(0,uVar19);
      ppuStack_190 = (undefined8 **)0x3d6f218;
      puStack_178 = &Atlas_League_LeaguePlayerSave__ParseLeaderboardAIKey;
      lStack_188 = lVar23;
      pppuStack_180 = &pppuStack_140;
      if ((bRam0000000003eb48fa & 1) == 0) {
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d7d010);
        func_0x00f78a20(0x3d6f1e8);
        bRam0000000003eb48fa = 1;
      }
      uStack_1b8 = CONCAT44(extraout_w1,(undefined4)uStack_1b8);
      uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_1b8 + 4);
      puVar13 = (undefined8 *)/*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar19,0);
      return puVar13;
    }
    puVar13 = (undefined8 *)/*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(lVar23 + 0x10),uVar19,0,0);
    return puVar13;
  }
  auVar34 = func_0x00f78af4();
  puStack_118 = &Atlas_League_LeagueManager__SetIsSeen;
  lVar16 = *(long *)(auVar34._0_8_ + 0xb0);
  auVar34._8_8_ = auVar34._8_8_;
  auVar34._0_8_ = lVar16;
  if (lVar16 != 0) {
    ppppuVar7 = &pppuStack_110;
    uVar19 = 1;
    uVar15 = 0x3d410f0;
    do {
      auVar35 = auVar34;
      uVar12 = uVar19;
      *(undefined8 *)((long)ppppuVar7 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppppuVar7 + -0x38) = unaff_x23;
      *(undefined8 *)((long)ppppuVar7 + -0x30) = unaff_x22;
      *(long *)((long)ppppuVar7 + -0x28) = auVar32._8_8_;
      *(undefined8 *)((long)ppppuVar7 + -0x20) = uVar15;
      *(long *)((long)ppppuVar7 + -0x18) = auVar32._0_8_;
      *(undefined8 *****)((long)ppppuVar7 + -0x10) = ppppuVar26;
      *(undefined **)((long)ppppuVar7 + -8) = puStack_118;
      ppppuVar26 = (undefined8 ****)((long)ppppuVar7 + -0x10);
      unaff_x22 = 0x3eb4000;
      unaff_x23 = 0x3d6f220;
      if ((bRam0000000003eb48f6 & 1) == 0) {
        func_0x00f78a20(0x3d6f220);
        bRam0000000003eb48f6 = 1;
      }
      uVar19 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar35._8_8_,0);
      lVar23 = *(long *)(auVar35._0_8_ + 0x10);
      if (lVar23 != 0) {
        /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(lVar23,uVar19,uVar12,0);
        puVar13 = *(undefined8 **)(auVar35._0_8_ + 0x10);
        if (puVar13 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar13 + 0x22) = 1;
          return puVar13;
        }
      }
      puStack_118 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
      auVar34 = func_0x00f78af4();
      ppppuVar7 = (undefined8 ****)((long)ppppuVar7 + -0x40);
      uVar19 = 0;
      uVar15 = uVar12;
      auVar32 = auVar35;
    } while( true );
  }
  auVar35 = func_0x00f78af4();
  pppuStack_140 = (undefined8 ***)0x3d410f0;
  lVar16 = 0x3d27e00;
  puStack_138 = (undefined *)lVar23;
  if ((bRam0000000003eb5426 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d63548);
    func_0x00f78a20(0x3d27e00);
    bRam0000000003eb5426 = 1;
  }
  lVar23 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0_TypeInfo*/ uRam0000000003d27e00);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0$$.ctor*/ func_0x0155ac18(lVar23,0);
  if (lVar23 != 0) {
    *(char *)(lVar23 + 0x10) = (char)uVar19;
    *(undefined8 ***)(lVar23 + 0x18) = auVar35._0_8_;
    *(int *)(lVar23 + 0x20) = auVar35._8_4_;
    *(undefined8 *)(lVar23 + 0x28) = param_4;
    puVar13 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar13,lVar23,uRam0000000003d63548,0);
    return puVar13;
  }
  uVar15 = func_0x00f78af4();
  pppuVar8 = &ppuStack_190;
  uStack_168 = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterExit;
  lStack_188 = uVar19;
  puStack_178 = (undefined *)param_4;
  ppuStack_170 = (undefined8 **)&stack0xfffffffffffffed0;
  if ((bRam0000000003eb5427 & 1) == 0) {
    ppuStack_190 = auVar35._0_8_;
    pppuStack_180 = auVar35._8_8_;
    func_0x00f78a20(0x3d410f0);
    auVar35._8_8_ = pppuStack_180;
    auVar35._0_8_ = ppuStack_190;
    bRam0000000003eb5427 = 1;
  }
  pppuStack_180 = auVar35._8_8_;
  ppuStack_190 = auVar35._0_8_;
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar15,uRam0000000003d410f0);
  puVar28 = puStack_178;
  pppuVar6 = pppuStack_180;
  lVar23 = lStack_188;
  ppuVar25 = ppuStack_190;
  auVar33._8_8_ = puStack_178;
  auVar33._0_8_ = pppuStack_180;
  if ((lVar17 == 0) || (puVar13 = *(undefined8 **)(lVar17 + 0xb8), puVar13 == (undefined8 *)0x0)) {
    uVar19 = func_0x00f78af4();
    uStack_1b8 = 0x3d410f0;
    if ((bRam0000000003eb5429 & 1) == 0) {
      func_0x00f78a20(0x3d27e20);
      bRam0000000003eb5429 = 1;
    }
    puVar13 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar13,0,0);
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[5] = uVar19;
      *(undefined4 *)(puVar13 + 4) = extraout_s0;
      return puVar13;
    }
    uVar19 = func_0x00f78af4();
    if ((bRam0000000003eb542a & 1) == 0) {
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb542a = 1;
    }
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d410f0);
    if (lVar23 == 0) {
      return (undefined8 *)0x0;
    }
    puVar13 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d410f0);
    if (puVar13 != (undefined8 *)0x0) {
      if (puVar13[0x10] == 0) {
        return puVar13;
      }
      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d410f0);
      if (lVar23 != 0) {
        uVar22 = 0x3f000000;
        goto code_r0x015f16d4;
      }
    }
    uVar19 = func_0x00f78af4();
    uVar22 = extraout_s0_00;
code_r0x015f16d4:
    if ((bRam0000000003eb542b & 1) == 0) {
      func_0x00f78a20(0x3d27e18);
      bRam0000000003eb542b = 1;
    }
    puVar13 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar13,0,0);
    if (puVar13 == (undefined8 *)0x0) {
      lVar23 = func_0x00f78af4();
      if ((bRam0000000003eb542e & 1) == 0) {
        func_0x00f78a20(0x3d2c750);
        bRam0000000003eb542e = 1;
      }
      if (lVar23 == 0) {
        auVar32 = func_0x00f78af4();
        puVar14 = auVar32._8_8_;
        puVar13 = auVar32._0_8_;
        uVar15 = puVar14[1];
        uVar19 = *puVar14;
        puVar13[2] = puVar14[2];
        puVar13[1] = uVar15;
        *puVar13 = uVar19;
        return puVar13;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar13 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
      return puVar13;
    }
    puVar13[4] = uVar19;
    *(undefined4 *)(puVar13 + 5) = uVar22;
    return puVar13;
  }
  uVar19 = 0;
  uVar15 = 0;
  lVar17 = puVar13[6];
  if (lVar17 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar17 + 0x18)) {
    *(undefined8 *)(lVar17 + 0x50) = 0;
    return puVar13;
  }
  uVar12 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar12,0);
  auVar2._8_8_ = auVar32._8_8_;
  auVar2._0_8_ = pppuVar6;
  ppuStack_190 = pppuVar6;
  lStack_188 = (long)puVar28;
  pppuStack_180 = &ppuStack_170;
  puStack_178 = &Atlas_UI_TopBarManager__ButtonPressed;
  ppppuVar26 = &pppuStack_180;
  lVar17 = *(long *)(auVar32._0_8_ + 0x30);
  if (lVar17 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar11 = auVar32._8_4_;
    auVar33 = auVar2;
    if (uVar11 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = *(long *)(lVar17 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar17 == 0) {
        puVar13 = (undefined8 *)0x0;
        if (8 < uVar11) {
          return (undefined8 *)0x0;
        }
        uVar21 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar11 & 0x1f) & uVar21) == 0) {
          return puVar13;
        }
      }
      else {
        puVar13 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar17,0);
        if ((uVar11 != 0) || (((ulong)puVar13 & 1) == 0)) {
          if (8 < uVar11) {
            return puVar13;
          }
          uVar21 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar3._8_8_ = lStack_188;
      auVar3._0_8_ = ppuStack_190;
      lVar17 = *(long *)(auVar32._0_8_ + 0x28);
      auVar36._8_4_ = uVar11;
      auVar36._0_8_ = lVar17;
      auVar33 = auVar32;
      if (lVar17 != 0) {
        uVar19 = 0;
        uVar15 = 1;
        pppuVar8 = &ppuStack_170;
        ppppuVar26 = (undefined8 ****)pppuStack_180;
        puVar28 = puStack_178;
        auVar33 = auVar3;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar12 = func_0x00f78b24();
  puVar28 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar36 = func_0x00f78ac0(uVar12,0);
code_r0x0150b5b8:
  auVar5._8_8_ = uVar15;
  auVar5._0_8_ = auVar36._0_8_;
  auVar4._8_8_ = uVar15;
  auVar4._0_8_ = auVar36._0_8_;
  if (auVar36._8_4_ < 9) {
    uVar18 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar36._8_4_ * 4);
    auVar5 = auVar4;
  }
  else {
    uVar18 = 0xffffffff;
  }
  do {
    puVar13 = auVar5._0_8_;
    uVar24 = auVar33._8_8_;
    *(undefined1 (*) [16])((long)pppuVar8 + -0x20) = auVar33;
    *(undefined8 *****)((long)pppuVar8 + -0x10) = ppppuVar26;
    *(undefined **)((long)pppuVar8 + -8) = puVar28;
    uVar11 = (uint)uVar18;
    if (uVar11 == 0xffffffff) {
      return puVar13;
    }
    lVar17 = puVar13[0xe];
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar24 = uVar18;
      if (uVar11 < *(uint *)(lVar17 + 0x18)) {
        uVar22 = 2;
        if ((int)uVar19 == 0) {
          uVar22 = 0;
        }
        *(undefined4 *)(lVar17 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar22;
        if ((auVar5._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar13,uVar18);
        }
        *(undefined8 *)((long)pppuVar8 + -0x60) = unaff_x28;
        *(undefined8 *)((long)pppuVar8 + -0x58) = unaff_x27;
        *(undefined8 *)((long)pppuVar8 + -0x50) = unaff_x26;
        *(long *)((long)pppuVar8 + -0x48) = unaff_x25;
        *(undefined8 *)((long)pppuVar8 + -0x40) = 0x3d27e00;
        *(undefined8 *)((long)pppuVar8 + -0x38) = 0;
        *(undefined8 ***)((long)pppuVar8 + -0x30) = ppuVar25;
        *(long *)((long)pppuVar8 + -0x28) = lVar23;
        *(undefined8 *)((long)pppuVar8 + -0x20) = *(undefined8 *)((long)pppuVar8 + -0x20);
        *(undefined8 *)((long)pppuVar8 + -0x18) = *(undefined8 *)((long)pppuVar8 + -0x18);
        *(undefined8 *)((long)pppuVar8 + -0x10) = *(undefined8 *)((long)pppuVar8 + -0x10);
        *(undefined8 *)((long)pppuVar8 + -8) = *(undefined8 *)((long)pppuVar8 + -8);
        lVar23 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar20 = puVar13[0xe];
        lVar17 = 0;
        if (lVar20 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar20 + 0x18) <= uVar11) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar11;
        lVar20 = lVar20 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar20 + 0x20);
        ppuVar25 = *(undefined8 ***)(lVar20 + 0x28);
        uVar19 = *(undefined8 *)(lVar20 + 0x30);
        uVar12 = *(undefined8 *)(lVar20 + 0x48);
        uVar15 = *(undefined8 *)(lVar20 + 0x40);
        *(undefined8 *)((long)pppuVar8 + -0xe8) = *(undefined8 *)(lVar20 + 0x38);
        *(undefined8 *)((long)pppuVar8 + -0xf0) = uVar19;
        *(undefined8 *)((long)pppuVar8 + -0xd8) = uVar12;
        *(undefined8 *)((long)pppuVar8 + -0xe0) = uVar15;
        lVar23 = *(long *)(lVar20 + 0x50);
        iVar10 = *(int *)(lVar20 + 0x58);
        iVar1 = *(int *)(lVar20 + 0x5c);
        lVar17 = *(long *)(lVar20 + 0x60);
        lVar16 = *(long *)(lVar20 + 0x68);
        uVar19 = *(undefined8 *)(lVar20 + 0x70);
        *(undefined8 *)((long)pppuVar8 + -0xf8) = *(undefined8 *)(lVar20 + 0x78);
        *(undefined8 *)((long)pppuVar8 + -0x100) = uVar19;
        if (iVar1 == iVar10) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar14 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,0,0);
          if ((int)puVar14 == 0) {
            return puVar14;
          }
          if (lVar23 != 0) {
            puVar13 = (undefined8 *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar23,iVar10 == 2,0);
            return puVar13;
          }
        }
        else if (iVar10 == 2) {
          if (iVar1 == 0) {
            if (lVar16 == 0) goto code_r0x0150c7d4;
            uVar15 = *(undefined8 *)(lVar20 + 0x38);
            uVar19 = *(undefined8 *)(lVar20 + 0x30);
            uVar29 = *(undefined8 *)(lVar20 + 0x48);
            uVar12 = *(undefined8 *)(lVar20 + 0x40);
            *(undefined8 *)((long)pppuVar8 + -0x118) = uVar15;
            *(undefined8 *)((long)pppuVar8 + -0x120) = uVar19;
            *(undefined8 *)((long)pppuVar8 + -0x108) = uVar29;
            *(undefined8 *)((long)pppuVar8 + -0x110) = uVar12;
            uVar31 = *(undefined8 *)(lVar20 + 0x78);
            uVar30 = *(undefined8 *)(lVar20 + 0x70);
            *(undefined8 *)((long)pppuVar8 + -0x128) = uVar31;
            *(undefined8 *)((long)pppuVar8 + -0x130) = uVar30;
            *(undefined8 *)((long)pppuVar8 + -200) = unaff_x26;
            *(undefined8 ***)((long)pppuVar8 + -0xc0) = ppuVar25;
            *(undefined8 *)((long)pppuVar8 + -0xb0) = uVar15;
            *(undefined8 *)((long)pppuVar8 + -0xb8) = uVar19;
            *(undefined8 *)((long)pppuVar8 + -0xa0) = uVar29;
            *(undefined8 *)((long)pppuVar8 + -0xa8) = uVar12;
            *(long *)((long)pppuVar8 + -0x98) = lVar23;
            *(undefined8 *)((long)pppuVar8 + -0x90) = _UNK_033f8620;
            *(long *)((long)pppuVar8 + -0x88) = lVar17;
            *(long *)((long)pppuVar8 + -0x80) = lVar16;
            *(undefined8 *)((long)pppuVar8 + -0x70) = uVar31;
            *(undefined8 *)((long)pppuVar8 + -0x78) = uVar30;
            lVar20 = lVar16;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar20,(undefined1 *)((long)pppuVar8 + -200),uRam0000000003d2a408);
            iVar10 = 1;
          }
          else {
            iVar10 = 2;
          }
code_r0x0150c72c:
          lVar20 = puVar13[0xe];
          if (lVar20 != 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar11) goto code_r0x0150c7d8;
            lVar20 = lVar20 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar20 + 0x20) = unaff_x26;
            *(undefined8 ***)(lVar20 + 0x28) = ppuVar25;
            uVar19 = *(undefined8 *)((long)pppuVar8 + -0xf0);
            uVar12 = *(undefined8 *)((long)pppuVar8 + -0xd8);
            uVar15 = *(undefined8 *)((long)pppuVar8 + -0xe0);
            *(undefined8 *)(lVar20 + 0x38) = *(undefined8 *)((long)pppuVar8 + -0xe8);
            *(undefined8 *)(lVar20 + 0x30) = uVar19;
            *(undefined8 *)(lVar20 + 0x48) = uVar12;
            *(undefined8 *)(lVar20 + 0x40) = uVar15;
            *(long *)(lVar20 + 0x50) = lVar23;
            *(int *)(lVar20 + 0x58) = iVar10;
            *(int *)(lVar20 + 0x5c) = iVar1;
            *(long *)(lVar20 + 0x60) = lVar17;
            *(long *)(lVar20 + 0x68) = lVar16;
            uVar19 = *(undefined8 *)((long)pppuVar8 + -0x100);
            *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)((long)pppuVar8 + -0xf8);
            *(undefined8 *)(lVar20 + 0x70) = uVar19;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar10 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar10 = 0;
            goto code_r0x0150c72c;
          }
          if (((ppuVar25 != (undefined8 **)0x0) &&
              (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppuVar25,0), lVar20 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar20,1,0), lVar17 != 0)) {
            *(undefined8 *)((long)pppuVar8 + -200) = unaff_x26;
            *(undefined8 ***)((long)pppuVar8 + -0xc0) = ppuVar25;
            *(undefined8 *)((long)pppuVar8 + -0xb0) = *(undefined8 *)((long)pppuVar8 + -0xe8);
            *(undefined8 *)((long)pppuVar8 + -0xb8) = *(undefined8 *)((long)pppuVar8 + -0xf0);
            *(undefined8 *)((long)pppuVar8 + -0xa0) = *(undefined8 *)((long)pppuVar8 + -0xd8);
            *(undefined8 *)((long)pppuVar8 + -0xa8) = *(undefined8 *)((long)pppuVar8 + -0xe0);
            *(long *)((long)pppuVar8 + -0x98) = lVar23;
            *(undefined8 *)((long)pppuVar8 + -0x90) = _UNK_033f8628;
            *(long *)((long)pppuVar8 + -0x88) = lVar17;
            *(long *)((long)pppuVar8 + -0x80) = lVar16;
            *(undefined8 *)((long)pppuVar8 + -0x70) = *(undefined8 *)((long)pppuVar8 + -0xf8);
            *(undefined8 *)((long)pppuVar8 + -0x78) = *(undefined8 *)((long)pppuVar8 + -0x100);
            lVar20 = lVar17;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar19 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar19,0);
        lVar20 = auVar32._8_8_;
        *(undefined8 *)((long)pppuVar8 + -0x180) = unaff_x26;
        *(long *)((long)pppuVar8 + -0x178) = unaff_x25;
        *(long *)((long)pppuVar8 + -0x170) = lVar16;
        *(long *)((long)pppuVar8 + -0x168) = lVar17;
        *(undefined8 ***)((long)pppuVar8 + -0x160) = ppuVar25;
        *(undefined8 **)((long)pppuVar8 + -0x158) = puVar13;
        *(ulong *)((long)pppuVar8 + -0x150) = uVar18;
        *(long *)((long)pppuVar8 + -0x148) = lVar23;
        *(undefined1 **)((long)pppuVar8 + -0x140) = (undefined1 *)((long)pppuVar8 + -0x10);
        *(undefined **)((long)pppuVar8 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar19 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar20 + 0x18),*(undefined4 *)(lVar20 + 0x1c),
                                 *(undefined4 *)(lVar20 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar20 + 0x10),0,0);
        uVar19 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar19,10,uRam0000000003d5e7a8);
        uVar19 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar19,*(undefined8 *)(lVar20 + 0x58),uRam0000000003d5e6e0);
        uVar19 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar19,1,uRam0000000003d5e888);
        puVar13 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar19,auVar32._0_8_,uRam0000000003d5e850);
        if ((puVar13 != (undefined8 *)0x0) && (*(char *)(puVar13 + 0x1d) != '\0')) {
          puVar13[6] = *(undefined8 *)(lVar20 + 0x10);
        }
        return puVar13;
      }
    }
    uVar19 = func_0x00f78b24();
    auVar32 = func_0x00f78ac0(uVar19,0);
    puVar9 = (undefined1 *)((long)pppuVar8 + -0x30);
    puVar27 = (undefined1 *)((long)pppuVar8 + -0x30);
    *(undefined1 **)((long)pppuVar8 + -0x30) = (undefined1 *)((long)pppuVar8 + -0x10);
    *(undefined **)((long)pppuVar8 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar17 = *(long *)(auVar32._0_8_ + 0x28);
    auVar33._8_8_ = auVar32._8_8_;
    auVar33._0_8_ = lVar17;
    if (lVar17 == 0) {
      puVar28 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar33 = func_0x00f78af4();
    }
    else {
      puVar9 = (undefined1 *)((long)pppuVar8 + -0x20);
      puVar27 = *(undefined1 **)((long)pppuVar8 + -0x30);
      puVar28 = *(undefined **)((long)pppuVar8 + -0x28);
    }
    pppuVar8 = (undefined8 ***)(puVar9 + -0x20);
    *(undefined8 **)(puVar9 + -0x20) = puVar13;
    *(ulong *)(puVar9 + -0x18) = uVar24;
    *(undefined1 **)(puVar9 + -0x10) = puVar27;
    *(undefined **)(puVar9 + -8) = puVar28;
    ppppuVar26 = (undefined8 ****)(puVar9 + -0x10);
    uVar18 = 4;
    uVar19 = 0;
    puVar28 = &UNK_0150bd10;
    auVar5 = auVar33;
  } while( true );
}



// ============================================================
// RVA: 0x15f1340 | Atlas.UI.Screens.LeagueLeaderboardScreen.NextPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__NextPressed
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 ***pppuVar6;
  undefined1 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 extraout_w1;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined8 unaff_x21;
  undefined8 **ppuVar25;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar26;
  undefined8 ****ppppuVar27;
  undefined1 *puVar28;
  undefined *puVar29;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined8 uStack_d8;
  undefined8 **ppuStack_b0;
  long lStack_a8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar33._8_8_ = unaff_x21;
  auVar33._0_8_ = param_1;
  if ((bRam0000000003eb5422 & 1) == 0) {
    func_0x00f78a20(0x3d410e8);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5422 = 1;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
LAB_015f13b0:
    if (*(long *)(param_1 + 0x90) != 0) {
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) goto LAB_015f1414;
      param_3 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar15 + 0x80),*(undefined8 *)(param_1 + 0x90));
    }
    lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d410e8);
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x18) != 0) {
        /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$Invoke*/ func_0x0155b4f8(*(long *)(lVar15 + 0x18),0);
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
    if ((lVar15 != 0) && (*(long *)(lVar15 + 0x80) != 0)) {
      param_3 = 0;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar15 + 0x80),*(undefined8 *)(param_1 + 0x88));
      goto LAB_015f13b0;
    }
  }
LAB_015f1414:
  auVar35 = func_0x00f78af4();
  ppuVar26 = &puStack_30;
  puStack_28 = &Atlas_League_LeagueManager__IsUnlockSeen;
  lVar15 = *(long *)(auVar35._0_8_ + 0xb0);
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar15 != 0) {
    if ((bRam0000000003eb48f7 & 1) == 0) {
      func_0x00f78a20(0x3d6f220,auVar35._8_8_,0);
      bRam0000000003eb48f7 = 1;
    }
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar35._8_8_,0);
    lVar15 = *(long *)(lVar15 + 0x10);
    if (lVar15 == 0) {
      auVar37 = func_0x00f78af4(0,uVar11);
      lVar15 = auVar37._0_8_;
      puStack_58 = &Atlas_League_LeaguePlayerSave__GetReplayCountDay;
      uStack_88 = (undefined *)CONCAT44(auVar37._8_4_,(undefined4)uStack_88);
      ppuStack_60 = &puStack_30;
      if ((bRam0000000003eb48f9 & 1) == 0) {
        func_0x00f78a20(0x3d6f218);
        bRam0000000003eb48f9 = 1;
      }
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_88 + 4,0);
      uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar11,0);
      if (*(long *)(lVar15 + 0x10) == 0) {
        func_0x00f78af4(0,uVar11);
        ppuStack_b0 = (undefined8 **)0x3d6f218;
        puStack_98 = &Atlas_League_LeaguePlayerSave__ParseLeaderboardAIKey;
        lStack_a8 = lVar15;
        pppuStack_a0 = (undefined8 ***)&ppuStack_60;
        if ((bRam0000000003eb48fa & 1) == 0) {
          func_0x00f78a20(0x3d22910);
          func_0x00f78a20(0x3d7d010);
          func_0x00f78a20(0x3d6f1e8);
          bRam0000000003eb48fa = 1;
        }
        uStack_d8 = CONCAT44(extraout_w1,(undefined4)uStack_d8);
        uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_d8 + 4);
        puVar12 = (undefined8 *)/*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar11,0);
        return puVar12;
      }
      puVar12 = (undefined8 *)/*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(lVar15 + 0x10),uVar11,0,0);
      return puVar12;
    }
    iVar10 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar15,uVar11,0,0);
    return (undefined8 *)(ulong)(0 < iVar10);
  }
  auVar35 = func_0x00f78af4();
  puStack_38 = &Atlas_League_LeagueManager__SetIsSeen;
  lVar15 = *(long *)(auVar35._0_8_ + 0xb0);
  auVar35._8_8_ = auVar35._8_8_;
  auVar35._0_8_ = lVar15;
  if (lVar15 != 0) {
    ppuVar7 = &puStack_30;
    uVar11 = 1;
    uVar20 = 0x3d410f0;
    do {
      auVar36 = auVar35;
      uVar13 = uVar11;
      *(undefined8 *)((long)ppuVar7 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppuVar7 + -0x38) = unaff_x23;
      *(undefined8 *)((long)ppuVar7 + -0x30) = unaff_x22;
      *(long *)((long)ppuVar7 + -0x28) = auVar33._8_8_;
      *(undefined8 *)((long)ppuVar7 + -0x20) = uVar20;
      *(long *)((long)ppuVar7 + -0x18) = auVar33._0_8_;
      *(undefined1 ***)((long)ppuVar7 + -0x10) = ppuVar26;
      *(undefined **)((long)ppuVar7 + -8) = puStack_38;
      ppuVar26 = (undefined1 **)((long)ppuVar7 + -0x10);
      unaff_x22 = 0x3eb4000;
      unaff_x23 = 0x3d6f220;
      if ((bRam0000000003eb48f6 & 1) == 0) {
        func_0x00f78a20(0x3d6f220);
        bRam0000000003eb48f6 = 1;
      }
      uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar36._8_8_,0);
      lVar15 = *(long *)(auVar36._0_8_ + 0x10);
      if (lVar15 != 0) {
        /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(lVar15,uVar11,uVar13,0);
        puVar12 = *(undefined8 **)(auVar36._0_8_ + 0x10);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar12 + 0x22) = 1;
          return puVar12;
        }
      }
      puStack_38 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
      auVar35 = func_0x00f78af4();
      ppuVar7 = (undefined1 **)((long)ppuVar7 + -0x40);
      uVar11 = 0;
      uVar20 = uVar13;
      auVar33 = auVar36;
    } while( true );
  }
  auVar36 = func_0x00f78af4();
  ppuStack_60 = (undefined1 **)0x3d410f0;
  lVar15 = 0x3d27e00;
  puStack_58 = (undefined *)param_1;
  if ((bRam0000000003eb5426 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d63548);
    func_0x00f78a20(0x3d27e00);
    bRam0000000003eb5426 = 1;
  }
  lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0_TypeInfo*/ uRam0000000003d27e00);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0$$.ctor*/ func_0x0155ac18(lVar16,0);
  if (lVar16 != 0) {
    *(char *)(lVar16 + 0x10) = (char)param_3;
    *(undefined8 ***)(lVar16 + 0x18) = auVar36._0_8_;
    *(int *)(lVar16 + 0x20) = auVar36._8_4_;
    *(undefined8 *)(lVar16 + 0x28) = param_4;
    puVar12 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar12,lVar16,uRam0000000003d63548,0);
    return puVar12;
  }
  uVar11 = func_0x00f78af4();
  pppuVar8 = &ppuStack_b0;
  uStack_88 = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterExit;
  lStack_a8 = param_3;
  puStack_98 = (undefined *)param_4;
  ppuStack_90 = (undefined8 **)&stack0xffffffffffffffb0;
  if ((bRam0000000003eb5427 & 1) == 0) {
    ppuStack_b0 = auVar36._0_8_;
    pppuStack_a0 = auVar36._8_8_;
    func_0x00f78a20(0x3d410f0);
    auVar36._8_8_ = pppuStack_a0;
    auVar36._0_8_ = ppuStack_b0;
    bRam0000000003eb5427 = 1;
  }
  pppuStack_a0 = auVar36._8_8_;
  ppuStack_b0 = auVar36._0_8_;
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d410f0);
  puVar29 = puStack_98;
  pppuVar6 = pppuStack_a0;
  lVar16 = lStack_a8;
  ppuVar25 = ppuStack_b0;
  auVar34._8_8_ = puStack_98;
  auVar34._0_8_ = pppuStack_a0;
  if ((lVar17 == 0) || (puVar12 = *(undefined8 **)(lVar17 + 0xb8), puVar12 == (undefined8 *)0x0)) {
    uVar11 = func_0x00f78af4();
    uStack_d8 = 0x3d410f0;
    if ((bRam0000000003eb5429 & 1) == 0) {
      func_0x00f78a20(0x3d27e20);
      bRam0000000003eb5429 = 1;
    }
    puVar12 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar12,0,0);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[5] = uVar11;
      *(undefined4 *)(puVar12 + 4) = extraout_s0;
      return puVar12;
    }
    uVar11 = func_0x00f78af4();
    if ((bRam0000000003eb542a & 1) == 0) {
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb542a = 1;
    }
    lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d410f0);
    if (lVar15 == 0) {
      return (undefined8 *)0x0;
    }
    puVar12 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d410f0);
    if (puVar12 != (undefined8 *)0x0) {
      if (puVar12[0x10] == 0) {
        return puVar12;
      }
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d410f0);
      if (lVar15 != 0) {
        uVar23 = 0x3f000000;
        goto code_r0x015f16d4;
      }
    }
    uVar11 = func_0x00f78af4();
    uVar23 = extraout_s0_00;
code_r0x015f16d4:
    if ((bRam0000000003eb542b & 1) == 0) {
      func_0x00f78a20(0x3d27e18);
      bRam0000000003eb542b = 1;
    }
    puVar12 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar12,0,0);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[4] = uVar11;
      *(undefined4 *)(puVar12 + 5) = uVar23;
      return puVar12;
    }
    lVar15 = func_0x00f78af4();
    if ((bRam0000000003eb542e & 1) == 0) {
      func_0x00f78a20(0x3d2c750);
      bRam0000000003eb542e = 1;
    }
    if (lVar15 == 0) {
      auVar33 = func_0x00f78af4();
      puVar14 = auVar33._8_8_;
      puVar12 = auVar33._0_8_;
      uVar20 = puVar14[1];
      uVar11 = *puVar14;
      puVar12[2] = puVar14[2];
      puVar12[1] = uVar20;
      *puVar12 = uVar11;
      return puVar12;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
    return puVar12;
  }
  uVar11 = 0;
  uVar20 = 0;
  lVar17 = puVar12[6];
  if (lVar17 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar17 + 0x18)) {
    *(undefined8 *)(lVar17 + 0x50) = 0;
    return puVar12;
  }
  uVar13 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar13,0);
  auVar2._8_8_ = auVar33._8_8_;
  auVar2._0_8_ = pppuVar6;
  ppuStack_b0 = pppuVar6;
  lStack_a8 = (long)puVar29;
  pppuStack_a0 = &ppuStack_90;
  puStack_98 = &Atlas_UI_TopBarManager__ButtonPressed;
  ppppuVar27 = &pppuStack_a0;
  lVar17 = *(long *)(auVar33._0_8_ + 0x30);
  if (lVar17 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar18 = auVar33._8_4_;
    auVar34 = auVar2;
    if (uVar18 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = *(long *)(lVar17 + (long)(int)uVar18 * 8 + 0x20);
      if (lVar17 == 0) {
        puVar12 = (undefined8 *)0x0;
        if (8 < uVar18) {
          return (undefined8 *)0x0;
        }
        uVar22 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar18 & 0x1f) & uVar22) == 0) {
          return puVar12;
        }
      }
      else {
        puVar12 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar17,0);
        if ((uVar18 != 0) || (((ulong)puVar12 & 1) == 0)) {
          if (8 < uVar18) {
            return puVar12;
          }
          uVar22 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar3._8_8_ = lStack_a8;
      auVar3._0_8_ = ppuStack_b0;
      lVar17 = *(long *)(auVar33._0_8_ + 0x28);
      auVar37._8_4_ = uVar18;
      auVar37._0_8_ = lVar17;
      auVar34 = auVar33;
      if (lVar17 != 0) {
        uVar11 = 0;
        uVar20 = 1;
        pppuVar8 = &ppuStack_90;
        ppppuVar27 = (undefined8 ****)pppuStack_a0;
        puVar29 = puStack_98;
        auVar34 = auVar3;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar13 = func_0x00f78b24();
  puVar29 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar37 = func_0x00f78ac0(uVar13,0);
code_r0x0150b5b8:
  auVar5._8_8_ = uVar20;
  auVar5._0_8_ = auVar37._0_8_;
  auVar4._8_8_ = uVar20;
  auVar4._0_8_ = auVar37._0_8_;
  if (auVar37._8_4_ < 9) {
    uVar19 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar37._8_4_ * 4);
    auVar5 = auVar4;
  }
  else {
    uVar19 = 0xffffffff;
  }
  do {
    puVar12 = auVar5._0_8_;
    uVar24 = auVar34._8_8_;
    *(undefined1 (*) [16])((long)pppuVar8 + -0x20) = auVar34;
    *(undefined8 *****)((long)pppuVar8 + -0x10) = ppppuVar27;
    *(undefined **)((long)pppuVar8 + -8) = puVar29;
    uVar18 = (uint)uVar19;
    if (uVar18 == 0xffffffff) {
      return puVar12;
    }
    lVar17 = puVar12[0xe];
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar24 = uVar19;
      if (uVar18 < *(uint *)(lVar17 + 0x18)) {
        uVar23 = 2;
        if ((int)uVar11 == 0) {
          uVar23 = 0;
        }
        *(undefined4 *)(lVar17 + (long)(int)uVar18 * 0x60 + 0x5c) = uVar23;
        if ((auVar5._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar12,uVar19);
        }
        *(undefined8 *)((long)pppuVar8 + -0x60) = unaff_x28;
        *(undefined8 *)((long)pppuVar8 + -0x58) = unaff_x27;
        *(undefined8 *)((long)pppuVar8 + -0x50) = unaff_x26;
        *(long *)((long)pppuVar8 + -0x48) = unaff_x25;
        *(undefined8 *)((long)pppuVar8 + -0x40) = 0x3d27e00;
        *(undefined8 *)((long)pppuVar8 + -0x38) = 0;
        *(undefined8 ***)((long)pppuVar8 + -0x30) = ppuVar25;
        *(long *)((long)pppuVar8 + -0x28) = lVar16;
        *(undefined8 *)((long)pppuVar8 + -0x20) = *(undefined8 *)((long)pppuVar8 + -0x20);
        *(undefined8 *)((long)pppuVar8 + -0x18) = *(undefined8 *)((long)pppuVar8 + -0x18);
        *(undefined8 *)((long)pppuVar8 + -0x10) = *(undefined8 *)((long)pppuVar8 + -0x10);
        *(undefined8 *)((long)pppuVar8 + -8) = *(undefined8 *)((long)pppuVar8 + -8);
        lVar16 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar21 = puVar12[0xe];
        lVar17 = 0;
        if (lVar21 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar21 + 0x18) <= uVar18) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar18;
        lVar21 = lVar21 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar21 + 0x20);
        ppuVar25 = *(undefined8 ***)(lVar21 + 0x28);
        uVar11 = *(undefined8 *)(lVar21 + 0x30);
        uVar13 = *(undefined8 *)(lVar21 + 0x48);
        uVar20 = *(undefined8 *)(lVar21 + 0x40);
        *(undefined8 *)((long)pppuVar8 + -0xe8) = *(undefined8 *)(lVar21 + 0x38);
        *(undefined8 *)((long)pppuVar8 + -0xf0) = uVar11;
        *(undefined8 *)((long)pppuVar8 + -0xd8) = uVar13;
        *(undefined8 *)((long)pppuVar8 + -0xe0) = uVar20;
        lVar16 = *(long *)(lVar21 + 0x50);
        iVar10 = *(int *)(lVar21 + 0x58);
        iVar1 = *(int *)(lVar21 + 0x5c);
        lVar17 = *(long *)(lVar21 + 0x60);
        lVar15 = *(long *)(lVar21 + 0x68);
        uVar11 = *(undefined8 *)(lVar21 + 0x70);
        *(undefined8 *)((long)pppuVar8 + -0xf8) = *(undefined8 *)(lVar21 + 0x78);
        *(undefined8 *)((long)pppuVar8 + -0x100) = uVar11;
        if (iVar1 == iVar10) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar14 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar16,0,0);
          if ((int)puVar14 == 0) {
            return puVar14;
          }
          if (lVar16 != 0) {
            puVar12 = (undefined8 *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar16,iVar10 == 2,0);
            return puVar12;
          }
        }
        else if (iVar10 == 2) {
          if (iVar1 == 0) {
            if (lVar15 == 0) goto code_r0x0150c7d4;
            uVar20 = *(undefined8 *)(lVar21 + 0x38);
            uVar11 = *(undefined8 *)(lVar21 + 0x30);
            uVar30 = *(undefined8 *)(lVar21 + 0x48);
            uVar13 = *(undefined8 *)(lVar21 + 0x40);
            *(undefined8 *)((long)pppuVar8 + -0x118) = uVar20;
            *(undefined8 *)((long)pppuVar8 + -0x120) = uVar11;
            *(undefined8 *)((long)pppuVar8 + -0x108) = uVar30;
            *(undefined8 *)((long)pppuVar8 + -0x110) = uVar13;
            uVar32 = *(undefined8 *)(lVar21 + 0x78);
            uVar31 = *(undefined8 *)(lVar21 + 0x70);
            *(undefined8 *)((long)pppuVar8 + -0x128) = uVar32;
            *(undefined8 *)((long)pppuVar8 + -0x130) = uVar31;
            *(undefined8 *)((long)pppuVar8 + -200) = unaff_x26;
            *(undefined8 ***)((long)pppuVar8 + -0xc0) = ppuVar25;
            *(undefined8 *)((long)pppuVar8 + -0xb0) = uVar20;
            *(undefined8 *)((long)pppuVar8 + -0xb8) = uVar11;
            *(undefined8 *)((long)pppuVar8 + -0xa0) = uVar30;
            *(undefined8 *)((long)pppuVar8 + -0xa8) = uVar13;
            *(long *)((long)pppuVar8 + -0x98) = lVar16;
            *(undefined8 *)((long)pppuVar8 + -0x90) = _UNK_033f8620;
            *(long *)((long)pppuVar8 + -0x88) = lVar17;
            *(long *)((long)pppuVar8 + -0x80) = lVar15;
            *(undefined8 *)((long)pppuVar8 + -0x70) = uVar32;
            *(undefined8 *)((long)pppuVar8 + -0x78) = uVar31;
            lVar21 = lVar15;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar21,(undefined1 *)((long)pppuVar8 + -200),uRam0000000003d2a408);
            iVar10 = 1;
          }
          else {
            iVar10 = 2;
          }
code_r0x0150c72c:
          lVar21 = puVar12[0xe];
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= uVar18) goto code_r0x0150c7d8;
            lVar21 = lVar21 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar21 + 0x20) = unaff_x26;
            *(undefined8 ***)(lVar21 + 0x28) = ppuVar25;
            uVar11 = *(undefined8 *)((long)pppuVar8 + -0xf0);
            uVar13 = *(undefined8 *)((long)pppuVar8 + -0xd8);
            uVar20 = *(undefined8 *)((long)pppuVar8 + -0xe0);
            *(undefined8 *)(lVar21 + 0x38) = *(undefined8 *)((long)pppuVar8 + -0xe8);
            *(undefined8 *)(lVar21 + 0x30) = uVar11;
            *(undefined8 *)(lVar21 + 0x48) = uVar13;
            *(undefined8 *)(lVar21 + 0x40) = uVar20;
            *(long *)(lVar21 + 0x50) = lVar16;
            *(int *)(lVar21 + 0x58) = iVar10;
            *(int *)(lVar21 + 0x5c) = iVar1;
            *(long *)(lVar21 + 0x60) = lVar17;
            *(long *)(lVar21 + 0x68) = lVar15;
            uVar11 = *(undefined8 *)((long)pppuVar8 + -0x100);
            *(undefined8 *)(lVar21 + 0x78) = *(undefined8 *)((long)pppuVar8 + -0xf8);
            *(undefined8 *)(lVar21 + 0x70) = uVar11;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar10 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar10 = 0;
            goto code_r0x0150c72c;
          }
          if (((ppuVar25 != (undefined8 **)0x0) &&
              (lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppuVar25,0), lVar21 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar21,1,0), lVar17 != 0)) {
            *(undefined8 *)((long)pppuVar8 + -200) = unaff_x26;
            *(undefined8 ***)((long)pppuVar8 + -0xc0) = ppuVar25;
            *(undefined8 *)((long)pppuVar8 + -0xb0) = *(undefined8 *)((long)pppuVar8 + -0xe8);
            *(undefined8 *)((long)pppuVar8 + -0xb8) = *(undefined8 *)((long)pppuVar8 + -0xf0);
            *(undefined8 *)((long)pppuVar8 + -0xa0) = *(undefined8 *)((long)pppuVar8 + -0xd8);
            *(undefined8 *)((long)pppuVar8 + -0xa8) = *(undefined8 *)((long)pppuVar8 + -0xe0);
            *(long *)((long)pppuVar8 + -0x98) = lVar16;
            *(undefined8 *)((long)pppuVar8 + -0x90) = _UNK_033f8628;
            *(long *)((long)pppuVar8 + -0x88) = lVar17;
            *(long *)((long)pppuVar8 + -0x80) = lVar15;
            *(undefined8 *)((long)pppuVar8 + -0x70) = *(undefined8 *)((long)pppuVar8 + -0xf8);
            *(undefined8 *)((long)pppuVar8 + -0x78) = *(undefined8 *)((long)pppuVar8 + -0x100);
            lVar21 = lVar17;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar11 = func_0x00f78b24();
        auVar33 = func_0x00f78ac0(uVar11,0);
        lVar21 = auVar33._8_8_;
        *(undefined8 *)((long)pppuVar8 + -0x180) = unaff_x26;
        *(long *)((long)pppuVar8 + -0x178) = unaff_x25;
        *(long *)((long)pppuVar8 + -0x170) = lVar15;
        *(long *)((long)pppuVar8 + -0x168) = lVar17;
        *(undefined8 ***)((long)pppuVar8 + -0x160) = ppuVar25;
        *(undefined8 **)((long)pppuVar8 + -0x158) = puVar12;
        *(ulong *)((long)pppuVar8 + -0x150) = uVar19;
        *(long *)((long)pppuVar8 + -0x148) = lVar16;
        *(undefined1 **)((long)pppuVar8 + -0x140) = (undefined1 *)((long)pppuVar8 + -0x10);
        *(undefined **)((long)pppuVar8 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar11 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar21 + 0x18),*(undefined4 *)(lVar21 + 0x1c),
                                 *(undefined4 *)(lVar21 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar21 + 0x10),0,0);
        uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,10,uRam0000000003d5e7a8);
        uVar11 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar11,*(undefined8 *)(lVar21 + 0x58),uRam0000000003d5e6e0);
        uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar11,1,uRam0000000003d5e888);
        puVar12 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar11,auVar33._0_8_,uRam0000000003d5e850);
        if ((puVar12 != (undefined8 *)0x0) && (*(char *)(puVar12 + 0x1d) != '\0')) {
          puVar12[6] = *(undefined8 *)(lVar21 + 0x10);
        }
        return puVar12;
      }
    }
    uVar11 = func_0x00f78b24();
    auVar33 = func_0x00f78ac0(uVar11,0);
    puVar9 = (undefined1 *)((long)pppuVar8 + -0x30);
    puVar28 = (undefined1 *)((long)pppuVar8 + -0x30);
    *(undefined1 **)((long)pppuVar8 + -0x30) = (undefined1 *)((long)pppuVar8 + -0x10);
    *(undefined **)((long)pppuVar8 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar17 = *(long *)(auVar33._0_8_ + 0x28);
    auVar34._8_8_ = auVar33._8_8_;
    auVar34._0_8_ = lVar17;
    if (lVar17 == 0) {
      puVar29 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar34 = func_0x00f78af4();
    }
    else {
      puVar9 = (undefined1 *)((long)pppuVar8 + -0x20);
      puVar28 = *(undefined1 **)((long)pppuVar8 + -0x30);
      puVar29 = *(undefined **)((long)pppuVar8 + -0x28);
    }
    pppuVar8 = (undefined8 ***)(puVar9 + -0x20);
    *(undefined8 **)(puVar9 + -0x20) = puVar12;
    *(ulong *)(puVar9 + -0x18) = uVar24;
    *(undefined1 **)(puVar9 + -0x10) = puVar28;
    *(undefined **)(puVar9 + -8) = puVar29;
    ppppuVar27 = (undefined8 ****)(puVar9 + -0x10);
    uVar19 = 4;
    uVar11 = 0;
    puVar29 = &UNK_0150bd10;
    auVar5 = auVar34;
  } while( true );
}



// ============================================================
// RVA: 0x15f1458 | Atlas.UI.Screens.LeagueLeaderboardScreen.OnRewardPanelClicked
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__OnRewardPanelClicked
          (undefined8 **param_1,undefined8 ***param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar14;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined8 **ppuVar22;
  long lVar23;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar24;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar25;
  undefined1 *puVar26;
  undefined *puVar27;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  lVar13 = 0x3d27e00;
  if ((bRam0000000003eb5426 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d63548);
    func_0x00f78a20(0x3d27e00);
    bRam0000000003eb5426 = 1;
  }
  lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0_TypeInfo*/ uRam0000000003d27e00);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0$$.ctor*/ func_0x0155ac18(lVar10,0);
  if (lVar10 != 0) {
    *(char *)(lVar10 + 0x10) = (char)param_3;
    *(undefined8 ***)(lVar10 + 0x18) = param_1;
    *(int *)(lVar10 + 0x20) = (int)param_2;
    *(undefined8 *)(lVar10 + 0x28) = param_4;
    puVar11 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar11,lVar10,uRam0000000003d63548,0);
    return puVar11;
  }
  uVar12 = func_0x00f78af4();
  pppuVar6 = &ppuStack_70;
  puStack_48 = &Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterExit;
  ppuStack_70 = param_1;
  uStack_68 = param_3;
  pppuStack_60 = param_2;
  puStack_58 = (undefined *)param_4;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5427 & 1) == 0) {
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5427 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d410f0);
  puVar27 = puStack_58;
  pppuVar5 = pppuStack_60;
  uVar12 = uStack_68;
  ppuVar22 = ppuStack_70;
  auVar31._8_8_ = puStack_58;
  auVar31._0_8_ = pppuStack_60;
  if ((lVar10 == 0) || (puVar11 = *(undefined8 **)(lVar10 + 0xb8), puVar11 == (undefined8 *)0x0)) {
    uVar12 = func_0x00f78af4();
    if ((bRam0000000003eb5429 & 1) == 0) {
      func_0x00f78a20(0x3d27e20);
      bRam0000000003eb5429 = 1;
    }
    puVar11 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar11,0,0);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[5] = uVar12;
      *(undefined4 *)(puVar11 + 4) = extraout_s0;
      return puVar11;
    }
    uVar12 = func_0x00f78af4();
    if ((bRam0000000003eb542a & 1) == 0) {
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb542a = 1;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d410f0);
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    puVar11 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d410f0);
    if (puVar11 != (undefined8 *)0x0) {
      if (puVar11[0x10] == 0) {
        return puVar11;
      }
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d410f0);
      if (lVar13 != 0) {
        uVar20 = 0x3f000000;
        goto code_r0x015f16d4;
      }
    }
    uVar12 = func_0x00f78af4();
    uVar20 = extraout_s0_00;
code_r0x015f16d4:
    if ((bRam0000000003eb542b & 1) == 0) {
      func_0x00f78a20(0x3d27e18);
      bRam0000000003eb542b = 1;
    }
    puVar11 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar11,0,0);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[4] = uVar12;
      *(undefined4 *)(puVar11 + 5) = uVar20;
      return puVar11;
    }
    lVar13 = func_0x00f78af4();
    if ((bRam0000000003eb542e & 1) == 0) {
      func_0x00f78a20(0x3d2c750);
      bRam0000000003eb542e = 1;
    }
    if (lVar13 == 0) {
      auVar31 = func_0x00f78af4();
      puVar9 = auVar31._8_8_;
      puVar11 = auVar31._0_8_;
      uVar16 = puVar9[1];
      uVar12 = *puVar9;
      puVar11[2] = puVar9[2];
      puVar11[1] = uVar16;
      *puVar11 = uVar12;
      return puVar11;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
    return puVar11;
  }
  uVar16 = 0;
  uVar17 = 0;
  lVar10 = puVar11[6];
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar10 + 0x18)) {
    *(undefined8 *)(lVar10 + 0x50) = 0;
    return puVar11;
  }
  uVar8 = func_0x00f78b24();
  auVar30 = func_0x00f78ac0(uVar8,0);
  auVar2._8_8_ = auVar30._8_8_;
  auVar2._0_8_ = pppuVar5;
  ppuStack_70 = pppuVar5;
  uStack_68 = puVar27;
  pppuStack_60 = &ppuStack_50;
  puStack_58 = &Atlas_UI_TopBarManager__ButtonPressed;
  ppppuVar25 = &pppuStack_60;
  lVar10 = *(long *)(auVar30._0_8_ + 0x30);
  if (lVar10 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar14 = auVar30._8_4_;
    auVar31 = auVar2;
    if (uVar14 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar10 == 0) {
        puVar11 = (undefined8 *)0x0;
        if (8 < uVar14) {
          return (undefined8 *)0x0;
        }
        uVar19 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar14 & 0x1f) & uVar19) == 0) {
          return puVar11;
        }
      }
      else {
        puVar11 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar10,0);
        if ((uVar14 != 0) || (((ulong)puVar11 & 1) == 0)) {
          if (8 < uVar14) {
            return puVar11;
          }
          uVar19 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar3._8_8_ = uStack_68;
      auVar3._0_8_ = ppuStack_70;
      lVar10 = *(long *)(auVar30._0_8_ + 0x28);
      auVar32._8_4_ = uVar14;
      auVar32._0_8_ = lVar10;
      auVar31 = auVar30;
      if (lVar10 != 0) {
        uVar16 = 0;
        uVar17 = 1;
        pppuVar6 = &ppuStack_50;
        ppppuVar25 = (undefined8 ****)pppuStack_60;
        puVar27 = puStack_58;
        auVar31 = auVar3;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar8 = func_0x00f78b24();
  puVar27 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar32 = func_0x00f78ac0(uVar8,0);
code_r0x0150b5b8:
  auVar30._8_8_ = uVar17;
  auVar30._0_8_ = auVar32._0_8_;
  auVar4._8_8_ = uVar17;
  auVar4._0_8_ = auVar32._0_8_;
  if (auVar32._8_4_ < 9) {
    uVar15 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar32._8_4_ * 4);
    auVar30 = auVar4;
  }
  else {
    uVar15 = 0xffffffff;
  }
  do {
    puVar11 = auVar30._0_8_;
    uVar21 = auVar31._8_8_;
    *(undefined1 (*) [16])((long)pppuVar6 + -0x20) = auVar31;
    *(undefined8 *****)((long)pppuVar6 + -0x10) = ppppuVar25;
    *(undefined **)((long)pppuVar6 + -8) = puVar27;
    uVar14 = (uint)uVar15;
    if (uVar14 == 0xffffffff) {
      return puVar11;
    }
    lVar10 = puVar11[0xe];
    if (lVar10 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar21 = uVar15;
      if (uVar14 < *(uint *)(lVar10 + 0x18)) {
        uVar20 = 2;
        if ((int)uVar16 == 0) {
          uVar20 = 0;
        }
        *(undefined4 *)(lVar10 + (long)(int)uVar14 * 0x60 + 0x5c) = uVar20;
        if ((auVar30._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar11,uVar15);
        }
        *(undefined8 *)((long)pppuVar6 + -0x60) = unaff_x28;
        *(undefined8 *)((long)pppuVar6 + -0x58) = unaff_x27;
        *(undefined8 *)((long)pppuVar6 + -0x50) = unaff_x26;
        *(long *)((long)pppuVar6 + -0x48) = unaff_x25;
        *(undefined8 *)((long)pppuVar6 + -0x40) = 0x3d27e00;
        *(undefined8 *)((long)pppuVar6 + -0x38) = 0;
        *(undefined8 ***)((long)pppuVar6 + -0x30) = ppuVar22;
        *(undefined8 *)((long)pppuVar6 + -0x28) = uVar12;
        *(undefined8 *)((long)pppuVar6 + -0x20) = *(undefined8 *)((long)pppuVar6 + -0x20);
        *(undefined8 *)((long)pppuVar6 + -0x18) = *(undefined8 *)((long)pppuVar6 + -0x18);
        *(undefined8 *)((long)pppuVar6 + -0x10) = *(undefined8 *)((long)pppuVar6 + -0x10);
        *(undefined8 *)((long)pppuVar6 + -8) = *(undefined8 *)((long)pppuVar6 + -8);
        lVar10 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar18 = puVar11[0xe];
        lVar23 = 0;
        if (lVar18 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar18 + 0x18) <= uVar14) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar14;
        lVar18 = lVar18 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar18 + 0x20);
        ppuVar22 = *(undefined8 ***)(lVar18 + 0x28);
        uVar12 = *(undefined8 *)(lVar18 + 0x30);
        uVar17 = *(undefined8 *)(lVar18 + 0x48);
        uVar16 = *(undefined8 *)(lVar18 + 0x40);
        *(undefined8 *)((long)pppuVar6 + -0xe8) = *(undefined8 *)(lVar18 + 0x38);
        *(undefined8 *)((long)pppuVar6 + -0xf0) = uVar12;
        *(undefined8 *)((long)pppuVar6 + -0xd8) = uVar17;
        *(undefined8 *)((long)pppuVar6 + -0xe0) = uVar16;
        lVar10 = *(long *)(lVar18 + 0x50);
        iVar24 = *(int *)(lVar18 + 0x58);
        iVar1 = *(int *)(lVar18 + 0x5c);
        lVar23 = *(long *)(lVar18 + 0x60);
        lVar13 = *(long *)(lVar18 + 0x68);
        uVar12 = *(undefined8 *)(lVar18 + 0x70);
        *(undefined8 *)((long)pppuVar6 + -0xf8) = *(undefined8 *)(lVar18 + 0x78);
        *(undefined8 *)((long)pppuVar6 + -0x100) = uVar12;
        if (iVar1 == iVar24) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar9 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((int)puVar9 == 0) {
            return puVar9;
          }
          if (lVar10 != 0) {
            puVar11 = (undefined8 *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar10,iVar24 == 2,0);
            return puVar11;
          }
        }
        else if (iVar24 == 2) {
          if (iVar1 == 0) {
            if (lVar13 == 0) goto code_r0x0150c7d4;
            uVar16 = *(undefined8 *)(lVar18 + 0x38);
            uVar12 = *(undefined8 *)(lVar18 + 0x30);
            uVar8 = *(undefined8 *)(lVar18 + 0x48);
            uVar17 = *(undefined8 *)(lVar18 + 0x40);
            *(undefined8 *)((long)pppuVar6 + -0x118) = uVar16;
            *(undefined8 *)((long)pppuVar6 + -0x120) = uVar12;
            *(undefined8 *)((long)pppuVar6 + -0x108) = uVar8;
            *(undefined8 *)((long)pppuVar6 + -0x110) = uVar17;
            uVar29 = *(undefined8 *)(lVar18 + 0x78);
            uVar28 = *(undefined8 *)(lVar18 + 0x70);
            *(undefined8 *)((long)pppuVar6 + -0x128) = uVar29;
            *(undefined8 *)((long)pppuVar6 + -0x130) = uVar28;
            *(undefined8 *)((long)pppuVar6 + -200) = unaff_x26;
            *(undefined8 ***)((long)pppuVar6 + -0xc0) = ppuVar22;
            *(undefined8 *)((long)pppuVar6 + -0xb0) = uVar16;
            *(undefined8 *)((long)pppuVar6 + -0xb8) = uVar12;
            *(undefined8 *)((long)pppuVar6 + -0xa0) = uVar8;
            *(undefined8 *)((long)pppuVar6 + -0xa8) = uVar17;
            *(long *)((long)pppuVar6 + -0x98) = lVar10;
            *(undefined8 *)((long)pppuVar6 + -0x90) = _UNK_033f8620;
            *(long *)((long)pppuVar6 + -0x88) = lVar23;
            *(long *)((long)pppuVar6 + -0x80) = lVar13;
            *(undefined8 *)((long)pppuVar6 + -0x70) = uVar29;
            *(undefined8 *)((long)pppuVar6 + -0x78) = uVar28;
            lVar18 = lVar13;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar18,(undefined1 *)((long)pppuVar6 + -200),uRam0000000003d2a408);
            iVar24 = 1;
          }
          else {
            iVar24 = 2;
          }
code_r0x0150c72c:
          lVar18 = puVar11[0xe];
          if (lVar18 != 0) {
            if (*(uint *)(lVar18 + 0x18) <= uVar14) goto code_r0x0150c7d8;
            lVar18 = lVar18 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar18 + 0x20) = unaff_x26;
            *(undefined8 ***)(lVar18 + 0x28) = ppuVar22;
            uVar12 = *(undefined8 *)((long)pppuVar6 + -0xf0);
            uVar17 = *(undefined8 *)((long)pppuVar6 + -0xd8);
            uVar16 = *(undefined8 *)((long)pppuVar6 + -0xe0);
            *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)((long)pppuVar6 + -0xe8);
            *(undefined8 *)(lVar18 + 0x30) = uVar12;
            *(undefined8 *)(lVar18 + 0x48) = uVar17;
            *(undefined8 *)(lVar18 + 0x40) = uVar16;
            *(long *)(lVar18 + 0x50) = lVar10;
            *(int *)(lVar18 + 0x58) = iVar24;
            *(int *)(lVar18 + 0x5c) = iVar1;
            *(long *)(lVar18 + 0x60) = lVar23;
            *(long *)(lVar18 + 0x68) = lVar13;
            uVar12 = *(undefined8 *)((long)pppuVar6 + -0x100);
            *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)((long)pppuVar6 + -0xf8);
            *(undefined8 *)(lVar18 + 0x70) = uVar12;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar24 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar24 = 0;
            goto code_r0x0150c72c;
          }
          if (((ppuVar22 != (undefined8 **)0x0) &&
              (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppuVar22,0), lVar18 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,1,0), lVar23 != 0)) {
            *(undefined8 *)((long)pppuVar6 + -200) = unaff_x26;
            *(undefined8 ***)((long)pppuVar6 + -0xc0) = ppuVar22;
            *(undefined8 *)((long)pppuVar6 + -0xb0) = *(undefined8 *)((long)pppuVar6 + -0xe8);
            *(undefined8 *)((long)pppuVar6 + -0xb8) = *(undefined8 *)((long)pppuVar6 + -0xf0);
            *(undefined8 *)((long)pppuVar6 + -0xa0) = *(undefined8 *)((long)pppuVar6 + -0xd8);
            *(undefined8 *)((long)pppuVar6 + -0xa8) = *(undefined8 *)((long)pppuVar6 + -0xe0);
            *(long *)((long)pppuVar6 + -0x98) = lVar10;
            *(undefined8 *)((long)pppuVar6 + -0x90) = _UNK_033f8628;
            *(long *)((long)pppuVar6 + -0x88) = lVar23;
            *(long *)((long)pppuVar6 + -0x80) = lVar13;
            *(undefined8 *)((long)pppuVar6 + -0x70) = *(undefined8 *)((long)pppuVar6 + -0xf8);
            *(undefined8 *)((long)pppuVar6 + -0x78) = *(undefined8 *)((long)pppuVar6 + -0x100);
            lVar18 = lVar23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar12 = func_0x00f78b24();
        auVar31 = func_0x00f78ac0(uVar12,0);
        lVar18 = auVar31._8_8_;
        *(undefined8 *)((long)pppuVar6 + -0x180) = unaff_x26;
        *(long *)((long)pppuVar6 + -0x178) = unaff_x25;
        *(long *)((long)pppuVar6 + -0x170) = lVar13;
        *(long *)((long)pppuVar6 + -0x168) = lVar23;
        *(undefined8 ***)((long)pppuVar6 + -0x160) = ppuVar22;
        *(undefined8 **)((long)pppuVar6 + -0x158) = puVar11;
        *(ulong *)((long)pppuVar6 + -0x150) = uVar15;
        *(long *)((long)pppuVar6 + -0x148) = lVar10;
        *(undefined1 **)((long)pppuVar6 + -0x140) = (undefined1 *)((long)pppuVar6 + -0x10);
        *(undefined **)((long)pppuVar6 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar12 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar18 + 0x18),*(undefined4 *)(lVar18 + 0x1c),
                                 *(undefined4 *)(lVar18 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar18 + 0x10),0,0);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar12,10,uRam0000000003d5e7a8);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar12,*(undefined8 *)(lVar18 + 0x58),uRam0000000003d5e6e0);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar12,1,uRam0000000003d5e888);
        puVar11 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar12,auVar31._0_8_,uRam0000000003d5e850);
        if ((puVar11 != (undefined8 *)0x0) && (*(char *)(puVar11 + 0x1d) != '\0')) {
          puVar11[6] = *(undefined8 *)(lVar18 + 0x10);
        }
        return puVar11;
      }
    }
    uVar16 = func_0x00f78b24();
    auVar31 = func_0x00f78ac0(uVar16,0);
    puVar7 = (undefined1 *)((long)pppuVar6 + -0x30);
    puVar26 = (undefined1 *)((long)pppuVar6 + -0x30);
    *(undefined1 **)((long)pppuVar6 + -0x30) = (undefined1 *)((long)pppuVar6 + -0x10);
    *(undefined **)((long)pppuVar6 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar10 = *(long *)(auVar31._0_8_ + 0x28);
    auVar31._8_8_ = auVar31._8_8_;
    auVar31._0_8_ = lVar10;
    if (lVar10 == 0) {
      puVar27 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar31 = func_0x00f78af4();
    }
    else {
      puVar7 = (undefined1 *)((long)pppuVar6 + -0x20);
      puVar26 = *(undefined1 **)((long)pppuVar6 + -0x30);
      puVar27 = *(undefined **)((long)pppuVar6 + -0x28);
    }
    pppuVar6 = (undefined8 ***)(puVar7 + -0x20);
    *(undefined8 **)(puVar7 + -0x20) = puVar11;
    *(ulong *)(puVar7 + -0x18) = uVar21;
    *(undefined1 **)(puVar7 + -0x10) = puVar26;
    *(undefined **)(puVar7 + -8) = puVar27;
    ppppuVar25 = (undefined8 ****)(puVar7 + -0x10);
    uVar15 = 4;
    uVar16 = 0;
    puVar27 = &UNK_0150bd10;
    auVar30 = auVar31;
  } while( true );
}



// ============================================================
// RVA: 0x15f152c | Atlas.UI.Screens.LeagueLeaderboardScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * Atlas_UI_Screens_LeagueLeaderboardScreen__OnAfterExit(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar11;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar19;
  undefined8 unaff_x28;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  
  auVar26._8_8_ = unaff_x19;
  auVar26._0_8_ = unaff_x20;
  puVar5 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb5427 & 1) == 0) {
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb5427 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
  if ((lVar9 == 0) || (puVar10 = *(undefined8 **)(lVar9 + 0xb8), puVar10 == (undefined8 *)0x0)) {
    uVar13 = func_0x00f78af4();
    if ((bRam0000000003eb5429 & 1) == 0) {
      func_0x00f78a20(0x3d27e20);
      bRam0000000003eb5429 = 1;
    }
    puVar10 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar10,0,0);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[5] = uVar13;
      *(undefined4 *)(puVar10 + 4) = extraout_s0;
      return puVar10;
    }
    uVar13 = func_0x00f78af4();
    if ((bRam0000000003eb542a & 1) == 0) {
      func_0x00f78a20(0x3d410f0);
      bRam0000000003eb542a = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar13,uRam0000000003d410f0);
    if (lVar9 == 0) {
      return (undefined8 *)0x0;
    }
    puVar10 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar13,uRam0000000003d410f0);
    if (puVar10 != (undefined8 *)0x0) {
      if (puVar10[0x10] == 0) {
        return puVar10;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar13,uRam0000000003d410f0);
      if (lVar9 != 0) {
        uVar17 = 0x3f000000;
        goto code_r0x015f16d4;
      }
    }
    uVar13 = func_0x00f78af4();
    uVar17 = extraout_s0_00;
code_r0x015f16d4:
    if ((bRam0000000003eb542b & 1) == 0) {
      func_0x00f78a20(0x3d27e18);
      bRam0000000003eb542b = 1;
    }
    puVar10 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar10,0,0);
    if (puVar10 == (undefined8 *)0x0) {
      lVar9 = func_0x00f78af4();
      if ((bRam0000000003eb542e & 1) == 0) {
        func_0x00f78a20(0x3d2c750);
        bRam0000000003eb542e = 1;
      }
      if (lVar9 == 0) {
        auVar26 = func_0x00f78af4();
        puVar8 = auVar26._8_8_;
        puVar10 = auVar26._0_8_;
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        puVar10[2] = puVar8[2];
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        return puVar10;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
      return puVar10;
    }
    puVar10[4] = uVar13;
    *(undefined4 *)(puVar10 + 5) = uVar17;
    return puVar10;
  }
  uVar13 = 0;
  uVar14 = 0;
  lVar9 = puVar10[6];
  if (lVar9 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + 0x50) = 0;
    return puVar10;
  }
  uVar7 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar7,0);
  puVar20 = &stack0xffffffffffffffe0;
  lVar9 = *(long *)(auVar25._0_8_ + 0x30);
  if (lVar9 == 0) {
code_r0x0150b5a8:
    unaff_x20 = auVar26._0_8_;
    func_0x00f78af4();
    uVar7 = auVar26._8_8_;
  }
  else {
    uVar11 = auVar25._8_4_;
    uVar7 = auVar25._8_8_;
    if (uVar11 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = *(long *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar9 == 0) {
        puVar10 = (undefined8 *)0x0;
        if (8 < uVar11) {
          return (undefined8 *)0x0;
        }
        uVar16 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar11 & 0x1f) & uVar16) == 0) {
          return puVar10;
        }
      }
      else {
        puVar10 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar9,0);
        if ((uVar11 != 0) || (((ulong)puVar10 & 1) == 0)) {
          if (8 < uVar11) {
            return puVar10;
          }
          uVar16 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar9 = *(long *)(auVar25._0_8_ + 0x28);
      auVar27._8_4_ = uVar11;
      auVar27._0_8_ = lVar9;
      auVar26 = auVar25;
      if (lVar9 != 0) {
        uVar13 = 0;
        uVar14 = 1;
        puVar21 = &Atlas_UI_TopBarManager__ButtonPressed;
        puVar5 = &stack0xfffffffffffffff0;
        puVar20 = &stack0xfffffffffffffff0;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar7;
  uVar7 = func_0x00f78b24();
  puVar21 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar27 = func_0x00f78ac0(uVar7,0);
code_r0x0150b5b8:
  auVar4._8_8_ = uVar14;
  auVar4._0_8_ = unaff_x20;
  auVar3._8_8_ = uVar14;
  auVar3._0_8_ = unaff_x20;
  auVar25._8_8_ = unaff_x19;
  auVar25._0_8_ = auVar27._0_8_;
  auVar2._8_8_ = unaff_x19;
  auVar2._0_8_ = auVar27._0_8_;
  if (auVar27._8_4_ < 9) {
    uVar12 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar27._8_4_ * 4);
    auVar25 = auVar2;
    auVar4 = auVar3;
  }
  else {
    uVar12 = 0xffffffff;
  }
  do {
    uVar18 = auVar25._8_8_;
    puVar10 = auVar25._0_8_;
    *(long *)(puVar5 + -0x20) = auVar4._0_8_;
    *(ulong *)(puVar5 + -0x18) = uVar18;
    *(undefined1 **)(puVar5 + -0x10) = puVar20;
    *(undefined **)(puVar5 + -8) = puVar21;
    uVar11 = (uint)uVar12;
    if (uVar11 == 0xffffffff) {
      return puVar10;
    }
    lVar9 = puVar10[0xe];
    if (lVar9 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar18 = uVar12;
      if (uVar11 < *(uint *)(lVar9 + 0x18)) {
        uVar17 = 2;
        if ((int)uVar13 == 0) {
          uVar17 = 0;
        }
        *(undefined4 *)(lVar9 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar17;
        if ((auVar4._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar10,uVar12);
        }
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(long *)(puVar5 + -0x48) = unaff_x25;
        *(long *)(puVar5 + -0x40) = unaff_x24;
        *(long *)(puVar5 + -0x38) = unaff_x23;
        *(long *)(puVar5 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        lVar9 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar15 = puVar10[0xe];
        if (lVar15 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar15 + 0x18) <= uVar11) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar11;
        lVar15 = lVar15 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar15 + 0x20);
        unaff_x22 = *(long *)(lVar15 + 0x28);
        uVar13 = *(undefined8 *)(lVar15 + 0x30);
        uVar7 = *(undefined8 *)(lVar15 + 0x48);
        uVar14 = *(undefined8 *)(lVar15 + 0x40);
        *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(lVar15 + 0x38);
        *(undefined8 *)(puVar5 + -0xf0) = uVar13;
        *(undefined8 *)(puVar5 + -0xd8) = uVar7;
        *(undefined8 *)(puVar5 + -0xe0) = uVar14;
        lVar9 = *(long *)(lVar15 + 0x50);
        iVar19 = *(int *)(lVar15 + 0x58);
        iVar1 = *(int *)(lVar15 + 0x5c);
        unaff_x23 = *(long *)(lVar15 + 0x60);
        unaff_x24 = *(long *)(lVar15 + 0x68);
        uVar13 = *(undefined8 *)(lVar15 + 0x70);
        *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(lVar15 + 0x78);
        *(undefined8 *)(puVar5 + -0x100) = uVar13;
        if (iVar1 == iVar19) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar8 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
          if ((int)puVar8 == 0) {
            return puVar8;
          }
          if (lVar9 != 0) {
            puVar10 = (undefined8 *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar9,iVar19 == 2,0);
            return puVar10;
          }
        }
        else if (iVar19 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar14 = *(undefined8 *)(lVar15 + 0x38);
            uVar13 = *(undefined8 *)(lVar15 + 0x30);
            uVar22 = *(undefined8 *)(lVar15 + 0x48);
            uVar7 = *(undefined8 *)(lVar15 + 0x40);
            *(undefined8 *)(puVar5 + -0x118) = uVar14;
            *(undefined8 *)(puVar5 + -0x120) = uVar13;
            *(undefined8 *)(puVar5 + -0x108) = uVar22;
            *(undefined8 *)(puVar5 + -0x110) = uVar7;
            uVar24 = *(undefined8 *)(lVar15 + 0x78);
            uVar23 = *(undefined8 *)(lVar15 + 0x70);
            *(undefined8 *)(puVar5 + -0x128) = uVar24;
            *(undefined8 *)(puVar5 + -0x130) = uVar23;
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = uVar14;
            *(undefined8 *)(puVar5 + -0xb8) = uVar13;
            *(undefined8 *)(puVar5 + -0xa0) = uVar22;
            *(undefined8 *)(puVar5 + -0xa8) = uVar7;
            *(long *)(puVar5 + -0x98) = lVar9;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8620;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = uVar24;
            *(undefined8 *)(puVar5 + -0x78) = uVar23;
            lVar15 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar15,puVar5 + -200,uRam0000000003d2a408);
            iVar19 = 1;
          }
          else {
            iVar19 = 2;
          }
code_r0x0150c72c:
          lVar15 = puVar10[0xe];
          if (lVar15 != 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar11) goto code_r0x0150c7d8;
            lVar15 = lVar15 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar15 + 0x20) = unaff_x26;
            *(long *)(lVar15 + 0x28) = unaff_x22;
            uVar13 = *(undefined8 *)(puVar5 + -0xf0);
            uVar7 = *(undefined8 *)(puVar5 + -0xd8);
            uVar14 = *(undefined8 *)(puVar5 + -0xe0);
            *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(lVar15 + 0x30) = uVar13;
            *(undefined8 *)(lVar15 + 0x48) = uVar7;
            *(undefined8 *)(lVar15 + 0x40) = uVar14;
            *(long *)(lVar15 + 0x50) = lVar9;
            *(int *)(lVar15 + 0x58) = iVar19;
            *(int *)(lVar15 + 0x5c) = iVar1;
            *(long *)(lVar15 + 0x60) = unaff_x23;
            *(long *)(lVar15 + 0x68) = unaff_x24;
            uVar13 = *(undefined8 *)(puVar5 + -0x100);
            *(undefined8 *)(lVar15 + 0x78) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(lVar15 + 0x70) = uVar13;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar19 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar19 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar15 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0xd8);
            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0xe0);
            *(long *)(puVar5 + -0x98) = lVar9;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8628;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x100);
            lVar15 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar13 = func_0x00f78b24();
        auVar26 = func_0x00f78ac0(uVar13,0);
        lVar15 = auVar26._8_8_;
        *(undefined8 *)(puVar5 + -0x180) = unaff_x26;
        *(long *)(puVar5 + -0x178) = unaff_x25;
        *(long *)(puVar5 + -0x170) = unaff_x24;
        *(long *)(puVar5 + -0x168) = unaff_x23;
        *(long *)(puVar5 + -0x160) = unaff_x22;
        *(undefined8 **)(puVar5 + -0x158) = puVar10;
        *(ulong *)(puVar5 + -0x150) = uVar12;
        *(long *)(puVar5 + -0x148) = lVar9;
        *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar13 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar15 + 0x18),*(undefined4 *)(lVar15 + 0x1c),
                                 *(undefined4 *)(lVar15 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar15 + 0x10),0,0);
        uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,10,uRam0000000003d5e7a8);
        uVar13 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar13,*(undefined8 *)(lVar15 + 0x58),uRam0000000003d5e6e0);
        uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar13,1,uRam0000000003d5e888);
        puVar10 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar13,auVar26._0_8_,uRam0000000003d5e850);
        if ((puVar10 != (undefined8 *)0x0) && (*(char *)(puVar10 + 0x1d) != '\0')) {
          puVar10[6] = *(undefined8 *)(lVar15 + 0x10);
        }
        return puVar10;
      }
    }
    uVar13 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar13,0);
    puVar6 = puVar5 + -0x30;
    puVar20 = puVar5 + -0x30;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar9 = *(long *)(auVar26._0_8_ + 0x28);
    auVar25._8_8_ = auVar26._8_8_;
    auVar25._0_8_ = lVar9;
    if (lVar9 == 0) {
      puVar21 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar25 = func_0x00f78af4();
    }
    else {
      puVar6 = puVar5 + -0x20;
      puVar20 = *(undefined1 **)(puVar5 + -0x30);
      puVar21 = *(undefined **)(puVar5 + -0x28);
    }
    puVar5 = puVar6 + -0x20;
    *(undefined8 **)(puVar6 + -0x20) = puVar10;
    *(ulong *)(puVar6 + -0x18) = uVar18;
    *(undefined1 **)(puVar6 + -0x10) = puVar20;
    *(undefined **)(puVar6 + -8) = puVar21;
    puVar20 = puVar6 + -0x10;
    uVar12 = 4;
    uVar13 = 0;
    puVar21 = &UNK_0150bd10;
    auVar4 = auVar25;
  } while( true );
}



// ============================================================
// RVA: 0x15f15a0 | Atlas.UI.Screens.LeagueLeaderboardScreen.PlaySlideOut
// ============================================================

/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_s0;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5429 & 1) == 0) {
    func_0x00f78a20(0x3d27e20);
    bRam0000000003eb5429 = 1;
  }
  puVar1 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30_TypeInfo*/ uRam0000000003d27e20);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30$$.ctor*/ func_0x0155b2e8(puVar1,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = param_2;
    *(undefined4 *)(puVar1 + 4) = param_1;
    return puVar1;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb542a & 1) == 0) {
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb542a = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar2,uRam0000000003d410f0);
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar2,uRam0000000003d410f0);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[0x10] == 0) {
      return puVar1;
    }
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar2,uRam0000000003d410f0);
    if (lVar3 != 0) {
      uVar5 = 0x3f000000;
      goto code_r0x015f16d4;
    }
  }
  uVar2 = func_0x00f78af4();
  uVar5 = extraout_s0;
code_r0x015f16d4:
  if ((bRam0000000003eb542b & 1) == 0) {
    func_0x00f78a20(0x3d27e18);
    bRam0000000003eb542b = 1;
  }
  puVar1 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar1,0,0);
  if (puVar1 == (undefined8 *)0x0) {
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003eb542e & 1) == 0) {
      func_0x00f78a20(0x3d2c750);
      bRam0000000003eb542e = 1;
    }
    if (lVar3 == 0) {
      auVar7 = func_0x00f78af4();
      puVar4 = auVar7._8_8_;
      puVar1 = auVar7._0_8_;
      uVar6 = puVar4[1];
      uVar2 = *puVar4;
      puVar1[2] = puVar4[2];
      puVar1[1] = uVar6;
      *puVar1 = uVar2;
      return puVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
    return puVar1;
  }
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar5;
  return puVar1;
}



// ============================================================
// RVA: 0x15f1624 | Atlas.UI.Screens.LeagueLeaderboardScreen.OnCompleteSlideOut
// ============================================================

/* WARNING: Possible PIC construction at 0x015f16a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015f16a8) */
/* WARNING: Removing unreachable block (ram,0x015f16ac) */

undefined8 * Atlas_UI_Screens_LeagueLeaderboardScreen__OnCompleteSlideOut(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb542a & 1) == 0) {
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb542a = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
  if (lVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar2[0x10] == 0) {
      return puVar2;
    }
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d410f0);
    if (lVar1 != 0) {
      uVar4 = 0x3f000000;
      goto code_r0x015f16d4;
    }
  }
  param_1 = func_0x00f78af4();
  uVar4 = extraout_s0;
code_r0x015f16d4:
  if ((bRam0000000003eb542b & 1) == 0) {
    func_0x00f78a20(0x3d27e18);
    bRam0000000003eb542b = 1;
  }
  puVar2 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar2,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = param_1;
    *(undefined4 *)(puVar2 + 5) = uVar4;
    return puVar2;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb542e & 1) == 0) {
    func_0x00f78a20(0x3d2c750);
    bRam0000000003eb542e = 1;
  }
  if (lVar1 == 0) {
    auVar7 = func_0x00f78af4();
    puVar3 = auVar7._8_8_;
    puVar2 = auVar7._0_8_;
    uVar6 = puVar3[1];
    uVar5 = *puVar3;
    puVar2[2] = puVar3[2];
    puVar2[1] = uVar6;
    *puVar2 = uVar5;
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
  return puVar2;
}



// ============================================================
// RVA: 0x15f16d4 | Atlas.UI.Screens.LeagueLeaderboardScreen.PlaySlideIn
// ============================================================

undefined8 *
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb542b & 1) == 0) {
    func_0x00f78a20(0x3d27e18);
    bRam0000000003eb542b = 1;
  }
  puVar1 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32_TypeInfo*/ uRam0000000003d27e18);
  /*Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32$$.ctor*/ func_0x0155b0e8(puVar1,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_2;
    *(undefined4 *)(puVar1 + 5) = param_1;
    return puVar1;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb542e & 1) == 0) {
    func_0x00f78a20(0x3d2c750);
    bRam0000000003eb542e = 1;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
    return puVar1;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar1 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[2] = puVar3[2];
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  return puVar1;
}



// ============================================================
// RVA: 0x15f1758 | Atlas.UI.Screens.LeagueLeaderboardScreen..ctor
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb542e & 1) == 0) {
    func_0x00f78a20(0x3d2c750);
    bRam0000000003eb542e = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c750 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



