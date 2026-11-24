// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIScreenBehaviour

// ============================================================
// RVA: 0x2f89634 | Core.UI2.UIScreenBehaviour.AfterInstantiated
// ============================================================

void Core_UI2_UIScreenBehaviour__AfterInstantiated(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x02f8963c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  return;
}



// ============================================================
// RVA: 0x2f89640 | Core.UI2.UIScreenBehaviour.BeforeDestroyed
// ============================================================

void Core_UI2_UIScreenBehaviour__BeforeDestroyed(long *param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003ebc675 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    bRam0000000003ebc675 = 1;
  }
  uVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x02f896cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}



// ============================================================
// RVA: 0x2f8a264 | Core.UI2.UIScreenBehaviour.PlayStateAnimationEnter
// ============================================================

void Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar1 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(param_1);
  if (iVar1 == 0) goto LAB_02f8a348;
  lVar4 = param_1[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    iVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar4,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar1 == 0) {
LAB_02f8a348:
      iVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      fVar6 = 0.0;
      if (iVar1 != 0) {
        uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar6 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar2,0,0,0);
      }
      fVar7 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(param_1 + 7) = fVar6 + fVar7;
      *(undefined1 *)((long)param_1 + 0x34) = 1;
      return;
    }
    lVar4 = param_1[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar4 != 0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar4,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto LAB_02f8a348;
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar1 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar4);
  if (iVar1 != 0) {
    lVar5 = *(long *)(lVar4 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 == 0) {
code_r0x02f8a540:
      plVar3 = (long *)func_0x00f78af4();
      *(undefined4 *)((long)plVar3 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar3,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
      return;
    }
    iVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar5,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar1 != 0) {
      lVar5 = *(long *)(lVar4 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar5 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar5,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar6 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar2,1,0,0);
  fVar7 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar4 + 0x38) = fVar6 + fVar7;
  return;
}



// ============================================================
// RVA: 0x2f8a3e4 | Core.UI2.UIScreenBehaviour.PlayStateAnimationExit
// ============================================================

void Core_UI2_UIScreenBehaviour__PlayStateAnimationExit(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar1 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(param_1);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar4 == 0) {
LAB_02f8a540:
      plVar3 = (long *)func_0x00f78af4();
      *(undefined4 *)((long)plVar3 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar3,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
      return;
    }
    iVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar4,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar1 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar4 == 0) goto LAB_02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar4,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar5 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar2,1,0,0);
  fVar6 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(param_1 + 0x38) = fVar5 + fVar6;
  return;
}



// ============================================================
// RVA: 0x2f8a63c | Core.UI2.UIScreenBehaviour.HasStateAnimationFinished
// ============================================================

ulong Core_UI2_UIScreenBehaviour__HasStateAnimationFinished(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000003ebc677 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    bRam0000000003ebc677 = 1;
  }
  iVar1 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(param_1);
  if (iVar1 == 0) {
    fVar6 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
    if (fVar6 < *(float *)(param_1 + 0x38)) {
      uVar3 = 0;
    }
    else {
      uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*DG.Tweening.DOTween$$IsTweening*/ func_0x01696ee8(uVar4,0,0);
      uVar3 = (ulong)(uVar2 ^ 1);
    }
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      plVar5 = (long *)func_0x00f78af4();
      if ((bRam0000000003ebc673 & 1) == 0) {
        func_0x00f78a20(0x3d2a560);
        bRam0000000003ebc673 = 1;
      }
      *(undefined4 *)((long)plVar5 + 0x4c) = 2;
      if (plVar5[4] != 0) {
        /*System.Action<UIScreen, int>$$Invoke*/ func_0x01e6e280(plVar5[4],plVar5,(int)plVar5[9],uRam0000000003d2a560);
      }
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
      return uVar3;
    }
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_78,*(long *)(param_1 + 0x18),0,0);
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_30 = uStack_58;
    fVar6 = (float)/*UnityEngine.AnimatorStateInfo$$get_normalizedTime*/ func_0x03213aac(&uStack_50,0);
    uVar3 = (ulong)(1.0 <= fVar6);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x2f8a7ec | Core.UI2.UIScreenBehaviour.get_Canvas
// ============================================================

undefined8 Core_UI2_UIScreenBehaviour__get_Canvas(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x2f8a7f4 | Core.UI2.UIScreenBehaviour.get_LayerIndex
// ============================================================

undefined4 Core_UI2_UIScreenBehaviour__get_LayerIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x2f8a7fc | Core.UI2.UIScreenBehaviour.set_LayerIndex
// ============================================================

void Core_UI2_UIScreenBehaviour__set_LayerIndex(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x2f8a804 | Core.UI2.UIScreenBehaviour.Update
// ============================================================

void Core_UI2_UIScreenBehaviour__Update(long *param_1)

{
  if (*(char *)((long)param_1 + 0x34) != '\0') {
    (**(code **)(*param_1 + 0x178))(param_1,1,*(undefined8 *)(*param_1 + 0x180));
    *(undefined1 *)((long)param_1 + 0x34) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x2f8a83c | Core.UI2.UIScreenBehaviour.SetVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8a8a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a8a8) */
/* WARNING: Removing unreachable block (ram,0x02f8a8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8a8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8a8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8a908) */
/* WARNING: Removing unreachable block (ram,0x02f8a91c) */
/* WARNING: Removing unreachable block (ram,0x02f8a92c) */
/* WARNING: Removing unreachable block (ram,0x02f8a934) */
/* WARNING: Removing unreachable block (ram,0x02f8a938) */
/* WARNING: Removing unreachable block (ram,0x02f8a8b4) */
/* WARNING: Removing unreachable block (ram,0x0321a930) */
/* WARNING: Removing unreachable block (ram,0x0321a954) */
/* WARNING: Removing unreachable block (ram,0x0321a968) */
/* WARNING: Removing unreachable block (ram,0x02f8a948) */
/* WARNING: Removing unreachable block (ram,0x02f8a994) */
/* WARNING: Removing unreachable block (ram,0x02f8a94c) */
/* WARNING: Removing unreachable block (ram,0x02f8a9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8a9f4) */
/* WARNING: Removing unreachable block (ram,0x02f8aa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8aab4) */
/* WARNING: Removing unreachable block (ram,0x02f8aabc) */
/* WARNING: Removing unreachable block (ram,0x02f8aac4) */
/* WARNING: Removing unreachable block (ram,0x02f8aad0) */
/* WARNING: Removing unreachable block (ram,0x02f8abb8) */
/* WARNING: Removing unreachable block (ram,0x02f8abc4) */
/* WARNING: Removing unreachable block (ram,0x02f8abcc) */
/* WARNING: Removing unreachable block (ram,0x02f8abd0) */
/* WARNING: Removing unreachable block (ram,0x02f8abd4) */
/* WARNING: Removing unreachable block (ram,0x02f8aae4) */
/* WARNING: Removing unreachable block (ram,0x02f8ab24) */
/* WARNING: Removing unreachable block (ram,0x02f8ab70) */
/* WARNING: Removing unreachable block (ram,0x02f8abf8) */
/* WARNING: Removing unreachable block (ram,0x02f8ac04) */
/* WARNING: Removing unreachable block (ram,0x02f8ac0c) */
/* WARNING: Removing unreachable block (ram,0x02f8ac14) */
/* WARNING: Removing unreachable block (ram,0x02f8ac40) */
/* WARNING: Removing unreachable block (ram,0x02f8ac7c) */
/* WARNING: Removing unreachable block (ram,0x02f8ac88) */
/* WARNING: Removing unreachable block (ram,0x02f8ac90) */
/* WARNING: Removing unreachable block (ram,0x02f8ac98) */
/* WARNING: Removing unreachable block (ram,0x02f8aca4) */
/* WARNING: Removing unreachable block (ram,0x02f8acb0) */
/* WARNING: Removing unreachable block (ram,0x02f8acb8) */
/* WARNING: Removing unreachable block (ram,0x02f8acc0) */
/* WARNING: Removing unreachable block (ram,0x02f8acd4) */
/* WARNING: Removing unreachable block (ram,0x02f8ace0) */
/* WARNING: Removing unreachable block (ram,0x02f8ace8) */
/* WARNING: Removing unreachable block (ram,0x02f8ae0c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae14) */
/* WARNING: Removing unreachable block (ram,0x02f8ae1c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae24) */
/* WARNING: Removing unreachable block (ram,0x02f8ae30) */
/* WARNING: Removing unreachable block (ram,0x02f8ae38) */
/* WARNING: Removing unreachable block (ram,0x02f8ae40) */
/* WARNING: Removing unreachable block (ram,0x02f8ae4c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae5c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae64) */
/* WARNING: Removing unreachable block (ram,0x02f8ae70) */
/* WARNING: Removing unreachable block (ram,0x02f8ae7c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae84) */
/* WARNING: Removing unreachable block (ram,0x02f8ae8c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae98) */
/* WARNING: Removing unreachable block (ram,0x02f8aea4) */
/* WARNING: Removing unreachable block (ram,0x02f8aeb8) */
/* WARNING: Removing unreachable block (ram,0x02f8aec4) */
/* WARNING: Removing unreachable block (ram,0x02f8aecc) */
/* WARNING: Removing unreachable block (ram,0x02f8aed0) */
/* WARNING: Removing unreachable block (ram,0x02f8ad14) */
/* WARNING: Removing unreachable block (ram,0x02f8ad1c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad24) */
/* WARNING: Removing unreachable block (ram,0x02f8ad2c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad38) */
/* WARNING: Removing unreachable block (ram,0x02f8ad44) */
/* WARNING: Removing unreachable block (ram,0x02f8ad4c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad6c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad78) */
/* WARNING: Removing unreachable block (ram,0x02f8ad80) */
/* WARNING: Removing unreachable block (ram,0x02f8ad88) */
/* WARNING: Removing unreachable block (ram,0x02f8af08) */
/* WARNING: Removing unreachable block (ram,0x02f8af0c) */
/* WARNING: Removing unreachable block (ram,0x02f8af10) */
/* WARNING: Removing unreachable block (ram,0x02f8addc) */
/* WARNING: Removing unreachable block (ram,0x02f8ae00) */
/* WARNING: Removing unreachable block (ram,0x02f8ab34) */
/* WARNING: Removing unreachable block (ram,0x02f8ab44) */
/* WARNING: Removing unreachable block (ram,0x02f8ab4c) */
/* WARNING: Removing unreachable block (ram,0x02f8ab54) */
/* WARNING: Removing unreachable block (ram,0x02f8ab80) */
/* WARNING: Removing unreachable block (ram,0x02f8ab60) */
/* WARNING: Removing unreachable block (ram,0x02f8a954) */
/* WARNING: Removing unreachable block (ram,0x02f8a96c) */
/* WARNING: Removing unreachable block (ram,0x02f8a974) */
/* WARNING: Removing unreachable block (ram,0x02f8a978) */

uint Core_UI2_UIScreenBehaviour__SetVisible(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003ebc676 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc676 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec027c & 1) == 0) {
    func_0x00f78a20(0x3d23990,0,0);
    bRam0000000003ec027c = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x2f8a8e0 | Core.UI2.UIScreenBehaviour.HasValidAnimator
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8a944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a948) */
/* WARNING: Removing unreachable block (ram,0x02f8a994) */
/* WARNING: Removing unreachable block (ram,0x02f8a94c) */
/* WARNING: Removing unreachable block (ram,0x02f8a9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8a9f4) */
/* WARNING: Removing unreachable block (ram,0x02f8aa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8aab4) */
/* WARNING: Removing unreachable block (ram,0x02f8aabc) */
/* WARNING: Removing unreachable block (ram,0x02f8aac4) */
/* WARNING: Removing unreachable block (ram,0x02f8aad0) */
/* WARNING: Removing unreachable block (ram,0x02f8abb8) */
/* WARNING: Removing unreachable block (ram,0x02f8abc4) */
/* WARNING: Removing unreachable block (ram,0x02f8abcc) */
/* WARNING: Removing unreachable block (ram,0x02f8abd0) */
/* WARNING: Removing unreachable block (ram,0x02f8abd4) */
/* WARNING: Removing unreachable block (ram,0x02f8aae4) */
/* WARNING: Removing unreachable block (ram,0x02f8ab24) */
/* WARNING: Removing unreachable block (ram,0x02f8ab70) */
/* WARNING: Removing unreachable block (ram,0x02f8abf8) */
/* WARNING: Removing unreachable block (ram,0x02f8ac04) */
/* WARNING: Removing unreachable block (ram,0x02f8ac0c) */
/* WARNING: Removing unreachable block (ram,0x02f8ac14) */
/* WARNING: Removing unreachable block (ram,0x02f8ac40) */
/* WARNING: Removing unreachable block (ram,0x02f8ac7c) */
/* WARNING: Removing unreachable block (ram,0x02f8ac88) */
/* WARNING: Removing unreachable block (ram,0x02f8ac90) */
/* WARNING: Removing unreachable block (ram,0x02f8ac98) */
/* WARNING: Removing unreachable block (ram,0x02f8aca4) */
/* WARNING: Removing unreachable block (ram,0x02f8acb0) */
/* WARNING: Removing unreachable block (ram,0x02f8acb8) */
/* WARNING: Removing unreachable block (ram,0x02f8acc0) */
/* WARNING: Removing unreachable block (ram,0x02f8acd4) */
/* WARNING: Removing unreachable block (ram,0x02f8ace0) */
/* WARNING: Removing unreachable block (ram,0x02f8ace8) */
/* WARNING: Removing unreachable block (ram,0x02f8ae0c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae14) */
/* WARNING: Removing unreachable block (ram,0x02f8ae1c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae24) */
/* WARNING: Removing unreachable block (ram,0x02f8ae30) */
/* WARNING: Removing unreachable block (ram,0x02f8ae38) */
/* WARNING: Removing unreachable block (ram,0x02f8ae40) */
/* WARNING: Removing unreachable block (ram,0x02f8ae4c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae5c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae64) */
/* WARNING: Removing unreachable block (ram,0x02f8ae70) */
/* WARNING: Removing unreachable block (ram,0x02f8ae7c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae84) */
/* WARNING: Removing unreachable block (ram,0x02f8ae8c) */
/* WARNING: Removing unreachable block (ram,0x02f8ae98) */
/* WARNING: Removing unreachable block (ram,0x02f8aea4) */
/* WARNING: Removing unreachable block (ram,0x02f8aeb8) */
/* WARNING: Removing unreachable block (ram,0x02f8aec4) */
/* WARNING: Removing unreachable block (ram,0x02f8aecc) */
/* WARNING: Removing unreachable block (ram,0x02f8aed0) */
/* WARNING: Removing unreachable block (ram,0x02f8ad14) */
/* WARNING: Removing unreachable block (ram,0x02f8ad1c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad24) */
/* WARNING: Removing unreachable block (ram,0x02f8ad2c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad38) */
/* WARNING: Removing unreachable block (ram,0x02f8ad44) */
/* WARNING: Removing unreachable block (ram,0x02f8ad4c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad6c) */
/* WARNING: Removing unreachable block (ram,0x02f8ad78) */
/* WARNING: Removing unreachable block (ram,0x02f8ad80) */
/* WARNING: Removing unreachable block (ram,0x02f8ad88) */
/* WARNING: Removing unreachable block (ram,0x02f8af08) */
/* WARNING: Removing unreachable block (ram,0x02f8af0c) */
/* WARNING: Removing unreachable block (ram,0x02f8af10) */
/* WARNING: Removing unreachable block (ram,0x02f8addc) */
/* WARNING: Removing unreachable block (ram,0x02f8ae00) */
/* WARNING: Removing unreachable block (ram,0x02f8ab34) */
/* WARNING: Removing unreachable block (ram,0x02f8ab44) */
/* WARNING: Removing unreachable block (ram,0x02f8ab4c) */
/* WARNING: Removing unreachable block (ram,0x02f8ab54) */
/* WARNING: Removing unreachable block (ram,0x02f8ab80) */
/* WARNING: Removing unreachable block (ram,0x02f8ab60) */
/* WARNING: Removing unreachable block (ram,0x02f8a954) */
/* WARNING: Removing unreachable block (ram,0x02f8a96c) */
/* WARNING: Removing unreachable block (ram,0x02f8a974) */
/* WARNING: Removing unreachable block (ram,0x02f8a978) */

uint Core_UI2_UIScreenBehaviour__HasValidAnimator(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003ebc67a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc67a = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec027c & 1) == 0) {
    func_0x00f78a20(0x3d23990,0,0);
    bRam0000000003ec027c = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x2f8af24 | Core.UI2.UIScreenBehaviour.OnAfterInstantiated
// ============================================================

void Core_UI2_UIScreenBehaviour__OnAfterInstantiated(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8af28 | Core.UI2.UIScreenBehaviour.OnBeforeDestroyed
// ============================================================

void Core_UI2_UIScreenBehaviour__OnBeforeDestroyed(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8af2c | Core.UI2.UIScreenBehaviour.PlayTweensOnStart
// ============================================================

undefined8 Core_UI2_UIScreenBehaviour__PlayTweensOnStart(void)

{
  return 1;
}



// ============================================================
// RVA: 0x2f8af34 | Core.UI2.UIScreenBehaviour..ctor
// ============================================================

undefined1  [16] Core_UI2_UIScreenBehaviour___ctor(ulong param_1)

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
// RVA: 0x2f8af3c | Core.UI2.UIScreenBehaviour..cctor
// ============================================================

void Core_UI2_UIScreenBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003ebc67b & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d6c710);
    func_0x00f78a20(0x3d6c2a0);
    bRam0000000003ebc67b = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Enter')*/ uRam0000000003d6c2a0,0);
  **(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Exit')*/ uRam0000000003d6c710,0);
  *(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4) = uVar1;
  return;
}



