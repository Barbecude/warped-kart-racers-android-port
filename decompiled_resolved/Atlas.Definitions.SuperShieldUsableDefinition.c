// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.SuperShieldUsableDefinition

// ============================================================
// RVA: 0x1506df8 | Atlas.Definitions.SuperShieldUsableDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_SuperShieldUsableDefinition__get_UsableType(void)

{
  return 6;
}



// ============================================================
// RVA: 0x1506e00 | Atlas.Definitions.SuperShieldUsableDefinition.get_KartTriggerEffectParameters
// ============================================================

undefined8
Atlas_Definitions_SuperShieldUsableDefinition__get_KartTriggerEffectParameters(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1506e08 | Atlas.Definitions.SuperShieldUsableDefinition.get_SuperShieldData
// ============================================================

void Atlas_Definitions_SuperShieldUsableDefinition__get_SuperShieldData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0x90);
  return;
}



// ============================================================
// RVA: 0x1506e1c | Atlas.Definitions.SuperShieldUsableDefinition.PrimaryUseType
// ============================================================

undefined8 Atlas_Definitions_SuperShieldUsableDefinition__PrimaryUseType(void)

{
  return 4;
}



// ============================================================
// RVA: 0x1506e24 | Atlas.Definitions.SuperShieldUsableDefinition..ctor
// ============================================================

void Atlas_Definitions_SuperShieldUsableDefinition___ctor(long param_1)

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
  Atlas_Definitions_Definition___ctor(param_1,0);
  return;
}



