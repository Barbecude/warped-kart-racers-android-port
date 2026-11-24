// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.PlacementHomingProjectileDefinition

// ============================================================
// RVA: 0x14beb44 | Atlas.Definitions.PlacementHomingProjectileDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_PlacementHomingProjectileDefinition__get_UsableType(void)

{
  return 2;
}



// ============================================================
// RVA: 0x14beb4c | Atlas.Definitions.PlacementHomingProjectileDefinition.get_PlacementHomingData
// ============================================================

void Atlas_Definitions_PlacementHomingProjectileDefinition__get_PlacementHomingData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[5] = *(undefined8 *)(param_2 + 0xd8);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  param_1[9] = *(undefined8 *)(param_2 + 0xf8);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  param_1[1] = *(undefined8 *)(param_2 + 0xb8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x14beb68 | Atlas.Definitions.PlacementHomingProjectileDefinition.PrimaryUseType
// ============================================================

undefined8 Atlas_Definitions_PlacementHomingProjectileDefinition__PrimaryUseType(void)

{
  return 2;
}



// ============================================================
// RVA: 0x14beb70 | Atlas.Definitions.PlacementHomingProjectileDefinition..ctor
// ============================================================

void Atlas_Definitions_PlacementHomingProjectileDefinition___ctor(long param_1)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$CreateDefault*/ func_0x01562088(&uStack_80,0);
  *(undefined8 *)(param_1 + 0xd8) = uStack_58;
  *(undefined8 *)(param_1 + 0xd0) = uStack_60;
  *(undefined8 *)(param_1 + 0xe8) = uStack_48;
  *(undefined8 *)(param_1 + 0xe0) = uStack_50;
  *(undefined8 *)(param_1 + 0xf8) = uStack_38;
  *(undefined8 *)(param_1 + 0xf0) = uStack_40;
  *(undefined8 *)(param_1 + 0x108) = uStack_28;
  *(undefined8 *)(param_1 + 0x100) = uStack_30;
  *(undefined8 *)(param_1 + 0xb8) = uStack_78;
  *(undefined8 *)(param_1 + 0xb0) = uStack_80;
  *(undefined8 *)(param_1 + 200) = uStack_68;
  *(undefined8 *)(param_1 + 0xc0) = uStack_70;
  /*Atlas.Definitions.ProjectileUsableDefinition$$.ctor*/ func_0x014cfd0c(param_1,0);
  return;
}



