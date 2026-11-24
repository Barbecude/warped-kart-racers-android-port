// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.GameInProgressScreen

// ============================================================
// RVA: 0x159e8d0 | Atlas.UI.Screens.GameInProgressScreen.OnPauseRequested
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */
/* WARNING: Removing unreachable block (ram,0x0149d684) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */

long Atlas_UI_Screens_GameInProgressScreen__OnPauseRequested(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  long lStack_98;
  
  if ((bRam0000000003eb5224 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5224 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41088);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar6 + 0x40) + 0x48) != '\0') {
      return lVar6;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41088);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar6 + 0x40) + 0x49) != '\0') {
        return lVar6;
      }
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41088);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
        if (*(char *)(*(long *)(lVar6 + 0x30) + 0x1b8) == '\0') {
          return lVar6;
        }
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
        if (lVar6 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$StashButtonInteractableStates*/ func_0x015ac630(lVar6,0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41088);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
            lVar6 = /*Atlas.Gameplay.PauseManager$$UserPause*/ func_0x014b6a64(*(long *)(lVar6 + 0x40),0);
            *(undefined1 *)(param_1 + 0xf4) = 1;
            return lVar6;
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x90);
  if (lVar6 != 0) {
    uVar8 = 0;
    if ((*(char *)(lVar6 + 0x48) == '\0') && (*(char *)(lVar6 + 0x49) == '\0')) {
      return lVar6;
    }
    *(undefined4 *)(lVar6 + 0x4c) = 3;
    *(undefined2 *)(lVar6 + 0x48) = 0;
    if (*(long *)(lVar6 + 0x20) != 0) {
      uVar8 = 0;
      /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar6 + 0x20),8);
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 != 0) {
        if ((bRam0000000003eb4a16 & 1) == 0) {
          func_0x00f78a20(0x3d71930,0,0);
          func_0x00f78a20(0x3d69668);
          bRam0000000003eb4a16 = 1;
        }
        lVar5 = *(long *)(lVar6 + 0x10);
        if (lVar5 == 0) {
          return 0;
        }
        uVar16 = *(undefined4 *)(lVar6 + 0x40);
        puVar7 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar6 + 0x30) != 1) {
          puVar7 = (undefined8 *)0x3d71930;
        }
        uVar8 = *puVar7;
        iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar5 + 0x28,0,0,0);
        if (iVar3 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar16,lVar5 + 0x28,uVar8,0,0);
        }
        return lVar5;
      }
    }
    auVar17 = func_0x00f78af4();
    uVar16 = 0;
    if (auVar17._8_4_ == 0) {
      uVar16 = 0x3f800000;
    }
    lVar6 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar16,0);
    lVar5 = *(long *)(auVar17._0_8_ + 0x30);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x20);
      lVar6 = 0;
      if (lVar5 != 0) {
        *(char *)(lVar5 + 0x1b8) = (char)uVar8;
        lVar6 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&stack0xffffffffffffff88,lVar5,uVar8,0);
        return lVar6;
      }
    }
    return lVar6;
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x60);
  if (lVar6 == 0) {
    return 0;
  }
  uVar8 = 0;
  lStack_98 = lVar6;
  lVar5 = *(long *)(lVar6 + 0x68);
  if (lVar5 == 0) {
    plVar15 = &lStack_98;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar5 + 0x18);
    if (lVar14 == 0) {
      return lVar6;
    }
    plVar15 = (long *)(lVar5 + 0x20);
  }
  lVar5 = 0;
  do {
    lVar9 = plVar15[lVar5];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar8);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar18 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar4 == 0) {
          uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
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
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar8 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      auVar18 = (*pcVar13)(plVar1,puVar7);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      auVar18 = (*pcVar13)(lVar9);
    }
    else {
code_r0x02924d98:
      auVar18 = (*pcVar13)(plVar1,lVar9);
    }
code_r0x02924da4:
    uVar8 = auVar18._8_8_;
    lVar5 = lVar5 + 1;
    if (lVar5 == lVar14) {
      return auVar18._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a6ca0 | Atlas.UI.Screens.GameInProgressScreen.get_ChallengeController
// ============================================================

undefined8 Atlas_UI_Screens_GameInProgressScreen__get_ChallengeController(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x15a6ca8 | Atlas.UI.Screens.GameInProgressScreen.get_FTUEScreenBehaviour
// ============================================================

ulong Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5210 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb5210 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if (lVar1 != 0) {
    return *(ulong *)(lVar1 + 0x280);
  }
  lVar1 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar1 + 0x109);
}



// ============================================================
// RVA: 0x15a6d0c | Atlas.UI.Screens.GameInProgressScreen.get_ForceHideKartIndicator
// ============================================================

undefined1 Atlas_UI_Screens_GameInProgressScreen__get_ForceHideKartIndicator(long param_1)

{
  return *(undefined1 *)(param_1 + 0x109);
}



// ============================================================
// RVA: 0x15a6d14 | Atlas.UI.Screens.GameInProgressScreen.set_ForceHideKartIndicator
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__set_ForceHideKartIndicator
               (long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x109) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a6d1c | Atlas.UI.Screens.GameInProgressScreen.get_ForceHideBattlePoints
// ============================================================

undefined1 Atlas_UI_Screens_GameInProgressScreen__get_ForceHideBattlePoints(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10a);
}



// ============================================================
// RVA: 0x15a6d24 | Atlas.UI.Screens.GameInProgressScreen.set_ForceHideBattlePoints
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__set_ForceHideBattlePoints
               (long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10a) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a6d2c | Atlas.UI.Screens.GameInProgressScreen.set_AllowUpdateProgressCount
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__set_AllowUpdateProgressCount
               (long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x108) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a6d34 | Atlas.UI.Screens.GameInProgressScreen.EnableOnAttachedUsableCTA
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__EnableOnAttachedUsableCTA
               (long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x100) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a6d3c | Atlas.UI.Screens.GameInProgressScreen.RequestUsableUIChange
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a6dc0 | Atlas.UI.Screens.GameInProgressScreen.OnBeforeEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a70e8 | Atlas.UI.Screens.GameInProgressScreen.InitArcade
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a71ac | Atlas.UI.Screens.GameInProgressScreen.OnAfterExit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a740c | Atlas.UI.Screens.GameInProgressScreen.OnEnterIntroState
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a820c | Atlas.UI.Screens.GameInProgressScreen.SetUpMiniLeaderBoard
// ============================================================

/* WARNING: Possible PIC construction at 0x015a8624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ade20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015acb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015acb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015a890c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015a86fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015a874c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015a87c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015a8700) */
/* WARNING: Removing unreachable block (ram,0x015a8708) */
/* WARNING: Removing unreachable block (ram,0x015a8910) */
/* WARNING: Removing unreachable block (ram,0x015a8920) */
/* WARNING: Removing unreachable block (ram,0x015a8928) */
/* WARNING: Removing unreachable block (ram,0x015a8940) */
/* WARNING: Removing unreachable block (ram,0x015a8970) */
/* WARNING: Removing unreachable block (ram,0x015a8978) */
/* WARNING: Removing unreachable block (ram,0x015a897c) */
/* WARNING: Removing unreachable block (ram,0x015a89a8) */
/* WARNING: Removing unreachable block (ram,0x015a89b0) */
/* WARNING: Removing unreachable block (ram,0x0159ea3c) */
/* WARNING: Removing unreachable block (ram,0x0159ea60) */
/* WARNING: Removing unreachable block (ram,0x0159ea74) */
/* WARNING: Removing unreachable block (ram,0x0159ea9c) */
/* WARNING: Removing unreachable block (ram,0x0159ea7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f3c) */
/* WARNING: Removing unreachable block (ram,0x01e47f7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f6c) */
/* WARNING: Removing unreachable block (ram,0x01e47f74) */
/* WARNING: Removing unreachable block (ram,0x01e47f84) */
/* WARNING: Removing unreachable block (ram,0x01e47f88) */
/* WARNING: Removing unreachable block (ram,0x01e47fa0) */
/* WARNING: Removing unreachable block (ram,0x01e47fa8) */
/* WARNING: Removing unreachable block (ram,0x01e47fd4) */
/* WARNING: Removing unreachable block (ram,0x01e48058) */
/* WARNING: Removing unreachable block (ram,0x01e48064) */
/* WARNING: Removing unreachable block (ram,0x01e4806c) */
/* WARNING: Removing unreachable block (ram,0x01e480e4) */
/* WARNING: Removing unreachable block (ram,0x01e48148) */
/* WARNING: Removing unreachable block (ram,0x01e480ec) */
/* WARNING: Removing unreachable block (ram,0x01e48104) */
/* WARNING: Removing unreachable block (ram,0x01e4810c) */
/* WARNING: Removing unreachable block (ram,0x01e481ec) */
/* WARNING: Removing unreachable block (ram,0x01e48118) */
/* WARNING: Removing unreachable block (ram,0x01e48124) */
/* WARNING: Removing unreachable block (ram,0x01e481fc) */
/* WARNING: Removing unreachable block (ram,0x01e48084) */
/* WARNING: Removing unreachable block (ram,0x01e48134) */
/* WARNING: Removing unreachable block (ram,0x01e48088) */
/* WARNING: Removing unreachable block (ram,0x01e4809c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Removing unreachable block (ram,0x01e481c4) */
/* WARNING: Removing unreachable block (ram,0x01e480b0) */
/* WARNING: Removing unreachable block (ram,0x01e480bc) */
/* WARNING: Removing unreachable block (ram,0x01e481d4) */
/* WARNING: Removing unreachable block (ram,0x01e481d8) */
/* WARNING: Removing unreachable block (ram,0x01e48200) */
/* WARNING: Removing unreachable block (ram,0x01e47fd8) */
/* WARNING: Removing unreachable block (ram,0x01e47fdc) */
/* WARNING: Removing unreachable block (ram,0x01e47fe8) */
/* WARNING: Removing unreachable block (ram,0x01e47ff4) */
/* WARNING: Removing unreachable block (ram,0x01e47ffc) */
/* WARNING: Removing unreachable block (ram,0x01e48160) */
/* WARNING: Removing unreachable block (ram,0x01e4820c) */
/* WARNING: Removing unreachable block (ram,0x01e48168) */
/* WARNING: Removing unreachable block (ram,0x01e48180) */
/* WARNING: Removing unreachable block (ram,0x01e48188) */
/* WARNING: Removing unreachable block (ram,0x01e48250) */
/* WARNING: Removing unreachable block (ram,0x01e48194) */
/* WARNING: Removing unreachable block (ram,0x01e481a0) */
/* WARNING: Removing unreachable block (ram,0x01e48260) */
/* WARNING: Removing unreachable block (ram,0x01e48014) */
/* WARNING: Removing unreachable block (ram,0x01e481b0) */
/* WARNING: Removing unreachable block (ram,0x01e48018) */
/* WARNING: Removing unreachable block (ram,0x01e4802c) */
/* WARNING: Removing unreachable block (ram,0x01e48034) */
/* WARNING: Removing unreachable block (ram,0x01e48228) */
/* WARNING: Removing unreachable block (ram,0x01e48040) */
/* WARNING: Removing unreachable block (ram,0x01e4804c) */
/* WARNING: Removing unreachable block (ram,0x01e48238) */
/* WARNING: Removing unreachable block (ram,0x01e4823c) */
/* WARNING: Removing unreachable block (ram,0x01e48264) */
/* WARNING: Removing unreachable block (ram,0x01e47fbc) */
/* WARNING: Removing unreachable block (ram,0x01e480c8) */
/* WARNING: Removing unreachable block (ram,0x01e47fc0) */
/* WARNING: Removing unreachable block (ram,0x01e480d4) */
/* WARNING: Removing unreachable block (ram,0x01e480e0) */
/* WARNING: Removing unreachable block (ram,0x01e48274) */
/* WARNING: Removing unreachable block (ram,0x015acb74) */
/* WARNING: Removing unreachable block (ram,0x015acba8) */
/* WARNING: Removing unreachable block (ram,0x015acbb0) */
/* WARNING: Removing unreachable block (ram,0x015acb7c) */
/* WARNING: Removing unreachable block (ram,0x015acbbc) */
/* WARNING: Removing unreachable block (ram,0x015acbc4) */
/* WARNING: Removing unreachable block (ram,0x015ad6f8) */
/* WARNING: Removing unreachable block (ram,0x015ad7a8) */
/* WARNING: Removing unreachable block (ram,0x015ad8e0) */
/* WARNING: Removing unreachable block (ram,0x015ad900) */
/* WARNING: Removing unreachable block (ram,0x015ad988) */
/* WARNING: Removing unreachable block (ram,0x015ad910) */
/* WARNING: Removing unreachable block (ram,0x015ad99c) */
/* WARNING: Removing unreachable block (ram,0x015ad9c4) */
/* WARNING: Removing unreachable block (ram,0x015ada04) */
/* WARNING: Removing unreachable block (ram,0x015ada24) */
/* WARNING: Removing unreachable block (ram,0x015adab8) */
/* WARNING: Removing unreachable block (ram,0x015ada88) */
/* WARNING: Removing unreachable block (ram,0x015ad9b0) */
/* WARNING: Removing unreachable block (ram,0x015ad958) */
/* WARNING: Removing unreachable block (ram,0x015acb44) */
/* WARNING: Removing unreachable block (ram,0x015acb84) */
/* WARNING: Removing unreachable block (ram,0x015acb8c) */
/* WARNING: Removing unreachable block (ram,0x015acb4c) */
/* WARNING: Removing unreachable block (ram,0x015acb98) */
/* WARNING: Removing unreachable block (ram,0x015acba0) */
/* WARNING: Removing unreachable block (ram,0x015acbc8) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f5d8) */
/* WARNING: Removing unreachable block (ram,0x0146f678) */
/* WARNING: Removing unreachable block (ram,0x0146f5dc) */
/* WARNING: Removing unreachable block (ram,0x018ee81c) */
/* WARNING: Removing unreachable block (ram,0x018ee830) */
/* WARNING: Removing unreachable block (ram,0x018ee838) */
/* WARNING: Removing unreachable block (ram,0x018ee84c) */
/* WARNING: Removing unreachable block (ram,0x018ee860) */
/* WARNING: Removing unreachable block (ram,0x018ee864) */
/* WARNING: Removing unreachable block (ram,0x018ee868) */
/* WARNING: Removing unreachable block (ram,0x018ee874) */
/* WARNING: Removing unreachable block (ram,0x018ee878) */
/* WARNING: Removing unreachable block (ram,0x015ad2d0) */
/* WARNING: Removing unreachable block (ram,0x015ad2ec) */
/* WARNING: Removing unreachable block (ram,0x015ad2f4) */
/* WARNING: Removing unreachable block (ram,0x015ad340) */
/* WARNING: Removing unreachable block (ram,0x015ad308) */
/* WARNING: Removing unreachable block (ram,0x015ade24) */
/* WARNING: Removing unreachable block (ram,0x015ade2c) */
/* WARNING: Removing unreachable block (ram,0x015ade4c) */
/* WARNING: Removing unreachable block (ram,0x015ade54) */
/* WARNING: Removing unreachable block (ram,0x015ade68) */
/* WARNING: Removing unreachable block (ram,0x015a8628) */
/* WARNING: Removing unreachable block (ram,0x015a8638) */
/* WARNING: Removing unreachable block (ram,0x015a8640) */
/* WARNING: Removing unreachable block (ram,0x015a8644) */
/* WARNING: Removing unreachable block (ram,0x015a864c) */
/* WARNING: Removing unreachable block (ram,0x015a8668) */
/* WARNING: Removing unreachable block (ram,0x015a866c) */
/* WARNING: Removing unreachable block (ram,0x015a8694) */
/* WARNING: Removing unreachable block (ram,0x015a8750) */
/* WARNING: Removing unreachable block (ram,0x015a8754) */
/* WARNING: Removing unreachable block (ram,0x015a8768) */
/* WARNING: Removing unreachable block (ram,0x015aca9c) */
/* WARNING: Removing unreachable block (ram,0x015acaa4) */
/* WARNING: Removing unreachable block (ram,0x015acab0) */
/* WARNING: Removing unreachable block (ram,0x015acab4) */
/* WARNING: Removing unreachable block (ram,0x015acbec) */
/* WARNING: Removing unreachable block (ram,0x015acac8) */
/* WARNING: Removing unreachable block (ram,0x015acad4) */
/* WARNING: Removing unreachable block (ram,0x015acad8) */
/* WARNING: Removing unreachable block (ram,0x015acaec) */
/* WARNING: Removing unreachable block (ram,0x015acaf4) */
/* WARNING: Removing unreachable block (ram,0x015acaf8) */
/* WARNING: Removing unreachable block (ram,0x015acb0c) */
/* WARNING: Removing unreachable block (ram,0x015acb14) */
/* WARNING: Removing unreachable block (ram,0x015acb20) */
/* WARNING: Removing unreachable block (ram,0x015acb28) */
/* WARNING: Removing unreachable block (ram,0x015acb34) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_GameInProgressScreen__SetUpMiniLeaderBoard
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined1 *param_4,
               undefined8 param_5,long *param_6)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long extraout_x1;
  undefined1 *extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 *puVar16;
  undefined1 *extraout_x1_02;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong extraout_x8;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  long *unaff_x21;
  long *plVar24;
  long *unaff_x22;
  long unaff_x23;
  long lVar25;
  long lVar26;
  dword *unaff_x25;
  dword *pdVar27;
  dword *pdVar28;
  long unaff_x27;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  float extraout_s0;
  uint uVar31;
  float fVar32;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  float fVar33;
  ulong uVar34;
  uint uVar35;
  ulong unaff_d8;
  ulong uVar36;
  uint uVar37;
  undefined8 unaff_d9;
  ulong uVar38;
  uint unaff_s10;
  undefined4 unaff_00005144;
  uint unaff_s11;
  undefined4 unaff_00005164;
  uint unaff_s12;
  undefined4 unaff_00005184;
  uint unaff_s13;
  undefined4 unaff_000051a4;
  uint unaff_s14;
  undefined4 unaff_000051c4;
  uint unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  long *plStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [64];
  
  puVar6 = (undefined8 *)auStack_a0;
  puVar5 = auStack_a0;
  pppppppuVar29 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar23 = (long *)0x3eb5000;
  if ((bRam0000000003eb5216 & 1) == 0) {
    func_0x00f78a20(0x3d20658);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d1cf20);
    func_0x00f78a20(0x3d3d1e8);
    func_0x00f78a20(0x3d3d1e0);
    func_0x00f78a20(0x3d3a650);
    func_0x00f78a20(0x3d3af30);
    func_0x00f78a20(0x3d3d1f8);
    func_0x00f78a20(0x3d3af38);
    func_0x00f78a20(0x3d1d988);
    func_0x00f78a20(0x3d1e160);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5216 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
    /*Atlas.UI.MiniLeaderboardBehaviour$$SetUpLeaderboardEntries*/ func_0x01494c34(*(long *)(lVar9 + 0x68),0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
    if (lVar9 != 0) {
      plVar23 = *(long **)(lVar9 + 0x68);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
      if ((lVar9 != 0) && (plVar23 != (long *)0x0)) {
        unaff_x22 = (long *)0x3d3a000;
        unaff_x23 = 0x3d1e000;
        unaff_x25 = (dword *)0x3d3d000;
        param_6 = (long *)0x0;
        /*Atlas.UI.MiniLeaderboardBehaviour$$ShowHitCounter*/ func_0x01494b10(plVar23,*(int *)(lVar9 + 0x290) == 1);
        uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<GameContextPlayer>_TypeInfo*/ uRam0000000003d1d988);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar10,uRam0000000003d3a650);
        *(undefined8 *)(param_4 + 0xe0) = uVar10;
        plVar23 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>_TypeInfo*/ uRam0000000003d1e160);
        /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$.ctor*/ func_0x02521484(plVar23,uRam0000000003d3d1e0);
        *(long **)(param_4 + 0xd8) = plVar23;
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
        unaff_x21 = (long *)0x3d1d000;
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
          plVar24 = (long *)0x3d41088;
          *(undefined4 *)(param_4 + 0xac) = *(undefined4 *)(*(long *)(lVar9 + 0x68) + 0x28);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41088);
          unaff_x21 = (long *)0x3d41088;
          if (lVar9 != 0) {
            *(undefined8 *)(param_4 + 0xd0) = *(undefined8 *)(lVar9 + 0x38);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
            if (((lVar9 != 0) && (unaff_x21 = plVar24, *(long *)(lVar9 + 0x68) != 0)) &&
               (lVar9 = *(long *)(*(long *)(lVar9 + 0x68) + 0x20), lVar9 != 0)) {
              plVar23 = (long *)(ulong)*(uint *)(lVar9 + 0x18);
              lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41088);
              if (((lVar9 != 0) && (*(long *)(lVar9 + 0x30) != 0)) &&
                 ((lVar9 = *(long *)(*(long *)(lVar9 + 0x30) + 0x40), lVar9 != 0 &&
                  (unaff_x21 = *(long **)(lVar9 + 0x28), unaff_x21 != (long *)0x0)))) {
                lVar9 = *unaff_x21;
                uVar21 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.ICollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1cf20) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar22 * 0x10 + 0x138);
                      goto LAB_015a8490;
                    }
                    piVar22 = piVar22 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.ICollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1cf20,0);
LAB_015a8490:
                uVar10 = (*(code *)*puVar11)(unaff_x21,puVar11[1]);
                param_6 = (long *)0x0;
                uVar7 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(plVar23,uVar10);
                *(undefined4 *)(param_4 + 0xe8) = uVar7;
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
                if (lVar9 != 0) {
                  unaff_x27 = 0;
                  unaff_x25 = &MACH_HEADER.cputype;
                  if ((*(long *)(lVar9 + 0x68) != 0) &&
                     (lVar9 = *(long *)(*(long *)(lVar9 + 0x68) + 0x20), lVar9 != 0)) {
                    unaff_x22 = (long *)0x0;
                    if (*(int *)(lVar9 + 0x18) < 1) {
                      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllMiniLeaderboardPositions*/ func_0x015a89cc(0,param_4,0);
                      return;
                    }
                    if (*(long *)(param_4 + 0xd8) != 0) {
                      if (*(int *)(*(long *)(param_4 + 0xd8) + 0x18) < *(int *)(param_4 + 0xe8)) {
                        unaff_x21 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41090);
                        plVar23 = (long *)func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
                        param_6 = unaff_x21;
                        /*Atlas.UI.CharacterMetagameData$$.ctor*/ func_0x01541218(plVar23,0,unaff_x21,0);
                        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
                        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
                          lVar9 = *(long *)(*(long *)(lVar9 + 0x68) + 0x20);
                          unaff_x21 = (long *)0x0;
                          if (lVar9 != 0) {
                            if (*(int *)(lVar9 + 0x18) == 0) {
                              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                            }
                            unaff_x21 = *(long **)(*(long *)(lVar9 + 0x10) + 0x20);
                            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
                            if (((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) &&
                               (unaff_x23 = *(long *)(*(long *)(lVar9 + 0x68) + 0x20),
                               unaff_x23 != 0)) {
                              if (*(int *)(unaff_x23 + 0x18) == 0) {
                                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                              }
                              unaff_x22 = *(long **)(*(long *)(unaff_x23 + 0x10) + 0x20);
                              lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
                              if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
                                unaff_x23 = *(long *)(*(long *)(lVar9 + 0x68) + 0x18);
                                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                param_6 = (long *)0x0;
                                iVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x22,unaff_x23);
                                if (iVar8 == 0) {
                                  if (*(long *)(param_4 + 0xd8) != 0) {
                                    if (*(int *)(*(long *)(param_4 + 0xd8) + 0x18) + 1 <
                                        *(int *)(param_4 + 0xe8)) {
                                      if ((unaff_x21 != (long *)0x0) &&
                                         (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x21,0), lVar9 != 0)) {
                                        puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                                        puVar30 = &UNK_015a8700;
                                        puVar6 = (undefined8 *)auStack_a0;
                                        goto code_r0x0322ef1c;
                                      }
                                    }
                                    else if ((unaff_x21 != (long *)0x0) &&
                                            (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x21,0), lVar9 != 0)) {
                                      puVar16 = (undefined1 *)0x0;
                                      puVar30 = &UNK_015a8750;
                                      puVar6 = (undefined8 *)auStack_a0;
                                      goto code_r0x0322ef1c;
                                    }
                                  }
                                }
                                else if (unaff_x21 != (long *)0x0) {
                                  unaff_x22 = *(long **)(param_4 + 0xd0);
                                  lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x21,0);
                                  if (lVar9 != 0) {
                                    puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                                    puVar30 = &UNK_015a8628;
                                    puVar6 = (undefined8 *)auStack_a0;
                                    goto code_r0x0322ef1c;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
                        if (((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) &&
                           (plVar23 = *(long **)(*(long *)(lVar9 + 0x68) + 0x20),
                           plVar23 != (long *)0x0)) {
                          if ((int)plVar23[3] == 0) {
                            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                          }
                          if ((*(long *)(plVar23[2] + 0x20) != 0) &&
                             (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(plVar23[2] + 0x20),0), lVar9 != 0))
                          {
                            puVar16 = (undefined1 *)0x0;
                            puVar30 = &UNK_015a87c4;
                            goto code_r0x0322ef1c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar10 = func_0x00f78af4();
  puStack_a8 = &Atlas_UI_Screens_GameInProgressScreen__SetFrenzy;
  pppppppuStack_b0 = pppppppuVar29;
  if ((bRam0000000003eb5229 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb5229 = 1;
  }
  plVar24 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
  if (plVar24 != (long *)0x0) {
    uVar21 = extraout_d0_00 & 0xffffffff;
    uVar19 = 0;
    uVar10 = 0x3d41080;
    puVar16 = extraout_x1_00;
    pppppppuVar29 = pppppppuStack_b0;
    puVar30 = puStack_a8;
    do {
      uVar37 = (uint)param_3;
      uVar35 = (uint)param_2;
      puVar3 = puVar5 + -0x50;
      *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
      *(ulong *)(puVar5 + -0x38) = unaff_d8;
      *(long **)(puVar5 + -0x30) = unaff_x22;
      *(long **)(puVar5 + -0x28) = unaff_x21;
      *(long **)(puVar5 + -0x20) = plVar23;
      *(undefined1 **)(puVar5 + -0x18) = param_4;
      *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar29;
      *(undefined **)(puVar5 + -8) = puVar30;
      pppppppuVar29 = (undefined8 *******)(puVar5 + -0x10);
      uVar20 = uVar21 & 0xffffffff;
      *(int *)(puVar5 + -0x44) = (int)param_6;
      if ((bRam0000000003eb523f & 1) == 0) {
        func_0x00f78a20(0x3d790e8);
        bRam0000000003eb523f = 1;
      }
      *(undefined4 *)((long)plVar24 + 0x2ac) = 0;
      *(int *)(plVar24 + 0x56) = (int)uVar21;
      plVar13 = (long *)0x3eb5000;
      if (plVar24[0x46] != 0) {
        lVar9 = 0x220;
        if ((int)puVar16 == 0) {
          lVar9 = 0x218;
        }
        param_6 = (long *)0x0;
        /*Core.UI2.UISlantElement$$set_sprite*/ func_0x02f8b070(plVar24[0x46],*(undefined8 *)((long)plVar24 + lVar9));
        unaff_x21 = (long *)plVar24[0x42];
        uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar5 + -0x44,0);
        plVar13 = unaff_x21;
        if (unaff_x21 != (long *)0x0) {
          param_6 = *(long **)(*unaff_x21 + 0x560);
          (**(code **)(*unaff_x21 + 0x558))(unaff_x21,uVar15);
          lVar9 = plVar24[0x41];
          if (lVar9 != 0) {
            puVar30 = &UNK_015ade24;
            puVar6 = (undefined8 *)(puVar5 + -0x50);
            param_4 = puVar16;
            plVar23 = plVar24;
            goto code_r0x0322ef1c;
          }
        }
      }
      auVar1._8_8_ = plVar13;
      auVar1._0_8_ = puVar16;
      puVar30 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__AnimateUsables;
      auVar40 = func_0x00f78af4();
      plVar23 = auVar40._0_8_;
      iVar8 = (int)uVar19;
      plVar18 = param_6;
      auVar39 = auVar40;
      if (iVar8 == 2) {
Atlas_UI_Screens_GameInProgressScreenBehaviour__UsablesChanged:
        plVar13 = auVar39._8_8_;
        puVar16 = auVar39._0_8_;
        *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
        *(ulong *)(puVar3 + -0x48) = uVar20;
        *(undefined8 *)(puVar3 + -0x40) = uVar10;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long **)(puVar3 + -0x30) = unaff_x22;
        *(long *)(puVar3 + -0x28) = auVar1._8_8_;
        *(long **)(puVar3 + -0x20) = plVar24;
        *(long *)(puVar3 + -0x18) = auVar1._0_8_;
        *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar29;
        *(undefined **)(puVar3 + -8) = puVar30;
        pppppppuVar29 = (undefined8 *******)(puVar3 + -0x10);
        unaff_x23 = 0x3d27778;
        param_6 = plVar18;
        if ((bRam0000000003eb5241 & 1) == 0) {
          func_0x00f78a20(0x3d1fa78);
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d62ef8);
          func_0x00f78a20(0x3d27778);
          bRam0000000003eb5241 = 1;
        }
        plVar24 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.GameInProgressScreenBehaviour.<>c__DisplayClass180_0_TypeInfo*/ uRam0000000003d27778);
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour.<>c__DisplayClass180_0$$.ctor*/ func_0x01554b00(plVar24,0);
        if (plVar24 != (long *)0x0) {
          plVar24[2] = (long)puVar16;
          *(int *)(plVar24 + 3) = (int)plVar18;
          *(int *)((long)plVar24 + 0x1c) = auVar39._8_4_;
          if (*(long *)(puVar16 + 0x178) != 0) {
            plVar18 = (long *)0x3d20000;
            plVar13 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(puVar16 + 0x178),0);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            param_6 = (long *)0x0;
            /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(plVar13,0);
            if (*(long *)(puVar16 + 0x178) != 0) {
              plVar18 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(puVar16 + 0x178),0);
              uVar35 = *(uint *)(puVar16 + 0x19c);
              uVar37 = *(uint *)(puVar16 + 0x198);
              lVar14 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar14,plVar24,uRam0000000003d62ef8,0);
              uVar21 = (ulong)_UNK_033f875c;
              uVar20 = 0;
              uVar34 = (ulong)uVar35;
              pppppppuVar29 = *(undefined8 ********)(puVar3 + -0x10);
              puVar30 = *(undefined **)(puVar3 + -8);
              plVar24 = *(long **)(puVar3 + -0x20);
              plVar23 = *(long **)(puVar3 + -0x18);
              lVar9 = *(long *)(puVar3 + -0x30);
              uVar19 = *(undefined8 *)(puVar3 + -0x28);
              uVar10 = *(undefined8 *)(puVar3 + -0x40);
              unaff_x23 = *(long *)(puVar3 + -0x38);
              uVar38 = *(ulong *)(puVar3 + -0x50);
              uVar36 = *(ulong *)(puVar3 + -0x48);
              lVar12 = 0;
              uVar15 = 0;
              goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
            }
          }
        }
        puVar30 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerDetachedUsable;
        auVar41 = func_0x00f78af4();
        plVar23 = auVar41._0_8_;
        if ((char)plVar23[0x59] == '\0') {
          return;
        }
        puVar2 = puVar3 + -0x50;
        unaff_x22 = plVar18;
        if (auVar41._8_4_ != 0) {
          *(undefined8 *)(puVar3 + -0x90) = uVar10;
          *(undefined8 *)(puVar3 + -0x88) = 0x3d27778;
          *(long **)(puVar3 + -0x80) = plVar18;
          *(long **)(puVar3 + -0x78) = plVar13;
          *(long **)(puVar3 + -0x70) = plVar24;
          *(undefined1 **)(puVar3 + -0x68) = puVar16;
          *(undefined8 ********)(puVar3 + -0x60) = pppppppuVar29;
          *(undefined **)(puVar3 + -0x58) =
               &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerDetachedUsable;
          pppppppuVar29 = (undefined8 *******)(puVar3 + -0x60);
          unaff_x21 = (long *)0x0;
          param_4 = (undefined1 *)0x0;
          if ((bRam0000000003eb523b & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb523b = 1;
          }
          if ((plVar23[0x2d] == 0) || (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar23[0x2d],0), lVar9 == 0)) {
            lVar9 = func_0x00f78af4();
            *(undefined8 *)(puVar3 + -0xc0) = 0;
            *(undefined8 *)(puVar3 + -0xb8) = 0;
            *(long **)(puVar3 + -0xb0) = plVar23;
            *(undefined8 *)(puVar3 + -0xa8) = 0;
            *(undefined8 ********)(puVar3 + -0xa0) = pppppppuVar29;
            *(undefined **)(puVar3 + -0x98) =
                 &Atlas_UI_Screens_GameInProgressScreenBehaviour__InitUsableIcons;
            if ((bRam0000000003eb5238 & 1) == 0) {
              func_0x00f78a20(0x3d3bf48);
              func_0x00f78a20(0x3d1de20);
              bRam0000000003eb5238 = 1;
            }
            *(undefined4 *)(lVar9 + 0x2a4) = 0;
            uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<Sprite>_TypeInfo*/ uRam0000000003d1de20);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar10,uRam0000000003d3bf48);
            *(undefined8 *)(lVar9 + 0x298) = uVar10;
            return;
          }
          puVar16 = (undefined1 *)0x0;
          puVar30 = &UNK_015acb74;
          puVar6 = (undefined8 *)(puVar3 + -0x90);
          unaff_x22 = (long *)0x0;
          goto code_r0x0322ef1c;
        }
      }
      else {
        puVar2 = puVar5 + -0x50;
        if (iVar8 != 1) {
          if (iVar8 != 0) {
            return;
          }
          uVar19 = 1;
          puVar4 = puVar5 + -0x90;
          puVar3 = puVar5 + -0x90;
          *(undefined8 *)(puVar5 + -0x90) = uVar10;
          *(long *)(puVar5 + -0x88) = unaff_x23;
          *(long **)(puVar5 + -0x80) = unaff_x22;
          *(long **)(puVar5 + -0x78) = plVar13;
          *(long **)(puVar5 + -0x70) = plVar24;
          *(undefined1 **)(puVar5 + -0x68) = puVar16;
          *(undefined8 ********)(puVar5 + -0x60) = pppppppuVar29;
          *(undefined **)(puVar5 + -0x58) =
               &Atlas_UI_Screens_GameInProgressScreenBehaviour__AnimateUsables;
          pppppppuVar29 = (undefined8 *******)(puVar5 + -0x60);
          plVar24 = (long *)((long)&MACH_HEADER.magic + 1);
          unaff_x23 = 0x3eb5000;
          if ((bRam0000000003eb5240 & 1) == 0) {
            func_0x00f78a20(0x3d53528);
            func_0x00f78a20(0x3d20bc0);
            bRam0000000003eb5240 = 1;
          }
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$ResetUsableIconPositions*/ func_0x015acf54(plVar23);
          if (plVar23[0x2f] != 0) {
            uVar10 = 0x3d20000;
            unaff_x23 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar23[0x2f],0);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar18 = (long *)0x0;
            /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(unaff_x23,0);
            if (plVar23[0x2f] != 0) {
              plVar13 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar23[0x2f],0);
              uVar31 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
              unaff_x23 = 0;
              if (plVar13 != (long *)0x0) {
                puVar30 = &UNK_015ad2d0;
                goto code_r0x03275bf0;
              }
            }
          }
          puVar30 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerUsedUsable;
          auVar39 = func_0x00f78af4();
          unaff_x22 = param_6;
          auVar1 = auVar40;
          if (*(char *)(auVar39._0_8_ + 0x2c8) == '\0') {
            return;
          }
          goto Atlas_UI_Screens_GameInProgressScreenBehaviour__UsablesChanged;
        }
      }
      puVar3 = puVar2;
      *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
      *(ulong *)(puVar3 + -0x38) = uVar20;
      *(long **)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = plVar13;
      *(long **)(puVar3 + -0x20) = plVar24;
      *(undefined1 **)(puVar3 + -0x18) = puVar16;
      *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar29;
      *(undefined **)(puVar3 + -8) = puVar30;
      uVar15 = 0x3eb5000;
      if ((bRam0000000003eb5242 & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d57648);
        bRam0000000003eb5242 = 1;
      }
      if (plVar23[0x2f] != 0) {
        plVar13 = (long *)0x3d20000;
        uVar15 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar23[0x2f],0);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_6 = (long *)0x0;
        /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar15,0);
        if (plVar23[0x2f] != 0) {
          plVar18 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar23[0x2f],0);
          uVar35 = *(uint *)((long)plVar23 + 0x19c);
          uVar37 = *(uint *)(plVar23 + 0x33);
          lVar14 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar14,plVar23,uRam0000000003d57648,0);
          uVar21 = (ulong)_UNK_033f875c;
          uVar20 = 0;
          uVar34 = (ulong)uVar35;
          pppppppuVar29 = *(undefined8 ********)(puVar3 + -0x10);
          puVar30 = *(undefined **)(puVar3 + -8);
          plVar24 = *(long **)(puVar3 + -0x20);
          plVar23 = *(long **)(puVar3 + -0x18);
          lVar9 = *(long *)(puVar3 + -0x30);
          uVar19 = *(undefined8 *)(puVar3 + -0x28);
          uVar38 = *(ulong *)(puVar3 + -0x40);
          uVar36 = *(ulong *)(puVar3 + -0x38);
          lVar12 = 0;
          uVar15 = 0;
          goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
        }
      }
      auVar39 = func_0x00f78af4();
      unaff_x21 = auVar39._8_8_;
      param_4 = auVar39._0_8_;
      *(long **)(puVar3 + -0x70) = unaff_x22;
      *(long **)(puVar3 + -0x68) = plVar13;
      *(undefined8 *)(puVar3 + -0x60) = uVar15;
      *(long **)(puVar3 + -0x58) = plVar23;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x48) =
           &Atlas_UI_Screens_GameInProgressScreenBehaviour__SetUsableQuantityText;
      pppppppuVar29 = (undefined8 *******)(puVar3 + -0x50);
      if ((bRam0000000003eb523c & 1) == 0) {
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d7d030);
        bRam0000000003eb523c = 1;
      }
      plVar23 = *(long **)(param_4 + 0x158);
      if (auVar39._8_4_ < 2) {
        if ((plVar23 != (long *)0x0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar23,0), lVar9 != 0)) {
          puVar16 = (undefined1 *)0x0;
          pppppppuVar29 = *(undefined8 ********)(puVar3 + -0x50);
          puVar30 = *(undefined **)(puVar3 + -0x48);
          plVar23 = *(long **)(puVar3 + -0x60);
          param_4 = *(undefined1 **)(puVar3 + -0x58);
          unaff_x21 = *(long **)(puVar3 + -0x68);
          puVar6 = (undefined8 *)(puVar3 + -0x40);
          unaff_x22 = *(long **)(puVar3 + -0x70);
          goto code_r0x0322ef1c;
        }
      }
      else {
        unaff_x22 = (long *)0x3d7d000;
        *(int *)(puVar3 + -0x74) = auVar39._8_4_;
        uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar3 + -0x74);
        param_6 = (long *)0x0;
        uVar15 = /*System.String$$Format*/ func_0x029bc688(/*STR('{0}x')*/ uRam0000000003d7d030,uVar15);
        if (plVar23 != (long *)0x0) {
          param_6 = *(long **)(*plVar23 + 0x560);
          (**(code **)(*plVar23 + 0x558))(plVar23,uVar15);
          if ((*(long *)(param_4 + 0x158) != 0) &&
             (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x158),0), lVar9 != 0)) {
            puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            puVar30 = &UNK_015ad6f8;
            puVar6 = (undefined8 *)(puVar3 + -0x80);
            goto code_r0x0322ef1c;
          }
        }
      }
      lVar9 = func_0x00f78af4();
      *(undefined8 *)(puVar3 + -0xb0) = unaff_d9;
      *(ulong *)(puVar3 + -0xa8) = uVar20;
      *(long **)(puVar3 + -0xa0) = plVar23;
      *(undefined1 **)(puVar3 + -0x98) = param_4;
      *(undefined8 ********)(puVar3 + -0x90) = pppppppuVar29;
      *(undefined **)(puVar3 + -0x88) = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnUpdate;
      unaff_d8 = extraout_d0_01 & 0xffffffff;
      if (0 < *(int *)(lVar9 + 0x2a0)) {
        fVar32 = (float)extraout_d0_01 * 1000.0;
        fVar33 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar33 = fVar32;
        }
        param_6 = (long *)0x0;
        uVar7 = /*UnityEngine.Mathf$$Max*/ func_0x0323cd04(*(int *)(lVar9 + 0x2a0) - (int)fVar33,0);
        *(undefined4 *)(lVar9 + 0x2a0) = uVar7;
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_01 & 0xffffffff,lVar9,*(undefined8 *)(lVar9 + 0x170));
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_01 & 0xffffffff,lVar9,*(undefined8 *)(lVar9 + 0x178));
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_01 & 0xffffffff,lVar9,*(undefined8 *)(lVar9 + 0x180));
      }
      *(undefined8 *)(puVar3 + -0xe0) = unaff_d9;
      *(ulong *)(puVar3 + -0xd8) = unaff_d8;
      *(long **)(puVar3 + -0xd0) = plVar23;
      *(long *)(puVar3 + -200) = lVar9;
      *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x90;
      *(undefined **)(puVar3 + -0xb8) = &UNK_015ad7a8;
      plVar23 = (long *)0x3eb5000;
      if ((bRam0000000003eb523e & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb523e = 1;
      }
      param_3 = (ulong)(uint)*(float *)(lVar9 + 0x240);
      fVar33 = *(float *)(lVar9 + 0x2b0) - *(float *)(lVar9 + 0x240);
      param_2 = (ulong)(uint)fVar33;
      if (*(float *)(lVar9 + 0x2ac) < fVar33) {
        return;
      }
      if (*(long *)(lVar9 + 0x238) != 0) {
        iVar8 = /*UnityEngine.AnimationCurve$$get_length*/ func_0x03217f64(*(long *)(lVar9 + 0x238),0);
        if (iVar8 < 2) {
          return;
        }
        plVar23 = *(long **)(lVar9 + 0x238);
        if (plVar23 != (long *)0x0) {
          param_2 = 0x3f800000;
          _fmodf(*(undefined4 *)(lVar9 + 0x2ac));
          uVar35 = /*UnityEngine.AnimationCurve$$Evaluate*/ func_0x03217a8c(plVar23,0);
          if (*(long *)(lVar9 + 0x90) != 0) {
            unaff_d8 = (ulong)uVar35;
            plVar13 = (long *)/*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar9 + 0x90),uRam0000000003d578e0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar13,0);
            if (iVar8 == 0) {
              return;
            }
            lVar9 = 0;
            if (plVar13 != (long *)0x0) {
              uVar37 = 0;
              pppppppuVar29 = *(undefined8 ********)(puVar3 + -0xc0);
              puVar30 = *(undefined **)(puVar3 + -0xb8);
              plVar24 = *(long **)(puVar3 + -0xd0);
              plVar23 = *(long **)(puVar3 + -200);
              puVar4 = puVar3 + -0xb0;
              uVar31 = uVar35;
              goto code_r0x03275bf0;
            }
          }
        }
      }
      param_4 = (undefined1 *)func_0x00f78af4();
      puVar5 = puVar3 + -0x120;
      *(undefined8 *)(puVar3 + -0x120) = unaff_d9;
      *(ulong *)(puVar3 + -0x118) = unaff_d8;
      *(long **)(puVar3 + -0x110) = unaff_x22;
      *(long **)(puVar3 + -0x108) = unaff_x21;
      *(long **)(puVar3 + -0x100) = plVar23;
      *(long *)(puVar3 + -0xf8) = lVar9;
      *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xc0;
      *(undefined **)(puVar3 + -0xe8) =
           &Atlas_UI_Screens_GameInProgressScreenBehaviour__UpdateFrenzyVignette;
      pppppppuVar29 = (undefined8 *******)(puVar3 + -0xf0);
      if (*(long *)(param_4 + 0x248) == 0) {
code_r0x015add60:
        func_0x00f78af4();
      }
      else {
        unaff_d8 = extraout_d0_02 & 0xffffffff;
        iVar8 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(*(long *)(param_4 + 0x248),0);
        if (iVar8 == 0) {
          return;
        }
        if (param_4[0x2a8] != '\0') {
          if (*(long *)(param_4 + 600) != 0) {
            iVar8 = /*UnityEngine.AnimationCurve$$get_length*/ func_0x03217f64(*(long *)(param_4 + 600),0);
            if (iVar8 < 2) {
              return;
            }
            lVar9 = *(long *)(param_4 + 600);
            plVar23 = (long *)0x0;
            if (lVar9 != 0) {
              param_2 = (ulong)*(uint *)(param_4 + 0x2b4);
              _fmodf(*(undefined4 *)(param_4 + 0x2ac));
              uVar7 = /*UnityEngine.AnimationCurve$$Evaluate*/ func_0x03217a8c(lVar9,0);
              *(undefined4 *)(param_4 + 0x26c) = uVar7;
              plVar23 = *(long **)(param_4 + 0x250);
              if (plVar23 != (long *)0x0) {
                uVar37 = *(uint *)(plVar23 + 3);
                if ((int)uVar37 < 1) {
                  return;
                }
                unaff_x21 = (long *)0x0;
                while (uVar35 = (uint)unaff_x21, uVar35 < uVar37) {
                  plVar24 = (long *)plVar23[(long)(int)uVar35 + 4];
                  if (plVar24 == (long *)0x0) goto code_r0x015add60;
                  param_3 = (ulong)*(uint *)(param_4 + 0x268);
                  param_2 = (ulong)*(uint *)(param_4 + 0x264);
                  (**(code **)(*plVar24 + 0x2a8))
                            (*(undefined4 *)(param_4 + 0x260),param_2,param_3,
                             *(undefined4 *)(param_4 + 0x26c),plVar24,
                             *(undefined8 *)(*plVar24 + 0x2b0));
                  unaff_x21 = (long *)(ulong)(uVar35 + 1);
                  uVar37 = *(uint *)(plVar23 + 3);
                  if ((int)uVar37 <= (int)(uVar35 + 1)) {
                    return;
                  }
                }
                goto code_r0x015add64;
              }
            }
          }
          goto code_r0x015add60;
        }
        if (*(float *)(param_4 + 0x26c) < 0.0) {
          lVar9 = *(long *)(param_4 + 0x248);
          if (lVar9 == 0) goto code_r0x015add60;
          puVar16 = (undefined1 *)0x0;
          pppppppuVar29 = *(undefined8 ********)(puVar3 + -0xf0);
          puVar30 = *(undefined **)(puVar3 + -0xe8);
          plVar23 = *(long **)(puVar3 + -0x100);
          param_4 = *(undefined1 **)(puVar3 + -0xf8);
          unaff_x21 = *(long **)(puVar3 + -0x108);
          puVar6 = (undefined8 *)(puVar3 + -0xe0);
          unaff_x22 = *(long **)(puVar3 + -0x110);
          goto code_r0x0322ef1c;
        }
        param_2 = 0;
        uVar7 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(*(float *)(param_4 + 0x26c) - (float)extraout_d0_02,0);
        *(undefined4 *)(param_4 + 0x26c) = uVar7;
        plVar23 = *(long **)(param_4 + 0x250);
        if (plVar23 == (long *)0x0) goto code_r0x015add60;
        uVar37 = *(uint *)(plVar23 + 3);
        if ((int)uVar37 < 1) {
          return;
        }
        unaff_x21 = (long *)0x0;
        while (uVar35 = (uint)unaff_x21, uVar35 < uVar37) {
          plVar24 = (long *)plVar23[(long)(int)uVar35 + 4];
          if (plVar24 == (long *)0x0) goto code_r0x015add60;
          param_3 = (ulong)*(uint *)(param_4 + 0x268);
          param_2 = (ulong)*(uint *)(param_4 + 0x264);
          (**(code **)(*plVar24 + 0x2a8))
                    (*(undefined4 *)(param_4 + 0x260),param_2,param_3,
                     *(undefined4 *)(param_4 + 0x26c),plVar24,*(undefined8 *)(*plVar24 + 0x2b0));
          unaff_x21 = (long *)(ulong)(uVar35 + 1);
          uVar37 = *(uint *)(plVar23 + 3);
          if ((int)uVar37 <= (int)(uVar35 + 1)) {
            return;
          }
        }
      }
code_r0x015add64:
      uVar15 = func_0x00f78b24();
      puVar30 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__SetFrenzy;
      plVar24 = (long *)func_0x00f78ac0(uVar15,0);
      puVar16 = extraout_x1_02;
      uVar21 = extraout_d0_03;
    } while( true );
  }
  param_4 = (undefined1 *)func_0x00f78af4();
  uStack_130 = 0x3d41080;
  uStack_128 = 0x3d41080;
  uStack_120 = 0x3eb5000;
  puStack_f8 = &Atlas_UI_Screens_GameInProgressScreen__OnEnterInProgressState;
  pppppppuVar29 = &pppppppuStack_100;
  unaff_x21 = (long *)0x3eb5000;
  plVar23 = (long *)0x3d41080;
  uStack_118 = uVar10;
  puStack_110 = extraout_x1_00;
  plStack_108 = param_6;
  pppppppuStack_100 = &pppppppuStack_b0;
  if ((bRam0000000003eb5215 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d798d8);
    bRam0000000003eb5215 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
  if ((lVar9 == 0) || (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 == 0)) {
    lVar9 = func_0x00f78af4();
    if ((bRam0000000003eb5217 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d3a678);
      func_0x00f78a20(0x3d3d1f8);
      func_0x00f78a20(0x3d3d200);
      func_0x00f78a20(0x3d3a680);
      func_0x00f78a20(0x3d3d208);
      func_0x00f78a20(0x3d41080);
      func_0x00f78a20(0x3d41088);
      func_0x00f78a20(0x3d41090);
      bRam0000000003eb5217 = 1;
    }
    lStack_1e8 = 0;
    lStack_1f0 = 0;
    lStack_1d8 = 0;
    lStack_1e0 = 0;
    fVar33 = *(float *)(lVar9 + 0xac) + extraout_s0;
    *(float *)(lVar9 + 0xac) = fVar33;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x68) != 0)) {
      if (fVar33 < *(float *)(*(long *)(lVar12 + 0x68) + 0x28)) {
        return;
      }
      *(undefined4 *)(lVar9 + 0xac) = 0;
      uVar35 = *(uint *)(lVar9 + 0xe8);
      uVar37 = uVar35;
      if (-1 < (int)(uVar35 - 1)) {
        uVar37 = uVar35 - 1;
      }
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,uRam0000000003d41088);
      if (((lVar12 != 0) && (*(long *)(lVar12 + 0x30) != 0)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x40), lVar12 != 0)) {
        /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetHigherAndLowerPositionedPlayers*/ func_0x015a6890(lVar12,*(undefined8 *)(lVar9 + 0xd0),(~uVar35 & 1) + ((int)uVar37 >> 1),
                        (int)uVar37 >> 1,*(undefined8 *)(lVar9 + 0xe0));
        unaff_x27 = *(long *)(lVar9 + 0xe0);
        if (unaff_x27 != 0) {
          uVar21 = 0;
          pdVar28 = (dword *)0x3d3d208;
          pdVar27 = (dword *)0x3d3d208;
          while( true ) {
            uVar20 = (ulong)(int)*(uint *)(unaff_x27 + 0x18);
            if ((long)uVar20 <= (long)uVar21) goto code_r0x015a8c48;
            if (*(uint *)(unaff_x27 + 0x18) <= uVar21) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar12 = *(long *)(lVar9 + 0xd8);
            unaff_x25 = pdVar28;
            if (lVar12 == 0) break;
            uVar37 = 0;
            lVar25 = *(long *)(*(long *)(unaff_x27 + 0x10) + uVar21 * 8 + 0x20);
            lVar14 = 0x20;
            while ((int)uVar37 < (int)*(uint *)(lVar12 + 0x18)) {
              if (*(uint *)(lVar12 + 0x18) <= uVar37) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (lVar25 == *(long *)(*(long *)(lVar12 + 0x10) + lVar14)) {
                lVar12 = *(long *)(lVar9 + 0xd8);
                unaff_x25 = pdVar27;
                if (lVar12 == 0) goto code_r0x015a8c44;
                lVar25 = lVar12;
                if (*(uint *)(lVar12 + 0x18) <= uVar21) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  lVar25 = *(long *)(lVar9 + 0xd8);
                }
                lVar12 = *(long *)(lVar12 + 0x10) + uVar21 * 0x20;
                lStack_1e8 = *(long *)(lVar12 + 0x28);
                lStack_1f0 = *(long *)(lVar12 + 0x20);
                lStack_1d8 = *(long *)(lVar12 + 0x38);
                lStack_1e0 = *(long *)(lVar12 + 0x30);
                if (lVar25 == 0) goto code_r0x015a8c44;
                if (*(uint *)(lVar25 + 0x18) <= uVar37) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                plVar23 = (long *)(*(long *)(lVar25 + 0x10) + lVar14);
                lStack_208 = plVar23[1];
                lStack_210 = *plVar23;
                lStack_1f8 = plVar23[3];
                lStack_200 = plVar23[2];
                lStack_1d0 = lStack_210;
                lStack_1c8 = lStack_208;
                lStack_1c0 = lStack_200;
                lStack_1b8 = lStack_1f8;
                /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar25,uVar21,&lStack_1d0,uRam0000000003d3d208);
                if (*(long *)(lVar9 + 0xd8) == 0) goto code_r0x015a8c44;
                lStack_1c8 = lStack_1e8;
                lStack_1d0 = lStack_1f0;
                lStack_1b8 = lStack_1d8;
                lStack_1c0 = lStack_1e0;
                /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(*(long *)(lVar9 + 0xd8),uVar37,&lStack_1d0,uRam0000000003d3d208);
                break;
              }
              uVar37 = uVar37 + 1;
              lVar12 = *(long *)(lVar9 + 0xd8);
              lVar14 = lVar14 + 0x20;
              if (lVar12 == 0) goto code_r0x015a8c44;
            }
            uVar21 = uVar21 + 1;
            unaff_x27 = *(long *)(lVar9 + 0xe0);
            unaff_x25 = pdVar27;
            if (unaff_x27 == 0) break;
          }
        }
      }
    }
code_r0x015a8c44:
    pdVar28 = unaff_x25;
    func_0x00f78af4();
    uVar20 = extraout_x8;
code_r0x015a8c48:
    if ((int)uVar20 < 1) {
      return;
    }
    uVar37 = 0;
    do {
      if ((uint)uVar20 <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(lVar9 + 0xd8);
      unaff_x25 = pdVar28;
      if (lVar12 == 0) goto code_r0x015a8c44;
      unaff_x27 = *(long *)(*(long *)(unaff_x27 + 0x10) + (long)(int)uVar37 * 8 + 0x20);
      if (*(uint *)(lVar12 + 0x18) <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar14 = (long)(int)uVar37;
      if (unaff_x27 != *(long *)(*(long *)(lVar12 + 0x10) + lVar14 * 0x20 + 0x20)) {
        lVar12 = *(long *)(lVar9 + 0xd8);
        if (lVar12 == 0) goto code_r0x015a8c44;
        lVar25 = lVar12;
        if (*(uint *)(lVar12 + 0x18) <= uVar37) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar25 = *(long *)(lVar9 + 0xd8);
          if (lVar25 == 0) goto code_r0x015a8c44;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + lVar14 * 0x20 + 0x20);
        lVar12 = lVar25;
        if (*(uint *)(lVar25 + 0x18) <= uVar37) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar12 = *(long *)(lVar9 + 0xd8);
          if (lVar12 == 0) goto code_r0x015a8c44;
        }
        lVar26 = *(long *)(*(long *)(lVar25 + 0x10) + lVar14 * 0x20 + 0x30);
        lVar25 = lVar12;
        if (*(uint *)(lVar12 + 0x18) <= uVar37) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar25 = *(long *)(lVar9 + 0xd8);
          if (lVar25 == 0) goto code_r0x015a8c44;
        }
        lStack_1c8 = *(long *)(*(long *)(lVar12 + 0x10) + lVar14 * 0x20 + 0x28);
        lStack_1b8 = -1;
        lStack_1d0 = unaff_x27;
        lStack_1c0 = lVar26;
        /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar25,uVar37,&lStack_1d0,*(undefined8 *)pdVar28);
        uVar21 = /*Atlas.UI.Screens.GameInProgressScreen$$IsPlayerOnLeaderBoard*/ func_0x015a8fbc(lVar9,uVar10);
        if ((uVar21 & 1) == 0) {
          lVar12 = *(long *)(lVar9 + 0xd8);
          if (lVar12 == 0) goto code_r0x015a8c44;
          if (*(uint *)(lVar12 + 0x18) <= uVar37) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + lVar14 * 0x20 + 0x28);
          if (lVar12 == 0) goto code_r0x015a8c44;
          /*Atlas.UI.LeaderboardEntryBehaviour$$KillTweens*/ func_0x015ecac0(lVar12,0);
        }
      }
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar25 = *(long *)(lVar9 + 0xd8), lVar25 == 0)) goto code_r0x015a8c44;
      lVar12 = *(long *)(lVar12 + 0x68);
      if (*(uint *)(lVar25 + 0x18) <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (lVar12 == 0) goto code_r0x015a8c44;
      /*Atlas.UI.MiniLeaderboardBehaviour$$SetPositionBehaviourOrder*/ func_0x01494ad4(lVar12,*(undefined8 *)(*(long *)(lVar25 + 0x10) + lVar14 * 0x20 + 0x28),uVar37
                      ,0);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41090);
      if (((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) ||
         (lVar25 = *(long *)(lVar9 + 0xd8), lVar25 == 0)) goto code_r0x015a8c44;
      lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10);
      if (*(uint *)(lVar25 + 0x18) <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0x10) + lVar14 * 0x20 + 0x20);
      if ((lVar25 == 0) || (lVar12 == 0)) goto code_r0x015a8c44;
      uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(lVar25 + 0x28),uRam0000000003d57270);
      lVar12 = *(long *)(lVar9 + 0xd8);
      if (lVar12 == 0) goto code_r0x015a8c44;
      if (*(uint *)(lVar12 + 0x18) <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (((unaff_x27 == 0) || (lVar25 = *(long *)(unaff_x27 + 0x10), lVar25 == 0)) ||
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + lVar14 * 0x20 + 0x30), lVar12 == 0))
      goto code_r0x015a8c44;
      uStack_228 = *(undefined8 *)(lVar25 + 0x50);
      uStack_230 = *(undefined8 *)(lVar25 + 0x48);
      uStack_218 = *(undefined8 *)(lVar25 + 0x60);
      uStack_220 = *(undefined8 *)(lVar25 + 0x58);
      /*Atlas.UI.CharacterMetagameData$$UpdateDefinitionAndPlayer*/ func_0x015413f8(lVar12,uVar10,&uStack_230,0);
      lVar12 = *(long *)(lVar9 + 0xd8);
      if (lVar12 == 0) goto code_r0x015a8c44;
      lVar25 = lVar12;
      if (*(uint *)(lVar12 + 0x18) <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar25 = *(long *)(lVar9 + 0xd8);
      }
      lVar12 = *(long *)(lVar12 + 0x10) + lVar14 * 0x20;
      uStack_248 = *(undefined8 *)(lVar12 + 0x28);
      uStack_250 = *(undefined8 *)(lVar12 + 0x20);
      uStack_238 = *(undefined8 *)(lVar12 + 0x38);
      uStack_240 = *(undefined8 *)(lVar12 + 0x30);
      if (lVar25 == 0) goto code_r0x015a8c44;
      if (*(uint *)(lVar25 + 0x18) <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uStack_268 = uStack_248;
      uStack_270 = uStack_250;
      uStack_258 = uStack_238;
      uStack_260 = uStack_240;
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdatePlayerPositionBehaviour*/ func_0x015a90dc(lVar9,&uStack_270,
                      *(undefined8 *)(*(long *)(lVar25 + 0x10) + lVar14 * 0x20 + 0x30),
                      extraout_x1_01);
      lVar12 = *(long *)(lVar9 + 0xd8);
      if (lVar12 == 0) goto code_r0x015a8c44;
      lVar25 = lVar12;
      if (*(uint *)(lVar12 + 0x18) <= uVar37) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar25 = *(long *)(lVar9 + 0xd8);
      }
      if (lVar25 == 0) goto code_r0x015a8c44;
      lVar12 = *(long *)(lVar12 + 0x10) + lVar14 * 0x20;
      lStack_1b8 = *(long *)(unaff_x27 + 0x74);
      lStack_1c8 = *(long *)(lVar12 + 0x28);
      lStack_1d0 = *(long *)(lVar12 + 0x20);
      lStack_1c0 = *(long *)(lVar12 + 0x30);
      /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar25,uVar37,&lStack_1d0,*(undefined8 *)pdVar28);
      unaff_x27 = *(long *)(lVar9 + 0xe0);
      if (unaff_x27 == 0) goto code_r0x015a8c44;
      uVar37 = uVar37 + 1;
      uVar20 = (ulong)*(uint *)(unaff_x27 + 0x18);
      if ((int)*(uint *)(unaff_x27 + 0x18) <= (int)uVar37) {
        return;
      }
    } while( true );
  }
  puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar30 = &UNK_015a8910;
  puVar6 = &uStack_130;
  unaff_x22 = (long *)0x3eb5000;
code_r0x0322ef1c:
  *(long **)((long)puVar6 + -0x30) = unaff_x22;
  *(long **)((long)puVar6 + -0x28) = unaff_x21;
  *(long **)((long)puVar6 + -0x20) = plVar23;
  *(undefined1 **)((long)puVar6 + -0x18) = param_4;
  *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar29;
  *(undefined **)((long)puVar6 + -8) = puVar30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf4c0)(lVar9,puVar16);
  return;
Atlas_UI_AtlasTweenAnimations__SpinZoom:
  lVar26 = lVar14;
  uVar17 = uVar15;
  lVar25 = lVar12;
  plVar13 = plVar18;
  uVar31 = (uint)uVar34;
  uVar35 = (uint)uVar21;
  uVar34 = uVar21 & 0xffffffff;
  uVar21 = uVar21 & 0xffffffff;
  puVar4 = puVar3 + -0x80;
  *(ulong *)(puVar3 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
  *(ulong *)(puVar3 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
  *(ulong *)(puVar3 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
  *(ulong *)(puVar3 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
  *(ulong *)(puVar3 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
  *(ulong *)(puVar3 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
  *(ulong *)(puVar3 + -0x50) = uVar38;
  *(ulong *)(puVar3 + -0x48) = uVar36;
  *(undefined8 *)(puVar3 + -0x40) = uVar10;
  *(long *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = lVar9;
  *(undefined8 *)(puVar3 + -0x28) = uVar19;
  *(long **)(puVar3 + -0x20) = plVar24;
  *(long **)(puVar3 + -0x18) = plVar23;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar29;
  *(undefined **)(puVar3 + -8) = puVar30;
  pppppppuVar29 = (undefined8 *******)(puVar3 + -0x10);
  uVar38 = (ulong)uVar37;
  uVar36 = uVar20 & 0xffffffff;
  unaff_00005164 = 0;
  unaff_00005184 = 0;
  unaff_000051a4 = 0;
  unaff_00005144 = 0;
  unaff_000051c4 = 0;
  unaff_000051e4 = 0;
  uVar10 = 0x3d26a48;
  uVar15 = uVar17;
  lVar14 = lVar26;
  uVar20 = uVar21;
  uVar37 = uVar31;
  if ((bRam0000000003eb4867 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e770);
    func_0x00f78a20(0x3d5e790);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d40f78);
    func_0x00f78a20(0x3d62230);
    func_0x00f78a20(0x3d62238);
    func_0x00f78a20(0x3d62240);
    func_0x00f78a20(0x3d26a48);
    bRam0000000003eb4867 = 1;
    uVar20 = uVar21;
  }
  plVar24 = (long *)func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(plVar24,0);
  if (plVar24 != (long *)0x0) {
    plVar24[2] = lVar25;
    plVar24[3] = lVar26;
    if (plVar13 != (long *)0x0) {
      puVar30 = &UNK_0146f5d8;
      plVar23 = plVar13;
      uVar37 = uVar35;
      uVar31 = uVar35;
code_r0x03275bf0:
      *(long **)(puVar4 + -0x20) = plVar24;
      *(long **)(puVar4 + -0x18) = plVar23;
      *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar29;
      *(undefined **)(puVar4 + -8) = puVar30;
      *(uint *)(puVar4 + -0x30) = uVar31;
      *(uint *)(puVar4 + -0x2c) = uVar35;
      *(uint *)(puVar4 + -0x28) = uVar37;
      if (pcRam0000000003ec19a8 == (code *)0x0) {
        pcRam0000000003ec19a8 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      (*pcRam0000000003ec19a8)(plVar13,puVar4 + -0x30);
      return;
    }
  }
  puVar30 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
  plVar18 = (long *)func_0x00f78af4();
  puVar3 = puVar3 + -0x80;
  lVar12 = extraout_x1;
  plVar23 = plVar13;
  uVar19 = uVar17;
  lVar9 = lVar26;
  unaff_x23 = lVar25;
  uVar21 = extraout_d0;
  unaff_s10 = uVar35;
  unaff_s11 = uVar31;
  unaff_s12 = uVar31;
  unaff_s13 = uVar31;
  unaff_s14 = uVar35;
  unaff_s15 = uVar35;
  goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
}



// ============================================================
// RVA: 0x15a87f8 | Atlas.UI.Screens.GameInProgressScreen.SetFrenzy
// ============================================================

/* WARNING: Possible PIC construction at 0x015ade20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015acb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015acb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015a890c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015acb74) */
/* WARNING: Removing unreachable block (ram,0x015acba8) */
/* WARNING: Removing unreachable block (ram,0x015acbb0) */
/* WARNING: Removing unreachable block (ram,0x015acb7c) */
/* WARNING: Removing unreachable block (ram,0x015acbbc) */
/* WARNING: Removing unreachable block (ram,0x015acbc4) */
/* WARNING: Removing unreachable block (ram,0x015ad6f8) */
/* WARNING: Removing unreachable block (ram,0x015ad7a8) */
/* WARNING: Removing unreachable block (ram,0x015ad8e0) */
/* WARNING: Removing unreachable block (ram,0x015ad900) */
/* WARNING: Removing unreachable block (ram,0x015ad988) */
/* WARNING: Removing unreachable block (ram,0x015ad910) */
/* WARNING: Removing unreachable block (ram,0x015ad99c) */
/* WARNING: Removing unreachable block (ram,0x015ad9c4) */
/* WARNING: Removing unreachable block (ram,0x015ada04) */
/* WARNING: Removing unreachable block (ram,0x015ada24) */
/* WARNING: Removing unreachable block (ram,0x015adab8) */
/* WARNING: Removing unreachable block (ram,0x015ada88) */
/* WARNING: Removing unreachable block (ram,0x015ad9b0) */
/* WARNING: Removing unreachable block (ram,0x015ad958) */
/* WARNING: Removing unreachable block (ram,0x015acb44) */
/* WARNING: Removing unreachable block (ram,0x015acb84) */
/* WARNING: Removing unreachable block (ram,0x015acb8c) */
/* WARNING: Removing unreachable block (ram,0x015acb4c) */
/* WARNING: Removing unreachable block (ram,0x015acb98) */
/* WARNING: Removing unreachable block (ram,0x015acba0) */
/* WARNING: Removing unreachable block (ram,0x015acbc8) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f5d8) */
/* WARNING: Removing unreachable block (ram,0x0146f678) */
/* WARNING: Removing unreachable block (ram,0x0146f5dc) */
/* WARNING: Removing unreachable block (ram,0x018ee81c) */
/* WARNING: Removing unreachable block (ram,0x018ee830) */
/* WARNING: Removing unreachable block (ram,0x018ee838) */
/* WARNING: Removing unreachable block (ram,0x018ee84c) */
/* WARNING: Removing unreachable block (ram,0x018ee860) */
/* WARNING: Removing unreachable block (ram,0x018ee864) */
/* WARNING: Removing unreachable block (ram,0x018ee868) */
/* WARNING: Removing unreachable block (ram,0x018ee874) */
/* WARNING: Removing unreachable block (ram,0x018ee878) */
/* WARNING: Removing unreachable block (ram,0x015ad2d0) */
/* WARNING: Removing unreachable block (ram,0x015ad2ec) */
/* WARNING: Removing unreachable block (ram,0x015ad2f4) */
/* WARNING: Removing unreachable block (ram,0x015ad340) */
/* WARNING: Removing unreachable block (ram,0x015ad308) */
/* WARNING: Removing unreachable block (ram,0x015ade24) */
/* WARNING: Removing unreachable block (ram,0x015ade2c) */
/* WARNING: Removing unreachable block (ram,0x015ade4c) */
/* WARNING: Removing unreachable block (ram,0x015ade54) */
/* WARNING: Removing unreachable block (ram,0x015ade68) */
/* WARNING: Removing unreachable block (ram,0x015a8910) */
/* WARNING: Removing unreachable block (ram,0x015a8920) */
/* WARNING: Removing unreachable block (ram,0x015a8928) */
/* WARNING: Removing unreachable block (ram,0x015a8940) */
/* WARNING: Removing unreachable block (ram,0x015a8970) */
/* WARNING: Removing unreachable block (ram,0x015a8978) */
/* WARNING: Removing unreachable block (ram,0x015a897c) */
/* WARNING: Removing unreachable block (ram,0x015a89a8) */
/* WARNING: Removing unreachable block (ram,0x015a89b0) */
/* WARNING: Removing unreachable block (ram,0x0159ea3c) */
/* WARNING: Removing unreachable block (ram,0x0159ea60) */
/* WARNING: Removing unreachable block (ram,0x0159ea74) */
/* WARNING: Removing unreachable block (ram,0x0159ea9c) */
/* WARNING: Removing unreachable block (ram,0x0159ea7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f3c) */
/* WARNING: Removing unreachable block (ram,0x01e47f7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f6c) */
/* WARNING: Removing unreachable block (ram,0x01e47f74) */
/* WARNING: Removing unreachable block (ram,0x01e47f84) */
/* WARNING: Removing unreachable block (ram,0x01e47f88) */
/* WARNING: Removing unreachable block (ram,0x01e47fa0) */
/* WARNING: Removing unreachable block (ram,0x01e47fa8) */
/* WARNING: Removing unreachable block (ram,0x01e47fd4) */
/* WARNING: Removing unreachable block (ram,0x01e48058) */
/* WARNING: Removing unreachable block (ram,0x01e48064) */
/* WARNING: Removing unreachable block (ram,0x01e4806c) */
/* WARNING: Removing unreachable block (ram,0x01e480e4) */
/* WARNING: Removing unreachable block (ram,0x01e48148) */
/* WARNING: Removing unreachable block (ram,0x01e480ec) */
/* WARNING: Removing unreachable block (ram,0x01e48104) */
/* WARNING: Removing unreachable block (ram,0x01e4810c) */
/* WARNING: Removing unreachable block (ram,0x01e481ec) */
/* WARNING: Removing unreachable block (ram,0x01e48118) */
/* WARNING: Removing unreachable block (ram,0x01e48124) */
/* WARNING: Removing unreachable block (ram,0x01e481fc) */
/* WARNING: Removing unreachable block (ram,0x01e48084) */
/* WARNING: Removing unreachable block (ram,0x01e48134) */
/* WARNING: Removing unreachable block (ram,0x01e48088) */
/* WARNING: Removing unreachable block (ram,0x01e4809c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Removing unreachable block (ram,0x01e481c4) */
/* WARNING: Removing unreachable block (ram,0x01e480b0) */
/* WARNING: Removing unreachable block (ram,0x01e480bc) */
/* WARNING: Removing unreachable block (ram,0x01e481d4) */
/* WARNING: Removing unreachable block (ram,0x01e481d8) */
/* WARNING: Removing unreachable block (ram,0x01e48200) */
/* WARNING: Removing unreachable block (ram,0x01e47fd8) */
/* WARNING: Removing unreachable block (ram,0x01e47fdc) */
/* WARNING: Removing unreachable block (ram,0x01e47fe8) */
/* WARNING: Removing unreachable block (ram,0x01e47ff4) */
/* WARNING: Removing unreachable block (ram,0x01e47ffc) */
/* WARNING: Removing unreachable block (ram,0x01e48160) */
/* WARNING: Removing unreachable block (ram,0x01e4820c) */
/* WARNING: Removing unreachable block (ram,0x01e48168) */
/* WARNING: Removing unreachable block (ram,0x01e48180) */
/* WARNING: Removing unreachable block (ram,0x01e48188) */
/* WARNING: Removing unreachable block (ram,0x01e48250) */
/* WARNING: Removing unreachable block (ram,0x01e48194) */
/* WARNING: Removing unreachable block (ram,0x01e481a0) */
/* WARNING: Removing unreachable block (ram,0x01e48260) */
/* WARNING: Removing unreachable block (ram,0x01e48014) */
/* WARNING: Removing unreachable block (ram,0x01e481b0) */
/* WARNING: Removing unreachable block (ram,0x01e48018) */
/* WARNING: Removing unreachable block (ram,0x01e4802c) */
/* WARNING: Removing unreachable block (ram,0x01e48034) */
/* WARNING: Removing unreachable block (ram,0x01e48228) */
/* WARNING: Removing unreachable block (ram,0x01e48040) */
/* WARNING: Removing unreachable block (ram,0x01e4804c) */
/* WARNING: Removing unreachable block (ram,0x01e48238) */
/* WARNING: Removing unreachable block (ram,0x01e4823c) */
/* WARNING: Removing unreachable block (ram,0x01e48264) */
/* WARNING: Removing unreachable block (ram,0x01e47fbc) */
/* WARNING: Removing unreachable block (ram,0x01e480c8) */
/* WARNING: Removing unreachable block (ram,0x01e47fc0) */
/* WARNING: Removing unreachable block (ram,0x01e480d4) */
/* WARNING: Removing unreachable block (ram,0x01e480e0) */
/* WARNING: Removing unreachable block (ram,0x01e48274) */
/* WARNING: Removing unreachable block (ram,0x015aca9c) */
/* WARNING: Removing unreachable block (ram,0x015acaa4) */
/* WARNING: Removing unreachable block (ram,0x015acab0) */
/* WARNING: Removing unreachable block (ram,0x015acab4) */
/* WARNING: Removing unreachable block (ram,0x015acbec) */
/* WARNING: Removing unreachable block (ram,0x015acac8) */
/* WARNING: Removing unreachable block (ram,0x015acad4) */
/* WARNING: Removing unreachable block (ram,0x015acad8) */
/* WARNING: Removing unreachable block (ram,0x015acaec) */
/* WARNING: Removing unreachable block (ram,0x015acaf4) */
/* WARNING: Removing unreachable block (ram,0x015acaf8) */
/* WARNING: Removing unreachable block (ram,0x015acb0c) */
/* WARNING: Removing unreachable block (ram,0x015acb14) */
/* WARNING: Removing unreachable block (ram,0x015acb20) */
/* WARNING: Removing unreachable block (ram,0x015acb28) */
/* WARNING: Removing unreachable block (ram,0x015acb34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_GameInProgressScreen__SetFrenzy
               (uint param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined1 *param_5,
               undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 *extraout_x1_01;
  undefined8 uVar13;
  ulong uVar14;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long *plVar15;
  ulong unaff_x21;
  ulong uVar16;
  long *plVar17;
  undefined8 unaff_x22;
  undefined8 uVar18;
  long unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  long lVar20;
  undefined8 *unaff_x25;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long unaff_x27;
  undefined1 *unaff_x29;
  undefined1 **ppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  float extraout_s0;
  uint uVar25;
  float fVar26;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  float fVar27;
  ulong uVar28;
  uint uVar29;
  ulong unaff_d8;
  ulong uVar30;
  uint uVar31;
  undefined8 unaff_d9;
  ulong uVar32;
  uint unaff_s10;
  undefined4 unaff_00005144;
  uint unaff_s11;
  undefined4 unaff_00005164;
  uint unaff_s12;
  undefined4 unaff_00005184;
  uint unaff_s13;
  undefined4 unaff_000051a4;
  uint unaff_s14;
  undefined4 unaff_000051c4;
  uint unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5229 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb5229 = 1;
  }
  plVar8 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41080);
  if (plVar8 != (long *)0x0) {
    uVar16 = (ulong)param_1;
    uVar13 = 0;
    uVar18 = unaff_x22;
    do {
      uVar31 = (uint)param_3;
      uVar29 = (uint)param_2;
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar18;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      ppuVar23 = (undefined1 **)((long)register0x00000008 + -0x10);
      uVar14 = uVar16 & 0xffffffff;
      *(int *)((long)register0x00000008 + -0x44) = (int)param_6;
      plVar17 = (long *)0x3eb5000;
      if ((bRam0000000003eb523f & 1) == 0) {
        func_0x00f78a20(0x3d790e8);
        bRam0000000003eb523f = 1;
      }
      *(undefined4 *)((long)plVar8 + 0x2ac) = 0;
      *(int *)(plVar8 + 0x56) = (int)uVar16;
      if (plVar8[0x46] != 0) {
        lVar12 = 0x220;
        if ((int)param_5 == 0) {
          lVar12 = 0x218;
        }
        param_6 = 0;
        /*Core.UI2.UISlantElement$$set_sprite*/ func_0x02f8b070(plVar8[0x46],*(undefined8 *)((long)plVar8 + lVar12));
        plVar17 = (long *)plVar8[0x42];
        auVar33._8_8_ = plVar17;
        auVar33._0_8_ = param_5;
        uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)register0x00000008 + -0x44),0);
        if (plVar17 != (long *)0x0) {
          param_6 = *(undefined8 *)(*plVar17 + 0x560);
          (**(code **)(*plVar17 + 0x558))(plVar17,uVar11);
          lVar12 = plVar8[0x41];
          if (lVar12 != 0) {
            puVar24 = &UNK_015ade24;
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
            plVar15 = plVar8;
            goto code_r0x0322ef1c;
          }
        }
      }
      auVar1._8_8_ = plVar17;
      auVar1._0_8_ = param_5;
      puVar24 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__AnimateUsables;
      auVar34 = func_0x00f78af4();
      plVar15 = auVar34._0_8_;
      iVar6 = (int)uVar13;
      uVar11 = param_6;
      auVar33 = auVar34;
      if (iVar6 == 2) {
Atlas_UI_Screens_GameInProgressScreenBehaviour__UsablesChanged:
        plVar17 = auVar33._8_8_;
        param_5 = auVar33._0_8_;
        *(undefined8 *)(puVar2 + -0x50) = unaff_d9;
        *(ulong *)(puVar2 + -0x48) = uVar14;
        *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar2 + -0x30) = uVar18;
        *(long *)(puVar2 + -0x28) = auVar1._8_8_;
        *(long **)(puVar2 + -0x20) = plVar8;
        *(long *)(puVar2 + -0x18) = auVar1._0_8_;
        *(undefined1 ***)(puVar2 + -0x10) = ppuVar23;
        *(undefined **)(puVar2 + -8) = puVar24;
        ppuVar23 = (undefined1 **)(puVar2 + -0x10);
        unaff_x23 = 0x3d27778;
        param_6 = uVar11;
        if ((bRam0000000003eb5241 & 1) == 0) {
          func_0x00f78a20(0x3d1fa78);
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d62ef8);
          func_0x00f78a20(0x3d27778);
          bRam0000000003eb5241 = 1;
        }
        plVar8 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.GameInProgressScreenBehaviour.<>c__DisplayClass180_0_TypeInfo*/ uRam0000000003d27778);
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour.<>c__DisplayClass180_0$$.ctor*/ func_0x01554b00(plVar8,0);
        if (plVar8 != (long *)0x0) {
          plVar8[2] = (long)param_5;
          *(int *)(plVar8 + 3) = (int)uVar11;
          *(int *)((long)plVar8 + 0x1c) = auVar33._8_4_;
          if (*(long *)(param_5 + 0x178) != 0) {
            uVar11 = 0x3d20000;
            plVar17 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x178),0);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            param_6 = 0;
            /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(plVar17,0);
            if (*(long *)(param_5 + 0x178) != 0) {
              plVar7 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x178),0);
              uVar29 = *(uint *)(param_5 + 0x19c);
              uVar31 = *(uint *)(param_5 + 0x198);
              lVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar10,plVar8,uRam0000000003d62ef8,0);
              uVar16 = (ulong)_UNK_033f875c;
              uVar14 = 0;
              uVar28 = (ulong)uVar29;
              ppuVar23 = *(undefined1 ***)(puVar2 + -0x10);
              puVar24 = *(undefined **)(puVar2 + -8);
              plVar8 = *(long **)(puVar2 + -0x20);
              plVar15 = *(long **)(puVar2 + -0x18);
              lVar12 = *(long *)(puVar2 + -0x30);
              uVar18 = *(undefined8 *)(puVar2 + -0x28);
              unaff_x24 = *(undefined8 *)(puVar2 + -0x40);
              unaff_x23 = *(long *)(puVar2 + -0x38);
              uVar32 = *(ulong *)(puVar2 + -0x50);
              uVar30 = *(ulong *)(puVar2 + -0x48);
              lVar9 = 0;
              uVar13 = 0;
              goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
            }
          }
        }
        puVar24 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerDetachedUsable;
        auVar35 = func_0x00f78af4();
        plVar15 = auVar35._0_8_;
        if ((char)plVar15[0x59] == '\0') {
          return;
        }
        puVar3 = puVar2 + -0x50;
        uVar18 = uVar11;
        if (auVar35._8_4_ != 0) {
          puVar3 = puVar2 + -0x90;
          *(undefined8 *)(puVar2 + -0x90) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x88) = 0x3d27778;
          *(undefined8 *)(puVar2 + -0x80) = uVar11;
          *(long **)(puVar2 + -0x78) = plVar17;
          *(long **)(puVar2 + -0x70) = plVar8;
          *(undefined1 **)(puVar2 + -0x68) = param_5;
          *(undefined1 ***)(puVar2 + -0x60) = ppuVar23;
          *(undefined **)(puVar2 + -0x58) =
               &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerDetachedUsable;
          ppuVar23 = (undefined1 **)(puVar2 + -0x60);
          auVar33 = ZEXT816(0);
          uVar18 = 0;
          if ((bRam0000000003eb523b & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb523b = 1;
          }
          if ((plVar15[0x2d] == 0) || (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar15[0x2d],0), lVar12 == 0)) {
            lVar12 = func_0x00f78af4();
            *(undefined8 *)(puVar2 + -0xc0) = 0;
            *(undefined8 *)(puVar2 + -0xb8) = 0;
            *(long **)(puVar2 + -0xb0) = plVar15;
            *(undefined8 *)(puVar2 + -0xa8) = 0;
            *(undefined1 ***)(puVar2 + -0xa0) = ppuVar23;
            *(undefined **)(puVar2 + -0x98) =
                 &Atlas_UI_Screens_GameInProgressScreenBehaviour__InitUsableIcons;
            if ((bRam0000000003eb5238 & 1) == 0) {
              func_0x00f78a20(0x3d3bf48);
              func_0x00f78a20(0x3d1de20);
              bRam0000000003eb5238 = 1;
            }
            *(undefined4 *)(lVar12 + 0x2a4) = 0;
            uVar18 = func_0x00f78aec(/*System.Collections.Generic.List<Sprite>_TypeInfo*/ uRam0000000003d1de20);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar18,uRam0000000003d3bf48);
            *(undefined8 *)(lVar12 + 0x298) = uVar18;
            return;
          }
          param_5 = (undefined1 *)0x0;
          puVar24 = &UNK_015acb74;
          goto code_r0x0322ef1c;
        }
      }
      else {
        puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
        if (iVar6 != 1) {
          if (iVar6 != 0) {
            return;
          }
          uVar13 = 1;
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x90);
          puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
          *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
          *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x80) = uVar18;
          *(long **)((long)register0x00000008 + -0x78) = plVar17;
          *(long **)((long)register0x00000008 + -0x70) = plVar8;
          *(undefined1 **)((long)register0x00000008 + -0x68) = param_5;
          *(undefined1 ***)((long)register0x00000008 + -0x60) = ppuVar23;
          *(undefined **)((long)register0x00000008 + -0x58) =
               &Atlas_UI_Screens_GameInProgressScreenBehaviour__AnimateUsables;
          ppuVar23 = (undefined1 **)((long)register0x00000008 + -0x60);
          plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
          unaff_x23 = 0x3eb5000;
          if ((bRam0000000003eb5240 & 1) == 0) {
            func_0x00f78a20(0x3d53528);
            func_0x00f78a20(0x3d20bc0);
            bRam0000000003eb5240 = 1;
          }
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$ResetUsableIconPositions*/ func_0x015acf54(plVar15);
          if (plVar15[0x2f] != 0) {
            unaff_x24 = 0x3d20000;
            unaff_x23 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar15[0x2f],0);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = 0;
            /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(unaff_x23,0);
            if (plVar15[0x2f] != 0) {
              plVar17 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar15[0x2f],0);
              uVar25 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
              unaff_x23 = 0;
              if (plVar17 != (long *)0x0) {
                puVar24 = &UNK_015ad2d0;
                goto code_r0x03275bf0;
              }
            }
          }
          puVar24 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerUsedUsable;
          auVar33 = func_0x00f78af4();
          uVar18 = param_6;
          auVar1 = auVar34;
          if (*(char *)(auVar33._0_8_ + 0x2c8) == '\0') {
            return;
          }
          goto Atlas_UI_Screens_GameInProgressScreenBehaviour__UsablesChanged;
        }
      }
      puVar2 = puVar3;
      *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
      *(ulong *)(puVar2 + -0x38) = uVar14;
      *(undefined8 *)(puVar2 + -0x30) = uVar18;
      *(long **)(puVar2 + -0x28) = plVar17;
      *(long **)(puVar2 + -0x20) = plVar8;
      *(undefined1 **)(puVar2 + -0x18) = param_5;
      *(undefined1 ***)(puVar2 + -0x10) = ppuVar23;
      *(undefined **)(puVar2 + -8) = puVar24;
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5242 & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d57648);
        bRam0000000003eb5242 = 1;
      }
      if (plVar15[0x2f] != 0) {
        plVar17 = (long *)0x3d20000;
        uVar11 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar15[0x2f],0);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_6 = 0;
        /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar11,0);
        if (plVar15[0x2f] != 0) {
          plVar7 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar15[0x2f],0);
          uVar29 = *(uint *)((long)plVar15 + 0x19c);
          uVar31 = *(uint *)(plVar15 + 0x33);
          lVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar10,plVar15,uRam0000000003d57648,0);
          uVar16 = (ulong)_UNK_033f875c;
          uVar14 = 0;
          uVar28 = (ulong)uVar29;
          ppuVar23 = *(undefined1 ***)(puVar2 + -0x10);
          puVar24 = *(undefined **)(puVar2 + -8);
          plVar8 = *(long **)(puVar2 + -0x20);
          plVar15 = *(long **)(puVar2 + -0x18);
          lVar12 = *(long *)(puVar2 + -0x30);
          uVar18 = *(undefined8 *)(puVar2 + -0x28);
          uVar32 = *(ulong *)(puVar2 + -0x40);
          uVar30 = *(ulong *)(puVar2 + -0x38);
          lVar9 = 0;
          uVar13 = 0;
          goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
        }
      }
      auVar33 = func_0x00f78af4();
      unaff_x21 = auVar33._8_8_;
      lVar9 = auVar33._0_8_;
      puVar3 = puVar2 + -0x80;
      *(undefined8 *)(puVar2 + -0x70) = uVar18;
      *(long **)(puVar2 + -0x68) = plVar17;
      *(undefined8 *)(puVar2 + -0x60) = uVar11;
      *(long **)(puVar2 + -0x58) = plVar15;
      *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x48) =
           &Atlas_UI_Screens_GameInProgressScreenBehaviour__SetUsableQuantityText;
      ppuVar23 = (undefined1 **)(puVar2 + -0x50);
      if ((bRam0000000003eb523c & 1) == 0) {
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d7d030);
        bRam0000000003eb523c = 1;
      }
      plVar15 = *(long **)(lVar9 + 0x158);
      if (auVar33._8_4_ < 2) {
        if ((plVar15 != (long *)0x0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar15,0), lVar12 != 0)) {
          param_5 = (undefined1 *)0x0;
          ppuVar23 = *(undefined1 ***)(puVar2 + -0x50);
          puVar24 = *(undefined **)(puVar2 + -0x48);
          plVar15 = *(long **)(puVar2 + -0x60);
          uVar18 = *(undefined8 *)(puVar2 + -0x70);
          auVar33._8_8_ = *(undefined8 *)(puVar2 + -0x68);
          auVar33._0_8_ = *(undefined8 *)(puVar2 + -0x58);
          puVar3 = puVar2 + -0x40;
          goto code_r0x0322ef1c;
        }
      }
      else {
        uVar18 = 0x3d7d000;
        *(int *)(puVar2 + -0x74) = auVar33._8_4_;
        uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar2 + -0x74);
        param_6 = 0;
        uVar11 = /*System.String$$Format*/ func_0x029bc688(/*STR('{0}x')*/ uRam0000000003d7d030,uVar11);
        if (plVar15 != (long *)0x0) {
          param_6 = *(undefined8 *)(*plVar15 + 0x560);
          (**(code **)(*plVar15 + 0x558))(plVar15,uVar11);
          if ((*(long *)(lVar9 + 0x158) != 0) &&
             (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x158),0), lVar12 != 0)) {
            param_5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            puVar24 = &UNK_015ad6f8;
            goto code_r0x0322ef1c;
          }
        }
      }
      lVar12 = func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0xb0) = unaff_d9;
      *(ulong *)(puVar2 + -0xa8) = uVar14;
      *(long **)(puVar2 + -0xa0) = plVar15;
      *(long *)(puVar2 + -0x98) = lVar9;
      *(undefined1 ***)(puVar2 + -0x90) = ppuVar23;
      *(undefined **)(puVar2 + -0x88) = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnUpdate;
      unaff_d8 = extraout_d0_00 & 0xffffffff;
      if (0 < *(int *)(lVar12 + 0x2a0)) {
        fVar26 = (float)extraout_d0_00 * 1000.0;
        fVar27 = -fVar26;
        if (fVar26 != INFINITY) {
          fVar27 = fVar26;
        }
        param_6 = 0;
        uVar5 = /*UnityEngine.Mathf$$Max*/ func_0x0323cd04(*(int *)(lVar12 + 0x2a0) - (int)fVar27,0);
        *(undefined4 *)(lVar12 + 0x2a0) = uVar5;
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_00 & 0xffffffff,lVar12,*(undefined8 *)(lVar12 + 0x170));
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_00 & 0xffffffff,lVar12,*(undefined8 *)(lVar12 + 0x178));
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_00 & 0xffffffff,lVar12,*(undefined8 *)(lVar12 + 0x180));
      }
      *(undefined8 *)(puVar2 + -0xe0) = unaff_d9;
      *(ulong *)(puVar2 + -0xd8) = unaff_d8;
      *(long **)(puVar2 + -0xd0) = plVar15;
      *(long *)(puVar2 + -200) = lVar12;
      *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x90;
      *(undefined **)(puVar2 + -0xb8) = &UNK_015ad7a8;
      unaff_x20 = 0x3eb5000;
      if ((bRam0000000003eb523e & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb523e = 1;
      }
      param_3 = (ulong)(uint)*(float *)(lVar12 + 0x240);
      fVar27 = *(float *)(lVar12 + 0x2b0) - *(float *)(lVar12 + 0x240);
      param_2 = (ulong)(uint)fVar27;
      if (*(float *)(lVar12 + 0x2ac) < fVar27) {
        return;
      }
      if (*(long *)(lVar12 + 0x238) != 0) {
        iVar6 = /*UnityEngine.AnimationCurve$$get_length*/ func_0x03217f64(*(long *)(lVar12 + 0x238),0);
        if (iVar6 < 2) {
          return;
        }
        unaff_x20 = *(long *)(lVar12 + 0x238);
        if (unaff_x20 != 0) {
          param_2 = 0x3f800000;
          _fmodf(*(undefined4 *)(lVar12 + 0x2ac));
          uVar29 = /*UnityEngine.AnimationCurve$$Evaluate*/ func_0x03217a8c(unaff_x20,0);
          if (*(long *)(lVar12 + 0x90) != 0) {
            unaff_d8 = (ulong)uVar29;
            plVar17 = (long *)/*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar12 + 0x90),uRam0000000003d578e0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar17,0);
            if (iVar6 == 0) {
              return;
            }
            lVar12 = 0;
            if (plVar17 != (long *)0x0) {
              uVar31 = 0;
              ppuVar23 = *(undefined1 ***)(puVar2 + -0xc0);
              puVar24 = *(undefined **)(puVar2 + -0xb8);
              plVar8 = *(long **)(puVar2 + -0xd0);
              plVar15 = *(long **)(puVar2 + -200);
              puVar4 = puVar2 + -0xb0;
              uVar25 = uVar29;
              goto code_r0x03275bf0;
            }
          }
        }
      }
      unaff_x19 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x120);
      *(undefined8 *)(puVar2 + -0x120) = unaff_d9;
      *(ulong *)(puVar2 + -0x118) = unaff_d8;
      *(undefined8 *)(puVar2 + -0x110) = uVar18;
      *(ulong *)(puVar2 + -0x108) = unaff_x21;
      *(long *)(puVar2 + -0x100) = unaff_x20;
      *(long *)(puVar2 + -0xf8) = lVar12;
      *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0xc0;
      *(undefined **)(puVar2 + -0xe8) =
           &Atlas_UI_Screens_GameInProgressScreenBehaviour__UpdateFrenzyVignette;
      unaff_x29 = puVar2 + -0xf0;
      if (*(long *)(unaff_x19 + 0x248) == 0) {
code_r0x015add60:
        func_0x00f78af4();
      }
      else {
        unaff_d8 = extraout_d0_01 & 0xffffffff;
        iVar6 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(*(long *)(unaff_x19 + 0x248),0);
        if (iVar6 == 0) {
          return;
        }
        if (*(char *)(unaff_x19 + 0x2a8) != '\0') {
          if (*(long *)(unaff_x19 + 600) != 0) {
            iVar6 = /*UnityEngine.AnimationCurve$$get_length*/ func_0x03217f64(*(long *)(unaff_x19 + 600),0);
            if (iVar6 < 2) {
              return;
            }
            lVar12 = *(long *)(unaff_x19 + 600);
            unaff_x20 = 0;
            if (lVar12 != 0) {
              param_2 = (ulong)*(uint *)(unaff_x19 + 0x2b4);
              _fmodf(*(undefined4 *)(unaff_x19 + 0x2ac));
              uVar5 = /*UnityEngine.AnimationCurve$$Evaluate*/ func_0x03217a8c(lVar12,0);
              *(undefined4 *)(unaff_x19 + 0x26c) = uVar5;
              unaff_x20 = *(long *)(unaff_x19 + 0x250);
              if (unaff_x20 != 0) {
                uVar31 = *(uint *)(unaff_x20 + 0x18);
                if ((int)uVar31 < 1) {
                  return;
                }
                unaff_x21 = 0;
                while (uVar29 = (uint)unaff_x21, uVar29 < uVar31) {
                  plVar8 = *(long **)(unaff_x20 + (long)(int)uVar29 * 8 + 0x20);
                  if (plVar8 == (long *)0x0) goto code_r0x015add60;
                  param_3 = (ulong)*(uint *)(unaff_x19 + 0x268);
                  param_2 = (ulong)*(uint *)(unaff_x19 + 0x264);
                  (**(code **)(*plVar8 + 0x2a8))
                            (*(undefined4 *)(unaff_x19 + 0x260),param_2,param_3,
                             *(undefined4 *)(unaff_x19 + 0x26c),plVar8,
                             *(undefined8 *)(*plVar8 + 0x2b0));
                  unaff_x21 = (ulong)(uVar29 + 1);
                  uVar31 = *(uint *)(unaff_x20 + 0x18);
                  if ((int)uVar31 <= (int)(uVar29 + 1)) {
                    return;
                  }
                }
                goto code_r0x015add64;
              }
            }
          }
          goto code_r0x015add60;
        }
        if (*(float *)(unaff_x19 + 0x26c) < 0.0) {
          lVar12 = *(long *)(unaff_x19 + 0x248);
          if (lVar12 == 0) goto code_r0x015add60;
          param_5 = (undefined1 *)0x0;
          ppuVar23 = *(undefined1 ***)(puVar2 + -0xf0);
          puVar24 = *(undefined **)(puVar2 + -0xe8);
          plVar15 = *(long **)(puVar2 + -0x100);
          uVar18 = *(undefined8 *)(puVar2 + -0x110);
          auVar33._8_8_ = *(undefined8 *)(puVar2 + -0x108);
          auVar33._0_8_ = *(undefined8 *)(puVar2 + -0xf8);
          puVar3 = puVar2 + -0xe0;
          goto code_r0x0322ef1c;
        }
        param_2 = 0;
        uVar5 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(*(float *)(unaff_x19 + 0x26c) - (float)extraout_d0_01,0);
        *(undefined4 *)(unaff_x19 + 0x26c) = uVar5;
        unaff_x20 = *(long *)(unaff_x19 + 0x250);
        if (unaff_x20 == 0) goto code_r0x015add60;
        uVar31 = *(uint *)(unaff_x20 + 0x18);
        if ((int)uVar31 < 1) {
          return;
        }
        unaff_x21 = 0;
        while (uVar29 = (uint)unaff_x21, uVar29 < uVar31) {
          plVar8 = *(long **)(unaff_x20 + (long)(int)uVar29 * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto code_r0x015add60;
          param_3 = (ulong)*(uint *)(unaff_x19 + 0x268);
          param_2 = (ulong)*(uint *)(unaff_x19 + 0x264);
          (**(code **)(*plVar8 + 0x2a8))
                    (*(undefined4 *)(unaff_x19 + 0x260),param_2,param_3,
                     *(undefined4 *)(unaff_x19 + 0x26c),plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
          unaff_x21 = (ulong)(uVar29 + 1);
          uVar31 = *(uint *)(unaff_x20 + 0x18);
          if ((int)uVar31 <= (int)(uVar29 + 1)) {
            return;
          }
        }
      }
code_r0x015add64:
      uVar11 = func_0x00f78b24();
      unaff_x30 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__SetFrenzy;
      plVar8 = (long *)func_0x00f78ac0(uVar11,0);
      param_5 = extraout_x1_01;
      uVar16 = extraout_d0_02;
    } while( true );
  }
  uVar13 = func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff70;
  puStack_58 = &Atlas_UI_Screens_GameInProgressScreen__OnEnterInProgressState;
  ppuVar23 = &puStack_60;
  auVar33._8_8_ = 0x3eb5000;
  auVar33._0_8_ = uVar13;
  plVar15 = (long *)0x3d41080;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5215 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d798d8);
    bRam0000000003eb5215 = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d41080);
  if ((lVar12 != 0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar12 != 0)) {
    param_5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar24 = &UNK_015a8910;
code_r0x0322ef1c:
    *(undefined8 *)(puVar3 + -0x30) = uVar18;
    *(long *)(puVar3 + -0x28) = auVar33._8_8_;
    *(long **)(puVar3 + -0x20) = plVar15;
    *(long *)(puVar3 + -0x18) = auVar33._0_8_;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar23;
    *(undefined **)(puVar3 + -8) = puVar24;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar12,param_5);
    return;
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb5217 & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3d1f8);
    func_0x00f78a20(0x3d3d200);
    func_0x00f78a20(0x3d3a680);
    func_0x00f78a20(0x3d3d208);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5217 = 1;
  }
  lStack_148 = 0;
  lStack_150 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  fVar27 = *(float *)(lVar12 + 0xac) + extraout_s0;
  *(float *)(lVar12 + 0xac) = fVar27;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
    if (fVar27 < *(float *)(*(long *)(lVar9 + 0x68) + 0x28)) {
      return;
    }
    *(undefined4 *)(lVar12 + 0xac) = 0;
    uVar29 = *(uint *)(lVar12 + 0xe8);
    uVar31 = uVar29;
    if (-1 < (int)(uVar29 - 1)) {
      uVar31 = uVar29 - 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41088);
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x30) != 0)) &&
       (lVar9 = *(long *)(*(long *)(lVar9 + 0x30) + 0x40), lVar9 != 0)) {
      /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetHigherAndLowerPositionedPlayers*/ func_0x015a6890(lVar9,*(undefined8 *)(lVar12 + 0xd0),(~uVar29 & 1) + ((int)uVar31 >> 1),
                      (int)uVar31 >> 1,*(undefined8 *)(lVar12 + 0xe0));
      unaff_x27 = *(long *)(lVar12 + 0xe0);
      if (unaff_x27 != 0) {
        uVar16 = 0;
        puVar22 = (undefined8 *)0x3d3d208;
        puVar21 = (undefined8 *)0x3d3d208;
        while( true ) {
          uVar14 = (ulong)(int)*(uint *)(unaff_x27 + 0x18);
          if ((long)uVar14 <= (long)uVar16) goto code_r0x015a8c48;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar16) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(lVar12 + 0xd8);
          unaff_x25 = puVar22;
          if (lVar9 == 0) break;
          uVar31 = 0;
          lVar19 = *(long *)(*(long *)(unaff_x27 + 0x10) + uVar16 * 8 + 0x20);
          lVar10 = 0x20;
          while ((int)uVar31 < (int)*(uint *)(lVar9 + 0x18)) {
            if (*(uint *)(lVar9 + 0x18) <= uVar31) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (lVar19 == *(long *)(*(long *)(lVar9 + 0x10) + lVar10)) {
              lVar9 = *(long *)(lVar12 + 0xd8);
              unaff_x25 = puVar21;
              if (lVar9 == 0) goto code_r0x015a8c44;
              lVar19 = lVar9;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar19 = *(long *)(lVar12 + 0xd8);
              }
              lVar9 = *(long *)(lVar9 + 0x10) + uVar16 * 0x20;
              lStack_148 = *(long *)(lVar9 + 0x28);
              lStack_150 = *(long *)(lVar9 + 0x20);
              lStack_138 = *(long *)(lVar9 + 0x38);
              lStack_140 = *(long *)(lVar9 + 0x30);
              if (lVar19 == 0) goto code_r0x015a8c44;
              if (*(uint *)(lVar19 + 0x18) <= uVar31) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar8 = (long *)(*(long *)(lVar19 + 0x10) + lVar10);
              lStack_168 = plVar8[1];
              lStack_170 = *plVar8;
              lStack_158 = plVar8[3];
              lStack_160 = plVar8[2];
              lStack_130 = lStack_170;
              lStack_128 = lStack_168;
              lStack_120 = lStack_160;
              lStack_118 = lStack_158;
              /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar19,uVar16,&lStack_130,uRam0000000003d3d208);
              if (*(long *)(lVar12 + 0xd8) == 0) goto code_r0x015a8c44;
              lStack_128 = lStack_148;
              lStack_130 = lStack_150;
              lStack_118 = lStack_138;
              lStack_120 = lStack_140;
              /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(*(long *)(lVar12 + 0xd8),uVar31,&lStack_130,uRam0000000003d3d208);
              break;
            }
            uVar31 = uVar31 + 1;
            lVar9 = *(long *)(lVar12 + 0xd8);
            lVar10 = lVar10 + 0x20;
            if (lVar9 == 0) goto code_r0x015a8c44;
          }
          uVar16 = uVar16 + 1;
          unaff_x27 = *(long *)(lVar12 + 0xe0);
          unaff_x25 = puVar21;
          if (unaff_x27 == 0) break;
        }
      }
    }
  }
code_r0x015a8c44:
  puVar22 = unaff_x25;
  func_0x00f78af4();
  uVar14 = extraout_x8;
code_r0x015a8c48:
  if ((int)uVar14 < 1) {
    return;
  }
  uVar31 = 0;
  do {
    if ((uint)uVar14 <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar12 + 0xd8);
    unaff_x25 = puVar22;
    if (lVar9 == 0) goto code_r0x015a8c44;
    unaff_x27 = *(long *)(*(long *)(unaff_x27 + 0x10) + (long)(int)uVar31 * 8 + 0x20);
    if (*(uint *)(lVar9 + 0x18) <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = (long)(int)uVar31;
    if (unaff_x27 != *(long *)(*(long *)(lVar9 + 0x10) + lVar10 * 0x20 + 0x20)) {
      lVar9 = *(long *)(lVar12 + 0xd8);
      if (lVar9 == 0) goto code_r0x015a8c44;
      lVar19 = lVar9;
      if (*(uint *)(lVar9 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = *(long *)(lVar12 + 0xd8);
        if (lVar19 == 0) goto code_r0x015a8c44;
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar10 * 0x20 + 0x20);
      lVar9 = lVar19;
      if (*(uint *)(lVar19 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar9 = *(long *)(lVar12 + 0xd8);
        if (lVar9 == 0) goto code_r0x015a8c44;
      }
      lVar20 = *(long *)(*(long *)(lVar19 + 0x10) + lVar10 * 0x20 + 0x30);
      lVar19 = lVar9;
      if (*(uint *)(lVar9 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = *(long *)(lVar12 + 0xd8);
        if (lVar19 == 0) goto code_r0x015a8c44;
      }
      lStack_128 = *(long *)(*(long *)(lVar9 + 0x10) + lVar10 * 0x20 + 0x28);
      lStack_118 = -1;
      lStack_130 = unaff_x27;
      lStack_120 = lVar20;
      /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar19,uVar31,&lStack_130,*puVar22);
      uVar16 = /*Atlas.UI.Screens.GameInProgressScreen$$IsPlayerOnLeaderBoard*/ func_0x015a8fbc(lVar12,uVar18);
      if ((uVar16 & 1) == 0) {
        lVar9 = *(long *)(lVar12 + 0xd8);
        if (lVar9 == 0) goto code_r0x015a8c44;
        if (*(uint *)(lVar9 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar10 * 0x20 + 0x28);
        if (lVar9 == 0) goto code_r0x015a8c44;
        /*Atlas.UI.LeaderboardEntryBehaviour$$KillTweens*/ func_0x015ecac0(lVar9,0);
      }
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar9 == 0) || (lVar19 = *(long *)(lVar12 + 0xd8), lVar19 == 0)) goto code_r0x015a8c44;
    lVar9 = *(long *)(lVar9 + 0x68);
    if (*(uint *)(lVar19 + 0x18) <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (lVar9 == 0) goto code_r0x015a8c44;
    /*Atlas.UI.MiniLeaderboardBehaviour$$SetPositionBehaviourOrder*/ func_0x01494ad4(lVar9,*(undefined8 *)(*(long *)(lVar19 + 0x10) + lVar10 * 0x20 + 0x28),uVar31,0)
    ;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41090);
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
       (lVar19 = *(long *)(lVar12 + 0xd8), lVar19 == 0)) goto code_r0x015a8c44;
    lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10);
    if (*(uint *)(lVar19 + 0x18) <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + lVar10 * 0x20 + 0x20);
    if ((lVar19 == 0) || (lVar9 == 0)) goto code_r0x015a8c44;
    uVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)(lVar19 + 0x28),uRam0000000003d57270);
    lVar9 = *(long *)(lVar12 + 0xd8);
    if (lVar9 == 0) goto code_r0x015a8c44;
    if (*(uint *)(lVar9 + 0x18) <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (((unaff_x27 == 0) || (lVar19 = *(long *)(unaff_x27 + 0x10), lVar19 == 0)) ||
       (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar10 * 0x20 + 0x30), lVar9 == 0))
    goto code_r0x015a8c44;
    uStack_188 = *(undefined8 *)(lVar19 + 0x50);
    uStack_190 = *(undefined8 *)(lVar19 + 0x48);
    uStack_178 = *(undefined8 *)(lVar19 + 0x60);
    uStack_180 = *(undefined8 *)(lVar19 + 0x58);
    /*Atlas.UI.CharacterMetagameData$$UpdateDefinitionAndPlayer*/ func_0x015413f8(lVar9,uVar18,&uStack_190,0);
    lVar9 = *(long *)(lVar12 + 0xd8);
    if (lVar9 == 0) goto code_r0x015a8c44;
    lVar19 = lVar9;
    if (*(uint *)(lVar9 + 0x18) <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar19 = *(long *)(lVar12 + 0xd8);
    }
    lVar9 = *(long *)(lVar9 + 0x10) + lVar10 * 0x20;
    uStack_1a8 = *(undefined8 *)(lVar9 + 0x28);
    uStack_1b0 = *(undefined8 *)(lVar9 + 0x20);
    uStack_198 = *(undefined8 *)(lVar9 + 0x38);
    uStack_1a0 = *(undefined8 *)(lVar9 + 0x30);
    if (lVar19 == 0) goto code_r0x015a8c44;
    if (*(uint *)(lVar19 + 0x18) <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uStack_1c8 = uStack_1a8;
    uStack_1d0 = uStack_1b0;
    uStack_1b8 = uStack_198;
    uStack_1c0 = uStack_1a0;
    /*Atlas.UI.Screens.GameInProgressScreen$$UpdatePlayerPositionBehaviour*/ func_0x015a90dc(lVar12,&uStack_1d0,
                    *(undefined8 *)(*(long *)(lVar19 + 0x10) + lVar10 * 0x20 + 0x30),extraout_x1_00)
    ;
    lVar9 = *(long *)(lVar12 + 0xd8);
    if (lVar9 == 0) goto code_r0x015a8c44;
    lVar19 = lVar9;
    if (*(uint *)(lVar9 + 0x18) <= uVar31) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar19 = *(long *)(lVar12 + 0xd8);
    }
    if (lVar19 == 0) goto code_r0x015a8c44;
    lVar9 = *(long *)(lVar9 + 0x10) + lVar10 * 0x20;
    lStack_118 = *(long *)(unaff_x27 + 0x74);
    lStack_128 = *(long *)(lVar9 + 0x28);
    lStack_130 = *(long *)(lVar9 + 0x20);
    lStack_120 = *(long *)(lVar9 + 0x30);
    /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar19,uVar31,&lStack_130,*puVar22);
    unaff_x27 = *(long *)(lVar12 + 0xe0);
    if (unaff_x27 == 0) goto code_r0x015a8c44;
    uVar31 = uVar31 + 1;
    uVar14 = (ulong)*(uint *)(unaff_x27 + 0x18);
    if ((int)*(uint *)(unaff_x27 + 0x18) <= (int)uVar31) {
      return;
    }
  } while( true );
Atlas_UI_AtlasTweenAnimations__SpinZoom:
  lVar20 = lVar10;
  uVar11 = uVar13;
  lVar19 = lVar9;
  plVar17 = plVar7;
  uVar25 = (uint)uVar28;
  uVar29 = (uint)uVar16;
  uVar28 = uVar16 & 0xffffffff;
  uVar16 = uVar16 & 0xffffffff;
  puVar4 = puVar2 + -0x80;
  *(ulong *)(puVar2 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
  *(ulong *)(puVar2 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
  *(ulong *)(puVar2 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
  *(ulong *)(puVar2 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
  *(ulong *)(puVar2 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
  *(ulong *)(puVar2 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
  *(ulong *)(puVar2 + -0x50) = uVar32;
  *(ulong *)(puVar2 + -0x48) = uVar30;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(long *)(puVar2 + -0x38) = unaff_x23;
  *(long *)(puVar2 + -0x30) = lVar12;
  *(undefined8 *)(puVar2 + -0x28) = uVar18;
  *(long **)(puVar2 + -0x20) = plVar8;
  *(long **)(puVar2 + -0x18) = plVar15;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar23;
  *(undefined **)(puVar2 + -8) = puVar24;
  ppuVar23 = (undefined1 **)(puVar2 + -0x10);
  uVar32 = (ulong)uVar31;
  uVar30 = uVar14 & 0xffffffff;
  unaff_00005164 = 0;
  unaff_00005184 = 0;
  unaff_000051a4 = 0;
  unaff_00005144 = 0;
  unaff_000051c4 = 0;
  unaff_000051e4 = 0;
  unaff_x24 = 0x3d26a48;
  uVar13 = uVar11;
  lVar10 = lVar20;
  uVar14 = uVar16;
  uVar31 = uVar25;
  if ((bRam0000000003eb4867 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e770);
    func_0x00f78a20(0x3d5e790);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d40f78);
    func_0x00f78a20(0x3d62230);
    func_0x00f78a20(0x3d62238);
    func_0x00f78a20(0x3d62240);
    func_0x00f78a20(0x3d26a48);
    bRam0000000003eb4867 = 1;
    uVar14 = uVar16;
  }
  plVar8 = (long *)func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(plVar8,0);
  if (plVar8 != (long *)0x0) {
    plVar8[2] = lVar19;
    plVar8[3] = lVar20;
    if (plVar17 != (long *)0x0) {
      puVar24 = &UNK_0146f5d8;
      plVar15 = plVar17;
      uVar31 = uVar29;
      uVar25 = uVar29;
code_r0x03275bf0:
      *(long **)(puVar4 + -0x20) = plVar8;
      *(long **)(puVar4 + -0x18) = plVar15;
      *(undefined1 ***)(puVar4 + -0x10) = ppuVar23;
      *(undefined **)(puVar4 + -8) = puVar24;
      *(uint *)(puVar4 + -0x30) = uVar25;
      *(uint *)(puVar4 + -0x2c) = uVar29;
      *(uint *)(puVar4 + -0x28) = uVar31;
      if (pcRam0000000003ec19a8 == (code *)0x0) {
        pcRam0000000003ec19a8 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      (*pcRam0000000003ec19a8)(plVar17,puVar4 + -0x30);
      return;
    }
  }
  puVar24 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
  plVar7 = (long *)func_0x00f78af4();
  puVar2 = puVar2 + -0x80;
  lVar9 = extraout_x1;
  plVar15 = plVar17;
  uVar18 = uVar11;
  lVar12 = lVar20;
  unaff_x23 = lVar19;
  uVar16 = extraout_d0;
  unaff_s10 = uVar29;
  unaff_s11 = uVar25;
  unaff_s12 = uVar25;
  unaff_s13 = uVar25;
  unaff_s14 = uVar29;
  unaff_s15 = uVar29;
  goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
}



// ============================================================
// RVA: 0x15a8884 | Atlas.UI.Screens.GameInProgressScreen.OnEnterInProgressState
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__OnEnterInProgressState(long *param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  ulong uVar12;
  ulong extraout_x8;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined8 *unaff_x25;
  undefined8 *puVar21;
  long **pplVar22;
  long unaff_x27;
  float extraout_s0;
  float fVar23;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_58;
  
  if ((bRam0000000003eb5215 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d798d8);
    bRam0000000003eb5215 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if ((lVar8 != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      /*Atlas.UI.ScreenSafeAreaScaler$$ReviseSafeArea*/ func_0x014eece0(*(long *)(lVar8 + 0xb8),0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
      if (lVar8 != 0) {
        uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('hud_enter')*/ uRam0000000003d798d8,uVar9,0,0,0,0);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41088);
        if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) {
          if ((bRam0000000003eb51c2 & 1) == 0) {
            func_0x00f78a20(0x3d2a070);
            bRam0000000003eb51c2 = 1;
          }
          plVar7 = *(long **)(lVar8 + 0xb0);
          if (plVar7 == (long *)0x0) {
            return;
          }
          plStack_58 = plVar7;
          lVar8 = plVar7[0xd];
          if (lVar8 == 0) {
            pplVar22 = &plStack_58;
            lVar20 = 1;
          }
          else {
            lVar20 = *(long *)(lVar8 + 0x18);
            if (lVar20 == 0) {
              return;
            }
            pplVar22 = (long **)(lVar8 + 0x20);
          }
          lVar8 = 0;
          do {
            plVar13 = pplVar22[lVar8];
            pcVar18 = (code *)plVar13[2];
            plVar1 = (long *)plVar13[4];
            lVar10 = plVar13[5];
            if (*(short *)(lVar10 + 0x48) == -1) {
              func_0x00f78ad8(lVar10);
            }
            iVar5 = func_0x00f78a4c(lVar10);
            bVar4 = *(char *)(lVar10 + 0x4a) == '\x01';
            if (iVar5 == 0) {
              if (bVar4) {
                if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
                  (*pcVar18)(param_1,lVar10);
                }
                else {
                  if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                     || (plVar7[3] == 0)) goto code_r0x01e47fc0;
                  iVar5 = func_0x00f78a44(lVar10);
                  iVar6 = func_0x00f78ec0(lVar10);
                  if (iVar5 == 0) {
                    uVar3 = *(ushort *)(lVar10 + 0x48);
                    if (iVar6 == 0) {
                      lVar10 = *plVar1 + (ulong)uVar3 * 0x10;
                      (**(code **)(lVar10 + 0x138))(plVar1,param_1,*(undefined8 *)(lVar10 + 0x140));
                      goto code_r0x01e480d4;
                    }
                    lVar10 = func_0x00f78a48(lVar10);
                    lVar14 = *plVar1;
                    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == lVar10) {
                          puVar11 = (undefined8 *)
                                    (lVar14 + (long)(int)(*piVar16 + (uint)uVar3) * 0x10 + 0x138);
                          goto code_r0x01e48260;
                        }
                        piVar16 = piVar16 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar3);
code_r0x01e48260:
                    pcVar18 = (code *)*puVar11;
                    puVar11 = (undefined8 *)puVar11[1];
                  }
                  else {
                    if (iVar6 == 0) {
                      uVar9 = *(undefined8 *)
                               (*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar14 = *plVar1;
                      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)(lVar10 + 0x18)) {
                            lVar14 = lVar14 + (long)(int)(*piVar16 +
                                                         (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e48238;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                      uVar9 = *(undefined8 *)(lVar14 + 8);
                    }
                    puVar11 = (undefined8 *)func_0x00f78acc(uVar9,lVar10);
                    pcVar18 = (code *)*puVar11;
                  }
                  (*pcVar18)(plVar1,param_1,puVar11);
                }
              }
              else {
                if ((*(short *)(lVar10 + 0x48) == -1) || (plVar7[3] == 0)) goto code_r0x01e480c8;
                iVar5 = func_0x00f78a44(lVar10);
                iVar6 = func_0x00f78ec0(lVar10);
                if (iVar5 == 0) {
                  uVar3 = *(ushort *)(lVar10 + 0x48);
                  if (iVar6 == 0) {
                    lVar10 = *param_1 + (ulong)uVar3 * 0x10;
                    (**(code **)(lVar10 + 0x138))(param_1,*(undefined8 *)(lVar10 + 0x140));
                    goto code_r0x01e480d4;
                  }
                  lVar10 = func_0x00f78a48(lVar10);
                  lVar14 = *param_1;
                  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar10) {
                        puVar11 = (undefined8 *)
                                  (lVar14 + (long)(int)(*piVar16 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e481fc;
                      }
                      piVar16 = piVar16 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x00fac1f0(param_1,lVar10,(ulong)uVar3);
code_r0x01e481fc:
                  pcVar18 = (code *)*puVar11;
                  puVar11 = (undefined8 *)puVar11[1];
                }
                else {
                  if (iVar6 == 0) {
                    uVar9 = *(undefined8 *)
                             (*param_1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar14 = *param_1;
                    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == *(long *)(lVar10 + 0x18)) {
                          lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar10 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e481d4;
                        }
                        piVar16 = piVar16 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    lVar14 = func_0x00fac1f0(param_1);
code_r0x01e481d4:
                    uVar9 = *(undefined8 *)(lVar14 + 8);
                  }
                  puVar11 = (undefined8 *)func_0x00f78acc(uVar9,lVar10);
                  pcVar18 = (code *)*puVar11;
                }
                (*pcVar18)(param_1,puVar11);
              }
            }
            else {
              if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
              (*pcVar18)(plVar1,param_1,lVar10);
            }
code_r0x01e480d4:
            lVar8 = lVar8 + 1;
            if (lVar8 == lVar20) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  plStack_58 = param_1;
  if ((bRam0000000003eb5217 & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3d1f8);
    func_0x00f78a20(0x3d3d200);
    func_0x00f78a20(0x3d3a680);
    func_0x00f78a20(0x3d3d208);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5217 = 1;
  }
  lStack_f8 = 0;
  lStack_100 = 0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  fVar23 = *(float *)(lVar8 + 0xac) + extraout_s0;
  *(float *)(lVar8 + 0xac) = fVar23;
  lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x68) != 0)) {
    if (fVar23 < *(float *)(*(long *)(lVar20 + 0x68) + 0x28)) {
      return;
    }
    *(undefined4 *)(lVar8 + 0xac) = 0;
    uVar2 = *(uint *)(lVar8 + 0xe8);
    uVar17 = uVar2;
    if (-1 < (int)(uVar2 - 1)) {
      uVar17 = uVar2 - 1;
    }
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if (((lVar20 != 0) && (*(long *)(lVar20 + 0x30) != 0)) &&
       (lVar20 = *(long *)(*(long *)(lVar20 + 0x30) + 0x40), lVar20 != 0)) {
      /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetHigherAndLowerPositionedPlayers*/ func_0x015a6890(lVar20,*(undefined8 *)(lVar8 + 0xd0),(~uVar2 & 1) + ((int)uVar17 >> 1),
                      (int)uVar17 >> 1,*(undefined8 *)(lVar8 + 0xe0));
      unaff_x27 = *(long *)(lVar8 + 0xe0);
      if (unaff_x27 != 0) {
        uVar15 = 0;
        puVar11 = (undefined8 *)0x3d3d208;
        puVar21 = (undefined8 *)0x3d3d208;
        while( true ) {
          uVar12 = (ulong)(int)*(uint *)(unaff_x27 + 0x18);
          if ((long)uVar12 <= (long)uVar15) goto code_r0x015a8c48;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar15) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar20 = *(long *)(lVar8 + 0xd8);
          unaff_x25 = puVar11;
          if (lVar20 == 0) break;
          uVar17 = 0;
          lVar14 = *(long *)(*(long *)(unaff_x27 + 0x10) + uVar15 * 8 + 0x20);
          lVar10 = 0x20;
          while ((int)uVar17 < (int)*(uint *)(lVar20 + 0x18)) {
            if (*(uint *)(lVar20 + 0x18) <= uVar17) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (lVar14 == *(long *)(*(long *)(lVar20 + 0x10) + lVar10)) {
              lVar20 = *(long *)(lVar8 + 0xd8);
              unaff_x25 = puVar21;
              if (lVar20 == 0) goto code_r0x015a8c44;
              lVar14 = lVar20;
              if (*(uint *)(lVar20 + 0x18) <= uVar15) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar14 = *(long *)(lVar8 + 0xd8);
              }
              lVar20 = *(long *)(lVar20 + 0x10) + uVar15 * 0x20;
              lStack_f8 = *(long *)(lVar20 + 0x28);
              lStack_100 = *(long *)(lVar20 + 0x20);
              lStack_e8 = *(long *)(lVar20 + 0x38);
              lStack_f0 = *(long *)(lVar20 + 0x30);
              if (lVar14 == 0) goto code_r0x015a8c44;
              if (*(uint *)(lVar14 + 0x18) <= uVar17) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar7 = (long *)(*(long *)(lVar14 + 0x10) + lVar10);
              lStack_118 = plVar7[1];
              lStack_120 = *plVar7;
              lStack_108 = plVar7[3];
              lStack_110 = plVar7[2];
              lStack_e0 = lStack_120;
              lStack_d8 = lStack_118;
              lStack_d0 = lStack_110;
              lStack_c8 = lStack_108;
              /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar14,uVar15,&lStack_e0,uRam0000000003d3d208);
              if (*(long *)(lVar8 + 0xd8) == 0) goto code_r0x015a8c44;
              lStack_d8 = lStack_f8;
              lStack_e0 = lStack_100;
              lStack_c8 = lStack_e8;
              lStack_d0 = lStack_f0;
              /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(*(long *)(lVar8 + 0xd8),uVar17,&lStack_e0,uRam0000000003d3d208);
              break;
            }
            uVar17 = uVar17 + 1;
            lVar20 = *(long *)(lVar8 + 0xd8);
            lVar10 = lVar10 + 0x20;
            if (lVar20 == 0) goto code_r0x015a8c44;
          }
          uVar15 = uVar15 + 1;
          unaff_x27 = *(long *)(lVar8 + 0xe0);
          unaff_x25 = puVar21;
          if (unaff_x27 == 0) break;
        }
      }
    }
  }
code_r0x015a8c44:
  puVar11 = unaff_x25;
  func_0x00f78af4();
  uVar12 = extraout_x8;
code_r0x015a8c48:
  if ((int)uVar12 < 1) {
    return;
  }
  uVar17 = 0;
  do {
    if ((uint)uVar12 <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar20 = *(long *)(lVar8 + 0xd8);
    unaff_x25 = puVar11;
    if (lVar20 == 0) goto code_r0x015a8c44;
    unaff_x27 = *(long *)(*(long *)(unaff_x27 + 0x10) + (long)(int)uVar17 * 8 + 0x20);
    if (*(uint *)(lVar20 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = (long)(int)uVar17;
    if (unaff_x27 != *(long *)(*(long *)(lVar20 + 0x10) + lVar10 * 0x20 + 0x20)) {
      lVar20 = *(long *)(lVar8 + 0xd8);
      if (lVar20 == 0) goto code_r0x015a8c44;
      lVar14 = lVar20;
      if (*(uint *)(lVar20 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar14 = *(long *)(lVar8 + 0xd8);
        if (lVar14 == 0) goto code_r0x015a8c44;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar20 + 0x10) + lVar10 * 0x20 + 0x20);
      lVar20 = lVar14;
      if (*(uint *)(lVar14 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar20 = *(long *)(lVar8 + 0xd8);
        if (lVar20 == 0) goto code_r0x015a8c44;
      }
      lVar19 = *(long *)(*(long *)(lVar14 + 0x10) + lVar10 * 0x20 + 0x30);
      lVar14 = lVar20;
      if (*(uint *)(lVar20 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar14 = *(long *)(lVar8 + 0xd8);
        if (lVar14 == 0) goto code_r0x015a8c44;
      }
      lStack_d8 = *(long *)(*(long *)(lVar20 + 0x10) + lVar10 * 0x20 + 0x28);
      lStack_c8 = -1;
      lStack_e0 = unaff_x27;
      lStack_d0 = lVar19;
      /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar14,uVar17,&lStack_e0,*puVar11);
      uVar15 = /*Atlas.UI.Screens.GameInProgressScreen$$IsPlayerOnLeaderBoard*/ func_0x015a8fbc(lVar8,uVar9);
      if ((uVar15 & 1) == 0) {
        lVar20 = *(long *)(lVar8 + 0xd8);
        if (lVar20 == 0) goto code_r0x015a8c44;
        if (*(uint *)(lVar20 + 0x18) <= uVar17) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + lVar10 * 0x20 + 0x28);
        if (lVar20 == 0) goto code_r0x015a8c44;
        /*Atlas.UI.LeaderboardEntryBehaviour$$KillTweens*/ func_0x015ecac0(lVar20,0);
      }
    }
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar20 == 0) || (lVar14 = *(long *)(lVar8 + 0xd8), lVar14 == 0)) goto code_r0x015a8c44;
    lVar20 = *(long *)(lVar20 + 0x68);
    if (*(uint *)(lVar14 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (lVar20 == 0) goto code_r0x015a8c44;
    /*Atlas.UI.MiniLeaderboardBehaviour$$SetPositionBehaviourOrder*/ func_0x01494ad4(lVar20,*(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar10 * 0x20 + 0x28),uVar17,0
                   );
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41090);
    if (((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) ||
       (lVar14 = *(long *)(lVar8 + 0xd8), lVar14 == 0)) goto code_r0x015a8c44;
    lVar20 = *(long *)(*(long *)(lVar20 + 0x20) + 0x10);
    if (*(uint *)(lVar14 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + lVar10 * 0x20 + 0x20);
    if ((lVar14 == 0) || (lVar20 == 0)) goto code_r0x015a8c44;
    uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar20,*(undefined8 *)(lVar14 + 0x28),uRam0000000003d57270);
    lVar20 = *(long *)(lVar8 + 0xd8);
    if (lVar20 == 0) goto code_r0x015a8c44;
    if (*(uint *)(lVar20 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (((unaff_x27 == 0) || (lVar14 = *(long *)(unaff_x27 + 0x10), lVar14 == 0)) ||
       (lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + lVar10 * 0x20 + 0x30), lVar20 == 0))
    goto code_r0x015a8c44;
    uStack_138 = *(undefined8 *)(lVar14 + 0x50);
    uStack_140 = *(undefined8 *)(lVar14 + 0x48);
    uStack_128 = *(undefined8 *)(lVar14 + 0x60);
    uStack_130 = *(undefined8 *)(lVar14 + 0x58);
    /*Atlas.UI.CharacterMetagameData$$UpdateDefinitionAndPlayer*/ func_0x015413f8(lVar20,uVar9,&uStack_140,0);
    lVar20 = *(long *)(lVar8 + 0xd8);
    if (lVar20 == 0) goto code_r0x015a8c44;
    lVar14 = lVar20;
    if (*(uint *)(lVar20 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar14 = *(long *)(lVar8 + 0xd8);
    }
    lVar20 = *(long *)(lVar20 + 0x10) + lVar10 * 0x20;
    uStack_158 = *(undefined8 *)(lVar20 + 0x28);
    uStack_160 = *(undefined8 *)(lVar20 + 0x20);
    uStack_148 = *(undefined8 *)(lVar20 + 0x38);
    uStack_150 = *(undefined8 *)(lVar20 + 0x30);
    if (lVar14 == 0) goto code_r0x015a8c44;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uStack_178 = uStack_158;
    uStack_180 = uStack_160;
    uStack_168 = uStack_148;
    uStack_170 = uStack_150;
    /*Atlas.UI.Screens.GameInProgressScreen$$UpdatePlayerPositionBehaviour*/ func_0x015a90dc(lVar8,&uStack_180,
                    *(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar10 * 0x20 + 0x30),extraout_x1);
    lVar20 = *(long *)(lVar8 + 0xd8);
    if (lVar20 == 0) goto code_r0x015a8c44;
    lVar14 = lVar20;
    if (*(uint *)(lVar20 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar14 = *(long *)(lVar8 + 0xd8);
    }
    if (lVar14 == 0) goto code_r0x015a8c44;
    lVar20 = *(long *)(lVar20 + 0x10) + lVar10 * 0x20;
    lStack_c8 = *(long *)(unaff_x27 + 0x74);
    lStack_d8 = *(long *)(lVar20 + 0x28);
    lStack_e0 = *(long *)(lVar20 + 0x20);
    lStack_d0 = *(long *)(lVar20 + 0x30);
    /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar14,uVar17,&lStack_e0,*puVar11);
    unaff_x27 = *(long *)(lVar8 + 0xe0);
    if (unaff_x27 == 0) goto code_r0x015a8c44;
    uVar17 = uVar17 + 1;
    uVar12 = (ulong)*(uint *)(unaff_x27 + 0x18);
    if ((int)*(uint *)(unaff_x27 + 0x18) <= (int)uVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a89cc | Atlas.UI.Screens.GameInProgressScreen.UpdateAllMiniLeaderboardPositions
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__UpdateAllMiniLeaderboardPositions
               (float param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x25;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x27;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  if ((bRam0000000003eb5217 & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3d1f8);
    func_0x00f78a20(0x3d3d200);
    func_0x00f78a20(0x3d3a680);
    func_0x00f78a20(0x3d3d208);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5217 = 1;
  }
  lStack_b8 = 0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  param_1 = *(float *)(param_2 + 0xac) + param_1;
  *(float *)(param_2 + 0xac) = param_1;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x68) != 0)) {
    if (param_1 < *(float *)(*(long *)(lVar3 + 0x68) + 0x28)) {
      return;
    }
    *(undefined4 *)(param_2 + 0xac) = 0;
    uVar2 = *(uint *)(param_2 + 0xe8);
    uVar6 = uVar2;
    if (-1 < (int)(uVar2 - 1)) {
      uVar6 = uVar2 - 1;
    }
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41088);
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) &&
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 0x40), lVar3 != 0)) {
      /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetHigherAndLowerPositionedPlayers*/ func_0x015a6890(lVar3,*(undefined8 *)(param_2 + 0xd0),(~uVar2 & 1) + ((int)uVar6 >> 1),
                      (int)uVar6 >> 1,*(undefined8 *)(param_2 + 0xe0));
      unaff_x27 = *(long *)(param_2 + 0xe0);
      if (unaff_x27 != 0) {
        uVar5 = 0;
        puVar11 = (undefined8 *)0x3d3d208;
        puVar10 = (undefined8 *)0x3d3d208;
        while( true ) {
          uVar4 = (ulong)(int)*(uint *)(unaff_x27 + 0x18);
          if ((long)uVar4 <= (long)uVar5) goto LAB_015a8c48;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar5) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar3 = *(long *)(param_2 + 0xd8);
          unaff_x25 = puVar11;
          if (lVar3 == 0) break;
          uVar6 = 0;
          lVar8 = *(long *)(*(long *)(unaff_x27 + 0x10) + uVar5 * 8 + 0x20);
          lVar12 = 0x20;
          while ((int)uVar6 < (int)*(uint *)(lVar3 + 0x18)) {
            if (*(uint *)(lVar3 + 0x18) <= uVar6) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (lVar8 == *(long *)(*(long *)(lVar3 + 0x10) + lVar12)) {
              lVar3 = *(long *)(param_2 + 0xd8);
              unaff_x25 = puVar10;
              if (lVar3 == 0) goto LAB_015a8c44;
              lVar8 = lVar3;
              if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar8 = *(long *)(param_2 + 0xd8);
              }
              lVar3 = *(long *)(lVar3 + 0x10) + uVar5 * 0x20;
              lStack_b8 = *(long *)(lVar3 + 0x28);
              lStack_c0 = *(long *)(lVar3 + 0x20);
              lStack_a8 = *(long *)(lVar3 + 0x38);
              lStack_b0 = *(long *)(lVar3 + 0x30);
              if (lVar8 == 0) goto LAB_015a8c44;
              if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar1 = (long *)(*(long *)(lVar8 + 0x10) + lVar12);
              lStack_d8 = plVar1[1];
              lStack_e0 = *plVar1;
              lStack_c8 = plVar1[3];
              lStack_d0 = plVar1[2];
              lStack_a0 = lStack_e0;
              lStack_98 = lStack_d8;
              lStack_90 = lStack_d0;
              lStack_88 = lStack_c8;
              /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar8,uVar5,&lStack_a0,uRam0000000003d3d208);
              if (*(long *)(param_2 + 0xd8) == 0) goto LAB_015a8c44;
              lStack_98 = lStack_b8;
              lStack_a0 = lStack_c0;
              lStack_88 = lStack_a8;
              lStack_90 = lStack_b0;
              /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(*(long *)(param_2 + 0xd8),uVar6,&lStack_a0,uRam0000000003d3d208);
              break;
            }
            uVar6 = uVar6 + 1;
            lVar3 = *(long *)(param_2 + 0xd8);
            lVar12 = lVar12 + 0x20;
            if (lVar3 == 0) goto LAB_015a8c44;
          }
          uVar5 = uVar5 + 1;
          unaff_x27 = *(long *)(param_2 + 0xe0);
          unaff_x25 = puVar10;
          if (unaff_x27 == 0) break;
        }
      }
    }
  }
LAB_015a8c44:
  puVar11 = unaff_x25;
  func_0x00f78af4();
  uVar4 = extraout_x8;
LAB_015a8c48:
  if ((int)uVar4 < 1) {
    return;
  }
  uVar6 = 0;
  do {
    if ((uint)uVar4 <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(param_2 + 0xd8);
    unaff_x25 = puVar11;
    if (lVar3 == 0) goto LAB_015a8c44;
    unaff_x27 = *(long *)(*(long *)(unaff_x27 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar12 = (long)(int)uVar6;
    if (unaff_x27 != *(long *)(*(long *)(lVar3 + 0x10) + lVar12 * 0x20 + 0x20)) {
      lVar3 = *(long *)(param_2 + 0xd8);
      if (lVar3 == 0) goto LAB_015a8c44;
      lVar8 = lVar3;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar8 = *(long *)(param_2 + 0xd8);
        if (lVar8 == 0) goto LAB_015a8c44;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + lVar12 * 0x20 + 0x20);
      lVar3 = lVar8;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar3 = *(long *)(param_2 + 0xd8);
        if (lVar3 == 0) goto LAB_015a8c44;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0x10) + lVar12 * 0x20 + 0x30);
      lVar8 = lVar3;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar8 = *(long *)(param_2 + 0xd8);
        if (lVar8 == 0) goto LAB_015a8c44;
      }
      lStack_98 = *(long *)(*(long *)(lVar3 + 0x10) + lVar12 * 0x20 + 0x28);
      lStack_88 = -1;
      lStack_a0 = unaff_x27;
      lStack_90 = lVar9;
      /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar8,uVar6,&lStack_a0,*puVar11);
      uVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$IsPlayerOnLeaderBoard*/ func_0x015a8fbc(param_2,uVar7);
      if ((uVar5 & 1) == 0) {
        lVar3 = *(long *)(param_2 + 0xd8);
        if (lVar3 == 0) goto LAB_015a8c44;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar12 * 0x20 + 0x28);
        if (lVar3 == 0) goto LAB_015a8c44;
        /*Atlas.UI.LeaderboardEntryBehaviour$$KillTweens*/ func_0x015ecac0(lVar3,0);
      }
    }
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
    if ((lVar3 == 0) || (lVar8 = *(long *)(param_2 + 0xd8), lVar8 == 0)) goto LAB_015a8c44;
    lVar3 = *(long *)(lVar3 + 0x68);
    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (lVar3 == 0) goto LAB_015a8c44;
    /*Atlas.UI.MiniLeaderboardBehaviour$$SetPositionBehaviourOrder*/ func_0x01494ad4(lVar3,*(undefined8 *)(*(long *)(lVar8 + 0x10) + lVar12 * 0x20 + 0x28),uVar6,0);
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41090);
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) ||
       (lVar8 = *(long *)(param_2 + 0xd8), lVar8 == 0)) goto LAB_015a8c44;
    lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar12 * 0x20 + 0x20);
    if ((lVar8 == 0) || (lVar3 == 0)) goto LAB_015a8c44;
    uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,*(undefined8 *)(lVar8 + 0x28),uRam0000000003d57270);
    lVar3 = *(long *)(param_2 + 0xd8);
    if (lVar3 == 0) goto LAB_015a8c44;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (((unaff_x27 == 0) || (lVar8 = *(long *)(unaff_x27 + 0x10), lVar8 == 0)) ||
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar12 * 0x20 + 0x30), lVar3 == 0))
    goto LAB_015a8c44;
    uStack_f8 = *(undefined8 *)(lVar8 + 0x50);
    uStack_100 = *(undefined8 *)(lVar8 + 0x48);
    uStack_e8 = *(undefined8 *)(lVar8 + 0x60);
    uStack_f0 = *(undefined8 *)(lVar8 + 0x58);
    /*Atlas.UI.CharacterMetagameData$$UpdateDefinitionAndPlayer*/ func_0x015413f8(lVar3,uVar7,&uStack_100,0);
    lVar3 = *(long *)(param_2 + 0xd8);
    if (lVar3 == 0) goto LAB_015a8c44;
    lVar8 = lVar3;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar8 = *(long *)(param_2 + 0xd8);
    }
    lVar3 = *(long *)(lVar3 + 0x10) + lVar12 * 0x20;
    uStack_118 = *(undefined8 *)(lVar3 + 0x28);
    uStack_120 = *(undefined8 *)(lVar3 + 0x20);
    uStack_108 = *(undefined8 *)(lVar3 + 0x38);
    uStack_110 = *(undefined8 *)(lVar3 + 0x30);
    if (lVar8 == 0) goto LAB_015a8c44;
    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uStack_138 = uStack_118;
    uStack_140 = uStack_120;
    uStack_128 = uStack_108;
    uStack_130 = uStack_110;
    /*Atlas.UI.Screens.GameInProgressScreen$$UpdatePlayerPositionBehaviour*/ func_0x015a90dc(param_2,&uStack_140,
                    *(undefined8 *)(*(long *)(lVar8 + 0x10) + lVar12 * 0x20 + 0x30),param_3);
    lVar3 = *(long *)(param_2 + 0xd8);
    if (lVar3 == 0) goto LAB_015a8c44;
    lVar8 = lVar3;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar8 = *(long *)(param_2 + 0xd8);
    }
    if (lVar8 == 0) goto LAB_015a8c44;
    lVar3 = *(long *)(lVar3 + 0x10) + lVar12 * 0x20;
    lStack_88 = *(long *)(unaff_x27 + 0x74);
    lStack_98 = *(long *)(lVar3 + 0x28);
    lStack_a0 = *(long *)(lVar3 + 0x20);
    lStack_90 = *(long *)(lVar3 + 0x30);
    /*System.Collections.Generic.List<GameInProgressScreen.PlayerPositionData>$$set_Item*/ func_0x02521e14(lVar8,uVar6,&lStack_a0,*puVar11);
    unaff_x27 = *(long *)(param_2 + 0xe0);
    if (unaff_x27 == 0) goto LAB_015a8c44;
    uVar6 = uVar6 + 1;
    uVar4 = (ulong)*(uint *)(unaff_x27 + 0x18);
    if ((int)*(uint *)(unaff_x27 + 0x18) <= (int)uVar6) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a8fbc | Atlas.UI.Screens.GameInProgressScreen.IsPlayerOnLeaderBoard
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a90dc | Atlas.UI.Screens.GameInProgressScreen.UpdatePlayerPositionBehaviour
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9304 | Atlas.UI.Screens.GameInProgressScreen.OnExitInProgressState
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9894 | Atlas.UI.Screens.GameInProgressScreen.OnPlayerPickedUpUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a99bc | Atlas.UI.Screens.GameInProgressScreen.OnPlayerPickUpCancelled
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9a98 | Atlas.UI.Screens.GameInProgressScreen.OnPlayerAttachedUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9bb0 | Atlas.UI.Screens.GameInProgressScreen.OnPlayerUsedUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9cc4 | Atlas.UI.Screens.GameInProgressScreen.OnPlayerDetachedUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9da8 | Atlas.UI.Screens.GameInProgressScreen.OnPlayerHitByUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9ea0 | Atlas.UI.Screens.GameInProgressScreen.OnDriftButtonStateChanged
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15a9f20 | Atlas.UI.Screens.GameInProgressScreen.PlaySplat
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15aa000 | Atlas.UI.Screens.GameInProgressScreen.StopSplat
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15aa0d8 | Atlas.UI.Screens.GameInProgressScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x015aa30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa9b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015aa310) */
/* WARNING: Removing unreachable block (ram,0x015aa320) */
/* WARNING: Removing unreachable block (ram,0x015aa9b8) */
/* WARNING: Removing unreachable block (ram,0x015aa9c8) */
/* WARNING: Removing unreachable block (ram,0x015aa9d0) */
/* WARNING: Removing unreachable block (ram,0x015aa9dc) */
/* WARNING: Removing unreachable block (ram,0x015aa9e8) */
/* WARNING: Removing unreachable block (ram,0x015aaa04) */
/* WARNING: Removing unreachable block (ram,0x015aaa0c) */
/* WARNING: Removing unreachable block (ram,0x015aaa20) */
/* WARNING: Removing unreachable block (ram,0x015aaa28) */
/* WARNING: Removing unreachable block (ram,0x015aaa34) */
/* WARNING: Removing unreachable block (ram,0x015aaa4c) */
/* WARNING: Removing unreachable block (ram,0x015aaa54) */
/* WARNING: Removing unreachable block (ram,0x015aaa60) */
/* WARNING: Removing unreachable block (ram,0x015aaa68) */
/* WARNING: Removing unreachable block (ram,0x015aaa78) */
/* WARNING: Removing unreachable block (ram,0x015aaa94) */
/* WARNING: Removing unreachable block (ram,0x015aaa9c) */
/* WARNING: Removing unreachable block (ram,0x015aaaa8) */
/* WARNING: Removing unreachable block (ram,0x015ab494) */
/* WARNING: Removing unreachable block (ram,0x015aaab8) */
/* WARNING: Removing unreachable block (ram,0x015aaac8) */
/* WARNING: Removing unreachable block (ram,0x015aaad0) */
/* WARNING: Removing unreachable block (ram,0x015aaadc) */
/* WARNING: Removing unreachable block (ram,0x015aaaec) */
/* WARNING: Removing unreachable block (ram,0x015aab3c) */
/* WARNING: Removing unreachable block (ram,0x015aaaf4) */
/* WARNING: Removing unreachable block (ram,0x015aab04) */
/* WARNING: Removing unreachable block (ram,0x015aab0c) */
/* WARNING: Removing unreachable block (ram,0x015aab18) */
/* WARNING: Removing unreachable block (ram,0x015aab24) */
/* WARNING: Removing unreachable block (ram,0x015aab2c) */
/* WARNING: Removing unreachable block (ram,0x015aab40) */
/* WARNING: Removing unreachable block (ram,0x015aab54) */
/* WARNING: Removing unreachable block (ram,0x015aab5c) */
/* WARNING: Removing unreachable block (ram,0x015aab80) */
/* WARNING: Removing unreachable block (ram,0x015aab90) */
/* WARNING: Removing unreachable block (ram,0x015ab324) */
/* WARNING: Removing unreachable block (ram,0x015aab98) */
/* WARNING: Removing unreachable block (ram,0x015ab32c) */
/* WARNING: Removing unreachable block (ram,0x015aabac) */
/* WARNING: Removing unreachable block (ram,0x015ab334) */
/* WARNING: Removing unreachable block (ram,0x015aabb4) */
/* WARNING: Removing unreachable block (ram,0x015ab314) */
/* WARNING: Removing unreachable block (ram,0x015aabc0) */
/* WARNING: Removing unreachable block (ram,0x015ab33c) */
/* WARNING: Removing unreachable block (ram,0x015aabcc) */
/* WARNING: Removing unreachable block (ram,0x015aabd8) */
/* WARNING: Removing unreachable block (ram,0x015aabdc) */
/* WARNING: Removing unreachable block (ram,0x015aac10) */
/* WARNING: Removing unreachable block (ram,0x015aac24) */
/* WARNING: Removing unreachable block (ram,0x015aac30) */
/* WARNING: Removing unreachable block (ram,0x015aac34) */
/* WARNING: Removing unreachable block (ram,0x015aac38) */
/* WARNING: Removing unreachable block (ram,0x015aac4c) */
/* WARNING: Removing unreachable block (ram,0x015aac54) */
/* WARNING: Removing unreachable block (ram,0x015aac60) */
/* WARNING: Removing unreachable block (ram,0x015aac6c) */
/* WARNING: Removing unreachable block (ram,0x015aac8c) */
/* WARNING: Removing unreachable block (ram,0x015aac80) */
/* WARNING: Removing unreachable block (ram,0x015aac94) */
/* WARNING: Removing unreachable block (ram,0x015aaca4) */
/* WARNING: Removing unreachable block (ram,0x015aacac) */
/* WARNING: Removing unreachable block (ram,0x015aacb8) */
/* WARNING: Removing unreachable block (ram,0x015aacc4) */
/* WARNING: Removing unreachable block (ram,0x015aaccc) */
/* WARNING: Removing unreachable block (ram,0x015aacdc) */
/* WARNING: Removing unreachable block (ram,0x015aace4) */
/* WARNING: Removing unreachable block (ram,0x015aacf0) */
/* WARNING: Removing unreachable block (ram,0x015aacfc) */
/* WARNING: Removing unreachable block (ram,0x015aad08) */
/* WARNING: Removing unreachable block (ram,0x015aad10) */
/* WARNING: Removing unreachable block (ram,0x015aad20) */
/* WARNING: Removing unreachable block (ram,0x015aad28) */
/* WARNING: Removing unreachable block (ram,0x015aad34) */
/* WARNING: Removing unreachable block (ram,0x015aad40) */
/* WARNING: Removing unreachable block (ram,0x015aad48) */
/* WARNING: Removing unreachable block (ram,0x015aad50) */
/* WARNING: Removing unreachable block (ram,0x015aad58) */
/* WARNING: Removing unreachable block (ram,0x015aad8c) */
/* WARNING: Removing unreachable block (ram,0x015aad94) */
/* WARNING: Removing unreachable block (ram,0x015aad9c) */
/* WARNING: Removing unreachable block (ram,0x015aada4) */
/* WARNING: Removing unreachable block (ram,0x015aaf18) */
/* WARNING: Removing unreachable block (ram,0x015aaf28) */
/* WARNING: Removing unreachable block (ram,0x015aaf2c) */
/* WARNING: Removing unreachable block (ram,0x015aaf30) */
/* WARNING: Removing unreachable block (ram,0x015aaf44) */
/* WARNING: Removing unreachable block (ram,0x015aaf5c) */
/* WARNING: Removing unreachable block (ram,0x015aaf7c) */
/* WARNING: Removing unreachable block (ram,0x015aaf80) */
/* WARNING: Removing unreachable block (ram,0x015aaf84) */
/* WARNING: Removing unreachable block (ram,0x015aadcc) */
/* WARNING: Removing unreachable block (ram,0x015aadd4) */
/* WARNING: Removing unreachable block (ram,0x015aaf88) */
/* WARNING: Removing unreachable block (ram,0x015aaf8c) */
/* WARNING: Removing unreachable block (ram,0x015aaf90) */
/* WARNING: Removing unreachable block (ram,0x015ab2d8) */
/* WARNING: Removing unreachable block (ram,0x015ab2dc) */
/* WARNING: Removing unreachable block (ram,0x015ab2e0) */
/* WARNING: Removing unreachable block (ram,0x015ab2e4) */
/* WARNING: Removing unreachable block (ram,0x015ab2e8) */
/* WARNING: Removing unreachable block (ram,0x015ab2ec) */
/* WARNING: Removing unreachable block (ram,0x015ab308) */
/* WARNING: Removing unreachable block (ram,0x015aaf94) */
/* WARNING: Removing unreachable block (ram,0x015aafa4) */
/* WARNING: Removing unreachable block (ram,0x015aafac) */
/* WARNING: Removing unreachable block (ram,0x015aafb8) */
/* WARNING: Removing unreachable block (ram,0x015aafc4) */
/* WARNING: Removing unreachable block (ram,0x015aafcc) */
/* WARNING: Removing unreachable block (ram,0x015aafdc) */
/* WARNING: Removing unreachable block (ram,0x015aafe4) */
/* WARNING: Removing unreachable block (ram,0x015aaff0) */
/* WARNING: Removing unreachable block (ram,0x015aaffc) */
/* WARNING: Removing unreachable block (ram,0x015ab004) */
/* WARNING: Removing unreachable block (ram,0x015ab008) */
/* WARNING: Removing unreachable block (ram,0x015ab010) */
/* WARNING: Removing unreachable block (ram,0x015ab024) */
/* WARNING: Removing unreachable block (ram,0x015ab018) */
/* WARNING: Removing unreachable block (ram,0x015ab02c) */
/* WARNING: Removing unreachable block (ram,0x015ab03c) */
/* WARNING: Removing unreachable block (ram,0x015ab034) */
/* WARNING: Removing unreachable block (ram,0x015ab040) */
/* WARNING: Removing unreachable block (ram,0x015ab048) */
/* WARNING: Removing unreachable block (ram,0x015ab06c) */
/* WARNING: Removing unreachable block (ram,0x015ab07c) */
/* WARNING: Removing unreachable block (ram,0x015ab30c) */
/* WARNING: Removing unreachable block (ram,0x015ab084) */
/* WARNING: Removing unreachable block (ram,0x015ab08c) */
/* WARNING: Removing unreachable block (ram,0x015ab090) */
/* WARNING: Removing unreachable block (ram,0x015ab094) */
/* WARNING: Removing unreachable block (ram,0x015ab1e8) */
/* WARNING: Removing unreachable block (ram,0x015ab0a0) */
/* WARNING: Removing unreachable block (ram,0x015ab0a8) */
/* WARNING: Removing unreachable block (ram,0x015ab344) */
/* WARNING: Removing unreachable block (ram,0x015ab0b0) */
/* WARNING: Removing unreachable block (ram,0x015ab0b8) */
/* WARNING: Removing unreachable block (ram,0x015ab34c) */
/* WARNING: Removing unreachable block (ram,0x015ab0d0) */
/* WARNING: Removing unreachable block (ram,0x015ab354) */
/* WARNING: Removing unreachable block (ram,0x015ab0d8) */
/* WARNING: Removing unreachable block (ram,0x015ab35c) */
/* WARNING: Removing unreachable block (ram,0x015ab0e4) */
/* WARNING: Removing unreachable block (ram,0x015ab36c) */
/* WARNING: Removing unreachable block (ram,0x015ab0f0) */
/* WARNING: Removing unreachable block (ram,0x015ab374) */
/* WARNING: Removing unreachable block (ram,0x015ab118) */
/* WARNING: Removing unreachable block (ram,0x015ab37c) */
/* WARNING: Removing unreachable block (ram,0x015ab120) */
/* WARNING: Removing unreachable block (ram,0x015ab384) */
/* WARNING: Removing unreachable block (ram,0x015ab12c) */
/* WARNING: Removing unreachable block (ram,0x015ab394) */
/* WARNING: Removing unreachable block (ram,0x015ab14c) */
/* WARNING: Removing unreachable block (ram,0x015ab39c) */
/* WARNING: Removing unreachable block (ram,0x015ab154) */
/* WARNING: Removing unreachable block (ram,0x015ab3a4) */
/* WARNING: Removing unreachable block (ram,0x015ab174) */
/* WARNING: Removing unreachable block (ram,0x015ab3ac) */
/* WARNING: Removing unreachable block (ram,0x015ab1a4) */
/* WARNING: Removing unreachable block (ram,0x015ab3b4) */
/* WARNING: Removing unreachable block (ram,0x015ab1ac) */
/* WARNING: Removing unreachable block (ram,0x015ab3bc) */
/* WARNING: Removing unreachable block (ram,0x015ab1b8) */
/* WARNING: Removing unreachable block (ram,0x015ab3cc) */
/* WARNING: Removing unreachable block (ram,0x015ab1c4) */
/* WARNING: Removing unreachable block (ram,0x015ab1ec) */
/* WARNING: Removing unreachable block (ram,0x015ab21c) */
/* WARNING: Removing unreachable block (ram,0x015ab230) */
/* WARNING: Removing unreachable block (ram,0x015ab238) */
/* WARNING: Removing unreachable block (ram,0x015ab23c) */
/* WARNING: Removing unreachable block (ram,0x015ab24c) */
/* WARNING: Removing unreachable block (ram,0x015ab254) */
/* WARNING: Removing unreachable block (ram,0x015ab260) */
/* WARNING: Removing unreachable block (ram,0x015ab26c) */
/* WARNING: Removing unreachable block (ram,0x015ab274) */
/* WARNING: Removing unreachable block (ram,0x015ab284) */
/* WARNING: Removing unreachable block (ram,0x015ab28c) */
/* WARNING: Removing unreachable block (ram,0x015ab298) */
/* WARNING: Removing unreachable block (ram,0x015ab2a4) */
/* WARNING: Removing unreachable block (ram,0x015ab2bc) */
/* WARNING: Removing unreachable block (ram,0x015aae04) */
/* WARNING: Removing unreachable block (ram,0x015aae14) */
/* WARNING: Removing unreachable block (ram,0x015aae1c) */
/* WARNING: Removing unreachable block (ram,0x015aae28) */
/* WARNING: Removing unreachable block (ram,0x015aae40) */
/* WARNING: Removing unreachable block (ram,0x015aae48) */
/* WARNING: Removing unreachable block (ram,0x015aae68) */
/* WARNING: Removing unreachable block (ram,0x015aae98) */
/* WARNING: Removing unreachable block (ram,0x015aaea0) */
/* WARNING: Removing unreachable block (ram,0x015aaeac) */
/* WARNING: Removing unreachable block (ram,0x015aaeb8) */
/* WARNING: Removing unreachable block (ram,0x015aaed0) */
/* WARNING: Removing unreachable block (ram,0x015aaee0) */
/* WARNING: Removing unreachable block (ram,0x015aaee8) */
/* WARNING: Removing unreachable block (ram,0x015aaef4) */
/* WARNING: Removing unreachable block (ram,0x015aaf00) */
/* WARNING: Removing unreachable block (ram,0x015aaf08) */
/* WARNING: Removing unreachable block (ram,0x015ab2c0) */
/* WARNING: Removing unreachable block (ram,0x015ab2d4) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_Screens_GameInProgressScreen__OnUpdate
                (uint param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined4 *unaff_x23;
  undefined4 *puVar19;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 *puStack_160;
  undefined4 *puStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  ulong uStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint uStack_100;
  byte bStack_fc;
  undefined8 uStack_fb;
  undefined7 uStack_f3;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined4 uStack_a1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  ppuVar6 = (undefined1 **)&uStack_120;
  lStack_68 = *(long *)PTR_03a5d648;
  puVar15 = (undefined1 *)0x3eb5000;
  if ((bRam0000000003eb5225 & 1) == 0) {
    func_0x00f78a20(0x3d56850);
    func_0x00f78a20(0x3d56848);
    func_0x00f78a20(0x3d56840);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d68478);
    func_0x00f78a20(0x3d67c80);
    bRam0000000003eb5225 = 1;
  }
  uVar10 = 0x3d41088;
  ppppppuVar17 = (undefined8 ******)0x3d41080;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(char *)(param_2 + 0xf4) == '\0') {
LAB_015aa1ec:
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
    if (lVar8 == 0) goto LAB_015aa564;
    uVar9 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(lVar8,0);
    if ((int)uVar9 == 0) {
      puStack_140 = puVar15;
      puVar19 = unaff_x23;
      if (*(long *)PTR_03a5d648 == lStack_68) {
        return uVar9;
      }
      goto LAB_015aa568;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41088);
    if (lVar8 == 0) goto LAB_015aa564;
    puVar15 = *(undefined1 **)(lVar8 + 0x38);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
    if (lVar8 == 0) goto LAB_015aa564;
    if (*(int *)(lVar8 + 0x290) == 0) {
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41088);
      if (lVar8 == 0) goto LAB_015aa564;
      plVar13 = *(long **)(lVar8 + 0x30);
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar13 + 300)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 +
                     -8) == /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
          if (puVar15 != (undefined1 *)0x0) {
            if (*(int *)(param_2 + 0xec) == *(int *)(puVar15 + 0x68) + 1) {
              iVar14 = *(int *)((long)plVar13 + 0x24c);
              if (*(int *)(param_2 + 0xf0) == iVar14) goto code_r0x015aa234;
            }
            else {
              iVar14 = *(int *)((long)plVar13 + 0x24c);
            }
            unaff_x23 = (undefined4 *)((long)plVar13 + 0x24c);
            *(int *)(param_2 + 0xec) = *(int *)(puVar15 + 0x68) + 1;
            *(int *)(param_2 + 0xf0) = iVar14;
            if (*(char *)(param_2 + 0x108) == '\0') goto code_r0x015aa234;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            unaff_x24 = (undefined1 *)0x3d56850;
            param_4 = uRam0000000003d56850;
            /*Unity.Collections.FixedStringMethods$$Append<FixedString32Bytes>*/ func_0x018587fc(&uStack_90,/*STR('<size=')*/ uRam0000000003d68478);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
            if (lVar8 != 0) {
              unaff_x25 = 0x3d56848;
              /*Unity.Collections.FixedStringMethods$$Append<FixedString32Bytes>*/ func_0x018586e4(&uStack_90,*(undefined4 *)(lVar8 + 0x78),uRam0000000003d56848);
              /*Unity.Collections.FixedStringMethods$$Append<FixedString32Bytes>*/ func_0x018586a4(&uStack_90,0x3e,uRam0000000003d56840);
              uVar11 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(*(int *)(puVar15 + 0x68) + 1,1,*unaff_x23,0);
              /*Unity.Collections.FixedStringMethods$$Append<FixedString32Bytes>*/ func_0x018586e4(&uStack_90,uVar11,uRam0000000003d56848);
              /*Unity.Collections.FixedStringMethods$$Append<FixedString32Bytes>*/ func_0x018587fc(&uStack_90,/*STR('</size>/')*/ uRam0000000003d67c80,uRam0000000003d56850);
              param_4 = uRam0000000003d56848;
              /*Unity.Collections.FixedStringMethods$$Append<FixedString32Bytes>*/ func_0x018586e4(&uStack_90,*unaff_x23);
              puVar15 = (undefined1 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
              uVar11 = /*Unity.Collections.FixedString32Bytes$$ToString*/ func_0x02fd65dc(&uStack_90,0);
              if (puVar15 != (undefined1 *)0x0) {
                param_4 = 0;
                /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetProgressCounter*/ func_0x015ad9a0(puVar15,uVar11);
                goto code_r0x015aa234;
              }
            }
          }
          goto LAB_015aa564;
        }
      }
    }
code_r0x015aa234:
    Atlas_UI_Screens_GameInProgressScreen__UpdateAllMiniLeaderboardPositions(param_1,param_2,1);
    if (*(long *)(param_2 + 0xc0) == 0) goto LAB_015aa564;
    lVar8 = *(long *)(*(long *)(param_2 + 0xc0) + 0x20);
    if (lVar8 != 0) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_e8,lVar8,0);
      uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
      uStack_c8 = uStack_e0;
      uStack_c0 = uStack_d8;
      if ((*(long *)(param_2 + 0xc0) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_2 + 0xc0) + 0x20), lVar8 == 0)) goto LAB_015aa564;
      bVar3 = *(byte *)(lVar8 + 300);
      puVar15 = (undefined1 *)(ulong)bVar3;
      if (bVar3 == 0) goto LAB_015aa340;
      uVar1 = *(uint *)(lVar8 + 0x128);
      puVar19 = (undefined4 *)(ulong)uVar1;
      uStack_b0 = *(undefined8 *)(lVar8 + 0x12d);
      uStack_a8 = (undefined7)*(undefined8 *)(lVar8 + 0x135);
      uStack_a1 = *(undefined4 *)(lVar8 + 0x13c);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_f3 = uStack_a8;
      uStack_fb = uStack_b0;
      uStack_ec = uStack_a1;
      uStack_118 = uStack_c8;
      uStack_120 = uStack_d0;
      uStack_110 = uStack_c0;
      uStack_100 = uVar1;
      bStack_fc = bVar3;
      /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x01660558(&uStack_e8,&uStack_100,&uStack_120,0);
      puStack_140 = (undefined1 *)(ulong)uStack_e8;
      puVar15 = (undefined1 *)0x8;
      param_4 = 1;
      puVar21 = (undefined *)0x15aa310;
      uVar10 = param_2;
      goto code_r0x015aa56c;
    }
LAB_015aa340:
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
    if (lVar8 == 0) goto LAB_015aa564;
    /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$OnUpdate*/ func_0x015ad710(param_1,lVar8,0);
    puVar15 = (undefined1 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41088);
    if (((lVar8 == 0) || (*(long *)(lVar8 + 0x38) == 0)) || (puVar15 == (undefined1 *)0x0))
    goto LAB_015aa564;
    param_4 = 0;
    /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWrongWayIndicator*/ func_0x015ae168(puVar15,*(undefined1 *)(*(long *)(lVar8 + 0x38) + 0x9b));
    if (*(long *)(param_2 + 0xf8) == 0) goto LAB_015aa564;
    /*Atlas.UI.UIChallengeController$$OnUpdate*/ func_0x01518f84(*(long *)(param_2 + 0xf8),0);
    puVar21 = (undefined *)0x15aa3b0;
    param_4 = param_2;
    pppppppuVar20 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x015aa5e8:
    *(undefined8 *******)((long)ppuVar6 + -0x30) = ppppppuVar17;
    *(ulong *)((long)ppuVar6 + -0x28) = uVar10;
    *(undefined1 **)((long)ppuVar6 + -0x20) = puVar15;
    *(ulong *)((long)ppuVar6 + -0x18) = param_4;
    *(undefined8 ********)((long)ppuVar6 + -0x10) = pppppppuVar20;
    *(undefined **)((long)ppuVar6 + -8) = puVar21;
    if ((bRam0000000003eb5227 & 1) == 0) {
      func_0x00f78a20(0x3d41088);
      bRam0000000003eb5227 = 1;
    }
    uVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41088);
    if ((uVar10 != 0) && (*(long *)(uVar10 + 0x30) != 0)) {
      return uVar10;
    }
    uVar11 = func_0x00f78af4();
    *(undefined8 *******)((long)ppuVar6 + -0x60) = ppppppuVar17;
    *(undefined8 *)((long)ppuVar6 + -0x58) = 0x3d41088;
    *(undefined8 *)((long)ppuVar6 + -0x50) = 0x3eb5000;
    *(ulong *)((long)ppuVar6 + -0x48) = param_2;
    *(undefined1 **)((long)ppuVar6 + -0x40) = (undefined1 *)((long)ppuVar6 + -0x10);
    *(undefined **)((long)ppuVar6 + -0x38) = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
    if ((bRam0000000003eb5228 & 1) == 0) {
      func_0x00f78a20(0x3d41080);
      func_0x00f78a20(0x3d41088);
      bRam0000000003eb5228 = 1;
    }
    *(undefined1 **)((long)ppuVar6 + -0xa0) = unaff_x24;
    *(undefined4 **)((long)ppuVar6 + -0x98) = unaff_x23;
    *(undefined8 *******)((long)ppuVar6 + -0x90) = ppppppuVar17;
    *(undefined8 *)((long)ppuVar6 + -0x88) = 0x3eb5000;
    *(undefined8 *)((long)ppuVar6 + -0x80) = 0x3d41088;
    *(undefined8 *)((long)ppuVar6 + -0x78) = uVar11;
    *(undefined1 **)((long)ppuVar6 + -0x70) = (undefined1 *)((long)ppuVar6 + -0x40);
    *(undefined **)((long)ppuVar6 + -0x68) = &UNK_015aa6a0;
    uVar10 = 0x3eb5000;
    puVar21 = (undefined *)0x3d41088;
    if ((bRam0000000003eb522e & 1) == 0) {
      func_0x00f78a20(0x3d3b9d0);
      func_0x00f78a20(0x3d3b898);
      func_0x00f78a20(0x3d41080);
      func_0x00f78a20(0x3d41088);
      bRam0000000003eb522e = 1;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar11,uRam0000000003d41088);
    pppppppuVar18 = (undefined8 *******)ppppppuVar17;
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
       (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 200), lVar8 != 0)) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      uVar10 = (ulong)uVar1;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar11,uRam0000000003d41088);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar8 != 0)) {
        ppppppuVar17 = (undefined8 ******)0x3d41080;
        uVar2 = *(uint *)(lVar8 + 0x18);
        unaff_x23 = (undefined4 *)(ulong)uVar2;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41080);
        pppppppuVar18 = (undefined8 *******)(undefined8 ******)0x3d41080;
        if (lVar8 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar8,0 < (int)(uVar2 + uVar1),0);
          uVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41080);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar11,uRam0000000003d41088);
          if (((lVar8 != 0) &&
              (pppppppuVar18 = (undefined8 *******)ppppppuVar17, *(long *)(lVar8 + 0x38) != 0)) &&
             (*(undefined8 *)((long)ppuVar6 + -0xa8) =
                   *(undefined8 *)(*(long *)(lVar8 + 0x38) + 200), uVar10 != 0)) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(uVar10,(undefined1 *)((long)ppuVar6 + -0xa8),0);
            uVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41080);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar11,uRam0000000003d41088);
            if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
               (*(undefined8 *)((long)ppuVar6 + -0xb0) =
                     *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0xd0), uVar10 != 0)) {
              uVar10 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(uVar10,(undefined1 *)((long)ppuVar6 + -0xb0),0);
              return uVar10;
            }
          }
        }
      }
    }
    uVar12 = func_0x00f78af4();
    puVar7 = (undefined8 *)((long)ppuVar6 + -0x1f0);
    *(undefined8 *)((long)ppuVar6 + -0x150) = unaff_d15;
    *(undefined8 *)((long)ppuVar6 + -0x148) = unaff_d14;
    *(undefined8 *)((long)ppuVar6 + -0x140) = unaff_d13;
    *(undefined8 *)((long)ppuVar6 + -0x138) = unaff_d12;
    *(undefined8 *)((long)ppuVar6 + -0x130) = unaff_d11;
    *(undefined8 *)((long)ppuVar6 + -0x128) = unaff_d10;
    *(undefined8 *)((long)ppuVar6 + -0x120) = unaff_d9;
    *(ulong *)((long)ppuVar6 + -0x118) = (ulong)param_1;
    *(undefined8 *)((long)ppuVar6 + -0x110) = unaff_x28;
    *(undefined8 *)((long)ppuVar6 + -0x108) = unaff_x27;
    *(undefined8 *)((long)ppuVar6 + -0x100) = unaff_x26;
    *(undefined8 *)((long)ppuVar6 + -0xf8) = unaff_x25;
    *(undefined1 **)((long)ppuVar6 + -0xf0) = unaff_x24;
    *(undefined4 **)((long)ppuVar6 + -0xe8) = unaff_x23;
    *(undefined8 ********)((long)ppuVar6 + -0xe0) = pppppppuVar18;
    *(undefined8 *)((long)ppuVar6 + -0xd8) = 0x3d41088;
    *(ulong *)((long)ppuVar6 + -0xd0) = uVar10;
    *(undefined8 *)((long)ppuVar6 + -200) = uVar11;
    *(undefined1 **)((long)ppuVar6 + -0xc0) = (undefined1 *)((long)ppuVar6 + -0x70);
    *(undefined **)((long)ppuVar6 + -0xb8) =
         &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
    pppppppuVar20 = (undefined8 *******)((long)ppuVar6 + -0xc0);
    puVar16 = (undefined1 *)0x3eb5000;
    if ((bRam0000000003eb5230 & 1) == 0) {
      func_0x00f78a20(0x3d33450);
      func_0x00f78a20(0x3d33458);
      func_0x00f78a20(0x3d33460);
      func_0x00f78a20(0x3d3d1c8);
      func_0x00f78a20(0x3d41080);
      func_0x00f78a20(0x3d41088);
      func_0x00f78a20(0x3d41090);
      bRam0000000003eb5230 = 1;
    }
    *(undefined8 *)((long)ppuVar6 + -0x170) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x168) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x160) = 0;
    *(undefined4 *)((long)ppuVar6 + -0x178) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x180) = 0;
    *(undefined4 *)((long)ppuVar6 + -0x188) = 0;
    *(undefined8 *)((long)ppuVar6 + -400) = 0;
    *(undefined4 *)((long)ppuVar6 + -0x198) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x1a8) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x1a0) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x1b0) = 0;
    *(undefined4 *)((long)ppuVar6 + -0x1b4) = 0;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41080);
    if (((lVar8 == 0) || (*(long *)(lVar8 + 0x1c0) == 0)) ||
       (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x1c0),0), lVar8 == 0)) {
      func_0x00f78af4();
      uVar11 = func_0x00f78b24();
      func_0x00f78ac0(uVar11,0);
      __Unwind_Resume();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
      (*pcVar5)();
    }
    param_4 = (ulong)(*(char *)(uVar12 + 0x109) == '\0');
    puVar22 = &UNK_015aa9b8;
    goto code_r0x0322ef1c;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41088);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar8 + 0x40) + 0x49) == '\0') {
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41080);
      if (lVar8 == 0) goto LAB_015aa564;
      /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$RestoreButtonInteractableStates*/ func_0x015ac6a0(lVar8,0);
      *(undefined1 *)(param_2 + 0xf4) = 0;
    }
    goto LAB_015aa1ec;
  }
LAB_015aa564:
  func_0x00f78af4();
  puStack_140 = puVar15;
  puVar19 = unaff_x23;
LAB_015aa568:
  puVar21 = &Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement;
  auVar23 = ___stack_chk_fail();
  puVar15 = auVar23._8_8_;
  uVar10 = auVar23._0_8_;
code_r0x015aa56c:
  ppuVar6 = &puStack_160;
  pppppppuStack_150 = (undefined8 *******)0x3d41080;
  puStack_148 = (undefined *)0x3d41088;
  pppppppuVar20 = &pppppppuStack_130;
  ppppppuVar17 = (undefined8 ******)0x3eb5000;
  unaff_x23 = (undefined4 *)0x3d41080;
  puStack_160 = unaff_x24;
  puStack_158 = puVar19;
  uStack_138 = param_2;
  pppppppuStack_130 = (undefined8 *******)&stack0xfffffffffffffff0;
  puStack_128 = puVar21;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb522b = 1;
  }
  uVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
  puVar4 = puStack_140;
  puVar21 = puStack_148;
  pppppppuVar18 = pppppppuStack_150;
  if (uVar9 == 0) {
    puVar21 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
    param_2 = func_0x00f78af4();
    goto code_r0x015aa5e8;
  }
  puVar16 = puStack_140;
  uVar12 = uStack_138;
  pppppppuVar20 = pppppppuStack_130;
  puVar22 = puStack_128;
  switch((ulong)puVar15 & 0xffffffff) {
  case 0:
    lVar8 = *(long *)(uVar9 + 0x140);
    break;
  case 1:
    if (*(long *)(uVar9 + 0xf8) != 0) {
      lVar8 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(uVar9 + 0xf8),0);
      puVar16 = puStack_140;
      uVar12 = uStack_138;
      pppppppuVar20 = pppppppuStack_130;
      puVar22 = puStack_128;
      break;
    }
    goto code_r0x015ac7d4;
  case 2:
    lVar8 = *(long *)(uVar9 + 0x88);
    break;
  case 3:
    lVar8 = *(long *)(uVar9 + 0x1f8);
    break;
  case 4:
    lVar8 = *(long *)(uVar9 + 0xa0);
    break;
  case 5:
    lVar8 = *(long *)(uVar9 + 200);
    break;
  case 6:
    lVar8 = *(long *)(uVar9 + 0x278);
    if (lVar8 == 0) goto code_r0x015ac7d4;
    goto code_r0x015ac7b4;
  case 7:
    lVar8 = *(long *)(uVar9 + 0x68);
    goto joined_r0x015ac7b0;
  case 8:
    lVar8 = *(long *)(uVar9 + 0x90);
    break;
  case 9:
    lVar8 = *(long *)(uVar9 + 0x288);
joined_r0x015ac7b0:
    if (lVar8 != 0) {
code_r0x015ac7b4:
      lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0,param_4,0);
      puVar16 = puStack_140;
      uVar12 = uStack_138;
      pppppppuVar20 = pppppppuStack_130;
      puVar22 = puStack_128;
      break;
    }
    goto code_r0x015ac7d4;
  default:
    return uVar9;
  }
  puVar7 = &uStack_120;
  puStack_140 = puVar16;
  uStack_138 = uVar12;
  pppppppuStack_130 = pppppppuVar20;
  puStack_128 = puVar22;
  if (lVar8 != 0) {
code_r0x0322ef1c:
    puVar7[-6] = pppppppuVar18;
    puVar7[-5] = puVar21;
    puVar7[-4] = puVar16;
    puVar7[-3] = uVar12;
    puVar7[-2] = pppppppuVar20;
    puVar7[-1] = puVar22;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ebf4c0)(lVar8,param_4);
    return uVar10;
  }
code_r0x015ac7d4:
  auVar23 = func_0x00f78af4();
  lVar8 = auVar23._0_8_;
  puStack_148 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__IsHUDElementActive;
  pppppppuStack_150 = &pppppppuStack_130;
  switch(auVar23._8_8_ & 0xffffffff) {
  case 0:
    lVar8 = *(long *)(lVar8 + 0x140);
    break;
  case 1:
    if (*(long *)(lVar8 + 0xf8) == 0) goto code_r0x015ac89c;
    lVar8 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar8 + 0xf8),0);
    break;
  case 2:
    lVar8 = *(long *)(lVar8 + 0x88);
    break;
  case 3:
  case 4:
    lVar8 = *(long *)(lVar8 + 0x1f8);
    break;
  case 5:
    lVar8 = *(long *)(lVar8 + 200);
    break;
  case 6:
    lVar8 = *(long *)(lVar8 + 0x278);
    goto joined_r0x015ac880;
  case 7:
    lVar8 = *(long *)(lVar8 + 0x68);
    goto joined_r0x015ac880;
  case 8:
    lVar8 = *(long *)(lVar8 + 0x90);
    break;
  case 9:
    lVar8 = *(long *)(lVar8 + 0x288);
joined_r0x015ac880:
    if (lVar8 == 0) goto code_r0x015ac89c;
    lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0);
    break;
  default:
    return 0;
  }
  if (lVar8 != 0) {
    puStack_160 = puVar4;
    puStack_158 = (undefined4 *)param_4;
    if (pcRam0000000003ebf4d0 == (code *)0x0) {
      pcRam0000000003ebf4d0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ebf4d0)(lVar8);
    return uVar10;
  }
code_r0x015ac89c:
  lVar8 = func_0x00f78af4();
  puStack_158 = (undefined4 *)
                &Atlas_UI_Screens_GameInProgressScreenBehaviour__ResetTimerRootSortOrder;
  puStack_160 = (undefined1 *)&pppppppuStack_150;
  if ((bRam0000000003eb5237 & 1) == 0) {
    puStack_160 = (undefined1 *)&pppppppuStack_150;
    func_0x00f78a20(0x3d577e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5237 = 1;
  }
  uVar11 = *(undefined8 *)(lVar8 + 0x90);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar10 & 1) == 0) {
    if (*(long *)(lVar8 + 0x90) != 0) {
      lVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar8 + 0x90),uRam0000000003d577e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      if (lVar8 != 0) {
        if (pcRam0000000003ec2ef8 == (code *)0x0) {
          pcRam0000000003ec2ef8 =
               (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*pcRam0000000003ec2ef8)(lVar8,0);
        return uVar10;
      }
    }
    auVar24 = func_0x00f78af4();
    *(int *)(auVar24._0_8_ + 0x290) = auVar24._8_4_;
    return auVar24._0_8_;
  }
  return uVar10;
}



// ============================================================
// RVA: 0x15aa56c | Atlas.UI.Screens.GameInProgressScreen.SetEnabledHUDElement
// ============================================================

/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa9b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015aa9b8) */
/* WARNING: Removing unreachable block (ram,0x015aa9c8) */
/* WARNING: Removing unreachable block (ram,0x015aa9d0) */
/* WARNING: Removing unreachable block (ram,0x015aa9dc) */
/* WARNING: Removing unreachable block (ram,0x015aa9e8) */
/* WARNING: Removing unreachable block (ram,0x015aaa04) */
/* WARNING: Removing unreachable block (ram,0x015aaa0c) */
/* WARNING: Removing unreachable block (ram,0x015aaa20) */
/* WARNING: Removing unreachable block (ram,0x015aaa28) */
/* WARNING: Removing unreachable block (ram,0x015aaa34) */
/* WARNING: Removing unreachable block (ram,0x015aaa4c) */
/* WARNING: Removing unreachable block (ram,0x015aaa54) */
/* WARNING: Removing unreachable block (ram,0x015aaa60) */
/* WARNING: Removing unreachable block (ram,0x015aaa68) */
/* WARNING: Removing unreachable block (ram,0x015aaa78) */
/* WARNING: Removing unreachable block (ram,0x015aaa94) */
/* WARNING: Removing unreachable block (ram,0x015aaa9c) */
/* WARNING: Removing unreachable block (ram,0x015aaaa8) */
/* WARNING: Removing unreachable block (ram,0x015ab494) */
/* WARNING: Removing unreachable block (ram,0x015aaab8) */
/* WARNING: Removing unreachable block (ram,0x015aaac8) */
/* WARNING: Removing unreachable block (ram,0x015aaad0) */
/* WARNING: Removing unreachable block (ram,0x015aaadc) */
/* WARNING: Removing unreachable block (ram,0x015aaaec) */
/* WARNING: Removing unreachable block (ram,0x015aab3c) */
/* WARNING: Removing unreachable block (ram,0x015aaaf4) */
/* WARNING: Removing unreachable block (ram,0x015aab04) */
/* WARNING: Removing unreachable block (ram,0x015aab0c) */
/* WARNING: Removing unreachable block (ram,0x015aab18) */
/* WARNING: Removing unreachable block (ram,0x015aab24) */
/* WARNING: Removing unreachable block (ram,0x015aab2c) */
/* WARNING: Removing unreachable block (ram,0x015aab40) */
/* WARNING: Removing unreachable block (ram,0x015aab54) */
/* WARNING: Removing unreachable block (ram,0x015aab5c) */
/* WARNING: Removing unreachable block (ram,0x015aab80) */
/* WARNING: Removing unreachable block (ram,0x015aab90) */
/* WARNING: Removing unreachable block (ram,0x015ab324) */
/* WARNING: Removing unreachable block (ram,0x015aab98) */
/* WARNING: Removing unreachable block (ram,0x015ab32c) */
/* WARNING: Removing unreachable block (ram,0x015aabac) */
/* WARNING: Removing unreachable block (ram,0x015ab334) */
/* WARNING: Removing unreachable block (ram,0x015aabb4) */
/* WARNING: Removing unreachable block (ram,0x015ab314) */
/* WARNING: Removing unreachable block (ram,0x015aabc0) */
/* WARNING: Removing unreachable block (ram,0x015ab33c) */
/* WARNING: Removing unreachable block (ram,0x015aabcc) */
/* WARNING: Removing unreachable block (ram,0x015aabd8) */
/* WARNING: Removing unreachable block (ram,0x015aabdc) */
/* WARNING: Removing unreachable block (ram,0x015aac10) */
/* WARNING: Removing unreachable block (ram,0x015aac24) */
/* WARNING: Removing unreachable block (ram,0x015aac30) */
/* WARNING: Removing unreachable block (ram,0x015aac34) */
/* WARNING: Removing unreachable block (ram,0x015aac38) */
/* WARNING: Removing unreachable block (ram,0x015aac4c) */
/* WARNING: Removing unreachable block (ram,0x015aac54) */
/* WARNING: Removing unreachable block (ram,0x015aac60) */
/* WARNING: Removing unreachable block (ram,0x015aac6c) */
/* WARNING: Removing unreachable block (ram,0x015aac8c) */
/* WARNING: Removing unreachable block (ram,0x015aac80) */
/* WARNING: Removing unreachable block (ram,0x015aac94) */
/* WARNING: Removing unreachable block (ram,0x015aaca4) */
/* WARNING: Removing unreachable block (ram,0x015aacac) */
/* WARNING: Removing unreachable block (ram,0x015aacb8) */
/* WARNING: Removing unreachable block (ram,0x015aacc4) */
/* WARNING: Removing unreachable block (ram,0x015aaccc) */
/* WARNING: Removing unreachable block (ram,0x015aacdc) */
/* WARNING: Removing unreachable block (ram,0x015aace4) */
/* WARNING: Removing unreachable block (ram,0x015aacf0) */
/* WARNING: Removing unreachable block (ram,0x015aacfc) */
/* WARNING: Removing unreachable block (ram,0x015aad08) */
/* WARNING: Removing unreachable block (ram,0x015aad10) */
/* WARNING: Removing unreachable block (ram,0x015aad20) */
/* WARNING: Removing unreachable block (ram,0x015aad28) */
/* WARNING: Removing unreachable block (ram,0x015aad34) */
/* WARNING: Removing unreachable block (ram,0x015aad40) */
/* WARNING: Removing unreachable block (ram,0x015aad48) */
/* WARNING: Removing unreachable block (ram,0x015aad50) */
/* WARNING: Removing unreachable block (ram,0x015aad58) */
/* WARNING: Removing unreachable block (ram,0x015aad8c) */
/* WARNING: Removing unreachable block (ram,0x015aad94) */
/* WARNING: Removing unreachable block (ram,0x015aad9c) */
/* WARNING: Removing unreachable block (ram,0x015aada4) */
/* WARNING: Removing unreachable block (ram,0x015aaf18) */
/* WARNING: Removing unreachable block (ram,0x015aaf28) */
/* WARNING: Removing unreachable block (ram,0x015aaf2c) */
/* WARNING: Removing unreachable block (ram,0x015aaf30) */
/* WARNING: Removing unreachable block (ram,0x015aaf44) */
/* WARNING: Removing unreachable block (ram,0x015aaf5c) */
/* WARNING: Removing unreachable block (ram,0x015aaf7c) */
/* WARNING: Removing unreachable block (ram,0x015aaf80) */
/* WARNING: Removing unreachable block (ram,0x015aaf84) */
/* WARNING: Removing unreachable block (ram,0x015aadcc) */
/* WARNING: Removing unreachable block (ram,0x015aadd4) */
/* WARNING: Removing unreachable block (ram,0x015aaf88) */
/* WARNING: Removing unreachable block (ram,0x015aaf8c) */
/* WARNING: Removing unreachable block (ram,0x015aaf90) */
/* WARNING: Removing unreachable block (ram,0x015ab2d8) */
/* WARNING: Removing unreachable block (ram,0x015ab2dc) */
/* WARNING: Removing unreachable block (ram,0x015ab2e0) */
/* WARNING: Removing unreachable block (ram,0x015ab2e4) */
/* WARNING: Removing unreachable block (ram,0x015ab2e8) */
/* WARNING: Removing unreachable block (ram,0x015ab2ec) */
/* WARNING: Removing unreachable block (ram,0x015ab308) */
/* WARNING: Removing unreachable block (ram,0x015aaf94) */
/* WARNING: Removing unreachable block (ram,0x015aafa4) */
/* WARNING: Removing unreachable block (ram,0x015aafac) */
/* WARNING: Removing unreachable block (ram,0x015aafb8) */
/* WARNING: Removing unreachable block (ram,0x015aafc4) */
/* WARNING: Removing unreachable block (ram,0x015aafcc) */
/* WARNING: Removing unreachable block (ram,0x015aafdc) */
/* WARNING: Removing unreachable block (ram,0x015aafe4) */
/* WARNING: Removing unreachable block (ram,0x015aaff0) */
/* WARNING: Removing unreachable block (ram,0x015aaffc) */
/* WARNING: Removing unreachable block (ram,0x015ab004) */
/* WARNING: Removing unreachable block (ram,0x015ab008) */
/* WARNING: Removing unreachable block (ram,0x015ab010) */
/* WARNING: Removing unreachable block (ram,0x015ab024) */
/* WARNING: Removing unreachable block (ram,0x015ab018) */
/* WARNING: Removing unreachable block (ram,0x015ab02c) */
/* WARNING: Removing unreachable block (ram,0x015ab03c) */
/* WARNING: Removing unreachable block (ram,0x015ab034) */
/* WARNING: Removing unreachable block (ram,0x015ab040) */
/* WARNING: Removing unreachable block (ram,0x015ab048) */
/* WARNING: Removing unreachable block (ram,0x015ab06c) */
/* WARNING: Removing unreachable block (ram,0x015ab07c) */
/* WARNING: Removing unreachable block (ram,0x015ab30c) */
/* WARNING: Removing unreachable block (ram,0x015ab084) */
/* WARNING: Removing unreachable block (ram,0x015ab08c) */
/* WARNING: Removing unreachable block (ram,0x015ab090) */
/* WARNING: Removing unreachable block (ram,0x015ab094) */
/* WARNING: Removing unreachable block (ram,0x015ab1e8) */
/* WARNING: Removing unreachable block (ram,0x015ab0a0) */
/* WARNING: Removing unreachable block (ram,0x015ab0a8) */
/* WARNING: Removing unreachable block (ram,0x015ab344) */
/* WARNING: Removing unreachable block (ram,0x015ab0b0) */
/* WARNING: Removing unreachable block (ram,0x015ab0b8) */
/* WARNING: Removing unreachable block (ram,0x015ab34c) */
/* WARNING: Removing unreachable block (ram,0x015ab0d0) */
/* WARNING: Removing unreachable block (ram,0x015ab354) */
/* WARNING: Removing unreachable block (ram,0x015ab0d8) */
/* WARNING: Removing unreachable block (ram,0x015ab35c) */
/* WARNING: Removing unreachable block (ram,0x015ab0e4) */
/* WARNING: Removing unreachable block (ram,0x015ab36c) */
/* WARNING: Removing unreachable block (ram,0x015ab0f0) */
/* WARNING: Removing unreachable block (ram,0x015ab374) */
/* WARNING: Removing unreachable block (ram,0x015ab118) */
/* WARNING: Removing unreachable block (ram,0x015ab37c) */
/* WARNING: Removing unreachable block (ram,0x015ab120) */
/* WARNING: Removing unreachable block (ram,0x015ab384) */
/* WARNING: Removing unreachable block (ram,0x015ab12c) */
/* WARNING: Removing unreachable block (ram,0x015ab394) */
/* WARNING: Removing unreachable block (ram,0x015ab14c) */
/* WARNING: Removing unreachable block (ram,0x015ab39c) */
/* WARNING: Removing unreachable block (ram,0x015ab154) */
/* WARNING: Removing unreachable block (ram,0x015ab3a4) */
/* WARNING: Removing unreachable block (ram,0x015ab174) */
/* WARNING: Removing unreachable block (ram,0x015ab3ac) */
/* WARNING: Removing unreachable block (ram,0x015ab1a4) */
/* WARNING: Removing unreachable block (ram,0x015ab3b4) */
/* WARNING: Removing unreachable block (ram,0x015ab1ac) */
/* WARNING: Removing unreachable block (ram,0x015ab3bc) */
/* WARNING: Removing unreachable block (ram,0x015ab1b8) */
/* WARNING: Removing unreachable block (ram,0x015ab3cc) */
/* WARNING: Removing unreachable block (ram,0x015ab1c4) */
/* WARNING: Removing unreachable block (ram,0x015ab1ec) */
/* WARNING: Removing unreachable block (ram,0x015ab21c) */
/* WARNING: Removing unreachable block (ram,0x015ab230) */
/* WARNING: Removing unreachable block (ram,0x015ab238) */
/* WARNING: Removing unreachable block (ram,0x015ab23c) */
/* WARNING: Removing unreachable block (ram,0x015ab24c) */
/* WARNING: Removing unreachable block (ram,0x015ab254) */
/* WARNING: Removing unreachable block (ram,0x015ab260) */
/* WARNING: Removing unreachable block (ram,0x015ab26c) */
/* WARNING: Removing unreachable block (ram,0x015ab274) */
/* WARNING: Removing unreachable block (ram,0x015ab284) */
/* WARNING: Removing unreachable block (ram,0x015ab28c) */
/* WARNING: Removing unreachable block (ram,0x015ab298) */
/* WARNING: Removing unreachable block (ram,0x015ab2a4) */
/* WARNING: Removing unreachable block (ram,0x015ab2bc) */
/* WARNING: Removing unreachable block (ram,0x015aae04) */
/* WARNING: Removing unreachable block (ram,0x015aae14) */
/* WARNING: Removing unreachable block (ram,0x015aae1c) */
/* WARNING: Removing unreachable block (ram,0x015aae28) */
/* WARNING: Removing unreachable block (ram,0x015aae40) */
/* WARNING: Removing unreachable block (ram,0x015aae48) */
/* WARNING: Removing unreachable block (ram,0x015aae68) */
/* WARNING: Removing unreachable block (ram,0x015aae98) */
/* WARNING: Removing unreachable block (ram,0x015aaea0) */
/* WARNING: Removing unreachable block (ram,0x015aaeac) */
/* WARNING: Removing unreachable block (ram,0x015aaeb8) */
/* WARNING: Removing unreachable block (ram,0x015aaed0) */
/* WARNING: Removing unreachable block (ram,0x015aaee0) */
/* WARNING: Removing unreachable block (ram,0x015aaee8) */
/* WARNING: Removing unreachable block (ram,0x015aaef4) */
/* WARNING: Removing unreachable block (ram,0x015aaf00) */
/* WARNING: Removing unreachable block (ram,0x015aaf08) */
/* WARNING: Removing unreachable block (ram,0x015ab2c0) */
/* WARNING: Removing unreachable block (ram,0x015ab2d4) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
                (undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined1 *****unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auStack_230 [60];
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb522b = 1;
  }
  uVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if (uVar4 == 0) {
    uVar5 = func_0x00f78af4();
    uStack_70 = 0x3eb5000;
    puStack_48 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
    uStack_68 = param_1;
    uStack_60 = param_2;
    uStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5227 & 1) == 0) {
      func_0x00f78a20(0x3d41088);
      bRam0000000003eb5227 = 1;
    }
    uVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41088);
    if ((uVar4 != 0) && (*(long *)(uVar4 + 0x30) != 0)) {
      return uVar4;
    }
    uVar6 = func_0x00f78af4();
    uStack_a0 = 0x3eb5000;
    uStack_98 = 0x3d41088;
    uStack_90 = 0x3eb5000;
    puStack_78 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
    pppuStack_b0 = &ppuStack_80;
    uStack_88 = uVar5;
    ppuStack_80 = &puStack_50;
    if ((bRam0000000003eb5228 & 1) == 0) {
      func_0x00f78a20(0x3d41080);
      func_0x00f78a20(0x3d41088);
      bRam0000000003eb5228 = 1;
    }
    puStack_a8 = &UNK_015aa6a0;
    unaff_x21 = 0x3d41088;
    if ((bRam0000000003eb522e & 1) == 0) {
      func_0x00f78a20(0x3d3b9d0);
      func_0x00f78a20(0x3d3b898);
      func_0x00f78a20(0x3d41080);
      func_0x00f78a20(0x3d41088);
      bRam0000000003eb522e = 1;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41088);
    unaff_x22 = uVar9;
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 200), lVar7 != 0)) {
      iVar1 = *(int *)(lVar7 + 0x18);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41088);
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0xd0), lVar7 != 0)) {
        uVar9 = 0x3d41080;
        iVar2 = *(int *)(lVar7 + 0x18);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d41080);
        unaff_x22 = 0x3d41080;
        if (lVar7 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar7,0 < iVar2 + iVar1,0);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d41080);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41088);
          if (((lVar8 != 0) && (unaff_x22 = uVar9, *(long *)(lVar8 + 0x38) != 0)) &&
             (uStack_e8 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 200), lVar7 != 0)) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar7,&uStack_e8,0);
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d41080);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41088);
            if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
               (uStack_f0 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar7 != 0)) {
              uVar4 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar7,&uStack_f0,0);
              return uVar4;
            }
          }
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    puStack_f8 = &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
    unaff_x29 = &ppppuStack_100;
    unaff_x20 = 0x3eb5000;
    ppppuStack_100 = &pppuStack_b0;
    if ((bRam0000000003eb5230 & 1) == 0) {
      func_0x00f78a20(0x3d33450);
      func_0x00f78a20(0x3d33458);
      func_0x00f78a20(0x3d33460);
      func_0x00f78a20(0x3d3d1c8);
      func_0x00f78a20(0x3d41080);
      func_0x00f78a20(0x3d41088);
      func_0x00f78a20(0x3d41090);
      bRam0000000003eb5230 = 1;
    }
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f0 = 0;
    uStack_1f4 = 0;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(unaff_x19,uRam0000000003d41080);
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x1c0) == 0)) ||
       (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x1c0),0), lVar7 == 0)) {
      func_0x00f78af4();
      uVar9 = func_0x00f78b24();
      func_0x00f78ac0(uVar9,0);
      __Unwind_Resume();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
      (*pcVar3)();
    }
    param_3 = (ulong)(*(char *)(unaff_x19 + 0x109) == '\0');
    unaff_x30 = &UNK_015aa9b8;
    register0x00000008 = (BADSPACEBASE *)auStack_230;
    goto code_r0x0322ef1c;
  }
  switch(param_2 & 0xffffffff) {
  case 0:
    lVar7 = *(long *)(uVar4 + 0x140);
    break;
  case 1:
    if (*(long *)(uVar4 + 0xf8) != 0) {
      lVar7 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(uVar4 + 0xf8),0);
      break;
    }
    goto code_r0x015ac7d4;
  case 2:
    lVar7 = *(long *)(uVar4 + 0x88);
    break;
  case 3:
    lVar7 = *(long *)(uVar4 + 0x1f8);
    break;
  case 4:
    lVar7 = *(long *)(uVar4 + 0xa0);
    break;
  case 5:
    lVar7 = *(long *)(uVar4 + 200);
    break;
  case 6:
    lVar7 = *(long *)(uVar4 + 0x278);
    if (lVar7 == 0) goto code_r0x015ac7d4;
    goto code_r0x015ac7b4;
  case 7:
    lVar7 = *(long *)(uVar4 + 0x68);
    goto joined_r0x015ac7b0;
  case 8:
    lVar7 = *(long *)(uVar4 + 0x90);
    break;
  case 9:
    lVar7 = *(long *)(uVar4 + 0x288);
joined_r0x015ac7b0:
    if (lVar7 != 0) {
code_r0x015ac7b4:
      lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0,param_3,0);
      break;
    }
    goto code_r0x015ac7d4;
  default:
    return uVar4;
  }
  if (lVar7 != 0) {
code_r0x0322ef1c:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebf4c0)(lVar7,param_3);
    return uVar4;
  }
code_r0x015ac7d4:
  auVar10 = func_0x00f78af4();
  lVar7 = auVar10._0_8_;
  switch(auVar10._8_8_ & 0xffffffff) {
  case 0:
    lVar7 = *(long *)(lVar7 + 0x140);
    break;
  case 1:
    if (*(long *)(lVar7 + 0xf8) == 0) goto code_r0x015ac89c;
    lVar7 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar7 + 0xf8),0);
    break;
  case 2:
    lVar7 = *(long *)(lVar7 + 0x88);
    break;
  case 3:
  case 4:
    lVar7 = *(long *)(lVar7 + 0x1f8);
    break;
  case 5:
    lVar7 = *(long *)(lVar7 + 200);
    break;
  case 6:
    lVar7 = *(long *)(lVar7 + 0x278);
    goto joined_r0x015ac880;
  case 7:
    lVar7 = *(long *)(lVar7 + 0x68);
    goto joined_r0x015ac880;
  case 8:
    lVar7 = *(long *)(lVar7 + 0x90);
    break;
  case 9:
    lVar7 = *(long *)(lVar7 + 0x288);
joined_r0x015ac880:
    if (lVar7 == 0) goto code_r0x015ac89c;
    lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
    break;
  default:
    return 0;
  }
  if (lVar7 != 0) {
    if (pcRam0000000003ebf4d0 == (code *)0x0) {
      pcRam0000000003ebf4d0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebf4d0)(lVar7);
    return uVar4;
  }
code_r0x015ac89c:
  lVar7 = func_0x00f78af4();
  puStack_48 = (undefined *)param_3;
  if ((bRam0000000003eb5237 & 1) == 0) {
    func_0x00f78a20(0x3d577e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5237 = 1;
  }
  uVar9 = *(undefined8 *)(lVar7 + 0x90);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  if (*(long *)(lVar7 + 0x90) != 0) {
    lVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar7 + 0x90),uRam0000000003d577e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (lVar7 != 0) {
      if (pcRam0000000003ec2ef8 == (code *)0x0) {
        pcRam0000000003ec2ef8 =
             (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
      }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ec2ef8)(lVar7,0);
      return uVar4;
    }
  }
  auVar11 = func_0x00f78af4();
  *(int *)(auVar11._0_8_ + 0x290) = auVar11._8_4_;
  return auVar11._0_8_;
}



// ============================================================
// RVA: 0x15aa5e8 | Atlas.UI.Screens.GameInProgressScreen.UpdateArcade
// ============================================================

/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */

void Atlas_UI_Screens_GameInProgressScreen__UpdateArcade
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               )

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  int aiStack_1c8 [5];
  int iStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined8 uStack_190;
  float fStack_188;
  undefined8 uStack_180;
  float fStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
    return;
  }
  uVar7 = func_0x00f78af4();
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41088);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
     (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 200), lVar6 != 0)) {
    iVar4 = *(int *)(lVar6 + 0x18);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41088);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0xd0), lVar6 != 0)) {
      iVar16 = *(int *)(lVar6 + 0x18);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d41080);
      if (lVar6 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar6,0 < iVar16 + iVar4,0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d41080);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41088);
        if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
           (uStack_a8 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 200), lVar6 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar6,&uStack_a8,0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d41080);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41088);
          if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
             (uStack_b0 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar6 != 0)) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar6,&uStack_b0,0);
            return;
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5230 & 1) == 0) {
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5230 = 1;
  }
  uStack_170 = 0;
  uStack_168 = 0;
  lStack_160 = 0;
  fStack_178 = 0.0;
  uStack_180 = 0;
  fStack_188 = 0.0;
  uStack_190 = 0;
  fStack_198 = 0.0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b0 = 0;
  iStack_1b4 = 0;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x1c0) == 0)) ||
     (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x1c0),0), lVar8 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,*(char *)(lVar6 + 0x109) == '\0',0);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x1c0) == 0)) ||
     (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x1c0),0), lVar8 == 0)) goto code_r0x015ab4c4;
  iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar8,0);
  if (iVar4 == 0) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x9c) = 0;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41090);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar8 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar8 + 0x40),0);
  if (*(long *)(lVar6 + 0x78) == 0) {
code_r0x015aaa34:
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar11 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x80);
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar6 + 0x78) + 0x10);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar11 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar11 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar16 = 0;
  iVar4 = 0;
  iStack_1e4 = 0;
  uVar15 = 0;
code_r0x015aaa94:
  if (*(long *)(lVar11 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if (*(int *)(*(long *)(lVar11 + 0x1c8) + 0x18) <= (int)uVar15) {
    return;
  }
  if (*(int *)(lVar6 + 0xbc) <= iStack_1e4) {
    return;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar12 = (long)(int)uVar15;
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar11 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x80), lVar11 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar11 + 0x74) == 1;
  }
  lVar11 = *(long *)(lVar6 + 0x78);
  if ((bool)(bVar3 & lVar11 == 0)) {
    if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1e0,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
    uStack_168 = uStack_1d8;
    uStack_170 = uStack_1e0;
    lStack_160 = lStack_1d0;
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_170,uRam0000000003d33458);
      lVar11 = lStack_160;
      if ((uVar9 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_160 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lStack_160 + 0x10);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar10 = *(long *)(lVar10 + 0x1c8);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x015ab4d8;
      }
      lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar14 != *(long *)(lVar10 + 0x80));
    *(long *)(lVar6 + 0x78) = lVar11;
code_r0x015aabdc:
    aiStack_1c8[iVar4] = 0x132;
    iVar16 = iStack_1b4;
    iVar4 = iStack_1b4 + 1;
    iStack_1b4 = iVar4;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_170,uRam0000000003d33450);
    if ((iVar4 != 0) && (aiStack_1c8[iVar16] == 0x132)) {
      iStack_1b4 = iVar16;
      iVar4 = iVar16;
    }
    lVar11 = *(long *)(lVar6 + 0x78);
    iVar16 = iVar4;
  }
  if (lVar11 == 0) {
code_r0x015aac8c:
    uVar7 = 0;
    cVar13 = '\0';
  }
  else {
    lVar10 = *(long *)(lVar11 + 0x10);
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar10 == *(long *)(lVar11 + 0x80))) goto code_r0x015aac8c;
    cVar13 = *(char *)(lVar6 + 0xb8);
    uVar7 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  fVar23 = param_2;
  fVar25 = param_3;
  if (*(long *)(lVar11 + 0x80) != 0) {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar11,0);
    if ((iVar5 != 0) && (fVar23 = param_2, fVar25 = param_3, *(char *)(lVar6 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if ((((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x80), lVar11 == 0)) ||
        (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) ||
       (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) goto code_r0x015ab4c4;
    fVar17 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    uStack_180 = CONCAT44(param_2,fVar17);
    fVar23 = param_2;
    fVar25 = param_3;
    fStack_178 = param_3;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if (((lVar11 == 0) || (*(long *)(lVar11 + 0x38) == 0)) ||
       ((lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10), lVar11 == 0 ||
        (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)))) goto code_r0x015ab4c4;
    fVar18 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    uStack_190 = CONCAT44(fVar23,fVar18);
    fVar24 = param_3 - fVar25;
    uStack_1a0 = CONCAT44(param_2 - fVar23,fVar17 - fVar18);
    fStack_198 = fVar24;
    fStack_188 = fVar25;
    if (cVar13 != '\0') {
      if (lVar8 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar6 + 0xa8);
      param_4 = *(float *)(lVar6 + 0xa0);
      param_2 = param_2 + *(float *)(lVar6 + 0xa4);
      fVar17 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar17 + param_4,lVar8,0);
      fVar23 = param_2;
      fVar25 = param_3;
      if (cVar13 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar17) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar17)) {
            bVar3 = fVar17 == 1.0;
            bVar2 = 1.0 <= fVar17;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar6,&uStack_190,&uStack_180,1,1), iVar5 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar10 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar19 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar11 + 0x1c0),0);
      uStack_1b0 = CONCAT44(fVar23,uVar19);
      uStack_1a8 = CONCAT44(param_4,fVar25);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_1b0,0);
      if (lVar10 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar17,lVar10,0);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar11,uVar7,*(undefined1 *)(lVar6 + 0xb8),0);
      if (*(char *)(lVar6 + 0xb8) != '\0') {
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
        if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
        lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar11 + 0x88) = *(undefined4 *)(lVar6 + 0x98);
      }
      iStack_1e4 = iStack_1e4 + 1;
      goto code_r0x015ab2c0;
    }
    fVar18 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_1a0,0);
    fVar23 = *(float *)(lVar6 + 0x8c);
    fVar25 = fVar24;
    if (fVar23 <= fVar18) goto code_r0x015aaf94;
    fVar18 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_1a0,0);
    if ((lVar8 == 0) ||
       (fVar22 = fVar23, fVar25 = fVar24, lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0), lVar11 == 0))
    goto code_r0x015ab4c4;
    fVar20 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
    fVar22 = fVar23 * fVar22;
    fVar23 = *(float *)(lVar6 + 0x94);
    if (fVar23 < fVar24 * fVar25 + fVar18 * fVar20 + fVar22) goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  param_3 = fVar25;
  if (*(long *)(lVar11 + 0x80) != 0) {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x80), lVar11 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar11 + 0x9c) = 0;
    param_3 = fVar25;
  }
  if (*(char *)(lVar6 + 0x9c) == '\0') {
    if (*(char *)(lVar6 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar6);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar6);
    }
  }
  if (*(char *)(lVar6 + 0x10a) == '\0') {
    cVar13 = *(char *)(lVar6 + 0xb8);
  }
  else {
    cVar13 = '\0';
  }
  if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1e0,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
  uStack_168 = uStack_1d8;
  uStack_170 = uStack_1e0;
  lStack_160 = lStack_1d0;
  do {
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_170,uRam0000000003d33458);
      lVar11 = lStack_160;
      param_2 = fVar23;
      if ((uVar9 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_160 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar23 = *(float *)(lVar6 + 0x8c);
      if ((fVar23 < *(float *)(lStack_160 + 0x18)) &&
         (param_2 = fVar23, lStack_160 != *(long *)(lVar6 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_160 + 0x28) == '\0');
    lVar10 = *(long *)(lStack_160 + 0x10);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar10 + 0x9c) != '\0');
  *(undefined1 *)(lVar10 + 0x9c) = 1;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + 0x1c8);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar6 + 0x98),lVar10,*(undefined8 *)(lVar11 + 0x10),cVar13 != '\0'
                  ,0);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + 0x1c8);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
  uVar19 = *(undefined4 *)(lVar11 + 0x1c);
  param_2 = *(float *)(lVar11 + 0x20);
  fVar25 = *(float *)(lVar11 + 0x24);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar11 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar21 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar11 + 0x1c0),0);
  uStack_1b0 = CONCAT44(fVar23,uVar21);
  uStack_1a8 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_1b0,0);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar19,lVar10,0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar15) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar11,uVar7,*(undefined1 *)(lVar6 + 0xb8),0);
  iStack_1e4 = iStack_1e4 + 1;
  bVar3 = true;
  param_3 = fVar25;
code_r0x015ab1ec:
  aiStack_1c8[iVar16] = 0x41c;
  iVar4 = iStack_1b4;
  iVar16 = iStack_1b4 + 1;
  iStack_1b4 = iVar16;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_170,uRam0000000003d33450);
  if ((iVar16 != 0) && (aiStack_1c8[iVar4] == 0x41c)) {
    iStack_1b4 = iVar4;
    iVar16 = iVar4;
  }
  iVar4 = iVar16;
  if (!bVar3) {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar11,0,cVar13 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar15 = uVar15 + 1;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x15aa650 | Atlas.UI.Screens.GameInProgressScreen.OnLateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */

void Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               )

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  int aiStack_198 [5];
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  undefined8 uStack_160;
  float fStack_158;
  undefined8 uStack_150;
  float fStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
     (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 200), lVar6 != 0)) {
    iVar4 = *(int *)(lVar6 + 0x18);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0xd0), lVar6 != 0)) {
      iVar16 = *(int *)(lVar6 + 0x18);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
      if (lVar6 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar6,0 < iVar16 + iVar4,0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
        if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
           (uStack_78 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + 200), lVar6 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar6,&uStack_78,0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
          if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
             (uStack_80 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0xd0), lVar6 != 0)) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar6,&uStack_80,0);
            return;
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5230 & 1) == 0) {
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5230 = 1;
  }
  uStack_140 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  fStack_148 = 0.0;
  uStack_150 = 0;
  fStack_158 = 0.0;
  uStack_160 = 0;
  fStack_168 = 0.0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  iStack_184 = 0;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x1c0) == 0)) ||
     (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x1c0),0), lVar7 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,*(char *)(lVar6 + 0x109) == '\0',0);
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x1c0) == 0)) ||
     (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x1c0),0), lVar7 == 0)) goto code_r0x015ab4c4;
  iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar7,0);
  if (iVar4 == 0) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x9c) = 0;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41090);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar7 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar7 + 0x40),0);
  if (*(long *)(lVar6 + 0x78) == 0) {
code_r0x015aaa34:
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar10 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x80);
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar6 + 0x78) + 0x10);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar10 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar16 = 0;
  iVar4 = 0;
  iStack_1b4 = 0;
  uVar15 = 0;
code_r0x015aaa94:
  if (*(long *)(lVar10 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if (*(int *)(*(long *)(lVar10 + 0x1c8) + 0x18) <= (int)uVar15) {
    return;
  }
  if (*(int *)(lVar6 + 0xbc) <= iStack_1b4) {
    return;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar11 = (long)(int)uVar15;
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar10 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x80), lVar10 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar10 + 0x74) == 1;
  }
  lVar10 = *(long *)(lVar6 + 0x78);
  if ((bool)(bVar3 & lVar10 == 0)) {
    if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1b0,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
    uStack_138 = uStack_1a8;
    uStack_140 = uStack_1b0;
    lStack_130 = lStack_1a0;
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_140,uRam0000000003d33458);
      lVar10 = lStack_130;
      if ((uVar8 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_130 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lStack_130 + 0x10);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar9 = *(long *)(lVar9 + 0x1c8);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar15) {
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x015ab4d8;
      }
      lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar14 != *(long *)(lVar9 + 0x80));
    *(long *)(lVar6 + 0x78) = lVar10;
code_r0x015aabdc:
    aiStack_198[iVar4] = 0x132;
    iVar16 = iStack_184;
    iVar4 = iStack_184 + 1;
    iStack_184 = iVar4;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_140,uRam0000000003d33450);
    if ((iVar4 != 0) && (aiStack_198[iVar16] == 0x132)) {
      iStack_184 = iVar16;
      iVar4 = iVar16;
    }
    lVar10 = *(long *)(lVar6 + 0x78);
    iVar16 = iVar4;
  }
  if (lVar10 == 0) {
code_r0x015aac8c:
    uVar12 = 0;
    cVar13 = '\0';
  }
  else {
    lVar9 = *(long *)(lVar10 + 0x10);
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar9 == *(long *)(lVar10 + 0x80))) goto code_r0x015aac8c;
    cVar13 = *(char *)(lVar6 + 0xb8);
    uVar12 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  fVar23 = param_2;
  fVar25 = param_3;
  if (*(long *)(lVar10 + 0x80) != 0) {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar10,0);
    if ((iVar5 != 0) && (fVar23 = param_2, fVar25 = param_3, *(char *)(lVar6 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if ((((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x80), lVar10 == 0)) ||
        (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) ||
       (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto code_r0x015ab4c4;
    fVar17 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar10,0);
    uStack_150 = CONCAT44(param_2,fVar17);
    fVar23 = param_2;
    fVar25 = param_3;
    fStack_148 = param_3;
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0x38) == 0)) ||
       ((lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10), lVar10 == 0 ||
        (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)))) goto code_r0x015ab4c4;
    fVar18 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar10,0);
    uStack_160 = CONCAT44(fVar23,fVar18);
    fVar24 = param_3 - fVar25;
    uStack_170 = CONCAT44(param_2 - fVar23,fVar17 - fVar18);
    fStack_168 = fVar24;
    fStack_158 = fVar25;
    if (cVar13 != '\0') {
      if (lVar7 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar6 + 0xa8);
      param_4 = *(float *)(lVar6 + 0xa0);
      param_2 = param_2 + *(float *)(lVar6 + 0xa4);
      fVar17 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar17 + param_4,lVar7,0);
      fVar23 = param_2;
      fVar25 = param_3;
      if (cVar13 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar17) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar17)) {
            bVar3 = fVar17 == 1.0;
            bVar2 = 1.0 <= fVar17;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar6,&uStack_160,&uStack_150,1,1), iVar5 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar9 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar19 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar10 + 0x1c0),0);
      uStack_180 = CONCAT44(fVar23,uVar19);
      uStack_178 = CONCAT44(param_4,fVar25);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_180,0);
      if (lVar9 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar17,lVar9,0);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
      if (lVar10 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar10,uVar12,*(undefined1 *)(lVar6 + 0xb8),0);
      if (*(char *)(lVar6 + 0xb8) != '\0') {
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
        lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
        if (lVar10 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar10 + 0x88) = *(undefined4 *)(lVar6 + 0x98);
      }
      iStack_1b4 = iStack_1b4 + 1;
      goto code_r0x015ab2c0;
    }
    fVar18 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_170,0);
    fVar23 = *(float *)(lVar6 + 0x8c);
    fVar25 = fVar24;
    if (fVar23 <= fVar18) goto code_r0x015aaf94;
    fVar18 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_170,0);
    if ((lVar7 == 0) ||
       (fVar22 = fVar23, fVar25 = fVar24, lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0), lVar10 == 0))
    goto code_r0x015ab4c4;
    fVar20 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar10,0);
    fVar22 = fVar23 * fVar22;
    fVar23 = *(float *)(lVar6 + 0x94);
    if (fVar23 < fVar24 * fVar25 + fVar18 * fVar20 + fVar22) goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  param_3 = fVar25;
  if (*(long *)(lVar10 + 0x80) != 0) {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x80), lVar10 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar10 + 0x9c) = 0;
    param_3 = fVar25;
  }
  if (*(char *)(lVar6 + 0x9c) == '\0') {
    if (*(char *)(lVar6 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar6);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar6);
    }
  }
  if (*(char *)(lVar6 + 0x10a) == '\0') {
    cVar13 = *(char *)(lVar6 + 0xb8);
  }
  else {
    cVar13 = '\0';
  }
  if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1b0,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
  uStack_138 = uStack_1a8;
  uStack_140 = uStack_1b0;
  lStack_130 = lStack_1a0;
  do {
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_140,uRam0000000003d33458);
      lVar10 = lStack_130;
      param_2 = fVar23;
      if ((uVar8 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_130 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar23 = *(float *)(lVar6 + 0x8c);
      if ((fVar23 < *(float *)(lStack_130 + 0x18)) &&
         (param_2 = fVar23, lStack_130 != *(long *)(lVar6 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_130 + 0x28) == '\0');
    lVar9 = *(long *)(lStack_130 + 0x10);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar9 + 0x9c) != '\0');
  *(undefined1 *)(lVar9 + 0x9c) = 1;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + 0x1c8);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar6 + 0x98),lVar9,*(undefined8 *)(lVar10 + 0x10),cVar13 != '\0',
                  0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + 0x1c8);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
  uVar19 = *(undefined4 *)(lVar10 + 0x1c);
  param_2 = *(float *)(lVar10 + 0x20);
  fVar25 = *(float *)(lVar10 + 0x24);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar10 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar21 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar10 + 0x1c0),0);
  uStack_180 = CONCAT44(fVar23,uVar21);
  uStack_178 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_180,0);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar19,lVar9,0);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + 0x1c8);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar10,uVar12,*(undefined1 *)(lVar6 + 0xb8),0);
  iStack_1b4 = iStack_1b4 + 1;
  bVar3 = true;
  param_3 = fVar25;
code_r0x015ab1ec:
  aiStack_198[iVar16] = 0x41c;
  iVar4 = iStack_184;
  iVar16 = iStack_184 + 1;
  iStack_184 = iVar16;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_140,uRam0000000003d33450);
  if ((iVar16 != 0) && (aiStack_198[iVar4] == 0x41c)) {
    iStack_184 = iVar4;
    iVar16 = iVar4;
  }
  iVar4 = iVar16;
  if (!bVar3) {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
      if (lVar10 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar10,0,cVar13 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar15 = uVar15 + 1;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x15aa734 | Atlas.UI.Screens.GameInProgressScreen.UpdateWeaponIndicator
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__UpdateWeaponIndicator
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               )

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  int aiStack_168 [5];
  int iStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  float fStack_138;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_120;
  float fStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
     (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 200), lVar6 != 0)) {
    iVar4 = *(int *)(lVar6 + 0x18);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0xd0), lVar6 != 0)) {
      iVar16 = *(int *)(lVar6 + 0x18);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
      if (lVar6 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar6,0 < iVar16 + iVar4,0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
        if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
           (uStack_48 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + 200), lVar6 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar6,&uStack_48,0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
          if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
             (uStack_50 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0xd0), lVar6 != 0)) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar6,&uStack_50,0);
            return;
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5230 & 1) == 0) {
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5230 = 1;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  fStack_118 = 0.0;
  uStack_120 = 0;
  fStack_128 = 0.0;
  uStack_130 = 0;
  fStack_138 = 0.0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  iStack_154 = 0;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x1c0) == 0)) ||
     (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x1c0),0), lVar7 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,*(char *)(lVar6 + 0x109) == '\0',0);
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x1c0) == 0)) ||
     (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x1c0),0), lVar7 == 0)) goto code_r0x015ab4c4;
  iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar7,0);
  if (iVar4 == 0) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x9c) = 0;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41090);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar7 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar7 + 0x40),0);
  if (*(long *)(lVar6 + 0x78) == 0) {
code_r0x015aaa34:
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar10 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x80);
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar6 + 0x78) + 0x10);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar10 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar16 = 0;
  iVar4 = 0;
  iStack_184 = 0;
  uVar15 = 0;
code_r0x015aaa94:
  if (*(long *)(lVar10 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if (*(int *)(*(long *)(lVar10 + 0x1c8) + 0x18) <= (int)uVar15) {
    return;
  }
  if (*(int *)(lVar6 + 0xbc) <= iStack_184) {
    return;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar11 = (long)(int)uVar15;
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar10 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x80), lVar10 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar10 + 0x74) == 1;
  }
  lVar10 = *(long *)(lVar6 + 0x78);
  if ((bool)(bVar3 & lVar10 == 0)) {
    if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_180,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
    uStack_108 = uStack_178;
    uStack_110 = uStack_180;
    lStack_100 = lStack_170;
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_110,uRam0000000003d33458);
      lVar10 = lStack_100;
      if ((uVar8 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_100 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lStack_100 + 0x10);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar9 = *(long *)(lVar9 + 0x1c8);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar15) {
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x015ab4d8;
      }
      lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar14 != *(long *)(lVar9 + 0x80));
    *(long *)(lVar6 + 0x78) = lVar10;
code_r0x015aabdc:
    aiStack_168[iVar4] = 0x132;
    iVar16 = iStack_154;
    iVar4 = iStack_154 + 1;
    iStack_154 = iVar4;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_110,uRam0000000003d33450);
    if ((iVar4 != 0) && (aiStack_168[iVar16] == 0x132)) {
      iStack_154 = iVar16;
      iVar4 = iVar16;
    }
    lVar10 = *(long *)(lVar6 + 0x78);
    iVar16 = iVar4;
  }
  if (lVar10 == 0) {
code_r0x015aac8c:
    uVar12 = 0;
    cVar13 = '\0';
  }
  else {
    lVar9 = *(long *)(lVar10 + 0x10);
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar9 == *(long *)(lVar10 + 0x80))) goto code_r0x015aac8c;
    cVar13 = *(char *)(lVar6 + 0xb8);
    uVar12 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  fVar23 = param_2;
  fVar25 = param_3;
  if (*(long *)(lVar10 + 0x80) != 0) {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar10,0);
    if ((iVar5 != 0) && (fVar23 = param_2, fVar25 = param_3, *(char *)(lVar6 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if ((((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x80), lVar10 == 0)) ||
        (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) ||
       (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto code_r0x015ab4c4;
    fVar17 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar10,0);
    uStack_120 = CONCAT44(param_2,fVar17);
    fVar23 = param_2;
    fVar25 = param_3;
    fStack_118 = param_3;
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0x38) == 0)) ||
       ((lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10), lVar10 == 0 ||
        (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)))) goto code_r0x015ab4c4;
    fVar18 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar10,0);
    uStack_130 = CONCAT44(fVar23,fVar18);
    fVar24 = param_3 - fVar25;
    uStack_140 = CONCAT44(param_2 - fVar23,fVar17 - fVar18);
    fStack_138 = fVar24;
    fStack_128 = fVar25;
    if (cVar13 != '\0') {
      if (lVar7 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar6 + 0xa8);
      param_4 = *(float *)(lVar6 + 0xa0);
      param_2 = param_2 + *(float *)(lVar6 + 0xa4);
      fVar17 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar17 + param_4,lVar7,0);
      fVar23 = param_2;
      fVar25 = param_3;
      if (cVar13 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar17) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar17)) {
            bVar3 = fVar17 == 1.0;
            bVar2 = 1.0 <= fVar17;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar6,&uStack_130,&uStack_120,1,1), iVar5 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar9 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar19 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar10 + 0x1c0),0);
      uStack_150 = CONCAT44(fVar23,uVar19);
      uStack_148 = CONCAT44(param_4,fVar25);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_150,0);
      if (lVar9 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar17,lVar9,0);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
      if (lVar10 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar10,uVar12,*(undefined1 *)(lVar6 + 0xb8),0);
      if (*(char *)(lVar6 + 0xb8) != '\0') {
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
        lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
        if (lVar10 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar10 + 0x88) = *(undefined4 *)(lVar6 + 0x98);
      }
      iStack_184 = iStack_184 + 1;
      goto code_r0x015ab2c0;
    }
    fVar18 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_140,0);
    fVar23 = *(float *)(lVar6 + 0x8c);
    fVar25 = fVar24;
    if (fVar23 <= fVar18) goto code_r0x015aaf94;
    fVar18 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_140,0);
    if ((lVar7 == 0) ||
       (fVar22 = fVar23, fVar25 = fVar24, lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0), lVar10 == 0))
    goto code_r0x015ab4c4;
    fVar20 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar10,0);
    fVar22 = fVar23 * fVar22;
    fVar23 = *(float *)(lVar6 + 0x94);
    if (fVar23 < fVar24 * fVar25 + fVar18 * fVar20 + fVar22) goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  param_3 = fVar25;
  if (*(long *)(lVar10 + 0x80) != 0) {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x80), lVar10 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar10 + 0x9c) = 0;
    param_3 = fVar25;
  }
  if (*(char *)(lVar6 + 0x9c) == '\0') {
    if (*(char *)(lVar6 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar6);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar6);
    }
  }
  if (*(char *)(lVar6 + 0x10a) == '\0') {
    cVar13 = *(char *)(lVar6 + 0xb8);
  }
  else {
    cVar13 = '\0';
  }
  if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_180,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
  uStack_108 = uStack_178;
  uStack_110 = uStack_180;
  lStack_100 = lStack_170;
  do {
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_110,uRam0000000003d33458);
      lVar10 = lStack_100;
      param_2 = fVar23;
      if ((uVar8 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_100 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar23 = *(float *)(lVar6 + 0x8c);
      if ((fVar23 < *(float *)(lStack_100 + 0x18)) &&
         (param_2 = fVar23, lStack_100 != *(long *)(lVar6 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_100 + 0x28) == '\0');
    lVar9 = *(long *)(lStack_100 + 0x10);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar9 + 0x9c) != '\0');
  *(undefined1 *)(lVar9 + 0x9c) = 1;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + 0x1c8);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar6 + 0x98),lVar9,*(undefined8 *)(lVar10 + 0x10),cVar13 != '\0',
                  0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + 0x1c8);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
  uVar19 = *(undefined4 *)(lVar10 + 0x1c);
  param_2 = *(float *)(lVar10 + 0x20);
  fVar25 = *(float *)(lVar10 + 0x24);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar10 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar21 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar10 + 0x1c0),0);
  uStack_150 = CONCAT44(fVar23,uVar21);
  uStack_148 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_150,0);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar19,lVar9,0);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + 0x1c8);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar10,uVar12,*(undefined1 *)(lVar6 + 0xb8),0);
  iStack_184 = iStack_184 + 1;
  bVar3 = true;
  param_3 = fVar25;
code_r0x015ab1ec:
  aiStack_168[iVar16] = 0x41c;
  iVar4 = iStack_154;
  iVar16 = iStack_154 + 1;
  iStack_154 = iVar16;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_110,uRam0000000003d33450);
  if ((iVar16 != 0) && (aiStack_168[iVar4] == 0x41c)) {
    iStack_154 = iVar4;
    iVar16 = iVar4;
  }
  iVar4 = iVar16;
  if (!bVar3) {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
    if (lVar10 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x1c8), lVar10 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
      if (lVar10 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar10,0,cVar13 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar15 = uVar15 + 1;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar10 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x15aa8b4 | Atlas.UI.Screens.GameInProgressScreen.UpdateKartIndicator
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  int aiStack_118 [5];
  int iStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam0000000003eb5230 & 1) == 0) {
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5230 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  fStack_c8 = 0.0;
  uStack_d0 = 0;
  fStack_d8 = 0.0;
  uStack_e0 = 0;
  fStack_e8 = 0.0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  iStack_104 = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1c0) == 0)) ||
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x1c0),0), lVar6 == 0)) goto LAB_015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,*(char *)(param_5 + 0x109) == '\0',0);
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1c0) == 0)) ||
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x1c0),0), lVar6 == 0)) goto LAB_015ab4c4;
  iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar6,0);
  if (iVar4 == 0) {
    return;
  }
  *(undefined1 *)(param_5 + 0x9c) = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41090);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) goto LAB_015ab4c4;
  lVar6 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar6 + 0x40),0);
  if (*(long *)(param_5 + 0x78) == 0) {
LAB_015aaa34:
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x38) == 0)) goto LAB_015ab4c4;
    if (*(int *)(*(long *)(lVar9 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(param_5 + 0x78) = *(undefined8 *)(param_5 + 0x80);
    }
  }
  else {
    lVar9 = *(long *)(*(long *)(param_5 + 0x78) + 0x10);
    if (lVar9 == 0) goto LAB_015ab4c4;
    if (*(int *)(lVar9 + 0x74) != 1) goto LAB_015aaa34;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (lVar9 == 0) {
LAB_015ab4c4:
    func_0x00f78af4();
LAB_015ab4c8:
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar15 = 0;
  iVar4 = 0;
  iStack_134 = 0;
  uVar14 = 0;
code_r0x015aaa94:
  if (*(long *)(lVar9 + 0x1c8) == 0) goto LAB_015ab4c4;
  if (*(int *)(*(long *)(lVar9 + 0x1c8) + 0x18) <= (int)uVar14) {
    return;
  }
  if (*(int *)(param_5 + 0xbc) <= iStack_134) {
    return;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
  lVar10 = (long)(int)uVar14;
  lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
  if (lVar9 == 0) goto LAB_015ab4c4;
  if (*(long *)(lVar9 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
    lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x80), lVar9 == 0)) goto LAB_015ab4c4;
    bVar3 = *(int *)(lVar9 + 0x74) == 1;
  }
  lVar9 = *(long *)(param_5 + 0x78);
  if ((bool)(bVar3 & lVar9 == 0)) {
    if (*(long *)(param_5 + 0x70) == 0) goto LAB_015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_130,*(long *)(param_5 + 0x70),uRam0000000003d3d1c8);
    uStack_b8 = uStack_128;
    uStack_c0 = uStack_130;
    lStack_b0 = lStack_120;
    do {
      uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d33458);
      lVar9 = lStack_b0;
      if ((uVar7 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_b0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar13 = *(long *)(lStack_b0 + 0x10);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar8 = *(long *)(lVar8 + 0x1c8);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar14) {
        uVar11 = func_0x00f78b24();
        func_0x00f78ac0(uVar11,0);
        goto code_r0x015ab4d8;
      }
      lVar8 = *(long *)(lVar8 + lVar10 * 8 + 0x20);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar13 != *(long *)(lVar8 + 0x80));
    *(long *)(param_5 + 0x78) = lVar9;
code_r0x015aabdc:
    aiStack_118[iVar4] = 0x132;
    iVar15 = iStack_104;
    iVar4 = iStack_104 + 1;
    iStack_104 = iVar4;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d33450);
    if ((iVar4 != 0) && (aiStack_118[iVar15] == 0x132)) {
      iStack_104 = iVar15;
      iVar4 = iVar15;
    }
    lVar9 = *(long *)(param_5 + 0x78);
    iVar15 = iVar4;
  }
  if (lVar9 == 0) {
code_r0x015aac8c:
    uVar11 = 0;
    cVar12 = '\0';
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x10);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
    lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_015ab4c4;
    if (!(bool)(bVar3 & lVar8 == *(long *)(lVar9 + 0x80))) goto code_r0x015aac8c;
    cVar12 = *(char *)(param_5 + 0xb8);
    uVar11 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
  lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
  if (lVar9 == 0) goto LAB_015ab4c4;
  fVar22 = param_2;
  fVar24 = param_3;
  if (*(long *)(lVar9 + 0x80) != 0) {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
    lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_015ab4c4;
    iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar9,0);
    if ((iVar5 != 0) && (fVar22 = param_2, fVar24 = param_3, *(char *)(param_5 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
    lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
    if ((((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x80), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) ||
       (lVar9 = *(long *)(lVar9 + 0x18), lVar9 == 0)) goto LAB_015ab4c4;
    fVar16 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar9,0);
    uStack_d0 = CONCAT44(param_2,fVar16);
    fVar22 = param_2;
    fVar24 = param_3;
    fStack_c8 = param_3;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41088);
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x38) == 0)) ||
       ((lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10), lVar9 == 0 ||
        (lVar9 = *(long *)(lVar9 + 0x18), lVar9 == 0)))) goto LAB_015ab4c4;
    fVar17 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar9,0);
    uStack_e0 = CONCAT44(fVar22,fVar17);
    fVar23 = param_3 - fVar24;
    uStack_f0 = CONCAT44(param_2 - fVar22,fVar16 - fVar17);
    fStack_e8 = fVar23;
    fStack_d8 = fVar24;
    if (cVar12 != '\0') {
      if (lVar6 == 0) goto LAB_015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(param_5 + 0xa8);
      param_4 = *(float *)(param_5 + 0xa0);
      param_2 = param_2 + *(float *)(param_5 + 0xa4);
      fVar16 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar16 + param_4,lVar6,0);
      fVar22 = param_2;
      fVar24 = param_3;
      if (cVar12 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar16) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar16)) {
            bVar3 = fVar16 == 1.0;
            bVar2 = 1.0 <= fVar16;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(param_5,&uStack_e0,&uStack_d0,1,1), iVar5 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
      lVar8 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x1c0) == 0)) goto LAB_015ab4c4;
      uVar18 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar9 + 0x1c0),0);
      uStack_100 = CONCAT44(fVar22,uVar18);
      uStack_f8 = CONCAT44(param_4,fVar24);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_100,0);
      if (lVar8 == 0) goto LAB_015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar16,lVar8,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
      lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar9,uVar11,*(undefined1 *)(param_5 + 0xb8),0);
      if (*(char *)(param_5 + 0xb8) != '\0') {
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
        if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
        lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_015ab4c4;
        *(undefined4 *)(lVar9 + 0x88) = *(undefined4 *)(param_5 + 0x98);
      }
      iStack_134 = iStack_134 + 1;
      goto code_r0x015ab2c0;
    }
    fVar17 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_f0,0);
    fVar22 = *(float *)(param_5 + 0x8c);
    fVar24 = fVar23;
    if (fVar22 <= fVar17) goto code_r0x015aaf94;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_f0,0);
    if ((lVar6 == 0) ||
       (fVar21 = fVar22, fVar24 = fVar23, lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0), lVar9 == 0))
    goto LAB_015ab4c4;
    fVar19 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar9,0);
    fVar21 = fVar22 * fVar21;
    fVar22 = *(float *)(param_5 + 0x94);
    if (fVar22 < fVar23 * fVar24 + fVar17 * fVar19 + fVar21) goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
  lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
  if (lVar9 == 0) goto LAB_015ab4c4;
  param_3 = fVar24;
  if (*(long *)(lVar9 + 0x80) != 0) {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
    lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x80), lVar9 == 0)) goto LAB_015ab4c4;
    *(undefined1 *)(lVar9 + 0x9c) = 0;
    param_3 = fVar24;
  }
  if (*(char *)(param_5 + 0x9c) == '\0') {
    if (*(char *)(param_5 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(param_5);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(param_5);
    }
  }
  if (*(char *)(param_5 + 0x10a) == '\0') {
    cVar12 = *(char *)(param_5 + 0xb8);
  }
  else {
    cVar12 = '\0';
  }
  if (*(long *)(param_5 + 0x70) == 0) goto LAB_015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_130,*(long *)(param_5 + 0x70),uRam0000000003d3d1c8);
  uStack_b8 = uStack_128;
  uStack_c0 = uStack_130;
  lStack_b0 = lStack_120;
  do {
    do {
      uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d33458);
      lVar9 = lStack_b0;
      param_2 = fVar22;
      if ((uVar7 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_b0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar22 = *(float *)(param_5 + 0x8c);
      if ((fVar22 < *(float *)(lStack_b0 + 0x18)) &&
         (param_2 = fVar22, lStack_b0 != *(long *)(param_5 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_b0 + 0x28) == '\0');
    lVar8 = *(long *)(lStack_b0 + 0x10);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar8 + 0x9c) != '\0');
  *(undefined1 *)(lVar8 + 0x9c) = 1;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (lVar8 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar8 = *(long *)(lVar8 + 0x1c8);
  if (lVar8 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar14) {
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    goto code_r0x015ab4d8;
  }
  lVar8 = *(long *)(lVar8 + lVar10 * 8 + 0x20);
  if (lVar8 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(param_5 + 0x98),lVar8,*(undefined8 *)(lVar9 + 0x10),cVar12 != '\0'
                  ,0);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (lVar8 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar8 = *(long *)(lVar8 + 0x1c8);
  if (lVar8 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar14) {
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    goto code_r0x015ab4d8;
  }
  lVar8 = *(long *)(lVar8 + lVar10 * 8 + 0x20);
  uVar18 = *(undefined4 *)(lVar9 + 0x1c);
  param_2 = *(float *)(lVar9 + 0x20);
  fVar24 = *(float *)(lVar9 + 0x24);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar9 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar20 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar9 + 0x1c0),0);
  uStack_100 = CONCAT44(fVar22,uVar20);
  uStack_f8 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_100,0);
  if (lVar8 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar18,lVar8,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + 0x1c8);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar14) {
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    goto code_r0x015ab4d8;
  }
  lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar9,uVar11,*(undefined1 *)(param_5 + 0xb8),0);
  iStack_134 = iStack_134 + 1;
  bVar3 = true;
  param_3 = fVar24;
code_r0x015ab1ec:
  aiStack_118[iVar15] = 0x41c;
  iVar4 = iStack_104;
  iVar15 = iStack_104 + 1;
  iStack_104 = iVar15;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d33450);
  if ((iVar15 != 0) && (aiStack_118[iVar4] == 0x41c)) {
    iStack_104 = iVar4;
    iVar15 = iVar4;
  }
  iVar4 = iVar15;
  if (!bVar3) {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
    lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_015ab4c4;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1c8), lVar9 == 0)) goto LAB_015ab4c4;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015ab4c8;
      lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar9,0,cVar12 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar14 = uVar14 + 1;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41080);
  if (lVar9 == 0) goto LAB_015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x15ab4dc | Atlas.UI.Screens.GameInProgressScreen.SetTimerSecondsRemaining
// ============================================================

/* WARNING: Possible PIC construction at 0x015ade20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015acb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ad6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015acb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015acb74) */
/* WARNING: Removing unreachable block (ram,0x015acba8) */
/* WARNING: Removing unreachable block (ram,0x015acbb0) */
/* WARNING: Removing unreachable block (ram,0x015acb7c) */
/* WARNING: Removing unreachable block (ram,0x015acbbc) */
/* WARNING: Removing unreachable block (ram,0x015acbc4) */
/* WARNING: Removing unreachable block (ram,0x015ad6f8) */
/* WARNING: Removing unreachable block (ram,0x015ad7a8) */
/* WARNING: Removing unreachable block (ram,0x015ad8e0) */
/* WARNING: Removing unreachable block (ram,0x015ad900) */
/* WARNING: Removing unreachable block (ram,0x015ad988) */
/* WARNING: Removing unreachable block (ram,0x015ad910) */
/* WARNING: Removing unreachable block (ram,0x015ad99c) */
/* WARNING: Removing unreachable block (ram,0x015ad9c4) */
/* WARNING: Removing unreachable block (ram,0x015ad9b0) */
/* WARNING: Removing unreachable block (ram,0x015ad958) */
/* WARNING: Removing unreachable block (ram,0x015acb44) */
/* WARNING: Removing unreachable block (ram,0x015acb84) */
/* WARNING: Removing unreachable block (ram,0x015acb8c) */
/* WARNING: Removing unreachable block (ram,0x015acb4c) */
/* WARNING: Removing unreachable block (ram,0x015acb98) */
/* WARNING: Removing unreachable block (ram,0x015acba0) */
/* WARNING: Removing unreachable block (ram,0x015acbc8) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f5d8) */
/* WARNING: Removing unreachable block (ram,0x0146f678) */
/* WARNING: Removing unreachable block (ram,0x0146f5dc) */
/* WARNING: Removing unreachable block (ram,0x018ee81c) */
/* WARNING: Removing unreachable block (ram,0x018ee830) */
/* WARNING: Removing unreachable block (ram,0x018ee838) */
/* WARNING: Removing unreachable block (ram,0x018ee84c) */
/* WARNING: Removing unreachable block (ram,0x018ee860) */
/* WARNING: Removing unreachable block (ram,0x018ee864) */
/* WARNING: Removing unreachable block (ram,0x018ee868) */
/* WARNING: Removing unreachable block (ram,0x018ee874) */
/* WARNING: Removing unreachable block (ram,0x018ee878) */
/* WARNING: Removing unreachable block (ram,0x015ad2d0) */
/* WARNING: Removing unreachable block (ram,0x015ad2ec) */
/* WARNING: Removing unreachable block (ram,0x015ad2f4) */
/* WARNING: Removing unreachable block (ram,0x015ad340) */
/* WARNING: Removing unreachable block (ram,0x015ad308) */
/* WARNING: Removing unreachable block (ram,0x015ade24) */
/* WARNING: Removing unreachable block (ram,0x015ade2c) */
/* WARNING: Removing unreachable block (ram,0x015ade4c) */
/* WARNING: Removing unreachable block (ram,0x015ade54) */
/* WARNING: Removing unreachable block (ram,0x015ade68) */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */
/* WARNING: Removing unreachable block (ram,0x015aca9c) */
/* WARNING: Removing unreachable block (ram,0x015acaa4) */
/* WARNING: Removing unreachable block (ram,0x015acab0) */
/* WARNING: Removing unreachable block (ram,0x015acab4) */
/* WARNING: Removing unreachable block (ram,0x015acbec) */
/* WARNING: Removing unreachable block (ram,0x015acac8) */
/* WARNING: Removing unreachable block (ram,0x015acad4) */
/* WARNING: Removing unreachable block (ram,0x015acad8) */
/* WARNING: Removing unreachable block (ram,0x015acaec) */
/* WARNING: Removing unreachable block (ram,0x015acaf4) */
/* WARNING: Removing unreachable block (ram,0x015acaf8) */
/* WARNING: Removing unreachable block (ram,0x015acb0c) */
/* WARNING: Removing unreachable block (ram,0x015acb14) */
/* WARNING: Removing unreachable block (ram,0x015acb20) */
/* WARNING: Removing unreachable block (ram,0x015acb28) */
/* WARNING: Removing unreachable block (ram,0x015acb34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_GameInProgressScreen__SetTimerSecondsRemaining
                 (undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  float *pfVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  byte extraout_w1;
  ulong extraout_x1;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *extraout_x1_00;
  ulong extraout_x1_01;
  byte bVar21;
  int iVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 unaff_x24;
  undefined8 **ppuVar29;
  undefined1 *puVar30;
  undefined *puVar31;
  float fVar32;
  float fVar33;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  ulong extraout_d0;
  ulong uVar34;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  float fVar35;
  ulong uVar36;
  ulong uVar37;
  uint uVar38;
  ulong unaff_d8;
  ulong uVar39;
  uint uVar40;
  undefined8 unaff_d9;
  ulong uVar41;
  float unaff_s10;
  undefined4 unaff_00005144;
  uint unaff_s11;
  undefined4 unaff_00005164;
  uint unaff_s12;
  undefined4 unaff_00005184;
  uint unaff_s13;
  undefined4 unaff_000051a4;
  float unaff_s14;
  undefined4 unaff_000051c4;
  float unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb522a & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb522a = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if (lVar12 != 0) {
    ppuVar6 = &puStack_50;
    puVar30 = &stack0xfffffffffffffff0;
    uVar27 = 0x3d22910;
    uVar26 = 0x3d7cca8;
    if ((bRam0000000003eb523d & 1) == 0) {
      func_0x00f78a20(0x3d22910,param_2,0);
      func_0x00f78a20(0x3d7cca8);
      bRam0000000003eb523d = 1;
    }
    uStack_48._4_4_ = (int)param_2 / 0x3c;
    uVar40 = (int)param_2 % 0x3c;
    uVar28 = (ulong)uVar40;
    plVar24 = *(long **)(lVar12 + 0x98);
    plVar14 = (long *)func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_48 + 4);
    uStack_48 = (undefined *)CONCAT44(uStack_48._4_4_,uVar40);
    uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_48);
    uVar23 = 0;
    uVar16 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,plVar14);
    if (plVar24 != (long *)0x0) {
      plVar14 = (long *)(**(code **)(*plVar24 + 0x558))
                                  (plVar24,uVar16,*(undefined8 *)(*plVar24 + 0x560));
      return plVar14;
    }
    puVar31 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__UpdateFrenzyTimer;
    plVar24 = (long *)func_0x00f78af4();
    plVar17 = (long *)0x0;
    do {
      *(undefined8 *)((long)ppuVar6 + -0x30) = unaff_d9;
      *(ulong *)((long)ppuVar6 + -0x28) = unaff_d8;
      *(long **)((long)ppuVar6 + -0x20) = plVar14;
      *(long **)((long)ppuVar6 + -0x18) = plVar17;
      *(undefined1 **)((long)ppuVar6 + -0x10) = puVar30;
      *(undefined **)((long)ppuVar6 + -8) = puVar31;
      lVar12 = 0x3eb5000;
      plVar14 = plVar24;
      if ((bRam0000000003eb523e & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        plVar14 = (long *)func_0x00f78a20(0x3d23990);
        bRam0000000003eb523e = 1;
      }
      uVar34 = (ulong)(uint)*(float *)(plVar24 + 0x48);
      fVar35 = *(float *)(plVar24 + 0x56) - *(float *)(plVar24 + 0x48);
      if (*(float *)((long)plVar24 + 0x2ac) < fVar35) {
        return plVar14;
      }
      if (plVar24[0x47] != 0) {
        plVar14 = (long *)/*UnityEngine.AnimationCurve$$get_length*/ func_0x03217f64(plVar24[0x47],0);
        if ((int)plVar14 < 2) {
          return plVar14;
        }
        lVar12 = plVar24[0x47];
        if (lVar12 != 0) {
          fVar35 = 1.0;
          _fmodf(*(undefined4 *)((long)plVar24 + 0x2ac));
          fVar33 = (float)/*UnityEngine.AnimationCurve$$Evaluate*/ func_0x03217a8c(lVar12,0);
          if (plVar24[0x12] != 0) {
            unaff_d8 = (ulong)(uint)fVar33;
            plVar17 = (long *)/*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar24[0x12],uRam0000000003d578e0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar14 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar17,0);
            if ((int)plVar14 == 0) {
              return plVar14;
            }
            plVar24 = (long *)0x0;
            if (plVar17 != (long *)0x0) {
              puVar30 = *(undefined1 **)((long)ppuVar6 + -0x10);
              puVar31 = *(undefined **)((long)ppuVar6 + -8);
              plVar24 = *(long **)((long)ppuVar6 + -0x20);
              puVar5 = (undefined1 *)ppuVar6;
              plVar14 = *(long **)((long)ppuVar6 + -0x18);
              fVar35 = 0.0;
              fVar32 = fVar33;
              goto code_r0x03275bf0;
            }
          }
        }
      }
      fVar33 = fVar35;
      lVar18 = func_0x00f78af4();
      fVar35 = (float)uVar34;
      *(undefined8 *)((long)ppuVar6 + -0x70) = unaff_d9;
      *(ulong *)((long)ppuVar6 + -0x68) = unaff_d8;
      *(undefined8 *)((long)ppuVar6 + -0x60) = uVar27;
      *(ulong *)((long)ppuVar6 + -0x58) = uVar26;
      *(long *)((long)ppuVar6 + -0x50) = lVar12;
      *(long **)((long)ppuVar6 + -0x48) = plVar24;
      *(undefined1 **)((long)ppuVar6 + -0x40) = (undefined1 *)((long)ppuVar6 + -0x10);
      *(undefined **)((long)ppuVar6 + -0x38) =
           &Atlas_UI_Screens_GameInProgressScreenBehaviour__UpdateFrenzyVignette;
      if (*(long *)(lVar18 + 0x248) == 0) {
code_r0x015add60:
        func_0x00f78af4();
      }
      else {
        unaff_d8 = extraout_d0_01 & 0xffffffff;
        plVar14 = (long *)/*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(*(long *)(lVar18 + 0x248),0);
        fVar35 = (float)uVar34;
        if ((int)plVar14 == 0) {
          return plVar14;
        }
        if (*(char *)(lVar18 + 0x2a8) != '\0') {
          if (*(long *)(lVar18 + 600) != 0) {
            plVar14 = (long *)/*UnityEngine.AnimationCurve$$get_length*/ func_0x03217f64(*(long *)(lVar18 + 600),0);
            fVar35 = (float)uVar34;
            if ((int)plVar14 < 2) {
              return plVar14;
            }
            lVar25 = *(long *)(lVar18 + 600);
            lVar12 = 0;
            if (lVar25 != 0) {
              uVar37 = (ulong)*(uint *)(lVar18 + 0x2b4);
              _fmodf(*(undefined4 *)(lVar18 + 0x2ac));
              plVar14 = (long *)/*UnityEngine.AnimationCurve$$Evaluate*/ func_0x03217a8c(lVar25,0);
              fVar35 = (float)uVar34;
              fVar33 = (float)uVar37;
              *(undefined4 *)(lVar18 + 0x26c) = extraout_s0;
              lVar12 = *(long *)(lVar18 + 0x250);
              if (lVar12 != 0) {
                uVar40 = *(uint *)(lVar12 + 0x18);
                if ((int)uVar40 < 1) {
                  return plVar14;
                }
                uVar26 = 0;
                while( true ) {
                  fVar35 = (float)uVar34;
                  fVar33 = (float)uVar37;
                  uVar38 = (uint)uVar26;
                  if (uVar40 <= uVar38) break;
                  plVar14 = *(long **)(lVar12 + (long)(int)uVar38 * 8 + 0x20);
                  if (plVar14 == (long *)0x0) goto code_r0x015add60;
                  uVar34 = (ulong)*(uint *)(lVar18 + 0x268);
                  uVar37 = (ulong)*(uint *)(lVar18 + 0x264);
                  plVar14 = (long *)(**(code **)(*plVar14 + 0x2a8))
                                              (*(undefined4 *)(lVar18 + 0x260),uVar37,uVar34,
                                               *(undefined4 *)(lVar18 + 0x26c),plVar14,
                                               *(undefined8 *)(*plVar14 + 0x2b0));
                  uVar26 = (ulong)(uVar38 + 1);
                  uVar40 = *(uint *)(lVar12 + 0x18);
                  if ((int)uVar40 <= (int)(uVar38 + 1)) {
                    return plVar14;
                  }
                }
                goto code_r0x015add64;
              }
            }
          }
          goto code_r0x015add60;
        }
        if (*(float *)(lVar18 + 0x26c) < 0.0) {
          lVar25 = *(long *)(lVar18 + 0x248);
          if (lVar25 == 0) goto code_r0x015add60;
          puVar20 = (undefined1 *)0x0;
          puVar30 = *(undefined1 **)((long)ppuVar6 + -0x40);
          puVar31 = *(undefined **)((long)ppuVar6 + -0x38);
          plVar14 = *(long **)((long)ppuVar6 + -0x50);
          uVar27 = *(undefined8 *)((long)ppuVar6 + -0x60);
          auVar42._8_8_ = *(undefined8 *)((long)ppuVar6 + -0x58);
          auVar42._0_8_ = *(undefined8 *)((long)ppuVar6 + -0x48);
          puVar5 = (undefined1 *)((long)ppuVar6 + -0x30);
          goto code_r0x0322ef1c;
        }
        uVar37 = 0;
        plVar14 = (long *)/*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(*(float *)(lVar18 + 0x26c) - (float)extraout_d0_01,0);
        fVar35 = (float)uVar34;
        fVar33 = (float)uVar37;
        *(undefined4 *)(lVar18 + 0x26c) = extraout_s0_00;
        lVar12 = *(long *)(lVar18 + 0x250);
        if (lVar12 == 0) goto code_r0x015add60;
        uVar40 = *(uint *)(lVar12 + 0x18);
        if ((int)uVar40 < 1) {
          return plVar14;
        }
        uVar26 = 0;
        while( true ) {
          fVar35 = (float)uVar34;
          fVar33 = (float)uVar37;
          uVar38 = (uint)uVar26;
          if (uVar40 <= uVar38) break;
          plVar14 = *(long **)(lVar12 + (long)(int)uVar38 * 8 + 0x20);
          if (plVar14 == (long *)0x0) goto code_r0x015add60;
          uVar34 = (ulong)*(uint *)(lVar18 + 0x268);
          uVar37 = (ulong)*(uint *)(lVar18 + 0x264);
          plVar14 = (long *)(**(code **)(*plVar14 + 0x2a8))
                                      (*(undefined4 *)(lVar18 + 0x260),uVar37,uVar34,
                                       *(undefined4 *)(lVar18 + 0x26c),plVar14,
                                       *(undefined8 *)(*plVar14 + 0x2b0));
          uVar26 = (ulong)(uVar38 + 1);
          uVar40 = *(uint *)(lVar12 + 0x18);
          if ((int)uVar40 <= (int)(uVar38 + 1)) {
            return plVar14;
          }
        }
      }
code_r0x015add64:
      uVar16 = func_0x00f78b24();
      plVar24 = (long *)func_0x00f78ac0(uVar16,0);
      puVar4 = (undefined1 *)((long)ppuVar6 + -0xc0);
      *(undefined8 *)((long)ppuVar6 + -0xb0) = unaff_d9;
      *(ulong *)((long)ppuVar6 + -0xa8) = unaff_d8;
      *(undefined8 *)((long)ppuVar6 + -0xa0) = uVar27;
      *(ulong *)((long)ppuVar6 + -0x98) = uVar26;
      *(long *)((long)ppuVar6 + -0x90) = lVar12;
      *(long *)((long)ppuVar6 + -0x88) = lVar18;
      *(undefined1 **)((long)ppuVar6 + -0x80) = (undefined1 *)((long)ppuVar6 + -0x40);
      *(undefined **)((long)ppuVar6 + -0x78) =
           &Atlas_UI_Screens_GameInProgressScreenBehaviour__SetFrenzy;
      puVar30 = (undefined1 *)((long)ppuVar6 + -0x80);
      uVar34 = extraout_d0_02 & 0xffffffff;
      *(int *)((long)ppuVar6 + -0xb4) = (int)uVar15;
      plVar17 = (long *)0x3eb5000;
      if ((bRam0000000003eb523f & 1) == 0) {
        func_0x00f78a20(0x3d790e8);
        bRam0000000003eb523f = 1;
      }
      *(undefined4 *)((long)plVar24 + 0x2ac) = 0;
      *(int *)(plVar24 + 0x56) = (int)extraout_d0_02;
      if (plVar24[0x46] != 0) {
        lVar12 = 0x220;
        if ((int)extraout_x1_00 == 0) {
          lVar12 = 0x218;
        }
        uVar15 = 0;
        /*Core.UI2.UISlantElement$$set_sprite*/ func_0x02f8b070(plVar24[0x46],*(undefined8 *)((long)plVar24 + lVar12));
        plVar17 = (long *)plVar24[0x42];
        auVar42._8_8_ = plVar17;
        auVar42._0_8_ = extraout_x1_00;
        uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)ppuVar6 + -0xb4),0);
        if (plVar17 != (long *)0x0) {
          uVar15 = *(undefined8 *)(*plVar17 + 0x560);
          (**(code **)(*plVar17 + 0x558))(plVar17,uVar16);
          lVar25 = plVar24[0x41];
          if (lVar25 != 0) {
            puVar31 = &UNK_015ade24;
            puVar5 = (undefined1 *)((long)ppuVar6 + -0xc0);
            puVar20 = extraout_x1_00;
            plVar14 = plVar24;
            goto code_r0x0322ef1c;
          }
        }
      }
      auVar1._8_8_ = plVar17;
      auVar1._0_8_ = extraout_x1_00;
      puVar31 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__AnimateUsables;
      auVar43 = func_0x00f78af4();
      plVar14 = auVar43._0_8_;
      iVar22 = (int)uVar23;
      uVar16 = uVar15;
      auVar42 = auVar43;
      if (iVar22 == 2) {
Atlas_UI_Screens_GameInProgressScreenBehaviour__UsablesChanged:
        plVar17 = auVar42._8_8_;
        puVar20 = auVar42._0_8_;
        *(undefined8 *)(puVar4 + -0x50) = unaff_d9;
        *(ulong *)(puVar4 + -0x48) = uVar34;
        *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
        *(ulong *)(puVar4 + -0x38) = uVar28;
        *(undefined8 *)(puVar4 + -0x30) = uVar27;
        *(long *)(puVar4 + -0x28) = auVar1._8_8_;
        *(long **)(puVar4 + -0x20) = plVar24;
        *(long *)(puVar4 + -0x18) = auVar1._0_8_;
        *(undefined1 **)(puVar4 + -0x10) = puVar30;
        *(undefined **)(puVar4 + -8) = puVar31;
        puVar30 = puVar4 + -0x10;
        uVar28 = 0x3d27778;
        uVar15 = uVar16;
        if ((bRam0000000003eb5241 & 1) == 0) {
          func_0x00f78a20(0x3d1fa78);
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d62ef8);
          func_0x00f78a20(0x3d27778);
          bRam0000000003eb5241 = 1;
        }
        plVar24 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.GameInProgressScreenBehaviour.<>c__DisplayClass180_0_TypeInfo*/ uRam0000000003d27778);
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour.<>c__DisplayClass180_0$$.ctor*/ func_0x01554b00(plVar24,0);
        if (plVar24 != (long *)0x0) {
          plVar24[2] = (long)puVar20;
          *(int *)(plVar24 + 3) = (int)uVar16;
          *(int *)((long)plVar24 + 0x1c) = auVar42._8_4_;
          if (*(long *)(puVar20 + 0x178) != 0) {
            uVar16 = 0x3d20000;
            plVar17 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(puVar20 + 0x178),0);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = 0;
            /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(plVar17,0);
            if (*(long *)(puVar20 + 0x178) != 0) {
              plVar11 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(puVar20 + 0x178),0);
              uVar38 = *(uint *)(puVar20 + 0x19c);
              uVar40 = *(uint *)(puVar20 + 0x198);
              lVar18 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar18,plVar24,uRam0000000003d62ef8,0);
              uVar34 = (ulong)_UNK_033f875c;
              uVar37 = 0;
              uVar36 = (ulong)uVar38;
              puVar30 = *(undefined1 **)(puVar4 + -0x10);
              puVar31 = *(undefined **)(puVar4 + -8);
              plVar24 = *(long **)(puVar4 + -0x20);
              plVar14 = *(long **)(puVar4 + -0x18);
              lVar12 = *(long *)(puVar4 + -0x30);
              uVar27 = *(undefined8 *)(puVar4 + -0x28);
              unaff_x24 = *(undefined8 *)(puVar4 + -0x40);
              uVar28 = *(ulong *)(puVar4 + -0x38);
              uVar41 = *(ulong *)(puVar4 + -0x50);
              uVar39 = *(ulong *)(puVar4 + -0x48);
              uVar26 = 0;
              uVar15 = 0;
              goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
            }
          }
        }
        puVar31 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerDetachedUsable;
        auVar44 = func_0x00f78af4();
        plVar14 = auVar44._0_8_;
        if ((char)plVar14[0x59] == '\0') {
          return plVar14;
        }
        puVar5 = puVar4 + -0x50;
        uVar27 = uVar16;
        if (auVar44._8_4_ != 0) {
          puVar5 = puVar4 + -0x90;
          *(undefined8 *)(puVar4 + -0x90) = unaff_x24;
          *(undefined8 *)(puVar4 + -0x88) = 0x3d27778;
          *(undefined8 *)(puVar4 + -0x80) = uVar16;
          *(long **)(puVar4 + -0x78) = plVar17;
          *(long **)(puVar4 + -0x70) = plVar24;
          *(undefined1 **)(puVar4 + -0x68) = puVar20;
          *(undefined1 **)(puVar4 + -0x60) = puVar30;
          *(undefined **)(puVar4 + -0x58) =
               &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerDetachedUsable;
          puVar30 = puVar4 + -0x60;
          auVar42 = ZEXT816(0);
          uVar27 = 0;
          if ((bRam0000000003eb523b & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb523b = 1;
          }
          if ((plVar14[0x2d] == 0) || (lVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar14[0x2d],0), lVar25 == 0)) {
            lVar12 = func_0x00f78af4();
            *(undefined8 *)(puVar4 + -0xc0) = 0;
            *(undefined8 *)(puVar4 + -0xb8) = 0;
            *(long **)(puVar4 + -0xb0) = plVar14;
            *(undefined8 *)(puVar4 + -0xa8) = 0;
            *(undefined1 **)(puVar4 + -0xa0) = puVar30;
            *(undefined **)(puVar4 + -0x98) =
                 &Atlas_UI_Screens_GameInProgressScreenBehaviour__InitUsableIcons;
            if ((bRam0000000003eb5238 & 1) == 0) {
              func_0x00f78a20(0x3d3bf48);
              func_0x00f78a20(0x3d1de20);
              bRam0000000003eb5238 = 1;
            }
            *(undefined4 *)(lVar12 + 0x2a4) = 0;
            uVar27 = func_0x00f78aec(/*System.Collections.Generic.List<Sprite>_TypeInfo*/ uRam0000000003d1de20);
            plVar14 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar27,uRam0000000003d3bf48);
            *(undefined8 *)(lVar12 + 0x298) = uVar27;
            return plVar14;
          }
          puVar20 = (undefined1 *)0x0;
          puVar31 = &UNK_015acb74;
          goto code_r0x0322ef1c;
        }
      }
      else {
        puVar5 = (undefined1 *)((long)ppuVar6 + -0xc0);
        puVar20 = extraout_x1_00;
        if (iVar22 != 1) {
          if (iVar22 != 0) {
            return plVar14;
          }
          uVar23 = 1;
          puVar5 = (undefined1 *)((long)ppuVar6 + -0x100);
          puVar4 = (undefined1 *)((long)ppuVar6 + -0x100);
          *(undefined8 *)((long)ppuVar6 + -0x100) = unaff_x24;
          *(ulong *)((long)ppuVar6 + -0xf8) = uVar28;
          *(undefined8 *)((long)ppuVar6 + -0xf0) = uVar27;
          *(long **)((long)ppuVar6 + -0xe8) = plVar17;
          *(long **)((long)ppuVar6 + -0xe0) = plVar24;
          *(undefined1 **)((long)ppuVar6 + -0xd8) = extraout_x1_00;
          *(undefined1 **)((long)ppuVar6 + -0xd0) = puVar30;
          *(undefined **)((long)ppuVar6 + -200) =
               &Atlas_UI_Screens_GameInProgressScreenBehaviour__AnimateUsables;
          puVar30 = (undefined1 *)((long)ppuVar6 + -0xd0);
          plVar24 = (long *)((long)&MACH_HEADER.magic + 1);
          uVar28 = 0x3eb5000;
          if ((bRam0000000003eb5240 & 1) == 0) {
            func_0x00f78a20(0x3d53528);
            func_0x00f78a20(0x3d20bc0);
            bRam0000000003eb5240 = 1;
          }
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$ResetUsableIconPositions*/ func_0x015acf54(plVar14);
          if (plVar14[0x2f] != 0) {
            unaff_x24 = 0x3d20000;
            uVar28 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar14[0x2f],0);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar16 = 0;
            /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar28,0);
            if (plVar14[0x2f] != 0) {
              plVar17 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar14[0x2f],0);
              fVar32 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
              uVar28 = 0;
              if (plVar17 != (long *)0x0) {
                puVar31 = &UNK_015ad2d0;
                goto code_r0x03275bf0;
              }
            }
          }
          puVar31 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnPlayerUsedUsable;
          auVar42 = func_0x00f78af4();
          uVar27 = uVar15;
          auVar1 = auVar43;
          if ((char)auVar42._0_8_[0x59] == '\0') {
            return auVar42._0_8_;
          }
          goto Atlas_UI_Screens_GameInProgressScreenBehaviour__UsablesChanged;
        }
      }
      puVar4 = puVar5;
      *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
      *(ulong *)(puVar4 + -0x38) = uVar34;
      *(undefined8 *)(puVar4 + -0x30) = uVar27;
      *(long **)(puVar4 + -0x28) = plVar17;
      *(long **)(puVar4 + -0x20) = plVar24;
      *(undefined1 **)(puVar4 + -0x18) = puVar20;
      *(undefined1 **)(puVar4 + -0x10) = puVar30;
      *(undefined **)(puVar4 + -8) = puVar31;
      uVar16 = 0x3eb5000;
      if ((bRam0000000003eb5242 & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d57648);
        bRam0000000003eb5242 = 1;
      }
      if (plVar14[0x2f] != 0) {
        plVar17 = (long *)0x3d20000;
        uVar16 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar14[0x2f],0);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = 0;
        /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar16,0);
        if (plVar14[0x2f] != 0) {
          plVar11 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar14[0x2f],0);
          uVar38 = *(uint *)((long)plVar14 + 0x19c);
          uVar40 = *(uint *)(plVar14 + 0x33);
          lVar18 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar18,plVar14,uRam0000000003d57648,0);
          uVar34 = (ulong)_UNK_033f875c;
          uVar37 = 0;
          uVar36 = (ulong)uVar38;
          puVar30 = *(undefined1 **)(puVar4 + -0x10);
          puVar31 = *(undefined **)(puVar4 + -8);
          plVar24 = *(long **)(puVar4 + -0x20);
          plVar14 = *(long **)(puVar4 + -0x18);
          lVar12 = *(long *)(puVar4 + -0x30);
          uVar27 = *(undefined8 *)(puVar4 + -0x28);
          uVar41 = *(ulong *)(puVar4 + -0x40);
          uVar39 = *(ulong *)(puVar4 + -0x38);
          uVar26 = 0;
          uVar15 = 0;
          goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
        }
      }
      auVar42 = func_0x00f78af4();
      uVar26 = auVar42._8_8_;
      lVar12 = auVar42._0_8_;
      puVar5 = puVar4 + -0x80;
      *(undefined8 *)(puVar4 + -0x70) = uVar27;
      *(long **)(puVar4 + -0x68) = plVar17;
      *(undefined8 *)(puVar4 + -0x60) = uVar16;
      *(long **)(puVar4 + -0x58) = plVar14;
      *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x48) =
           &Atlas_UI_Screens_GameInProgressScreenBehaviour__SetUsableQuantityText;
      puVar30 = puVar4 + -0x50;
      if ((bRam0000000003eb523c & 1) == 0) {
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d7d030);
        bRam0000000003eb523c = 1;
      }
      plVar14 = *(long **)(lVar12 + 0x158);
      if (auVar42._8_4_ < 2) {
        if ((plVar14 != (long *)0x0) && (lVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar14,0), lVar25 != 0)) {
          puVar20 = (undefined1 *)0x0;
          puVar30 = *(undefined1 **)(puVar4 + -0x50);
          puVar31 = *(undefined **)(puVar4 + -0x48);
          plVar14 = *(long **)(puVar4 + -0x60);
          uVar27 = *(undefined8 *)(puVar4 + -0x70);
          auVar42._8_8_ = *(undefined8 *)(puVar4 + -0x68);
          auVar42._0_8_ = *(undefined8 *)(puVar4 + -0x58);
          puVar5 = puVar4 + -0x40;
code_r0x0322ef1c:
          *(undefined8 *)(puVar5 + -0x30) = uVar27;
          *(long *)(puVar5 + -0x28) = auVar42._8_8_;
          *(long **)(puVar5 + -0x20) = plVar14;
          *(long *)(puVar5 + -0x18) = auVar42._0_8_;
          *(undefined1 **)(puVar5 + -0x10) = puVar30;
          *(undefined **)(puVar5 + -8) = puVar31;
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar14 = (long *)(*pcRam0000000003ebf4c0)(lVar25,puVar20);
          return plVar14;
        }
      }
      else {
        uVar27 = 0x3d7d000;
        *(int *)(puVar4 + -0x74) = auVar42._8_4_;
        uVar16 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar4 + -0x74);
        uVar15 = 0;
        uVar16 = /*System.String$$Format*/ func_0x029bc688(/*STR('{0}x')*/ uRam0000000003d7d030,uVar16);
        if (plVar14 != (long *)0x0) {
          uVar15 = *(undefined8 *)(*plVar14 + 0x560);
          (**(code **)(*plVar14 + 0x558))(plVar14,uVar16);
          if ((*(long *)(lVar12 + 0x158) != 0) &&
             (lVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar12 + 0x158),0), lVar25 != 0)) {
            puVar20 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            puVar31 = &UNK_015ad6f8;
            goto code_r0x0322ef1c;
          }
        }
      }
      plVar24 = (long *)func_0x00f78af4();
      ppuVar6 = (undefined8 **)(puVar4 + -0xb0);
      *(undefined8 *)(puVar4 + -0xb0) = unaff_d9;
      *(ulong *)(puVar4 + -0xa8) = uVar34;
      *(long **)(puVar4 + -0xa0) = plVar14;
      *(long *)(puVar4 + -0x98) = lVar12;
      *(undefined1 **)(puVar4 + -0x90) = puVar30;
      *(undefined **)(puVar4 + -0x88) = &Atlas_UI_Screens_GameInProgressScreenBehaviour__OnUpdate;
      puVar30 = puVar4 + -0x90;
      unaff_d8 = extraout_d0_00 & 0xffffffff;
      if (0 < (int)plVar24[0x54]) {
        fVar33 = (float)extraout_d0_00 * 1000.0;
        fVar35 = -fVar33;
        if (fVar33 != INFINITY) {
          fVar35 = fVar33;
        }
        uVar15 = 0;
        uVar10 = /*UnityEngine.Mathf$$Max*/ func_0x0323cd04((int)plVar24[0x54] - (int)fVar35,0);
        *(undefined4 *)(plVar24 + 0x54) = uVar10;
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_00 & 0xffffffff,plVar24,plVar24[0x2e]);
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_00 & 0xffffffff,plVar24,plVar24[0x2f]);
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$UpdateUsableIcon*/ func_0x015ad034(extraout_d0_00 & 0xffffffff,plVar24,plVar24[0x30]);
      }
      puVar31 = &UNK_015ad7a8;
      plVar17 = plVar24;
    } while( true );
  }
  auVar42 = func_0x00f78af4();
  puStack_60 = (undefined8 *)0x3d41080;
  uStack_58 = 0x3eb5000;
  uVar27 = 0x3eb5000;
  puStack_50 = param_1;
  uStack_48 = (undefined *)param_2;
  if ((bRam0000000003eb522c & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb522c = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar42._0_8_,uRam0000000003d41080);
  uVar16 = uStack_48;
  puVar3 = puStack_50;
  uVar15 = uStack_58;
  puVar2 = puStack_60;
  if (lVar12 == 0) {
    lVar12 = func_0x00f78af4();
    puStack_68 = &Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled;
    lVar18 = *(long *)(lVar12 + 200);
    puStack_70 = (undefined8 *)&stack0xffffffffffffffc0;
    if (lVar18 == 0) {
      plVar24 = (long *)func_0x00f78af4();
      auStack_a0 = (undefined1  [8])0x3d41080;
      uStack_98 = (code *)0x3eb5000;
      puStack_78 = &Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
      plVar14 = plVar24;
      puStack_80 = (undefined1 *)&puStack_70;
      auStack_90 = auVar42;
      if ((bRam0000000003eb522d & 1) == 0) {
        puStack_80 = (undefined1 *)&puStack_70;
        func_0x00f78a20(0x3d23990);
        plVar14 = (long *)func_0x00f78a20(0x3d41080);
        bRam0000000003eb522d = 1;
      }
      if ((int)plVar24[9] != param_3) {
        return plVar14;
      }
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar24,uRam0000000003d41080);
      if (lVar12 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetInputEnabled*/ func_0x015ae2c8(lVar12,param_4,0);
        uVar27 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar24);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar27,0);
        if ((int)plVar14 == 0) {
          return plVar14;
        }
        lStack_b0 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar24);
        uVar27 = auStack_90._8_8_;
        if (lStack_b0 != 0) {
          lVar12 = *(long *)(lStack_b0 + 0xa8);
          if (lVar12 == 0) {
            plVar14 = (long *)func_0x00f78af4(0,param_4,0);
            uStack_a8 = uVar27;
            uStack_98 = Atlas_UI_Screens_FTUEScreenBehaviour___ctor;
            auStack_a0 = (undefined1  [8])&puStack_80;
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return plVar14;
          }
          uStack_98 = (code *)0x1585900;
          uStack_a8 = param_4;
          auStack_a0 = (undefined1  [8])&puStack_80;
          if (pcRam0000000003ebe9d8 == (code *)0x0) {
            pcRam0000000003ebe9d8 =
                 (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar14 = (long *)(*pcRam0000000003ebe9d8)(lVar12,param_4);
          return plVar14;
        }
      }
      pfVar13 = (float *)func_0x00f78af4();
      fVar35 = *pfVar13;
      bVar8 = false;
      bVar9 = true;
      if (0.0 <= fVar35) {
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar35)) {
          bVar8 = fVar35 == 1.0;
          bVar9 = 1.0 <= fVar35;
        }
      }
      if (!bVar9 || bVar8) {
        fVar35 = pfVar13[1];
        bVar8 = false;
        bVar9 = true;
        if (0.0 <= fVar35) {
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar35)) {
            bVar8 = fVar35 == 1.0;
            bVar9 = 1.0 <= fVar35;
          }
        }
        if (!bVar9 || bVar8) {
          return (long *)(ulong)(0.0 <= pfVar13[2]);
        }
      }
      return (long *)0x0;
    }
    bVar21 = extraout_w1 ^ 1;
    ppuVar29 = &puStack_70;
    puStack_68 = &Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled;
    lVar25 = *(long *)(lVar18 + 0x38);
    auVar43 = auVar42;
    if (lVar25 == 0) {
      func_0x00f78af4();
code_r0x0164b040:
      uVar15 = func_0x00f78b24();
      auVar44 = func_0x00f78ac0(uVar15,0);
      lVar18 = auVar44._0_8_;
      puStack_78 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
      lVar12 = *(long *)(lVar18 + 0x38);
      if (lVar12 == 0) {
        puStack_80 = (undefined1 *)&puStack_70;
        func_0x00f78af4();
      }
      else {
        puStack_80 = (undefined1 *)&puStack_70;
        if (auVar44._8_4_ < *(uint *)(lVar12 + 0x18)) {
          *(byte *)(lVar12 + (long)(int)auVar44._8_4_ * 0x10 + 0x29) = bVar21;
          ppuVar7 = &puStack_70;
          puVar31 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
          puStack_80 = (undefined1 *)&puStack_70;
          goto Core_Input_InputManager__ReselectTopmostActiveLayer;
        }
      }
      uVar27 = func_0x00f78b24();
      func_0x00f78ac0(uVar27,0);
      ppuVar7 = (undefined8 **)&lStack_b0;
      lStack_b0 = 0x3d41080;
      uStack_a8 = 0x3eb5000;
      auStack_90._8_8_ = &Core_Input_InputManager__SetMultiTouchEnabled;
      ppuVar29 = (undefined8 **)auStack_90;
      auVar43._8_8_ = extraout_x1_01;
      auVar43._0_8_ = 0x3eb5000;
      uVar27 = 0x3d216c0;
      auStack_90._0_8_ = &puStack_80;
      _auStack_a0 = auVar42;
      if ((bRam0000000003eb5795 & 1) == 0) {
        auStack_90._0_8_ = &puStack_80;
        func_0x00f78a20(0x3d216c0);
        func_0x00f78a20(0x3d22880);
        bRam0000000003eb5795 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar12 == 0) {
code_r0x0164b158:
        func_0x00f78af4();
      }
      else {
        plVar14 = *(long **)(lVar12 + 0x20);
        if (plVar14 == (long *)0x0) {
code_r0x0164b130:
          if (plVar14 != (long *)0x0) {
            *(uint *)((long)plVar14 + 0xbc) = (uint)((extraout_x1_01 & 1) == 0);
            return plVar14;
          }
          goto code_r0x0164b158;
        }
        if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar14 + 300)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 +
                     -8) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
      }
      puVar31 = &Core_Input_InputManager__SetActiveLayer;
      auVar44 = func_0x00f78e5c();
      lVar18 = auVar44._0_8_;
      *(int *)(lVar18 + 0x40) = auVar44._8_4_;
    }
    else {
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(lVar12 + 0x48)) goto code_r0x0164b040;
      *(byte *)(lVar25 + (long)(int)*(uint *)(lVar12 + 0x48) * 0x10 + 0x28) = bVar21;
      ppuVar7 = &puStack_60;
      ppuVar29 = (undefined8 **)&stack0xffffffffffffffc0;
      puVar31 = puStack_68;
      puStack_68 = &Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled;
    }
Core_Input_InputManager__ReselectTopmostActiveLayer:
    *(undefined8 *)((long)ppuVar7 + -0x30) = 0x3d41080;
    *(undefined8 *)((long)ppuVar7 + -0x28) = uVar27;
    *(undefined1 (*) [16])((long)ppuVar7 + -0x20) = auVar43;
    *(undefined8 ***)((long)ppuVar7 + -0x10) = ppuVar29;
    *(undefined **)((long)ppuVar7 + -8) = puVar31;
    if ((bRam0000000003eb5797 & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d22848);
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb5797 = 1;
    }
    uVar10 = *(undefined4 *)(lVar18 + 0x40);
    uVar27 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar18);
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar10,uVar27,0);
    uVar40 = (uint)plVar14;
    if (uVar40 == 0xffffffff) {
      return plVar14;
    }
    lVar12 = *(long *)(lVar18 + 0x38);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= uVar40) goto code_r0x0164a30c;
      if (*(char *)(lVar12 + (long)(int)uVar40 * 0x10 + 0x28) != '\0') {
        return plVar14;
      }
      if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
        *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        lVar18 = *(long *)(lVar18 + 0x38);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar40) goto code_r0x0164a30c;
          if (lVar12 != 0) {
            plVar14 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar12,*(undefined8 *)
                                                      (lVar18 + (long)(int)uVar40 * 0x10 + 0x20),0);
            if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
              *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
              return plVar14;
            }
          }
        }
      }
    }
    func_0x00f78af4();
code_r0x0164a30c:
    uVar27 = func_0x00f78b24();
    plVar14 = (long *)func_0x00f78ac0(uVar27,0);
    return plVar14;
  }
  switch(auVar42._8_8_ & 0xffffffff) {
  case 0:
    lVar12 = *(long *)(lVar12 + 0x140);
    break;
  case 1:
    if (*(long *)(lVar12 + 0xf8) == 0) goto code_r0x015ac89c;
    lVar12 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar12 + 0xf8),0);
    break;
  case 2:
    lVar12 = *(long *)(lVar12 + 0x88);
    break;
  case 3:
  case 4:
    lVar12 = *(long *)(lVar12 + 0x1f8);
    break;
  case 5:
    lVar12 = *(long *)(lVar12 + 200);
    break;
  case 6:
    lVar12 = *(long *)(lVar12 + 0x278);
    goto joined_r0x015ac880;
  case 7:
    lVar12 = *(long *)(lVar12 + 0x68);
    goto joined_r0x015ac880;
  case 8:
    lVar12 = *(long *)(lVar12 + 0x90);
    break;
  case 9:
    lVar12 = *(long *)(lVar12 + 0x288);
joined_r0x015ac880:
    if (lVar12 == 0) goto code_r0x015ac89c;
    lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0,0);
    break;
  default:
    return (long *)0x0;
  }
  if (lVar12 != 0) {
    puStack_50 = puVar3;
    uStack_48 = (undefined *)uVar16;
    if (pcRam0000000003ebf4d0 == (code *)0x0) {
      pcRam0000000003ebf4d0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(*pcRam0000000003ebf4d0)(lVar12);
    return plVar14;
  }
code_r0x015ac89c:
  lVar12 = func_0x00f78af4();
  puStack_70 = puVar2;
  puStack_68 = (undefined *)uVar15;
  puStack_60 = puVar3;
  uStack_58 = uVar16;
  uStack_48 = &Atlas_UI_Screens_GameInProgressScreenBehaviour__ResetTimerRootSortOrder;
  puStack_50 = (undefined8 *)&stack0xffffffffffffffc0;
  if ((bRam0000000003eb5237 & 1) == 0) {
    puStack_50 = (undefined8 *)&stack0xffffffffffffffc0;
    func_0x00f78a20(0x3d577e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5237 = 1;
  }
  uVar27 = *(undefined8 *)(lVar12 + 0x90);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar27,0,0);
  if (((ulong)plVar14 & 1) != 0) {
    return plVar14;
  }
  if (*(long *)(lVar12 + 0x90) != 0) {
    lVar12 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar12 + 0x90),uRam0000000003d577e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
    if ((int)plVar14 == 0) {
      return plVar14;
    }
    if (lVar12 != 0) {
      if (pcRam0000000003ec2ef8 == (code *)0x0) {
        pcRam0000000003ec2ef8 =
             (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
      }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar14 = (long *)(*pcRam0000000003ec2ef8)(lVar12,0);
      return plVar14;
    }
  }
  auVar44 = func_0x00f78af4();
  *(int *)(auVar44._0_8_ + 0x52) = auVar44._8_4_;
  return auVar44._0_8_;
Atlas_UI_AtlasTweenAnimations__SpinZoom:
  lVar25 = lVar18;
  uVar16 = uVar15;
  uVar19 = uVar26;
  plVar17 = plVar11;
  uVar38 = (uint)uVar36;
  fVar33 = (float)uVar34;
  uVar36 = uVar34 & 0xffffffff;
  uVar34 = uVar34 & 0xffffffff;
  puVar5 = puVar4 + -0x80;
  *(ulong *)(puVar4 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
  *(ulong *)(puVar4 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
  *(ulong *)(puVar4 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
  *(ulong *)(puVar4 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
  *(ulong *)(puVar4 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
  *(ulong *)(puVar4 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
  *(ulong *)(puVar4 + -0x50) = uVar41;
  *(ulong *)(puVar4 + -0x48) = uVar39;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(ulong *)(puVar4 + -0x38) = uVar28;
  *(long *)(puVar4 + -0x30) = lVar12;
  *(undefined8 *)(puVar4 + -0x28) = uVar27;
  *(long **)(puVar4 + -0x20) = plVar24;
  *(long **)(puVar4 + -0x18) = plVar14;
  *(undefined1 **)(puVar4 + -0x10) = puVar30;
  *(undefined **)(puVar4 + -8) = puVar31;
  puVar30 = puVar4 + -0x10;
  uVar41 = (ulong)uVar40;
  uVar39 = uVar37 & 0xffffffff;
  unaff_00005164 = 0;
  unaff_00005184 = 0;
  unaff_000051a4 = 0;
  unaff_00005144 = 0;
  unaff_000051c4 = 0;
  unaff_000051e4 = 0;
  unaff_x24 = 0x3d26a48;
  uVar15 = uVar16;
  lVar18 = lVar25;
  uVar37 = uVar34;
  uVar40 = uVar38;
  if ((bRam0000000003eb4867 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e770);
    func_0x00f78a20(0x3d5e790);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d40f78);
    func_0x00f78a20(0x3d62230);
    func_0x00f78a20(0x3d62238);
    func_0x00f78a20(0x3d62240);
    func_0x00f78a20(0x3d26a48);
    bRam0000000003eb4867 = 1;
    uVar37 = uVar34;
  }
  plVar24 = (long *)func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(plVar24,0);
  if (plVar24 != (long *)0x0) {
    plVar24[2] = uVar19;
    plVar24[3] = lVar25;
    if (plVar17 != (long *)0x0) {
      puVar31 = &UNK_0146f5d8;
      plVar14 = plVar17;
      fVar35 = fVar33;
      fVar32 = fVar33;
code_r0x03275bf0:
      *(long **)(puVar5 + -0x20) = plVar24;
      *(long **)(puVar5 + -0x18) = plVar14;
      *(undefined1 **)(puVar5 + -0x10) = puVar30;
      *(undefined **)(puVar5 + -8) = puVar31;
      *(float *)(puVar5 + -0x30) = fVar32;
      *(float *)(puVar5 + -0x2c) = fVar33;
      *(float *)(puVar5 + -0x28) = fVar35;
      if (pcRam0000000003ec19a8 == (code *)0x0) {
        pcRam0000000003ec19a8 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      plVar14 = (long *)(*pcRam0000000003ec19a8)(plVar17,puVar5 + -0x30);
      return plVar14;
    }
  }
  puVar31 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
  plVar11 = (long *)func_0x00f78af4();
  puVar4 = puVar4 + -0x80;
  uVar26 = extraout_x1;
  plVar14 = plVar17;
  uVar27 = uVar16;
  lVar12 = lVar25;
  uVar28 = uVar19;
  uVar34 = extraout_d0;
  unaff_s10 = fVar33;
  unaff_s11 = uVar38;
  unaff_s12 = uVar38;
  unaff_s13 = uVar38;
  unaff_s14 = fVar33;
  unaff_s15 = fVar33;
  goto Atlas_UI_AtlasTweenAnimations__SpinZoom;
}



// ============================================================
// RVA: 0x15ab548 | Atlas.UI.Screens.GameInProgressScreen.IsHUDElementActive
// ============================================================

/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */

long * Atlas_UI_Screens_GameInProgressScreen__IsHUDElementActive
                 (undefined1 *param_1,ulong param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 ***pppuVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  long *plVar10;
  undefined8 uVar11;
  byte extraout_w1;
  ulong extraout_x1;
  byte bVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 ***pppuVar16;
  undefined *puVar17;
  float fVar18;
  undefined1 auVar19 [12];
  long lStack_80;
  ulong uStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  
  uVar15 = 0x3eb5000;
  if ((bRam0000000003eb522c & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb522c = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled;
    lVar7 = *(long *)(lVar6 + 200);
    ppuStack_40 = (undefined1 **)&stack0xfffffffffffffff0;
    if (lVar7 == 0) {
      plVar8 = (long *)func_0x00f78af4();
      ppuStack_70 = (undefined1 **)0x3d41080;
      pcStack_68 = (code *)0x3eb5000;
      puStack_48 = &Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
      plVar10 = plVar8;
      puStack_60 = param_1;
      puStack_58 = (undefined *)param_2;
      puStack_50 = (undefined1 *)&ppuStack_40;
      if ((bRam0000000003eb522d & 1) == 0) {
        puStack_50 = (undefined1 *)&ppuStack_40;
        func_0x00f78a20(0x3d23990);
        plVar10 = (long *)func_0x00f78a20(0x3d41080);
        bRam0000000003eb522d = 1;
      }
      if ((int)plVar8[9] != param_3) {
        return plVar10;
      }
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar8,uRam0000000003d41080);
      if (lVar6 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetInputEnabled*/ func_0x015ae2c8(lVar6,param_4,0);
        uVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
        if ((int)plVar10 == 0) {
          return plVar10;
        }
        lStack_80 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar8);
        uStack_78 = (ulong)puStack_58;
        if (lStack_80 != 0) {
          lVar6 = *(long *)(lStack_80 + 0xa8);
          if (lVar6 != 0) {
            pcStack_68 = (code *)0x1585900;
            uStack_78 = param_4;
            ppuStack_70 = &puStack_50;
            if (pcRam0000000003ebe9d8 == (code *)0x0) {
              pcRam0000000003ebe9d8 =
                   (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar10 = (long *)(*pcRam0000000003ebe9d8)(lVar6,param_4);
            return plVar10;
          }
          plVar10 = (long *)func_0x00f78af4(0,param_4,0);
          pcStack_68 = Atlas_UI_Screens_FTUEScreenBehaviour___ctor;
          ppuStack_70 = &puStack_50;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return plVar10;
        }
      }
      pfVar9 = (float *)func_0x00f78af4();
      fVar18 = *pfVar9;
      bVar3 = false;
      bVar4 = true;
      if (0.0 <= fVar18) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar18)) {
          bVar3 = fVar18 == 1.0;
          bVar4 = 1.0 <= fVar18;
        }
      }
      if (!bVar4 || bVar3) {
        fVar18 = pfVar9[1];
        bVar3 = false;
        bVar4 = true;
        if (0.0 <= fVar18) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar18)) {
            bVar3 = fVar18 == 1.0;
            bVar4 = 1.0 <= fVar18;
          }
        }
        if (!bVar4 || bVar3) {
          return (long *)(ulong)(0.0 <= pfVar9[2]);
        }
      }
      return (long *)0x0;
    }
    bVar12 = extraout_w1 ^ 1;
    pppuVar16 = &ppuStack_40;
    puStack_38 = &Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled;
    lVar13 = *(long *)(lVar7 + 0x38);
    puVar14 = param_1;
    if (lVar13 == 0) {
      func_0x00f78af4();
code_r0x0164b040:
      uVar11 = func_0x00f78b24();
      auVar19 = func_0x00f78ac0(uVar11,0);
      lVar7 = auVar19._0_8_;
      puStack_48 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
      lVar6 = *(long *)(lVar7 + 0x38);
      if (lVar6 == 0) {
        puStack_50 = (undefined1 *)&ppuStack_40;
        func_0x00f78af4();
      }
      else {
        puStack_50 = (undefined1 *)&ppuStack_40;
        if (auVar19._8_4_ < *(uint *)(lVar6 + 0x18)) {
          *(byte *)(lVar6 + (long)(int)auVar19._8_4_ * 0x10 + 0x29) = bVar12;
          pppuVar2 = &ppuStack_40;
          puVar17 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
          puStack_50 = (undefined1 *)&ppuStack_40;
          goto Core_Input_InputManager__ReselectTopmostActiveLayer;
        }
      }
      uVar15 = func_0x00f78b24();
      func_0x00f78ac0(uVar15,0);
      pppuVar2 = (undefined1 ***)&lStack_80;
      lStack_80 = 0x3d41080;
      uStack_78 = 0x3eb5000;
      puStack_58 = &Core_Input_InputManager__SetMultiTouchEnabled;
      pppuVar16 = (undefined1 ***)&puStack_60;
      puVar14 = (undefined1 *)0x3eb5000;
      uVar15 = 0x3d216c0;
      ppuStack_70 = (undefined1 **)param_1;
      pcStack_68 = (code *)param_2;
      puStack_60 = (undefined1 *)&puStack_50;
      if ((bRam0000000003eb5795 & 1) == 0) {
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x00f78a20(0x3d216c0);
        func_0x00f78a20(0x3d22880);
        bRam0000000003eb5795 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar6 == 0) {
code_r0x0164b158:
        func_0x00f78af4();
      }
      else {
        plVar10 = *(long **)(lVar6 + 0x20);
        if (plVar10 == (long *)0x0) {
code_r0x0164b130:
          if (plVar10 != (long *)0x0) {
            *(uint *)((long)plVar10 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
            return plVar10;
          }
          goto code_r0x0164b158;
        }
        if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar10 + 300)) &&
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 +
                     -8) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
      }
      puVar17 = &Core_Input_InputManager__SetActiveLayer;
      auVar19 = func_0x00f78e5c();
      lVar7 = auVar19._0_8_;
      *(int *)(lVar7 + 0x40) = auVar19._8_4_;
      param_2 = extraout_x1;
    }
    else {
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(lVar6 + 0x48)) goto code_r0x0164b040;
      *(byte *)(lVar13 + (long)(int)*(uint *)(lVar6 + 0x48) * 0x10 + 0x28) = bVar12;
      pppuVar2 = (undefined1 ***)&stack0xffffffffffffffd0;
      pppuVar16 = (undefined1 ***)&stack0xfffffffffffffff0;
      puVar17 = puStack_38;
      puStack_38 = &Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled;
    }
Core_Input_InputManager__ReselectTopmostActiveLayer:
    *(undefined8 *)((long)pppuVar2 + -0x30) = 0x3d41080;
    *(undefined8 *)((long)pppuVar2 + -0x28) = uVar15;
    *(undefined1 **)((long)pppuVar2 + -0x20) = puVar14;
    *(ulong *)((long)pppuVar2 + -0x18) = param_2;
    *(undefined1 ****)((long)pppuVar2 + -0x10) = pppuVar16;
    *(undefined **)((long)pppuVar2 + -8) = puVar17;
    if ((bRam0000000003eb5797 & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d22848);
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb5797 = 1;
    }
    uVar1 = *(undefined4 *)(lVar7 + 0x40);
    uVar15 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar7);
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar10 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar15,0);
    uVar5 = (uint)plVar10;
    if (uVar5 == 0xffffffff) {
      return plVar10;
    }
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x0164a30c;
      if (*(char *)(lVar6 + (long)(int)uVar5 * 0x10 + 0x28) != '\0') {
        return plVar10;
      }
      if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
        *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        lVar7 = *(long *)(lVar7 + 0x38);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto code_r0x0164a30c;
          if (lVar6 != 0) {
            plVar10 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar6,*(undefined8 *)
                                                     (lVar7 + (long)(int)uVar5 * 0x10 + 0x20),0);
            if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
              *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
              return plVar10;
            }
          }
        }
      }
    }
    func_0x00f78af4();
code_r0x0164a30c:
    uVar15 = func_0x00f78b24();
    plVar10 = (long *)func_0x00f78ac0(uVar15,0);
    return plVar10;
  }
  switch(param_2 & 0xffffffff) {
  case 0:
    lVar6 = *(long *)(lVar6 + 0x140);
    break;
  case 1:
    if (*(long *)(lVar6 + 0xf8) == 0) goto code_r0x015ac89c;
    lVar6 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar6 + 0xf8),0);
    break;
  case 2:
    lVar6 = *(long *)(lVar6 + 0x88);
    break;
  case 3:
  case 4:
    lVar6 = *(long *)(lVar6 + 0x1f8);
    break;
  case 5:
    lVar6 = *(long *)(lVar6 + 200);
    break;
  case 6:
    lVar6 = *(long *)(lVar6 + 0x278);
    goto joined_r0x015ac880;
  case 7:
    lVar6 = *(long *)(lVar6 + 0x68);
    goto joined_r0x015ac880;
  case 8:
    lVar6 = *(long *)(lVar6 + 0x90);
    break;
  case 9:
    lVar6 = *(long *)(lVar6 + 0x288);
joined_r0x015ac880:
    if (lVar6 == 0) goto code_r0x015ac89c;
    lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0,0);
    break;
  default:
    return (long *)0x0;
  }
  if (lVar6 != 0) {
    if (pcRam0000000003ebf4d0 == (code *)0x0) {
      pcRam0000000003ebf4d0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar10 = (long *)(*pcRam0000000003ebf4d0)(lVar6);
    return plVar10;
  }
code_r0x015ac89c:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5237 & 1) == 0) {
    func_0x00f78a20(0x3d577e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5237 = 1;
  }
  uVar15 = *(undefined8 *)(lVar6 + 0x90);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar15,0,0);
  if (((ulong)plVar10 & 1) == 0) {
    if (*(long *)(lVar6 + 0x90) != 0) {
      lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar6 + 0x90),uRam0000000003d577e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar10 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
      if ((int)plVar10 == 0) {
        return plVar10;
      }
      if (lVar6 != 0) {
        if (pcRam0000000003ec2ef8 == (code *)0x0) {
          pcRam0000000003ec2ef8 =
               (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
        }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar10 = (long *)(*pcRam0000000003ec2ef8)(lVar6,0);
        return plVar10;
      }
    }
    auVar19 = func_0x00f78af4();
    *(int *)(auVar19._0_8_ + 0x52) = auVar19._8_4_;
    return auVar19._0_8_;
  }
  return plVar10;
}



// ============================================================
// RVA: 0x15ab5b4 | Atlas.UI.Screens.GameInProgressScreen.SetInputEnabled
// ============================================================

/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */

long * Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled
                 (long param_1,byte param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  float *pfVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong extraout_x1;
  long lVar11;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  float fVar13;
  undefined1 auVar14 [12];
  
  lVar6 = *(long *)(param_1 + 200);
  if (lVar6 == 0) {
    plVar7 = (long *)func_0x00f78af4();
    plVar10 = plVar7;
    if ((bRam0000000003eb522d & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      plVar10 = (long *)func_0x00f78a20(0x3d41080);
      bRam0000000003eb522d = 1;
    }
    if ((int)plVar7[9] != param_3) {
      return plVar10;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar7,uRam0000000003d41080);
    if (lVar6 != 0) {
      /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetInputEnabled*/ func_0x015ae2c8(lVar6,param_4,0);
      uVar9 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar7);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar10 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
      if ((int)plVar10 == 0) {
        return plVar10;
      }
      lVar6 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar7);
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 0xa8);
        if (lVar6 == 0) {
          plVar10 = (long *)func_0x00f78af4(0,param_4,0);
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return plVar10;
        }
        if (pcRam0000000003ebe9d8 == (code *)0x0) {
          pcRam0000000003ebe9d8 =
               (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar10 = (long *)(*pcRam0000000003ebe9d8)(lVar6,param_4);
        return plVar10;
      }
    }
    pfVar8 = (float *)func_0x00f78af4();
    fVar13 = *pfVar8;
    bVar3 = false;
    bVar4 = true;
    if (0.0 <= fVar13) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar13)) {
        bVar3 = fVar13 == 1.0;
        bVar4 = 1.0 <= fVar13;
      }
    }
    if (!bVar4 || bVar3) {
      fVar13 = pfVar8[1];
      bVar3 = false;
      bVar4 = true;
      if (0.0 <= fVar13) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar13)) {
          bVar3 = fVar13 == 1.0;
          bVar4 = 1.0 <= fVar13;
        }
      }
      if (!bVar4 || bVar3) {
        return (long *)(ulong)(0.0 <= pfVar8[2]);
      }
    }
    return (long *)0x0;
  }
  param_2 = param_2 ^ 1;
  puVar12 = &stack0xfffffffffffffff0;
  lVar11 = *(long *)(lVar6 + 0x38);
  if (lVar11 == 0) {
    func_0x00f78af4();
code_r0x0164b040:
    uVar9 = func_0x00f78b24();
    auVar14 = func_0x00f78ac0(uVar9,0);
    lVar6 = auVar14._0_8_;
    lVar11 = *(long *)(lVar6 + 0x38);
    if (lVar11 == 0) {
      func_0x00f78af4();
    }
    else if (auVar14._8_4_ < *(uint *)(lVar11 + 0x18)) {
      *(byte *)(lVar11 + (long)(int)auVar14._8_4_ * 0x10 + 0x29) = param_2;
      puVar2 = &stack0xfffffffffffffff0;
      unaff_x30 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
      goto Core_Input_InputManager__ReselectTopmostActiveLayer;
    }
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    puVar2 = &stack0xffffffffffffffb0;
    puVar12 = &stack0xffffffffffffffd0;
    unaff_x20 = 0x3eb5000;
    unaff_x21 = 0x3d216c0;
    if ((bRam0000000003eb5795 & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d22880);
      bRam0000000003eb5795 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar6 == 0) {
code_r0x0164b158:
      func_0x00f78af4();
    }
    else {
      plVar10 = *(long **)(lVar6 + 0x20);
      if (plVar10 == (long *)0x0) {
code_r0x0164b130:
        if (plVar10 != (long *)0x0) {
          *(uint *)((long)plVar10 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
          return plVar10;
        }
        goto code_r0x0164b158;
      }
      if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar10 + 300)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 +
                   -8) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
    }
    unaff_x30 = &Core_Input_InputManager__SetActiveLayer;
    auVar14 = func_0x00f78e5c();
    lVar6 = auVar14._0_8_;
    *(int *)(lVar6 + 0x40) = auVar14._8_4_;
    unaff_x19 = extraout_x1;
  }
  else {
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x48)) goto code_r0x0164b040;
    *(byte *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x48) * 0x10 + 0x28) = param_2;
    puVar2 = (undefined1 *)register0x00000008;
    puVar12 = unaff_x29;
  }
Core_Input_InputManager__ReselectTopmostActiveLayer:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(ulong *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar12;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x40);
  uVar9 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar6);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar9,0);
  uVar5 = (uint)plVar10;
  if (uVar5 == 0xffffffff) {
    return plVar10;
  }
  lVar11 = *(long *)(lVar6 + 0x38);
  if (lVar11 != 0) {
    if (*(uint *)(lVar11 + 0x18) <= uVar5) goto code_r0x0164a30c;
    if (*(char *)(lVar11 + (long)(int)uVar5 * 0x10 + 0x28) != '\0') {
      return plVar10;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar11 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar6 = *(long *)(lVar6 + 0x38);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x0164a30c;
        if (lVar11 != 0) {
          plVar10 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar11,*(undefined8 *)
                                                    (lVar6 + (long)(int)uVar5 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return plVar10;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0164a30c:
  uVar9 = func_0x00f78b24();
  plVar10 = (long *)func_0x00f78ac0(uVar9,0);
  return plVar10;
}



// ============================================================
// RVA: 0x15ab5e4 | Atlas.UI.Screens.GameInProgressScreen.OnInputEnabledForLayer
// ============================================================

/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */

ulong Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer
                (ulong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  
  uVar3 = param_1;
  if ((bRam0000000003eb522d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    uVar3 = func_0x00f78a20(0x3d41080);
    bRam0000000003eb522d = 1;
  }
  if (*(int *)(param_1 + 0x48) != param_3) {
    return uVar3;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if (lVar4 != 0) {
    /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetInputEnabled*/ func_0x015ae2c8(lVar4,param_4,0);
    uVar5 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar4 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xa8);
      if (lVar4 == 0) {
        uVar3 = func_0x00f78af4(0,param_4,0);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar3;
      }
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000003ebe9d8)(lVar4,param_4);
      return uVar3;
    }
  }
  pfVar6 = (float *)func_0x00f78af4();
  fVar7 = *pfVar6;
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= fVar7) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar7)) {
      bVar1 = fVar7 == 1.0;
      bVar2 = 1.0 <= fVar7;
    }
  }
  if (!bVar2 || bVar1) {
    fVar7 = pfVar6[1];
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar7) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar7)) {
        bVar1 = fVar7 == 1.0;
        bVar2 = 1.0 <= fVar7;
      }
    }
    if (!bVar2 || bVar1) {
      return (ulong)(0.0 <= pfVar6[2]);
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x15ab6d0 | Atlas.UI.Screens.GameInProgressScreen.IsWithinViewport
// ============================================================

bool Atlas_UI_Screens_GameInProgressScreen__IsWithinViewport(float *param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = *param_1;
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= fVar3) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3)) {
      bVar1 = fVar3 == 1.0;
      bVar2 = 1.0 <= fVar3;
    }
  }
  if (!bVar2 || bVar1) {
    fVar3 = param_1[1];
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3)) {
        bVar1 = fVar3 == 1.0;
        bVar2 = 1.0 <= fVar3;
      }
    }
    if (!bVar2 || bVar1) {
      return 0.0 <= param_1[2];
    }
  }
  return false;
}



// ============================================================
// RVA: 0x15ab70c | Atlas.UI.Screens.GameInProgressScreen.CanSeeTarget
// ============================================================

undefined8 *
Atlas_UI_Screens_GameInProgressScreen__CanSeeTarget
          (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w1;
  int extraout_w1_00;
  undefined1 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x25;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  ulong uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  float fStack_2c8;
  undefined8 uStack_2c0;
  float fStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  float fStack_58;
  
  plVar14 = (long *)0x3eb5000;
  if ((bRam0000000003eb522f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb522f = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  if (((ulong)param_5 & 1) == 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0xb0) <= *(int *)(param_1 + 0x88)) {
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    *(int *)(param_1 + 0xb0) = iVar1 + 1;
    if (iVar1 != *(int *)(param_1 + 0xb4)) {
      return param_4;
    }
  }
  fVar26 = *(float *)(param_2 + 1);
  fStack_58 = *(float *)(param_3 + 1) - fVar26;
  uVar24 = *param_2;
  fVar20 = (float)((ulong)uVar24 >> 0x20);
  uVar21 = CONCAT44((float)((ulong)*param_3 >> 0x20) - fVar20,(float)*param_3 - (float)uVar24);
  uVar4 = uVar24;
  uStack_60 = uVar21;
  uVar15 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_60,0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar9 = (ulong)(uint)fVar20;
  uVar25 = (ulong)(uint)fVar26;
  /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(uVar24,uVar9,uVar25,uVar15,(int)uVar21,(int)uVar4,&uStack_a8,0);
  uVar15 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_60,0);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if (lVar3 != 0) {
    uVar4 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(lVar3 + 0x1d0),0);
    uStack_b8 = uStack_a0;
    uStack_c0 = uStack_a8;
    uStack_b0 = uStack_98;
    /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(uVar15,&uStack_c0,&uStack_90,uVar4,1,0);
    uVar4 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_90,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar5 = (undefined8 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
    return puVar5;
  }
  lVar3 = func_0x00f78af4();
  puVar5 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5232 & 1) == 0) {
    func_0x00f78a20(0x3d2cf40);
    func_0x00f78a20(0x3d1b980);
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d575d0);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d3d1d0);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5232 = 1;
  }
  uStack_190 = 0;
  uStack_188 = 0;
  lStack_180 = 0;
  fStack_1a8 = 0.0;
  uStack_1b0 = 0;
  fStack_1b8 = 0.0;
  uStack_1c0 = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar3,uRam0000000003d41090);
  if (lVar6 == 0) goto code_r0x015abd38;
  if (*(long *)(lVar6 + 0x40) == 0) goto code_r0x015abd38;
  lVar6 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar6 + 0x40),0);
  if (*(long *)(lVar3 + 0x70) == 0) goto code_r0x015abd38;
  puVar5 = (undefined8 *)0x3d1b980;
  param_5 = (undefined8 *)0x3d575d0;
  plVar14 = (long *)0x3d2cf40;
  param_3 = (undefined8 *)0x3d3d1d0;
  unaff_x25 = (undefined8 *)0x3d33450;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1d8,*(long *)(lVar3 + 0x70),uRam0000000003d3d1c8);
  uStack_188 = uStack_1d0;
  uStack_190 = uStack_1d8;
  lStack_180 = lStack_1c8;
  while( true ) {
    uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_190,uRam0000000003d33458);
    lVar13 = lStack_180;
    fVar26 = (float)uVar25;
    fVar20 = (float)uVar9;
    if ((uVar7 & 1) == 0) break;
    if (lStack_180 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    if (*(long *)(lStack_180 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar11 = *(long *)(*(long *)(lStack_180 + 0x10) + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    fVar16 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    fVar18 = fVar20;
    fVar22 = fVar26;
    fStack_1a0 = fVar16;
    fStack_19c = fVar20;
    fStack_198 = fVar26;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar3,uRam0000000003d41088);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    if (*(long *)(lVar11 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    fVar17 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    uStack_1b0 = CONCAT44(fVar18,fVar17);
    fStack_1b8 = fVar26 - fVar22;
    uVar25 = (ulong)(uint)fStack_1b8;
    uStack_1c0 = CONCAT44(fVar20 - fVar18,fVar16 - fVar17);
    fStack_1a8 = fVar22;
    uVar15 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_1c0,0);
    *(undefined4 *)(lVar13 + 0x18) = uVar15;
    if (*(long *)(lVar3 + 0x78) != 0) {
      lVar11 = *(long *)(*(long *)(lVar3 + 0x78) + 0x10);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015abd34;
      }
      if (1 < *(int *)(lVar11 + 0x74)) goto code_r0x015abaf0;
      goto code_r0x015abb54;
    }
code_r0x015abaf0:
    lVar11 = *(long *)(lVar13 + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    if (*(int *)(lVar11 + 0x74) == 1) {
      *(long *)(lVar3 + 0x78) = lVar13;
      if ((*(char *)(lVar3 + 0xb8) != '\0') && (*(int *)(lVar11 + 0x78) < 1)) {
        *(undefined8 *)(lVar3 + 0x78) = 0;
        goto code_r0x015abb54;
      }
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x015abd34;
      }
      uVar25 = (ulong)(uint)(fVar26 + *(float *)(lVar3 + 0xa8));
      uVar9 = (ulong)(uint)(fVar20 + *(float *)(lVar3 + 0xa4));
      uVar15 = /*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar16 + *(float *)(lVar3 + 0xa0),lVar6,0);
      *(undefined4 *)(lVar13 + 0x1c) = uVar15;
      *(int *)(lVar13 + 0x20) = (int)uVar9;
      uVar10 = 1;
      *(int *)(lVar13 + 0x24) = (int)uVar25;
    }
    else {
code_r0x015abb54:
      fVar18 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_1c0,0);
      fVar22 = *(float *)(lVar3 + 0x8c);
      uVar9 = (ulong)(uint)fVar22;
      if (fVar18 < fVar22) {
        fVar18 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_1c0,0);
        if (lVar6 == 0) {
          func_0x00f78af4();
code_r0x015abd34:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x15abd38);
          (*pcVar2)();
        }
        fVar17 = (float)uVar25;
        fVar23 = fVar22;
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x015abd34;
        }
        fVar19 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
        uVar9 = (ulong)(uint)*(float *)(lVar3 + 0x94);
        if (*(float *)(lVar3 + 0x94) < fVar17 * (float)uVar25 + fVar18 * fVar19 + fVar22 * fVar23) {
          uVar9 = (ulong)(uint)(fVar20 + *(float *)(lVar3 + 0xa4));
          uVar25 = (ulong)(uint)(fVar26 + *(float *)(lVar3 + 0xa8));
          fVar20 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar16 + *(float *)(lVar3 + 0xa0),lVar6,0);
          *(float *)(lVar13 + 0x1c) = fVar20;
          fVar26 = (float)uVar9;
          *(float *)(lVar13 + 0x20) = fVar26;
          *(float *)(lVar13 + 0x24) = (float)uVar25;
          if ((((0.0 <= fVar20) && (fVar20 <= 1.0)) && (0.0 <= fVar26)) &&
             (((fVar26 <= 1.0 && (0.0 <= (float)uVar25)) &&
              (uVar7 = Atlas_UI_Screens_GameInProgressScreen__CanSeeTarget
                                 (lVar3,&uStack_1b0,&fStack_1a0,0,0), (uVar7 & 1) != 0)))) {
            uVar10 = 1;
            goto code_r0x015abc38;
          }
        }
      }
      uVar10 = 0;
    }
code_r0x015abc38:
    *(undefined1 *)(lVar13 + 0x28) = uVar10;
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_190,uRam0000000003d33450);
  do {
    lVar6 = *(long *)(lVar3 + 0x70);
    puVar5 = (undefined8 *)func_0x00f78aec(*puVar5);
    /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(puVar5,lVar3,*param_5,*plVar14);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)/*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar6,puVar5,*param_3);
      iVar1 = 0;
      if (*(int *)(lVar3 + 0xb4) + 1 <= *(int *)(lVar3 + 0x88)) {
        iVar1 = *(int *)(lVar3 + 0xb4) + 1;
      }
      *(int *)(lVar3 + 0xb4) = iVar1;
      *(undefined1 *)(lVar3 + 0x9c) = 1;
      return puVar5;
    }
code_r0x015abd38:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015abdcc;
    plVar8 = (long *)___cxa_begin_catch();
    lVar6 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_190,*unaff_x25);
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x015abdcc:
  lVar3 = __Unwind_Resume();
  puVar5 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5231 & 1) == 0) {
    func_0x00f78a20(0x3d2cf40);
    func_0x00f78a20(0x3d1b980);
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d3d1d0);
    func_0x00f78a20(0x3d62ef0);
    func_0x00f78a20(0x3d27758);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5231 = 1;
  }
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  fStack_2b8 = 0.0;
  uStack_2c0 = 0;
  fStack_2c8 = 0.0;
  uStack_2d0 = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar3,uRam0000000003d41090);
  if (lVar6 == 0) goto code_r0x015ac250;
  if (*(long *)(lVar6 + 0x40) == 0) goto code_r0x015ac250;
  lVar6 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar6 + 0x40),0);
  if (*(long *)(lVar3 + 0x70) == 0) goto code_r0x015ac250;
  plVar14 = (long *)0x3d27758;
  param_5 = (undefined8 *)0x3d3d1d0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_2e8,*(long *)(lVar3 + 0x70),uRam0000000003d3d1c8);
  uStack_298 = uStack_2e0;
  uStack_2a0 = uStack_2e8;
  lStack_290 = lStack_2d8;
  while( true ) {
    fVar26 = (float)uVar25;
    fVar20 = (float)uVar9;
    uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_2a0,uRam0000000003d33458);
    lVar13 = lStack_290;
    if ((uVar9 & 1) == 0) break;
    if (lStack_290 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    if (*(long *)(lStack_290 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar11 = *(long *)(*(long *)(lStack_290 + 0x10) + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar16 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    fVar18 = fVar20;
    fVar22 = fVar26;
    fStack_2b0 = fVar16;
    fStack_2ac = fVar20;
    fStack_2a8 = fVar26;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar3,uRam0000000003d41088);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    if (*(long *)(lVar11 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar17 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    uStack_2c0 = CONCAT44(fVar18,fVar17);
    fStack_2c8 = fVar26 - fVar22;
    uVar25 = (ulong)(uint)fStack_2c8;
    uStack_2d0 = CONCAT44(fVar20 - fVar18,fVar16 - fVar17);
    fStack_2b8 = fVar22;
    uVar15 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_2d0,0);
    *(undefined4 *)(lVar13 + 0x18) = uVar15;
    if (*(long *)(lVar3 + 0x78) == 0) {
code_r0x015abffc:
      if (*(long *)(lVar13 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x015ac24c;
      }
      if (*(int *)(*(long *)(lVar13 + 0x10) + 0x74) == 1) {
        *(long *)(lVar3 + 0x78) = lVar13;
      }
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar3 + 0x78) + 0x10);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ac24c;
      }
      if (*(int *)(lVar11 + 0x74) != 1) goto code_r0x015abffc;
    }
    fVar18 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_2d0,0);
    uVar9 = (ulong)(uint)*(float *)(lVar3 + 0x8c);
    if (*(float *)(lVar3 + 0x8c) <= fVar18) {
code_r0x015ac100:
      uVar10 = 0;
    }
    else {
      fVar22 = *(float *)(lVar3 + 0x90);
      uVar9 = (ulong)(uint)fVar22;
      if (fVar18 <= fVar22) goto code_r0x015ac100;
      fVar18 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_2d0,0);
      if (lVar6 == 0) {
        func_0x00f78af4();
code_r0x015ac24c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x15ac250);
        (*pcVar2)();
      }
      fVar17 = (float)uVar25;
      fVar23 = fVar22;
      lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ac24c;
      }
      fVar19 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
      uVar9 = (ulong)(uint)*(float *)(lVar3 + 0x94);
      if (fVar17 * (float)uVar25 + fVar18 * fVar19 + fVar22 * fVar23 <= *(float *)(lVar3 + 0x94))
      goto code_r0x015ac100;
      uVar9 = (ulong)(uint)(fVar20 + *(float *)(lVar3 + 0xa4));
      uVar25 = (ulong)(uint)(fVar26 + *(float *)(lVar3 + 0xa8));
      fVar20 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar16 + *(float *)(lVar3 + 0xa0),lVar6,0);
      *(float *)(lVar13 + 0x1c) = fVar20;
      fVar26 = (float)uVar9;
      *(float *)(lVar13 + 0x20) = fVar26;
      *(float *)(lVar13 + 0x24) = (float)uVar25;
      if (((((fVar20 < 0.0) || (1.0 < fVar20)) || (fVar26 < 0.0)) ||
          ((1.0 < fVar26 || ((float)uVar25 < 0.0)))) ||
         (uVar7 = Atlas_UI_Screens_GameInProgressScreen__CanSeeTarget
                            (lVar3,&uStack_2c0,&fStack_2b0,0,0), (uVar7 & 1) == 0))
      goto code_r0x015ac100;
      uVar10 = 1;
    }
    *(undefined1 *)(lVar13 + 0x28) = uVar10;
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2a0,uRam0000000003d33450);
  do {
    lVar13 = *(long *)(lVar3 + 0x70);
    lVar6 = *plVar14;
    if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar6 = *plVar14;
    }
    puVar12 = *(undefined8 **)(lVar6 + 0xb8);
    puVar5 = (undefined8 *)puVar12[1];
    if (puVar5 == (undefined8 *)0x0) {
      if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar12 = *(undefined8 **)(*plVar14 + 0xb8);
      }
      uVar4 = *puVar12;
      puVar5 = (undefined8 *)func_0x00f78aec(/*System.Comparison<GameInProgressScreen.KartIndicatorData>_TypeInfo*/ uRam0000000003d1b980);
      /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(puVar5,uVar4,uRam0000000003d62ef0,uRam0000000003d2cf40);
      *(undefined8 **)(*(long *)(*plVar14 + 0xb8) + 8) = puVar5;
    }
    if (lVar13 != 0) {
      puVar5 = (undefined8 *)/*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar13,puVar5,*param_5);
      *(undefined1 *)(lVar3 + 0x9c) = 1;
      return puVar5;
    }
code_r0x015ac250:
    func_0x00f78af4();
    if (extraout_w1_00 != 1) goto code_r0x015ac2dc;
    plVar8 = (long *)___cxa_begin_catch();
    lVar6 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2a0,*puVar5);
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x015ac2dc:
  lVar3 = __Unwind_Resume();
  if ((bRam0000000003eb5233 & 1) == 0) {
    func_0x00f78a20(0x3d2c720);
    bRam0000000003eb5233 = 1;
  }
  *(undefined1 *)(lVar3 + 0x108) = 1;
  if (lVar3 == 0) {
    auVar27 = func_0x00f78af4();
    puVar12 = auVar27._8_8_;
    puVar5 = auVar27._0_8_;
    uVar21 = puVar12[1];
    uVar4 = *puVar12;
    puVar5[2] = puVar12[2];
    puVar5[1] = uVar21;
    *puVar5 = uVar4;
    return puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c720 + 0x18) + 0xc0) + 0x38))();
  return puVar5;
}



// ============================================================
// RVA: 0x15ab8c0 | Atlas.UI.Screens.GameInProgressScreen.UpdateAllKartIndicatorDataBattle
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__UpdateAllKartIndicatorDataBattle
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  int extraout_w1_00;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  puVar11 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5232 & 1) == 0) {
    func_0x00f78a20(0x3d2cf40);
    func_0x00f78a20(0x3d1b980);
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d575d0);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d3d1d0);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5232 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  fStack_d8 = 0.0;
  uStack_e0 = 0;
  fStack_e8 = 0.0;
  uStack_f0 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41090);
  if (lVar3 == 0) goto LAB_015abd38;
  if (*(long *)(lVar3 + 0x40) == 0) goto LAB_015abd38;
  lVar3 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar3 + 0x40),0);
  if (*(long *)(param_4 + 0x70) == 0) goto LAB_015abd38;
  puVar11 = (undefined8 *)0x3d1b980;
  unaff_x23 = (undefined8 *)0x3d575d0;
  unaff_x24 = (long *)0x3d2cf40;
  unaff_x22 = (undefined8 *)0x3d3d1d0;
  unaff_x25 = (undefined8 *)0x3d33450;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,*(long *)(param_4 + 0x70),uRam0000000003d3d1c8);
  uStack_b8 = uStack_100;
  uStack_c0 = uStack_108;
  lStack_b0 = lStack_f8;
  while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d33458), lVar6 = lStack_b0,
        (uVar4 & 1) != 0) {
    if (lStack_b0 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    if (*(long *)(lStack_b0 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar8 = *(long *)(*(long *)(lStack_b0 + 0x10) + 0x10);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar8 = *(long *)(lVar8 + 0x18);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    fVar13 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar8,0);
    fVar21 = param_2;
    fVar16 = param_3;
    fStack_d0 = fVar13;
    fStack_cc = param_2;
    fStack_c8 = param_3;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41088);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    if (*(long *)(lVar8 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    lVar8 = *(long *)(lVar8 + 0x18);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    fVar14 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar8,0);
    uStack_e0 = CONCAT44(fVar21,fVar14);
    fVar20 = param_3 - fVar16;
    uStack_f0 = CONCAT44(param_2 - fVar21,fVar13 - fVar14);
    fStack_e8 = fVar20;
    fStack_d8 = fVar16;
    uVar15 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_f0,0);
    *(undefined4 *)(lVar6 + 0x18) = uVar15;
    if (*(long *)(param_4 + 0x78) != 0) {
      lVar8 = *(long *)(*(long *)(param_4 + 0x78) + 0x10);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x015abd34;
      }
      if (1 < *(int *)(lVar8 + 0x74)) goto LAB_015abaf0;
      goto LAB_015abb54;
    }
LAB_015abaf0:
    lVar8 = *(long *)(lVar6 + 0x10);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x015abd34;
    }
    if (*(int *)(lVar8 + 0x74) == 1) {
      *(long *)(param_4 + 0x78) = lVar6;
      if ((*(char *)(param_4 + 0xb8) != '\0') && (*(int *)(lVar8 + 0x78) < 1)) {
        *(undefined8 *)(param_4 + 0x78) = 0;
        goto LAB_015abb54;
      }
      if (lVar3 == 0) {
        func_0x00f78af4();
        goto code_r0x015abd34;
      }
      fVar21 = param_3 + *(float *)(param_4 + 0xa8);
      fVar14 = param_2 + *(float *)(param_4 + 0xa4);
      uVar15 = /*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar13 + *(float *)(param_4 + 0xa0),lVar3,0);
      *(undefined4 *)(lVar6 + 0x1c) = uVar15;
      *(float *)(lVar6 + 0x20) = fVar14;
      uVar7 = 1;
      *(float *)(lVar6 + 0x24) = fVar21;
    }
    else {
LAB_015abb54:
      fVar16 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_f0,0);
      fVar14 = *(float *)(param_4 + 0x8c);
      fVar21 = fVar20;
      if (fVar16 < fVar14) {
        fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_f0,0);
        if (lVar3 == 0) {
          func_0x00f78af4();
code_r0x015abd34:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x15abd38);
          (*pcVar2)();
        }
        fVar19 = fVar14;
        fVar21 = fVar20;
        lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
        if (lVar8 == 0) {
          func_0x00f78af4();
          goto code_r0x015abd34;
        }
        fVar17 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar8,0);
        fVar19 = fVar14 * fVar19;
        fVar14 = *(float *)(param_4 + 0x94);
        if (fVar14 < fVar20 * fVar21 + fVar16 * fVar17 + fVar19) {
          fVar14 = param_2 + *(float *)(param_4 + 0xa4);
          fVar21 = param_3 + *(float *)(param_4 + 0xa8);
          fVar16 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar13 + *(float *)(param_4 + 0xa0),lVar3,0);
          *(float *)(lVar6 + 0x1c) = fVar16;
          *(float *)(lVar6 + 0x20) = fVar14;
          *(float *)(lVar6 + 0x24) = fVar21;
          if (((((0.0 <= fVar16) && (fVar16 <= 1.0)) && (0.0 <= fVar14)) &&
              ((fVar14 <= 1.0 && (0.0 <= fVar21)))) &&
             (uVar4 = Atlas_UI_Screens_GameInProgressScreen__CanSeeTarget
                                (param_4,&uStack_e0,&fStack_d0,0,0), (uVar4 & 1) != 0)) {
            uVar7 = 1;
            goto LAB_015abc38;
          }
        }
      }
      uVar7 = 0;
    }
LAB_015abc38:
    *(undefined1 *)(lVar6 + 0x28) = uVar7;
    param_2 = fVar14;
    param_3 = fVar21;
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d33450);
  do {
    lVar3 = *(long *)(param_4 + 0x70);
    puVar11 = (undefined8 *)func_0x00f78aec(*puVar11);
    /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(puVar11,param_4,*unaff_x23,*unaff_x24);
    if (lVar3 != 0) {
      /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar3,puVar11,*unaff_x22);
      iVar1 = 0;
      if (*(int *)(param_4 + 0xb4) + 1 <= *(int *)(param_4 + 0x88)) {
        iVar1 = *(int *)(param_4 + 0xb4) + 1;
      }
      *(int *)(param_4 + 0xb4) = iVar1;
      *(undefined1 *)(param_4 + 0x9c) = 1;
      return;
    }
LAB_015abd38:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015abdcc;
    plVar5 = (long *)___cxa_begin_catch();
    lVar3 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,*unaff_x25);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x015abdcc:
  lVar3 = __Unwind_Resume();
  puVar11 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5231 & 1) == 0) {
    func_0x00f78a20(0x3d2cf40);
    func_0x00f78a20(0x3d1b980);
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d3d1d0);
    func_0x00f78a20(0x3d62ef0);
    func_0x00f78a20(0x3d27758);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5231 = 1;
  }
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_1c0 = 0;
  fStack_1e8 = 0.0;
  uStack_1f0 = 0;
  fStack_1f8 = 0.0;
  uStack_200 = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar3,uRam0000000003d41090);
  if (lVar6 == 0) goto code_r0x015ac250;
  if (*(long *)(lVar6 + 0x40) == 0) goto code_r0x015ac250;
  lVar6 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar6 + 0x40),0);
  if (*(long *)(lVar3 + 0x70) == 0) goto code_r0x015ac250;
  unaff_x24 = (long *)0x3d27758;
  unaff_x23 = (undefined8 *)0x3d3d1d0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_218,*(long *)(lVar3 + 0x70),uRam0000000003d3d1c8);
  uStack_1c8 = uStack_210;
  uStack_1d0 = uStack_218;
  lStack_1c0 = lStack_208;
  while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d0,uRam0000000003d33458), lVar8 = lStack_1c0,
        (uVar4 & 1) != 0) {
    if (lStack_1c0 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    if (*(long *)(lStack_1c0 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar9 = *(long *)(*(long *)(lStack_1c0 + 0x10) + 0x10);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar9 = *(long *)(lVar9 + 0x18);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar13 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar9,0);
    fVar21 = param_2;
    fVar16 = param_3;
    fStack_1e0 = fVar13;
    fStack_1dc = param_2;
    fStack_1d8 = param_3;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar3,uRam0000000003d41088);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    if (*(long *)(lVar9 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar9 = *(long *)(lVar9 + 0x18);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar14 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar9,0);
    uStack_1f0 = CONCAT44(fVar21,fVar14);
    fVar20 = param_3 - fVar16;
    uStack_200 = CONCAT44(param_2 - fVar21,fVar13 - fVar14);
    fStack_1f8 = fVar20;
    fStack_1e8 = fVar16;
    uVar15 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_200,0);
    *(undefined4 *)(lVar8 + 0x18) = uVar15;
    if (*(long *)(lVar3 + 0x78) == 0) {
code_r0x015abffc:
      if (*(long *)(lVar8 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x015ac24c;
      }
      if (*(int *)(*(long *)(lVar8 + 0x10) + 0x74) == 1) {
        *(long *)(lVar3 + 0x78) = lVar8;
      }
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar3 + 0x78) + 0x10);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x015ac24c;
      }
      if (*(int *)(lVar9 + 0x74) != 1) goto code_r0x015abffc;
    }
    fVar16 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_200,0);
    fVar14 = *(float *)(lVar3 + 0x8c);
    fVar21 = fVar20;
    if ((fVar14 <= fVar16) || (fVar14 = *(float *)(lVar3 + 0x90), fVar16 <= fVar14))
    goto code_r0x015ac100;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_200,0);
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x015ac24c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15ac250);
      (*pcVar2)();
    }
    fVar19 = fVar14;
    fVar21 = fVar20;
    lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar17 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar9,0);
    fVar19 = fVar14 * fVar19;
    fVar14 = *(float *)(lVar3 + 0x94);
    if (fVar20 * fVar21 + fVar16 * fVar17 + fVar19 <= fVar14) {
code_r0x015ac100:
      uVar7 = 0;
    }
    else {
      fVar14 = param_2 + *(float *)(lVar3 + 0xa4);
      fVar21 = param_3 + *(float *)(lVar3 + 0xa8);
      fVar16 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar13 + *(float *)(lVar3 + 0xa0),lVar6,0);
      *(float *)(lVar8 + 0x1c) = fVar16;
      *(float *)(lVar8 + 0x20) = fVar14;
      *(float *)(lVar8 + 0x24) = fVar21;
      if ((((fVar16 < 0.0) || (1.0 < fVar16)) || (fVar14 < 0.0)) ||
         (((1.0 < fVar14 || (fVar21 < 0.0)) ||
          (uVar4 = Atlas_UI_Screens_GameInProgressScreen__CanSeeTarget
                             (lVar3,&uStack_1f0,&fStack_1e0,0,0), (uVar4 & 1) == 0))))
      goto code_r0x015ac100;
      uVar7 = 1;
    }
    *(undefined1 *)(lVar8 + 0x28) = uVar7;
    param_2 = fVar14;
    param_3 = fVar21;
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d33450);
  do {
    lVar8 = *(long *)(lVar3 + 0x70);
    lVar6 = *unaff_x24;
    if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar6 = *unaff_x24;
    }
    puVar10 = *(undefined8 **)(lVar6 + 0xb8);
    puVar11 = (undefined8 *)puVar10[1];
    if (puVar11 == (undefined8 *)0x0) {
      if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar10 = *(undefined8 **)(*unaff_x24 + 0xb8);
      }
      uVar12 = *puVar10;
      puVar11 = (undefined8 *)func_0x00f78aec(/*System.Comparison<GameInProgressScreen.KartIndicatorData>_TypeInfo*/ uRam0000000003d1b980);
      /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(puVar11,uVar12,uRam0000000003d62ef0,uRam0000000003d2cf40);
      *(undefined8 **)(*(long *)(*unaff_x24 + 0xb8) + 8) = puVar11;
    }
    if (lVar8 != 0) {
      /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar8,puVar11,*unaff_x23);
      *(undefined1 *)(lVar3 + 0x9c) = 1;
      return;
    }
code_r0x015ac250:
    func_0x00f78af4();
    if (extraout_w1_00 != 1) goto code_r0x015ac2dc;
    plVar5 = (long *)___cxa_begin_catch();
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,*puVar11);
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x015ac2dc:
  lVar3 = __Unwind_Resume();
  if ((bRam0000000003eb5233 & 1) == 0) {
    func_0x00f78a20(0x3d2c720);
    bRam0000000003eb5233 = 1;
  }
  *(undefined1 *)(lVar3 + 0x108) = 1;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c720 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar22 = func_0x00f78af4();
  puVar10 = auVar22._8_8_;
  puVar11 = auVar22._0_8_;
  uVar18 = puVar10[1];
  uVar12 = *puVar10;
  puVar11[2] = puVar10[2];
  puVar11[1] = uVar18;
  *puVar11 = uVar12;
  return;
}



// ============================================================
// RVA: 0x15abdd0 | Atlas.UI.Screens.GameInProgressScreen.UpdateAllKartIndicatorDataRace
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen__UpdateAllKartIndicatorDataRace
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  long *unaff_x24;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  puVar9 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5231 & 1) == 0) {
    func_0x00f78a20(0x3d2cf40);
    func_0x00f78a20(0x3d1b980);
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d3d1d0);
    func_0x00f78a20(0x3d62ef0);
    func_0x00f78a20(0x3d27758);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5231 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  fStack_d8 = 0.0;
  uStack_e0 = 0;
  fStack_e8 = 0.0;
  uStack_f0 = 0;
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41090);
  if (lVar2 == 0) goto LAB_015ac250;
  if (*(long *)(lVar2 + 0x40) == 0) goto LAB_015ac250;
  lVar2 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar2 + 0x40),0);
  if (*(long *)(param_4 + 0x70) == 0) goto LAB_015ac250;
  unaff_x24 = (long *)0x3d27758;
  unaff_x23 = (undefined8 *)0x3d3d1d0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,*(long *)(param_4 + 0x70),uRam0000000003d3d1c8);
  uStack_b8 = uStack_100;
  uStack_c0 = uStack_108;
  lStack_b0 = lStack_f8;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d33458), lVar8 = lStack_b0,
        (uVar3 & 1) != 0) {
    if (lStack_b0 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    if (*(long *)(lStack_b0 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar6 = *(long *)(*(long *)(lStack_b0 + 0x10) + 0x10);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar11 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar6,0);
    fVar19 = param_2;
    fVar14 = param_3;
    fStack_d0 = fVar11;
    fStack_cc = param_2;
    fStack_c8 = param_3;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41088);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    if (*(long *)(lVar6 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar12 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar6,0);
    uStack_e0 = CONCAT44(fVar19,fVar12);
    fVar18 = param_3 - fVar14;
    uStack_f0 = CONCAT44(param_2 - fVar19,fVar11 - fVar12);
    fStack_e8 = fVar18;
    fStack_d8 = fVar14;
    uVar13 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_f0,0);
    *(undefined4 *)(lVar8 + 0x18) = uVar13;
    if (*(long *)(param_4 + 0x78) == 0) {
LAB_015abffc:
      if (*(long *)(lVar8 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x015ac24c;
      }
      if (*(int *)(*(long *)(lVar8 + 0x10) + 0x74) == 1) {
        *(long *)(param_4 + 0x78) = lVar8;
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(param_4 + 0x78) + 0x10);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x015ac24c;
      }
      if (*(int *)(lVar6 + 0x74) != 1) goto LAB_015abffc;
    }
    fVar14 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_f0,0);
    fVar12 = *(float *)(param_4 + 0x8c);
    fVar19 = fVar18;
    if ((fVar12 <= fVar14) || (fVar12 = *(float *)(param_4 + 0x90), fVar14 <= fVar12))
    goto LAB_015ac100;
    fVar14 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_f0,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
code_r0x015ac24c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15ac250);
      (*pcVar1)();
    }
    fVar17 = fVar12;
    fVar19 = fVar18;
    lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015ac24c;
    }
    fVar15 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar6,0);
    fVar17 = fVar12 * fVar17;
    fVar12 = *(float *)(param_4 + 0x94);
    if (fVar18 * fVar19 + fVar14 * fVar15 + fVar17 <= fVar12) {
LAB_015ac100:
      uVar5 = 0;
    }
    else {
      fVar12 = param_2 + *(float *)(param_4 + 0xa4);
      fVar19 = param_3 + *(float *)(param_4 + 0xa8);
      fVar14 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar11 + *(float *)(param_4 + 0xa0),lVar2,0);
      *(float *)(lVar8 + 0x1c) = fVar14;
      *(float *)(lVar8 + 0x20) = fVar12;
      *(float *)(lVar8 + 0x24) = fVar19;
      if (((((fVar14 < 0.0) || (1.0 < fVar14)) || (fVar12 < 0.0)) ||
          ((1.0 < fVar12 || (fVar19 < 0.0)))) ||
         (uVar3 = Atlas_UI_Screens_GameInProgressScreen__CanSeeTarget
                            (param_4,&uStack_e0,&fStack_d0,0,0), (uVar3 & 1) == 0))
      goto LAB_015ac100;
      uVar5 = 1;
    }
    *(undefined1 *)(lVar8 + 0x28) = uVar5;
    param_2 = fVar12;
    param_3 = fVar19;
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d33450);
  do {
    lVar8 = *(long *)(param_4 + 0x70);
    lVar2 = *unaff_x24;
    if (((*(ushort *)(lVar2 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar2 = *unaff_x24;
    }
    puVar7 = *(undefined8 **)(lVar2 + 0xb8);
    puVar9 = (undefined8 *)puVar7[1];
    if (puVar9 == (undefined8 *)0x0) {
      if (((*(ushort *)(lVar2 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar7 = *(undefined8 **)(*unaff_x24 + 0xb8);
      }
      uVar10 = *puVar7;
      puVar9 = (undefined8 *)func_0x00f78aec(/*System.Comparison<GameInProgressScreen.KartIndicatorData>_TypeInfo*/ uRam0000000003d1b980);
      /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(puVar9,uVar10,uRam0000000003d62ef0,uRam0000000003d2cf40);
      *(undefined8 **)(*(long *)(*unaff_x24 + 0xb8) + 8) = puVar9;
    }
    if (lVar8 != 0) {
      /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar8,puVar9,*unaff_x23);
      *(undefined1 *)(param_4 + 0x9c) = 1;
      return;
    }
LAB_015ac250:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015ac2dc;
    plVar4 = (long *)___cxa_begin_catch();
    lVar2 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,*puVar9);
  } while (lVar2 == 0);
  func_0x00f78ac0(lVar2,0);
code_r0x015ac2dc:
  lVar2 = __Unwind_Resume();
  if ((bRam0000000003eb5233 & 1) == 0) {
    func_0x00f78a20(0x3d2c720);
    bRam0000000003eb5233 = 1;
  }
  *(undefined1 *)(lVar2 + 0x108) = 1;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c720 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar20 = func_0x00f78af4();
  puVar7 = auVar20._8_8_;
  puVar9 = auVar20._0_8_;
  uVar16 = puVar7[1];
  uVar10 = *puVar7;
  puVar9[2] = puVar7[2];
  puVar9[1] = uVar16;
  *puVar9 = uVar10;
  return;
}



// ============================================================
// RVA: 0x15ac2e0 | Atlas.UI.Screens.GameInProgressScreen..ctor
// ============================================================

void Atlas_UI_Screens_GameInProgressScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb5233 & 1) == 0) {
    func_0x00f78a20(0x3d2c720);
    bRam0000000003eb5233 = 1;
  }
  *(undefined1 *)(param_1 + 0x108) = 1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c720 + 0x18) + 0xc0) + 0x38))();
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



// ============================================================
// RVA: 0x15ac33c | Atlas.UI.Screens.GameInProgressScreen.<OnExitInProgressState>b__54_0
// ============================================================

/* WARNING: Possible PIC construction at 0x01495910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01495978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01495914) */
/* WARNING: Removing unreachable block (ram,0x0149591c) */
/* WARNING: Removing unreachable block (ram,0x0149597c) */
/* WARNING: Removing unreachable block (ram,0x01495960) */
/* WARNING: Removing unreachable block (ram,0x01495980) */
/* WARNING: Removing unreachable block (ram,0x01495970) */
/* WARNING: Removing unreachable block (ram,0x01495a10) */
/* WARNING: Removing unreachable block (ram,0x01495978) */

ulong Atlas_UI_Screens_GameInProgressScreen___OnExitInProgressState_b__54_0
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar8 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb5234 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    bRam0000000003eb5234 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
  if ((lVar4 != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar4 != 0)) {
    param_3 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41080);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x278), lVar4 != 0)) {
      uVar5 = 0;
      if ((bRam0000000003eb49c1 & 1) == 0) {
        func_0x00f78a20(0x3d32a70,0);
        func_0x00f78a20(0x3d32a78);
        func_0x00f78a20(0x3d32a80);
        func_0x00f78a20(0x3d3b320);
        func_0x00f78a20(0x3d5a760);
        func_0x00f78a20(0x3d5a768);
        func_0x00f78a20(0x3d27728);
        func_0x00f78a20(0x3d296d8);
        bRam0000000003eb49c1 = 1;
        uVar5 = extraout_x1;
      }
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      auVar8._8_8_ = uVar5;
      auVar8._0_8_ = *(long *)(lVar4 + 0x20);
      if (*(long *)(lVar4 + 0x20) == 0) {
        while (func_0x00f78af4(), extraout_w1 == 1) {
          plVar2 = (long *)___cxa_begin_catch();
          lVar7 = *plVar2;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32a70);
          if (lVar7 != 0) {
            func_0x00f78ac0(lVar7,0);
            break;
          }
          lVar7 = *(long *)(lVar4 + 0xa8);
          unaff_x21 = (undefined8 *)func_0x00f78aec(*unaff_x21);
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar4,*unaff_x24,0);
          if (lVar7 != 0) {
            /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableHitPlayer*/ func_0x0159d844(lVar7,unaff_x21,0);
            lVar7 = *(long *)(lVar4 + 0xb0);
            unaff_x21 = (undefined8 *)func_0x00f78aec(*unaff_x23);
            Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
                      (unaff_x21,lVar4,*unaff_x22,0);
            if (lVar7 != 0) {
              uVar1 = Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned
                                (lVar7,unaff_x21,0);
              return uVar1;
            }
          }
        }
        auVar8 = __Unwind_Resume();
      }
      uVar3 = auVar8._0_8_;
      uVar1 = uVar3;
      if ((bRam0000000003eb49c8 & 1) == 0) {
        func_0x00f78a20(0x3d5a770,auVar8._8_8_);
        uVar1 = func_0x00f78a20(0x3d23a58);
        bRam0000000003eb49c8 = 1;
      }
      if (*(long *)(uVar3 + 0x30) == 0) {
code_r0x01495afc:
        *(undefined8 *)(uVar3 + 0x30) = 0;
        return uVar1;
      }
      lVar4 = *(long *)(*(long *)(uVar3 + 0x30) + 0x10);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
        lVar4 = *(long *)(lVar4 + 0x60);
        uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ uRam0000000003d23a58);
        Atlas_Gameplay_Kart_OnKartSpinOutDelegate___ctor(uVar5,uVar3,uRam0000000003d5a770,0);
        if (lVar4 != 0) {
          uVar1 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnSpinOutTriggered
                            (lVar4,uVar5,0);
          goto code_r0x01495afc;
        }
      }
      lVar4 = func_0x00f78af4();
      lVar4 = lVar4 + 0x74;
      /*UnityEngine.Rect$$get_xMin*/ func_0x03253524(lVar4,0);
      /*UnityEngine.Rect$$get_width*/ func_0x03253564(lVar4,0);
      /*UnityEngine.Rect$$get_yMin*/ func_0x0325352c(lVar4,0);
      uVar1 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(lVar4,0);
      return uVar1;
    }
  }
  auVar8 = func_0x00f78af4();
  lVar4 = auVar8._8_8_;
  lVar7 = *(long *)(auVar8._0_8_ + 0x78);
  if (lVar7 == lVar4) {
    uVar1 = 0xffffffff;
  }
  else if (lVar7 == param_3) {
    uVar1 = 1;
  }
  else {
    if ((lVar4 == 0) || (param_3 == 0)) {
      lVar4 = func_0x00f78af4();
      return *(ulong *)(lVar4 + 0x68);
    }
    uVar6 = 1;
    if (*(float *)(lVar4 + 0x18) < *(float *)(param_3 + 0x18)) {
      uVar6 = 0xffffffff;
    }
    uVar1 = (ulong)uVar6;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15ac3d0 | Atlas.UI.Screens.GameInProgressScreen.<UpdateAllKartIndicatorDataBattle>b__81_0
// ============================================================

ulong Atlas_UI_Screens_GameInProgressScreen___UpdateAllKartIndicatorDataBattle_b__81_0
                (long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x78) == param_2) {
    uVar1 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x78) == param_3) {
    uVar1 = 1;
  }
  else {
    if ((param_2 == 0) || (param_3 == 0)) {
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x68);
    }
    uVar3 = 1;
    if (*(float *)(param_2 + 0x18) < *(float *)(param_3 + 0x18)) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (ulong)uVar3;
  }
  return uVar1;
}



