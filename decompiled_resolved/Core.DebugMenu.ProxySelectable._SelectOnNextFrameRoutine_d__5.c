// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5

// ============================================================
// RVA: 0x1643f7c | Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5..ctor
// ============================================================

void Core_DebugMenu_ProxySelectable__SelectOnNextFrameRoutine_d__5___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1645038 | Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5.System.IDisposable.Dispose
// ============================================================

void Core_DebugMenu_ProxySelectable__SelectOnNextFrameRoutine_d__5__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x164503c | Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5.MoveNext
// ============================================================

ulong Core_DebugMenu_ProxySelectable__SelectOnNextFrameRoutine_d__5__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000003eb5747 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    bRam0000000003eb5747 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar2 == 0) {
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x18);
    }
    /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar2,*(undefined8 *)(param_1 + 0x20),0);
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x16450e4 | Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_DebugMenu_ProxySelectable__SelectOnNextFrameRoutine_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x16450ec | Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_DebugMenu_ProxySelectable__SelectOnNextFrameRoutine_d__5__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63a60);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x164512c | Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_DebugMenu_ProxySelectable__SelectOnNextFrameRoutine_d__5__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



