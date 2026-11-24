// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.VotingScreen.VotingPlayerInfo

// ============================================================
// RVA: 0x156e4a4 | Atlas.UI.Screens.VotingScreen.VotingPlayerInfo..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_VotingScreen_VotingPlayerInfo___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5021 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a40);
    bRam0000000003eb5021 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



