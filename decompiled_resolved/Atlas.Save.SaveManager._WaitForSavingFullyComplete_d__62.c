// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62

// ============================================================
// RVA: 0x1569488 | Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62..ctor
// ============================================================

void Atlas_Save_SaveManager__WaitForSavingFullyComplete_d__62___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15694b4 | Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62.System.IDisposable.Dispose
// ============================================================

void Atlas_Save_SaveManager__WaitForSavingFullyComplete_d__62__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15694b8 | Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62.MoveNext
// ============================================================

undefined8 Atlas_Save_SaveManager__WaitForSavingFullyComplete_d__62__MoveNext(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_01569560:
      lVar4 = func_0x00f78af4();
      return *(undefined8 *)(lVar4 + 0x18);
    }
    if (*(char *)(lVar4 + 0x50) == '\0') {
      if ((*(long *)(lVar4 + 0x70) == 0) ||
         (plVar1 = *(long **)(*(long *)(lVar4 + 0x70) + 0x30), plVar1 == (long *)0x0))
      goto LAB_01569560;
      uVar2 = (**(code **)(*plVar1 + 0x578))(plVar1,*(undefined8 *)(*plVar1 + 0x580));
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(lVar4 + 0x70) == 0) ||
           (plVar1 = *(long **)(*(long *)(lVar4 + 0x70) + 0x30), plVar1 == (long *)0x0))
        goto LAB_01569560;
        uVar2 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
        if ((uVar2 & 1) == 0) goto LAB_01569550;
      }
    }
    Atlas_Save_SaveManager__Update(lVar4,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
LAB_01569550:
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1569564 | Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__WaitForSavingFullyComplete_d__62__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156956c | Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Save_SaveManager__WaitForSavingFullyComplete_d__62__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63cb0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15695ac | Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__WaitForSavingFullyComplete_d__62__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



