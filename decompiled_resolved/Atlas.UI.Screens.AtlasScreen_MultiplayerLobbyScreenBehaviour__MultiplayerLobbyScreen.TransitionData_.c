// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasScreen<MultiplayerLobbyScreenBehaviour, MultiplayerLobbyScreen.TransitionData>

// ============================================================
// RVA: 0x1cb50e8 | Atlas.UI.Screens.AtlasScreen<MultiplayerLobbyScreenBehaviour, MultiplayerLobbyScreen.TransitionData>.OnInputFamilyChanged
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
// RVA: 0x1cb529c | Atlas.UI.Screens.AtlasScreen<MultiplayerLobbyScreenBehaviour, MultiplayerLobbyScreen.TransitionData>.ReLayoutLayoutAndContentSizeFitters
// ============================================================

/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032d30dc) */
/* WARNING: Removing unreachable block (ram,0x032d30ec) */
/* WARNING: Removing unreachable block (ram,0x032d30f4) */
/* WARNING: Removing unreachable block (ram,0x032d30fc) */
/* WARNING: Removing unreachable block (ram,0x032d3108) */
/* WARNING: Removing unreachable block (ram,0x032d3110) */
/* WARNING: Removing unreachable block (ram,0x032d3118) */
/* WARNING: Removing unreachable block (ram,0x032d3124) */
/* WARNING: Removing unreachable block (ram,0x032d3168) */
/* WARNING: Removing unreachable block (ram,0x032d3188) */
/* WARNING: Removing unreachable block (ram,0x032d3190) */
/* WARNING: Removing unreachable block (ram,0x032d3198) */
/* WARNING: Removing unreachable block (ram,0x032d31a4) */
/* WARNING: Removing unreachable block (ram,0x032d31ac) */
/* WARNING: Removing unreachable block (ram,0x032d31b4) */
/* WARNING: Removing unreachable block (ram,0x032d31c0) */
/* WARNING: Removing unreachable block (ram,0x032d3204) */
/* WARNING: Removing unreachable block (ram,0x032d2edc) */
/* WARNING: Removing unreachable block (ram,0x032d2eec) */
/* WARNING: Removing unreachable block (ram,0x026f609c) */
/* WARNING: Removing unreachable block (ram,0x026f60c4) */
/* WARNING: Removing unreachable block (ram,0x026f60e4) */
/* WARNING: Removing unreachable block (ram,0x026f60ec) */
/* WARNING: Removing unreachable block (ram,0x026f6108) */
/* WARNING: Removing unreachable block (ram,0x026f6110) */
/* WARNING: Removing unreachable block (ram,0x026f612c) */
/* WARNING: Removing unreachable block (ram,0x026f6140) */
/* WARNING: Removing unreachable block (ram,0x026f6148) */
/* WARNING: Removing unreachable block (ram,0x026f614c) */
/* WARNING: Removing unreachable block (ram,0x026f6160) */
/* WARNING: Removing unreachable block (ram,0x026f6168) */
/* WARNING: Removing unreachable block (ram,0x026f6180) */
/* WARNING: Removing unreachable block (ram,0x026f61ac) */
/* WARNING: Removing unreachable block (ram,0x026f61d4) */
/* WARNING: Removing unreachable block (ram,0x026f61fc) */
/* WARNING: Removing unreachable block (ram,0x026f6204) */
/* WARNING: Removing unreachable block (ram,0x026f6220) */
/* WARNING: Removing unreachable block (ram,0x026f6208) */
/* WARNING: Removing unreachable block (ram,0x026f6224) */
/* WARNING: Removing unreachable block (ram,0x026f623c) */
/* WARNING: Removing unreachable block (ram,0x026f621c) */
/* WARNING: Removing unreachable block (ram,0x026f6250) */
/* WARNING: Removing unreachable block (ram,0x026f6280) */
/* WARNING: Removing unreachable block (ram,0x026f62a8) */
/* WARNING: Removing unreachable block (ram,0x026f62b0) */
/* WARNING: Removing unreachable block (ram,0x026f62cc) */
/* WARNING: Removing unreachable block (ram,0x026f62b4) */
/* WARNING: Removing unreachable block (ram,0x026f62d0) */
/* WARNING: Removing unreachable block (ram,0x026f62e8) */
/* WARNING: Removing unreachable block (ram,0x026f62c8) */
/* WARNING: Removing unreachable block (ram,0x026f62fc) */
/* WARNING: Removing unreachable block (ram,0x026f632c) */
/* WARNING: Removing unreachable block (ram,0x026f6354) */
/* WARNING: Removing unreachable block (ram,0x026f635c) */
/* WARNING: Removing unreachable block (ram,0x026f6378) */
/* WARNING: Removing unreachable block (ram,0x026f6360) */
/* WARNING: Removing unreachable block (ram,0x026f637c) */
/* WARNING: Removing unreachable block (ram,0x026f6394) */
/* WARNING: Removing unreachable block (ram,0x026f6374) */
/* WARNING: Removing unreachable block (ram,0x026f63a8) */
/* WARNING: Removing unreachable block (ram,0x026f63d8) */
/* WARNING: Removing unreachable block (ram,0x026f6400) */
/* WARNING: Removing unreachable block (ram,0x026f6408) */
/* WARNING: Removing unreachable block (ram,0x026f6424) */
/* WARNING: Removing unreachable block (ram,0x026f640c) */
/* WARNING: Removing unreachable block (ram,0x026f6428) */
/* WARNING: Removing unreachable block (ram,0x026f6440) */
/* WARNING: Removing unreachable block (ram,0x026f6420) */
/* WARNING: Removing unreachable block (ram,0x026f6454) */
/* WARNING: Removing unreachable block (ram,0x026f6500) */
/* WARNING: Removing unreachable block (ram,0x026f6524) */
/* WARNING: Removing unreachable block (ram,0x026f654c) */
/* WARNING: Removing unreachable block (ram,0x026f6554) */
/* WARNING: Removing unreachable block (ram,0x026f6560) */
/* WARNING: Removing unreachable block (ram,0x026f6568) */
/* WARNING: Removing unreachable block (ram,0x026f6594) */
/* WARNING: Removing unreachable block (ram,0x026f6574) */
/* WARNING: Removing unreachable block (ram,0x026f6580) */
/* WARNING: Removing unreachable block (ram,0x026f65a0) */
/* WARNING: Removing unreachable block (ram,0x026f65b4) */
/* WARNING: Removing unreachable block (ram,0x026f6698) */
/* WARNING: Removing unreachable block (ram,0x026f672c) */
/* WARNING: Removing unreachable block (ram,0x026f66b0) */
/* WARNING: Removing unreachable block (ram,0x026f66c4) */
/* WARNING: Removing unreachable block (ram,0x026f66cc) */
/* WARNING: Removing unreachable block (ram,0x026f66d8) */
/* WARNING: Removing unreachable block (ram,0x026f66e0) */
/* WARNING: Removing unreachable block (ram,0x026f670c) */
/* WARNING: Removing unreachable block (ram,0x026f66ec) */
/* WARNING: Removing unreachable block (ram,0x026f66f8) */
/* WARNING: Removing unreachable block (ram,0x026f6718) */
/* WARNING: Removing unreachable block (ram,0x026f65e0) */
/* WARNING: Removing unreachable block (ram,0x026f65f4) */
/* WARNING: Removing unreachable block (ram,0x026f65fc) */
/* WARNING: Removing unreachable block (ram,0x026f6608) */
/* WARNING: Removing unreachable block (ram,0x026f6610) */
/* WARNING: Removing unreachable block (ram,0x026f663c) */
/* WARNING: Removing unreachable block (ram,0x026f661c) */
/* WARNING: Removing unreachable block (ram,0x026f6628) */
/* WARNING: Removing unreachable block (ram,0x026f664c) */
/* WARNING: Removing unreachable block (ram,0x026f6478) */
/* WARNING: Removing unreachable block (ram,0x026f6490) */
/* WARNING: Removing unreachable block (ram,0x026f6498) */
/* WARNING: Removing unreachable block (ram,0x026f64a4) */
/* WARNING: Removing unreachable block (ram,0x026f64ac) */
/* WARNING: Removing unreachable block (ram,0x026f64d8) */
/* WARNING: Removing unreachable block (ram,0x026f64b8) */
/* WARNING: Removing unreachable block (ram,0x026f64c4) */
/* WARNING: Removing unreachable block (ram,0x026f64e4) */
/* WARNING: Removing unreachable block (ram,0x026f6188) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */

void Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
               (undefined8 param_1,long *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 **ppuVar17;
  undefined *puVar18;
  undefined1 auVar19 [12];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb70f3 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    bRam0000000003eb70f3 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec2d40 & 1) == 0) {
    func_0x00f78a20(0x3d22df0,0);
    func_0x00f78a20(0x3d3ef80);
    func_0x00f78a20(0x3d3ef88);
    bRam0000000003ec2d40 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (((**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8) == 0) ||
      (lVar5 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
      lVar5 == 0)) || (*(long **)(lVar5 + 0x10) = param_2, param_2 == (long *)0x0)) {
    puVar18 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
    auVar19 = func_0x00f78af4();
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    *(undefined4 *)(lVar5 + 0x18) = uVar3;
    auVar19._8_4_ = 1;
    auVar19._0_8_ = lVar5;
    puVar18 = &UNK_032d2edc;
  }
  lVar5 = auVar19._0_8_;
  ppuVar17 = &puStack_40;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar18;
  if ((bRam0000000003ec2d41 & 1) == 0) {
    func_0x00f78a20(0x3d634d8);
    func_0x00f78a20(0x3d634e0);
    func_0x00f78a20(0x3d634e8);
    func_0x00f78a20(0x3d634f0);
    func_0x00f78a20(0x3d27de0);
    func_0x00f78a20(0x3d41588);
    func_0x00f78a20(0x3d1eaf0);
    bRam0000000003ec2d41 = 1;
  }
  if (auVar19._8_4_ != 1) {
    return;
  }
  uVar12 = *(undefined8 *)(lVar5 + 0x10);
  uVar15 = 0x3d27de0;
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  lVar13 = plVar10[2];
  if (lVar13 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar10 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar10;
    lVar13 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar13,unaff_x22,uRam0000000003d634d8,uRam0000000003d41588);
    *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar13;
  }
  /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(lVar5,uVar12,lVar13);
  plVar10 = *(long **)(lVar5 + 0x10);
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  lVar13 = plVar11[3];
  if (lVar13 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar11 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar11;
    lVar13 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar13,unaff_x22,uRam0000000003d634e0,uRam0000000003d41588);
    *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = lVar13;
  }
  puVar18 = &UNK_032d30dc;
  puVar2 = &stack0xffffffffffffff90;
  lVar14 = lVar5;
  plVar11 = plVar10;
  lVar8 = lVar13;
  do {
    plVar9 = plVar10;
    *(long *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = uVar15;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(long *)(puVar2 + -0x28) = lVar8;
    *(long **)(puVar2 + -0x20) = plVar11;
    *(long *)(puVar2 + -0x18) = lVar14;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar17;
    *(undefined **)(puVar2 + -8) = puVar18;
    ppuVar17 = (undefined1 **)(puVar2 + -0x10);
    if ((bRam0000000003ec2d42 & 1) == 0) {
      func_0x00f78a20(0x3d19778);
      func_0x00f78a20(0x3d222b0);
      func_0x00f78a20(0x3d22df0);
      func_0x00f78a20(0x3d398f8);
      func_0x00f78a20(0x3d39900);
      func_0x00f78a20(0x3d1d6c0);
      func_0x00f78a20(0x3d3a1c0);
      func_0x00f78a20(0x3d3a1c8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d247e0);
      func_0x00f78a20(0x3d25458);
      func_0x00f78a20(0x3d41590);
      bRam0000000003ec2d42 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar9,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    uVar15 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
    uVar15 = unaff_x26;
    uVar12 = unaff_x27;
    if (plVar9 == (long *)0x0) {
code_r0x032d3918:
      func_0x00f78af4();
      unaff_x26 = uVar15;
      unaff_x27 = uVar12;
    }
    else {
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar9,uVar7,unaff_x22,0);
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(unaff_x22);
      if (unaff_x22 == 0) goto code_r0x032d3918;
      uVar6 = (ulong)*(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x18) < 1) {
code_r0x032d3994:
        if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = lRam0000000003d39900;
        uVar15 = *(undefined8 *)(puVar2 + -0x30);
        uVar12 = *(undefined8 *)(puVar2 + -0x40);
        uVar7 = *(undefined8 *)(puVar2 + -0x38);
        *(undefined8 *)(puVar2 + -0x40) = uVar12;
        *(undefined8 *)(puVar2 + -0x38) = uVar7;
        *(undefined8 *)(puVar2 + -0x30) = uVar15;
        *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar13 = *(long *)(lRam0000000003d39900 + 0x18);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
        uVar1 = *(ushort *)(lVar13 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar13);
          uVar1 = *(ushort *)(lVar13 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar13 = *(long *)(lVar5 + 0x18);
          if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar13);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
          if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar13);
          }
          if (*(int *)(lVar13 + 0xe0) == 0) {
            lVar13 = *(long *)(lVar5 + 0x18);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            func_0x00f78ad0(lVar13);
          }
        }
        lVar13 = *(long *)(lVar5 + 0x18);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 != 0) {
          lVar8 = *(long *)(lVar5 + 0x18);
          uVar1 = *(ushort *)(lVar8 + 0x132);
          lVar14 = lVar8;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar8);
            lVar14 = *(long *)(lVar5 + 0x18);
            uVar1 = *(ushort *)(lVar14 + 0x132);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x18);
          if ((uVar1 & 1) == 0) {
            *(code **)(puVar2 + -0x48) = UNRECOVERED_JUMPTABLE;
            func_0x00fac028(lVar14);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar2 + -0x48);
          }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (lVar13,unaff_x22,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
          return;
        }
        lVar13 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x90) = uVar12;
        *(undefined8 *)(puVar2 + -0x88) = uVar7;
        *(undefined8 *)(puVar2 + -0x80) = uVar15;
        *(undefined8 *)(puVar2 + -0x78) = 0;
        *(long *)(puVar2 + -0x70) = lVar5;
        *(long *)(puVar2 + -0x68) = unaff_x22;
        *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
        lVar5 = *(long *)(lVar13 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        uVar15 = func_0x00f78aec(lVar5);
        lVar14 = *(long *)(lVar13 + 0x18);
        uVar1 = *(ushort *)(lVar14 + 0x132);
        lVar5 = lVar14;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar5 = *(long *)(lVar13 + 0x18);
          uVar1 = *(ushort *)(lVar5 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x30);
        lVar14 = lVar5;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar5);
          lVar14 = *(long *)(lVar13 + 0x18);
          uVar1 = *(ushort *)(lVar14 + 0x132);
        }
        uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar15,0,uVar12,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x30));
        lVar5 = *(long *)(lVar13 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        uVar12 = func_0x00f78aec(lVar5);
        lVar14 = *(long *)(lVar13 + 0x18);
        uVar1 = *(ushort *)(lVar14 + 0x132);
        lVar5 = lVar14;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar5 = *(long *)(lVar13 + 0x18);
          uVar1 = *(ushort *)(lVar5 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar12,0,uVar15,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
        lVar5 = *(long *)(lVar13 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        **(undefined8 **)(lVar5 + 0xb8) = uVar12;
        return;
      }
      lVar14 = 4;
      unaff_x26 = 0x3d222b0;
      unaff_x27 = 0x3d41590;
      do {
        if ((uVar6 & 0xffffffff) <= lVar14 - 4U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar14 * 8),
                                /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
        if (lVar8 != 0) {
          if ((ulong)*(uint *)(unaff_x22 + 0x18) <= lVar14 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar15 = unaff_x26;
          uVar12 = unaff_x27;
          if (lVar13 == 0) goto code_r0x032d3918;
          /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(lVar13,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar14 * 8),
                          uRam0000000003d41590);
        }
        uVar6 = (ulong)*(int *)(unaff_x22 + 0x18);
        lVar8 = lVar14 + -3;
        lVar14 = lVar14 + 1;
      } while (lVar8 < (long)uVar6);
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        unaff_x28 = 4;
        do {
          uVar16 = unaff_x28 - 4;
          if ((uVar6 & 0xffffffff) <= uVar16) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                                   /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar14 == 0) {
            if (*(uint *)(unaff_x22 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar10 = *(long **)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar10,0);
            if ((iVar4 == 0) || (plVar10 == (long *)0x0)) {
code_r0x032d388c:
              if (*(uint *)(unaff_x22 + 0x18) <= uVar16) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            else {
              if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                 (*(long *)(*(long *)(*plVar10 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                  /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
              lVar14 = plVar10[3];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,plVar9,0);
              if (iVar4 == 0) goto code_r0x032d38b8;
              if (*(uint *)(unaff_x22 + 0x18) <= uVar16) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            uVar12 = 0x3d41590;
            uVar15 = 0x3d222b0;
            if (lVar13 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(lVar13,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                            uRam0000000003d41590);
          }
code_r0x032d38b8:
          uVar6 = (ulong)*(int *)(unaff_x22 + 0x18);
          lVar14 = unaff_x28 + -3;
          unaff_x28 = unaff_x28 + 1;
        } while (lVar14 < (long)uVar6);
      }
    }
    iVar4 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar9,0);
    unaff_x25 = 0x3d1d6c0;
    if (iVar4 < 1) goto code_r0x032d3994;
    uVar15 = 0;
    unaff_x24 = 0x3d24188;
    plVar10 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar9,0,0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar10 = (long *)0x0;
    }
    puVar18 = &UNK_032d397c;
    puVar2 = puVar2 + -0x60;
    lVar14 = lVar13;
    plVar11 = plVar9;
    lVar8 = lVar5;
  } while( true );
}



// ============================================================
// RVA: 0x1cb5720 | Atlas.UI.Screens.AtlasScreen<MultiplayerLobbyScreenBehaviour, MultiplayerLobbyScreen.TransitionData>.ClearSelectedIfGamepad
// ============================================================

/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x03236658) */

ulong Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___ClearSelectedIfGamepad
                (long param_1,long param_2,long param_3)

{
  undefined1 ***pppuVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 ***pppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x28))();
    if ((int)uVar3 != 0) {
      uVar3 = /*Core.Input.InputManager$$SetSelectedObject*/ func_0x0164aa78(*(undefined4 *)(param_1 + 0x48),0,1,0);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    return uVar3;
  }
  auVar11 = func_0x00f78af4();
  lVar5 = auVar11._8_8_;
  lVar7 = auVar11._0_8_;
  puStack_28 = &Atlas_UI_Screens_AtlasScreen_object__object___HasCurrentSelected;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb70f9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb70f9 = 1;
  }
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    pppuVar9 = &ppuStack_60;
    pcStack_58 = 
    Atlas_UI_Screens_AtlasScreen_LeagueStarsBoxScreenViewBehaviour__LeagueStarsBoxScreen_TransitionData___GetCurrentlySelectedObject
    ;
    ppuStack_60 = &puStack_30;
    if (lVar7 == 0) {
      auVar11 = func_0x00f78af4();
      lVar7 = auVar11._8_8_;
      lVar4 = auVar11._0_8_;
      if ((bRam0000000003eb70fa & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb70fa = 1;
      }
      if (lVar4 == 0) {
        func_0x00f78af4();
        return 1;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x28))
                        (lVar4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x30))
                        (lVar4);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar7,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar10 = &Atlas_UI_Screens_AtlasScreen_object__object___IsCurrentSelectedGameObject;
      pppuVar1 = &ppuStack_60;
      uVar8 = 0x3eb7000;
      lVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar7 + 0x48);
      if ((bRam0000000003eb578b & 1) == 0) {
        func_0x00f78a20(0x3d22848,0);
        bRam0000000003eb578b = 1;
      }
      if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar5 == 0)) {
        func_0x00f78af4();
      }
      else if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        return *(ulong *)(lVar5 + (long)(int)uVar2 * 0x10 + 0x20);
      }
      uVar8 = func_0x00f78b24();
      func_0x00f78ac0(uVar8,0);
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
      pppuVar1 = (undefined1 ***)&stack0xffffffffffffff20;
      puStack_b8 = &UNK_0164ad0c;
      pppuVar9 = (undefined1 ***)&puStack_c0;
      lVar5 = 0x3ec0000;
      uVar8 = 0x3d23990;
      puStack_c0 = &stack0xffffffffffffff70;
      if ((bRam0000000003ec021a & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec021a = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = 0;
      puVar10 = &UNK_03236658;
      lVar6 = lVar4;
    }
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x28))(lVar7);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x30))(lVar7);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pppuVar1 = (undefined1 ***)&stack0xffffffffffffffb0;
    pppuVar9 = (undefined1 ***)&puStack_30;
    lVar7 = 0;
    uVar8 = 0x3ec0000;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003ec027c & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027c = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar10 = &UNK_03249b00;
    lVar6 = 0;
    lVar5 = lVar4;
  }
  *(undefined8 *)((long)pppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)pppuVar1 + -0x28) = uVar8;
  *(long *)((long)pppuVar1 + -0x20) = lVar5;
  *(long *)((long)pppuVar1 + -0x18) = lVar6;
  *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar9;
  *(undefined **)((long)pppuVar1 + -8) = puVar10;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (lVar4 == 0 && lVar7 == 0) {
    uVar3 = 1;
  }
  else {
    if (lVar7 == 0) {
      lVar7 = lVar4;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    else {
      if (lVar4 != 0) {
        return (ulong)(lVar4 == lVar7);
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar7);
    uVar3 = (ulong)(uVar2 ^ 1);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1cb5920 | Atlas.UI.Screens.AtlasScreen<MultiplayerLobbyScreenBehaviour, MultiplayerLobbyScreen.TransitionData>.CanProgressToNextScreen
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___CanProgressToNextScreen
          (void)

{
  return 1;
}



// ============================================================
// RVA: 0x1cb5944 | Atlas.UI.Screens.AtlasScreen<MultiplayerLobbyScreenBehaviour, MultiplayerLobbyScreen.TransitionData>..ctor
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



