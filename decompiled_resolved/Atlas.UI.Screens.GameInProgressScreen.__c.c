// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.GameInProgressScreen.<>c

// ============================================================
// RVA: 0x1554a1c | Atlas.UI.Screens.GameInProgressScreen.<>c..cctor
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f9d & 1) == 0) {
    func_0x00f78a20(0x3d27758);
    bRam0000000003eb4f9d = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.UI.Screens.GameInProgressScreen.<>c_TypeInfo*/ lRam0000000003d27758);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.UI.Screens.GameInProgressScreen.<>c_TypeInfo*/ lRam0000000003d27758 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1554a7c | Atlas.UI.Screens.GameInProgressScreen.<>c..ctor
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1554a84 | Atlas.UI.Screens.GameInProgressScreen.<>c.<UpdateAllKartIndicatorDataRace>b__80_0
// ============================================================

ulong Atlas_UI_Screens_GameInProgressScreen___c___UpdateAllKartIndicatorDataRace_b__80_0
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                long param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 extraout_s0;
  undefined1 auVar4 [16];
  
  if ((param_5 != 0) && (param_6 != 0)) {
    uVar3 = 0xffffffff;
    if (*(float *)(param_6 + 0x18) <= *(float *)(param_5 + 0x18)) {
      uVar3 = 1;
    }
    return (ulong)uVar3;
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(long *)(lVar1 + 0x10) = auVar4._8_8_;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  uVar2 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x1c) = extraout_s0;
  *(undefined4 *)(lVar1 + 0x20) = param_2;
  *(undefined4 *)(lVar1 + 0x24) = param_3;
  *(undefined1 *)(lVar1 + 0x28) = 0;
  return uVar2;
}



