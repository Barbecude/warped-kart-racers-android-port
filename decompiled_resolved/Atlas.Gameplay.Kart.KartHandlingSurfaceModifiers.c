// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartHandlingSurfaceModifiers

// ============================================================
// RVA: 0x15cc5e0 | Atlas.Gameplay.Kart.KartHandlingSurfaceModifiers..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartHandlingSurfaceModifiers___ctor(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  auVar2 = NEON_fmov(0x3f800000,4);
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar1 = auVar2._0_8_;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x2c) = uVar3;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined8 *)(param_1 + 0x3c) = uVar3;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  return;
}



