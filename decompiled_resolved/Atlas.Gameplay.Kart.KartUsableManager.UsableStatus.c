// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartUsableManager.UsableStatus

// ============================================================
// RVA: 0x155ab44 | Atlas.Gameplay.Kart.KartUsableManager.UsableStatus.get_IsValid
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartUsableManager_UsableStatus__get_IsValid(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x155ab4c | Atlas.Gameplay.Kart.KartUsableManager.UsableStatus.CreateDefault
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_KartUsableManager_UsableStatus__CreateDefault(undefined4 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_38,*(long *)(param_2 + 0x20),0);
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[5] = 0;
    auVar1._8_8_ = uStack_30;
    auVar1._0_8_ = uStack_38;
    *(undefined8 *)(param_1 + 8) = uStack_30;
    *(undefined8 *)(param_1 + 6) = uStack_38;
    *(undefined8 *)(param_1 + 10) = uStack_28;
    return auVar1;
  }
  func_0x00f78af4();
  return ZEXT416(0);
}



