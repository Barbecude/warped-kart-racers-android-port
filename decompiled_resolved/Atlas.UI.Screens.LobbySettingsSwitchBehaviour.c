// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LobbySettingsSwitchBehaviour

// ============================================================
// RVA: 0x1489d48 | Atlas.UI.Screens.LobbySettingsSwitchBehaviour.SetValueByIndex
// ============================================================

void Atlas_UI_Screens_LobbySettingsSwitchBehaviour__SetValueByIndex(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  long *plVar18;
  undefined8 unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long unaff_x23;
  long lVar22;
  undefined8 unaff_x24;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined8 unaff_x25;
  undefined8 uVar25;
  undefined8 unaff_x26;
  undefined8 uVar26;
  undefined8 *******pppppppuVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  code *pcStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 ******ppppppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_b0;
  code *pcStack_a8;
  undefined8 ******ppppppuStack_60;
  code *pcStack_58;
  
  plVar18 = (long *)0x3eb4000;
  if ((bRam0000000003eb4962 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4962 = 1;
  }
  uVar17 = (uint)param_2;
  if ((int)uVar17 < 0) {
LAB_01489e6c:
    param_2 = 0xffffffff;
    goto LAB_01489e70;
  }
  lVar12 = *(long *)(param_1 + 0x18);
  if (lVar12 == 0) goto LAB_01489e98;
  if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar17) goto LAB_01489e6c;
  if (uVar17 < *(uint *)(lVar12 + 0x18)) {
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_01489e98:
      func_0x00f78af4();
      goto LAB_01489e9c;
    }
    lVar12 = lVar12 + (param_2 & 0xffffffff) * 0x20;
    uVar28 = *(undefined4 *)(lVar12 + 0x30);
    uVar29 = *(undefined4 *)(lVar12 + 0x34);
    uVar30 = *(undefined4 *)(lVar12 + 0x38);
    uVar31 = *(undefined4 *)(lVar12 + 0x3c);
    plVar18 = *(long **)(lVar12 + 0x28);
    /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar12 + 0x20),0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01489e98;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x40),plVar18,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_01489e98;
    (**(code **)(*plVar6 + 0x2a8))
              (uVar28,uVar29,uVar30,uVar31,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_01489e98;
    plVar18 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x48),0);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      if (plVar18 != (long *)0x0) goto code_r0x01489e44;
LAB_01489e5c:
      /*UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate*/ func_0x032d2e20(plVar18,0);
LAB_01489e70:
      *(int *)(param_1 + 0x50) = (int)param_2;
      return;
    }
    if (plVar18 == (long *)0x0) goto LAB_01489e5c;
code_r0x01489e44:
    if (*plVar18 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_01489e5c;
  }
  else {
LAB_01489e9c:
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
  }
  uVar7 = func_0x00f78e5c(plVar18);
  pcStack_58 = Atlas_UI_Screens_LobbySettingsScreen__OnAfterExit;
  lVar12 = 0x3eb4000;
  uVar9 = 0x3d41168;
  ppppppuStack_60 = (undefined8 ******)&stack0xfffffffffffffff0;
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
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d41168);
  uVar20 = unaff_x22;
  lVar22 = unaff_x23;
  uVar23 = unaff_x24;
  uVar25 = unaff_x25;
  uVar26 = unaff_x26;
  if (lVar8 == 0) {
LAB_0148a04c:
    func_0x00f78af4();
  }
  else {
    lVar12 = *(long *)(lVar8 + 0x68);
    uVar9 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar9,uVar7,uRam0000000003d5a0e8,0);
    uVar20 = 0x3d5a000;
    if (lVar12 == 0) goto LAB_0148a04c;
    uVar1 = 0x3d41170;
    uVar19 = 0x3d41170;
    /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar12,uVar9,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41170);
    uVar20 = uVar1;
    if (((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) ||
       (lVar22 = *(long *)(*(long *)(lVar8 + 0x28) + 0x30), uVar20 = uVar19, lVar22 == 0))
    goto LAB_0148a04c;
    uVar23 = 0x3d1b548;
    uVar25 = 0x3d5a000;
    uVar26 = 0x3d2a000;
    lVar12 = *(long *)(lVar22 + 0x58);
    uVar9 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
    /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar9,uVar7,uRam0000000003d5a0f0,uRam0000000003d2a290);
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar12,uVar9,0);
    if ((plVar6 == (long *)0x0) || (uVar20 = uVar1, *plVar6 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
      *(long **)(lVar22 + 0x58) = plVar6;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41170);
      uVar20 = uVar19;
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
        puVar3 = (undefined8 *)&stack0xffffffffffffffb0;
        pppppppuVar27 = (undefined8 *******)ppppppuStack_60;
        pcStack_108 = pcStack_58;
        goto System_Action__Invoke;
      }
      goto LAB_0148a04c;
    }
  }
  unaff_x26 = uVar26;
  unaff_x25 = uVar25;
  unaff_x24 = uVar23;
  unaff_x23 = lVar22;
  lVar22 = func_0x00f78e5c();
  pcStack_a8 = Atlas_UI_Screens_LobbySettingsScreen__OnUpdate;
  uVar15 = 0x3eb4000;
  uStack_d0 = uVar20;
  uStack_c8 = uVar9;
  lStack_c0 = lVar12;
  uStack_b8 = uVar7;
  ppppppuStack_b0 = &ppppppuStack_60;
  if ((bRam0000000003eb495d & 1) == 0) {
    func_0x00f78a20(0x3d41168);
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495d = 1;
  }
  if (*(int *)(lVar22 + 0x4c) != 2) {
    return;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar22,uRam0000000003d41170);
  unaff_x22 = uVar20;
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (plVar18 = *(long **)(*(long *)(lVar12 + 0x28) + 0x30), plVar18 != (long *)0x0)) {
    iVar4 = (**(code **)(*plVar18 + 0x938))(plVar18,*(undefined8 *)(*plVar18 + 0x940));
    if (iVar4 == 0) {
      return;
    }
    uVar9 = 0x3d41168;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar22,uRam0000000003d41168);
    unaff_x22 = 0x3d41168;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x70) != 0)) {
      iVar4 = *(int *)(*(long *)(lVar12 + 0x70) + 0x50);
      if (iVar4 == 0) {
        uVar15 = 1;
      }
      else {
        if (iVar4 != 1) {
          return;
        }
        uVar15 = 2;
      }
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar22,uRam0000000003d41170);
      unaff_x22 = uVar9;
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x20), lVar12 != 0)) {
        if ((int)uVar15 != *(int *)(lVar12 + 0x9c)) {
          /*Atlas.Networking.NetworkLobby$$SetLobbyGameType*/ func_0x014aa1fc(lVar12,uVar15,0);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar22,uRam0000000003d41170);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x30) == 0)) goto LAB_0148a1b4;
          *(int *)(*(long *)(lVar12 + 0x30) + 0x10) = (int)uVar15;
        }
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar22,uRam0000000003d41170);
        if (lVar12 != 0) {
          uVar15 = *(ulong *)(lVar12 + 0x38);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar22,uRam0000000003d41168);
          if (((lVar12 != 0) && (*(long *)(lVar12 + 0x78) != 0)) && (uVar15 != 0)) {
            *(bool *)(uVar15 + 0xc6) = *(int *)(*(long *)(lVar12 + 0x78) + 0x50) == 1;
            return;
          }
        }
      }
    }
  }
LAB_0148a1b4:
  param_1 = func_0x00f78af4();
  plStack_f8 = (long *)0x3d41170;
  pcStack_d8 = Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed;
  pppppppuVar27 = &ppppppuStack_e0;
  uStack_100 = unaff_x22;
  uStack_f0 = uVar15;
  lStack_e8 = lVar22;
  ppppppuStack_e0 = &ppppppuStack_b0;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
  if ((lVar12 != 0) && (lVar8 = *(long *)(lVar12 + 0x10), lVar8 != 0)) {
    puVar3 = &uStack_d0;
    param_1 = lStack_e8;
    param_2 = uStack_f0;
    plVar18 = plStack_f8;
    unaff_x22 = uStack_100;
    pppppppuVar27 = (undefined8 *******)ppppppuStack_e0;
    pcStack_108 = pcStack_d8;
System_Action__Invoke:
    uVar9 = 0;
    *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)((long)puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
    *(long *)((long)puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar3 + -0x30) = unaff_x22;
    *(long **)((long)puVar3 + -0x28) = plVar18;
    *(ulong *)((long)puVar3 + -0x20) = param_2;
    *(long *)((long)puVar3 + -0x18) = param_1;
    *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar27;
    *(code **)((long)puVar3 + -8) = pcStack_108;
    *(long *)((long)puVar3 + -0x58) = lVar8;
    lVar12 = *(long *)(lVar8 + 0x68);
    if (lVar12 == 0) {
      puVar24 = (undefined1 *)((long)puVar3 + -0x58);
      lVar22 = 1;
    }
    else {
      lVar22 = *(long *)(lVar12 + 0x18);
      if (lVar22 == 0) {
        return;
      }
      puVar24 = (undefined1 *)(lVar12 + 0x20);
    }
    lVar12 = 0;
    do {
      lVar13 = *(long *)(puVar24 + lVar12 * 8);
      pcVar21 = *(code **)(lVar13 + 0x10);
      plVar18 = *(long **)(lVar13 + 0x20);
      lVar13 = *(long *)(lVar13 + 0x28);
      if (*(short *)(lVar13 + 0x48) == -1) {
        func_0x00f78ad8(lVar13,uVar9);
      }
      iVar4 = func_0x00f78a4c(lVar13);
      if (iVar4 == 0) {
        if ((((plVar18 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
            ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar18 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar18,*(undefined8 *)(lVar13 + 0x140));
            uVar9 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar18;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar10 = (undefined8 *)
                          (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar18,lVar13,(ulong)uVar2);
code_r0x02924e68:
          pcVar21 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar5 == 0) {
            uVar9 = *(undefined8 *)(*plVar18 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar18);
code_r0x02924e40:
            uVar9 = *(undefined8 *)(lVar14 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar13);
          pcVar21 = (code *)*puVar10;
        }
        (*pcVar21)(plVar18,puVar10);
        uVar9 = extraout_x1_02;
      }
      else if (*(char *)(lVar13 + 0x4a) == '\0') {
        (*pcVar21)(lVar13);
        uVar9 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar21)(plVar18,lVar13);
        uVar9 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar12 = lVar12 + 1;
      if (lVar12 == lVar22) {
        return;
      }
    } while( true );
  }
  uVar9 = func_0x00f78af4();
  pcStack_108 = Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41170);
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (plVar18 = *(long **)(*(long *)(lVar12 + 0x28) + 0x30), plVar18 != (long *)0x0)) {
    uVar15 = (**(code **)(*plVar18 + 0x858))(plVar18,*(undefined8 *)(*plVar18 + 0x860));
    if ((uVar15 & 1) != 0) {
      return;
    }
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41170);
    if ((lVar12 != 0) && (lVar8 = *(long *)(lVar12 + 0x10), lVar8 != 0)) {
      param_2 = 0x3eb4000;
      puVar3 = &uStack_100;
      plVar18 = (long *)0x3d41170;
      goto System_Action__Invoke;
    }
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar32 = func_0x00f78af4();
  puVar11 = auVar32._8_8_;
  puVar10 = auVar32._0_8_;
  uVar7 = puVar11[1];
  uVar9 = *puVar11;
  puVar10[2] = puVar11[2];
  puVar10[1] = uVar7;
  *puVar10 = uVar9;
  return;
}



// ============================================================
// RVA: 0x148a348 | Atlas.UI.Screens.LobbySettingsSwitchBehaviour.get_SelectedIndex
// ============================================================

undefined4 Atlas_UI_Screens_LobbySettingsSwitchBehaviour__get_SelectedIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x148a350 | Atlas.UI.Screens.LobbySettingsSwitchBehaviour.set_SelectedIndex
// ============================================================

void Atlas_UI_Screens_LobbySettingsSwitchBehaviour__set_SelectedIndex
               (long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// ============================================================
// RVA: 0x148a358 | Atlas.UI.Screens.LobbySettingsSwitchBehaviour.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x0148a3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01489f94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148a400) */
/* WARNING: Removing unreachable block (ram,0x0148a424) */
/* WARNING: Removing unreachable block (ram,0x01489f98) */
/* WARNING: Removing unreachable block (ram,0x01489fa8) */
/* WARNING: Removing unreachable block (ram,0x01489fb0) */
/* WARNING: Removing unreachable block (ram,0x01489fb8) */
/* WARNING: Removing unreachable block (ram,0x0148a004) */
/* WARNING: Removing unreachable block (ram,0x0148a014) */
/* WARNING: Removing unreachable block (ram,0x0148a028) */
/* WARNING: Removing unreachable block (ram,0x0148a030) */

undefined8 * Atlas_UI_Screens_LobbySettingsSwitchBehaviour__Awake(undefined *param_1)

{
  ushort uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  long lVar27;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined8 unaff_d8;
  undefined4 uVar32;
  undefined8 unaff_d9;
  undefined4 uVar33;
  undefined8 unaff_d10;
  undefined4 uVar34;
  undefined8 unaff_d11;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar25 = 0x3d1fa78;
  if ((bRam0000000003eb4961 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a0f8);
    func_0x00f78a20(0x3d5a100);
    bRam0000000003eb4961 = 1;
  }
  Atlas_UI_Screens_LobbySettingsSwitchBehaviour__SetValueByIndex(param_1,0);
  puVar23 = *(undefined1 **)(param_1 + 0x20);
  uVar9 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar9,param_1,uRam0000000003d5a0f8,0);
  puStack_50 = &stack0xfffffffffffffff0;
  if (puVar23 != (undefined1 *)0x0) {
    ppuVar4 = &puStack_70;
    puStack_70 = (undefined1 *)0x3d1fa78;
    puStack_48 = (undefined *)0x148a400;
    ppuVar28 = &puStack_50;
    puStack_68 = (undefined *)uVar9;
    puStack_60 = puVar23;
    puStack_58 = param_1;
    if ((bRam0000000003eb4d95 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78,uVar9,0);
      bRam0000000003eb4d95 = 1;
    }
    uVar25 = 0x3d1fa78;
    puVar22 = puVar23 + 0x158;
    puVar10 = *(undefined8 **)(puVar23 + 0x158);
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar10,uVar9,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
      puVar12 = (undefined8 *)func_0x00ff0f44(puVar22,plVar11,puVar10);
      bVar5 = puVar10 == puVar12;
      puVar10 = puVar12;
      if (bVar5) {
        return puVar12;
      }
    }
    puVar29 = &Atlas_UI_UIAtlasButton__remove_Pressed;
    auVar35 = func_0x00f78e5c(plVar11);
    goto code_r0x015144d4;
  }
  puVar10 = (undefined8 *)func_0x00f78af4();
  ppuVar28 = &puStack_50;
  puStack_48 = &Atlas_UI_Screens_LobbySettingsSwitchBehaviour__OnLeftButtonPressed;
  uVar20 = *(int *)(puVar10 + 10) - 1;
  if ((int)uVar20 < 0) {
    if (puVar10[3] != 0) {
      uVar20 = *(int *)(puVar10[3] + 0x18) - 1;
      goto code_r0x0148a46c;
    }
    puVar10 = (undefined8 *)func_0x00f78af4();
    puStack_58 = &Atlas_UI_Screens_LobbySettingsSwitchBehaviour__OnRightButtonPressed;
    if (puVar10[3] == 0) {
      puStack_60 = (undefined1 *)&puStack_50;
      puVar10 = (undefined8 *)func_0x00f78af4();
      *(undefined4 *)(puVar10 + 10) = 0xffffffff;
      puStack_68 = &Atlas_UI_Screens_LobbySettingsSwitchBehaviour___ctor;
      puStack_70 = (undefined1 *)&puStack_60;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        puStack_70 = (undefined1 *)&puStack_60;
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return puVar10;
    }
    uVar20 = 0;
    if (*(int *)(puVar10 + 10) + 1 < *(int *)(puVar10[3] + 0x18)) {
      uVar20 = *(int *)(puVar10 + 10) + 1;
    }
    ppuVar2 = &puStack_50;
    puVar29 = &Atlas_UI_Screens_LobbySettingsSwitchBehaviour__OnRightButtonPressed;
    puStack_60 = (undefined1 *)&puStack_50;
  }
  else {
code_r0x0148a46c:
    ppuVar2 = (undefined1 **)&stack0xffffffffffffffc0;
    ppuVar28 = (undefined1 **)&stack0xfffffffffffffff0;
    puVar29 = puStack_48;
  }
  *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_d11;
  *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_d10;
  *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_d9;
  *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_d8;
  *(undefined8 *)((long)ppuVar2 + -0x30) = 0x3d1fa78;
  *(undefined8 *)((long)ppuVar2 + -0x28) = uVar9;
  *(undefined8 *)((long)ppuVar2 + -0x20) = 0;
  *(undefined **)((long)ppuVar2 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar28;
  *(undefined **)((long)ppuVar2 + -8) = puVar29;
  plVar11 = (long *)0x3eb4000;
  puVar12 = puVar10;
  if ((bRam0000000003eb4962 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    puVar12 = (undefined8 *)func_0x00f78a20(0x3d24188);
    bRam0000000003eb4962 = 1;
  }
  if ((int)uVar20 < 0) {
LAB_01489e6c:
    uVar20 = 0xffffffff;
    goto LAB_01489e70;
  }
  lVar13 = puVar10[3];
  if (lVar13 == 0) goto LAB_01489e98;
  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar20) goto LAB_01489e6c;
  if (uVar20 < *(uint *)(lVar13 + 0x18)) {
    if (puVar10[7] == 0) {
LAB_01489e98:
      func_0x00f78af4();
      goto LAB_01489e9c;
    }
    lVar13 = lVar13 + (ulong)uVar20 * 0x20;
    uVar31 = *(undefined4 *)(lVar13 + 0x30);
    uVar32 = *(undefined4 *)(lVar13 + 0x34);
    uVar33 = *(undefined4 *)(lVar13 + 0x38);
    uVar34 = *(undefined4 *)(lVar13 + 0x3c);
    plVar11 = *(long **)(lVar13 + 0x28);
    /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(puVar10[7],*(undefined8 *)(lVar13 + 0x20),0);
    if (puVar10[8] == 0) goto LAB_01489e98;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(puVar10[8],plVar11,0);
    plVar8 = (long *)puVar10[6];
    if (plVar8 == (long *)0x0) goto LAB_01489e98;
    (**(code **)(*plVar8 + 0x2a8))
              (uVar31,uVar32,uVar33,uVar34,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    if (puVar10[9] == 0) goto LAB_01489e98;
    plVar11 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(puVar10[9],0);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      if (plVar11 != (long *)0x0) goto code_r0x01489e44;
LAB_01489e5c:
      puVar12 = (undefined8 *)/*UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate*/ func_0x032d2e20(plVar11,0);
LAB_01489e70:
      *(uint *)(puVar10 + 10) = uVar20;
      return puVar12;
    }
    if (plVar11 == (long *)0x0) goto LAB_01489e5c;
code_r0x01489e44:
    if (*plVar11 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_01489e5c;
  }
  else {
LAB_01489e9c:
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
  }
  uVar9 = func_0x00f78e5c(plVar11);
  ppuVar4 = (undefined1 **)((long)ppuVar2 + -0xa0);
  *(undefined8 *)((long)ppuVar2 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)ppuVar2 + -0x98) = unaff_x25;
  *(undefined8 *)((long)ppuVar2 + -0x90) = unaff_x24;
  *(undefined8 *)((long)ppuVar2 + -0x88) = 0x3d5a0f8;
  *(undefined8 *)((long)ppuVar2 + -0x80) = 0x3d1fa78;
  *(long **)((long)ppuVar2 + -0x78) = plVar11;
  *(ulong *)((long)ppuVar2 + -0x70) = (ulong)uVar20;
  *(undefined8 **)((long)ppuVar2 + -0x68) = puVar10;
  *(undefined1 **)((long)ppuVar2 + -0x60) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(code **)((long)ppuVar2 + -0x58) = Atlas_UI_Screens_LobbySettingsScreen__OnAfterExit;
  ppuVar28 = (undefined1 **)((long)ppuVar2 + -0x60);
  uVar21 = 0x3eb4000;
  puVar10 = (undefined8 *)0x3d41168;
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
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41168);
  if (lVar13 != 0) {
    uVar25 = 0x3d5a000;
    puVar22 = *(undefined1 **)(lVar13 + 0x68);
    puVar10 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    auVar35._8_8_ = puVar10;
    auVar35._0_8_ = puVar22;
    /*System.Action$$.ctor*/ func_0x02924c80(puVar10,uVar9,uRam0000000003d5a0e8,0);
    uVar21 = 0;
    if (puVar22 != (undefined1 *)0x0) {
      uVar25 = 0x3d41170;
      puVar29 = (undefined *)0x1489f98;
code_r0x015144d4:
      *(undefined8 *)((long)ppuVar4 + -0x30) = uVar25;
      *(undefined8 **)((long)ppuVar4 + -0x28) = puVar10;
      *(undefined1 **)((long)ppuVar4 + -0x20) = puVar22;
      *(undefined8 *)((long)ppuVar4 + -0x18) = uVar9;
      *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar28;
      *(undefined **)((long)ppuVar4 + -8) = puVar29;
      if ((bRam0000000003eb4d96 & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        bRam0000000003eb4d96 = 1;
      }
      lVar13 = auVar35._0_8_ + 0x158;
      puVar10 = *(undefined8 **)(auVar35._0_8_ + 0x158);
      while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar10,auVar35._8_8_,0), plVar11 == (long *)0x0 ||
             (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
        puVar12 = (undefined8 *)func_0x00ff0f44(lVar13,plVar11,puVar10);
        bVar5 = puVar10 == puVar12;
        puVar10 = puVar12;
        if (bVar5) {
          return puVar12;
        }
      }
      auVar36 = func_0x00f78e5c(plVar11);
      *(undefined8 *)((long)ppuVar4 + -0x60) = 0x3d1fa78;
      *(undefined8 **)((long)ppuVar4 + -0x58) = puVar10;
      *(long *)((long)ppuVar4 + -0x50) = lVar13;
      *(long *)((long)ppuVar4 + -0x48) = auVar35._8_8_;
      *(undefined1 **)((long)ppuVar4 + -0x40) = (undefined1 *)((long)ppuVar4 + -0x10);
      *(undefined **)((long)ppuVar4 + -0x38) = &Atlas_UI_UIAtlasButton__add_SelectedOrPressed;
      if ((bRam0000000003eb4d97 & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        bRam0000000003eb4d97 = 1;
      }
      lVar13 = auVar36._0_8_ + 0x160;
      puVar10 = *(undefined8 **)(auVar36._0_8_ + 0x160);
      while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar10,auVar36._8_8_,0), plVar11 == (long *)0x0 ||
             (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
        puVar12 = (undefined8 *)func_0x00ff0f44(lVar13,plVar11,puVar10);
        bVar5 = puVar10 == puVar12;
        puVar10 = puVar12;
        if (bVar5) {
          return puVar12;
        }
      }
      auVar35 = func_0x00f78e5c(plVar11);
      *(undefined8 *)((long)ppuVar4 + -0x90) = 0x3d1fa78;
      *(undefined8 **)((long)ppuVar4 + -0x88) = puVar10;
      *(long *)((long)ppuVar4 + -0x80) = lVar13;
      *(long *)((long)ppuVar4 + -0x78) = auVar36._8_8_;
      *(undefined1 **)((long)ppuVar4 + -0x70) = (undefined1 *)((long)ppuVar4 + -0x40);
      *(undefined **)((long)ppuVar4 + -0x68) = &Atlas_UI_UIAtlasButton__remove_SelectedOrPressed;
      if ((bRam0000000003eb4d98 & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        bRam0000000003eb4d98 = 1;
      }
      puVar10 = *(undefined8 **)(auVar35._0_8_ + 0x160);
      while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar10,auVar35._8_8_,0), plVar11 == (long *)0x0 ||
             (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
        puVar12 = (undefined8 *)func_0x00ff0f44(auVar35._0_8_ + 0x160,plVar11,puVar10);
        bVar5 = puVar10 == puVar12;
        puVar10 = puVar12;
        if (bVar5) {
          return puVar12;
        }
      }
      lVar13 = func_0x00f78e5c(plVar11);
      return (undefined8 *)(ulong)*(byte *)(lVar13 + 0x168);
    }
  }
  func_0x00f78af4();
  puVar12 = (undefined8 *)func_0x00f78e5c();
  *(undefined8 *)((long)ppuVar2 + -0xd0) = uVar25;
  *(undefined8 **)((long)ppuVar2 + -200) = puVar10;
  *(undefined8 *)((long)ppuVar2 + -0xc0) = uVar21;
  *(undefined8 *)((long)ppuVar2 + -0xb8) = uVar9;
  *(undefined1 ***)((long)ppuVar2 + -0xb0) = ppuVar28;
  *(code **)((long)ppuVar2 + -0xa8) = Atlas_UI_Screens_LobbySettingsScreen__OnUpdate;
  lVar13 = 0x3eb4000;
  puVar10 = puVar12;
  if ((bRam0000000003eb495d & 1) == 0) {
    func_0x00f78a20(0x3d41168);
    puVar10 = (undefined8 *)func_0x00f78a20(0x3d41170);
    bRam0000000003eb495d = 1;
  }
  if (*(int *)((long)puVar12 + 0x4c) != 2) {
    return puVar10;
  }
  lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar12,uRam0000000003d41170);
  if (((lVar27 != 0) && (*(long *)(lVar27 + 0x28) != 0)) &&
     (plVar11 = *(long **)(*(long *)(lVar27 + 0x28) + 0x30), plVar11 != (long *)0x0)) {
    puVar10 = (undefined8 *)
              (**(code **)(*plVar11 + 0x938))(plVar11,*(undefined8 *)(*plVar11 + 0x940));
    if ((int)puVar10 == 0) {
      return puVar10;
    }
    uVar9 = 0x3d41168;
    puVar10 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41168);
    uVar25 = 0x3d41168;
    if ((puVar10 != (undefined8 *)0x0) && (puVar10[0xe] != 0)) {
      iVar6 = *(int *)(puVar10[0xe] + 0x50);
      if (iVar6 == 0) {
        lVar13 = 1;
      }
      else {
        if (iVar6 != 1) {
          return puVar10;
        }
        lVar13 = 2;
      }
      lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar12,uRam0000000003d41170);
      uVar25 = uVar9;
      if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x20), lVar27 != 0)) {
        if ((int)lVar13 != *(int *)(lVar27 + 0x9c)) {
          /*Atlas.Networking.NetworkLobby$$SetLobbyGameType*/ func_0x014aa1fc(lVar27,lVar13,0);
          lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar12,uRam0000000003d41170);
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x30) == 0)) goto LAB_0148a1b4;
          *(int *)(*(long *)(lVar27 + 0x30) + 0x10) = (int)lVar13;
        }
        lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar12,uRam0000000003d41170);
        if (lVar27 != 0) {
          lVar13 = *(long *)(lVar27 + 0x38);
          puVar10 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41168);
          if (((puVar10 != (undefined8 *)0x0) && (puVar10[0xf] != 0)) && (lVar13 != 0)) {
            *(bool *)(lVar13 + 0xc6) = *(int *)(puVar10[0xf] + 0x50) == 1;
            return puVar10;
          }
        }
      }
    }
  }
LAB_0148a1b4:
  uVar9 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar2 + -0x100) = uVar25;
  *(undefined8 *)((long)ppuVar2 + -0xf8) = 0x3d41170;
  *(long *)((long)ppuVar2 + -0xf0) = lVar13;
  *(undefined8 **)((long)ppuVar2 + -0xe8) = puVar12;
  *(undefined1 **)((long)ppuVar2 + -0xe0) = (undefined1 *)((long)ppuVar2 + -0xb0);
  *(code **)((long)ppuVar2 + -0xd8) = Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41170);
  if ((lVar13 != 0) && (puVar10 = *(undefined8 **)(lVar13 + 0x10), puVar10 != (undefined8 *)0x0)) {
    uVar25 = *(undefined8 *)((long)ppuVar2 + -0xe0);
    uVar30 = *(undefined8 *)((long)ppuVar2 + -0xd8);
    uVar9 = *(undefined8 *)((long)ppuVar2 + -0xf0);
    uVar19 = *(undefined8 *)((long)ppuVar2 + -0xe8);
    puVar3 = (undefined1 *)((long)ppuVar2 + -0xd0);
    uVar21 = *(undefined8 *)((long)ppuVar2 + -0x100);
    uVar24 = *(undefined8 *)((long)ppuVar2 + -0xf8);
System_Action__Invoke:
    uVar14 = 0;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = 0x3d5a0f8;
    *(undefined8 *)(puVar3 + -0x30) = uVar21;
    *(undefined8 *)(puVar3 + -0x28) = uVar24;
    *(undefined8 *)(puVar3 + -0x20) = uVar9;
    *(undefined8 *)(puVar3 + -0x18) = uVar19;
    *(undefined8 *)(puVar3 + -0x10) = uVar25;
    *(undefined8 *)(puVar3 + -8) = uVar30;
    *(undefined8 **)(puVar3 + -0x58) = puVar10;
    lVar13 = puVar10[0xd];
    if (lVar13 == 0) {
      puVar23 = puVar3 + -0x58;
      lVar27 = 1;
    }
    else {
      lVar27 = *(long *)(lVar13 + 0x18);
      if (lVar27 == 0) {
        return puVar10;
      }
      puVar23 = (undefined1 *)(lVar13 + 0x20);
    }
    lVar13 = 0;
    do {
      lVar15 = *(long *)(puVar23 + lVar13 * 8);
      pcVar26 = *(code **)(lVar15 + 0x10);
      plVar11 = *(long **)(lVar15 + 0x20);
      lVar15 = *(long *)(lVar15 + 0x28);
      if (*(short *)(lVar15 + 0x48) == -1) {
        func_0x00f78ad8(lVar15,uVar14);
      }
      iVar6 = func_0x00f78a4c(lVar15);
      if (iVar6 == 0) {
        if ((((plVar11 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
            ((*(byte *)(*plVar11 + 0x115) & 1) != 0)) || (puVar10[3] == 0)) goto code_r0x02924d98;
        iVar6 = func_0x00f78a44(lVar15);
        iVar7 = func_0x00f78ec0(lVar15);
        if (iVar6 == 0) {
          uVar1 = *(ushort *)(lVar15 + 0x48);
          if (iVar7 == 0) {
            lVar15 = *plVar11 + (ulong)uVar1 * 0x10;
            auVar35 = (**(code **)(lVar15 + 0x138))(plVar11,*(undefined8 *)(lVar15 + 0x140));
            goto code_r0x02924da4;
          }
          lVar15 = func_0x00f78a48(lVar15);
          lVar16 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar12 = (undefined8 *)
                          (lVar16 + (long)(int)(*piVar18 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar18 = piVar18 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,lVar15,(ulong)uVar1);
code_r0x02924e68:
          pcVar26 = (code *)*puVar12;
          puVar12 = (undefined8 *)puVar12[1];
        }
        else {
          if (iVar7 == 0) {
            uVar25 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar16 = *plVar11;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)(lVar15 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar18 = piVar18 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            lVar16 = func_0x00fac1f0(plVar11);
code_r0x02924e40:
            uVar25 = *(undefined8 *)(lVar16 + 8);
          }
          puVar12 = (undefined8 *)func_0x00f78acc(uVar25,lVar15);
          pcVar26 = (code *)*puVar12;
        }
        auVar35 = (*pcVar26)(plVar11,puVar12);
      }
      else if (*(char *)(lVar15 + 0x4a) == '\0') {
        auVar35 = (*pcVar26)(lVar15);
      }
      else {
code_r0x02924d98:
        auVar35 = (*pcVar26)(plVar11,lVar15);
      }
code_r0x02924da4:
      uVar14 = auVar35._8_8_;
      lVar13 = lVar13 + 1;
      if (lVar13 == lVar27) {
        return auVar35._0_8_;
      }
    } while( true );
  }
  uVar21 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar2 + -0x130) = uVar25;
  *(undefined8 *)((long)ppuVar2 + -0x128) = 0x3d41170;
  *(undefined8 *)((long)ppuVar2 + -0x120) = 0x3eb4000;
  *(undefined8 *)((long)ppuVar2 + -0x118) = uVar9;
  *(undefined1 **)((long)ppuVar2 + -0x110) = (undefined1 *)((long)ppuVar2 + -0xe0);
  *(code **)((long)ppuVar2 + -0x108) =
       Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar21,uRam0000000003d41170);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (plVar11 = *(long **)(*(long *)(lVar13 + 0x28) + 0x30), plVar11 != (long *)0x0)) {
    puVar10 = (undefined8 *)
              (**(code **)(*plVar11 + 0x858))(plVar11,*(undefined8 *)(*plVar11 + 0x860));
    if (((ulong)puVar10 & 1) != 0) {
      return puVar10;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar21,uRam0000000003d41170);
    if ((lVar13 != 0) && (puVar10 = *(undefined8 **)(lVar13 + 0x10), puVar10 != (undefined8 *)0x0))
    {
      uVar25 = *(undefined8 *)((long)ppuVar2 + -0x110);
      uVar30 = *(undefined8 *)((long)ppuVar2 + -0x108);
      uVar9 = *(undefined8 *)((long)ppuVar2 + -0x120);
      uVar19 = *(undefined8 *)((long)ppuVar2 + -0x118);
      puVar3 = (undefined1 *)((long)ppuVar2 + -0x100);
      uVar21 = *(undefined8 *)((long)ppuVar2 + -0x130);
      uVar24 = *(undefined8 *)((long)ppuVar2 + -0x128);
      goto System_Action__Invoke;
    }
  }
  lVar13 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar2 + -0x160) = uVar25;
  *(undefined8 *)((long)ppuVar2 + -0x158) = 0x3eb4000;
  *(undefined8 *)((long)ppuVar2 + -0x150) = 0x3d41170;
  *(undefined8 *)((long)ppuVar2 + -0x148) = uVar21;
  *(undefined1 **)((long)ppuVar2 + -0x140) = (undefined1 *)((long)ppuVar2 + -0x110);
  *(code **)((long)ppuVar2 + -0x138) = Atlas_UI_Screens_LobbySettingsScreen___ctor;
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  *(undefined8 *)((long)ppuVar2 + -0x140) = *(undefined8 *)((long)ppuVar2 + -0x140);
  *(undefined8 *)((long)ppuVar2 + -0x138) = *(undefined8 *)((long)ppuVar2 + -0x138);
  if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return puVar10;
  }
  auVar35 = func_0x00f78af4();
  puVar12 = auVar35._8_8_;
  puVar10 = auVar35._0_8_;
  uVar9 = puVar12[1];
  uVar25 = *puVar12;
  puVar10[2] = puVar12[2];
  puVar10[1] = uVar9;
  *puVar10 = uVar25;
  return puVar10;
}



// ============================================================
// RVA: 0x148a448 | Atlas.UI.Screens.LobbySettingsSwitchBehaviour.OnLeftButtonPressed
// ============================================================

undefined8 * Atlas_UI_Screens_LobbySettingsSwitchBehaviour__OnLeftButtonPressed(undefined8 *param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 unaff_x19;
  undefined8 uVar18;
  uint uVar19;
  undefined8 unaff_x20;
  long *plVar20;
  undefined8 unaff_x21;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 unaff_x22;
  undefined8 uVar23;
  code *pcVar24;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar26;
  undefined8 unaff_d8;
  undefined4 uVar27;
  undefined8 unaff_d9;
  undefined4 uVar28;
  undefined8 unaff_d10;
  undefined4 uVar29;
  undefined8 unaff_d11;
  undefined1 auVar30 [16];
  
  puVar3 = &stack0xfffffffffffffff0;
  uVar19 = *(int *)(param_1 + 10) - 1;
  if ((int)uVar19 < 0) {
    if (param_1[3] == 0) {
      param_1 = (undefined8 *)func_0x00f78af4();
      if (param_1[3] == 0) {
        puVar6 = (undefined8 *)func_0x00f78af4();
        *(undefined4 *)(puVar6 + 10) = 0xffffffff;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return puVar6;
      }
      uVar19 = 0;
      if (*(int *)(param_1 + 10) + 1 < *(int *)(param_1[3] + 0x18)) {
        uVar19 = *(int *)(param_1 + 10) + 1;
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Atlas_UI_Screens_LobbySettingsSwitchBehaviour__OnRightButtonPressed;
      unaff_x29 = puVar3;
    }
    else {
      uVar19 = *(int *)(param_1[3] + 0x18) - 1;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar20 = (long *)0x3eb4000;
  puVar6 = param_1;
  if ((bRam0000000003eb4962 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    puVar6 = (undefined8 *)func_0x00f78a20(0x3d24188);
    bRam0000000003eb4962 = 1;
  }
  if ((int)uVar19 < 0) {
LAB_01489e6c:
    uVar19 = 0xffffffff;
    goto LAB_01489e70;
  }
  lVar13 = param_1[3];
  if (lVar13 == 0) goto LAB_01489e98;
  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar19) goto LAB_01489e6c;
  if (uVar19 < *(uint *)(lVar13 + 0x18)) {
    if (param_1[7] == 0) {
LAB_01489e98:
      func_0x00f78af4();
      goto LAB_01489e9c;
    }
    lVar13 = lVar13 + (ulong)uVar19 * 0x20;
    uVar26 = *(undefined4 *)(lVar13 + 0x30);
    uVar27 = *(undefined4 *)(lVar13 + 0x34);
    uVar28 = *(undefined4 *)(lVar13 + 0x38);
    uVar29 = *(undefined4 *)(lVar13 + 0x3c);
    plVar20 = *(long **)(lVar13 + 0x28);
    /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(param_1[7],*(undefined8 *)(lVar13 + 0x20),0);
    if (param_1[8] == 0) goto LAB_01489e98;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(param_1[8],plVar20,0);
    plVar7 = (long *)param_1[6];
    if (plVar7 == (long *)0x0) goto LAB_01489e98;
    (**(code **)(*plVar7 + 0x2a8))
              (uVar26,uVar27,uVar28,uVar29,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    if (param_1[9] == 0) goto LAB_01489e98;
    plVar20 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1[9],0);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      if (plVar20 != (long *)0x0) goto code_r0x01489e44;
LAB_01489e5c:
      puVar6 = (undefined8 *)/*UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate*/ func_0x032d2e20(plVar20,0);
LAB_01489e70:
      *(uint *)(param_1 + 10) = uVar19;
      return puVar6;
    }
    if (plVar20 == (long *)0x0) goto LAB_01489e5c;
code_r0x01489e44:
    if (*plVar20 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_01489e5c;
  }
  else {
LAB_01489e9c:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
  uVar8 = func_0x00f78e5c(plVar20);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x78) = plVar20;
  *(ulong *)((long)register0x00000008 + -0x70) = (ulong)uVar19;
  *(undefined8 **)((long)register0x00000008 + -0x68) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_UI_Screens_LobbySettingsScreen__OnAfterExit;
  lVar13 = 0x3eb4000;
  uVar10 = 0x3d41168;
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
  if (lVar9 == 0) {
LAB_0148a04c:
    func_0x00f78af4();
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x68);
    uVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar10,uVar8,uRam0000000003d5a0e8,0);
    unaff_x22 = 0x3d5a000;
    if (lVar13 == 0) goto LAB_0148a04c;
    uVar23 = 0x3d41170;
    uVar22 = 0x3d41170;
    /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar13,uVar10,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
    unaff_x22 = uVar23;
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) ||
       (unaff_x23 = *(long *)(*(long *)(lVar9 + 0x28) + 0x30), unaff_x22 = uVar22, unaff_x23 == 0))
    goto LAB_0148a04c;
    unaff_x24 = 0x3d1b548;
    unaff_x25 = 0x3d5a000;
    unaff_x26 = 0x3d2a000;
    lVar13 = *(long *)(unaff_x23 + 0x58);
    uVar10 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
    /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar10,uVar8,uRam0000000003d5a0f0,uRam0000000003d2a290);
    plVar20 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar13,uVar10,0);
    if ((plVar20 == (long *)0x0) || (unaff_x22 = uVar23, *plVar20 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
      *(long **)(unaff_x23 + 0x58) = plVar20;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
      unaff_x22 = uVar22;
      if ((lVar9 != 0) && (puVar6 = *(undefined8 **)(lVar9 + 0x18), puVar6 != (undefined8 *)0x0)) {
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x60);
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x58);
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x70);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0x68);
        uVar23 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x78);
        unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x90);
        unaff_x23 = *(long *)((long)register0x00000008 + -0x88);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
        unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0xa0);
        unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x98);
        goto System_Action__Invoke;
      }
      goto LAB_0148a04c;
    }
  }
  puVar11 = (undefined8 *)func_0x00f78e5c();
  *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -200) = uVar10;
  *(long *)((long)register0x00000008 + -0xc0) = lVar13;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar8;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(code **)((long)register0x00000008 + -0xa8) = Atlas_UI_Screens_LobbySettingsScreen__OnUpdate;
  lVar13 = 0x3eb4000;
  puVar6 = puVar11;
  if ((bRam0000000003eb495d & 1) == 0) {
    func_0x00f78a20(0x3d41168);
    puVar6 = (undefined8 *)func_0x00f78a20(0x3d41170);
    bRam0000000003eb495d = 1;
  }
  if (*(int *)((long)puVar11 + 0x4c) != 2) {
    return puVar6;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
  if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (plVar20 = *(long **)(*(long *)(lVar9 + 0x28) + 0x30), plVar20 != (long *)0x0)) {
    puVar6 = (undefined8 *)
             (**(code **)(*plVar20 + 0x938))(plVar20,*(undefined8 *)(*plVar20 + 0x940));
    if ((int)puVar6 == 0) {
      return puVar6;
    }
    uVar10 = 0x3d41168;
    puVar6 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41168);
    unaff_x22 = 0x3d41168;
    if ((puVar6 != (undefined8 *)0x0) && (puVar6[0xe] != 0)) {
      iVar4 = *(int *)(puVar6[0xe] + 0x50);
      if (iVar4 == 0) {
        lVar13 = 1;
      }
      else {
        if (iVar4 != 1) {
          return puVar6;
        }
        lVar13 = 2;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
      unaff_x22 = uVar10;
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
        if ((int)lVar13 != *(int *)(lVar9 + 0x9c)) {
          /*Atlas.Networking.NetworkLobby$$SetLobbyGameType*/ func_0x014aa1fc(lVar9,lVar13,0);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x30) == 0)) goto LAB_0148a1b4;
          *(int *)(*(long *)(lVar9 + 0x30) + 0x10) = (int)lVar13;
        }
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
        if (lVar9 != 0) {
          lVar13 = *(long *)(lVar9 + 0x38);
          puVar6 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41168);
          if (((puVar6 != (undefined8 *)0x0) && (puVar6[0xf] != 0)) && (lVar13 != 0)) {
            *(bool *)(lVar13 + 0xc6) = *(int *)(puVar6[0xf] + 0x50) == 1;
            return puVar6;
          }
        }
      }
    }
  }
LAB_0148a1b4:
  uVar10 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = 0x3d41170;
  *(long *)((long)register0x00000008 + -0xf0) = lVar13;
  *(undefined8 **)((long)register0x00000008 + -0xe8) = puVar11;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(code **)((long)register0x00000008 + -0xd8) =
       Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41170);
  if ((lVar13 != 0) && (puVar6 = *(undefined8 **)(lVar13 + 0x10), puVar6 != (undefined8 *)0x0)) {
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xd0);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x100);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0xf8);
System_Action__Invoke:
    uVar12 = 0;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = uVar23;
    *(undefined8 *)(puVar2 + -0x28) = uVar21;
    *(undefined8 *)(puVar2 + -0x20) = uVar8;
    *(undefined8 *)(puVar2 + -0x18) = uVar18;
    *(undefined8 *)(puVar2 + -0x10) = uVar10;
    *(undefined8 *)(puVar2 + -8) = uVar22;
    *(undefined8 **)(puVar2 + -0x58) = puVar6;
    lVar13 = puVar6[0xd];
    if (lVar13 == 0) {
      puVar25 = puVar2 + -0x58;
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(lVar13 + 0x18);
      if (lVar9 == 0) {
        return puVar6;
      }
      puVar25 = (undefined1 *)(lVar13 + 0x20);
    }
    lVar13 = 0;
    do {
      lVar14 = *(long *)(puVar25 + lVar13 * 8);
      pcVar24 = *(code **)(lVar14 + 0x10);
      plVar20 = *(long **)(lVar14 + 0x20);
      lVar14 = *(long *)(lVar14 + 0x28);
      if (*(short *)(lVar14 + 0x48) == -1) {
        func_0x00f78ad8(lVar14,uVar12);
      }
      iVar4 = func_0x00f78a4c(lVar14);
      if (iVar4 == 0) {
        if ((((plVar20 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
            ((*(byte *)(*plVar20 + 0x115) & 1) != 0)) || (puVar6[3] == 0)) goto code_r0x02924d98;
        iVar4 = func_0x00f78a44(lVar14);
        iVar5 = func_0x00f78ec0(lVar14);
        if (iVar4 == 0) {
          uVar1 = *(ushort *)(lVar14 + 0x48);
          if (iVar5 == 0) {
            lVar14 = *plVar20 + (ulong)uVar1 * 0x10;
            auVar30 = (**(code **)(lVar14 + 0x138))(plVar20,*(undefined8 *)(lVar14 + 0x140));
            goto code_r0x02924da4;
          }
          lVar14 = func_0x00f78a48(lVar14);
          lVar15 = *plVar20;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar11 = (undefined8 *)
                          (lVar15 + (long)(int)(*piVar17 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar20,lVar14,(ulong)uVar1);
code_r0x02924e68:
          pcVar24 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar5 == 0) {
            uVar10 = *(undefined8 *)(*plVar20 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar15 = *plVar20;
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
            lVar15 = func_0x00fac1f0(plVar20);
code_r0x02924e40:
            uVar10 = *(undefined8 *)(lVar15 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar10,lVar14);
          pcVar24 = (code *)*puVar11;
        }
        auVar30 = (*pcVar24)(plVar20,puVar11);
      }
      else if (*(char *)(lVar14 + 0x4a) == '\0') {
        auVar30 = (*pcVar24)(lVar14);
      }
      else {
code_r0x02924d98:
        auVar30 = (*pcVar24)(plVar20,lVar14);
      }
code_r0x02924da4:
      uVar12 = auVar30._8_8_;
      lVar13 = lVar13 + 1;
      if (lVar13 == lVar9) {
        return auVar30._0_8_;
      }
    } while( true );
  }
  uVar8 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x128) = 0x3d41170;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x118) = uVar10;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(code **)((long)register0x00000008 + -0x108) =
       Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (plVar20 = *(long **)(*(long *)(lVar13 + 0x28) + 0x30), plVar20 != (long *)0x0)) {
    puVar6 = (undefined8 *)
             (**(code **)(*plVar20 + 0x858))(plVar20,*(undefined8 *)(*plVar20 + 0x860));
    if (((ulong)puVar6 & 1) != 0) {
      return puVar6;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
    if ((lVar13 != 0) && (puVar6 = *(undefined8 **)(lVar13 + 0x10), puVar6 != (undefined8 *)0x0)) {
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x110);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x108);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x120);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0x118);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x100);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x130);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x128);
      goto System_Action__Invoke;
    }
  }
  lVar13 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x160) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x158) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d41170;
  *(undefined8 *)((long)register0x00000008 + -0x148) = uVar8;
  *(undefined1 **)((long)register0x00000008 + -0x140) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(code **)((long)register0x00000008 + -0x138) = Atlas_UI_Screens_LobbySettingsScreen___ctor;
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x140) =
       *(undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)((long)register0x00000008 + -0x138);
  if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return puVar6;
  }
  auVar30 = func_0x00f78af4();
  puVar11 = auVar30._8_8_;
  puVar6 = auVar30._0_8_;
  uVar8 = puVar11[1];
  uVar10 = *puVar11;
  puVar6[2] = puVar11[2];
  puVar6[1] = uVar8;
  *puVar6 = uVar10;
  return puVar6;
}



// ============================================================
// RVA: 0x148a478 | Atlas.UI.Screens.LobbySettingsSwitchBehaviour.OnRightButtonPressed
// ============================================================

undefined8 *
Atlas_UI_Screens_LobbySettingsSwitchBehaviour__OnRightButtonPressed(undefined8 *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 unaff_x22;
  code *pcVar20;
  long lVar21;
  long unaff_x23;
  undefined8 uVar22;
  undefined8 unaff_x24;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined8 unaff_x25;
  undefined8 uVar25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  code *pcStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 ******ppppppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_b0;
  code *pcStack_a8;
  undefined8 ******ppppppuStack_60;
  code *pcStack_58;
  
  if (param_1[3] == 0) {
    puVar6 = (undefined8 *)func_0x00f78af4();
    *(undefined4 *)(puVar6 + 10) = 0xffffffff;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return puVar6;
  }
  uVar16 = 0;
  if (*(int *)(param_1 + 10) + 1 < *(int *)(param_1[3] + 0x18)) {
    uVar16 = *(int *)(param_1 + 10) + 1;
  }
  plVar17 = (long *)0x3eb4000;
  puVar6 = param_1;
  if ((bRam0000000003eb4962 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    puVar6 = (undefined8 *)func_0x00f78a20(0x3d24188);
    bRam0000000003eb4962 = 1;
  }
  if ((int)uVar16 < 0) {
LAB_01489e6c:
    uVar16 = 0xffffffff;
    goto LAB_01489e70;
  }
  lVar12 = param_1[3];
  if (lVar12 == 0) goto LAB_01489e98;
  if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar16) goto LAB_01489e6c;
  if (uVar16 < *(uint *)(lVar12 + 0x18)) {
    if (param_1[7] == 0) {
LAB_01489e98:
      func_0x00f78af4();
      goto LAB_01489e9c;
    }
    lVar12 = lVar12 + (ulong)uVar16 * 0x20;
    uVar27 = *(undefined4 *)(lVar12 + 0x30);
    uVar28 = *(undefined4 *)(lVar12 + 0x34);
    uVar29 = *(undefined4 *)(lVar12 + 0x38);
    uVar30 = *(undefined4 *)(lVar12 + 0x3c);
    plVar17 = *(long **)(lVar12 + 0x28);
    /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(param_1[7],*(undefined8 *)(lVar12 + 0x20),0);
    if (param_1[8] == 0) goto LAB_01489e98;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(param_1[8],plVar17,0);
    plVar7 = (long *)param_1[6];
    if (plVar7 == (long *)0x0) goto LAB_01489e98;
    (**(code **)(*plVar7 + 0x2a8))
              (uVar27,uVar28,uVar29,uVar30,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    if (param_1[9] == 0) goto LAB_01489e98;
    plVar17 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1[9],0);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      if (plVar17 != (long *)0x0) goto code_r0x01489e44;
LAB_01489e5c:
      puVar6 = (undefined8 *)/*UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate*/ func_0x032d2e20(plVar17,0);
LAB_01489e70:
      *(uint *)(param_1 + 10) = uVar16;
      return puVar6;
    }
    if (plVar17 == (long *)0x0) goto LAB_01489e5c;
code_r0x01489e44:
    if (*plVar17 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_01489e5c;
  }
  else {
LAB_01489e9c:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
  uVar8 = func_0x00f78e5c(plVar17);
  pcStack_58 = Atlas_UI_Screens_LobbySettingsScreen__OnAfterExit;
  lVar12 = 0x3eb4000;
  uVar10 = 0x3d41168;
  ppppppuStack_60 = (undefined8 ******)&stack0xfffffffffffffff0;
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
  uVar19 = unaff_x22;
  lVar21 = unaff_x23;
  uVar22 = unaff_x24;
  uVar24 = unaff_x25;
  uVar25 = unaff_x26;
  if (lVar9 == 0) {
LAB_0148a04c:
    func_0x00f78af4();
  }
  else {
    lVar12 = *(long *)(lVar9 + 0x68);
    uVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar10,uVar8,uRam0000000003d5a0e8,0);
    uVar19 = 0x3d5a000;
    if (lVar12 == 0) goto LAB_0148a04c;
    uVar1 = 0x3d41170;
    uVar18 = 0x3d41170;
    /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar12,uVar10,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
    uVar19 = uVar1;
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) ||
       (lVar21 = *(long *)(*(long *)(lVar9 + 0x28) + 0x30), uVar19 = uVar18, lVar21 == 0))
    goto LAB_0148a04c;
    uVar22 = 0x3d1b548;
    uVar24 = 0x3d5a000;
    uVar25 = 0x3d2a000;
    lVar12 = *(long *)(lVar21 + 0x58);
    uVar10 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
    /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar10,uVar8,uRam0000000003d5a0f0,uRam0000000003d2a290);
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar12,uVar10,0);
    if ((plVar7 == (long *)0x0) || (uVar19 = uVar1, *plVar7 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
      *(long **)(lVar21 + 0x58) = plVar7;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41170);
      uVar19 = uVar18;
      if ((lVar9 != 0) && (puVar6 = *(undefined8 **)(lVar9 + 0x18), puVar6 != (undefined8 *)0x0)) {
        puVar3 = (undefined8 *)&stack0xffffffffffffffb0;
        uVar14 = (ulong)uVar16;
        pppppppuVar26 = (undefined8 *******)ppppppuStack_60;
        pcStack_108 = pcStack_58;
        goto System_Action__Invoke;
      }
      goto LAB_0148a04c;
    }
  }
  unaff_x26 = uVar25;
  unaff_x25 = uVar24;
  unaff_x24 = uVar22;
  unaff_x23 = lVar21;
  puVar11 = (undefined8 *)func_0x00f78e5c();
  pcStack_a8 = Atlas_UI_Screens_LobbySettingsScreen__OnUpdate;
  uVar14 = 0x3eb4000;
  puVar6 = puVar11;
  uStack_d0 = uVar19;
  uStack_c8 = uVar10;
  lStack_c0 = lVar12;
  uStack_b8 = uVar8;
  ppppppuStack_b0 = &ppppppuStack_60;
  if ((bRam0000000003eb495d & 1) == 0) {
    func_0x00f78a20(0x3d41168);
    puVar6 = (undefined8 *)func_0x00f78a20(0x3d41170);
    bRam0000000003eb495d = 1;
  }
  if (*(int *)((long)puVar11 + 0x4c) != 2) {
    return puVar6;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
  unaff_x22 = uVar19;
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (plVar17 = *(long **)(*(long *)(lVar12 + 0x28) + 0x30), plVar17 != (long *)0x0)) {
    puVar6 = (undefined8 *)
             (**(code **)(*plVar17 + 0x938))(plVar17,*(undefined8 *)(*plVar17 + 0x940));
    if ((int)puVar6 == 0) {
      return puVar6;
    }
    uVar10 = 0x3d41168;
    puVar6 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41168);
    unaff_x22 = 0x3d41168;
    if ((puVar6 != (undefined8 *)0x0) && (puVar6[0xe] != 0)) {
      iVar4 = *(int *)(puVar6[0xe] + 0x50);
      if (iVar4 == 0) {
        uVar14 = 1;
      }
      else {
        if (iVar4 != 1) {
          return puVar6;
        }
        uVar14 = 2;
      }
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
      unaff_x22 = uVar10;
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x20), lVar12 != 0)) {
        if ((int)uVar14 != *(int *)(lVar12 + 0x9c)) {
          /*Atlas.Networking.NetworkLobby$$SetLobbyGameType*/ func_0x014aa1fc(lVar12,uVar14,0);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x30) == 0)) goto LAB_0148a1b4;
          *(int *)(*(long *)(lVar12 + 0x30) + 0x10) = (int)uVar14;
        }
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar11,uRam0000000003d41170);
        if (lVar12 != 0) {
          uVar14 = *(ulong *)(lVar12 + 0x38);
          puVar6 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41168);
          if (((puVar6 != (undefined8 *)0x0) && (puVar6[0xf] != 0)) && (uVar14 != 0)) {
            *(bool *)(uVar14 + 0xc6) = *(int *)(puVar6[0xf] + 0x50) == 1;
            return puVar6;
          }
        }
      }
    }
  }
LAB_0148a1b4:
  param_1 = (undefined8 *)func_0x00f78af4();
  plStack_f8 = (long *)0x3d41170;
  pcStack_d8 = Atlas_UI_Screens_LobbySettingsScreen__OnCloseButtonPressed;
  pppppppuVar26 = &ppppppuStack_e0;
  uStack_100 = unaff_x22;
  uStack_f0 = uVar14;
  puStack_e8 = puVar11;
  ppppppuStack_e0 = &ppppppuStack_b0;
  if ((bRam0000000003eb495e & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495e = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41170);
  if ((lVar12 != 0) && (puVar6 = *(undefined8 **)(lVar12 + 0x10), puVar6 != (undefined8 *)0x0)) {
    puVar3 = &uStack_d0;
    param_1 = puStack_e8;
    uVar14 = uStack_f0;
    plVar17 = plStack_f8;
    unaff_x22 = uStack_100;
    pppppppuVar26 = (undefined8 *******)ppppppuStack_e0;
    pcStack_108 = pcStack_d8;
System_Action__Invoke:
    uVar10 = 0;
    *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)((long)puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
    *(long *)((long)puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar3 + -0x30) = unaff_x22;
    *(long **)((long)puVar3 + -0x28) = plVar17;
    *(ulong *)((long)puVar3 + -0x20) = uVar14;
    *(undefined8 **)((long)puVar3 + -0x18) = param_1;
    *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar26;
    *(code **)((long)puVar3 + -8) = pcStack_108;
    *(undefined8 **)((long)puVar3 + -0x58) = puVar6;
    lVar12 = puVar6[0xd];
    if (lVar12 == 0) {
      puVar23 = (undefined1 *)((long)puVar3 + -0x58);
      lVar21 = 1;
    }
    else {
      lVar21 = *(long *)(lVar12 + 0x18);
      if (lVar21 == 0) {
        return puVar6;
      }
      puVar23 = (undefined1 *)(lVar12 + 0x20);
    }
    lVar12 = 0;
    do {
      lVar9 = *(long *)(puVar23 + lVar12 * 8);
      pcVar20 = *(code **)(lVar9 + 0x10);
      plVar17 = *(long **)(lVar9 + 0x20);
      lVar9 = *(long *)(lVar9 + 0x28);
      if (*(short *)(lVar9 + 0x48) == -1) {
        func_0x00f78ad8(lVar9,uVar10);
      }
      iVar4 = func_0x00f78a4c(lVar9);
      if (iVar4 == 0) {
        if ((((plVar17 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
            ((*(byte *)(*plVar17 + 0x115) & 1) != 0)) || (puVar6[3] == 0)) goto code_r0x02924d98;
        iVar4 = func_0x00f78a44(lVar9);
        iVar5 = func_0x00f78ec0(lVar9);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar5 == 0) {
            lVar9 = *plVar17 + (ulong)uVar2 * 0x10;
            auVar31 = (**(code **)(lVar9 + 0x138))(plVar17,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x02924da4;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar13 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar9) {
                puVar11 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar17,lVar9,(ulong)uVar2);
code_r0x02924e68:
          pcVar20 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar5 == 0) {
            uVar10 = *(undefined8 *)(*plVar17 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x02924e40;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar17);
code_r0x02924e40:
            uVar10 = *(undefined8 *)(lVar13 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar10,lVar9);
          pcVar20 = (code *)*puVar11;
        }
        auVar31 = (*pcVar20)(plVar17,puVar11);
      }
      else if (*(char *)(lVar9 + 0x4a) == '\0') {
        auVar31 = (*pcVar20)(lVar9);
      }
      else {
code_r0x02924d98:
        auVar31 = (*pcVar20)(plVar17,lVar9);
      }
code_r0x02924da4:
      uVar10 = auVar31._8_8_;
      lVar12 = lVar12 + 1;
      if (lVar12 == lVar21) {
        return auVar31._0_8_;
      }
    } while( true );
  }
  uVar10 = func_0x00f78af4();
  pcStack_108 = Atlas_UI_Screens_LobbySettingsScreen__OnGroupLeaderChangedJoined;
  if ((bRam0000000003eb495f & 1) == 0) {
    func_0x00f78a20(0x3d41170);
    bRam0000000003eb495f = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41170);
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (plVar17 = *(long **)(*(long *)(lVar12 + 0x28) + 0x30), plVar17 != (long *)0x0)) {
    puVar6 = (undefined8 *)
             (**(code **)(*plVar17 + 0x858))(plVar17,*(undefined8 *)(*plVar17 + 0x860));
    if (((ulong)puVar6 & 1) != 0) {
      return puVar6;
    }
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41170);
    if ((lVar12 != 0) && (puVar6 = *(undefined8 **)(lVar12 + 0x10), puVar6 != (undefined8 *)0x0)) {
      uVar14 = 0x3eb4000;
      puVar3 = &uStack_100;
      plVar17 = (long *)0x3d41170;
      goto System_Action__Invoke;
    }
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb4960 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c0);
    bRam0000000003eb4960 = 1;
  }
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c7c0 + 0x18) + 0xc0) + 0x38))();
    return puVar6;
  }
  auVar31 = func_0x00f78af4();
  puVar11 = auVar31._8_8_;
  puVar6 = auVar31._0_8_;
  uVar8 = puVar11[1];
  uVar10 = *puVar11;
  puVar6[2] = puVar11[2];
  puVar6[1] = uVar8;
  *puVar6 = uVar10;
  return puVar6;
}



// ============================================================
// RVA: 0x148a4a8 | Atlas.UI.Screens.LobbySettingsSwitchBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_LobbySettingsSwitchBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
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



