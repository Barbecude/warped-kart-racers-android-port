// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.BoostUsableDefinition

// ============================================================
// RVA: 0x153ef14 | Atlas.Definitions.BoostUsableDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_BoostUsableDefinition__get_UsableType(void)

{
  return 4;
}



// ============================================================
// RVA: 0x153ef1c | Atlas.Definitions.BoostUsableDefinition.get_BoostData
// ============================================================

void Atlas_Definitions_BoostUsableDefinition__get_BoostData(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 100);
  param_1[1] = *(undefined8 *)(param_2 + 0x6c);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x74);
  return;
}



// ============================================================
// RVA: 0x153ef30 | Atlas.Definitions.BoostUsableDefinition.PrimaryUseType
// ============================================================

undefined8 Atlas_Definitions_BoostUsableDefinition__PrimaryUseType(void)

{
  return 3;
}



// ============================================================
// RVA: 0x153ef38 | Atlas.Definitions.BoostUsableDefinition..ctor
// ============================================================

void Atlas_Definitions_BoostUsableDefinition___ctor(long param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*Atlas.Definitions.UsableDefinition.GeneralUsableData$$CreateDefault*/ func_0x0156cf90(&uStack_58,0,0);
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x48) = uStack_30;
  *(undefined8 *)(param_1 + 0x40) = uStack_38;
  *(undefined8 *)(param_1 + 0x50) = uStack_28;
  /*Atlas.Definitions.Definition$$.ctor*/ func_0x015711d4(param_1,0);
  return;
}



