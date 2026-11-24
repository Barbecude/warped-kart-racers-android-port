// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartHandlingTurningModifiers

// ============================================================
// RVA: 0x15cc600 | Atlas.Gameplay.Kart.KartHandlingTurningModifiers.CreateDefault
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_KartHandlingTurningModifiers__CreateDefault(void)

{
  return ZEXT816(0x3f800000);
}



// ============================================================
// RVA: 0x15cc614 | Atlas.Gameplay.Kart.KartHandlingTurningModifiers.Reset
// ============================================================

void Atlas_Gameplay_Kart_KartHandlingTurningModifiers__Reset(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_1[1] = auVar1._8_8_;
  *param_1 = auVar1._0_8_;
  return;
}



