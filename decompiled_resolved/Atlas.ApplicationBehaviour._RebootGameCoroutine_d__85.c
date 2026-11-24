// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour.<RebootGameCoroutine>d__85

// ============================================================
// RVA: 0x1533064 | Atlas.ApplicationBehaviour.<RebootGameCoroutine>d__85..ctor
// ============================================================

void Atlas_ApplicationBehaviour__RebootGameCoroutine_d__85___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1533090 | Atlas.ApplicationBehaviour.<RebootGameCoroutine>d__85.System.IDisposable.Dispose
// ============================================================

void Atlas_ApplicationBehaviour__RebootGameCoroutine_d__85__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1533094 | Atlas.ApplicationBehaviour.<RebootGameCoroutine>d__85.MoveNext
// ============================================================

ulong Atlas_ApplicationBehaviour__RebootGameCoroutine_d__85__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4eb3 & 1) == 0) {
    func_0x00f78a20(0x3d24720);
    func_0x00f78a20(0x3d69040);
    bRam0000000003eb4eb3 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 0x18);
    }
    uVar2 = Atlas_ApplicationBehaviour__DeInit(*(long *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.SceneManagement.SceneManager$$LoadScene*/ func_0x0325e0dc(/*STR('Application')*/ uRam0000000003d69040,0);
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x153315c | Atlas.ApplicationBehaviour.<RebootGameCoroutine>d__85.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__RebootGameCoroutine_d__85__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1533164 | Atlas.ApplicationBehaviour.<RebootGameCoroutine>d__85.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_ApplicationBehaviour__RebootGameCoroutine_d__85__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61fe0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15331a4 | Atlas.ApplicationBehaviour.<RebootGameCoroutine>d__85.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__RebootGameCoroutine_d__85__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



