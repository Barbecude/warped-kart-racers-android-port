// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.EndOfRoundScreenBehaviour

// ============================================================
// RVA: 0x15815bc | Atlas.UI.Screens.EndOfRoundScreenBehaviour.SetHideStarsActive
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1581638 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.SetDeltaStarsActive
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15816b4 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.SetPlacementIconsActive
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1582c78 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.SetStatIconAndTextActive
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_EndOfRoundScreenBehaviour__SetStatIconAndTextActive
          (undefined1 param_1 [16],undefined8 param_2,float param_3,undefined8 *param_4,
          undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int extraout_w1;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar15 = param_4[0x12];
  if (lVar15 != 0) {
    uVar2 = *(uint *)(lVar15 + 0x18);
    if (0 < (int)uVar2) {
      unaff_x21 = (undefined8 *)0x0;
      do {
        uVar18 = (uint)unaff_x21;
        if (uVar2 <= uVar18) {
          uVar16 = func_0x00f78b24();
          func_0x00f78ac0(uVar16,0);
          goto LAB_01582cf0;
        }
        lVar9 = *(long *)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_01582cf0;
        param_4 = (undefined8 *)/*Atlas.UI.LeaderboardEntryBehaviour$$SetStatIconAndTextActive*/ func_0x015eccc0(lVar9,param_5,0);
        unaff_x21 = (undefined8 *)(ulong)(uVar18 + 1);
        uVar2 = *(uint *)(lVar15 + 0x18);
      } while ((int)(uVar18 + 1) < (int)uVar2);
    }
    return param_4;
  }
LAB_01582cf0:
  lVar9 = func_0x00f78af4();
  pcStack_38 = Atlas_UI_Screens_EndOfRoundScreen__OnPlayStarSpawnTweensStart;
  lVar15 = 0x3eb5000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50b6 & 1) == 0) {
    func_0x00f78a20(0x3d32938);
    func_0x00f78a20(0x3d32940);
    func_0x00f78a20(0x3d32948);
    func_0x00f78a20(0x3d3c650);
    func_0x00f78a20(0x3d3c658);
    func_0x00f78a20(0x3d3af28);
    func_0x00f78a20(0x3d41020);
    func_0x00f78a20(0x3d41028);
    bRam0000000003eb50b6 = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  if (*(long *)(lVar9 + 0x90) == 0) goto LAB_01582ed4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar9 + 0x90),uRam0000000003d3c658);
  lVar10 = Atlas_UI_Screens_EndOfRoundScreen__GetCurrentOrderLeaderboardElements(lVar9);
  if (lVar10 == 0) goto LAB_01582ed4;
  unaff_x23 = 0x3d32940;
  unaff_x24 = 0x3d3c650;
  unaff_x22 = (undefined8 *)0x3d41028;
  unaff_x21 = (undefined8 *)0x3d41020;
  lVar15 = 0x3d32938;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,lVar10,uRam0000000003d3af28);
  while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32940), (uVar11 & 1) != 0) {
    if (lStack_78 == 0) {
      func_0x00f78af4();
code_r0x01582ed0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1582ed4);
      (*pcVar5)();
    }
    if (*(long *)(lVar9 + 0x90) == 0) {
      func_0x00f78af4();
      goto code_r0x01582ed0;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar9 + 0x90),*(undefined8 *)(lStack_78 + 0x60),uRam0000000003d3c650);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32938);
  do {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,*unaff_x22);
    if (lVar10 != 0) {
      lVar15 = *(long *)(lVar10 + 0x20);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,*unaff_x22);
      if ((lVar10 != 0) && (lVar15 != 0)) {
        uStack_a8 = *(undefined8 *)(lVar10 + 0x40);
        uStack_b0 = *(undefined8 *)(lVar10 + 0x38);
        uStack_98 = *(undefined8 *)(lVar10 + 0x50);
        param_2 = *(undefined8 *)(lVar10 + 0x48);
        uStack_a0 = param_2;
        Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars
                  (lVar15,&uStack_b0,*(undefined8 *)(lVar9 + 0x70),0);
        lVar15 = *(long *)(lVar9 + 0x70);
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,*unaff_x22);
        if (lVar10 != 0) {
          Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
                    (lVar9,lVar15,*(undefined8 *)(lVar10 + 0x28));
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,*unaff_x21);
          if (lVar10 != 0) {
            puVar12 = (undefined8 *)
                      Atlas_UI_Screens_EndOfRoundScreenBehaviour__SetStatIconAndTextActive(lVar10,1)
            ;
            return puVar12;
          }
        }
      }
    }
LAB_01582ed4:
    func_0x00f78af4();
    fVar21 = (float)param_2;
    if (extraout_w1 != 1) goto code_r0x01582f1c;
    plVar13 = (long *)___cxa_begin_catch();
    lVar15 = *plVar13;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32938);
    fVar21 = (float)param_2;
  } while (lVar15 == 0);
  func_0x00f78ac0(lVar15,0);
code_r0x01582f1c:
  lVar10 = __Unwind_Resume();
  pcStack_b8 = Atlas_UI_Screens_EndOfRoundScreen__OnCompleteStarSpawnTweens;
  uStack_f0 = unaff_x24;
  uStack_e8 = unaff_x23;
  puStack_e0 = unaff_x22;
  puStack_d8 = unaff_x21;
  lStack_d0 = lVar15;
  lStack_c8 = lVar9;
  ppuStack_c0 = &puStack_40;
  if ((bRam0000000003eb50b7 & 1) == 0) {
    func_0x00f78a20(0x3d555c8);
    func_0x00f78a20(0x3d3c668);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41020);
    func_0x00f78a20(0x3d41028);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d7b870);
    bRam0000000003eb50b7 = 1;
  }
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41028);
  if (lVar15 != 0) {
    uStack_108 = *(undefined8 *)(lVar15 + 0x40);
    uStack_110 = *(undefined8 *)(lVar15 + 0x38);
    uStack_f8 = *(undefined8 *)(lVar15 + 0x50);
    uVar16 = *(undefined8 *)(lVar15 + 0x48);
    uStack_100 = uVar16;
    Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData
              (&uStack_110,*(undefined8 *)(lVar10 + 0x70),0);
    fVar21 = (float)uVar16;
    lVar15 = *(long *)(lVar10 + 0x78);
    if (lVar15 != 0) {
      uVar2 = *(int *)(lVar15 + 0x18) - 1;
      if ((int)uVar2 < 0) {
LAB_01583088:
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41020);
        if (lVar15 != 0) {
          uVar17 = *(undefined8 *)(lVar15 + 0x78);
          uVar16 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar16,lVar10,uRam0000000003d555c8,0);
          uVar14 = *(undefined8 *)(lVar10 + 0x90);
          if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar12 = (undefined8 *)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slideout')*/ uRam0000000003d7b870,uVar17,0,uVar16,uVar14,0);
          return puVar12;
        }
      }
      else {
        do {
          uVar11 = (ulong)uVar2;
          if (*(uint *)(lVar15 + 0x18) <= uVar2) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          fVar21 = (float)uVar16;
          lVar9 = *(long *)(lVar10 + 0x70);
          if (lVar9 == 0) break;
          iVar6 = *(int *)(*(long *)(lVar15 + 0x10) + uVar11 * 0x10 + 0x24);
          if (*(uint *)(lVar9 + 0x18) <= uVar2) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          fVar21 = (float)uVar16;
          if (iVar6 == *(int *)(*(long *)(lVar9 + 0x10) + uVar11 * 0x10 + 0x24)) {
            if (*(long *)(lVar10 + 0x90) == 0) break;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar10 + 0x90),uVar11,uRam0000000003d3c668);
          }
          fVar21 = (float)uVar16;
          uVar2 = uVar2 - 1;
          if ((int)uVar2 < 0) goto LAB_01583088;
          lVar15 = *(long *)(lVar10 + 0x78);
        } while (lVar15 != 0);
      }
    }
  }
  lVar15 = func_0x00f78af4();
  if ((bRam0000000003eb50b8 & 1) == 0) {
    func_0x00f78a20(0x3d555c0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41020);
    func_0x00f78a20(0x3d41028);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d7b868);
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb50b8 = 1;
  }
  uVar16 = *(undefined8 *)(lVar15 + 0x70);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar15,uRam0000000003d41028);
  if (lVar9 != 0) {
    Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
              (lVar15,uVar16,*(undefined8 *)(lVar9 + 0x28));
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d41020);
    if (lVar9 != 0) {
      uVar17 = *(undefined8 *)(lVar9 + 0x78);
      uVar16 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar16,lVar15,uRam0000000003d555c0,0);
      uVar14 = *(undefined8 *)(lVar15 + 0x90);
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slidein')*/ uRam0000000003d7b868,uVar17,0,uVar16,uVar14,0);
      puVar12 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      puVar7 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8,0);
        func_0x00f78a20(0x3d2fb00);
        puVar7 = (undefined8 *)func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return puVar7;
      }
      lVar15 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar15 != 0) {
        puVar7 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar15,puVar12,uRam0000000003d2faf8);
        if ((int)puVar7 == 0) {
          return puVar7;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar15 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar15 != 0)) &&
           (puVar12 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar15,puVar12,uRam0000000003d2fb00),
           puVar12 != (undefined8 *)0x0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,puVar12,0,0);
          return puVar12;
        }
      }
      plVar13 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar13,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar16 = func_0x00f78e5c(plVar8);
        lVar15 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        if (lVar15 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar14 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar14,uVar16,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar11 = (*pcRam0000000003ec01d0)(uVar16);
          if ((uVar11 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar12 = (undefined8 *)(*pcRam0000000003ec01e0)(uVar16,lVar15);
            return puVar12;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar14 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar16,0);
        }
        uVar16 = func_0x00f78a24(0x3d5a8a8);
        auVar23 = func_0x00f78ac0(uVar14,uVar16);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar12 = (undefined8 *)(*pcRam0000000003ec01e0)(auVar23._0_8_,auVar23._8_8_);
        return puVar12;
      }
      fVar20 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar16 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar20 * 0.25,fVar21 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar8,4,0);
      puVar12 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar16,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar13,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((puVar12 != (undefined8 *)0x0) && (*(char *)(puVar12 + 0x1d) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar6 != 0) {
          lVar15 = func_0x00f78adc(plVar13,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
          if ((uVar11 & 1) == 0) {
            if (plVar13 == (long *)0x0) goto code_r0x018eef34;
            uVar16 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
          }
          else {
            if (lVar15 == 0) {
code_r0x018eef34:
              auVar23 = func_0x00f78af4();
              puVar12 = auVar23._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((puVar12 != (undefined8 *)0x0) && (*(char *)(puVar12 + 0x1d) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar3 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(puVar12,auVar23._8_8_,cVar3 != '\0',0);
              }
              return puVar12;
            }
            uVar16 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar15,0);
          }
          puVar12[0x19] = uVar16;
        }
        puVar12[9] = plVar13;
      }
      return puVar12;
    }
  }
  lVar15 = func_0x00f78af4();
  if ((bRam0000000003eb50b9 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50b9 = 1;
  }
  puVar12 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d41020);
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar15 + 0x88) = *(undefined4 *)(puVar12 + 0x13);
    return puVar12;
  }
  auVar22 = func_0x00f78af4();
  lVar15 = auVar22._0_8_;
  if ((bRam0000000003eb50ba & 1) == 0) {
    func_0x00f78a20(0x3d535d8);
    func_0x00f78a20(0x3d3af18);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50ba = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d41020);
  if (((lVar9 != 0) && (*(long *)(lVar9 + 0x80) != 0)) &&
     (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x80),0), lVar9 != 0)) {
    iVar6 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar9,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d41020);
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x88) != 0)) &&
       (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x88),0), lVar9 != 0)) {
      puVar12 = (undefined8 *)/*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar9,0);
      iVar1 = (int)puVar12 + iVar6;
      if (0 < iVar1) {
        iVar19 = 0;
        do {
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d41020);
          if (iVar19 < iVar6) {
            if (lVar9 == 0) goto LAB_015834f0;
            plVar13 = (long *)(lVar9 + 0x80);
          }
          else {
            if (lVar9 == 0) goto LAB_015834f0;
            plVar13 = (long *)(lVar9 + 0x88);
          }
          if ((*plVar13 == 0) || (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*plVar13,0), lVar9 == 0))
          goto LAB_015834f0;
          iVar4 = 0;
          if (iVar6 != 0) {
            iVar4 = iVar19 / iVar6;
          }
          lVar9 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar9,iVar19 - iVar4 * iVar6,0);
          if (lVar9 == 0) goto LAB_015834f0;
          lVar9 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar9,uRam0000000003d535d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar12 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
          if ((((ulong)puVar12 & 1) != 0) || (iVar19 < auVar22._8_4_)) {
            if (lVar9 == 0) goto LAB_015834f0;
            /*Atlas.UI.LeaderboardEntryBehaviour$$SetUp*/ func_0x015ebc20(lVar9,0);
            lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0);
            if (lVar10 == 0) goto LAB_015834f0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
            if (*(long *)(lVar15 + 0x80) == 0) goto LAB_015834f0;
            puVar12 = (undefined8 *)
                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar15 + 0x80),lVar9,uRam0000000003d3af18);
          }
          iVar19 = iVar19 + 1;
        } while (iVar1 != iVar19);
      }
      return puVar12;
    }
  }
LAB_015834f0:
  lVar15 = func_0x00f78af4();
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar16 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar16,0xc,uRam0000000003d3af10);
  *(undefined8 *)(lVar15 + 0x80) = uVar16;
  if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
    return puVar12;
  }
  auVar23 = func_0x00f78af4();
  puVar7 = auVar23._8_8_;
  puVar12 = auVar23._0_8_;
  uVar14 = puVar7[1];
  uVar16 = *puVar7;
  puVar12[2] = puVar7[2];
  puVar12[1] = uVar14;
  *puVar12 = uVar16;
  return puVar12;
}



// ============================================================
// RVA: 0x1583594 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_TitleText
// ============================================================

undefined8 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_TitleText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x158359c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_TitleTextMeasurement
// ============================================================

undefined8 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_TitleTextMeasurement(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15835a4 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_LeftLeaderboardList
// ============================================================

undefined8 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_LeftLeaderboardList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15835ac | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_RightLeaderboardList
// ============================================================

undefined8 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_RightLeaderboardList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15835b4 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarEmphasisDuration
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarEmphasisDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x15835bc | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarEmphasisStaggerInterval
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarEmphasisStaggerInterval(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15835c4 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarEmphasisScaleIncrease
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarEmphasisScaleIncrease(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}



// ============================================================
// RVA: 0x15835cc | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarEmphasisEase
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarEmphasisEase(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15835d4 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_CrownSpawnDuration
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_CrownSpawnDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// ============================================================
// RVA: 0x15835dc | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_CrownSpawnScale
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_CrownSpawnScale(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15835e4 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_CrownSpawnDelay
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_CrownSpawnDelay(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ============================================================
// RVA: 0x15835ec | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_CrownSpawnEase
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_CrownSpawnEase(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x15835f4 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarDeltaSpawnDuration
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarDeltaSpawnDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}



// ============================================================
// RVA: 0x15835fc | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarDeltaSpawnStaggerInterval
// ============================================================

undefined4
Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarDeltaSpawnStaggerInterval(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x1583604 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarDeltaSpawnScale
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarDeltaSpawnScale(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}



// ============================================================
// RVA: 0x158360c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarDeltaSpawnEase
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarDeltaSpawnEase(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x1583614 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarDeltaEnterDuration
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarDeltaEnterDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}



// ============================================================
// RVA: 0x158361c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarDeltaEnterStaggerInterval
// ============================================================

undefined4
Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarDeltaEnterStaggerInterval(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x1583624 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarDeltaEnterEase
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarDeltaEnterEase(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}



// ============================================================
// RVA: 0x158362c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarUpdateSpawnDuration
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarUpdateSpawnDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// ============================================================
// RVA: 0x1583634 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarUpdateSpawnStaggerInterval
// ============================================================

undefined4
Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarUpdateSpawnStaggerInterval(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x158363c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarUpdateSpawnScale
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarUpdateSpawnScale(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe4);
}



// ============================================================
// RVA: 0x1583644 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarUpdateSpawnEase
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarUpdateSpawnEase(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}



// ============================================================
// RVA: 0x158364c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_HideStarDuration
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_HideStarDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}



// ============================================================
// RVA: 0x1583654 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_HideStarStaggerInterval
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_HideStarStaggerInterval(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf0);
}



// ============================================================
// RVA: 0x158365c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_HideStarAlpha
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_HideStarAlpha(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf4);
}



// ============================================================
// RVA: 0x1583664 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_HideStarEase
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_HideStarEase(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x158366c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_StarUpdateSpawnDelay
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_StarUpdateSpawnDelay(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x1583674 | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_EndWaitingTime
// ============================================================

undefined4 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_EndWaitingTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x158367c | Atlas.UI.Screens.EndOfRoundScreenBehaviour.get_LeaderboardRoot
// ============================================================

undefined8 Atlas_UI_Screens_EndOfRoundScreenBehaviour__get_LeaderboardRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1583684 | Atlas.UI.Screens.EndOfRoundScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_EndOfRoundScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



