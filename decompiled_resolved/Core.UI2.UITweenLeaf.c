// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UITweenLeaf

// ============================================================
// RVA: 0x2f8d7c0 | Core.UI2.UITweenLeaf.PerformTweenAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8da90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8db7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8dbac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8db80) */
/* WARNING: Removing unreachable block (ram,0x02f8da94) */
/* WARNING: Removing unreachable block (ram,0x02f8daa4) */
/* WARNING: Removing unreachable block (ram,0x02f8daac) */
/* WARNING: Removing unreachable block (ram,0x02f8dab0) */
/* WARNING: Removing unreachable block (ram,0x02f8dac0) */
/* WARNING: Removing unreachable block (ram,0x02f8dac8) */
/* WARNING: Removing unreachable block (ram,0x02f8dadc) */
/* WARNING: Removing unreachable block (ram,0x02f8dae8) */
/* WARNING: Removing unreachable block (ram,0x02f8db00) */
/* WARNING: Removing unreachable block (ram,0x02f8db08) */
/* WARNING: Removing unreachable block (ram,0x02f8db0c) */
/* WARNING: Removing unreachable block (ram,0x02f8db20) */
/* WARNING: Removing unreachable block (ram,0x02f8db30) */
/* WARNING: Removing unreachable block (ram,0x02f8db4c) */
/* WARNING: Removing unreachable block (ram,0x02f8dbb0) */
/* WARNING: Removing unreachable block (ram,0x02f8dce4) */
/* WARNING: Removing unreachable block (ram,0x02f8dbe4) */
/* WARNING: Removing unreachable block (ram,0x02f8e7e8) */
/* WARNING: Removing unreachable block (ram,0x02f8e854) */
/* WARNING: Removing unreachable block (ram,0x02f8e85c) */
/* WARNING: Removing unreachable block (ram,0x02f8e864) */
/* WARNING: Removing unreachable block (ram,0x02f8e718) */
/* WARNING: Removing unreachable block (ram,0x02f8e770) */
/* WARNING: Removing unreachable block (ram,0x02f8e778) */
/* WARNING: Removing unreachable block (ram,0x02f8e780) */
/* WARNING: Removing unreachable block (ram,0x02f8e63c) */
/* WARNING: Removing unreachable block (ram,0x02f8e6a4) */
/* WARNING: Removing unreachable block (ram,0x02f8e6ac) */
/* WARNING: Removing unreachable block (ram,0x02f8e6b4) */
/* WARNING: Removing unreachable block (ram,0x02f8e468) */
/* WARNING: Removing unreachable block (ram,0x02f8e47c) */
/* WARNING: Removing unreachable block (ram,0x02f8e4c8) */
/* WARNING: Removing unreachable block (ram,0x02f8e4d0) */
/* WARNING: Removing unreachable block (ram,0x02f8e4d8) */
/* WARNING: Removing unreachable block (ram,0x02f8e590) */
/* WARNING: Removing unreachable block (ram,0x02f8e598) */
/* WARNING: Removing unreachable block (ram,0x02f8e5a0) */
/* WARNING: Removing unreachable block (ram,0x02f8e2d0) */
/* WARNING: Removing unreachable block (ram,0x02f8e354) */
/* WARNING: Removing unreachable block (ram,0x02f8e35c) */
/* WARNING: Removing unreachable block (ram,0x02f8e364) */
/* WARNING: Removing unreachable block (ram,0x02f8e0dc) */
/* WARNING: Removing unreachable block (ram,0x02f8e0fc) */
/* WARNING: Removing unreachable block (ram,0x02f8e100) */
/* WARNING: Removing unreachable block (ram,0x02f8e15c) */
/* WARNING: Removing unreachable block (ram,0x02f8e164) */
/* WARNING: Removing unreachable block (ram,0x02f8e16c) */
/* WARNING: Removing unreachable block (ram,0x02f8df7c) */
/* WARNING: Removing unreachable block (ram,0x02f8dfd8) */
/* WARNING: Removing unreachable block (ram,0x02f8dfe0) */
/* WARNING: Removing unreachable block (ram,0x02f8dfe8) */
/* WARNING: Removing unreachable block (ram,0x02f8ddf0) */
/* WARNING: Removing unreachable block (ram,0x02f8ddf8) */
/* WARNING: Removing unreachable block (ram,0x02f8de64) */
/* WARNING: Removing unreachable block (ram,0x02f8de6c) */
/* WARNING: Removing unreachable block (ram,0x02f8de74) */
/* WARNING: Removing unreachable block (ram,0x02f8e5e0) */
/* WARNING: Removing unreachable block (ram,0x02f8dd10) */
/* WARNING: Removing unreachable block (ram,0x02f8dd78) */
/* WARNING: Removing unreachable block (ram,0x02f8dd80) */
/* WARNING: Removing unreachable block (ram,0x02f8dd88) */
/* WARNING: Removing unreachable block (ram,0x02f8dc04) */
/* WARNING: Removing unreachable block (ram,0x02f8e958) */
/* WARNING: Removing unreachable block (ram,0x02f8e95c) */
/* WARNING: Removing unreachable block (ram,0x02f8e9c4) */
/* WARNING: Removing unreachable block (ram,0x02f8e9c8) */
/* WARNING: Removing unreachable block (ram,0x02f8ea30) */
/* WARNING: Removing unreachable block (ram,0x02f8ea5c) */
/* WARNING: Removing unreachable block (ram,0x02f8ea70) */
/* WARNING: Removing unreachable block (ram,0x02f8ea80) */
/* WARNING: Removing unreachable block (ram,0x02f8ea88) */
/* WARNING: Removing unreachable block (ram,0x02f8ea8c) */
/* WARNING: Removing unreachable block (ram,0x02f8eab8) */
/* WARNING: Removing unreachable block (ram,0x02f8ea9c) */
/* WARNING: Removing unreachable block (ram,0x02f8e9e0) */
/* WARNING: Removing unreachable block (ram,0x02f8e974) */
/* WARNING: Removing unreachable block (ram,0x02f8dc14) */
/* WARNING: Removing unreachable block (ram,0x02f8dc70) */
/* WARNING: Removing unreachable block (ram,0x02f8dc78) */
/* WARNING: Removing unreachable block (ram,0x02f8dc80) */
/* WARNING: Removing unreachable block (ram,0x02f8e8c8) */
/* WARNING: Removing unreachable block (ram,0x02f8e8e4) */
/* WARNING: Removing unreachable block (ram,0x02f8e920) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined4
Core_UI2_UITweenLeaf__PerformTweenAnimation(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  puVar6 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebc684 & 1) == 0) {
    func_0x00f78a20(0x3d533f0);
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b8);
    func_0x00f78a20(0x3d5e6c8);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e708);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e728);
    func_0x00f78a20(0x3d5e760);
    func_0x00f78a20(0x3d5e770);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e790);
    func_0x00f78a20(0x3d5e7c8);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7b8);
    func_0x00f78a20(0x3d5e7e0);
    func_0x00f78a20(0x3d5e7e8);
    func_0x00f78a20(0x3d5e870);
    func_0x00f78a20(0x3d5e888);
    func_0x00f78a20(0x3d5e890);
    func_0x00f78a20(0x3d5f7d0);
    func_0x00f78a20(0x3d5f758);
    func_0x00f78a20(0x3d5f768);
    func_0x00f78a20(0x3d5f770);
    func_0x00f78a20(0x3d5f778);
    func_0x00f78a20(0x3d5f780);
    func_0x00f78a20(0x3d5f788);
    func_0x00f78a20(0x3d5f760);
    func_0x00f78a20(0x3d5f790);
    func_0x00f78a20(0x3d5f798);
    func_0x00f78a20(0x3d5f7a0);
    func_0x00f78a20(0x3d5f7a8);
    func_0x00f78a20(0x3d5f7b0);
    func_0x00f78a20(0x3d5f7b8);
    func_0x00f78a20(0x3d5f7c0);
    func_0x00f78a20(0x3d5f7c8);
    bRam0000000003ebc684 = 1;
  }
  *(undefined1 *)(param_1 + 0x31) = param_3;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53528);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d533f0);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  uVar3 = 0x3d23990;
  uVar7 = 0x2f8da94;
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
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar4,0,0,0,0,in_x7,uVar3,uVar5,param_2,param_1,puVar6,uVar7);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x2f8e95c | Core.UI2.UITweenLeaf.CalculateOffScreenStartingPosition
// ============================================================

ulong Core_UI2_UITweenLeaf__CalculateOffScreenStartingPosition(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar6 [16];
  undefined1 **ppuVar7;
  undefined *puVar8;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(param_1,0);
    uVar3 = Core_UI2_UITweenAnimationDirectionExtensions__GetDirectionVector(param_2);
    return uVar3;
  }
  auVar6 = func_0x00f78af4();
  puStack_48 = &Core_UI2_UITweenLeaf__CalculateOffScreenEndingPosition;
  ppuVar7 = &puStack_50;
  puStack_50 = &stack0xfffffffffffffff0;
  if (auVar6._0_8_ == 0) {
    lVar4 = func_0x00f78af4();
    puVar8 = &Core_UI2_UITweenLeaf__OnDestroy;
    if ((bRam0000000003ebc685 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ebc685 = 1;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((bRam0000000003eb5c29 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0,1,0);
      bRam0000000003eb5c29 = 1;
    }
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb5af0 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0,1,0);
      func_0x00f78a20(0x3d25440);
      bRam0000000003eb5af0 = 1;
    }
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*DG.Tweening.DOTween$$CompleteAndReturnKilledTot*/ func_0x01695dbc(lVar4);
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar4,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                              ppuVar7,puVar8);
      uVar3 = (ulong)(uint)(iVar2 + iVar1);
    }
    return uVar3;
  }
  /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(auVar6._0_8_,0);
  uVar3 = Core_UI2_UITweenAnimationDirectionExtensions__GetDirectionVector(auVar6._8_8_);
  return uVar3;
}



// ============================================================
// RVA: 0x2f8e9c8 | Core.UI2.UITweenLeaf.CalculateOffScreenEndingPosition
// ============================================================

ulong Core_UI2_UITweenLeaf__CalculateOffScreenEndingPosition(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar6;
  undefined *puVar7;
  
  puVar6 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(param_1,0);
    uVar3 = Core_UI2_UITweenAnimationDirectionExtensions__GetDirectionVector(param_2);
    return uVar3;
  }
  lVar4 = func_0x00f78af4();
  puVar7 = &Core_UI2_UITweenLeaf__OnDestroy;
  if ((bRam0000000003ebc685 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc685 = 1;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,1,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,1,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*DG.Tweening.DOTween$$CompleteAndReturnKilledTot*/ func_0x01695dbc(lVar4);
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar4,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,unaff_x19,puVar6
                            ,puVar7);
    uVar3 = (ulong)(uint)(iVar2 + iVar1);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x2f8ea34 | Core.UI2.UITweenLeaf.OnDestroy
// ============================================================

ulong Core_UI2_UITweenLeaf__OnDestroy(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam0000000003ebc685 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc685 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,1,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,1,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*DG.Tweening.DOTween$$CompleteAndReturnKilledTot*/ func_0x01695dbc(lVar4);
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar4,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                            unaff_x29,unaff_x30);
    uVar3 = (ulong)(uint)(iVar2 + iVar1);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x2f8eac8 | Core.UI2.UITweenLeaf.OnTweenPlaybackFinished
// ============================================================

undefined8 Core_UI2_UITweenLeaf__OnTweenPlaybackFinished(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003ebc686 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc686 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
  if ((((int)uVar2 != 0) && (*(char *)(param_1 + 0x31) == '\0')) &&
     (*(char *)(param_1 + 0x30) != '\0')) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ebe9d8)(lVar1,1);
      return uVar2;
    }
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
  return uVar2;
}



// ============================================================
// RVA: 0x2f8eb74 | Core.UI2.UITweenLeaf..ctor
// ============================================================

undefined1  [16] Core_UI2_UITweenLeaf___ctor(ulong param_1)

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



// ============================================================
// RVA: 0x2f8eb7c | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_0
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc687 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc687 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 0;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8ec80 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_1
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_1(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc688 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc688 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 2;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8ecf4 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_2
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_2(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc689 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc689 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 7;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8ed68 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_3
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_3(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc68a & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc68a = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 1;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8eddc | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_4
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_4(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc68b & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc68b = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 3;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8ee50 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_5
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_5(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc68c & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc68c = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 4;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8eec4 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_6
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_6(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc68d & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc68d = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 3;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8ef38 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_7
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_7(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc68e & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc68e = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 3;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8efac | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_8
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_8(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc68f & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc68f = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 6;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8f020 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_11
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_11(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc690 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc690 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 3;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8f094 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_12
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_12(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc691 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc691 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 8;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8f108 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_13
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_13(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc692 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc692 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 3;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8f17c | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_14
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_14(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc693 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc693 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 5;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8f1f0 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_9
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_9(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc694 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc694 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 0;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8f264 | Core.UI2.UITweenLeaf.<PerformTweenAnimation>b__5_10
// ============================================================

void Core_UI2_UITweenLeaf___PerformTweenAnimation_b__5_10(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc695 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc695 = 1;
  }
  cVar3 = *(char *)(param_1 + 0x18);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  bVar5 = cVar3 != '\0';
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lStack_68 = lVar10;
  uStack_6c = 5;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar16)(auStack_7c,bVar5,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x02f83534;
        iVar6 = func_0x00f78a44(lVar12);
        iVar7 = func_0x00f78ec0(lVar12);
        uVar2 = uStack_6c;
        if (iVar6 == 0) {
          uVar4 = *(ushort *)(lVar12 + 0x48);
          if (iVar7 == 0) {
            lVar12 = *plVar1 + (ulong)uVar4 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,uStack_6c,bVar5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          uVar2 = uStack_6c;
          lVar13 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar4) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar4);
code_r0x02f83634:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02f83604;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar1,uVar2,bVar5,puVar9);
      }
    }
    else if (*(char *)(lVar12 + 0x4a) == '\x02') {
      (*pcVar16)(uStack_6c,bVar5,lVar12);
    }
    else {
code_r0x02f83534:
      (*pcVar16)(plVar1,uStack_6c,bVar5,lVar12);
    }
code_r0x02f8355c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



