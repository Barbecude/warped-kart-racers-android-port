// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeRewardBehaviour

// ============================================================
// RVA: 0x1513240 | Atlas.UI.UIArcadeRewardBehaviour.get_UnlockAnimationLength
// ============================================================

undefined4 Atlas_UI_UIArcadeRewardBehaviour__get_UnlockAnimationLength(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1513248 | Atlas.UI.UIArcadeRewardBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_UIArcadeRewardBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1513250 | Atlas.UI.UIArcadeRewardBehaviour.get_ToolTipData
// ============================================================

undefined8 Atlas_UI_UIArcadeRewardBehaviour__get_ToolTipData(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1513258 | Atlas.UI.UIArcadeRewardBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x01513384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015133c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015135bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015135d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015135c0) */
/* WARNING: Removing unreachable block (ram,0x015135c8) */
/* WARNING: Removing unreachable block (ram,0x015133cc) */
/* WARNING: Removing unreachable block (ram,0x01513388) */
/* WARNING: Removing unreachable block (ram,0x01513398) */
/* WARNING: Removing unreachable block (ram,0x015133a0) */
/* WARNING: Removing unreachable block (ram,0x015133a4) */
/* WARNING: Removing unreachable block (ram,0x015133c0) */
/* WARNING: Removing unreachable block (ram,0x015135dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIArcadeRewardBehaviour__Set
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,undefined8 param_7,undefined8 *****param_8,
               undefined8 param_9,undefined8 ******param_10)

{
  undefined8 ******ppppppuVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *****pppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined *puVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 ******ppppppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  
  pppppuVar14 = param_8;
  if ((bRam0000000003eb4d88 & 1) == 0) {
    func_0x00f78a20(0x3d23058);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4d88 = 1;
  }
  uVar13 = *(undefined8 *)(param_5 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
  if (iVar3 == 0) {
LAB_0151335c:
    param_6 = *(long *)(param_5 + 0x48);
    uVar13 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(param_5 + 0x18,param_9,0);
    auVar23._8_8_ = uVar13;
    auVar23._0_8_ = param_6;
    if (param_6 == 0) goto LAB_015133ec;
    param_10 = (undefined8 ******)0x3d25000;
    puVar18 = (undefined *)0x1513388;
  }
  else {
    if ((param_10 != (undefined8 ******)0x0) && (param_10[4] != (undefined8 *****)0x0)) {
      pppppuVar14 = param_10[10];
      ppppuVar15 = param_10[4][2];
      pppppuVar16 = param_10[0x11];
      param_10 = (undefined8 ******)func_0x00f78aec(/*Atlas.UI.LoadoutMetagameData_TypeInfo*/ uRam0000000003d23058);
      Atlas_UI_LoadoutMetagameData___ctor
                (param_10,param_6,param_6,pppppuVar14,ppppuVar15,pppppuVar16,0);
      plVar4 = *(long **)(param_5 + 0x50);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x188))(plVar4,param_10,*(undefined8 *)(*plVar4 + 400));
        goto LAB_0151335c;
      }
    }
LAB_015133ec:
    puVar18 = &Atlas_UI_UIIconAndValueBehaviour__SetImage;
    auVar23 = func_0x00f78af4();
  }
  lVar10 = auVar23._8_8_;
  uStack_90 = param_9;
  lStack_88 = param_5;
  uStack_80 = param_7;
  pppppuStack_78 = param_8;
  pppppuStack_70 = (undefined8 *****)&stack0xfffffffffffffff0;
  puStack_68 = puVar18;
  if ((bRam0000000003eb4ded & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ded = 1;
  }
  uVar13 = *(undefined8 *)(auVar23._0_8_ + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
  uVar11 = uStack_90;
  if ((int)lVar5 == 0) {
    return lVar5;
  }
  plVar4 = *(long **)(auVar23._0_8_ + 0x18);
  if (plVar4 == (long *)0x0) {
    auVar23 = func_0x00f78af4();
    uStack_c0 = 0x3d23990;
    puStack_98 = &Atlas_UI_UIIconAndValueBehaviour__Set;
    uStack_b8 = uVar13;
    ppppppuStack_a0 = &pppppuStack_70;
    if ((bRam0000000003eb4dec & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4dec = 1;
    }
    uVar13 = *(undefined8 *)(auVar23._0_8_ + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = 0;
    lVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0);
    if ((int)lVar10 == 0) {
      return lVar10;
    }
    plVar4 = *(long **)(auVar23._0_8_ + 0x20);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01513528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar10 = (**(code **)(*plVar4 + 0x558))(plVar4,auVar23._8_8_,*(undefined8 *)(*plVar4 + 0x560))
      ;
      return lVar10;
    }
    auVar24 = func_0x00f78af4();
    lVar10 = auVar24._0_8_;
    ppppppuVar1 = &ppppppuStack_100;
    uStack_f0 = 0x3d23990;
    puStack_c8 = &Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation;
    ppppppuStack_100 = param_10;
    lStack_f8 = param_6;
    lStack_e8 = uVar13;
    pppppppuStack_d0 = &ppppppuStack_a0;
    auStack_e0 = auVar23;
    if ((bRam0000000003eb4d89 & 1) == 0) {
      func_0x00f78a20(0x3d25578);
      bRam0000000003eb4d89 = 1;
    }
    pppppppuVar17 = &pppppppuStack_d0;
    if ((auVar24._8_4_ != 0) && ((int)uVar11 != 0)) {
      auVar24._8_8_ = 0x3d25578;
      auVar24._0_8_ = lVar10;
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar25._8_4_ = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
      auVar25._0_8_ = lVar10;
      auVar25._12_4_ = 0;
      ppppppuVar1 = &ppppppuStack_100;
      puVar18 = &UNK_015135c0;
      goto code_r0x015136b0;
    }
    if (auVar24._8_4_ == 0) {
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
code_r0x01513694:
      auVar24._8_8_ = lStack_e8;
      auVar24._0_8_ = auStack_e0._8_8_;
      auVar25._8_4_ = uVar19;
      auVar25._0_8_ = lVar10;
      auVar25._12_4_ = 0;
      ppppppuVar1 = (undefined8 ******)&uStack_c0;
      pppppuVar14 = (undefined8 *****)auStack_e0._0_8_;
      uVar11 = uStack_f0;
      pppppppuVar17 = pppppppuStack_d0;
      puVar18 = puStack_c8;
    }
    else {
      if (*(long *)(lVar10 + 0x38) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar10 + 0x38),0,0);
        if (*(long *)(lVar10 + 0x40) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar10 + 0x40),1,0);
          if (*(long *)(lVar10 + 0x50) != 0) {
            Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked
                      (*(long *)(lVar10 + 0x50),0);
            if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar19 = **(undefined4 **)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8);
            goto code_r0x01513694;
          }
        }
      }
      auVar25 = func_0x00f78af4();
      puVar18 = &Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation;
    }
code_r0x015136b0:
    uVar12 = auVar25._8_8_;
    lVar10 = auVar25._0_8_;
    *(undefined8 ******)((long)ppppppuVar1 + -0x20) = pppppuVar14;
    *(long *)((long)ppppppuVar1 + -0x18) = auVar24._0_8_;
    *(undefined8 ********)((long)ppppppuVar1 + -0x10) = pppppppuVar17;
    *(undefined **)((long)ppppppuVar1 + -8) = puVar18;
    uVar13 = auVar24._0_8_;
    if (*(long *)(lVar10 + 0x38) != 0) {
      lVar5 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar10 + 0x38),0,uVar12,0);
      if ((int)lVar5 == 0) {
        return lVar5;
      }
      uVar13 = uVar12;
      if (*(long *)(lVar10 + 0x38) != 0) {
        /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(lVar10 + 0x38),1,0);
        if (*(long *)(lVar10 + 0x38) != 0) {
          /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar10 + 0x38),1,0);
          lVar5 = *(long *)(lVar10 + 0x38);
          if (lVar5 != 0) {
            *(undefined8 *)((long)ppppppuVar1 + -0x40) = unaff_d9;
            *(undefined8 *)((long)ppppppuVar1 + -0x38) = unaff_d8;
            *(undefined8 *)((long)ppppppuVar1 + -0x30) = uVar11;
            *(long *)((long)ppppppuVar1 + -0x28) = auVar24._8_8_;
            *(undefined8 *)((long)ppppppuVar1 + -0x20) = *(undefined8 *)((long)ppppppuVar1 + -0x20);
            *(undefined8 *)((long)ppppppuVar1 + -0x18) = *(undefined8 *)((long)ppppppuVar1 + -0x18);
            *(undefined8 *)((long)ppppppuVar1 + -0x10) = *(undefined8 *)((long)ppppppuVar1 + -0x10);
            *(undefined8 *)((long)ppppppuVar1 + -8) = *(undefined8 *)((long)ppppppuVar1 + -8);
            if (pcRam0000000003ebe318 == (code *)0x0) {
              pcRam0000000003ebe318 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar10 = (*pcRam0000000003ebe318)(0,lVar5,uVar12,0);
            return lVar10;
          }
        }
      }
    }
    auVar23 = func_0x00f78af4();
    *(undefined8 *)((long)ppppppuVar1 + -0x50) = uVar11;
    *(long *)((long)ppppppuVar1 + -0x48) = auVar24._8_8_;
    *(long *)((long)ppppppuVar1 + -0x40) = lVar10;
    *(undefined8 *)((long)ppppppuVar1 + -0x38) = uVar13;
    *(undefined1 **)((long)ppppppuVar1 + -0x30) = (undefined1 *)((long)ppppppuVar1 + -0x10);
    *(undefined **)((long)ppppppuVar1 + -0x28) =
         &Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation;
    if ((bRam0000000003eb4d8d & 1) == 0) {
      func_0x00f78a20(0x3d29438);
      bRam0000000003eb4d8d = 1;
    }
    lVar10 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26_TypeInfo*/ uRam0000000003d29438);
    /*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26$$.ctor*/ func_0x0156c2d0(lVar10,0,0);
    if (lVar10 == 0) {
      uVar11 = func_0x00f78af4();
      *(undefined1 (*) [16])((long)ppppppuVar1 + -0x70) = auVar23;
      *(undefined1 **)((long)ppppppuVar1 + -0x60) = (undefined1 *)((long)ppppppuVar1 + -0x30);
      *(undefined **)((long)ppppppuVar1 + -0x58) =
           &Atlas_UI_UIArcadeRewardBehaviour__PlayCoinCountAnimation;
      lVar10 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateMedalCount*/ func_0x015137e4();
      uVar13 = *(undefined8 *)((long)ppppppuVar1 + -0x70);
      *(undefined8 *)((long)ppppppuVar1 + -0x80) = 0x3d29438;
      *(undefined8 *)((long)ppppppuVar1 + -0x78) = 0;
      *(undefined8 *)((long)ppppppuVar1 + -0x70) = uVar13;
      *(undefined8 *)((long)ppppppuVar1 + -0x68) = *(undefined8 *)((long)ppppppuVar1 + -0x68);
      *(undefined8 *)((long)ppppppuVar1 + -0x60) = *(undefined8 *)((long)ppppppuVar1 + -0x60);
      *(undefined8 *)((long)ppppppuVar1 + -0x58) = *(undefined8 *)((long)ppppppuVar1 + -0x58);
      if (lVar10 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar6 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar6,uVar11,0);
        uVar12 = 0;
      }
      else {
        uVar12 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar8 = (*pcRam0000000003ec01d0)(uVar11);
        if ((uVar8 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (*pcRam0000000003ec01e0)(uVar11,lVar10);
          return lVar10;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar6 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar6,uVar13,0);
        uVar13 = uVar11;
      }
      uVar11 = func_0x00f78a24(0x3d5a8a8);
      auVar23 = func_0x00f78ac0(uVar6,uVar11);
      *(undefined8 *)((long)ppppppuVar1 + -0xb0) = 0x3d29438;
      *(undefined8 *)((long)ppppppuVar1 + -0xa8) = uVar12;
      *(undefined8 *)((long)ppppppuVar1 + -0xa0) = uVar13;
      *(undefined8 *)((long)ppppppuVar1 + -0x98) = uVar6;
      *(undefined1 **)((long)ppppppuVar1 + -0x90) = (undefined1 *)((long)ppppppuVar1 + -0x60);
      *(undefined **)((long)ppppppuVar1 + -0x88) =
           &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar10 = (*pcRam0000000003ec01e0)(auVar23._0_8_,auVar23._8_8_);
      return lVar10;
    }
    *(long *)(lVar10 + 0x28) = auVar23._0_8_;
    *(int *)(lVar10 + 0x20) = auVar23._8_4_;
    return lVar10;
  }
  ppppppuStack_a0 = param_10;
  puStack_98 = (undefined *)param_6;
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar10,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar5 = plVar4[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
  if (iVar3 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
    if (lVar10 != 0) {
      uVar19 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar10,0);
      uStack_c0 = CONCAT44(param_2,uVar19);
      uStack_b8 = CONCAT44(param_4,param_3);
      fVar20 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_c0,0);
      fVar22 = param_2;
      fVar21 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar4 + 6) =
           (fVar20 - fVar21) * (fVar20 - fVar21) + (param_2 - fVar22) * (param_2 - fVar22) <
           _UNK_033f8490;
      lVar5 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar10,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = 0;
code_r0x032c2400:
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,uVar13,0);
      *(undefined1 *)((long)plVar4 + 0x31) = uVar2;
      plVar4[0x1a] = lVar10;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      puStack_c8 = &UNK_032c242c;
      plVar9 = plVar4;
      goto code_r0x032c244c;
    }
  }
  else {
    lVar5 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,lVar10,0);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
    if (plVar4[0x1a] != 0) {
      uVar19 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar4[0x1a],0);
      uStack_c0 = CONCAT44(param_2,uVar19);
      uStack_b8 = CONCAT44(param_4,param_3);
      fVar20 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_c0,0);
      fVar22 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
      if ((uVar8 & 1) == 0) {
        fVar21 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar10 == 0) goto code_r0x032c2448;
        uVar19 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar10,0);
        uStack_c0 = CONCAT44(fVar22,uVar19);
        uStack_b8 = CONCAT44(param_4,param_3);
        fVar21 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_c0,0);
      }
      *(bool *)(plVar4 + 6) = fVar20 == fVar21 && param_2 == fVar22;
      if (plVar4[0x1a] != 0) {
        lVar5 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar4[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
        uVar13 = 0;
        if (iVar3 != 0) {
          uVar11 = uVar13;
          if (lVar10 == 0) goto code_r0x032c2448;
          uVar13 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar10,0);
        }
        uVar11 = uVar13;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  puStack_c8 = &UnityEngine_UI_Image__TrackSprite;
  plVar9 = (long *)func_0x00f78af4();
code_r0x032c244c:
  uStack_f0 = uVar11;
  lStack_e8 = lVar5;
  auStack_e0._0_8_ = lVar10;
  auStack_e0._8_8_ = plVar4;
  pppppppuStack_d0 = (undefined8 *******)&pppppuStack_70;
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar13 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar9);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
  if ((int)lVar10 != 0) {
    lVar10 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar9);
    if (lVar10 == 0) {
      lVar10 = func_0x00f78af4();
      *(undefined2 *)(lVar10 + 0x30) = 0;
      return lVar10;
    }
    uVar13 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar10,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
    if ((int)lVar10 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar9);
      *(undefined1 *)((long)plVar9 + 0xfc) = 1;
    }
  }
  return lVar10;
}



// ============================================================
// RVA: 0x1513540 | Atlas.UI.UIArcadeRewardBehaviour.PlayAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x015135bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015135d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015135c0) */
/* WARNING: Removing unreachable block (ram,0x015135c8) */
/* WARNING: Removing unreachable block (ram,0x015135dc) */

long Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d89 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4d89 = 1;
  }
  uVar3 = param_1;
  if (((int)param_2 != 0) && ((int)param_3 != 0)) {
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = (ulong)*(uint *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
    unaff_x30 = (undefined *)0x15135c0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x21 = 0x3d25578;
    unaff_x22 = param_3;
    unaff_x29 = puVar1;
    goto code_r0x015136b0;
  }
  if ((int)param_2 == 0) {
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = *(uint *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
code_r0x01513694:
    uVar8 = (ulong)uVar2;
  }
  else {
    if (*(long *)(param_1 + 0x38) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x38),0,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x40),1,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked
                    (*(long *)(param_1 + 0x50),0);
          if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar2 = **(uint **)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8);
          goto code_r0x01513694;
        }
      }
    }
    unaff_x30 = &Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation;
    auVar10 = func_0x00f78af4();
    uVar8 = auVar10._8_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    uVar3 = auVar10._0_8_;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x21 = param_2;
    unaff_x22 = param_3;
    unaff_x29 = puVar1;
  }
code_r0x015136b0:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(long *)(uVar3 + 0x38) != 0) {
    lVar4 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(uVar3 + 0x38),0,uVar8,0);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    unaff_x19 = uVar8;
    if (*(long *)(uVar3 + 0x38) != 0) {
      /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(uVar3 + 0x38),1,0);
      if (*(long *)(uVar3 + 0x38) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(uVar3 + 0x38),1,0);
        lVar4 = *(long *)(uVar3 + 0x38);
        if (lVar4 != 0) {
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
          lVar4 = (*pcRam0000000003ebe318)(0,lVar4,uVar8,0);
          return lVar4;
        }
      }
    }
  }
  auVar10 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x40) = uVar3;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation;
  if ((bRam0000000003eb4d8d & 1) == 0) {
    func_0x00f78a20(0x3d29438);
    bRam0000000003eb4d8d = 1;
  }
  lVar4 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26_TypeInfo*/ uRam0000000003d29438);
  /*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26$$.ctor*/ func_0x0156c2d0(lVar4,0,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x28) = auVar10._0_8_;
    *(int *)(lVar4 + 0x20) = auVar10._8_4_;
    return lVar4;
  }
  uVar7 = func_0x00f78af4();
  *(undefined1 (*) [16])((long)register0x00000008 + -0x70) = auVar10;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x58) =
       &Atlas_UI_UIArcadeRewardBehaviour__PlayCoinCountAnimation;
  lVar4 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateMedalCount*/ func_0x015137e4();
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d29438;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  if (lVar4 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar5 = func_0x00f78aec();
    uVar7 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar7,0);
    uVar9 = 0;
  }
  else {
    uVar9 = 0x3ec0000;
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(uVar7);
    if ((uVar3 & 1) != 0) {
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
    uVar5 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar6,0);
    uVar6 = uVar7;
  }
  uVar7 = func_0x00f78a24(0x3d5a8a8);
  auVar10 = func_0x00f78ac0(uVar5,uVar7);
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3d29438;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar5;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*pcRam0000000003ec01e0)(auVar10._0_8_,auVar10._8_8_);
  return lVar4;
}



// ============================================================
// RVA: 0x15136b0 | Atlas.UI.UIArcadeRewardBehaviour.PlayAnimation
// ============================================================

long Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(param_1 + 0x38),0,param_2,0);
    if ((int)lVar1 == 0) {
      return lVar1;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(param_1 + 0x38),1,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x38),1,0);
        lVar1 = *(long *)(param_1 + 0x38);
        if (lVar1 != 0) {
          if (pcRam0000000003ebe318 == (code *)0x0) {
            pcRam0000000003ebe318 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar1 = (*pcRam0000000003ebe318)(0,lVar1,param_2,0);
          return lVar1;
        }
      }
    }
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4d8d & 1) == 0) {
    func_0x00f78a20(0x3d29438);
    bRam0000000003eb4d8d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26_TypeInfo*/ uRam0000000003d29438);
  /*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26$$.ctor*/ func_0x0156c2d0(lVar1,0,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x28) = auVar6._0_8_;
    *(int *)(lVar1 + 0x20) = auVar6._8_4_;
    return lVar1;
  }
  uVar2 = func_0x00f78af4();
  lVar1 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateMedalCount*/ func_0x015137e4();
  if (lVar1 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar4 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar4,uVar2,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(uVar2);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (*pcRam0000000003ec01e0)(uVar2,lVar1);
      return lVar1;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar4 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar4,uVar2,0);
  }
  uVar2 = func_0x00f78a24(0x3d5a8a8);
  auVar5 = func_0x00f78ac0(uVar4,uVar2);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*pcRam0000000003ec01e0)(auVar5._0_8_,auVar5._8_8_);
  return lVar1;
}



// ============================================================
// RVA: 0x151373c | Atlas.UI.UIArcadeRewardBehaviour.PlayDelayedAnimation
// ============================================================

long Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4d8d & 1) == 0) {
    func_0x00f78a20(0x3d29438);
    bRam0000000003eb4d8d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26_TypeInfo*/ uRam0000000003d29438);
  /*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26$$.ctor*/ func_0x0156c2d0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    *(undefined4 *)(lVar1 + 0x20) = param_2;
    return lVar1;
  }
  uVar2 = func_0x00f78af4();
  lVar1 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateMedalCount*/ func_0x015137e4();
  if (lVar1 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar4 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar4,uVar2,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(uVar2);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (*pcRam0000000003ec01e0)(uVar2,lVar1);
      return lVar1;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar4 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar4,uVar2,0);
  }
  uVar2 = func_0x00f78a24(0x3d5a8a8);
  auVar5 = func_0x00f78ac0(uVar4,uVar2);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*pcRam0000000003ec01e0)(auVar5._0_8_,auVar5._8_8_);
  return lVar1;
}



// ============================================================
// RVA: 0x15137b8 | Atlas.UI.UIArcadeRewardBehaviour.PlayCoinCountAnimation
// ============================================================

void Atlas_UI_UIArcadeRewardBehaviour__PlayCoinCountAnimation(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateMedalCount*/ func_0x015137e4();
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
// RVA: 0x15137e4 | Atlas.UI.UIArcadeRewardBehaviour.AnimateMedalCount
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4d8a & 1) == 0) {
    func_0x00f78a20(0x3d29428);
    bRam0000000003eb4d8a = 1;
  }
  uVar3 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20_TypeInfo*/ uRam0000000003d29428);
  /*Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20$$.ctor*/ func_0x0156be24(uVar3,0,0);
  if (uVar3 != 0) {
    *(undefined8 *)(uVar3 + 0x28) = param_4;
    *(undefined4 *)(uVar3 + 0x20) = param_5;
    *(undefined4 *)(uVar3 + 0x30) = param_7;
    *(undefined4 *)(uVar3 + 0x34) = param_6;
    return uVar3;
  }
  func_0x00f78af4();
  uVar3 = Atlas_Audio_UIAudio__IsPlaying(extraout_x1);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  uVar3 = extraout_x1;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar3 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar3;
  }
  lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    uVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar4,extraout_x1,uRam0000000003d2faf8);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar4 != 0)) &&
       (uVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar4,extraout_x1,uRam0000000003d2fb00), uVar3 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar3,0,0);
      return uVar3;
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
      uVar3 = (*pcRam0000000003ec01d0)(uVar7);
      if ((uVar3 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*pcRam0000000003ec01e0)(uVar7,lVar4);
        return uVar3;
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
    uVar3 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return uVar3;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar6,4,0);
  uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar7,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar3 != 0) && (*(char *)(uVar3 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar4 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar4 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          uVar3 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar3 != 0) && (*(char *)(uVar3 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar3,auVar11._8_8_,cVar1 != '\0',0);
          }
          return uVar3;
        }
        uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar4,0);
      }
      *(undefined8 *)(uVar3 + 200) = uVar7;
    }
    *(long **)(uVar3 + 0x48) = plVar5;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1513874 | Atlas.UI.UIArcadeRewardBehaviour.PlaySound
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UIArcadeRewardBehaviour__PlaySound
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                ulong param_5)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  uVar3 = Atlas_Audio_UIAudio__IsPlaying(param_5);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  uVar3 = param_5;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar3 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar3;
  }
  lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    uVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar4,param_5,uRam0000000003d2faf8);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar4 != 0)) &&
       (uVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar4,param_5,uRam0000000003d2fb00), uVar3 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar3,0,0);
      return uVar3;
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
      uVar3 = (*pcRam0000000003ec01d0)(uVar7);
      if ((uVar3 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*pcRam0000000003ec01e0)(uVar7,lVar4);
        return uVar3;
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
    uVar3 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return uVar3;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar6,4,0);
  uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar7,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar3 != 0) && (*(char *)(uVar3 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar4 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar4 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          uVar3 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar3 != 0) && (*(char *)(uVar3 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar3,auVar11._8_8_,cVar1 != '\0',0);
          }
          return uVar3;
        }
        uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar4,0);
      }
      *(undefined8 *)(uVar3 + 200) = uVar7;
    }
    *(long **)(uVar3 + 0x48) = plVar5;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1513a68 | Atlas.UI.UIArcadeRewardBehaviour.Wiggle
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIArcadeRewardBehaviour__Wiggle
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
  
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar3 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      uVar4 = func_0x00f78e5c(plVar3);
      lVar5 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
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
// RVA: 0x1513be4 | Atlas.UI.UIArcadeRewardBehaviour.PlayStarsAnimation
// ============================================================

void Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
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
// RVA: 0x1513c10 | Atlas.UI.UIArcadeRewardBehaviour.AnimateStars
// ============================================================

long Atlas_UI_UIArcadeRewardBehaviour__AnimateStars(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4d8c & 1) == 0) {
    func_0x00f78a20(0x3d29430);
    bRam0000000003eb4d8c = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<AnimateStars>d__25_TypeInfo*/ uRam0000000003d29430);
  /*Atlas.UI.UIArcadeRewardBehaviour.<AnimateStars>d__25$$.ctor*/ func_0x0156bffc(lVar1,0,0);
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
// RVA: 0x1513c84 | Atlas.UI.UIArcadeRewardBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIArcadeRewardBehaviour___ctor(ulong param_1)

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



