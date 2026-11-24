// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.GoldenTurdProjectileDefinition

// ============================================================
// RVA: 0x15b4998 | Atlas.Definitions.GoldenTurdProjectileDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_GoldenTurdProjectileDefinition__get_UsableType(void)

{
  return 5;
}



// ============================================================
// RVA: 0x15b49a0 | Atlas.Definitions.GoldenTurdProjectileDefinition.get_GoldenTurdData
// ============================================================

undefined1 Atlas_Definitions_GoldenTurdProjectileDefinition__get_GoldenTurdData(long param_1)

{
  return *(undefined1 *)(param_1 + 0xac);
}



// ============================================================
// RVA: 0x15b49a8 | Atlas.Definitions.GoldenTurdProjectileDefinition..ctor
// ============================================================

void Atlas_Definitions_GoldenTurdProjectileDefinition___ctor(long param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = /*Atlas.Definitions.GoldenTurdProjectileDefinition.GoldenTurdProjectileData$$CreateDefault*/ func_0x01554b58(0);
  *(undefined1 *)(param_1 + 0xac) = uVar1;
  /*Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData$$CreateDefault*/ func_0x015632f0(&uStack_38,0,0);
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



