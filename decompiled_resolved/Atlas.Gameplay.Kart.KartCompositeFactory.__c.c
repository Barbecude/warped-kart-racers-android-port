// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartCompositeFactory.<>c

// ============================================================
// RVA: 0x1554f60 | Atlas.Gameplay.Kart.KartCompositeFactory.<>c..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartCompositeFactory___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f9e & 1) == 0) {
    func_0x00f78a20(0x3d27cd8);
    bRam0000000003eb4f9e = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartCompositeFactory.<>c_TypeInfo*/ lRam0000000003d27cd8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Gameplay.Kart.KartCompositeFactory.<>c_TypeInfo*/ lRam0000000003d27cd8 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1554fc0 | Atlas.Gameplay.Kart.KartCompositeFactory.<>c..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartCompositeFactory___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1554fc8 | Atlas.Gameplay.Kart.KartCompositeFactory.<>c.<GetSpawnIndexBySyncId>b__43_0
// ============================================================

bool Atlas_Gameplay_Kart_KartCompositeFactory___c___GetSpawnIndexBySyncId_b__43_0
               (undefined8 param_1,long param_2)

{
  return *(int *)(param_2 + 8) == 0;
}



