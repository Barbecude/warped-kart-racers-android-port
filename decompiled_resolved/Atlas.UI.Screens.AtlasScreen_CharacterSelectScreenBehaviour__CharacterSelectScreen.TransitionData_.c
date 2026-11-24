// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasScreen<CharacterSelectScreenBehaviour, CharacterSelectScreen.TransitionData>

// ============================================================
// RVA: 0x1cb50e8 | Atlas.UI.Screens.AtlasScreen<CharacterSelectScreenBehaviour, CharacterSelectScreen.TransitionData>.OnInputFamilyChanged
// ============================================================

void Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___OnInputFamilyChanged
               (long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb70f2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb70f2 = 1;
  }
  uVar2 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(*(undefined4 *)(param_1 + 0x68),0);
  if ((((uVar2 & 1) == 0) && (iVar1 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(param_2,0), iVar1 != 0)) &&
     (-1 < *(int *)(param_1 + 0x48))) {
    uVar3 = /*Core.Input.InputManager$$GetSelectedObject*/ func_0x0164abf0(*(int *)(param_1 + 0x48),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
    if ((uVar2 & 1) == 0) {
      /*Core.Input.InputManager$$SetSelectedObject*/ func_0x0164aa78(*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x60),1,0);
    }
  }
  *(int *)(param_1 + 0x68) = (int)param_2;
  return;
}



// ============================================================
// RVA: 0x1cb5534 | Atlas.UI.Screens.AtlasScreen<CharacterSelectScreenBehaviour, CharacterSelectScreen.TransitionData>.SelectComponentIfGamepad
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

uint Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((bRam0000000003eb70f7 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb70f7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec027b & 1) == 0) {
    func_0x00f78a20(0x3d23990,0,0);
    bRam0000000003ec027b = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(param_2);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1cb5944 | Atlas.UI.Screens.AtlasScreen<CharacterSelectScreenBehaviour, CharacterSelectScreen.TransitionData>..ctor
// ============================================================

void Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData____ctor
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x38))();
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



