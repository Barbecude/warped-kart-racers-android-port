// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.BoostVisualBehaviour

// ============================================================
// RVA: 0x153ef40 | Atlas.Gameplay.BoostVisualBehaviour.get_IsDefault
// ============================================================

undefined1 Atlas_Gameplay_BoostVisualBehaviour__get_IsDefault(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x153ef48 | Atlas.Gameplay.BoostVisualBehaviour.get_DriftLevelsL
// ============================================================

undefined8 Atlas_Gameplay_BoostVisualBehaviour__get_DriftLevelsL(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x153ef50 | Atlas.Gameplay.BoostVisualBehaviour.get_DriftLevelsR
// ============================================================

undefined8 Atlas_Gameplay_BoostVisualBehaviour__get_DriftLevelsR(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x153ef58 | Atlas.Gameplay.BoostVisualBehaviour.get_AccelerationL
// ============================================================

undefined8 Atlas_Gameplay_BoostVisualBehaviour__get_AccelerationL(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x153ef60 | Atlas.Gameplay.BoostVisualBehaviour.get_AccelerationR
// ============================================================

undefined8 Atlas_Gameplay_BoostVisualBehaviour__get_AccelerationR(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x153ef68 | Atlas.Gameplay.BoostVisualBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_BoostVisualBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4f2a & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4f2a = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



