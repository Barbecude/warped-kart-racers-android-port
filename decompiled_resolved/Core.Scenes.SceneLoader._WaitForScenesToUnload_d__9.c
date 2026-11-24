// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9

// ============================================================
// RVA: 0x1664158 | Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9..ctor
// ============================================================

void Core_Scenes_SceneLoader__WaitForScenesToUnload_d__9___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1664ff4 | Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9.System.IDisposable.Dispose
// ============================================================

void Core_Scenes_SceneLoader__WaitForScenesToUnload_d__9__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1664ff8 | Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9.MoveNext
// ============================================================

undefined8 Core_Scenes_SceneLoader__WaitForScenesToUnload_d__9__MoveNext(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb588f & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    bRam0000000003eb588f = 1;
  }
  uVar2 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_50[0] = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x20),uRam0000000003d3bfd0);
    uVar5 = 1;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32f88), (uVar3 & 1) != 0) {
      Core_Scenes_SceneLoader__TryGetScene(uStack_38,auStack_50);
      uVar3 = /*UnityEngine.SceneManagement.Scene$$IsValid*/ func_0x0325cff8(auStack_50,0);
      if ((uVar3 & 1) != 0) {
        uVar1 = /*UnityEngine.SceneManagement.Scene$$get_isLoaded*/ func_0x0325d078(auStack_50,0);
        uVar5 = uVar5 & (uVar1 ^ 1);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32f80);
    if (uVar5 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar4 = 1;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return uVar2;
}



// ============================================================
// RVA: 0x166517c | Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToUnload_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1665184 | Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToUnload_d__9__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63cd0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x16651c4 | Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Scenes_SceneLoader__WaitForScenesToUnload_d__9__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



