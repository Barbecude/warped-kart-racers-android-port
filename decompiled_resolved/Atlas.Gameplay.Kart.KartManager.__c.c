// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartManager.<>c

// ============================================================
// RVA: 0x1555520 | Atlas.Gameplay.Kart.KartManager.<>c..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartManager___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4fa0 & 1) == 0) {
    func_0x00f78a20(0x3d27d00);
    bRam0000000003eb4fa0 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1555580 | Atlas.Gameplay.Kart.KartManager.<>c..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartManager___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1555588 | Atlas.Gameplay.Kart.KartManager.<>c.<PostInitKarts>b__41_0
// ============================================================

ulong Atlas_Gameplay_Kart_KartManager___c___PostInitKarts_b__41_0
                (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = 1;
    if (*(uint *)(param_2 + 0x54) < *(uint *)(param_3 + 0x54)) {
      uVar1 = 0xffffffff;
    }
    return (ulong)uVar1;
  }
  auVar3 = func_0x00f78af4();
  uVar2 = /*System.Object$$.ctor*/ func_0x0294d018(auVar3._0_8_,0);
  *(int *)(auVar3._0_8_ + 0x10) = auVar3._8_4_;
  return uVar2;
}



