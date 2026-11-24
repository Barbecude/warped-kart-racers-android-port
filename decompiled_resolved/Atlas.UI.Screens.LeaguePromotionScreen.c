// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeaguePromotionScreen

// ============================================================
// RVA: 0x1480f38 | Atlas.UI.Screens.LeaguePromotionScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x01480fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014814a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01480fb4) */
/* WARNING: Removing unreachable block (ram,0x01480fc4) */
/* WARNING: Removing unreachable block (ram,0x01480ff8) */
/* WARNING: Removing unreachable block (ram,0x0148101c) */
/* WARNING: Removing unreachable block (ram,0x01481024) */
/* WARNING: Removing unreachable block (ram,0x01481044) */
/* WARNING: Removing unreachable block (ram,0x0148105c) */
/* WARNING: Removing unreachable block (ram,0x01481064) */
/* WARNING: Removing unreachable block (ram,0x014810b8) */
/* WARNING: Removing unreachable block (ram,0x0148107c) */
/* WARNING: Removing unreachable block (ram,0x014814a8) */
/* WARNING: Removing unreachable block (ram,0x014814ac) */
/* WARNING: Removing unreachable block (ram,0x015f51f8) */

undefined8 * Atlas_UI_Screens_LeaguePromotionScreen__OnBeforeEnter(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 *unaff_x21;
  code *pcVar18;
  undefined1 *puVar19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 **ppuVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  
  uVar11 = 0x3d41120;
  if ((bRam0000000003eb490b & 1) == 0) {
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d59f18);
    func_0x00f78a20(0x3d41120);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb490b = 1;
  }
  uStack_c8 = 0x1480fb4;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb490c & 1) == 0) {
    func_0x00f78a20(0x3d41120);
    bRam0000000003eb490c = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xe8), lVar4 != 0)) {
    puVar19 = (undefined1 *)0x3d41120;
    /*Atlas.League.LeagueManager$$GetNextLeague*/ func_0x015f44fc(lVar4,&stack0xfffffffffffffeec);
    puVar7 = (undefined8 *)/*Atlas.League.LeagueManager$$GetPlayedEventCount*/ func_0x015f4b50(lVar4);
    puVar8 = (undefined8 *)/*Atlas.League.LeagueManager$$GetSeedForLatestPlayedDate*/ func_0x015f49c8(lVar4);
    if (*(long *)(lVar4 + 0x80) != 0) {
      puVar19 = *(undefined1 **)(*(long *)(lVar4 + 0x80) + 0x48);
      lVar9 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(lVar4);
      unaff_x21 = puVar8;
      if (lVar9 != 0) {
        unaff_x23 = *(undefined8 **)(lVar9 + 0x58);
        unaff_x24 = (undefined8 *)/*Atlas.League.LeagueManager$$GetLeagueStandingsForAnalytics*/ func_0x015f4bf8(lVar4);
        puVar10 = (undefined8 *)/*Atlas.League.LeagueManager$$GetPlayerStars*/ func_0x015f41e0(lVar4);
        if (puVar19 != (undefined1 *)0x0) {
          puVar13 = (undefined8 *)0x0;
          puVar12 = puVar8;
          if ((bRam0000000003eb47b0 & 1) == 0) {
            func_0x00f78a20(0x3d3cc00);
            func_0x00f78a20(0x3d3cc10);
            func_0x00f78a20(0x3d6f390);
            func_0x00f78a20(0x3d6f3a0);
            func_0x00f78a20(0x3d6f358);
            func_0x00f78a20(0x3d72ce8);
            func_0x00f78a20(0x3d6f388);
            func_0x00f78a20(0x3d6c628);
            func_0x00f78a20(0x3d71630);
            bRam0000000003eb47b0 = 1;
          }
          if (*(long *)(puVar19 + 0x20) != 0) {
            /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(*(long *)(puVar19 + 0x20),uRam0000000003d3cc10);
            lVar4 = *(long *)(puVar19 + 0x20);
            puStack_158 = (undefined8 *)0x0;
            puStack_150 = (undefined1 *)0x0;
            puStack_148 = (undefined8 *)0x0;
            /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&puStack_158,/*STR('LeagueTier')*/ uRam0000000003d6f3a0,unaff_x23,0);
            puVar12 = unaff_x23;
            if (lVar4 != 0) {
              /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xfffffffffffffec0,uRam0000000003d3cc00);
              lVar4 = *(long *)(puVar19 + 0x20);
              uStack_170 = 0;
              lStack_168 = 0;
              plStack_160 = (long *)0x0;
              /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&uStack_170,/*STR('LeagueSeed')*/ uRam0000000003d6f388,puVar8,0);
              puVar12 = puVar8;
              if (lVar4 != 0) {
                /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xfffffffffffffec0,uRam0000000003d3cc00);
                lVar4 = *(long *)(puVar19 + 0x20);
                puStack_188 = (undefined8 *)0x0;
                ppuStack_180 = (undefined1 **)0x0;
                puStack_178 = (undefined *)0x0;
                /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&puStack_188,/*STR('LeagueStanding')*/ uRam0000000003d6f390,unaff_x24,0);
                puVar12 = unaff_x24;
                if (lVar4 != 0) {
                  /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xfffffffffffffec0,uRam0000000003d3cc00);
                  lVar4 = *(long *)(puVar19 + 0x20);
                  uStack_1a0 = 0;
                  uStack_198 = 0;
                  puStack_190 = (undefined8 *)0x0;
                  puVar12 = puVar7;
                  /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&uStack_1a0,/*STR('EventCount')*/ uRam0000000003d6c628,puVar7,0);
                  if (lVar4 != 0) {
                    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xfffffffffffffec0,uRam0000000003d3cc00);
                    puVar7 = *(undefined8 **)(puVar19 + 0x20);
                    lStack_1b8 = 0;
                    pppuStack_1b0 = (undefined1 ***)0x0;
                    puStack_1a8 = (undefined *)0x0;
                    /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&lStack_1b8,/*STR('Promoted')*/ uRam0000000003d71630,0,0);
                    puVar12 = puVar13;
                    if (puVar7 != (undefined8 *)0x0) {
                      /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(puVar7,&stack0xfffffffffffffec0,uRam0000000003d3cc00);
                      lVar4 = *(long *)(puVar19 + 0x20);
                      uStack_1d0 = 0;
                      uStack_1c8 = 0;
                      uStack_1c0 = 0;
                      puVar12 = puVar10;
                      /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&uStack_1d0,/*STR('StarsAwarded')*/ uRam0000000003d72ce8,puVar10,0);
                      if (lVar4 != 0) {
                        /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xfffffffffffffec0,uRam0000000003d3cc00);
                        puVar7 = (undefined8 *)
                                 /*Atlas.Analytics.AtlasAnalyticsEvents$$PostEvent*/ func_0x014557f8(puVar19,/*STR('LeagueEndEvent')*/ uRam0000000003d6f358,
                                                 *(undefined8 *)(puVar19 + 0x20));
                        return puVar7;
                      }
                    }
                  }
                }
              }
            }
          }
          auVar21 = func_0x00f78af4();
          lVar4 = auVar21._0_8_;
          puStack_1d8 = &Atlas_Analytics_AtlasAnalyticsEvents__FillReusableCustomParamsList;
          puStack_200 = puVar7;
          uStack_1f8 = 0;
          puStack_1f0 = puVar10;
          puStack_1e8 = puVar19;
          ppuStack_1e0 = &puStack_d0;
          if ((bRam0000000003eb47b2 & 1) == 0) {
            func_0x00f78a20(0x3d3cc00);
            func_0x00f78a20(0x3d3cc10);
            bRam0000000003eb47b2 = 1;
          }
          if (*(long *)(lVar4 + 0x20) != 0) {
            /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(*(long *)(lVar4 + 0x20),uRam0000000003d3cc10);
            lVar9 = *(long *)(lVar4 + 0x20);
            uStack_238 = 0;
            uStack_230 = 0;
            uStack_228 = 0;
            /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&uStack_238,auVar21._8_8_,puVar12,0);
            if (lVar9 != 0) {
              uStack_218 = uStack_230;
              uStack_220 = uStack_238;
              uStack_210 = uStack_228;
              /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar9,&uStack_220,uRam0000000003d3cc00);
              return *(undefined8 **)(lVar4 + 0x20);
            }
          }
          puVar7 = (undefined8 *)func_0x00f78af4();
          if ((bRam0000000003eb47b3 & 1) == 0) {
            func_0x00f78a20(0x3d70570);
            bRam0000000003eb47b3 = 1;
          }
          puVar7[3] = /*STR('None')*/ uRam0000000003d70570;
          return puVar7;
        }
      }
    }
    puVar7 = (undefined8 *)func_0x00f78af4();
    plStack_160 = unaff_x24;
    puStack_158 = unaff_x23;
    puStack_150 = puVar19;
    puStack_148 = unaff_x21;
    if ((bRam0000000003eb5444 & 1) == 0) {
      func_0x00f78a20(0x3d2e788);
      func_0x00f78a20(0x3d1c2b8);
      func_0x00f78a20(0x3d3af90);
      func_0x00f78a20(0x3d1db48);
      bRam0000000003eb5444 = 1;
    }
    uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<LeagueLeaderboardData>_TypeInfo*/ uRam0000000003d1db48);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3af90);
    puVar7[0xc] = uVar11;
    uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<LeagueLeaderboardData>_TypeInfo*/ uRam0000000003d1db48);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3af90);
    puVar7[0xd] = uVar11;
    *(undefined1 *)(puVar7 + 0x12) = 1;
    uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<int, List<LeagueEventPlacementData>>_TypeInfo*/ uRam0000000003d1c2b8);
    /*System.Collections.Generic.Dictionary<int, GUILayoutUtility.LayoutCache>$$.ctor*/ func_0x01e8eeec(uVar11,uRam0000000003d2e788);
    puVar7[0x15] = uVar11;
    return puVar7;
  }
  puVar7 = (undefined8 *)func_0x00f78af4();
  plVar17 = (long *)0x3eb4000;
  if ((bRam0000000003eb490d & 1) == 0) {
    func_0x00f78a20(0x3d56db8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41110);
    func_0x00f78a20(0x3d41118);
    func_0x00f78a20(0x3d41120);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb490d = 1;
  }
  if (*(char *)((long)puVar7 + 0x8d) == '\0') {
    plVar17 = puVar7 + 0x10;
    lVar4 = *plVar17;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar8 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
    if (((ulong)puVar8 & 1) == 0) {
      uVar11 = 0x3d41120;
      if (puVar7[0xe] != 0) {
        puVar8 = (undefined8 *)
                 Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                           (puVar7[0xe],plVar17,uRam0000000003d56db8);
        if ((int)puVar8 == 0) {
          return puVar8;
        }
        *(undefined1 *)((long)puVar7 + 0x8c) = 1;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar7,uRam0000000003d41110);
        uVar11 = puVar7[0x10];
        uVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
        if (lVar4 != 0) {
          Atlas_UI_Screens_LeaguePromotionBehaviour__Setup(lVar4,uVar11,uVar5);
          if (*plVar17 != 0) {
            plVar17 = (long *)Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator
                                        (*plVar17,0,0);
            if (((puVar7[0xe] != 0) &&
                (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(puVar7[0xe],0,0),
                plVar17 != (long *)0x0)) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar17,0), lVar4 = lVar9, lVar9 != 0))
            {
              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar9,0);
              /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(plVar17,0);
              /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar9,0);
              /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar17,0);
              puVar8 = (undefined8 *)/*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar9,0);
              goto code_r0x01481348;
            }
          }
        }
      }
    }
    else {
code_r0x01481348:
      if (*(char *)((long)puVar7 + 0x8c) == '\0') {
        return puVar8;
      }
      if (puVar7[0xe] != 0) {
        puVar8 = (undefined8 *)
                 Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                           (puVar7[0xe],0);
        if ((int)puVar8 == 0) {
          return puVar8;
        }
        if (*(int *)(puVar7 + 0x11) < 3) {
          *(int *)(puVar7 + 0x11) = *(int *)(puVar7 + 0x11) + 1;
          return puVar8;
        }
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
          /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar9 + 0x78),0,0,0,0);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
          if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe8) != 0)) {
            /*Atlas.League.LeagueManager$$GetNextLeague*/ func_0x015f44fc(*(long *)(lVar9 + 0xe8),&stack0xfffffffffffffecc,0);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe8) != 0)) {
              iVar2 = /*Atlas.League.LeagueManager$$TopOfMaster*/ func_0x015f4278(*(long *)(lVar9 + 0xe8),0);
              if (iVar2 == 0) {
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
                if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe8) != 0)) {
                  iVar2 = /*Atlas.League.LeagueManager$$BottomOfBronze*/ func_0x015f42cc(*(long *)(lVar9 + 0xe8),0);
                  lVar9 = puVar7[0xe];
                  if (iVar2 == 0) {
                    if ((lVar9 != 0) &&
                       (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(lVar9,0,0),
                       lVar9 != 0)) {
                      Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar9,0,0);
                      goto code_r0x01481480;
                    }
                  }
                  else if ((lVar9 != 0) &&
                          (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(lVar9,0,0),
                          lVar9 != 0)) {
                    uVar5 = 1;
                    goto code_r0x01481454;
                  }
                }
              }
              else if ((puVar7[0xe] != 0) &&
                      (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar7[0xe],0,0),
                      lVar9 != 0)) {
                uVar5 = 0;
code_r0x01481454:
                Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar9,uVar5,0);
code_r0x01481480:
                *(undefined1 *)((long)puVar7 + 0x8c) = 0;
                *(undefined4 *)(puVar7 + 0x11) = 0;
                plVar17 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar7,uRam0000000003d41110);
                puVar10 = (undefined8 *)&UNK_014814a8;
                puVar8 = puVar7;
                goto code_r0x014814d8;
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
    lVar4 = 0x3d41120;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
      puVar8 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar9 + 0x78),0);
      if ((int)puVar8 == 0) {
        return puVar8;
      }
      *(undefined1 *)((long)puVar7 + 0x8d) = 0;
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar7,uRam0000000003d41118);
      lVar4 = 0x3d41120;
      uVar11 = 0x3d41120;
      if (lVar9 != 0) {
        puVar7 = *(undefined8 **)(lVar9 + 0x10);
        if (puVar7 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar11 = 0;
        puStack_148 = puVar7;
        lVar4 = puVar7[0xd];
        if (lVar4 == 0) {
          ppuVar20 = &puStack_148;
          lVar9 = 1;
        }
        else {
          lVar9 = *(long *)(lVar4 + 0x18);
          if (lVar9 == 0) {
            return puVar7;
          }
          ppuVar20 = (undefined8 **)(lVar4 + 0x20);
        }
        lVar4 = 0;
        do {
          puVar8 = ppuVar20[lVar4];
          pcVar18 = (code *)puVar8[2];
          plVar17 = (long *)puVar8[4];
          lVar6 = puVar8[5];
          if (*(short *)(lVar6 + 0x48) == -1) {
            func_0x00f78ad8(lVar6,uVar11);
          }
          iVar2 = func_0x00f78a4c(lVar6);
          if (iVar2 == 0) {
            if ((((plVar17 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
                ((*(byte *)(*plVar17 + 0x115) & 1) != 0)) || (puVar7[3] == 0))
            goto code_r0x0155caf8;
            iVar2 = func_0x00f78a44(lVar6);
            iVar3 = func_0x00f78ec0(lVar6);
            if (iVar2 == 0) {
              uVar1 = *(ushort *)(lVar6 + 0x48);
              if (iVar3 == 0) {
                lVar6 = *plVar17 + (ulong)uVar1 * 0x10;
                auVar21 = (**(code **)(lVar6 + 0x138))(plVar17,*(undefined8 *)(lVar6 + 0x140));
                goto code_r0x0155cb04;
              }
              lVar6 = func_0x00f78a48(lVar6);
              lVar14 = *plVar17;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar6) {
                    puVar8 = (undefined8 *)
                             (lVar14 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x0155cbc8;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(plVar17,lVar6,(ulong)uVar1);
code_r0x0155cbc8:
              pcVar18 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if (iVar3 == 0) {
                uVar11 = *(undefined8 *)(*plVar17 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar14 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar6 + 0x18)) {
                      lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar6 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0155cba0;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                lVar14 = func_0x00fac1f0(plVar17);
code_r0x0155cba0:
                uVar11 = *(undefined8 *)(lVar14 + 8);
              }
              puVar8 = (undefined8 *)func_0x00f78acc(uVar11,lVar6);
              pcVar18 = (code *)*puVar8;
            }
            auVar21 = (*pcVar18)(plVar17,puVar8);
          }
          else if (*(char *)(lVar6 + 0x4a) == '\0') {
            auVar21 = (*pcVar18)(lVar6);
          }
          else {
code_r0x0155caf8:
            auVar21 = (*pcVar18)(plVar17,lVar6);
          }
code_r0x0155cb04:
          uVar11 = auVar21._8_8_;
          lVar4 = lVar4 + 1;
          if (lVar4 == lVar9) {
            return auVar21._0_8_;
          }
        } while( true );
      }
    }
  }
  puVar10 = (undefined8 *)&Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence;
  puVar8 = (undefined8 *)func_0x00f78af4();
code_r0x014814d8:
  uStack_170 = uVar11;
  lStack_168 = lVar4;
  plStack_160 = plVar17;
  puStack_158 = puVar7;
  puStack_150 = &stack0xffffffffffffff00;
  puStack_148 = puVar10;
  if ((bRam0000000003eb490e & 1) == 0) {
    func_0x00f78a20(0x3d27e80);
    bRam0000000003eb490e = 1;
  }
  puVar7 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11_TypeInfo*/ uRam0000000003d27e80);
  /*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11$$.ctor*/ func_0x0155c818(puVar7,0,0);
  if (puVar7 == (undefined8 *)0x0) {
    lVar4 = func_0x00f78af4();
    uStack_198 = 0x3d27e80;
    puStack_178 = &Atlas_UI_Screens_LeaguePromotionScreen__ContinuePressed;
    uStack_1a0 = uVar11;
    puStack_190 = puVar7;
    puStack_188 = puVar8;
    ppuStack_180 = &puStack_150;
    if ((bRam0000000003eb490f & 1) == 0) {
      func_0x00f78a20(0x3d41120);
      bRam0000000003eb490f = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41120);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar9 + 0x78),1,0,0,0,0);
      *(undefined1 *)(lVar4 + 0x8d) = 1;
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    lVar9 = func_0x00f78af4();
    uStack_1c8 = 0x3d41120;
    uStack_1c0 = 0x3eb4000;
    puStack_1a8 = &Atlas_UI_Screens_LeaguePromotionScreen___ctor;
    uStack_1d0 = uVar11;
    lStack_1b8 = lVar4;
    pppuStack_1b0 = &ppuStack_180;
    if ((bRam0000000003eb4910 & 1) == 0) {
      func_0x00f78a20(0x3d2c778);
      bRam0000000003eb4910 = 1;
    }
    if (lVar9 == 0) {
      auVar21 = func_0x00f78af4();
      puVar8 = auVar21._8_8_;
      puVar7 = auVar21._0_8_;
      uVar5 = puVar8[1];
      uVar11 = *puVar8;
      puVar7[2] = puVar8[2];
      puVar7[1] = uVar5;
      *puVar7 = uVar11;
      return puVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c778 + 0x18) + 0xc0) + 0x38))();
    return puVar7;
  }
  puVar7[4] = puVar8;
  return puVar7;
}



// ============================================================
// RVA: 0x14810bc | Atlas.UI.Screens.LeaguePromotionScreen.DispatchAnalytics
// ============================================================

/* WARNING: Possible PIC construction at 0x014814a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014814a8) */
/* WARNING: Removing unreachable block (ram,0x014814ac) */
/* WARNING: Removing unreachable block (ram,0x015f51f8) */

undefined8 * Atlas_UI_Screens_LeaguePromotionScreen__DispatchAnalytics(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  code *pcVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 **ppuVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  undefined8 *puStack_88;
  
  if ((bRam0000000003eb490c & 1) == 0) {
    func_0x00f78a20(0x3d41120);
    bRam0000000003eb490c = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xe8), lVar4 != 0)) {
    /*Atlas.League.LeagueManager$$GetNextLeague*/ func_0x015f44fc(lVar4,&stack0xffffffffffffffac);
    puVar7 = (undefined8 *)/*Atlas.League.LeagueManager$$GetPlayedEventCount*/ func_0x015f4b50(lVar4);
    puVar8 = (undefined8 *)/*Atlas.League.LeagueManager$$GetSeedForLatestPlayedDate*/ func_0x015f49c8(lVar4);
    if (*(long *)(lVar4 + 0x80) != 0) {
      unaff_x22 = *(undefined1 **)(*(long *)(lVar4 + 0x80) + 0x48);
      lVar9 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(lVar4);
      unaff_x21 = puVar8;
      if (lVar9 != 0) {
        unaff_x23 = *(undefined8 **)(lVar9 + 0x58);
        unaff_x24 = (undefined8 *)/*Atlas.League.LeagueManager$$GetLeagueStandingsForAnalytics*/ func_0x015f4bf8(lVar4);
        puVar10 = (undefined8 *)/*Atlas.League.LeagueManager$$GetPlayerStars*/ func_0x015f41e0(lVar4);
        if (unaff_x22 != (undefined1 *)0x0) {
          puVar13 = (undefined8 *)0x0;
          puVar12 = puVar8;
          if ((bRam0000000003eb47b0 & 1) == 0) {
            func_0x00f78a20(0x3d3cc00);
            func_0x00f78a20(0x3d3cc10);
            func_0x00f78a20(0x3d6f390);
            func_0x00f78a20(0x3d6f3a0);
            func_0x00f78a20(0x3d6f358);
            func_0x00f78a20(0x3d72ce8);
            func_0x00f78a20(0x3d6f388);
            func_0x00f78a20(0x3d6c628);
            func_0x00f78a20(0x3d71630);
            bRam0000000003eb47b0 = 1;
          }
          if (*(long *)(unaff_x22 + 0x20) != 0) {
            /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(*(long *)(unaff_x22 + 0x20),uRam0000000003d3cc10);
            lVar4 = *(long *)(unaff_x22 + 0x20);
            puStack_98 = (undefined8 *)0x0;
            puStack_90 = (undefined1 *)0x0;
            puStack_88 = (undefined8 *)0x0;
            /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&puStack_98,/*STR('LeagueTier')*/ uRam0000000003d6f3a0,unaff_x23,0);
            puVar12 = unaff_x23;
            if (lVar4 != 0) {
              /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xffffffffffffff80,uRam0000000003d3cc00);
              lVar4 = *(long *)(unaff_x22 + 0x20);
              puStack_b0 = (undefined1 *)0x0;
              lStack_a8 = 0;
              plStack_a0 = (long *)0x0;
              /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&puStack_b0,/*STR('LeagueSeed')*/ uRam0000000003d6f388,puVar8,0);
              puVar12 = puVar8;
              if (lVar4 != 0) {
                /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xffffffffffffff80,uRam0000000003d3cc00);
                lVar4 = *(long *)(unaff_x22 + 0x20);
                puStack_c8 = (undefined8 *)0x0;
                ppuStack_c0 = (undefined1 **)0x0;
                puStack_b8 = (undefined *)0x0;
                /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&puStack_c8,/*STR('LeagueStanding')*/ uRam0000000003d6f390,unaff_x24,0);
                puVar12 = unaff_x24;
                if (lVar4 != 0) {
                  /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xffffffffffffff80,uRam0000000003d3cc00);
                  lVar4 = *(long *)(unaff_x22 + 0x20);
                  puStack_e0 = (undefined1 *)0x0;
                  uStack_d8 = 0;
                  puStack_d0 = (undefined8 *)0x0;
                  puVar12 = puVar7;
                  /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&puStack_e0,/*STR('EventCount')*/ uRam0000000003d6c628,puVar7,0);
                  if (lVar4 != 0) {
                    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xffffffffffffff80,uRam0000000003d3cc00);
                    puVar7 = *(undefined8 **)(unaff_x22 + 0x20);
                    puStack_f8 = (undefined1 *)0x0;
                    pppuStack_f0 = (undefined1 ***)0x0;
                    puStack_e8 = (undefined *)0x0;
                    /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&puStack_f8,/*STR('Promoted')*/ uRam0000000003d71630,0,0);
                    puVar12 = puVar13;
                    if (puVar7 != (undefined8 *)0x0) {
                      /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(puVar7,&stack0xffffffffffffff80,uRam0000000003d3cc00);
                      lVar4 = *(long *)(unaff_x22 + 0x20);
                      puStack_110 = (undefined1 *)0x0;
                      uStack_108 = 0;
                      uStack_100 = 0;
                      puVar12 = puVar10;
                      /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&puStack_110,/*STR('StarsAwarded')*/ uRam0000000003d72ce8,puVar10,0);
                      if (lVar4 != 0) {
                        /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar4,&stack0xffffffffffffff80,uRam0000000003d3cc00);
                        puVar7 = (undefined8 *)
                                 /*Atlas.Analytics.AtlasAnalyticsEvents$$PostEvent*/ func_0x014557f8(unaff_x22,/*STR('LeagueEndEvent')*/ uRam0000000003d6f358,
                                                 *(undefined8 *)(unaff_x22 + 0x20));
                        return puVar7;
                      }
                    }
                  }
                }
              }
            }
          }
          auVar21 = func_0x00f78af4();
          lVar4 = auVar21._0_8_;
          puStack_118 = &Atlas_Analytics_AtlasAnalyticsEvents__FillReusableCustomParamsList;
          puStack_140 = puVar7;
          uStack_138 = 0;
          puStack_130 = puVar10;
          puStack_128 = unaff_x22;
          puStack_120 = &stack0xfffffffffffffff0;
          if ((bRam0000000003eb47b2 & 1) == 0) {
            func_0x00f78a20(0x3d3cc00);
            func_0x00f78a20(0x3d3cc10);
            bRam0000000003eb47b2 = 1;
          }
          if (*(long *)(lVar4 + 0x20) != 0) {
            /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(*(long *)(lVar4 + 0x20),uRam0000000003d3cc10);
            lVar9 = *(long *)(lVar4 + 0x20);
            uStack_178 = 0;
            uStack_170 = 0;
            uStack_168 = 0;
            /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x0163343c(&uStack_178,auVar21._8_8_,puVar12,0);
            if (lVar9 != 0) {
              uStack_158 = uStack_170;
              uStack_160 = uStack_178;
              uStack_150 = uStack_168;
              /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar9,&uStack_160,uRam0000000003d3cc00);
              return *(undefined8 **)(lVar4 + 0x20);
            }
          }
          puVar7 = (undefined8 *)func_0x00f78af4();
          if ((bRam0000000003eb47b3 & 1) == 0) {
            func_0x00f78a20(0x3d70570);
            bRam0000000003eb47b3 = 1;
          }
          puVar7[3] = /*STR('None')*/ uRam0000000003d70570;
          return puVar7;
        }
      }
    }
    puVar7 = (undefined8 *)func_0x00f78af4();
    plStack_a0 = unaff_x24;
    puStack_98 = unaff_x23;
    puStack_90 = unaff_x22;
    puStack_88 = unaff_x21;
    if ((bRam0000000003eb5444 & 1) == 0) {
      func_0x00f78a20(0x3d2e788);
      func_0x00f78a20(0x3d1c2b8);
      func_0x00f78a20(0x3d3af90);
      func_0x00f78a20(0x3d1db48);
      bRam0000000003eb5444 = 1;
    }
    uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<LeagueLeaderboardData>_TypeInfo*/ uRam0000000003d1db48);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3af90);
    puVar7[0xc] = uVar11;
    uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<LeagueLeaderboardData>_TypeInfo*/ uRam0000000003d1db48);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3af90);
    puVar7[0xd] = uVar11;
    *(undefined1 *)(puVar7 + 0x12) = 1;
    uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<int, List<LeagueEventPlacementData>>_TypeInfo*/ uRam0000000003d1c2b8);
    /*System.Collections.Generic.Dictionary<int, GUILayoutUtility.LayoutCache>$$.ctor*/ func_0x01e8eeec(uVar11,uRam0000000003d2e788);
    puVar7[0x15] = uVar11;
    return puVar7;
  }
  puVar7 = (undefined8 *)func_0x00f78af4();
  plVar17 = (long *)0x3eb4000;
  if ((bRam0000000003eb490d & 1) == 0) {
    func_0x00f78a20(0x3d56db8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41110);
    func_0x00f78a20(0x3d41118);
    func_0x00f78a20(0x3d41120);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb490d = 1;
  }
  if (*(char *)((long)puVar7 + 0x8d) == '\0') {
    plVar17 = puVar7 + 0x10;
    lVar4 = *plVar17;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar8 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
    if (((ulong)puVar8 & 1) == 0) {
      if (puVar7[0xe] != 0) {
        puVar8 = (undefined8 *)
                 Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                           (puVar7[0xe],plVar17,uRam0000000003d56db8);
        if ((int)puVar8 == 0) {
          return puVar8;
        }
        *(undefined1 *)((long)puVar7 + 0x8c) = 1;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar7,uRam0000000003d41110);
        unaff_x22 = (undefined1 *)puVar7[0x10];
        uVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
        if (lVar4 != 0) {
          Atlas_UI_Screens_LeaguePromotionBehaviour__Setup(lVar4,unaff_x22,uVar11);
          if (*plVar17 != 0) {
            plVar17 = (long *)Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator
                                        (*plVar17,0,0);
            if (((puVar7[0xe] != 0) &&
                (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(puVar7[0xe],0,0),
                plVar17 != (long *)0x0)) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar17,0), lVar4 = lVar9, lVar9 != 0))
            {
              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar9,0);
              /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(plVar17,0);
              /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar9,0);
              /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar17,0);
              puVar8 = (undefined8 *)/*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar9,0);
              goto code_r0x01481348;
            }
          }
        }
      }
    }
    else {
code_r0x01481348:
      if (*(char *)((long)puVar7 + 0x8c) == '\0') {
        return puVar8;
      }
      if (puVar7[0xe] != 0) {
        puVar8 = (undefined8 *)
                 Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                           (puVar7[0xe],0);
        if ((int)puVar8 == 0) {
          return puVar8;
        }
        if (*(int *)(puVar7 + 0x11) < 3) {
          *(int *)(puVar7 + 0x11) = *(int *)(puVar7 + 0x11) + 1;
          return puVar8;
        }
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
          /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar9 + 0x78),0,0,0,0);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
          if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe8) != 0)) {
            /*Atlas.League.LeagueManager$$GetNextLeague*/ func_0x015f44fc(*(long *)(lVar9 + 0xe8),&stack0xffffffffffffff8c,0);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe8) != 0)) {
              iVar2 = /*Atlas.League.LeagueManager$$TopOfMaster*/ func_0x015f4278(*(long *)(lVar9 + 0xe8),0);
              if (iVar2 == 0) {
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
                if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe8) != 0)) {
                  iVar2 = /*Atlas.League.LeagueManager$$BottomOfBronze*/ func_0x015f42cc(*(long *)(lVar9 + 0xe8),0);
                  lVar9 = puVar7[0xe];
                  if (iVar2 == 0) {
                    if ((lVar9 != 0) &&
                       (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(lVar9,0,0),
                       lVar9 != 0)) {
                      Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar9,0,0);
                      goto code_r0x01481480;
                    }
                  }
                  else if ((lVar9 != 0) &&
                          (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(lVar9,0,0),
                          lVar9 != 0)) {
                    uVar11 = 1;
                    goto code_r0x01481454;
                  }
                }
              }
              else if ((puVar7[0xe] != 0) &&
                      (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar7[0xe],0,0),
                      lVar9 != 0)) {
                uVar11 = 0;
code_r0x01481454:
                Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar9,uVar11,0);
code_r0x01481480:
                *(undefined1 *)((long)puVar7 + 0x8c) = 0;
                *(undefined4 *)(puVar7 + 0x11) = 0;
                plVar17 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar7,uRam0000000003d41110);
                puVar10 = (undefined8 *)&UNK_014814a8;
                puVar8 = puVar7;
                goto code_r0x014814d8;
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar7,uRam0000000003d41120);
    lVar4 = 0x3d41120;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
      puVar8 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar9 + 0x78),0);
      if ((int)puVar8 == 0) {
        return puVar8;
      }
      *(undefined1 *)((long)puVar7 + 0x8d) = 0;
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar7,uRam0000000003d41118);
      lVar4 = 0x3d41120;
      if (lVar9 != 0) {
        puVar7 = *(undefined8 **)(lVar9 + 0x10);
        if (puVar7 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar11 = 0;
        puStack_88 = puVar7;
        lVar4 = puVar7[0xd];
        if (lVar4 == 0) {
          ppuVar19 = &puStack_88;
          lVar9 = 1;
        }
        else {
          lVar9 = *(long *)(lVar4 + 0x18);
          if (lVar9 == 0) {
            return puVar7;
          }
          ppuVar19 = (undefined8 **)(lVar4 + 0x20);
        }
        lVar4 = 0;
        do {
          puVar8 = ppuVar19[lVar4];
          pcVar18 = (code *)puVar8[2];
          plVar17 = (long *)puVar8[4];
          lVar6 = puVar8[5];
          if (*(short *)(lVar6 + 0x48) == -1) {
            func_0x00f78ad8(lVar6,uVar11);
          }
          iVar2 = func_0x00f78a4c(lVar6);
          if (iVar2 == 0) {
            if ((((plVar17 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
                ((*(byte *)(*plVar17 + 0x115) & 1) != 0)) || (puVar7[3] == 0))
            goto code_r0x0155caf8;
            iVar2 = func_0x00f78a44(lVar6);
            iVar3 = func_0x00f78ec0(lVar6);
            if (iVar2 == 0) {
              uVar1 = *(ushort *)(lVar6 + 0x48);
              if (iVar3 == 0) {
                lVar6 = *plVar17 + (ulong)uVar1 * 0x10;
                auVar21 = (**(code **)(lVar6 + 0x138))(plVar17,*(undefined8 *)(lVar6 + 0x140));
                goto code_r0x0155cb04;
              }
              lVar6 = func_0x00f78a48(lVar6);
              lVar14 = *plVar17;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar6) {
                    puVar8 = (undefined8 *)
                             (lVar14 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x0155cbc8;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(plVar17,lVar6,(ulong)uVar1);
code_r0x0155cbc8:
              pcVar18 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if (iVar3 == 0) {
                uVar11 = *(undefined8 *)(*plVar17 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar14 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar6 + 0x18)) {
                      lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar6 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0155cba0;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                lVar14 = func_0x00fac1f0(plVar17);
code_r0x0155cba0:
                uVar11 = *(undefined8 *)(lVar14 + 8);
              }
              puVar8 = (undefined8 *)func_0x00f78acc(uVar11,lVar6);
              pcVar18 = (code *)*puVar8;
            }
            auVar21 = (*pcVar18)(plVar17,puVar8);
          }
          else if (*(char *)(lVar6 + 0x4a) == '\0') {
            auVar21 = (*pcVar18)(lVar6);
          }
          else {
code_r0x0155caf8:
            auVar21 = (*pcVar18)(plVar17,lVar6);
          }
code_r0x0155cb04:
          uVar11 = auVar21._8_8_;
          lVar4 = lVar4 + 1;
          if (lVar4 == lVar9) {
            return auVar21._0_8_;
          }
        } while( true );
      }
    }
  }
  puVar10 = (undefined8 *)&Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence;
  puVar8 = (undefined8 *)func_0x00f78af4();
code_r0x014814d8:
  puStack_b0 = unaff_x22;
  lStack_a8 = lVar4;
  plStack_a0 = plVar17;
  puStack_98 = puVar7;
  puStack_90 = &stack0xffffffffffffffc0;
  puStack_88 = puVar10;
  if ((bRam0000000003eb490e & 1) == 0) {
    func_0x00f78a20(0x3d27e80);
    bRam0000000003eb490e = 1;
  }
  puVar7 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11_TypeInfo*/ uRam0000000003d27e80);
  /*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11$$.ctor*/ func_0x0155c818(puVar7,0,0);
  if (puVar7 == (undefined8 *)0x0) {
    puVar5 = (undefined1 *)func_0x00f78af4();
    uStack_d8 = 0x3d27e80;
    puStack_b8 = &Atlas_UI_Screens_LeaguePromotionScreen__ContinuePressed;
    puStack_e0 = unaff_x22;
    puStack_d0 = puVar7;
    puStack_c8 = puVar8;
    ppuStack_c0 = &puStack_90;
    if ((bRam0000000003eb490f & 1) == 0) {
      func_0x00f78a20(0x3d41120);
      bRam0000000003eb490f = 1;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar5,uRam0000000003d41120);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
      /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar4 + 0x78),1,0,0,0,0);
      puVar5[0x8d] = 1;
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    lVar4 = func_0x00f78af4();
    uStack_108 = 0x3d41120;
    uStack_100 = 0x3eb4000;
    puStack_e8 = &Atlas_UI_Screens_LeaguePromotionScreen___ctor;
    puStack_110 = unaff_x22;
    puStack_f8 = puVar5;
    pppuStack_f0 = &ppuStack_c0;
    if ((bRam0000000003eb4910 & 1) == 0) {
      func_0x00f78a20(0x3d2c778);
      bRam0000000003eb4910 = 1;
    }
    if (lVar4 == 0) {
      auVar21 = func_0x00f78af4();
      puVar8 = auVar21._8_8_;
      puVar7 = auVar21._0_8_;
      uVar20 = puVar8[1];
      uVar11 = *puVar8;
      puVar7[2] = puVar8[2];
      puVar7[1] = uVar20;
      *puVar7 = uVar11;
      return puVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c778 + 0x18) + 0xc0) + 0x38))();
    return puVar7;
  }
  puVar7[4] = puVar8;
  return puVar7;
}



// ============================================================
// RVA: 0x1481128 | Atlas.UI.Screens.LeaguePromotionScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014814a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014814a8) */
/* WARNING: Removing unreachable block (ram,0x014814ac) */

undefined8 * Atlas_UI_Screens_LeaguePromotionScreen__OnUpdate(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 unaff_x22;
  code *pcVar13;
  long lVar14;
  undefined8 **ppuVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 *puStack_58;
  
  if ((bRam0000000003eb490d & 1) == 0) {
    func_0x00f78a20(0x3d56db8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41110);
    func_0x00f78a20(0x3d41118);
    func_0x00f78a20(0x3d41120);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb490d = 1;
  }
  if (*(char *)(param_1 + 0x8d) == '\0') {
    plVar12 = (long *)(param_1 + 0x80);
    lVar4 = *plVar12;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar5 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
    if (((ulong)puVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x70) != 0) {
        puVar5 = (undefined8 *)
                 Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                           (*(long *)(param_1 + 0x70),plVar12,uRam0000000003d56db8);
        if ((int)puVar5 == 0) {
          return puVar5;
        }
        *(undefined1 *)(param_1 + 0x8c) = 1;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41110);
        unaff_x22 = *(undefined8 *)(param_1 + 0x80);
        uVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
        if (lVar4 != 0) {
          Atlas_UI_Screens_LeaguePromotionBehaviour__Setup(lVar4,unaff_x22,uVar7);
          if (*plVar12 != 0) {
            lVar4 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(*plVar12,0,0);
            if (((*(long *)(param_1 + 0x70) != 0) &&
                (lVar14 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                    (*(long *)(param_1 + 0x70),0,0), lVar4 != 0)) &&
               (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0), lVar14 != 0)) {
              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar14,0);
              /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar4,0);
              /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar14,0);
              /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar4,0);
              puVar5 = (undefined8 *)/*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar14,0);
              goto code_r0x01481348;
            }
          }
        }
      }
    }
    else {
code_r0x01481348:
      if (*(char *)(param_1 + 0x8c) == '\0') {
        return puVar5;
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        puVar5 = (undefined8 *)
                 Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                           (*(long *)(param_1 + 0x70),0);
        if ((int)puVar5 == 0) {
          return puVar5;
        }
        if (*(int *)(param_1 + 0x88) < 3) {
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
          return puVar5;
        }
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
          /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x78),0,0,0,0);
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0xe8) != 0)) {
            /*Atlas.League.LeagueManager$$GetNextLeague*/ func_0x015f44fc(*(long *)(lVar4 + 0xe8),&stack0xffffffffffffffbc,0);
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
            if ((lVar4 != 0) && (*(long *)(lVar4 + 0xe8) != 0)) {
              iVar2 = /*Atlas.League.LeagueManager$$TopOfMaster*/ func_0x015f4278(*(long *)(lVar4 + 0xe8),0);
              if (iVar2 == 0) {
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
                if ((lVar4 != 0) && (*(long *)(lVar4 + 0xe8) != 0)) {
                  iVar2 = /*Atlas.League.LeagueManager$$BottomOfBronze*/ func_0x015f42cc(*(long *)(lVar4 + 0xe8),0);
                  lVar4 = *(long *)(param_1 + 0x70);
                  if (iVar2 == 0) {
                    if ((lVar4 != 0) &&
                       (lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(lVar4,0,0),
                       lVar4 != 0)) {
                      Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar4,0,0);
                      goto code_r0x01481480;
                    }
                  }
                  else if ((lVar4 != 0) &&
                          (lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(lVar4,0,0),
                          lVar4 != 0)) {
                    uVar7 = 1;
                    goto code_r0x01481454;
                  }
                }
              }
              else if ((*(long *)(param_1 + 0x70) != 0) &&
                      (lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                         (*(long *)(param_1 + 0x70),0,0), lVar4 != 0)) {
                uVar7 = 0;
code_r0x01481454:
                Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar4,uVar7,0);
code_r0x01481480:
                *(undefined1 *)(param_1 + 0x8c) = 0;
                *(undefined4 *)(param_1 + 0x88) = 0;
                /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41110);
                puVar5 = (undefined8 *)&UNK_014814a8;
                goto code_r0x014814d8;
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
      puVar5 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar4 + 0x78),0);
      if ((int)puVar5 == 0) {
        return puVar5;
      }
      *(undefined1 *)(param_1 + 0x8d) = 0;
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41118);
      if (lVar4 != 0) {
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar7 = 0;
        puStack_58 = puVar5;
        lVar4 = puVar5[0xd];
        if (lVar4 == 0) {
          ppuVar15 = &puStack_58;
          lVar14 = 1;
        }
        else {
          lVar14 = *(long *)(lVar4 + 0x18);
          if (lVar14 == 0) {
            return puVar5;
          }
          ppuVar15 = (undefined8 **)(lVar4 + 0x20);
        }
        lVar4 = 0;
        do {
          puVar8 = ppuVar15[lVar4];
          pcVar13 = (code *)puVar8[2];
          plVar12 = (long *)puVar8[4];
          lVar6 = puVar8[5];
          if (*(short *)(lVar6 + 0x48) == -1) {
            func_0x00f78ad8(lVar6,uVar7);
          }
          iVar2 = func_0x00f78a4c(lVar6);
          if (iVar2 == 0) {
            if ((((plVar12 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
                ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (puVar5[3] == 0))
            goto code_r0x0155caf8;
            iVar2 = func_0x00f78a44(lVar6);
            iVar3 = func_0x00f78ec0(lVar6);
            if (iVar2 == 0) {
              uVar1 = *(ushort *)(lVar6 + 0x48);
              if (iVar3 == 0) {
                lVar6 = *plVar12 + (ulong)uVar1 * 0x10;
                auVar17 = (**(code **)(lVar6 + 0x138))(plVar12,*(undefined8 *)(lVar6 + 0x140));
                goto code_r0x0155cb04;
              }
              lVar6 = func_0x00f78a48(lVar6);
              lVar9 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar6) {
                    puVar8 = (undefined8 *)
                             (lVar9 + (long)(int)(*piVar11 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x0155cbc8;
                  }
                  piVar11 = piVar11 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(plVar12,lVar6,(ulong)uVar1);
code_r0x0155cbc8:
              pcVar13 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if (iVar3 == 0) {
                uVar7 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar9 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)(lVar6 + 0x18)) {
                      lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10
                              + 0x138;
                      goto code_r0x0155cba0;
                    }
                    piVar11 = piVar11 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                lVar9 = func_0x00fac1f0(plVar12);
code_r0x0155cba0:
                uVar7 = *(undefined8 *)(lVar9 + 8);
              }
              puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar6);
              pcVar13 = (code *)*puVar8;
            }
            auVar17 = (*pcVar13)(plVar12,puVar8);
          }
          else if (*(char *)(lVar6 + 0x4a) == '\0') {
            auVar17 = (*pcVar13)(lVar6);
          }
          else {
code_r0x0155caf8:
            auVar17 = (*pcVar13)(plVar12,lVar6);
          }
code_r0x0155cb04:
          uVar7 = auVar17._8_8_;
          lVar4 = lVar4 + 1;
          if (lVar4 == lVar14) {
            return auVar17._0_8_;
          }
        } while( true );
      }
    }
  }
  puVar5 = (undefined8 *)&Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence;
  param_1 = func_0x00f78af4();
code_r0x014814d8:
  puStack_58 = puVar5;
  if ((bRam0000000003eb490e & 1) == 0) {
    func_0x00f78a20(0x3d27e80);
    bRam0000000003eb490e = 1;
  }
  puVar5 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11_TypeInfo*/ uRam0000000003d27e80);
  /*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11$$.ctor*/ func_0x0155c818(puVar5,0,0);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[4] = param_1;
    return puVar5;
  }
  lVar4 = func_0x00f78af4();
  uVar7 = 0x3d27e80;
  if ((bRam0000000003eb490f & 1) == 0) {
    func_0x00f78a20(0x3d41120);
    bRam0000000003eb490f = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41120);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar14 + 0x78),1,0,0,0,0,in_x6,in_x7,unaff_x22,uVar7,puVar5,param_1);
    *(undefined1 *)(lVar4 + 0x8d) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4910 & 1) == 0) {
    func_0x00f78a20(0x3d2c778);
    bRam0000000003eb4910 = 1;
  }
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c778 + 0x18) + 0xc0) + 0x38))();
    return puVar5;
  }
  auVar17 = func_0x00f78af4();
  puVar8 = auVar17._8_8_;
  puVar5 = auVar17._0_8_;
  uVar16 = puVar8[1];
  uVar7 = *puVar8;
  puVar5[2] = puVar8[2];
  puVar5[1] = uVar16;
  *puVar5 = uVar7;
  return puVar5;
}



// ============================================================
// RVA: 0x14814d8 | Atlas.UI.Screens.LeaguePromotionScreen.DoPromotionDemotionSequence
// ============================================================

undefined8 * Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb490e & 1) == 0) {
    func_0x00f78a20(0x3d27e80);
    bRam0000000003eb490e = 1;
  }
  puVar1 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11_TypeInfo*/ uRam0000000003d27e80);
  /*Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11$$.ctor*/ func_0x0155c818(puVar1,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_1;
    return puVar1;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb490f & 1) == 0) {
    func_0x00f78a20(0x3d41120);
    bRam0000000003eb490f = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41120);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar3 + 0x78),1,0,0,0,0);
    *(undefined1 *)(lVar2 + 0x8d) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4910 & 1) == 0) {
    func_0x00f78a20(0x3d2c778);
    bRam0000000003eb4910 = 1;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c778 + 0x18) + 0xc0) + 0x38))();
    return puVar1;
  }
  auVar7 = func_0x00f78af4();
  puVar4 = auVar7._8_8_;
  puVar1 = auVar7._0_8_;
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  puVar1[2] = puVar4[2];
  puVar1[1] = uVar6;
  *puVar1 = uVar5;
  return puVar1;
}



// ============================================================
// RVA: 0x148154c | Atlas.UI.Screens.LeaguePromotionScreen.ContinuePressed
// ============================================================

undefined8 * Atlas_UI_Screens_LeaguePromotionScreen__ContinuePressed(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb490f & 1) == 0) {
    func_0x00f78a20(0x3d41120);
    bRam0000000003eb490f = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41120);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar1 + 0x78),1,0,0,0,0);
    *(undefined1 *)(param_1 + 0x8d) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4910 & 1) == 0) {
    func_0x00f78a20(0x3d2c778);
    bRam0000000003eb4910 = 1;
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c778 + 0x18) + 0xc0) + 0x38))();
    return puVar2;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar2 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return puVar2;
}



// ============================================================
// RVA: 0x14815d8 | Atlas.UI.Screens.LeaguePromotionScreen..ctor
// ============================================================

void Atlas_UI_Screens_LeaguePromotionScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4910 & 1) == 0) {
    func_0x00f78a20(0x3d2c778);
    bRam0000000003eb4910 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c778 + 0x18) + 0xc0) + 0x38))();
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



