// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0

// ============================================================
// RVA: 0x154719c | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x15471a4 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0.<StartSection>b__0
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___StartSection_b__0
               (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [12];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x10);
    uStack_38 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    uStack_28 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x30);
    uStack_20 = *(undefined8 *)(param_1 + 0x40);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnCollideWithHitTrigger
              (*(long *)(param_1 + 0x50),param_2,&uStack_50,*(undefined8 *)(param_1 + 0x48),0);
    return;
  }
  auVar1 = func_0x00f78af4();
  /*System.Object$$.ctor*/ func_0x0294d018(auVar1._0_8_,0);
  *(int *)(auVar1._0_8_ + 0x10) = auVar1._8_4_;
  return;
}



