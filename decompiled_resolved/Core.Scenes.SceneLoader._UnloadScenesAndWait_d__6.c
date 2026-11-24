// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6

// ============================================================
// RVA: 0x1663f6c | Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6..ctor
// ============================================================

void Core_Scenes_SceneLoader__UnloadScenesAndWait_d__6___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1664cec | Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6.System.IDisposable.Dispose
// ============================================================

void Core_Scenes_SceneLoader__UnloadScenesAndWait_d__6__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1664cf0 | Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6.MoveNext
// ============================================================

bool Core_Scenes_SceneLoader__UnloadScenesAndWait_d__6__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    Core_Scenes_SceneLoader__UnloadScenes(param_1 + 0x20);
    uVar2 = Core_Scenes_SceneLoader__WaitForScenesToUnload(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(char *)(param_1 + 0x30) != '\0') {
      /*UnityEngine.Resources$$UnloadUnusedAssets*/ func_0x0325c728(0);
    }
  }
  return iVar1 == 0;
}



// ============================================================
// RVA: 0x1664d70 | Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__UnloadScenesAndWait_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1664d78 | Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Scenes_SceneLoader__UnloadScenesAndWait_d__6__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63cb8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1664db8 | Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__UnloadScenesAndWait_d__6__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



