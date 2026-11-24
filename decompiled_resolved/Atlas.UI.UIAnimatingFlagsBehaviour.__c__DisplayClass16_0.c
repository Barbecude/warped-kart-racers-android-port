// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0

// ============================================================
// RVA: 0x156b724 | Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0..ctor
// ============================================================

void Atlas_UI_UIAnimatingFlagsBehaviour___c__DisplayClass16_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156b72c | Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0.<PlayCompleteAnimation>b__0
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIAnimatingFlagsBehaviour___c__DisplayClass16_0___PlayCompleteAnimation_b__0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  lVar7 = *(long *)(param_4 + 0x10);
  lVar3 = lVar7;
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
    lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,lVar7,uRam0000000003d2faf8);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
       (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,lVar7,uRam0000000003d2fb00), lVar3 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar3,0,0);
      return lVar3;
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
    lVar3 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar9 = func_0x00f78aec();
      uVar6 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar6,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar8 = (*pcRam0000000003ec01d0)(uVar6);
      if ((uVar8 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*pcRam0000000003ec01e0)(uVar6,lVar3);
        return lVar3;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar6 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar6,0);
    }
    uVar6 = func_0x00f78a24(0x3d5a8a8);
    auVar11 = func_0x00f78ac0(uVar9,uVar6);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return lVar3;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar5,4,0);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar6,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar4,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar7 = func_0x00f78adc(plVar4,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto code_r0x018eef34;
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      else {
        if (lVar7 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          lVar3 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar3,auVar11._8_8_,cVar1 != '\0',0);
          }
          return lVar3;
        }
        uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar7,0);
      }
      *(undefined8 *)(lVar3 + 200) = uVar6;
    }
    *(long **)(lVar3 + 0x48) = plVar4;
  }
  return lVar3;
}



