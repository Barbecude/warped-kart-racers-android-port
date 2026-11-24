// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Arcade.ArcadeEvent<ArcadeShooterEventDefinition>

// ============================================================
// RVA: 0x1e77304 | Atlas.Arcade.ArcadeEvent<ArcadeShooterEventDefinition>.get_EventDefinition
// ============================================================

long Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition___get_EventDefinition
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  lVar4 = **(long **)(*(long *)(param_2 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78adc(uVar2,lVar4);
  lVar3 = **(long **)(*(long *)(param_2 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar4 != 0) {
    lVar1 = func_0x00f78adc(lVar4,lVar3);
    if (lVar1 != 0) {
      return lVar1;
    }
    func_0x00f78e5c(lVar4,lVar3);
  }
  return 0;
}



// ============================================================
// RVA: 0x1e77398 | Atlas.Arcade.ArcadeEvent<ArcadeShooterEventDefinition>..ctor
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



