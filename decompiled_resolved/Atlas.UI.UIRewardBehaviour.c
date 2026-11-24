// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIRewardBehaviour

// ============================================================
// RVA: 0x151d078 | Atlas.UI.UIRewardBehaviour.get_IconAndValueBehaviour
// ============================================================

undefined8 Atlas_UI_UIRewardBehaviour__get_IconAndValueBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x151d080 | Atlas.UI.UIRewardBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x0151d1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151d2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151d37c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151d2fc) */
/* WARNING: Removing unreachable block (ram,0x0151d30c) */
/* WARNING: Removing unreachable block (ram,0x0151d314) */
/* WARNING: Removing unreachable block (ram,0x0151d318) */
/* WARNING: Removing unreachable block (ram,0x0151d32c) */
/* WARNING: Removing unreachable block (ram,0x0151d354) */
/* WARNING: Removing unreachable block (ram,0x0151d334) */
/* WARNING: Removing unreachable block (ram,0x0151d33c) */
/* WARNING: Removing unreachable block (ram,0x0151d200) */
/* WARNING: Removing unreachable block (ram,0x0151d380) */
/* WARNING: Removing unreachable block (ram,0x0146fb74) */
/* WARNING: Removing unreachable block (ram,0x0146fb9c) */
/* WARNING: Removing unreachable block (ram,0x0146fbc8) */
/* WARNING: Removing unreachable block (ram,0x0146fbcc) */
/* WARNING: Removing unreachable block (ram,0x0146fd1c) */
/* WARNING: Removing unreachable block (ram,0x0146fd5c) */
/* WARNING: Removing unreachable block (ram,0x0146fdd0) */
/* WARNING: Removing unreachable block (ram,0x0146fde8) */
/* WARNING: Removing unreachable block (ram,0x0146fe00) */
/* WARNING: Removing unreachable block (ram,0x0146fe08) */
/* WARNING: Removing unreachable block (ram,0x0146fe0c) */
/* WARNING: Removing unreachable block (ram,0x0146ffa4) */
/* WARNING: Removing unreachable block (ram,0x0146fe24) */
/* WARNING: Removing unreachable block (ram,0x0146fc00) */

void Atlas_UI_UIRewardBehaviour__Set
               (long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  
  auVar10._8_8_ = param_3;
  auVar10._0_8_ = param_1;
  puVar8 = &stack0xfffffffffffffff0;
  uStack_44 = param_4;
  if ((bRam0000000003eb4dff & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d20658);
    func_0x00f78a20(0x3d23058);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dff = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_0151d12c:
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if (iVar2 == 0) goto LAB_0151d198;
    uVar7 = func_0x00f78aec(/*Atlas.UI.LoadoutMetagameData_TypeInfo*/ uRam0000000003d23058);
    Atlas_UI_LoadoutMetagameData___ctor(uVar7,param_2,param_2,0);
    plVar3 = *(long **)(param_1 + 0x50);
joined_r0x0151d2a0:
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 400));
      goto LAB_0151d198;
    }
LAB_0151d2a4:
    puVar9 = &Atlas_UI_UIRewardBehaviour__Set;
    auVar10 = func_0x00f78af4();
    puVar1 = auStack_50;
  }
  else {
    if ((*(byte *)(*param_2 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) goto LAB_0151d12c;
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if (iVar2 != 0) {
      uVar7 = func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
      if (*(byte *)(*param_2 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_2;
        if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 +
                     -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650) {
          plVar3 = (long *)0x0;
        }
      }
      Atlas_UI_CharacterMetagameData___ctor(uVar7,plVar3,0);
      plVar3 = *(long **)(param_1 + 0x48);
      goto joined_r0x0151d2a0;
    }
LAB_0151d198:
    param_2 = *(long **)(param_1 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0,0);
    if (iVar2 != 0) {
      param_2 = *(long **)(param_1 + 0x30);
      uVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_44,0);
      if (param_2 == (long *)0x0) goto LAB_0151d2a4;
      (**(code **)(*param_2 + 0x558))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x560));
    }
    puVar9 = (undefined *)0x151d200;
    puVar1 = auStack_50;
  }
  while( true ) {
    lVar5 = auVar10._0_8_;
    *(undefined8 *)(puVar1 + -0x30) = uVar7;
    *(long **)(puVar1 + -0x28) = param_2;
    *(long *)(puVar1 + -0x20) = param_1;
    *(undefined8 *)(puVar1 + -0x18) = param_3;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    param_2 = (long *)0x3eb4000;
    if ((bRam0000000003eb4e00 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4e00 = 1;
    }
    lVar6 = *(long *)(lVar5 + 0x18);
    if (lVar6 != 0) break;
    param_3 = func_0x00f78af4();
    *(undefined1 (*) [16])(puVar1 + -0x50) = auVar10;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_UIRewardBehaviour__SetCompletedAndStamp;
    puVar8 = puVar1 + -0x40;
    auVar10._8_8_ = 1;
    auVar10._0_8_ = param_3;
    puVar9 = &UNK_0151d380;
    puVar1 = puVar1 + -0x50;
    param_1 = lVar5;
  }
  *(undefined8 *)(puVar1 + -0x60) = 0x3d23000;
  *(undefined8 *)(puVar1 + -0x58) = 0x3eb4000;
  *(undefined1 (*) [16])(puVar1 + -0x50) = auVar10;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x38) = &UNK_0151d2fc;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf4c0)(lVar6,auVar10._8_8_);
  return;
}



// ============================================================
// RVA: 0x151d2a8 | Atlas.UI.UIRewardBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x0151d2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151d2fc) */
/* WARNING: Removing unreachable block (ram,0x0151d30c) */
/* WARNING: Removing unreachable block (ram,0x0151d314) */
/* WARNING: Removing unreachable block (ram,0x0151d318) */
/* WARNING: Removing unreachable block (ram,0x0151d32c) */
/* WARNING: Removing unreachable block (ram,0x0151d354) */
/* WARNING: Removing unreachable block (ram,0x0151d334) */
/* WARNING: Removing unreachable block (ram,0x0151d33c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_UI_UIRewardBehaviour__Set
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb4e00 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e00 = 1;
  }
  lVar5 = *(long *)(param_4 + 0x18);
  if (lVar5 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*pcRam0000000003ebf4c0)(lVar5,param_5);
    return uVar7;
  }
  lVar5 = func_0x00f78af4();
  Atlas_UI_UIRewardBehaviour__Set(lVar5,1);
  plVar6 = *(long **)(lVar5 + 0x20);
  if ((bRam0000000003eb4869 & 1) == 0) {
    func_0x00f78a20(0x3d5e7c0,0);
    func_0x00f78a20(0x3d5e7c8);
    func_0x00f78a20(0x3d5e800);
    bRam0000000003eb4869 = 1;
  }
  if (plVar6 != (long *)0x0) {
    lVar5 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar6,0);
    fVar8 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    param_2 = param_2 * -30.0;
    param_3 = param_3 * -30.0;
    /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar8 * -30.0,param_2,param_3,0);
    if (lVar5 != 0) {
      /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar5,0);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(lVar5,0,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f82bc,uVar7,0x1b,uRam0000000003d5e7c0);
      fVar8 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(fVar8 * 4.0,param_2 * 4.0,param_3 * 4.0,lVar5,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar5,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f8140,uVar7,0x1b,uRam0000000003d5e7c8);
      uStack_80 = 0;
      uStack_78 = 0;
      /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,0,&uStack_80,0);
      (**(code **)(*plVar6 + 0x2a8))
                ((undefined4)uStack_80,uStack_80._4_4_,(undefined4)uStack_78,uStack_78._4_4_,plVar6,
                 *(undefined8 *)(*plVar6 + 0x2b0));
      uVar7 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,_UNK_033f82b8,plVar6,0);
      uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,lVar5,uRam0000000003d5e800);
      return uVar7;
    }
  }
  auVar10 = func_0x00f78af4();
  lVar5 = auVar10._8_8_;
  uVar7 = auVar10._0_8_;
  if ((bRam0000000003eb486a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d62258);
    func_0x00f78a20(0x3d26a58);
    bRam0000000003eb486a = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0_TypeInfo*/ uRam0000000003d26a58);
  Atlas_UI_AtlasTweenAnimations___c__DisplayClass8_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_6;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    fVar8 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (lVar5 != 0) {
      fVar9 = *(float *)(lVar5 + 0x20);
      param_2 = param_2 * fVar9;
      param_3 = param_3 * fVar9;
      uVar3 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar8 * fVar9,param_2,param_3,*(undefined4 *)(lVar5 + 0x10),
                              *(undefined4 *)(lVar5 + 0x1c),uVar7,*(undefined4 *)(lVar5 + 0x18),0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar2,uVar3,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar5 + 0x14),uVar3,uRam0000000003d5e778);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,uVar7,uRam0000000003d5e860);
      fVar8 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
      fVar9 = *(float *)(lVar5 + 0x24);
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar8 * fVar9,param_2 * fVar9,param_3 * fVar9,
                              *(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x1c),uVar7,
                              *(undefined4 *)(lVar5 + 0x18),0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar5 + 0x14),uVar3,uRam0000000003d5e778);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,uVar7,uRam0000000003d5e860);
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(*(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c),
                              *(undefined4 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x10),
                              *(undefined4 *)(lVar5 + 0x1c),uVar7,*(undefined4 *)(lVar5 + 0x18),0,0)
      ;
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar5 + 0x14),uVar4,uRam0000000003d5e780);
      uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,uVar7,uRam0000000003d5e868);
      uVar7 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar7,0);
      uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,lVar1,uRam0000000003d62258,0);
      /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,uVar3,uRam0000000003d5e6f0);
      return uVar2;
    }
  }
  lVar5 = func_0x00f78af4();
  return *(undefined8 *)(lVar5 + 0x10);
}



// ============================================================
// RVA: 0x151d368 | Atlas.UI.UIRewardBehaviour.SetCompletedAndStamp
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_UI_UIRewardBehaviour__SetCompletedAndStamp
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  Atlas_UI_UIRewardBehaviour__Set(param_4,1);
  plVar7 = *(long **)(param_4 + 0x20);
  if ((bRam0000000003eb4869 & 1) == 0) {
    func_0x00f78a20(0x3d5e7c0,0);
    func_0x00f78a20(0x3d5e7c8);
    func_0x00f78a20(0x3d5e800);
    bRam0000000003eb4869 = 1;
  }
  if (plVar7 != (long *)0x0) {
    lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar7,0);
    fVar8 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    param_2 = param_2 * -30.0;
    param_3 = param_3 * -30.0;
    /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar8 * -30.0,param_2,param_3,0);
    if (lVar1 != 0) {
      /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar1,0);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(lVar1,0,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f82bc,uVar2,0x1b,uRam0000000003d5e7c0);
      fVar8 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(fVar8 * 4.0,param_2 * 4.0,param_3 * 4.0,lVar1,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar2 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar1,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f8140,uVar2,0x1b,uRam0000000003d5e7c8);
      uStack_50 = 0;
      uStack_48 = 0;
      /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,0,&uStack_50,0);
      (**(code **)(*plVar7 + 0x2a8))
                ((undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,uStack_48._4_4_,plVar7,
                 *(undefined8 *)(*plVar7 + 0x2b0));
      uVar2 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,_UNK_033f82b8,plVar7,0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,lVar1,uRam0000000003d5e800);
      return uVar2;
    }
  }
  auVar10 = func_0x00f78af4();
  lVar1 = auVar10._8_8_;
  uVar2 = auVar10._0_8_;
  if ((bRam0000000003eb486a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d62258);
    func_0x00f78a20(0x3d26a58);
    bRam0000000003eb486a = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0_TypeInfo*/ uRam0000000003d26a58);
  Atlas_UI_AtlasTweenAnimations___c__DisplayClass8_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_6;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    fVar8 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (lVar1 != 0) {
      fVar9 = *(float *)(lVar1 + 0x20);
      param_2 = param_2 * fVar9;
      param_3 = param_3 * fVar9;
      uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar8 * fVar9,param_2,param_3,*(undefined4 *)(lVar1 + 0x10),
                              *(undefined4 *)(lVar1 + 0x1c),uVar2,*(undefined4 *)(lVar1 + 0x18),0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar4,uVar5,0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar5,uRam0000000003d5e778);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,uVar2,uRam0000000003d5e860);
      fVar8 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
      fVar9 = *(float *)(lVar1 + 0x24);
      uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar8 * fVar9,param_2 * fVar9,param_3 * fVar9,
                              *(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x1c),uVar2,
                              *(undefined4 *)(lVar1 + 0x18),0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar5,uVar6,0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar5,uRam0000000003d5e778);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,uVar2,uRam0000000003d5e860);
      uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                              *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x10),
                              *(undefined4 *)(lVar1 + 0x1c),uVar2,*(undefined4 *)(lVar1 + 0x18),0,0)
      ;
      uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar6,uRam0000000003d5e780);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar6,uVar2,uRam0000000003d5e868);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar5,uVar2,0);
      uVar5 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar5,lVar3,uRam0000000003d62258,0);
      /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar2,uVar5,uRam0000000003d5e6f0);
      return uVar4;
    }
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x10);
}



// ============================================================
// RVA: 0x151d394 | Atlas.UI.UIRewardBehaviour.Wiggle
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_UI_UIRewardBehaviour__Wiggle
          (undefined4 param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4e01 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4e01 = 1;
  }
  plVar2 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      auVar6._0_8_ = func_0x00f78e5c(plVar2);
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar6._8_8_ = 0;
      return auVar6;
    }
  }
  fVar4 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar1 = _UNK_033f82c4;
  param_2 = param_2 * 0.25;
  param_3 = param_3 * 0.25;
  uVar3 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar4 * 0.25,param_2,param_3,_UNK_033f82c4,0x40a00000,plVar2,4,0);
  uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_1,uVar3,uRam0000000003d5e780);
  /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,param_4,uRam0000000003d5e868);
  fVar4 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
  uVar3 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar4 * 8.0,param_2 * 8.0,param_3 * 8.0,uVar1,0x3f800000,plVar2,4,0);
  uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_1,uVar3,uRam0000000003d5e780);
  /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,param_4,uRam0000000003d5e868);
  uVar3 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(0xc1700000,0x41c80000,0,uVar1,0x3f800000,plVar2,4,0,0);
  uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_1,uVar3,uRam0000000003d5e780);
  auVar5._0_8_ = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,param_4,uRam0000000003d5e868);
  if ((auVar5._0_8_ != 0) && (*(char *)(auVar5._0_8_ + 0xe8) != '\0')) {
    *(undefined8 *)(auVar5._0_8_ + 0x80) = param_5;
  }
  auVar5._8_8_ = param_5;
  return auVar5;
}



// ============================================================
// RVA: 0x151d540 | Atlas.UI.UIRewardBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIRewardBehaviour___ctor(ulong param_1)

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



