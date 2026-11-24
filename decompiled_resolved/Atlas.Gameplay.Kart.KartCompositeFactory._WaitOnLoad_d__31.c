// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartCompositeFactory.<WaitOnLoad>d__31

// ============================================================
// RVA: 0x15553b0 | Atlas.Gameplay.Kart.KartCompositeFactory.<WaitOnLoad>d__31..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartCompositeFactory__WaitOnLoad_d__31___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15553dc | Atlas.Gameplay.Kart.KartCompositeFactory.<WaitOnLoad>d__31.System.IDisposable.Dispose
// ============================================================

void Atlas_Gameplay_Kart_KartCompositeFactory__WaitOnLoad_d__31__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15553e0 | Atlas.Gameplay.Kart.KartCompositeFactory.<WaitOnLoad>d__31.MoveNext
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartCompositeFactory__WaitOnLoad_d__31__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar2 = 0xffffffff;
LAB_01555440:
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    return uVar1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x70) == 0) {
      return 0;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      uVar1 = /*Core.Assets.AssetManager$$WaitForAssets*/ func_0x0163714c(*(long *)(lVar3 + 0x10),*(long *)(lVar3 + 0x70),0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      uVar2 = 1;
      uVar1 = 1;
      goto LAB_01555440;
    }
  }
  lVar3 = func_0x00f78af4(0);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155545c | Atlas.Gameplay.Kart.KartCompositeFactory.<WaitOnLoad>d__31.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartCompositeFactory__WaitOnLoad_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1555464 | Atlas.Gameplay.Kart.KartCompositeFactory.<WaitOnLoad>d__31.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartCompositeFactory__WaitOnLoad_d__31__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d633d8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15554a4 | Atlas.Gameplay.Kart.KartCompositeFactory.<WaitOnLoad>d__31.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartCompositeFactory__WaitOnLoad_d__31__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



