// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>

// ============================================================
// RVA: 0x1cb50e8 | Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>.OnInputFamilyChanged
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
// RVA: 0x1cb51ac | Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>.ShowFullScreenTransition
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

ulong Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___ShowFullScreenTransition
                (undefined8 param_1,long param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *extraout_x1;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar18;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 ****ppppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar14 = **(long **)(*(long *)(param_2 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  uVar5 = func_0x00f78aec(lVar14);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 8))(uVar5,0);
  if (uVar5 != 0) {
    *(undefined8 *)(uVar5 + 0x20) = param_1;
    return uVar5;
  }
  auVar21 = func_0x00f78af4();
  pcStack_38 = 
  Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___HideFullScreenTransition
  ;
  lVar14 = *(long *)(*(long *)(*(long *)(auVar21._8_8_ + 0x18) + 0xc0) + 0x10);
  puStack_40 = &stack0xfffffffffffffff0;
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  uVar5 = func_0x00f78aec(lVar14);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar21._8_8_ + 0x18) + 0xc0) + 0x18))(uVar5,0);
  if (uVar5 != 0) {
    *(long *)(uVar5 + 0x20) = auVar21._0_8_;
    return uVar5;
  }
  func_0x00f78af4();
  pcStack_68 = 
  Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
  ;
  ppuStack_70 = &puStack_40;
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
      (lVar14 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
      lVar14 == 0)) || (*(long **)(lVar14 + 0x10) = extraout_x1, extraout_x1 == (long *)0x0)) {
    puVar20 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar3 = (**(code **)(*extraout_x1 + 0x158))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x160));
    *(undefined4 *)(lVar14 + 0x18) = uVar3;
    auVar22._8_4_ = 1;
    auVar22._0_8_ = lVar14;
    puVar20 = &UNK_032d2edc;
  }
  uVar6 = auVar22._0_8_;
  ppppuVar19 = &pppuStack_a0;
  uVar5 = uVar6;
  pppuStack_a0 = &ppuStack_70;
  puStack_98 = puVar20;
  if ((bRam0000000003ec2d41 & 1) == 0) {
    func_0x00f78a20(0x3d634d8);
    func_0x00f78a20(0x3d634e0);
    func_0x00f78a20(0x3d634e8);
    func_0x00f78a20(0x3d634f0);
    func_0x00f78a20(0x3d27de0);
    func_0x00f78a20(0x3d41588);
    uVar5 = func_0x00f78a20(0x3d1eaf0);
    bRam0000000003ec2d41 = 1;
  }
  if (auVar22._8_4_ != 1) {
    return uVar5;
  }
  uVar13 = *(undefined8 *)(uVar6 + 0x10);
  uVar17 = 0x3d27de0;
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  lVar14 = plVar11[2];
  if (lVar14 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar11 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar11;
    lVar14 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar14,unaff_x22,uRam0000000003d634d8,uRam0000000003d41588);
    *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar14;
  }
  /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(uVar6,uVar13,lVar14);
  plVar11 = *(long **)(uVar6 + 0x10);
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  uVar5 = plVar12[3];
  if (uVar5 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar12 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar12;
    uVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar5,unaff_x22,uRam0000000003d634e0,uRam0000000003d41588);
    *(ulong *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = uVar5;
  }
  puVar20 = &UNK_032d30dc;
  puVar2 = &stack0xffffffffffffff30;
  uVar7 = uVar6;
  plVar12 = plVar11;
  uVar18 = uVar5;
  do {
    plVar10 = plVar11;
    *(long *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = uVar17;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = uVar18;
    *(long **)(puVar2 + -0x20) = plVar12;
    *(ulong *)(puVar2 + -0x18) = uVar7;
    *(undefined1 *****)(puVar2 + -0x10) = ppppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppppuVar19 = (undefined1 ****)(puVar2 + -0x10);
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
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar10,0,0);
    if ((uVar7 & 1) != 0) {
      return uVar7;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    uVar17 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
    uVar17 = unaff_x26;
    uVar13 = unaff_x27;
    if (plVar10 == (long *)0x0) {
code_r0x032d3918:
      func_0x00f78af4();
      unaff_x26 = uVar17;
      unaff_x27 = uVar13;
    }
    else {
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar10,uVar8,unaff_x22,0);
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(unaff_x22);
      if (unaff_x22 == 0) goto code_r0x032d3918;
      uVar7 = (ulong)*(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x18) < 1) {
code_r0x032d3994:
        if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = lRam0000000003d39900;
        uVar17 = *(undefined8 *)(puVar2 + -0x30);
        uVar13 = *(undefined8 *)(puVar2 + -0x40);
        uVar8 = *(undefined8 *)(puVar2 + -0x38);
        *(undefined8 *)(puVar2 + -0x40) = uVar13;
        *(undefined8 *)(puVar2 + -0x38) = uVar8;
        *(undefined8 *)(puVar2 + -0x30) = uVar17;
        *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar9 = *(long *)(lRam0000000003d39900 + 0x18);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        uVar1 = *(ushort *)(lVar9 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar9);
          uVar1 = *(ushort *)(lVar9 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar9 = *(long *)(lVar14 + 0x18);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            lVar9 = *(long *)(lVar14 + 0x18);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            func_0x00f78ad0(lVar9);
          }
        }
        lVar9 = *(long *)(lVar14 + 0x18);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = **(long **)(lVar9 + 0xb8);
        if (lVar9 != 0) {
          lVar16 = *(long *)(lVar14 + 0x18);
          uVar1 = *(ushort *)(lVar16 + 0x132);
          lVar15 = lVar16;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar16);
            lVar15 = *(long *)(lVar14 + 0x18);
            uVar1 = *(ushort *)(lVar15 + 0x132);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x18);
          if ((uVar1 & 1) == 0) {
            *(code **)(puVar2 + -0x48) = UNRECOVERED_JUMPTABLE;
            func_0x00fac028(lVar15);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar2 + -0x48);
          }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)
                            (lVar9,unaff_x22,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18));
          return uVar5;
        }
        lVar9 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x90) = uVar13;
        *(undefined8 *)(puVar2 + -0x88) = uVar8;
        *(undefined8 *)(puVar2 + -0x80) = uVar17;
        *(undefined8 *)(puVar2 + -0x78) = 0;
        *(long *)(puVar2 + -0x70) = lVar14;
        *(long *)(puVar2 + -0x68) = unaff_x22;
        *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
        lVar14 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar17 = func_0x00f78aec(lVar14);
        lVar15 = *(long *)(lVar9 + 0x18);
        uVar1 = *(ushort *)(lVar15 + 0x132);
        lVar14 = lVar15;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
          lVar14 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar14 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x30);
        lVar15 = lVar14;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar15 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar15 + 0x132);
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x20);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar17,0,uVar13,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30));
        lVar14 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar13 = func_0x00f78aec(lVar14);
        lVar15 = *(long *)(lVar9 + 0x18);
        uVar1 = *(ushort *)(lVar15 + 0x132);
        lVar14 = lVar15;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
          lVar14 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar14 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar5 = (*UNRECOVERED_JUMPTABLE)
                          (uVar13,0,uVar17,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x40));
        lVar14 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          uVar5 = func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          uVar5 = func_0x00fac028(lVar14);
        }
        **(undefined8 **)(lVar14 + 0xb8) = uVar13;
        return uVar5;
      }
      lVar14 = 4;
      unaff_x26 = 0x3d222b0;
      unaff_x27 = 0x3d41590;
      do {
        if ((uVar7 & 0xffffffff) <= lVar14 - 4U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar14 * 8),
                                /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
        if (lVar9 != 0) {
          if ((ulong)*(uint *)(unaff_x22 + 0x18) <= lVar14 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar17 = unaff_x26;
          uVar13 = unaff_x27;
          if (uVar5 == 0) goto code_r0x032d3918;
          /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar5,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar14 * 8),
                          uRam0000000003d41590);
        }
        uVar7 = (ulong)*(int *)(unaff_x22 + 0x18);
        lVar9 = lVar14 + -3;
        lVar14 = lVar14 + 1;
      } while (lVar9 < (long)uVar7);
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        unaff_x28 = 4;
        do {
          uVar18 = unaff_x28 - 4;
          if ((uVar7 & 0xffffffff) <= uVar18) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                                   /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar14 == 0) {
            if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar11 = *(long **)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar11,0);
            if ((iVar4 == 0) || (plVar11 == (long *)0x0)) {
code_r0x032d388c:
              if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            else {
              if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                  /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
              lVar14 = plVar11[3];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,plVar10,0);
              if (iVar4 == 0) goto code_r0x032d38b8;
              if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            uVar13 = 0x3d41590;
            uVar17 = 0x3d222b0;
            if (uVar5 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar5,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                            uRam0000000003d41590);
          }
code_r0x032d38b8:
          uVar7 = (ulong)*(int *)(unaff_x22 + 0x18);
          lVar14 = unaff_x28 + -3;
          unaff_x28 = unaff_x28 + 1;
        } while (lVar14 < (long)uVar7);
      }
    }
    iVar4 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar10,0);
    unaff_x25 = 0x3d1d6c0;
    if (iVar4 < 1) goto code_r0x032d3994;
    uVar17 = 0;
    unaff_x24 = 0x3d24188;
    plVar11 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar10,0,0);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else if (*plVar11 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar11 = (long *)0x0;
    }
    puVar20 = &UNK_032d397c;
    puVar2 = puVar2 + -0x60;
    uVar7 = uVar5;
    plVar12 = plVar10;
    uVar18 = uVar6;
  } while( true );
}



// ============================================================
// RVA: 0x1cb5224 | Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>.HideFullScreenTransition
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

ulong Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___HideFullScreenTransition
                (undefined8 param_1,long param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *extraout_x1;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar18;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 ***pppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [12];
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar14 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  uVar5 = func_0x00f78aec(lVar14);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x18))(uVar5,0);
  if (uVar5 != 0) {
    *(undefined8 *)(uVar5 + 0x20) = param_1;
    return uVar5;
  }
  func_0x00f78af4();
  pcStack_38 = 
  Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
  ;
  puStack_40 = &stack0xfffffffffffffff0;
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
      (lVar14 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
      lVar14 == 0)) || (*(long **)(lVar14 + 0x10) = extraout_x1, extraout_x1 == (long *)0x0)) {
    puVar20 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
    auVar21 = func_0x00f78af4();
  }
  else {
    uVar3 = (**(code **)(*extraout_x1 + 0x158))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x160));
    *(undefined4 *)(lVar14 + 0x18) = uVar3;
    auVar21._8_4_ = 1;
    auVar21._0_8_ = lVar14;
    puVar20 = &UNK_032d2edc;
  }
  uVar6 = auVar21._0_8_;
  pppuVar19 = &ppuStack_70;
  uVar5 = uVar6;
  ppuStack_70 = &puStack_40;
  puStack_68 = puVar20;
  if ((bRam0000000003ec2d41 & 1) == 0) {
    func_0x00f78a20(0x3d634d8);
    func_0x00f78a20(0x3d634e0);
    func_0x00f78a20(0x3d634e8);
    func_0x00f78a20(0x3d634f0);
    func_0x00f78a20(0x3d27de0);
    func_0x00f78a20(0x3d41588);
    uVar5 = func_0x00f78a20(0x3d1eaf0);
    bRam0000000003ec2d41 = 1;
  }
  if (auVar21._8_4_ != 1) {
    return uVar5;
  }
  uVar13 = *(undefined8 *)(uVar6 + 0x10);
  uVar17 = 0x3d27de0;
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  lVar14 = plVar11[2];
  if (lVar14 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar11 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar11;
    lVar14 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar14,unaff_x22,uRam0000000003d634d8,uRam0000000003d41588);
    *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar14;
  }
  /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(uVar6,uVar13,lVar14);
  plVar11 = *(long **)(uVar6 + 0x10);
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  uVar5 = plVar12[3];
  if (uVar5 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar12 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar12;
    uVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar5,unaff_x22,uRam0000000003d634e0,uRam0000000003d41588);
    *(ulong *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = uVar5;
  }
  puVar20 = &UNK_032d30dc;
  puVar2 = &stack0xffffffffffffff60;
  uVar7 = uVar6;
  plVar12 = plVar11;
  uVar18 = uVar5;
  do {
    plVar10 = plVar11;
    *(long *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = uVar17;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = uVar18;
    *(long **)(puVar2 + -0x20) = plVar12;
    *(ulong *)(puVar2 + -0x18) = uVar7;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    pppuVar19 = (undefined1 ***)(puVar2 + -0x10);
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
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar10,0,0);
    if ((uVar7 & 1) != 0) {
      return uVar7;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    uVar17 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
    uVar17 = unaff_x26;
    uVar13 = unaff_x27;
    if (plVar10 == (long *)0x0) {
code_r0x032d3918:
      func_0x00f78af4();
      unaff_x26 = uVar17;
      unaff_x27 = uVar13;
    }
    else {
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar10,uVar8,unaff_x22,0);
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(unaff_x22);
      if (unaff_x22 == 0) goto code_r0x032d3918;
      uVar7 = (ulong)*(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x18) < 1) {
code_r0x032d3994:
        if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = lRam0000000003d39900;
        uVar17 = *(undefined8 *)(puVar2 + -0x30);
        uVar13 = *(undefined8 *)(puVar2 + -0x40);
        uVar8 = *(undefined8 *)(puVar2 + -0x38);
        *(undefined8 *)(puVar2 + -0x40) = uVar13;
        *(undefined8 *)(puVar2 + -0x38) = uVar8;
        *(undefined8 *)(puVar2 + -0x30) = uVar17;
        *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar9 = *(long *)(lRam0000000003d39900 + 0x18);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        uVar1 = *(ushort *)(lVar9 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar9);
          uVar1 = *(ushort *)(lVar9 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar9 = *(long *)(lVar14 + 0x18);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            lVar9 = *(long *)(lVar14 + 0x18);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            func_0x00f78ad0(lVar9);
          }
        }
        lVar9 = *(long *)(lVar14 + 0x18);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = **(long **)(lVar9 + 0xb8);
        if (lVar9 != 0) {
          lVar16 = *(long *)(lVar14 + 0x18);
          uVar1 = *(ushort *)(lVar16 + 0x132);
          lVar15 = lVar16;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar16);
            lVar15 = *(long *)(lVar14 + 0x18);
            uVar1 = *(ushort *)(lVar15 + 0x132);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x18);
          if ((uVar1 & 1) == 0) {
            *(code **)(puVar2 + -0x48) = UNRECOVERED_JUMPTABLE;
            func_0x00fac028(lVar15);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar2 + -0x48);
          }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)
                            (lVar9,unaff_x22,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18));
          return uVar5;
        }
        lVar9 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x90) = uVar13;
        *(undefined8 *)(puVar2 + -0x88) = uVar8;
        *(undefined8 *)(puVar2 + -0x80) = uVar17;
        *(undefined8 *)(puVar2 + -0x78) = 0;
        *(long *)(puVar2 + -0x70) = lVar14;
        *(long *)(puVar2 + -0x68) = unaff_x22;
        *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
        lVar14 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar17 = func_0x00f78aec(lVar14);
        lVar15 = *(long *)(lVar9 + 0x18);
        uVar1 = *(ushort *)(lVar15 + 0x132);
        lVar14 = lVar15;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
          lVar14 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar14 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x30);
        lVar15 = lVar14;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar15 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar15 + 0x132);
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x20);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar17,0,uVar13,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30));
        lVar14 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar13 = func_0x00f78aec(lVar14);
        lVar15 = *(long *)(lVar9 + 0x18);
        uVar1 = *(ushort *)(lVar15 + 0x132);
        lVar14 = lVar15;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
          lVar14 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar14 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar5 = (*UNRECOVERED_JUMPTABLE)
                          (uVar13,0,uVar17,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x40));
        lVar14 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          uVar5 = func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          uVar5 = func_0x00fac028(lVar14);
        }
        **(undefined8 **)(lVar14 + 0xb8) = uVar13;
        return uVar5;
      }
      lVar14 = 4;
      unaff_x26 = 0x3d222b0;
      unaff_x27 = 0x3d41590;
      do {
        if ((uVar7 & 0xffffffff) <= lVar14 - 4U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar14 * 8),
                                /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
        if (lVar9 != 0) {
          if ((ulong)*(uint *)(unaff_x22 + 0x18) <= lVar14 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar17 = unaff_x26;
          uVar13 = unaff_x27;
          if (uVar5 == 0) goto code_r0x032d3918;
          /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar5,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar14 * 8),
                          uRam0000000003d41590);
        }
        uVar7 = (ulong)*(int *)(unaff_x22 + 0x18);
        lVar9 = lVar14 + -3;
        lVar14 = lVar14 + 1;
      } while (lVar9 < (long)uVar7);
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        unaff_x28 = 4;
        do {
          uVar18 = unaff_x28 - 4;
          if ((uVar7 & 0xffffffff) <= uVar18) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                                   /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar14 == 0) {
            if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar11 = *(long **)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar11,0);
            if ((iVar4 == 0) || (plVar11 == (long *)0x0)) {
code_r0x032d388c:
              if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            else {
              if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                  /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
              lVar14 = plVar11[3];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,plVar10,0);
              if (iVar4 == 0) goto code_r0x032d38b8;
              if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            uVar13 = 0x3d41590;
            uVar17 = 0x3d222b0;
            if (uVar5 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar5,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                            uRam0000000003d41590);
          }
code_r0x032d38b8:
          uVar7 = (ulong)*(int *)(unaff_x22 + 0x18);
          lVar14 = unaff_x28 + -3;
          unaff_x28 = unaff_x28 + 1;
        } while (lVar14 < (long)uVar7);
      }
    }
    iVar4 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar10,0);
    unaff_x25 = 0x3d1d6c0;
    if (iVar4 < 1) goto code_r0x032d3994;
    uVar17 = 0;
    unaff_x24 = 0x3d24188;
    plVar11 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar10,0,0);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else if (*plVar11 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar11 = (long *)0x0;
    }
    puVar20 = &UNK_032d397c;
    puVar2 = puVar2 + -0x60;
    uVar7 = uVar5;
    plVar12 = plVar10;
    uVar18 = uVar6;
  } while( true );
}



// ============================================================
// RVA: 0x1cb5640 | Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>.SelectComponent
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
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

uint Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___SelectComponent
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((bRam0000000003eb70f8 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb70f8 = 1;
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
// RVA: 0x1cb5920 | Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>.CanProgressToNextScreen
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___CanProgressToNextScreen
          (void)

{
  return 1;
}



// ============================================================
// RVA: 0x1cb5944 | Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>..ctor
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



