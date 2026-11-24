// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46

// ============================================================
// RVA: 0x156b738 | Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46..ctor
// ============================================================

void Atlas_UI_UIArcadeInProgressBehaviour__FlashAnimationCoroutine_d__46___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156b764 | Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_UIArcadeInProgressBehaviour__FlashAnimationCoroutine_d__46__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x156b768 | Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46.MoveNext
// ============================================================

undefined8
Atlas_UI_UIArcadeInProgressBehaviour__FlashAnimationCoroutine_d__46__MoveNext(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  if ((bRam0000000003eb5006 & 1) == 0) {
    func_0x00f78a20(0x3d25a68);
    bRam0000000003eb5006 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar4 == 0) || (plVar2 = *(long **)(lVar4 + 0x38), plVar2 == (long *)0x0))
      goto LAB_0156b870;
      puVar7 = (undefined4 *)(lVar4 + 0x4c);
      puVar6 = (undefined4 *)(lVar4 + 0x40);
      puVar8 = (undefined4 *)(lVar4 + 0x48);
      puVar5 = (undefined4 *)(lVar4 + 0x44);
      uVar9 = 2;
      goto LAB_0156b80c;
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar4 == 0) || (plVar2 = *(long **)(lVar4 + 0x38), plVar2 == (long *)0x0)) {
LAB_0156b870:
    lVar4 = func_0x00f78af4();
    return *(undefined8 *)(lVar4 + 0x18);
  }
  puVar7 = (undefined4 *)(lVar4 + 0x5c);
  puVar6 = (undefined4 *)(lVar4 + 0x50);
  puVar8 = (undefined4 *)(lVar4 + 0x58);
  puVar5 = (undefined4 *)(lVar4 + 0x54);
  uVar9 = 1;
LAB_0156b80c:
  (**(code **)(*plVar2 + 0x2a8))
            (*puVar6,*puVar5,*puVar8,*puVar7,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
  uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
  /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(0x3f000000,uVar3,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar9;
  return 1;
}



// ============================================================
// RVA: 0x156b874 | Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadeInProgressBehaviour__FlashAnimationCoroutine_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156b87c | Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UIArcadeInProgressBehaviour__FlashAnimationCoroutine_d__46__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d647a0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156b8bc | Atlas.UI.UIArcadeInProgressBehaviour.<FlashAnimationCoroutine>d__46.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadeInProgressBehaviour__FlashAnimationCoroutine_d__46__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



