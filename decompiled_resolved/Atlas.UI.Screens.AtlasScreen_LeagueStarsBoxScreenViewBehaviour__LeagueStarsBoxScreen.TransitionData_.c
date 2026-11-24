// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasScreen<LeagueStarsBoxScreenViewBehaviour, LeagueStarsBoxScreen.TransitionData>

// ============================================================
// RVA: 0x1cb50e8 | Atlas.UI.Screens.AtlasScreen<LeagueStarsBoxScreenViewBehaviour, LeagueStarsBoxScreen.TransitionData>.OnInputFamilyChanged
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
// RVA: 0x1cb54dc | Atlas.UI.Screens.AtlasScreen<LeagueStarsBoxScreenViewBehaviour, LeagueStarsBoxScreen.TransitionData>.SelectGameObjectIfGamepad
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb551c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

ulong Atlas_UI_Screens_AtlasScreen_LeagueStarsBoxScreenViewBehaviour__LeagueStarsBoxScreen_TransitionData___SelectGameObjectIfGamepad
                (long param_1,long param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
  if (param_1 == 0) {
    auVar12 = func_0x00f78af4();
    param_2 = auVar12._8_8_;
    pcStack_28 = 
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
    ;
    if ((bRam0000000003eb70f7 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb70f7 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_90 = 0x3eb7000;
    puStack_68 = (undefined *)0x1cb55a4;
    uStack_88 = param_3;
    ppuStack_70 = &puStack_30;
    if ((bRam0000000003ec027b & 1) == 0) {
      lStack_80 = param_2;
      lStack_78 = auVar12._0_8_;
      func_0x00f78a20(0x3d23990,0,0);
      auVar12._8_8_ = lStack_80;
      auVar12._0_8_ = lStack_78;
      bRam0000000003ec027b = 1;
    }
    lStack_80 = auVar12._8_8_;
    lStack_78 = auVar12._0_8_;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
      auVar12._8_8_ = lStack_80;
      auVar12._0_8_ = lStack_78;
    }
    puVar3 = &stack0xffffffffffffffa0;
    uVar7 = uStack_88;
    uVar9 = uStack_90;
    pppuVar10 = (undefined8 ***)ppuStack_70;
    puVar11 = puStack_68;
    auVar1 = auVar12;
    goto code_r0x03248740;
  }
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x28))();
  if ((int)uVar7 == 0) {
    *(long *)(param_1 + 0x60) = param_2;
    return uVar7;
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar7 = (ulong)uVar4;
  puVar2 = (undefined8 *)&stack0xffffffffffffffa0;
  pcStack_28 = (code *)0x1cb5520;
  pppuVar10 = (undefined8 ***)&puStack_30;
  uVar9 = 1;
  if ((bRam0000000003eb578a & 1) == 0) {
    func_0x00f78a20(0x3d216c0,param_2,1,0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578a = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar8 == 0))
  goto code_r0x0164abe0;
  if (uVar4 < *(uint *)(lVar8 + 0x18)) {
    *(long *)(lVar8 + (long)(int)uVar4 * 0x10 + 0x20) = param_2;
    uVar5 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(uVar7);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
code_r0x0164abe0:
      func_0x00f78af4();
      goto code_r0x0164abe4;
    }
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar8 == 0) goto code_r0x0164abe0;
    /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar8,param_2,0);
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) goto code_r0x0164abe0;
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = &UNK_0164aba4;
  }
  else {
code_r0x0164abe4:
    uVar9 = func_0x00f78b24();
    uVar9 = func_0x00f78ac0(uVar9,0);
    uStack_90 = 0x3d22848;
    lStack_80 = 1;
    puStack_68 = &Core_Input_InputManager__GetSelectedObject;
    uStack_88 = uVar7;
    lStack_78 = param_2;
    ppuStack_70 = pppuVar10;
    if ((bRam0000000003eb578b & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb578b = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar8 == 0)) {
      func_0x00f78af4();
    }
    else if ((uint)uVar9 < *(uint *)(lVar8 + 0x18)) {
      return *(ulong *)(lVar8 + (long)(int)(uint)uVar9 * 0x10 + 0x20);
    }
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
    puVar2 = &uStack_c0;
    uStack_c0 = 0x3d22848;
    uStack_b8 = 0x3d22848;
    uStack_b0 = 0x3eb5000;
    puStack_98 = &Core_Input_InputManager__IsAnythingSelected;
    pppuVar10 = &ppuStack_a0;
    uVar7 = 0x3d216c0;
    uStack_a8 = uVar9;
    ppuStack_a0 = &ppuStack_70;
    if ((bRam0000000003eb578c & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb578c = 1;
    }
    uVar9 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_2 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = &UNK_0164ad0c;
  }
  puVar3 = (undefined1 *)((long)puVar2 + -0x30);
  *(undefined8 *)((long)puVar2 + -0x30) = 0x3d22848;
  *(ulong *)((long)puVar2 + -0x28) = uVar7;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar9;
  *(long *)((long)puVar2 + -0x18) = param_2;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar10;
  *(undefined **)((long)puVar2 + -8) = puVar11;
  auVar1._8_8_ = 0x3ec0000;
  auVar1._0_8_ = param_2;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar12._8_8_ = lStack_80;
  auVar12._0_8_ = lStack_78;
  uVar7 = 0x3d23990;
  uVar9 = 0x3d22848;
  pppuVar10 = (undefined8 ***)((long)puVar2 + -0x10);
  puVar11 = &UNK_03236658;
code_r0x03248740:
  lStack_80 = auVar12._8_8_;
  lStack_78 = auVar12._0_8_;
  *(undefined8 *)(puVar3 + -0x30) = uVar9;
  *(ulong *)(puVar3 + -0x28) = uVar7;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 ****)(puVar3 + -0x10) = pppuVar10;
  *(undefined **)(puVar3 + -8) = puVar11;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (param_2 == 0) {
    uVar7 = 1;
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(param_2);
    uVar7 = (ulong)(uVar4 ^ 1);
  }
  return uVar7;
}



// ============================================================
// RVA: 0x1cb5838 | Atlas.UI.Screens.AtlasScreen<LeagueStarsBoxScreenViewBehaviour, LeagueStarsBoxScreen.TransitionData>.GetCurrentlySelectedObject
// ============================================================

/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x03236658) */

ulong Atlas_UI_Screens_AtlasScreen_LeagueStarsBoxScreenViewBehaviour__LeagueStarsBoxScreen_TransitionData___GetCurrentlySelectedObject
                (long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 == 0) {
    auVar9 = func_0x00f78af4();
    lVar6 = auVar9._8_8_;
    lVar4 = auVar9._0_8_;
    if ((bRam0000000003eb70fa & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb70fa = 1;
    }
    if (lVar4 == 0) {
      func_0x00f78af4();
      return 1;
    }
    uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x28))(lVar4);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x30))(lVar4);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar6,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar8 = &Atlas_UI_Screens_AtlasScreen_object__object___IsCurrentSelectedGameObject;
    puVar1 = &stack0xfffffffffffffff0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x48);
    if ((bRam0000000003eb578b & 1) == 0) {
      func_0x00f78a20(0x3d22848,0);
      bRam0000000003eb578b = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar6 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      return *(ulong *)(lVar6 + (long)(int)uVar2 * 0x10 + 0x20);
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
    if ((bRam0000000003eb578c & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb578c = 1;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar1 = &stack0xffffffffffffff70;
    puStack_68 = &UNK_0164ad0c;
    ppuVar7 = &puStack_70;
    unaff_x20 = 0x3ec0000;
    unaff_x21 = 0x3d23990;
    puStack_70 = &stack0xffffffffffffffc0;
    if ((bRam0000000003ec021a & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec021a = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    puVar8 = &UNK_03236658;
    unaff_x19 = lVar4;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar7;
  *(undefined **)(puVar1 + -8) = puVar8;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (lVar4 == 0 && lVar6 == 0) {
    uVar5 = 1;
  }
  else {
    if (lVar6 == 0) {
      lVar6 = lVar4;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    else {
      if (lVar4 != 0) {
        return (ulong)(lVar4 == lVar6);
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar6);
    uVar5 = (ulong)(uVar2 ^ 1);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1cb5920 | Atlas.UI.Screens.AtlasScreen<LeagueStarsBoxScreenViewBehaviour, LeagueStarsBoxScreen.TransitionData>.CanProgressToNextScreen
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___CanProgressToNextScreen
          (void)

{
  return 1;
}



// ============================================================
// RVA: 0x1cb5944 | Atlas.UI.Screens.AtlasScreen<LeagueStarsBoxScreenViewBehaviour, LeagueStarsBoxScreen.TransitionData>..ctor
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



