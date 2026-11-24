// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.PostEventScreen.<>c__DisplayClass43_0

// ============================================================
// RVA: 0x1562e0c | Atlas.UI.Screens.PostEventScreen.<>c__DisplayClass43_0..ctor
// ============================================================

void Atlas_UI_Screens_PostEventScreen___c__DisplayClass43_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1562e14 | Atlas.UI.Screens.PostEventScreen.<>c__DisplayClass43_0.<StartAward>b__3
// ============================================================

void Atlas_UI_Screens_PostEventScreen___c__DisplayClass43_0___StartAward_b__3
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4fd0 & 1) == 0) {
    func_0x00f78a20(0x3d41250);
    bRam0000000003eb4fd0 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0xa0) = *(int *)(param_1 + 0x18) + *(int *)(lVar1 + 0xa0);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar1,uRam0000000003d41250);
    if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      lVar1 = *(long *)(lVar1 + 0xe0);
      uVar3 = NEON_ucvtf(*(undefined4 *)(lVar2 + 0xa0));
      /*Atlas.UI.SlantFillBar$$CalculateProgress*/ func_0x014fcdd0(uVar3,(float)*(int *)(lVar2 + 0xac),(float)*(int *)(lVar2 + 0xa4),0);
      if (lVar1 != 0) {
        param_3 = (undefined8 *)0x0;
        /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c(lVar1,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x108) = 0;
          return;
        }
      }
    }
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar4._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



