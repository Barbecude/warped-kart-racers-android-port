// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ProjectileUsableDefinition

// ============================================================
// RVA: 0x14cfcc4 | Atlas.Definitions.ProjectileUsableDefinition.get_ProjectileData
// ============================================================

void Atlas_Definitions_ProjectileUsableDefinition__get_ProjectileData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x90);
  return;
}



// ============================================================
// RVA: 0x14cfcd8 | Atlas.Definitions.ProjectileUsableDefinition.get_DespawnVfxData
// ============================================================

void Atlas_Definitions_ProjectileUsableDefinition__get_DespawnVfxData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  param_1[1] = *(undefined8 *)(param_2 + 0xa0);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0xa8);
  return;
}



// ============================================================
// RVA: 0x14cfcec | Atlas.Definitions.ProjectileUsableDefinition.PrimaryUseType
// ============================================================

uint Atlas_Definitions_ProjectileUsableDefinition__PrimaryUseType(long param_1)

{
  uint uVar1;
  
  uVar1 = /*Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData$$IsPrimaryThrowForward*/ func_0x015632bc(param_1 + 0x80,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x14cfd0c | Atlas.Definitions.ProjectileUsableDefinition..ctor
// ============================================================

void Atlas_Definitions_ProjectileUsableDefinition___ctor(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData$$CreateDefault*/ func_0x015632f0(&uStack_38,0);
  *(undefined8 *)(param_1 + 0x88) = uStack_30;
  *(undefined8 *)(param_1 + 0x80) = uStack_38;
  *(undefined8 *)(param_1 + 0x90) = uStack_28;
  /*Atlas.Definitions.UsableDefinition.DespawnVFXData$$CreateDefault*/ func_0x0156cf20(&uStack_50,0);
  *(undefined8 *)(param_1 + 0xa0) = uStack_48;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  Atlas_Definitions_CollidableUsableDefinition___ctor(param_1,0);
  return;
}



