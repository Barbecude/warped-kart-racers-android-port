// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0

// ============================================================
// RVA: 0x156a514 | Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0..ctor
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen___c__DisplayClass31_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156a51c | Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0.<FillBarPassedReward>b__0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_SingleplayerChapterScreen___c__DisplayClass31_0___FillBarPassedReward_b__0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = *(long *)(param_4 + 0x10);
  if (lVar7 == 0) {
    auVar10 = func_0x00f78af4();
    lVar7 = auVar10._0_8_;
    *(undefined8 *)(lVar7 + 0x10) = *param_6;
    *(long *)(lVar7 + 0x20) = auVar10._8_8_;
    *(undefined8 **)(lVar7 + 0x28) = param_6;
    return lVar7;
  }
  /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(lVar7,1);
  plVar6 = *(long **)(lVar7 + 0x20);
  if ((bRam0000000003eb4869 & 1) == 0) {
    func_0x00f78a20(0x3d5e7c0,0);
    func_0x00f78a20(0x3d5e7c8);
    func_0x00f78a20(0x3d5e800);
    bRam0000000003eb4869 = 1;
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar6,0);
    fVar8 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    param_2 = param_2 * -30.0;
    param_3 = param_3 * -30.0;
    /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar8 * -30.0,param_2,param_3,0);
    if (lVar7 != 0) {
      /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar7,0);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      uVar1 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(lVar7,0,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f82bc,uVar1,0x1b,uRam0000000003d5e7c0);
      fVar8 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(fVar8 * 4.0,param_2 * 4.0,param_3 * 4.0,lVar7,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar1 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar7,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f8140,uVar1,0x1b,uRam0000000003d5e7c8);
      uStack_50 = 0;
      uStack_48 = 0;
      /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,0,&uStack_50,0);
      (**(code **)(*plVar6 + 0x2a8))
                ((undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,uStack_48._4_4_,plVar6,
                 *(undefined8 *)(*plVar6 + 0x2b0));
      uVar1 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,_UNK_033f82b8,plVar6,0);
      lVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar1,lVar7,uRam0000000003d5e800);
      return lVar7;
    }
  }
  auVar10 = func_0x00f78af4();
  lVar7 = auVar10._8_8_;
  uVar1 = auVar10._0_8_;
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
  lVar2 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0_TypeInfo*/ uRam0000000003d26a58);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0$$.ctor*/ func_0x0154707c(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 0x10) = param_6;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    fVar8 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (lVar7 != 0) {
      fVar9 = *(float *)(lVar7 + 0x20);
      param_2 = param_2 * fVar9;
      param_3 = param_3 * fVar9;
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar8 * fVar9,param_2,param_3,*(undefined4 *)(lVar7 + 0x10),
                              *(undefined4 *)(lVar7 + 0x1c),uVar1,*(undefined4 *)(lVar7 + 0x18),0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(lVar3,uVar4,0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar7 + 0x14),uVar4,uRam0000000003d5e778);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,uVar1,uRam0000000003d5e860);
      fVar8 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
      fVar9 = *(float *)(lVar7 + 0x24);
      uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar8 * fVar9,param_2 * fVar9,param_3 * fVar9,
                              *(undefined4 *)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c),uVar1,
                              *(undefined4 *)(lVar7 + 0x18),0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar7 + 0x14),uVar4,uRam0000000003d5e778);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,uVar1,uRam0000000003d5e860);
      uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(*(undefined4 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x2c),
                              *(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x10),
                              *(undefined4 *)(lVar7 + 0x1c),uVar1,*(undefined4 *)(lVar7 + 0x18),0,0)
      ;
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar7 + 0x14),uVar5,uRam0000000003d5e780);
      uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,uVar1,uRam0000000003d5e868);
      uVar1 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar1,0);
      uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar2,uRam0000000003d62258,0);
      /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar1,uVar4,uRam0000000003d5e6f0);
      return lVar3;
    }
  }
  lVar7 = func_0x00f78af4();
  return *(long *)(lVar7 + 0x10);
}



