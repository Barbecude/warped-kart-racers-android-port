// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerPauseManager

// ============================================================
// RVA: 0x1535f24 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.get_IsRequestingToDisableInputs
// ============================================================

undefined1 Atlas_Gameplay_FTUE_BaseLayerPauseManager__get_IsRequestingToDisableInputs(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1535f2c | Atlas.Gameplay.FTUE.BaseLayerPauseManager.add_OnAfterUnPauseFinish
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerPauseManager__add_OnAfterUnPauseFinish
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4ec5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec5 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x50);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x50),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ec6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec6 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x50);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ec7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec7 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x58);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ec8 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec8 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x58);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x1535fcc | Atlas.Gameplay.FTUE.BaseLayerPauseManager.remove_OnAfterUnPauseFinish
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerPauseManager__remove_OnAfterUnPauseFinish
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4ec6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec6 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x50);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x50),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ec7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec7 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x58);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ec8 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec8 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x58);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x153606c | Atlas.Gameplay.FTUE.BaseLayerPauseManager.add_OnAfterStartPauseFinish
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerPauseManager__add_OnAfterStartPauseFinish
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4ec7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec7 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x58);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x58),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ec8 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec8 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x58);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x153610c | Atlas.Gameplay.FTUE.BaseLayerPauseManager.remove_OnAfterStartPauseFinish
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerPauseManager__remove_OnAfterStartPauseFinish
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb4ec8 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec8 = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x58);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x58),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x15361ac | Atlas.Gameplay.FTUE.BaseLayerPauseManager.get_IsPaused
// ============================================================

undefined1 Atlas_Gameplay_FTUE_BaseLayerPauseManager__get_IsPaused(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15361b4 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.Init
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x49) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



// ============================================================
// RVA: 0x15361c0 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.DeInit
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x15361c8 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__Update(float param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  long lStack_58;
  
  if (*(float *)(param_2 + 0x24) <= 0.0) {
    return;
  }
  param_1 = *(float *)(param_2 + 0x24) - param_1;
  *(float *)(param_2 + 0x24) = param_1;
  fVar19 = *(float *)(param_2 + 0x2c);
  fVar18 = *(float *)(param_2 + 0x28) - param_1;
  fVar16 = 1.0;
  if (param_1 <= fVar19) {
    fVar16 = param_1 / fVar19;
  }
  fVar20 = fVar18 / fVar19;
  if (fVar18 <= fVar19) {
    fVar16 = fVar20;
  }
  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$SetGreyOutAlpha*/ func_0x0153623c(fVar16);
  if (0.0 < *(float *)(param_2 + 0x24)) {
    return;
  }
  *(undefined1 *)(param_2 + 0x20) = 0;
  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$SetGreyOutAlpha*/ func_0x0153623c(0);
  if (((*(long *)(param_2 + 0x40) != 0) &&
      (lVar5 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(param_2 + 0x40),0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x90) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x90),0,0);
    if (*(long *)(param_2 + 0x10) != 0) {
      /*Atlas.Gameplay.PauseManager$$UnPause*/ func_0x014b6998(*(long *)(param_2 + 0x10),1,0);
      *(undefined8 *)(param_2 + 0x24) = _UNK_033f87e0;
      if (*(long *)(param_2 + 0x18) != 0) {
        Atlas_Audio_AtlasAudioManager__PlayPause(*(long *)(param_2 + 0x18),0);
        if (*(char *)(param_2 + 0x49) != '\0') {
          if (*(long *)(param_2 + 0x40) == 0) goto code_r0x0153638c;
          Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(param_2 + 0x40),1,0);
        }
        lVar5 = *(long *)(param_2 + 0x50);
        if (lVar5 == 0) {
          return;
        }
        uVar8 = 0;
        lStack_58 = lVar5;
        lVar9 = *(long *)(lVar5 + 0x68);
        if (lVar9 == 0) {
          plVar6 = &lStack_58;
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar9 + 0x18);
          if (lVar15 == 0) {
            return;
          }
          plVar6 = (long *)(lVar9 + 0x20);
        }
        lVar9 = 0;
        do {
          lVar10 = plVar6[lVar9];
          pcVar14 = *(code **)(lVar10 + 0x10);
          plVar1 = *(long **)(lVar10 + 0x20);
          lVar10 = *(long *)(lVar10 + 0x28);
          if (*(short *)(lVar10 + 0x48) == -1) {
            func_0x00f78ad8(lVar10,uVar8);
          }
          iVar3 = func_0x00f78a4c(lVar10);
          if (iVar3 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar3 = func_0x00f78a44(lVar10);
            iVar4 = func_0x00f78ec0(lVar10);
            if (iVar3 == 0) {
              uVar2 = *(ushort *)(lVar10 + 0x48);
              if (iVar4 == 0) {
                lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar10 + 0x138))(plVar1,*(undefined8 *)(lVar10 + 0x140));
                uVar8 = extraout_x1_01;
                goto code_r0x02924da4;
              }
              lVar10 = func_0x00f78a48(lVar10);
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar7 = (undefined8 *)
                             (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x02924e68:
              pcVar14 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar4 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar11 = *plVar1;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar13 = piVar13 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar11 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
                uVar8 = *(undefined8 *)(lVar11 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
              pcVar14 = (code *)*puVar7;
            }
            (*pcVar14)(plVar1,puVar7);
            uVar8 = extraout_x1_02;
          }
          else if (*(char *)(lVar10 + 0x4a) == '\0') {
            (*pcVar14)(lVar10);
            uVar8 = extraout_x1;
          }
          else {
code_r0x02924d98:
            (*pcVar14)(plVar1,lVar10);
            uVar8 = extraout_x1_00;
          }
code_r0x02924da4:
          lVar9 = lVar9 + 1;
          if (lVar9 == lVar15) {
            return;
          }
        } while( true );
      }
    }
  }
code_r0x0153638c:
  auVar21 = func_0x00f78af4();
  lVar9 = auVar21._8_8_;
  lVar5 = auVar21._0_8_;
  *(long *)(lVar5 + 0x40) = lVar9;
  if (((lVar9 != 0) &&
      (lVar9 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(lVar9,0), lVar9 != 0))
     && (plVar6 = *(long **)(lVar9 + 0x98), plVar6 != (long *)0x0)) {
    uVar17 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
    *(undefined4 *)(lVar5 + 0x30) = uVar17;
    *(float *)(lVar5 + 0x34) = fVar18;
    *(float *)(lVar5 + 0x38) = fVar19;
    *(float *)(lVar5 + 0x3c) = fVar20;
    if ((*(long *)(lVar5 + 0x40) != 0) &&
       (lVar9 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                          (*(long *)(lVar5 + 0x40),0), lVar9 != 0)) {
      *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar9 + 0xa0);
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  return;
}



// ============================================================
// RVA: 0x153623c | Atlas.Gameplay.FTUE.BaseLayerPauseManager.SetGreyOutAlpha
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__SetGreyOutAlpha
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined4 param_4,long param_5)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  long lStack_98;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar17 = *(undefined4 *)(param_5 + 0x3c);
  uVar16 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0,0);
  if ((*(long *)(param_5 + 0x40) != 0) &&
     (lVar5 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                        (*(long *)(param_5 + 0x40),0), lVar5 != 0)) {
    plVar13 = *(long **)(lVar5 + 0x98);
    uVar17 = *(undefined4 *)(param_5 + 0x34);
    param_1 = *(undefined4 *)(param_5 + 0x38);
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.Color$$.ctor*/ func_0x03222f84(*(undefined4 *)(param_5 + 0x30),&uStack_40,0);
    param_4 = uVar16;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x2a8))
                (uStack_40 & 0xffffffff,uStack_40._4_4_,(undefined4)uStack_38,uStack_38._4_4_,
                 plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined1 *)(lVar5 + 0x20) = 0;
  Atlas_Gameplay_FTUE_BaseLayerPauseManager__SetGreyOutAlpha(0);
  if (((*(long *)(lVar5 + 0x40) != 0) &&
      (lVar6 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(lVar5 + 0x40),0), lVar6 != 0)) && (*(long *)(lVar6 + 0x90) != 0)
     ) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x90),0,0);
    if (*(long *)(lVar5 + 0x10) != 0) {
      /*Atlas.Gameplay.PauseManager$$UnPause*/ func_0x014b6998(*(long *)(lVar5 + 0x10),1,0);
      *(undefined8 *)(lVar5 + 0x24) = _UNK_033f87e0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        Atlas_Audio_AtlasAudioManager__PlayPause(*(long *)(lVar5 + 0x18),0);
        if (*(char *)(lVar5 + 0x49) != '\0') {
          if (*(long *)(lVar5 + 0x40) == 0) goto code_r0x0153638c;
          Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(lVar5 + 0x40),1,0);
        }
        lVar5 = *(long *)(lVar5 + 0x50);
        if (lVar5 == 0) {
          return;
        }
        uVar8 = 0;
        lStack_98 = lVar5;
        lVar6 = *(long *)(lVar5 + 0x68);
        if (lVar6 == 0) {
          plVar13 = &lStack_98;
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar6 + 0x18);
          if (lVar15 == 0) {
            return;
          }
          plVar13 = (long *)(lVar6 + 0x20);
        }
        lVar6 = 0;
        do {
          lVar9 = plVar13[lVar6];
          pcVar14 = *(code **)(lVar9 + 0x10);
          plVar1 = *(long **)(lVar9 + 0x20);
          lVar9 = *(long *)(lVar9 + 0x28);
          if (*(short *)(lVar9 + 0x48) == -1) {
            func_0x00f78ad8(lVar9,uVar8);
          }
          iVar3 = func_0x00f78a4c(lVar9);
          if (iVar3 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar3 = func_0x00f78a44(lVar9);
            iVar4 = func_0x00f78ec0(lVar9);
            if (iVar3 == 0) {
              uVar2 = *(ushort *)(lVar9 + 0x48);
              if (iVar4 == 0) {
                lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
                uVar8 = extraout_x1_01;
                goto code_r0x02924da4;
              }
              lVar9 = func_0x00f78a48(lVar9);
              lVar10 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar7 = (undefined8 *)
                             (lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
              pcVar14 = (code *)*puVar7;
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
                      lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) *
                                        0x10 + 0x138;
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
              pcVar14 = (code *)*puVar7;
            }
            (*pcVar14)(plVar1,puVar7);
            uVar8 = extraout_x1_02;
          }
          else if (*(char *)(lVar9 + 0x4a) == '\0') {
            (*pcVar14)(lVar9);
            uVar8 = extraout_x1;
          }
          else {
code_r0x02924d98:
            (*pcVar14)(plVar1,lVar9);
            uVar8 = extraout_x1_00;
          }
code_r0x02924da4:
          lVar6 = lVar6 + 1;
          if (lVar6 == lVar15) {
            return;
          }
        } while( true );
      }
    }
  }
code_r0x0153638c:
  auVar18 = func_0x00f78af4();
  lVar6 = auVar18._8_8_;
  lVar5 = auVar18._0_8_;
  *(long *)(lVar5 + 0x40) = lVar6;
  if (((lVar6 != 0) &&
      (lVar6 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(lVar6,0), lVar6 != 0))
     && (plVar13 = *(long **)(lVar6 + 0x98), plVar13 != (long *)0x0)) {
    uVar16 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    *(undefined4 *)(lVar5 + 0x30) = uVar16;
    *(undefined4 *)(lVar5 + 0x34) = uVar17;
    *(undefined4 *)(lVar5 + 0x38) = param_1;
    *(undefined4 *)(lVar5 + 0x3c) = param_4;
    if ((*(long *)(lVar5 + 0x40) != 0) &&
       (lVar6 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                          (*(long *)(lVar5 + 0x40),0), lVar6 != 0)) {
      *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar6 + 0xa0);
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  return;
}



// ============================================================
// RVA: 0x15362d8 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.FTUEUnPause
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__FTUEUnPause
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  long lStack_58;
  
  *(undefined1 *)(param_5 + 0x20) = 0;
  Atlas_Gameplay_FTUE_BaseLayerPauseManager__SetGreyOutAlpha(0);
  if (((*(long *)(param_5 + 0x40) != 0) &&
      (lVar5 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(param_5 + 0x40),0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x90) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x90),0,0);
    if (*(long *)(param_5 + 0x10) != 0) {
      /*Atlas.Gameplay.PauseManager$$UnPause*/ func_0x014b6998(*(long *)(param_5 + 0x10),1,0);
      *(undefined8 *)(param_5 + 0x24) = _UNK_033f87e0;
      if (*(long *)(param_5 + 0x18) != 0) {
        Atlas_Audio_AtlasAudioManager__PlayPause(*(long *)(param_5 + 0x18),0);
        if (*(char *)(param_5 + 0x49) != '\0') {
          if (*(long *)(param_5 + 0x40) == 0) goto LAB_0153638c;
          Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(param_5 + 0x40),1,0);
        }
        lVar5 = *(long *)(param_5 + 0x50);
        if (lVar5 == 0) {
          return;
        }
        uVar8 = 0;
        lStack_58 = lVar5;
        lVar9 = *(long *)(lVar5 + 0x68);
        if (lVar9 == 0) {
          plVar6 = &lStack_58;
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar9 + 0x18);
          if (lVar15 == 0) {
            return;
          }
          plVar6 = (long *)(lVar9 + 0x20);
        }
        lVar9 = 0;
        do {
          lVar10 = plVar6[lVar9];
          pcVar14 = *(code **)(lVar10 + 0x10);
          plVar1 = *(long **)(lVar10 + 0x20);
          lVar10 = *(long *)(lVar10 + 0x28);
          if (*(short *)(lVar10 + 0x48) == -1) {
            func_0x00f78ad8(lVar10,uVar8);
          }
          iVar3 = func_0x00f78a4c(lVar10);
          if (iVar3 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar3 = func_0x00f78a44(lVar10);
            iVar4 = func_0x00f78ec0(lVar10);
            if (iVar3 == 0) {
              uVar2 = *(ushort *)(lVar10 + 0x48);
              if (iVar4 == 0) {
                lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar10 + 0x138))(plVar1,*(undefined8 *)(lVar10 + 0x140));
                uVar8 = extraout_x1_01;
                goto code_r0x02924da4;
              }
              lVar10 = func_0x00f78a48(lVar10);
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar7 = (undefined8 *)
                             (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x02924e68:
              pcVar14 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar4 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar11 = *plVar1;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar13 = piVar13 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar11 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
                uVar8 = *(undefined8 *)(lVar11 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
              pcVar14 = (code *)*puVar7;
            }
            (*pcVar14)(plVar1,puVar7);
            uVar8 = extraout_x1_02;
          }
          else if (*(char *)(lVar10 + 0x4a) == '\0') {
            (*pcVar14)(lVar10);
            uVar8 = extraout_x1;
          }
          else {
code_r0x02924d98:
            (*pcVar14)(plVar1,lVar10);
            uVar8 = extraout_x1_00;
          }
code_r0x02924da4:
          lVar9 = lVar9 + 1;
          if (lVar9 == lVar15) {
            return;
          }
        } while( true );
      }
    }
  }
LAB_0153638c:
  auVar17 = func_0x00f78af4();
  lVar9 = auVar17._8_8_;
  lVar5 = auVar17._0_8_;
  *(long *)(lVar5 + 0x40) = lVar9;
  if (((lVar9 != 0) &&
      (lVar9 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(lVar9,0), lVar9 != 0))
     && (plVar6 = *(long **)(lVar9 + 0x98), plVar6 != (long *)0x0)) {
    uVar16 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
    *(undefined4 *)(lVar5 + 0x30) = uVar16;
    *(undefined4 *)(lVar5 + 0x34) = param_2;
    *(undefined4 *)(lVar5 + 0x38) = param_3;
    *(undefined4 *)(lVar5 + 0x3c) = param_4;
    if ((*(long *)(lVar5 + 0x40) != 0) &&
       (lVar9 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                          (*(long *)(lVar5 + 0x40),0), lVar9 != 0)) {
      *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar9 + 0xa0);
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  return;
}



// ============================================================
// RVA: 0x1536390 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.OnInProgressScreenEntered
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__OnInProgressScreenEntered
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *(long *)(param_5 + 0x40) = param_6;
  if (((param_6 != 0) &&
      (lVar1 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_6,0), lVar1 != 0
      )) && (plVar2 = *(long **)(lVar1 + 0x98), plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    *(undefined4 *)(param_5 + 0x30) = uVar3;
    *(undefined4 *)(param_5 + 0x34) = param_2;
    *(undefined4 *)(param_5 + 0x38) = param_3;
    *(undefined4 *)(param_5 + 0x3c) = param_4;
    if ((*(long *)(param_5 + 0x40) != 0) &&
       (lVar1 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                          (*(long *)(param_5 + 0x40),0), lVar1 != 0)) {
      *(undefined4 *)(param_5 + 0x2c) = *(undefined4 *)(lVar1 + 0xa0);
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined8 *)(lVar1 + 0x2c) = 0;
  *(undefined4 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  return;
}



// ============================================================
// RVA: 0x1536404 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.OnAfterExitGameContextScreen
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__OnAfterExitGameContextScreen(long param_1)

{
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return;
}



// ============================================================
// RVA: 0x1536418 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.FTUEPause
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__FTUEPause
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined *puStack_38;
  
  puVar15 = &stack0xfffffffffffffff0;
  if (param_1 <= 0.0) {
    return;
  }
  *(undefined1 *)(param_5 + 0x20) = 1;
  if (((*(long *)(param_5 + 0x40) != 0) &&
      (lVar5 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(param_5 + 0x40),0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x90) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x90),1,0);
    if (*(long *)(param_5 + 0x10) != 0) {
      /*Atlas.Gameplay.PauseManager$$Pause*/ func_0x014b6aa8(*(long *)(param_5 + 0x10),0,0,1,0);
      *(float *)(param_5 + 0x24) = param_1;
      *(float *)(param_5 + 0x28) = param_1;
      if (*(long *)(param_5 + 0x18) != 0) {
        Atlas_Audio_AtlasAudioManager__PlayPause(*(long *)(param_5 + 0x18),0);
        if (*(char *)(param_5 + 0x49) != '\0') {
          if (*(long *)(param_5 + 0x40) == 0) goto LAB_015364e0;
          Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(param_5 + 0x40),0,0);
        }
        lVar5 = *(long *)(param_5 + 0x58);
        puStack_38 = unaff_x30;
        if (lVar5 == 0) {
          return;
        }
        goto System_Action__Invoke;
      }
    }
  }
LAB_015364e0:
  lVar5 = func_0x00f78af4();
  if (*(char *)(lVar5 + 0x20) == '\0') {
    return;
  }
  puStack_38 = &Atlas_Gameplay_FTUE_BaseLayerPauseManager__OnExitInProgressState;
  *(undefined1 *)(lVar5 + 0x20) = 0;
  Atlas_Gameplay_FTUE_BaseLayerPauseManager__SetGreyOutAlpha(0);
  if (((*(long *)(lVar5 + 0x40) != 0) &&
      (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(lVar5 + 0x40),0), lVar8 != 0)) && (*(long *)(lVar8 + 0x90) != 0)
     ) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x90),0,0);
    if (*(long *)(lVar5 + 0x10) != 0) {
      /*Atlas.Gameplay.PauseManager$$UnPause*/ func_0x014b6998(*(long *)(lVar5 + 0x10),1,0);
      *(undefined8 *)(lVar5 + 0x24) = _UNK_033f87e0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        Atlas_Audio_AtlasAudioManager__PlayPause(*(long *)(lVar5 + 0x18),0);
        if (*(char *)(lVar5 + 0x49) != '\0') {
          if (*(long *)(lVar5 + 0x40) == 0) goto LAB_0153638c;
          Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(lVar5 + 0x40),1,0);
        }
        lVar5 = *(long *)(lVar5 + 0x50);
        if (lVar5 == 0) {
          return;
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x19 = param_5;
        unaff_x29 = puVar15;
System_Action__Invoke:
        uVar6 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = puStack_38;
        *(long *)((long)register0x00000008 + -0x58) = lVar5;
        lVar8 = *(long *)(lVar5 + 0x68);
        if (lVar8 == 0) {
          puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
          lVar14 = 1;
        }
        else {
          lVar14 = *(long *)(lVar8 + 0x18);
          if (lVar14 == 0) {
            return;
          }
          puVar15 = (undefined1 *)(lVar8 + 0x20);
        }
        lVar8 = 0;
        do {
          lVar9 = *(long *)(puVar15 + lVar8 * 8);
          pcVar13 = *(code **)(lVar9 + 0x10);
          plVar4 = *(long **)(lVar9 + 0x20);
          lVar9 = *(long *)(lVar9 + 0x28);
          if (*(short *)(lVar9 + 0x48) == -1) {
            func_0x00f78ad8(lVar9,uVar6);
          }
          iVar2 = func_0x00f78a4c(lVar9);
          if (iVar2 == 0) {
            if ((((plVar4 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
                ((*(byte *)(*plVar4 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar2 = func_0x00f78a44(lVar9);
            iVar3 = func_0x00f78ec0(lVar9);
            if (iVar2 == 0) {
              uVar1 = *(ushort *)(lVar9 + 0x48);
              if (iVar3 == 0) {
                lVar9 = *plVar4 + (ulong)uVar1 * 0x10;
                (**(code **)(lVar9 + 0x138))(plVar4,*(undefined8 *)(lVar9 + 0x140));
                uVar6 = extraout_x1_01;
                goto code_r0x02924da4;
              }
              lVar9 = func_0x00f78a48(lVar9);
              lVar10 = *plVar4;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar7 = (undefined8 *)
                             (lVar10 + (long)(int)(*piVar12 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,lVar9,(ulong)uVar1);
code_r0x02924e68:
              pcVar13 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar3 == 0) {
                uVar6 = *(undefined8 *)(*plVar4 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar10 = *plVar4;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                      lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar12 = piVar12 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar10 = func_0x00fac1f0(plVar4);
code_r0x02924e40:
                uVar6 = *(undefined8 *)(lVar10 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
              pcVar13 = (code *)*puVar7;
            }
            (*pcVar13)(plVar4,puVar7);
            uVar6 = extraout_x1_02;
          }
          else if (*(char *)(lVar9 + 0x4a) == '\0') {
            (*pcVar13)(lVar9);
            uVar6 = extraout_x1;
          }
          else {
code_r0x02924d98:
            (*pcVar13)(plVar4,lVar9);
            uVar6 = extraout_x1_00;
          }
code_r0x02924da4:
          lVar8 = lVar8 + 1;
          if (lVar8 == lVar14) {
            return;
          }
        } while( true );
      }
    }
  }
LAB_0153638c:
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  lVar5 = auVar17._0_8_;
  *(long *)(lVar5 + 0x40) = lVar8;
  if (((lVar8 != 0) &&
      (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(lVar8,0), lVar8 != 0))
     && (plVar4 = *(long **)(lVar8 + 0x98), plVar4 != (long *)0x0)) {
    uVar16 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    *(undefined4 *)(lVar5 + 0x30) = uVar16;
    *(undefined4 *)(lVar5 + 0x34) = param_2;
    *(undefined4 *)(lVar5 + 0x38) = param_3;
    *(undefined4 *)(lVar5 + 0x3c) = param_4;
    if ((*(long *)(lVar5 + 0x40) != 0) &&
       (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                          (*(long *)(lVar5 + 0x40),0), lVar8 != 0)) {
      *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar8 + 0xa0);
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  return;
}



// ============================================================
// RVA: 0x15364e4 | Atlas.Gameplay.FTUE.BaseLayerPauseManager.OnExitInProgressState
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_FTUE_BaseLayerPauseManager__OnExitInProgressState
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  long lStack_58;
  
  if (*(char *)(param_5 + 0x20) == '\0') {
    return;
  }
  *(undefined1 *)(param_5 + 0x20) = 0;
  Atlas_Gameplay_FTUE_BaseLayerPauseManager__SetGreyOutAlpha(0);
  if (((*(long *)(param_5 + 0x40) != 0) &&
      (lVar5 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(param_5 + 0x40),0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x90) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x90),0,0);
    if (*(long *)(param_5 + 0x10) != 0) {
      /*Atlas.Gameplay.PauseManager$$UnPause*/ func_0x014b6998(*(long *)(param_5 + 0x10),1,0);
      *(undefined8 *)(param_5 + 0x24) = _UNK_033f87e0;
      if (*(long *)(param_5 + 0x18) != 0) {
        Atlas_Audio_AtlasAudioManager__PlayPause(*(long *)(param_5 + 0x18),0);
        if (*(char *)(param_5 + 0x49) != '\0') {
          if (*(long *)(param_5 + 0x40) == 0) goto LAB_0153638c;
          Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(param_5 + 0x40),1,0);
        }
        lVar5 = *(long *)(param_5 + 0x50);
        if (lVar5 == 0) {
          return;
        }
        uVar8 = 0;
        lStack_58 = lVar5;
        lVar9 = *(long *)(lVar5 + 0x68);
        if (lVar9 == 0) {
          plVar6 = &lStack_58;
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar9 + 0x18);
          if (lVar15 == 0) {
            return;
          }
          plVar6 = (long *)(lVar9 + 0x20);
        }
        lVar9 = 0;
        do {
          lVar10 = plVar6[lVar9];
          pcVar14 = *(code **)(lVar10 + 0x10);
          plVar1 = *(long **)(lVar10 + 0x20);
          lVar10 = *(long *)(lVar10 + 0x28);
          if (*(short *)(lVar10 + 0x48) == -1) {
            func_0x00f78ad8(lVar10,uVar8);
          }
          iVar3 = func_0x00f78a4c(lVar10);
          if (iVar3 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar3 = func_0x00f78a44(lVar10);
            iVar4 = func_0x00f78ec0(lVar10);
            if (iVar3 == 0) {
              uVar2 = *(ushort *)(lVar10 + 0x48);
              if (iVar4 == 0) {
                lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar10 + 0x138))(plVar1,*(undefined8 *)(lVar10 + 0x140));
                uVar8 = extraout_x1_01;
                goto code_r0x02924da4;
              }
              lVar10 = func_0x00f78a48(lVar10);
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar7 = (undefined8 *)
                             (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x02924e68:
              pcVar14 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar4 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar11 = *plVar1;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar13 = piVar13 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar11 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
                uVar8 = *(undefined8 *)(lVar11 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
              pcVar14 = (code *)*puVar7;
            }
            (*pcVar14)(plVar1,puVar7);
            uVar8 = extraout_x1_02;
          }
          else if (*(char *)(lVar10 + 0x4a) == '\0') {
            (*pcVar14)(lVar10);
            uVar8 = extraout_x1;
          }
          else {
code_r0x02924d98:
            (*pcVar14)(plVar1,lVar10);
            uVar8 = extraout_x1_00;
          }
code_r0x02924da4:
          lVar9 = lVar9 + 1;
          if (lVar9 == lVar15) {
            return;
          }
        } while( true );
      }
    }
  }
LAB_0153638c:
  auVar17 = func_0x00f78af4();
  lVar9 = auVar17._8_8_;
  lVar5 = auVar17._0_8_;
  *(long *)(lVar5 + 0x40) = lVar9;
  if (((lVar9 != 0) &&
      (lVar9 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(lVar9,0), lVar9 != 0))
     && (plVar6 = *(long **)(lVar9 + 0x98), plVar6 != (long *)0x0)) {
    uVar16 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
    *(undefined4 *)(lVar5 + 0x30) = uVar16;
    *(undefined4 *)(lVar5 + 0x34) = param_2;
    *(undefined4 *)(lVar5 + 0x38) = param_3;
    *(undefined4 *)(lVar5 + 0x3c) = param_4;
    if ((*(long *)(lVar5 + 0x40) != 0) &&
       (lVar9 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                          (*(long *)(lVar5 + 0x40),0), lVar9 != 0)) {
      *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar9 + 0xa0);
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  return;
}



// ============================================================
// RVA: 0x15364f4 | Atlas.Gameplay.FTUE.BaseLayerPauseManager..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerPauseManager___ctor(void)

{
  return;
}



