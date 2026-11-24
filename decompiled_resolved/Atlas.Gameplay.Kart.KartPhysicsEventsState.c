// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsEventsState

// ============================================================
// RVA: 0x15d53f8 | Atlas.Gameplay.Kart.KartPhysicsEventsState.Reset
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsEventsState__Reset(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 7) = 0;
  *param_1 = 0;
  return;
}



// ============================================================
// RVA: 0x15d5404 | Atlas.Gameplay.Kart.KartPhysicsEventsState.StartAnyBoost
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsEventsState__StartAnyBoost(long param_1)

{
  if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 10) == '\0')) &&
     (*(char *)(param_1 + 0xc) == '\0')) {
    return *(char *)(param_1 + 0xe) != '\0';
  }
  return true;
}



