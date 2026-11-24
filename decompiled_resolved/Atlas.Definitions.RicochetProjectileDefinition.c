// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.RicochetProjectileDefinition

// ============================================================
// RVA: 0x14e53b0 | Atlas.Definitions.RicochetProjectileDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_RicochetProjectileDefinition__get_UsableType(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14e53b8 | Atlas.Definitions.RicochetProjectileDefinition.get_RicochetData
// ============================================================

undefined4 Atlas_Definitions_RicochetProjectileDefinition__get_RicochetData(long param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// ============================================================
// RVA: 0x14e53c0 | Atlas.Definitions.RicochetProjectileDefinition..ctor
// ============================================================

void Atlas_Definitions_RicochetProjectileDefinition___ctor(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__CreateDefault(&uStack_38,0,0);
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



