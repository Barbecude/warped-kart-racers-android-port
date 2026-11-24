// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.NormalShieldUsableDefinition

// ============================================================
// RVA: 0x14b2288 | Atlas.Definitions.NormalShieldUsableDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_NormalShieldUsableDefinition__get_UsableType(void)

{
  return 3;
}



// ============================================================
// RVA: 0x14b2290 | Atlas.Definitions.NormalShieldUsableDefinition.get_KartTriggerEffectParameters
// ============================================================

undefined8
Atlas_Definitions_NormalShieldUsableDefinition__get_KartTriggerEffectParameters(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14b2298 | Atlas.Definitions.NormalShieldUsableDefinition.get_ShieldData
// ============================================================

void Atlas_Definitions_NormalShieldUsableDefinition__get_ShieldData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x80);
  return;
}



// ============================================================
// RVA: 0x14b22ac | Atlas.Definitions.NormalShieldUsableDefinition.PrimaryUseType
// ============================================================

undefined8 Atlas_Definitions_NormalShieldUsableDefinition__PrimaryUseType(void)

{
  return 2;
}



// ============================================================
// RVA: 0x14b22b4 | Atlas.Definitions.NormalShieldUsableDefinition..ctor
// ============================================================

void Atlas_Definitions_NormalShieldUsableDefinition___ctor(long param_1)

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



