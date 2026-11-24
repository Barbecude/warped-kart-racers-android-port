// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.PickupLimitsDefinition

// ============================================================
// RVA: 0x14b8fcc | Atlas.Gameplay.PickupLimitsDefinition.get_RicochetProjectile
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_RicochetProjectile(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14b8fd4 | Atlas.Gameplay.PickupLimitsDefinition.get_ProximityHomingProjectile
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_ProximityHomingProjectile(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x14b8fdc | Atlas.Gameplay.PickupLimitsDefinition.get_PlacementHomingProjectile
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_PlacementHomingProjectile(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14b8fe4 | Atlas.Gameplay.PickupLimitsDefinition.get_NormalShieldUsable
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_NormalShieldUsable(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x14b8fec | Atlas.Gameplay.PickupLimitsDefinition.get_SuperShieldUsable
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_SuperShieldUsable(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14b8ff4 | Atlas.Gameplay.PickupLimitsDefinition.get_BoostUsable
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_BoostUsable(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ============================================================
// RVA: 0x14b8ffc | Atlas.Gameplay.PickupLimitsDefinition.get_GoldenTurdProjectile
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_GoldenTurdProjectile(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14b9004 | Atlas.Gameplay.PickupLimitsDefinition.get_SatelliteUsable
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_SatelliteUsable(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ============================================================
// RVA: 0x14b900c | Atlas.Gameplay.PickupLimitsDefinition.get_RicochetProjectileHitVFXPerc
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_RicochetProjectileHitVFXPerc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14b9014 | Atlas.Gameplay.PickupLimitsDefinition.get_ProximityHomingProjectileHitVFXPerc
// ============================================================

undefined4
Atlas_Gameplay_PickupLimitsDefinition__get_ProximityHomingProjectileHitVFXPerc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ============================================================
// RVA: 0x14b901c | Atlas.Gameplay.PickupLimitsDefinition.get_PlacementHomingProjectileHitVFXPerc
// ============================================================

undefined4
Atlas_Gameplay_PickupLimitsDefinition__get_PlacementHomingProjectileHitVFXPerc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14b9024 | Atlas.Gameplay.PickupLimitsDefinition.get_NormalShieldUsableHitVFXPerc
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_NormalShieldUsableHitVFXPerc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x14b902c | Atlas.Gameplay.PickupLimitsDefinition.get_GoldenTurdProjectileHitVFXPerc
// ============================================================

undefined4 Atlas_Gameplay_PickupLimitsDefinition__get_GoldenTurdProjectileHitVFXPerc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14b9034 | Atlas.Gameplay.PickupLimitsDefinition.GetCapacityByUsableType
// ============================================================

undefined4
Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(undefined4 *)(param_1 + 0x20);
  case 1:
    return *(undefined4 *)(param_1 + 0x24);
  case 2:
    return *(undefined4 *)(param_1 + 0x28);
  case 3:
    return *(undefined4 *)(param_1 + 0x2c);
  case 4:
    return *(undefined4 *)(param_1 + 0x34);
  case 5:
    return *(undefined4 *)(param_1 + 0x38);
  case 6:
    return *(undefined4 *)(param_1 + 0x30);
  case 7:
    return *(undefined4 *)(param_1 + 0x3c);
  default:
    return 0;
  }
}



// ============================================================
// RVA: 0x14b90a0 | Atlas.Gameplay.PickupLimitsDefinition..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_PickupLimitsDefinition___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_033f84d0;
  *(undefined8 *)(param_1 + 0x48) = _UNK_033f84d8;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0x14;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



