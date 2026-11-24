// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.IntroSequenceWaitingState

// ============================================================
// RVA: 0x15b9b84 | Atlas.Contexts.IntroSequenceWaitingState.Init
// ============================================================

void Atlas_Contexts_IntroSequenceWaitingState__Init(long param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 unaff_x22;
  code *pcVar15;
  long unaff_x23;
  long lVar16;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar14 = 0x3eb5000;
  if ((bRam0000000003eb52ad & 1) == 0) {
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d55128);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d551a0);
    func_0x00f78a20(0x3d59318);
    bRam0000000003eb52ad = 1;
  }
  if (param_2 == 0) {
LAB_015b9cd8:
    func_0x00f78af4();
  }
  else {
    lVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(long *)(param_1 + 0x78) = lVar5;
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) ||
       (unaff_x23 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10), unaff_x23 == 0)) goto LAB_015b9cd8;
    unaff_x24 = 0x3d1b4e8;
    unaff_x25 = 0x3d59000;
    unaff_x26 = 0x3d2a000;
    uVar14 = *(undefined8 *)(unaff_x23 + 0x18);
    unaff_x22 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(unaff_x22,param_1,uRam0000000003d59318,uRam0000000003d2a1d8);
    plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar14,unaff_x22,0);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x23 + 0x18) = plVar6;
      uVar14 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551a0);
      *(undefined8 *)(param_1 + 0x80) = uVar14;
      uVar14 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55128);
      *(undefined8 *)(param_1 + 0x88) = uVar14;
      return;
    }
  }
  lVar5 = func_0x00f78e5c();
  puStack_58 = &Atlas_Contexts_IntroSequenceWaitingState__OnUpdate;
  ppuStack_80 = &puStack_60;
  if (*(char *)(lVar5 + 0x90) == '\0') {
    return;
  }
  lStack_70 = param_2;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar5 + 0x80) != 0) {
    /*Atlas.UI.ToastManager$$DismissIfHeld*/ func_0x015094fc(*(long *)(lVar5 + 0x80),0);
    lVar5 = *(long *)(lVar5 + 0x60);
    if (lVar5 == 0) {
      return;
    }
    uVar8 = 0;
    uStack_a0 = unaff_x26;
    uStack_98 = unaff_x25;
    lStack_90 = unaff_x24;
    lStack_88 = unaff_x23;
    ppuStack_80 = (undefined1 **)unaff_x22;
    puStack_78 = (undefined *)uVar14;
    lStack_a8 = lVar5;
    lVar9 = *(long *)(lVar5 + 0x68);
    if (lVar9 == 0) {
      plVar6 = &lStack_a8;
      lVar16 = 1;
    }
    else {
      lVar16 = *(long *)(lVar9 + 0x18);
      if (lVar16 == 0) {
        return;
      }
      plVar6 = (long *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar10 = plVar6[lVar9];
      pcVar15 = *(code **)(lVar10 + 0x10);
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
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x02924e68:
          pcVar15 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar4 == 0) {
            uVar14 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
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
            lVar11 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
            uVar14 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar14,lVar10);
          pcVar15 = (code *)*puVar7;
        }
        (*pcVar15)(plVar1,puVar7);
        uVar8 = extraout_x1_02;
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        (*pcVar15)(lVar10);
        uVar8 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar15)(plVar1,lVar10);
        uVar8 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar16) {
        return;
      }
    } while( true );
  }
  lVar9 = func_0x00f78af4();
  puStack_78 = &Atlas_Contexts_IntroSequenceWaitingState__OnEnter;
  lStack_90 = param_2;
  lStack_88 = lVar5;
  if ((bRam0000000003eb52ae & 1) == 0) {
    func_0x00f78a20(0x3d73538);
    bRam0000000003eb52ae = 1;
  }
  if ((*(long *)(lVar9 + 0x78) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar9 + 0x78) + 0x20), lVar5 == 0)) goto code_r0x015b9ddc;
  uVar12 = /*Core.Networking.NetworkSession$$IsOnlyHumanPlayer*/ func_0x0165ed50(lVar5,0);
  if ((uVar12 & 1) == 0) {
    if (*(long *)(lVar9 + 0x88) == 0) goto code_r0x015b9ddc;
    lVar5 = *(long *)(lVar9 + 0x80);
    uVar14 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar9 + 0x88),/*STR('TOASTNOTFICATION_CONNECTINGPLAYERS')*/ uRam0000000003d73538,0);
    if (lVar5 == 0) goto code_r0x015b9ddc;
    /*Atlas.UI.ToastManager$$PostMessage*/ func_0x01509454(0x3f800000,lVar5,uVar14,1,0);
  }
  if ((*(long *)(lVar9 + 0x78) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar9 + 0x78) + 0x20), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015b9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    return;
  }
code_r0x015b9ddc:
  lVar5 = func_0x00f78af4();
  *(undefined1 *)(lVar5 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x15b9ce0 | Atlas.Contexts.IntroSequenceWaitingState.OnUpdate
// ============================================================

void Atlas_Contexts_IntroSequenceWaitingState__OnUpdate(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long lStack_58;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    /*Atlas.UI.ToastManager$$DismissIfHeld*/ func_0x015094fc(*(long *)(param_1 + 0x80),0);
    lVar7 = *(long *)(param_1 + 0x60);
    if (lVar7 == 0) {
      return;
    }
    uVar8 = 0;
    lStack_58 = lVar7;
    lVar9 = *(long *)(lVar7 + 0x68);
    if (lVar9 == 0) {
      plVar5 = &lStack_58;
      lVar15 = 1;
    }
    else {
      lVar15 = *(long *)(lVar9 + 0x18);
      if (lVar15 == 0) {
        return;
      }
      plVar5 = (long *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar10 = plVar5[lVar9];
      pcVar14 = *(code **)(lVar10 + 0x10);
      plVar1 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar8);
      }
      iVar3 = func_0x00f78a4c(lVar10);
      if (iVar3 == 0) {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
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
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x02924e68:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
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
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
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
          puVar6 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,puVar6);
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
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb52ae & 1) == 0) {
    func_0x00f78a20(0x3d73538);
    bRam0000000003eb52ae = 1;
  }
  if ((*(long *)(lVar7 + 0x78) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar7 + 0x78) + 0x20), lVar9 == 0)) goto code_r0x015b9ddc;
  uVar12 = /*Core.Networking.NetworkSession$$IsOnlyHumanPlayer*/ func_0x0165ed50(lVar9,0);
  if ((uVar12 & 1) == 0) {
    if (*(long *)(lVar7 + 0x88) == 0) goto code_r0x015b9ddc;
    lVar9 = *(long *)(lVar7 + 0x80);
    uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar7 + 0x88),/*STR('TOASTNOTFICATION_CONNECTINGPLAYERS')*/ uRam0000000003d73538,0);
    if (lVar9 == 0) goto code_r0x015b9ddc;
    /*Atlas.UI.ToastManager$$PostMessage*/ func_0x01509454(0x3f800000,lVar9,uVar8,1,0);
  }
  if ((*(long *)(lVar7 + 0x78) != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar7 + 0x78) + 0x20), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015b9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    return;
  }
code_r0x015b9ddc:
  lVar7 = func_0x00f78af4();
  *(undefined1 *)(lVar7 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x15b9d2c | Atlas.Contexts.IntroSequenceWaitingState.OnEnter
// ============================================================

void Atlas_Contexts_IntroSequenceWaitingState__OnEnter(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam0000000003eb52ae & 1) == 0) {
    func_0x00f78a20(0x3d73538);
    bRam0000000003eb52ae = 1;
  }
  if ((*(long *)(param_1 + 0x78) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar1 == 0)) goto LAB_015b9ddc;
  uVar2 = /*Core.Networking.NetworkSession$$IsOnlyHumanPlayer*/ func_0x0165ed50(lVar1,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_015b9ddc;
    lVar1 = *(long *)(param_1 + 0x80);
    uVar3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0x88),/*STR('TOASTNOTFICATION_CONNECTINGPLAYERS')*/ uRam0000000003d73538,0);
    if (lVar1 == 0) goto LAB_015b9ddc;
    /*Atlas.UI.ToastManager$$PostMessage*/ func_0x01509454(0x3f800000,lVar1,uVar3,1,0);
  }
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (plVar4 = *(long **)(*(long *)(param_1 + 0x78) + 0x20), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015b9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
    return;
  }
LAB_015b9ddc:
  lVar1 = func_0x00f78af4();
  *(undefined1 *)(lVar1 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x15b9de0 | Atlas.Contexts.IntroSequenceWaitingState.OnExit
// ============================================================

void Atlas_Contexts_IntroSequenceWaitingState__OnExit(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x15b9de8 | Atlas.Contexts.IntroSequenceWaitingState.OnDeInit
// ============================================================

void Atlas_Contexts_IntroSequenceWaitingState__OnDeInit(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb52af & 1) == 0) {
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d59318);
    bRam0000000003eb52af = 1;
  }
  if (((*(long *)(param_1 + 0x78) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x18);
    uVar1 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar1,param_1,uRam0000000003d59318,uRam0000000003d2a1d8);
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar1,0);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8) goto LAB_015b9ed8;
    }
    *(long **)(lVar3 + 0x18) = plVar2;
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    return;
  }
  func_0x00f78af4();
LAB_015b9ed8:
  lVar3 = func_0x00f78e5c();
  *(undefined1 *)(lVar3 + 0x90) = 1;
  return;
}



// ============================================================
// RVA: 0x15b9edc | Atlas.Contexts.IntroSequenceWaitingState.OnGameModeStarted
// ============================================================

void Atlas_Contexts_IntroSequenceWaitingState__OnGameModeStarted(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// ============================================================
// RVA: 0x15b9ee8 | Atlas.Contexts.IntroSequenceWaitingState..ctor
// ============================================================

void Atlas_Contexts_IntroSequenceWaitingState___ctor(void)

{
  return;
}



