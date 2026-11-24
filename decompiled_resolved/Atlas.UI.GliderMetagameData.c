// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.GliderMetagameData

// ============================================================
// RVA: 0x15b3ac0 | Atlas.UI.GliderMetagameData..ctor
// ============================================================

void Atlas_UI_GliderMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if ((bRam0000000003eb4952 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4952 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  return;
}



