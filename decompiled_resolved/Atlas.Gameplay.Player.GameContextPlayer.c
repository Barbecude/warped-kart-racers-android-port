// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Player.GameContextPlayer

// ============================================================
// RVA: 0x159aa2c | Atlas.Gameplay.Player.GameContextPlayer.get_IsHumanPlayer
// ============================================================

ulong Atlas_Gameplay_Player_GameContextPlayer__get_IsHumanPlayer(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return (ulong)(*(uint *)(*(long *)(param_1 + 0x10) + 0x50) < 2);
  }
  uVar1 = func_0x00f78af4();
  *(undefined1 *)(uVar1 + 0x248) = 1;
  return uVar1;
}



// ============================================================
// RVA: 0x159dcfc | Atlas.Gameplay.Player.GameContextPlayer.AddNumWeaponHitScore
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__AddNumWeaponHitScore
               (long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar1 = param_3[2];
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + param_2;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}



// ============================================================
// RVA: 0x159dd28 | Atlas.Gameplay.Player.GameContextPlayer.get_IsLocalPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159e098: Changing call to branch */

long * Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return (long *)(ulong)(*(int *)(*(long *)(param_1 + 0x10) + 0x50) == 0);
  }
  lVar4 = func_0x00f78af4();
  lVar12 = 0x3eb5000;
  if ((bRam0000000003eb51b9 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27628);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb51b9 = 1;
  }
  *(undefined1 *)(lVar4 + 0x24a) = 1;
  lVar5 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  Atlas_FrontEnd_FrontEndContextInfo___ctor(lVar5,0);
  if (((lVar5 != 0) && (lVar9 = *(long *)(lVar4 + 0x1c0), lVar9 != 0)) &&
     (lVar10 = *(long *)(lVar5 + 0x10), lVar10 != 0)) {
    uVar11 = *(undefined8 *)(lVar9 + 0x38);
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar9 + 0x18);
    uVar13 = *(undefined8 *)(lVar9 + 0x80);
    uVar11 = *(undefined8 *)(lVar9 + 0x78);
    uVar15 = *(undefined8 *)(lVar9 + 0x90);
    uVar14 = *(undefined8 *)(lVar9 + 0x88);
    uVar16 = *(undefined8 *)(lVar9 + 0x98);
    uVar18 = *(undefined8 *)(lVar9 + 0xb0);
    uVar17 = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar9 + 0xa0);
    *(undefined8 *)(lVar10 + 0x50) = uVar16;
    *(undefined8 *)(lVar10 + 0x68) = uVar18;
    *(undefined8 *)(lVar10 + 0x60) = uVar17;
    *(undefined8 *)(lVar10 + 0x38) = uVar13;
    *(undefined8 *)(lVar10 + 0x30) = uVar11;
    *(undefined8 *)(lVar10 + 0x48) = uVar15;
    *(undefined8 *)(lVar10 + 0x40) = uVar14;
    if ((*(long *)(lVar4 + 0x1c0) != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x28) =
           *(undefined8 *)(*(long *)(lVar4 + 0x1c0) + 200);
      lVar12 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
      Atlas_FrontEnd_SinglePlayerEventResults___ctor(lVar12,0);
      if (lVar12 != 0) {
        *(undefined4 *)(lVar12 + 0x14) = 0;
        *(undefined1 *)(lVar12 + 0x10) = *(undefined1 *)(lVar4 + 0x24a);
        if (*(long *)(lVar4 + 0x1c0) != 0) {
          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(*(long *)(lVar4 + 0x1c0) + 0x40);
          if ((*(long *)(lVar4 + 0xb8) != 0) && (*(long *)(lVar4 + 0x1c0) != 0)) {
            unaff_x22 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
            uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x1c0) + 0x40);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            if ((*(long *)(lVar5 + 0x10) != 0) && (unaff_x22 != 0)) {
              /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(unaff_x22,uVar11,*(long *)(lVar5 + 0x10) + 0x70,uRam0000000003d57500);
              lVar9 = *(long *)(lVar4 + 0x1c0);
              if (lVar9 != 0) {
                iVar3 = *(int *)(lVar9 + 0x18);
                if (iVar3 - 4U < 6) {
                  unaff_x22 = *(long *)(lVar9 + 0x40);
                  uVar13 = *(undefined8 *)(lVar5 + 0x10);
                  uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                  Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                            (uVar11,unaff_x22,lVar12,0,0,uVar13,0);
                  *(undefined8 *)(lVar5 + 0x20) = uVar11;
                  lVar12 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ lRam0000000003d194e8;
LAB_0159dfcc:
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar12,0);
                  *(undefined8 *)(lVar5 + 0x18) = uVar11;
                }
                else {
                  if (iVar3 - 1U < 2) {
                    uVar11 = *(undefined8 *)(lVar5 + 0x10);
                    unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
                    Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                              (unaff_x22,uVar11,1,0);
                    *(long *)(lVar5 + 0x20) = unaff_x22;
                    lVar12 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ lRam0000000003d194c8;
                    goto LAB_0159dfcc;
                  }
                  if (iVar3 == 3) {
                    uVar13 = *(undefined8 *)(lVar9 + 0x40);
                    unaff_x22 = *(long *)(lVar5 + 0x10);
                    uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                    Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                              (uVar11,uVar13,0,0,0,unaff_x22,0);
                    *(undefined8 *)(lVar5 + 0x20) = uVar11;
                    lVar12 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ lRam0000000003d194e8;
                    goto LAB_0159dfcc;
                  }
                }
                plVar6 = *(long **)(lVar4 + 0x230);
                if (plVar6 != (long *)0x0) goto code_r0x0144dee0;
                lVar4 = *(long *)(lVar4 + 0x70);
                uVar11 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                if (lVar4 != 0) goto Core_Contexts_ContextManager__RequestContextChange;
              }
            }
          }
        }
      }
    }
  }
  plVar7 = (long *)func_0x00f78af4();
  plVar6 = (long *)plVar7[0x46];
  if (plVar6 != (long *)0x0) {
code_r0x0144dee0:
    *(undefined1 *)((long)plVar6 + 0x8f) = 1;
    return plVar6;
  }
  *(undefined2 *)((long)plVar7 + 0x24a) = 0x101;
  lVar4 = plVar7[0xe];
  uVar11 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
  if (lVar4 != 0) {
    lVar5 = plVar7[0x38];
Core_Contexts_ContextManager__RequestContextChange:
    cVar2 = *(char *)(lVar4 + 0x50);
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar4 + 0x50) = 1;
      *(undefined8 *)(lVar4 + 0x40) = uVar11;
      *(long *)(lVar4 + 0x48) = lVar5;
    }
    return (long *)(ulong)(cVar2 == '\0');
  }
  plVar8 = (long *)func_0x00f78af4();
  plVar6 = plVar8;
  if ((bRam0000000003eb51bb & 1) == 0) {
    plVar6 = (long *)func_0x00f78a20(0x3d73540);
    bRam0000000003eb51bb = 1;
  }
  lVar4 = plVar8[0x25];
  if (lVar4 == 0) {
    return plVar6;
  }
  if (plVar8[0x1f] == 0) {
    lVar4 = func_0x00f78af4();
    plVar6 = *(long **)(lVar4 + 0x230);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    lStack_d0 = unaff_x22;
    plStack_c8 = (long *)lVar12;
    if ((bRam0000000003eb474b & 1) == 0) {
      func_0x00f78a20(0x3d21270,0);
      bRam0000000003eb474b = 1;
    }
    *(undefined1 *)((long)plVar6 + 0x8c) = 1;
    if (plVar6[8] != 0) {
      uVar11 = *(undefined8 *)(plVar6[8] + 0x48);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar11,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
      if (iVar3 == 0) {
code_r0x0144dec0:
                    /* WARNING: Could not recover jumptable at 0x0144ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        return plVar6;
      }
      if ((plVar6[2] != 0) && (lVar12 = *(long *)(plVar6[2] + 0x1e8), lVar12 != 0)) {
        *(undefined1 *)(lVar12 + 0xa8) = 0;
        if ((plVar6[0xb] != 0) &&
           (((lVar12 = *(long *)(plVar6[0xb] + 0x10), lVar12 != 0 && (plVar6[8] != 0)) &&
            (lVar12 = *(long *)(lVar12 + 0x38), lVar12 != 0)))) {
          Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal
                    (lVar12,*(undefined8 *)(plVar6[8] + 0x48),0);
          goto code_r0x0144dec0;
        }
      }
    }
    plVar6 = (long *)func_0x00f78af4();
    goto code_r0x0144dee0;
  }
  uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar8[0x1f],/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar11,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar12 = lRam0000000003d3f8c0;
  plVar6 = *(long **)(lVar4 + 0x38);
  if ((plVar6 == (long *)0x0) || (5 < (int)plVar6[4])) {
    return plVar6;
  }
  lVar4 = plVar6[2];
  lVar5 = 0;
  if (lVar4 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar3 = (int)plVar6[4];
    plVar7 = plVar6;
    lVar5 = lVar12;
    if (iVar3 == *(int *)(lVar4 + 0x18)) {
      iVar1 = iVar3 + 4;
      if (iVar3 + 4 <= iVar3 * 2) {
        iVar1 = iVar3 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (plVar6,iVar1);
      lVar4 = plVar6[2];
      if (lVar4 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)((long)plVar6 + 0x1c) < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)*(uint *)((long)plVar6 + 0x1c) * 0x10;
      *(undefined8 *)(lVar4 + 0x20) = uVar11;
      *(undefined8 *)(lVar4 + 0x28) = 0x4020000000000000;
      plVar7 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x20))(plVar6);
      plVar6[4] = CONCAT44((int)((ulong)plVar6[4] >> 0x20) + 1,(int)plVar6[4] + 1);
      return plVar7;
    }
  }
  uVar11 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar11,0);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_d0 = lVar5;
  plStack_c8 = plVar7;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_f0,auVar19._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar19._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_108 = uStack_e8;
  uStack_110 = uStack_f0;
  uStack_f8 = uStack_d8;
  uStack_100 = uStack_e0;
  lVar12 = *(long *)(*(long *)(*(long *)(auVar19._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  plVar6 = (long *)func_0x00f78ae0(lVar12,&uStack_110);
  return plVar6;
}



// ============================================================
// RVA: 0x15a35a4 | Atlas.Gameplay.Player.GameContextPlayer.get_CurrentLap
// ============================================================

int Atlas_Gameplay_Player_GameContextPlayer__get_CurrentLap(long param_1)

{
  return *(int *)(param_1 + 0x68) + 1;
}



// ============================================================
// RVA: 0x15a50d8 | Atlas.Gameplay.Player.GameContextPlayer.get_KartComposite
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayer__get_KartComposite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15a50e0 | Atlas.Gameplay.Player.GameContextPlayer.get_TrackPolylineCoord
// ============================================================

undefined4 Atlas_Gameplay_Player_GameContextPlayer__get_TrackPolylineCoord(long param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// ============================================================
// RVA: 0x15a50e8 | Atlas.Gameplay.Player.GameContextPlayer.get_IsFacingWrongWay
// ============================================================

undefined1 Atlas_Gameplay_Player_GameContextPlayer__get_IsFacingWrongWay(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9a);
}



// ============================================================
// RVA: 0x15a50f0 | Atlas.Gameplay.Player.GameContextPlayer.get_ShowWrongWayIndicator
// ============================================================

undefined1 Atlas_Gameplay_Player_GameContextPlayer__get_ShowWrongWayIndicator(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9b);
}



// ============================================================
// RVA: 0x15a50f8 | Atlas.Gameplay.Player.GameContextPlayer.get_LastHeldUsableId
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayer__get_LastHeldUsableId(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x15a5100 | Atlas.Gameplay.Player.GameContextPlayer.get_PlacementProjectiles
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayer__get_PlacementProjectiles(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x15a5108 | Atlas.Gameplay.Player.GameContextPlayer.get_ProximityProjectiles
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayer__get_ProximityProjectiles(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x15a5110 | Atlas.Gameplay.Player.GameContextPlayer.get_RaceStartTime
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__get_RaceStartTime(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  param_1[1] = *(undefined8 *)(param_2 + 0xe0);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xe8);
  return;
}



// ============================================================
// RVA: 0x15a5124 | Atlas.Gameplay.Player.GameContextPlayer.get_PlayerPosition
// ============================================================

undefined4 Atlas_Gameplay_Player_GameContextPlayer__get_PlayerPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ============================================================
// RVA: 0x15a512c | Atlas.Gameplay.Player.GameContextPlayer.get_NumWeaponHits
// ============================================================

undefined4 Atlas_Gameplay_Player_GameContextPlayer__get_NumWeaponHits(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15a5134 | Atlas.Gameplay.Player.GameContextPlayer.get_LastWeaponHitTime
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__get_LastWeaponHitTime
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x90);
  return;
}



// ============================================================
// RVA: 0x15a5148 | Atlas.Gameplay.Player.GameContextPlayer.get_HasFinished
// ============================================================

undefined1 Atlas_Gameplay_Player_GameContextPlayer__get_HasFinished(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15a5150 | Atlas.Gameplay.Player.GameContextPlayer.get_Dnf
// ============================================================

undefined1 Atlas_Gameplay_Player_GameContextPlayer__get_Dnf(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



// ============================================================
// RVA: 0x15a5158 | Atlas.Gameplay.Player.GameContextPlayer.get_HasKartIndicator
// ============================================================

undefined1 Atlas_Gameplay_Player_GameContextPlayer__get_HasKartIndicator(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x15a5160 | Atlas.Gameplay.Player.GameContextPlayer.set_HasKartIndicator
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__set_HasKartIndicator(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x9c) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a5168 | Atlas.Gameplay.Player.GameContextPlayer.get_DisplayName
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayer__get_DisplayName(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15a5170 | Atlas.Gameplay.Player.GameContextPlayer.set_DisplayName
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__set_DisplayName(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a5178 | Atlas.Gameplay.Player.GameContextPlayer.get_HeadIcon
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayer__get_HeadIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15a5180 | Atlas.Gameplay.Player.GameContextPlayer.set_HeadIcon
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__set_HeadIcon(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a5188 | Atlas.Gameplay.Player.GameContextPlayer.get_AutoDriveHighlight
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayer__get_AutoDriveHighlight(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x15a5190 | Atlas.Gameplay.Player.GameContextPlayer.set_AutoDriveHighlight
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__set_AutoDriveHighlight
               (long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a5198 | Atlas.Gameplay.Player.GameContextPlayer.get_IsAutoDriveHighlightActive
// ============================================================

undefined1  [16]
Atlas_Gameplay_Player_GameContextPlayer__get_IsAutoDriveHighlightActive(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined1 auVar4 [16];
  undefined8 extraout_var_02;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb51e4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51e4 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xf8);
    if (lVar2 != 0) {
      if (pcRam0000000003ebf4c8 == (code *)0x0) {
        pcRam0000000003ebf4c8 = (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeSelf()");
      }
                    /* WARNING: Could not recover jumptable at 0x0322efa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebf4c8)(lVar2);
      auVar5._4_4_ = extraout_var_00;
      auVar5._0_4_ = extraout_s0_00;
      auVar5._8_8_ = extraout_var_02;
      return auVar5;
    }
    lVar2 = func_0x00f78af4();
    return ZEXT416(*(uint *)(lVar2 + 0xb0));
  }
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_8_ = extraout_var_01;
  return auVar4;
}



// ============================================================
// RVA: 0x15a5234 | Atlas.Gameplay.Player.GameContextPlayer.get_PlayerColor
// ============================================================

undefined4 Atlas_Gameplay_Player_GameContextPlayer__get_PlayerColor(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15a5240 | Atlas.Gameplay.Player.GameContextPlayer.get_KartLoadout
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__get_KartLoadout(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[5] = *(undefined8 *)(param_2 + 0x50);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  return;
}



// ============================================================
// RVA: 0x15a525c | Atlas.Gameplay.Player.GameContextPlayer.get_RaceEndTime
// ============================================================

undefined4 Atlas_Gameplay_Player_GameContextPlayer__get_RaceEndTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ============================================================
// RVA: 0x15a5264 | Atlas.Gameplay.Player.GameContextPlayer.Init
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__Init
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9,
               long param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = param_7;
  if ((bRam0000000003eb51e5 & 1) == 0) {
    func_0x00f78a20(0x3d3b870);
    func_0x00f78a20(0x3d3b9a8);
    func_0x00f78a20(0x3d1dcc0);
    func_0x00f78a20(0x3d1dd00);
    bRam0000000003eb51e5 = 1;
  }
  *(long *)(param_5 + 0x10) = param_6;
  if (param_6 != 0) {
    *(long *)(param_6 + 0x90) = param_5;
    *(undefined8 *)(param_5 + 0x18) = param_8;
    *(undefined8 *)(param_5 + 0x20) = param_9;
    uVar5 = param_7[1];
    uVar1 = *param_7;
    uVar7 = param_7[3];
    uVar6 = param_7[2];
    uVar9 = param_7[5];
    uVar8 = param_7[4];
    uVar10 = param_7[6];
    *(undefined8 *)(param_5 + 0x60) = param_7[7];
    *(undefined8 *)(param_5 + 0x58) = uVar10;
    *(undefined8 *)(param_5 + 0x50) = uVar9;
    *(undefined8 *)(param_5 + 0x48) = uVar8;
    *(undefined8 *)(param_5 + 0x40) = uVar7;
    *(undefined8 *)(param_5 + 0x38) = uVar6;
    *(undefined8 *)(param_5 + 0x30) = uVar5;
    *(undefined8 *)(param_5 + 0x28) = uVar1;
    uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<PlacementHomingProjectile>_TypeInfo*/ uRam0000000003d1dcc0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b870);
    *(undefined8 *)(param_5 + 200) = uVar1;
    uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<ProximityHomingProjectile>_TypeInfo*/ uRam0000000003d1dd00);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b9a8);
    *(undefined8 *)(param_5 + 0xd0) = uVar1;
    *(undefined4 *)(param_5 + 0xb0) = param_1;
    *(undefined4 *)(param_5 + 0xb4) = param_2;
    *(undefined4 *)(param_5 + 0xb8) = param_3;
    *(undefined4 *)(param_5 + 0xbc) = param_4;
    *(long *)(param_5 + 0xf0) = param_10;
    if ((param_10 != 0) && (*(long *)(param_10 + 0x20) != 0)) {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_98,*(long *)(param_10 + 0x20),0);
      *(undefined8 *)(param_5 + 0xe8) = uStack_88;
      *(undefined8 *)(param_5 + 0xe0) = uStack_90;
      *(undefined8 *)(param_5 + 0xd8) = uStack_98;
      *(undefined4 *)(param_5 + 0x7c) = 0;
      if ((*(long *)(param_5 + 0x10) != 0) && (*(long *)(param_10 + 0x20) != 0)) {
        /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_b0,*(long *)(param_10 + 0x20),
                        *(undefined4 *)(*(long *)(param_5 + 0x10) + 0xa4),0);
        *(undefined8 *)(param_5 + 0x88) = uStack_a8;
        *(undefined8 *)(param_5 + 0x80) = uStack_b0;
        *(undefined8 *)(param_5 + 0x90) = uStack_a0;
        return;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51e6 & 1) == 0) {
    func_0x00f78a20(0x3d3b880);
    func_0x00f78a20(0x3d3b9b8);
    bRam0000000003eb51e6 = 1;
  }
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(long *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (*(long *)(lVar2 + 200) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar2 + 200),uRam0000000003d3b880);
      *(undefined8 *)(lVar2 + 200) = 0;
      if (*(long *)(lVar2 + 0xd0) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar2 + 0xd0),uRam0000000003d3b9b8);
        *(undefined8 *)(lVar2 + 0xd0) = 0;
        *(undefined1 *)(lVar2 + 0x98) = 0;
        return;
      }
    }
  }
  auVar11 = func_0x00f78af4();
  lVar2 = auVar11._0_8_;
  *(int *)(lVar2 + 0x78) = auVar11._8_4_;
  uVar5 = puVar3[1];
  uVar1 = *puVar3;
  *(undefined8 *)(lVar2 + 0x90) = puVar3[2];
  *(undefined8 *)(lVar2 + 0x88) = uVar5;
  *(undefined8 *)(lVar2 + 0x80) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15a5404 | Atlas.Gameplay.Player.GameContextPlayer.DeInit
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__DeInit
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  
  if ((bRam0000000003eb51e6 & 1) == 0) {
    func_0x00f78a20(0x3d3b880);
    func_0x00f78a20(0x3d3b9b8);
    bRam0000000003eb51e6 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(long *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(long *)(param_1 + 200) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 200),uRam0000000003d3b880);
      *(undefined8 *)(param_1 + 200) = 0;
      if (*(long *)(param_1 + 0xd0) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0xd0),uRam0000000003d3b9b8);
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined1 *)(param_1 + 0x98) = 0;
        return;
      }
    }
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  *(int *)(lVar1 + 0x78) = auVar4._8_4_;
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(lVar1 + 0x90) = param_3[2];
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined8 *)(lVar1 + 0x80) = uVar2;
  return;
}



// ============================================================
// RVA: 0x15a54a4 | Atlas.Gameplay.Player.GameContextPlayer.SetNumWeaponHitScore
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__SetNumWeaponHitScore
               (long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x78) = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x90) = param_3[2];
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15a54bc | Atlas.Gameplay.Player.GameContextPlayer.FixedUpdate
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__FixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15a54c0 | Atlas.Gameplay.Player.GameContextPlayer.PreFixedUpdate
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__PreFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15a54c4 | Atlas.Gameplay.Player.GameContextPlayer.PostFixedUpdate
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__PostFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15a54c8 | Atlas.Gameplay.Player.GameContextPlayer.EarlyUpdate
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__EarlyUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15a54cc | Atlas.Gameplay.Player.GameContextPlayer.Update
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__Update
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((bRam0000000003eb51e9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb51e9 = 1;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_3 + 0x18) == 0) {
code_r0x015a5614:
        func_0x00f78af4();
        return;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_3 + 0x10) == 0) goto code_r0x015a5614;
        plVar5 = *(long **)(*(long *)(param_3 + 0x10) + 0x68);
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar5 + 300)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8
                       + -8) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
            uVar2 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar5,0);
            *(undefined4 *)(param_3 + 0x68) = uVar2;
            uVar2 = Atlas_Gameplay_Kart_RaceKartAI__get_TrackCoords(plVar5,0);
            *(undefined4 *)(param_3 + 0x6c) = uVar2;
            *(undefined4 *)(param_3 + 0x70) = param_2;
            *(char *)(param_3 + 0x9a) = (char)plVar5[0x11];
            uVar1 = Atlas_Gameplay_Kart_RaceKartAI__get_ShowWrongWayIndicator(plVar5,0);
            *(undefined1 *)(param_3 + 0x9b) = uVar1;
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x15a54d0 | Atlas.Gameplay.Player.GameContextPlayer.UpdateRaceCoords
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__UpdateRaceCoords
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((bRam0000000003eb51e9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb51e9 = 1;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_3 + 0x18) == 0) {
LAB_015a5614:
        func_0x00f78af4();
        return;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_3 + 0x10) == 0) goto LAB_015a5614;
        plVar5 = *(long **)(*(long *)(param_3 + 0x10) + 0x68);
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar5 + 300)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8
                       + -8) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
            uVar2 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar5,0);
            *(undefined4 *)(param_3 + 0x68) = uVar2;
            uVar2 = Atlas_Gameplay_Kart_RaceKartAI__get_TrackCoords(plVar5,0);
            *(undefined4 *)(param_3 + 0x6c) = uVar2;
            *(undefined4 *)(param_3 + 0x70) = param_2;
            *(char *)(param_3 + 0x9a) = (char)plVar5[0x11];
            uVar1 = Atlas_Gameplay_Kart_RaceKartAI__get_ShowWrongWayIndicator(plVar5,0);
            *(undefined1 *)(param_3 + 0x9b) = uVar1;
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x15a5618 | Atlas.Gameplay.Player.GameContextPlayer.LateUpdate
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__LateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15a561c | Atlas.Gameplay.Player.GameContextPlayer.UsablePickedUp
// ============================================================

undefined1  [16]
Atlas_Gameplay_Player_GameContextPlayer__UsablePickedUp
          (undefined1 param_1 [16],long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar6;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 uVar7;
  undefined1 auVar5 [16];
  
  uVar7 = param_1._8_8_;
  uVar6 = param_1._4_4_;
  uVar3 = param_1._0_4_;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
    if (lVar1 == 0) {
      lVar1 = func_0x00f78af4();
      uVar3 = extraout_s0_00;
      uVar6 = extraout_var_00;
      uVar7 = extraout_var_03;
      if (*(long *)(lVar1 + 0x10) != 0) {
        lVar2 = *(long *)(*(long *)(lVar1 + 0x10) + 0x38);
        if (lVar2 == 0) {
          lVar1 = func_0x00f78af4();
          return ZEXT416((uint)(*(float *)(lVar1 + 0x70) + (float)*(int *)(lVar1 + 0x68)));
        }
        Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData(lVar2,extraout_x1,0);
        *(undefined8 *)(lVar1 + 0xc0) = extraout_x1;
        uVar3 = extraout_s0_01;
        uVar6 = extraout_var_01;
        uVar7 = extraout_var_04;
      }
      auVar5._4_4_ = uVar6;
      auVar5._0_4_ = uVar3;
      auVar5._8_8_ = uVar7;
      return auVar5;
    }
    Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal(lVar1,param_3,0);
    *(undefined8 *)(param_2 + 0xc0) = param_3;
    uVar3 = extraout_s0;
    uVar6 = extraout_var;
    uVar7 = extraout_var_02;
  }
  auVar4._4_4_ = uVar6;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = uVar7;
  return auVar4;
}



// ============================================================
// RVA: 0x15a565c | Atlas.Gameplay.Player.GameContextPlayer.UsablePickedUpResponse
// ============================================================

undefined1  [16]
Atlas_Gameplay_Player_GameContextPlayer__UsablePickedUpResponse
          (undefined1 param_1 [16],long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined8 extraout_var_00;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  
  uVar5 = param_1._8_8_;
  uVar4 = param_1._4_4_;
  uVar2 = param_1._0_4_;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
    if (lVar1 == 0) {
      lVar1 = func_0x00f78af4();
      return ZEXT416((uint)(*(float *)(lVar1 + 0x70) + (float)*(int *)(lVar1 + 0x68)));
    }
    Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData(lVar1,param_3,0);
    *(undefined8 *)(param_2 + 0xc0) = param_3;
    uVar2 = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_00;
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}



// ============================================================
// RVA: 0x15a569c | Atlas.Gameplay.Player.GameContextPlayer.GetRaceProgress
// ============================================================

float Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(long param_1)

{
  return *(float *)(param_1 + 0x70) + (float)*(int *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15a56b0 | Atlas.Gameplay.Player.GameContextPlayer.SetKartProgressToBeginningOfLap
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__SetKartProgressToBeginningOfLap
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51e7 & 1) == 0) {
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb51e7 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    auVar6 = func_0x00f78af4();
    puVar5 = auVar6._8_8_;
    lVar3 = auVar6._0_8_;
    puStack_38 = &Atlas_Gameplay_Player_GameContextPlayer__OnFinishedGame;
    if (*(char *)(lVar3 + 0x98) == '\0') {
      uStack_50 = param_2;
      uStack_48 = param_3;
      puStack_40 = &stack0xfffffffffffffff0;
      if (*(char *)((long)puVar5 + 4) == '\0') {
        if ((*(long *)(lVar3 + 0xf0) == 0) ||
           (lVar4 = *(long *)(*(long *)(lVar3 + 0xf0) + 0x20), lVar4 == 0)) {
          auVar7 = func_0x00f78af4();
          *(int *)(auVar7._0_8_ + 0x74) = auVar7._8_4_;
          return;
        }
        /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_68,lVar4,0);
        puVar5[1] = uStack_60;
        *puVar5 = uStack_68;
        puVar5[2] = uStack_58;
      }
      uStack_78 = puVar5[1];
      uStack_80 = *puVar5;
      uStack_70 = puVar5[2];
      iVar1 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(lVar3 + 0xd8,&uStack_80,0);
      iVar1 = iVar1 + -0xfa5;
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      *(int *)(lVar3 + 0x7c) = iVar1;
      *(undefined1 *)(lVar3 + 0x98) = 1;
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x38) != 0) {
          Atlas_Gameplay_Kart_KartUsableManager__UnEquipLocal(*(long *)(lVar4 + 0x38),0,0);
          lVar4 = *(long *)(lVar3 + 0x10);
          if (lVar4 == 0) {
            return;
          }
        }
        plVar2 = *(long **)(lVar4 + 0x68);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
        }
      }
    }
    return;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x68);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8)
        == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
      *(int *)((long)plVar2 + 0xb4) = (int)param_2 + -1;
      *(char *)((long)plVar2 + 0xd2) = (char)param_3;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x15a5760 | Atlas.Gameplay.Player.GameContextPlayer.OnFinishedGame
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__OnFinishedGame(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (*(char *)((long)param_2 + 4) == '\0') {
      if ((*(long *)(param_1 + 0xf0) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x20), lVar2 == 0)) {
        auVar4 = func_0x00f78af4();
        *(int *)(auVar4._0_8_ + 0x74) = auVar4._8_4_;
        return;
      }
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_38,lVar2,0);
      param_2[1] = uStack_30;
      *param_2 = uStack_38;
      param_2[2] = uStack_28;
    }
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    uStack_40 = param_2[2];
    iVar1 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(param_1 + 0xd8,&uStack_50,0);
    iVar1 = iVar1 + -0xfa5;
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x7c) = iVar1;
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x38) != 0) {
        Atlas_Gameplay_Kart_KartUsableManager__UnEquipLocal(*(long *)(lVar2 + 0x38),0,0);
        lVar2 = *(long *)(param_1 + 0x10);
        if (lVar2 == 0) {
          return;
        }
      }
      plVar3 = *(long **)(lVar2 + 0x68);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x15a583c | Atlas.Gameplay.Player.GameContextPlayer.SetPlayerPosition
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__SetPlayerPosition(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}



// ============================================================
// RVA: 0x15a5844 | Atlas.Gameplay.Player.GameContextPlayer.SetStartTime
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayer__SetStartTime(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xe8) = param_2[2];
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15a5858 | Atlas.Gameplay.Player.GameContextPlayer.OverrideLapPositionState
// ============================================================

long * Atlas_Gameplay_Player_GameContextPlayer__OverrideLapPositionState
                 (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  
  if ((bRam0000000003eb51e8 & 1) == 0) {
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb51e8 = 1;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_3 + 0x10) + 0x68);
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar1 + 300)) &&
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8
                   ) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
        plVar1 = (long *)Atlas_Gameplay_Kart_RaceKartAI__OverrideLapPositionState
                                   (param_1,param_2,plVar1,param_4,param_5,0);
        *(undefined4 *)(param_3 + 0x6c) = param_1;
        *(undefined4 *)(param_3 + 0x70) = param_2;
        *(int *)(param_3 + 0x68) = (int)param_4;
      }
    }
    return plVar1;
  }
  plVar1 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb51ea & 1) == 0) {
    func_0x00f78a20(0x3d265d0);
    bRam0000000003eb51ea = 1;
  }
  *(undefined8 *)((long)plVar1 + 0x6c) = **(undefined8 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  return plVar1;
}



// ============================================================
// RVA: 0x15a591c | Atlas.Gameplay.Player.GameContextPlayer..ctor
// ============================================================

long Atlas_Gameplay_Player_GameContextPlayer___ctor(long param_1)

{
  if ((bRam0000000003eb51ea & 1) == 0) {
    func_0x00f78a20(0x3d265d0);
    bRam0000000003eb51ea = 1;
  }
  *(undefined8 *)(param_1 + 0x6c) = **(undefined8 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  return param_1;
}



