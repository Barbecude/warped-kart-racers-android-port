// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.MultiplayerLobbyPlayerEntryBehaviour

// ============================================================
// RVA: 0x14980dc | Atlas.UI.Screens.MultiplayerLobbyPlayerEntryBehaviour.get_PedestalPositioner
// ============================================================

undefined8
Atlas_UI_Screens_MultiplayerLobbyPlayerEntryBehaviour__get_PedestalPositioner(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14980e4 | Atlas.UI.Screens.MultiplayerLobbyPlayerEntryBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_MultiplayerLobbyPlayerEntryBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



