// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadePanelBehavior

// ============================================================
// RVA: 0x1512ddc | Atlas.UI.UIArcadePanelBehavior.get_MapRepresentation
// ============================================================

undefined8 Atlas_UI_UIArcadePanelBehavior__get_MapRepresentation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1512de4 | Atlas.UI.UIArcadePanelBehavior.get_EventRepresentations
// ============================================================

undefined8 Atlas_UI_UIArcadePanelBehavior__get_EventRepresentations(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1512dec | Atlas.UI.UIArcadePanelBehavior.get_GraphicsTolColourGold
// ============================================================

undefined8 Atlas_UI_UIArcadePanelBehavior__get_GraphicsTolColourGold(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1512df4 | Atlas.UI.UIArcadePanelBehavior.get_GoldColour
// ============================================================

undefined4 Atlas_UI_UIArcadePanelBehavior__get_GoldColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1512e00 | Atlas.UI.UIArcadePanelBehavior.get_Button
// ============================================================

undefined8 Atlas_UI_UIArcadePanelBehavior__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1512e08 | Atlas.UI.UIArcadePanelBehavior.DoCompletedAnimation
// ============================================================

void Atlas_UI_UIArcadePanelBehavior__DoCompletedAnimation(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = /*Atlas.UI.UIArcadePanelBehavior$$AnimateArcadePanel*/ func_0x01512e34();
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
// RVA: 0x1512e34 | Atlas.UI.UIArcadePanelBehavior.AnimateArcadePanel
// ============================================================

long Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4d84 & 1) == 0) {
    func_0x00f78a20(0x3d29418);
    bRam0000000003eb4d84 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23_TypeInfo*/ uRam0000000003d29418);
  iVar6 = 0;
  /*Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23$$.ctor*/ func_0x0156b8c4(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *(undefined4 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  auVar9 = func_0x00f78af4();
  lVar1 = auVar9._0_8_;
  uVar8 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  if (iVar6 == 3) {
    puVar7 = (undefined4 *)(lVar1 + 0x40);
  }
  else if (iVar6 == 2) {
    puVar7 = (undefined4 *)(lVar1 + 0x50);
  }
  else {
    if (iVar6 != 1) goto code_r0x01512f44;
    puVar7 = (undefined4 *)(lVar1 + 0x60);
  }
  uVar8 = *puVar7;
code_r0x01512f44:
  lVar2 = /*Atlas.UI.UIArcadePanelBehavior$$AnimateMedal*/ func_0x01512f74(uVar8,lVar1,auVar9._8_8_);
  if (lVar2 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar4,uVar5,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(lVar1);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (*pcRam0000000003ec01e0)(lVar1,lVar2);
      return lVar1;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar4,uVar5,0);
  }
  uVar5 = func_0x00f78a24(0x3d5a8a8);
  auVar9 = func_0x00f78ac0(uVar4,uVar5);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*pcRam0000000003ec01e0)(auVar9._0_8_,auVar9._8_8_);
  return lVar1;
}



// ============================================================
// RVA: 0x1512eb8 | Atlas.UI.UIArcadePanelBehavior.DoMedalAnimation
// ============================================================

void Atlas_UI_UIArcadePanelBehavior__DoMedalAnimation(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  if (param_3 == 3) {
    puVar5 = (undefined4 *)(param_1 + 0x40);
  }
  else if (param_3 == 2) {
    puVar5 = (undefined4 *)(param_1 + 0x50);
  }
  else {
    if (param_3 != 1) goto LAB_01512f44;
    puVar5 = (undefined4 *)(param_1 + 0x60);
  }
  uVar6 = *puVar5;
LAB_01512f44:
  lVar1 = /*Atlas.UI.UIArcadePanelBehavior$$AnimateMedal*/ func_0x01512f74(uVar6,param_1,param_2);
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
  auVar7 = func_0x00f78ac0(uVar3,uVar4);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e0)(auVar7._0_8_,auVar7._8_8_);
  return;
}



// ============================================================
// RVA: 0x1512f74 | Atlas.UI.UIArcadePanelBehavior.AnimateMedal
// ============================================================

/* WARNING: Possible PIC construction at 0x01513164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513168) */

long Atlas_UI_UIArcadePanelBehavior__AnimateMedal
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4d85 & 1) == 0) {
    func_0x00f78a20(0x3d29420);
    bRam0000000003eb4d85 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25_TypeInfo*/ uRam0000000003d29420);
  /*Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25$$.ctor*/ func_0x0156bcb0(lVar1,0,0);
  if (lVar1 == 0) {
    lVar1 = func_0x00f78af4();
    if ((bRam0000000003eb4d86 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d5e778);
      func_0x00f78a20(0x3d5e760);
      func_0x00f78a20(0x3d5e790);
      func_0x00f78a20(0x3d5e860);
      bRam0000000003eb4d86 = 1;
    }
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,lVar1,uRam0000000003d5e860);
    uVar3 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(0,0,0x40e00000,0x3f800000,*(undefined8 *)(lVar1 + 0x88),0,0);
    uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,0x23,uRam0000000003d5e790);
    /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar2,uVar3,0);
    uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(0,0,0xc0e00000,0x3f800000,*(undefined8 *)(lVar1 + 0x88),0,0);
    lVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,0x23,uRam0000000003d5e790);
    if ((bRam0000000003eb66bc & 1) == 0) {
      func_0x00f78a20(0x3d24878,uRam0000000003d5e760);
      bRam0000000003eb66bc = 1;
    }
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0xe8) != '\0')) && (*(char *)(lVar1 + 0x100) == '\0')) {
      if (*(int *)(lVar1 + 0x10) == 1) {
        uVar2 = func_0x00f78adc(lVar1,/*DG.Tweening.Sequence_TypeInfo*/ uRam0000000003d24878);
        /*DG.Tweening.TweenSettingsExtensions$$PrependInterval*/ func_0x016c3150(0x3e800000,uVar2,0);
      }
      else {
        *(undefined4 *)(lVar1 + 0xac) = 0x3e800000;
        *(undefined1 *)(lVar1 + 0x118) = 0;
      }
    }
    return lVar1;
  }
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  *(undefined4 *)(lVar1 + 0x30) = param_7;
  *(undefined4 *)(lVar1 + 0x34) = param_1;
  *(undefined4 *)(lVar1 + 0x38) = param_2;
  *(undefined4 *)(lVar1 + 0x3c) = param_3;
  *(undefined4 *)(lVar1 + 0x40) = param_4;
  *(undefined4 *)(lVar1 + 0x20) = param_5;
  return lVar1;
}



// ============================================================
// RVA: 0x1513028 | Atlas.UI.UIArcadePanelBehavior.DoMedalPanelAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x01513164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513168) */

long Atlas_UI_UIArcadePanelBehavior__DoMedalPanelAnimation(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4d86 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e760);
    func_0x00f78a20(0x3d5e790);
    func_0x00f78a20(0x3d5e860);
    bRam0000000003eb4d86 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
  /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar1,param_1,uRam0000000003d5e860);
  uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(0,0,0x40e00000,0x3f800000,*(undefined8 *)(param_1 + 0x88),0,0);
  uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,0x23,uRam0000000003d5e790);
  /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar1,uVar2,0);
  uVar1 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(0,0,0xc0e00000,0x3f800000,*(undefined8 *)(param_1 + 0x88),0,0);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar1,0x23,uRam0000000003d5e790);
  if ((bRam0000000003eb66bc & 1) == 0) {
    func_0x00f78a20(0x3d24878,uRam0000000003d5e760);
    bRam0000000003eb66bc = 1;
  }
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) && (*(char *)(lVar3 + 0x100) == '\0')) {
    if (*(int *)(lVar3 + 0x10) == 1) {
      uVar1 = func_0x00f78adc(lVar3,/*DG.Tweening.Sequence_TypeInfo*/ uRam0000000003d24878);
      /*DG.Tweening.TweenSettingsExtensions$$PrependInterval*/ func_0x016c3150(0x3e800000,uVar1,0);
    }
    else {
      *(undefined4 *)(lVar3 + 0xac) = 0x3e800000;
      *(undefined1 *)(lVar3 + 0x118) = 0;
    }
  }
  return lVar3;
}



// ============================================================
// RVA: 0x15131dc | Atlas.UI.UIArcadePanelBehavior..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIArcadePanelBehavior___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4d87 & 1) == 0) {
    func_0x00f78a20(0x3d1ed20);
    bRam0000000003eb4d87 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.ArcadeEventRepresentationViewBehaviour[]_TypeInfo*/ uRam0000000003d1ed20,2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



