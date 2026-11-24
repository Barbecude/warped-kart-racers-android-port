// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7

// ============================================================
// RVA: 0x1664008 | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7..ctor
// ============================================================

void Core_Scenes_SceneLoader__WaitForScenesToLoad_d__7___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1664dc0 | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7.System.IDisposable.Dispose
// ============================================================

void Core_Scenes_SceneLoader__WaitForScenesToLoad_d__7__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1664dc4 | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7.MoveNext
// ============================================================

undefined8 Core_Scenes_SceneLoader__WaitForScenesToLoad_d__7__MoveNext(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
  }
  iVar1 = Core_Scenes_SceneLoader__HaveAllRequestedScenesLoaded(param_1 + 0x20);
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



// ============================================================
// RVA: 0x1664e2c | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToLoad_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1664e34 | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToLoad_d__7__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63cc0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1664e74 | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToLoad_d__7__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



