// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45

// ============================================================
// RVA: 0x2f8a5f0 | Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45..ctor
// ============================================================

void Core_UI2_UIScreen__OnBeforeEnterCoroutine_d__45___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x2f9182c | Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45.System.IDisposable.Dispose
// ============================================================

void Core_UI2_UIScreen__OnBeforeEnterCoroutine_d__45__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x2f91830 | Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45.MoveNext
// ============================================================

undefined8 Core_UI2_UIScreen__OnBeforeEnterCoroutine_d__45__MoveNext(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return 0;
}



// ============================================================
// RVA: 0x2f91848 | Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_UI2_UIScreen__OnBeforeEnterCoroutine_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x2f91850 | Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_UI2_UIScreen__OnBeforeEnterCoroutine_d__45__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64818);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x2f91890 | Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_UI2_UIScreen__OnBeforeEnterCoroutine_d__45__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



