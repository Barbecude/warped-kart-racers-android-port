// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<Delete>d__50

// ============================================================
// RVA: 0x1568738 | Atlas.Save.SaveManager.<Delete>d__50..ctor
// ============================================================

void Atlas_Save_SaveManager__Delete_d__50___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1568764 | Atlas.Save.SaveManager.<Delete>d__50.System.IDisposable.Dispose
// ============================================================

void Atlas_Save_SaveManager__Delete_d__50__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1568768 | Atlas.Save.SaveManager.<Delete>d__50.MoveNext
// ============================================================

undefined8 Atlas_Save_SaveManager__Delete_d__50__MoveNext(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar3 = 0xffffffff;
  if (uVar1 < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
code_r0x015687cc:
      func_0x00f78af4();
      uVar2 = extraout_w8;
code_r0x015687d0:
      *(undefined1 *)(lVar5 + 0x50) = uVar2;
      Atlas_Save_SaveManager__ResetSave(lVar5,*(undefined4 *)(param_1 + 0x28),0);
      uVar4 = Atlas_Save_SaveManager__AsyncDelete(lVar5,*(undefined4 *)(param_1 + 0x28),0);
      *(undefined8 *)(lVar5 + 0x100) = uVar4;
      goto code_r0x015687f8;
    }
    uVar3 = 1;
    uVar2 = 1;
    if (*(char *)(lVar5 + 0x50) == '\0') goto code_r0x015687d0;
    uVar4 = 0;
  }
  else {
    if (uVar1 != 2) {
      uVar4 = 0;
      if (uVar1 != 3) {
        return 0;
      }
      goto LAB_01568834;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto code_r0x015687cc;
code_r0x015687f8:
    if (*(char *)(lVar5 + 0x50) == '\0') {
      if (*(int *)(param_1 + 0x28) != *(int *)(lVar5 + 0xf8)) {
        return 0;
      }
      uVar4 = Atlas_Save_SaveManager__ChangeSaveSlot(lVar5,*(int *)(param_1 + 0x28),0);
      uVar3 = 3;
    }
    else {
      uVar4 = 0;
      uVar3 = 2;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar4 = 1;
LAB_01568834:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar4;
}



// ============================================================
// RVA: 0x1568850 | Atlas.Save.SaveManager.<Delete>d__50.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__Delete_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1568858 | Atlas.Save.SaveManager.<Delete>d__50.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Save_SaveManager__Delete_d__50__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c88);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1568898 | Atlas.Save.SaveManager.<Delete>d__50.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__Delete_d__50__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



