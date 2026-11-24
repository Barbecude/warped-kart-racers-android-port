// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LoadoutButtonStateListener

// ============================================================
// RVA: 0x1487f1c | Atlas.UI.LoadoutButtonStateListener.OnStateExit
// ============================================================

undefined1  [16]
Atlas_UI_LoadoutButtonStateListener__OnStateExit(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4951 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4951 = 1;
  }
  iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(param_3,0);
  if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (iVar1 != *(int *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 8)) {
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(param_3,0);
    uVar2 = extraout_x1;
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar2 = extraout_x1_00;
    }
    if (iVar1 != *(int *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0xc)) {
      auVar4._8_8_ = uVar2;
      auVar4._0_8_ = /*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578;
      return auVar4;
    }
  }
  if (param_2 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*pcRam0000000003ebe9d8)(param_2,0);
    return auVar4;
  }
  auVar3._0_8_ = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x1488008 | Atlas.UI.LoadoutButtonStateListener..ctor
// ============================================================

undefined1  [16] Atlas_UI_LoadoutButtonStateListener___ctor(ulong param_1)

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



