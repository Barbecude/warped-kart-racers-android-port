// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIIconAndValueBehaviour

// ============================================================
// RVA: 0x15133f0 | Atlas.UI.UIIconAndValueBehaviour.SetImage
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIIconAndValueBehaviour__SetImage
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  code *pcVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4ded & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ded = 1;
  }
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  plVar7 = *(long **)(param_5 + 0x18);
  if (plVar7 != (long *)0x0) {
    if ((bRam0000000003ec2cc2 & 1) == 0) {
      func_0x00f78a20(0x3d23990,param_6,0);
      bRam0000000003ec2cc2 = 1;
    }
    uStack_60 = 0;
    uStack_58 = 0;
    lVar6 = plVar7[0x1a];
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
    if (iVar5 == 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
      if ((int)lVar6 == 0) {
        return lVar6;
      }
      if (param_6 != 0) {
        uVar17 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_6,0);
        uStack_60 = CONCAT44(param_2,uVar17);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar18 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
        fVar20 = param_2;
        fVar19 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
        *(bool *)(plVar7 + 6) =
             (fVar18 - fVar19) * (fVar18 - fVar19) + (param_2 - fVar20) * (param_2 - fVar20) <
             _UNK_033f8490;
        uVar13 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_6,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = 0;
code_r0x032c2400:
        uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,uVar14,0);
        *(undefined1 *)((long)plVar7 + 0x31) = uVar4;
        plVar7[0x1a] = param_6;
        (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
        pcStack_68 = (code *)&UNK_032c242c;
        goto code_r0x032c244c;
      }
    }
    else {
      lVar6 = plVar7[0x1a];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,param_6,0);
      if ((int)lVar6 == 0) {
        return lVar6;
      }
      if (plVar7[0x1a] != 0) {
        uVar17 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar7[0x1a],0);
        uStack_60 = CONCAT44(param_2,uVar17);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar18 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
        fVar20 = param_2;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_6,0);
        if ((uVar11 & 1) == 0) {
          fVar19 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
        }
        else {
          if (param_6 == 0) goto code_r0x032c2448;
          uVar17 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_6,0);
          uStack_60 = CONCAT44(fVar20,uVar17);
          uStack_58 = CONCAT44(param_4,param_3);
          fVar19 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
        }
        *(bool *)(plVar7 + 6) = fVar18 == fVar19 && param_2 == fVar20;
        if (plVar7[0x1a] != 0) {
          uVar13 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar7[0x1a],0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_6,0);
          uVar14 = 0;
          if (iVar5 != 0) {
            if (param_6 == 0) goto code_r0x032c2448;
            uVar14 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_6,0);
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          goto code_r0x032c2400;
        }
      }
    }
code_r0x032c2448:
    pcStack_68 = (code *)&UnityEngine_UI_Image__TrackSprite;
    plVar7 = (long *)func_0x00f78af4();
code_r0x032c244c:
    ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003ec2cd5 & 1) == 0) {
      func_0x00f78a20(0x3d226e8);
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec2cd5 = 1;
    }
    uVar13 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar7);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
    if ((int)lVar6 != 0) {
      lVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar7);
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        *(undefined2 *)(lVar6 + 0x30) = 0;
        return lVar6;
      }
      uVar13 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar6,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
      if ((int)lVar6 != 0) {
        if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar7);
        *(undefined1 *)((long)plVar7 + 0xfc) = 1;
      }
    }
    return lVar6;
  }
  auVar21 = func_0x00f78af4();
  uStack_60 = 0x3d23990;
  uStack_58 = uVar13;
  if ((bRam0000000003eb4dec & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dec = 1;
  }
  uVar13 = *(undefined8 *)(auVar21._0_8_ + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = 0;
  lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  plVar7 = *(long **)(auVar21._0_8_ + 0x20);
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01513528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (**(code **)(*plVar7 + 0x558))(plVar7,auVar21._8_8_,*(undefined8 *)(*plVar7 + 0x560));
    return lVar6;
  }
  auVar22 = func_0x00f78af4();
  uVar10 = auVar22._8_8_;
  lVar6 = auVar22._0_8_;
  auVar1._8_8_ = lVar6;
  auVar1._0_8_ = param_8;
  puVar2 = (undefined8 *)&stack0xffffffffffffff60;
  pcStack_68 = Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation;
  ppppppuStack_70 = (undefined8 ******)&stack0xffffffffffffffc0;
  if ((bRam0000000003eb4d89 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4d89 = 1;
  }
  if ((auVar22._8_4_ == 0) || ((int)uVar14 == 0)) {
    if (auVar22._8_4_ != 0) {
      if (*(long *)(lVar6 + 0x38) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar6 + 0x38),0,0);
        if (*(long *)(lVar6 + 0x40) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x40),1,0);
          if (*(long *)(lVar6 + 0x50) != 0) {
            Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked
                      (*(long *)(lVar6 + 0x50),0);
            if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar17 = **(undefined4 **)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8);
            goto code_r0x01513694;
          }
        }
      }
      goto LAB_015136ac;
    }
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
code_r0x01513694:
    auVar22._8_4_ = uVar17;
    auVar22._0_8_ = lVar6;
    auVar22._12_4_ = 0;
    uVar14 = 0x3d23990;
    puVar2 = &uStack_60;
    pppppppuVar15 = (undefined8 *******)ppppppuStack_70;
    pcVar16 = pcStack_68;
  }
  else {
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation
              (lVar6,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4));
    uVar10 = 0x3d25578;
    if (*(long *)(lVar6 + 0x50) != 0) {
      Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToLocked(*(long *)(lVar6 + 0x50),0);
      lVar8 = Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation(lVar6,param_8);
      uVar14 = 0x3d23990;
      puVar3 = &uStack_60;
      pppppppuVar15 = (undefined8 *******)ppppppuStack_70;
      pcVar16 = pcStack_68;
      goto UnityEngine_MonoBehaviour__StartCoroutine;
    }
LAB_015136ac:
    uVar13 = uVar10;
    auVar22 = func_0x00f78af4();
    pppppppuVar15 = &ppppppuStack_70;
    pcVar16 = Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation;
    auVar21 = auVar1;
  }
  uVar9 = auVar22._8_8_;
  lVar6 = auVar22._0_8_;
  *(undefined1 (*) [16])((long)puVar2 + -0x20) = auVar21;
  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar15;
  *(code **)((long)puVar2 + -8) = pcVar16;
  uVar10 = auVar21._8_8_;
  if (*(long *)(lVar6 + 0x38) != 0) {
    lVar8 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar6 + 0x38),0,uVar9,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    uVar10 = uVar9;
    if (*(long *)(lVar6 + 0x38) != 0) {
      /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(lVar6 + 0x38),1,0);
      if (*(long *)(lVar6 + 0x38) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar6 + 0x38),1,0);
        lVar8 = *(long *)(lVar6 + 0x38);
        if (lVar8 != 0) {
          *(undefined8 *)((long)puVar2 + -0x40) = unaff_d9;
          *(undefined8 *)((long)puVar2 + -0x38) = unaff_d8;
          *(undefined8 *)((long)puVar2 + -0x30) = uVar14;
          *(undefined8 *)((long)puVar2 + -0x28) = uVar13;
          *(undefined8 *)((long)puVar2 + -0x20) = *(undefined8 *)((long)puVar2 + -0x20);
          *(undefined8 *)((long)puVar2 + -0x18) = *(undefined8 *)((long)puVar2 + -0x18);
          *(undefined8 *)((long)puVar2 + -0x10) = *(undefined8 *)((long)puVar2 + -0x10);
          *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
          if (pcRam0000000003ebe318 == (code *)0x0) {
            pcRam0000000003ebe318 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar6 = (*pcRam0000000003ebe318)(0,lVar8,uVar9,0);
          return lVar6;
        }
      }
    }
  }
  auVar21 = func_0x00f78af4();
  *(undefined8 *)((long)puVar2 + -0x50) = uVar14;
  *(undefined8 *)((long)puVar2 + -0x48) = uVar13;
  *(long *)((long)puVar2 + -0x40) = lVar6;
  *(undefined8 *)((long)puVar2 + -0x38) = uVar10;
  *(undefined1 **)((long)puVar2 + -0x30) = (undefined1 *)((long)puVar2 + -0x10);
  *(code **)((long)puVar2 + -0x28) = Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation;
  uVar14 = 0x3d29438;
  if ((bRam0000000003eb4d8d & 1) == 0) {
    func_0x00f78a20(0x3d29438);
    bRam0000000003eb4d8d = 1;
  }
  lVar6 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26_TypeInfo*/ uRam0000000003d29438);
  Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation_d__26___ctor(lVar6,0,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x28) = auVar21._0_8_;
    *(int *)(lVar6 + 0x20) = auVar21._8_4_;
    return lVar6;
  }
  lVar6 = func_0x00f78af4();
  *(undefined1 (*) [16])((long)puVar2 + -0x70) = auVar21;
  *(undefined1 **)((long)puVar2 + -0x60) = (undefined1 *)((long)puVar2 + -0x30);
  *(code **)((long)puVar2 + -0x58) = Atlas_UI_UIArcadeRewardBehaviour__PlayCoinCountAnimation;
  lVar8 = Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount();
  pppppppuVar15 = *(undefined8 ********)((long)puVar2 + -0x60);
  pcVar16 = *(code **)((long)puVar2 + -0x58);
  puVar3 = (undefined8 *)((long)puVar2 + -0x50);
  auVar21 = *(undefined1 (*) [16])((long)puVar2 + -0x70);
  uVar13 = 0;
UnityEngine_MonoBehaviour__StartCoroutine:
  lVar12 = auVar21._0_8_;
  *(undefined8 *)((long)puVar3 + -0x30) = uVar14;
  *(undefined8 *)((long)puVar3 + -0x28) = uVar13;
  *(undefined1 (*) [16])((long)puVar3 + -0x20) = auVar21;
  *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar15;
  *(code **)((long)puVar3 + -8) = pcVar16;
  if (lVar8 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar10,0);
  }
  else {
    uVar13 = 0x3ec0000;
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar11 = (*pcRam0000000003ec01d0)(lVar6);
    if ((uVar11 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (*pcRam0000000003ec01e0)(lVar6,lVar8);
      return lVar6;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar10,0);
    lVar12 = lVar6;
  }
  uVar10 = func_0x00f78a24(0x3d5a8a8);
  auVar21 = func_0x00f78ac0(uVar9,uVar10);
  *(undefined8 *)((long)puVar3 + -0x60) = uVar14;
  *(undefined8 *)((long)puVar3 + -0x58) = uVar13;
  *(long *)((long)puVar3 + -0x50) = lVar12;
  *(undefined8 *)((long)puVar3 + -0x48) = uVar9;
  *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*pcRam0000000003ec01e0)(auVar21._0_8_,auVar21._8_8_);
  return lVar6;
}



// ============================================================
// RVA: 0x1513494 | Atlas.UI.UIIconAndValueBehaviour.Set
// ============================================================

long Atlas_UI_UIIconAndValueBehaviour__Set
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  code *pcVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  undefined8 **ppuStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4dec & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dec = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = 0;
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0);
  if ((int)lVar4 == 0) {
    return lVar4;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01513528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (**(code **)(*plVar5 + 0x558))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x560));
    return lVar4;
  }
  auVar15 = func_0x00f78af4();
  uVar10 = auVar15._8_8_;
  lVar4 = auVar15._0_8_;
  puVar2 = &stack0xffffffffffffff90;
  pcStack_38 = Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d89 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4d89 = 1;
  }
  if ((auVar15._8_4_ == 0) || ((int)uVar11 == 0)) {
    if (auVar15._8_4_ != 0) {
      if (*(long *)(lVar4 + 0x38) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x38),0,0);
        if (*(long *)(lVar4 + 0x40) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x40),1,0);
          if (*(long *)(lVar4 + 0x50) != 0) {
            Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked
                      (*(long *)(lVar4 + 0x50),0);
            if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar1 = **(undefined4 **)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8);
            goto code_r0x01513694;
          }
        }
      }
      goto LAB_015136ac;
    }
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4);
code_r0x01513694:
    auVar15._8_4_ = uVar1;
    auVar15._0_8_ = lVar4;
    auVar15._12_4_ = 0;
    uVar11 = 0x3d23990;
    puVar2 = &stack0xffffffffffffffd0;
    pppuVar13 = (undefined8 ***)ppuStack_40;
    pcVar14 = pcStack_38;
  }
  else {
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation
              (lVar4,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4));
    uVar10 = 0x3d25578;
    if (*(long *)(lVar4 + 0x50) != 0) {
      Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToLocked(*(long *)(lVar4 + 0x50),0);
      lVar6 = Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation(lVar4,param_4);
      uVar11 = 0x3d23990;
      puVar3 = &stack0xffffffffffffffd0;
      pppuVar13 = (undefined8 ***)ppuStack_40;
      pcVar14 = pcStack_38;
      goto UnityEngine_MonoBehaviour__StartCoroutine;
    }
LAB_015136ac:
    uVar12 = uVar10;
    auVar15 = func_0x00f78af4();
    param_2 = lVar4;
    param_1 = param_4;
    pppuVar13 = &ppuStack_40;
    pcVar14 = Atlas_UI_UIArcadeRewardBehaviour__PlayAnimation;
  }
  lVar6 = auVar15._8_8_;
  lVar4 = auVar15._0_8_;
  *(long *)(puVar2 + -0x20) = param_1;
  *(long *)(puVar2 + -0x18) = param_2;
  *(undefined8 ****)(puVar2 + -0x10) = pppuVar13;
  *(code **)(puVar2 + -8) = pcVar14;
  if (*(long *)(lVar4 + 0x38) != 0) {
    lVar7 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar4 + 0x38),0,lVar6,0);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
    param_2 = lVar6;
    if (*(long *)(lVar4 + 0x38) != 0) {
      /*UnityEngine.Animator$$set_keepAnimatorControllerStateOnDisable*/ func_0x0321255c(*(long *)(lVar4 + 0x38),1,0);
      if (*(long *)(lVar4 + 0x38) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x38),1,0);
        lVar7 = *(long *)(lVar4 + 0x38);
        if (lVar7 != 0) {
          *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
          *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
          *(undefined8 *)(puVar2 + -0x30) = uVar11;
          *(undefined8 *)(puVar2 + -0x28) = uVar12;
          *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
          *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
          *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
          *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
          if (pcRam0000000003ebe318 == (code *)0x0) {
            pcRam0000000003ebe318 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar4 = (*pcRam0000000003ebe318)(0,lVar7,lVar6,0);
          return lVar4;
        }
      }
    }
  }
  auVar15 = func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0x50) = uVar11;
  *(undefined8 *)(puVar2 + -0x48) = uVar12;
  *(long *)(puVar2 + -0x40) = lVar4;
  *(long *)(puVar2 + -0x38) = param_2;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x28) = Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation;
  uVar11 = 0x3d29438;
  if ((bRam0000000003eb4d8d & 1) == 0) {
    func_0x00f78a20(0x3d29438);
    bRam0000000003eb4d8d = 1;
  }
  lVar4 = func_0x00f78aec(/*Atlas.UI.UIArcadeRewardBehaviour.<PlayDelayedAnimation>d__26_TypeInfo*/ uRam0000000003d29438);
  Atlas_UI_UIArcadeRewardBehaviour__PlayDelayedAnimation_d__26___ctor(lVar4,0,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x28) = auVar15._0_8_;
    *(int *)(lVar4 + 0x20) = auVar15._8_4_;
    return lVar4;
  }
  lVar4 = func_0x00f78af4();
  *(undefined1 (*) [16])(puVar2 + -0x70) = auVar15;
  *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x30;
  *(code **)(puVar2 + -0x58) = Atlas_UI_UIArcadeRewardBehaviour__PlayCoinCountAnimation;
  lVar6 = Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount();
  pppuVar13 = *(undefined8 ****)(puVar2 + -0x60);
  pcVar14 = *(code **)(puVar2 + -0x58);
  puVar3 = puVar2 + -0x50;
  param_1 = *(long *)(puVar2 + -0x70);
  param_2 = *(long *)(puVar2 + -0x68);
  uVar12 = 0;
UnityEngine_MonoBehaviour__StartCoroutine:
  *(undefined8 *)(puVar3 + -0x30) = uVar11;
  *(undefined8 *)(puVar3 + -0x28) = uVar12;
  *(long *)(puVar3 + -0x20) = param_1;
  *(long *)(puVar3 + -0x18) = param_2;
  *(undefined8 ****)(puVar3 + -0x10) = pppuVar13;
  *(code **)(puVar3 + -8) = pcVar14;
  if (lVar6 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar10,0);
  }
  else {
    uVar12 = 0x3ec0000;
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar8 = (*pcRam0000000003ec01d0)(lVar4);
    if ((uVar8 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (*pcRam0000000003ec01e0)(lVar4,lVar6);
      return lVar4;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar10,0);
    param_1 = lVar4;
  }
  uVar10 = func_0x00f78a24(0x3d5a8a8);
  auVar15 = func_0x00f78ac0(uVar9,uVar10);
  *(undefined8 *)(puVar3 + -0x60) = uVar11;
  *(undefined8 *)(puVar3 + -0x58) = uVar12;
  *(long *)(puVar3 + -0x50) = param_1;
  *(undefined8 *)(puVar3 + -0x48) = uVar9;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*pcRam0000000003ec01e0)(auVar15._0_8_,auVar15._8_8_);
  return lVar4;
}



// ============================================================
// RVA: 0x151b4d8 | Atlas.UI.UIIconAndValueBehaviour.SetVisible
// ============================================================

undefined8 Atlas_UI_UIIconAndValueBehaviour__SetVisible(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  undefined4 uStack_54;
  
  lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebf4c0)(lVar1,param_2);
    return uVar2;
  }
  auVar3 = func_0x00f78af4();
  uStack_54 = auVar3._8_4_;
  if ((bRam0000000003eb4deb & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4deb = 1;
  }
  uVar2 = *(undefined8 *)(auVar3._0_8_ + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if ((int)uVar2 != 0) {
    lVar1 = *(long *)(auVar3._0_8_ + 0x20);
    uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
    if (lVar1 == 0) {
      uVar2 = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar2;
    }
    uVar2 = /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(lVar1,uVar2,1,0);
  }
  return uVar2;
}



// ============================================================
// RVA: 0x151b50c | Atlas.UI.UIIconAndValueBehaviour.Set
// ============================================================

undefined8 Atlas_UI_UIIconAndValueBehaviour__Set(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  if ((bRam0000000003eb4deb & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4deb = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if ((int)uVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
    if (lVar1 == 0) {
      uVar2 = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar2;
    }
    uVar2 = /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(lVar1,uVar2,1,0);
  }
  return uVar2;
}



// ============================================================
// RVA: 0x151b5c0 | Atlas.UI.UIIconAndValueBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIIconAndValueBehaviour___ctor(ulong param_1)

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



