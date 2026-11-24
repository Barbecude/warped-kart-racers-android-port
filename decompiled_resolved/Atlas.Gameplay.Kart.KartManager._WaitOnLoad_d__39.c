// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39

// ============================================================
// RVA: 0x15555b8 | Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15555e4 | Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39.System.IDisposable.Dispose
// ============================================================

void Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15555e8 | Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39.MoveNext
// ============================================================

ulong Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar2 == 0)) {
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x18);
    }
    uVar3 = Atlas_Gameplay_Kart_KartCompositeFactory__WaitOnLoad(lVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar4 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0155563c;
    uVar4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_0155563c:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1555654 | Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155565c | Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d633e8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155569c | Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



