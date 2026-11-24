// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UILeagueRewardBehaviour

// ============================================================
// RVA: 0x151be7c | Atlas.UI.UILeagueRewardBehaviour.get_UnlockAnimationLength
// ============================================================

undefined4 Atlas_UI_UILeagueRewardBehaviour__get_UnlockAnimationLength(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x151be84 | Atlas.UI.UILeagueRewardBehaviour.get_RewardButton
// ============================================================

undefined8 Atlas_UI_UILeagueRewardBehaviour__get_RewardButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x151be8c | Atlas.UI.UILeagueRewardBehaviour.get_ToolTipData
// ============================================================

undefined8 Atlas_UI_UILeagueRewardBehaviour__get_ToolTipData(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x151be94 | Atlas.UI.UILeagueRewardBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x0151c02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151c048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0151c04c) */
/* WARNING: Removing unreachable block (ram,0x0151c030) */
/* WARNING: Removing unreachable block (ram,0x0151c038) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILeagueRewardBehaviour__Set
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong extraout_x1;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ***pppuVar17;
  undefined *puVar18;
  float fVar19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  long lVar8;
  
  uVar15 = 0x3d23990;
  lVar9 = param_7;
  if ((bRam0000000003eb4df4 & 1) == 0) {
    func_0x00f78a20(0x3d23058);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4df4 = 1;
  }
  lVar14 = *(long *)(param_4 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar13 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0);
  if (iVar4 == 0) {
LAB_0151bf80:
    plVar6 = *(long **)(param_4 + 0x28);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151bfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,param_6,*(undefined8 *)(*plVar6 + 400));
      return uVar7;
    }
  }
  else if ((param_7 != 0) && (*(long *)(param_7 + 0x20) != 0)) {
    lVar14 = *(long *)(param_7 + 0x50);
    uVar15 = *(undefined8 *)(*(long *)(param_7 + 0x20) + 0x10);
    uVar16 = *(undefined8 *)(param_7 + 0x88);
    param_7 = func_0x00f78aec(/*Atlas.UI.LoadoutMetagameData_TypeInfo*/ uRam0000000003d23058);
    lVar13 = param_5;
    lVar9 = lVar14;
    Atlas_UI_LoadoutMetagameData___ctor(param_7,param_5,param_5,lVar14,uVar15,uVar16,0);
    plVar6 = *(long **)(param_4 + 0x30);
    if (plVar6 != (long *)0x0) {
      lVar13 = *(long *)(*plVar6 + 400);
      (**(code **)(*plVar6 + 0x188))(plVar6,param_7);
      goto LAB_0151bf80;
    }
  }
  auVar20 = func_0x00f78af4();
  lVar8 = auVar20._0_8_;
  puVar3 = &uStack_90;
  puStack_58 = &Atlas_UI_UILeagueRewardBehaviour__PlayAnimation;
  uStack_90 = uVar15;
  lStack_88 = lVar14;
  lStack_80 = param_7;
  lStack_78 = param_5;
  lStack_70 = param_4;
  uStack_68 = param_6;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4df5 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4df5 = 1;
  }
  pppuVar17 = &ppuStack_60;
  if ((auVar20._8_4_ == 0) || ((int)lVar13 == 0)) {
    if (auVar20._8_4_ == 0) {
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
code_r0x0151c104:
      auVar20._8_8_ = lStack_78;
      auVar20._0_8_ = uStack_68;
      auVar21._8_4_ = uVar1;
      auVar21._0_8_ = lVar8;
      auVar21._12_4_ = 0;
      puVar3 = (undefined8 *)&stack0xffffffffffffffb0;
      lVar9 = lStack_70;
      lVar13 = lStack_80;
      pppuVar17 = (undefined8 ***)ppuStack_60;
      puVar18 = puStack_58;
    }
    else {
      if (*(long *)(lVar8 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar8 + 0x18),0,0);
        if (*(long *)(lVar8 + 0x20) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x20),1,0);
          if (*(long *)(lVar8 + 0x30) != 0) {
            Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked
                      (*(long *)(lVar8 + 0x30),0);
            if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar1 = **(undefined4 **)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8);
            goto code_r0x0151c104;
          }
        }
      }
      auVar21 = func_0x00f78af4();
      puVar18 = &Atlas_UI_UILeagueRewardBehaviour__PlayAnimation;
    }
  }
  else {
    auVar20._8_8_ = 0x3d25578;
    auVar20._0_8_ = lVar8;
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar21._8_4_ = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
    auVar21._0_8_ = lVar8;
    auVar21._12_4_ = 0;
    puVar3 = &uStack_90;
    puVar18 = &UNK_0151c030;
  }
  uVar16 = auVar21._8_8_;
  lVar14 = auVar21._0_8_;
  *(long *)((long)puVar3 + -0x20) = lVar9;
  *(long *)((long)puVar3 + -0x18) = auVar20._0_8_;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar17;
  *(undefined **)((long)puVar3 + -8) = puVar18;
  uVar15 = auVar20._0_8_;
  if (*(long *)(lVar14 + 0x18) != 0) {
    uVar7 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar14 + 0x18),0,uVar16,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    uVar15 = uVar16;
    if (*(long *)(lVar14 + 0x18) != 0) {
      /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(lVar14 + 0x18),1,0);
      if (*(long *)(lVar14 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar14 + 0x18),1,0);
        lVar9 = *(long *)(lVar14 + 0x18);
        if (lVar9 != 0) {
          *(undefined8 *)((long)puVar3 + -0x40) = unaff_d9;
          *(undefined8 *)((long)puVar3 + -0x38) = unaff_d8;
          *(long *)((long)puVar3 + -0x30) = lVar13;
          *(long *)((long)puVar3 + -0x28) = auVar20._8_8_;
          *(undefined8 *)((long)puVar3 + -0x20) = *(undefined8 *)((long)puVar3 + -0x20);
          *(undefined8 *)((long)puVar3 + -0x18) = *(undefined8 *)((long)puVar3 + -0x18);
          *(undefined8 *)((long)puVar3 + -0x10) = *(undefined8 *)((long)puVar3 + -0x10);
          *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
          if (pcRam0000000003ebe318 == (code *)0x0) {
            pcRam0000000003ebe318 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*pcRam0000000003ebe318)(0,lVar9,uVar16,0);
          return uVar7;
        }
      }
    }
  }
  auVar21 = func_0x00f78af4();
  *(long *)((long)puVar3 + -0x50) = lVar13;
  *(long *)((long)puVar3 + -0x48) = auVar20._8_8_;
  *(long *)((long)puVar3 + -0x40) = lVar14;
  *(undefined8 *)((long)puVar3 + -0x38) = uVar15;
  *(undefined1 **)((long)puVar3 + -0x30) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0x28) = &Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation;
  if ((bRam0000000003eb4df8 & 1) == 0) {
    func_0x00f78a20(0x3d29468);
    bRam0000000003eb4df8 = 1;
  }
  uVar7 = func_0x00f78aec(/*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21_TypeInfo*/ uRam0000000003d29468);
  /*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21$$.ctor*/ func_0x0156cd74(uVar7,0,0);
  if (uVar7 != 0) {
    *(long *)(uVar7 + 0x28) = auVar21._0_8_;
    *(int *)(uVar7 + 0x20) = auVar21._8_4_;
    return uVar7;
  }
  func_0x00f78af4();
  *(undefined1 (*) [16])((long)puVar3 + -0x70) = auVar21;
  *(undefined1 **)((long)puVar3 + -0x60) = (undefined1 *)((long)puVar3 + -0x30);
  *(undefined **)((long)puVar3 + -0x58) = &Atlas_UI_UILeagueRewardBehaviour__PlaySound;
  uVar7 = Atlas_Audio_UIAudio__IsPlaying(extraout_x1);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  *(undefined8 *)((long)puVar3 + -0x80) = 0x3d29468;
  *(undefined8 *)((long)puVar3 + -0x78) = 0;
  *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0x70);
  *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)((long)puVar3 + -0x68);
  *(undefined8 *)((long)puVar3 + -0x60) = *(undefined8 *)((long)puVar3 + -0x60);
  *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)((long)puVar3 + -0x58);
  uVar15 = 0x3eb4000;
  uVar7 = extraout_x1;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar7 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar7;
  }
  lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar9 != 0) {
    uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,extraout_x1,uRam0000000003d2faf8);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
       (uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,extraout_x1,uRam0000000003d2fb00), uVar7 != 0)) {
      *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0x70);
      *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)((long)puVar3 + -0x68);
      *(undefined8 *)((long)puVar3 + -0x60) = *(undefined8 *)((long)puVar3 + -0x60);
      *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)((long)puVar3 + -0x58);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar7,0,0);
      return uVar7;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)puVar3 + -0xc0) = unaff_d9;
  *(undefined8 *)((long)puVar3 + -0xb8) = unaff_d8;
  *(undefined8 *)((long)puVar3 + -0xb0) = 0x3d29468;
  *(undefined8 *)((long)puVar3 + -0xa8) = 0x3eb4000;
  *(undefined8 *)((long)puVar3 + -0xa0) = 0x3d25580;
  *(ulong *)((long)puVar3 + -0x98) = extraout_x1;
  *(undefined1 **)((long)puVar3 + -0x90) = (undefined1 *)((long)puVar3 + -0x60);
  *(code **)((long)puVar3 + -0x88) = Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar5 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
  if ((plVar5 != (long *)0x0) && (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar12 = func_0x00f78e5c(plVar5);
    *(long **)((long)puVar3 + -0xe0) = plVar5;
    *(long **)((long)puVar3 + -0xd8) = plVar6;
    *(undefined1 **)((long)puVar3 + -0xd0) = (undefined1 *)((long)puVar3 + -0x90);
    *(code **)((long)puVar3 + -200) = Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar9 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
    uVar16 = *(undefined8 *)((long)puVar3 + -0xe0);
    *(undefined8 *)((long)puVar3 + -0xf0) = 0x3d29468;
    *(undefined8 *)((long)puVar3 + -0xe8) = 0x3eb4000;
    *(undefined8 *)((long)puVar3 + -0xe0) = uVar16;
    *(undefined8 *)((long)puVar3 + -0xd8) = *(undefined8 *)((long)puVar3 + -0xd8);
    *(undefined8 *)((long)puVar3 + -0xd0) = *(undefined8 *)((long)puVar3 + -0xd0);
    *(undefined8 *)((long)puVar3 + -200) = *(undefined8 *)((long)puVar3 + -200);
    if (lVar9 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar11,uVar12,0);
    }
    else {
      uVar15 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar7 = (*pcRam0000000003ec01d0)(uVar12);
      if ((uVar7 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*pcRam0000000003ec01e0)(uVar12,lVar9);
        return uVar7;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar11 = func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar16,0);
      uVar16 = uVar12;
    }
    uVar12 = func_0x00f78a24(0x3d5a8a8);
    auVar20 = func_0x00f78ac0(uVar11,uVar12);
    *(undefined8 *)((long)puVar3 + -0x120) = 0x3d29468;
    *(undefined8 *)((long)puVar3 + -0x118) = uVar15;
    *(undefined8 *)((long)puVar3 + -0x110) = uVar16;
    *(undefined8 *)((long)puVar3 + -0x108) = uVar11;
    *(undefined1 **)((long)puVar3 + -0x100) = (undefined1 *)((long)puVar3 + -0xd0);
    *(undefined **)((long)puVar3 + -0xf8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*pcRam0000000003ec01e0)(auVar20._0_8_,auVar20._8_8_);
    return uVar7;
  }
  fVar19 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar15 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar19 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar5,4,0);
  uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar15,uRam0000000003d5e780);
  *(undefined8 *)((long)puVar3 + -0xf0) = 0x3d5e780;
  *(undefined8 *)((long)puVar3 + -0xe8) = 0x3d5e868;
  *(long **)((long)puVar3 + -0xe0) = plVar5;
  *(long **)((long)puVar3 + -0xd8) = plVar6;
  *(undefined1 **)((long)puVar3 + -0xd0) = (undefined1 *)((long)puVar3 + -0x90);
  *(undefined8 *)((long)puVar3 + -200) = 0x1513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar6,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar4 != 0) {
      lVar9 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto code_r0x018eef34;
        uVar15 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar20 = func_0x00f78af4();
          uVar10 = auVar20._0_8_;
          *(undefined8 *)((long)puVar3 + -0x120) = 0x3d5e780;
          *(long *)((long)puVar3 + -0x118) = lVar9;
          *(long **)((long)puVar3 + -0x110) = plVar6;
          *(ulong *)((long)puVar3 + -0x108) = uVar7;
          *(undefined1 **)((long)puVar3 + -0x100) = (undefined1 *)((long)puVar3 + -0xd0);
          *(undefined **)((long)puVar3 + -0xf8) =
               &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar10,auVar20._8_8_,cVar2 != '\0',0);
          }
          return uVar10;
        }
        uVar15 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      *(undefined8 *)(uVar7 + 200) = uVar15;
    }
    *(long **)(uVar7 + 0x48) = plVar6;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x151bfb0 | Atlas.UI.UILeagueRewardBehaviour.PlayAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x0151c02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151c048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0151c04c) */
/* WARNING: Removing unreachable block (ram,0x0151c030) */
/* WARNING: Removing unreachable block (ram,0x0151c038) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILeagueRewardBehaviour__PlayAnimation
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong extraout_x1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4df5 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4df5 = 1;
  }
  uVar9 = param_4;
  if (((int)param_5 == 0) || ((int)param_6 == 0)) {
    if ((int)param_5 == 0) {
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = *(uint *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
code_r0x0151c104:
      uVar13 = (ulong)uVar2;
    }
    else {
      if (*(long *)(param_4 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_4 + 0x18),0,0);
        if (*(long *)(param_4 + 0x20) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_4 + 0x20),1,0);
          if (*(long *)(param_4 + 0x30) != 0) {
            Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked
                      (*(long *)(param_4 + 0x30),0);
            if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = **(uint **)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8);
            goto code_r0x0151c104;
          }
        }
      }
      unaff_x30 = &Atlas_UI_UILeagueRewardBehaviour__PlayAnimation;
      auVar16 = func_0x00f78af4();
      uVar13 = auVar16._8_8_;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      uVar9 = auVar16._0_8_;
      unaff_x19 = param_4;
      unaff_x20 = param_7;
      unaff_x21 = param_5;
      unaff_x22 = param_6;
      unaff_x29 = puVar1;
    }
  }
  else {
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = (ulong)*(uint *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
    unaff_x30 = (undefined *)0x151c030;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_4;
    unaff_x20 = param_7;
    unaff_x21 = 0x3d25578;
    unaff_x22 = param_6;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(long *)(uVar9 + 0x18) != 0) {
    uVar7 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(uVar9 + 0x18),0,uVar13,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    unaff_x19 = uVar13;
    if (*(long *)(uVar9 + 0x18) != 0) {
      /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(uVar9 + 0x18),1,0);
      if (*(long *)(uVar9 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(uVar9 + 0x18),1,0);
        lVar8 = *(long *)(uVar9 + 0x18);
        if (lVar8 != 0) {
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
          *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
          *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x20) =
               *(undefined8 *)((long)register0x00000008 + -0x20);
          *(undefined8 *)((long)register0x00000008 + -0x18) =
               *(undefined8 *)((long)register0x00000008 + -0x18);
          *(undefined8 *)((long)register0x00000008 + -0x10) =
               *(undefined8 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          if (pcRam0000000003ebe318 == (code *)0x0) {
            pcRam0000000003ebe318 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (*pcRam0000000003ebe318)(0,lVar8,uVar13,0);
          return uVar9;
        }
      }
    }
  }
  auVar16 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x40) = uVar9;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation;
  if ((bRam0000000003eb4df8 & 1) == 0) {
    func_0x00f78a20(0x3d29468);
    bRam0000000003eb4df8 = 1;
  }
  uVar9 = func_0x00f78aec(/*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21_TypeInfo*/ uRam0000000003d29468);
  /*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21$$.ctor*/ func_0x0156cd74(uVar9,0,0);
  if (uVar9 != 0) {
    *(long *)(uVar9 + 0x28) = auVar16._0_8_;
    *(int *)(uVar9 + 0x20) = auVar16._8_4_;
    return uVar9;
  }
  func_0x00f78af4();
  *(undefined1 (*) [16])((long)register0x00000008 + -0x70) = auVar16;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_UILeagueRewardBehaviour__PlaySound;
  uVar9 = Atlas_Audio_UIAudio__IsPlaying(extraout_x1);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d29468;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  uVar14 = 0x3eb4000;
  uVar9 = extraout_x1;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar9 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar9;
  }
  lVar8 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar8 != 0) {
    uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar8,extraout_x1,uRam0000000003d2faf8);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar8 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar8 != 0)) &&
       (uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar8,extraout_x1,uRam0000000003d2fb00), uVar9 != 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,0,0);
      return uVar9;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3d29468;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d25580;
  *(ulong *)((long)register0x00000008 + -0x98) = extraout_x1;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5,0);
  if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar12 = func_0x00f78e5c(plVar6);
    *(long **)((long)register0x00000008 + -0xe0) = plVar6;
    *(long **)((long)register0x00000008 + -0xd8) = plVar5;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x90);
    *(code **)((long)register0x00000008 + -200) =
         Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar8 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d29468;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0xd8) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(undefined8 *)((long)register0x00000008 + -0xd0) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)((long)register0x00000008 + -200);
    if (lVar8 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar10 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar12,0);
    }
    else {
      uVar14 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar9 = (*pcRam0000000003ec01d0)(uVar12);
      if ((uVar9 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*pcRam0000000003ec01e0)(uVar12,lVar8);
        return uVar9;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar11,0);
      uVar11 = uVar12;
    }
    uVar12 = func_0x00f78a24(0x3d5a8a8);
    auVar16 = func_0x00f78ac0(uVar10,uVar12);
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d29468;
    *(undefined8 *)((long)register0x00000008 + -0x118) = uVar14;
    *(undefined8 *)((long)register0x00000008 + -0x110) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar10;
    *(undefined1 **)((long)register0x00000008 + -0x100) =
         (undefined1 *)((long)register0x00000008 + -0xd0);
    *(undefined **)((long)register0x00000008 + -0xf8) =
         &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec01e0)(auVar16._0_8_,auVar16._8_8_);
    return uVar9;
  }
  fVar15 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar14 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar15 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar6,4,0);
  uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar14,uRam0000000003d5e780);
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d5e780;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3d5e868;
  *(long **)((long)register0x00000008 + -0xe0) = plVar6;
  *(long **)((long)register0x00000008 + -0xd8) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -200) = 0x1513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar9 != 0) && (*(char *)(uVar9 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar4 != 0) {
      lVar8 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
      if ((uVar13 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar14 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar8 == 0) {
code_r0x018eef34:
          auVar16 = func_0x00f78af4();
          uVar13 = auVar16._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d5e780;
          *(long *)((long)register0x00000008 + -0x118) = lVar8;
          *(long **)((long)register0x00000008 + -0x110) = plVar5;
          *(ulong *)((long)register0x00000008 + -0x108) = uVar9;
          *(undefined1 **)((long)register0x00000008 + -0x100) =
               (undefined1 *)((long)register0x00000008 + -0xd0);
          *(undefined **)((long)register0x00000008 + -0xf8) =
               &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar13 != 0) && (*(char *)(uVar13 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar3 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar13,auVar16._8_8_,cVar3 != '\0',0);
          }
          return uVar13;
        }
        uVar14 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar8,0);
      }
      *(undefined8 *)(uVar9 + 200) = uVar14;
    }
    *(long **)(uVar9 + 0x48) = plVar5;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x151c120 | Atlas.UI.UILeagueRewardBehaviour.PlayAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILeagueRewardBehaviour__PlayAnimation
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5
                )

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  if (*(long *)(param_4 + 0x18) != 0) {
    uVar6 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(param_4 + 0x18),0,param_5,0);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (*(long *)(param_4 + 0x18) != 0) {
      /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(param_4 + 0x18),1,0);
      if (*(long *)(param_4 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_4 + 0x18),1,0);
        lVar7 = *(long *)(param_4 + 0x18);
        if (lVar7 != 0) {
          if (pcRam0000000003ebe318 == (code *)0x0) {
            pcRam0000000003ebe318 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*pcRam0000000003ebe318)(0,lVar7,param_5,0);
          return uVar6;
        }
      }
    }
  }
  auVar12 = func_0x00f78af4();
  if ((bRam0000000003eb4df8 & 1) == 0) {
    func_0x00f78a20(0x3d29468);
    bRam0000000003eb4df8 = 1;
  }
  uVar6 = func_0x00f78aec(/*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21_TypeInfo*/ uRam0000000003d29468);
  /*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21$$.ctor*/ func_0x0156cd74(uVar6,0,0);
  if (uVar6 != 0) {
    *(long *)(uVar6 + 0x28) = auVar12._0_8_;
    *(int *)(uVar6 + 0x20) = auVar12._8_4_;
    return uVar6;
  }
  func_0x00f78af4();
  uVar6 = Atlas_Audio_UIAudio__IsPlaying(extraout_x1);
  if ((uVar6 & 1) != 0) {
    return uVar6;
  }
  uVar6 = extraout_x1;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar6 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar6;
  }
  lVar7 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar7 != 0) {
    uVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar7,extraout_x1,uRam0000000003d2faf8);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar7 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar7 != 0)) &&
       (uVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar7,extraout_x1,uRam0000000003d2fb00), uVar6 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar6,0,0);
      return uVar6;
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
    uVar5 = func_0x00f78e5c(plVar4);
    lVar7 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
    if (lVar7 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar9 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar5,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar6 = (*pcRam0000000003ec01d0)(uVar5);
      if ((uVar6 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcRam0000000003ec01e0)(uVar5,lVar7);
        return uVar6;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar5,0);
    }
    uVar5 = func_0x00f78a24(0x3d5a8a8);
    auVar11 = func_0x00f78ac0(uVar9,uVar5);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return uVar6;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar4,4,0);
  uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar5,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar3,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar7 = func_0x00f78adc(plVar3,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto code_r0x018eef34;
        uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      }
      else {
        if (lVar7 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          uVar6 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar6,auVar11._8_8_,cVar1 != '\0',0);
          }
          return uVar6;
        }
        uVar5 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar7,0);
      }
      *(undefined8 *)(uVar6 + 200) = uVar5;
    }
    *(long **)(uVar6 + 0x48) = plVar3;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x151c1ac | Atlas.UI.UILeagueRewardBehaviour.PlayDelayedAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4df8 & 1) == 0) {
    func_0x00f78a20(0x3d29468);
    bRam0000000003eb4df8 = 1;
  }
  uVar7 = func_0x00f78aec(/*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21_TypeInfo*/ uRam0000000003d29468);
  /*Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21$$.ctor*/ func_0x0156cd74(uVar7,0,0);
  if (uVar7 != 0) {
    *(undefined8 *)(uVar7 + 0x28) = param_4;
    *(undefined4 *)(uVar7 + 0x20) = param_5;
    return uVar7;
  }
  func_0x00f78af4();
  uVar7 = Atlas_Audio_UIAudio__IsPlaying(extraout_x1);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  uVar7 = extraout_x1;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar7 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar7;
  }
  lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,extraout_x1,uRam0000000003d2faf8);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
       (uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,extraout_x1,uRam0000000003d2fb00), uVar7 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar7,0,0);
      return uVar7;
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
    lVar3 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
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
      uVar7 = (*pcRam0000000003ec01d0)(uVar6);
      if ((uVar7 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*pcRam0000000003ec01e0)(uVar6,lVar3);
        return uVar7;
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
    uVar7 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return uVar7;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar5,4,0);
  uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar6,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar4,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
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
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto code_r0x018eef34;
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      else {
        if (lVar3 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          uVar7 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar7,auVar11._8_8_,cVar1 != '\0',0);
          }
          return uVar7;
        }
        uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar3,0);
      }
      *(undefined8 *)(uVar7 + 200) = uVar6;
    }
    *(long **)(uVar7 + 0x48) = plVar4;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x151c228 | Atlas.UI.UILeagueRewardBehaviour.PlaySound
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILeagueRewardBehaviour__PlaySound
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                ulong param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  uVar7 = Atlas_Audio_UIAudio__IsPlaying(param_5);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  uVar7 = param_5;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar7 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar7;
  }
  lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,param_5,uRam0000000003d2faf8);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
       (uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,param_5,uRam0000000003d2fb00), uVar7 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar7,0,0);
      return uVar7;
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
    lVar3 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
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
      uVar7 = (*pcRam0000000003ec01d0)(uVar6);
      if ((uVar7 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*pcRam0000000003ec01e0)(uVar6,lVar3);
        return uVar7;
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
    uVar7 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return uVar7;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar5,4,0);
  uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar6,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar4,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
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
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto code_r0x018eef34;
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      else {
        if (lVar3 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          uVar7 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar7,auVar11._8_8_,cVar1 != '\0',0);
          }
          return uVar7;
        }
        uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar3,0);
      }
      *(undefined8 *)(uVar7 + 200) = uVar6;
    }
    *(long **)(uVar7 + 0x48) = plVar4;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x151c260 | Atlas.UI.UILeagueRewardBehaviour.Wiggle
// ============================================================

/* WARNING: Possible PIC construction at 0x0151c338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151c380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151c33c) */
/* WARNING: Removing unreachable block (ram,0x0151c384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UILeagueRewardBehaviour__Wiggle
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003eb4df6 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4df6 = 1;
  }
  plVar3 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      uVar4 = func_0x00f78e5c(plVar3);
      lVar5 = /*Atlas.UI.UILeagueRewardBehaviour$$AnimateStars*/ func_0x0151c408();
      if (lVar5 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar8 = func_0x00f78aec();
        uVar4 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar8,uVar4,0);
      }
      else {
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar7 = (*pcRam0000000003ec01d0)(uVar4);
        if ((uVar7 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (*pcRam0000000003ec01e0)(uVar4,lVar5);
          return lVar5;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar8 = func_0x00f78aec();
        uVar4 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar4,0);
      }
      uVar4 = func_0x00f78a24(0x3d5a8a8);
      auVar10 = func_0x00f78ac0(uVar8,uVar4);
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (*pcRam0000000003ec01e0)(auVar10._0_8_,auVar10._8_8_);
      return lVar5;
    }
  }
  fVar9 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar9 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,plVar3
                          ,4,0);
  lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar4,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,param_4,uRam0000000003d5e868);
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
      lVar6 = func_0x00f78adc(param_4,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
      if ((uVar7 & 1) == 0) {
        if (param_4 == (long *)0x0) goto code_r0x018eef34;
        uVar4 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
      }
      else {
        if (lVar6 == 0) {
code_r0x018eef34:
          auVar10 = func_0x00f78af4();
          lVar5 = auVar10._0_8_;
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
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar5,auVar10._8_8_,cVar1 != '\0',0);
          }
          return lVar5;
        }
        uVar4 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar6,0);
      }
      *(undefined8 *)(lVar5 + 200) = uVar4;
    }
    *(long **)(lVar5 + 0x48) = param_4;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x151c3dc | Atlas.UI.UILeagueRewardBehaviour.PlayStarsAnimation
// ============================================================

void Atlas_UI_UILeagueRewardBehaviour__PlayStarsAnimation(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = /*Atlas.UI.UILeagueRewardBehaviour$$AnimateStars*/ func_0x0151c408();
  if (lVar1 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar2 = (*pcRam0000000003ec01d0)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec01e0)(param_1,lVar1);
      return;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar3,uVar4,0);
  }
  uVar4 = func_0x00f78a24(0x3d5a8a8);
  auVar5 = func_0x00f78ac0(uVar3,uVar4);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e0)(auVar5._0_8_,auVar5._8_8_);
  return;
}



// ============================================================
// RVA: 0x151c408 | Atlas.UI.UILeagueRewardBehaviour.AnimateStars
// ============================================================

long Atlas_UI_UILeagueRewardBehaviour__AnimateStars(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4df7 & 1) == 0) {
    func_0x00f78a20(0x3d29460);
    bRam0000000003eb4df7 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20_TypeInfo*/ uRam0000000003d29460);
  /*Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20$$.ctor*/ func_0x0156caa0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x151c47c | Atlas.UI.UILeagueRewardBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UILeagueRewardBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



