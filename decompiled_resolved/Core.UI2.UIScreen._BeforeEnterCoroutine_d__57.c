// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57

// ============================================================
// RVA: 0x2f8a7a8 | Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57..ctor
// ============================================================

void Core_UI2_UIScreen__BeforeEnterCoroutine_d__57___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x2f91760 | Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57.System.IDisposable.Dispose
// ============================================================

void Core_UI2_UIScreen__BeforeEnterCoroutine_d__57__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x2f91764 | Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57.MoveNext
// ============================================================

ulong Core_UI2_UIScreen__BeforeEnterCoroutine_d__57__MoveNext(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar2 == (long *)0x0) {
LAB_02f917d8:
      lVar4 = func_0x00f78af4();
      return *(ulong *)(lVar4 + 0x18);
    }
    uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar2 == (long *)0x0) goto LAB_02f917d8;
    *(undefined1 *)(plVar2 + 10) = 1;
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x2f917dc | Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_UI2_UIScreen__BeforeEnterCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x2f917e4 | Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Core_UI2_UIScreen__BeforeEnterCoroutine_d__57__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64810);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x2f91824 | Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_UI2_UIScreen__BeforeEnterCoroutine_d__57__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



