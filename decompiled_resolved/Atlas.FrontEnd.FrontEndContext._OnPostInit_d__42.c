// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42

// ============================================================
// RVA: 0x154e56c | Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnPostInit_d__42___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154e598 | Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnPostInit_d__42__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154e59c | Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42.MoveNext
// ============================================================

ulong Atlas_FrontEnd_FrontEndContext__OnPostInit_d__42__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x78), lVar2 == 0)) {
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x18);
    }
    /*Atlas.Settings.AtlasQualitySettings$$EndBoostLoading*/ func_0x0145ed30(lVar2,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar3 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0154e5f0;
    uVar3 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
LAB_0154e5f0:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x154e608 | Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnPostInit_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154e610 | Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnPostInit_d__42__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e40);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154e650 | Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnPostInit_d__42__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



