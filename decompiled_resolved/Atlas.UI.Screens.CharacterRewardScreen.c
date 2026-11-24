// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CharacterRewardScreen

// ============================================================
// RVA: 0x15427f8 | Atlas.UI.Screens.CharacterRewardScreen.OnBeforeEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1542cbc | Atlas.UI.Screens.CharacterRewardScreen.SetFillPerc
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1542e90 | Atlas.UI.Screens.CharacterRewardScreen.OnAfterExit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1542efc | Atlas.UI.Screens.CharacterRewardScreen..ctor
// ============================================================

void Atlas_UI_Screens_CharacterRewardScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4f4d & 1) == 0) {
    func_0x00f78a20(0x3d2c6b0);
    bRam0000000003eb4f4d = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6b0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



