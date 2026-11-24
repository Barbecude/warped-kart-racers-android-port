// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeInProgressBehaviour

// ============================================================
// RVA: 0x1512668 | Atlas.UI.UIArcadeInProgressBehaviour.get_BestTimeText
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__get_BestTimeText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1512670 | Atlas.UI.UIArcadeInProgressBehaviour.get_ProgressText
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__get_ProgressText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1512678 | Atlas.UI.UIArcadeInProgressBehaviour.get_ThresholdText
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__get_ThresholdText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1512680 | Atlas.UI.UIArcadeInProgressBehaviour.get_ProgressImage
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__get_ProgressImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1512688 | Atlas.UI.UIArcadeInProgressBehaviour.get_LapIconSprite
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__get_LapIconSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x1512690 | Atlas.UI.UIArcadeInProgressBehaviour.get_CollectorIconSprite
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__get_CollectorIconSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x1512698 | Atlas.UI.UIArcadeInProgressBehaviour.get_ShooterIconSprite
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__get_ShooterIconSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15126a0 | Atlas.UI.UIArcadeInProgressBehaviour.get_NoMedalColour
// ============================================================

undefined4 Atlas_UI_UIArcadeInProgressBehaviour__get_NoMedalColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15126ac | Atlas.UI.UIArcadeInProgressBehaviour.get_ProgressRootWidthShooter
// ============================================================

undefined4 Atlas_UI_UIArcadeInProgressBehaviour__get_ProgressRootWidthShooter(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15126b4 | Atlas.UI.UIArcadeInProgressBehaviour.get_ProgressRootWidthCollector
// ============================================================

undefined4 Atlas_UI_UIArcadeInProgressBehaviour__get_ProgressRootWidthCollector(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ============================================================
// RVA: 0x15126bc | Atlas.UI.UIArcadeInProgressBehaviour.SetThresholdMedal
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIArcadeInProgressBehaviour__SetThresholdMedal
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,int param_6)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar1 = (long *)(param_5 + 0x68);
  if (param_6 != 3) {
    plVar1 = (long *)(param_5 + 0x80);
  }
  plVar4 = (long *)(param_5 + 0x70);
  if (param_6 != 2) {
    plVar4 = plVar1;
  }
  plVar1 = (long *)(param_5 + 0x78);
  if (param_6 != 1) {
    plVar1 = plVar4;
  }
  plVar4 = *(long **)(param_5 + 0x30);
  if (plVar4 == (long *)0x0) {
    auVar14 = func_0x00f78af4();
    iVar3 = auVar14._8_4_;
    lVar7 = auVar14._0_8_;
    plVar1 = (long *)(lVar7 + 0x68);
    if (iVar3 != 3) {
      plVar1 = (long *)(lVar7 + 0x80);
    }
    plVar4 = (long *)(lVar7 + 0x70);
    if (iVar3 != 2) {
      plVar4 = plVar1;
    }
    plVar1 = (long *)(lVar7 + 0x78);
    if (iVar3 != 1) {
      plVar1 = plVar4;
    }
    return *plVar1;
  }
  lVar7 = *plVar1;
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar7,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lVar8 = plVar4[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
  if (iVar3 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (lVar7 != 0) {
      uVar10 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
      uStack_60 = CONCAT44(param_2,uVar10);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar11 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar13 = param_2;
      fVar12 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar4 + 6) =
           (fVar11 - fVar12) * (fVar11 - fVar12) + (param_2 - fVar13) * (param_2 - fVar13) <
           _UNK_033f8490;
      uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = 0;
code_r0x032c2400:
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,uVar9,0);
      *(undefined1 *)((long)plVar4 + 0x31) = uVar2;
      plVar4[0x1a] = lVar7;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      goto code_r0x032c244c;
    }
  }
  else {
    lVar8 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,lVar7,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (plVar4[0x1a] != 0) {
      uVar10 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar4[0x1a],0);
      uStack_60 = CONCAT44(param_2,uVar10);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar11 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar13 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
      if ((uVar5 & 1) == 0) {
        fVar12 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar7 == 0) goto code_r0x032c2448;
        uVar10 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
        uStack_60 = CONCAT44(fVar13,uVar10);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar12 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      }
      *(bool *)(plVar4 + 6) = fVar11 == fVar12 && param_2 == fVar13;
      if (plVar4[0x1a] != 0) {
        uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar4[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
        uVar9 = 0;
        if (iVar3 != 0) {
          if (lVar7 == 0) goto code_r0x032c2448;
          uVar9 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
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
  plVar4 = (long *)func_0x00f78af4();
code_r0x032c244c:
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)lVar7 != 0) {
    lVar7 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
    if (lVar7 == 0) {
      lVar7 = func_0x00f78af4();
      *(undefined2 *)(lVar7 + 0x30) = 0;
      return lVar7;
    }
    uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
    if ((int)lVar7 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar4);
      *(undefined1 *)((long)plVar4 + 0xfc) = 1;
    }
  }
  return lVar7;
}



// ============================================================
// RVA: 0x1512708 | Atlas.UI.UIArcadeInProgressBehaviour.GetMedalSprite
// ============================================================

undefined8 Atlas_UI_UIArcadeInProgressBehaviour__GetMedalSprite(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x68);
  if (param_2 != 3) {
    puVar2 = (undefined8 *)(param_1 + 0x80);
  }
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if (param_2 != 2) {
    puVar1 = puVar2;
  }
  puVar2 = (undefined8 *)(param_1 + 0x78);
  if (param_2 != 1) {
    puVar2 = puVar1;
  }
  return *puVar2;
}



// ============================================================
// RVA: 0x1512738 | Atlas.UI.UIArcadeInProgressBehaviour.DoWobbleAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x01512798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015128ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01512868) */
/* WARNING: Removing unreachable block (ram,0x01512874) */
/* WARNING: Removing unreachable block (ram,0x0151281c) */
/* WARNING: Removing unreachable block (ram,0x01512828) */
/* WARNING: Removing unreachable block (ram,0x0151279c) */
/* WARNING: Removing unreachable block (ram,0x015127a8) */
/* WARNING: Removing unreachable block (ram,0x015127b0) */
/* WARNING: Removing unreachable block (ram,0x015127b4) */
/* WARNING: Removing unreachable block (ram,0x015127d4) */
/* WARNING: Removing unreachable block (ram,0x015128b0) */
/* WARNING: Removing unreachable block (ram,0x01512908) */
/* WARNING: Removing unreachable block (ram,0x015128bc) */
/* WARNING: Removing unreachable block (ram,0x016b6590) */
/* WARNING: Removing unreachable block (ram,0x016b65a4) */
/* WARNING: Removing unreachable block (ram,0x016b65ac) */
/* WARNING: Removing unreachable block (ram,0x016b65b0) */
/* WARNING: Removing unreachable block (ram,0x016b65b8) */
/* WARNING: Removing unreachable block (ram,0x016b65c0) */
/* WARNING: Removing unreachable block (ram,0x016b65c8) */
/* WARNING: Removing unreachable block (ram,0x016b65d8) */

void Atlas_UI_UIArcadeInProgressBehaviour__DoWobbleAnimation
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4d80 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e790);
    func_0x00f78a20(0x3d5e860);
    bRam0000000003eb4d80 = 1;
  }
  uStack_50 = 0x3d20bc0;
  uStack_38 = 0x151279c;
  lStack_48 = param_5;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(param_5 + 0xb8) != 0) {
    /*DG.Tweening.TweenExtensions$$Kill*/ func_0x016bc298(*(long *)(param_5 + 0xb8),0,0);
    *(undefined8 *)(param_5 + 0xb8) = 0;
  }
  if (*(long *)(param_5 + 0x38) != 0) {
    lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x38),0);
    uVar3 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    if (lVar1 != 0) {
      uStack_60 = (undefined1 **)CONCAT44(param_2,uVar3);
      uStack_58 = (undefined *)CONCAT44(param_4,param_3);
      if (pcRam0000000003ec1988 == (code *)0x0) {
        pcRam0000000003ec1988 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      (*pcRam0000000003ec1988)(lVar1,&uStack_60);
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  uStack_58 = &Atlas_UI_UIArcadeInProgressBehaviour__DoFlashAnimation;
  if (*(char *)(lVar1 + 200) == '\0') {
    *(undefined1 *)(lVar1 + 200) = 1;
    uStack_60 = &puStack_40;
    /*Atlas.UI.UIArcadeInProgressBehaviour$$StopFlashAnimation*/ func_0x015129b8();
    uVar2 = /*Atlas.UI.UIArcadeInProgressBehaviour$$FlashAnimationCoroutine*/ func_0x01512a0c(lVar1);
    uVar2 = /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(lVar1,uVar2,0);
    *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  }
  return;
}



// ============================================================
// RVA: 0x151290c | Atlas.UI.UIArcadeInProgressBehaviour.StopWobbleAnimation
// ============================================================

void Atlas_UI_UIArcadeInProgressBehaviour__StopWobbleAnimation
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_5 + 0xb8) != 0) {
    /*DG.Tweening.TweenExtensions$$Kill*/ func_0x016bc298(*(long *)(param_5 + 0xb8),0,0);
    *(undefined8 *)(param_5 + 0xb8) = 0;
  }
  if (*(long *)(param_5 + 0x38) != 0) {
    lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x38),0);
    uVar3 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    if (lVar1 != 0) {
      uStack_30 = (undefined1 *)CONCAT44(param_2,uVar3);
      uStack_28 = (undefined *)CONCAT44(param_4,param_3);
      if (pcRam0000000003ec1988 == (code *)0x0) {
        pcRam0000000003ec1988 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      (*pcRam0000000003ec1988)(lVar1,&uStack_30);
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  uStack_28 = &Atlas_UI_UIArcadeInProgressBehaviour__DoFlashAnimation;
  if (*(char *)(lVar1 + 200) == '\0') {
    *(undefined1 *)(lVar1 + 200) = 1;
    uStack_30 = &stack0xfffffffffffffff0;
    /*Atlas.UI.UIArcadeInProgressBehaviour$$StopFlashAnimation*/ func_0x015129b8();
    uVar2 = /*Atlas.UI.UIArcadeInProgressBehaviour$$FlashAnimationCoroutine*/ func_0x01512a0c(lVar1);
    uVar2 = /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(lVar1,uVar2,0);
    *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  }
  return;
}



// ============================================================
// RVA: 0x151296c | Atlas.UI.UIArcadeInProgressBehaviour.DoFlashAnimation
// ============================================================

void Atlas_UI_UIArcadeInProgressBehaviour__DoFlashAnimation(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 200) == '\0') {
    *(undefined1 *)(param_1 + 200) = 1;
    /*Atlas.UI.UIArcadeInProgressBehaviour$$StopFlashAnimation*/ func_0x015129b8();
    uVar1 = /*Atlas.UI.UIArcadeInProgressBehaviour$$FlashAnimationCoroutine*/ func_0x01512a0c(param_1);
    uVar1 = /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(param_1,uVar1,0);
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
  }
  return;
}



// ============================================================
// RVA: 0x15129b8 | Atlas.UI.UIArcadeInProgressBehaviour.StopFlashAnimation
// ============================================================

long Atlas_UI_UIArcadeInProgressBehaviour__StopFlashAnimation(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    /*UnityEngine.MonoBehaviour$$StopCoroutine*/ func_0x0324810c(param_1,*(long *)(param_1 + 0xc0),0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01512a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*plVar1 + 0x2a8))
                      (*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                       *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),plVar1,
                       *(undefined8 *)(*plVar1 + 0x2b0));
    return lVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4d81 & 1) == 0) {
    func_0x00f78a20(0x3d29410);
    bRam0000000003eb4d81 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46_TypeInfo*/ uRam0000000003d29410);
  /*Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46$$.ctor*/ func_0x0156b738(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  Atlas_UI_UIArcadeInProgressBehaviour__StopWobbleAnimation();
  lVar4 = Atlas_UI_UIArcadeInProgressBehaviour__StopFlashAnimation(lVar2);
  *(undefined1 *)(lVar2 + 200) = 0;
  return lVar4;
}



// ============================================================
// RVA: 0x1512a0c | Atlas.UI.UIArcadeInProgressBehaviour.FlashAnimationCoroutine
// ============================================================

long Atlas_UI_UIArcadeInProgressBehaviour__FlashAnimationCoroutine(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d81 & 1) == 0) {
    func_0x00f78a20(0x3d29410);
    bRam0000000003eb4d81 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46_TypeInfo*/ uRam0000000003d29410);
  /*Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46$$.ctor*/ func_0x0156b738(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  Atlas_UI_UIArcadeInProgressBehaviour__StopWobbleAnimation();
  lVar2 = Atlas_UI_UIArcadeInProgressBehaviour__StopFlashAnimation(lVar1);
  *(undefined1 *)(lVar1 + 200) = 0;
  return lVar2;
}



// ============================================================
// RVA: 0x1512a80 | Atlas.UI.UIArcadeInProgressBehaviour.StopAnimations
// ============================================================

void Atlas_UI_UIArcadeInProgressBehaviour__StopAnimations(long param_1)

{
  Atlas_UI_UIArcadeInProgressBehaviour__StopWobbleAnimation();
  Atlas_UI_UIArcadeInProgressBehaviour__StopFlashAnimation(param_1);
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}



// ============================================================
// RVA: 0x1512aac | Atlas.UI.UIArcadeInProgressBehaviour..ctor
// ============================================================

long Atlas_UI_UIArcadeInProgressBehaviour___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0xa0) = uVar1;
  *(undefined4 *)(param_5 + 0xa4) = param_2;
  *(undefined4 *)(param_5 + 0xa8) = param_3;
  *(undefined4 *)(param_5 + 0xac) = param_4;
  *(undefined8 *)(param_5 + 0xb0) = 0x42c8000042c80000;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_5;
}



