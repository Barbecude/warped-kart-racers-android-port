// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<ChangeSaveSlot>d__51

// ============================================================
// RVA: 0x1568624 | Atlas.Save.SaveManager.<ChangeSaveSlot>d__51..ctor
// ============================================================

void Atlas_Save_SaveManager__ChangeSaveSlot_d__51___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1568650 | Atlas.Save.SaveManager.<ChangeSaveSlot>d__51.System.IDisposable.Dispose
// ============================================================

void Atlas_Save_SaveManager__ChangeSaveSlot_d__51__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1568654 | Atlas.Save.SaveManager.<ChangeSaveSlot>d__51.MoveNext
// ============================================================

undefined8 Atlas_Save_SaveManager__ChangeSaveSlot_d__51__MoveNext(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar1 == 0) {
      lVar1 = func_0x00f78af4();
      return *(undefined8 *)(lVar1 + 0x18);
    }
    if (*(char *)(lVar1 + 0x50) == '\0') {
      if (2 < *(uint *)(param_1 + 0x28)) {
        return 0;
      }
      *(uint *)(lVar1 + 0xf8) = *(uint *)(param_1 + 0x28);
      uVar2 = Atlas_Save_SaveManager__ResetDependantSystems(lVar1,0);
      uVar3 = 2;
    }
    else {
      uVar2 = 0;
      uVar3 = 1;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x10) != 2) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar2;
}



// ============================================================
// RVA: 0x15686e8 | Atlas.Save.SaveManager.<ChangeSaveSlot>d__51.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__ChangeSaveSlot_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15686f0 | Atlas.Save.SaveManager.<ChangeSaveSlot>d__51.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Save_SaveManager__ChangeSaveSlot_d__51__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c80);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1568730 | Atlas.Save.SaveManager.<ChangeSaveSlot>d__51.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__ChangeSaveSlot_d__51__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



