// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIAnimatingFlagsBehaviour

// ============================================================
// RVA: 0x1512028 | Atlas.UI.UIAnimatingFlagsBehaviour.get_DescriptionText
// ============================================================

undefined8 Atlas_UI_UIAnimatingFlagsBehaviour__get_DescriptionText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1512030 | Atlas.UI.UIAnimatingFlagsBehaviour.Awake
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIAnimatingFlagsBehaviour__Awake
                (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong extraout_x1;
  undefined8 in_x7;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 ***pppuVar10;
  undefined *puVar11;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4d7e & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4d7e = 1;
  }
  plVar2 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_3,0);
  if ((plVar2 != (long *)0x0) && (*plVar2 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    *(long **)(param_3 + 0x58) = plVar2;
    uVar3 = /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(plVar2,0);
    *(undefined4 *)(param_3 + 0x60) = extraout_s0;
    *(undefined4 *)(param_3 + 100) = param_2;
    return uVar3;
  }
  *(undefined8 *)(param_3 + 0x58) = 0;
  lVar4 = func_0x00f78af4();
  puStack_28 = &Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation;
  uVar6 = 0x3d29408;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d7f & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e788);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d64798);
    func_0x00f78a20(0x3d29408);
    bRam0000000003eb4d7f = 1;
  }
  lVar5 = func_0x00f78aec(/*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d29408);
  /*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0$$.ctor*/ func_0x0156b724(lVar5,0);
  uVar3 = extraout_x1;
  if (lVar5 != 0) {
    uVar6 = 0x3d5e860;
    *(ulong *)(lVar5 + 0x10) = extraout_x1;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,lVar4,uRam0000000003d5e860);
    if (*(long *)(lVar4 + 0x28) != 0) {
      uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x28),0);
      uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x38),uVar6,0);
      uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,*(undefined4 *)(lVar4 + 0x40),uRam0000000003d5e7a8);
      uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar3,uVar6,0);
      if (*(long *)(lVar4 + 0x20) != 0) {
        uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x20),0);
        uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x38),uVar7,0)
        ;
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(lVar4 + 0x40),uRam0000000003d5e7a8);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar6,uVar7,0);
        if (*(long *)(lVar4 + 0x30) != 0) {
          uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x30),0);
          uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x38),uVar7,
                                  0);
          uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(lVar4 + 0x40),uRam0000000003d5e7a8);
          uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar6,uVar7,0);
          uVar7 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x28),0);
          uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(lVar4 + 0x44),uRam0000000003d5e788);
          uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar6,uVar7,0);
          uVar7 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(lVar4 + 0x38),
                                  *(undefined8 *)(lVar4 + 0x20),0);
          uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(lVar4 + 0x44),uRam0000000003d5e788);
          uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar6,uVar7,0);
          uVar7 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(lVar4 + 0x38),
                                  *(undefined8 *)(lVar4 + 0x30),0);
          uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(lVar4 + 0x44),uRam0000000003d5e788);
          uVar7 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar6,uVar7,0);
          /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(extraout_s0_00,uVar7,uRam0000000003d5e778);
          uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar5 + 0x10),0);
          if ((uVar8 & 1) == 0) {
            uVar6 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
            /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar6,lVar5,uRam0000000003d64798,0);
            /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar3,uVar6,0);
          }
          if (*(long *)(lVar4 + 0x20) != 0) {
            uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x20),0);
            uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(lVar4 + 0x48),uVar7,0);
            uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(lVar4 + 0x4c),uRam0000000003d5e7a8);
            lVar5 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar3,uVar7,0);
            if (*(long *)(lVar4 + 0x30) != 0) {
              uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x30),0);
              uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(lVar4 + 0x48),uVar6,0);
              uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,*(undefined4 *)(lVar4 + 0x4c),uRam0000000003d5e7a8);
              uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(lVar5,uVar6,0);
              uVar7 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x30),
                                      0);
              uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(lVar4 + 0x50),uRam0000000003d5e788);
              /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar6,uVar7,0);
              return uVar3;
            }
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_88 = &Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted;
  pppuVar10 = &ppuStack_90;
  ppuStack_90 = &puStack_30;
  if ((*(long *)(lVar4 + 0x20) != 0) &&
     (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x20),0), lVar9 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0);
    plVar2 = *(long **)(lVar4 + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
      plVar2 = *(long **)(lVar4 + 0x20);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
        if ((*(long *)(lVar4 + 0x28) != 0) &&
           (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x28),0), lVar9 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0);
          plVar2 = *(long **)(lVar4 + 0x20);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
            plVar2 = *(long **)(lVar4 + 0x28);
            if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
              return uVar3;
            }
          }
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  puVar11 = &Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar9 == 0) {
    uVar3 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar9,0,0,0,0,in_x7,uVar6,lVar5,uVar3,lVar4,pppuVar10,puVar11);
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x15120ac | Atlas.UI.UIAnimatingFlagsBehaviour.PlayCompleteAnimation
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                (undefined4 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 in_x7;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  uVar3 = 0x3d29408;
  if ((bRam0000000003eb4d7f & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e788);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d64798);
    func_0x00f78a20(0x3d29408);
    bRam0000000003eb4d7f = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d29408);
  /*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0$$.ctor*/ func_0x0156b724(lVar2,0);
  if (lVar2 != 0) {
    uVar3 = 0x3d5e860;
    *(ulong *)(lVar2 + 0x10) = param_3;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(param_3,param_2,uRam0000000003d5e860);
    if (*(long *)(param_2 + 0x28) != 0) {
      uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_2 + 0x28),0);
      uVar3 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x38),uVar3,
                              0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,*(undefined4 *)(param_2 + 0x40),uRam0000000003d5e7a8);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(param_3,uVar3,0);
      if (*(long *)(param_2 + 0x20) != 0) {
        uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_2 + 0x20),0);
        uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x38),
                                uVar4,0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_2 + 0x40),uRam0000000003d5e7a8);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
        if (*(long *)(param_2 + 0x30) != 0) {
          uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_2 + 0x30),0);
          uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x38),
                                  uVar4,0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_2 + 0x40),uRam0000000003d5e7a8);
          uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
          uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x28),
                                  0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_2 + 0x44),uRam0000000003d5e788);
          uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
          uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(param_2 + 0x38),
                                  *(undefined8 *)(param_2 + 0x20),0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_2 + 0x44),uRam0000000003d5e788);
          uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
          uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(param_2 + 0x38),
                                  *(undefined8 *)(param_2 + 0x30),0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_2 + 0x44),uRam0000000003d5e788);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
          /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_1,uVar4,uRam0000000003d5e778);
          uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar2 + 0x10),0);
          if ((uVar5 & 1) == 0) {
            uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
            /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,lVar2,uRam0000000003d64798,0);
            /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(param_3,uVar3,0);
          }
          if (*(long *)(param_2 + 0x20) != 0) {
            uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_2 + 0x20),0);
            uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(param_2 + 0x48),uVar4,0);
            uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_2 + 0x4c),uRam0000000003d5e7a8);
            lVar2 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(param_3,uVar4,0);
            if (*(long *)(param_2 + 0x30) != 0) {
              uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_2 + 0x30),0);
              uVar3 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(param_2 + 0x48),uVar3,0);
              uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,*(undefined4 *)(param_2 + 0x4c),uRam0000000003d5e7a8);
              uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(lVar2,uVar3,0);
              uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(param_2 + 0x48),
                                      *(undefined8 *)(param_2 + 0x30),0);
              uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_2 + 0x50),uRam0000000003d5e788);
              /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
              return param_3;
            }
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_68 = &Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted;
  ppuVar9 = &puStack_70;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar6 + 0x20) != 0) &&
     (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x20),0), lVar7 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
    plVar8 = *(long **)(lVar6 + 0x20);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
      plVar8 = *(long **)(lVar6 + 0x20);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        if ((*(long *)(lVar6 + 0x28) != 0) &&
           (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x28),0), lVar7 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
          plVar8 = *(long **)(lVar6 + 0x20);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
            plVar8 = *(long **)(lVar6 + 0x28);
            if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
              return uVar5;
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  puVar10 = &Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar7,0,0,0,0,in_x7,uVar3,lVar2,param_3,lVar6,ppuVar9,puVar10);
    uVar5 = (ulong)uVar1;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x151243c | Atlas.UI.UIAnimatingFlagsBehaviour.SetCompleted
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 in_x7;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar5;
  undefined *puVar6;
  
  puVar5 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x20),0), lVar2 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,1,0);
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
      plVar3 = *(long **)(param_1 + 0x20);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0), lVar2 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,1,0);
          plVar3 = *(long **)(param_1 + 0x20);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
            plVar3 = *(long **)(param_1 + 0x28);
            if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
              return uVar4;
            }
          }
        }
      }
    }
  }
  lVar2 = func_0x00f78af4();
  puVar6 = &Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar2,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,param_1,puVar5,
                            puVar6);
    uVar4 = (ulong)uVar1;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1512500 | Atlas.UI.UIAnimatingFlagsBehaviour.OnDestroy
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined4 Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy(long param_1)

{
  undefined4 uVar1;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                            unaff_x29,unaff_x30);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x151250c | Atlas.UI.UIAnimatingFlagsBehaviour.Reset
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UIAnimatingFlagsBehaviour__Reset(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                    *(long *)(param_1 + 0x58),0);
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
      plVar2 = *(long **)(param_1 + 0x28);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0);
          /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
          if (lVar3 != 0) {
            /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar3,0);
            plVar2 = *(long **)(param_1 + 0x20);
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
              plVar2 = *(long **)(param_1 + 0x20);
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
                plVar2 = *(long **)(param_1 + 0x30);
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
                  plVar2 = *(long **)(param_1 + 0x30);
                  if (plVar2 != (long *)0x0) {
                    (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
                    if ((bRam0000000003eb5c29 & 1) == 0) {
                      func_0x00f78a20(0x3d20bc0,0,0);
                      bRam0000000003eb5c29 = 1;
                    }
                    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    if ((bRam0000000003eb5af0 & 1) == 0) {
                      func_0x00f78a20(0x3d20bc0,0,0);
                      func_0x00f78a20(0x3d25440);
                      bRam0000000003eb5af0 = 1;
                    }
                    if (param_1 == 0) {
                      uVar4 = 0;
                    }
                    else {
                      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0,in_x7,unaff_x22,unaff_x21,
                                              unaff_x20,unaff_x19);
                      uVar4 = (ulong)uVar1;
                    }
                    return uVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = func_0x00f78af4();
  uVar6 = 6;
  *(undefined8 *)(uVar4 + 0x38) = _UNK_033f8700;
  *(undefined8 *)(uVar4 + 0x40) = 0x600000006;
  *(undefined4 *)(uVar4 + 0x48) = 0x3e4ccccd;
  *(undefined8 *)(uVar4 + 0x4c) = 0x1800000018;
  uVar5 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(uVar4 + 0x60) = uVar5;
  *(undefined4 *)(uVar4 + 100) = uVar6;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1512614 | Atlas.UI.UIAnimatingFlagsBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_UIAnimatingFlagsBehaviour___ctor(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 6;
  *(undefined8 *)(param_1 + 0x38) = _UNK_033f8700;
  *(undefined8 *)(param_1 + 0x40) = 0x600000006;
  *(undefined4 *)(param_1 + 0x48) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x4c) = 0x1800000018;
  uVar1 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}



