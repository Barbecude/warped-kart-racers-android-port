// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeagueModeSave

// ============================================================
// RVA: 0x147a7fc | Atlas.League.LeagueModeSave.SaveAIDayPlacement
// ============================================================

/* WARNING: Possible PIC construction at 0x0147a810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147a814) */
/* WARNING: Removing unreachable block (ram,0x0147a840) */
/* WARNING: Removing unreachable block (ram,0x0147a818) */
/* WARNING: Removing unreachable block (ram,0x014eb72c) */

void Atlas_League_LeagueModeSave__SaveAIDayPlacement(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000003eb48ba & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f3b0);
    func_0x00f78a20(0x3d7d018);
    bRam0000000003eb48ba = 1;
  }
  uStack_64 = param_1;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_64);
  uStack_68 = param_2;
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_68);
  /*System.String$$Format*/ func_0x029bdf30(/*STR('{0}_{1}_{2}')*/ uRam0000000003d7d018,/*STR('League_CDP')*/ uRam0000000003d6f3b0,uVar1,uVar2,0);
  return;
}



// ============================================================
// RVA: 0x147a844 | Atlas.League.LeagueModeSave.GetCharacterDayPlacementKey
// ============================================================

void Atlas_League_LeagueModeSave__GetCharacterDayPlacementKey(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb48ba & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f3b0);
    func_0x00f78a20(0x3d7d018);
    bRam0000000003eb48ba = 1;
  }
  uStack_44 = param_1;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_44);
  uStack_48 = param_2;
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_48);
  /*System.String$$Format*/ func_0x029bdf30(/*STR('{0}_{1}_{2}')*/ uRam0000000003d7d018,/*STR('League_CDP')*/ uRam0000000003d6f3b0,uVar1,uVar2,0);
  return;
}



// ============================================================
// RVA: 0x147a908 | Atlas.League.LeagueModeSave.GetAIDayPlacement
// ============================================================

/* WARNING: Possible PIC construction at 0x0147ab24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147ab28) */
/* WARNING: Removing unreachable block (ram,0x0147ab38) */
/* WARNING: Removing unreachable block (ram,0x0147ab40) */
/* WARNING: Removing unreachable block (ram,0x0147ab50) */
/* WARNING: Removing unreachable block (ram,0x0147ab54) */

ulong Atlas_League_LeagueModeSave__GetAIDayPlacement
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined4 uStack_f4;
  
  if ((bRam0000000003eb48b5 & 1) == 0) {
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b5 = 1;
  }
  uVar2 = Atlas_League_LeagueModeSave__GetCharacterDayPlacementKey(param_1,param_2);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (param_3 != 0) {
    uVar6 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
    if ((bRam0000000003eb4c45 & 1) == 0) {
      func_0x00f78a20(0x3d246e0,uVar2,uVar6,0);
      bRam0000000003eb4c45 = 1;
    }
    lVar3 = Atlas_Save_SaveManager__get_SaveData(param_3);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar9 = lVar3;
    if ((bRam0000000003eb4c4b & 1) == 0) {
      func_0x00f78a20(0x3d3d900);
      func_0x00f78a20(0x3d246e0);
      bRam0000000003eb4c4b = 1;
    }
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = Atlas_Save_SaveManager__GetIntDataIndex(uVar2,lVar3);
    if ((int)uVar1 < 0) {
      return uVar6;
    }
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 0x10 + 0x28);
    }
    auVar10 = func_0x00f78af4();
    uVar2 = auVar10._8_8_;
    lVar3 = auVar10._0_8_;
    if ((bRam0000000003eb4c46 & 1) == 0) {
      func_0x00f78a20(0x3d3d918);
      func_0x00f78a20(0x3d3d928);
      func_0x00f78a20(0x3d3d930);
      bRam0000000003eb4c46 = 1;
    }
    uVar6 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar2);
    lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((int)(uint)uVar6 < 0) {
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x118) != 0)) {
        uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar4 + 0x118),uVar2,lVar9,uRam0000000003d3d918);
LAB_014ecdb8:
        *(undefined1 *)(lVar3 + 0x110) = 1;
        return uVar6;
      }
    }
    else if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x118), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (uVar6 & 0xffffffff) * 0x10 + 0x28);
      if ((lVar4 != 0) && (uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar4,lVar9,5,0), (uVar5 & 1) != 0)) {
        return uVar5;
      }
      lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar3);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x118) != 0)) {
        uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar4 + 0x118),uVar6,uVar2,lVar9,uRam0000000003d3d930);
        goto LAB_014ecdb8;
      }
    }
    auVar10 = func_0x00f78af4();
    if ((bRam0000000003eb4c48 & 1) == 0) {
      func_0x00f78a20(0x3d246e0);
      bRam0000000003eb4c48 = 1;
    }
    lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar10._0_8_);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb4c4c & 1) == 0) {
      func_0x00f78a20(0x3d3d920);
      func_0x00f78a20(0x3d3d928);
      bRam0000000003eb4c4c = 1;
    }
    if ((lVar3 != 0) && (lVar9 = *(long *)(lVar3 + 0x118), lVar9 != 0)) {
      uVar6 = 0;
      do {
        uVar1 = (uint)uVar6;
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar1) {
          return 0xffffffff;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar1 * 0x10 + 0x20);
        if (lVar9 == 0) break;
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar9,auVar10._8_8_,5,0);
        if ((uVar5 & 1) != 0) {
          return uVar6;
        }
        uVar6 = (ulong)(uVar1 + 1);
        lVar9 = *(long *)(lVar3 + 0x118);
      } while (lVar9 != 0);
    }
    func_0x00f78af4();
    return 0xffffffff;
  }
  uVar6 = func_0x00f78af4();
  if ((bRam0000000003eb48b6 & 1) == 0) {
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b6 = 1;
  }
  iVar7 = 0;
  lVar3 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
  while( true ) {
    if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar3 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
    }
    if (*(int *)(*(long *)(lVar3 + 0xb8) + 0xc) <= iVar7) break;
    iVar8 = 0;
    while( true ) {
      if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar3 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
      }
      if (*(int *)(*(long *)(lVar3 + 0xb8) + 8) <= iVar8) break;
      uVar2 = Atlas_League_LeagueModeSave__GetCharacterDayPlacementKey(iVar7,iVar8);
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (uVar6 == 0) goto code_r0x0147aac4;
      Atlas_Save_SaveManager__SetIntData
                (uVar6,uVar2,*(undefined4 *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10),0);
      iVar8 = iVar8 + 1;
      lVar3 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
    }
    iVar7 = iVar7 + 1;
  }
  if (uVar6 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
    *(undefined1 *)(uVar6 + 0x110) = 1;
    return uVar6;
  }
code_r0x0147aac4:
  auVar10 = func_0x00f78af4();
  uVar6 = auVar10._8_8_;
  if ((bRam0000000003eb48b7 & 1) == 0) {
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    bRam0000000003eb48b7 = 1;
  }
  if (auVar10._0_8_ != 0) {
    if (0 < *(int *)(auVar10._0_8_ + 0x18)) {
      uStack_f4 = 0;
      goto code_r0x0147ab98;
    }
    if (uVar6 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  uStack_f4 = func_0x00f78af4();
code_r0x0147ab98:
  if ((bRam0000000003eb48bb & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7d058);
    func_0x00f78a20(0x3d6f3b8);
    bRam0000000003eb48bb = 1;
  }
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_f4);
  uVar6 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}{1}')*/ uRam0000000003d7d058,/*STR('League_Character_')*/ uRam0000000003d6f3b8,uVar2,0);
  return uVar6;
}



// ============================================================
// RVA: 0x147a9ac | Atlas.League.LeagueModeSave.ClearAllDayPlacements
// ============================================================

/* WARNING: Possible PIC construction at 0x0147ab24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147ab28) */
/* WARNING: Removing unreachable block (ram,0x0147ab38) */
/* WARNING: Removing unreachable block (ram,0x0147ab40) */
/* WARNING: Removing unreachable block (ram,0x0147ab50) */
/* WARNING: Removing unreachable block (ram,0x0147ab54) */

void Atlas_League_LeagueModeSave__ClearAllDayPlacements(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined4 uStack_b4;
  
  if ((bRam0000000003eb48b6 & 1) == 0) {
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b6 = 1;
  }
  iVar3 = 0;
  lVar1 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
  while( true ) {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar1 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
    }
    if (*(int *)(*(long *)(lVar1 + 0xb8) + 0xc) <= iVar3) break;
    iVar4 = 0;
    while( true ) {
      if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar1 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
      }
      if (*(int *)(*(long *)(lVar1 + 0xb8) + 8) <= iVar4) break;
      uVar2 = Atlas_League_LeagueModeSave__GetCharacterDayPlacementKey(iVar3,iVar4);
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (param_1 == 0) goto LAB_0147aac4;
      Atlas_Save_SaveManager__SetIntData
                (param_1,uVar2,*(undefined4 *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10),0);
      iVar4 = iVar4 + 1;
      lVar1 = /*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88;
    }
    iVar3 = iVar3 + 1;
  }
  if (param_1 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
    *(undefined1 *)(param_1 + 0x110) = 1;
    return;
  }
LAB_0147aac4:
  auVar5 = func_0x00f78af4();
  param_1 = auVar5._8_8_;
  if ((bRam0000000003eb48b7 & 1) == 0) {
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    bRam0000000003eb48b7 = 1;
  }
  if (auVar5._0_8_ != 0) {
    if (0 < *(int *)(auVar5._0_8_ + 0x18)) {
      uStack_b4 = 0;
      goto code_r0x0147ab98;
    }
    if (param_1 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  uStack_b4 = func_0x00f78af4();
code_r0x0147ab98:
  if ((bRam0000000003eb48bb & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7d058);
    func_0x00f78a20(0x3d6f3b8);
    bRam0000000003eb48bb = 1;
  }
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_b4);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}{1}')*/ uRam0000000003d7d058,/*STR('League_Character_')*/ uRam0000000003d6f3b8,uVar2,0);
  return;
}



// ============================================================
// RVA: 0x147aac8 | Atlas.League.LeagueModeSave.SaveCharacterPositions
// ============================================================

/* WARNING: Possible PIC construction at 0x0147ab24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147ab28) */
/* WARNING: Removing unreachable block (ram,0x0147ab38) */
/* WARNING: Removing unreachable block (ram,0x0147ab40) */
/* WARNING: Removing unreachable block (ram,0x0147ab50) */
/* WARNING: Removing unreachable block (ram,0x0147ab54) */

void Atlas_League_LeagueModeSave__SaveCharacterPositions(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uStack_74;
  
  if ((bRam0000000003eb48b7 & 1) == 0) {
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    bRam0000000003eb48b7 = 1;
  }
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      uStack_74 = 0;
      goto code_r0x0147ab98;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 0x110) = 1;
      return;
    }
  }
  uStack_74 = func_0x00f78af4();
code_r0x0147ab98:
  if ((bRam0000000003eb48bb & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7d058);
    func_0x00f78a20(0x3d6f3b8);
    bRam0000000003eb48bb = 1;
  }
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_74);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}{1}')*/ uRam0000000003d7d058,/*STR('League_Character_')*/ uRam0000000003d6f3b8,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x147ab98 | Atlas.League.LeagueModeSave.GetLeagueKey
// ============================================================

void Atlas_League_LeagueModeSave__GetLeagueKey(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb48bb & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7d058);
    func_0x00f78a20(0x3d6f3b8);
    bRam0000000003eb48bb = 1;
  }
  uStack_44 = param_1;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_44);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}{1}')*/ uRam0000000003d7d058,/*STR('League_Character_')*/ uRam0000000003d6f3b8,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x147ac40 | Atlas.League.LeagueModeSave.ClearCharacterPositions
// ============================================================

undefined1  [16] Atlas_League_LeagueModeSave__ClearCharacterPositions(int param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 unaff_x24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  ulong uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb48b8 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48b8 = 1;
  }
  if (param_1 < 1) {
    if (param_2 == 0) {
LAB_0147ad74:
      auVar21 = func_0x00f78af4();
      puStack_58 = &Atlas_League_LeagueModeSave__GetCharacterPositions;
      uVar3 = 0x3d1db38;
      puStack_60 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb48b9 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d22e60);
        func_0x00f78a20(0x3d3af48);
        func_0x00f78a20(0x3d3af40);
        func_0x00f78a20(0x3d1db38);
        func_0x00f78a20(0x3d65d08);
        bRam0000000003eb48b9 = 1;
      }
      auVar22._0_8_ = func_0x00f78aec(/*System.Collections.Generic.List<LeagueCharacterPosition>_TypeInfo*/ uRam0000000003d1db38);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(auVar22._0_8_,uRam0000000003d3af40);
      uVar4 = extraout_x1;
      if (0 < (int)auVar21._0_4_) {
        uVar20 = 0;
        do {
          uVar4 = Atlas_League_LeagueModeSave__GetLeagueKey(uVar20);
          if (auVar21._8_8_ == 0) {
code_r0x0147af24:
            lVar6 = func_0x00f78af4();
            uStack_110 = 0x3d3af48;
            uStack_108 = 0x3d22e60;
            uStack_100 = 0x3d21270;
            uStack_f8 = 0x3d65d08;
            puStack_b8 = &Atlas_League_LeagueModeTester__TestMapGeneration;
            uStack_f0 = unaff_x24;
            uStack_e8 = uVar3;
            uStack_e0 = uVar20;
            lStack_d8 = auVar22._0_8_;
            ppuStack_c0 = &puStack_60;
            auStack_d0 = auVar21;
            if ((bRam0000000003eb48bc & 1) == 0) {
              func_0x00f78a20(0x3d1eec0);
              func_0x00f78a20(0x3d210d0);
              func_0x00f78a20(0x3d2dc38);
              func_0x00f78a20(0x3d27e48);
              func_0x00f78a20(0x3d1f498);
              func_0x00f78a20(0x3d65de0);
              func_0x00f78a20(0x3d65ed8);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb48bc = 1;
            }
            uStack_118 = 0;
            lVar7 = func_0x00f78a34(/*System.DateTime[]_TypeInfo*/ uRam0000000003d1eec0,5);
            uStack_120 = 0;
            /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_120,0x7e7,5,1,0);
            if (lVar7 == 0) goto code_r0x0147b480;
            if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x0147b478;
            *(undefined8 *)(lVar7 + 0x20) = uStack_120;
            uStack_128 = 0;
            /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_128,0x7e7,6,1,0);
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto code_r0x0147b478;
            *(undefined8 *)(lVar7 + 0x28) = uStack_128;
            uStack_130 = 0;
            /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_130,0x7e7,7,1,0);
            if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x0147b478;
            *(undefined8 *)(lVar7 + 0x30) = uStack_130;
            uStack_138 = 0;
            /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_138,0x7e7,8,1,0);
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto code_r0x0147b478;
            *(undefined8 *)(lVar7 + 0x38) = uStack_138;
            uStack_140 = 0;
            auVar21 = /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_140,0x7e7,9,1,0);
            uVar15 = (uint)*(ulong *)(lVar7 + 0x18);
            if (uVar15 < 5) goto code_r0x0147b478;
            *(undefined8 *)(lVar7 + 0x40) = uStack_140;
            if ((int)uVar15 < 1) {
              return auVar21;
            }
            uVar20 = 0;
            uVar18 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            lVar11 = /*STR('')*/ lRam0000000003d65d08;
            goto code_r0x0147b0f8;
          }
          uVar3 = Atlas_Save_SaveManager__GetStringData(auVar21._8_8_,uVar4,/*STR('')*/ lRam0000000003d65d08,0);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar3,0);
          uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
          iVar2 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar3,uVar4,0);
          uVar4 = extraout_x1_00;
          if ((iVar2 != 0) &&
             (iVar2 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar3,/*STR('')*/ lRam0000000003d65d08,0), uVar4 = extraout_x1_01,
             iVar2 != 0)) {
            unaff_x24 = func_0x00f78aec(/*Atlas.League.LeagueCharacterPosition_TypeInfo*/ uRam0000000003d22e60);
            Atlas_League_LeagueCharacterPosition___ctor(unaff_x24,uVar3,uVar20,0);
            if (auVar22._0_8_ == 0) goto code_r0x0147af24;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(auVar22._0_8_,unaff_x24,uRam0000000003d3af48);
            uVar4 = extraout_x1_02;
          }
          uVar15 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar15;
        } while (auVar21._0_4_ != uVar15);
      }
      auVar22._8_8_ = uVar4;
      return auVar22;
    }
  }
  else {
    iVar2 = 0;
    unaff_x24 = 0x3d65d08;
    do {
      uVar3 = Atlas_League_LeagueModeSave__GetLeagueKey(iVar2);
      if (param_2 == 0) goto LAB_0147ad74;
      uVar4 = Atlas_Save_SaveManager__GetStringData(param_2,uVar3,/*STR('')*/ lRam0000000003d65d08,0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar4,0);
      uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar1 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar4,uVar5,0);
      if ((iVar1 != 0) && (iVar1 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar4,/*STR('')*/ lRam0000000003d65d08,0), iVar1 != 0)) {
        Atlas_Save_SaveManager__SetStringData(param_2,uVar3,/*STR('')*/ lRam0000000003d65d08,0);
      }
      iVar2 = iVar2 + 1;
    } while (param_1 != iVar2);
  }
  *(undefined1 *)(param_2 + 0x110) = 1;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2;
  return auVar23;
code_r0x0147b0f8:
  if (uVar18 <= uVar20) goto code_r0x0147b478;
  uStack_118 = *(undefined8 *)(lVar7 + uVar20 * 8 + 0x20);
  uVar3 = Atlas_League_LeagueModeHelper__StartOfWeek(uStack_118,1);
  lVar8 = Atlas_League_LeagueModeHelper__GenerateMapSelection(uVar3,lVar6);
  if ((lVar6 == 0) || (lVar19 = *(long *)(lVar6 + 0x48), lVar19 == 0)) goto code_r0x0147b480;
  uVar15 = 0xffffffff;
  while( true ) {
    uVar17 = uVar15 + 1;
    if ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar17) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x0147b478;
    lVar19 = *(long *)(lVar19 + (long)(int)uVar17 * 8 + 0x20);
    plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,10);
    if (plVar9 == (long *)0x0) goto code_r0x0147b480;
    if (lVar11 != 0) {
      lVar10 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar10 == 0) goto code_r0x0147b484;
    }
    if ((int)plVar9[3] == 0) goto code_r0x0147b478;
    plVar9[4] = lVar11;
    lVar11 = /*System.DateTime$$ToShortDateString*/ func_0x02a8efec(&uStack_118,0);
    if (lVar11 != 0) {
      lVar10 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar10 == 0) goto code_r0x0147b484;
    }
    uVar16 = (uint)plVar9[3];
    if ((plVar9[3] & 0xfffffffeU) == 0) goto code_r0x0147b478;
    plVar9[5] = lVar11;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar11 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto code_r0x0147b484;
      uVar16 = (uint)plVar9[3];
    }
    if (uVar16 < 3) goto code_r0x0147b478;
    plVar9[6] = /*STR(' ')*/ lRam0000000003d65ed8;
    if (lVar19 == 0) goto code_r0x0147b480;
    plVar12 = (long *)func_0x00f78ae0(/*System.DayOfWeek_TypeInfo*/ uRam0000000003d210d0,(undefined4 *)(lVar19 + 0x10));
    if (plVar12 == (long *)0x0) goto code_r0x0147b480;
    lVar11 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    puVar13 = (undefined4 *)func_0x00f78ae4(plVar12);
    *(undefined4 *)(lVar19 + 0x10) = *puVar13;
    if (lVar11 != 0) {
      lVar10 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar10 == 0) goto code_r0x0147b484;
    }
    uVar16 = (uint)plVar9[3];
    if ((plVar9[3] & 0xfffffffcU) == 0) goto code_r0x0147b478;
    plVar9[7] = lVar11;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar11 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto code_r0x0147b484;
      uVar16 = (uint)plVar9[3];
    }
    if (uVar16 < 5) goto code_r0x0147b478;
    plVar9[8] = /*STR(' ')*/ lRam0000000003d65ed8;
    plVar12 = (long *)func_0x00f78ae0(/*Atlas.League.LeagueModeDefinition.EventType_TypeInfo*/ uRam0000000003d27e48,(undefined4 *)(lVar19 + 0x14));
    if (plVar12 == (long *)0x0) goto code_r0x0147b480;
    lVar11 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    puVar13 = (undefined4 *)func_0x00f78ae4(plVar12);
    *(undefined4 *)(lVar19 + 0x14) = *puVar13;
    if (lVar11 != 0) {
      lVar19 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar19 == 0) goto code_r0x0147b484;
    }
    uVar16 = *(uint *)(plVar9 + 3);
    if (uVar16 < 6) goto code_r0x0147b478;
    plVar9[9] = lVar11;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar11 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto code_r0x0147b484;
      uVar16 = *(uint *)(plVar9 + 3);
    }
    if (uVar16 < 7) goto code_r0x0147b478;
    plVar9[10] = /*STR(' ')*/ lRam0000000003d65ed8;
    if (lVar8 == 0) goto code_r0x0147b480;
    if (*(uint *)(lVar8 + 0x18) <= uVar17) goto code_r0x0147b478;
    plVar12 = (long *)(lVar8 + (long)(int)uVar17 * 8 + 0x20);
    lVar11 = *plVar12;
    if (lVar11 == 0) goto code_r0x0147b480;
    plVar14 = (long *)/*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(lVar11,0);
    lVar11 = *plVar14;
    if (lVar11 != 0) {
      lVar19 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar19 == 0) goto code_r0x0147b484;
    }
    uVar17 = (uint)plVar9[3];
    if ((plVar9[3] & 0xfffffff8U) == 0) goto code_r0x0147b478;
    plVar9[0xb] = lVar11;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar11 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto code_r0x0147b484;
      uVar17 = (uint)plVar9[3];
    }
    if (uVar17 < 9) goto code_r0x0147b478;
    plVar9[0xc] = /*STR(' ')*/ lRam0000000003d65ed8;
    uVar15 = uVar15 + 1;
    if (*(uint *)(lVar8 + 0x18) <= uVar15) goto code_r0x0147b478;
    lVar11 = *plVar12;
    if (lVar11 == 0) goto code_r0x0147b480;
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 != 0) {
      lVar19 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar19 == 0) goto code_r0x0147b484;
      uVar17 = *(uint *)(plVar9 + 3);
    }
    if (uVar17 < 10) goto code_r0x0147b478;
    plVar9[0xd] = lVar11;
    uVar3 = /*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
    lVar11 = /*System.String$$Concat*/ func_0x029bdb88(uVar3,/*STR('\n')*/ uRam0000000003d65de0,0);
    lVar19 = *(long *)(lVar6 + 0x48);
    if (lVar19 == 0) goto code_r0x0147b480;
  }
  auVar21 = /*System.String$$Concat*/ func_0x029bdb88(lVar11,/*STR('\n')*/ uRam0000000003d65de0,0);
  lVar11 = auVar21._0_8_;
  uVar20 = uVar20 + 1;
  uVar18 = (ulong)*(uint *)(lVar7 + 0x18);
  if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar20) {
    return auVar21;
  }
  goto code_r0x0147b0f8;
code_r0x0147b478:
  uVar3 = func_0x00f78b24();
  goto code_r0x0147b488;
code_r0x0147b480:
  func_0x00f78af4();
code_r0x0147b484:
  uVar3 = func_0x00f78b14();
code_r0x0147b488:
  func_0x00f78ac0(uVar3,0);
  uVar3 = extraout_x1_03;
  if ((bRam0000000003eb48bd & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48bd = 1;
    uVar3 = extraout_x1_04;
  }
  if (((*(ushort *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar3 = extraout_x1_05;
  }
  iVar2 = *(int *)(*(long *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xb8) + 4) + -1;
  lVar6 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
  do {
    if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar6 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
      uVar3 = extraout_x1_06;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(*(long *)(lVar6 + 0xb8) + 0x14));
  auVar21._8_8_ = uVar3;
  auVar21._0_8_ = lVar6;
  return auVar21;
}



// ============================================================
// RVA: 0x147ad78 | Atlas.League.LeagueModeSave.GetCharacterPositions
// ============================================================

long Atlas_League_LeagueModeSave__GetCharacterPositions(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x24;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  uVar4 = 0x3d1db38;
  if ((bRam0000000003eb48b9 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22e60);
    func_0x00f78a20(0x3d3af48);
    func_0x00f78a20(0x3d3af40);
    func_0x00f78a20(0x3d1db38);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48b9 = 1;
  }
  lVar2 = func_0x00f78aec(/*System.Collections.Generic.List<LeagueCharacterPosition>_TypeInfo*/ uRam0000000003d1db38);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar2,uRam0000000003d3af40);
  if (0 < (int)(uint)param_1) {
    uVar18 = 0;
    do {
      uVar3 = Atlas_League_LeagueModeSave__GetLeagueKey(uVar18);
      if (param_2 == 0) {
LAB_0147af24:
        lVar5 = func_0x00f78af4();
        uStack_c0 = 0x3d3af48;
        uStack_b8 = 0x3d22e60;
        uStack_b0 = 0x3d21270;
        uStack_a8 = 0x3d65d08;
        puStack_68 = &Atlas_League_LeagueModeTester__TestMapGeneration;
        uStack_a0 = unaff_x24;
        uStack_98 = uVar4;
        uStack_90 = uVar18;
        lStack_88 = lVar2;
        uStack_80 = param_1;
        lStack_78 = param_2;
        puStack_70 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb48bc & 1) == 0) {
          func_0x00f78a20(0x3d1eec0);
          func_0x00f78a20(0x3d210d0);
          func_0x00f78a20(0x3d2dc38);
          func_0x00f78a20(0x3d27e48);
          func_0x00f78a20(0x3d1f498);
          func_0x00f78a20(0x3d65de0);
          func_0x00f78a20(0x3d65ed8);
          func_0x00f78a20(0x3d65d08);
          bRam0000000003eb48bc = 1;
        }
        uStack_c8 = 0;
        lVar2 = func_0x00f78a34(/*System.DateTime[]_TypeInfo*/ uRam0000000003d1eec0,5);
        uStack_d0 = 0;
        /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_d0,0x7e7,5,1,0);
        if (lVar2 == 0) goto code_r0x0147b480;
        if (*(int *)(lVar2 + 0x18) == 0) goto code_r0x0147b478;
        *(undefined8 *)(lVar2 + 0x20) = uStack_d0;
        uStack_d8 = 0;
        /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_d8,0x7e7,6,1,0);
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto code_r0x0147b478;
        *(undefined8 *)(lVar2 + 0x28) = uStack_d8;
        uStack_e0 = 0;
        /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_e0,0x7e7,7,1,0);
        if (*(uint *)(lVar2 + 0x18) < 3) goto code_r0x0147b478;
        *(undefined8 *)(lVar2 + 0x30) = uStack_e0;
        uStack_e8 = 0;
        /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_e8,0x7e7,8,1,0);
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto code_r0x0147b478;
        *(undefined8 *)(lVar2 + 0x38) = uStack_e8;
        uStack_f0 = 0;
        lVar6 = /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_f0,0x7e7,9,1,0);
        uVar13 = (uint)*(ulong *)(lVar2 + 0x18);
        if (uVar13 < 5) goto code_r0x0147b478;
        *(undefined8 *)(lVar2 + 0x40) = uStack_f0;
        if ((int)uVar13 < 1) {
          return lVar6;
        }
        uVar18 = 0;
        uVar16 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        lVar6 = /*STR('')*/ lRam0000000003d65d08;
        goto code_r0x0147b0f8;
      }
      uVar4 = Atlas_Save_SaveManager__GetStringData(param_2,uVar3,/*STR('')*/ lRam0000000003d65d08,0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar4,0);
      uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar1 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar4,uVar3,0);
      if ((iVar1 != 0) && (iVar1 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar4,/*STR('')*/ lRam0000000003d65d08,0), iVar1 != 0)) {
        unaff_x24 = func_0x00f78aec(/*Atlas.League.LeagueCharacterPosition_TypeInfo*/ uRam0000000003d22e60);
        Atlas_League_LeagueCharacterPosition___ctor(unaff_x24,uVar4,uVar18,0);
        if (lVar2 == 0) goto LAB_0147af24;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2,unaff_x24,uRam0000000003d3af48);
      }
      uVar13 = (int)uVar18 + 1;
      uVar18 = (ulong)uVar13;
    } while ((uint)param_1 != uVar13);
  }
  return lVar2;
code_r0x0147b0f8:
  if (uVar16 <= uVar18) goto code_r0x0147b478;
  uStack_c8 = *(undefined8 *)(lVar2 + uVar18 * 8 + 0x20);
  uVar4 = Atlas_League_LeagueModeHelper__StartOfWeek(uStack_c8,1);
  lVar7 = Atlas_League_LeagueModeHelper__GenerateMapSelection(uVar4,lVar5);
  if ((lVar5 == 0) || (lVar17 = *(long *)(lVar5 + 0x48), lVar17 == 0)) goto code_r0x0147b480;
  uVar13 = 0xffffffff;
  while( true ) {
    uVar15 = uVar13 + 1;
    if ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar15) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar15) goto code_r0x0147b478;
    lVar17 = *(long *)(lVar17 + (long)(int)uVar15 * 8 + 0x20);
    plVar8 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,10);
    if (plVar8 == (long *)0x0) goto code_r0x0147b480;
    if ((lVar6 != 0) && (lVar9 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)
       ) goto code_r0x0147b484;
    if ((int)plVar8[3] == 0) goto code_r0x0147b478;
    plVar8[4] = lVar6;
    lVar6 = /*System.DateTime$$ToShortDateString*/ func_0x02a8efec(&uStack_c8,0);
    if ((lVar6 != 0) && (lVar9 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)
       ) goto code_r0x0147b484;
    uVar14 = (uint)plVar8[3];
    if ((plVar8[3] & 0xfffffffeU) == 0) goto code_r0x0147b478;
    plVar8[5] = lVar6;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar6 == 0) goto code_r0x0147b484;
      uVar14 = (uint)plVar8[3];
    }
    if (uVar14 < 3) goto code_r0x0147b478;
    plVar8[6] = /*STR(' ')*/ lRam0000000003d65ed8;
    if (lVar17 == 0) goto code_r0x0147b480;
    plVar10 = (long *)func_0x00f78ae0(/*System.DayOfWeek_TypeInfo*/ uRam0000000003d210d0,(undefined4 *)(lVar17 + 0x10));
    if (plVar10 == (long *)0x0) goto code_r0x0147b480;
    lVar6 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    puVar11 = (undefined4 *)func_0x00f78ae4(plVar10);
    *(undefined4 *)(lVar17 + 0x10) = *puVar11;
    if ((lVar6 != 0) && (lVar9 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)
       ) goto code_r0x0147b484;
    uVar14 = (uint)plVar8[3];
    if ((plVar8[3] & 0xfffffffcU) == 0) goto code_r0x0147b478;
    plVar8[7] = lVar6;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar6 == 0) goto code_r0x0147b484;
      uVar14 = (uint)plVar8[3];
    }
    if (uVar14 < 5) goto code_r0x0147b478;
    plVar8[8] = /*STR(' ')*/ lRam0000000003d65ed8;
    plVar10 = (long *)func_0x00f78ae0(/*Atlas.League.LeagueModeDefinition.EventType_TypeInfo*/ uRam0000000003d27e48,(undefined4 *)(lVar17 + 0x14));
    if (plVar10 == (long *)0x0) goto code_r0x0147b480;
    lVar6 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    puVar11 = (undefined4 *)func_0x00f78ae4(plVar10);
    *(undefined4 *)(lVar17 + 0x14) = *puVar11;
    if ((lVar6 != 0) &&
       (lVar17 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar17 == 0))
    goto code_r0x0147b484;
    uVar14 = *(uint *)(plVar8 + 3);
    if (uVar14 < 6) goto code_r0x0147b478;
    plVar8[9] = lVar6;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar6 == 0) goto code_r0x0147b484;
      uVar14 = *(uint *)(plVar8 + 3);
    }
    if (uVar14 < 7) goto code_r0x0147b478;
    plVar8[10] = /*STR(' ')*/ lRam0000000003d65ed8;
    if (lVar7 == 0) goto code_r0x0147b480;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) goto code_r0x0147b478;
    plVar10 = (long *)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
    lVar6 = *plVar10;
    if (lVar6 == 0) goto code_r0x0147b480;
    plVar12 = (long *)/*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(lVar6,0);
    lVar6 = *plVar12;
    if ((lVar6 != 0) &&
       (lVar17 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar17 == 0))
    goto code_r0x0147b484;
    uVar15 = (uint)plVar8[3];
    if ((plVar8[3] & 0xfffffff8U) == 0) goto code_r0x0147b478;
    plVar8[0xb] = lVar6;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar6 == 0) goto code_r0x0147b484;
      uVar15 = (uint)plVar8[3];
    }
    if (uVar15 < 9) goto code_r0x0147b478;
    plVar8[0xc] = /*STR(' ')*/ lRam0000000003d65ed8;
    uVar13 = uVar13 + 1;
    if (*(uint *)(lVar7 + 0x18) <= uVar13) goto code_r0x0147b478;
    lVar6 = *plVar10;
    if (lVar6 == 0) goto code_r0x0147b480;
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 != 0) {
      lVar17 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar17 == 0) goto code_r0x0147b484;
      uVar15 = *(uint *)(plVar8 + 3);
    }
    if (uVar15 < 10) goto code_r0x0147b478;
    plVar8[0xd] = lVar6;
    uVar4 = /*System.String$$Concat*/ func_0x029cfadc(plVar8,0);
    lVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,/*STR('\n')*/ uRam0000000003d65de0,0);
    lVar17 = *(long *)(lVar5 + 0x48);
    if (lVar17 == 0) goto code_r0x0147b480;
  }
  lVar6 = /*System.String$$Concat*/ func_0x029bdb88(lVar6,/*STR('\n')*/ uRam0000000003d65de0,0);
  uVar18 = uVar18 + 1;
  uVar16 = (ulong)*(uint *)(lVar2 + 0x18);
  if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar18) {
    return lVar6;
  }
  goto code_r0x0147b0f8;
code_r0x0147b478:
  uVar4 = func_0x00f78b24();
  goto code_r0x0147b488;
code_r0x0147b480:
  func_0x00f78af4();
code_r0x0147b484:
  uVar4 = func_0x00f78b14();
code_r0x0147b488:
  func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb48bd & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48bd = 1;
  }
  if (((*(ushort *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = *(int *)(*(long *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xb8) + 4) + -1;
  lVar2 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
  do {
    if (((*(ushort *)(lVar2 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar2 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)(*(long *)(lVar2 + 0xb8) + 0x14));
  return lVar2;
}



