// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Arcade.ArcadeEvent<ArcadeTimeTrialEventDefinition>

// ============================================================
// RVA: 0x1e77398 | Atlas.Arcade.ArcadeEvent<ArcadeTimeTrialEventDefinition>..ctor
// ============================================================

undefined1  [16] Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition____ctor(ulong param_1)

{
  undefined8 extraout_x1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    if ((bRam0000000003eb474f & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb474f = 1;
    }
    *(undefined8 *)(param_1 + 0x78) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    *(undefined4 *)(param_1 + 0x88) = 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x00f78af4();
  auVar1._8_8_ = extraout_x1;
  auVar1._0_8_ = 0x8000;
  return auVar1;
}



