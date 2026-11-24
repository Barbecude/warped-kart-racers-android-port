// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.PauseManager

// ============================================================
// RVA: 0x14b6938 | Atlas.Gameplay.PauseManager.IsGameplayPaused
// ============================================================

undefined1 Atlas_Gameplay_PauseManager__IsGameplayPaused(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14b6940 | Atlas.Gameplay.PauseManager.IsPauseMenuShowing
// ============================================================

undefined1 Atlas_Gameplay_PauseManager__IsPauseMenuShowing(long param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



// ============================================================
// RVA: 0x14b6948 | Atlas.Gameplay.PauseManager.Init
// ============================================================

void Atlas_Gameplay_PauseManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  *(undefined8 *)(param_1 + 0x40) = param_6;
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



// ============================================================
// RVA: 0x14b6960 | Atlas.Gameplay.PauseManager.DeInit
// ============================================================

void Atlas_Gameplay_PauseManager__DeInit(long param_1)

{
  /*Atlas.Gameplay.PauseManager$$UnPause*/ func_0x014b6998(param_1,0);
  /*Atlas.Gameplay.PauseManager$$SetSystemsPaused*/ func_0x014b6a08(param_1,0,0);
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}



// ============================================================
// RVA: 0x14b6998 | Atlas.Gameplay.PauseManager.UnPause
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */

long Atlas_Gameplay_PauseManager__UnPause(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [12];
  undefined1 auStack_48 [8];
  
  if ((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x49) == '\0')) {
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 3;
  *(undefined2 *)(param_1 + 0x48) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    param_3 = 0;
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(param_1 + 0x20),8);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if ((bRam0000000003eb4a16 & 1) == 0) {
        func_0x00f78a20(0x3d71930,0,0);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a16 = 1;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (lVar3 != 0) {
        uVar6 = *(undefined4 *)(lVar4 + 0x40);
        puVar1 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar4 + 0x30) != 1) {
          puVar1 = (undefined8 *)0x3d71930;
        }
        uVar5 = *puVar1;
        iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
        if (iVar2 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar6,lVar3 + 0x28,uVar5,0,0);
        }
        return lVar3;
      }
      return 0;
    }
  }
  auVar7 = func_0x00f78af4();
  uVar6 = 0;
  if (auVar7._8_4_ == 0) {
    uVar6 = 0x3f800000;
  }
  lVar4 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar6,0);
  lVar3 = *(long *)(auVar7._0_8_ + 0x30);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar4 = 0, lVar3 != 0)) {
    *(char *)(lVar3 + 0x1b8) = (char)param_3;
    lVar4 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(auStack_48,lVar3,param_3,0);
    return lVar4;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x14b6a08 | Atlas.Gameplay.PauseManager.SetSystemsPaused
// ============================================================

void Atlas_Gameplay_PauseManager__SetSystemsPaused(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [8];
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 0x3f800000;
  }
  /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar2,0);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar1 != 0)) {
    *(char *)(lVar1 + 0x1b8) = (char)param_3;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(auStack_28,lVar1,param_3,0);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x14b6a64 | Atlas.Gameplay.PauseManager.UserPause
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0149d700) */
/* WARNING: Removing unreachable block (ram,0x0149d71c) */
/* WARNING: Removing unreachable block (ram,0x0149d73c) */
/* WARNING: Removing unreachable block (ram,0x0149d77c) */
/* WARNING: Removing unreachable block (ram,0x0149d744) */
/* WARNING: Removing unreachable block (ram,0x0149d760) */

ulong Atlas_Gameplay_PauseManager__UserPause(ulong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 extraout_s0;
  
  uVar5 = /*Core.Input.InputManager$$IsAllInputSuspended*/ func_0x0164a5cc(0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  uVar5 = param_1;
  if ((bRam0000000003eb4ac3 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d285a8);
    func_0x00f78a20(0x3d5b4e0);
    func_0x00f78a20(0x3d5b4e8);
    func_0x00f78a20(0x3d5b4f0);
    uVar5 = func_0x00f78a20(0x3d285b0);
    bRam0000000003eb4ac3 = 1;
  }
  if ((*(char *)(param_1 + 0x48) != '\0') || (*(char *)(param_1 + 0x49) != '\0')) {
    return uVar5;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    bVar2 = *(char *)(*(long *)(param_1 + 0x30) + 0x50) != '\0';
    *(undefined1 *)(param_1 + 0x49) = 1;
    *(bool *)(param_1 + 0x48) = bVar2;
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x4c) = 2;
      uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.OptionSelected_TypeInfo*/ uRam0000000003d285a8);
      Atlas_UI_Screens_PauseScreen_OptionSelected___ctor(uVar6,param_1,uRam0000000003d5b4e8,0);
    }
    else {
      uVar6 = 0;
    }
    lVar9 = *(long *)(param_1 + 0x20);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe0);
    lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.TransitionData_TypeInfo*/ uRam0000000003d285b0);
    Atlas_UI_Screens_PauseScreen_TransitionData___ctor(lVar7,0);
    uVar8 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.OptionSelected_TypeInfo*/ uRam0000000003d285a8);
    Atlas_UI_Screens_PauseScreen_OptionSelected___ctor(uVar8,param_1,uRam0000000003d5b4f0,0);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      uVar8 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.OptionSelected_TypeInfo*/ uRam0000000003d285a8);
      Atlas_UI_Screens_PauseScreen_OptionSelected___ctor(uVar8,param_1,uRam0000000003d5b4e0,0);
      *(undefined8 *)(lVar7 + 0x18) = uVar8;
      *(undefined8 *)(lVar7 + 0x20) = uVar6;
      if (lVar9 != 0) {
        /*Atlas.UI.AtlasUIManager$$ShowScreen*/ func_0x014708a0(lVar9,uVar10,8,lVar7,0,0);
        uVar5 = *(ulong *)(param_1 + 0x28);
        if (uVar5 != 0) {
          Atlas_Audio_MusicManager__SaveParameter(uVar5);
          Atlas_Audio_MusicManager__SetParameter(uVar5,9);
          uVar4 = uVar5;
          if ((bRam0000000003eb4a18 & 1) == 0) {
            uVar4 = func_0x00f78a20(0x3d69668);
            bRam0000000003eb4a18 = 1;
          }
          if (*(int *)(uVar5 + 0x30) == 1) {
            uVar4 = 0;
            if ((*(long *)(uVar5 + 0x10) != 0) &&
               (uVar4 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(uVar5 + 0x10),0), uVar6 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668,
               (int)uVar4 != 0)) {
              uVar5 = *(ulong *)(uVar5 + 0x10);
              if (uVar5 == 0) {
                lVar9 = func_0x00f78af4();
                if ((bRam0000000003eb4a15 & 1) == 0) {
                  func_0x00f78a20(0x3d71930);
                  func_0x00f78a20(0x3d69668);
                  bRam0000000003eb4a15 = 1;
                }
                uVar5 = 0;
                if (*(long *)(lVar9 + 0x10) != 0) {
                  puVar1 = (undefined8 *)0x3d69668;
                  if (*(int *)(lVar9 + 0x30) != 1) {
                    puVar1 = (undefined8 *)0x3d71930;
                  }
                  uVar5 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar9 + 0x10),*puVar1,0);
                  *(undefined4 *)(lVar9 + 0x40) = extraout_s0;
                }
                return uVar5;
              }
              iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar5 + 0x28,0,0,0);
              if (iVar3 != 0) {
                /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0x40e00000,uVar5 + 0x28,uVar6,0,0);
              }
              return uVar5;
            }
          }
          return uVar4;
        }
      }
    }
  }
  uVar5 = func_0x00f78af4();
  if (*(char *)(uVar5 + 0x50) == '\0') {
    return uVar5;
  }
  iVar3 = *(int *)(uVar5 + 0x4c);
  if (iVar3 == 3) {
    uVar6 = 0;
code_r0x014b6d08:
    uVar8 = 0;
  }
  else {
    if (iVar3 != 2) {
      uVar4 = uVar5;
      if (iVar3 != 1) goto code_r0x014b6d20;
      uVar6 = 1;
      goto code_r0x014b6d08;
    }
    uVar6 = 1;
    uVar8 = 1;
  }
  uVar4 = Atlas_Gameplay_PauseManager__SetSystemsPaused(uVar5,uVar6,uVar8);
code_r0x014b6d20:
  *(undefined4 *)(uVar5 + 0x4c) = 0;
  return uVar4;
}



// ============================================================
// RVA: 0x14b6aa8 | Atlas.Gameplay.PauseManager.Pause
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0149d700) */
/* WARNING: Removing unreachable block (ram,0x0149d71c) */
/* WARNING: Removing unreachable block (ram,0x0149d73c) */
/* WARNING: Removing unreachable block (ram,0x0149d77c) */
/* WARNING: Removing unreachable block (ram,0x0149d744) */
/* WARNING: Removing unreachable block (ram,0x0149d760) */

long Atlas_Gameplay_PauseManager__Pause(long param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 extraout_s0;
  
  lVar5 = param_1;
  if ((bRam0000000003eb4ac3 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d285a8);
    func_0x00f78a20(0x3d5b4e0);
    func_0x00f78a20(0x3d5b4e8);
    func_0x00f78a20(0x3d5b4f0);
    lVar5 = func_0x00f78a20(0x3d285b0);
    bRam0000000003eb4ac3 = 1;
  }
  if ((*(char *)(param_1 + 0x48) != '\0') || (*(char *)(param_1 + 0x49) != '\0' && param_3 == 0)) {
    return lVar5;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    cVar2 = *(char *)(*(long *)(param_1 + 0x30) + 0x50);
    *(char *)(param_1 + 0x49) = (char)param_2;
    uVar3 = cVar2 != '\0' | param_3;
    *(char *)(param_1 + 0x48) = (char)uVar3;
    if (uVar3 != 0) {
      uVar9 = 1;
      if (param_3 == 0) {
        uVar9 = 2;
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar9;
    }
    if (param_2 == 0) {
LAB_014b6c94:
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        Atlas_Audio_MusicManager__SaveParameter(lVar5);
        Atlas_Audio_MusicManager__SetParameter(lVar5,9);
        lVar7 = lVar5;
        if ((bRam0000000003eb4a18 & 1) == 0) {
          lVar7 = func_0x00f78a20(0x3d69668);
          bRam0000000003eb4a18 = 1;
        }
        if (*(int *)(lVar5 + 0x30) == 1) {
          lVar7 = 0;
          if ((*(long *)(lVar5 + 0x10) != 0) &&
             (lVar7 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar5 + 0x10),0), uVar6 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668,
             (int)lVar7 != 0)) {
            lVar5 = *(long *)(lVar5 + 0x10);
            if (lVar5 == 0) {
              lVar5 = func_0x00f78af4();
              if ((bRam0000000003eb4a15 & 1) == 0) {
                func_0x00f78a20(0x3d71930);
                func_0x00f78a20(0x3d69668);
                bRam0000000003eb4a15 = 1;
              }
              lVar7 = 0;
              if (*(long *)(lVar5 + 0x10) != 0) {
                puVar1 = (undefined8 *)0x3d69668;
                if (*(int *)(lVar5 + 0x30) != 1) {
                  puVar1 = (undefined8 *)0x3d71930;
                }
                lVar7 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar5 + 0x10),*puVar1,0);
                *(undefined4 *)(lVar5 + 0x40) = extraout_s0;
              }
              return lVar7;
            }
            iVar4 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar5 + 0x28,0,0,0);
            if (iVar4 != 0) {
              /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0x40e00000,lVar5 + 0x28,uVar6,0,0);
            }
            return lVar5;
          }
        }
        return lVar7;
      }
    }
    else {
      if (cVar2 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.OptionSelected_TypeInfo*/ uRam0000000003d285a8);
        Atlas_UI_Screens_PauseScreen_OptionSelected___ctor(uVar6,param_1,uRam0000000003d5b4e8,0);
      }
      lVar5 = *(long *)(param_1 + 0x20);
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe0);
      lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.TransitionData_TypeInfo*/ uRam0000000003d285b0);
      Atlas_UI_Screens_PauseScreen_TransitionData___ctor(lVar7,0);
      uVar8 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.OptionSelected_TypeInfo*/ uRam0000000003d285a8);
      Atlas_UI_Screens_PauseScreen_OptionSelected___ctor(uVar8,param_1,uRam0000000003d5b4f0,0);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x10) = uVar8;
        uVar8 = func_0x00f78aec(/*Atlas.UI.Screens.PauseScreen.OptionSelected_TypeInfo*/ uRam0000000003d285a8);
        Atlas_UI_Screens_PauseScreen_OptionSelected___ctor(uVar8,param_1,uRam0000000003d5b4e0,0);
        *(undefined8 *)(lVar7 + 0x18) = uVar8;
        *(undefined8 *)(lVar7 + 0x20) = uVar6;
        if (lVar5 != 0) {
          /*Atlas.UI.AtlasUIManager$$ShowScreen*/ func_0x014708a0(lVar5,uVar10,8,lVar7,0,0);
          goto LAB_014b6c94;
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  if (*(char *)(lVar5 + 0x50) == '\0') {
    return lVar5;
  }
  iVar4 = *(int *)(lVar5 + 0x4c);
  if (iVar4 == 3) {
    uVar6 = 0;
code_r0x014b6d08:
    uVar8 = 0;
  }
  else {
    if (iVar4 != 2) {
      lVar7 = lVar5;
      if (iVar4 != 1) goto code_r0x014b6d20;
      uVar6 = 1;
      goto code_r0x014b6d08;
    }
    uVar6 = 1;
    uVar8 = 1;
  }
  lVar7 = Atlas_Gameplay_PauseManager__SetSystemsPaused(lVar5,uVar6,uVar8);
code_r0x014b6d20:
  *(undefined4 *)(lVar5 + 0x4c) = 0;
  return lVar7;
}



// ============================================================
// RVA: 0x14b6cc0 | Atlas.Gameplay.PauseManager.LateUpdate
// ============================================================

void Atlas_Gameplay_PauseManager__LateUpdate(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 3) {
    uVar2 = 0;
LAB_014b6d08:
    uVar3 = 0;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_014b6d20;
      uVar2 = 1;
      goto LAB_014b6d08;
    }
    uVar2 = 1;
    uVar3 = 1;
  }
  Atlas_Gameplay_PauseManager__SetSystemsPaused(param_1,uVar2,uVar3);
LAB_014b6d20:
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



// ============================================================
// RVA: 0x14b6d30 | Atlas.Gameplay.PauseManager.SetNetworkTimePause
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */

long Atlas_Gameplay_PauseManager__SetNetworkTimePause(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  long lStack_40;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  if (*(char *)(param_1 + 0x48) != '\0') {
    return param_1;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 == 0) {
    unaff_x20 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_PauseManager__OnResumePressed;
    unaff_x29 = &puStack_30;
    unaff_x19 = 0;
    if ((*(char *)(unaff_x20 + 0x48) == '\0') && (*(char *)(unaff_x20 + 0x49) == '\0')) {
      return unaff_x20;
    }
    *(undefined4 *)(unaff_x20 + 0x4c) = 3;
    *(undefined2 *)(unaff_x20 + 0x48) = 0;
    param_2 = param_3;
    lStack_40 = param_1;
    puStack_30 = &stack0xfffffffffffffff0;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      param_2 = 0;
      /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(unaff_x20 + 0x20),8);
      lVar8 = *(long *)(unaff_x20 + 0x28);
      if (lVar8 != 0) {
        if ((bRam0000000003eb4a16 & 1) == 0) {
          func_0x00f78a20(0x3d71930,0,0);
          func_0x00f78a20(0x3d69668);
          bRam0000000003eb4a16 = 1;
        }
        lVar7 = *(long *)(lVar8 + 0x10);
        if (lVar7 != 0) {
          uVar9 = *(undefined4 *)(lVar8 + 0x40);
          puVar1 = (undefined8 *)0x3d69668;
          if (*(int *)(lVar8 + 0x30) != 1) {
            puVar1 = (undefined8 *)0x3d71930;
          }
          uVar6 = *puVar1;
          iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar7 + 0x28,0,0,0);
          if (iVar5 != 0) {
            /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar9,lVar7 + 0x28,uVar6,0,0);
          }
          return lVar7;
        }
        return 0;
      }
    }
    unaff_x30 = Atlas_Gameplay_PauseManager__SetSystemsPaused;
    auVar10 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&lStack_40;
    auVar2 = auVar10._0_12_;
  }
  else {
    if (*(char *)(lVar8 + 0x50) == '\0') {
      return param_1;
    }
    auVar2 = auVar10._0_12_;
    if (((param_2 & 1) == 0) && (auVar2 = auVar3._0_12_, *(long *)(lVar8 + 0x20) != 0)) {
      /*Core.Networking.NetworkSession$$OnSinglePlayerApplicationUnpaused*/ func_0x0165fdf0(*(long *)(lVar8 + 0x20),0);
      auVar2 = auVar4._0_12_;
    }
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar9 = 0;
  if (auVar2._8_4_ == 0) {
    uVar9 = 0x3f800000;
  }
  lVar8 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar9,0);
  lVar7 = *(long *)(auVar2._0_8_ + 0x30);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x20);
    lVar8 = 0;
    if (lVar7 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      *(char *)(lVar7 + 0x1b8) = (char)param_2;
      lVar8 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)register0x00000008 + -0x28),lVar7,param_2,0);
      return lVar8;
    }
  }
  return lVar8;
}



// ============================================================
// RVA: 0x14b6d98 | Atlas.Gameplay.PauseManager.OnResumePressed
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */

long Atlas_Gameplay_PauseManager__OnResumePressed
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [12];
  undefined1 auStack_48 [8];
  
  if ((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x49) == '\0')) {
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 3;
  *(undefined2 *)(param_1 + 0x48) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    param_3 = 0;
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(param_1 + 0x20),8);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if ((bRam0000000003eb4a16 & 1) == 0) {
        func_0x00f78a20(0x3d71930,0,0);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a16 = 1;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (lVar3 != 0) {
        uVar6 = *(undefined4 *)(lVar4 + 0x40);
        puVar1 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar4 + 0x30) != 1) {
          puVar1 = (undefined8 *)0x3d71930;
        }
        uVar5 = *puVar1;
        iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
        if (iVar2 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar6,lVar3 + 0x28,uVar5,0,0);
        }
        return lVar3;
      }
      return 0;
    }
  }
  auVar7 = func_0x00f78af4();
  uVar6 = 0;
  if (auVar7._8_4_ == 0) {
    uVar6 = 0x3f800000;
  }
  lVar4 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar6,0);
  lVar3 = *(long *)(auVar7._0_8_ + 0x30);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar4 = 0, lVar3 != 0)) {
    *(char *)(lVar3 + 0x1b8) = (char)param_3;
    lVar4 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(auStack_48,lVar3,param_3,0);
    return lVar4;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x14b6da0 | Atlas.Gameplay.PauseManager.OnQuitPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f38) */
/* WARNING: Removing unreachable block (ram,0x02f87f70) */
/* WARNING: Removing unreachable block (ram,0x02f87f90) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f88068) */
/* WARNING: Removing unreachable block (ram,0x02f88094) */
/* WARNING: Removing unreachable block (ram,0x02f880b4) */
/* WARNING: Removing unreachable block (ram,0x02f880bc) */
/* WARNING: Removing unreachable block (ram,0x02f880c8) */
/* WARNING: Removing unreachable block (ram,0x02f880d0) */
/* WARNING: Removing unreachable block (ram,0x02f880e0) */
/* WARNING: Removing unreachable block (ram,0x02f880e8) */
/* WARNING: Removing unreachable block (ram,0x02f880fc) */
/* WARNING: Removing unreachable block (ram,0x02f88110) */
/* WARNING: Removing unreachable block (ram,0x02f88120) */
/* WARNING: Removing unreachable block (ram,0x02f8812c) */
/* WARNING: Removing unreachable block (ram,0x02f88130) */
/* WARNING: Removing unreachable block (ram,0x02f88134) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */

ulong Atlas_Gameplay_PauseManager__OnQuitPressed
                (ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar11;
  int iVar10;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  ulong unaff_x19;
  undefined8 uVar22;
  ulong unaff_x20;
  long unaff_x21;
  long lVar23;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar25;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  puVar25 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(param_1 + 0x10),0);
  }
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 == 0) {
    lVar12 = func_0x00f78af4();
    if (*(long *)(lVar12 + 0x18) != 0) {
      /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(lVar12 + 0x18),0);
    }
    lVar12 = *(long *)(lVar12 + 0x20);
    if (lVar12 == 0) {
      uVar15 = func_0x00f78af4();
      return uVar15;
    }
    unaff_x30 = &Atlas_Gameplay_PauseManager__OnRestartSelected;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar25;
  }
  uVar15 = 8;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar11 = *(ulong *)(lVar12 + 0x10);
  if (uVar11 != 0) {
    puVar25 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar26 = *(undefined **)((long)register0x00000008 + -8);
    puVar7 = (undefined1 *)register0x00000008;
    param_4 = unaff_x19;
    lVar12 = unaff_x21;
code_r0x02f877a8:
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(long *)(puVar7 + -0x28) = lVar12;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(ulong *)(puVar7 + -0x18) = param_4;
    *(undefined1 **)(puVar7 + -0x10) = puVar25;
    *(undefined **)(puVar7 + -8) = puVar26;
    uVar14 = uVar11;
    if ((bRam0000000003ebc64d & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      uVar14 = func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64d = 1;
    }
    uVar21 = (uint)uVar15;
    if ((-1 < (int)uVar21) && ((int)uVar21 < *(int *)(uVar11 + 0x50))) {
      lVar23 = *(long *)(uVar11 + 0x70);
      lVar12 = 0;
      if (lVar23 != 0) {
        if (*(uint *)(lVar23 + 0x18) <= uVar21) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar23 = *(long *)(lVar23 + 0x10) + (uVar15 & 0xffffffff) * 0x28;
        unaff_x22 = *(ulong *)(lVar23 + 0x20);
        lVar12 = *(long *)(lVar23 + 0x28);
        *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar23 + 0x42);
        *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar23 + 0x46);
        if (lVar12 != 0) {
          /*Core.UI2.UIScreen$$ForceExit*/ func_0x02f882d8(lVar12);
          /*Core.UI2.UIManager$$ReturnScreenWithBehaviour*/ func_0x02f8833c(uVar11,lVar12);
        }
        lVar23 = *(long *)(uVar11 + 0x70);
        if (lVar23 != 0) {
          *(ulong *)(puVar7 + -0x58) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x50) = 0;
          *(undefined8 *)(puVar7 + -0x48) = 0;
          *(undefined8 *)(puVar7 + -0x40) = 0;
          *(undefined2 *)(puVar7 + -0x38) = 0;
          *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
          *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
          uVar15 = /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar23,uVar15,puVar7 + -0x58,uRam0000000003d3ddd0);
          return uVar15;
        }
      }
      lVar23 = func_0x00f78af4();
      *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
      *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
      *(ulong *)(puVar7 + -0x90) = unaff_x22;
      *(long *)(puVar7 + -0x88) = lVar12;
      *(ulong *)(puVar7 + -0x80) = uVar11;
      *(ulong *)(puVar7 + -0x78) = uVar15;
      *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
      if ((bRam0000000003ebc647 & 1) == 0) {
        func_0x00f78a20(0x3d255c0);
        bRam0000000003ebc647 = 1;
      }
      if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar22,0);
      if (0 < *(int *)(lVar23 + 0x50)) {
        iVar10 = 0;
        do {
          /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar23,iVar10);
          /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar23,iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar23 + 0x50));
      }
      /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar23);
      *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x80);
      *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x78);
      *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
      *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*pcRam0000000003ec05a0)(uVar22);
      return uVar15;
    }
    return uVar14;
  }
  uVar15 = 0;
  auVar27 = func_0x00f78af4();
  lVar12 = auVar27._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  uVar11 = *(ulong *)(auVar27._0_8_ + 0x10);
  if (uVar11 != 0) {
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x20);
    puVar26 = &UNK_02f883d8;
    unaff_x20 = uVar15;
    unaff_x22 = uVar11;
    goto code_r0x02f877a8;
  }
  auVar27 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar12 = *(long *)(auVar27._0_8_ + 0x10);
  if (lVar12 == 0) {
    auVar27 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar12 = *(long *)(auVar27._0_8_ + 0x10);
    auVar28._8_8_ = auVar27._8_8_;
    auVar28._0_8_ = lVar12;
    if (lVar12 != 0) {
      uVar11 = 0;
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0x40);
      puVar26 = *(undefined **)((long)register0x00000008 + -0x38);
      goto code_r0x02f884dc;
    }
    auVar27 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar12 = *(long *)(auVar27._0_8_ + 0x10);
    auVar27._8_8_ = auVar27._8_8_;
    auVar27._0_8_ = lVar12;
    if (lVar12 == 0) {
      auVar27 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x50);
      *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__SetScreenVisible
      ;
      lVar12 = *(long *)(auVar27._0_8_ + 0x10);
      auVar29._8_8_ = auVar27._8_8_;
      auVar29._0_8_ = lVar12;
      if (lVar12 == 0) {
        uVar15 = func_0x00f78af4();
        *(ulong *)((long)register0x00000008 + -0x90) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x88) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x80) = unaff_x20;
        *(ulong *)((long)register0x00000008 + -0x78) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x70) =
             (undefined1 *)((long)register0x00000008 + -0x60);
        *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar22 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar22,uRam0000000003d2fb80);
        *(undefined8 *)(uVar15 + 0x30) = uVar22;
        return uVar15;
      }
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x50);
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0x60);
      puVar26 = *(undefined **)((long)register0x00000008 + -0x58);
      goto code_r0x02f88674;
    }
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x40);
    puVar25 = *(undefined1 **)((long)register0x00000008 + -0x50);
    puVar26 = *(undefined **)((long)register0x00000008 + -0x48);
    uVar11 = uVar15;
    lVar12 = unaff_x21;
  }
  else {
    uVar11 = 0;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar21 = auVar27._8_4_;
    if (((int)uVar21 < 0) || (*(int *)(lVar12 + 0x50) <= (int)uVar21)) {
      return 0;
    }
    lVar12 = *(long *)(lVar12 + 0x70);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= uVar21) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar23 = *(long *)(lVar12 + 0x10) + (auVar27._8_8_ & 0xffffffff) * 0x28;
      lVar12 = *(long *)(lVar23 + 0x28);
      cVar2 = *(char *)(lVar23 + 0x40);
      iVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar23 + 0x30),0);
      if (iVar10 == 0 || cVar2 != '\0') {
        return 0;
      }
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x4c) != 2)) {
        return 0;
      }
      return 1;
    }
    puVar26 = &Core_UI2_UIManager__GetLayerState;
    auVar28 = func_0x00f78af4();
    unaff_x20 = 0;
    unaff_x19 = auVar27._8_8_;
code_r0x02f884dc:
    puVar5 = puVar4 + -0x30;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = unaff_x21;
    *(ulong *)(puVar4 + -0x20) = unaff_x20;
    *(ulong *)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar26;
    puVar25 = puVar4 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar12 = *(long *)(auVar28._0_8_ + 0x70);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= auVar28._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)auVar28._8_4_ * 0x28 + 0x28);
      if (lVar12 == 0) {
        uVar15 = 4;
      }
      else {
        uVar15 = (ulong)*(uint *)(lVar12 + 0x4c);
      }
      return uVar15;
    }
    puVar26 = &Core_UI2_UIManager__EnableInput;
    auVar27 = func_0x00f78af4();
    unaff_x20 = 0;
    unaff_x19 = auVar28._8_8_;
    lVar12 = 0x3ebc000;
  }
  uVar14 = auVar27._8_8_;
  unaff_x21 = auVar27._0_8_;
  puVar6 = puVar5 + -0x40;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = lVar12;
  *(ulong *)(puVar5 + -0x20) = unaff_x20;
  *(ulong *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar25;
  *(undefined **)(puVar5 + -8) = puVar26;
  puVar25 = puVar5 + -0x10;
  unaff_x22 = 0x3ebc000;
  uVar15 = uVar11;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(unaff_x21 + 0x68) != 0) {
    uVar15 = (ulong)((uint)uVar11 ^ 1);
    uVar16 = /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x68),uVar14,uVar15,0);
    lVar12 = *(long *)(unaff_x21 + 0x70);
    unaff_x22 = 0;
    if (lVar12 != 0) {
      uVar21 = auVar27._8_4_;
      if (*(uint *)(lVar12 + 0x18) <= uVar21) {
        uVar16 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar21 * 0x28 + 0x28) == 0) ||
         (unaff_x22 = *(ulong *)(unaff_x21 + 0x30), unaff_x22 == 0)) {
        return uVar16;
      }
      lVar12 = *(long *)(unaff_x21 + 0x70);
      unaff_x21 = 0;
      if (lVar12 != 0) {
        if (*(uint *)(lVar12 + 0x18) <= uVar21) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar17 = *(long **)(*(long *)(lVar12 + 0x10) + (long)(int)uVar21 * 0x28 + 0x28);
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
        *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
        *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
        *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        *(ulong *)(puVar5 + -0x68) = unaff_x22;
        lVar12 = *(long *)(unaff_x22 + 0x68);
        if (lVar12 == 0) {
          puVar25 = puVar5 + -0x68;
          lVar23 = 1;
        }
        else {
          lVar23 = *(long *)(lVar12 + 0x18);
          if (lVar23 == 0) {
            return unaff_x22;
          }
          puVar25 = (undefined1 *)(lVar12 + 0x20);
        }
        lVar12 = 0;
        do {
          lVar18 = *(long *)(puVar25 + lVar12 * 8);
          pcVar24 = *(code **)(lVar18 + 0x10);
          plVar1 = *(long **)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar18 + 0x28);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18);
          }
          iVar10 = func_0x00f78a4c(lVar18);
          bVar8 = *(char *)(lVar18 + 0x4a) == '\x03';
          if (iVar10 == 0) {
            if (bVar8) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                uVar15 = (*pcVar24)(plVar17,uVar14,uVar11,lVar18);
              }
              else {
                if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(unaff_x22 + 0x18) == 0)) goto code_r0x01e71aac;
                iVar10 = func_0x00f78a44(lVar18);
                iVar9 = func_0x00f78ec0(lVar18);
                if (iVar10 == 0) {
                  uVar3 = *(ushort *)(lVar18 + 0x48);
                  if (iVar9 == 0) {
                    lVar18 = *plVar1 + (ulong)uVar3 * 0x10;
                    uVar15 = (**(code **)(lVar18 + 0x138))
                                       (plVar1,plVar17,uVar14,uVar11,*(undefined8 *)(lVar18 + 0x140)
                                       );
                    goto code_r0x01e71bd0;
                  }
                  lVar18 = func_0x00f78a48(lVar18);
                  lVar19 = *plVar1;
                  uVar15 = (ulong)*(ushort *)(lVar19 + 0x12a);
                  if (uVar15 != 0) {
                    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == lVar18) {
                        puVar13 = (undefined8 *)
                                  (lVar19 + (long)(int)(*piVar20 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar20 = piVar20 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar24 = (code *)*puVar13;
                  puVar13 = (undefined8 *)puVar13[1];
                }
                else {
                  if (iVar9 == 0) {
                    uVar22 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar19 = *plVar1;
                    uVar15 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    if (uVar15 != 0) {
                      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x18)) {
                          lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar20 = piVar20 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    lVar19 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar22 = *(undefined8 *)(lVar19 + 8);
                  }
                  puVar13 = (undefined8 *)func_0x00f78acc(uVar22,lVar18);
                  pcVar24 = (code *)*puVar13;
                }
                uVar15 = (*pcVar24)(plVar1,plVar17,uVar14,uVar11,puVar13);
              }
            }
            else {
              if ((*(short *)(lVar18 + 0x48) == -1) || (*(long *)(unaff_x22 + 0x18) == 0))
              goto code_r0x01e71bbc;
              iVar10 = func_0x00f78a44(lVar18);
              iVar9 = func_0x00f78ec0(lVar18);
              if (iVar10 == 0) {
                uVar3 = *(ushort *)(lVar18 + 0x48);
                if (iVar9 == 0) {
                  lVar18 = *plVar17 + (ulong)uVar3 * 0x10;
                  uVar15 = (**(code **)(lVar18 + 0x138))
                                     (plVar17,uVar14,uVar11,*(undefined8 *)(lVar18 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar18 = func_0x00f78a48(lVar18);
                lVar19 = *plVar17;
                uVar15 = (ulong)*(ushort *)(lVar19 + 0x12a);
                if (uVar15 != 0) {
                  piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == lVar18) {
                      puVar13 = (undefined8 *)
                                (lVar19 + (long)(int)(*piVar20 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar20 = piVar20 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                puVar13 = (undefined8 *)func_0x00fac1f0(plVar17,lVar18,(ulong)uVar3);
code_r0x01e71d00:
                pcVar24 = (code *)*puVar13;
                puVar13 = (undefined8 *)puVar13[1];
              }
              else {
                if (iVar9 == 0) {
                  uVar22 = *(undefined8 *)
                            (*plVar17 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar19 = *plVar17;
                  uVar15 = (ulong)*(ushort *)(lVar19 + 0x12a);
                  if (uVar15 != 0) {
                    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x18)) {
                        lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar20 = piVar20 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  lVar19 = func_0x00fac1f0(plVar17);
code_r0x01e71cd8:
                  uVar22 = *(undefined8 *)(lVar19 + 8);
                }
                puVar13 = (undefined8 *)func_0x00f78acc(uVar22,lVar18);
                pcVar24 = (code *)*puVar13;
              }
              uVar15 = (*pcVar24)(plVar17,uVar14,uVar11,puVar13);
            }
          }
          else {
            if (bVar8) goto code_r0x01e71bbc;
code_r0x01e71aac:
            uVar15 = (*pcVar24)(plVar1,plVar17,uVar14,uVar11,lVar18);
          }
code_r0x01e71bd0:
          lVar12 = lVar12 + 1;
          if (lVar12 == lVar23) {
            return uVar15;
          }
        } while( true );
      }
    }
  }
  puVar26 = &Core_UI2_UIManager__SetScreenVisible;
  auVar29 = func_0x00f78af4();
  unaff_x19 = uVar11;
  unaff_x20 = uVar14;
code_r0x02f88674:
  uVar14 = auVar29._0_8_;
  *(ulong *)(puVar6 + -0x30) = unaff_x22;
  *(long *)(puVar6 + -0x28) = unaff_x21;
  *(ulong *)(puVar6 + -0x20) = unaff_x20;
  *(ulong *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar25;
  *(undefined **)(puVar6 + -8) = puVar26;
  uVar11 = uVar14;
  if ((bRam0000000003ebc652 & 1) == 0) {
    uVar11 = func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar12 = *(long *)(uVar14 + 0x70);
  if (lVar12 != 0) {
    uVar21 = auVar29._8_4_;
    if (*(uint *)(lVar12 + 0x18) <= uVar21) {
      uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar21 * 0x28 + 0x28) == 0) {
      return uVar11;
    }
    lVar12 = *(long *)(uVar14 + 0x70);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= uVar21) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar21 * 0x28 + 0x28);
      if ((lVar12 != 0) && (plVar17 = *(long **)(lVar12 + 0x28), plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (**(code **)(*plVar17 + 0x178))(plVar17,uVar15,*(undefined8 *)(*plVar17 + 0x180));
        return uVar15;
      }
    }
  }
  auVar27 = func_0x00f78af4();
  uVar22 = auVar27._0_8_;
  *(long *)(puVar6 + -0x50) = auVar29._8_8_;
  *(ulong *)(puVar6 + -0x48) = uVar15;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  *(undefined8 *)(puVar6 + -0x70) = 0;
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  uVar15 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar22,auVar27._8_8_,puVar6 + -0x70);
  if ((int)uVar15 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar22,*(undefined8 *)(puVar6 + -0x60),*(undefined8 *)(puVar6 + -0x58));
    *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x68);
    *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x58);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x60);
    uVar15 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar22,puVar6 + -0x90,1);
  }
  return uVar15;
}



// ============================================================
// RVA: 0x14b6de0 | Atlas.Gameplay.PauseManager.OnRestartSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f38) */
/* WARNING: Removing unreachable block (ram,0x02f87f70) */
/* WARNING: Removing unreachable block (ram,0x02f87f90) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f88068) */
/* WARNING: Removing unreachable block (ram,0x02f88094) */
/* WARNING: Removing unreachable block (ram,0x02f880b4) */
/* WARNING: Removing unreachable block (ram,0x02f880bc) */
/* WARNING: Removing unreachable block (ram,0x02f880c8) */
/* WARNING: Removing unreachable block (ram,0x02f880d0) */
/* WARNING: Removing unreachable block (ram,0x02f880e0) */
/* WARNING: Removing unreachable block (ram,0x02f880e8) */
/* WARNING: Removing unreachable block (ram,0x02f880fc) */
/* WARNING: Removing unreachable block (ram,0x02f88110) */
/* WARNING: Removing unreachable block (ram,0x02f88120) */
/* WARNING: Removing unreachable block (ram,0x02f8812c) */
/* WARNING: Removing unreachable block (ram,0x02f88130) */
/* WARNING: Removing unreachable block (ram,0x02f88134) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */

ulong Atlas_Gameplay_PauseManager__OnRestartSelected
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar10;
  long lVar11;
  int iVar9;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  ulong unaff_x19;
  undefined8 uVar21;
  ulong unaff_x20;
  long unaff_x21;
  long lVar22;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar24;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong auStack_e8 [11];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(param_1 + 0x18),0);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar15 = func_0x00f78af4();
    return uVar15;
  }
  uVar15 = 8;
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  if (uVar10 != 0) {
code_r0x02f877a8:
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar13 = uVar10;
    if ((bRam0000000003ebc64d & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      uVar13 = func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64d = 1;
    }
    uVar20 = (uint)uVar15;
    if (((int)uVar20 < 0) || (*(int *)(uVar10 + 0x50) <= (int)uVar20)) {
      return uVar13;
    }
    lVar22 = *(long *)(uVar10 + 0x70);
    lVar11 = 0;
    if (lVar22 != 0) {
      if (*(uint *)(lVar22 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar22 = *(long *)(lVar22 + 0x10) + (uVar15 & 0xffffffff) * 0x28;
      unaff_x22 = *(ulong *)(lVar22 + 0x20);
      lVar11 = *(long *)(lVar22 + 0x28);
      *(undefined4 *)((long)register0x00000008 + -0x60) = *(undefined4 *)(lVar22 + 0x42);
      *(undefined2 *)((long)register0x00000008 + -0x5c) = *(undefined2 *)(lVar22 + 0x46);
      if (lVar11 != 0) {
        /*Core.UI2.UIScreen$$ForceExit*/ func_0x02f882d8(lVar11);
        /*Core.UI2.UIManager$$ReturnScreenWithBehaviour*/ func_0x02f8833c(uVar10,lVar11);
      }
      lVar22 = *(long *)(uVar10 + 0x70);
      if (lVar22 != 0) {
        *(ulong *)((long)register0x00000008 + -0x58) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined2 *)((long)register0x00000008 + -0x38) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x36) =
             *(undefined4 *)((long)register0x00000008 + -0x60);
        *(undefined2 *)((long)register0x00000008 + -0x32) =
             *(undefined2 *)((long)register0x00000008 + -0x5c);
        uVar15 = /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar15,(undefined1 *)((long)register0x00000008 + -0x58),
                                 uRam0000000003d3ddd0);
        return uVar15;
      }
    }
    lVar22 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x88) = lVar11;
    *(ulong *)((long)register0x00000008 + -0x80) = uVar10;
    *(ulong *)((long)register0x00000008 + -0x78) = uVar15;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar21 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar21,0);
    if (0 < *(int *)(lVar22 + 0x50)) {
      iVar9 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar22,iVar9);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar22,iVar9);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar22 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar22);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar15 = (*pcRam0000000003ec05a0)(uVar21);
    return uVar15;
  }
  uVar15 = 0;
  auVar27 = func_0x00f78af4();
  uVar10 = *(ulong *)(auVar27._0_8_ + 0x10);
  if (uVar10 != 0) {
    unaff_x29 = &stack0xffffffffffffffe0;
    unaff_x30 = &UNK_02f883d8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_4;
    unaff_x20 = uVar15;
    unaff_x21 = auVar27._8_8_;
    unaff_x22 = uVar10;
    goto code_r0x02f877a8;
  }
  auVar27 = func_0x00f78af4();
  lVar11 = *(long *)(auVar27._0_8_ + 0x10);
  if (lVar11 == 0) {
    auVar27 = func_0x00f78af4();
    puVar24 = &stack0xffffffffffffffc0;
    lVar11 = *(long *)(auVar27._0_8_ + 0x10);
    auVar28._8_8_ = auVar27._8_8_;
    auVar28._0_8_ = lVar11;
    if (lVar11 != 0) {
      uVar10 = 0;
      puVar4 = &stack0xffffffffffffffd0;
      puVar26 = &Atlas_UI_AtlasUIManager__GetLayerState;
      goto code_r0x02f884dc;
    }
    auVar27 = func_0x00f78af4();
    puVar25 = &stack0xffffffffffffffb0;
    lVar11 = *(long *)(auVar27._0_8_ + 0x10);
    auVar27._8_8_ = auVar27._8_8_;
    auVar27._0_8_ = lVar11;
    if (lVar11 == 0) {
      auVar27 = func_0x00f78af4();
      lVar11 = *(long *)(auVar27._0_8_ + 0x10);
      auVar29._8_8_ = auVar27._8_8_;
      auVar29._0_8_ = lVar11;
      if (lVar11 == 0) {
        uVar15 = func_0x00f78af4();
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar21 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar21,uRam0000000003d2fb80);
        *(undefined8 *)(uVar15 + 0x30) = uVar21;
        return uVar15;
      }
      puVar6 = &stack0xffffffffffffffb0;
      puVar26 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      goto code_r0x02f88674;
    }
    puVar5 = &stack0xffffffffffffffc0;
    puVar26 = &Atlas_UI_AtlasUIManager__EnableInput;
    uVar10 = uVar15;
    lVar11 = unaff_x21;
  }
  else {
    uVar10 = 0;
    puVar4 = &stack0xffffffffffffffb0;
    unaff_x21 = 0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar20 = auVar27._8_4_;
    if (((int)uVar20 < 0) || (*(int *)(lVar11 + 0x50) <= (int)uVar20)) {
      return 0;
    }
    lVar11 = *(long *)(lVar11 + 0x70);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar22 = *(long *)(lVar11 + 0x10) + (auVar27._8_8_ & 0xffffffff) * 0x28;
      lVar11 = *(long *)(lVar22 + 0x28);
      cVar2 = *(char *)(lVar22 + 0x40);
      iVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar22 + 0x30),0);
      if (iVar9 == 0 || cVar2 != '\0') {
        return 0;
      }
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x4c) != 2)) {
        return 0;
      }
      return 1;
    }
    puVar26 = &Core_UI2_UIManager__GetLayerState;
    auVar28 = func_0x00f78af4();
    unaff_x20 = 0;
    unaff_x19 = auVar27._8_8_;
code_r0x02f884dc:
    puVar5 = puVar4 + -0x30;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = unaff_x21;
    *(ulong *)(puVar4 + -0x20) = unaff_x20;
    *(ulong *)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = &stack0xffffffffffffffd0;
    *(undefined **)(puVar4 + -8) = puVar26;
    puVar24 = puVar4 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar11 = *(long *)(auVar28._0_8_ + 0x70);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= auVar28._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)auVar28._8_4_ * 0x28 + 0x28);
      if (lVar11 == 0) {
        uVar15 = 4;
      }
      else {
        uVar15 = (ulong)*(uint *)(lVar11 + 0x4c);
      }
      return uVar15;
    }
    puVar26 = &Core_UI2_UIManager__EnableInput;
    auVar27 = func_0x00f78af4();
    unaff_x20 = 0;
    unaff_x19 = auVar28._8_8_;
    lVar11 = 0x3ebc000;
  }
  uVar13 = auVar27._8_8_;
  unaff_x21 = auVar27._0_8_;
  puVar6 = puVar5 + -0x40;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = lVar11;
  *(ulong *)(puVar5 + -0x20) = unaff_x20;
  *(ulong *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar24;
  *(undefined **)(puVar5 + -8) = puVar26;
  puVar25 = puVar5 + -0x10;
  unaff_x22 = 0x3ebc000;
  uVar15 = uVar10;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(unaff_x21 + 0x68) != 0) {
    uVar15 = (ulong)((uint)uVar10 ^ 1);
    uVar14 = /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x68),uVar13,uVar15,0);
    lVar11 = *(long *)(unaff_x21 + 0x70);
    unaff_x22 = 0;
    if (lVar11 != 0) {
      uVar20 = auVar27._8_4_;
      if (*(uint *)(lVar11 + 0x18) <= uVar20) {
        uVar14 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28) == 0) ||
         (unaff_x22 = *(ulong *)(unaff_x21 + 0x30), unaff_x22 == 0)) {
        return uVar14;
      }
      lVar11 = *(long *)(unaff_x21 + 0x70);
      unaff_x21 = 0;
      if (lVar11 != 0) {
        if (*(uint *)(lVar11 + 0x18) <= uVar20) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = *(long **)(*(long *)(lVar11 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28);
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
        *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
        *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
        *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        *(ulong *)(puVar5 + -0x68) = unaff_x22;
        lVar11 = *(long *)(unaff_x22 + 0x68);
        if (lVar11 == 0) {
          puVar24 = puVar5 + -0x68;
          lVar22 = 1;
        }
        else {
          lVar22 = *(long *)(lVar11 + 0x18);
          if (lVar22 == 0) {
            return unaff_x22;
          }
          puVar24 = (undefined1 *)(lVar11 + 0x20);
        }
        lVar11 = 0;
        do {
          lVar17 = *(long *)(puVar24 + lVar11 * 8);
          pcVar23 = *(code **)(lVar17 + 0x10);
          plVar1 = *(long **)(lVar17 + 0x20);
          lVar17 = *(long *)(lVar17 + 0x28);
          if (*(short *)(lVar17 + 0x48) == -1) {
            func_0x00f78ad8(lVar17);
          }
          iVar9 = func_0x00f78a4c(lVar17);
          bVar7 = *(char *)(lVar17 + 0x4a) == '\x03';
          if (iVar9 == 0) {
            if (bVar7) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                uVar15 = (*pcVar23)(plVar16,uVar13,uVar10,lVar17);
              }
              else {
                if (((*(short *)(lVar17 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(unaff_x22 + 0x18) == 0)) goto code_r0x01e71aac;
                iVar9 = func_0x00f78a44(lVar17);
                iVar8 = func_0x00f78ec0(lVar17);
                if (iVar9 == 0) {
                  uVar3 = *(ushort *)(lVar17 + 0x48);
                  if (iVar8 == 0) {
                    lVar17 = *plVar1 + (ulong)uVar3 * 0x10;
                    uVar15 = (**(code **)(lVar17 + 0x138))
                                       (plVar1,plVar16,uVar13,uVar10,*(undefined8 *)(lVar17 + 0x140)
                                       );
                    goto code_r0x01e71bd0;
                  }
                  lVar17 = func_0x00f78a48(lVar17);
                  lVar18 = *plVar1;
                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar15 != 0) {
                    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == lVar17) {
                        puVar12 = (undefined8 *)
                                  (lVar18 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar19 = piVar19 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar17,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar23 = (code *)*puVar12;
                  puVar12 = (undefined8 *)puVar12[1];
                }
                else {
                  if (iVar8 == 0) {
                    uVar21 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar18 = *plVar1;
                    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                    if (uVar15 != 0) {
                      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)(lVar17 + 0x18)) {
                          lVar18 = lVar18 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar17 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar19 = piVar19 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    lVar18 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar21 = *(undefined8 *)(lVar18 + 8);
                  }
                  puVar12 = (undefined8 *)func_0x00f78acc(uVar21,lVar17);
                  pcVar23 = (code *)*puVar12;
                }
                uVar15 = (*pcVar23)(plVar1,plVar16,uVar13,uVar10,puVar12);
              }
            }
            else {
              if ((*(short *)(lVar17 + 0x48) == -1) || (*(long *)(unaff_x22 + 0x18) == 0))
              goto code_r0x01e71bbc;
              iVar9 = func_0x00f78a44(lVar17);
              iVar8 = func_0x00f78ec0(lVar17);
              if (iVar9 == 0) {
                uVar3 = *(ushort *)(lVar17 + 0x48);
                if (iVar8 == 0) {
                  lVar17 = *plVar16 + (ulong)uVar3 * 0x10;
                  uVar15 = (**(code **)(lVar17 + 0x138))
                                     (plVar16,uVar13,uVar10,*(undefined8 *)(lVar17 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar17 = func_0x00f78a48(lVar17);
                lVar18 = *plVar16;
                uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar15 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == lVar17) {
                      puVar12 = (undefined8 *)
                                (lVar18 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar19 = piVar19 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar16,lVar17,(ulong)uVar3);
code_r0x01e71d00:
                pcVar23 = (code *)*puVar12;
                puVar12 = (undefined8 *)puVar12[1];
              }
              else {
                if (iVar8 == 0) {
                  uVar21 = *(undefined8 *)
                            (*plVar16 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar18 = *plVar16;
                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar15 != 0) {
                    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)(lVar17 + 0x18)) {
                        lVar18 = lVar18 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar17 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar19 = piVar19 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  lVar18 = func_0x00fac1f0(plVar16);
code_r0x01e71cd8:
                  uVar21 = *(undefined8 *)(lVar18 + 8);
                }
                puVar12 = (undefined8 *)func_0x00f78acc(uVar21,lVar17);
                pcVar23 = (code *)*puVar12;
              }
              uVar15 = (*pcVar23)(plVar16,uVar13,uVar10,puVar12);
            }
          }
          else {
            if (bVar7) goto code_r0x01e71bbc;
code_r0x01e71aac:
            uVar15 = (*pcVar23)(plVar1,plVar16,uVar13,uVar10,lVar17);
          }
code_r0x01e71bd0:
          lVar11 = lVar11 + 1;
          if (lVar11 == lVar22) {
            return uVar15;
          }
        } while( true );
      }
    }
  }
  puVar26 = &Core_UI2_UIManager__SetScreenVisible;
  auVar29 = func_0x00f78af4();
  unaff_x19 = uVar10;
  unaff_x20 = uVar13;
code_r0x02f88674:
  uVar13 = auVar29._0_8_;
  *(ulong *)(puVar6 + -0x30) = unaff_x22;
  *(long *)(puVar6 + -0x28) = unaff_x21;
  *(ulong *)(puVar6 + -0x20) = unaff_x20;
  *(ulong *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar25;
  *(undefined **)(puVar6 + -8) = puVar26;
  uVar10 = uVar13;
  if ((bRam0000000003ebc652 & 1) == 0) {
    uVar10 = func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar11 = *(long *)(uVar13 + 0x70);
  if (lVar11 != 0) {
    uVar20 = auVar29._8_4_;
    if (*(uint *)(lVar11 + 0x18) <= uVar20) {
      uVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28) == 0) {
      return uVar10;
    }
    lVar11 = *(long *)(uVar13 + 0x70);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28);
      if ((lVar11 != 0) && (plVar16 = *(long **)(lVar11 + 0x28), plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (**(code **)(*plVar16 + 0x178))(plVar16,uVar15,*(undefined8 *)(*plVar16 + 0x180));
        return uVar15;
      }
    }
  }
  auVar27 = func_0x00f78af4();
  uVar21 = auVar27._0_8_;
  *(long *)(puVar6 + -0x50) = auVar29._8_8_;
  *(ulong *)(puVar6 + -0x48) = uVar15;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  *(undefined8 *)(puVar6 + -0x70) = 0;
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  uVar15 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar21,auVar27._8_8_,puVar6 + -0x70);
  if ((int)uVar15 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar21,*(undefined8 *)(puVar6 + -0x60),*(undefined8 *)(puVar6 + -0x58));
    *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x68);
    *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x58);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x60);
    uVar15 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar21,puVar6 + -0x90,1);
  }
  return uVar15;
}



// ============================================================
// RVA: 0x14b6e20 | Atlas.Gameplay.PauseManager..ctor
// ============================================================

void Atlas_Gameplay_PauseManager___ctor(void)

{
  return;
}



