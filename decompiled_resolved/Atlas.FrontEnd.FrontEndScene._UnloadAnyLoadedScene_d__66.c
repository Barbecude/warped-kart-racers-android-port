// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndScene.<UnloadAnyLoadedScene>d__66

// ============================================================
// RVA: 0x154fa78 | Atlas.FrontEnd.FrontEndScene.<UnloadAnyLoadedScene>d__66..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene_d__66___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154faa4 | Atlas.FrontEnd.FrontEndScene.<UnloadAnyLoadedScene>d__66.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene_d__66__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154faa8 | Atlas.FrontEnd.FrontEndScene.<UnloadAnyLoadedScene>d__66.MoveNext
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene_d__66__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong auStack_30 [2];
  
  if ((bRam0000000003eb4f8b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24720);
    bRam0000000003eb4f8b = 1;
  }
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto code_r0x0154fb58;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar5 != 0) {
    uVar2 = 0;
    lVar3 = *(long *)(lVar5 + 0xa8);
    *(long *)(param_1 + 0x28) = lVar3;
    *(undefined4 *)(param_1 + 0x30) = 0;
    while (lVar3 != 0) {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        if (lVar5 != 0) {
          uVar4 = *(undefined8 *)(lVar5 + 200);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          *(undefined8 *)(lVar5 + 200) = 0;
          return 0;
        }
        break;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar2) goto code_r0x0154fc10;
      if (lVar5 == 0) break;
      iVar1 = Atlas_FrontEnd_FrontEndScene__TryGetLoadedScene
                        (lVar5,*(undefined8 *)(lVar3 + (long)(int)uVar2 * 0x10 + 0x28),auStack_30,0)
      ;
      if (iVar1 != 0) {
        uVar6 = auStack_30[0] & 0xffffffff;
        if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*UnityEngine.SceneManagement.SceneManager$$UnloadSceneAsync*/ func_0x0325e300(uVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
code_r0x0154fb58:
      uVar2 = *(int *)(param_1 + 0x30) + 1;
      *(uint *)(param_1 + 0x30) = uVar2;
      lVar3 = *(long *)(param_1 + 0x28);
    }
  }
  func_0x00f78af4();
code_r0x0154fc10:
  uVar4 = func_0x00f78b24();
  lVar5 = func_0x00f78ac0(uVar4,0);
  return *(undefined8 *)(lVar5 + 0x18);
}



// ============================================================
// RVA: 0x154fc1c | Atlas.FrontEnd.FrontEndScene.<UnloadAnyLoadedScene>d__66.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene_d__66__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154fc24 | Atlas.FrontEnd.FrontEndScene.<UnloadAnyLoadedScene>d__66.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene_d__66__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e80);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154fc64 | Atlas.FrontEnd.FrontEndScene.<UnloadAnyLoadedScene>d__66.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene_d__66__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



