// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SeasonsScreen.<>c__DisplayClass31_0

// ============================================================
// RVA: 0x15698e4 | Atlas.UI.Screens.SeasonsScreen.<>c__DisplayClass31_0..ctor
// ============================================================

void Atlas_UI_Screens_SeasonsScreen___c__DisplayClass31_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x15698ec | Atlas.UI.Screens.SeasonsScreen.<>c__DisplayClass31_0.<StartAward>b__1
// ============================================================

long Atlas_UI_Screens_SeasonsScreen___c__DisplayClass31_0___StartAward_b__1
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4ff9 & 1) == 0) {
    func_0x00f78a20(0x3d412b0);
    bRam0000000003eb4ff9 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0xb4) = *(int *)(param_1 + 0x18) + *(int *)(lVar1 + 0xb4);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar1,uRam0000000003d412b0);
    if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      lVar1 = *(long *)(lVar1 + 0x70);
      uVar3 = NEON_ucvtf(*(undefined4 *)(lVar2 + 0xb4));
      /*Atlas.UI.SlantFillBar$$CalculateProgress*/ func_0x014fcdd0(uVar3,(float)*(int *)(lVar2 + 0xbc),(float)*(int *)(lVar2 + 0xb8),0);
      if (lVar1 != 0) {
        param_3 = (undefined8 *)0x0;
        /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c(lVar1,0);
        lVar1 = *(long *)(param_1 + 0x10);
        if (lVar1 != 0) {
          *(undefined1 *)(lVar1 + 0xd2) = 0;
          lVar1 = *(long *)(lVar1 + 0xd8);
          if (lVar1 != 0) {
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar1,0,0);
            return lVar1;
          }
        }
      }
    }
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar4._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return lVar1;
}



