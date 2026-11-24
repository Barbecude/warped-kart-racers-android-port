// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.BoostAccelerationVisualBehaviour

// ============================================================
// RVA: 0x153e108 | Atlas.Gameplay.BoostAccelerationVisualBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_BoostAccelerationVisualBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4f1c & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4f1c = 1;
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



