// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.EndOfRoundScreen

// ============================================================
// RVA: 0x1580a34 | Atlas.UI.Screens.EndOfRoundScreen.OnBeforeEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1580c94 | Atlas.UI.Screens.EndOfRoundScreen.SetRoundNumber
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1580df4 | Atlas.UI.Screens.EndOfRoundScreen.UpdateLeaderboard
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1581730 | Atlas.UI.Screens.EndOfRoundScreen.OnAfterEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15818d8 | Atlas.UI.Screens.EndOfRoundScreen.GetCurrentOrderLeaderboardElements
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1581f4c | Atlas.UI.Screens.EndOfRoundScreen.PlayStarEmphasisTweens
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1582130 | Atlas.UI.Screens.EndOfRoundScreen.PlayStarDeltaSpawnTweens
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1582388 | Atlas.UI.Screens.EndOfRoundScreen.PlayStarDeltaEnterTweens
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158259c | Atlas.UI.Screens.EndOfRoundScreen.PlayHideStarTweens
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1582748 | Atlas.UI.Screens.EndOfRoundScreen.PlayStarSpawnTweens
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1582994 | Atlas.UI.Screens.EndOfRoundScreen.OnUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1582a6c | Atlas.UI.Screens.EndOfRoundScreen.OnStartStarDeltaSpawn
// ============================================================

/* WARNING: Possible PIC construction at 0x01582b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01582b64) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_EndOfRoundScreen__OnStartStarDeltaSpawn
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb50b3 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    func_0x00f78a20(0x3d41028);
    func_0x00f78a20(0x3d79110);
    bRam0000000003eb50b3 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41028);
  if (lVar5 == 0) {
LAB_01582b78:
    func_0x00f78af4();
    lVar5 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ lRam0000000003d78fd8;
    if ((bRam0000000003eb50b4 & 1) == 0) {
      func_0x00f78a20(0x3d78fd8);
      bRam0000000003eb50b4 = 1;
      lVar5 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ lRam0000000003d78fd8;
    }
  }
  else {
    lVar8 = *(long *)(lVar5 + 0x20);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41028);
    if ((lVar5 == 0) || (lVar8 == 0)) goto LAB_01582b78;
    uStack_48 = *(undefined8 *)(lVar5 + 0x40);
    uStack_50 = *(undefined8 *)(lVar5 + 0x38);
    uStack_38 = *(undefined8 *)(lVar5 + 0x50);
    uVar9 = *(undefined8 *)(lVar5 + 0x48);
    uStack_40 = uVar9;
    Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas
              (lVar8,&uStack_50,*(undefined8 *)(param_4 + 0x70),0);
    param_2 = (float)uVar9;
    uVar9 = *(undefined8 *)(param_4 + 0x70);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41028);
    if (lVar5 == 0) goto LAB_01582b78;
    Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
              (param_4,uVar9,*(undefined8 *)(lVar5 + 0x28));
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41020);
    if (lVar5 == 0) goto LAB_01582b78;
    /*Atlas.UI.Screens.EndOfRoundScreenBehaviour$$SetDeltaStarsActive*/ func_0x01581638(lVar5,1);
    lVar5 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  }
  lVar8 = lVar5;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar8 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar8;
  }
  lVar8 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar8 != 0) {
    lVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar8,lVar5,uRam0000000003d2faf8);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar8 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar8 != 0)) &&
       (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar8,lVar5,uRam0000000003d2fb00), lVar5 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar5,0,0);
      return lVar5;
    }
  }
  plVar3 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar4 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar3,0);
  if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar9 = func_0x00f78e5c(plVar4);
    lVar5 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    if (lVar5 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar7 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar7,uVar9,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar6 = (*pcRam0000000003ec01d0)(uVar9);
      if ((uVar6 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*pcRam0000000003ec01e0)(uVar9,lVar5);
        return lVar5;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar7 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar9,0);
    }
    uVar9 = func_0x00f78a24(0x3d5a8a8);
    auVar11 = func_0x00f78ac0(uVar7,uVar9);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return lVar5;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar9 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar4,4,0);
  lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar9,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar3,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar8 = func_0x00f78adc(plVar3,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
      if ((uVar6 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto code_r0x018eef34;
        uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      }
      else {
        if (lVar8 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          lVar5 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar5,auVar11._8_8_,cVar1 != '\0',0);
          }
          return lVar5;
        }
        uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar8,0);
      }
      *(undefined8 *)(lVar5 + 200) = uVar9;
    }
    *(long **)(lVar5 + 0x48) = plVar3;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x1582b7c | Atlas.UI.Screens.EndOfRoundScreen.OnStarDeltaEnterTweensStart
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_EndOfRoundScreen__OnStarDeltaEnterTweensStart
               (undefined1 param_1 [16],float param_2,float param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb50b4 & 1) == 0) {
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb50b4 = 1;
  }
  lVar4 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ lRam0000000003d78fd8;
  lVar3 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ lRam0000000003d78fd8;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar3 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar3;
  }
  lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,lVar4,uRam0000000003d2faf8);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
       (lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,lVar4,uRam0000000003d2fb00), lVar4 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar4,0,0);
      return lVar4;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5,0);
  if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar7 = func_0x00f78e5c(plVar6);
    lVar4 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    if (lVar4 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar9 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar7,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar8 = (*pcRam0000000003ec01d0)(uVar7);
      if ((uVar8 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ec01e0)(uVar7,lVar4);
        return lVar4;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar7,0);
    }
    uVar7 = func_0x00f78a24(0x3d5a8a8);
    auVar11 = func_0x00f78ac0(uVar9,uVar7);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return lVar4;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar6,4,0);
  lVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar7,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar3 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar3 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          lVar4 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar4,auVar11._8_8_,cVar1 != '\0',0);
          }
          return lVar4;
        }
        uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar3,0);
      }
      *(undefined8 *)(lVar4 + 200) = uVar7;
    }
    *(long **)(lVar4 + 0x48) = plVar5;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x1582bc4 | Atlas.UI.Screens.EndOfRoundScreen.OnStarDeltaEnterTweensComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x01582c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01582ea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01582c24) */
/* WARNING: Removing unreachable block (ram,0x01582c34) */
/* WARNING: Removing unreachable block (ram,0x01582c4c) */
/* WARNING: Removing unreachable block (ram,0x01582eac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_EndOfRoundScreen__OnStarDeltaEnterTweensComplete
          (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int extraout_w1;
  uint uVar17;
  long lVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar22;
  undefined *puVar23;
  float fVar24;
  float fVar25;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  
  puVar22 = &stack0xfffffffffffffff0;
  puVar21 = (undefined8 *)0x3eb5000;
  lVar7 = 0x3d41020;
  if ((bRam0000000003eb50b5 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    func_0x00f78a20(0x3d790f8);
    bRam0000000003eb50b5 = 1;
  }
  uVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41020);
  if (uVar12 == 0) {
    puVar23 = &Atlas_UI_Screens_EndOfRoundScreenBehaviour__SetStatIconAndTextActive;
    auVar26 = func_0x00f78af4();
    puVar4 = &stack0xffffffffffffffd0;
  }
  else {
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar12;
    puVar23 = (undefined *)0x1582c24;
    puVar4 = &stack0xffffffffffffffd0;
  }
code_r0x01582c78:
  lVar14 = auVar26._8_8_;
  *(undefined8 **)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar4 + -0x28) = puVar21;
  *(long *)(puVar4 + -0x20) = lVar7;
  *(long *)(puVar4 + -0x18) = param_4;
  *(undefined1 **)(puVar4 + -0x10) = puVar22;
  *(undefined **)(puVar4 + -8) = puVar23;
  lVar18 = auVar26._0_8_[0x12];
  lVar7 = param_4;
  if (lVar18 != 0) {
    uVar17 = *(uint *)(lVar18 + 0x18);
    if ((int)uVar17 < 1) {
      return auVar26._0_8_;
    }
    puVar21 = (undefined8 *)0x0;
    while (uVar19 = (uint)puVar21, lVar7 = lVar14, uVar19 < uVar17) {
      lVar13 = *(long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
      if (lVar13 == 0) goto code_r0x01582cf0;
      puVar6 = (undefined8 *)/*Atlas.UI.LeaderboardEntryBehaviour$$SetStatIconAndTextActive*/ func_0x015eccc0(lVar13,lVar14,0);
      puVar21 = (undefined8 *)(ulong)(uVar19 + 1);
      uVar17 = *(uint *)(lVar18 + 0x18);
      if ((int)uVar17 <= (int)(uVar19 + 1)) {
        return puVar6;
      }
    }
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
code_r0x01582cf0:
  param_4 = func_0x00f78af4();
  *(ulong *)(puVar4 + -0x70) = unaff_x24;
  *(long *)(puVar4 + -0x68) = unaff_x23;
  *(undefined8 **)(puVar4 + -0x60) = unaff_x22;
  *(undefined8 **)(puVar4 + -0x58) = puVar21;
  *(long *)(puVar4 + -0x50) = lVar18;
  *(long *)(puVar4 + -0x48) = lVar7;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_UI_Screens_EndOfRoundScreen__OnPlayStarSpawnTweensStart;
  puVar22 = puVar4 + -0x40;
  lVar7 = 0x3eb5000;
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
  *(undefined8 *)(puVar4 + -0x88) = 0;
  *(undefined8 *)(puVar4 + -0x80) = 0;
  *(undefined8 *)(puVar4 + -0x78) = 0;
  if (*(long *)(param_4 + 0x90) == 0) goto code_r0x01582ed4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_4 + 0x90),uRam0000000003d3c658);
  lVar14 = Atlas_UI_Screens_EndOfRoundScreen__GetCurrentOrderLeaderboardElements(param_4);
  if (lVar14 == 0) goto code_r0x01582ed4;
  unaff_x23 = 0x3d32940;
  unaff_x24 = 0x3d3c650;
  unaff_x22 = (undefined8 *)0x3d41028;
  puVar21 = (undefined8 *)0x3d41020;
  lVar7 = 0x3d32938;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x88,lVar14,uRam0000000003d3af28);
  while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0x88,uRam0000000003d32940), (uVar12 & 1) != 0) {
    if (*(long *)(puVar4 + -0x78) == 0) {
      func_0x00f78af4();
code_r0x01582ed0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1582ed4);
      (*pcVar3)();
    }
    if (*(long *)(param_4 + 0x90) == 0) {
      func_0x00f78af4();
      goto code_r0x01582ed0;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_4 + 0x90),*(undefined8 *)(*(long *)(puVar4 + -0x78) + 0x60),
                    uRam0000000003d3c650);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x88,uRam0000000003d32938);
code_r0x01582e28:
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,*unaff_x22);
  if (lVar14 != 0) {
    lVar7 = *(long *)(lVar14 + 0x20);
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,*unaff_x22);
    if ((lVar14 != 0) && (lVar7 != 0)) {
      uVar10 = *(undefined8 *)(param_4 + 0x70);
      uVar20 = *(undefined8 *)(lVar14 + 0x38);
      uVar16 = *(undefined8 *)(lVar14 + 0x50);
      param_2 = *(undefined8 *)(lVar14 + 0x48);
      *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(lVar14 + 0x40);
      *(undefined8 *)(puVar4 + -0xb0) = uVar20;
      *(undefined8 *)(puVar4 + -0x98) = uVar16;
      *(undefined8 *)(puVar4 + -0xa0) = param_2;
      Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars(lVar7,puVar4 + -0xb0,uVar10,0);
      lVar7 = *(long *)(param_4 + 0x70);
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,*unaff_x22);
      if (lVar14 != 0) {
        Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
                  (param_4,lVar7,*(undefined8 *)(lVar14 + 0x28));
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,*puVar21);
        if (lVar14 != 0) goto code_r0x01582ea4;
      }
    }
  }
code_r0x01582ed4:
  func_0x00f78af4();
  fVar25 = (float)param_2;
  if (extraout_w1 == 1) goto code_r0x01582eec;
  goto code_r0x01582f1c;
code_r0x01582ea4:
  auVar26._8_8_ = 1;
  auVar26._0_8_ = lVar14;
  puVar23 = &UNK_01582eac;
  puVar4 = puVar4 + -0xb0;
  goto code_r0x01582c78;
code_r0x01582eec:
  plVar8 = (long *)___cxa_begin_catch();
  lVar7 = *plVar8;
  ___cxa_end_catch();
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x88,uRam0000000003d32938);
  fVar25 = (float)param_2;
  if (lVar7 != 0) {
    func_0x00f78ac0(lVar7,0);
code_r0x01582f1c:
    lVar14 = __Unwind_Resume();
    *(ulong *)(puVar4 + -0xf0) = unaff_x24;
    *(long *)(puVar4 + -0xe8) = unaff_x23;
    *(undefined8 **)(puVar4 + -0xe0) = unaff_x22;
    *(undefined8 **)(puVar4 + -0xd8) = puVar21;
    *(long *)(puVar4 + -0xd0) = lVar7;
    *(long *)(puVar4 + -200) = param_4;
    *(undefined1 **)(puVar4 + -0xc0) = puVar22;
    *(undefined **)(puVar4 + -0xb8) = &Atlas_UI_Screens_EndOfRoundScreen__OnCompleteStarSpawnTweens;
    uVar12 = 0x3eb5000;
    uVar10 = 0x3d41028;
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
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar14,uRam0000000003d41028);
    if (lVar7 == 0) goto code_r0x01583130;
    uVar20 = *(undefined8 *)(lVar7 + 0x38);
    uVar11 = *(undefined8 *)(lVar7 + 0x50);
    uVar16 = *(undefined8 *)(lVar7 + 0x48);
    *(undefined8 *)(puVar4 + -0x108) = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(puVar4 + -0x110) = uVar20;
    *(undefined8 *)(puVar4 + -0xf8) = uVar11;
    *(undefined8 *)(puVar4 + -0x100) = uVar16;
    Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData
              (puVar4 + -0x110,*(undefined8 *)(lVar14 + 0x70),0);
    fVar25 = (float)uVar16;
    unaff_x22 = *(undefined8 **)(lVar14 + 0x78);
    if (unaff_x22 == (undefined8 *)0x0) goto code_r0x01583130;
    uVar12 = (ulong)(*(int *)(unaff_x22 + 3) - 1U);
    uVar20 = uVar10;
    if ((int)(*(int *)(unaff_x22 + 3) - 1U) < 0) goto code_r0x01583088;
    uVar10 = 0x3d3c668;
    goto code_r0x0158300c;
  }
  goto code_r0x01582e28;
code_r0x01583088:
  uVar10 = uVar20;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41020);
  if (lVar7 != 0) {
    uVar16 = *(undefined8 *)(lVar7 + 0x78);
    uVar10 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar10,lVar14,uRam0000000003d555c8,0);
    uVar20 = *(undefined8 *)(lVar14 + 0x90);
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar21 = (undefined8 *)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slideout')*/ uRam0000000003d7b870,uVar16,0,uVar10,uVar20,0);
    return puVar21;
  }
  goto code_r0x01583130;
  while( true ) {
    uVar19 = *(uint *)(unaff_x22[2] + uVar12 * 0x10 + 0x24);
    unaff_x22 = (undefined8 *)(ulong)uVar19;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    fVar25 = (float)uVar16;
    if (uVar19 == *(uint *)(*(long *)(unaff_x23 + 0x10) + uVar12 * 0x10 + 0x24)) {
      if (*(long *)(lVar14 + 0x90) == 0) break;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar14 + 0x90),uVar12,uRam0000000003d3c668);
    }
    fVar25 = (float)uVar16;
    uVar12 = (ulong)(uVar17 - 1);
    uVar20 = 0x3d3c668;
    if ((int)(uVar17 - 1) < 0) goto code_r0x01583088;
    unaff_x22 = *(undefined8 **)(lVar14 + 0x78);
    if (unaff_x22 == (undefined8 *)0x0) break;
code_r0x0158300c:
    uVar17 = (uint)uVar12;
    if (*(uint *)(unaff_x22 + 3) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    fVar25 = (float)uVar16;
    unaff_x23 = *(long *)(lVar14 + 0x70);
    if (unaff_x23 == 0) break;
  }
code_r0x01583130:
  lVar7 = func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x160) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x158) = unaff_x25;
  *(ulong *)(puVar4 + -0x150) = unaff_x24;
  *(long *)(puVar4 + -0x148) = unaff_x23;
  *(undefined8 **)(puVar4 + -0x140) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x138) = uVar10;
  *(ulong *)(puVar4 + -0x130) = uVar12;
  *(long *)(puVar4 + -0x128) = lVar14;
  *(undefined1 **)(puVar4 + -0x120) = puVar4 + -0xc0;
  *(undefined **)(puVar4 + -0x118) = &Atlas_UI_Screens_EndOfRoundScreen__OnCompleteSlideOut;
  uVar10 = 0x3d41028;
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
  uVar20 = *(undefined8 *)(lVar7 + 0x70);
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar7,uRam0000000003d41028);
  if (lVar14 != 0) {
    uVar10 = 0x3d41000;
    Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
              (lVar7,uVar20,*(undefined8 *)(lVar14 + 0x28));
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41020);
    if (lVar14 != 0) {
      uVar16 = *(undefined8 *)(lVar14 + 0x78);
      uVar10 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar10,lVar7,uRam0000000003d555c0,0);
      uVar20 = *(undefined8 *)(lVar7 + 0x90);
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slidein')*/ uRam0000000003d7b868,uVar16,0,uVar10,uVar20,0);
      puVar21 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      uVar10 = *(undefined8 *)(puVar4 + -0x140);
      *(undefined8 *)(puVar4 + -0x140) = uVar10;
      *(undefined8 *)(puVar4 + -0x138) = *(undefined8 *)(puVar4 + -0x138);
      *(undefined8 *)(puVar4 + -0x130) = *(undefined8 *)(puVar4 + -0x130);
      *(undefined8 *)(puVar4 + -0x128) = *(undefined8 *)(puVar4 + -0x128);
      *(undefined8 *)(puVar4 + -0x120) = *(undefined8 *)(puVar4 + -0x120);
      *(undefined8 *)(puVar4 + -0x118) = *(undefined8 *)(puVar4 + -0x118);
      uVar20 = 0x3eb4000;
      puVar6 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8,0);
        func_0x00f78a20(0x3d2fb00);
        puVar6 = (undefined8 *)func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return puVar6;
      }
      lVar7 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar7,puVar21,uRam0000000003d2faf8);
        if ((int)puVar6 == 0) {
          return puVar6;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar7 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar7 != 0)) &&
           (puVar6 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar7,puVar21,uRam0000000003d2fb00),
           puVar6 != (undefined8 *)0x0)) {
          *(undefined8 *)(puVar4 + -0x130) = *(undefined8 *)(puVar4 + -0x130);
          *(undefined8 *)(puVar4 + -0x128) = *(undefined8 *)(puVar4 + -0x128);
          *(undefined8 *)(puVar4 + -0x120) = *(undefined8 *)(puVar4 + -0x120);
          *(undefined8 *)(puVar4 + -0x118) = *(undefined8 *)(puVar4 + -0x118);
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,puVar6,0,0);
          return puVar6;
        }
      }
      plVar8 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0x180) = unaff_d9;
      *(ulong *)(puVar4 + -0x178) = CONCAT44(unaff_00005104,unaff_s8);
      *(undefined8 *)(puVar4 + -0x170) = uVar10;
      *(undefined8 *)(puVar4 + -0x168) = 0x3eb4000;
      *(undefined8 *)(puVar4 + -0x160) = 0x3d25580;
      *(undefined8 **)(puVar4 + -0x158) = puVar21;
      *(undefined1 **)(puVar4 + -0x150) = puVar4 + -0x120;
      *(undefined **)(puVar4 + -0x148) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar9 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar8,0);
      if ((plVar9 != (long *)0x0) && (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar11 = func_0x00f78e5c(plVar9);
        *(long **)(puVar4 + -0x1a0) = plVar9;
        *(long **)(puVar4 + -0x198) = plVar8;
        *(undefined1 **)(puVar4 + -400) = puVar4 + -0x150;
        *(undefined **)(puVar4 + -0x188) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
        lVar7 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        uVar16 = *(undefined8 *)(puVar4 + -0x1a0);
        *(undefined8 *)(puVar4 + -0x1b0) = uVar10;
        *(undefined8 *)(puVar4 + -0x1a8) = 0x3eb4000;
        *(undefined8 *)(puVar4 + -0x1a0) = uVar16;
        *(undefined8 *)(puVar4 + -0x198) = *(undefined8 *)(puVar4 + -0x198);
        *(undefined8 *)(puVar4 + -400) = *(undefined8 *)(puVar4 + -400);
        *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)(puVar4 + -0x188);
        if (lVar7 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar15 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar15,uVar11,0);
        }
        else {
          uVar20 = 0x3ec0000;
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar12 = (*pcRam0000000003ec01d0)(uVar11);
          if ((uVar12 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar21 = (undefined8 *)(*pcRam0000000003ec01e0)(uVar11,lVar7);
            return puVar21;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar15 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar15,uVar16,0);
          uVar16 = uVar11;
        }
        uVar11 = func_0x00f78a24(0x3d5a8a8);
        auVar26 = func_0x00f78ac0(uVar15,uVar11);
        *(undefined8 *)(puVar4 + -0x1e0) = uVar10;
        *(undefined8 *)(puVar4 + -0x1d8) = uVar20;
        *(undefined8 *)(puVar4 + -0x1d0) = uVar16;
        *(undefined8 *)(puVar4 + -0x1c8) = uVar15;
        *(undefined1 **)(puVar4 + -0x1c0) = puVar4 + -400;
        *(undefined **)(puVar4 + -0x1b8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar21 = (undefined8 *)(*pcRam0000000003ec01e0)(auVar26._0_8_,auVar26._8_8_);
        return puVar21;
      }
      fVar24 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar10 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar24 * 0.25,fVar25 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar9,4,0);
      puVar21 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar10,uRam0000000003d5e780);
      *(undefined8 *)(puVar4 + -0x1b0) = 0x3d5e780;
      *(undefined8 *)(puVar4 + -0x1a8) = 0x3d5e868;
      *(long **)(puVar4 + -0x1a0) = plVar9;
      *(long **)(puVar4 + -0x198) = plVar8;
      *(undefined1 **)(puVar4 + -400) = puVar4 + -0x150;
      *(undefined **)(puVar4 + -0x188) = &UNK_01513b44;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar8,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((puVar21 != (undefined8 *)0x0) && (*(char *)(puVar21 + 0x1d) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar5 != 0) {
          lVar7 = func_0x00f78adc(plVar8,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
          if ((uVar12 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto code_r0x018eef34;
            uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          else {
            if (lVar7 == 0) {
code_r0x018eef34:
              auVar26 = func_0x00f78af4();
              puVar6 = auVar26._0_8_;
              *(undefined8 *)(puVar4 + -0x1e0) = 0x3d5e780;
              *(long *)(puVar4 + -0x1d8) = lVar7;
              *(long **)(puVar4 + -0x1d0) = plVar8;
              *(undefined8 **)(puVar4 + -0x1c8) = puVar21;
              *(undefined1 **)(puVar4 + -0x1c0) = puVar4 + -400;
              *(undefined **)(puVar4 + -0x1b8) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((puVar6 != (undefined8 *)0x0) && (*(char *)(puVar6 + 0x1d) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(puVar6,auVar26._8_8_,cVar1 != '\0',0);
              }
              return puVar6;
            }
            uVar10 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar7,0);
          }
          puVar21[0x19] = uVar10;
        }
        puVar21[9] = plVar8;
      }
      return puVar21;
    }
  }
  lVar14 = func_0x00f78af4();
  *(undefined8 **)(puVar4 + -400) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x188) = uVar10;
  *(undefined8 *)(puVar4 + -0x180) = uVar20;
  *(long *)(puVar4 + -0x178) = lVar7;
  *(undefined1 **)(puVar4 + -0x170) = puVar4 + -0x120;
  *(undefined **)(puVar4 + -0x168) = &Atlas_UI_Screens_EndOfRoundScreen__OnCompleteSlideIn;
  if ((bRam0000000003eb50b9 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50b9 = 1;
  }
  puVar21 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41020);
  if (puVar21 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar14 + 0x88) = *(undefined4 *)(puVar21 + 0x13);
    return puVar21;
  }
  auVar26 = func_0x00f78af4();
  lVar7 = auVar26._0_8_;
  *(undefined8 *)(puVar4 + -0x1f0) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x1e8) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x1e0) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x1d8) = unaff_x25;
  *(ulong *)(puVar4 + -0x1d0) = unaff_x24;
  *(long *)(puVar4 + -0x1c8) = unaff_x23;
  *(undefined8 **)(puVar4 + -0x1c0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x1b8) = 0x3d41020;
  *(undefined8 *)(puVar4 + -0x1b0) = 0x3eb5000;
  *(long *)(puVar4 + -0x1a8) = lVar14;
  *(undefined1 **)(puVar4 + -0x1a0) = puVar4 + -0x170;
  *(undefined **)(puVar4 + -0x198) = &Atlas_UI_Screens_EndOfRoundScreen__LayoutLeaderboard;
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb50ba & 1) == 0) {
    func_0x00f78a20(0x3d535d8);
    func_0x00f78a20(0x3d3af18);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50ba = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41020);
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x80) != 0)) &&
     (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar14 + 0x80),0), lVar14 != 0)) {
    uVar10 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar14,0);
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41020);
    if (((lVar14 != 0) && (*(long *)(lVar14 + 0x88) != 0)) &&
       (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar14 + 0x88),0), lVar14 != 0)) {
      puVar21 = (undefined8 *)/*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar14,0);
      iVar5 = (int)uVar10;
      uVar17 = (int)puVar21 + iVar5;
      unaff_x24 = (ulong)uVar17;
      if (0 < (int)uVar17) {
        uVar19 = 0;
        do {
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41020);
          if ((int)uVar19 < iVar5) {
            if (lVar14 == 0) goto code_r0x015834f0;
            plVar8 = (long *)(lVar14 + 0x80);
          }
          else {
            if (lVar14 == 0) goto code_r0x015834f0;
            plVar8 = (long *)(lVar14 + 0x88);
          }
          if ((*plVar8 == 0) || (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*plVar8,0), lVar14 == 0))
          goto code_r0x015834f0;
          iVar2 = 0;
          if (iVar5 != 0) {
            iVar2 = (int)uVar19 / iVar5;
          }
          lVar14 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar14,uVar19 - iVar2 * iVar5,0);
          if (lVar14 == 0) goto code_r0x015834f0;
          unaff_x22 = (undefined8 *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar14,uRam0000000003d535d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar21 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x22,0);
          if ((((ulong)puVar21 & 1) != 0) || ((int)uVar19 < auVar26._8_4_)) {
            if (unaff_x22 == (undefined8 *)0x0) goto code_r0x015834f0;
            /*Atlas.UI.LeaderboardEntryBehaviour$$SetUp*/ func_0x015ebc20(unaff_x22,0);
            lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0);
            if (lVar14 == 0) goto code_r0x015834f0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0);
            if (*(long *)(lVar7 + 0x80) == 0) goto code_r0x015834f0;
            puVar21 = (undefined8 *)
                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar7 + 0x80),unaff_x22,uRam0000000003d3af18);
          }
          uVar19 = uVar19 + 1;
        } while (uVar17 != uVar19);
      }
      return puVar21;
    }
  }
code_r0x015834f0:
  lVar7 = func_0x00f78af4();
  *(ulong *)(puVar4 + -0x230) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x228) = 0x3d41020;
  *(undefined8 **)(puVar4 + -0x220) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x218) = uVar10;
  *(undefined1 (*) [16])(puVar4 + -0x210) = auVar26;
  *(undefined1 **)(puVar4 + -0x200) = puVar4 + -0x1a0;
  *(undefined **)(puVar4 + -0x1f8) = &Atlas_UI_Screens_EndOfRoundScreen___ctor;
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar10,0xc,uRam0000000003d3af10);
  *(undefined8 *)(lVar7 + 0x80) = uVar10;
  *(undefined8 *)(puVar4 + -0x200) = *(undefined8 *)(puVar4 + -0x200);
  *(undefined8 *)(puVar4 + -0x1f8) = *(undefined8 *)(puVar4 + -0x1f8);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar21 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
    return puVar21;
  }
  auVar26 = func_0x00f78af4();
  puVar6 = auVar26._8_8_;
  puVar21 = auVar26._0_8_;
  uVar20 = puVar6[1];
  uVar10 = *puVar6;
  puVar21[2] = puVar6[2];
  puVar21[1] = uVar20;
  *puVar21 = uVar10;
  return puVar21;
}



// ============================================================
// RVA: 0x1582cf4 | Atlas.UI.Screens.EndOfRoundScreen.OnPlayStarSpawnTweensStart
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_EndOfRoundScreen__OnPlayStarSpawnTweensStart
          (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar14 = 0x3eb5000;
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
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(long *)(param_4 + 0x90) == 0) goto LAB_01582ed4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_4 + 0x90),uRam0000000003d3c658);
  lVar9 = Atlas_UI_Screens_EndOfRoundScreen__GetCurrentOrderLeaderboardElements(param_4);
  if (lVar9 == 0) goto LAB_01582ed4;
  unaff_x23 = 0x3d32940;
  unaff_x24 = 0x3d3c650;
  unaff_x22 = (undefined8 *)0x3d41028;
  unaff_x21 = (undefined8 *)0x3d41020;
  lVar14 = 0x3d32938;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,lVar9,uRam0000000003d3af28);
  while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d32940), (uVar10 & 1) != 0) {
    if (lStack_48 == 0) {
      func_0x00f78af4();
code_r0x01582ed0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1582ed4);
      (*pcVar5)();
    }
    if (*(long *)(param_4 + 0x90) == 0) {
      func_0x00f78af4();
      goto code_r0x01582ed0;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_4 + 0x90),*(undefined8 *)(lStack_48 + 0x60),uRam0000000003d3c650
                   );
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32938);
  do {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,*unaff_x22);
    if (lVar9 != 0) {
      lVar14 = *(long *)(lVar9 + 0x20);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,*unaff_x22);
      if ((lVar9 != 0) && (lVar14 != 0)) {
        uStack_78 = *(undefined8 *)(lVar9 + 0x40);
        uStack_80 = *(undefined8 *)(lVar9 + 0x38);
        uStack_68 = *(undefined8 *)(lVar9 + 0x50);
        param_2 = *(undefined8 *)(lVar9 + 0x48);
        uStack_70 = param_2;
        Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars
                  (lVar14,&uStack_80,*(undefined8 *)(param_4 + 0x70),0);
        lVar14 = *(long *)(param_4 + 0x70);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,*unaff_x22);
        if (lVar9 != 0) {
          Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
                    (param_4,lVar14,*(undefined8 *)(lVar9 + 0x28));
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,*unaff_x21);
          if (lVar9 != 0) {
            puVar11 = (undefined8 *)/*Atlas.UI.Screens.EndOfRoundScreenBehaviour$$SetStatIconAndTextActive*/ func_0x01582c78(lVar9,1);
            return puVar11;
          }
        }
      }
    }
LAB_01582ed4:
    func_0x00f78af4();
    fVar20 = (float)param_2;
    if (extraout_w1 != 1) goto code_r0x01582f1c;
    plVar12 = (long *)___cxa_begin_catch();
    lVar14 = *plVar12;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32938);
    fVar20 = (float)param_2;
  } while (lVar14 == 0);
  func_0x00f78ac0(lVar14,0);
code_r0x01582f1c:
  lVar9 = __Unwind_Resume();
  puStack_88 = &Atlas_UI_Screens_EndOfRoundScreen__OnCompleteStarSpawnTweens;
  uStack_c0 = unaff_x24;
  uStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  lStack_a0 = lVar14;
  lStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
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
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,uRam0000000003d41028);
  if (lVar14 != 0) {
    uStack_d8 = *(undefined8 *)(lVar14 + 0x40);
    uStack_e0 = *(undefined8 *)(lVar14 + 0x38);
    uStack_c8 = *(undefined8 *)(lVar14 + 0x50);
    uVar15 = *(undefined8 *)(lVar14 + 0x48);
    uStack_d0 = uVar15;
    Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData
              (&uStack_e0,*(undefined8 *)(lVar9 + 0x70),0);
    fVar20 = (float)uVar15;
    lVar14 = *(long *)(lVar9 + 0x78);
    if (lVar14 != 0) {
      uVar4 = *(int *)(lVar14 + 0x18) - 1;
      if ((int)uVar4 < 0) {
code_r0x01583088:
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41020);
        if (lVar14 != 0) {
          uVar16 = *(undefined8 *)(lVar14 + 0x78);
          uVar15 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar15,lVar9,uRam0000000003d555c8,0);
          uVar13 = *(undefined8 *)(lVar9 + 0x90);
          if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar11 = (undefined8 *)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slideout')*/ uRam0000000003d7b870,uVar16,0,uVar15,uVar13,0);
          return puVar11;
        }
      }
      else {
        do {
          uVar10 = (ulong)uVar4;
          if (*(uint *)(lVar14 + 0x18) <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          fVar20 = (float)uVar15;
          lVar17 = *(long *)(lVar9 + 0x70);
          if (lVar17 == 0) break;
          iVar6 = *(int *)(*(long *)(lVar14 + 0x10) + uVar10 * 0x10 + 0x24);
          if (*(uint *)(lVar17 + 0x18) <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          fVar20 = (float)uVar15;
          if (iVar6 == *(int *)(*(long *)(lVar17 + 0x10) + uVar10 * 0x10 + 0x24)) {
            if (*(long *)(lVar9 + 0x90) == 0) break;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar9 + 0x90),uVar10,uRam0000000003d3c668);
          }
          fVar20 = (float)uVar15;
          uVar4 = uVar4 - 1;
          if ((int)uVar4 < 0) goto code_r0x01583088;
          lVar14 = *(long *)(lVar9 + 0x78);
        } while (lVar14 != 0);
      }
    }
  }
  lVar14 = func_0x00f78af4();
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
  uVar15 = *(undefined8 *)(lVar14 + 0x70);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar14,uRam0000000003d41028);
  if (lVar9 != 0) {
    Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
              (lVar14,uVar15,*(undefined8 *)(lVar9 + 0x28));
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41020);
    if (lVar9 != 0) {
      uVar16 = *(undefined8 *)(lVar9 + 0x78);
      uVar15 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar15,lVar14,uRam0000000003d555c0,0);
      uVar13 = *(undefined8 *)(lVar14 + 0x90);
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slidein')*/ uRam0000000003d7b868,uVar16,0,uVar15,uVar13,0);
      puVar11 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
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
      lVar14 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar14 != 0) {
        puVar7 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar14,puVar11,uRam0000000003d2faf8);
        if ((int)puVar7 == 0) {
          return puVar7;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar14 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar14 != 0)) &&
           (puVar11 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar14,puVar11,uRam0000000003d2fb00),
           puVar11 != (undefined8 *)0x0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,puVar11,0,0);
          return puVar11;
        }
      }
      plVar12 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar12,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar15 = func_0x00f78e5c(plVar8);
        lVar14 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        if (lVar14 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar13 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar13,uVar15,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar10 = (*pcRam0000000003ec01d0)(uVar15);
          if ((uVar10 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar11 = (undefined8 *)(*pcRam0000000003ec01e0)(uVar15,lVar14);
            return puVar11;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar13 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar13,uVar15,0);
        }
        uVar15 = func_0x00f78a24(0x3d5a8a8);
        auVar21 = func_0x00f78ac0(uVar13,uVar15);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar11 = (undefined8 *)(*pcRam0000000003ec01e0)(auVar21._0_8_,auVar21._8_8_);
        return puVar11;
      }
      fVar19 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar15 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar19 * 0.25,fVar20 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar8,4,0);
      puVar11 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar15,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar12,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((puVar11 != (undefined8 *)0x0) && (*(char *)(puVar11 + 0x1d) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar6 != 0) {
          lVar14 = func_0x00f78adc(plVar12,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
          if ((uVar10 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto code_r0x018eef34;
            uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          }
          else {
            if (lVar14 == 0) {
code_r0x018eef34:
              auVar21 = func_0x00f78af4();
              puVar11 = auVar21._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((puVar11 != (undefined8 *)0x0) && (*(char *)(puVar11 + 0x1d) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(puVar11,auVar21._8_8_,cVar2 != '\0',0);
              }
              return puVar11;
            }
            uVar15 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar14,0);
          }
          puVar11[0x19] = uVar15;
        }
        puVar11[9] = plVar12;
      }
      return puVar11;
    }
  }
  lVar14 = func_0x00f78af4();
  if ((bRam0000000003eb50b9 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50b9 = 1;
  }
  puVar11 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41020);
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar14 + 0x88) = *(undefined4 *)(puVar11 + 0x13);
    return puVar11;
  }
  auVar22 = func_0x00f78af4();
  lVar14 = auVar22._0_8_;
  if ((bRam0000000003eb50ba & 1) == 0) {
    func_0x00f78a20(0x3d535d8);
    func_0x00f78a20(0x3d3af18);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50ba = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41020);
  if (((lVar9 != 0) && (*(long *)(lVar9 + 0x80) != 0)) &&
     (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x80),0), lVar9 != 0)) {
    iVar6 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar9,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41020);
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x88) != 0)) &&
       (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x88),0), lVar9 != 0)) {
      puVar11 = (undefined8 *)/*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar9,0);
      iVar1 = (int)puVar11 + iVar6;
      if (0 < iVar1) {
        iVar18 = 0;
        do {
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41020);
          if (iVar18 < iVar6) {
            if (lVar9 == 0) goto code_r0x015834f0;
            plVar12 = (long *)(lVar9 + 0x80);
          }
          else {
            if (lVar9 == 0) goto code_r0x015834f0;
            plVar12 = (long *)(lVar9 + 0x88);
          }
          if ((*plVar12 == 0) || (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*plVar12,0), lVar9 == 0))
          goto code_r0x015834f0;
          iVar3 = 0;
          if (iVar6 != 0) {
            iVar3 = iVar18 / iVar6;
          }
          lVar9 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar9,iVar18 - iVar3 * iVar6,0);
          if (lVar9 == 0) goto code_r0x015834f0;
          lVar9 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar9,uRam0000000003d535d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar11 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
          if ((((ulong)puVar11 & 1) != 0) || (iVar18 < auVar22._8_4_)) {
            if (lVar9 == 0) goto code_r0x015834f0;
            /*Atlas.UI.LeaderboardEntryBehaviour$$SetUp*/ func_0x015ebc20(lVar9,0);
            lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0);
            if (lVar17 == 0) goto code_r0x015834f0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0);
            if (*(long *)(lVar14 + 0x80) == 0) goto code_r0x015834f0;
            puVar11 = (undefined8 *)
                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x80),lVar9,uRam0000000003d3af18);
          }
          iVar18 = iVar18 + 1;
        } while (iVar1 != iVar18);
      }
      return puVar11;
    }
  }
code_r0x015834f0:
  lVar14 = func_0x00f78af4();
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar15 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar15,0xc,uRam0000000003d3af10);
  *(undefined8 *)(lVar14 + 0x80) = uVar15;
  if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
    return puVar11;
  }
  auVar21 = func_0x00f78af4();
  puVar7 = auVar21._8_8_;
  puVar11 = auVar21._0_8_;
  uVar13 = puVar7[1];
  uVar15 = *puVar7;
  puVar11[2] = puVar7[2];
  puVar11[1] = uVar13;
  *puVar11 = uVar15;
  return puVar11;
}



// ============================================================
// RVA: 0x1582f20 | Atlas.UI.Screens.EndOfRoundScreen.OnCompleteStarSpawnTweens
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_EndOfRoundScreen__OnCompleteStarSpawnTweens
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41028);
  if (lVar10 != 0) {
    uStack_58 = *(undefined8 *)(lVar10 + 0x40);
    uStack_60 = *(undefined8 *)(lVar10 + 0x38);
    uStack_48 = *(undefined8 *)(lVar10 + 0x50);
    uVar14 = *(undefined8 *)(lVar10 + 0x48);
    uStack_50 = uVar14;
    Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData
              (&uStack_60,*(undefined8 *)(param_4 + 0x70),0);
    param_2 = (float)uVar14;
    lVar10 = *(long *)(param_4 + 0x78);
    if (lVar10 != 0) {
      uVar4 = *(int *)(lVar10 + 0x18) - 1;
      if ((int)uVar4 < 0) {
LAB_01583088:
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41020);
        if (lVar10 != 0) {
          uVar15 = *(undefined8 *)(lVar10 + 0x78);
          uVar14 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar14,param_4,uRam0000000003d555c8,0);
          uVar12 = *(undefined8 *)(param_4 + 0x90);
          if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar7 = (undefined8 *)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slideout')*/ uRam0000000003d7b870,uVar15,0,uVar14,uVar12,0);
          return puVar7;
        }
      }
      else {
        do {
          uVar13 = (ulong)uVar4;
          if (*(uint *)(lVar10 + 0x18) <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          param_2 = (float)uVar14;
          lVar16 = *(long *)(param_4 + 0x70);
          if (lVar16 == 0) break;
          iVar5 = *(int *)(*(long *)(lVar10 + 0x10) + uVar13 * 0x10 + 0x24);
          if (*(uint *)(lVar16 + 0x18) <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          param_2 = (float)uVar14;
          if (iVar5 == *(int *)(*(long *)(lVar16 + 0x10) + uVar13 * 0x10 + 0x24)) {
            if (*(long *)(param_4 + 0x90) == 0) break;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(param_4 + 0x90),uVar13,uRam0000000003d3c668);
          }
          param_2 = (float)uVar14;
          uVar4 = uVar4 - 1;
          if ((int)uVar4 < 0) goto LAB_01583088;
          lVar10 = *(long *)(param_4 + 0x78);
        } while (lVar10 != 0);
      }
    }
  }
  lVar10 = func_0x00f78af4();
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
  uVar14 = *(undefined8 *)(lVar10 + 0x70);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41028);
  if (lVar16 != 0) {
    Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
              (lVar10,uVar14,*(undefined8 *)(lVar16 + 0x28));
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41020);
    if (lVar16 != 0) {
      uVar15 = *(undefined8 *)(lVar16 + 0x78);
      uVar14 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar14,lVar10,uRam0000000003d555c0,0);
      uVar12 = *(undefined8 *)(lVar10 + 0x90);
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slidein')*/ uRam0000000003d7b868,uVar15,0,uVar14,uVar12,0);
      puVar7 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      puVar6 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8,0);
        func_0x00f78a20(0x3d2fb00);
        puVar6 = (undefined8 *)func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return puVar6;
      }
      lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar10 != 0) {
        puVar6 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar10,puVar7,uRam0000000003d2faf8);
        if ((int)puVar6 == 0) {
          return puVar6;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar10 != 0)) &&
           (puVar7 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar10,puVar7,uRam0000000003d2fb00),
           puVar7 != (undefined8 *)0x0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,puVar7,0,0);
          return puVar7;
        }
      }
      plVar8 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar9 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar8,0);
      if ((plVar9 != (long *)0x0) && (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar14 = func_0x00f78e5c(plVar9);
        lVar10 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        if (lVar10 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar12 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar12,uVar14,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar13 = (*pcRam0000000003ec01d0)(uVar14);
          if ((uVar13 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar7 = (undefined8 *)(*pcRam0000000003ec01e0)(uVar14,lVar10);
            return puVar7;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar12 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar14,0);
        }
        uVar14 = func_0x00f78a24(0x3d5a8a8);
        auVar19 = func_0x00f78ac0(uVar12,uVar14);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar7 = (undefined8 *)(*pcRam0000000003ec01e0)(auVar19._0_8_,auVar19._8_8_);
        return puVar7;
      }
      fVar18 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar14 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar18 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar9,4,0);
      puVar7 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar14,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar8,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 0x1d) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar5 != 0) {
          lVar10 = func_0x00f78adc(plVar8,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((uVar13 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto code_r0x018eef34;
            uVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          else {
            if (lVar10 == 0) {
code_r0x018eef34:
              auVar19 = func_0x00f78af4();
              puVar7 = auVar19._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 0x1d) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(puVar7,auVar19._8_8_,cVar2 != '\0',0);
              }
              return puVar7;
            }
            uVar14 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
          }
          puVar7[0x19] = uVar14;
        }
        puVar7[9] = plVar8;
      }
      return puVar7;
    }
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb50b9 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50b9 = 1;
  }
  puVar7 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41020);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar10 + 0x88) = *(undefined4 *)(puVar7 + 0x13);
    return puVar7;
  }
  auVar20 = func_0x00f78af4();
  lVar10 = auVar20._0_8_;
  if ((bRam0000000003eb50ba & 1) == 0) {
    func_0x00f78a20(0x3d535d8);
    func_0x00f78a20(0x3d3af18);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50ba = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41020);
  if (((lVar16 != 0) && (*(long *)(lVar16 + 0x80) != 0)) &&
     (lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar16 + 0x80),0), lVar16 != 0)) {
    iVar5 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar16,0);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41020);
    if (((lVar16 != 0) && (*(long *)(lVar16 + 0x88) != 0)) &&
       (lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar16 + 0x88),0), lVar16 != 0)) {
      puVar7 = (undefined8 *)/*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar16,0);
      iVar1 = (int)puVar7 + iVar5;
      if (0 < iVar1) {
        iVar17 = 0;
        do {
          lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41020);
          if (iVar17 < iVar5) {
            if (lVar16 == 0) goto code_r0x015834f0;
            plVar8 = (long *)(lVar16 + 0x80);
          }
          else {
            if (lVar16 == 0) goto code_r0x015834f0;
            plVar8 = (long *)(lVar16 + 0x88);
          }
          if ((*plVar8 == 0) || (lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*plVar8,0), lVar16 == 0))
          goto code_r0x015834f0;
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = iVar17 / iVar5;
          }
          lVar16 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar16,iVar17 - iVar3 * iVar5,0);
          if (lVar16 == 0) goto code_r0x015834f0;
          lVar16 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar16,uRam0000000003d535d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar7 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar16,0);
          if ((((ulong)puVar7 & 1) != 0) || (iVar17 < auVar20._8_4_)) {
            if (lVar16 == 0) goto code_r0x015834f0;
            /*Atlas.UI.LeaderboardEntryBehaviour$$SetUp*/ func_0x015ebc20(lVar16,0);
            lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0);
            if (lVar11 == 0) goto code_r0x015834f0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0);
            if (*(long *)(lVar10 + 0x80) == 0) goto code_r0x015834f0;
            puVar7 = (undefined8 *)
                     /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar10 + 0x80),lVar16,uRam0000000003d3af18);
          }
          iVar17 = iVar17 + 1;
        } while (iVar1 != iVar17);
      }
      return puVar7;
    }
  }
code_r0x015834f0:
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar14 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar14,0xc,uRam0000000003d3af10);
  *(undefined8 *)(lVar10 + 0x80) = uVar14;
  if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
    return puVar7;
  }
  auVar19 = func_0x00f78af4();
  puVar6 = auVar19._8_8_;
  puVar7 = auVar19._0_8_;
  uVar12 = puVar6[1];
  uVar14 = *puVar6;
  puVar7[2] = puVar6[2];
  puVar7[1] = uVar12;
  *puVar7 = uVar14;
  return puVar7;
}



// ============================================================
// RVA: 0x1583134 | Atlas.UI.Screens.EndOfRoundScreen.OnCompleteSlideOut
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_EndOfRoundScreen__OnCompleteSlideOut
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  
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
  uVar14 = *(undefined8 *)(param_4 + 0x70);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41028);
  if (lVar9 != 0) {
    Atlas_UI_Screens_EndOfRoundScreen__UpdateLeaderboard
              (param_4,uVar14,*(undefined8 *)(lVar9 + 0x28));
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41020);
    if (lVar9 != 0) {
      uVar15 = *(undefined8 *)(lVar9 + 0x78);
      uVar14 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar14,param_4,uRam0000000003d555c0,0);
      uVar13 = *(undefined8 *)(param_4 + 0x90);
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slidein')*/ uRam0000000003d7b868,uVar15,0,uVar14,uVar13,0);
      puVar6 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      puVar5 = /*STR('event:/UI/Front_End/Dotween_SlideIn')*/ puRam0000000003d78fd8;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8,0);
        func_0x00f78a20(0x3d2fb00);
        puVar5 = (undefined8 *)func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return puVar5;
      }
      lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar9 != 0) {
        puVar5 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,puVar6,uRam0000000003d2faf8);
        if ((int)puVar5 == 0) {
          return puVar5;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
           (puVar6 = (undefined8 *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,puVar6,uRam0000000003d2fb00),
           puVar6 != (undefined8 *)0x0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,puVar6,0,0);
          return puVar6;
        }
      }
      plVar7 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar7,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar14 = func_0x00f78e5c(plVar8);
        lVar9 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        if (lVar9 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar13 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar13,uVar14,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar12 = (*pcRam0000000003ec01d0)(uVar14);
          if ((uVar12 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar6 = (undefined8 *)(*pcRam0000000003ec01e0)(uVar14,lVar9);
            return puVar6;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar13 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar13,uVar14,0);
        }
        uVar14 = func_0x00f78a24(0x3d5a8a8);
        auVar18 = func_0x00f78ac0(uVar13,uVar14);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar6 = (undefined8 *)(*pcRam0000000003ec01e0)(auVar18._0_8_,auVar18._8_8_);
        return puVar6;
      }
      fVar17 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar14 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar17 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar8,4,0);
      puVar6 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar14,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar7,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((puVar6 != (undefined8 *)0x0) && (*(char *)(puVar6 + 0x1d) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar4 != 0) {
          lVar9 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
          if ((uVar12 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto code_r0x018eef34;
            uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          else {
            if (lVar9 == 0) {
code_r0x018eef34:
              auVar18 = func_0x00f78af4();
              puVar6 = auVar18._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((puVar6 != (undefined8 *)0x0) && (*(char *)(puVar6 + 0x1d) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(puVar6,auVar18._8_8_,cVar2 != '\0',0);
              }
              return puVar6;
            }
            uVar14 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
          }
          puVar6[0x19] = uVar14;
        }
        puVar6[9] = plVar7;
      }
      return puVar6;
    }
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb50b9 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50b9 = 1;
  }
  puVar6 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41020);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(lVar9 + 0x88) = *(undefined4 *)(puVar6 + 0x13);
    return puVar6;
  }
  auVar19 = func_0x00f78af4();
  lVar9 = auVar19._0_8_;
  if ((bRam0000000003eb50ba & 1) == 0) {
    func_0x00f78a20(0x3d535d8);
    func_0x00f78a20(0x3d3af18);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50ba = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41020);
  if (((lVar10 != 0) && (*(long *)(lVar10 + 0x80) != 0)) &&
     (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar10 + 0x80),0), lVar10 != 0)) {
    iVar4 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar10,0);
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41020);
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x88) != 0)) &&
       (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar10 + 0x88),0), lVar10 != 0)) {
      puVar6 = (undefined8 *)/*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar10,0);
      iVar1 = (int)puVar6 + iVar4;
      if (0 < iVar1) {
        iVar16 = 0;
        do {
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41020);
          if (iVar16 < iVar4) {
            if (lVar10 == 0) goto code_r0x015834f0;
            plVar7 = (long *)(lVar10 + 0x80);
          }
          else {
            if (lVar10 == 0) goto code_r0x015834f0;
            plVar7 = (long *)(lVar10 + 0x88);
          }
          if ((*plVar7 == 0) || (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*plVar7,0), lVar10 == 0))
          goto code_r0x015834f0;
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = iVar16 / iVar4;
          }
          lVar10 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar10,iVar16 - iVar3 * iVar4,0);
          if (lVar10 == 0) goto code_r0x015834f0;
          lVar10 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar10,uRam0000000003d535d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar6 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
          if ((((ulong)puVar6 & 1) != 0) || (iVar16 < auVar19._8_4_)) {
            if (lVar10 == 0) goto code_r0x015834f0;
            /*Atlas.UI.LeaderboardEntryBehaviour$$SetUp*/ func_0x015ebc20(lVar10,0);
            lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
            if (lVar11 == 0) goto code_r0x015834f0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0);
            if (*(long *)(lVar9 + 0x80) == 0) goto code_r0x015834f0;
            puVar6 = (undefined8 *)
                     /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar9 + 0x80),lVar10,uRam0000000003d3af18);
          }
          iVar16 = iVar16 + 1;
        } while (iVar1 != iVar16);
      }
      return puVar6;
    }
  }
code_r0x015834f0:
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar14 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar14,0xc,uRam0000000003d3af10);
  *(undefined8 *)(lVar9 + 0x80) = uVar14;
  if (lVar9 == 0) {
    auVar18 = func_0x00f78af4();
    puVar5 = auVar18._8_8_;
    puVar6 = auVar18._0_8_;
    uVar13 = puVar5[1];
    uVar14 = *puVar5;
    puVar6[2] = puVar5[2];
    puVar6[1] = uVar13;
    *puVar6 = uVar14;
    return puVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
  return puVar6;
}



// ============================================================
// RVA: 0x15832a0 | Atlas.UI.Screens.EndOfRoundScreen.OnCompleteSlideIn
// ============================================================

void Atlas_UI_Screens_EndOfRoundScreen__OnCompleteSlideIn(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  
  if ((bRam0000000003eb50b9 & 1) == 0) {
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50b9 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41020);
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar4 + 0x98);
    return;
  }
  auVar15 = func_0x00f78af4();
  lVar4 = auVar15._0_8_;
  if ((bRam0000000003eb50ba & 1) == 0) {
    func_0x00f78a20(0x3d535d8);
    func_0x00f78a20(0x3d3af18);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50ba = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41020);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x80) != 0)) &&
     (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x80),0), lVar5 != 0)) {
    iVar2 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar5,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41020);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x88) != 0)) &&
       (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x88),0), lVar5 != 0)) {
      iVar3 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar5,0);
      if (0 < iVar3 + iVar2) {
        iVar12 = 0;
        do {
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41020);
          if (iVar12 < iVar2) {
            if (lVar5 == 0) goto code_r0x015834f0;
            plVar11 = (long *)(lVar5 + 0x80);
          }
          else {
            if (lVar5 == 0) goto code_r0x015834f0;
            plVar11 = (long *)(lVar5 + 0x88);
          }
          if ((*plVar11 == 0) || (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*plVar11,0), lVar5 == 0))
          goto code_r0x015834f0;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar12 / iVar2;
          }
          lVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar5,iVar12 - iVar1 * iVar2,0);
          if (lVar5 == 0) goto code_r0x015834f0;
          lVar5 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar5,uRam0000000003d535d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
          if (((uVar6 & 1) != 0) || (iVar12 < auVar15._8_4_)) {
            if (lVar5 == 0) goto code_r0x015834f0;
            /*Atlas.UI.LeaderboardEntryBehaviour$$SetUp*/ func_0x015ebc20(lVar5,0);
            lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
            if (lVar7 == 0) goto code_r0x015834f0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
            if (*(long *)(lVar4 + 0x80) == 0) goto code_r0x015834f0;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar4 + 0x80),lVar5,uRam0000000003d3af18);
          }
          iVar12 = iVar12 + 1;
        } while (iVar3 + iVar2 != iVar12);
      }
      return;
    }
  }
code_r0x015834f0:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar8,0xc,uRam0000000003d3af10);
  *(undefined8 *)(lVar4 + 0x80) = uVar8;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar14 = func_0x00f78af4();
  puVar10 = auVar14._8_8_;
  puVar9 = auVar14._0_8_;
  uVar13 = puVar10[1];
  uVar8 = *puVar10;
  puVar9[2] = puVar10[2];
  puVar9[1] = uVar13;
  *puVar9 = uVar8;
  return;
}



// ============================================================
// RVA: 0x1583308 | Atlas.UI.Screens.EndOfRoundScreen.LayoutLeaderboard
// ============================================================

void Atlas_UI_Screens_EndOfRoundScreen__LayoutLeaderboard(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000003eb50ba & 1) == 0) {
    func_0x00f78a20(0x3d535d8);
    func_0x00f78a20(0x3d3af18);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41020);
    bRam0000000003eb50ba = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41020);
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) &&
     (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x80),0), lVar4 != 0)) {
    iVar2 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar4,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41020);
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x88) != 0)) &&
       (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x88),0), lVar4 != 0)) {
      iVar3 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar4,0);
      if (0 < iVar3 + iVar2) {
        iVar11 = 0;
        do {
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41020);
          if (iVar11 < iVar2) {
            if (lVar4 == 0) goto LAB_015834f0;
            plVar10 = (long *)(lVar4 + 0x80);
          }
          else {
            if (lVar4 == 0) goto LAB_015834f0;
            plVar10 = (long *)(lVar4 + 0x88);
          }
          if ((*plVar10 == 0) || (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*plVar10,0), lVar4 == 0))
          goto LAB_015834f0;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar11 / iVar2;
          }
          lVar4 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar4,iVar11 - iVar1 * iVar2,0);
          if (lVar4 == 0) goto LAB_015834f0;
          lVar4 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar4,uRam0000000003d535d8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
          if (((uVar5 & 1) != 0) || (iVar11 < param_2)) {
            if (lVar4 == 0) goto LAB_015834f0;
            /*Atlas.UI.LeaderboardEntryBehaviour$$SetUp*/ func_0x015ebc20(lVar4,0);
            lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
            if (lVar6 == 0) goto LAB_015834f0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0);
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_015834f0;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x80),lVar4,uRam0000000003d3af18);
          }
          iVar11 = iVar11 + 1;
        } while (iVar3 + iVar2 != iVar11);
      }
      return;
    }
  }
LAB_015834f0:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar7,0xc,uRam0000000003d3af10);
  *(undefined8 *)(lVar4 + 0x80) = uVar7;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar13 = func_0x00f78af4();
  puVar9 = auVar13._8_8_;
  puVar8 = auVar13._0_8_;
  uVar12 = puVar9[1];
  uVar7 = *puVar9;
  puVar8[2] = puVar9[2];
  puVar8[1] = uVar12;
  *puVar8 = uVar7;
  return;
}



// ============================================================
// RVA: 0x15834f4 | Atlas.UI.Screens.EndOfRoundScreen..ctor
// ============================================================

void Atlas_UI_Screens_EndOfRoundScreen___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb50be & 1) == 0) {
    func_0x00f78a20(0x3d2c6e8);
    func_0x00f78a20(0x3d3af10);
    func_0x00f78a20(0x3d1db30);
    bRam0000000003eb50be = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,0xc,uRam0000000003d3af10);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6e8 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar3 = auVar5._8_8_;
  puVar2 = auVar5._0_8_;
  uVar4 = puVar3[1];
  uVar1 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar4;
  *puVar2 = uVar1;
  return;
}



