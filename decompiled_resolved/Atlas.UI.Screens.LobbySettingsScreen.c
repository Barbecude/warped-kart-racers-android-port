// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LobbySettingsScreen

// ============================================================
// RVA: 0x1489b40 | Atlas.UI.Screens.LobbySettingsScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x01489c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01489ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01489c6c) */
/* WARNING: Removing unreachable block (ram,0x01489c7c) */
/* WARNING: Removing unreachable block (ram,0x01489c90) */
/* WARNING: Removing unreachable block (ram,0x01489c98) */
/* WARNING: Removing unreachable block (ram,0x01489c9c) */
/* WARNING: Removing unreachable block (ram,0x01489ca8) */
/* WARNING: Removing unreachable block (ram,0x01489cb8) */
/* WARNING: Removing unreachable block (ram,0x01489cc0) */
/* WARNING: Removing unreachable block (ram,0x01489cc8) */
/* WARNING: Removing unreachable block (ram,0x01489d14) */
/* WARNING: Removing unreachable block (ram,0x01489d24) */

void Atlas_UI_Screens_LobbySettingsScreen__OnBeforeEnter(undefined8 param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 unaff_x25;
  undefined8 uVar24;
  undefined8 unaff_x26;
  undefined8 uVar25;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined *puStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb495b & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a0e8);
    func_0x00f78a20(0x3d5a0f0);
    func_0x00f78a20(0x3d41168);
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495b = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41168);
  if (lVar5 == 0) {
LAB_01489d40:
    func_0x00f78af4();
    puVar27 = &Atlas_UI_Screens_LobbySettingsSwitchBehaviour__SetValueByIndex;
    auVar32 = func_0x00f78e5c();
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x68);
    uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d5a0e8,0);
    unaff_x23 = 0x3d5a000;
    if (lVar5 == 0) goto LAB_01489d40;
    lVar13 = 0x3d41170;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar5,uVar6,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
    unaff_x23 = lVar13;
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_01489d40;
    iVar3 = *(int *)(*(long *)(lVar5 + 0x20) + 0x9c);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41168);
    unaff_x23 = 0x3d41170;
    if ((lVar5 == 0) ||
       (auVar32[8] = iVar3 == 2, auVar32._0_8_ = *(long *)(lVar5 + 0x70), auVar32._9_7_ = 0,
       *(long *)(lVar5 + 0x70) == 0)) goto LAB_01489d40;
    puVar27 = (undefined *)0x1489c6c;
    unaff_x23 = lVar13;
  }
  uVar11 = auVar32._8_4_;
  lVar5 = auVar32._0_8_;
  plVar18 = (long *)0x3eb4000;
  pppppuStack_60 = (undefined8 *****)&stack0xfffffffffffffff0;
  puStack_58 = puVar27;
  if ((bRam0000000003eb4962 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4962 = 1;
  }
  if ((int)uVar11 < 0) {
code_r0x01489e6c:
    uVar11 = 0xffffffff;
    goto code_r0x01489e70;
  }
  lVar13 = *(long *)(lVar5 + 0x18);
  if (lVar13 == 0) goto code_r0x01489e98;
  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar11) goto code_r0x01489e6c;
  if (uVar11 < *(uint *)(lVar13 + 0x18)) {
    if (*(long *)(lVar5 + 0x38) == 0) {
code_r0x01489e98:
      func_0x00f78af4();
      goto code_r0x01489e9c;
    }
    lVar13 = lVar13 + (auVar32._8_8_ & 0xffffffff) * 0x20;
    uVar28 = *(undefined4 *)(lVar13 + 0x30);
    uVar29 = *(undefined4 *)(lVar13 + 0x34);
    uVar30 = *(undefined4 *)(lVar13 + 0x38);
    uVar31 = *(undefined4 *)(lVar13 + 0x3c);
    plVar18 = *(long **)(lVar13 + 0x28);
    /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(*(long *)(lVar5 + 0x38),*(undefined8 *)(lVar13 + 0x20),0);
    if (*(long *)(lVar5 + 0x40) == 0) goto code_r0x01489e98;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar5 + 0x40),plVar18,0);
    plVar7 = *(long **)(lVar5 + 0x30);
    if (plVar7 == (long *)0x0) goto code_r0x01489e98;
    (**(code **)(*plVar7 + 0x2a8))
              (uVar28,uVar29,uVar30,uVar31,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    if (*(long *)(lVar5 + 0x48) == 0) goto code_r0x01489e98;
    plVar18 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x48),0);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      if (plVar18 != (long *)0x0) goto code_r0x01489e44;
code_r0x01489e5c:
      /*UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate*/ func_0x032d2e20(plVar18,0);
code_r0x01489e70:
      *(uint *)(lVar5 + 0x50) = uVar11;
      return;
    }
    if (plVar18 == (long *)0x0) goto code_r0x01489e5c;
code_r0x01489e44:
    if (*plVar18 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x01489e5c;
  }
  else {
code_r0x01489e9c:
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
  }
  uVar8 = func_0x00f78e5c(plVar18);
  puStack_a8 = &Atlas_UI_Screens_LobbySettingsScreen__OnAfterExit;
  lVar5 = 0x3eb4000;
  uVar6 = 0x3d41168;
  ppppppuStack_b0 = &pppppuStack_60;
  if ((bRam0000000003eb495c & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a0e8);
    func_0x00f78a20(0x3d5a0f0);
    func_0x00f78a20(0x3d41168);
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495c = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41168);
  uVar20 = 0x3d41168;
  lVar13 = unaff_x23;
  uVar22 = unaff_x24;
  uVar24 = unaff_x25;
  uVar25 = unaff_x26;
  if (lVar9 == 0) {
code_r0x0148a04c:
    func_0x00f78af4();
  }
  else {
    lVar5 = *(long *)(lVar9 + 0x68);
    uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar6,uVar8,uRam0000000003d5a0e8,0);
    uVar20 = 0x3d5a000;
    if (lVar5 == 0) goto code_r0x0148a04c;
    uVar19 = 0x3d41170;
    /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar5,uVar6,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
    uVar20 = 0x3d41170;
    if (((lVar9 == 0) || (uVar20 = uVar19, *(long *)(lVar9 + 0x28) == 0)) ||
       (lVar13 = *(long *)(*(long *)(lVar9 + 0x28) + 0x30), lVar13 == 0)) goto code_r0x0148a04c;
    uVar22 = 0x3d1b548;
    uVar24 = 0x3d5a000;
    uVar25 = 0x3d2a000;
    lVar5 = *(long *)(lVar13 + 0x58);
    uVar6 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
    /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar6,uVar8,uRam0000000003d5a0f0,uRam0000000003d2a290);
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,uVar6,0);
    if ((plVar7 == (long *)0x0) || (uVar20 = 0x3d41170, *plVar7 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
      *(long **)(lVar13 + 0x58) = plVar7;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
      uVar20 = uVar19;
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
        puVar2 = (undefined8 *)&stack0xffffffffffffff60;
        uVar20 = 0x3d41168;
        pppppppuVar26 = (undefined8 *******)ppppppuStack_b0;
        puStack_158 = puStack_a8;
        goto System_Action__Invoke;
      }
      goto code_r0x0148a04c;
    }
  }
  unaff_x26 = uVar25;
  unaff_x25 = uVar24;
  unaff_x24 = uVar22;
  unaff_x23 = lVar13;
  lVar13 = func_0x00f78e5c();
  puStack_f8 = &Atlas_UI_Screens_LobbySettingsScreen__OnUpdate;
  lVar9 = 0x3eb4000;
  uStack_120 = uVar20;
  uStack_118 = uVar6;
  lStack_110 = lVar5;
  uStack_108 = uVar8;
  ppppppuStack_100 = &ppppppuStack_b0;
  if ((bRam0000000003eb495d & 1) == 0) {
    func_0x00f78a20(0x3d41168);
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495d = 1;
  }
  if (*(int *)(lVar13 + 0x4c) != 2) {
    return;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar13,uRam0000000003d41170);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (plVar18 = *(long **)(*(long *)(lVar5 + 0x28) + 0x30), plVar18 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar18 + 0x938))(plVar18,*(undefined8 *)(*plVar18 + 0x940));
    if (iVar3 == 0) {
      return;
    }
    uVar6 = 0x3d41168;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d41168);
    uVar20 = 0x3d41168;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x70) != 0)) {
      iVar3 = *(int *)(*(long *)(lVar5 + 0x70) + 0x50);
      if (iVar3 == 0) {
        lVar9 = 1;
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        lVar9 = 2;
      }
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar13,uRam0000000003d41170);
      uVar20 = uVar6;
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
        if ((int)lVar9 != *(int *)(lVar5 + 0x9c)) {
          /*Atlas.Networking.NetworkLobby$$SetLobbyGameType*/ func_0x014aa1fc(lVar5,lVar9,0);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar13,uRam0000000003d41170);
          if ((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) goto code_r0x0148a1b4;
          *(int *)(*(long *)(lVar5 + 0x30) + 0x10) = (int)lVar9;
        }
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar13,uRam0000000003d41170);
        if (lVar5 != 0) {
          lVar9 = *(long *)(lVar5 + 0x38);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d41168);
          if (((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) && (lVar9 != 0)) {
            *(bool *)(lVar9 + 0xc6) = *(int *)(*(long *)(lVar5 + 0x78) + 0x50) == 1;
            return;
          }
        }
      }
    }
  }
code_r0x0148a1b4:
  uVar6 = func_0x00f78af4();
  plStack_148 = (long *)0x3d41170;
  puStack_128 = &Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed;
  pppppppuVar26 = &ppppppuStack_130;
  uStack_150 = uVar20;
  lStack_140 = lVar9;
  lStack_138 = lVar13;
  ppppppuStack_130 = &ppppppuStack_100;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41170);
  auVar32._8_8_ = lStack_140;
  auVar32._0_8_ = lStack_138;
  if ((lVar5 != 0) && (lVar9 = *(long *)(lVar5 + 0x10), lVar9 != 0)) {
    puVar2 = &uStack_120;
    plVar18 = plStack_148;
    uVar20 = uStack_150;
    pppppppuVar26 = (undefined8 *******)ppppppuStack_130;
    puStack_158 = puStack_128;
System_Action__Invoke:
    uVar6 = 0;
    *(undefined8 *)((long)puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)((long)puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
    *(long *)((long)puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar2 + -0x30) = uVar20;
    *(long **)((long)puVar2 + -0x28) = plVar18;
    *(long *)((long)puVar2 + -0x20) = auVar32._8_8_;
    *(long *)((long)puVar2 + -0x18) = auVar32._0_8_;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar26;
    *(undefined **)((long)puVar2 + -8) = puStack_158;
    *(long *)((long)puVar2 + -0x58) = lVar9;
    lVar5 = *(long *)(lVar9 + 0x68);
    if (lVar5 == 0) {
      puVar23 = (undefined1 *)((long)puVar2 + -0x58);
      lVar13 = 1;
    }
    else {
      lVar13 = *(long *)(lVar5 + 0x18);
      if (lVar13 == 0) {
        return;
      }
      puVar23 = (undefined1 *)(lVar5 + 0x20);
    }
    lVar5 = 0;
    do {
      lVar14 = *(long *)(puVar23 + lVar5 * 8);
      pcVar21 = *(code **)(lVar14 + 0x10);
      plVar18 = *(long **)(lVar14 + 0x20);
      lVar14 = *(long *)(lVar14 + 0x28);
      if (*(short *)(lVar14 + 0x48) == -1) {
        func_0x00f78ad8(lVar14,uVar6);
      }
      iVar3 = func_0x00f78a4c(lVar14);
      if (iVar3 == 0) {
        if ((((plVar18 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
            ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar3 = func_0x00f78a44(lVar14);
        iVar4 = func_0x00f78ec0(lVar14);
        if (iVar3 == 0) {
          uVar1 = *(ushort *)(lVar14 + 0x48);
          if (iVar4 == 0) {
            lVar14 = *plVar18 + (ulong)uVar1 * 0x10;
            (**(code **)(lVar14 + 0x138))(plVar18,*(undefined8 *)(lVar14 + 0x140));
            uVar6 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar14 = func_0x00f78a48(lVar14);
          lVar15 = *plVar18;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar10 = (undefined8 *)
                          (lVar15 + (long)(int)(*piVar17 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar18,lVar14,(ulong)uVar1);
code_r0x02924e68:
          pcVar21 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar4 == 0) {
            uVar6 = *(undefined8 *)(*plVar18 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar15 = *plVar18;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)(lVar14 + 0x18)) {
                  lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar14 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar17 = piVar17 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            lVar15 = func_0x00fac1f0(plVar18);
code_r0x02924e40:
            uVar6 = *(undefined8 *)(lVar15 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar6,lVar14);
          pcVar21 = (code *)*puVar10;
        }
        (*pcVar21)(plVar18,puVar10);
        uVar6 = extraout_x1_02;
      }
      else if (*(char *)(lVar14 + 0x4a) == '\0') {
        (*pcVar21)(lVar14);
        uVar6 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar21)(plVar18,lVar14);
        uVar6 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar5 = lVar5 + 1;
      if (lVar5 == lVar13) {
        return;
      }
    } while( true );
  }
  uVar8 = func_0x00f78af4();
  puStack_158 = &Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (plVar18 = *(long **)(*(long *)(lVar5 + 0x28) + 0x30), plVar18 != (long *)0x0)) {
    uVar16 = (**(code **)(*plVar18 + 0x858))(plVar18,*(undefined8 *)(*plVar18 + 0x860));
    if ((uVar16 & 1) != 0) {
      return;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
    if ((lVar5 != 0) && (lVar9 = *(long *)(lVar5 + 0x10), lVar9 != 0)) {
      auVar32._8_8_ = 0x3eb4000;
      auVar32._0_8_ = uVar6;
      puVar2 = &uStack_150;
      plVar18 = (long *)0x3d41170;
      goto System_Action__Invoke;
    }
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar32 = func_0x00f78af4();
  puVar12 = auVar32._8_8_;
  puVar10 = auVar32._0_8_;
  uVar8 = puVar12[1];
  uVar6 = *puVar12;
  puVar10[2] = puVar12[2];
  puVar10[1] = uVar8;
  *puVar10 = uVar6;
  return;
}



// ============================================================
// RVA: 0x1489eb0 | Atlas.UI.Screens.LobbySettingsScreen.OnAfterExit
// ============================================================

void Atlas_UI_Screens_LobbySettingsScreen__OnAfterExit(undefined8 param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  long unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined8 unaff_x25;
  undefined8 uVar20;
  undefined8 unaff_x26;
  undefined8 uVar21;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  
  lVar14 = 0x3eb4000;
  uVar6 = 0x3d41168;
  if ((bRam0000000003eb495c & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a0e8);
    func_0x00f78a20(0x3d5a0f0);
    func_0x00f78a20(0x3d41168);
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495c = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41168);
  uVar16 = unaff_x22;
  lVar18 = unaff_x23;
  uVar22 = unaff_x24;
  uVar20 = unaff_x25;
  uVar21 = unaff_x26;
  if (lVar5 == 0) {
LAB_0148a04c:
    func_0x00f78af4();
  }
  else {
    lVar14 = *(long *)(lVar5 + 0x68);
    uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d5a0e8,0);
    uVar16 = 0x3d5a000;
    if (lVar14 == 0) goto LAB_0148a04c;
    uVar1 = 0x3d41170;
    uVar15 = 0x3d41170;
    /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar14,uVar6,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
    uVar16 = uVar1;
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) ||
       (lVar18 = *(long *)(*(long *)(lVar5 + 0x28) + 0x30), uVar16 = uVar15, lVar18 == 0))
    goto LAB_0148a04c;
    uVar22 = 0x3d1b548;
    uVar20 = 0x3d5a000;
    uVar21 = 0x3d2a000;
    lVar14 = *(long *)(lVar18 + 0x58);
    uVar6 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
    /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar6,param_1,uRam0000000003d5a0f0,uRam0000000003d2a290);
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar14,uVar6,0);
    if ((plVar7 == (long *)0x0) || (uVar16 = uVar1, *plVar7 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
      *(long **)(lVar18 + 0x58) = plVar7;
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
      uVar16 = uVar15;
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) goto System_Action__Invoke;
      goto LAB_0148a04c;
    }
  }
  unaff_x26 = uVar21;
  unaff_x25 = uVar20;
  unaff_x24 = uVar22;
  unaff_x23 = lVar18;
  lVar18 = func_0x00f78e5c();
  puStack_58 = &Atlas_UI_Screens_LobbySettingsScreen__OnUpdate;
  lVar5 = 0x3eb4000;
  uStack_80 = uVar16;
  uStack_78 = uVar6;
  lStack_70 = lVar14;
  uStack_68 = param_1;
  pppppuStack_60 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb495d & 1) == 0) {
    func_0x00f78a20(0x3d41168);
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495d = 1;
  }
  if (*(int *)(lVar18 + 0x4c) != 2) {
    return;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar18,uRam0000000003d41170);
  unaff_x22 = uVar16;
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
     (plVar7 = *(long **)(*(long *)(lVar14 + 0x28) + 0x30), plVar7 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar7 + 0x938))(plVar7,*(undefined8 *)(*plVar7 + 0x940));
    if (iVar3 == 0) {
      return;
    }
    uVar6 = 0x3d41168;
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar18,uRam0000000003d41168);
    unaff_x22 = 0x3d41168;
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x70) != 0)) {
      iVar3 = *(int *)(*(long *)(lVar14 + 0x70) + 0x50);
      if (iVar3 == 0) {
        lVar5 = 1;
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        lVar5 = 2;
      }
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar18,uRam0000000003d41170);
      unaff_x22 = uVar6;
      if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x20), lVar14 != 0)) {
        if ((int)lVar5 != *(int *)(lVar14 + 0x9c)) {
          /*Atlas.Networking.NetworkLobby$$SetLobbyGameType*/ func_0x014aa1fc(lVar14,lVar5,0);
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar18,uRam0000000003d41170);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x30) == 0)) goto code_r0x0148a1b4;
          *(int *)(*(long *)(lVar14 + 0x30) + 0x10) = (int)lVar5;
        }
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar18,uRam0000000003d41170);
        if (lVar14 != 0) {
          lVar5 = *(long *)(lVar14 + 0x38);
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar18,uRam0000000003d41168);
          if (((lVar14 != 0) && (*(long *)(lVar14 + 0x78) != 0)) && (lVar5 != 0)) {
            *(bool *)(lVar5 + 0xc6) = *(int *)(*(long *)(lVar14 + 0x78) + 0x50) == 1;
            return;
          }
        }
      }
    }
  }
code_r0x0148a1b4:
  unaff_x19 = func_0x00f78af4();
  uStack_a8 = 0x3d41170;
  puStack_88 = &Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed;
  unaff_x29 = &ppppppuStack_90;
  uStack_b0 = unaff_x22;
  lStack_a0 = lVar5;
  lStack_98 = lVar18;
  ppppppuStack_90 = &pppppuStack_60;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d41170);
  if ((lVar14 != 0) && (lVar5 = *(long *)(lVar14 + 0x10), lVar5 != 0)) {
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
    unaff_x19 = lStack_98;
    unaff_x20 = lStack_a0;
    unaff_x21 = uStack_a8;
    unaff_x22 = uStack_b0;
    unaff_x29 = (undefined8 *******)ppppppuStack_90;
    unaff_x30 = puStack_88;
System_Action__Invoke:
    uVar6 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x58) = lVar5;
    lVar14 = *(long *)(lVar5 + 0x68);
    if (lVar14 == 0) {
      puVar19 = (undefined1 *)((long)register0x00000008 + -0x58);
      lVar18 = 1;
    }
    else {
      lVar18 = *(long *)(lVar14 + 0x18);
      if (lVar18 == 0) {
        return;
      }
      puVar19 = (undefined1 *)(lVar14 + 0x20);
    }
    lVar14 = 0;
    do {
      lVar10 = *(long *)(puVar19 + lVar14 * 8);
      pcVar17 = *(code **)(lVar10 + 0x10);
      plVar7 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar6);
      }
      iVar3 = func_0x00f78a4c(lVar10);
      if (iVar3 == 0) {
        if ((((plVar7 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar7 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar3 = func_0x00f78a44(lVar10);
        iVar4 = func_0x00f78ec0(lVar10);
        if (iVar3 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar4 == 0) {
            lVar10 = *plVar7 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(plVar7,*(undefined8 *)(lVar10 + 0x140));
            uVar6 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,lVar10,(ulong)uVar2);
code_r0x02924e68:
          pcVar17 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar4 == 0) {
            uVar6 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(plVar7);
code_r0x02924e40:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar17 = (code *)*puVar8;
        }
        (*pcVar17)(plVar7,puVar8);
        uVar6 = extraout_x1_02;
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        (*pcVar17)(lVar10);
        uVar6 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar17)(plVar7,lVar10);
        uVar6 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar14 = lVar14 + 1;
      if (lVar14 == lVar18) {
        return;
      }
    } while( true );
  }
  uVar6 = func_0x00f78af4();
  puStack_b8 = &Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41170);
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
     (plVar7 = *(long **)(*(long *)(lVar14 + 0x28) + 0x30), plVar7 != (long *)0x0)) {
    uVar12 = (**(code **)(*plVar7 + 0x858))(plVar7,*(undefined8 *)(*plVar7 + 0x860));
    if ((uVar12 & 1) != 0) {
      return;
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41170);
    if ((lVar14 != 0) && (lVar5 = *(long *)(lVar14 + 0x10), lVar5 != 0)) {
      unaff_x20 = 0x3eb4000;
      register0x00000008 = (BADSPACEBASE *)&uStack_b0;
      unaff_x21 = 0x3d41170;
      unaff_x30 = puStack_b8;
      goto System_Action__Invoke;
    }
  }
  lVar14 = func_0x00f78af4();
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar23 = func_0x00f78af4();
  puVar9 = auVar23._8_8_;
  puVar8 = auVar23._0_8_;
  uVar22 = puVar9[1];
  uVar6 = *puVar9;
  puVar8[2] = puVar9[2];
  puVar8[1] = uVar22;
  *puVar8 = uVar6;
  return;
}



// ============================================================
// RVA: 0x148a054 | Atlas.UI.Screens.LobbySettingsScreen.OnUpdate
// ============================================================

void Atlas_UI_Screens_LobbySettingsScreen__OnUpdate(long param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 unaff_x22;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 unaff_x23;
  long lVar16;
  undefined8 unaff_x24;
  undefined1 *puVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  lVar13 = 0x3eb4000;
  if ((bRam0000000003eb495d & 1) == 0) {
    func_0x00f78a20(0x3d41168);
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495d = 1;
  }
  if (*(int *)(param_1 + 0x4c) != 2) {
    return;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (plVar6 = *(long **)(*(long *)(lVar5 + 0x28) + 0x30), plVar6 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar6 + 0x938))(plVar6,*(undefined8 *)(*plVar6 + 0x940));
    if (iVar3 == 0) {
      return;
    }
    uVar14 = 0x3d41168;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41168);
    unaff_x22 = 0x3d41168;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x70) != 0)) {
      iVar3 = *(int *)(*(long *)(lVar5 + 0x70) + 0x50);
      if (iVar3 == 0) {
        lVar13 = 1;
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        lVar13 = 2;
      }
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
      unaff_x22 = uVar14;
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
        if ((int)lVar13 != *(int *)(lVar5 + 0x9c)) {
          /*Atlas.Networking.NetworkLobby$$SetLobbyGameType*/ func_0x014aa1fc(lVar5,lVar13,0);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
          if ((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) goto LAB_0148a1b4;
          *(int *)(*(long *)(lVar5 + 0x30) + 0x10) = (int)lVar13;
        }
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
        if (lVar5 != 0) {
          lVar13 = *(long *)(lVar5 + 0x38);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41168);
          if (((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) && (lVar13 != 0)) {
            *(bool *)(lVar13 + 0xc6) = *(int *)(*(long *)(lVar5 + 0x78) + 0x50) == 1;
            return;
          }
        }
      }
    }
  }
LAB_0148a1b4:
  lVar5 = func_0x00f78af4();
  uStack_58 = 0x3d41170;
  puStack_38 = &Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed;
  pppppppuVar18 = &ppppppuStack_40;
  uStack_60 = unaff_x22;
  lStack_50 = lVar13;
  lStack_48 = param_1;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41170);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x10), lVar13 != 0)) {
    puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
    lVar5 = lStack_48;
    lVar16 = lStack_50;
    uVar14 = uStack_58;
    unaff_x22 = uStack_60;
    pppppppuVar18 = (undefined8 *******)ppppppuStack_40;
    puStack_68 = puStack_38;
System_Action__Invoke:
    uVar19 = 0;
    *(undefined8 *)((long)puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)((long)puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar2 + -0x28) = uVar14;
    *(long *)((long)puVar2 + -0x20) = lVar16;
    *(long *)((long)puVar2 + -0x18) = lVar5;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar18;
    *(undefined **)((long)puVar2 + -8) = puStack_68;
    *(long *)((long)puVar2 + -0x58) = lVar13;
    lVar5 = *(long *)(lVar13 + 0x68);
    if (lVar5 == 0) {
      puVar17 = (undefined1 *)((long)puVar2 + -0x58);
      lVar16 = 1;
    }
    else {
      lVar16 = *(long *)(lVar5 + 0x18);
      if (lVar16 == 0) {
        return;
      }
      puVar17 = (undefined1 *)(lVar5 + 0x20);
    }
    lVar5 = 0;
    do {
      lVar9 = *(long *)(puVar17 + lVar5 * 8);
      pcVar15 = *(code **)(lVar9 + 0x10);
      plVar6 = *(long **)(lVar9 + 0x20);
      lVar9 = *(long *)(lVar9 + 0x28);
      if (*(short *)(lVar9 + 0x48) == -1) {
        func_0x00f78ad8(lVar9,uVar19);
      }
      iVar3 = func_0x00f78a4c(lVar9);
      if (iVar3 == 0) {
        if ((((plVar6 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
            ((*(byte *)(*plVar6 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar3 = func_0x00f78a44(lVar9);
        iVar4 = func_0x00f78ec0(lVar9);
        if (iVar3 == 0) {
          uVar1 = *(ushort *)(lVar9 + 0x48);
          if (iVar4 == 0) {
            lVar9 = *plVar6 + (ulong)uVar1 * 0x10;
            (**(code **)(lVar9 + 0x138))(plVar6,*(undefined8 *)(lVar9 + 0x140));
            uVar19 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,lVar9,(ulong)uVar1);
code_r0x02924e68:
          pcVar15 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar4 == 0) {
            uVar14 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x02924e40;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar6);
code_r0x02924e40:
            uVar14 = *(undefined8 *)(lVar10 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar14,lVar9);
          pcVar15 = (code *)*puVar7;
        }
        (*pcVar15)(plVar6,puVar7);
        uVar19 = extraout_x1_02;
      }
      else if (*(char *)(lVar9 + 0x4a) == '\0') {
        (*pcVar15)(lVar9);
        uVar19 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar15)(plVar6,lVar9);
        uVar19 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar5 = lVar5 + 1;
      if (lVar5 == lVar16) {
        return;
      }
    } while( true );
  }
  uVar14 = func_0x00f78af4();
  puStack_68 = &Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41170);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (plVar6 = *(long **)(*(long *)(lVar13 + 0x28) + 0x30), plVar6 != (long *)0x0)) {
    uVar11 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
    if ((uVar11 & 1) != 0) {
      return;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41170);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x10), lVar13 != 0)) {
      lVar16 = 0x3eb4000;
      puVar2 = &uStack_60;
      uVar14 = 0x3d41170;
      goto System_Action__Invoke;
    }
  }
  lVar13 = func_0x00f78af4();
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar20 = func_0x00f78af4();
  puVar8 = auVar20._8_8_;
  puVar7 = auVar20._0_8_;
  uVar19 = puVar8[1];
  uVar14 = *puVar8;
  puVar7[2] = puVar8[2];
  puVar7[1] = uVar19;
  *puVar7 = uVar14;
  return;
}



// ============================================================
// RVA: 0x148a1b8 | Atlas.UI.Screens.LobbySettingsScreen.OnCloseButtonPressed
// ============================================================

void Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined *puStack_38;
  
  puVar16 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), puStack_38 = unaff_x30, lVar4 != 0)) {
System_Action__Invoke:
    uVar6 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_38;
    *(long *)((long)register0x00000008 + -0x58) = lVar4;
    lVar9 = *(long *)(lVar4 + 0x68);
    if (lVar9 == 0) {
      puVar16 = (undefined1 *)((long)register0x00000008 + -0x58);
      lVar15 = 1;
    }
    else {
      lVar15 = *(long *)(lVar9 + 0x18);
      if (lVar15 == 0) {
        return;
      }
      puVar16 = (undefined1 *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar10 = *(long *)(puVar16 + lVar9 * 8);
      pcVar14 = *(code **)(lVar10 + 0x10);
      plVar5 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar6);
      }
      iVar2 = func_0x00f78a4c(lVar10);
      if (iVar2 == 0) {
        if (((plVar5 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
           (((*(byte *)(*plVar5 + 0x115) & 1) != 0 || (*(long *)(lVar4 + 0x18) == 0))))
        goto code_r0x02924d98;
        iVar2 = func_0x00f78a44(lVar10);
        iVar3 = func_0x00f78ec0(lVar10);
        if (iVar2 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar3 == 0) {
            lVar10 = *plVar5 + (ulong)uVar1 * 0x10;
            (**(code **)(lVar10 + 0x138))(plVar5,*(undefined8 *)(lVar10 + 0x140));
            uVar6 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,lVar10,(ulong)uVar1);
code_r0x02924e68:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar3 == 0) {
            uVar6 = *(undefined8 *)(*plVar5 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar5;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(plVar5);
code_r0x02924e40:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(plVar5,puVar7);
        uVar6 = extraout_x1_02;
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        (*pcVar14)(lVar10);
        uVar6 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar14)(plVar5,lVar10);
        uVar6 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar15) {
        return;
      }
    } while( true );
  }
  uVar6 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41170);
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (plVar5 = *(long **)(*(long *)(lVar4 + 0x28) + 0x30), plVar5 != (long *)0x0)) {
    uVar12 = (**(code **)(*plVar5 + 0x858))(plVar5,*(undefined8 *)(*plVar5 + 0x860));
    if ((uVar12 & 1) != 0) {
      return;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41170);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
      unaff_x20 = 0x3eb4000;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x21 = 0x3d41170;
      unaff_x19 = param_1;
      unaff_x29 = puVar16;
      goto System_Action__Invoke;
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar18 = func_0x00f78af4();
  puVar8 = auVar18._8_8_;
  puVar7 = auVar18._0_8_;
  uVar17 = puVar8[1];
  uVar6 = *puVar8;
  puVar7[2] = puVar8[2];
  puVar7[1] = uVar17;
  *puVar7 = uVar6;
  return;
}



// ============================================================
// RVA: 0x148a224 | Atlas.UI.Screens.LobbySettingsScreen.OnGroupLeaderChangedJoined
// ============================================================

void Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  long lStack_58;
  
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (plVar6 = *(long **)(*(long *)(lVar5 + 0x28) + 0x30), plVar6 != (long *)0x0)) {
    uVar7 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
    if ((uVar7 & 1) != 0) {
      return;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
      uVar9 = 0;
      lStack_58 = lVar5;
      lVar11 = *(long *)(lVar5 + 0x68);
      if (lVar11 == 0) {
        plVar6 = &lStack_58;
        lVar16 = 1;
      }
      else {
        lVar16 = *(long *)(lVar11 + 0x18);
        if (lVar16 == 0) {
          return;
        }
        plVar6 = (long *)(lVar11 + 0x20);
      }
      lVar11 = 0;
      do {
        lVar12 = plVar6[lVar11];
        pcVar15 = *(code **)(lVar12 + 0x10);
        plVar1 = *(long **)(lVar12 + 0x20);
        lVar12 = *(long *)(lVar12 + 0x28);
        if (*(short *)(lVar12 + 0x48) == -1) {
          func_0x00f78ad8(lVar12,uVar9);
        }
        iVar3 = func_0x00f78a4c(lVar12);
        if (iVar3 == 0) {
          if (((plVar1 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
             (((*(byte *)(*plVar1 + 0x115) & 1) != 0 || (*(long *)(lVar5 + 0x18) == 0))))
          goto code_r0x02924d98;
          iVar3 = func_0x00f78a44(lVar12);
          iVar4 = func_0x00f78ec0(lVar12);
          if (iVar3 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar4 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,*(undefined8 *)(lVar12 + 0x140));
              uVar9 = extraout_x1_01;
              goto code_r0x02924da4;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar8 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar14 = piVar14 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x02924e68:
            pcVar15 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar4 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar14 = piVar14 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar9 = *(undefined8 *)(lVar13 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
            pcVar15 = (code *)*puVar8;
          }
          (*pcVar15)(plVar1,puVar8);
          uVar9 = extraout_x1_02;
        }
        else if (*(char *)(lVar12 + 0x4a) == '\0') {
          (*pcVar15)(lVar12);
          uVar9 = extraout_x1;
        }
        else {
code_r0x02924d98:
          (*pcVar15)(plVar1,lVar12);
          uVar9 = extraout_x1_00;
        }
code_r0x02924da4:
        lVar11 = lVar11 + 1;
        if (lVar11 == lVar16) {
          return;
        }
      } while( true );
    }
  }
  lVar5 = func_0x00f78af4();
  lStack_58 = 0x3eb4000;
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar18 = func_0x00f78af4();
  puVar10 = auVar18._8_8_;
  puVar8 = auVar18._0_8_;
  uVar17 = puVar10[1];
  uVar9 = *puVar10;
  puVar8[2] = puVar10[2];
  puVar8[1] = uVar17;
  *puVar8 = uVar9;
  return;
}



// ============================================================
// RVA: 0x148a2d4 | Atlas.UI.Screens.LobbySettingsScreen..ctor
// ============================================================

void Atlas_UI_Screens_LobbySettingsScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
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



