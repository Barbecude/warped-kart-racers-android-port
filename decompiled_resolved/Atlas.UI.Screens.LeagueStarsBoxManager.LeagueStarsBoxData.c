// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData

// ============================================================
// RVA: 0x155cc60 | Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData.get_ID
// ============================================================

undefined8 Atlas_UI_Screens_LeagueStarsBoxManager_LeagueStarsBoxData__get_ID(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = /*System.String$$Concat*/ func_0x029bdb88(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x155cca4 | Atlas.UI.Screens.LeagueStarsBoxManager.LeagueStarsBoxData..ctor
// ============================================================

void Atlas_UI_Screens_LeagueStarsBoxManager_LeagueStarsBoxData___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



