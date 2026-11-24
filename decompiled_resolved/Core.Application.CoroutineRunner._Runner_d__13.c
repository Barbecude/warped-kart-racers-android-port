// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Application.CoroutineRunner.<Runner>d__13

// ============================================================
// RVA: 0x1633c6c | Core.Application.CoroutineRunner.<Runner>d__13..ctor
// ============================================================

void Core_Application_CoroutineRunner__Runner_d__13___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1633fe4 | Core.Application.CoroutineRunner.<Runner>d__13.System.IDisposable.Dispose
// ============================================================

void Core_Application_CoroutineRunner__Runner_d__13__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1633fe8 | Core.Application.CoroutineRunner.<Runner>d__13.MoveNext
// ============================================================

ulong Core_Application_CoroutineRunner__Runner_d__13__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x18);
    }
    /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(param_1 + 0x28),0);
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1634048 | Core.Application.CoroutineRunner.<Runner>d__13.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Application_CoroutineRunner__Runner_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1634050 | Core.Application.CoroutineRunner.<Runner>d__13.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Application_CoroutineRunner__Runner_d__13__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62588);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1634090 | Core.Application.CoroutineRunner.<Runner>d__13.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Application_CoroutineRunner__Runner_d__13__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



