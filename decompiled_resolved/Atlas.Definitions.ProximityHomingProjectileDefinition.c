// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ProximityHomingProjectileDefinition

// ============================================================
// RVA: 0x14d1b6c | Atlas.Definitions.ProximityHomingProjectileDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_ProximityHomingProjectileDefinition__get_UsableType(void)

{
  return 1;
}



// ============================================================
// RVA: 0x14d1b74 | Atlas.Definitions.ProximityHomingProjectileDefinition.get_ProximityHomingData
// ============================================================

undefined1  [16]
Atlas_Definitions_ProximityHomingProjectileDefinition__get_ProximityHomingData(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x14d1b80 | Atlas.Definitions.ProximityHomingProjectileDefinition..ctor
// ============================================================

void Atlas_Definitions_ProximityHomingProjectileDefinition___ctor(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  auVar1 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$CreateDefault*/ func_0x01563470(0);
  *(undefined1 (*) [16])(param_1 + 0xb0) = auVar1;
  Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__CreateDefault(&uStack_38,0);
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



