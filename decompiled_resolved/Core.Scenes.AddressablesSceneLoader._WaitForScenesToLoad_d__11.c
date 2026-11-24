// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11

// ============================================================
// RVA: 0x1663634 | Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11..ctor
// ============================================================

void Core_Scenes_AddressablesSceneLoader__WaitForScenesToLoad_d__11___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1664980 | Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11.System.IDisposable.Dispose
// ============================================================

void Core_Scenes_AddressablesSceneLoader__WaitForScenesToLoad_d__11__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1664984 | Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11.MoveNext
// ============================================================

ulong Core_Scenes_AddressablesSceneLoader__WaitForScenesToLoad_d__11__MoveNext(ulong param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 auStack_b8 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = param_1;
  if ((bRam0000000003eb588d & 1) == 0) {
    func_0x00f78a20(0x3d2a308);
    func_0x00f78a20(0x3d2c028);
    func_0x00f78a20(0x3d2c030);
    func_0x00f78a20(0x3d3cbe0);
    func_0x00f78a20(0x3d3bcc0);
    func_0x00f78a20(0x3d3cbe8);
    func_0x00f78a20(0x3d3bcc8);
    uVar2 = func_0x00f78a20(0x3d24720);
    bRam0000000003eb588d = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  auStack_b8[0] = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) != 1) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar3 == 0) goto LAB_01664c98;
      if ((*(int *)(lVar3 + 0x20) == 1) && (*(long *)(lVar3 + 0x10) != 0)) {
LAB_01664bd4:
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar2 = 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0)) {
    uVar5 = 0;
    lVar6 = 8;
    lVar7 = 0x20;
    do {
      uVar8 = lVar6 - 8;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar8) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != 0) {
          Core_Scenes_AddressablesSceneLoader__PercentageLoaded(lVar3);
          uVar2 = /*System.Action<float>$$Invoke*/ func_0x01e4cd74(lVar4,uRam0000000003d2a308);
        }
        if ((uVar5 & 1) != 0) goto LAB_01664bd4;
        if (*(char *)(param_1 + 0x30) != '\0') {
          uVar2 = /*UnityEngine.LightmapSettings$$set_lightProbes*/ func_0x03235374(0,0);
        }
        lVar4 = *(long *)(lVar3 + 0x18);
        if (lVar4 != 0) {
          uVar5 = *(uint *)(param_1 + 0x34);
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar5 * 4 + 0x20);
          if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.SceneManagement.SceneManager$$SetActiveScene*/ func_0x0325d4f4(uVar1,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            /*System.Action<float>$$Invoke*/ func_0x01e4cd74(0,*(long *)(param_1 + 0x28),uRam0000000003d2a308);
          }
          *(undefined4 *)(lVar3 + 0x20) = 2;
          return 0;
        }
        break;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      _memmove(&uStack_b0,*(long *)(lVar4 + 0x10) + lVar7,0x50);
      uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_Status*/ func_0x01b58e08(&uStack_a0,uRam0000000003d2c030);
      if ((int)uVar2 == 1) {
        lVar4 = *(long *)(lVar3 + 0x18);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        auStack_b8[0] = *(undefined4 *)(*(long *)(lVar4 + 0x10) + lVar6 * 4);
        uVar2 = /*UnityEngine.SceneManagement.Scene$$IsValid*/ func_0x0325cff8(auStack_b8,0);
        if ((uVar2 & 1) == 0) {
          lVar4 = *(long *)(lVar3 + 0x18);
          uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_Result*/ func_0x01b58d5c(&uStack_a0,uRam0000000003d2c028);
          if (lVar4 == 0) break;
          uVar2 = /*System.Collections.Generic.List<Scene>$$set_Item*/ func_0x024559d8(lVar4,(int)lVar6 + -8,uVar2 & 0xffffffff,uRam0000000003d3bcc8);
        }
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      auStack_b8[0] = *(undefined4 *)(*(long *)(lVar4 + 0x10) + lVar6 * 4);
      uVar2 = /*UnityEngine.SceneManagement.Scene$$IsValid*/ func_0x0325cff8(auStack_b8,0);
      uVar5 = (uint)uVar2 ^ 1 | uVar5;
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x50;
    } while (lVar4 != 0);
  }
LAB_01664c98:
  lVar3 = func_0x00f78af4(uVar2);
  return *(ulong *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1664c9c | Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Scenes_AddressablesSceneLoader__WaitForScenesToLoad_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1664ca4 | Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Scenes_AddressablesSceneLoader__WaitForScenesToLoad_d__11__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61f78);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1664ce4 | Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Scenes_AddressablesSceneLoader__WaitForScenesToLoad_d__11__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



