// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.VotingScreen.TransitionData

// ============================================================
// RVA: 0x156eb1c | Atlas.UI.Screens.VotingScreen.TransitionData..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_VotingScreen_TransitionData___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5020 & 1) == 0) {
    func_0x00f78a20(0x3d1f910);
    bRam0000000003eb5020 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.VotingManager.VoteOptionIds[]_TypeInfo*/ uRam0000000003d1f910,2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



