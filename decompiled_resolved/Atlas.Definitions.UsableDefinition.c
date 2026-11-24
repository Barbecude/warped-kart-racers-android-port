// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.UsableDefinition

// ============================================================
// RVA: 0x15242e4 | Atlas.Definitions.UsableDefinition.get_GeneralData
// ============================================================

void Atlas_Definitions_UsableDefinition__get_GeneralData(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[5] = *(undefined8 *)(param_2 + 0x48);
  param_1[4] = uVar1;
  param_1[6] = *(undefined8 *)(param_2 + 0x50);
  return;
}



// ============================================================
// RVA: 0x1524300 | Atlas.Definitions.UsableDefinition.get_HitOpponentWithStat
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition__get_HitOpponentWithStat(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1524308 | Atlas.Definitions.UsableDefinition.get_WasHitByStat
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition__get_WasHitByStat(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ============================================================
// RVA: 0x1524310 | Atlas.Definitions.UsableDefinition.get_UsedStat
// ============================================================

undefined4 Atlas_Definitions_UsableDefinition__get_UsedStat(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1524318 | Atlas.Definitions.UsableDefinition..ctor
// ============================================================

void Atlas_Definitions_UsableDefinition___ctor(long param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*Atlas.Definitions.UsableDefinition.GeneralUsableData$$CreateDefault*/ func_0x0156cf90(&uStack_58,0);
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x48) = uStack_30;
  *(undefined8 *)(param_1 + 0x40) = uStack_38;
  *(undefined8 *)(param_1 + 0x50) = uStack_28;
  Atlas_Definitions_Definition___ctor(param_1,0);
  return;
}



