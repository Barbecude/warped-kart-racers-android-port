// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.AoEHitData

// ============================================================
// RVA: 0x1449ed8 | Atlas.Definitions.AoEHitData.CreateDefault
// ============================================================

undefined1  [16] Atlas_Definitions_AoEHitData__CreateDefault(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4735 & 1) == 0) {
    func_0x00f78a20(0x3d22d08);
    bRam0000000003eb4735 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.KartTriggerEffectParameters_TypeInfo*/ uRam0000000003d22d08);
  Atlas_Gameplay_KartTriggerEffectParameters___ctor(uVar1,0);
  return ZEXT816(0);
}



