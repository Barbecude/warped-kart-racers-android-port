// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<Load>d__48

// ============================================================
// RVA: 0x15689a4 | Atlas.Save.SaveManager.<Load>d__48..ctor
// ============================================================

void Atlas_Save_SaveManager__Load_d__48___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15689d0 | Atlas.Save.SaveManager.<Load>d__48.System.IDisposable.Dispose
// ============================================================

void Atlas_Save_SaveManager__Load_d__48__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15689d4 | Atlas.Save.SaveManager.<Load>d__48.MoveNext
// ============================================================

undefined8 Atlas_Save_SaveManager__Load_d__48__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x10) < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
LAB_01568a6c:
      lVar3 = func_0x00f78af4();
      return *(undefined8 *)(lVar3 + 0x18);
    }
    uVar2 = 1;
    if (*(char *)(lVar3 + 0x50) == '\0') {
      *(undefined4 *)(lVar3 + 0x54) = 0;
      *(undefined1 *)(lVar3 + 0x110) = 0;
      *(undefined1 *)(lVar3 + 0x50) = 1;
      uVar1 = Atlas_Save_SaveManager__AsyncLoad(lVar3,*(undefined4 *)(param_1 + 0x28),0);
      *(undefined8 *)(lVar3 + 0x100) = uVar1;
      goto LAB_01568a40;
    }
LAB_01568a4c:
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar1 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x10) == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar3 == 0) goto LAB_01568a6c;
LAB_01568a40:
      if (*(char *)(lVar3 + 0x50) != '\0') {
        uVar2 = 2;
        goto LAB_01568a4c;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1568a70 | Atlas.Save.SaveManager.<Load>d__48.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__Load_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1568a78 | Atlas.Save.SaveManager.<Load>d__48.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Save_SaveManager__Load_d__48__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c98);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1568ab8 | Atlas.Save.SaveManager.<Load>d__48.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__Load_d__48__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



