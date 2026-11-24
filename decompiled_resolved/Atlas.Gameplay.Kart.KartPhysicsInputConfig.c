// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsInputConfig

// ============================================================
// RVA: 0x15db4bc | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_GlidingPitchUpDeadZoneAngleRadians
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_GlidingPitchUpDeadZoneAngleRadians
                (long param_1)

{
  return *(float *)(param_1 + 0x18) * _UNK_033f850c;
}



// ============================================================
// RVA: 0x15db4d0 | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_GlidingPitchDownDeadZoneAngleRadians
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_GlidingPitchDownDeadZoneAngleRadians
                (long param_1)

{
  return *(float *)(param_1 + 0x20) * _UNK_033f850c;
}



// ============================================================
// RVA: 0x15db4e4 | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_BrakeDeadZoneAngleRadians
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_BrakeDeadZoneAngleRadians(long param_1)

{
  return *(float *)(param_1 + 0x28) * _UNK_033f850c;
}



// ============================================================
// RVA: 0x15db93c | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_MaxAngleVirtualSteeringWheel
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_MaxAngleVirtualSteeringWheel(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15db944 | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_GlidingPitchUpDeadZone
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_GlidingPitchUpDeadZone(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x15db94c | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_GlidingPitchDownDeadZone
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_GlidingPitchDownDeadZone(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x15db954 | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_BrakeDeadZone
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_BrakeDeadZone(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x15db95c | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_DisableBrakeOnDrift
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_DisableBrakeOnDrift(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x15db964 | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_DisableReverse
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_DisableReverse(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2d);
}



// ============================================================
// RVA: 0x15db96c | Atlas.Gameplay.Kart.KartPhysicsInputConfig.get_ExtraSteerEnabled
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInputConfig__get_ExtraSteerEnabled(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2e);
}



// ============================================================
// RVA: 0x15db974 | Atlas.Gameplay.Kart.KartPhysicsInputConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsInputConfig___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_033f8cb0;
  *(undefined8 *)(param_1 + 0x18) = _UNK_033f8cb8;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = _UNK_033f8d08;
  *(undefined4 *)(param_1 + 0x28) = 0x42340000;
  return;
}



