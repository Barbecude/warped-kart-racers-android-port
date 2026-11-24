// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0

// ============================================================
// RVA: 0x156df30 | Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0..ctor
// ============================================================

void Atlas_UI_Screens_VotingScreen___c__DisplayClass29_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156df38 | Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0.<ShowWinner>b__0
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_VotingScreen___c__DisplayClass29_0___ShowWinner_b__0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  
  if ((bRam0000000003eb501d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d60130);
    func_0x00f78a20(0x3d79128);
    bRam0000000003eb501d = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar7,uVar10,uRam0000000003d60130,0);
  if ((((*(long *)(param_1 + 0x18) != 0) &&
       (lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(*(long *)(param_1 + 0x18),uRam0000000003d41350), lVar8 != 0)) &&
      (*(long *)(lVar8 + 0xc0) != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar12 = *(undefined4 *)(*(long *)(lVar8 + 0xc0) + 0x10);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(*(long *)(param_1 + 0x18),uRam0000000003d41350);
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
      fVar13 = *(float *)(*(long *)(lVar8 + 0xc0) + 0x14);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(*(long *)(param_1 + 0x18),uRam0000000003d41350);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
        fVar14 = *(float *)(*(long *)(lVar8 + 0xc0) + 0x18);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(*(long *)(param_1 + 0x18),uRam0000000003d41350);
        if (((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
          uVar15 = *(undefined4 *)(*(long *)(lVar8 + 0xc0) + 0x1c);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(*(long *)(param_1 + 0x18),uRam0000000003d41350);
          if (((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) && (*(long *)(param_1 + 0x18) != 0))
          {
            uVar16 = *(undefined4 *)(*(long *)(lVar8 + 0xc0) + 0x20);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(*(long *)(param_1 + 0x18),uRam0000000003d41350);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) {
              /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar12,fVar13,fVar14,uVar15,uVar16,
                              *(undefined4 *)(*(long *)(lVar8 + 0xc0) + 0x24),uVar6,uVar7,0,0);
              lVar8 = /*STR('event:/UI/VoteDecided')*/ lRam0000000003d79128;
              lVar3 = /*STR('event:/UI/VoteDecided')*/ lRam0000000003d79128;
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
                lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,lVar8,uRam0000000003d2faf8);
                if ((int)lVar3 == 0) {
                  return lVar3;
                }
                if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
                    (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)
                    ) && (lVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,lVar8,uRam0000000003d2fb00), lVar8 != 0)) {
                  /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar8,0,0);
                  return lVar8;
                }
              }
              plVar4 = (long *)func_0x00f78af4();
              if ((bRam0000000003eb4d8b & 1) == 0) {
                func_0x00f78a20(0x3d24188);
                func_0x00f78a20(0x3d5e780);
                func_0x00f78a20(0x3d5e868);
                bRam0000000003eb4d8b = 1;
              }
              plVar5 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar4,0);
              if ((plVar5 != (long *)0x0) && (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
                uVar6 = func_0x00f78e5c(plVar5);
                lVar8 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
                if (lVar8 == 0) {
                  func_0x00f78a24(0x3d23938,0,0);
                  uVar10 = func_0x00f78aec();
                  uVar6 = func_0x00f78a24(0x3d7b500);
                  /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar6,0);
                }
                else {
                  if (pcRam0000000003ec01d0 == (code *)0x0) {
                    pcRam0000000003ec01d0 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                                );
                  }
                  uVar9 = (*pcRam0000000003ec01d0)(uVar6);
                  if ((uVar9 & 1) != 0) {
                    if (pcRam0000000003ec01e0 == (code *)0x0) {
                      pcRam0000000003ec01e0 =
                           (code *)func_0x00f789d4(
                                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                                  );
                    }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    lVar8 = (*pcRam0000000003ec01e0)(uVar6,lVar8);
                    return lVar8;
                  }
                  func_0x00f78a24(0x3d1fce8);
                  uVar10 = func_0x00f78aec();
                  uVar6 = func_0x00f78a24(0x3d6af80);
                  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar6,0);
                }
                uVar6 = func_0x00f78a24(0x3d5a8a8);
                auVar18 = func_0x00f78ac0(uVar10,uVar6);
                if (pcRam0000000003ec01e0 == (code *)0x0) {
                  pcRam0000000003ec01e0 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar8 = (*pcRam0000000003ec01e0)(auVar18._0_8_,auVar18._8_8_);
                return lVar8;
              }
              fVar11 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
              uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar11 * 0.25,fVar13 * 0.25,fVar14 * 0.25,_UNK_033f82c4,
                                      0x40a00000,plVar5,4,0);
              lVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar6,uRam0000000003d5e780);
              if ((bRam0000000003eb66c1 & 1) == 0) {
                func_0x00f78a20(0x3d208f0,plVar4,uRam0000000003d5e868);
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb66c1 = 1;
              }
              if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
                if (iVar2 != 0) {
                  lVar3 = func_0x00f78adc(plVar4,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
                  if ((uVar9 & 1) == 0) {
                    if (plVar4 == (long *)0x0) goto code_r0x018eef34;
                    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                  }
                  else {
                    if (lVar3 == 0) {
code_r0x018eef34:
                      auVar18 = func_0x00f78af4();
                      lVar8 = auVar18._0_8_;
                      if ((bRam0000000003eb66c2 & 1) == 0) {
                        func_0x00f78a20(0x3d20bc0);
                        func_0x00f78a20(0x3d25440);
                        bRam0000000003eb66c2 = 1;
                      }
                      if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
                        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar8,auVar18._8_8_,cVar1 != '\0',0);
                      }
                      return lVar8;
                    }
                    uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar3,0);
                  }
                  *(undefined8 *)(lVar8 + 200) = uVar6;
                }
                *(long **)(lVar8 + 0x48) = plVar4;
              }
              return lVar8;
            }
          }
        }
      }
    }
  }
  auVar17 = func_0x00f78af4();
  lVar8 = /*System.Object$$.ctor*/ func_0x0294d018(auVar17._0_8_,0);
  *(int *)(auVar17._0_8_ + 0x10) = auVar17._8_4_;
  return lVar8;
}



