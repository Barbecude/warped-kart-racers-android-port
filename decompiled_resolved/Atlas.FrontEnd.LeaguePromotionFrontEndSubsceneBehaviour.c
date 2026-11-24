// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.LeaguePromotionFrontEndSubsceneBehaviour

// ============================================================
// RVA: 0x1480f28 | Atlas.FrontEnd.LeaguePromotionFrontEndSubsceneBehaviour.get_PromotionObjects
// ============================================================

undefined8
Atlas_FrontEnd_LeaguePromotionFrontEndSubsceneBehaviour__get_PromotionObjects(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1480f30 | Atlas.FrontEnd.LeaguePromotionFrontEndSubsceneBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_LeaguePromotionFrontEndSubsceneBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428,0);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



