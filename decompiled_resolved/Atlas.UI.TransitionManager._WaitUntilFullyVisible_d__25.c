// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25

// ============================================================
// RVA: 0x156b608 | Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25..ctor
// ============================================================

void Atlas_UI_TransitionManager__WaitUntilFullyVisible_d__25___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156b634 | Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_TransitionManager__WaitUntilFullyVisible_d__25__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156b638 | Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25.MoveNext
// ============================================================

undefined8 Atlas_UI_TransitionManager__WaitUntilFullyVisible_d__25__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar4 = *(float *)(param_1 + 0x2c);
    fVar3 = (float)/*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
    *(float *)(param_1 + 0x2c) = fVar4 + fVar3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (lVar2 != 0) {
    uVar1 = Atlas_UI_TransitionManager__get_IsTransitionFullyVisible(lVar2,0);
    if (((uVar1 & 1) == 0) && (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x28))) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    return 0;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x18);
}



// ============================================================
// RVA: 0x156b6d4 | Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_TransitionManager__WaitUntilFullyVisible_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156b6dc | Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_TransitionManager__WaitUntilFullyVisible_d__25__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64758);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156b71c | Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_TransitionManager__WaitUntilFullyVisible_d__25__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



