// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.UsableDefinition.DespawnVFXData

// ============================================================
// RVA: 0x156cef8 | Atlas.Definitions.UsableDefinition.DespawnVFXData.get_OnDeSpawnVFXTimer
// ============================================================

undefined4
Atlas_Definitions_UsableDefinition_DespawnVFXData__get_OnDeSpawnVFXTimer(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x156cf00 | Atlas.Definitions.UsableDefinition.DespawnVFXData.get_DespawnVFXLinearPositionInterpolant
// ============================================================

undefined4
Atlas_Definitions_UsableDefinition_DespawnVFXData__get_DespawnVFXLinearPositionInterpolant
          (long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// ============================================================
// RVA: 0x156cf08 | Atlas.Definitions.UsableDefinition.DespawnVFXData.get_DespawnVFXVelFactorKart
// ============================================================

undefined4
Atlas_Definitions_UsableDefinition_DespawnVFXData__get_DespawnVFXVelFactorKart(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x156cf10 | Atlas.Definitions.UsableDefinition.DespawnVFXData.get_DespawnVFXVelFactorUsable
// ============================================================

undefined4
Atlas_Definitions_UsableDefinition_DespawnVFXData__get_DespawnVFXVelFactorUsable(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ============================================================
// RVA: 0x156cf18 | Atlas.Definitions.UsableDefinition.DespawnVFXData.get_StopTime
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition_DespawnVFXData__get_StopTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x156cf20 | Atlas.Definitions.UsableDefinition.DespawnVFXData.CreateDefault
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Definitions_UsableDefinition_DespawnVFXData__CreateDefault(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_033f8950;
  param_1[1] = _UNK_033f8958;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  return;
}



