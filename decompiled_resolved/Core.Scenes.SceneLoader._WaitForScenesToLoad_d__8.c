// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8

// ============================================================
// RVA: 0x16640bc | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8..ctor
// ============================================================

void Core_Scenes_SceneLoader__WaitForScenesToLoad_d__8___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1664e7c | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8.System.IDisposable.Dispose
// ============================================================

void Core_Scenes_SceneLoader__WaitForScenesToLoad_d__8__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1664e80 | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8.MoveNext
// ============================================================

undefined8 Core_Scenes_SceneLoader__WaitForScenesToLoad_d__8__MoveNext(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 auStack_28 [2];
  
  if ((bRam0000000003eb588e & 1) == 0) {
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d24720);
    bRam0000000003eb588e = 1;
  }
  auStack_28[0] = 0;
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
  iVar3 = Core_Scenes_SceneLoader__HaveAllRequestedScenesLoaded(param_1 + 0x20);
  if (iVar3 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    /*UnityEngine.LightmapSettings$$set_lightProbes*/ func_0x03235374(0,0);
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x34);
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar4 = Core_Scenes_SceneLoader__TryGetScene
                      (*(undefined8 *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar1 * 8 + 0x20),
                       auStack_28);
    uVar2 = auStack_28[0];
    if ((int)uVar4 != 0) {
      if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.SceneManagement.SceneManager$$SetActiveScene*/ func_0x0325d4f4(uVar2,0);
      return 0;
    }
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  return *(undefined8 *)(lVar5 + 0x18);
}



// ============================================================
// RVA: 0x1664fa4 | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToLoad_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1664fac | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToLoad_d__8__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63cc8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1664fec | Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToLoad_d__8__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



