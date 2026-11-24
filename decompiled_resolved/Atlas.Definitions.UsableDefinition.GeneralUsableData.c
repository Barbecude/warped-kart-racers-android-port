// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.UsableDefinition.GeneralUsableData

// ============================================================
// RVA: 0x156cf38 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_NumberOfUses
// ============================================================

undefined4
Atlas_Definitions_UsableDefinition_GeneralUsableData__get_NumberOfUses(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x156cf40 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_LifeTime
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_LifeTime(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// ============================================================
// RVA: 0x156cf48 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_EquippingTime
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_EquippingTime(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x156cf50 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_ActivatingTime
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_ActivatingTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ============================================================
// RVA: 0x156cf58 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_ReequipTime
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_ReequipTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x156cf60 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_OnHitSplatId
// ============================================================

undefined8 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_OnHitSplatId(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156cf68 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_InHandVisualsID
// ============================================================

undefined8 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_InHandVisualsID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x156cf70 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_KeepInHandTransformValuesOnUse
// ============================================================

undefined1
Atlas_Definitions_UsableDefinition_GeneralUsableData__get_KeepInHandTransformValuesOnUse
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x156cf78 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_TotalPickupLimit
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_TotalPickupLimit(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x156cf80 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_PickupCooldown
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition_GeneralUsableData__get_PickupCooldown(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x156cf88 | Atlas.Definitions.UsableDefinition.GeneralUsableData.get_IgnoreItemPickupAnimOnReequip
// ============================================================

undefined1
Atlas_Definitions_UsableDefinition_GeneralUsableData__get_IgnoreItemPickupAnimOnReequip
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



// ============================================================
// RVA: 0x156cf90 | Atlas.Definitions.UsableDefinition.GeneralUsableData.CreateDefault
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Definitions_UsableDefinition_GeneralUsableData__CreateDefault(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5013 & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb5013 = 1;
  }
  uVar2 = /*STR('')*/ uRam0000000003d65d08;
  *param_1 = 0x41a0000000000001;
  uVar1 = _UNK_033f8960;
  param_1[2] = _UNK_033f8968;
  param_1[1] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}



