// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.NotificationBoxScreen

// ============================================================
// RVA: 0x14b2ca8 | Atlas.UI.Screens.NotificationBoxScreen.OnBeforeEnter
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

undefined8 * Atlas_UI_Screens_NotificationBoxScreen__OnBeforeEnter(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 **unaff_x22;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar11 = 0x3eb4000;
  uVar6 = 0x3d411f8;
  if ((bRam0000000003eb4aa6 & 1) == 0) {
    func_0x00f78a20(0x3d2a078);
    func_0x00f78a20(0x3d1b440);
    func_0x00f78a20(0x3d2c850);
    func_0x00f78a20(0x3d2c858);
    func_0x00f78a20(0x3d3e150);
    func_0x00f78a20(0x3d411f0);
    func_0x00f78a20(0x3d411f8);
    func_0x00f78a20(0x3d41200);
    bRam0000000003eb4aa6 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d411f8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    unaff_x22 = (undefined8 **)0x3d2c000;
    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$set_Screen*/ func_0x025df580(*(long *)(lVar5 + 0x10),param_1,uRam0000000003d3e150);
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411f0);
    uVar6 = func_0x00f78aec(/*System.Action<GameObject>_TypeInfo*/ uRam0000000003d1b440);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar6,param_1,uRam0000000003d2c858,uRam0000000003d2a078);
    if (lVar11 != 0) {
      unaff_x22 = (undefined8 **)0x3d41200;
      *(undefined8 *)(lVar11 + 0x70) = uVar6;
      uVar7 = Atlas_UI_Screens_AtlasScreen_LeagueStarsBoxScreenViewBehaviour__LeagueStarsBoxScreen_TransitionData___GetCurrentlySelectedObject
                        (param_1,uRam0000000003d2c850);
      *(undefined8 *)(param_1 + 0x80) = uVar7;
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41200);
      if (lVar5 != 0) {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar5 + 0x20);
        puVar8 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41200);
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x78) = puVar8[0x11];
          return puVar8;
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_Screens_NotificationBoxScreen__OnAfterExit;
  ppuStack_70 = (undefined1 **)unaff_x22;
  pcStack_68 = (code *)uVar6;
  lStack_60 = lVar11;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4aa7 & 1) == 0) {
    func_0x00f78a20(0x3d2c858);
    func_0x00f78a20(0x3d3e150);
    func_0x00f78a20(0x3d411f8);
    bRam0000000003eb4aa7 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d411f8);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) {
    lVar11 = func_0x00f78af4();
    if ((bRam0000000003eb4aa8 & 1) == 0) {
      func_0x00f78a20(0x3d2c848);
      bRam0000000003eb4aa8 = 1;
    }
    if (lVar11 == 0) {
      auVar14 = func_0x00f78af4();
      puVar10 = auVar14._8_8_;
      puVar8 = auVar14._0_8_;
      uVar7 = puVar10[1];
      uVar6 = *puVar10;
      puVar8[2] = puVar10[2];
      puVar8[1] = uVar7;
      *puVar8 = uVar6;
      return puVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c848 + 0x18) + 0xc0) + 0x38))();
    return puVar8;
  }
  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$set_Screen*/ func_0x025df580(*(long *)(lVar11 + 0x10),0,uRam0000000003d3e150);
  lVar11 = *(long *)(lVar5 + 0x80);
  if (lVar5 == 0) {
    uVar9 = uRam0000000003d2c858;
    auVar14 = func_0x00f78af4();
    lVar11 = auVar14._8_8_;
    pcStack_68 = 
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
    ;
    ppuStack_70 = &puStack_50;
    if ((bRam0000000003eb70f7 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb70f7 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_d0 = 0x3eb7000;
    puStack_a8 = (undefined *)0x1cb55a4;
    uStack_c8 = uVar9;
    ppuStack_b0 = &ppuStack_70;
    if ((bRam0000000003ec027b & 1) == 0) {
      lStack_c0 = lVar11;
      lStack_b8 = auVar14._0_8_;
      func_0x00f78a20(0x3d23990,0,0);
      auVar14._8_8_ = lStack_c0;
      auVar14._0_8_ = lStack_b8;
      bRam0000000003ec027b = 1;
    }
    lStack_c0 = auVar14._8_8_;
    lStack_b8 = auVar14._0_8_;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
      auVar14._8_8_ = lStack_c0;
      auVar14._0_8_ = lStack_b8;
    }
    puVar3 = &stack0xffffffffffffff60;
    uVar9 = uStack_c8;
    uVar6 = uStack_d0;
    pppuVar12 = (undefined8 ***)ppuStack_b0;
    puVar13 = puStack_a8;
    auVar1 = auVar14;
    goto code_r0x03248740;
  }
  puVar8 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(uRam0000000003d2c858 + 0x18) + 0xc0) + 0x28))();
  if ((int)puVar8 == 0) {
    *(long *)(lVar5 + 0x60) = lVar11;
    return puVar8;
  }
  uVar4 = *(uint *)(lVar5 + 0x48);
  uVar9 = (ulong)uVar4;
  puVar2 = (undefined8 *)&stack0xffffffffffffff60;
  pcStack_68 = (code *)0x1cb5520;
  pppuVar12 = (undefined8 ***)&ppuStack_70;
  uVar6 = 1;
  ppuStack_70 = &puStack_50;
  if ((bRam0000000003eb578a & 1) == 0) {
    func_0x00f78a20(0x3d216c0,lVar11,1,0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578a = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar5 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar5 == 0))
  goto code_r0x0164abe0;
  if (uVar4 < *(uint *)(lVar5 + 0x18)) {
    *(long *)(lVar5 + (long)(int)uVar4 * 0x10 + 0x20) = lVar11;
    puVar8 = (undefined8 *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(uVar9);
    if ((int)puVar8 == 0) {
      return puVar8;
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
    lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar5 == 0) goto code_r0x0164abe0;
    /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar5,lVar11,0);
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) goto code_r0x0164abe0;
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = &UNK_0164aba4;
  }
  else {
code_r0x0164abe4:
    uVar6 = func_0x00f78b24();
    uVar6 = func_0x00f78ac0(uVar6,0);
    uStack_d0 = 0x3d22848;
    lStack_c0 = 1;
    puStack_a8 = &Core_Input_InputManager__GetSelectedObject;
    uStack_c8 = uVar9;
    lStack_b8 = lVar11;
    ppuStack_b0 = pppuVar12;
    if ((bRam0000000003eb578b & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb578b = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar11 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar11 == 0)) {
      func_0x00f78af4();
    }
    else if ((uint)uVar6 < *(uint *)(lVar11 + 0x18)) {
      return *(undefined8 **)(lVar11 + (long)(int)(uint)uVar6 * 0x10 + 0x20);
    }
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    puVar2 = &uStack_100;
    uStack_100 = 0x3d22848;
    uStack_f8 = 0x3d22848;
    uStack_f0 = 0x3eb5000;
    puStack_d8 = &Core_Input_InputManager__IsAnythingSelected;
    pppuVar12 = &ppuStack_e0;
    uVar9 = 0x3d216c0;
    uStack_e8 = uVar6;
    ppuStack_e0 = &ppuStack_b0;
    if ((bRam0000000003eb578c & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb578c = 1;
    }
    uVar6 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar11 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = &UNK_0164ad0c;
  }
  puVar3 = (undefined1 *)((long)puVar2 + -0x30);
  *(undefined8 *)((long)puVar2 + -0x30) = 0x3d22848;
  *(ulong *)((long)puVar2 + -0x28) = uVar9;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar6;
  *(long *)((long)puVar2 + -0x18) = lVar11;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar12;
  *(undefined **)((long)puVar2 + -8) = puVar13;
  auVar1._8_8_ = 0x3ec0000;
  auVar1._0_8_ = lVar11;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar14._8_8_ = lStack_c0;
  auVar14._0_8_ = lStack_b8;
  uVar9 = 0x3d23990;
  uVar6 = 0x3d22848;
  pppuVar12 = (undefined8 ***)((long)puVar2 + -0x10);
  puVar13 = &UNK_03236658;
code_r0x03248740:
  lStack_c0 = auVar14._8_8_;
  lStack_b8 = auVar14._0_8_;
  *(undefined8 *)(puVar3 + -0x30) = uVar6;
  *(ulong *)(puVar3 + -0x28) = uVar9;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 ****)(puVar3 + -0x10) = pppuVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (lVar11 == 0) {
    puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar11);
    puVar8 = (undefined8 *)(ulong)(uVar4 ^ 1);
  }
  return puVar8;
}



// ============================================================
// RVA: 0x14b2e24 | Atlas.UI.Screens.NotificationBoxScreen.OnAfterExit
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

undefined8 * Atlas_UI_Screens_NotificationBoxScreen__OnAfterExit(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
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
  
  if ((bRam0000000003eb4aa7 & 1) == 0) {
    func_0x00f78a20(0x3d2c858);
    func_0x00f78a20(0x3d3e150);
    func_0x00f78a20(0x3d411f8);
    bRam0000000003eb4aa7 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d411f8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4aa8 & 1) == 0) {
      func_0x00f78a20(0x3d2c848);
      bRam0000000003eb4aa8 = 1;
    }
    if (lVar5 == 0) {
      auVar14 = func_0x00f78af4();
      puVar9 = auVar14._8_8_;
      puVar7 = auVar14._0_8_;
      uVar6 = puVar9[1];
      uVar11 = *puVar9;
      puVar7[2] = puVar9[2];
      puVar7[1] = uVar6;
      *puVar7 = uVar11;
      return puVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c848 + 0x18) + 0xc0) + 0x38))();
    return puVar7;
  }
  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$set_Screen*/ func_0x025df580(*(long *)(lVar5 + 0x10),0,uRam0000000003d3e150);
  lVar5 = *(long *)(param_1 + 0x80);
  if (param_1 == 0) {
    uVar8 = uRam0000000003d2c858;
    auVar14 = func_0x00f78af4();
    lVar5 = auVar14._8_8_;
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
    uStack_88 = uVar8;
    ppuStack_70 = (undefined8 **)&stack0xffffffffffffffd0;
    if ((bRam0000000003ec027b & 1) == 0) {
      lStack_80 = lVar5;
      lStack_78 = auVar14._0_8_;
      func_0x00f78a20(0x3d23990,0,0);
      auVar14._8_8_ = lStack_80;
      auVar14._0_8_ = lStack_78;
      bRam0000000003ec027b = 1;
    }
    lStack_80 = auVar14._8_8_;
    lStack_78 = auVar14._0_8_;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
      auVar14._8_8_ = lStack_80;
      auVar14._0_8_ = lStack_78;
    }
    puVar3 = &stack0xffffffffffffffa0;
    uVar8 = uStack_88;
    uVar11 = uStack_90;
    pppuVar12 = (undefined8 ***)ppuStack_70;
    puVar13 = puStack_68;
    auVar1 = auVar14;
    goto code_r0x03248740;
  }
  puVar7 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(uRam0000000003d2c858 + 0x18) + 0xc0) + 0x28))();
  if ((int)puVar7 == 0) {
    *(long *)(param_1 + 0x60) = lVar5;
    return puVar7;
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar8 = (ulong)uVar4;
  puVar2 = (undefined8 *)&stack0xffffffffffffffa0;
  pppuVar12 = (undefined8 ***)&stack0xffffffffffffffd0;
  uVar11 = 1;
  if ((bRam0000000003eb578a & 1) == 0) {
    func_0x00f78a20(0x3d216c0,lVar5,1,0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578a = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar10 == 0))
  goto code_r0x0164abe0;
  if (uVar4 < *(uint *)(lVar10 + 0x18)) {
    *(long *)(lVar10 + (long)(int)uVar4 * 0x10 + 0x20) = lVar5;
    puVar7 = (undefined8 *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(uVar8);
    if ((int)puVar7 == 0) {
      return puVar7;
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
    lVar10 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar10 == 0) goto code_r0x0164abe0;
    /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar10,lVar5,0);
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) goto code_r0x0164abe0;
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = &UNK_0164aba4;
  }
  else {
code_r0x0164abe4:
    uVar11 = func_0x00f78b24();
    uVar11 = func_0x00f78ac0(uVar11,0);
    uStack_90 = 0x3d22848;
    lStack_80 = 1;
    puStack_68 = &Core_Input_InputManager__GetSelectedObject;
    uStack_88 = uVar8;
    lStack_78 = lVar5;
    ppuStack_70 = pppuVar12;
    if ((bRam0000000003eb578b & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb578b = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar5 == 0)) {
      func_0x00f78af4();
    }
    else if ((uint)uVar11 < *(uint *)(lVar5 + 0x18)) {
      return *(undefined8 **)(lVar5 + (long)(int)(uint)uVar11 * 0x10 + 0x20);
    }
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
    puVar2 = &uStack_c0;
    uStack_c0 = 0x3d22848;
    uStack_b8 = 0x3d22848;
    uStack_b0 = 0x3eb5000;
    puStack_98 = &Core_Input_InputManager__IsAnythingSelected;
    pppuVar12 = &ppuStack_a0;
    uVar8 = 0x3d216c0;
    uStack_a8 = uVar11;
    ppuStack_a0 = &ppuStack_70;
    if ((bRam0000000003eb578c & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb578c = 1;
    }
    uVar11 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = &UNK_0164ad0c;
  }
  puVar3 = (undefined1 *)((long)puVar2 + -0x30);
  *(undefined8 *)((long)puVar2 + -0x30) = 0x3d22848;
  *(ulong *)((long)puVar2 + -0x28) = uVar8;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar11;
  *(long *)((long)puVar2 + -0x18) = lVar5;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar12;
  *(undefined **)((long)puVar2 + -8) = puVar13;
  auVar1._8_8_ = 0x3ec0000;
  auVar1._0_8_ = lVar5;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar14._8_8_ = lStack_80;
  auVar14._0_8_ = lStack_78;
  uVar8 = 0x3d23990;
  uVar11 = 0x3d22848;
  pppuVar12 = (undefined8 ***)((long)puVar2 + -0x10);
  puVar13 = &UNK_03236658;
code_r0x03248740:
  lStack_80 = auVar14._8_8_;
  lStack_78 = auVar14._0_8_;
  *(undefined8 *)(puVar3 + -0x30) = uVar11;
  *(ulong *)(puVar3 + -0x28) = uVar8;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 ****)(puVar3 + -0x10) = pppuVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (lVar5 == 0) {
    puVar7 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar5);
    puVar7 = (undefined8 *)(ulong)(uVar4 ^ 1);
  }
  return puVar7;
}



// ============================================================
// RVA: 0x14b2ecc | Atlas.UI.Screens.NotificationBoxScreen..ctor
// ============================================================

void Atlas_UI_Screens_NotificationBoxScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4aa8 & 1) == 0) {
    func_0x00f78a20(0x3d2c848);
    bRam0000000003eb4aa8 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c848 + 0x18) + 0xc0) + 0x38))();
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



