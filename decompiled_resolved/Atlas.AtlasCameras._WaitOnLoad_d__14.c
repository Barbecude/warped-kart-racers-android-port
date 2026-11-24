// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.AtlasCameras.<WaitOnLoad>d__14

// ============================================================
// RVA: 0x154581c | Atlas.AtlasCameras.<WaitOnLoad>d__14..ctor
// ============================================================

void Atlas_AtlasCameras__WaitOnLoad_d__14___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1545848 | Atlas.AtlasCameras.<WaitOnLoad>d__14.System.IDisposable.Dispose
// ============================================================

void Atlas_AtlasCameras__WaitOnLoad_d__14__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154584c | Atlas.AtlasCameras.<WaitOnLoad>d__14.MoveNext
// ============================================================

undefined8 Atlas_AtlasCameras__WaitOnLoad_d__14__MoveNext(long param_1)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 0x10) < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar1 = func_0x00f78af4();
      return *(undefined8 *)(lVar1 + 0x18);
    }
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x38) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x154589c | Atlas.AtlasCameras.<WaitOnLoad>d__14.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_AtlasCameras__WaitOnLoad_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15458a4 | Atlas.AtlasCameras.<WaitOnLoad>d__14.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_AtlasCameras__WaitOnLoad_d__14__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d621f0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15458e4 | Atlas.AtlasCameras.<WaitOnLoad>d__14.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_AtlasCameras__WaitOnLoad_d__14__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



