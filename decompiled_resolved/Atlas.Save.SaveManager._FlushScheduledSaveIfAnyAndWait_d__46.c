// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46

// ============================================================
// RVA: 0x15688a0 | Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46..ctor
// ============================================================

void Atlas_Save_SaveManager__FlushScheduledSaveIfAnyAndWait_d__46___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15688cc | Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46.System.IDisposable.Dispose
// ============================================================

void Atlas_Save_SaveManager__FlushScheduledSaveIfAnyAndWait_d__46__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15688d0 | Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46.MoveNext
// ============================================================

undefined8 Atlas_Save_SaveManager__FlushScheduledSaveIfAnyAndWait_d__46__MoveNext(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar1 == 0) goto LAB_01568950;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar1 == 0) {
LAB_01568950:
      lVar1 = func_0x00f78af4();
      return *(undefined8 *)(lVar1 + 0x18);
    }
    if (*(float *)(lVar1 + 0x54) == 0.0) {
      return 0;
    }
    Atlas_Save_SaveManager__StartSave(lVar1,0);
  }
  if (*(char *)(lVar1 + 0x50) == '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



// ============================================================
// RVA: 0x1568954 | Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__FlushScheduledSaveIfAnyAndWait_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156895c | Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Save_SaveManager__FlushScheduledSaveIfAnyAndWait_d__46__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c90);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156899c | Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__FlushScheduledSaveIfAnyAndWait_d__46__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



