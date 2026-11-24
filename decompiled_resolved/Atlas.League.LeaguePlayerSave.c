// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeaguePlayerSave

// ============================================================
// RVA: 0x147a3a8 | Atlas.League.LeaguePlayerSave.get_LatestCheckedStatsDate
// ============================================================

/* WARNING: Possible PIC construction at 0x0147a440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147a444) */

ulong Atlas_League_LeaguePlayerSave__get_LatestCheckedStatsDate(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_a8;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((bRam0000000003eb48e2 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48e2 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = /*STR('L_CSD')*/ uRam0000000003d6f1e0;
  if (lVar4 == 0) {
    auVar12 = func_0x00f78af4();
    unaff_x19 = auVar12._8_8_;
    uStack_40 = 0x3eb4000;
    pcStack_28 = Atlas_League_LeagueModeHelper__LastOpenedInCurrentWeek;
    unaff_x29 = &puStack_30;
    lStack_38 = param_1;
    puStack_30 = &stack0xfffffffffffffff0;
    uStack_48 = Atlas_League_LeagueModeHelper__StartOfWeek(auVar12._0_8_,1);
    if (unaff_x19 == 0) {
      unaff_x30 = &Atlas_League_LeaguePlayerSave__get_LatestOpenedDate;
      lVar4 = func_0x00f78af4();
    }
    else {
      unaff_x30 = (undefined *)0x147a444;
      lVar4 = unaff_x19;
    }
    if ((bRam0000000003eb48da & 1) == 0) {
      func_0x00f78a20(0x3d6f200);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb48da = 1;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      iVar1 = func_0x00f78af4();
      if ((bRam0000000003eb48b2 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        bRam0000000003eb48b2 = 1;
      }
      uVar5 = Atlas_League_LeagueModeHelper__StartOfWeek(extraout_x1,1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_a8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(extraout_x1,uVar5,0);
      iVar2 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_a8,0);
      return (ulong)(iVar1 <= iVar2);
    }
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    unaff_x20 = 0x3eb4000;
    uVar5 = /*STR('L_OD')*/ uRam0000000003d6f200;
  }
  uVar7 = /*STR('')*/ uRam0000000003d65d08;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar5,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar6 = Atlas_Save_SaveManager__get_SaveData(lVar4);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar10 = uVar6;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetStringDataIndex(uVar5,uVar6);
  if ((int)uVar3 < 0) {
    return uVar7;
  }
  if ((uVar6 != 0) && (lVar4 = *(long *)(uVar6 + 0x118), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar4 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar12 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar5;
  *(ulong *)((long)register0x00000008 + -0x60) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__GetIntData;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(auVar12._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0x80);
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x50) =
       *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)((long)register0x00000008 + -0x48);
  lVar11 = lVar4;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetIntDataIndex(auVar12._8_8_,lVar4);
  if ((int)uVar3 < 0) {
    return uVar10;
  }
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x110), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar13 = func_0x00f78af4();
  uVar9 = auVar13._8_8_;
  lVar4 = auVar13._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0xa8) = auVar12._8_8_;
  *(ulong *)((long)register0x00000008 + -0xa0) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar7 = Atlas_Save_SaveManager__GetStringDataIndex(lVar4,uVar9);
  lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar4);
  if ((int)(uint)uVar7 < 0) {
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar8 + 0x118),uVar9,lVar11,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar4 + 0x110) = 1;
      return uVar7;
    }
  }
  else if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x118), lVar8 != 0)) {
    if (*(uint *)(lVar8 + 0x18) <= (uint)uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (uVar7 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar8 != 0) && (uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar8,lVar11,5,0), (uVar6 & 1) != 0)) {
      return uVar6;
    }
    lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar4);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar8 + 0x118),uVar7,uVar9,lVar11,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar12 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xf0) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar9;
  *(long *)((long)register0x00000008 + -0xe0) = lVar11;
  *(long *)((long)register0x00000008 + -0xd8) = lVar4;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(code **)((long)register0x00000008 + -200) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(auVar12._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0xe8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) =
       *(undefined8 *)((long)register0x00000008 + -0xe0);
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)((long)register0x00000008 + -0xd8);
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -200);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar4 != 0) && (lVar11 = *(long *)(lVar4 + 0x118), lVar11 != 0)) {
    uVar7 = 0;
    do {
      uVar3 = (uint)uVar7;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar11 == 0) break;
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar11,auVar12._8_8_,5,0);
      if ((uVar6 & 1) != 0) {
        return uVar7;
      }
      uVar7 = (ulong)(uVar3 + 1);
      lVar11 = *(long *)(lVar4 + 0x118);
    } while (lVar11 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147a48c | Atlas.League.LeaguePlayerSave.get_LatestOpenedDate
// ============================================================

ulong Atlas_League_LeaguePlayerSave__get_LatestOpenedDate(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_58;
  
  if ((bRam0000000003eb48da & 1) == 0) {
    func_0x00f78a20(0x3d6f200);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48da = 1;
  }
  uVar5 = /*STR('L_OD')*/ uRam0000000003d6f200;
  uVar7 = /*STR('')*/ uRam0000000003d65d08;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    iVar1 = func_0x00f78af4();
    if ((bRam0000000003eb48b2 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb48b2 = 1;
    }
    uVar5 = Atlas_League_LeagueModeHelper__StartOfWeek(extraout_x1,1);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_58 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(extraout_x1,uVar5,0);
    iVar2 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_58,0);
    return (ulong)(iVar1 <= iVar2);
  }
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,/*STR('L_OD')*/ uRam0000000003d6f200,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar6 = Atlas_Save_SaveManager__get_SaveData(lVar4);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = uVar6;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetStringDataIndex(uVar5,uVar6);
  if ((int)uVar3 < 0) {
    return uVar7;
  }
  if ((uVar6 != 0) && (lVar4 = *(long *)(uVar6 + 0x118), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar4 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar11 = func_0x00f78af4();
  uStack_58 = 0;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(auVar11._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = lVar4;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetIntDataIndex(auVar11._8_8_,lVar4);
  if ((int)uVar3 < 0) {
    return uVar9;
  }
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x110), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar11 = func_0x00f78af4();
  uVar5 = auVar11._8_8_;
  lVar4 = auVar11._0_8_;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar7 = Atlas_Save_SaveManager__GetStringDataIndex(lVar4,uVar5);
  lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar4);
  if ((int)(uint)uVar7 < 0) {
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar8 + 0x118),uVar5,lVar10,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar4 + 0x110) = 1;
      return uVar7;
    }
  }
  else if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x118), lVar8 != 0)) {
    if (*(uint *)(lVar8 + 0x18) <= (uint)uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (uVar7 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar8 != 0) && (uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar8,lVar10,5,0), (uVar6 & 1) != 0)) {
      return uVar6;
    }
    lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar4);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar8 + 0x118),uVar7,uVar5,lVar10,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar11 = func_0x00f78af4();
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(auVar11._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar4 != 0) && (lVar10 = *(long *)(lVar4 + 0x118), lVar10 != 0)) {
    uVar7 = 0;
    do {
      uVar3 = (uint)uVar7;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar10 == 0) break;
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar10,auVar11._8_8_,5,0);
      if ((uVar6 & 1) != 0) {
        return uVar7;
      }
      uVar7 = (ulong)(uVar3 + 1);
      lVar10 = *(long *)(lVar4 + 0x118);
    } while (lVar10 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147a78c | Atlas.League.LeaguePlayerSave.get_LatestPlayedDate
// ============================================================

ulong Atlas_League_LeaguePlayerSave__get_LatestPlayedDate
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 extraout_w1;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_88;
  
  if ((bRam0000000003eb48dc & 1) == 0) {
    func_0x00f78a20(0x3d6f1f8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48dc = 1;
  }
  uVar3 = /*STR('L_LPD')*/ uRam0000000003d6f1f8;
  uVar6 = /*STR('')*/ uRam0000000003d65d08;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    func_0x00f78af4();
    uVar3 = Atlas_League_LeagueModeSave__GetCharacterDayPlacementKey();
    if (param_4 != 0) {
      Atlas_Save_SaveManager__SetIntData(param_4,uVar3,param_3,0);
      *(undefined1 *)(param_4 + 0x110) = 1;
      return param_4;
    }
    uStack_88._4_4_ = func_0x00f78af4();
    if ((bRam0000000003eb48ba & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d6f3b0);
      func_0x00f78a20(0x3d7d018);
      bRam0000000003eb48ba = 1;
    }
    uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_88 + 4);
    uStack_88 = (code *)CONCAT44(uStack_88._4_4_,extraout_w1);
    uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_88);
    uVar6 = /*System.String$$Format*/ func_0x029bdf30(/*STR('{0}_{1}_{2}')*/ uRam0000000003d7d018,/*STR('League_CDP')*/ uRam0000000003d6f3b0,uVar3,uVar4,0);
    return uVar6;
  }
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,/*STR('L_LPD')*/ uRam0000000003d6f1f8,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__get_SaveData(lVar2);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = uVar5;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = Atlas_Save_SaveManager__GetStringDataIndex(uVar3,uVar5);
  if ((int)uVar1 < 0) {
    return uVar6;
  }
  if ((uVar5 != 0) && (lVar2 = *(long *)(uVar5 + 0x118), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1 * 0x10 + 0x28);
  }
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar2 = Atlas_Save_SaveManager__get_SaveData(auVar10._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = lVar2;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = Atlas_Save_SaveManager__GetIntDataIndex(auVar10._8_8_,lVar2);
  if ((int)uVar1 < 0) {
    return uVar8;
  }
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x110), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1 * 0x10 + 0x28);
  }
  auVar10 = func_0x00f78af4();
  uVar3 = auVar10._8_8_;
  lVar2 = auVar10._0_8_;
  uStack_88 = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar6 = Atlas_Save_SaveManager__GetStringDataIndex(lVar2,uVar3);
  lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar2);
  if ((int)(uint)uVar6 < 0) {
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
      uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar7 + 0x118),uVar3,lVar9,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar2 + 0x110) = 1;
      return uVar6;
    }
  }
  else if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x118), lVar7 != 0)) {
    if (*(uint *)(lVar7 + 0x18) <= (uint)uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (uVar6 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar7 != 0) && (uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar7,lVar9,5,0), (uVar5 & 1) != 0)) {
      return uVar5;
    }
    lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar2);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
      uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar7 + 0x118),uVar6,uVar3,lVar9,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar2 = Atlas_Save_SaveManager__get_SaveData(auVar10._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar2 != 0) && (lVar9 = *(long *)(lVar2 + 0x118), lVar9 != 0)) {
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
      lVar9 = *(long *)(lVar2 + 0x118);
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147bfe0 | Atlas.League.LeaguePlayerSave.ClearAllDayPlacements
// ============================================================

/* WARNING: Possible PIC construction at 0x0147c58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ce40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147d5e4) */
/* WARNING: Removing unreachable block (ram,0x0147d5f4) */
/* WARNING: Removing unreachable block (ram,0x0147d4d8) */
/* WARNING: Removing unreachable block (ram,0x0147d4e8) */
/* WARNING: Removing unreachable block (ram,0x0147d4c4) */
/* WARNING: Removing unreachable block (ram,0x0147d310) */
/* WARNING: Removing unreachable block (ram,0x0147d314) */
/* WARNING: Removing unreachable block (ram,0x0147d31c) */
/* WARNING: Removing unreachable block (ram,0x0147d330) */
/* WARNING: Removing unreachable block (ram,0x0147d33c) */
/* WARNING: Removing unreachable block (ram,0x0147d2c0) */
/* WARNING: Removing unreachable block (ram,0x0147d2d4) */
/* WARNING: Removing unreachable block (ram,0x0147d2e0) */
/* WARNING: Removing unreachable block (ram,0x0147d2e8) */
/* WARNING: Removing unreachable block (ram,0x0147d2f0) */
/* WARNING: Removing unreachable block (ram,0x0147d344) */
/* WARNING: Removing unreachable block (ram,0x0147d348) */
/* WARNING: Removing unreachable block (ram,0x0147d300) */
/* WARNING: Removing unreachable block (ram,0x0147d2ac) */
/* WARNING: Removing unreachable block (ram,0x0147d0b8) */
/* WARNING: Removing unreachable block (ram,0x0147d06c) */
/* WARNING: Removing unreachable block (ram,0x0147d07c) */
/* WARNING: Removing unreachable block (ram,0x0147d088) */
/* WARNING: Removing unreachable block (ram,0x0147d090) */
/* WARNING: Removing unreachable block (ram,0x0147d098) */
/* WARNING: Removing unreachable block (ram,0x0147d19c) */
/* WARNING: Removing unreachable block (ram,0x0147d1a0) */
/* WARNING: Removing unreachable block (ram,0x0147d0a8) */
/* WARNING: Removing unreachable block (ram,0x0147d058) */
/* WARNING: Removing unreachable block (ram,0x0147ce44) */
/* WARNING: Removing unreachable block (ram,0x0147cdf8) */
/* WARNING: Removing unreachable block (ram,0x0147ce08) */
/* WARNING: Removing unreachable block (ram,0x0147ce14) */
/* WARNING: Removing unreachable block (ram,0x0147ce1c) */
/* WARNING: Removing unreachable block (ram,0x0147ce24) */
/* WARNING: Removing unreachable block (ram,0x0147cf50) */
/* WARNING: Removing unreachable block (ram,0x0147cf54) */
/* WARNING: Removing unreachable block (ram,0x0147ce34) */
/* WARNING: Removing unreachable block (ram,0x0147cde4) */
/* WARNING: Removing unreachable block (ram,0x0147cc98) */
/* WARNING: Removing unreachable block (ram,0x0147cc58) */
/* WARNING: Removing unreachable block (ram,0x0147cc5c) */
/* WARNING: Removing unreachable block (ram,0x0147cc68) */
/* WARNING: Removing unreachable block (ram,0x0147cc70) */
/* WARNING: Removing unreachable block (ram,0x0147cc78) */
/* WARNING: Removing unreachable block (ram,0x0147ccdc) */
/* WARNING: Removing unreachable block (ram,0x0147cce0) */
/* WARNING: Removing unreachable block (ram,0x0147cc88) */
/* WARNING: Removing unreachable block (ram,0x0147cc38) */
/* WARNING: Removing unreachable block (ram,0x0147cb14) */
/* WARNING: Removing unreachable block (ram,0x0147cad4) */
/* WARNING: Removing unreachable block (ram,0x0147cad8) */
/* WARNING: Removing unreachable block (ram,0x0147cae4) */
/* WARNING: Removing unreachable block (ram,0x0147caec) */
/* WARNING: Removing unreachable block (ram,0x0147caf4) */
/* WARNING: Removing unreachable block (ram,0x0147cb30) */
/* WARNING: Removing unreachable block (ram,0x0147cb34) */
/* WARNING: Removing unreachable block (ram,0x0147cb04) */
/* WARNING: Removing unreachable block (ram,0x0147cab4) */
/* WARNING: Removing unreachable block (ram,0x0147c9a4) */
/* WARNING: Removing unreachable block (ram,0x0147c964) */
/* WARNING: Removing unreachable block (ram,0x0147c968) */
/* WARNING: Removing unreachable block (ram,0x0147c974) */
/* WARNING: Removing unreachable block (ram,0x0147c97c) */
/* WARNING: Removing unreachable block (ram,0x0147c984) */
/* WARNING: Removing unreachable block (ram,0x0147c9ac) */
/* WARNING: Removing unreachable block (ram,0x0147c9b0) */
/* WARNING: Removing unreachable block (ram,0x0147c994) */
/* WARNING: Removing unreachable block (ram,0x0147c944) */
/* WARNING: Removing unreachable block (ram,0x0147c838) */
/* WARNING: Removing unreachable block (ram,0x0147c83c) */
/* WARNING: Removing unreachable block (ram,0x0147c7e0) */
/* WARNING: Removing unreachable block (ram,0x0147c7e4) */
/* WARNING: Removing unreachable block (ram,0x0147c804) */
/* WARNING: Removing unreachable block (ram,0x0147c794) */
/* WARNING: Removing unreachable block (ram,0x0147c7a4) */
/* WARNING: Removing unreachable block (ram,0x0147c7b0) */
/* WARNING: Removing unreachable block (ram,0x0147c7b8) */
/* WARNING: Removing unreachable block (ram,0x0147c7c0) */
/* WARNING: Removing unreachable block (ram,0x0147c80c) */
/* WARNING: Removing unreachable block (ram,0x0147c7d0) */
/* WARNING: Removing unreachable block (ram,0x0147c780) */
/* WARNING: Removing unreachable block (ram,0x0147c648) */
/* WARNING: Removing unreachable block (ram,0x0147c64c) */
/* WARNING: Removing unreachable block (ram,0x014eb4e0) */
/* WARNING: Removing unreachable block (ram,0x014eb504) */
/* WARNING: Removing unreachable block (ram,0x014eb518) */
/* WARNING: Removing unreachable block (ram,0x014eb520) */
/* WARNING: Removing unreachable block (ram,0x014eb528) */
/* WARNING: Removing unreachable block (ram,0x014eb554) */
/* WARNING: Removing unreachable block (ram,0x014eb580) */
/* WARNING: Removing unreachable block (ram,0x014eb594) */
/* WARNING: Removing unreachable block (ram,0x014eb5ac) */
/* WARNING: Removing unreachable block (ram,0x014eb5b4) */
/* WARNING: Removing unreachable block (ram,0x014eb5b8) */
/* WARNING: Removing unreachable block (ram,0x014eb5c4) */
/* WARNING: Removing unreachable block (ram,0x014eb5d8) */
/* WARNING: Removing unreachable block (ram,0x014eb5e4) */
/* WARNING: Removing unreachable block (ram,0x014eb604) */
/* WARNING: Removing unreachable block (ram,0x014eb5f0) */
/* WARNING: Removing unreachable block (ram,0x014eb530) */
/* WARNING: Removing unreachable block (ram,0x014eb538) */
/* WARNING: Removing unreachable block (ram,0x014eb608) */
/* WARNING: Removing unreachable block (ram,0x014eb620) */
/* WARNING: Removing unreachable block (ram,0x014eb650) */
/* WARNING: Removing unreachable block (ram,0x014eb4f4) */
/* WARNING: Removing unreachable block (ram,0x0147c5f0) */
/* WARNING: Removing unreachable block (ram,0x0147c5f4) */
/* WARNING: Removing unreachable block (ram,0x0147c614) */
/* WARNING: Removing unreachable block (ram,0x0147c5a4) */
/* WARNING: Removing unreachable block (ram,0x0147c5b4) */
/* WARNING: Removing unreachable block (ram,0x0147c5c0) */
/* WARNING: Removing unreachable block (ram,0x0147c5c8) */
/* WARNING: Removing unreachable block (ram,0x0147c5d0) */
/* WARNING: Removing unreachable block (ram,0x0147c61c) */
/* WARNING: Removing unreachable block (ram,0x0147c5e0) */
/* WARNING: Removing unreachable block (ram,0x0147c590) */
/* WARNING: Removing unreachable block (ram,0x0147c124) */
/* WARNING: Removing unreachable block (ram,0x0147c12c) */

void Atlas_League_LeaguePlayerSave__ClearAllDayPlacements
               (ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  ulong unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_x25;
  ulong unaff_x26;
  undefined1 *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar1 = &stack0xffffffffffffffc0;
  puVar2 = &stack0xffffffffffffffc0;
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48e6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48e6 = 1;
  }
  uVar11 = 0;
  uVar14 = 0x3d22e88;
  uVar13 = 0x3d1f100;
  while( true ) {
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar11) break;
    unaff_x21 = *(long *)(param_1 + 0x10);
    unaff_x22 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88,uVar11);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (unaff_x21 == 0) goto LAB_0147c144;
    param_4 = 0;
    Atlas_Save_SaveManager__SetIntData
              (unaff_x21,unaff_x22,*(undefined4 *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10));
    param_3 = 0;
    /*Atlas.League.LeaguePlayerSave$$SetReplayCountDay*/ func_0x0147eb60(param_1,uVar11);
    uVar11 = (ulong)((int)uVar11 + 1);
  }
  lVar5 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
  if (lVar5 == 0) {
LAB_0147c144:
    func_0x00f78af4();
  }
  else {
    uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
    uVar8 = (ulong)(int)*(uint *)(lVar5 + 0x18);
    if ((long)uVar8 < 1) {
      uVar8 = 0;
    }
    if (uVar9 != 1 && (long)(uVar9 << 0x20) < 0x100000001) goto code_r0x0147c118;
    uVar10 = 0;
    while (uVar10 < uVar9) {
      *(undefined4 *)(lVar5 + 0x20 + uVar10 * 4) = 0xffffffff;
      uVar10 = uVar10 + 1;
      if (uVar8 == uVar10) {
code_r0x0147c118:
        uVar8 = 0xffffffff;
        puVar16 = &UNK_0147c124;
        uVar9 = param_1;
        goto code_r0x0147c3a4;
      }
    }
  }
  uVar6 = func_0x00f78b24();
  puVar16 = &Atlas_League_LeaguePlayerSave__set_LatestPlayedDate;
  auVar19 = func_0x00f78ac0(uVar6,0);
code_r0x0147c154:
  do {
    lVar5 = auVar19._0_8_;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(long *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = uVar11;
    *(ulong *)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(undefined **)(puVar2 + -8) = puVar16;
    if ((bRam0000000003eb48dd & 1) == 0) {
      func_0x00f78a20(0x3d6f1f8);
      bRam0000000003eb48dd = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      param_4 = 0;
      param_3 = auVar19._8_8_;
      Atlas_Save_SaveManager__SetStringData(*(long *)(lVar5 + 0x10),/*STR('L_LPD')*/ uRam0000000003d6f1f8);
      lVar7 = *(long *)(lVar5 + 0x10);
      if (lVar7 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    auVar20 = func_0x00f78af4();
    lVar12 = auVar20._0_8_;
    *(ulong *)(puVar2 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x58) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x50) = auVar19._8_8_;
    *(long *)(puVar2 + -0x48) = lVar5;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) = &Atlas_League_LeaguePlayerSave__set_LatestOpenedDate;
    if ((bRam0000000003eb48db & 1) == 0) {
      func_0x00f78a20(0x3d6f200);
      bRam0000000003eb48db = 1;
    }
    if (*(long *)(lVar12 + 0x10) != 0) {
      param_4 = 0;
      param_3 = auVar20._8_8_;
      Atlas_Save_SaveManager__SetStringData(*(long *)(lVar12 + 0x10),/*STR('L_OD')*/ uRam0000000003d6f200);
      lVar7 = *(long *)(lVar12 + 0x10);
      if (lVar7 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    auVar19 = func_0x00f78af4();
    lVar5 = auVar19._0_8_;
    *(ulong *)(puVar2 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x88) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x80) = auVar20._8_8_;
    *(long *)(puVar2 + -0x78) = lVar12;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
    *(undefined **)(puVar2 + -0x68) = &Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch;
    if ((bRam0000000003eb48df & 1) == 0) {
      func_0x00f78a20(0x3d6f230);
      bRam0000000003eb48df = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      param_4 = 0;
      param_3 = auVar19._8_8_;
      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar5 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230);
      lVar7 = *(long *)(lVar5 + 0x10);
      if (lVar7 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    auVar20 = func_0x00f78af4();
    uVar9 = auVar20._0_8_;
    puVar1 = puVar2 + -0xd0;
    *(undefined8 *)(puVar2 + -0xd0) = uVar14;
    *(undefined8 *)(puVar2 + -200) = uVar13;
    *(ulong *)(puVar2 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar2 + -0xb8) = 0x3eb4000;
    *(ulong *)(puVar2 + -0xb0) = auVar19._8_8_;
    *(long *)(puVar2 + -0xa8) = lVar5;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
    *(undefined **)(puVar2 + -0x98) = &Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement;
    puVar15 = puVar2 + -0xa0;
    uVar13 = 0x3d22e88;
    uVar11 = uVar9;
    uVar8 = param_3;
    if ((bRam0000000003eb48e4 & 1) == 0) {
      uVar11 = func_0x00f78a20(0x3d22e88);
      bRam0000000003eb48e4 = 1;
    }
    unaff_x21 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(uVar11,auVar20._8_8_);
    unaff_x22 = *(ulong *)(uVar9 + 0x10);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (unaff_x22 != 0) {
      uVar8 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
      param_4 = 0;
      iVar3 = Atlas_Save_SaveManager__GetIntData(unaff_x22,unaff_x21);
      if (iVar3 <= (int)param_3) {
        return;
      }
      if (*(long *)(uVar9 + 0x10) != 0) {
        param_4 = 0;
        uVar8 = param_3;
        Atlas_Save_SaveManager__SetIntData(*(long *)(uVar9 + 0x10),unaff_x21);
        lVar7 = *(long *)(uVar9 + 0x10);
        if (lVar7 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
    }
    puVar16 = &Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI;
    auVar19 = func_0x00f78af4();
    lVar5 = auVar19._8_8_;
    param_1 = auVar19._0_8_;
    uVar11 = param_3;
code_r0x0147c3a4:
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(ulong *)(puVar1 + -0x20) = uVar11;
    *(ulong *)(puVar1 + -0x18) = uVar9;
    *(undefined1 **)(puVar1 + -0x10) = puVar15;
    *(undefined **)(puVar1 + -8) = puVar16;
    lVar12 = 0x3eb4000;
    uVar9 = uVar8;
    if ((bRam0000000003eb48fb & 1) == 0) {
      func_0x00f78a20(0x3d6f1f0);
      bRam0000000003eb48fb = 1;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      param_4 = 0;
      uVar9 = uVar8;
      uVar6 = Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_LB_P')*/ uRam0000000003d6f1f0);
      if (lVar5 != 0) {
        if (0 < *(int *)(lVar5 + 0x18)) {
          uVar8 = 0;
          lVar12 = lVar5 + 0x20;
          do {
            uVar6 = /*Atlas.League.LeaguePlayerSave$$ParseLeaderboardAIKey*/ func_0x0147f388(uVar6,uVar8);
            if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x0147c474;
            if (*(long *)(param_1 + 0x10) == 0) goto code_r0x0147c470;
            uVar9 = (ulong)*(uint *)(lVar12 + uVar8 * 4);
            param_4 = 0;
            uVar6 = Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),uVar6);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)*(int *)(lVar5 + 0x18));
        }
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
          *(undefined1 *)(lVar7 + 0x110) = 1;
          return;
        }
      }
    }
code_r0x0147c470:
    func_0x00f78af4();
code_r0x0147c474:
    uVar6 = func_0x00f78b24();
    auVar19 = func_0x00f78ac0(uVar6,0);
    lVar7 = auVar19._8_8_;
    uVar10 = auVar19._0_8_;
    puVar2 = puVar1 + -0x80;
    *(ulong *)(puVar1 + -0x80) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x70) = uVar14;
    *(undefined8 *)(puVar1 + -0x68) = uVar13;
    *(long *)(puVar1 + -0x60) = lVar12;
    *(ulong *)(puVar1 + -0x58) = uVar8;
    *(long *)(puVar1 + -0x50) = lVar5;
    *(ulong *)(puVar1 + -0x48) = param_1;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x38) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2;
    puVar15 = puVar1 + -0x40;
    param_1 = uVar9;
    if ((bRam0000000003eb48c2 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e8);
      bRam0000000003eb48c2 = 1;
    }
    if ((uVar10 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar10), lVar7 != 0))
    {
      unaff_x21 = *(long *)(lVar7 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x25 = 0x3d22e88;
      uVar14 = 0x3d1f100;
      uVar13 = 0x3d653e8;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,unaff_x22);
      uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      auVar19._8_8_ = uVar6;
      auVar19._0_8_ = uVar10;
      puVar16 = (undefined *)0x147c590;
      param_1 = uVar9;
      uVar11 = uVar10;
      goto code_r0x0147c154;
    }
    auVar19 = func_0x00f78af4();
    lVar5 = auVar19._8_8_;
    uVar11 = auVar19._0_8_;
    puVar2 = puVar1 + -0xd0;
    *(ulong *)(puVar1 + -0xd0) = unaff_x26;
    *(undefined8 *)(puVar1 + -200) = unaff_x25;
    *(undefined8 *)(puVar1 + -0xc0) = uVar14;
    *(undefined8 *)(puVar1 + -0xb8) = uVar13;
    *(undefined8 *)(puVar1 + -0xb0) = 0x3eb4000;
    *(long *)(puVar1 + -0xa8) = lVar7;
    *(ulong *)(puVar1 + -0xa0) = uVar10;
    *(ulong *)(puVar1 + -0x98) = uVar9;
    *(undefined1 **)(puVar1 + -0x90) = puVar15;
    *(code **)(puVar1 + -0x88) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
    puVar15 = puVar1 + -0x90;
    uVar8 = param_1;
    if ((bRam0000000003eb48c3 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e0);
      bRam0000000003eb48c3 = 1;
    }
    if ((uVar11 == 0) || (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar11), lVar5 == 0))
    {
      auVar19 = func_0x00f78af4();
      lVar7 = auVar19._8_8_;
      uVar9 = auVar19._0_8_;
      puVar2 = puVar1 + -0x110;
      *(undefined8 *)(puVar1 + -0x110) = uVar14;
      *(undefined8 *)(puVar1 + -0x108) = uVar13;
      *(undefined8 *)(puVar1 + -0x100) = 0x3eb4000;
      *(long *)(puVar1 + -0xf8) = lVar5;
      *(ulong *)(puVar1 + -0xf0) = uVar11;
      *(ulong *)(puVar1 + -0xe8) = param_1;
      *(undefined1 **)(puVar1 + -0xe0) = puVar15;
      *(code **)(puVar1 + -0xd8) = Atlas_League_LeagueModeTester__TestPodium1stPlace;
      puVar15 = puVar1 + -0xe0;
      param_1 = uVar8;
      if ((bRam0000000003eb48c4 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c4 = 1;
      }
      if ((uVar9 == 0) || (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar9), lVar7 == 0))
      {
        auVar19 = func_0x00f78af4();
        lVar5 = auVar19._8_8_;
        uVar11 = auVar19._0_8_;
        puVar2 = puVar1 + -0x150;
        *(undefined8 *)(puVar1 + -0x150) = uVar14;
        *(undefined8 *)(puVar1 + -0x148) = uVar13;
        *(undefined8 *)(puVar1 + -0x140) = 0x3eb4000;
        *(long *)(puVar1 + -0x138) = lVar7;
        *(ulong *)(puVar1 + -0x130) = uVar9;
        *(ulong *)(puVar1 + -0x128) = uVar8;
        *(undefined1 **)(puVar1 + -0x120) = puVar15;
        *(code **)(puVar1 + -0x118) = Atlas_League_LeagueModeTester__TestPodium2ndPlace;
        puVar15 = puVar1 + -0x120;
        uVar8 = param_1;
        if ((bRam0000000003eb48c5 & 1) == 0) {
          func_0x00f78a20(0x3d21070);
          func_0x00f78a20(0x3d22e88);
          func_0x00f78a20(0x3d25238);
          bRam0000000003eb48c5 = 1;
        }
        if ((uVar11 == 0) ||
           (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar11), lVar5 == 0)) {
          auVar19 = func_0x00f78af4();
          lVar7 = auVar19._8_8_;
          uVar9 = auVar19._0_8_;
          puVar2 = puVar1 + -400;
          *(undefined8 *)(puVar1 + -400) = uVar14;
          *(undefined8 *)(puVar1 + -0x188) = uVar13;
          *(undefined8 *)(puVar1 + -0x180) = 0x3eb4000;
          *(long *)(puVar1 + -0x178) = lVar5;
          *(ulong *)(puVar1 + -0x170) = uVar11;
          *(ulong *)(puVar1 + -0x168) = param_1;
          *(undefined1 **)(puVar1 + -0x160) = puVar15;
          *(code **)(puVar1 + -0x158) = Atlas_League_LeagueModeTester__TestPodium6thPlace;
          puVar15 = puVar1 + -0x160;
          param_1 = uVar8;
          if ((bRam0000000003eb48c6 & 1) == 0) {
            func_0x00f78a20(0x3d21070);
            func_0x00f78a20(0x3d22e88);
            func_0x00f78a20(0x3d25238);
            bRam0000000003eb48c6 = 1;
          }
          if ((uVar9 == 0) ||
             (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar9), lVar7 == 0)) {
            auVar19 = func_0x00f78af4();
            lVar5 = auVar19._8_8_;
            uVar11 = auVar19._0_8_;
            puVar2 = puVar1 + -0x1d0;
            *(undefined8 *)(puVar1 + -0x1d0) = uVar14;
            *(undefined8 *)(puVar1 + -0x1c8) = uVar13;
            *(undefined8 *)(puVar1 + -0x1c0) = 0x3eb4000;
            *(long *)(puVar1 + -0x1b8) = lVar7;
            *(ulong *)(puVar1 + -0x1b0) = uVar9;
            *(ulong *)(puVar1 + -0x1a8) = uVar8;
            *(undefined1 **)(puVar1 + -0x1a0) = puVar15;
            *(code **)(puVar1 + -0x198) = Atlas_League_LeagueModeTester__TestPodium11thPlace;
            puVar15 = puVar1 + -0x1a0;
            uVar8 = param_1;
            if ((bRam0000000003eb48c7 & 1) == 0) {
              func_0x00f78a20(0x3d21070);
              func_0x00f78a20(0x3d22e88);
              func_0x00f78a20(0x3d25238);
              bRam0000000003eb48c7 = 1;
            }
            if ((uVar11 == 0) ||
               (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar11), lVar5 == 0)) {
              auVar19 = func_0x00f78af4();
              lVar7 = auVar19._8_8_;
              uVar9 = auVar19._0_8_;
              puVar2 = puVar1 + -0x210;
              *(undefined8 *)(puVar1 + -0x210) = uVar14;
              *(undefined8 *)(puVar1 + -0x208) = uVar13;
              *(undefined8 *)(puVar1 + -0x200) = 0x3eb4000;
              *(long *)(puVar1 + -0x1f8) = lVar5;
              *(ulong *)(puVar1 + -0x1f0) = uVar11;
              *(ulong *)(puVar1 + -0x1e8) = param_1;
              *(undefined1 **)(puVar1 + -0x1e0) = puVar15;
              *(code **)(puVar1 + -0x1d8) = Atlas_League_LeagueModeTester__TestPodium12thPlace;
              puVar15 = puVar1 + -0x1e0;
              param_1 = uVar8;
              if ((bRam0000000003eb48c8 & 1) == 0) {
                func_0x00f78a20(0x3d21070);
                func_0x00f78a20(0x3d22e88);
                func_0x00f78a20(0x3d25238);
                bRam0000000003eb48c8 = 1;
              }
              uVar11 = param_4;
              if ((uVar9 == 0) ||
                 (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar9), uVar11 = param_4,
                 lVar7 == 0)) {
                auVar19 = func_0x00f78af4();
                lVar5 = auVar19._8_8_;
                unaff_x21 = auVar19._0_8_;
                puVar2 = puVar1 + -0x260;
                *(ulong *)(puVar1 + -0x260) = unaff_x26;
                *(undefined8 *)(puVar1 + -600) = unaff_x25;
                *(undefined8 *)(puVar1 + -0x250) = uVar14;
                *(undefined8 *)(puVar1 + -0x248) = uVar13;
                *(undefined8 *)(puVar1 + -0x240) = 0x3eb4000;
                *(long *)(puVar1 + -0x238) = lVar7;
                *(ulong *)(puVar1 + -0x230) = uVar9;
                *(ulong *)(puVar1 + -0x228) = uVar8;
                *(undefined1 **)(puVar1 + -0x220) = puVar15;
                *(code **)(puVar1 + -0x218) = Atlas_League_LeagueModeTester__TestPodiumPlace;
                puVar15 = puVar1 + -0x220;
                uVar13 = 0x3eb4000;
                uVar8 = param_1;
                param_4 = uVar11;
                if ((bRam0000000003eb48c9 & 1) == 0) {
                  func_0x00f78a20(0x3d21070);
                  func_0x00f78a20(0x3d22e88);
                  func_0x00f78a20(0x3d25238);
                  bRam0000000003eb48c9 = 1;
                }
                if ((unaff_x21 == 0) ||
                   (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(unaff_x21), lVar5 == 0)) {
                  auVar19 = func_0x00f78af4();
                  lVar7 = auVar19._8_8_;
                  uVar9 = auVar19._0_8_;
                  puVar2 = puVar1 + -0x2d0;
                  *(ulong *)(puVar1 + -0x2b0) = unaff_x26;
                  *(undefined8 *)(puVar1 + -0x2a8) = unaff_x25;
                  *(undefined8 *)(puVar1 + -0x2a0) = uVar14;
                  *(undefined8 *)(puVar1 + -0x298) = 0x3eb4000;
                  *(long *)(puVar1 + -0x290) = lVar5;
                  *(long *)(puVar1 + -0x288) = unaff_x21;
                  *(ulong *)(puVar1 + -0x280) = uVar11;
                  *(ulong *)(puVar1 + -0x278) = param_1;
                  *(undefined1 **)(puVar1 + -0x270) = puVar15;
                  *(code **)(puVar1 + -0x268) = Atlas_League_LeagueModeTester__TestPodiumAsIs;
                  puVar15 = puVar1 + -0x270;
                  unaff_x22 = 0x3eb4000;
                  param_1 = uVar8;
                  if ((bRam0000000003eb48ca & 1) == 0) {
                    func_0x00f78a20(0x3d21070);
                    func_0x00f78a20(0x3d25238);
                    bRam0000000003eb48ca = 1;
                  }
                  unaff_x21 = 0;
                  uVar6 = uVar14;
                  if (lVar7 == 0) {
LAB_0147d510:
                    uVar14 = uVar6;
                    auVar19 = func_0x00f78af4();
                    uVar11 = auVar19._0_8_;
                    puVar2 = puVar1 + -0x310;
                    *(undefined8 *)(puVar1 + -0x310) = uVar14;
                    *(undefined8 *)(puVar1 + -0x308) = uVar13;
                    *(ulong *)(puVar1 + -0x300) = unaff_x22;
                    *(long *)(puVar1 + -0x2f8) = unaff_x21;
                    *(ulong *)(puVar1 + -0x2f0) = uVar9;
                    *(ulong *)(puVar1 + -0x2e8) = uVar8;
                    *(undefined1 **)(puVar1 + -0x2e0) = puVar15;
                    *(code **)(puVar1 + -0x2d8) = Atlas_League_LeagueModeTester__TestDecayDemotion;
                    puVar15 = puVar1 + -0x2e0;
                    uVar8 = param_4;
                    if ((bRam0000000003eb48cb & 1) == 0) {
                      func_0x00f78a20(0x3d21070);
                      func_0x00f78a20(0x3d25238);
                      bRam0000000003eb48cb = 1;
                    }
                    if (auVar19._8_8_ == 0) {
LAB_0147d610:
                      func_0x00f78af4();
                      return;
                    }
                    uVar13 = 0x3d21070;
                    unaff_x22 = *(ulong *)(auVar19._8_8_ + 0x38);
                    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)param_4,0);
                    param_4 = uVar8;
                    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                      param_4 = uVar8;
                    }
                    param_3 = 0;
                    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x22,uVar6);
                    unaff_x21 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
                    auVar19._8_8_ = unaff_x21;
                    auVar19._0_8_ = uVar11;
                    if (uVar11 == 0) goto LAB_0147d610;
                    puVar16 = (undefined *)0x147d5e4;
                  }
                  else {
                    unaff_x25 = 0x3d21070;
                    uVar14 = 0x3d25238;
                    uVar6 = *(undefined8 *)(lVar7 + 0x38);
                    *(undefined8 *)(puVar1 + -0x2b8) = uVar6;
                    unaff_x26 = 7;
                    iVar3 = -7;
                    do {
                      *(undefined8 *)(puVar1 + -0x2c0) = uVar6;
                      uVar13 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar3,puVar1 + -0x2c0,0);
                      *(undefined8 *)(puVar1 + -0x2b8) = uVar13;
                      iVar4 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(puVar1 + -0x2b8,0);
                      uVar6 = *(undefined8 *)(lVar7 + 0x38);
                      if (iVar4 == 0) break;
                      iVar4 = (int)unaff_x26;
                      unaff_x26 = (ulong)(iVar4 - 1);
                      iVar3 = iVar3 + 1;
                    } while (1 < iVar4);
                    uVar13 = *(undefined8 *)(puVar1 + -0x2b8);
                    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar6 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar6,uVar13,0);
                    *(undefined8 *)(puVar1 + -0x2c8) = uVar6;
                    dVar17 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(puVar1 + -0x2c8,0);
                    dVar18 = -dVar17;
                    if (dVar17 != INFINITY) {
                      dVar18 = dVar17;
                    }
                    unaff_x22 = (ulong)(uint)(int)dVar18;
                    unaff_x21 = *(long *)(lVar7 + 0x38);
                    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar18,0);
                    param_1 = 0;
                    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar6);
                    uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
                    auVar19._8_8_ = uVar6;
                    auVar19._0_8_ = uVar9;
                    uVar6 = 0x3d25238;
                    if (uVar9 == 0) goto LAB_0147d510;
                    puVar16 = (undefined *)0x147d4c4;
                    param_3 = param_1;
                    param_1 = uVar8;
                    uVar11 = uVar9;
                  }
                }
                else {
                  unaff_x22 = *(ulong *)(lVar5 + 0x38);
                  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar13 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
                  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar14 = 0x3d22e88;
                  param_3 = 0;
                  /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x22,uVar13);
                  uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
                  auVar19._8_8_ = uVar6;
                  auVar19._0_8_ = unaff_x21;
                  puVar16 = (undefined *)0x147d2ac;
                }
              }
              else {
                unaff_x21 = *(long *)(lVar7 + 0x38);
                if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
                if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar13 = 0x3d22e88;
                param_3 = 0;
                /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,unaff_x22);
                uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
                auVar19._8_8_ = uVar6;
                auVar19._0_8_ = uVar9;
                puVar16 = (undefined *)0x147d058;
                param_1 = uVar8;
                uVar11 = uVar9;
              }
            }
            else {
              unaff_x21 = *(long *)(lVar5 + 0x38);
              if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar13 = 0x3d22e88;
              param_3 = 0;
              /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,unaff_x22);
              uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
              auVar19._8_8_ = uVar6;
              auVar19._0_8_ = uVar11;
              puVar16 = (undefined *)0x147cde4;
            }
          }
          else {
            unaff_x21 = *(long *)(lVar7 + 0x38);
            if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
            if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = 0x3d22e88;
            param_3 = 0;
            /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,unaff_x22);
            uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
            auVar19._8_8_ = uVar6;
            auVar19._0_8_ = uVar9;
            puVar16 = (undefined *)0x147cc38;
            param_1 = uVar8;
            uVar11 = uVar9;
          }
        }
        else {
          unaff_x21 = *(long *)(lVar5 + 0x38);
          if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
          if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar13 = 0x3d22e88;
          param_3 = 0;
          /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,unaff_x22);
          uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
          auVar19._8_8_ = uVar6;
          auVar19._0_8_ = uVar11;
          puVar16 = (undefined *)0x147cab4;
        }
      }
      else {
        unaff_x21 = *(long *)(lVar7 + 0x38);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = 0x3d22e88;
        param_3 = 0;
        /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,unaff_x22);
        uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
        auVar19._8_8_ = uVar6;
        auVar19._0_8_ = uVar9;
        puVar16 = (undefined *)0x147c944;
        param_1 = uVar8;
        uVar11 = uVar9;
      }
    }
    else {
      unaff_x21 = *(long *)(lVar5 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x25 = 0x3d22e88;
      uVar14 = 0x3d1f100;
      uVar13 = 0x3d653e0;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,unaff_x22);
      uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      auVar19._8_8_ = uVar6;
      auVar19._0_8_ = uVar11;
      puVar16 = (undefined *)0x147c780;
    }
  } while( true );
}



// ============================================================
// RVA: 0x147c154 | Atlas.League.LeaguePlayerSave.set_LatestPlayedDate
// ============================================================

/* WARNING: Possible PIC construction at 0x0147c5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ce40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147d4d8) */
/* WARNING: Removing unreachable block (ram,0x0147d4e8) */
/* WARNING: Removing unreachable block (ram,0x0147d310) */
/* WARNING: Removing unreachable block (ram,0x0147d314) */
/* WARNING: Removing unreachable block (ram,0x0147d31c) */
/* WARNING: Removing unreachable block (ram,0x0147d330) */
/* WARNING: Removing unreachable block (ram,0x0147d33c) */
/* WARNING: Removing unreachable block (ram,0x0147d2c0) */
/* WARNING: Removing unreachable block (ram,0x0147d2d4) */
/* WARNING: Removing unreachable block (ram,0x0147d2e0) */
/* WARNING: Removing unreachable block (ram,0x0147d2e8) */
/* WARNING: Removing unreachable block (ram,0x0147d2f0) */
/* WARNING: Removing unreachable block (ram,0x0147d344) */
/* WARNING: Removing unreachable block (ram,0x0147d348) */
/* WARNING: Removing unreachable block (ram,0x0147d300) */
/* WARNING: Removing unreachable block (ram,0x0147d0b8) */
/* WARNING: Removing unreachable block (ram,0x0147d06c) */
/* WARNING: Removing unreachable block (ram,0x0147d07c) */
/* WARNING: Removing unreachable block (ram,0x0147d088) */
/* WARNING: Removing unreachable block (ram,0x0147d090) */
/* WARNING: Removing unreachable block (ram,0x0147d098) */
/* WARNING: Removing unreachable block (ram,0x0147d19c) */
/* WARNING: Removing unreachable block (ram,0x0147d1a0) */
/* WARNING: Removing unreachable block (ram,0x0147d0a8) */
/* WARNING: Removing unreachable block (ram,0x0147ce44) */
/* WARNING: Removing unreachable block (ram,0x0147cdf8) */
/* WARNING: Removing unreachable block (ram,0x0147ce08) */
/* WARNING: Removing unreachable block (ram,0x0147ce14) */
/* WARNING: Removing unreachable block (ram,0x0147ce1c) */
/* WARNING: Removing unreachable block (ram,0x0147ce24) */
/* WARNING: Removing unreachable block (ram,0x0147cf50) */
/* WARNING: Removing unreachable block (ram,0x0147cf54) */
/* WARNING: Removing unreachable block (ram,0x0147ce34) */
/* WARNING: Removing unreachable block (ram,0x0147cc98) */
/* WARNING: Removing unreachable block (ram,0x0147cc58) */
/* WARNING: Removing unreachable block (ram,0x0147cc5c) */
/* WARNING: Removing unreachable block (ram,0x0147cc68) */
/* WARNING: Removing unreachable block (ram,0x0147cc70) */
/* WARNING: Removing unreachable block (ram,0x0147cc78) */
/* WARNING: Removing unreachable block (ram,0x0147ccdc) */
/* WARNING: Removing unreachable block (ram,0x0147cce0) */
/* WARNING: Removing unreachable block (ram,0x0147cc88) */
/* WARNING: Removing unreachable block (ram,0x0147cc44) */
/* WARNING: Removing unreachable block (ram,0x0147cb14) */
/* WARNING: Removing unreachable block (ram,0x0147cad4) */
/* WARNING: Removing unreachable block (ram,0x0147cad8) */
/* WARNING: Removing unreachable block (ram,0x0147cae4) */
/* WARNING: Removing unreachable block (ram,0x0147caec) */
/* WARNING: Removing unreachable block (ram,0x0147caf4) */
/* WARNING: Removing unreachable block (ram,0x0147cb30) */
/* WARNING: Removing unreachable block (ram,0x0147cb34) */
/* WARNING: Removing unreachable block (ram,0x0147cb04) */
/* WARNING: Removing unreachable block (ram,0x0147cac0) */
/* WARNING: Removing unreachable block (ram,0x0147c9a4) */
/* WARNING: Removing unreachable block (ram,0x0147c964) */
/* WARNING: Removing unreachable block (ram,0x0147c968) */
/* WARNING: Removing unreachable block (ram,0x0147c974) */
/* WARNING: Removing unreachable block (ram,0x0147c97c) */
/* WARNING: Removing unreachable block (ram,0x0147c984) */
/* WARNING: Removing unreachable block (ram,0x0147c9ac) */
/* WARNING: Removing unreachable block (ram,0x0147c9b0) */
/* WARNING: Removing unreachable block (ram,0x0147c994) */
/* WARNING: Removing unreachable block (ram,0x0147c950) */
/* WARNING: Removing unreachable block (ram,0x0147c838) */
/* WARNING: Removing unreachable block (ram,0x0147c83c) */
/* WARNING: Removing unreachable block (ram,0x0147c7e0) */
/* WARNING: Removing unreachable block (ram,0x0147c7e4) */
/* WARNING: Removing unreachable block (ram,0x0147c804) */
/* WARNING: Removing unreachable block (ram,0x0147c794) */
/* WARNING: Removing unreachable block (ram,0x0147c7a4) */
/* WARNING: Removing unreachable block (ram,0x0147c7b0) */
/* WARNING: Removing unreachable block (ram,0x0147c7b8) */
/* WARNING: Removing unreachable block (ram,0x0147c7c0) */
/* WARNING: Removing unreachable block (ram,0x0147c80c) */
/* WARNING: Removing unreachable block (ram,0x0147c7d0) */
/* WARNING: Removing unreachable block (ram,0x0147c648) */
/* WARNING: Removing unreachable block (ram,0x0147c64c) */
/* WARNING: Removing unreachable block (ram,0x0147c5f0) */
/* WARNING: Removing unreachable block (ram,0x0147c5f4) */
/* WARNING: Removing unreachable block (ram,0x0147c614) */
/* WARNING: Removing unreachable block (ram,0x0147c5a4) */
/* WARNING: Removing unreachable block (ram,0x0147c5b4) */
/* WARNING: Removing unreachable block (ram,0x0147c5c0) */
/* WARNING: Removing unreachable block (ram,0x0147c5c8) */
/* WARNING: Removing unreachable block (ram,0x0147c5d0) */
/* WARNING: Removing unreachable block (ram,0x0147c61c) */
/* WARNING: Removing unreachable block (ram,0x0147c5e0) */
/* WARNING: Removing unreachable block (ram,0x0147d5f0) */
/* WARNING: Removing unreachable block (ram,0x0147d5f4) */
/* WARNING: Removing unreachable block (ram,0x014eb4e0) */
/* WARNING: Removing unreachable block (ram,0x014eb504) */
/* WARNING: Removing unreachable block (ram,0x014eb518) */
/* WARNING: Removing unreachable block (ram,0x014eb520) */
/* WARNING: Removing unreachable block (ram,0x014eb528) */
/* WARNING: Removing unreachable block (ram,0x014eb554) */
/* WARNING: Removing unreachable block (ram,0x014eb580) */
/* WARNING: Removing unreachable block (ram,0x014eb594) */
/* WARNING: Removing unreachable block (ram,0x014eb5ac) */
/* WARNING: Removing unreachable block (ram,0x014eb5b4) */
/* WARNING: Removing unreachable block (ram,0x014eb5b8) */
/* WARNING: Removing unreachable block (ram,0x014eb5c4) */
/* WARNING: Removing unreachable block (ram,0x014eb5d8) */
/* WARNING: Removing unreachable block (ram,0x014eb5e4) */
/* WARNING: Removing unreachable block (ram,0x014eb604) */
/* WARNING: Removing unreachable block (ram,0x014eb5f0) */
/* WARNING: Removing unreachable block (ram,0x014eb530) */
/* WARNING: Removing unreachable block (ram,0x014eb538) */
/* WARNING: Removing unreachable block (ram,0x014eb608) */
/* WARNING: Removing unreachable block (ram,0x014eb620) */
/* WARNING: Removing unreachable block (ram,0x014eb650) */
/* WARNING: Removing unreachable block (ram,0x014eb4f4) */

void Atlas_League_LeaguePlayerSave__set_LatestPlayedDate
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  undefined1 *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar15 = &stack0xfffffffffffffff0;
  lVar13 = 0x3eb4000;
  if ((bRam0000000003eb48dd & 1) == 0) {
    func_0x00f78a20(0x3d6f1f8);
    bRam0000000003eb48dd = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    param_4 = 0;
    param_3 = param_2;
    Atlas_Save_SaveManager__SetStringData(*(long *)(param_1 + 0x10),/*STR('L_LPD')*/ uRam0000000003d6f1f8);
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(lVar5 + 0x110) = 1;
      return;
    }
  }
  puVar16 = &Atlas_League_LeaguePlayerSave__set_LatestOpenedDate;
  auVar19 = func_0x00f78af4();
code_r0x0147c1cc:
  uVar11 = auVar19._8_8_;
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = lVar13;
  *(ulong *)(puVar2 + -0x20) = param_2;
  *(ulong *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(undefined **)(puVar2 + -8) = puVar16;
  puVar15 = puVar2 + -0x10;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb48db & 1) == 0) {
    func_0x00f78a20(0x3d6f200);
    bRam0000000003eb48db = 1;
  }
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar13 != 0) {
    param_4 = 0;
    Atlas_Save_SaveManager__SetStringData(lVar13,/*STR('L_OD')*/ uRam0000000003d6f200);
    lVar5 = *(long *)(auVar19._0_8_ + 0x10);
    param_3 = uVar11;
    if (lVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  puVar16 = &Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch;
  auVar20 = func_0x00f78af4();
  puVar1 = puVar2 + -0x30;
code_r0x0147c244:
  do {
    lVar13 = auVar20._0_8_;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar14;
    *(long *)(puVar1 + -0x20) = auVar19._8_8_;
    *(long *)(puVar1 + -0x18) = auVar19._0_8_;
    *(undefined1 **)(puVar1 + -0x10) = puVar15;
    *(undefined **)(puVar1 + -8) = puVar16;
    if ((bRam0000000003eb48df & 1) == 0) {
      func_0x00f78a20(0x3d6f230);
      bRam0000000003eb48df = 1;
    }
    if (*(long *)(lVar13 + 0x10) != 0) {
      param_4 = 0;
      param_3 = auVar20._8_8_;
      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar13 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230);
      lVar5 = *(long *)(lVar13 + 0x10);
      if (lVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    auVar19 = func_0x00f78af4();
    lVar10 = auVar19._0_8_;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x23;
    *(ulong *)(puVar1 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x58) = 0x3eb4000;
    *(ulong *)(puVar1 + -0x50) = auVar20._8_8_;
    *(long *)(puVar1 + -0x48) = lVar13;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement;
    lVar13 = lVar10;
    uVar11 = param_3;
    if ((bRam0000000003eb48e4 & 1) == 0) {
      lVar13 = func_0x00f78a20(0x3d22e88);
      bRam0000000003eb48e4 = 1;
    }
    uVar14 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(lVar13,auVar19._8_8_);
    lVar13 = *(long *)(lVar10 + 0x10);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar13 != 0) {
      uVar11 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
      param_4 = 0;
      iVar3 = Atlas_Save_SaveManager__GetIntData(lVar13,uVar14);
      if (iVar3 <= (int)param_3) {
        return;
      }
      if (*(long *)(lVar10 + 0x10) != 0) {
        param_4 = 0;
        uVar11 = param_3;
        Atlas_Save_SaveManager__SetIntData(*(long *)(lVar10 + 0x10),uVar14);
        lVar5 = *(long *)(lVar10 + 0x10);
        if (lVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
    }
    auVar19 = func_0x00f78af4();
    lVar9 = auVar19._8_8_;
    lVar6 = auVar19._0_8_;
    *(long *)(puVar1 + -0xa0) = lVar13;
    *(undefined8 *)(puVar1 + -0x98) = uVar14;
    *(ulong *)(puVar1 + -0x90) = param_3;
    *(long *)(puVar1 + -0x88) = lVar10;
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x40;
    *(undefined **)(puVar1 + -0x78) = &Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI;
    lVar13 = 0x3eb4000;
    param_1 = uVar11;
    if ((bRam0000000003eb48fb & 1) == 0) {
      func_0x00f78a20(0x3d6f1f0);
      bRam0000000003eb48fb = 1;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      param_4 = 0;
      param_1 = uVar11;
      uVar14 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar6 + 0x10),/*STR('L_LB_P')*/ uRam0000000003d6f1f0);
      if (lVar9 != 0) {
        if (0 < *(int *)(lVar9 + 0x18)) {
          uVar11 = 0;
          lVar13 = lVar9 + 0x20;
          do {
            uVar14 = /*Atlas.League.LeaguePlayerSave$$ParseLeaderboardAIKey*/ func_0x0147f388(uVar14,uVar11);
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto code_r0x0147c474;
            if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x0147c470;
            param_1 = (ulong)*(uint *)(lVar13 + uVar11 * 4);
            param_4 = 0;
            uVar14 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar6 + 0x10),uVar14);
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)*(int *)(lVar9 + 0x18));
        }
        lVar5 = *(long *)(lVar6 + 0x10);
        if (lVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
    }
code_r0x0147c470:
    func_0x00f78af4();
code_r0x0147c474:
    uVar14 = func_0x00f78b24();
    auVar19 = func_0x00f78ac0(uVar14,0);
    lVar5 = auVar19._8_8_;
    param_2 = auVar19._0_8_;
    puVar2 = puVar1 + -0xf0;
    *(ulong *)(puVar1 + -0xf0) = unaff_x26;
    *(undefined8 *)(puVar1 + -0xe8) = unaff_x25;
    *(undefined8 *)(puVar1 + -0xe0) = unaff_x24;
    *(undefined8 *)(puVar1 + -0xd8) = 0x3d22e88;
    *(long *)(puVar1 + -0xd0) = lVar13;
    *(ulong *)(puVar1 + -200) = uVar11;
    *(long *)(puVar1 + -0xc0) = lVar9;
    *(long *)(puVar1 + -0xb8) = lVar6;
    *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x80;
    *(code **)(puVar1 + -0xa8) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2;
    puVar15 = puVar1 + -0xb0;
    uVar11 = param_1;
    if ((bRam0000000003eb48c2 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e8);
      bRam0000000003eb48c2 = 1;
    }
    if ((param_2 != 0) &&
       (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), lVar5 != 0)) {
      lVar13 = *(long *)(lVar5 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x25 = 0x3d22e88;
      unaff_x24 = 0x3d1f100;
      unaff_x23 = 0x3d653e8;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar14);
      uVar14 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
      auVar19._8_8_ = uVar14;
      auVar19._0_8_ = param_2;
      puVar16 = (undefined *)0x147c5a4;
      goto code_r0x0147c1cc;
    }
    auVar19 = func_0x00f78af4();
    lVar13 = auVar19._8_8_;
    uVar7 = auVar19._0_8_;
    puVar2 = puVar1 + -0x140;
    *(ulong *)(puVar1 + -0x140) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x138) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x130) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x128) = 0x3d22e88;
    *(undefined8 *)(puVar1 + -0x120) = 0x3eb4000;
    *(long *)(puVar1 + -0x118) = lVar5;
    *(ulong *)(puVar1 + -0x110) = param_2;
    *(ulong *)(puVar1 + -0x108) = param_1;
    *(undefined1 **)(puVar1 + -0x100) = puVar15;
    *(code **)(puVar1 + -0xf8) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
    puVar15 = puVar1 + -0x100;
    uVar12 = uVar11;
    if ((bRam0000000003eb48c3 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e0);
      bRam0000000003eb48c3 = 1;
    }
    if ((uVar7 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar7), lVar13 != 0))
    {
      lVar13 = *(long *)(lVar13 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x25 = 0x3d22e88;
      unaff_x24 = 0x3d1f100;
      unaff_x23 = 0x3d653e0;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar7,uVar14);
      uVar14 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar7);
      auVar19._8_8_ = uVar14;
      auVar19._0_8_ = uVar7;
      puVar16 = (undefined *)0x147c794;
      param_1 = uVar11;
      param_2 = uVar7;
      goto code_r0x0147c1cc;
    }
    auVar19 = func_0x00f78af4();
    lVar10 = auVar19._8_8_;
    lVar5 = auVar19._0_8_;
    auVar19._8_8_ = lVar5;
    auVar19._0_8_ = uVar12;
    *(undefined8 *)(puVar1 + -0x180) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x178) = 0x3d22e88;
    *(undefined8 *)(puVar1 + -0x170) = 0x3eb4000;
    *(long *)(puVar1 + -0x168) = lVar13;
    *(ulong *)(puVar1 + -0x160) = uVar7;
    *(ulong *)(puVar1 + -0x158) = uVar11;
    *(undefined1 **)(puVar1 + -0x150) = puVar15;
    *(code **)(puVar1 + -0x148) = Atlas_League_LeagueModeTester__TestPodium1stPlace;
    puVar15 = puVar1 + -0x150;
    uVar11 = uVar12;
    if ((bRam0000000003eb48c4 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c4 = 1;
    }
    if ((lVar5 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar5), lVar10 != 0))
    {
      uVar14 = *(undefined8 *)(lVar10 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,unaff_x22);
      uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar5,uVar8);
      auVar20._8_8_ = 1;
      auVar20._0_8_ = lVar5;
      puVar16 = (undefined *)0x147c950;
      puVar1 = puVar1 + -0x180;
      goto code_r0x0147c244;
    }
    auVar19 = func_0x00f78af4();
    lVar6 = auVar19._8_8_;
    lVar13 = auVar19._0_8_;
    auVar19._8_8_ = lVar13;
    auVar19._0_8_ = uVar11;
    *(undefined8 *)(puVar1 + -0x1c0) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x1b8) = 0x3d22e88;
    *(undefined8 *)(puVar1 + -0x1b0) = 0x3eb4000;
    *(long *)(puVar1 + -0x1a8) = lVar10;
    *(long *)(puVar1 + -0x1a0) = lVar5;
    *(ulong *)(puVar1 + -0x198) = uVar12;
    *(undefined1 **)(puVar1 + -400) = puVar15;
    *(code **)(puVar1 + -0x188) = Atlas_League_LeagueModeTester__TestPodium2ndPlace;
    puVar15 = puVar1 + -400;
    uVar12 = uVar11;
    if ((bRam0000000003eb48c5 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c5 = 1;
    }
    if ((lVar13 == 0) || (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar13), lVar6 == 0))
    {
      auVar19 = func_0x00f78af4();
      lVar10 = auVar19._8_8_;
      lVar5 = auVar19._0_8_;
      auVar19._8_8_ = lVar5;
      auVar19._0_8_ = uVar12;
      *(undefined8 *)(puVar1 + -0x200) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x1f8) = 0x3d22e88;
      *(undefined8 *)(puVar1 + -0x1f0) = 0x3eb4000;
      *(long *)(puVar1 + -0x1e8) = lVar6;
      *(long *)(puVar1 + -0x1e0) = lVar13;
      *(ulong *)(puVar1 + -0x1d8) = uVar11;
      *(undefined1 **)(puVar1 + -0x1d0) = puVar15;
      *(code **)(puVar1 + -0x1c8) = Atlas_League_LeagueModeTester__TestPodium6thPlace;
      puVar15 = puVar1 + -0x1d0;
      param_1 = uVar12;
      if ((bRam0000000003eb48c6 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c6 = 1;
      }
      if ((lVar5 == 0) || (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar5), lVar10 == 0)
         ) break;
      uVar14 = *(undefined8 *)(lVar10 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,unaff_x22);
      uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar5,uVar8);
      auVar20._8_8_ = 1;
      auVar20._0_8_ = lVar5;
      puVar16 = (undefined *)0x147cc44;
      puVar1 = puVar1 + -0x200;
    }
    else {
      uVar14 = *(undefined8 *)(lVar6 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,unaff_x22);
      uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar13,uVar8);
      auVar20._8_8_ = 1;
      auVar20._0_8_ = lVar13;
      puVar16 = (undefined *)0x147cac0;
      puVar1 = puVar1 + -0x1c0;
    }
  } while( true );
  auVar19 = func_0x00f78af4();
  lVar13 = auVar19._8_8_;
  param_2 = auVar19._0_8_;
  puVar2 = puVar1 + -0x240;
  *(undefined8 *)(puVar1 + -0x240) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x238) = 0x3d22e88;
  *(undefined8 *)(puVar1 + -0x230) = 0x3eb4000;
  *(long *)(puVar1 + -0x228) = lVar10;
  *(long *)(puVar1 + -0x220) = lVar5;
  *(ulong *)(puVar1 + -0x218) = uVar12;
  *(undefined1 **)(puVar1 + -0x210) = puVar15;
  *(code **)(puVar1 + -0x208) = Atlas_League_LeagueModeTester__TestPodium11thPlace;
  puVar15 = puVar1 + -0x210;
  uVar11 = param_1;
  if ((bRam0000000003eb48c7 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c7 = 1;
  }
  if ((param_2 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), lVar13 != 0)
     ) {
    lVar13 = *(long *)(lVar13 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar14);
    uVar14 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
    auVar19._8_8_ = uVar14;
    auVar19._0_8_ = param_2;
    puVar16 = (undefined *)0x147cdf8;
    goto code_r0x0147c1cc;
  }
  auVar19 = func_0x00f78af4();
  lVar5 = auVar19._8_8_;
  uVar12 = auVar19._0_8_;
  puVar2 = puVar1 + -0x280;
  *(undefined8 *)(puVar1 + -0x280) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x278) = 0x3d22e88;
  *(undefined8 *)(puVar1 + -0x270) = 0x3eb4000;
  *(long *)(puVar1 + -0x268) = lVar13;
  *(ulong *)(puVar1 + -0x260) = param_2;
  *(ulong *)(puVar1 + -600) = param_1;
  *(undefined1 **)(puVar1 + -0x250) = puVar15;
  *(code **)(puVar1 + -0x248) = Atlas_League_LeagueModeTester__TestPodium12thPlace;
  puVar15 = puVar1 + -0x250;
  param_1 = uVar11;
  if ((bRam0000000003eb48c8 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c8 = 1;
  }
  param_2 = param_4;
  if ((uVar12 != 0) &&
     (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar12), param_2 = param_4, lVar5 != 0))
  {
    lVar13 = *(long *)(lVar5 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar12,uVar14);
    uVar14 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar12);
    auVar19._8_8_ = uVar14;
    auVar19._0_8_ = uVar12;
    puVar16 = (undefined *)0x147d06c;
    param_1 = uVar11;
    param_2 = uVar12;
    goto code_r0x0147c1cc;
  }
  auVar19 = func_0x00f78af4();
  lVar10 = auVar19._8_8_;
  lVar13 = auVar19._0_8_;
  puVar2 = puVar1 + -0x2d0;
  *(ulong *)(puVar1 + -0x2d0) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x2c8) = unaff_x25;
  *(undefined8 *)(puVar1 + -0x2c0) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x2b8) = 0x3d22e88;
  *(undefined8 *)(puVar1 + -0x2b0) = 0x3eb4000;
  *(long *)(puVar1 + -0x2a8) = lVar5;
  *(ulong *)(puVar1 + -0x2a0) = uVar12;
  *(ulong *)(puVar1 + -0x298) = uVar11;
  *(undefined1 **)(puVar1 + -0x290) = puVar15;
  *(code **)(puVar1 + -0x288) = Atlas_League_LeagueModeTester__TestPodiumPlace;
  puVar15 = puVar1 + -0x290;
  unaff_x23 = 0x3eb4000;
  uVar11 = param_1;
  param_4 = param_2;
  if ((bRam0000000003eb48c9 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c9 = 1;
  }
  if ((lVar13 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar13), lVar10 != 0))
  {
    unaff_x22 = *(ulong *)(lVar10 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x22,unaff_x23);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar13,uVar14);
    uVar14 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar13);
    auVar19._8_8_ = uVar14;
    auVar19._0_8_ = lVar13;
    puVar16 = (undefined *)0x147d2c0;
    goto code_r0x0147c1cc;
  }
  auVar19 = func_0x00f78af4();
  lVar5 = auVar19._8_8_;
  uVar12 = auVar19._0_8_;
  puVar2 = puVar1 + -0x340;
  *(ulong *)(puVar1 + -800) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x318) = unaff_x25;
  *(undefined8 *)(puVar1 + -0x310) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x308) = 0x3eb4000;
  *(long *)(puVar1 + -0x300) = lVar10;
  *(long *)(puVar1 + -0x2f8) = lVar13;
  *(ulong *)(puVar1 + -0x2f0) = param_2;
  *(ulong *)(puVar1 + -0x2e8) = param_1;
  *(undefined1 **)(puVar1 + -0x2e0) = puVar15;
  *(code **)(puVar1 + -0x2d8) = Atlas_League_LeagueModeTester__TestPodiumAsIs;
  puVar15 = puVar1 + -0x2e0;
  unaff_x22 = 0x3eb4000;
  param_1 = uVar11;
  if ((bRam0000000003eb48ca & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48ca = 1;
  }
  lVar13 = 0;
  uVar14 = unaff_x24;
  if (lVar5 != 0) {
    unaff_x25 = 0x3d21070;
    unaff_x24 = 0x3d25238;
    uVar14 = *(undefined8 *)(lVar5 + 0x38);
    *(undefined8 *)(puVar1 + -0x328) = uVar14;
    unaff_x26 = 7;
    iVar3 = -7;
    do {
      *(undefined8 *)(puVar1 + -0x330) = uVar14;
      uVar14 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar3,puVar1 + -0x330,0);
      *(undefined8 *)(puVar1 + -0x328) = uVar14;
      iVar4 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(puVar1 + -0x328,0);
      uVar14 = *(undefined8 *)(lVar5 + 0x38);
      if (iVar4 == 0) break;
      iVar4 = (int)unaff_x26;
      unaff_x26 = (ulong)(iVar4 - 1);
      iVar3 = iVar3 + 1;
    } while (1 < iVar4);
    unaff_x23 = *(undefined8 *)(puVar1 + -0x328);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar14,unaff_x23,0);
    *(undefined8 *)(puVar1 + -0x338) = uVar14;
    dVar17 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(puVar1 + -0x338,0);
    dVar18 = -dVar17;
    if (dVar17 != INFINITY) {
      dVar18 = dVar17;
    }
    unaff_x22 = (ulong)(uint)(int)dVar18;
    lVar13 = *(long *)(lVar5 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar18,0);
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,uVar14);
    uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    param_1 = param_3;
    uVar14 = 0x3d25238;
    if (uVar12 != 0) {
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar12,uVar8);
      uVar14 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar12);
      auVar19._8_8_ = uVar14;
      auVar19._0_8_ = uVar12;
      puVar16 = (undefined *)0x147d4d8;
      param_1 = uVar11;
      param_2 = uVar12;
      goto code_r0x0147c1cc;
    }
  }
  unaff_x24 = uVar14;
  auVar19 = func_0x00f78af4();
  param_2 = auVar19._0_8_;
  puVar2 = puVar1 + -0x380;
  *(undefined8 *)(puVar1 + -0x380) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x378) = unaff_x23;
  *(ulong *)(puVar1 + -0x370) = unaff_x22;
  *(long *)(puVar1 + -0x368) = lVar13;
  *(ulong *)(puVar1 + -0x360) = uVar12;
  *(ulong *)(puVar1 + -0x358) = uVar11;
  *(undefined1 **)(puVar1 + -0x350) = puVar15;
  *(code **)(puVar1 + -0x348) = Atlas_League_LeagueModeTester__TestDecayDemotion;
  puVar15 = puVar1 + -0x350;
  uVar11 = param_4;
  if ((bRam0000000003eb48cb & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48cb = 1;
  }
  if (auVar19._8_8_ == 0) {
LAB_0147d610:
    func_0x00f78af4();
    return;
  }
  unaff_x23 = 0x3d21070;
  unaff_x22 = *(ulong *)(auVar19._8_8_ + 0x38);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)param_4,0);
  param_4 = uVar11;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
    param_4 = uVar11;
  }
  param_3 = 0;
  /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x22,uVar14);
  lVar13 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
  auVar19._8_8_ = lVar13;
  auVar19._0_8_ = param_2;
  if (param_2 == 0) goto LAB_0147d610;
  Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,lVar13);
  puVar16 = (undefined *)0x147d5f0;
  goto code_r0x0147c1cc;
}



// ============================================================
// RVA: 0x147c1cc | Atlas.League.LeaguePlayerSave.set_LatestOpenedDate
// ============================================================

/* WARNING: Possible PIC construction at 0x0147c5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ce00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ce40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d4e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147d310) */
/* WARNING: Removing unreachable block (ram,0x0147d314) */
/* WARNING: Removing unreachable block (ram,0x0147d31c) */
/* WARNING: Removing unreachable block (ram,0x0147d330) */
/* WARNING: Removing unreachable block (ram,0x0147d33c) */
/* WARNING: Removing unreachable block (ram,0x0147d2cc) */
/* WARNING: Removing unreachable block (ram,0x0147d2d4) */
/* WARNING: Removing unreachable block (ram,0x0147d2e0) */
/* WARNING: Removing unreachable block (ram,0x0147d2e8) */
/* WARNING: Removing unreachable block (ram,0x0147d2f0) */
/* WARNING: Removing unreachable block (ram,0x0147d344) */
/* WARNING: Removing unreachable block (ram,0x0147d348) */
/* WARNING: Removing unreachable block (ram,0x0147d300) */
/* WARNING: Removing unreachable block (ram,0x0147d0b8) */
/* WARNING: Removing unreachable block (ram,0x0147d078) */
/* WARNING: Removing unreachable block (ram,0x0147d07c) */
/* WARNING: Removing unreachable block (ram,0x0147d088) */
/* WARNING: Removing unreachable block (ram,0x0147d090) */
/* WARNING: Removing unreachable block (ram,0x0147d098) */
/* WARNING: Removing unreachable block (ram,0x0147d19c) */
/* WARNING: Removing unreachable block (ram,0x0147d1a0) */
/* WARNING: Removing unreachable block (ram,0x0147d0a8) */
/* WARNING: Removing unreachable block (ram,0x0147ce44) */
/* WARNING: Removing unreachable block (ram,0x0147ce04) */
/* WARNING: Removing unreachable block (ram,0x0147ce08) */
/* WARNING: Removing unreachable block (ram,0x0147ce14) */
/* WARNING: Removing unreachable block (ram,0x0147ce1c) */
/* WARNING: Removing unreachable block (ram,0x0147ce24) */
/* WARNING: Removing unreachable block (ram,0x0147cf50) */
/* WARNING: Removing unreachable block (ram,0x0147cf54) */
/* WARNING: Removing unreachable block (ram,0x0147ce34) */
/* WARNING: Removing unreachable block (ram,0x0147cc98) */
/* WARNING: Removing unreachable block (ram,0x0147cc44) */
/* WARNING: Removing unreachable block (ram,0x0147cc5c) */
/* WARNING: Removing unreachable block (ram,0x0147cc68) */
/* WARNING: Removing unreachable block (ram,0x0147cc70) */
/* WARNING: Removing unreachable block (ram,0x0147cc78) */
/* WARNING: Removing unreachable block (ram,0x0147ccdc) */
/* WARNING: Removing unreachable block (ram,0x0147cce0) */
/* WARNING: Removing unreachable block (ram,0x0147cc88) */
/* WARNING: Removing unreachable block (ram,0x0147cb14) */
/* WARNING: Removing unreachable block (ram,0x0147cac0) */
/* WARNING: Removing unreachable block (ram,0x0147cad8) */
/* WARNING: Removing unreachable block (ram,0x0147cae4) */
/* WARNING: Removing unreachable block (ram,0x0147caec) */
/* WARNING: Removing unreachable block (ram,0x0147caf4) */
/* WARNING: Removing unreachable block (ram,0x0147cb30) */
/* WARNING: Removing unreachable block (ram,0x0147cb34) */
/* WARNING: Removing unreachable block (ram,0x0147cb04) */
/* WARNING: Removing unreachable block (ram,0x0147c9a4) */
/* WARNING: Removing unreachable block (ram,0x0147c950) */
/* WARNING: Removing unreachable block (ram,0x0147c968) */
/* WARNING: Removing unreachable block (ram,0x0147c974) */
/* WARNING: Removing unreachable block (ram,0x0147c97c) */
/* WARNING: Removing unreachable block (ram,0x0147c984) */
/* WARNING: Removing unreachable block (ram,0x0147c9ac) */
/* WARNING: Removing unreachable block (ram,0x0147c9b0) */
/* WARNING: Removing unreachable block (ram,0x0147c994) */
/* WARNING: Removing unreachable block (ram,0x0147c838) */
/* WARNING: Removing unreachable block (ram,0x0147c83c) */
/* WARNING: Removing unreachable block (ram,0x0147c7e0) */
/* WARNING: Removing unreachable block (ram,0x0147c7e4) */
/* WARNING: Removing unreachable block (ram,0x0147c804) */
/* WARNING: Removing unreachable block (ram,0x0147c7a0) */
/* WARNING: Removing unreachable block (ram,0x0147c7a4) */
/* WARNING: Removing unreachable block (ram,0x0147c7b0) */
/* WARNING: Removing unreachable block (ram,0x0147c7b8) */
/* WARNING: Removing unreachable block (ram,0x0147c7c0) */
/* WARNING: Removing unreachable block (ram,0x0147c80c) */
/* WARNING: Removing unreachable block (ram,0x0147c7d0) */
/* WARNING: Removing unreachable block (ram,0x0147c648) */
/* WARNING: Removing unreachable block (ram,0x0147c64c) */
/* WARNING: Removing unreachable block (ram,0x0147c5f0) */
/* WARNING: Removing unreachable block (ram,0x0147c5f4) */
/* WARNING: Removing unreachable block (ram,0x0147c614) */
/* WARNING: Removing unreachable block (ram,0x0147c5b0) */
/* WARNING: Removing unreachable block (ram,0x0147c5b4) */
/* WARNING: Removing unreachable block (ram,0x0147c5c0) */
/* WARNING: Removing unreachable block (ram,0x0147c5c8) */
/* WARNING: Removing unreachable block (ram,0x0147c5d0) */
/* WARNING: Removing unreachable block (ram,0x0147c61c) */
/* WARNING: Removing unreachable block (ram,0x0147c5e0) */
/* WARNING: Removing unreachable block (ram,0x0147d4e4) */
/* WARNING: Removing unreachable block (ram,0x0147d4e8) */

undefined1  [16]
Atlas_League_LeaguePlayerSave__set_LatestOpenedDate
          (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong unaff_x22;
  int iVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  undefined1 *puVar15;
  undefined *puVar16;
  code *pcVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  puVar15 = &stack0xfffffffffffffff0;
  lVar13 = 0x3eb4000;
  if ((bRam0000000003eb48db & 1) == 0) {
    func_0x00f78a20(0x3d6f200);
    bRam0000000003eb48db = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    param_4 = 0;
    param_3 = param_2;
    Atlas_Save_SaveManager__SetStringData(*(long *)(param_1 + 0x10),/*STR('L_OD')*/ uRam0000000003d6f200);
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(uVar6 + 0x110) = 1;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar6;
      return auVar21;
    }
  }
  puVar16 = &Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch;
  auVar20 = func_0x00f78af4();
  puVar3 = &stack0xffffffffffffffd0;
code_r0x0147c244:
  lVar8 = auVar20._0_8_;
  *(ulong *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = lVar13;
  *(ulong *)(puVar3 + -0x20) = param_2;
  *(ulong *)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar15;
  *(undefined **)(puVar3 + -8) = puVar16;
  if ((bRam0000000003eb48df & 1) == 0) {
    func_0x00f78a20(0x3d6f230);
    bRam0000000003eb48df = 1;
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    param_4 = 0;
    param_3 = auVar20._8_8_;
    Atlas_Save_SaveManager__SetIntData(*(long *)(lVar8 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230);
    uVar6 = *(ulong *)(lVar8 + 0x10);
    if (uVar6 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  auVar21 = func_0x00f78af4();
  lVar10 = auVar21._0_8_;
  *(undefined8 *)(puVar3 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x68) = unaff_x23;
  *(ulong *)(puVar3 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x58) = 0x3eb4000;
  *(ulong *)(puVar3 + -0x50) = auVar20._8_8_;
  *(long *)(puVar3 + -0x48) = lVar8;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement;
  lVar13 = lVar10;
  uVar12 = param_3;
  if ((bRam0000000003eb48e4 & 1) == 0) {
    lVar13 = func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48e4 = 1;
  }
  uVar7 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(lVar13,auVar21._8_8_);
  lVar13 = *(long *)(lVar10 + 0x10);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar13 != 0) {
    uVar12 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
    param_4 = 0;
    auVar20 = Atlas_Save_SaveManager__GetIntData(lVar13,uVar7);
    if (auVar20._0_4_ <= (int)param_3) {
      return auVar20;
    }
    if (*(long *)(lVar10 + 0x10) != 0) {
      param_4 = 0;
      uVar12 = param_3;
      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar10 + 0x10),uVar7);
      uVar6 = *(ulong *)(lVar10 + 0x10);
      if (uVar6 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
  }
  auVar20 = func_0x00f78af4();
  lVar11 = auVar20._8_8_;
  lVar8 = auVar20._0_8_;
  *(long *)(puVar3 + -0xa0) = lVar13;
  *(undefined8 *)(puVar3 + -0x98) = uVar7;
  *(ulong *)(puVar3 + -0x90) = param_3;
  *(long *)(puVar3 + -0x88) = lVar10;
  *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x78) = &Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI;
  lVar13 = 0x3eb4000;
  param_1 = uVar12;
  if ((bRam0000000003eb48fb & 1) == 0) {
    func_0x00f78a20(0x3d6f1f0);
    bRam0000000003eb48fb = 1;
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    param_4 = 0;
    param_1 = uVar12;
    uVar7 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar8 + 0x10),/*STR('L_LB_P')*/ uRam0000000003d6f1f0);
    if (lVar11 != 0) {
      if (0 < *(int *)(lVar11 + 0x18)) {
        uVar12 = 0;
        lVar13 = lVar11 + 0x20;
        do {
          uVar7 = /*Atlas.League.LeaguePlayerSave$$ParseLeaderboardAIKey*/ func_0x0147f388(uVar7,uVar12);
          if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x0147c474;
          if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x0147c470;
          param_1 = (ulong)*(uint *)(lVar13 + uVar12 * 4);
          param_4 = 0;
          uVar7 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar8 + 0x10),uVar7);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)*(int *)(lVar11 + 0x18));
      }
      uVar6 = *(ulong *)(lVar8 + 0x10);
      if (uVar6 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
  }
code_r0x0147c470:
  func_0x00f78af4();
code_r0x0147c474:
  uVar7 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar7,0);
  lVar10 = auVar20._8_8_;
  param_2 = auVar20._0_8_;
  *(ulong *)(puVar3 + -0xf0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xe8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xe0) = unaff_x24;
  *(undefined8 *)(puVar3 + -0xd8) = 0x3d22e88;
  *(long *)(puVar3 + -0xd0) = lVar13;
  *(ulong *)(puVar3 + -200) = uVar12;
  *(long *)(puVar3 + -0xc0) = lVar11;
  *(long *)(puVar3 + -0xb8) = lVar8;
  *(undefined1 **)(puVar3 + -0xb0) = puVar3 + -0x80;
  *(code **)(puVar3 + -0xa8) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2;
  puVar15 = puVar3 + -0xb0;
  uVar6 = param_1;
  if ((bRam0000000003eb48c2 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d653e8);
    bRam0000000003eb48c2 = 1;
  }
  if ((param_2 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), lVar10 != 0)
     ) {
    lVar13 = *(long *)(lVar10 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x25 = 0x3d22e88;
    unaff_x24 = 0x3d1f100;
    unaff_x23 = 0x3d653e8;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar7);
    uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_2,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = param_2;
    puVar16 = (undefined *)0x147c5b0;
    puVar3 = puVar3 + -0xf0;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar13 = auVar20._8_8_;
  uVar12 = auVar20._0_8_;
  *(ulong *)(puVar3 + -0x140) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x138) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x130) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x128) = 0x3d22e88;
  *(undefined8 *)(puVar3 + -0x120) = 0x3eb4000;
  *(long *)(puVar3 + -0x118) = lVar10;
  *(ulong *)(puVar3 + -0x110) = param_2;
  *(ulong *)(puVar3 + -0x108) = param_1;
  *(undefined1 **)(puVar3 + -0x100) = puVar15;
  *(code **)(puVar3 + -0xf8) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
  puVar15 = puVar3 + -0x100;
  param_1 = uVar6;
  if ((bRam0000000003eb48c3 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d653e0);
    bRam0000000003eb48c3 = 1;
  }
  if ((uVar12 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar12), lVar13 != 0))
  {
    lVar13 = *(long *)(lVar13 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x25 = 0x3d22e88;
    unaff_x24 = 0x3d1f100;
    unaff_x23 = 0x3d653e0;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar12,uVar7);
    uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar12);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(uVar12,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = uVar12;
    puVar16 = (undefined *)0x147c7a0;
    puVar3 = puVar3 + -0x140;
    param_1 = uVar6;
    param_2 = uVar12;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar8 = auVar20._8_8_;
  param_2 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x180) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x178) = 0x3d22e88;
  *(undefined8 *)(puVar3 + -0x170) = 0x3eb4000;
  *(long *)(puVar3 + -0x168) = lVar13;
  *(ulong *)(puVar3 + -0x160) = uVar12;
  *(ulong *)(puVar3 + -0x158) = uVar6;
  *(undefined1 **)(puVar3 + -0x150) = puVar15;
  *(code **)(puVar3 + -0x148) = Atlas_League_LeagueModeTester__TestPodium1stPlace;
  puVar15 = puVar3 + -0x150;
  uVar6 = param_1;
  if ((bRam0000000003eb48c4 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c4 = 1;
  }
  if ((param_2 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), lVar8 != 0))
  {
    lVar13 = *(long *)(lVar8 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = param_2;
    puVar16 = (undefined *)0x147c950;
    puVar3 = puVar3 + -0x180;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar13 = auVar20._8_8_;
  uVar12 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x1c0) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x1b8) = 0x3d22e88;
  *(undefined8 *)(puVar3 + -0x1b0) = 0x3eb4000;
  *(long *)(puVar3 + -0x1a8) = lVar8;
  *(ulong *)(puVar3 + -0x1a0) = param_2;
  *(ulong *)(puVar3 + -0x198) = param_1;
  *(undefined1 **)(puVar3 + -400) = puVar15;
  *(code **)(puVar3 + -0x188) = Atlas_League_LeagueModeTester__TestPodium2ndPlace;
  puVar15 = puVar3 + -400;
  param_1 = uVar6;
  if ((bRam0000000003eb48c5 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c5 = 1;
  }
  if ((uVar12 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar12), lVar13 != 0))
  {
    lVar13 = *(long *)(lVar13 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar12,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = uVar12;
    puVar16 = (undefined *)0x147cac0;
    puVar3 = puVar3 + -0x1c0;
    param_1 = uVar6;
    param_2 = uVar12;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar8 = auVar20._8_8_;
  param_2 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x200) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x1f8) = 0x3d22e88;
  *(undefined8 *)(puVar3 + -0x1f0) = 0x3eb4000;
  *(long *)(puVar3 + -0x1e8) = lVar13;
  *(ulong *)(puVar3 + -0x1e0) = uVar12;
  *(ulong *)(puVar3 + -0x1d8) = uVar6;
  *(undefined1 **)(puVar3 + -0x1d0) = puVar15;
  *(code **)(puVar3 + -0x1c8) = Atlas_League_LeagueModeTester__TestPodium6thPlace;
  puVar15 = puVar3 + -0x1d0;
  uVar6 = param_1;
  if ((bRam0000000003eb48c6 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c6 = 1;
  }
  if ((param_2 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), lVar8 != 0))
  {
    lVar13 = *(long *)(lVar8 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = param_2;
    puVar16 = (undefined *)0x147cc44;
    puVar3 = puVar3 + -0x200;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar13 = auVar20._8_8_;
  uVar12 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x240) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x238) = 0x3d22e88;
  *(undefined8 *)(puVar3 + -0x230) = 0x3eb4000;
  *(long *)(puVar3 + -0x228) = lVar8;
  *(ulong *)(puVar3 + -0x220) = param_2;
  *(ulong *)(puVar3 + -0x218) = param_1;
  *(undefined1 **)(puVar3 + -0x210) = puVar15;
  *(code **)(puVar3 + -0x208) = Atlas_League_LeagueModeTester__TestPodium11thPlace;
  puVar15 = puVar3 + -0x210;
  param_1 = uVar6;
  if ((bRam0000000003eb48c7 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c7 = 1;
  }
  if ((uVar12 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar12), lVar13 != 0))
  {
    lVar13 = *(long *)(lVar13 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar12,uVar7);
    uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar12);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(uVar12,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = uVar12;
    puVar16 = (undefined *)0x147ce04;
    puVar3 = puVar3 + -0x240;
    param_1 = uVar6;
    param_2 = uVar12;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar8 = auVar20._8_8_;
  param_2 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x280) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x278) = 0x3d22e88;
  *(undefined8 *)(puVar3 + -0x270) = 0x3eb4000;
  *(long *)(puVar3 + -0x268) = lVar13;
  *(ulong *)(puVar3 + -0x260) = uVar12;
  *(ulong *)(puVar3 + -600) = uVar6;
  *(undefined1 **)(puVar3 + -0x250) = puVar15;
  *(code **)(puVar3 + -0x248) = Atlas_League_LeagueModeTester__TestPodium12thPlace;
  puVar15 = puVar3 + -0x250;
  uVar6 = param_1;
  if ((bRam0000000003eb48c8 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c8 = 1;
  }
  uVar12 = param_4;
  if ((param_2 != 0) &&
     (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), uVar12 = param_4, lVar8 != 0))
  {
    lVar13 = *(long *)(lVar8 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,unaff_x22);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar7);
    uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_2,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = param_2;
    puVar16 = (undefined *)0x147d078;
    puVar3 = puVar3 + -0x280;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar10 = auVar20._8_8_;
  lVar13 = auVar20._0_8_;
  *(ulong *)(puVar3 + -0x2d0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x2c8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x2c0) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x2b8) = 0x3d22e88;
  *(undefined8 *)(puVar3 + -0x2b0) = 0x3eb4000;
  *(long *)(puVar3 + -0x2a8) = lVar8;
  *(ulong *)(puVar3 + -0x2a0) = param_2;
  *(ulong *)(puVar3 + -0x298) = param_1;
  *(undefined1 **)(puVar3 + -0x290) = puVar15;
  *(code **)(puVar3 + -0x288) = Atlas_League_LeagueModeTester__TestPodiumPlace;
  puVar15 = puVar3 + -0x290;
  unaff_x23 = 0x3eb4000;
  param_1 = uVar6;
  param_4 = uVar12;
  if ((bRam0000000003eb48c9 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c9 = 1;
  }
  if ((lVar13 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar13), lVar10 != 0))
  {
    unaff_x22 = *(ulong *)(lVar10 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x23 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d22e88;
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x22,unaff_x23);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar13,uVar7);
    uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar13);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar13,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = lVar13;
    puVar16 = (undefined *)0x147d2cc;
    puVar3 = puVar3 + -0x2d0;
    param_1 = uVar6;
    param_2 = uVar12;
    goto code_r0x0147c244;
  }
  auVar20 = func_0x00f78af4();
  lVar8 = auVar20._8_8_;
  param_2 = auVar20._0_8_;
  puVar4 = puVar3 + -0x340;
  *(ulong *)(puVar3 + -800) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x318) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x310) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x308) = 0x3eb4000;
  *(long *)(puVar3 + -0x300) = lVar10;
  *(long *)(puVar3 + -0x2f8) = lVar13;
  *(ulong *)(puVar3 + -0x2f0) = uVar12;
  *(ulong *)(puVar3 + -0x2e8) = uVar6;
  *(undefined1 **)(puVar3 + -0x2e0) = puVar15;
  *(code **)(puVar3 + -0x2d8) = Atlas_League_LeagueModeTester__TestPodiumAsIs;
  puVar15 = puVar3 + -0x2e0;
  unaff_x22 = 0x3eb4000;
  param_3 = param_1;
  if ((bRam0000000003eb48ca & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48ca = 1;
  }
  lVar13 = 0;
  uVar7 = unaff_x24;
  if (lVar8 != 0) {
    unaff_x25 = 0x3d21070;
    uVar7 = 0x3d25238;
    unaff_x24 = 0x3d25238;
    uVar9 = *(undefined8 *)(lVar8 + 0x38);
    *(undefined8 *)(puVar3 + -0x328) = uVar9;
    unaff_x26 = 7;
    iVar14 = -7;
    do {
      *(undefined8 *)(puVar3 + -0x330) = uVar9;
      uVar9 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar14,puVar3 + -0x330,0);
      *(undefined8 *)(puVar3 + -0x328) = uVar9;
      iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(puVar3 + -0x328,0);
      uVar9 = *(undefined8 *)(lVar8 + 0x38);
      if (iVar5 == 0) break;
      iVar5 = (int)unaff_x26;
      unaff_x26 = (ulong)(iVar5 - 1);
      iVar14 = iVar14 + 1;
    } while (1 < iVar5);
    unaff_x23 = *(undefined8 *)(puVar3 + -0x328);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar9,unaff_x23,0);
    *(undefined8 *)(puVar3 + -0x338) = uVar9;
    dVar18 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(puVar3 + -0x338,0);
    dVar19 = -dVar18;
    if (dVar18 != INFINITY) {
      dVar19 = dVar18;
    }
    unaff_x22 = (ulong)(uint)(int)dVar19;
    lVar13 = *(long *)(lVar8 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar19,0);
    param_3 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(lVar13,uVar9);
    uVar9 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (param_2 == 0) goto LAB_0147d510;
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar9);
    uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_2,uVar7);
    auVar20._8_8_ = 1;
    auVar20._0_8_ = param_2;
    puVar16 = (undefined *)0x147d4e4;
    puVar3 = puVar3 + -0x340;
    goto code_r0x0147c244;
  }
LAB_0147d510:
  iVar14 = (int)param_4;
  auVar20 = func_0x00f78af4();
  lVar8 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x380) = uVar7;
  *(undefined8 *)(puVar3 + -0x378) = unaff_x23;
  *(ulong *)(puVar3 + -0x370) = unaff_x22;
  *(long *)(puVar3 + -0x368) = lVar13;
  *(ulong *)(puVar3 + -0x360) = param_2;
  *(ulong *)(puVar3 + -0x358) = param_1;
  *(undefined1 **)(puVar3 + -0x350) = puVar15;
  *(code **)(puVar3 + -0x348) = Atlas_League_LeagueModeTester__TestDecayDemotion;
  if ((bRam0000000003eb48cb & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48cb = 1;
  }
  if (auVar20._8_8_ == 0) {
LAB_0147d610:
    auVar20 = func_0x00f78af4();
    return auVar20;
  }
  uVar7 = *(undefined8 *)(auVar20._8_8_ + 0x38);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar14,0);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar9,0);
  uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
  if (lVar8 == 0) goto LAB_0147d610;
  Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar8,uVar7);
  Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar8,uVar7);
  if (param_3 == 0) goto LAB_0147d610;
  uVar9 = *(undefined8 *)(puVar3 + -0x360);
  uVar1 = *(undefined8 *)(puVar3 + -0x370);
  uVar7 = *(undefined8 *)(puVar3 + -0x368);
  *(undefined8 *)(puVar3 + -0x360) = uVar9;
  *(undefined8 *)(puVar3 + -0x358) = *(undefined8 *)(puVar3 + -0x358);
  *(undefined8 *)(puVar3 + -0x350) = *(undefined8 *)(puVar3 + -0x350);
  *(undefined8 *)(puVar3 + -0x348) = *(undefined8 *)(puVar3 + -0x348);
  if (*(char *)(param_3 + 0x108) != '\0') {
    return ZEXT816(0);
  }
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined1 *)(param_3 + 0x110) = 0;
  lVar13 = Atlas_Save_SaveManager__get_SaveData(param_3,0);
  if (lVar13 == 0) {
code_r0x014eb554:
    lVar13 = func_0x00f78af4();
    puVar4 = puVar3 + -0x390;
    *(undefined8 *)(puVar3 + -0x390) = uVar1;
    *(undefined8 *)(puVar3 + -0x388) = uVar7;
    *(undefined8 *)(puVar3 + -0x380) = uVar9;
    *(ulong *)(puVar3 + -0x378) = param_3;
    *(undefined1 **)(puVar3 + -0x370) = puVar3 + -0x350;
    *(code **)(puVar3 + -0x368) = Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar15 = puVar3 + -0x370;
    uVar7 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar13);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x18) = uVar9;
      lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar13);
      if ((*(long *)(lVar13 + 0x58) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar13 + 0x58) + 0x10), lVar8 = lVar10, lVar11 != 0)) {
        auVar20 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar11,0);
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x30) = auVar20._0_8_;
          return auVar20;
        }
      }
    }
    pcVar17 = Atlas_Save_SaveManager__StartSave;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar6 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar6 & 1) == 0) {
      if ((*(long *)(param_3 + 0x98) == 0) ||
         (lVar13 = *(long *)(*(long *)(param_3 + 0x98) + 0x48), lVar13 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar13,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(param_3);
    auVar22._8_4_ = *(undefined4 *)(param_3 + 0xf8);
    auVar22._0_8_ = param_3;
    auVar22._12_4_ = 0;
    puVar15 = *(undefined1 **)(puVar3 + -0x350);
    pcVar17 = *(code **)(puVar3 + -0x348);
    lVar8 = *(long *)(puVar3 + -0x360);
    lVar13 = *(long *)(puVar3 + -0x358);
  }
  uVar9 = auVar22._8_8_;
  lVar10 = auVar22._0_8_;
  *(undefined8 *)(puVar4 + -0x30) = uVar1;
  *(undefined8 *)(puVar4 + -0x28) = uVar7;
  *(long *)(puVar4 + -0x20) = lVar8;
  *(long *)(puVar4 + -0x18) = lVar13;
  *(undefined1 **)(puVar4 + -0x10) = puVar15;
  *(code **)(puVar4 + -8) = pcVar17;
  cVar2 = *(char *)(lVar10 + 0x50);
  if (cVar2 == '\0') {
    *(undefined1 *)(lVar10 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    auVar20 = Atlas_Save_SaveManager__AsyncSave(lVar10,uVar9,0);
    uVar9 = auVar20._8_8_;
    *(long *)(lVar10 + 0x100) = auVar20._0_8_;
    *(undefined4 *)(lVar10 + 0x54) = 0;
    *(undefined1 *)(lVar10 + 0x110) = 0;
  }
  auVar23._1_7_ = 0;
  auVar23[0] = cVar2 == '\0';
  auVar23._8_8_ = uVar9;
  return auVar23;
}



// ============================================================
// RVA: 0x147c244 | Atlas.League.LeaguePlayerSave.set_ShowPodiumLatch
// ============================================================

/* WARNING: Possible PIC construction at 0x0147c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ce40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147d0b8) */
/* WARNING: Removing unreachable block (ram,0x0147ce44) */
/* WARNING: Removing unreachable block (ram,0x0147cc98) */
/* WARNING: Removing unreachable block (ram,0x0147cb14) */
/* WARNING: Removing unreachable block (ram,0x0147c9a4) */
/* WARNING: Removing unreachable block (ram,0x0147c838) */
/* WARNING: Removing unreachable block (ram,0x0147c83c) */
/* WARNING: Removing unreachable block (ram,0x0147c7e0) */
/* WARNING: Removing unreachable block (ram,0x0147c7e4) */
/* WARNING: Removing unreachable block (ram,0x0147c804) */
/* WARNING: Removing unreachable block (ram,0x0147c648) */
/* WARNING: Removing unreachable block (ram,0x0147c64c) */
/* WARNING: Removing unreachable block (ram,0x0147c5f0) */
/* WARNING: Removing unreachable block (ram,0x0147c5f4) */
/* WARNING: Removing unreachable block (ram,0x0147c614) */
/* WARNING: Removing unreachable block (ram,0x0147d310) */
/* WARNING: Removing unreachable block (ram,0x0147d314) */
/* WARNING: Removing unreachable block (ram,0x0147d31c) */
/* WARNING: Removing unreachable block (ram,0x0147d330) */
/* WARNING: Removing unreachable block (ram,0x0147d33c) */

undefined1  [16]
Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch
          (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x22;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  int iVar23;
  undefined8 unaff_x26;
  undefined1 *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  code *pcVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  puVar3 = &stack0xffffffffffffffd0;
  puVar24 = &stack0xfffffffffffffff0;
  uVar18 = 0x3eb4000;
  if ((bRam0000000003eb48df & 1) == 0) {
    func_0x00f78a20(0x3d6f230);
    bRam0000000003eb48df = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    param_4 = 0;
    param_3 = param_2;
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230);
    uVar7 = *(ulong *)(param_1 + 0x10);
    if (uVar7 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(uVar7 + 0x110) = 1;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar7;
      return auVar34;
    }
  }
  puVar25 = &Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement;
  auVar30 = func_0x00f78af4();
code_r0x0147c2bc:
  uVar14 = auVar30._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(ulong *)(puVar3 + -0x28) = uVar18;
  *(ulong *)(puVar3 + -0x20) = param_2;
  *(ulong *)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar24;
  *(undefined **)(puVar3 + -8) = puVar25;
  puVar24 = puVar3 + -0x10;
  unaff_x23 = 0x3d22e88;
  uVar7 = uVar14;
  uVar18 = param_3;
  if ((bRam0000000003eb48e4 & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48e4 = 1;
  }
  uVar8 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(uVar7,auVar30._8_8_);
  unaff_x22 = *(long *)(uVar14 + 0x10);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (unaff_x22 != 0) {
    uVar18 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
    param_4 = 0;
    auVar30 = Atlas_Save_SaveManager__GetIntData(unaff_x22,uVar8);
    if (auVar30._0_4_ <= (int)param_3) {
      return auVar30;
    }
    if (*(long *)(uVar14 + 0x10) != 0) {
      param_4 = 0;
      uVar18 = param_3;
      Atlas_Save_SaveManager__SetIntData(*(long *)(uVar14 + 0x10),uVar8);
      uVar7 = *(ulong *)(uVar14 + 0x10);
      if (uVar7 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
  }
  puVar25 = &Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI;
  auVar31 = func_0x00f78af4();
  puVar5 = puVar3 + -0x40;
  uVar7 = param_3;
code_r0x0147c3a4:
  do {
    lVar12 = auVar31._8_8_;
    lVar10 = auVar31._0_8_;
    *(long *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = uVar8;
    *(ulong *)(puVar5 + -0x20) = uVar7;
    *(ulong *)(puVar5 + -0x18) = uVar14;
    *(undefined1 **)(puVar5 + -0x10) = puVar24;
    *(undefined **)(puVar5 + -8) = puVar25;
    lVar20 = 0x3eb4000;
    param_1 = uVar18;
    if ((bRam0000000003eb48fb & 1) == 0) {
      func_0x00f78a20(0x3d6f1f0);
      bRam0000000003eb48fb = 1;
    }
    if (*(long *)(lVar10 + 0x10) != 0) {
      param_4 = 0;
      param_1 = uVar18;
      uVar8 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar10 + 0x10),/*STR('L_LB_P')*/ uRam0000000003d6f1f0);
      if (lVar12 != 0) {
        if (0 < *(int *)(lVar12 + 0x18)) {
          uVar18 = 0;
          lVar20 = lVar12 + 0x20;
          do {
            uVar8 = /*Atlas.League.LeaguePlayerSave$$ParseLeaderboardAIKey*/ func_0x0147f388(uVar8,uVar18);
            if (*(uint *)(lVar12 + 0x18) <= uVar18) goto code_r0x0147c474;
            if (*(long *)(lVar10 + 0x10) == 0) goto code_r0x0147c470;
            param_1 = (ulong)*(uint *)(lVar20 + uVar18 * 4);
            param_4 = 0;
            uVar8 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar10 + 0x10),uVar8);
            uVar18 = uVar18 + 1;
          } while ((long)uVar18 < (long)*(int *)(lVar12 + 0x18));
        }
        uVar7 = *(ulong *)(lVar10 + 0x10);
        if (uVar7 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
    }
code_r0x0147c470:
    func_0x00f78af4();
code_r0x0147c474:
    uVar8 = func_0x00f78b24();
    auVar30 = func_0x00f78ac0(uVar8,0);
    lVar13 = auVar30._8_8_;
    param_2 = auVar30._0_8_;
    puVar3 = puVar5 + -0x80;
    *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
    *(ulong *)(puVar5 + -0x78) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x68) = unaff_x23;
    *(long *)(puVar5 + -0x60) = lVar20;
    *(ulong *)(puVar5 + -0x58) = uVar18;
    *(long *)(puVar5 + -0x50) = lVar12;
    *(long *)(puVar5 + -0x48) = lVar10;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x38) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2;
    puVar24 = puVar5 + -0x40;
    uVar14 = param_1;
    if ((bRam0000000003eb48c2 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e8);
      bRam0000000003eb48c2 = 1;
    }
    if ((param_2 != 0) &&
       (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), lVar13 != 0)) {
      uVar8 = *(undefined8 *)(lVar13 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x25 = 0x3d22e88;
      unaff_x24 = 0x3d1f100;
      unaff_x23 = 0x3d653e8;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,unaff_x22,0);
      uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar8);
      uVar8 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_2,uVar8);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(param_2,1);
      uVar18 = 0;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = param_2;
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) {
        param_3 = 0;
        puVar25 = (undefined *)0x147c5f0;
        goto code_r0x0147c2bc;
      }
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
      auVar31._8_8_ = uVar8;
      auVar31._0_8_ = param_2;
      /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar8,/*Field$<PrivateImplementationDetails>.53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D*/ uRam0000000003d653e8,0);
      uVar18 = 0x14;
      puVar25 = &UNK_0147c648;
      puVar5 = puVar5 + -0x80;
      uVar14 = param_1;
      uVar7 = param_2;
      goto code_r0x0147c3a4;
    }
    auVar30 = func_0x00f78af4();
    lVar20 = auVar30._8_8_;
    uVar7 = auVar30._0_8_;
    puVar3 = puVar5 + -0xd0;
    *(undefined8 *)(puVar5 + -0xd0) = unaff_x26;
    *(ulong *)(puVar5 + -200) = unaff_x25;
    *(undefined8 *)(puVar5 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar5 + -0xb8) = unaff_x23;
    *(undefined8 *)(puVar5 + -0xb0) = 0x3eb4000;
    *(long *)(puVar5 + -0xa8) = lVar13;
    *(ulong *)(puVar5 + -0xa0) = param_2;
    *(ulong *)(puVar5 + -0x98) = param_1;
    *(undefined1 **)(puVar5 + -0x90) = puVar24;
    *(code **)(puVar5 + -0x88) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
    puVar24 = puVar5 + -0x90;
    param_1 = uVar14;
    if ((bRam0000000003eb48c3 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e0);
      bRam0000000003eb48c3 = 1;
    }
    if ((uVar7 == 0) || (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar7), lVar20 == 0))
    {
      auVar30 = func_0x00f78af4();
      uVar19 = auVar30._8_8_;
      param_2 = auVar30._0_8_;
      puVar3 = puVar5 + -0x110;
      *(undefined8 *)(puVar5 + -0x110) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x108) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x100) = 0x3eb4000;
      *(long *)(puVar5 + -0xf8) = lVar20;
      *(ulong *)(puVar5 + -0xf0) = uVar7;
      *(ulong *)(puVar5 + -0xe8) = uVar14;
      *(undefined1 **)(puVar5 + -0xe0) = puVar24;
      *(code **)(puVar5 + -0xd8) = Atlas_League_LeagueModeTester__TestPodium1stPlace;
      puVar24 = puVar5 + -0xe0;
      unaff_x22 = 0x3eb4000;
      uVar7 = param_1;
      if ((bRam0000000003eb48c4 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c4 = 1;
      }
      uVar8 = unaff_x23;
      if ((param_2 != 0) &&
         (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), uVar19 != 0)) {
        uVar8 = *(undefined8 *)(uVar19 + 0x38);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x23 = 0x3d22e88;
        uVar7 = 0;
        /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,unaff_x22);
        uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar8);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(param_2,1);
        uVar8 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_2,uVar8);
        uVar18 = 0;
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = param_2;
          param_3 = 0;
          puVar25 = (undefined *)0x147c9a4;
          goto code_r0x0147c2bc;
        }
        uVar19 = uVar18;
        uVar8 = unaff_x23;
        if (param_1 != 0) {
          uVar11 = *(undefined8 *)(puVar5 + -0xe0);
          uVar26 = *(undefined8 *)(puVar5 + -0xd8);
          uVar17 = *(undefined8 *)(puVar5 + -0xf0);
          uVar16 = *(undefined8 *)(puVar5 + -0xe8);
          uVar21 = *(undefined8 *)(puVar5 + -0x100);
          uVar8 = *(undefined8 *)(puVar5 + -0xf8);
          puVar4 = puVar5 + -0xd0;
          goto code_r0x014eb4e0;
        }
      }
      auVar30 = func_0x00f78af4();
      uVar18 = auVar30._8_8_;
      uVar14 = auVar30._0_8_;
      puVar3 = puVar5 + -0x150;
      *(undefined8 *)(puVar5 + -0x150) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x148) = uVar8;
      *(long *)(puVar5 + -0x140) = unaff_x22;
      *(ulong *)(puVar5 + -0x138) = uVar19;
      *(ulong *)(puVar5 + -0x130) = param_2;
      *(ulong *)(puVar5 + -0x128) = param_1;
      *(undefined1 **)(puVar5 + -0x120) = puVar24;
      *(code **)(puVar5 + -0x118) = Atlas_League_LeagueModeTester__TestPodium2ndPlace;
      puVar24 = puVar5 + -0x120;
      unaff_x22 = 0x3eb4000;
      param_1 = uVar7;
      if ((bRam0000000003eb48c5 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c5 = 1;
      }
      if ((uVar14 != 0) &&
         (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar14), uVar18 != 0)) {
        uVar11 = *(undefined8 *)(uVar18 + 0x38);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = 0x3d22e88;
        unaff_x23 = 0x3d22e88;
        param_1 = 0;
        /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar11,unaff_x22);
        uVar11 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar14,uVar11);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(uVar14,1);
        uVar11 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar14);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(uVar14,uVar11);
        uVar18 = 0;
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar14;
          param_3 = 1;
          puVar25 = (undefined *)0x147cb14;
          param_1 = uVar7;
          param_2 = uVar14;
          goto code_r0x0147c2bc;
        }
        if (uVar7 != 0) {
          uVar11 = *(undefined8 *)(puVar5 + -0x120);
          uVar26 = *(undefined8 *)(puVar5 + -0x118);
          uVar17 = *(undefined8 *)(puVar5 + -0x130);
          uVar16 = *(undefined8 *)(puVar5 + -0x128);
          uVar21 = *(undefined8 *)(puVar5 + -0x140);
          uVar8 = *(undefined8 *)(puVar5 + -0x138);
          puVar4 = puVar5 + -0x110;
          param_1 = uVar7;
          goto code_r0x014eb4e0;
        }
      }
      auVar30 = func_0x00f78af4();
      uVar19 = auVar30._8_8_;
      param_2 = auVar30._0_8_;
      puVar3 = puVar5 + -400;
      *(undefined8 *)(puVar5 + -400) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x188) = uVar8;
      *(long *)(puVar5 + -0x180) = unaff_x22;
      *(ulong *)(puVar5 + -0x178) = uVar18;
      *(ulong *)(puVar5 + -0x170) = uVar14;
      *(ulong *)(puVar5 + -0x168) = uVar7;
      *(undefined1 **)(puVar5 + -0x160) = puVar24;
      *(code **)(puVar5 + -0x158) = Atlas_League_LeagueModeTester__TestPodium6thPlace;
      puVar24 = puVar5 + -0x160;
      unaff_x22 = 0x3eb4000;
      uVar7 = param_1;
      if ((bRam0000000003eb48c6 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c6 = 1;
      }
      if ((param_2 != 0) &&
         (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), uVar19 != 0)) {
        uVar11 = *(undefined8 *)(uVar19 + 0x38);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = 0x3d22e88;
        unaff_x23 = 0x3d22e88;
        uVar7 = 0;
        /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar11,unaff_x22);
        uVar11 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar11);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(param_2,1);
        uVar11 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_2,uVar11);
        uVar18 = 0;
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = param_2;
          param_3 = 5;
          puVar25 = (undefined *)0x147cc98;
          goto code_r0x0147c2bc;
        }
        uVar19 = uVar18;
        if (param_1 != 0) {
          uVar11 = *(undefined8 *)(puVar5 + -0x160);
          uVar26 = *(undefined8 *)(puVar5 + -0x158);
          uVar17 = *(undefined8 *)(puVar5 + -0x170);
          uVar16 = *(undefined8 *)(puVar5 + -0x168);
          uVar21 = *(undefined8 *)(puVar5 + -0x180);
          uVar8 = *(undefined8 *)(puVar5 + -0x178);
          puVar4 = puVar5 + -0x150;
          goto code_r0x014eb4e0;
        }
      }
      auVar30 = func_0x00f78af4();
      uVar18 = auVar30._8_8_;
      uVar9 = auVar30._0_8_;
      puVar3 = puVar5 + -0x1d0;
      *(undefined8 *)(puVar5 + -0x1d0) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x1c8) = uVar8;
      *(long *)(puVar5 + -0x1c0) = unaff_x22;
      *(ulong *)(puVar5 + -0x1b8) = uVar19;
      *(ulong *)(puVar5 + -0x1b0) = param_2;
      *(ulong *)(puVar5 + -0x1a8) = param_1;
      *(undefined1 **)(puVar5 + -0x1a0) = puVar24;
      *(code **)(puVar5 + -0x198) = Atlas_League_LeagueModeTester__TestPodium11thPlace;
      puVar24 = puVar5 + -0x1a0;
      unaff_x22 = 0x3eb4000;
      uVar14 = uVar7;
      if ((bRam0000000003eb48c7 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c7 = 1;
      }
      if ((uVar9 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar9), uVar18 != 0)
         ) {
        uVar11 = *(undefined8 *)(uVar18 + 0x38);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = 0x3d22e88;
        unaff_x23 = 0x3d22e88;
        uVar14 = 0;
        /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar11,unaff_x22);
        uVar11 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar9,uVar11);
        uVar11 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar9);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(uVar9,uVar11);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(uVar9,1);
        uVar18 = 0;
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_1 = uVar7;
        if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar9;
          param_3 = 0xb;
          puVar25 = (undefined *)0x147ce44;
          param_2 = uVar9;
          goto code_r0x0147c2bc;
        }
        if (uVar7 != 0) {
          uVar11 = *(undefined8 *)(puVar5 + -0x1a0);
          uVar26 = *(undefined8 *)(puVar5 + -0x198);
          uVar17 = *(undefined8 *)(puVar5 + -0x1b0);
          uVar16 = *(undefined8 *)(puVar5 + -0x1a8);
          uVar21 = *(undefined8 *)(puVar5 + -0x1c0);
          uVar8 = *(undefined8 *)(puVar5 + -0x1b8);
          puVar4 = puVar5 + -400;
          goto code_r0x014eb4e0;
        }
      }
      auVar30 = func_0x00f78af4();
      uVar19 = auVar30._8_8_;
      param_2 = auVar30._0_8_;
      puVar3 = puVar5 + -0x210;
      *(undefined8 *)(puVar5 + -0x210) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x208) = uVar8;
      *(long *)(puVar5 + -0x200) = unaff_x22;
      *(ulong *)(puVar5 + -0x1f8) = uVar18;
      *(ulong *)(puVar5 + -0x1f0) = uVar9;
      *(ulong *)(puVar5 + -0x1e8) = uVar7;
      *(undefined1 **)(puVar5 + -0x1e0) = puVar24;
      *(code **)(puVar5 + -0x1d8) = Atlas_League_LeagueModeTester__TestPodium12thPlace;
      puVar24 = puVar5 + -0x1e0;
      param_1 = uVar14;
      if ((bRam0000000003eb48c8 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c8 = 1;
      }
      param_3 = param_4;
      lVar20 = 0x3eb4000;
      if ((param_2 != 0) &&
         (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_2), param_3 = param_4,
         uVar19 != 0)) {
        uVar11 = *(undefined8 *)(uVar19 + 0x38);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = 0x3d22e88;
        unaff_x23 = 0x3d22e88;
        param_1 = 0;
        /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar11,unaff_x22);
        uVar11 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_2,uVar11);
        uVar11 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_2);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_2,uVar11);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(param_2,1);
        uVar18 = 0;
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = param_2;
          param_3 = 0xc;
          puVar25 = (undefined *)0x147d0b8;
          param_1 = uVar14;
          goto code_r0x0147c2bc;
        }
        param_3 = param_4;
        uVar19 = uVar18;
        lVar20 = unaff_x22;
        if (uVar14 != 0) {
          uVar11 = *(undefined8 *)(puVar5 + -0x1e0);
          uVar26 = *(undefined8 *)(puVar5 + -0x1d8);
          uVar17 = *(undefined8 *)(puVar5 + -0x1f0);
          uVar16 = *(undefined8 *)(puVar5 + -0x1e8);
          uVar21 = *(undefined8 *)(puVar5 + -0x200);
          uVar8 = *(undefined8 *)(puVar5 + -0x1f8);
          puVar4 = puVar5 + -0x1d0;
          param_1 = uVar14;
          goto code_r0x014eb4e0;
        }
      }
      auVar30 = func_0x00f78af4();
      unaff_x22 = auVar30._8_8_;
      uVar18 = auVar30._0_8_;
      puVar3 = puVar5 + -0x260;
      *(undefined8 *)(puVar5 + -0x260) = unaff_x26;
      *(ulong *)(puVar5 + -600) = unaff_x25;
      *(undefined8 *)(puVar5 + -0x250) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x248) = uVar8;
      *(long *)(puVar5 + -0x240) = lVar20;
      *(ulong *)(puVar5 + -0x238) = uVar19;
      *(ulong *)(puVar5 + -0x230) = param_2;
      *(ulong *)(puVar5 + -0x228) = uVar14;
      *(undefined1 **)(puVar5 + -0x220) = puVar24;
      *(code **)(puVar5 + -0x218) = Atlas_League_LeagueModeTester__TestPodiumPlace;
      puVar24 = puVar5 + -0x220;
      unaff_x23 = 0x3eb4000;
      uVar7 = param_1;
      param_4 = param_3;
      if ((bRam0000000003eb48c9 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48c9 = 1;
      }
      if ((uVar18 != 0) &&
         (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar18), unaff_x22 != 0)) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x23 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x24 = 0x3d22e88;
        uVar7 = 0;
        /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,unaff_x23);
        uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar18,uVar8);
        uVar8 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar18);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(uVar18,uVar8);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(uVar18,1);
        unaff_x22 = 0;
        unaff_x25 = (ulong)((int)param_3 - 1);
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) {
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar18;
          puVar25 = (undefined *)0x147d310;
          param_2 = param_3;
          goto code_r0x0147c2bc;
        }
        if (param_1 != 0) {
          uVar11 = *(undefined8 *)(puVar5 + -0x220);
          uVar26 = *(undefined8 *)(puVar5 + -0x218);
          uVar17 = *(undefined8 *)(puVar5 + -0x230);
          uVar16 = *(undefined8 *)(puVar5 + -0x228);
          uVar21 = *(undefined8 *)(puVar5 + -0x240);
          uVar8 = *(undefined8 *)(puVar5 + -0x238);
          puVar4 = puVar5 + -0x210;
          goto code_r0x014eb4e0;
        }
      }
      auVar30 = func_0x00f78af4();
      lVar10 = auVar30._8_8_;
      lVar20 = auVar30._0_8_;
      puVar4 = puVar5 + -0x2d0;
      *(undefined8 *)(puVar5 + -0x2b0) = unaff_x26;
      *(ulong *)(puVar5 + -0x2a8) = unaff_x25;
      *(undefined8 *)(puVar5 + -0x2a0) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x298) = unaff_x23;
      *(long *)(puVar5 + -0x290) = unaff_x22;
      *(ulong *)(puVar5 + -0x288) = uVar18;
      *(ulong *)(puVar5 + -0x280) = param_3;
      *(ulong *)(puVar5 + -0x278) = param_1;
      *(undefined1 **)(puVar5 + -0x270) = puVar24;
      *(code **)(puVar5 + -0x268) = Atlas_League_LeagueModeTester__TestPodiumAsIs;
      uVar18 = 0x3eb4000;
      param_1 = uVar7;
      if ((bRam0000000003eb48ca & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        func_0x00f78a20(0x3d25238);
        bRam0000000003eb48ca = 1;
      }
      iVar15 = (int)param_4;
      uVar8 = 0;
      if (lVar10 == 0) goto LAB_0147d510;
      unaff_x24 = 0x3d25238;
      uVar8 = *(undefined8 *)(lVar10 + 0x38);
      *(undefined8 *)(puVar5 + -0x2b8) = uVar8;
      iVar22 = -7;
      iVar23 = 7;
      goto LAB_0147d3e4;
    }
    uVar8 = *(undefined8 *)(lVar20 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x25 = 0x3d22e88;
    unaff_x24 = 0x3d1f100;
    unaff_x23 = 0x3d653e0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,unaff_x22,0);
    uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar7,uVar8);
    uVar8 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar7);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(uVar7,uVar8);
    Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(uVar7,1);
    uVar18 = 0;
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (0 < *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8)) break;
    uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
    auVar31._8_8_ = uVar8;
    auVar31._0_8_ = uVar7;
    /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar8,/*Field$<PrivateImplementationDetails>.3A9C421558546FFEC2136920883D1BF2D1C64AF2A1767DE97B667D62F2B054DF*/ uRam0000000003d653e0,0);
    uVar18 = 0;
    puVar25 = &UNK_0147c838;
    puVar5 = puVar5 + -0xd0;
  } while( true );
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar7;
  param_3 = 0;
  puVar25 = (undefined *)0x147c7e0;
  param_1 = uVar14;
  param_2 = uVar7;
  goto code_r0x0147c2bc;
  while( true ) {
    iVar22 = iVar22 + 1;
    bVar1 = iVar23 < 2;
    iVar23 = iVar23 + -1;
    if (bVar1) break;
LAB_0147d3e4:
    *(undefined8 *)(puVar5 + -0x2c0) = uVar8;
    uVar8 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar22,puVar5 + -0x2c0,0);
    *(undefined8 *)(puVar5 + -0x2b8) = uVar8;
    iVar6 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(puVar5 + -0x2b8,0);
    iVar15 = (int)param_4;
    uVar8 = *(undefined8 *)(lVar10 + 0x38);
    if (iVar6 == 0) break;
  }
  unaff_x23 = *(undefined8 *)(puVar5 + -0x2b8);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar8,unaff_x23,0);
  *(undefined8 *)(puVar5 + -0x2c8) = uVar8;
  dVar28 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(puVar5 + -0x2c8,0);
  dVar29 = -dVar28;
  if (dVar28 != INFINITY) {
    dVar29 = dVar28;
  }
  uVar18 = (ulong)(uint)(int)dVar29;
  uVar8 = *(undefined8 *)(lVar10 + 0x38);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar29,0);
  param_1 = 0;
  /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,uVar11);
  uVar11 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
  if (lVar20 != 0) {
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar20,uVar11);
    uVar11 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar20);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar20,uVar11);
    Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar20,1);
    if (uVar7 != 0) {
      auVar30 = Atlas_Save_SaveManager__StartSave(uVar7,0);
      return auVar30;
    }
  }
LAB_0147d510:
  auVar30 = func_0x00f78af4();
  lVar10 = auVar30._0_8_;
  *(undefined8 *)(puVar5 + -0x310) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x308) = unaff_x23;
  *(ulong *)(puVar5 + -0x300) = uVar18;
  *(undefined8 *)(puVar5 + -0x2f8) = uVar8;
  *(long *)(puVar5 + -0x2f0) = lVar20;
  *(ulong *)(puVar5 + -0x2e8) = uVar7;
  *(undefined1 **)(puVar5 + -0x2e0) = puVar5 + -0x270;
  *(code **)(puVar5 + -0x2d8) = Atlas_League_LeagueModeTester__TestDecayDemotion;
  if ((bRam0000000003eb48cb & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48cb = 1;
  }
  if (auVar30._8_8_ == 0) {
LAB_0147d610:
    auVar30 = func_0x00f78af4();
    return auVar30;
  }
  uVar8 = *(undefined8 *)(auVar30._8_8_ + 0x38);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar15,0);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,uVar11,0);
  uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
  if (lVar10 == 0) goto LAB_0147d610;
  Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar10,uVar8);
  Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar10,uVar8);
  if (param_1 == 0) goto LAB_0147d610;
  uVar11 = *(undefined8 *)(puVar5 + -0x2e0);
  uVar26 = *(undefined8 *)(puVar5 + -0x2d8);
  uVar17 = *(undefined8 *)(puVar5 + -0x2f0);
  uVar16 = *(undefined8 *)(puVar5 + -0x2e8);
  uVar21 = *(undefined8 *)(puVar5 + -0x300);
  uVar8 = *(undefined8 *)(puVar5 + -0x2f8);
code_r0x014eb4e0:
  *(undefined8 *)(puVar4 + -0x20) = uVar17;
  *(undefined8 *)(puVar4 + -0x18) = uVar16;
  *(undefined8 *)(puVar4 + -0x10) = uVar11;
  *(undefined8 *)(puVar4 + -8) = uVar26;
  if (*(char *)(param_1 + 0x108) != '\0') {
    return ZEXT816(0);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  lVar20 = Atlas_Save_SaveManager__get_SaveData(param_1,0);
  if (lVar20 == 0) {
code_r0x014eb554:
    lVar20 = func_0x00f78af4();
    puVar5 = puVar4 + -0x50;
    *(undefined8 *)(puVar4 + -0x50) = uVar21;
    *(undefined8 *)(puVar4 + -0x48) = uVar8;
    *(undefined8 *)(puVar4 + -0x40) = uVar17;
    *(ulong *)(puVar4 + -0x38) = param_1;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x28) = Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar24 = puVar4 + -0x30;
    uVar8 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar20);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x18) = uVar11;
      lVar12 = Atlas_Save_SaveManager__get_SaveData(lVar20);
      if ((*(long *)(lVar20 + 0x58) != 0) &&
         (lVar13 = *(long *)(*(long *)(lVar20 + 0x58) + 0x10), lVar10 = lVar12, lVar13 != 0)) {
        auVar30 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar13,0);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x30) = auVar30._0_8_;
          return auVar30;
        }
      }
    }
    pcVar27 = Atlas_Save_SaveManager__StartSave;
    auVar32 = func_0x00f78af4();
  }
  else {
    uVar18 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar18 & 1) == 0) {
      if ((*(long *)(param_1 + 0x98) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_1 + 0x98) + 0x48), lVar20 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar20,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(param_1);
    auVar32._8_4_ = *(undefined4 *)(param_1 + 0xf8);
    auVar32._0_8_ = param_1;
    auVar32._12_4_ = 0;
    puVar24 = *(undefined1 **)(puVar4 + -0x10);
    pcVar27 = *(code **)(puVar4 + -8);
    lVar10 = *(long *)(puVar4 + -0x20);
    lVar20 = *(long *)(puVar4 + -0x18);
    puVar5 = puVar4;
  }
  uVar11 = auVar32._8_8_;
  lVar12 = auVar32._0_8_;
  *(undefined8 *)(puVar5 + -0x30) = uVar21;
  *(undefined8 *)(puVar5 + -0x28) = uVar8;
  *(long *)(puVar5 + -0x20) = lVar10;
  *(long *)(puVar5 + -0x18) = lVar20;
  *(undefined1 **)(puVar5 + -0x10) = puVar24;
  *(code **)(puVar5 + -8) = pcVar27;
  cVar2 = *(char *)(lVar12 + 0x50);
  if (cVar2 == '\0') {
    *(undefined1 *)(lVar12 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    auVar30 = Atlas_Save_SaveManager__AsyncSave(lVar12,uVar11,0);
    uVar11 = auVar30._8_8_;
    *(long *)(lVar12 + 0x100) = auVar30._0_8_;
    *(undefined4 *)(lVar12 + 0x54) = 0;
    *(undefined1 *)(lVar12 + 0x110) = 0;
  }
  auVar33._1_7_ = 0;
  auVar33[0] = cVar2 == '\0';
  auVar33._8_8_ = uVar11;
  return auVar33;
}



// ============================================================
// RVA: 0x147c2bc | Atlas.League.LeaguePlayerSave.SetPlayerDayPlacement
// ============================================================

/* WARNING: Possible PIC construction at 0x0147c644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147c648) */
/* WARNING: Removing unreachable block (ram,0x0147c64c) */
/* WARNING: Removing unreachable block (ram,0x0147c838) */
/* WARNING: Removing unreachable block (ram,0x0147c83c) */

undefined1  [16]
Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement
          (ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  int iVar24;
  undefined8 unaff_x26;
  undefined1 *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  code *pcVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  puVar25 = &stack0xfffffffffffffff0;
  uVar22 = 0x3d22e88;
  uVar7 = param_1;
  uVar12 = param_3;
  if ((bRam0000000003eb48e4 & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48e4 = 1;
  }
  uVar8 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(uVar7,param_2);
  lVar18 = *(long *)(param_1 + 0x10);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar18 != 0) {
    uVar12 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
    param_4 = 0;
    auVar31 = Atlas_Save_SaveManager__GetIntData(lVar18,uVar8);
    if (auVar31._0_4_ <= (int)param_3) {
      return auVar31;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      param_4 = 0;
      uVar12 = param_3;
      Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),uVar8);
      uVar7 = *(ulong *)(param_1 + 0x10);
      if (uVar7 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
        *(undefined1 *)(uVar7 + 0x110) = 1;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar7;
        return auVar34;
      }
    }
  }
  puVar26 = &Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI;
  auVar31 = func_0x00f78af4();
  puVar5 = &stack0xffffffffffffffc0;
code_r0x0147c3a4:
  do {
    lVar10 = auVar31._8_8_;
    lVar9 = auVar31._0_8_;
    *(long *)(puVar5 + -0x30) = lVar18;
    *(undefined8 *)(puVar5 + -0x28) = uVar8;
    *(ulong *)(puVar5 + -0x20) = param_3;
    *(ulong *)(puVar5 + -0x18) = param_1;
    *(undefined1 **)(puVar5 + -0x10) = puVar25;
    *(undefined **)(puVar5 + -8) = puVar26;
    lVar18 = 0x3eb4000;
    uVar13 = uVar12;
    if ((bRam0000000003eb48fb & 1) == 0) {
      func_0x00f78a20(0x3d6f1f0);
      bRam0000000003eb48fb = 1;
    }
    if (*(long *)(lVar9 + 0x10) != 0) {
      param_4 = 0;
      uVar13 = uVar12;
      uVar8 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar9 + 0x10),/*STR('L_LB_P')*/ uRam0000000003d6f1f0);
      if (lVar10 != 0) {
        if (0 < *(int *)(lVar10 + 0x18)) {
          uVar12 = 0;
          lVar18 = lVar10 + 0x20;
          do {
            uVar8 = /*Atlas.League.LeaguePlayerSave$$ParseLeaderboardAIKey*/ func_0x0147f388(uVar8,uVar12);
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto code_r0x0147c474;
            if (*(long *)(lVar9 + 0x10) == 0) goto code_r0x0147c470;
            uVar13 = (ulong)*(uint *)(lVar18 + uVar12 * 4);
            param_4 = 0;
            uVar8 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar9 + 0x10),uVar8);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)*(int *)(lVar10 + 0x18));
        }
        uVar7 = *(ulong *)(lVar9 + 0x10);
        if (uVar7 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
    }
code_r0x0147c470:
    func_0x00f78af4();
code_r0x0147c474:
    uVar8 = func_0x00f78b24();
    auVar31 = func_0x00f78ac0(uVar8,0);
    lVar11 = auVar31._8_8_;
    uVar7 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
    *(ulong *)(puVar5 + -0x78) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x68) = uVar22;
    *(long *)(puVar5 + -0x60) = lVar18;
    *(ulong *)(puVar5 + -0x58) = uVar12;
    *(long *)(puVar5 + -0x50) = lVar10;
    *(long *)(puVar5 + -0x48) = lVar9;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x38) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2;
    puVar25 = puVar5 + -0x40;
    param_1 = uVar13;
    if ((bRam0000000003eb48c2 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e8);
      bRam0000000003eb48c2 = 1;
    }
    if ((uVar7 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(uVar7), lVar11 != 0))
    {
      uVar8 = *(undefined8 *)(lVar11 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar18 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x25 = 0x3d22e88;
      unaff_x24 = 0x3d1f100;
      uVar22 = 0x3d653e8;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,lVar18,0);
      uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(uVar7,uVar8);
      uVar8 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(uVar7);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(uVar7,uVar8);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(uVar7,1);
      iVar14 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar14) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(uVar7,iVar14,0);
        iVar21 = 0;
        do {
          param_4 = uVar13;
          Atlas_League_LeagueModeSave__SaveAIDayPlacement(iVar21,iVar14,iVar21);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0xc);
        iVar14 = iVar14 + 1;
        lVar18 = 0xc;
      }
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
      auVar31._8_8_ = uVar8;
      auVar31._0_8_ = uVar7;
      /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar8,/*Field$<PrivateImplementationDetails>.53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D*/ uRam0000000003d653e8,0);
      uVar12 = 0x14;
      puVar26 = &UNK_0147c648;
      puVar5 = puVar5 + -0x80;
      param_1 = uVar13;
      param_3 = uVar7;
      goto code_r0x0147c3a4;
    }
    auVar31 = func_0x00f78af4();
    lVar18 = auVar31._8_8_;
    param_3 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -0xd0) = unaff_x26;
    *(ulong *)(puVar5 + -200) = unaff_x25;
    *(undefined8 *)(puVar5 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar5 + -0xb8) = uVar22;
    *(undefined8 *)(puVar5 + -0xb0) = 0x3eb4000;
    *(long *)(puVar5 + -0xa8) = lVar11;
    *(ulong *)(puVar5 + -0xa0) = uVar7;
    *(ulong *)(puVar5 + -0x98) = uVar13;
    *(undefined1 **)(puVar5 + -0x90) = puVar25;
    *(code **)(puVar5 + -0x88) = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
    puVar25 = puVar5 + -0x90;
    uVar12 = param_1;
    if ((bRam0000000003eb48c3 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e0);
      bRam0000000003eb48c3 = 1;
    }
    if ((param_3 == 0) ||
       (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(param_3), lVar18 == 0)) break;
    uVar8 = *(undefined8 *)(lVar18 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar18 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x25 = 0x3d22e88;
    unaff_x24 = 0x3d1f100;
    uVar22 = 0x3d653e0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,lVar18,0);
    uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(param_3,uVar8);
    uVar8 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(param_3);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(param_3,uVar8);
    Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(param_3,1);
    iVar14 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar14) break;
      Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(param_3,iVar14,0);
      iVar21 = 0;
      do {
        param_4 = param_1;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(iVar21,iVar14,iVar21);
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0xc);
      iVar14 = iVar14 + 1;
      lVar18 = 0xc;
    }
    uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
    auVar31._8_8_ = uVar8;
    auVar31._0_8_ = param_3;
    /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar8,/*Field$<PrivateImplementationDetails>.3A9C421558546FFEC2136920883D1BF2D1C64AF2A1767DE97B667D62F2B054DF*/ uRam0000000003d653e0,0);
    uVar12 = 0;
    puVar26 = &UNK_0147c838;
    puVar5 = puVar5 + -0xd0;
  } while( true );
  auVar31 = func_0x00f78af4();
  uVar13 = auVar31._8_8_;
  lVar9 = auVar31._0_8_;
  *(undefined8 *)(puVar5 + -0x110) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x108) = uVar22;
  *(undefined8 *)(puVar5 + -0x100) = 0x3eb4000;
  *(long *)(puVar5 + -0xf8) = lVar18;
  *(ulong *)(puVar5 + -0xf0) = param_3;
  *(ulong *)(puVar5 + -0xe8) = param_1;
  *(undefined1 **)(puVar5 + -0xe0) = puVar25;
  *(code **)(puVar5 + -0xd8) = Atlas_League_LeagueModeTester__TestPodium1stPlace;
  uVar8 = 0x3eb4000;
  uVar7 = uVar12;
  if ((bRam0000000003eb48c4 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c4 = 1;
  }
  if ((lVar9 == 0) || (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar9), uVar13 == 0)) {
LAB_0147c9cc:
    auVar31 = func_0x00f78af4();
    uVar17 = auVar31._8_8_;
    lVar18 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -0x150) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x148) = uVar22;
    *(undefined8 *)(puVar5 + -0x140) = uVar8;
    *(ulong *)(puVar5 + -0x138) = uVar13;
    *(long *)(puVar5 + -0x130) = lVar9;
    *(ulong *)(puVar5 + -0x128) = uVar12;
    *(undefined1 **)(puVar5 + -0x120) = puVar5 + -0xe0;
    *(code **)(puVar5 + -0x118) = Atlas_League_LeagueModeTester__TestPodium2ndPlace;
    uVar8 = 0x3eb4000;
    uVar12 = uVar7;
    if ((bRam0000000003eb48c5 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c5 = 1;
    }
    if ((lVar18 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar18), uVar17 != 0)
       ) {
      uVar16 = *(undefined8 *)(uVar17 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = 0x3d22e88;
      uVar12 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar18,uVar16);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar18,1);
      uVar16 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar18);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar18,uVar16);
      uVar17 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar17) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar18,uVar17,1);
        uVar12 = 0;
        param_4 = uVar7;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar17);
        uVar17 = (ulong)((int)uVar17 + 1);
      }
      if (uVar7 != 0) {
        uVar8 = *(undefined8 *)(puVar5 + -0x120);
        uVar27 = *(undefined8 *)(puVar5 + -0x118);
        uVar16 = *(undefined8 *)(puVar5 + -0x130);
        uVar15 = *(undefined8 *)(puVar5 + -0x128);
        uVar19 = *(undefined8 *)(puVar5 + -0x140);
        uVar22 = *(undefined8 *)(puVar5 + -0x138);
        puVar4 = puVar5 + -0x110;
        goto code_r0x014eb4e0;
      }
    }
    auVar31 = func_0x00f78af4();
    uVar13 = auVar31._8_8_;
    lVar9 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -400) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x188) = uVar22;
    *(undefined8 *)(puVar5 + -0x180) = uVar8;
    *(ulong *)(puVar5 + -0x178) = uVar17;
    *(long *)(puVar5 + -0x170) = lVar18;
    *(ulong *)(puVar5 + -0x168) = uVar7;
    *(undefined1 **)(puVar5 + -0x160) = puVar5 + -0x120;
    *(code **)(puVar5 + -0x158) = Atlas_League_LeagueModeTester__TestPodium6thPlace;
    uVar8 = 0x3eb4000;
    uVar7 = uVar12;
    if ((bRam0000000003eb48c6 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c6 = 1;
    }
    if ((lVar9 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar9), uVar13 != 0))
    {
      uVar16 = *(undefined8 *)(uVar13 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = 0x3d22e88;
      uVar7 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar9,uVar16);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar9,1);
      uVar16 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar9);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar9,uVar16);
      uVar13 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar13) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar9,uVar13,5);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar13,0,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar13,1,uVar12);
        uVar7 = 3;
        param_4 = uVar12;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar13);
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if (uVar12 != 0) {
        uVar8 = *(undefined8 *)(puVar5 + -0x160);
        uVar27 = *(undefined8 *)(puVar5 + -0x158);
        uVar16 = *(undefined8 *)(puVar5 + -0x170);
        uVar15 = *(undefined8 *)(puVar5 + -0x168);
        uVar19 = *(undefined8 *)(puVar5 + -0x180);
        uVar22 = *(undefined8 *)(puVar5 + -0x178);
        puVar4 = puVar5 + -0x150;
        uVar7 = uVar12;
        goto code_r0x014eb4e0;
      }
    }
    auVar31 = func_0x00f78af4();
    uVar17 = auVar31._8_8_;
    lVar18 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -0x1d0) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x1c8) = uVar22;
    *(undefined8 *)(puVar5 + -0x1c0) = uVar8;
    *(ulong *)(puVar5 + -0x1b8) = uVar13;
    *(long *)(puVar5 + -0x1b0) = lVar9;
    *(ulong *)(puVar5 + -0x1a8) = uVar12;
    *(undefined1 **)(puVar5 + -0x1a0) = puVar5 + -0x160;
    *(code **)(puVar5 + -0x198) = Atlas_League_LeagueModeTester__TestPodium11thPlace;
    uVar8 = 0x3eb4000;
    uVar12 = uVar7;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    if ((lVar18 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar18), uVar17 != 0)
       ) {
      uVar16 = *(undefined8 *)(uVar17 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = 0x3d22e88;
      uVar12 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar18,uVar16);
      uVar16 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar18);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar18,uVar16);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar18,1);
      uVar17 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar17) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar18,uVar17,0xb);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar17,0,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar17,1,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar17,0,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar17,1,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar17,2,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar17,3,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar17,4,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar17,5,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar17,6,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar17,7,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar17,8,uVar7);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar17,9,uVar7);
        uVar12 = 0xb;
        param_4 = uVar7;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,uVar17);
        uVar17 = (ulong)((int)uVar17 + 1);
      }
      if (uVar7 != 0) {
        uVar8 = *(undefined8 *)(puVar5 + -0x1a0);
        uVar27 = *(undefined8 *)(puVar5 + -0x198);
        uVar16 = *(undefined8 *)(puVar5 + -0x1b0);
        uVar15 = *(undefined8 *)(puVar5 + -0x1a8);
        uVar19 = *(undefined8 *)(puVar5 + -0x1c0);
        uVar22 = *(undefined8 *)(puVar5 + -0x1b8);
        puVar4 = puVar5 + -400;
        goto code_r0x014eb4e0;
      }
    }
    auVar31 = func_0x00f78af4();
    uVar13 = auVar31._8_8_;
    lVar9 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -0x210) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x208) = uVar22;
    *(undefined8 *)(puVar5 + -0x200) = uVar8;
    *(ulong *)(puVar5 + -0x1f8) = uVar17;
    *(long *)(puVar5 + -0x1f0) = lVar18;
    *(ulong *)(puVar5 + -0x1e8) = uVar7;
    *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x1a0;
    *(code **)(puVar5 + -0x1d8) = Atlas_League_LeagueModeTester__TestPodium12thPlace;
    uVar8 = 0x3eb4000;
    uVar7 = uVar12;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    if ((lVar9 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar9), uVar13 != 0))
    {
      uVar16 = *(undefined8 *)(uVar13 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = 0x3d22e88;
      uVar7 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar9,uVar16);
      uVar16 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar9);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar9,uVar16);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar9,1);
      uVar13 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar13) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar9,uVar13,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar13,0,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar13,1,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar13,2,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar13,3,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar13,4,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar13,5,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar13,6,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar13,7,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar13,8,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar13,9,uVar12);
        uVar7 = 10;
        param_4 = uVar12;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,uVar13);
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if (uVar12 != 0) {
        uVar8 = *(undefined8 *)(puVar5 + -0x1e0);
        uVar27 = *(undefined8 *)(puVar5 + -0x1d8);
        uVar16 = *(undefined8 *)(puVar5 + -0x1f0);
        uVar15 = *(undefined8 *)(puVar5 + -0x1e8);
        uVar19 = *(undefined8 *)(puVar5 + -0x200);
        uVar22 = *(undefined8 *)(puVar5 + -0x1f8);
        puVar4 = puVar5 + -0x1d0;
        uVar7 = uVar12;
        goto code_r0x014eb4e0;
      }
    }
    auVar31 = func_0x00f78af4();
    uVar17 = auVar31._8_8_;
    lVar18 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -0x260) = unaff_x26;
    *(ulong *)(puVar5 + -600) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x250) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x248) = uVar22;
    *(undefined8 *)(puVar5 + -0x240) = uVar8;
    *(ulong *)(puVar5 + -0x238) = uVar13;
    *(long *)(puVar5 + -0x230) = lVar9;
    *(ulong *)(puVar5 + -0x228) = uVar12;
    *(undefined1 **)(puVar5 + -0x220) = puVar5 + -0x1e0;
    *(code **)(puVar5 + -0x218) = Atlas_League_LeagueModeTester__TestPodiumPlace;
    uVar22 = 0x3eb4000;
    uVar12 = uVar7;
    uVar13 = param_4;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar18 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar18), uVar17 != 0)
       ) {
      uVar8 = *(undefined8 *)(uVar17 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x24 = 0x3d22e88;
      uVar12 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,uVar22);
      uVar8 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar18,uVar8);
      uVar8 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar18);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar18,uVar8);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar18,1);
      uVar17 = 0;
      uVar3 = (int)param_4 - 1;
      unaff_x25 = (ulong)uVar3;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar17) break;
        uVar12 = param_4;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar18,uVar17);
        uVar23 = 0;
        do {
          uVar20 = (uint)uVar23;
          if (uVar3 != uVar20) {
            uVar13 = uVar7;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar23,uVar17);
            uVar12 = uVar23;
          }
          uVar20 = uVar20 + 1;
          uVar23 = (ulong)uVar20;
        } while (uVar20 != 0xc);
        uVar17 = (ulong)((int)uVar17 + 1);
        uVar22 = 0xc;
      }
      if (uVar7 != 0) {
        uVar8 = *(undefined8 *)(puVar5 + -0x220);
        uVar27 = *(undefined8 *)(puVar5 + -0x218);
        uVar16 = *(undefined8 *)(puVar5 + -0x230);
        uVar15 = *(undefined8 *)(puVar5 + -0x228);
        uVar19 = *(undefined8 *)(puVar5 + -0x240);
        uVar22 = *(undefined8 *)(puVar5 + -0x238);
        puVar4 = puVar5 + -0x210;
        goto code_r0x014eb4e0;
      }
    }
    auVar31 = func_0x00f78af4();
    lVar10 = auVar31._8_8_;
    lVar9 = auVar31._0_8_;
    puVar4 = puVar5 + -0x2d0;
    *(undefined8 *)(puVar5 + -0x2b0) = unaff_x26;
    *(ulong *)(puVar5 + -0x2a8) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x2a0) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x298) = uVar22;
    *(ulong *)(puVar5 + -0x290) = uVar17;
    *(long *)(puVar5 + -0x288) = lVar18;
    *(ulong *)(puVar5 + -0x280) = param_4;
    *(ulong *)(puVar5 + -0x278) = uVar7;
    *(undefined1 **)(puVar5 + -0x270) = puVar5 + -0x220;
    *(code **)(puVar5 + -0x268) = Atlas_League_LeagueModeTester__TestPodiumAsIs;
    uVar17 = 0x3eb4000;
    uVar7 = uVar12;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar14 = (int)uVar13;
    uVar8 = 0;
    if (lVar10 != 0) {
      unaff_x24 = 0x3d25238;
      uVar8 = *(undefined8 *)(lVar10 + 0x38);
      *(undefined8 *)(puVar5 + -0x2b8) = uVar8;
      iVar21 = -7;
      iVar24 = 7;
      do {
        *(undefined8 *)(puVar5 + -0x2c0) = uVar8;
        uVar22 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar21,puVar5 + -0x2c0,0);
        *(undefined8 *)(puVar5 + -0x2b8) = uVar22;
        iVar6 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(puVar5 + -0x2b8,0);
        iVar14 = (int)uVar13;
        uVar8 = *(undefined8 *)(lVar10 + 0x38);
        if (iVar6 == 0) break;
        iVar21 = iVar21 + 1;
        bVar1 = 1 < iVar24;
        iVar24 = iVar24 + -1;
      } while (bVar1);
      uVar22 = *(undefined8 *)(puVar5 + -0x2b8);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar8,uVar22,0);
      *(undefined8 *)(puVar5 + -0x2c8) = uVar8;
      dVar29 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(puVar5 + -0x2c8,0);
      dVar30 = -dVar29;
      if (dVar29 != INFINITY) {
        dVar30 = dVar29;
      }
      uVar17 = (ulong)(uint)(int)dVar30;
      uVar8 = *(undefined8 *)(lVar10 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar30,0);
      uVar7 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,uVar16);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (lVar9 != 0) {
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar9,uVar16);
        uVar16 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar9);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar9,uVar16);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar9,1);
        if (uVar12 != 0) {
          auVar31 = Atlas_Save_SaveManager__StartSave(uVar12,0);
          return auVar31;
        }
      }
    }
    auVar31 = func_0x00f78af4();
    lVar18 = auVar31._0_8_;
    *(undefined8 *)(puVar5 + -0x310) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x308) = uVar22;
    *(ulong *)(puVar5 + -0x300) = uVar17;
    *(undefined8 *)(puVar5 + -0x2f8) = uVar8;
    *(long *)(puVar5 + -0x2f0) = lVar9;
    *(ulong *)(puVar5 + -0x2e8) = uVar12;
    *(undefined1 **)(puVar5 + -0x2e0) = puVar5 + -0x270;
    *(code **)(puVar5 + -0x2d8) = Atlas_League_LeagueModeTester__TestDecayDemotion;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar31._8_8_ == 0) {
LAB_0147d610:
      auVar31 = func_0x00f78af4();
      return auVar31;
    }
    uVar22 = *(undefined8 *)(auVar31._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar14,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar22,uVar8,0);
    uVar22 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar18 == 0) goto LAB_0147d610;
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar18,uVar22);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar18,uVar22);
    if (uVar7 == 0) goto LAB_0147d610;
    uVar8 = *(undefined8 *)(puVar5 + -0x2e0);
    uVar27 = *(undefined8 *)(puVar5 + -0x2d8);
    uVar16 = *(undefined8 *)(puVar5 + -0x2f0);
    uVar15 = *(undefined8 *)(puVar5 + -0x2e8);
    uVar19 = *(undefined8 *)(puVar5 + -0x300);
    uVar22 = *(undefined8 *)(puVar5 + -0x2f8);
  }
  else {
    uVar16 = *(undefined8 *)(uVar13 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar22 = 0x3d22e88;
    uVar7 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
    uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar9,uVar16);
    Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar9,1);
    uVar16 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar9);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar9,uVar16);
    uVar13 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar13) break;
      uVar7 = 0;
      Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar9,uVar13);
      uVar13 = (ulong)((int)uVar13 + 1);
    }
    if (uVar12 == 0) goto LAB_0147c9cc;
    uVar8 = *(undefined8 *)(puVar5 + -0xe0);
    uVar27 = *(undefined8 *)(puVar5 + -0xd8);
    uVar16 = *(undefined8 *)(puVar5 + -0xf0);
    uVar15 = *(undefined8 *)(puVar5 + -0xe8);
    uVar19 = *(undefined8 *)(puVar5 + -0x100);
    uVar22 = *(undefined8 *)(puVar5 + -0xf8);
    puVar4 = puVar5 + -0xd0;
    uVar7 = uVar12;
  }
code_r0x014eb4e0:
  *(undefined8 *)(puVar4 + -0x20) = uVar16;
  *(undefined8 *)(puVar4 + -0x18) = uVar15;
  *(undefined8 *)(puVar4 + -0x10) = uVar8;
  *(undefined8 *)(puVar4 + -8) = uVar27;
  if (*(char *)(uVar7 + 0x108) != '\0') {
    return ZEXT816(0);
  }
  *(undefined4 *)(uVar7 + 0x54) = 0;
  *(undefined1 *)(uVar7 + 0x110) = 0;
  lVar18 = Atlas_Save_SaveManager__get_SaveData(uVar7,0);
  if (lVar18 == 0) {
code_r0x014eb554:
    lVar18 = func_0x00f78af4();
    puVar5 = puVar4 + -0x50;
    *(undefined8 *)(puVar4 + -0x50) = uVar19;
    *(undefined8 *)(puVar4 + -0x48) = uVar22;
    *(undefined8 *)(puVar4 + -0x40) = uVar16;
    *(ulong *)(puVar4 + -0x38) = uVar7;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x28) = Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar25 = puVar4 + -0x30;
    uVar22 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar18);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x18) = uVar8;
      lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar18);
      if ((*(long *)(lVar18 + 0x58) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar18 + 0x58) + 0x10), lVar9 = lVar10, lVar11 != 0)) {
        auVar31 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar11,0);
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x30) = auVar31._0_8_;
          return auVar31;
        }
      }
    }
    pcVar28 = Atlas_Save_SaveManager__StartSave;
    auVar32 = func_0x00f78af4();
  }
  else {
    uVar12 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar12 & 1) == 0) {
      if ((*(long *)(uVar7 + 0x98) == 0) ||
         (lVar18 = *(long *)(*(long *)(uVar7 + 0x98) + 0x48), lVar18 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar18,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar7);
    auVar32._8_4_ = *(undefined4 *)(uVar7 + 0xf8);
    auVar32._0_8_ = uVar7;
    auVar32._12_4_ = 0;
    puVar25 = *(undefined1 **)(puVar4 + -0x10);
    pcVar28 = *(code **)(puVar4 + -8);
    lVar9 = *(long *)(puVar4 + -0x20);
    lVar18 = *(long *)(puVar4 + -0x18);
    puVar5 = puVar4;
  }
  uVar8 = auVar32._8_8_;
  lVar10 = auVar32._0_8_;
  *(undefined8 *)(puVar5 + -0x30) = uVar19;
  *(undefined8 *)(puVar5 + -0x28) = uVar22;
  *(long *)(puVar5 + -0x20) = lVar9;
  *(long *)(puVar5 + -0x18) = lVar18;
  *(undefined1 **)(puVar5 + -0x10) = puVar25;
  *(code **)(puVar5 + -8) = pcVar28;
  cVar2 = *(char *)(lVar10 + 0x50);
  if (cVar2 == '\0') {
    *(undefined1 *)(lVar10 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    auVar31 = Atlas_Save_SaveManager__AsyncSave(lVar10,uVar8,0);
    uVar8 = auVar31._8_8_;
    *(long *)(lVar10 + 0x100) = auVar31._0_8_;
    *(undefined4 *)(lVar10 + 0x54) = 0;
    *(undefined1 *)(lVar10 + 0x110) = 0;
  }
  auVar33._1_7_ = 0;
  auVar33[0] = cVar2 == '\0';
  auVar33._8_8_ = uVar8;
  return auVar33;
}



// ============================================================
// RVA: 0x147c3a4 | Atlas.League.LeaguePlayerSave.SaveLeaderboardForUI
// ============================================================

undefined1  [16]
Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI
          (ulong param_1,long param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar22;
  undefined8 ****ppppuVar23;
  undefined1 *puVar24;
  code *pcVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_2d0 [8];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  uVar19 = 0x3eb4000;
  uVar15 = param_3;
  if ((bRam0000000003eb48fb & 1) == 0) {
    func_0x00f78a20(0x3d6f1f0);
    bRam0000000003eb48fb = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    param_4 = 0;
    uVar15 = param_3;
    uVar7 = Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_LB_P')*/ uRam0000000003d6f1f0);
    if (param_2 != 0) {
      if (0 < *(int *)(param_2 + 0x18)) {
        param_3 = 0;
        uVar19 = param_2 + 0x20;
        do {
          uVar7 = /*Atlas.League.LeaguePlayerSave$$ParseLeaderboardAIKey*/ func_0x0147f388(uVar7,param_3);
          if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_0147c474;
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_0147c470;
          uVar15 = (ulong)*(uint *)(uVar19 + param_3 * 4);
          param_4 = 0;
          uVar7 = Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),uVar7);
          param_3 = param_3 + 1;
        } while ((long)param_3 < (long)*(int *)(param_2 + 0x18));
      }
      auVar28._0_8_ = *(ulong *)(param_1 + 0x10);
      if (auVar28._0_8_ != 0) {
        *(undefined1 *)(auVar28._0_8_ + 0x110) = 1;
        auVar28._8_8_ = 0;
        return auVar28;
      }
    }
  }
LAB_0147c470:
  func_0x00f78af4();
LAB_0147c474:
  uVar7 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar7,0);
  uVar8 = auVar28._8_8_;
  lVar12 = auVar28._0_8_;
  pcStack_38 = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2;
  uVar20 = 0x3eb4000;
  uVar16 = uVar15;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48c2 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d653e8);
    bRam0000000003eb48c2 = 1;
  }
  if ((lVar12 == 0) || (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar12), uVar8 == 0)) {
LAB_0147c66c:
    auVar28 = func_0x00f78af4();
    uVar9 = auVar28._8_8_;
    lVar11 = auVar28._0_8_;
    pcStack_88 = Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
    uVar19 = 0x3eb4000;
    uVar17 = uVar16;
    pppuStack_90 = &pppuStack_40;
    if ((bRam0000000003eb48c3 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e0);
      bRam0000000003eb48c3 = 1;
    }
    if ((lVar11 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar11), uVar9 != 0))
    {
      uVar7 = *(undefined8 *)(uVar9 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x24 = 0x3d1f100;
      unaff_x23 = 0x3d653e0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar19,0);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar11,uVar7);
      uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar11);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar11,uVar7);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar11,1);
      iVar18 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar18) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar11,iVar18,0);
        iVar21 = 0;
        do {
          param_4 = uVar16;
          Atlas_League_LeagueModeSave__SaveAIDayPlacement(iVar21,iVar18,iVar21);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0xc);
        iVar18 = iVar18 + 1;
        uVar19 = 0xc;
      }
      uVar9 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
      /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar9,/*Field$<PrivateImplementationDetails>.3A9C421558546FFEC2136920883D1BF2D1C64AF2A1767DE97B667D62F2B054DF*/ uRam0000000003d653e0,0);
      uVar17 = 0;
      Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI(lVar11,uVar9);
      if (uVar16 != 0) {
        puVar4 = (undefined8 *)&stack0xffffffffffffff80;
        ppppuVar23 = (undefined8 ****)pppuStack_90;
        pcVar25 = pcStack_88;
        goto code_r0x014eb4e0;
      }
    }
    auVar28 = func_0x00f78af4();
    uVar20 = auVar28._8_8_;
    lVar12 = auVar28._0_8_;
    pcStack_d8 = Atlas_League_LeagueModeTester__TestPodium1stPlace;
    uVar8 = 0x3eb4000;
    uVar15 = uVar17;
    uStack_110 = unaff_x24;
    uStack_108 = unaff_x23;
    uStack_100 = uVar19;
    uStack_f8 = uVar9;
    lStack_f0 = lVar11;
    uStack_e8 = uVar16;
    pppuStack_e0 = &pppuStack_90;
    if ((bRam0000000003eb48c4 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c4 = 1;
    }
    if ((lVar12 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar12), uVar20 != 0)
       ) {
      uVar7 = *(undefined8 *)(uVar20 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar15 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar8);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar12,uVar7);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar12,1);
      uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar12);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar12,uVar7);
      uVar20 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar20) break;
        uVar15 = 0;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar12,uVar20);
        uVar20 = (ulong)((int)uVar20 + 1);
      }
      if (uVar17 != 0) {
        puVar4 = (undefined8 *)&stack0xffffffffffffff30;
        uVar16 = uVar17;
        uVar15 = uStack_e8;
        lVar12 = lStack_f0;
        uVar8 = uStack_f8;
        uVar20 = uStack_100;
        ppppuVar23 = (undefined8 ****)pppuStack_e0;
        pcVar25 = pcStack_d8;
        goto code_r0x014eb4e0;
      }
    }
    auVar28 = func_0x00f78af4();
    uVar9 = auVar28._8_8_;
    lVar11 = auVar28._0_8_;
    pcStack_118 = Atlas_League_LeagueModeTester__TestPodium2ndPlace;
    uVar19 = 0x3eb4000;
    uVar16 = uVar15;
    uStack_150 = unaff_x24;
    uStack_148 = unaff_x23;
    uStack_140 = uVar8;
    uStack_138 = uVar20;
    lStack_130 = lVar12;
    uStack_128 = uVar17;
    pppuStack_120 = &pppuStack_e0;
    if ((bRam0000000003eb48c5 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c5 = 1;
    }
    if ((lVar11 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar11), uVar9 != 0))
    {
      uVar7 = *(undefined8 *)(uVar9 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar16 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar19);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar11,uVar7);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar11,1);
      uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar11);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar11,uVar7);
      uVar9 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar9) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar11,uVar9,1);
        uVar16 = 0;
        param_4 = uVar15;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar9);
        uVar9 = (ulong)((int)uVar9 + 1);
      }
      if (uVar15 != 0) {
        puVar4 = &uStack_110;
        uVar16 = uVar15;
        uVar15 = uStack_128;
        lVar12 = lStack_130;
        uVar8 = uStack_138;
        uVar20 = uStack_140;
        ppppuVar23 = (undefined8 ****)pppuStack_120;
        pcVar25 = pcStack_118;
        goto code_r0x014eb4e0;
      }
    }
    auVar28 = func_0x00f78af4();
    uVar20 = auVar28._8_8_;
    lVar12 = auVar28._0_8_;
    pcStack_158 = Atlas_League_LeagueModeTester__TestPodium6thPlace;
    uVar8 = 0x3eb4000;
    uVar17 = uVar16;
    uStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    uStack_180 = uVar19;
    uStack_178 = uVar9;
    lStack_170 = lVar11;
    uStack_168 = uVar15;
    pppuStack_160 = &pppuStack_120;
    if ((bRam0000000003eb48c6 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c6 = 1;
    }
    if ((lVar12 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar12), uVar20 != 0)
       ) {
      uVar7 = *(undefined8 *)(uVar20 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar17 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar8);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar12,uVar7);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar12,1);
      uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar12);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar12,uVar7);
      uVar20 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar20) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar12,uVar20,5);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar20,0,uVar16);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar20,1,uVar16);
        uVar17 = 3;
        param_4 = uVar16;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar20);
        uVar20 = (ulong)((int)uVar20 + 1);
      }
      if (uVar16 != 0) {
        puVar4 = &uStack_150;
        uVar15 = uStack_168;
        lVar12 = lStack_170;
        uVar8 = uStack_178;
        uVar20 = uStack_180;
        ppppuVar23 = (undefined8 ****)pppuStack_160;
        pcVar25 = pcStack_158;
        goto code_r0x014eb4e0;
      }
    }
    auVar28 = func_0x00f78af4();
    uVar9 = auVar28._8_8_;
    lVar11 = auVar28._0_8_;
    pcStack_198 = Atlas_League_LeagueModeTester__TestPodium11thPlace;
    uVar15 = 0x3eb4000;
    uVar19 = uVar17;
    uStack_1d0 = unaff_x24;
    uStack_1c8 = unaff_x23;
    uStack_1c0 = uVar8;
    uStack_1b8 = uVar20;
    lStack_1b0 = lVar12;
    uStack_1a8 = uVar16;
    pppuStack_1a0 = &pppuStack_160;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    if ((lVar11 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar11), uVar9 != 0))
    {
      uVar7 = *(undefined8 *)(uVar9 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar15);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar11,uVar7);
      uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar11);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar11,uVar7);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar11,1);
      uVar9 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar9) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar11,uVar9,0xb);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar9,0,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar9,1,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar9,0,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar9,1,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar9,2,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar9,3,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar9,4,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar9,5,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar9,6,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar9,7,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar9,8,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar9,9,uVar17);
        uVar19 = 0xb;
        param_4 = uVar17;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,uVar9);
        uVar9 = (ulong)((int)uVar9 + 1);
      }
      if (uVar17 != 0) {
        puVar4 = &uStack_190;
        uVar16 = uVar17;
        uVar15 = uStack_1a8;
        lVar12 = lStack_1b0;
        uVar8 = uStack_1b8;
        uVar20 = uStack_1c0;
        ppppuVar23 = (undefined8 ****)pppuStack_1a0;
        pcVar25 = pcStack_198;
        goto code_r0x014eb4e0;
      }
    }
    auVar28 = func_0x00f78af4();
    uVar8 = auVar28._8_8_;
    lVar12 = auVar28._0_8_;
    pcStack_1d8 = Atlas_League_LeagueModeTester__TestPodium12thPlace;
    uVar20 = 0x3eb4000;
    uVar16 = uVar19;
    uStack_210 = unaff_x24;
    uStack_208 = unaff_x23;
    uStack_200 = uVar15;
    uStack_1f8 = uVar9;
    lStack_1f0 = lVar11;
    uStack_1e8 = uVar17;
    pppuStack_1e0 = &pppuStack_1a0;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    if ((lVar12 != 0) && (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar12), uVar8 != 0))
    {
      uVar7 = *(undefined8 *)(uVar8 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar20 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar20);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar12,uVar7);
      uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar12);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar12,uVar7);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar12,1);
      uVar8 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar8) break;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar12,uVar8,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar8,0,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar8,1,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar8,2,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar8,3,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar8,4,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar8,5,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar8,6,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar8,7,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar8,8,uVar19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar8,9,uVar19);
        uVar16 = 10;
        param_4 = uVar19;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,uVar8);
        uVar8 = (ulong)((int)uVar8 + 1);
      }
      if (uVar19 != 0) {
        puVar4 = &uStack_1d0;
        uVar16 = uVar19;
        uVar15 = uStack_1e8;
        lVar12 = lStack_1f0;
        uVar8 = uStack_1f8;
        uVar20 = uStack_200;
        ppppuVar23 = (undefined8 ****)pppuStack_1e0;
        pcVar25 = pcStack_1d8;
        goto code_r0x014eb4e0;
      }
    }
    auVar28 = func_0x00f78af4();
    lVar11 = auVar28._0_8_;
    pcStack_218 = Atlas_League_LeagueModeTester__TestPodiumPlace;
    uVar15 = uVar16;
    uVar17 = param_4;
    pppuStack_220 = &pppuStack_1e0;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar11 != 0) &&
       (Atlas_League_LeaguePlayerSave__ClearAllDayPlacements(lVar11), auVar28._8_8_ != 0)) {
      uVar7 = *(undefined8 *)(auVar28._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar10);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar11,uVar7);
      uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar11);
      Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar11,uVar7);
      Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar11,1);
      iVar18 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar18) break;
        uVar15 = param_4;
        Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar11,iVar18);
        uVar9 = 0;
        do {
          iVar21 = (int)uVar9;
          if ((int)param_4 + -1 != iVar21) {
            uVar17 = uVar16;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar9,iVar18);
            uVar15 = uVar9;
          }
          uVar2 = iVar21 + 1;
          uVar9 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar18 = iVar18 + 1;
      }
      if (uVar16 != 0) {
        puVar4 = &uStack_210;
        uVar15 = uVar19;
        ppppuVar23 = (undefined8 ****)pppuStack_220;
        pcVar25 = pcStack_218;
        goto code_r0x014eb4e0;
      }
    }
    auVar28 = func_0x00f78af4();
    lVar11 = auVar28._8_8_;
    lVar12 = auVar28._0_8_;
    pcStack_268 = Atlas_League_LeagueModeTester__TestPodiumAsIs;
    ppppuVar23 = &pppuStack_270;
    uVar20 = 0x3eb4000;
    uVar16 = uVar15;
    pppuStack_270 = &pppuStack_220;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar18 = (int)uVar17;
    uVar8 = 0;
    if (lVar11 != 0) {
      uVar7 = *(undefined8 *)(lVar11 + 0x38);
      iVar21 = -7;
      uStack_2b8 = uVar7;
      iVar22 = 7;
      do {
        uStack_2c0 = uVar7;
        uStack_2b8 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar21,&uStack_2c0,0);
        iVar6 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_2b8,0);
        uVar10 = uStack_2b8;
        iVar18 = (int)uVar17;
        uVar7 = *(undefined8 *)(lVar11 + 0x38);
        if (iVar6 == 0) break;
        iVar21 = iVar21 + 1;
        bVar1 = 1 < iVar22;
        iVar22 = iVar22 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_2c8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar7,uVar10,0);
      dVar26 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_2c8,0);
      dVar27 = -dVar26;
      if (dVar26 != INFINITY) {
        dVar27 = dVar26;
      }
      uVar20 = (ulong)(uint)(int)dVar27;
      uVar8 = *(ulong *)(lVar11 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar27,0);
      uVar16 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar8,uVar7);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (lVar12 != 0) {
        Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar12,uVar7);
        uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar12);
        Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar12,uVar7);
        Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar12,1);
        if (uVar15 != 0) {
          auVar28 = Atlas_Save_SaveManager__StartSave(uVar15,0);
          return auVar28;
        }
      }
    }
    auVar28 = func_0x00f78af4();
    lVar11 = auVar28._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar28._8_8_ == 0) {
LAB_0147d610:
      auVar28 = func_0x00f78af4();
      return auVar28;
    }
    uVar7 = *(undefined8 *)(auVar28._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar18,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar10,0);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar11 == 0) goto LAB_0147d610;
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar11,uVar7);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar11,uVar7);
    if (uVar16 == 0) goto LAB_0147d610;
    pcVar25 = Atlas_League_LeagueModeTester__TestDecayDemotion;
    puVar4 = (undefined8 *)auStack_2d0;
  }
  else {
    uVar7 = *(undefined8 *)(uVar8 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar20 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d1f100;
    unaff_x23 = 0x3d653e8;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar20,0);
    uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    Atlas_League_LeaguePlayerSave__set_LatestPlayedDate(lVar12,uVar7);
    uVar7 = Atlas_League_LeaguePlayerSave__get_LatestPlayedDate(lVar12);
    Atlas_League_LeaguePlayerSave__set_LatestOpenedDate(lVar12,uVar7);
    Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch(lVar12,1);
    iVar18 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar18) break;
      Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement(lVar12,iVar18,0);
      iVar21 = 0;
      do {
        param_4 = uVar15;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(iVar21,iVar18,iVar21);
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0xc);
      iVar18 = iVar18 + 1;
      uVar20 = 0xc;
    }
    uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
    /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar8,/*Field$<PrivateImplementationDetails>.53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D*/ uRam0000000003d653e8,0);
    uVar16 = 0x14;
    Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI(lVar12,uVar8);
    if (uVar15 == 0) goto LAB_0147c66c;
    puVar4 = (undefined8 *)&stack0xffffffffffffffd0;
    uVar16 = uVar15;
    uVar15 = param_1;
    lVar12 = param_2;
    uVar8 = param_3;
    uVar20 = uVar19;
    ppppuVar23 = (undefined8 ****)pppuStack_40;
    pcVar25 = pcStack_38;
  }
code_r0x014eb4e0:
  *(long *)((long)puVar4 + -0x20) = lVar12;
  *(ulong *)((long)puVar4 + -0x18) = uVar15;
  *(undefined8 *****)((long)puVar4 + -0x10) = ppppuVar23;
  *(code **)((long)puVar4 + -8) = pcVar25;
  if (*(char *)(uVar16 + 0x108) != '\0') {
    return ZEXT816(0);
  }
  *(undefined4 *)(uVar16 + 0x54) = 0;
  *(undefined1 *)(uVar16 + 0x110) = 0;
  lVar11 = Atlas_Save_SaveManager__get_SaveData(uVar16,0);
  if (lVar11 == 0) {
code_r0x014eb554:
    lVar11 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)puVar4 + -0x50);
    *(ulong *)((long)puVar4 + -0x50) = uVar20;
    *(ulong *)((long)puVar4 + -0x48) = uVar8;
    *(long *)((long)puVar4 + -0x40) = lVar12;
    *(ulong *)((long)puVar4 + -0x38) = uVar16;
    *(undefined1 **)((long)puVar4 + -0x30) = (undefined1 *)((long)puVar4 + -0x10);
    *(code **)((long)puVar4 + -0x28) = Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar24 = (undefined1 *)((long)puVar4 + -0x30);
    uVar8 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar12 = Atlas_Save_SaveManager__get_SaveData(lVar11);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x18) = uVar7;
      lVar13 = Atlas_Save_SaveManager__get_SaveData(lVar11);
      if ((*(long *)(lVar11 + 0x58) != 0) &&
         (lVar14 = *(long *)(*(long *)(lVar11 + 0x58) + 0x10), lVar12 = lVar13, lVar14 != 0)) {
        auVar28 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar14,0);
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x30) = auVar28._0_8_;
          return auVar28;
        }
      }
    }
    pcVar25 = Atlas_Save_SaveManager__StartSave;
    auVar29 = func_0x00f78af4();
  }
  else {
    uVar19 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar19 & 1) == 0) {
      if ((*(long *)(uVar16 + 0x98) == 0) ||
         (lVar11 = *(long *)(*(long *)(uVar16 + 0x98) + 0x48), lVar11 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar11,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar16);
    auVar29._8_4_ = *(undefined4 *)(uVar16 + 0xf8);
    auVar29._0_8_ = uVar16;
    auVar29._12_4_ = 0;
    puVar24 = *(undefined1 **)((long)puVar4 + -0x10);
    pcVar25 = *(code **)((long)puVar4 + -8);
    lVar12 = *(long *)((long)puVar4 + -0x20);
    lVar11 = *(long *)((long)puVar4 + -0x18);
    puVar5 = (undefined1 *)puVar4;
  }
  uVar7 = auVar29._8_8_;
  lVar13 = auVar29._0_8_;
  *(ulong *)(puVar5 + -0x30) = uVar20;
  *(ulong *)(puVar5 + -0x28) = uVar8;
  *(long *)(puVar5 + -0x20) = lVar12;
  *(long *)(puVar5 + -0x18) = lVar11;
  *(undefined1 **)(puVar5 + -0x10) = puVar24;
  *(code **)(puVar5 + -8) = pcVar25;
  cVar3 = *(char *)(lVar13 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar13 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    auVar28 = Atlas_Save_SaveManager__AsyncSave(lVar13,uVar7,0);
    uVar7 = auVar28._8_8_;
    *(long *)(lVar13 + 0x100) = auVar28._0_8_;
    *(undefined4 *)(lVar13 + 0x54) = 0;
    *(undefined1 *)(lVar13 + 0x110) = 0;
  }
  auVar30._1_7_ = 0;
  auVar30[0] = cVar3 == '\0';
  auVar30._8_8_ = uVar7;
  return auVar30;
}



// ============================================================
// RVA: 0x147e760 | Atlas.League.LeaguePlayerSave..ctor
// ============================================================

void Atlas_League_LeaguePlayerSave___ctor(long param_1,undefined8 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x147e78c | Atlas.League.LeaguePlayerSave.get_PlayerLeague
// ============================================================

ulong Atlas_League_LeaguePlayerSave__get_PlayerLeague(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 extraout_w1;
  long lVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_134;
  
  if ((bRam0000000003eb48d8 & 1) == 0) {
    func_0x00f78a20(0x3d6f210);
    bRam0000000003eb48d8 = 1;
  }
  uVar4 = /*STR('L_PL')*/ uRam0000000003d6f210;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if ((bRam0000000003eb4c45 & 1) == 0) {
      func_0x00f78a20(0x3d246e0,/*STR('L_PL')*/ uRam0000000003d6f210,0,0);
      bRam0000000003eb4c45 = 1;
    }
    lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = lVar3;
    if ((bRam0000000003eb4c4b & 1) == 0) {
      func_0x00f78a20(0x3d3d900);
      func_0x00f78a20(0x3d246e0);
      bRam0000000003eb4c4b = 1;
    }
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
    }
    auVar9 = func_0x00f78af4();
    uVar4 = auVar9._8_8_;
    lVar3 = auVar9._0_8_;
    if ((bRam0000000003eb4c46 & 1) == 0) {
      func_0x00f78a20(0x3d3d918);
      func_0x00f78a20(0x3d3d928);
      func_0x00f78a20(0x3d3d930);
      bRam0000000003eb4c46 = 1;
    }
    uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar4);
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((int)(uint)uVar5 < 0) {
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
        uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar4,lVar8,uRam0000000003d3d918);
LAB_014ecdb8:
        *(undefined1 *)(lVar3 + 0x110) = 1;
        return uVar5;
      }
    }
    else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
      if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
      if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar8,5,0), (uVar7 & 1) != 0)) {
        return uVar7;
      }
      lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
        uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar4,lVar8,uRam0000000003d3d930);
        goto LAB_014ecdb8;
      }
    }
    auVar9 = func_0x00f78af4();
    if ((bRam0000000003eb4c48 & 1) == 0) {
      func_0x00f78a20(0x3d246e0);
      bRam0000000003eb4c48 = 1;
    }
    lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar9._0_8_);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb4c4c & 1) == 0) {
      func_0x00f78a20(0x3d3d920);
      func_0x00f78a20(0x3d3d928);
      bRam0000000003eb4c4c = 1;
    }
    if ((lVar3 != 0) && (lVar8 = *(long *)(lVar3 + 0x118), lVar8 != 0)) {
      uVar5 = 0;
      do {
        uVar2 = (uint)uVar5;
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar2) {
          return 0xffffffff;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
        if (lVar8 == 0) break;
        uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar9._8_8_,5,0);
        if ((uVar7 & 1) != 0) {
          return uVar5;
        }
        uVar5 = (ulong)(uVar2 + 1);
        lVar8 = *(long *)(lVar3 + 0x118);
      } while (lVar8 != 0);
    }
    func_0x00f78af4();
    return 0xffffffff;
  }
  auVar9 = func_0x00f78af4();
  if ((bRam0000000003eb48d9 & 1) == 0) {
    func_0x00f78a20(0x3d6f210);
    bRam0000000003eb48d9 = 1;
  }
  lVar3 = *(long *)(auVar9._0_8_ + 0x10);
  if (lVar3 != 0) {
    Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_PL')*/ uRam0000000003d6f210,auVar9._8_8_,0);
    uVar5 = *(ulong *)(auVar9._0_8_ + 0x10);
    if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb48de & 1) == 0) {
    func_0x00f78a20(0x3d6f230);
    bRam0000000003eb48de = 1;
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar3 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230,0,0);
    return (ulong)(iVar1 != 0);
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb48e0 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e0 = 1;
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar3 + 0x10),/*STR('L_SAL')*/ uRam0000000003d6f228,0,0);
    return (ulong)(iVar1 != 0);
  }
  auVar9 = func_0x00f78af4();
  if ((bRam0000000003eb48e1 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e1 = 1;
  }
  lVar3 = *(long *)(auVar9._0_8_ + 0x10);
  if (lVar3 != 0) {
    Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_SAL')*/ uRam0000000003d6f228,auVar9._8_8_,0);
    uVar5 = *(ulong *)(auVar9._0_8_ + 0x10);
    if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  auVar9 = func_0x00f78af4();
  if ((bRam0000000003eb48e3 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    bRam0000000003eb48e3 = 1;
  }
  lVar3 = *(long *)(auVar9._0_8_ + 0x10);
  if (lVar3 != 0) {
    Atlas_Save_SaveManager__SetStringData(lVar3,/*STR('L_CSD')*/ uRam0000000003d6f1e0,auVar9._8_8_,0);
    uVar5 = *(ulong *)(auVar9._0_8_ + 0x10);
    if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(uVar5 + 0x110) = 1;
      return uVar5;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb48f5 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d7d010);
    bRam0000000003eb48f5 = 1;
  }
  uStack_134 = extraout_w1;
  uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_134);
  uVar5 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_PDP')*/ uRam0000000003d6f208,uVar4,0);
  return uVar5;
}



// ============================================================
// RVA: 0x147e7e8 | Atlas.League.LeaguePlayerSave.set_PlayerLeague
// ============================================================

undefined1  [16] Atlas_League_LeaguePlayerSave__set_PlayerLeague(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_114;
  
  if ((bRam0000000003eb48d9 & 1) == 0) {
    func_0x00f78a20(0x3d6f210);
    bRam0000000003eb48d9 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_PL')*/ uRam0000000003d6f210,param_2,0);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar2 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb48de & 1) == 0) {
    func_0x00f78a20(0x3d6f230);
    bRam0000000003eb48de = 1;
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar3 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230,0,0);
    auVar6._1_7_ = 0;
    auVar6[0] = iVar1 != 0;
    auVar6._8_8_ = extraout_x1;
    return auVar6;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb48e0 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e0 = 1;
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar3 + 0x10),/*STR('L_SAL')*/ uRam0000000003d6f228,0,0);
    auVar5._1_7_ = 0;
    auVar5[0] = iVar1 != 0;
    auVar5._8_8_ = extraout_x1_00;
    return auVar5;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb48e1 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e1 = 1;
  }
  lVar3 = *(long *)(auVar6._0_8_ + 0x10);
  if (lVar3 != 0) {
    Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_SAL')*/ uRam0000000003d6f228,auVar6._8_8_,0);
    uVar2 = *(ulong *)(auVar6._0_8_ + 0x10);
    if (uVar2 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb48e3 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    bRam0000000003eb48e3 = 1;
  }
  lVar3 = *(long *)(auVar6._0_8_ + 0x10);
  if (lVar3 != 0) {
    Atlas_Save_SaveManager__SetStringData(lVar3,/*STR('L_CSD')*/ uRam0000000003d6f1e0,auVar6._8_8_,0);
    uVar2 = *(ulong *)(auVar6._0_8_ + 0x10);
    if (uVar2 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(uVar2 + 0x110) = 1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      return auVar7;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb48f5 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d7d010);
    bRam0000000003eb48f5 = 1;
  }
  uStack_114 = extraout_w1;
  uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_114);
  auVar6 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_PDP')*/ uRam0000000003d6f208,uVar4,0);
  return auVar6;
}



// ============================================================
// RVA: 0x147e860 | Atlas.League.LeaguePlayerSave.get_ShowPodiumLatch
// ============================================================

ulong Atlas_League_LeaguePlayerSave__get_ShowPodiumLatch(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined1 auVar5 [16];
  undefined4 uStack_e4;
  
  if ((bRam0000000003eb48de & 1) == 0) {
    func_0x00f78a20(0x3d6f230);
    bRam0000000003eb48de = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(param_1 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230,0,0);
    return (ulong)(iVar1 != 0);
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb48e0 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e0 = 1;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar2 + 0x10),/*STR('L_SAL')*/ uRam0000000003d6f228,0,0);
    return (ulong)(iVar1 != 0);
  }
  auVar5 = func_0x00f78af4();
  if ((bRam0000000003eb48e1 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e1 = 1;
  }
  lVar2 = *(long *)(auVar5._0_8_ + 0x10);
  if (lVar2 != 0) {
    Atlas_Save_SaveManager__SetIntData(lVar2,/*STR('L_SAL')*/ uRam0000000003d6f228,auVar5._8_8_,0);
    uVar3 = *(ulong *)(auVar5._0_8_ + 0x10);
    if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  auVar5 = func_0x00f78af4();
  if ((bRam0000000003eb48e3 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    bRam0000000003eb48e3 = 1;
  }
  lVar2 = *(long *)(auVar5._0_8_ + 0x10);
  if (lVar2 != 0) {
    Atlas_Save_SaveManager__SetStringData(lVar2,/*STR('L_CSD')*/ uRam0000000003d6f1e0,auVar5._8_8_,0);
    uVar3 = *(ulong *)(auVar5._0_8_ + 0x10);
    if (uVar3 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(uVar3 + 0x110) = 1;
      return uVar3;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb48f5 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d7d010);
    bRam0000000003eb48f5 = 1;
  }
  uStack_e4 = extraout_w1;
  uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_e4);
  uVar3 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_PDP')*/ uRam0000000003d6f208,uVar4,0);
  return uVar3;
}



// ============================================================
// RVA: 0x147e8c8 | Atlas.League.LeaguePlayerSave.get_StarsAwardedLatch
// ============================================================

ulong Atlas_League_LeaguePlayerSave__get_StarsAwardedLatch(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined1 auVar5 [16];
  undefined4 uStack_c4;
  
  if ((bRam0000000003eb48e0 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e0 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(param_1 + 0x10),/*STR('L_SAL')*/ uRam0000000003d6f228,0,0);
    return (ulong)(iVar1 != 0);
  }
  auVar5 = func_0x00f78af4();
  if ((bRam0000000003eb48e1 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e1 = 1;
  }
  lVar2 = *(long *)(auVar5._0_8_ + 0x10);
  if (lVar2 != 0) {
    Atlas_Save_SaveManager__SetIntData(lVar2,/*STR('L_SAL')*/ uRam0000000003d6f228,auVar5._8_8_,0);
    uVar3 = *(ulong *)(auVar5._0_8_ + 0x10);
    if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  auVar5 = func_0x00f78af4();
  if ((bRam0000000003eb48e3 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    bRam0000000003eb48e3 = 1;
  }
  lVar2 = *(long *)(auVar5._0_8_ + 0x10);
  if (lVar2 != 0) {
    Atlas_Save_SaveManager__SetStringData(lVar2,/*STR('L_CSD')*/ uRam0000000003d6f1e0,auVar5._8_8_,0);
    uVar3 = *(ulong *)(auVar5._0_8_ + 0x10);
    if (uVar3 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(uVar3 + 0x110) = 1;
      return uVar3;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb48f5 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d7d010);
    bRam0000000003eb48f5 = 1;
  }
  uStack_c4 = extraout_w1;
  uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_c4);
  uVar3 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_PDP')*/ uRam0000000003d6f208,uVar4,0);
  return uVar3;
}



// ============================================================
// RVA: 0x147e930 | Atlas.League.LeaguePlayerSave.set_StarsAwardedLatch
// ============================================================

void Atlas_League_LeaguePlayerSave__set_StarsAwardedLatch(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 extraout_w1;
  undefined1 auVar3 [16];
  undefined4 uStack_a4;
  
  if ((bRam0000000003eb48e1 & 1) == 0) {
    func_0x00f78a20(0x3d6f228);
    bRam0000000003eb48e1 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_SAL')*/ uRam0000000003d6f228,param_2,0);
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb48e3 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    bRam0000000003eb48e3 = 1;
  }
  lVar1 = *(long *)(auVar3._0_8_ + 0x10);
  if (lVar1 != 0) {
    Atlas_Save_SaveManager__SetStringData(lVar1,/*STR('L_CSD')*/ uRam0000000003d6f1e0,auVar3._8_8_,0);
    lVar1 = *(long *)(auVar3._0_8_ + 0x10);
    if (lVar1 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(lVar1 + 0x110) = 1;
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb48f5 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d7d010);
    bRam0000000003eb48f5 = 1;
  }
  uStack_a4 = extraout_w1;
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_a4);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_PDP')*/ uRam0000000003d6f208,uVar2,0);
  return;
}



// ============================================================
// RVA: 0x147e9a8 | Atlas.League.LeaguePlayerSave.set_LatestCheckedStatsDate
// ============================================================

void Atlas_League_LeaguePlayerSave__set_LatestCheckedStatsDate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 extraout_w1;
  undefined4 uStack_74;
  
  if ((bRam0000000003eb48e3 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    bRam0000000003eb48e3 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetStringData(*(long *)(param_1 + 0x10),/*STR('L_CSD')*/ uRam0000000003d6f1e0,param_2,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x110) = 1;
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb48f5 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d7d010);
    bRam0000000003eb48f5 = 1;
  }
  uStack_74 = extraout_w1;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_74);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_PDP')*/ uRam0000000003d6f208,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x147ea20 | Atlas.League.LeaguePlayerSave.DayPlacementKey
// ============================================================

void Atlas_League_LeaguePlayerSave__DayPlacementKey(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb48f5 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d7d010);
    bRam0000000003eb48f5 = 1;
  }
  uStack_44 = param_2;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_44);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_PDP')*/ uRam0000000003d6f208,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x147eac8 | Atlas.League.LeaguePlayerSave.GetPlayerDayPlacement
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeaguePlayerSave__GetPlayerDayPlacement
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 *******pppppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *******pppppppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 *******pppppppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  auVar22._8_8_ = unaff_x20;
  auVar22._0_8_ = unaff_x19;
  lVar3 = param_1;
  if ((bRam0000000003eb48e5 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48e5 = 1;
  }
  uVar4 = Atlas_League_LeaguePlayerSave__DayPlacementKey(lVar3,param_2);
  lVar3 = *(long *)(param_1 + 0x10);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar20._8_8_ = uStack_270;
  auVar20._0_8_ = lStack_268;
  auVar19._8_8_ = uStack_220;
  auVar19._0_8_ = lStack_218;
  auVar18._8_8_ = uStack_1d0;
  auVar18._0_8_ = lStack_1c8;
  auVar17._8_8_ = uStack_180;
  auVar17._0_8_ = lStack_178;
  auVar16._8_8_ = uStack_130;
  auVar16._0_8_ = lStack_128;
  auVar15._8_8_ = uStack_e0;
  auVar15._0_8_ = lStack_d8;
  if (lVar3 == 0) {
    auVar23 = func_0x00f78af4();
    uStack_64 = auVar23._8_4_;
    lVar12 = auVar23._0_8_;
    uStack_60 = 0x3eb4000;
    uStack_58 = 0x3d22e88;
    puStack_38 = &Atlas_League_LeaguePlayerSave__SetReplayCountDay;
    unaff_x22 = 0x3eb4000;
    unaff_x21 = 0x3d6f218;
    lStack_50 = lVar3;
    uStack_48 = uVar4;
    ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48f8 & 1) == 0) {
      func_0x00f78a20(0x3d6f218);
      bRam0000000003eb48f8 = 1;
    }
    uVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_64,0);
    uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar4,0);
    if (*(long *)(lVar12 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar12 + 0x10),uVar4,param_3,0);
      if (*(long *)(lVar12 + 0x10) != 0) {
        uVar8 = Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar12 + 0x10),0);
        return uVar8;
      }
    }
    lVar5 = func_0x00f78af4();
    puStack_78 = &Atlas_League_LeaguePlayerSave__get_WeeksBronzeTotal;
    uStack_90 = param_3;
    lStack_88 = lVar12;
    pppppppuStack_80 = &ppppppuStack_40;
    if ((bRam0000000003eb48e7 & 1) == 0) {
      func_0x00f78a20(0x3d6f240);
      bRam0000000003eb48e7 = 1;
    }
    auVar22._8_8_ = uStack_90;
    auVar22._0_8_ = lStack_88;
    auVar20._8_8_ = uStack_270;
    auVar20._0_8_ = lStack_268;
    auVar19._8_8_ = uStack_220;
    auVar19._0_8_ = lStack_218;
    auVar18._8_8_ = uStack_1d0;
    auVar18._0_8_ = lStack_1c8;
    auVar17._8_8_ = uStack_180;
    auVar17._0_8_ = lStack_178;
    auVar16._8_8_ = uStack_130;
    auVar16._0_8_ = lStack_128;
    auVar15._8_8_ = uStack_e0;
    auVar15._0_8_ = lStack_d8;
    lVar3 = *(long *)(lVar5 + 0x10);
    if (lVar3 == 0) {
      auVar15 = func_0x00f78af4();
      lVar3 = auVar15._0_8_;
      uStack_c0 = 0x3eb4000;
      uStack_b8 = 0x3d6f218;
      uStack_b0 = 0x3eb4000;
      puStack_98 = &Atlas_League_LeaguePlayerSave__set_WeeksBronzeTotal;
      unaff_x21 = 0x3eb4000;
      lStack_a8 = lVar5;
      pppppppuStack_a0 = &pppppppuStack_80;
      if ((bRam0000000003eb48e8 & 1) == 0) {
        func_0x00f78a20(0x3d6f240);
        bRam0000000003eb48e8 = 1;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar3 + 0x10),/*STR('L_WB')*/ uRam0000000003d6f240,auVar15._8_8_,0);
        uVar8 = *(ulong *)(lVar3 + 0x10);
        if (uVar8 != 0) goto code_r0x014eb72c;
      }
      lVar12 = func_0x00f78af4();
      puStack_c8 = &Atlas_League_LeaguePlayerSave__get_WeeksSilverTotal;
      pppppppuStack_d0 = &pppppppuStack_a0;
      if ((bRam0000000003eb48e9 & 1) == 0) {
        uStack_e0 = auVar15._8_8_;
        lStack_d8 = lVar3;
        func_0x00f78a20(0x3d6f270);
        auVar15._8_8_ = uStack_e0;
        auVar15._0_8_ = lStack_d8;
        bRam0000000003eb48e9 = 1;
      }
      auVar20._8_8_ = uStack_270;
      auVar20._0_8_ = lStack_268;
      auVar19._8_8_ = uStack_220;
      auVar19._0_8_ = lStack_218;
      auVar18._8_8_ = uStack_1d0;
      auVar18._0_8_ = lStack_1c8;
      auVar17._8_8_ = uStack_180;
      auVar17._0_8_ = lStack_178;
      auVar16._8_8_ = uStack_130;
      auVar16._0_8_ = lStack_128;
      uStack_e0 = auVar15._8_8_;
      lStack_d8 = auVar15._0_8_;
      lVar3 = *(long *)(lVar12 + 0x10);
      if (lVar3 == 0) {
        auVar16 = func_0x00f78af4();
        lVar3 = auVar16._0_8_;
        uStack_110 = 0x3eb4000;
        uStack_108 = 0x3eb4000;
        uStack_100 = 0x3eb4000;
        puStack_e8 = &Atlas_League_LeaguePlayerSave__set_WeeksSilverTotal;
        unaff_x21 = 0x3eb4000;
        lStack_f8 = lVar12;
        pppppppuStack_f0 = &pppppppuStack_d0;
        if ((bRam0000000003eb48ea & 1) == 0) {
          func_0x00f78a20(0x3d6f270);
          bRam0000000003eb48ea = 1;
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar3 + 0x10),/*STR('L_WS')*/ uRam0000000003d6f270,auVar16._8_8_,0);
          uVar8 = *(ulong *)(lVar3 + 0x10);
          if (uVar8 != 0) goto code_r0x014eb72c;
        }
        lVar12 = func_0x00f78af4();
        puStack_118 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldTotal;
        pppppppuStack_120 = &pppppppuStack_f0;
        if ((bRam0000000003eb48eb & 1) == 0) {
          uStack_130 = auVar16._8_8_;
          lStack_128 = lVar3;
          func_0x00f78a20(0x3d6f250);
          auVar16._8_8_ = uStack_130;
          auVar16._0_8_ = lStack_128;
          bRam0000000003eb48eb = 1;
        }
        auVar20._8_8_ = uStack_270;
        auVar20._0_8_ = lStack_268;
        auVar19._8_8_ = uStack_220;
        auVar19._0_8_ = lStack_218;
        auVar18._8_8_ = uStack_1d0;
        auVar18._0_8_ = lStack_1c8;
        auVar17._8_8_ = uStack_180;
        auVar17._0_8_ = lStack_178;
        uStack_130 = auVar16._8_8_;
        lStack_128 = auVar16._0_8_;
        auVar15._8_8_ = uStack_e0;
        auVar15._0_8_ = lStack_d8;
        lVar3 = *(long *)(lVar12 + 0x10);
        if (lVar3 == 0) {
          auVar17 = func_0x00f78af4();
          lVar3 = auVar17._0_8_;
          uStack_160 = 0x3eb4000;
          uStack_158 = 0x3eb4000;
          uStack_150 = 0x3eb4000;
          puStack_138 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal;
          unaff_x21 = 0x3eb4000;
          lStack_148 = lVar12;
          pppppppuStack_140 = &pppppppuStack_120;
          if ((bRam0000000003eb48ec & 1) == 0) {
            func_0x00f78a20(0x3d6f250);
            bRam0000000003eb48ec = 1;
          }
          if (*(long *)(lVar3 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData
                      (*(long *)(lVar3 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,auVar17._8_8_,0);
            uVar8 = *(ulong *)(lVar3 + 0x10);
            if (uVar8 != 0) goto code_r0x014eb72c;
          }
          lVar12 = func_0x00f78af4();
          puStack_168 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
          pppppppuStack_170 = &pppppppuStack_140;
          if ((bRam0000000003eb48ed & 1) == 0) {
            uStack_180 = auVar17._8_8_;
            lStack_178 = lVar3;
            func_0x00f78a20(0x3d6f268);
            auVar17._8_8_ = uStack_180;
            auVar17._0_8_ = lStack_178;
            bRam0000000003eb48ed = 1;
          }
          auVar20._8_8_ = uStack_270;
          auVar20._0_8_ = lStack_268;
          auVar19._8_8_ = uStack_220;
          auVar19._0_8_ = lStack_218;
          auVar18._8_8_ = uStack_1d0;
          auVar18._0_8_ = lStack_1c8;
          uStack_180 = auVar17._8_8_;
          lStack_178 = auVar17._0_8_;
          auVar16._8_8_ = uStack_130;
          auVar16._0_8_ = lStack_128;
          auVar15._8_8_ = uStack_e0;
          auVar15._0_8_ = lStack_d8;
          lVar3 = *(long *)(lVar12 + 0x10);
          if (lVar3 == 0) {
            auVar18 = func_0x00f78af4();
            lVar3 = auVar18._0_8_;
            uStack_1b0 = 0x3eb4000;
            uStack_1a8 = 0x3eb4000;
            uStack_1a0 = 0x3eb4000;
            puStack_188 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
            unaff_x21 = 0x3eb4000;
            lStack_198 = lVar12;
            pppppppuStack_190 = &pppppppuStack_170;
            if ((bRam0000000003eb48ee & 1) == 0) {
              func_0x00f78a20(0x3d6f268);
              bRam0000000003eb48ee = 1;
            }
            if (*(long *)(lVar3 + 0x10) != 0) {
              Atlas_Save_SaveManager__SetIntData
                        (*(long *)(lVar3 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar18._8_8_,0);
              uVar8 = *(ulong *)(lVar3 + 0x10);
              if (uVar8 != 0) goto code_r0x014eb72c;
            }
            lVar12 = func_0x00f78af4();
            puStack_1b8 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
            pppppppuStack_1c0 = &pppppppuStack_190;
            if ((bRam0000000003eb48ef & 1) == 0) {
              uStack_1d0 = auVar18._8_8_;
              lStack_1c8 = lVar3;
              func_0x00f78a20(0x3d6f248);
              auVar18._8_8_ = uStack_1d0;
              auVar18._0_8_ = lStack_1c8;
              bRam0000000003eb48ef = 1;
            }
            auVar20._8_8_ = uStack_270;
            auVar20._0_8_ = lStack_268;
            auVar19._8_8_ = uStack_220;
            auVar19._0_8_ = lStack_218;
            uStack_1d0 = auVar18._8_8_;
            lStack_1c8 = auVar18._0_8_;
            auVar17._8_8_ = uStack_180;
            auVar17._0_8_ = lStack_178;
            auVar16._8_8_ = uStack_130;
            auVar16._0_8_ = lStack_128;
            auVar15._8_8_ = uStack_e0;
            auVar15._0_8_ = lStack_d8;
            lVar3 = *(long *)(lVar12 + 0x10);
            if (lVar3 == 0) {
              auVar19 = func_0x00f78af4();
              lVar3 = auVar19._0_8_;
              uStack_200 = 0x3eb4000;
              uStack_1f8 = 0x3eb4000;
              uStack_1f0 = 0x3eb4000;
              puStack_1d8 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
              unaff_x21 = 0x3eb4000;
              lStack_1e8 = lVar12;
              pppppppuStack_1e0 = &pppppppuStack_1c0;
              if ((bRam0000000003eb48f0 & 1) == 0) {
                func_0x00f78a20(0x3d6f248);
                bRam0000000003eb48f0 = 1;
              }
              if (*(long *)(lVar3 + 0x10) != 0) {
                Atlas_Save_SaveManager__SetIntData
                          (*(long *)(lVar3 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar19._8_8_,0);
                uVar8 = *(ulong *)(lVar3 + 0x10);
                if (uVar8 != 0) goto code_r0x014eb72c;
              }
              lVar12 = func_0x00f78af4();
              puStack_208 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
              pppppppuStack_210 = &pppppppuStack_1e0;
              if ((bRam0000000003eb48f1 & 1) == 0) {
                uStack_220 = auVar19._8_8_;
                lStack_218 = lVar3;
                func_0x00f78a20(0x3d6f260);
                auVar19._8_8_ = uStack_220;
                auVar19._0_8_ = lStack_218;
                bRam0000000003eb48f1 = 1;
              }
              auVar20._8_8_ = uStack_270;
              auVar20._0_8_ = lStack_268;
              uStack_220 = auVar19._8_8_;
              lStack_218 = auVar19._0_8_;
              auVar18._8_8_ = uStack_1d0;
              auVar18._0_8_ = lStack_1c8;
              auVar17._8_8_ = uStack_180;
              auVar17._0_8_ = lStack_178;
              auVar16._8_8_ = uStack_130;
              auVar16._0_8_ = lStack_128;
              auVar15._8_8_ = uStack_e0;
              auVar15._0_8_ = lStack_d8;
              lVar3 = *(long *)(lVar12 + 0x10);
              if (lVar3 == 0) {
                auVar20 = func_0x00f78af4();
                lVar3 = auVar20._0_8_;
                uStack_250 = 0x3eb4000;
                uStack_248 = 0x3eb4000;
                uStack_240 = 0x3eb4000;
                puStack_228 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
                unaff_x21 = 0x3eb4000;
                lStack_238 = lVar12;
                pppppppuStack_230 = &pppppppuStack_210;
                if ((bRam0000000003eb48f2 & 1) == 0) {
                  func_0x00f78a20(0x3d6f260);
                  bRam0000000003eb48f2 = 1;
                }
                if (*(long *)(lVar3 + 0x10) != 0) {
                  Atlas_Save_SaveManager__SetIntData
                            (*(long *)(lVar3 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar20._8_8_,0);
                  uVar8 = *(ulong *)(lVar3 + 0x10);
                  if (uVar8 != 0) goto code_r0x014eb72c;
                }
                lVar12 = func_0x00f78af4();
                puStack_258 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
                pppppppuStack_260 = &pppppppuStack_230;
                if ((bRam0000000003eb48f3 & 1) == 0) {
                  uStack_270 = auVar20._8_8_;
                  lStack_268 = lVar3;
                  func_0x00f78a20(0x3d6f258);
                  auVar20._8_8_ = uStack_270;
                  auVar20._0_8_ = lStack_268;
                  bRam0000000003eb48f3 = 1;
                }
                uStack_270 = auVar20._8_8_;
                lStack_268 = auVar20._0_8_;
                auVar19._8_8_ = uStack_220;
                auVar19._0_8_ = lStack_218;
                auVar18._8_8_ = uStack_1d0;
                auVar18._0_8_ = lStack_1c8;
                auVar17._8_8_ = uStack_180;
                auVar17._0_8_ = lStack_178;
                auVar16._8_8_ = uStack_130;
                auVar16._0_8_ = lStack_128;
                auVar15._8_8_ = uStack_e0;
                auVar15._0_8_ = lStack_d8;
                lVar3 = *(long *)(lVar12 + 0x10);
                if (lVar3 == 0) {
                  auVar21 = func_0x00f78af4();
                  uStack_2a0 = 0x3eb4000;
                  uStack_298 = 0x3eb4000;
                  uStack_290 = 0x3eb4000;
                  puStack_278 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
                  pppppppuVar13 = &pppppppuStack_280;
                  lStack_288 = lVar12;
                  pppppppuStack_280 = &pppppppuStack_260;
                  if ((bRam0000000003eb48f4 & 1) == 0) {
                    func_0x00f78a20(0x3d6f258);
                    bRam0000000003eb48f4 = 1;
                  }
                  lVar3 = *(long *)(auVar21._0_8_ + 0x10);
                  if (lVar3 != 0) {
                    Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar21._8_8_,0);
                    uVar8 = *(ulong *)(auVar21._0_8_ + 0x10);
                    if (uVar8 != 0) {
code_r0x014eb72c:
                      *(undefined1 *)(uVar8 + 0x110) = 1;
                      return uVar8;
                    }
                  }
                  puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
                  auVar22 = func_0x00f78af4();
                  uVar9 = 1;
                  puVar1 = &uStack_2a0;
                  uVar4 = 0x3eb4000;
                  do {
                    uVar7 = auVar22._8_8_;
                    lVar3 = auVar22._0_8_;
                    uVar11 = auVar21._8_8_;
                    uVar10 = auVar21._0_8_;
                    auVar21._8_8_ = uVar9;
                    auVar21._0_8_ = lVar3;
                    *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
                    *(undefined8 *)((long)puVar1 + -0x38) = unaff_x23;
                    *(undefined8 *)((long)puVar1 + -0x30) = 0x3eb4000;
                    *(undefined8 *)((long)puVar1 + -0x28) = uVar4;
                    *(undefined8 *)((long)puVar1 + -0x20) = uVar11;
                    *(undefined8 *)((long)puVar1 + -0x18) = uVar10;
                    *(undefined8 ********)((long)puVar1 + -0x10) = pppppppuVar13;
                    *(undefined **)((long)puVar1 + -8) = puVar14;
                    pppppppuVar13 = (undefined8 *******)((long)puVar1 + -0x10);
                    unaff_x23 = 0x3d6f220;
                    if ((bRam0000000003eb48f6 & 1) == 0) {
                      func_0x00f78a20(0x3d6f220);
                      bRam0000000003eb48f6 = 1;
                    }
                    uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar7,0);
                    if (*(long *)(lVar3 + 0x10) != 0) {
                      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
                      uVar8 = *(ulong *)(lVar3 + 0x10);
                      if (uVar8 != 0) goto code_r0x014eb72c;
                    }
                    puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
                    auVar22 = func_0x00f78af4();
                    uVar9 = 0;
                    puVar1 = (undefined8 *)((long)puVar1 + -0x40);
                    uVar4 = uVar7;
                  } while( true );
                }
                uVar8 = 0;
                register0x00000008 = (BADSPACEBASE *)&uStack_250;
                uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
                unaff_x29 = pppppppuStack_260;
                unaff_x30 = puStack_258;
                auVar22 = auVar20;
              }
              else {
                uVar8 = 0;
                register0x00000008 = (BADSPACEBASE *)&uStack_200;
                uVar4 = /*STR('L_WM')*/ uRam0000000003d6f260;
                unaff_x29 = pppppppuStack_210;
                unaff_x30 = puStack_208;
                auVar22 = auVar19;
              }
            }
            else {
              uVar8 = 0;
              register0x00000008 = (BADSPACEBASE *)&uStack_1b0;
              uVar4 = /*STR('L_WD')*/ uRam0000000003d6f248;
              unaff_x29 = pppppppuStack_1c0;
              unaff_x30 = puStack_1b8;
              auVar22 = auVar18;
            }
          }
          else {
            uVar8 = 0;
            register0x00000008 = (BADSPACEBASE *)&uStack_160;
            uVar4 = /*STR('L_WP')*/ uRam0000000003d6f268;
            unaff_x29 = pppppppuStack_170;
            unaff_x30 = puStack_168;
            auVar22 = auVar17;
          }
        }
        else {
          uVar8 = 0;
          register0x00000008 = (BADSPACEBASE *)&uStack_110;
          uVar4 = /*STR('L_WG')*/ uRam0000000003d6f250;
          unaff_x29 = pppppppuStack_120;
          unaff_x30 = puStack_118;
          auVar22 = auVar16;
        }
      }
      else {
        uVar8 = 0;
        register0x00000008 = (BADSPACEBASE *)&uStack_c0;
        uVar4 = /*STR('L_WS')*/ uRam0000000003d6f270;
        unaff_x29 = pppppppuStack_d0;
        unaff_x30 = puStack_c8;
        auVar22 = auVar15;
      }
    }
    else {
      uVar8 = 0;
      register0x00000008 = (BADSPACEBASE *)auStack_70;
      uVar4 = /*STR('L_WB')*/ uRam0000000003d6f240;
      unaff_x29 = pppppppuStack_80;
      unaff_x30 = puStack_78;
    }
  }
  else {
    uVar8 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
  }
  uStack_270 = auVar20._8_8_;
  lStack_268 = auVar20._0_8_;
  uStack_220 = auVar19._8_8_;
  lStack_218 = auVar19._0_8_;
  uStack_1d0 = auVar18._8_8_;
  lStack_1c8 = auVar18._0_8_;
  uStack_180 = auVar17._8_8_;
  lStack_178 = auVar17._0_8_;
  uStack_130 = auVar16._8_8_;
  lStack_128 = auVar16._0_8_;
  uStack_e0 = auVar15._8_8_;
  lStack_d8 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar22._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar22._0_8_;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar4,uVar8,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return uVar8;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar22 = func_0x00f78af4();
  uVar7 = auVar22._8_8_;
  lVar3 = auVar22._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar4;
  *(ulong *)((long)register0x00000008 + -0x60) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar8 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar7);
  lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar8 < 0) {
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x118) != 0)) {
      uVar8 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar5 + 0x118),uVar7,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar8;
    }
  }
  else if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x118), lVar5 != 0)) {
    if (*(uint *)(lVar5 + 0x18) <= (uint)uVar8) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (uVar8 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar5 != 0) && (uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar5,lVar12,5,0), (uVar6 & 1) != 0)) {
      return uVar6;
    }
    lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x118) != 0)) {
      uVar8 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar5 + 0x118),uVar8,uVar7,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar22 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar7;
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(long *)((long)register0x00000008 + -0x98) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar22._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar8 = 0;
    do {
      uVar2 = (uint)uVar8;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar22._8_8_,5,0);
      if ((uVar6 & 1) != 0) {
        return uVar8;
      }
      uVar8 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147eb60 | Atlas.League.LeaguePlayerSave.SetReplayCountDay
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeaguePlayerSave__SetReplayCountDay
                (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *******pppppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 *******pppppppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 *******pppppppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  puVar3 = (undefined8 *)auStack_40;
  uVar14 = 0x3d6f218;
  uStack_34 = param_2;
  if ((bRam0000000003eb48f8 & 1) == 0) {
    func_0x00f78a20(0x3d6f218);
    bRam0000000003eb48f8 = 1;
  }
  uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  uVar5 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar5,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),uVar5,param_3,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar6 = Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x10),0);
      return uVar6;
    }
  }
  lVar7 = func_0x00f78af4();
  puStack_48 = &Atlas_League_LeaguePlayerSave__get_WeeksBronzeTotal;
  uStack_60 = param_3;
  lStack_58 = param_1;
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48e7 & 1) == 0) {
    func_0x00f78a20(0x3d6f240);
    bRam0000000003eb48e7 = 1;
  }
  auVar1._8_8_ = uStack_60;
  auVar1._0_8_ = lStack_58;
  auVar21._8_8_ = uStack_240;
  auVar21._0_8_ = lStack_238;
  auVar20._8_8_ = uStack_1f0;
  auVar20._0_8_ = lStack_1e8;
  auVar19._8_8_ = uStack_1a0;
  auVar19._0_8_ = lStack_198;
  auVar18._8_8_ = uStack_150;
  auVar18._0_8_ = lStack_148;
  auVar17._8_8_ = uStack_100;
  auVar17._0_8_ = lStack_f8;
  auVar23._8_8_ = uStack_b0;
  auVar23._0_8_ = lStack_a8;
  lVar8 = *(long *)(lVar7 + 0x10);
  uVar5 = /*STR('L_WB')*/ uRam0000000003d6f240;
  pppppppuVar15 = pppppppuStack_50;
  puVar16 = puStack_48;
  if (lVar8 == 0) {
    auVar23 = func_0x00f78af4();
    lVar8 = auVar23._0_8_;
    uStack_90 = 0x3eb4000;
    uStack_88 = 0x3d6f218;
    uStack_80 = 0x3eb4000;
    puStack_68 = &Atlas_League_LeaguePlayerSave__set_WeeksBronzeTotal;
    uVar14 = 0x3eb4000;
    lStack_78 = lVar7;
    pppppppuStack_70 = &pppppppuStack_50;
    if ((bRam0000000003eb48e8 & 1) == 0) {
      func_0x00f78a20(0x3d6f240);
      bRam0000000003eb48e8 = 1;
    }
    if (*(long *)(lVar8 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar8 + 0x10),/*STR('L_WB')*/ uRam0000000003d6f240,auVar23._8_8_,0);
      uVar6 = *(ulong *)(lVar8 + 0x10);
      if (uVar6 != 0) goto code_r0x014eb72c;
    }
    lVar7 = func_0x00f78af4();
    puStack_98 = &Atlas_League_LeaguePlayerSave__get_WeeksSilverTotal;
    pppppppuStack_a0 = &pppppppuStack_70;
    if ((bRam0000000003eb48e9 & 1) == 0) {
      uStack_b0 = auVar23._8_8_;
      lStack_a8 = lVar8;
      func_0x00f78a20(0x3d6f270);
      auVar23._8_8_ = uStack_b0;
      auVar23._0_8_ = lStack_a8;
      bRam0000000003eb48e9 = 1;
    }
    auVar21._8_8_ = uStack_240;
    auVar21._0_8_ = lStack_238;
    auVar20._8_8_ = uStack_1f0;
    auVar20._0_8_ = lStack_1e8;
    auVar19._8_8_ = uStack_1a0;
    auVar19._0_8_ = lStack_198;
    auVar18._8_8_ = uStack_150;
    auVar18._0_8_ = lStack_148;
    auVar17._8_8_ = uStack_100;
    auVar17._0_8_ = lStack_f8;
    uStack_b0 = auVar23._8_8_;
    lStack_a8 = auVar23._0_8_;
    lVar8 = *(long *)(lVar7 + 0x10);
    if (lVar8 == 0) {
      auVar17 = func_0x00f78af4();
      lVar8 = auVar17._0_8_;
      uStack_e0 = 0x3eb4000;
      uStack_d8 = 0x3eb4000;
      uStack_d0 = 0x3eb4000;
      puStack_b8 = &Atlas_League_LeaguePlayerSave__set_WeeksSilverTotal;
      uVar14 = 0x3eb4000;
      lStack_c8 = lVar7;
      pppppppuStack_c0 = &pppppppuStack_a0;
      if ((bRam0000000003eb48ea & 1) == 0) {
        func_0x00f78a20(0x3d6f270);
        bRam0000000003eb48ea = 1;
      }
      if (*(long *)(lVar8 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar8 + 0x10),/*STR('L_WS')*/ uRam0000000003d6f270,auVar17._8_8_,0);
        uVar6 = *(ulong *)(lVar8 + 0x10);
        if (uVar6 != 0) goto code_r0x014eb72c;
      }
      lVar7 = func_0x00f78af4();
      puStack_e8 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldTotal;
      pppppppuStack_f0 = &pppppppuStack_c0;
      if ((bRam0000000003eb48eb & 1) == 0) {
        uStack_100 = auVar17._8_8_;
        lStack_f8 = lVar8;
        func_0x00f78a20(0x3d6f250);
        auVar17._8_8_ = uStack_100;
        auVar17._0_8_ = lStack_f8;
        bRam0000000003eb48eb = 1;
      }
      auVar21._8_8_ = uStack_240;
      auVar21._0_8_ = lStack_238;
      auVar20._8_8_ = uStack_1f0;
      auVar20._0_8_ = lStack_1e8;
      auVar19._8_8_ = uStack_1a0;
      auVar19._0_8_ = lStack_198;
      auVar18._8_8_ = uStack_150;
      auVar18._0_8_ = lStack_148;
      uStack_100 = auVar17._8_8_;
      lStack_f8 = auVar17._0_8_;
      auVar23._8_8_ = uStack_b0;
      auVar23._0_8_ = lStack_a8;
      lVar8 = *(long *)(lVar7 + 0x10);
      if (lVar8 == 0) {
        auVar18 = func_0x00f78af4();
        lVar8 = auVar18._0_8_;
        uStack_130 = 0x3eb4000;
        uStack_128 = 0x3eb4000;
        uStack_120 = 0x3eb4000;
        puStack_108 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal;
        uVar14 = 0x3eb4000;
        lStack_118 = lVar7;
        pppppppuStack_110 = &pppppppuStack_f0;
        if ((bRam0000000003eb48ec & 1) == 0) {
          func_0x00f78a20(0x3d6f250);
          bRam0000000003eb48ec = 1;
        }
        if (*(long *)(lVar8 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar8 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,auVar18._8_8_,0);
          uVar6 = *(ulong *)(lVar8 + 0x10);
          if (uVar6 != 0) goto code_r0x014eb72c;
        }
        lVar7 = func_0x00f78af4();
        puStack_138 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
        pppppppuStack_140 = &pppppppuStack_110;
        if ((bRam0000000003eb48ed & 1) == 0) {
          uStack_150 = auVar18._8_8_;
          lStack_148 = lVar8;
          func_0x00f78a20(0x3d6f268);
          auVar18._8_8_ = uStack_150;
          auVar18._0_8_ = lStack_148;
          bRam0000000003eb48ed = 1;
        }
        auVar21._8_8_ = uStack_240;
        auVar21._0_8_ = lStack_238;
        auVar20._8_8_ = uStack_1f0;
        auVar20._0_8_ = lStack_1e8;
        auVar19._8_8_ = uStack_1a0;
        auVar19._0_8_ = lStack_198;
        uStack_150 = auVar18._8_8_;
        lStack_148 = auVar18._0_8_;
        auVar17._8_8_ = uStack_100;
        auVar17._0_8_ = lStack_f8;
        auVar23._8_8_ = uStack_b0;
        auVar23._0_8_ = lStack_a8;
        lVar8 = *(long *)(lVar7 + 0x10);
        if (lVar8 == 0) {
          auVar19 = func_0x00f78af4();
          lVar8 = auVar19._0_8_;
          uStack_180 = 0x3eb4000;
          uStack_178 = 0x3eb4000;
          uStack_170 = 0x3eb4000;
          puStack_158 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
          uVar14 = 0x3eb4000;
          lStack_168 = lVar7;
          pppppppuStack_160 = &pppppppuStack_140;
          if ((bRam0000000003eb48ee & 1) == 0) {
            func_0x00f78a20(0x3d6f268);
            bRam0000000003eb48ee = 1;
          }
          if (*(long *)(lVar8 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData
                      (*(long *)(lVar8 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar19._8_8_,0);
            uVar6 = *(ulong *)(lVar8 + 0x10);
            if (uVar6 != 0) goto code_r0x014eb72c;
          }
          lVar7 = func_0x00f78af4();
          puStack_188 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
          pppppppuStack_190 = &pppppppuStack_160;
          if ((bRam0000000003eb48ef & 1) == 0) {
            uStack_1a0 = auVar19._8_8_;
            lStack_198 = lVar8;
            func_0x00f78a20(0x3d6f248);
            auVar19._8_8_ = uStack_1a0;
            auVar19._0_8_ = lStack_198;
            bRam0000000003eb48ef = 1;
          }
          auVar21._8_8_ = uStack_240;
          auVar21._0_8_ = lStack_238;
          auVar20._8_8_ = uStack_1f0;
          auVar20._0_8_ = lStack_1e8;
          uStack_1a0 = auVar19._8_8_;
          lStack_198 = auVar19._0_8_;
          auVar18._8_8_ = uStack_150;
          auVar18._0_8_ = lStack_148;
          auVar17._8_8_ = uStack_100;
          auVar17._0_8_ = lStack_f8;
          auVar23._8_8_ = uStack_b0;
          auVar23._0_8_ = lStack_a8;
          lVar8 = *(long *)(lVar7 + 0x10);
          if (lVar8 == 0) {
            auVar20 = func_0x00f78af4();
            lVar8 = auVar20._0_8_;
            uStack_1d0 = 0x3eb4000;
            uStack_1c8 = 0x3eb4000;
            uStack_1c0 = 0x3eb4000;
            puStack_1a8 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
            uVar14 = 0x3eb4000;
            lStack_1b8 = lVar7;
            pppppppuStack_1b0 = &pppppppuStack_190;
            if ((bRam0000000003eb48f0 & 1) == 0) {
              func_0x00f78a20(0x3d6f248);
              bRam0000000003eb48f0 = 1;
            }
            if (*(long *)(lVar8 + 0x10) != 0) {
              Atlas_Save_SaveManager__SetIntData
                        (*(long *)(lVar8 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar20._8_8_,0);
              uVar6 = *(ulong *)(lVar8 + 0x10);
              if (uVar6 != 0) goto code_r0x014eb72c;
            }
            lVar7 = func_0x00f78af4();
            puStack_1d8 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
            pppppppuStack_1e0 = &pppppppuStack_1b0;
            if ((bRam0000000003eb48f1 & 1) == 0) {
              uStack_1f0 = auVar20._8_8_;
              lStack_1e8 = lVar8;
              func_0x00f78a20(0x3d6f260);
              auVar20._8_8_ = uStack_1f0;
              auVar20._0_8_ = lStack_1e8;
              bRam0000000003eb48f1 = 1;
            }
            auVar21._8_8_ = uStack_240;
            auVar21._0_8_ = lStack_238;
            uStack_1f0 = auVar20._8_8_;
            lStack_1e8 = auVar20._0_8_;
            auVar19._8_8_ = uStack_1a0;
            auVar19._0_8_ = lStack_198;
            auVar18._8_8_ = uStack_150;
            auVar18._0_8_ = lStack_148;
            auVar17._8_8_ = uStack_100;
            auVar17._0_8_ = lStack_f8;
            auVar23._8_8_ = uStack_b0;
            auVar23._0_8_ = lStack_a8;
            lVar8 = *(long *)(lVar7 + 0x10);
            if (lVar8 == 0) {
              auVar21 = func_0x00f78af4();
              lVar8 = auVar21._0_8_;
              uStack_220 = 0x3eb4000;
              uStack_218 = 0x3eb4000;
              uStack_210 = 0x3eb4000;
              puStack_1f8 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
              uVar14 = 0x3eb4000;
              lStack_208 = lVar7;
              pppppppuStack_200 = &pppppppuStack_1e0;
              if ((bRam0000000003eb48f2 & 1) == 0) {
                func_0x00f78a20(0x3d6f260);
                bRam0000000003eb48f2 = 1;
              }
              if (*(long *)(lVar8 + 0x10) != 0) {
                Atlas_Save_SaveManager__SetIntData
                          (*(long *)(lVar8 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar21._8_8_,0);
                uVar6 = *(ulong *)(lVar8 + 0x10);
                if (uVar6 != 0) goto code_r0x014eb72c;
              }
              lVar7 = func_0x00f78af4();
              puStack_228 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
              pppppppuStack_230 = &pppppppuStack_200;
              if ((bRam0000000003eb48f3 & 1) == 0) {
                uStack_240 = auVar21._8_8_;
                lStack_238 = lVar8;
                func_0x00f78a20(0x3d6f258);
                auVar21._8_8_ = uStack_240;
                auVar21._0_8_ = lStack_238;
                bRam0000000003eb48f3 = 1;
              }
              uStack_240 = auVar21._8_8_;
              lStack_238 = auVar21._0_8_;
              auVar20._8_8_ = uStack_1f0;
              auVar20._0_8_ = lStack_1e8;
              auVar19._8_8_ = uStack_1a0;
              auVar19._0_8_ = lStack_198;
              auVar18._8_8_ = uStack_150;
              auVar18._0_8_ = lStack_148;
              auVar17._8_8_ = uStack_100;
              auVar17._0_8_ = lStack_f8;
              auVar23._8_8_ = uStack_b0;
              auVar23._0_8_ = lStack_a8;
              lVar8 = *(long *)(lVar7 + 0x10);
              if (lVar8 == 0) {
                auVar22 = func_0x00f78af4();
                uStack_270 = 0x3eb4000;
                uStack_268 = 0x3eb4000;
                uStack_260 = 0x3eb4000;
                puStack_248 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
                pppppppuVar15 = &pppppppuStack_250;
                lStack_258 = lVar7;
                pppppppuStack_250 = &pppppppuStack_230;
                if ((bRam0000000003eb48f4 & 1) == 0) {
                  func_0x00f78a20(0x3d6f258);
                  bRam0000000003eb48f4 = 1;
                }
                lVar7 = *(long *)(auVar22._0_8_ + 0x10);
                if (lVar7 != 0) {
                  Atlas_Save_SaveManager__SetIntData(lVar7,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar22._8_8_,0);
                  uVar6 = *(ulong *)(auVar22._0_8_ + 0x10);
                  if (uVar6 != 0) {
code_r0x014eb72c:
                    *(undefined1 *)(uVar6 + 0x110) = 1;
                    return uVar6;
                  }
                }
                puVar16 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
                auVar23 = func_0x00f78af4();
                uVar5 = 1;
                puVar2 = &uStack_270;
                uVar14 = 0x3eb4000;
                do {
                  uVar11 = auVar23._8_8_;
                  lVar7 = auVar23._0_8_;
                  uVar13 = auVar22._8_8_;
                  uVar12 = auVar22._0_8_;
                  auVar22._8_8_ = uVar5;
                  auVar22._0_8_ = lVar7;
                  *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
                  *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
                  *(undefined8 *)((long)puVar2 + -0x30) = 0x3eb4000;
                  *(undefined8 *)((long)puVar2 + -0x28) = uVar14;
                  *(undefined8 *)((long)puVar2 + -0x20) = uVar13;
                  *(undefined8 *)((long)puVar2 + -0x18) = uVar12;
                  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar15;
                  *(undefined **)((long)puVar2 + -8) = puVar16;
                  pppppppuVar15 = (undefined8 *******)((long)puVar2 + -0x10);
                  unaff_x23 = 0x3d6f220;
                  if ((bRam0000000003eb48f6 & 1) == 0) {
                    func_0x00f78a20(0x3d6f220);
                    bRam0000000003eb48f6 = 1;
                  }
                  uVar14 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar11,0);
                  if (*(long *)(lVar7 + 0x10) != 0) {
                    Atlas_Save_SaveManager__SetIntData(*(long *)(lVar7 + 0x10),uVar14,uVar5,0);
                    uVar6 = *(ulong *)(lVar7 + 0x10);
                    if (uVar6 != 0) goto code_r0x014eb72c;
                  }
                  puVar16 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
                  auVar23 = func_0x00f78af4();
                  uVar5 = 0;
                  puVar2 = (undefined8 *)((long)puVar2 + -0x40);
                  uVar14 = uVar11;
                } while( true );
              }
              puVar3 = &uStack_220;
              uVar5 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
              pppppppuVar15 = pppppppuStack_230;
              puVar16 = puStack_228;
              auVar1 = auVar21;
            }
            else {
              puVar3 = &uStack_1d0;
              uVar5 = /*STR('L_WM')*/ uRam0000000003d6f260;
              pppppppuVar15 = pppppppuStack_1e0;
              puVar16 = puStack_1d8;
              auVar1 = auVar20;
            }
          }
          else {
            puVar3 = &uStack_180;
            uVar5 = /*STR('L_WD')*/ uRam0000000003d6f248;
            pppppppuVar15 = pppppppuStack_190;
            puVar16 = puStack_188;
            auVar1 = auVar19;
          }
        }
        else {
          puVar3 = &uStack_130;
          uVar5 = /*STR('L_WP')*/ uRam0000000003d6f268;
          pppppppuVar15 = pppppppuStack_140;
          puVar16 = puStack_138;
          auVar1 = auVar18;
        }
      }
      else {
        puVar3 = &uStack_e0;
        uVar5 = /*STR('L_WG')*/ uRam0000000003d6f250;
        pppppppuVar15 = pppppppuStack_f0;
        puVar16 = puStack_e8;
        auVar1 = auVar17;
      }
    }
    else {
      puVar3 = &uStack_90;
      uVar5 = /*STR('L_WS')*/ uRam0000000003d6f270;
      pppppppuVar15 = pppppppuStack_a0;
      puVar16 = puStack_98;
      auVar1 = auVar23;
    }
  }
  uStack_240 = auVar21._8_8_;
  lStack_238 = auVar21._0_8_;
  uStack_1f0 = auVar20._8_8_;
  lStack_1e8 = auVar20._0_8_;
  uStack_1a0 = auVar19._8_8_;
  lStack_198 = auVar19._0_8_;
  uStack_150 = auVar18._8_8_;
  lStack_148 = auVar18._0_8_;
  uStack_100 = auVar17._8_8_;
  lStack_f8 = auVar17._0_8_;
  uStack_b0 = auVar23._8_8_;
  lStack_a8 = auVar23._0_8_;
  *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar3 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar3 + -0x28) = uVar14;
  *(long *)((long)puVar3 + -0x20) = auVar1._8_8_;
  *(long *)((long)puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar15;
  *(undefined **)((long)puVar3 + -8) = puVar16;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar5,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar8);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = *(undefined8 *)((long)puVar3 + -0x40);
  *(undefined8 *)((long)puVar3 + -0x40) = uVar14;
  *(undefined8 *)((long)puVar3 + -0x38) = *(undefined8 *)((long)puVar3 + -0x38);
  *(undefined8 *)((long)puVar3 + -0x30) = *(undefined8 *)((long)puVar3 + -0x30);
  *(undefined8 *)((long)puVar3 + -0x28) = *(undefined8 *)((long)puVar3 + -0x28);
  *(undefined8 *)((long)puVar3 + -0x20) = *(undefined8 *)((long)puVar3 + -0x20);
  *(undefined8 *)((long)puVar3 + -0x18) = *(undefined8 *)((long)puVar3 + -0x18);
  *(undefined8 *)((long)puVar3 + -0x10) = *(undefined8 *)((long)puVar3 + -0x10);
  *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
  lVar8 = lVar7;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = Atlas_Save_SaveManager__GetIntDataIndex(uVar5,lVar7);
  if ((int)uVar4 < 0) {
    return 0;
  }
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x110), lVar7 != 0)) {
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar7 + 0x10) + (ulong)uVar4 * 0x10 + 0x28);
  }
  auVar23 = func_0x00f78af4();
  uVar11 = auVar23._8_8_;
  lVar7 = auVar23._0_8_;
  *(undefined8 *)((long)puVar3 + -0x80) = uVar14;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)puVar3 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)puVar3 + -0x68) = uVar5;
  *(undefined8 *)((long)puVar3 + -0x60) = 0;
  *(undefined8 *)((long)puVar3 + -0x58) = 0;
  *(undefined1 **)((long)puVar3 + -0x50) = (undefined1 *)((long)puVar3 + -0x10);
  *(code **)((long)puVar3 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar6 = Atlas_Save_SaveManager__GetStringDataIndex(lVar7,uVar11);
  lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar7);
  if ((int)(uint)uVar6 < 0) {
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x118) != 0)) {
      uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar9 + 0x118),uVar11,lVar8,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar7 + 0x110) = 1;
      return uVar6;
    }
  }
  else if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x118), lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0x18) <= (uint)uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (uVar6 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar9 != 0) && (uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar9,lVar8,5,0), (uVar10 & 1) != 0)) {
      return uVar10;
    }
    lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar7);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x118) != 0)) {
      uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar9 + 0x118),uVar6,uVar11,lVar8,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar23 = func_0x00f78af4();
  *(ulong *)((long)puVar3 + -0xb0) = uVar6;
  *(undefined8 *)((long)puVar3 + -0xa8) = uVar11;
  *(long *)((long)puVar3 + -0xa0) = lVar8;
  *(long *)((long)puVar3 + -0x98) = lVar7;
  *(undefined1 **)((long)puVar3 + -0x90) = (undefined1 *)((long)puVar3 + -0x50);
  *(code **)((long)puVar3 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar7 = Atlas_Save_SaveManager__get_SaveData(auVar23._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)puVar3 + -0xb0) = *(undefined8 *)((long)puVar3 + -0xb0);
  *(undefined8 *)((long)puVar3 + -0xa8) = *(undefined8 *)((long)puVar3 + -0xa8);
  *(undefined8 *)((long)puVar3 + -0xa0) = *(undefined8 *)((long)puVar3 + -0xa0);
  *(undefined8 *)((long)puVar3 + -0x98) = *(undefined8 *)((long)puVar3 + -0x98);
  *(undefined8 *)((long)puVar3 + -0x90) = *(undefined8 *)((long)puVar3 + -0x90);
  *(undefined8 *)((long)puVar3 + -0x88) = *(undefined8 *)((long)puVar3 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + 0x118), lVar8 != 0)) {
    uVar6 = 0;
    do {
      uVar4 = (uint)uVar6;
      if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar4) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
      if (lVar8 == 0) break;
      uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar23._8_8_,5,0);
      if ((uVar10 & 1) != 0) {
        return uVar6;
      }
      uVar6 = (ulong)(uVar4 + 1);
      lVar8 = *(long *)(lVar7 + 0x118);
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147ec04 | Atlas.League.LeaguePlayerSave.get_WeeksBronzeTotal
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeaguePlayerSave__get_WeeksBronzeTotal(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 *******pppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  auVar22._8_8_ = unaff_x20;
  auVar22._0_8_ = unaff_x19;
  if ((bRam0000000003eb48e7 & 1) == 0) {
    func_0x00f78a20(0x3d6f240);
    bRam0000000003eb48e7 = 1;
  }
  auVar20._8_8_ = uStack_200;
  auVar20._0_8_ = lStack_1f8;
  auVar19._8_8_ = uStack_1b0;
  auVar19._0_8_ = lStack_1a8;
  auVar18._8_8_ = uStack_160;
  auVar18._0_8_ = lStack_158;
  auVar17._8_8_ = uStack_110;
  auVar17._0_8_ = lStack_108;
  auVar16._8_8_ = uStack_c0;
  auVar16._0_8_ = lStack_b8;
  auVar15._8_8_ = uStack_70;
  auVar15._0_8_ = lStack_68;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = /*STR('L_WB')*/ uRam0000000003d6f240;
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._0_8_;
    puStack_28 = &Atlas_League_LeaguePlayerSave__set_WeeksBronzeTotal;
    unaff_x21 = 0x3eb4000;
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48e8 & 1) == 0) {
      func_0x00f78a20(0x3d6f240);
      bRam0000000003eb48e8 = 1;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar3 + 0x10),/*STR('L_WB')*/ uRam0000000003d6f240,auVar15._8_8_,0);
      uVar5 = *(ulong *)(lVar3 + 0x10);
      if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar12 = func_0x00f78af4();
    puStack_58 = &Atlas_League_LeaguePlayerSave__get_WeeksSilverTotal;
    pppppppuStack_60 = &ppppppuStack_30;
    if ((bRam0000000003eb48e9 & 1) == 0) {
      uStack_70 = auVar15._8_8_;
      lStack_68 = lVar3;
      func_0x00f78a20(0x3d6f270);
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      bRam0000000003eb48e9 = 1;
    }
    auVar20._8_8_ = uStack_200;
    auVar20._0_8_ = lStack_1f8;
    auVar19._8_8_ = uStack_1b0;
    auVar19._0_8_ = lStack_1a8;
    auVar18._8_8_ = uStack_160;
    auVar18._0_8_ = lStack_158;
    auVar17._8_8_ = uStack_110;
    auVar17._0_8_ = lStack_108;
    auVar16._8_8_ = uStack_c0;
    auVar16._0_8_ = lStack_b8;
    uStack_70 = auVar15._8_8_;
    lStack_68 = auVar15._0_8_;
    lVar3 = *(long *)(lVar12 + 0x10);
    if (lVar3 == 0) {
      auVar16 = func_0x00f78af4();
      lVar3 = auVar16._0_8_;
      puStack_78 = &Atlas_League_LeaguePlayerSave__set_WeeksSilverTotal;
      unaff_x21 = 0x3eb4000;
      pppppppuStack_80 = &pppppppuStack_60;
      if ((bRam0000000003eb48ea & 1) == 0) {
        func_0x00f78a20(0x3d6f270);
        bRam0000000003eb48ea = 1;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar3 + 0x10),/*STR('L_WS')*/ uRam0000000003d6f270,auVar16._8_8_,0);
        uVar5 = *(ulong *)(lVar3 + 0x10);
        if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar12 = func_0x00f78af4();
      puStack_a8 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldTotal;
      pppppppuStack_b0 = &pppppppuStack_80;
      if ((bRam0000000003eb48eb & 1) == 0) {
        uStack_c0 = auVar16._8_8_;
        lStack_b8 = lVar3;
        func_0x00f78a20(0x3d6f250);
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        bRam0000000003eb48eb = 1;
      }
      auVar20._8_8_ = uStack_200;
      auVar20._0_8_ = lStack_1f8;
      auVar19._8_8_ = uStack_1b0;
      auVar19._0_8_ = lStack_1a8;
      auVar18._8_8_ = uStack_160;
      auVar18._0_8_ = lStack_158;
      auVar17._8_8_ = uStack_110;
      auVar17._0_8_ = lStack_108;
      uStack_c0 = auVar16._8_8_;
      lStack_b8 = auVar16._0_8_;
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      lVar3 = *(long *)(lVar12 + 0x10);
      if (lVar3 == 0) {
        auVar17 = func_0x00f78af4();
        lVar3 = auVar17._0_8_;
        puStack_c8 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal;
        unaff_x21 = 0x3eb4000;
        pppppppuStack_d0 = &pppppppuStack_b0;
        if ((bRam0000000003eb48ec & 1) == 0) {
          func_0x00f78a20(0x3d6f250);
          bRam0000000003eb48ec = 1;
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar3 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,auVar17._8_8_,0);
          uVar5 = *(ulong *)(lVar3 + 0x10);
          if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        lVar12 = func_0x00f78af4();
        puStack_f8 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
        pppppppuStack_100 = &pppppppuStack_d0;
        if ((bRam0000000003eb48ed & 1) == 0) {
          uStack_110 = auVar17._8_8_;
          lStack_108 = lVar3;
          func_0x00f78a20(0x3d6f268);
          auVar17._8_8_ = uStack_110;
          auVar17._0_8_ = lStack_108;
          bRam0000000003eb48ed = 1;
        }
        auVar20._8_8_ = uStack_200;
        auVar20._0_8_ = lStack_1f8;
        auVar19._8_8_ = uStack_1b0;
        auVar19._0_8_ = lStack_1a8;
        auVar18._8_8_ = uStack_160;
        auVar18._0_8_ = lStack_158;
        uStack_110 = auVar17._8_8_;
        lStack_108 = auVar17._0_8_;
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        auVar15._8_8_ = uStack_70;
        auVar15._0_8_ = lStack_68;
        lVar3 = *(long *)(lVar12 + 0x10);
        if (lVar3 == 0) {
          auVar18 = func_0x00f78af4();
          lVar3 = auVar18._0_8_;
          puStack_118 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
          unaff_x21 = 0x3eb4000;
          pppppppuStack_120 = &pppppppuStack_100;
          if ((bRam0000000003eb48ee & 1) == 0) {
            func_0x00f78a20(0x3d6f268);
            bRam0000000003eb48ee = 1;
          }
          if (*(long *)(lVar3 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData
                      (*(long *)(lVar3 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar18._8_8_,0);
            uVar5 = *(ulong *)(lVar3 + 0x10);
            if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
          }
          lVar12 = func_0x00f78af4();
          puStack_148 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
          pppppppuStack_150 = &pppppppuStack_120;
          if ((bRam0000000003eb48ef & 1) == 0) {
            uStack_160 = auVar18._8_8_;
            lStack_158 = lVar3;
            func_0x00f78a20(0x3d6f248);
            auVar18._8_8_ = uStack_160;
            auVar18._0_8_ = lStack_158;
            bRam0000000003eb48ef = 1;
          }
          auVar20._8_8_ = uStack_200;
          auVar20._0_8_ = lStack_1f8;
          auVar19._8_8_ = uStack_1b0;
          auVar19._0_8_ = lStack_1a8;
          uStack_160 = auVar18._8_8_;
          lStack_158 = auVar18._0_8_;
          auVar17._8_8_ = uStack_110;
          auVar17._0_8_ = lStack_108;
          auVar16._8_8_ = uStack_c0;
          auVar16._0_8_ = lStack_b8;
          auVar15._8_8_ = uStack_70;
          auVar15._0_8_ = lStack_68;
          lVar3 = *(long *)(lVar12 + 0x10);
          if (lVar3 == 0) {
            auVar19 = func_0x00f78af4();
            lVar3 = auVar19._0_8_;
            puStack_168 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
            unaff_x21 = 0x3eb4000;
            pppppppuStack_170 = &pppppppuStack_150;
            if ((bRam0000000003eb48f0 & 1) == 0) {
              func_0x00f78a20(0x3d6f248);
              bRam0000000003eb48f0 = 1;
            }
            if (*(long *)(lVar3 + 0x10) != 0) {
              Atlas_Save_SaveManager__SetIntData
                        (*(long *)(lVar3 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar19._8_8_,0);
              uVar5 = *(ulong *)(lVar3 + 0x10);
              if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
            }
            lVar12 = func_0x00f78af4();
            puStack_198 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
            pppppppuStack_1a0 = &pppppppuStack_170;
            if ((bRam0000000003eb48f1 & 1) == 0) {
              uStack_1b0 = auVar19._8_8_;
              lStack_1a8 = lVar3;
              func_0x00f78a20(0x3d6f260);
              auVar19._8_8_ = uStack_1b0;
              auVar19._0_8_ = lStack_1a8;
              bRam0000000003eb48f1 = 1;
            }
            auVar20._8_8_ = uStack_200;
            auVar20._0_8_ = lStack_1f8;
            uStack_1b0 = auVar19._8_8_;
            lStack_1a8 = auVar19._0_8_;
            auVar18._8_8_ = uStack_160;
            auVar18._0_8_ = lStack_158;
            auVar17._8_8_ = uStack_110;
            auVar17._0_8_ = lStack_108;
            auVar16._8_8_ = uStack_c0;
            auVar16._0_8_ = lStack_b8;
            auVar15._8_8_ = uStack_70;
            auVar15._0_8_ = lStack_68;
            lVar3 = *(long *)(lVar12 + 0x10);
            if (lVar3 == 0) {
              auVar20 = func_0x00f78af4();
              lVar3 = auVar20._0_8_;
              puStack_1b8 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
              unaff_x21 = 0x3eb4000;
              pppppppuStack_1c0 = &pppppppuStack_1a0;
              if ((bRam0000000003eb48f2 & 1) == 0) {
                func_0x00f78a20(0x3d6f260);
                bRam0000000003eb48f2 = 1;
              }
              if (*(long *)(lVar3 + 0x10) != 0) {
                Atlas_Save_SaveManager__SetIntData
                          (*(long *)(lVar3 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar20._8_8_,0);
                uVar5 = *(ulong *)(lVar3 + 0x10);
                if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
              }
              lVar12 = func_0x00f78af4();
              puStack_1e8 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
              pppppppuStack_1f0 = &pppppppuStack_1c0;
              if ((bRam0000000003eb48f3 & 1) == 0) {
                uStack_200 = auVar20._8_8_;
                lStack_1f8 = lVar3;
                func_0x00f78a20(0x3d6f258);
                auVar20._8_8_ = uStack_200;
                auVar20._0_8_ = lStack_1f8;
                bRam0000000003eb48f3 = 1;
              }
              uStack_200 = auVar20._8_8_;
              lStack_1f8 = auVar20._0_8_;
              auVar19._8_8_ = uStack_1b0;
              auVar19._0_8_ = lStack_1a8;
              auVar18._8_8_ = uStack_160;
              auVar18._0_8_ = lStack_158;
              auVar17._8_8_ = uStack_110;
              auVar17._0_8_ = lStack_108;
              auVar16._8_8_ = uStack_c0;
              auVar16._0_8_ = lStack_b8;
              auVar15._8_8_ = uStack_70;
              auVar15._0_8_ = lStack_68;
              lVar3 = *(long *)(lVar12 + 0x10);
              if (lVar3 == 0) {
                auVar21 = func_0x00f78af4();
                puStack_208 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
                pppppppuVar13 = &pppppppuStack_210;
                pppppppuStack_210 = &pppppppuStack_1f0;
                if ((bRam0000000003eb48f4 & 1) == 0) {
                  func_0x00f78a20(0x3d6f258);
                  bRam0000000003eb48f4 = 1;
                }
                lVar3 = *(long *)(auVar21._0_8_ + 0x10);
                if (lVar3 != 0) {
                  Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar21._8_8_,0);
                  uVar5 = *(ulong *)(auVar21._0_8_ + 0x10);
                  if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
                    *(undefined1 *)(uVar5 + 0x110) = 1;
                    return uVar5;
                  }
                }
                puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
                auVar22 = func_0x00f78af4();
                uVar9 = 1;
                puVar1 = &stack0xfffffffffffffdd0;
                uVar4 = 0x3eb4000;
                do {
                  uVar8 = auVar22._8_8_;
                  lVar3 = auVar22._0_8_;
                  uVar11 = auVar21._8_8_;
                  uVar10 = auVar21._0_8_;
                  auVar21._8_8_ = uVar9;
                  auVar21._0_8_ = lVar3;
                  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
                  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
                  *(undefined8 *)(puVar1 + -0x28) = uVar4;
                  *(undefined8 *)(puVar1 + -0x20) = uVar11;
                  *(undefined8 *)(puVar1 + -0x18) = uVar10;
                  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
                  *(undefined **)(puVar1 + -8) = puVar14;
                  pppppppuVar13 = (undefined8 *******)(puVar1 + -0x10);
                  unaff_x22 = 0x3eb4000;
                  unaff_x23 = 0x3d6f220;
                  if ((bRam0000000003eb48f6 & 1) == 0) {
                    func_0x00f78a20(0x3d6f220);
                    bRam0000000003eb48f6 = 1;
                  }
                  uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
                  if (*(long *)(lVar3 + 0x10) != 0) {
                    Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
                    uVar5 = *(ulong *)(lVar3 + 0x10);
                    if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
                  }
                  puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
                  auVar22 = func_0x00f78af4();
                  uVar9 = 0;
                  puVar1 = puVar1 + -0x40;
                  uVar4 = uVar8;
                } while( true );
              }
              register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffe20;
              uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
              unaff_x29 = pppppppuStack_1f0;
              unaff_x30 = puStack_1e8;
              auVar22 = auVar20;
            }
            else {
              register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffe70;
              uVar4 = /*STR('L_WM')*/ uRam0000000003d6f260;
              unaff_x29 = pppppppuStack_1a0;
              unaff_x30 = puStack_198;
              auVar22 = auVar19;
            }
          }
          else {
            register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffec0;
            uVar4 = /*STR('L_WD')*/ uRam0000000003d6f248;
            unaff_x29 = pppppppuStack_150;
            unaff_x30 = puStack_148;
            auVar22 = auVar18;
          }
        }
        else {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
          uVar4 = /*STR('L_WP')*/ uRam0000000003d6f268;
          unaff_x29 = pppppppuStack_100;
          unaff_x30 = puStack_f8;
          auVar22 = auVar17;
        }
      }
      else {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
        uVar4 = /*STR('L_WG')*/ uRam0000000003d6f250;
        unaff_x29 = pppppppuStack_b0;
        unaff_x30 = puStack_a8;
        auVar22 = auVar16;
      }
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      uVar4 = /*STR('L_WS')*/ uRam0000000003d6f270;
      unaff_x29 = pppppppuStack_60;
      unaff_x30 = puStack_58;
      auVar22 = auVar15;
    }
  }
  uStack_200 = auVar20._8_8_;
  lStack_1f8 = auVar20._0_8_;
  uStack_1b0 = auVar19._8_8_;
  lStack_1a8 = auVar19._0_8_;
  uStack_160 = auVar18._8_8_;
  lStack_158 = auVar18._0_8_;
  uStack_110 = auVar17._8_8_;
  lStack_108 = auVar17._0_8_;
  uStack_c0 = auVar16._8_8_;
  lStack_b8 = auVar16._0_8_;
  uStack_70 = auVar15._8_8_;
  lStack_68 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar22._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar22._0_8_;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar4,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar22 = func_0x00f78af4();
  uVar8 = auVar22._8_8_;
  lVar3 = auVar22._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar8);
  lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar5 < 0) {
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar8,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar12,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar8,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar22 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar8;
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(long *)((long)register0x00000008 + -0x98) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar22._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar22._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147ec60 | Atlas.League.LeaguePlayerSave.set_WeeksBronzeTotal
// ============================================================

undefined1  [16]
Atlas_League_LeaguePlayerSave__set_WeeksBronzeTotal(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 *****pppppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *****pppppuStack_180;
  undefined *puStack_178;
  undefined8 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb48e8 & 1) == 0) {
    func_0x00f78a20(0x3d6f240);
    bRam0000000003eb48e8 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_WB')*/ uRam0000000003d6f240,param_2,0);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_League_LeaguePlayerSave__get_WeeksSilverTotal;
  uStack_50 = param_2;
  lStack_48 = param_1;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48e9 & 1) == 0) {
    func_0x00f78a20(0x3d6f270);
    bRam0000000003eb48e9 = 1;
  }
  auVar1._8_8_ = uStack_50;
  auVar1._0_8_ = lStack_48;
  auVar18._8_8_ = uStack_1e0;
  auVar18._0_8_ = lStack_1d8;
  auVar17._8_8_ = uStack_190;
  auVar17._0_8_ = lStack_188;
  auVar16._8_8_ = uStack_140;
  auVar16._0_8_ = lStack_138;
  auVar23._8_8_ = uStack_f0;
  auVar23._0_8_ = lStack_e8;
  auVar21._8_8_ = uStack_a0;
  auVar21._0_8_ = lStack_98;
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    auVar21 = func_0x00f78af4();
    lVar5 = auVar21._0_8_;
    puStack_58 = &Atlas_League_LeaguePlayerSave__set_WeeksSilverTotal;
    pppppuStack_60 = &pppppuStack_40;
    if ((bRam0000000003eb48ea & 1) == 0) {
      func_0x00f78a20(0x3d6f270);
      bRam0000000003eb48ea = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar5 + 0x10),/*STR('L_WS')*/ uRam0000000003d6f270,auVar21._8_8_,0);
      uVar4 = *(ulong *)(lVar5 + 0x10);
      if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar8 = func_0x00f78af4();
    puStack_88 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldTotal;
    pppppuStack_90 = &pppppuStack_60;
    if ((bRam0000000003eb48eb & 1) == 0) {
      uStack_a0 = auVar21._8_8_;
      lStack_98 = lVar5;
      func_0x00f78a20(0x3d6f250);
      auVar21._8_8_ = uStack_a0;
      auVar21._0_8_ = lStack_98;
      bRam0000000003eb48eb = 1;
    }
    auVar18._8_8_ = uStack_1e0;
    auVar18._0_8_ = lStack_1d8;
    auVar17._8_8_ = uStack_190;
    auVar17._0_8_ = lStack_188;
    auVar16._8_8_ = uStack_140;
    auVar16._0_8_ = lStack_138;
    auVar23._8_8_ = uStack_f0;
    auVar23._0_8_ = lStack_e8;
    uStack_a0 = auVar21._8_8_;
    lStack_98 = auVar21._0_8_;
    lVar5 = *(long *)(lVar8 + 0x10);
    if (lVar5 == 0) {
      auVar23 = func_0x00f78af4();
      lVar5 = auVar23._0_8_;
      puStack_a8 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal;
      pppppuStack_b0 = &pppppuStack_90;
      if ((bRam0000000003eb48ec & 1) == 0) {
        func_0x00f78a20(0x3d6f250);
        bRam0000000003eb48ec = 1;
      }
      if (*(long *)(lVar5 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar5 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,auVar23._8_8_,0);
        uVar4 = *(ulong *)(lVar5 + 0x10);
        if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar8 = func_0x00f78af4();
      puStack_d8 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
      pppppuStack_e0 = &pppppuStack_b0;
      if ((bRam0000000003eb48ed & 1) == 0) {
        uStack_f0 = auVar23._8_8_;
        lStack_e8 = lVar5;
        func_0x00f78a20(0x3d6f268);
        auVar23._8_8_ = uStack_f0;
        auVar23._0_8_ = lStack_e8;
        bRam0000000003eb48ed = 1;
      }
      auVar18._8_8_ = uStack_1e0;
      auVar18._0_8_ = lStack_1d8;
      auVar17._8_8_ = uStack_190;
      auVar17._0_8_ = lStack_188;
      auVar16._8_8_ = uStack_140;
      auVar16._0_8_ = lStack_138;
      uStack_f0 = auVar23._8_8_;
      lStack_e8 = auVar23._0_8_;
      auVar21._8_8_ = uStack_a0;
      auVar21._0_8_ = lStack_98;
      lVar5 = *(long *)(lVar8 + 0x10);
      if (lVar5 == 0) {
        auVar16 = func_0x00f78af4();
        lVar5 = auVar16._0_8_;
        puStack_f8 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
        pppppuStack_100 = &pppppuStack_e0;
        if ((bRam0000000003eb48ee & 1) == 0) {
          func_0x00f78a20(0x3d6f268);
          bRam0000000003eb48ee = 1;
        }
        if (*(long *)(lVar5 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar5 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar16._8_8_,0);
          uVar4 = *(ulong *)(lVar5 + 0x10);
          if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        lVar8 = func_0x00f78af4();
        puStack_128 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
        pppppuStack_130 = &pppppuStack_100;
        if ((bRam0000000003eb48ef & 1) == 0) {
          uStack_140 = auVar16._8_8_;
          lStack_138 = lVar5;
          func_0x00f78a20(0x3d6f248);
          auVar16._8_8_ = uStack_140;
          auVar16._0_8_ = lStack_138;
          bRam0000000003eb48ef = 1;
        }
        auVar18._8_8_ = uStack_1e0;
        auVar18._0_8_ = lStack_1d8;
        auVar17._8_8_ = uStack_190;
        auVar17._0_8_ = lStack_188;
        uStack_140 = auVar16._8_8_;
        lStack_138 = auVar16._0_8_;
        auVar23._8_8_ = uStack_f0;
        auVar23._0_8_ = lStack_e8;
        auVar21._8_8_ = uStack_a0;
        auVar21._0_8_ = lStack_98;
        lVar5 = *(long *)(lVar8 + 0x10);
        if (lVar5 == 0) {
          auVar17 = func_0x00f78af4();
          lVar5 = auVar17._0_8_;
          puStack_148 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
          pppppuStack_150 = &pppppuStack_130;
          if ((bRam0000000003eb48f0 & 1) == 0) {
            func_0x00f78a20(0x3d6f248);
            bRam0000000003eb48f0 = 1;
          }
          if (*(long *)(lVar5 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData
                      (*(long *)(lVar5 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar17._8_8_,0);
            uVar4 = *(ulong *)(lVar5 + 0x10);
            if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
          }
          lVar8 = func_0x00f78af4();
          puStack_178 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
          pppppuStack_180 = &pppppuStack_150;
          if ((bRam0000000003eb48f1 & 1) == 0) {
            uStack_190 = auVar17._8_8_;
            lStack_188 = lVar5;
            func_0x00f78a20(0x3d6f260);
            auVar17._8_8_ = uStack_190;
            auVar17._0_8_ = lStack_188;
            bRam0000000003eb48f1 = 1;
          }
          auVar18._8_8_ = uStack_1e0;
          auVar18._0_8_ = lStack_1d8;
          uStack_190 = auVar17._8_8_;
          lStack_188 = auVar17._0_8_;
          auVar16._8_8_ = uStack_140;
          auVar16._0_8_ = lStack_138;
          auVar23._8_8_ = uStack_f0;
          auVar23._0_8_ = lStack_e8;
          auVar21._8_8_ = uStack_a0;
          auVar21._0_8_ = lStack_98;
          lVar5 = *(long *)(lVar8 + 0x10);
          if (lVar5 == 0) {
            auVar18 = func_0x00f78af4();
            lVar5 = auVar18._0_8_;
            puStack_198 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
            pppppuStack_1a0 = &pppppuStack_180;
            if ((bRam0000000003eb48f2 & 1) == 0) {
              func_0x00f78a20(0x3d6f260);
              bRam0000000003eb48f2 = 1;
            }
            if (*(long *)(lVar5 + 0x10) != 0) {
              Atlas_Save_SaveManager__SetIntData
                        (*(long *)(lVar5 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar18._8_8_,0);
              uVar4 = *(ulong *)(lVar5 + 0x10);
              if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
            }
            lVar8 = func_0x00f78af4();
            puStack_1c8 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
            pppppuStack_1d0 = &pppppuStack_1a0;
            if ((bRam0000000003eb48f3 & 1) == 0) {
              uStack_1e0 = auVar18._8_8_;
              lStack_1d8 = lVar5;
              func_0x00f78a20(0x3d6f258);
              auVar18._8_8_ = uStack_1e0;
              auVar18._0_8_ = lStack_1d8;
              bRam0000000003eb48f3 = 1;
            }
            uStack_1e0 = auVar18._8_8_;
            lStack_1d8 = auVar18._0_8_;
            auVar17._8_8_ = uStack_190;
            auVar17._0_8_ = lStack_188;
            auVar16._8_8_ = uStack_140;
            auVar16._0_8_ = lStack_138;
            auVar23._8_8_ = uStack_f0;
            auVar23._0_8_ = lStack_e8;
            auVar21._8_8_ = uStack_a0;
            auVar21._0_8_ = lStack_98;
            lVar5 = *(long *)(lVar8 + 0x10);
            if (lVar5 == 0) {
              auVar19 = func_0x00f78af4();
              puStack_1e8 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
              ppppppuVar14 = &pppppuStack_1f0;
              pppppuStack_1f0 = &pppppuStack_1d0;
              if ((bRam0000000003eb48f4 & 1) == 0) {
                func_0x00f78a20(0x3d6f258);
                bRam0000000003eb48f4 = 1;
              }
              lVar5 = *(long *)(auVar19._0_8_ + 0x10);
              if (lVar5 != 0) {
                Atlas_Save_SaveManager__SetIntData(lVar5,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar19._8_8_,0);
                uVar4 = *(ulong *)(auVar19._0_8_ + 0x10);
                if (uVar4 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
                  *(undefined1 *)(uVar4 + 0x110) = 1;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar4;
                  return auVar20;
                }
              }
              puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
              auVar21 = func_0x00f78af4();
              uVar10 = 1;
              puVar2 = &stack0xfffffffffffffdf0;
              uVar6 = 0x3eb4000;
              do {
                uVar9 = auVar21._8_8_;
                lVar5 = auVar21._0_8_;
                uVar12 = auVar19._8_8_;
                uVar11 = auVar19._0_8_;
                auVar19._8_8_ = uVar10;
                auVar19._0_8_ = lVar5;
                *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
                *(undefined8 *)(puVar2 + -0x28) = uVar6;
                *(undefined8 *)(puVar2 + -0x20) = uVar12;
                *(undefined8 *)(puVar2 + -0x18) = uVar11;
                *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar14;
                *(undefined **)(puVar2 + -8) = puVar15;
                ppppppuVar14 = (undefined8 ******)(puVar2 + -0x10);
                unaff_x22 = 0x3eb4000;
                unaff_x23 = 0x3d6f220;
                if ((bRam0000000003eb48f6 & 1) == 0) {
                  func_0x00f78a20(0x3d6f220);
                  bRam0000000003eb48f6 = 1;
                }
                uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar9,0);
                if (*(long *)(lVar5 + 0x10) != 0) {
                  Atlas_Save_SaveManager__SetIntData(*(long *)(lVar5 + 0x10),uVar6,uVar10,0);
                  uVar4 = *(ulong *)(lVar5 + 0x10);
                  if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
                }
                puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
                auVar21 = func_0x00f78af4();
                uVar10 = 0;
                puVar2 = puVar2 + -0x40;
                uVar6 = uVar9;
              } while( true );
            }
            puVar3 = &stack0xfffffffffffffe40;
            uVar6 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
            ppppppuVar14 = (undefined8 ******)pppppuStack_1d0;
            puVar15 = puStack_1c8;
            auVar1 = auVar18;
          }
          else {
            puVar3 = &stack0xfffffffffffffe90;
            uVar6 = /*STR('L_WM')*/ uRam0000000003d6f260;
            ppppppuVar14 = (undefined8 ******)pppppuStack_180;
            puVar15 = puStack_178;
            auVar1 = auVar17;
          }
        }
        else {
          puVar3 = &stack0xfffffffffffffee0;
          uVar6 = /*STR('L_WD')*/ uRam0000000003d6f248;
          ppppppuVar14 = (undefined8 ******)pppppuStack_130;
          puVar15 = puStack_128;
          auVar1 = auVar16;
        }
      }
      else {
        puVar3 = &stack0xffffffffffffff30;
        uVar6 = /*STR('L_WP')*/ uRam0000000003d6f268;
        ppppppuVar14 = (undefined8 ******)pppppuStack_e0;
        puVar15 = puStack_d8;
        auVar1 = auVar23;
      }
    }
    else {
      puVar3 = &stack0xffffffffffffff80;
      uVar6 = /*STR('L_WG')*/ uRam0000000003d6f250;
      ppppppuVar14 = (undefined8 ******)pppppuStack_90;
      puVar15 = puStack_88;
      auVar1 = auVar21;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffd0;
    uVar6 = /*STR('L_WS')*/ uRam0000000003d6f270;
    ppppppuVar14 = (undefined8 ******)pppppuStack_40;
    puVar15 = puStack_38;
  }
  uStack_1e0 = auVar18._8_8_;
  lStack_1d8 = auVar18._0_8_;
  uStack_190 = auVar17._8_8_;
  lStack_188 = auVar17._0_8_;
  uStack_140 = auVar16._8_8_;
  lStack_138 = auVar16._0_8_;
  uStack_f0 = auVar23._8_8_;
  lStack_e8 = auVar23._0_8_;
  uStack_a0 = auVar21._8_8_;
  lStack_98 = auVar21._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3eb4000;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
  *(undefined **)(puVar3 + -8) = puVar15;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar6,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = *(undefined8 *)(puVar3 + -0x40);
  *(undefined8 *)(puVar3 + -0x40) = uVar10;
  *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  uVar4 = 0;
  lVar8 = lVar5;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = Atlas_Save_SaveManager__GetIntDataIndex(uVar6,lVar5);
  uVar9 = auVar21._8_8_;
  if (-1 < (int)auVar21._0_4_) {
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x110), lVar5 == 0)) {
      auVar21 = func_0x00f78af4();
      uVar9 = auVar21._8_8_;
      lVar5 = auVar21._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = uVar10;
      *(undefined8 *)(puVar3 + -0x78) = 0x3d246e0;
      *(undefined8 *)(puVar3 + -0x70) = 0x3eb4000;
      *(undefined8 *)(puVar3 + -0x68) = uVar6;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
      *(code **)(puVar3 + -0x48) = Atlas_Save_SaveManager__SetStringData;
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      uVar4 = Atlas_Save_SaveManager__GetStringDataIndex(lVar5,uVar9);
      lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
      if ((int)(uint)uVar4 < 0) {
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar21 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar7 + 0x118),uVar9,lVar8,uRam0000000003d3d918);
LAB_014ecdb8:
          *(undefined1 *)(lVar5 + 0x110) = 1;
          return auVar21;
        }
      }
      else if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x118), lVar7 != 0)) {
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (uVar4 & 0xffffffff) * 0x10 + 0x28);
        if ((lVar7 != 0) && (auVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar7,lVar8,5,0), (auVar21._0_8_ & 1) != 0))
        {
          return auVar21;
        }
        lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar21 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar7 + 0x118),uVar4,uVar9,lVar8,uRam0000000003d3d930)
          ;
          goto LAB_014ecdb8;
        }
      }
      auVar21 = func_0x00f78af4();
      *(ulong *)(puVar3 + -0xb0) = uVar4;
      *(undefined8 *)(puVar3 + -0xa8) = uVar9;
      *(long *)(puVar3 + -0xa0) = lVar8;
      *(long *)(puVar3 + -0x98) = lVar5;
      *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x50;
      *(code **)(puVar3 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar5 = Atlas_Save_SaveManager__get_SaveData(auVar21._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
      *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      lVar8 = lVar5;
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
        lVar8 = extraout_x1_00;
      }
      if ((lVar5 != 0) && (lVar7 = *(long *)(lVar5 + 0x118), lVar7 != 0)) {
        uVar4 = 0;
        do {
          uVar13 = (uint)uVar4;
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar13) goto LAB_014ed098;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar13 * 0x10 + 0x20);
          if (lVar8 == 0) break;
          auVar23 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar21._8_8_,5,0);
          lVar8 = auVar23._8_8_;
          if ((auVar23._0_8_ & 1) != 0) goto LAB_014ed09c;
          uVar4 = (ulong)(uVar13 + 1);
          lVar7 = *(long *)(lVar5 + 0x118);
        } while (lVar7 != 0);
      }
      func_0x00f78af4();
      lVar8 = extraout_x1_01;
LAB_014ed098:
      uVar4 = 0xffffffff;
LAB_014ed09c:
      auVar24._8_8_ = lVar8;
      auVar24._0_8_ = uVar4;
      return auVar24;
    }
    if (*(uint *)(lVar5 + 0x18) <= auVar21._0_4_) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar9 = extraout_x1;
    }
    uVar4 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + (auVar21._0_8_ & 0xffffffff) * 0x10 + 0x28);
  }
  auVar22._8_8_ = uVar9;
  auVar22._0_8_ = uVar4;
  return auVar22;
}



// ============================================================
// RVA: 0x147ecd8 | Atlas.League.LeaguePlayerSave.get_WeeksSilverTotal
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeaguePlayerSave__get_WeeksSilverTotal(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 *******pppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  auVar21._8_8_ = unaff_x20;
  auVar21._0_8_ = unaff_x19;
  if ((bRam0000000003eb48e9 & 1) == 0) {
    func_0x00f78a20(0x3d6f270);
    bRam0000000003eb48e9 = 1;
  }
  auVar19._8_8_ = uStack_1b0;
  auVar19._0_8_ = lStack_1a8;
  auVar18._8_8_ = uStack_160;
  auVar18._0_8_ = lStack_158;
  auVar17._8_8_ = uStack_110;
  auVar17._0_8_ = lStack_108;
  auVar16._8_8_ = uStack_c0;
  auVar16._0_8_ = lStack_b8;
  auVar15._8_8_ = uStack_70;
  auVar15._0_8_ = lStack_68;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = /*STR('L_WS')*/ uRam0000000003d6f270;
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._0_8_;
    puStack_28 = &Atlas_League_LeaguePlayerSave__set_WeeksSilverTotal;
    unaff_x21 = 0x3eb4000;
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48ea & 1) == 0) {
      func_0x00f78a20(0x3d6f270);
      bRam0000000003eb48ea = 1;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar3 + 0x10),/*STR('L_WS')*/ uRam0000000003d6f270,auVar15._8_8_,0);
      uVar5 = *(ulong *)(lVar3 + 0x10);
      if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar12 = func_0x00f78af4();
    puStack_58 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldTotal;
    pppppppuStack_60 = &ppppppuStack_30;
    if ((bRam0000000003eb48eb & 1) == 0) {
      uStack_70 = auVar15._8_8_;
      lStack_68 = lVar3;
      func_0x00f78a20(0x3d6f250);
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      bRam0000000003eb48eb = 1;
    }
    auVar19._8_8_ = uStack_1b0;
    auVar19._0_8_ = lStack_1a8;
    auVar18._8_8_ = uStack_160;
    auVar18._0_8_ = lStack_158;
    auVar17._8_8_ = uStack_110;
    auVar17._0_8_ = lStack_108;
    auVar16._8_8_ = uStack_c0;
    auVar16._0_8_ = lStack_b8;
    uStack_70 = auVar15._8_8_;
    lStack_68 = auVar15._0_8_;
    lVar3 = *(long *)(lVar12 + 0x10);
    if (lVar3 == 0) {
      auVar16 = func_0x00f78af4();
      lVar3 = auVar16._0_8_;
      puStack_78 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal;
      unaff_x21 = 0x3eb4000;
      pppppppuStack_80 = &pppppppuStack_60;
      if ((bRam0000000003eb48ec & 1) == 0) {
        func_0x00f78a20(0x3d6f250);
        bRam0000000003eb48ec = 1;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar3 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,auVar16._8_8_,0);
        uVar5 = *(ulong *)(lVar3 + 0x10);
        if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar12 = func_0x00f78af4();
      puStack_a8 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
      pppppppuStack_b0 = &pppppppuStack_80;
      if ((bRam0000000003eb48ed & 1) == 0) {
        uStack_c0 = auVar16._8_8_;
        lStack_b8 = lVar3;
        func_0x00f78a20(0x3d6f268);
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        bRam0000000003eb48ed = 1;
      }
      auVar19._8_8_ = uStack_1b0;
      auVar19._0_8_ = lStack_1a8;
      auVar18._8_8_ = uStack_160;
      auVar18._0_8_ = lStack_158;
      auVar17._8_8_ = uStack_110;
      auVar17._0_8_ = lStack_108;
      uStack_c0 = auVar16._8_8_;
      lStack_b8 = auVar16._0_8_;
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      lVar3 = *(long *)(lVar12 + 0x10);
      if (lVar3 == 0) {
        auVar17 = func_0x00f78af4();
        lVar3 = auVar17._0_8_;
        puStack_c8 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
        unaff_x21 = 0x3eb4000;
        pppppppuStack_d0 = &pppppppuStack_b0;
        if ((bRam0000000003eb48ee & 1) == 0) {
          func_0x00f78a20(0x3d6f268);
          bRam0000000003eb48ee = 1;
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar3 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar17._8_8_,0);
          uVar5 = *(ulong *)(lVar3 + 0x10);
          if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        lVar12 = func_0x00f78af4();
        puStack_f8 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
        pppppppuStack_100 = &pppppppuStack_d0;
        if ((bRam0000000003eb48ef & 1) == 0) {
          uStack_110 = auVar17._8_8_;
          lStack_108 = lVar3;
          func_0x00f78a20(0x3d6f248);
          auVar17._8_8_ = uStack_110;
          auVar17._0_8_ = lStack_108;
          bRam0000000003eb48ef = 1;
        }
        auVar19._8_8_ = uStack_1b0;
        auVar19._0_8_ = lStack_1a8;
        auVar18._8_8_ = uStack_160;
        auVar18._0_8_ = lStack_158;
        uStack_110 = auVar17._8_8_;
        lStack_108 = auVar17._0_8_;
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        auVar15._8_8_ = uStack_70;
        auVar15._0_8_ = lStack_68;
        lVar3 = *(long *)(lVar12 + 0x10);
        if (lVar3 == 0) {
          auVar18 = func_0x00f78af4();
          lVar3 = auVar18._0_8_;
          puStack_118 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
          unaff_x21 = 0x3eb4000;
          pppppppuStack_120 = &pppppppuStack_100;
          if ((bRam0000000003eb48f0 & 1) == 0) {
            func_0x00f78a20(0x3d6f248);
            bRam0000000003eb48f0 = 1;
          }
          if (*(long *)(lVar3 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData
                      (*(long *)(lVar3 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar18._8_8_,0);
            uVar5 = *(ulong *)(lVar3 + 0x10);
            if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
          }
          lVar12 = func_0x00f78af4();
          puStack_148 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
          pppppppuStack_150 = &pppppppuStack_120;
          if ((bRam0000000003eb48f1 & 1) == 0) {
            uStack_160 = auVar18._8_8_;
            lStack_158 = lVar3;
            func_0x00f78a20(0x3d6f260);
            auVar18._8_8_ = uStack_160;
            auVar18._0_8_ = lStack_158;
            bRam0000000003eb48f1 = 1;
          }
          auVar19._8_8_ = uStack_1b0;
          auVar19._0_8_ = lStack_1a8;
          uStack_160 = auVar18._8_8_;
          lStack_158 = auVar18._0_8_;
          auVar17._8_8_ = uStack_110;
          auVar17._0_8_ = lStack_108;
          auVar16._8_8_ = uStack_c0;
          auVar16._0_8_ = lStack_b8;
          auVar15._8_8_ = uStack_70;
          auVar15._0_8_ = lStack_68;
          lVar3 = *(long *)(lVar12 + 0x10);
          if (lVar3 == 0) {
            auVar19 = func_0x00f78af4();
            lVar3 = auVar19._0_8_;
            puStack_168 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
            unaff_x21 = 0x3eb4000;
            pppppppuStack_170 = &pppppppuStack_150;
            if ((bRam0000000003eb48f2 & 1) == 0) {
              func_0x00f78a20(0x3d6f260);
              bRam0000000003eb48f2 = 1;
            }
            if (*(long *)(lVar3 + 0x10) != 0) {
              Atlas_Save_SaveManager__SetIntData
                        (*(long *)(lVar3 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar19._8_8_,0);
              uVar5 = *(ulong *)(lVar3 + 0x10);
              if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
            }
            lVar12 = func_0x00f78af4();
            puStack_198 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
            pppppppuStack_1a0 = &pppppppuStack_170;
            if ((bRam0000000003eb48f3 & 1) == 0) {
              uStack_1b0 = auVar19._8_8_;
              lStack_1a8 = lVar3;
              func_0x00f78a20(0x3d6f258);
              auVar19._8_8_ = uStack_1b0;
              auVar19._0_8_ = lStack_1a8;
              bRam0000000003eb48f3 = 1;
            }
            uStack_1b0 = auVar19._8_8_;
            lStack_1a8 = auVar19._0_8_;
            auVar18._8_8_ = uStack_160;
            auVar18._0_8_ = lStack_158;
            auVar17._8_8_ = uStack_110;
            auVar17._0_8_ = lStack_108;
            auVar16._8_8_ = uStack_c0;
            auVar16._0_8_ = lStack_b8;
            auVar15._8_8_ = uStack_70;
            auVar15._0_8_ = lStack_68;
            lVar3 = *(long *)(lVar12 + 0x10);
            if (lVar3 == 0) {
              auVar20 = func_0x00f78af4();
              puStack_1b8 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
              pppppppuVar13 = &pppppppuStack_1c0;
              pppppppuStack_1c0 = &pppppppuStack_1a0;
              if ((bRam0000000003eb48f4 & 1) == 0) {
                func_0x00f78a20(0x3d6f258);
                bRam0000000003eb48f4 = 1;
              }
              lVar3 = *(long *)(auVar20._0_8_ + 0x10);
              if (lVar3 != 0) {
                Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar20._8_8_,0);
                uVar5 = *(ulong *)(auVar20._0_8_ + 0x10);
                if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
                  *(undefined1 *)(uVar5 + 0x110) = 1;
                  return uVar5;
                }
              }
              puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
              auVar21 = func_0x00f78af4();
              uVar9 = 1;
              puVar1 = &stack0xfffffffffffffe20;
              uVar4 = 0x3eb4000;
              do {
                uVar8 = auVar21._8_8_;
                lVar3 = auVar21._0_8_;
                uVar11 = auVar20._8_8_;
                uVar10 = auVar20._0_8_;
                auVar20._8_8_ = uVar9;
                auVar20._0_8_ = lVar3;
                *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
                *(undefined8 *)(puVar1 + -0x28) = uVar4;
                *(undefined8 *)(puVar1 + -0x20) = uVar11;
                *(undefined8 *)(puVar1 + -0x18) = uVar10;
                *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
                *(undefined **)(puVar1 + -8) = puVar14;
                pppppppuVar13 = (undefined8 *******)(puVar1 + -0x10);
                unaff_x22 = 0x3eb4000;
                unaff_x23 = 0x3d6f220;
                if ((bRam0000000003eb48f6 & 1) == 0) {
                  func_0x00f78a20(0x3d6f220);
                  bRam0000000003eb48f6 = 1;
                }
                uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
                if (*(long *)(lVar3 + 0x10) != 0) {
                  Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
                  uVar5 = *(ulong *)(lVar3 + 0x10);
                  if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
                }
                puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
                auVar21 = func_0x00f78af4();
                uVar9 = 0;
                puVar1 = puVar1 + -0x40;
                uVar4 = uVar8;
              } while( true );
            }
            register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffe70;
            uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
            unaff_x29 = pppppppuStack_1a0;
            unaff_x30 = puStack_198;
            auVar21 = auVar19;
          }
          else {
            register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffec0;
            uVar4 = /*STR('L_WM')*/ uRam0000000003d6f260;
            unaff_x29 = pppppppuStack_150;
            unaff_x30 = puStack_148;
            auVar21 = auVar18;
          }
        }
        else {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
          uVar4 = /*STR('L_WD')*/ uRam0000000003d6f248;
          unaff_x29 = pppppppuStack_100;
          unaff_x30 = puStack_f8;
          auVar21 = auVar17;
        }
      }
      else {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
        uVar4 = /*STR('L_WP')*/ uRam0000000003d6f268;
        unaff_x29 = pppppppuStack_b0;
        unaff_x30 = puStack_a8;
        auVar21 = auVar16;
      }
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      uVar4 = /*STR('L_WG')*/ uRam0000000003d6f250;
      unaff_x29 = pppppppuStack_60;
      unaff_x30 = puStack_58;
      auVar21 = auVar15;
    }
  }
  uStack_1b0 = auVar19._8_8_;
  lStack_1a8 = auVar19._0_8_;
  uStack_160 = auVar18._8_8_;
  lStack_158 = auVar18._0_8_;
  uStack_110 = auVar17._8_8_;
  lStack_108 = auVar17._0_8_;
  uStack_c0 = auVar16._8_8_;
  lStack_b8 = auVar16._0_8_;
  uStack_70 = auVar15._8_8_;
  lStack_68 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar21._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar21._0_8_;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar4,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar21 = func_0x00f78af4();
  uVar8 = auVar21._8_8_;
  lVar3 = auVar21._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar8);
  lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar5 < 0) {
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar8,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar12,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar8,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar21 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar8;
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(long *)((long)register0x00000008 + -0x98) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar21._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar21._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147ed34 | Atlas.League.LeaguePlayerSave.set_WeeksSilverTotal
// ============================================================

undefined1  [16]
Atlas_League_LeaguePlayerSave__set_WeeksSilverTotal(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 *****pppppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *****pppppuStack_180;
  undefined *puStack_178;
  undefined8 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb48ea & 1) == 0) {
    func_0x00f78a20(0x3d6f270);
    bRam0000000003eb48ea = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_WS')*/ uRam0000000003d6f270,param_2,0);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldTotal;
  uStack_50 = param_2;
  lStack_48 = param_1;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48eb & 1) == 0) {
    func_0x00f78a20(0x3d6f250);
    bRam0000000003eb48eb = 1;
  }
  auVar1._8_8_ = uStack_50;
  auVar1._0_8_ = lStack_48;
  auVar17._8_8_ = uStack_190;
  auVar17._0_8_ = lStack_188;
  auVar16._8_8_ = uStack_140;
  auVar16._0_8_ = lStack_138;
  auVar22._8_8_ = uStack_f0;
  auVar22._0_8_ = lStack_e8;
  auVar20._8_8_ = uStack_a0;
  auVar20._0_8_ = lStack_98;
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    auVar20 = func_0x00f78af4();
    lVar5 = auVar20._0_8_;
    puStack_58 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal;
    pppppuStack_60 = &pppppuStack_40;
    if ((bRam0000000003eb48ec & 1) == 0) {
      func_0x00f78a20(0x3d6f250);
      bRam0000000003eb48ec = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar5 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,auVar20._8_8_,0);
      uVar4 = *(ulong *)(lVar5 + 0x10);
      if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar8 = func_0x00f78af4();
    puStack_88 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
    pppppuStack_90 = &pppppuStack_60;
    if ((bRam0000000003eb48ed & 1) == 0) {
      uStack_a0 = auVar20._8_8_;
      lStack_98 = lVar5;
      func_0x00f78a20(0x3d6f268);
      auVar20._8_8_ = uStack_a0;
      auVar20._0_8_ = lStack_98;
      bRam0000000003eb48ed = 1;
    }
    auVar17._8_8_ = uStack_190;
    auVar17._0_8_ = lStack_188;
    auVar16._8_8_ = uStack_140;
    auVar16._0_8_ = lStack_138;
    auVar22._8_8_ = uStack_f0;
    auVar22._0_8_ = lStack_e8;
    uStack_a0 = auVar20._8_8_;
    lStack_98 = auVar20._0_8_;
    lVar5 = *(long *)(lVar8 + 0x10);
    if (lVar5 == 0) {
      auVar22 = func_0x00f78af4();
      lVar5 = auVar22._0_8_;
      puStack_a8 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
      pppppuStack_b0 = &pppppuStack_90;
      if ((bRam0000000003eb48ee & 1) == 0) {
        func_0x00f78a20(0x3d6f268);
        bRam0000000003eb48ee = 1;
      }
      if (*(long *)(lVar5 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar5 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar22._8_8_,0);
        uVar4 = *(ulong *)(lVar5 + 0x10);
        if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar8 = func_0x00f78af4();
      puStack_d8 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
      pppppuStack_e0 = &pppppuStack_b0;
      if ((bRam0000000003eb48ef & 1) == 0) {
        uStack_f0 = auVar22._8_8_;
        lStack_e8 = lVar5;
        func_0x00f78a20(0x3d6f248);
        auVar22._8_8_ = uStack_f0;
        auVar22._0_8_ = lStack_e8;
        bRam0000000003eb48ef = 1;
      }
      auVar17._8_8_ = uStack_190;
      auVar17._0_8_ = lStack_188;
      auVar16._8_8_ = uStack_140;
      auVar16._0_8_ = lStack_138;
      uStack_f0 = auVar22._8_8_;
      lStack_e8 = auVar22._0_8_;
      auVar20._8_8_ = uStack_a0;
      auVar20._0_8_ = lStack_98;
      lVar5 = *(long *)(lVar8 + 0x10);
      if (lVar5 == 0) {
        auVar16 = func_0x00f78af4();
        lVar5 = auVar16._0_8_;
        puStack_f8 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
        pppppuStack_100 = &pppppuStack_e0;
        if ((bRam0000000003eb48f0 & 1) == 0) {
          func_0x00f78a20(0x3d6f248);
          bRam0000000003eb48f0 = 1;
        }
        if (*(long *)(lVar5 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar5 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar16._8_8_,0);
          uVar4 = *(ulong *)(lVar5 + 0x10);
          if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        lVar8 = func_0x00f78af4();
        puStack_128 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
        pppppuStack_130 = &pppppuStack_100;
        if ((bRam0000000003eb48f1 & 1) == 0) {
          uStack_140 = auVar16._8_8_;
          lStack_138 = lVar5;
          func_0x00f78a20(0x3d6f260);
          auVar16._8_8_ = uStack_140;
          auVar16._0_8_ = lStack_138;
          bRam0000000003eb48f1 = 1;
        }
        auVar17._8_8_ = uStack_190;
        auVar17._0_8_ = lStack_188;
        uStack_140 = auVar16._8_8_;
        lStack_138 = auVar16._0_8_;
        auVar22._8_8_ = uStack_f0;
        auVar22._0_8_ = lStack_e8;
        auVar20._8_8_ = uStack_a0;
        auVar20._0_8_ = lStack_98;
        lVar5 = *(long *)(lVar8 + 0x10);
        if (lVar5 == 0) {
          auVar17 = func_0x00f78af4();
          lVar5 = auVar17._0_8_;
          puStack_148 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
          pppppuStack_150 = &pppppuStack_130;
          if ((bRam0000000003eb48f2 & 1) == 0) {
            func_0x00f78a20(0x3d6f260);
            bRam0000000003eb48f2 = 1;
          }
          if (*(long *)(lVar5 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData
                      (*(long *)(lVar5 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar17._8_8_,0);
            uVar4 = *(ulong *)(lVar5 + 0x10);
            if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
          }
          lVar8 = func_0x00f78af4();
          puStack_178 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
          pppppuStack_180 = &pppppuStack_150;
          if ((bRam0000000003eb48f3 & 1) == 0) {
            uStack_190 = auVar17._8_8_;
            lStack_188 = lVar5;
            func_0x00f78a20(0x3d6f258);
            auVar17._8_8_ = uStack_190;
            auVar17._0_8_ = lStack_188;
            bRam0000000003eb48f3 = 1;
          }
          uStack_190 = auVar17._8_8_;
          lStack_188 = auVar17._0_8_;
          auVar16._8_8_ = uStack_140;
          auVar16._0_8_ = lStack_138;
          auVar22._8_8_ = uStack_f0;
          auVar22._0_8_ = lStack_e8;
          auVar20._8_8_ = uStack_a0;
          auVar20._0_8_ = lStack_98;
          lVar5 = *(long *)(lVar8 + 0x10);
          if (lVar5 == 0) {
            auVar18 = func_0x00f78af4();
            puStack_198 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
            ppppppuVar14 = &pppppuStack_1a0;
            pppppuStack_1a0 = &pppppuStack_180;
            if ((bRam0000000003eb48f4 & 1) == 0) {
              func_0x00f78a20(0x3d6f258);
              bRam0000000003eb48f4 = 1;
            }
            lVar5 = *(long *)(auVar18._0_8_ + 0x10);
            if (lVar5 != 0) {
              Atlas_Save_SaveManager__SetIntData(lVar5,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar18._8_8_,0);
              uVar4 = *(ulong *)(auVar18._0_8_ + 0x10);
              if (uVar4 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
                *(undefined1 *)(uVar4 + 0x110) = 1;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar4;
                return auVar19;
              }
            }
            puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
            auVar20 = func_0x00f78af4();
            uVar10 = 1;
            puVar2 = &stack0xfffffffffffffe40;
            uVar6 = 0x3eb4000;
            do {
              uVar9 = auVar20._8_8_;
              lVar5 = auVar20._0_8_;
              uVar12 = auVar18._8_8_;
              uVar11 = auVar18._0_8_;
              auVar18._8_8_ = uVar10;
              auVar18._0_8_ = lVar5;
              *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
              *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
              *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar2 + -0x28) = uVar6;
              *(undefined8 *)(puVar2 + -0x20) = uVar12;
              *(undefined8 *)(puVar2 + -0x18) = uVar11;
              *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar14;
              *(undefined **)(puVar2 + -8) = puVar15;
              ppppppuVar14 = (undefined8 ******)(puVar2 + -0x10);
              unaff_x22 = 0x3eb4000;
              unaff_x23 = 0x3d6f220;
              if ((bRam0000000003eb48f6 & 1) == 0) {
                func_0x00f78a20(0x3d6f220);
                bRam0000000003eb48f6 = 1;
              }
              uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar9,0);
              if (*(long *)(lVar5 + 0x10) != 0) {
                Atlas_Save_SaveManager__SetIntData(*(long *)(lVar5 + 0x10),uVar6,uVar10,0);
                uVar4 = *(ulong *)(lVar5 + 0x10);
                if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
              }
              puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
              auVar20 = func_0x00f78af4();
              uVar10 = 0;
              puVar2 = puVar2 + -0x40;
              uVar6 = uVar9;
            } while( true );
          }
          puVar3 = &stack0xfffffffffffffe90;
          uVar6 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
          ppppppuVar14 = (undefined8 ******)pppppuStack_180;
          puVar15 = puStack_178;
          auVar1 = auVar17;
        }
        else {
          puVar3 = &stack0xfffffffffffffee0;
          uVar6 = /*STR('L_WM')*/ uRam0000000003d6f260;
          ppppppuVar14 = (undefined8 ******)pppppuStack_130;
          puVar15 = puStack_128;
          auVar1 = auVar16;
        }
      }
      else {
        puVar3 = &stack0xffffffffffffff30;
        uVar6 = /*STR('L_WD')*/ uRam0000000003d6f248;
        ppppppuVar14 = (undefined8 ******)pppppuStack_e0;
        puVar15 = puStack_d8;
        auVar1 = auVar22;
      }
    }
    else {
      puVar3 = &stack0xffffffffffffff80;
      uVar6 = /*STR('L_WP')*/ uRam0000000003d6f268;
      ppppppuVar14 = (undefined8 ******)pppppuStack_90;
      puVar15 = puStack_88;
      auVar1 = auVar20;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffd0;
    uVar6 = /*STR('L_WG')*/ uRam0000000003d6f250;
    ppppppuVar14 = (undefined8 ******)pppppuStack_40;
    puVar15 = puStack_38;
  }
  uStack_190 = auVar17._8_8_;
  lStack_188 = auVar17._0_8_;
  uStack_140 = auVar16._8_8_;
  lStack_138 = auVar16._0_8_;
  uStack_f0 = auVar22._8_8_;
  lStack_e8 = auVar22._0_8_;
  uStack_a0 = auVar20._8_8_;
  lStack_98 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3eb4000;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
  *(undefined **)(puVar3 + -8) = puVar15;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar6,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = *(undefined8 *)(puVar3 + -0x40);
  *(undefined8 *)(puVar3 + -0x40) = uVar10;
  *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  uVar4 = 0;
  lVar8 = lVar5;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar20 = Atlas_Save_SaveManager__GetIntDataIndex(uVar6,lVar5);
  uVar9 = auVar20._8_8_;
  if (-1 < (int)auVar20._0_4_) {
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x110), lVar5 == 0)) {
      auVar20 = func_0x00f78af4();
      uVar9 = auVar20._8_8_;
      lVar5 = auVar20._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = uVar10;
      *(undefined8 *)(puVar3 + -0x78) = 0x3d246e0;
      *(undefined8 *)(puVar3 + -0x70) = 0x3eb4000;
      *(undefined8 *)(puVar3 + -0x68) = uVar6;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
      *(code **)(puVar3 + -0x48) = Atlas_Save_SaveManager__SetStringData;
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      uVar4 = Atlas_Save_SaveManager__GetStringDataIndex(lVar5,uVar9);
      lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
      if ((int)(uint)uVar4 < 0) {
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar20 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar7 + 0x118),uVar9,lVar8,uRam0000000003d3d918);
LAB_014ecdb8:
          *(undefined1 *)(lVar5 + 0x110) = 1;
          return auVar20;
        }
      }
      else if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x118), lVar7 != 0)) {
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (uVar4 & 0xffffffff) * 0x10 + 0x28);
        if ((lVar7 != 0) && (auVar20 = /*System.String$$Equals*/ func_0x029caa48(lVar7,lVar8,5,0), (auVar20._0_8_ & 1) != 0))
        {
          return auVar20;
        }
        lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar20 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar7 + 0x118),uVar4,uVar9,lVar8,uRam0000000003d3d930)
          ;
          goto LAB_014ecdb8;
        }
      }
      auVar20 = func_0x00f78af4();
      *(ulong *)(puVar3 + -0xb0) = uVar4;
      *(undefined8 *)(puVar3 + -0xa8) = uVar9;
      *(long *)(puVar3 + -0xa0) = lVar8;
      *(long *)(puVar3 + -0x98) = lVar5;
      *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x50;
      *(code **)(puVar3 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar5 = Atlas_Save_SaveManager__get_SaveData(auVar20._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
      *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      lVar8 = lVar5;
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
        lVar8 = extraout_x1_00;
      }
      if ((lVar5 != 0) && (lVar7 = *(long *)(lVar5 + 0x118), lVar7 != 0)) {
        uVar4 = 0;
        do {
          uVar13 = (uint)uVar4;
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar13) goto LAB_014ed098;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar13 * 0x10 + 0x20);
          if (lVar8 == 0) break;
          auVar22 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar20._8_8_,5,0);
          lVar8 = auVar22._8_8_;
          if ((auVar22._0_8_ & 1) != 0) goto LAB_014ed09c;
          uVar4 = (ulong)(uVar13 + 1);
          lVar7 = *(long *)(lVar5 + 0x118);
        } while (lVar7 != 0);
      }
      func_0x00f78af4();
      lVar8 = extraout_x1_01;
LAB_014ed098:
      uVar4 = 0xffffffff;
LAB_014ed09c:
      auVar23._8_8_ = lVar8;
      auVar23._0_8_ = uVar4;
      return auVar23;
    }
    if (*(uint *)(lVar5 + 0x18) <= auVar20._0_4_) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar9 = extraout_x1;
    }
    uVar4 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + (auVar20._0_8_ & 0xffffffff) * 0x10 + 0x28);
  }
  auVar21._8_8_ = uVar9;
  auVar21._0_8_ = uVar4;
  return auVar21;
}



// ============================================================
// RVA: 0x147edac | Atlas.League.LeaguePlayerSave.get_WeeksGoldTotal
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeaguePlayerSave__get_WeeksGoldTotal(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  auVar20._8_8_ = unaff_x20;
  auVar20._0_8_ = unaff_x19;
  if ((bRam0000000003eb48eb & 1) == 0) {
    func_0x00f78a20(0x3d6f250);
    bRam0000000003eb48eb = 1;
  }
  auVar18._8_8_ = uStack_160;
  auVar18._0_8_ = lStack_158;
  auVar17._8_8_ = uStack_110;
  auVar17._0_8_ = lStack_108;
  auVar16._8_8_ = uStack_c0;
  auVar16._0_8_ = lStack_b8;
  auVar15._8_8_ = uStack_70;
  auVar15._0_8_ = lStack_68;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = /*STR('L_WG')*/ uRam0000000003d6f250;
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._0_8_;
    puStack_28 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal;
    unaff_x21 = 0x3eb4000;
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48ec & 1) == 0) {
      func_0x00f78a20(0x3d6f250);
      bRam0000000003eb48ec = 1;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar3 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,auVar15._8_8_,0);
      uVar5 = *(ulong *)(lVar3 + 0x10);
      if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar12 = func_0x00f78af4();
    puStack_58 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
    pppppppuStack_60 = &ppppppuStack_30;
    if ((bRam0000000003eb48ed & 1) == 0) {
      uStack_70 = auVar15._8_8_;
      lStack_68 = lVar3;
      func_0x00f78a20(0x3d6f268);
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      bRam0000000003eb48ed = 1;
    }
    auVar18._8_8_ = uStack_160;
    auVar18._0_8_ = lStack_158;
    auVar17._8_8_ = uStack_110;
    auVar17._0_8_ = lStack_108;
    auVar16._8_8_ = uStack_c0;
    auVar16._0_8_ = lStack_b8;
    uStack_70 = auVar15._8_8_;
    lStack_68 = auVar15._0_8_;
    lVar3 = *(long *)(lVar12 + 0x10);
    if (lVar3 == 0) {
      auVar16 = func_0x00f78af4();
      lVar3 = auVar16._0_8_;
      puStack_78 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
      unaff_x21 = 0x3eb4000;
      pppppppuStack_80 = &pppppppuStack_60;
      if ((bRam0000000003eb48ee & 1) == 0) {
        func_0x00f78a20(0x3d6f268);
        bRam0000000003eb48ee = 1;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar3 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar16._8_8_,0);
        uVar5 = *(ulong *)(lVar3 + 0x10);
        if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar12 = func_0x00f78af4();
      puStack_a8 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
      pppppppuStack_b0 = &pppppppuStack_80;
      if ((bRam0000000003eb48ef & 1) == 0) {
        uStack_c0 = auVar16._8_8_;
        lStack_b8 = lVar3;
        func_0x00f78a20(0x3d6f248);
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        bRam0000000003eb48ef = 1;
      }
      auVar18._8_8_ = uStack_160;
      auVar18._0_8_ = lStack_158;
      auVar17._8_8_ = uStack_110;
      auVar17._0_8_ = lStack_108;
      uStack_c0 = auVar16._8_8_;
      lStack_b8 = auVar16._0_8_;
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      lVar3 = *(long *)(lVar12 + 0x10);
      if (lVar3 == 0) {
        auVar17 = func_0x00f78af4();
        lVar3 = auVar17._0_8_;
        puStack_c8 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
        unaff_x21 = 0x3eb4000;
        pppppppuStack_d0 = &pppppppuStack_b0;
        if ((bRam0000000003eb48f0 & 1) == 0) {
          func_0x00f78a20(0x3d6f248);
          bRam0000000003eb48f0 = 1;
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar3 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar17._8_8_,0);
          uVar5 = *(ulong *)(lVar3 + 0x10);
          if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        lVar12 = func_0x00f78af4();
        puStack_f8 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
        pppppppuStack_100 = &pppppppuStack_d0;
        if ((bRam0000000003eb48f1 & 1) == 0) {
          uStack_110 = auVar17._8_8_;
          lStack_108 = lVar3;
          func_0x00f78a20(0x3d6f260);
          auVar17._8_8_ = uStack_110;
          auVar17._0_8_ = lStack_108;
          bRam0000000003eb48f1 = 1;
        }
        auVar18._8_8_ = uStack_160;
        auVar18._0_8_ = lStack_158;
        uStack_110 = auVar17._8_8_;
        lStack_108 = auVar17._0_8_;
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        auVar15._8_8_ = uStack_70;
        auVar15._0_8_ = lStack_68;
        lVar3 = *(long *)(lVar12 + 0x10);
        if (lVar3 == 0) {
          auVar18 = func_0x00f78af4();
          lVar3 = auVar18._0_8_;
          puStack_118 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
          unaff_x21 = 0x3eb4000;
          pppppppuStack_120 = &pppppppuStack_100;
          if ((bRam0000000003eb48f2 & 1) == 0) {
            func_0x00f78a20(0x3d6f260);
            bRam0000000003eb48f2 = 1;
          }
          if (*(long *)(lVar3 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData
                      (*(long *)(lVar3 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar18._8_8_,0);
            uVar5 = *(ulong *)(lVar3 + 0x10);
            if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
          }
          lVar12 = func_0x00f78af4();
          puStack_148 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
          pppppppuStack_150 = &pppppppuStack_120;
          if ((bRam0000000003eb48f3 & 1) == 0) {
            uStack_160 = auVar18._8_8_;
            lStack_158 = lVar3;
            func_0x00f78a20(0x3d6f258);
            auVar18._8_8_ = uStack_160;
            auVar18._0_8_ = lStack_158;
            bRam0000000003eb48f3 = 1;
          }
          uStack_160 = auVar18._8_8_;
          lStack_158 = auVar18._0_8_;
          auVar17._8_8_ = uStack_110;
          auVar17._0_8_ = lStack_108;
          auVar16._8_8_ = uStack_c0;
          auVar16._0_8_ = lStack_b8;
          auVar15._8_8_ = uStack_70;
          auVar15._0_8_ = lStack_68;
          lVar3 = *(long *)(lVar12 + 0x10);
          if (lVar3 == 0) {
            auVar19 = func_0x00f78af4();
            puStack_168 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
            pppppppuVar13 = &pppppppuStack_170;
            pppppppuStack_170 = &pppppppuStack_150;
            if ((bRam0000000003eb48f4 & 1) == 0) {
              func_0x00f78a20(0x3d6f258);
              bRam0000000003eb48f4 = 1;
            }
            lVar3 = *(long *)(auVar19._0_8_ + 0x10);
            if (lVar3 != 0) {
              Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar19._8_8_,0);
              uVar5 = *(ulong *)(auVar19._0_8_ + 0x10);
              if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
                *(undefined1 *)(uVar5 + 0x110) = 1;
                return uVar5;
              }
            }
            puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
            auVar20 = func_0x00f78af4();
            uVar9 = 1;
            puVar1 = &stack0xfffffffffffffe70;
            uVar4 = 0x3eb4000;
            do {
              uVar8 = auVar20._8_8_;
              lVar3 = auVar20._0_8_;
              uVar11 = auVar19._8_8_;
              uVar10 = auVar19._0_8_;
              auVar19._8_8_ = uVar9;
              auVar19._0_8_ = lVar3;
              *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
              *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
              *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar1 + -0x28) = uVar4;
              *(undefined8 *)(puVar1 + -0x20) = uVar11;
              *(undefined8 *)(puVar1 + -0x18) = uVar10;
              *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
              *(undefined **)(puVar1 + -8) = puVar14;
              pppppppuVar13 = (undefined8 *******)(puVar1 + -0x10);
              unaff_x22 = 0x3eb4000;
              unaff_x23 = 0x3d6f220;
              if ((bRam0000000003eb48f6 & 1) == 0) {
                func_0x00f78a20(0x3d6f220);
                bRam0000000003eb48f6 = 1;
              }
              uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
              if (*(long *)(lVar3 + 0x10) != 0) {
                Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
                uVar5 = *(ulong *)(lVar3 + 0x10);
                if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
              }
              puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
              auVar20 = func_0x00f78af4();
              uVar9 = 0;
              puVar1 = puVar1 + -0x40;
              uVar4 = uVar8;
            } while( true );
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffec0;
          uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
          unaff_x29 = pppppppuStack_150;
          unaff_x30 = puStack_148;
          auVar20 = auVar18;
        }
        else {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
          uVar4 = /*STR('L_WM')*/ uRam0000000003d6f260;
          unaff_x29 = pppppppuStack_100;
          unaff_x30 = puStack_f8;
          auVar20 = auVar17;
        }
      }
      else {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
        uVar4 = /*STR('L_WD')*/ uRam0000000003d6f248;
        unaff_x29 = pppppppuStack_b0;
        unaff_x30 = puStack_a8;
        auVar20 = auVar16;
      }
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      uVar4 = /*STR('L_WP')*/ uRam0000000003d6f268;
      unaff_x29 = pppppppuStack_60;
      unaff_x30 = puStack_58;
      auVar20 = auVar15;
    }
  }
  uStack_160 = auVar18._8_8_;
  lStack_158 = auVar18._0_8_;
  uStack_110 = auVar17._8_8_;
  lStack_108 = auVar17._0_8_;
  uStack_c0 = auVar16._8_8_;
  lStack_b8 = auVar16._0_8_;
  uStack_70 = auVar15._8_8_;
  lStack_68 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar20._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar20._0_8_;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar4,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar20 = func_0x00f78af4();
  uVar8 = auVar20._8_8_;
  lVar3 = auVar20._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar8);
  lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar5 < 0) {
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar8,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar12,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar8,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar20 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar8;
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(long *)((long)register0x00000008 + -0x98) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar20._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar20._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147ee08 | Atlas.League.LeaguePlayerSave.set_WeeksGoldTotal
// ============================================================

undefined1  [16] Atlas_League_LeaguePlayerSave__set_WeeksGoldTotal(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb48ec & 1) == 0) {
    func_0x00f78a20(0x3d6f250);
    bRam0000000003eb48ec = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_WG')*/ uRam0000000003d6f250,param_2,0);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal;
  uStack_50 = param_2;
  lStack_48 = param_1;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48ed & 1) == 0) {
    func_0x00f78a20(0x3d6f268);
    bRam0000000003eb48ed = 1;
  }
  auVar1._8_8_ = uStack_50;
  auVar1._0_8_ = lStack_48;
  auVar16._8_8_ = uStack_140;
  auVar16._0_8_ = lStack_138;
  auVar21._8_8_ = uStack_f0;
  auVar21._0_8_ = lStack_e8;
  auVar19._8_8_ = uStack_a0;
  auVar19._0_8_ = lStack_98;
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    auVar19 = func_0x00f78af4();
    lVar5 = auVar19._0_8_;
    puStack_58 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
    pppppuStack_60 = &pppppuStack_40;
    if ((bRam0000000003eb48ee & 1) == 0) {
      func_0x00f78a20(0x3d6f268);
      bRam0000000003eb48ee = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar5 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar19._8_8_,0);
      uVar4 = *(ulong *)(lVar5 + 0x10);
      if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar8 = func_0x00f78af4();
    puStack_88 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
    pppppuStack_90 = &pppppuStack_60;
    if ((bRam0000000003eb48ef & 1) == 0) {
      uStack_a0 = auVar19._8_8_;
      lStack_98 = lVar5;
      func_0x00f78a20(0x3d6f248);
      auVar19._8_8_ = uStack_a0;
      auVar19._0_8_ = lStack_98;
      bRam0000000003eb48ef = 1;
    }
    auVar16._8_8_ = uStack_140;
    auVar16._0_8_ = lStack_138;
    auVar21._8_8_ = uStack_f0;
    auVar21._0_8_ = lStack_e8;
    uStack_a0 = auVar19._8_8_;
    lStack_98 = auVar19._0_8_;
    lVar5 = *(long *)(lVar8 + 0x10);
    if (lVar5 == 0) {
      auVar21 = func_0x00f78af4();
      lVar5 = auVar21._0_8_;
      puStack_a8 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
      pppppuStack_b0 = &pppppuStack_90;
      if ((bRam0000000003eb48f0 & 1) == 0) {
        func_0x00f78a20(0x3d6f248);
        bRam0000000003eb48f0 = 1;
      }
      if (*(long *)(lVar5 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar5 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar21._8_8_,0);
        uVar4 = *(ulong *)(lVar5 + 0x10);
        if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar8 = func_0x00f78af4();
      puStack_d8 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
      pppppuStack_e0 = &pppppuStack_b0;
      if ((bRam0000000003eb48f1 & 1) == 0) {
        uStack_f0 = auVar21._8_8_;
        lStack_e8 = lVar5;
        func_0x00f78a20(0x3d6f260);
        auVar21._8_8_ = uStack_f0;
        auVar21._0_8_ = lStack_e8;
        bRam0000000003eb48f1 = 1;
      }
      auVar16._8_8_ = uStack_140;
      auVar16._0_8_ = lStack_138;
      uStack_f0 = auVar21._8_8_;
      lStack_e8 = auVar21._0_8_;
      auVar19._8_8_ = uStack_a0;
      auVar19._0_8_ = lStack_98;
      lVar5 = *(long *)(lVar8 + 0x10);
      if (lVar5 == 0) {
        auVar16 = func_0x00f78af4();
        lVar5 = auVar16._0_8_;
        puStack_f8 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
        pppppuStack_100 = &pppppuStack_e0;
        if ((bRam0000000003eb48f2 & 1) == 0) {
          func_0x00f78a20(0x3d6f260);
          bRam0000000003eb48f2 = 1;
        }
        if (*(long *)(lVar5 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar5 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar16._8_8_,0);
          uVar4 = *(ulong *)(lVar5 + 0x10);
          if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        lVar8 = func_0x00f78af4();
        puStack_128 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
        pppppuStack_130 = &pppppuStack_100;
        if ((bRam0000000003eb48f3 & 1) == 0) {
          uStack_140 = auVar16._8_8_;
          lStack_138 = lVar5;
          func_0x00f78a20(0x3d6f258);
          auVar16._8_8_ = uStack_140;
          auVar16._0_8_ = lStack_138;
          bRam0000000003eb48f3 = 1;
        }
        uStack_140 = auVar16._8_8_;
        lStack_138 = auVar16._0_8_;
        auVar21._8_8_ = uStack_f0;
        auVar21._0_8_ = lStack_e8;
        auVar19._8_8_ = uStack_a0;
        auVar19._0_8_ = lStack_98;
        lVar5 = *(long *)(lVar8 + 0x10);
        if (lVar5 == 0) {
          auVar17 = func_0x00f78af4();
          puStack_148 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
          ppppppuVar14 = &pppppuStack_150;
          pppppuStack_150 = &pppppuStack_130;
          if ((bRam0000000003eb48f4 & 1) == 0) {
            func_0x00f78a20(0x3d6f258);
            bRam0000000003eb48f4 = 1;
          }
          lVar5 = *(long *)(auVar17._0_8_ + 0x10);
          if (lVar5 != 0) {
            Atlas_Save_SaveManager__SetIntData(lVar5,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar17._8_8_,0);
            uVar4 = *(ulong *)(auVar17._0_8_ + 0x10);
            if (uVar4 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
              *(undefined1 *)(uVar4 + 0x110) = 1;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar4;
              return auVar18;
            }
          }
          puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
          auVar19 = func_0x00f78af4();
          uVar10 = 1;
          puVar2 = &stack0xfffffffffffffe90;
          uVar6 = 0x3eb4000;
          do {
            uVar9 = auVar19._8_8_;
            lVar5 = auVar19._0_8_;
            uVar12 = auVar17._8_8_;
            uVar11 = auVar17._0_8_;
            auVar17._8_8_ = uVar10;
            auVar17._0_8_ = lVar5;
            *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
            *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar2 + -0x28) = uVar6;
            *(undefined8 *)(puVar2 + -0x20) = uVar12;
            *(undefined8 *)(puVar2 + -0x18) = uVar11;
            *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar14;
            *(undefined **)(puVar2 + -8) = puVar15;
            ppppppuVar14 = (undefined8 ******)(puVar2 + -0x10);
            unaff_x22 = 0x3eb4000;
            unaff_x23 = 0x3d6f220;
            if ((bRam0000000003eb48f6 & 1) == 0) {
              func_0x00f78a20(0x3d6f220);
              bRam0000000003eb48f6 = 1;
            }
            uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar9,0);
            if (*(long *)(lVar5 + 0x10) != 0) {
              Atlas_Save_SaveManager__SetIntData(*(long *)(lVar5 + 0x10),uVar6,uVar10,0);
              uVar4 = *(ulong *)(lVar5 + 0x10);
              if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
            }
            puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
            auVar19 = func_0x00f78af4();
            uVar10 = 0;
            puVar2 = puVar2 + -0x40;
            uVar6 = uVar9;
          } while( true );
        }
        puVar3 = &stack0xfffffffffffffee0;
        uVar6 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
        ppppppuVar14 = (undefined8 ******)pppppuStack_130;
        puVar15 = puStack_128;
        auVar1 = auVar16;
      }
      else {
        puVar3 = &stack0xffffffffffffff30;
        uVar6 = /*STR('L_WM')*/ uRam0000000003d6f260;
        ppppppuVar14 = (undefined8 ******)pppppuStack_e0;
        puVar15 = puStack_d8;
        auVar1 = auVar21;
      }
    }
    else {
      puVar3 = &stack0xffffffffffffff80;
      uVar6 = /*STR('L_WD')*/ uRam0000000003d6f248;
      ppppppuVar14 = (undefined8 ******)pppppuStack_90;
      puVar15 = puStack_88;
      auVar1 = auVar19;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffd0;
    uVar6 = /*STR('L_WP')*/ uRam0000000003d6f268;
    ppppppuVar14 = (undefined8 ******)pppppuStack_40;
    puVar15 = puStack_38;
  }
  uStack_140 = auVar16._8_8_;
  lStack_138 = auVar16._0_8_;
  uStack_f0 = auVar21._8_8_;
  lStack_e8 = auVar21._0_8_;
  uStack_a0 = auVar19._8_8_;
  lStack_98 = auVar19._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3eb4000;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
  *(undefined **)(puVar3 + -8) = puVar15;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar6,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = *(undefined8 *)(puVar3 + -0x40);
  *(undefined8 *)(puVar3 + -0x40) = uVar10;
  *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  uVar4 = 0;
  lVar8 = lVar5;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar19 = Atlas_Save_SaveManager__GetIntDataIndex(uVar6,lVar5);
  uVar9 = auVar19._8_8_;
  if (-1 < (int)auVar19._0_4_) {
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x110), lVar5 == 0)) {
      auVar19 = func_0x00f78af4();
      uVar9 = auVar19._8_8_;
      lVar5 = auVar19._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = uVar10;
      *(undefined8 *)(puVar3 + -0x78) = 0x3d246e0;
      *(undefined8 *)(puVar3 + -0x70) = 0x3eb4000;
      *(undefined8 *)(puVar3 + -0x68) = uVar6;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
      *(code **)(puVar3 + -0x48) = Atlas_Save_SaveManager__SetStringData;
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      uVar4 = Atlas_Save_SaveManager__GetStringDataIndex(lVar5,uVar9);
      lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
      if ((int)(uint)uVar4 < 0) {
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar19 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar7 + 0x118),uVar9,lVar8,uRam0000000003d3d918);
LAB_014ecdb8:
          *(undefined1 *)(lVar5 + 0x110) = 1;
          return auVar19;
        }
      }
      else if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x118), lVar7 != 0)) {
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (uVar4 & 0xffffffff) * 0x10 + 0x28);
        if ((lVar7 != 0) && (auVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar7,lVar8,5,0), (auVar19._0_8_ & 1) != 0))
        {
          return auVar19;
        }
        lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar19 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar7 + 0x118),uVar4,uVar9,lVar8,uRam0000000003d3d930)
          ;
          goto LAB_014ecdb8;
        }
      }
      auVar19 = func_0x00f78af4();
      *(ulong *)(puVar3 + -0xb0) = uVar4;
      *(undefined8 *)(puVar3 + -0xa8) = uVar9;
      *(long *)(puVar3 + -0xa0) = lVar8;
      *(long *)(puVar3 + -0x98) = lVar5;
      *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x50;
      *(code **)(puVar3 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar5 = Atlas_Save_SaveManager__get_SaveData(auVar19._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
      *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      lVar8 = lVar5;
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
        lVar8 = extraout_x1_00;
      }
      if ((lVar5 != 0) && (lVar7 = *(long *)(lVar5 + 0x118), lVar7 != 0)) {
        uVar4 = 0;
        do {
          uVar13 = (uint)uVar4;
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar13) goto LAB_014ed098;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar13 * 0x10 + 0x20);
          if (lVar8 == 0) break;
          auVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar19._8_8_,5,0);
          lVar8 = auVar21._8_8_;
          if ((auVar21._0_8_ & 1) != 0) goto LAB_014ed09c;
          uVar4 = (ulong)(uVar13 + 1);
          lVar7 = *(long *)(lVar5 + 0x118);
        } while (lVar7 != 0);
      }
      func_0x00f78af4();
      lVar8 = extraout_x1_01;
LAB_014ed098:
      uVar4 = 0xffffffff;
LAB_014ed09c:
      auVar22._8_8_ = lVar8;
      auVar22._0_8_ = uVar4;
      return auVar22;
    }
    if (*(uint *)(lVar5 + 0x18) <= auVar19._0_4_) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar9 = extraout_x1;
    }
    uVar4 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + (auVar19._0_8_ & 0xffffffff) * 0x10 + 0x28);
  }
  auVar20._8_8_ = uVar9;
  auVar20._0_8_ = uVar4;
  return auVar20;
}



// ============================================================
// RVA: 0x147ee80 | Atlas.League.LeaguePlayerSave.get_WeeksPlatinumTotal
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeaguePlayerSave__get_WeeksPlatinumTotal(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  auVar19._8_8_ = unaff_x20;
  auVar19._0_8_ = unaff_x19;
  if ((bRam0000000003eb48ed & 1) == 0) {
    func_0x00f78a20(0x3d6f268);
    bRam0000000003eb48ed = 1;
  }
  auVar17._8_8_ = uStack_110;
  auVar17._0_8_ = lStack_108;
  auVar16._8_8_ = uStack_c0;
  auVar16._0_8_ = lStack_b8;
  auVar15._8_8_ = uStack_70;
  auVar15._0_8_ = lStack_68;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = /*STR('L_WP')*/ uRam0000000003d6f268;
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._0_8_;
    puStack_28 = &Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal;
    unaff_x21 = 0x3eb4000;
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48ee & 1) == 0) {
      func_0x00f78a20(0x3d6f268);
      bRam0000000003eb48ee = 1;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar3 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,auVar15._8_8_,0);
      uVar5 = *(ulong *)(lVar3 + 0x10);
      if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar12 = func_0x00f78af4();
    puStack_58 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
    pppppppuStack_60 = &ppppppuStack_30;
    if ((bRam0000000003eb48ef & 1) == 0) {
      uStack_70 = auVar15._8_8_;
      lStack_68 = lVar3;
      func_0x00f78a20(0x3d6f248);
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      bRam0000000003eb48ef = 1;
    }
    auVar17._8_8_ = uStack_110;
    auVar17._0_8_ = lStack_108;
    auVar16._8_8_ = uStack_c0;
    auVar16._0_8_ = lStack_b8;
    uStack_70 = auVar15._8_8_;
    lStack_68 = auVar15._0_8_;
    lVar3 = *(long *)(lVar12 + 0x10);
    if (lVar3 == 0) {
      auVar16 = func_0x00f78af4();
      lVar3 = auVar16._0_8_;
      puStack_78 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
      unaff_x21 = 0x3eb4000;
      pppppppuStack_80 = &pppppppuStack_60;
      if ((bRam0000000003eb48f0 & 1) == 0) {
        func_0x00f78a20(0x3d6f248);
        bRam0000000003eb48f0 = 1;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar3 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar16._8_8_,0);
        uVar5 = *(ulong *)(lVar3 + 0x10);
        if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar12 = func_0x00f78af4();
      puStack_a8 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
      pppppppuStack_b0 = &pppppppuStack_80;
      if ((bRam0000000003eb48f1 & 1) == 0) {
        uStack_c0 = auVar16._8_8_;
        lStack_b8 = lVar3;
        func_0x00f78a20(0x3d6f260);
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        bRam0000000003eb48f1 = 1;
      }
      auVar17._8_8_ = uStack_110;
      auVar17._0_8_ = lStack_108;
      uStack_c0 = auVar16._8_8_;
      lStack_b8 = auVar16._0_8_;
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      lVar3 = *(long *)(lVar12 + 0x10);
      if (lVar3 == 0) {
        auVar17 = func_0x00f78af4();
        lVar3 = auVar17._0_8_;
        puStack_c8 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
        unaff_x21 = 0x3eb4000;
        pppppppuStack_d0 = &pppppppuStack_b0;
        if ((bRam0000000003eb48f2 & 1) == 0) {
          func_0x00f78a20(0x3d6f260);
          bRam0000000003eb48f2 = 1;
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData
                    (*(long *)(lVar3 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar17._8_8_,0);
          uVar5 = *(ulong *)(lVar3 + 0x10);
          if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        lVar12 = func_0x00f78af4();
        puStack_f8 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
        pppppppuStack_100 = &pppppppuStack_d0;
        if ((bRam0000000003eb48f3 & 1) == 0) {
          uStack_110 = auVar17._8_8_;
          lStack_108 = lVar3;
          func_0x00f78a20(0x3d6f258);
          auVar17._8_8_ = uStack_110;
          auVar17._0_8_ = lStack_108;
          bRam0000000003eb48f3 = 1;
        }
        uStack_110 = auVar17._8_8_;
        lStack_108 = auVar17._0_8_;
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        auVar15._8_8_ = uStack_70;
        auVar15._0_8_ = lStack_68;
        lVar3 = *(long *)(lVar12 + 0x10);
        if (lVar3 == 0) {
          auVar18 = func_0x00f78af4();
          puStack_118 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
          pppppppuVar13 = &pppppppuStack_120;
          pppppppuStack_120 = &pppppppuStack_100;
          if ((bRam0000000003eb48f4 & 1) == 0) {
            func_0x00f78a20(0x3d6f258);
            bRam0000000003eb48f4 = 1;
          }
          lVar3 = *(long *)(auVar18._0_8_ + 0x10);
          if (lVar3 != 0) {
            Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar18._8_8_,0);
            uVar5 = *(ulong *)(auVar18._0_8_ + 0x10);
            if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
              *(undefined1 *)(uVar5 + 0x110) = 1;
              return uVar5;
            }
          }
          puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
          auVar19 = func_0x00f78af4();
          uVar9 = 1;
          puVar1 = &stack0xfffffffffffffec0;
          uVar4 = 0x3eb4000;
          do {
            uVar8 = auVar19._8_8_;
            lVar3 = auVar19._0_8_;
            uVar11 = auVar18._8_8_;
            uVar10 = auVar18._0_8_;
            auVar18._8_8_ = uVar9;
            auVar18._0_8_ = lVar3;
            *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
            *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar1 + -0x28) = uVar4;
            *(undefined8 *)(puVar1 + -0x20) = uVar11;
            *(undefined8 *)(puVar1 + -0x18) = uVar10;
            *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
            *(undefined **)(puVar1 + -8) = puVar14;
            pppppppuVar13 = (undefined8 *******)(puVar1 + -0x10);
            unaff_x22 = 0x3eb4000;
            unaff_x23 = 0x3d6f220;
            if ((bRam0000000003eb48f6 & 1) == 0) {
              func_0x00f78a20(0x3d6f220);
              bRam0000000003eb48f6 = 1;
            }
            uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
            if (*(long *)(lVar3 + 0x10) != 0) {
              Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
              uVar5 = *(ulong *)(lVar3 + 0x10);
              if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
            }
            puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
            auVar19 = func_0x00f78af4();
            uVar9 = 0;
            puVar1 = puVar1 + -0x40;
            uVar4 = uVar8;
          } while( true );
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
        uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
        unaff_x29 = pppppppuStack_100;
        unaff_x30 = puStack_f8;
        auVar19 = auVar17;
      }
      else {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
        uVar4 = /*STR('L_WM')*/ uRam0000000003d6f260;
        unaff_x29 = pppppppuStack_b0;
        unaff_x30 = puStack_a8;
        auVar19 = auVar16;
      }
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      uVar4 = /*STR('L_WD')*/ uRam0000000003d6f248;
      unaff_x29 = pppppppuStack_60;
      unaff_x30 = puStack_58;
      auVar19 = auVar15;
    }
  }
  uStack_110 = auVar17._8_8_;
  lStack_108 = auVar17._0_8_;
  uStack_c0 = auVar16._8_8_;
  lStack_b8 = auVar16._0_8_;
  uStack_70 = auVar15._8_8_;
  lStack_68 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar19._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar19._0_8_;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar4,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar19 = func_0x00f78af4();
  uVar8 = auVar19._8_8_;
  lVar3 = auVar19._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar8);
  lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar5 < 0) {
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar8,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar12,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar8,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar19 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar8;
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(long *)((long)register0x00000008 + -0x98) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar19._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar19._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147eedc | Atlas.League.LeaguePlayerSave.set_WeeksPlatinumTotal
// ============================================================

undefined1  [16]
Atlas_League_LeaguePlayerSave__set_WeeksPlatinumTotal(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb48ee & 1) == 0) {
    func_0x00f78a20(0x3d6f268);
    bRam0000000003eb48ee = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_WP')*/ uRam0000000003d6f268,param_2,0);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal;
  uStack_50 = param_2;
  lStack_48 = param_1;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48ef & 1) == 0) {
    func_0x00f78a20(0x3d6f248);
    bRam0000000003eb48ef = 1;
  }
  auVar1._8_8_ = uStack_50;
  auVar1._0_8_ = lStack_48;
  auVar20._8_8_ = uStack_f0;
  auVar20._0_8_ = lStack_e8;
  auVar18._8_8_ = uStack_a0;
  auVar18._0_8_ = lStack_98;
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    auVar18 = func_0x00f78af4();
    lVar5 = auVar18._0_8_;
    puStack_58 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
    pppppuStack_60 = &pppppuStack_40;
    if ((bRam0000000003eb48f0 & 1) == 0) {
      func_0x00f78a20(0x3d6f248);
      bRam0000000003eb48f0 = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar5 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar18._8_8_,0);
      uVar4 = *(ulong *)(lVar5 + 0x10);
      if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar8 = func_0x00f78af4();
    puStack_88 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
    pppppuStack_90 = &pppppuStack_60;
    if ((bRam0000000003eb48f1 & 1) == 0) {
      uStack_a0 = auVar18._8_8_;
      lStack_98 = lVar5;
      func_0x00f78a20(0x3d6f260);
      auVar18._8_8_ = uStack_a0;
      auVar18._0_8_ = lStack_98;
      bRam0000000003eb48f1 = 1;
    }
    auVar20._8_8_ = uStack_f0;
    auVar20._0_8_ = lStack_e8;
    uStack_a0 = auVar18._8_8_;
    lStack_98 = auVar18._0_8_;
    lVar5 = *(long *)(lVar8 + 0x10);
    if (lVar5 == 0) {
      auVar20 = func_0x00f78af4();
      lVar5 = auVar20._0_8_;
      puStack_a8 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
      pppppuStack_b0 = &pppppuStack_90;
      if ((bRam0000000003eb48f2 & 1) == 0) {
        func_0x00f78a20(0x3d6f260);
        bRam0000000003eb48f2 = 1;
      }
      if (*(long *)(lVar5 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar5 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar20._8_8_,0);
        uVar4 = *(ulong *)(lVar5 + 0x10);
        if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar8 = func_0x00f78af4();
      puStack_d8 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
      pppppuStack_e0 = &pppppuStack_b0;
      if ((bRam0000000003eb48f3 & 1) == 0) {
        uStack_f0 = auVar20._8_8_;
        lStack_e8 = lVar5;
        func_0x00f78a20(0x3d6f258);
        auVar20._8_8_ = uStack_f0;
        auVar20._0_8_ = lStack_e8;
        bRam0000000003eb48f3 = 1;
      }
      uStack_f0 = auVar20._8_8_;
      lStack_e8 = auVar20._0_8_;
      auVar18._8_8_ = uStack_a0;
      auVar18._0_8_ = lStack_98;
      lVar5 = *(long *)(lVar8 + 0x10);
      if (lVar5 == 0) {
        auVar16 = func_0x00f78af4();
        puStack_f8 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
        ppppppuVar14 = &pppppuStack_100;
        pppppuStack_100 = &pppppuStack_e0;
        if ((bRam0000000003eb48f4 & 1) == 0) {
          func_0x00f78a20(0x3d6f258);
          bRam0000000003eb48f4 = 1;
        }
        lVar5 = *(long *)(auVar16._0_8_ + 0x10);
        if (lVar5 != 0) {
          Atlas_Save_SaveManager__SetIntData(lVar5,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar16._8_8_,0);
          uVar4 = *(ulong *)(auVar16._0_8_ + 0x10);
          if (uVar4 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
            *(undefined1 *)(uVar4 + 0x110) = 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar4;
            return auVar17;
          }
        }
        puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
        auVar18 = func_0x00f78af4();
        uVar10 = 1;
        puVar2 = &stack0xfffffffffffffee0;
        uVar6 = 0x3eb4000;
        do {
          uVar9 = auVar18._8_8_;
          lVar5 = auVar18._0_8_;
          uVar12 = auVar16._8_8_;
          uVar11 = auVar16._0_8_;
          auVar16._8_8_ = uVar10;
          auVar16._0_8_ = lVar5;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x28) = uVar6;
          *(undefined8 *)(puVar2 + -0x20) = uVar12;
          *(undefined8 *)(puVar2 + -0x18) = uVar11;
          *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar14;
          *(undefined **)(puVar2 + -8) = puVar15;
          ppppppuVar14 = (undefined8 ******)(puVar2 + -0x10);
          unaff_x22 = 0x3eb4000;
          unaff_x23 = 0x3d6f220;
          if ((bRam0000000003eb48f6 & 1) == 0) {
            func_0x00f78a20(0x3d6f220);
            bRam0000000003eb48f6 = 1;
          }
          uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar9,0);
          if (*(long *)(lVar5 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData(*(long *)(lVar5 + 0x10),uVar6,uVar10,0);
            uVar4 = *(ulong *)(lVar5 + 0x10);
            if (uVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
          }
          puVar15 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
          auVar18 = func_0x00f78af4();
          uVar10 = 0;
          puVar2 = puVar2 + -0x40;
          uVar6 = uVar9;
        } while( true );
      }
      puVar3 = &stack0xffffffffffffff30;
      uVar6 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
      ppppppuVar14 = (undefined8 ******)pppppuStack_e0;
      puVar15 = puStack_d8;
      auVar1 = auVar20;
    }
    else {
      puVar3 = &stack0xffffffffffffff80;
      uVar6 = /*STR('L_WM')*/ uRam0000000003d6f260;
      ppppppuVar14 = (undefined8 ******)pppppuStack_90;
      puVar15 = puStack_88;
      auVar1 = auVar18;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffd0;
    uVar6 = /*STR('L_WD')*/ uRam0000000003d6f248;
    ppppppuVar14 = (undefined8 ******)pppppuStack_40;
    puVar15 = puStack_38;
  }
  uStack_f0 = auVar20._8_8_;
  lStack_e8 = auVar20._0_8_;
  uStack_a0 = auVar18._8_8_;
  lStack_98 = auVar18._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3eb4000;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
  *(undefined **)(puVar3 + -8) = puVar15;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar6,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = *(undefined8 *)(puVar3 + -0x40);
  *(undefined8 *)(puVar3 + -0x40) = uVar10;
  *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  uVar4 = 0;
  lVar8 = lVar5;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar18 = Atlas_Save_SaveManager__GetIntDataIndex(uVar6,lVar5);
  uVar9 = auVar18._8_8_;
  if (-1 < (int)auVar18._0_4_) {
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x110), lVar5 == 0)) {
      auVar18 = func_0x00f78af4();
      uVar9 = auVar18._8_8_;
      lVar5 = auVar18._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = uVar10;
      *(undefined8 *)(puVar3 + -0x78) = 0x3d246e0;
      *(undefined8 *)(puVar3 + -0x70) = 0x3eb4000;
      *(undefined8 *)(puVar3 + -0x68) = uVar6;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
      *(code **)(puVar3 + -0x48) = Atlas_Save_SaveManager__SetStringData;
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      uVar4 = Atlas_Save_SaveManager__GetStringDataIndex(lVar5,uVar9);
      lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
      if ((int)(uint)uVar4 < 0) {
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar18 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar7 + 0x118),uVar9,lVar8,uRam0000000003d3d918);
LAB_014ecdb8:
          *(undefined1 *)(lVar5 + 0x110) = 1;
          return auVar18;
        }
      }
      else if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x118), lVar7 != 0)) {
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (uVar4 & 0xffffffff) * 0x10 + 0x28);
        if ((lVar7 != 0) && (auVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar7,lVar8,5,0), (auVar18._0_8_ & 1) != 0))
        {
          return auVar18;
        }
        lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
          auVar18 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar7 + 0x118),uVar4,uVar9,lVar8,uRam0000000003d3d930)
          ;
          goto LAB_014ecdb8;
        }
      }
      auVar18 = func_0x00f78af4();
      *(ulong *)(puVar3 + -0xb0) = uVar4;
      *(undefined8 *)(puVar3 + -0xa8) = uVar9;
      *(long *)(puVar3 + -0xa0) = lVar8;
      *(long *)(puVar3 + -0x98) = lVar5;
      *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x50;
      *(code **)(puVar3 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar5 = Atlas_Save_SaveManager__get_SaveData(auVar18._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
      *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      lVar8 = lVar5;
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
        lVar8 = extraout_x1_00;
      }
      if ((lVar5 != 0) && (lVar7 = *(long *)(lVar5 + 0x118), lVar7 != 0)) {
        uVar4 = 0;
        do {
          uVar13 = (uint)uVar4;
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar13) goto LAB_014ed098;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar13 * 0x10 + 0x20);
          if (lVar8 == 0) break;
          auVar20 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar18._8_8_,5,0);
          lVar8 = auVar20._8_8_;
          if ((auVar20._0_8_ & 1) != 0) goto LAB_014ed09c;
          uVar4 = (ulong)(uVar13 + 1);
          lVar7 = *(long *)(lVar5 + 0x118);
        } while (lVar7 != 0);
      }
      func_0x00f78af4();
      lVar8 = extraout_x1_01;
LAB_014ed098:
      uVar4 = 0xffffffff;
LAB_014ed09c:
      auVar21._8_8_ = lVar8;
      auVar21._0_8_ = uVar4;
      return auVar21;
    }
    if (*(uint *)(lVar5 + 0x18) <= auVar18._0_4_) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar9 = extraout_x1;
    }
    uVar4 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + (auVar18._0_8_ & 0xffffffff) * 0x10 + 0x28);
  }
  auVar19._8_8_ = uVar9;
  auVar19._0_8_ = uVar4;
  return auVar19;
}



// ============================================================
// RVA: 0x147ef54 | Atlas.League.LeaguePlayerSave.get_WeeksDiamondTotal
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeaguePlayerSave__get_WeeksDiamondTotal(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  auVar18._8_8_ = unaff_x20;
  auVar18._0_8_ = unaff_x19;
  if ((bRam0000000003eb48ef & 1) == 0) {
    func_0x00f78a20(0x3d6f248);
    bRam0000000003eb48ef = 1;
  }
  auVar16._8_8_ = uStack_c0;
  auVar16._0_8_ = lStack_b8;
  auVar15._8_8_ = uStack_70;
  auVar15._0_8_ = lStack_68;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = /*STR('L_WD')*/ uRam0000000003d6f248;
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._0_8_;
    puStack_28 = &Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal;
    unaff_x21 = 0x3eb4000;
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48f0 & 1) == 0) {
      func_0x00f78a20(0x3d6f248);
      bRam0000000003eb48f0 = 1;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar3 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,auVar15._8_8_,0);
      uVar5 = *(ulong *)(lVar3 + 0x10);
      if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar12 = func_0x00f78af4();
    puStack_58 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
    pppppppuStack_60 = &ppppppuStack_30;
    if ((bRam0000000003eb48f1 & 1) == 0) {
      uStack_70 = auVar15._8_8_;
      lStack_68 = lVar3;
      func_0x00f78a20(0x3d6f260);
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      bRam0000000003eb48f1 = 1;
    }
    auVar16._8_8_ = uStack_c0;
    auVar16._0_8_ = lStack_b8;
    uStack_70 = auVar15._8_8_;
    lStack_68 = auVar15._0_8_;
    lVar3 = *(long *)(lVar12 + 0x10);
    if (lVar3 == 0) {
      auVar16 = func_0x00f78af4();
      lVar3 = auVar16._0_8_;
      puStack_78 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
      unaff_x21 = 0x3eb4000;
      pppppppuStack_80 = &pppppppuStack_60;
      if ((bRam0000000003eb48f2 & 1) == 0) {
        func_0x00f78a20(0x3d6f260);
        bRam0000000003eb48f2 = 1;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData
                  (*(long *)(lVar3 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar16._8_8_,0);
        uVar5 = *(ulong *)(lVar3 + 0x10);
        if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      lVar12 = func_0x00f78af4();
      puStack_a8 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
      pppppppuStack_b0 = &pppppppuStack_80;
      if ((bRam0000000003eb48f3 & 1) == 0) {
        uStack_c0 = auVar16._8_8_;
        lStack_b8 = lVar3;
        func_0x00f78a20(0x3d6f258);
        auVar16._8_8_ = uStack_c0;
        auVar16._0_8_ = lStack_b8;
        bRam0000000003eb48f3 = 1;
      }
      uStack_c0 = auVar16._8_8_;
      lStack_b8 = auVar16._0_8_;
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      lVar3 = *(long *)(lVar12 + 0x10);
      if (lVar3 == 0) {
        auVar17 = func_0x00f78af4();
        puStack_c8 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
        pppppppuVar13 = &pppppppuStack_d0;
        pppppppuStack_d0 = &pppppppuStack_b0;
        if ((bRam0000000003eb48f4 & 1) == 0) {
          func_0x00f78a20(0x3d6f258);
          bRam0000000003eb48f4 = 1;
        }
        lVar3 = *(long *)(auVar17._0_8_ + 0x10);
        if (lVar3 != 0) {
          Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar17._8_8_,0);
          uVar5 = *(ulong *)(auVar17._0_8_ + 0x10);
          if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
            *(undefined1 *)(uVar5 + 0x110) = 1;
            return uVar5;
          }
        }
        puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
        auVar18 = func_0x00f78af4();
        uVar9 = 1;
        puVar1 = &stack0xffffffffffffff10;
        uVar4 = 0x3eb4000;
        do {
          uVar8 = auVar18._8_8_;
          lVar3 = auVar18._0_8_;
          uVar11 = auVar17._8_8_;
          uVar10 = auVar17._0_8_;
          auVar17._8_8_ = uVar9;
          auVar17._0_8_ = lVar3;
          *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar1 + -0x28) = uVar4;
          *(undefined8 *)(puVar1 + -0x20) = uVar11;
          *(undefined8 *)(puVar1 + -0x18) = uVar10;
          *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
          *(undefined **)(puVar1 + -8) = puVar14;
          pppppppuVar13 = (undefined8 *******)(puVar1 + -0x10);
          unaff_x22 = 0x3eb4000;
          unaff_x23 = 0x3d6f220;
          if ((bRam0000000003eb48f6 & 1) == 0) {
            func_0x00f78a20(0x3d6f220);
            bRam0000000003eb48f6 = 1;
          }
          uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
          if (*(long *)(lVar3 + 0x10) != 0) {
            Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
            uVar5 = *(ulong *)(lVar3 + 0x10);
            if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
          }
          puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
          auVar18 = func_0x00f78af4();
          uVar9 = 0;
          puVar1 = puVar1 + -0x40;
          uVar4 = uVar8;
        } while( true );
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
      uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
      unaff_x29 = pppppppuStack_b0;
      unaff_x30 = puStack_a8;
      auVar18 = auVar16;
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      uVar4 = /*STR('L_WM')*/ uRam0000000003d6f260;
      unaff_x29 = pppppppuStack_60;
      unaff_x30 = puStack_58;
      auVar18 = auVar15;
    }
  }
  uStack_c0 = auVar16._8_8_;
  lStack_b8 = auVar16._0_8_;
  uStack_70 = auVar15._8_8_;
  lStack_68 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar18._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar18._0_8_;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar4,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar18 = func_0x00f78af4();
  uVar8 = auVar18._8_8_;
  lVar3 = auVar18._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar8);
  lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar5 < 0) {
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar8,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar12,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar8,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar18 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar8;
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(long *)((long)register0x00000008 + -0x98) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar18._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar18._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147efb0 | Atlas.League.LeaguePlayerSave.set_WeeksDiamondTotal
// ============================================================

undefined1  [16]
Atlas_League_LeaguePlayerSave__set_WeeksDiamondTotal(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb48f0 & 1) == 0) {
    func_0x00f78a20(0x3d6f248);
    bRam0000000003eb48f0 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_WD')*/ uRam0000000003d6f248,param_2,0);
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar4 = func_0x00f78af4();
  puStack_38 = &Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal;
  uStack_50 = param_2;
  lStack_48 = param_1;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48f1 & 1) == 0) {
    func_0x00f78a20(0x3d6f260);
    bRam0000000003eb48f1 = 1;
  }
  auVar19._8_8_ = uStack_50;
  auVar19._0_8_ = lStack_48;
  auVar17._8_8_ = uStack_a0;
  auVar17._0_8_ = lStack_98;
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    auVar17 = func_0x00f78af4();
    lVar4 = auVar17._0_8_;
    puStack_58 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
    pppppuStack_60 = &pppppuStack_40;
    if ((bRam0000000003eb48f2 & 1) == 0) {
      func_0x00f78a20(0x3d6f260);
      bRam0000000003eb48f2 = 1;
    }
    if (*(long *)(lVar4 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar4 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar17._8_8_,0);
      uVar3 = *(ulong *)(lVar4 + 0x10);
      if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar7 = func_0x00f78af4();
    puStack_88 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
    pppppuStack_90 = &pppppuStack_60;
    if ((bRam0000000003eb48f3 & 1) == 0) {
      uStack_a0 = auVar17._8_8_;
      lStack_98 = lVar4;
      func_0x00f78a20(0x3d6f258);
      auVar17._8_8_ = uStack_a0;
      auVar17._0_8_ = lStack_98;
      bRam0000000003eb48f3 = 1;
    }
    uStack_a0 = auVar17._8_8_;
    lStack_98 = auVar17._0_8_;
    lVar4 = *(long *)(lVar7 + 0x10);
    if (lVar4 == 0) {
      auVar15 = func_0x00f78af4();
      puStack_a8 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
      ppppppuVar13 = &pppppuStack_b0;
      pppppuStack_b0 = &pppppuStack_90;
      if ((bRam0000000003eb48f4 & 1) == 0) {
        func_0x00f78a20(0x3d6f258);
        bRam0000000003eb48f4 = 1;
      }
      lVar4 = *(long *)(auVar15._0_8_ + 0x10);
      if (lVar4 != 0) {
        Atlas_Save_SaveManager__SetIntData(lVar4,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar15._8_8_,0);
        uVar3 = *(ulong *)(auVar15._0_8_ + 0x10);
        if (uVar3 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
          *(undefined1 *)(uVar3 + 0x110) = 1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar3;
          return auVar16;
        }
      }
      puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
      auVar17 = func_0x00f78af4();
      uVar9 = 1;
      puVar1 = &stack0xffffffffffffff30;
      uVar5 = 0x3eb4000;
      do {
        uVar8 = auVar17._8_8_;
        lVar4 = auVar17._0_8_;
        uVar11 = auVar15._8_8_;
        uVar10 = auVar15._0_8_;
        auVar15._8_8_ = uVar9;
        auVar15._0_8_ = lVar4;
        *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar1 + -0x28) = uVar5;
        *(undefined8 *)(puVar1 + -0x20) = uVar11;
        *(undefined8 *)(puVar1 + -0x18) = uVar10;
        *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar13;
        *(undefined **)(puVar1 + -8) = puVar14;
        ppppppuVar13 = (undefined8 ******)(puVar1 + -0x10);
        unaff_x22 = 0x3eb4000;
        unaff_x23 = 0x3d6f220;
        if ((bRam0000000003eb48f6 & 1) == 0) {
          func_0x00f78a20(0x3d6f220);
          bRam0000000003eb48f6 = 1;
        }
        uVar5 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
        if (*(long *)(lVar4 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData(*(long *)(lVar4 + 0x10),uVar5,uVar9,0);
          uVar3 = *(ulong *)(lVar4 + 0x10);
          if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
        auVar17 = func_0x00f78af4();
        uVar9 = 0;
        puVar1 = puVar1 + -0x40;
        uVar5 = uVar8;
      } while( true );
    }
    puVar2 = &stack0xffffffffffffff80;
    uVar5 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
    ppppppuVar13 = (undefined8 ******)pppppuStack_90;
    puVar14 = puStack_88;
    auVar19 = auVar17;
  }
  else {
    puVar2 = &stack0xffffffffffffffd0;
    uVar5 = /*STR('L_WM')*/ uRam0000000003d6f260;
    ppppppuVar13 = (undefined8 ******)pppppuStack_40;
    puVar14 = puStack_38;
  }
  uStack_a0 = auVar17._8_8_;
  lStack_98 = auVar17._0_8_;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = 0x3eb4000;
  *(long *)(puVar2 + -0x20) = auVar19._8_8_;
  *(long *)(puVar2 + -0x18) = auVar19._0_8_;
  *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar13;
  *(undefined **)(puVar2 + -8) = puVar14;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar5,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar4);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)(puVar2 + -0x40);
  *(undefined8 *)(puVar2 + -0x40) = uVar9;
  *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
  *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  uVar3 = 0;
  lVar7 = lVar4;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar17 = Atlas_Save_SaveManager__GetIntDataIndex(uVar5,lVar4);
  uVar8 = auVar17._8_8_;
  if (-1 < (int)auVar17._0_4_) {
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x110), lVar4 == 0)) {
      auVar17 = func_0x00f78af4();
      uVar8 = auVar17._8_8_;
      lVar4 = auVar17._0_8_;
      *(undefined8 *)(puVar2 + -0x80) = uVar9;
      *(undefined8 *)(puVar2 + -0x78) = 0x3d246e0;
      *(undefined8 *)(puVar2 + -0x70) = 0x3eb4000;
      *(undefined8 *)(puVar2 + -0x68) = uVar5;
      *(undefined8 *)(puVar2 + -0x60) = 0;
      *(undefined8 *)(puVar2 + -0x58) = 0;
      *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
      *(code **)(puVar2 + -0x48) = Atlas_Save_SaveManager__SetStringData;
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      uVar3 = Atlas_Save_SaveManager__GetStringDataIndex(lVar4,uVar8);
      lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar4);
      if ((int)(uint)uVar3 < 0) {
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
          auVar17 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar8,lVar7,uRam0000000003d3d918);
LAB_014ecdb8:
          *(undefined1 *)(lVar4 + 0x110) = 1;
          return auVar17;
        }
      }
      else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar3 & 0xffffffff) * 0x10 + 0x28);
        if ((lVar6 != 0) && (auVar17 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar7,5,0), (auVar17._0_8_ & 1) != 0))
        {
          return auVar17;
        }
        lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar4);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
          auVar17 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar3,uVar8,lVar7,uRam0000000003d3d930)
          ;
          goto LAB_014ecdb8;
        }
      }
      auVar17 = func_0x00f78af4();
      *(ulong *)(puVar2 + -0xb0) = uVar3;
      *(undefined8 *)(puVar2 + -0xa8) = uVar8;
      *(long *)(puVar2 + -0xa0) = lVar7;
      *(long *)(puVar2 + -0x98) = lVar4;
      *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x50;
      *(code **)(puVar2 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar4 = Atlas_Save_SaveManager__get_SaveData(auVar17._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xb0);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xa8);
      *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xa0);
      *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0x98);
      *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0x90);
      *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
      lVar7 = lVar4;
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
        lVar7 = extraout_x1_00;
      }
      if ((lVar4 != 0) && (lVar6 = *(long *)(lVar4 + 0x118), lVar6 != 0)) {
        uVar3 = 0;
        do {
          uVar12 = (uint)uVar3;
          if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar12) goto LAB_014ed098;
          if (*(uint *)(lVar6 + 0x18) <= uVar12) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar7 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar12 * 0x10 + 0x20);
          if (lVar7 == 0) break;
          auVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar7,auVar17._8_8_,5,0);
          lVar7 = auVar19._8_8_;
          if ((auVar19._0_8_ & 1) != 0) goto LAB_014ed09c;
          uVar3 = (ulong)(uVar12 + 1);
          lVar6 = *(long *)(lVar4 + 0x118);
        } while (lVar6 != 0);
      }
      func_0x00f78af4();
      lVar7 = extraout_x1_01;
LAB_014ed098:
      uVar3 = 0xffffffff;
LAB_014ed09c:
      auVar20._8_8_ = lVar7;
      auVar20._0_8_ = uVar3;
      return auVar20;
    }
    if (*(uint *)(lVar4 + 0x18) <= auVar17._0_4_) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar8 = extraout_x1;
    }
    uVar3 = (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + (auVar17._0_8_ & 0xffffffff) * 0x10 + 0x28);
  }
  auVar18._8_8_ = uVar8;
  auVar18._0_8_ = uVar3;
  return auVar18;
}



// ============================================================
// RVA: 0x147f028 | Atlas.League.LeaguePlayerSave.get_WeeksMasterTotal
// ============================================================

ulong Atlas_League_LeaguePlayerSave__get_WeeksMasterTotal(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined1 ****ppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar17._8_8_ = unaff_x20;
  auVar17._0_8_ = unaff_x19;
  if ((bRam0000000003eb48f1 & 1) == 0) {
    func_0x00f78a20(0x3d6f260);
    bRam0000000003eb48f1 = 1;
  }
  auVar15._8_8_ = uStack_70;
  auVar15._0_8_ = lStack_68;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = /*STR('L_WM')*/ uRam0000000003d6f260;
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._0_8_;
    puStack_28 = &Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal;
    unaff_x21 = 0x3eb4000;
    puStack_30 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb48f2 & 1) == 0) {
      func_0x00f78a20(0x3d6f260);
      bRam0000000003eb48f2 = 1;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData
                (*(long *)(lVar3 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,auVar15._8_8_,0);
      uVar5 = *(ulong *)(lVar3 + 0x10);
      if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    lVar12 = func_0x00f78af4();
    puStack_58 = &Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow;
    ppuStack_60 = &puStack_30;
    if ((bRam0000000003eb48f3 & 1) == 0) {
      uStack_70 = auVar15._8_8_;
      lStack_68 = lVar3;
      func_0x00f78a20(0x3d6f258);
      auVar15._8_8_ = uStack_70;
      auVar15._0_8_ = lStack_68;
      bRam0000000003eb48f3 = 1;
    }
    uStack_70 = auVar15._8_8_;
    lStack_68 = auVar15._0_8_;
    lVar3 = *(long *)(lVar12 + 0x10);
    if (lVar3 == 0) {
      auVar16 = func_0x00f78af4();
      puStack_78 = &Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow;
      ppppuVar13 = &pppuStack_80;
      pppuStack_80 = &ppuStack_60;
      if ((bRam0000000003eb48f4 & 1) == 0) {
        func_0x00f78a20(0x3d6f258);
        bRam0000000003eb48f4 = 1;
      }
      lVar3 = *(long *)(auVar16._0_8_ + 0x10);
      if (lVar3 != 0) {
        Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar16._8_8_,0);
        uVar5 = *(ulong *)(auVar16._0_8_ + 0x10);
        if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
          *(undefined1 *)(uVar5 + 0x110) = 1;
          return uVar5;
        }
      }
      puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
      auVar17 = func_0x00f78af4();
      uVar9 = 1;
      puVar1 = &stack0xffffffffffffff60;
      uVar4 = 0x3eb4000;
      do {
        uVar8 = auVar17._8_8_;
        lVar3 = auVar17._0_8_;
        uVar11 = auVar16._8_8_;
        uVar10 = auVar16._0_8_;
        auVar16._8_8_ = uVar9;
        auVar16._0_8_ = lVar3;
        *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar1 + -0x28) = uVar4;
        *(undefined8 *)(puVar1 + -0x20) = uVar11;
        *(undefined8 *)(puVar1 + -0x18) = uVar10;
        *(undefined1 *****)(puVar1 + -0x10) = ppppuVar13;
        *(undefined **)(puVar1 + -8) = puVar14;
        ppppuVar13 = (undefined1 ****)(puVar1 + -0x10);
        unaff_x22 = 0x3eb4000;
        unaff_x23 = 0x3d6f220;
        if ((bRam0000000003eb48f6 & 1) == 0) {
          func_0x00f78a20(0x3d6f220);
          bRam0000000003eb48f6 = 1;
        }
        uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
        if (*(long *)(lVar3 + 0x10) != 0) {
          Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
          uVar5 = *(ulong *)(lVar3 + 0x10);
          if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
        puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
        auVar17 = func_0x00f78af4();
        uVar9 = 0;
        puVar1 = puVar1 + -0x40;
        uVar4 = uVar8;
      } while( true );
    }
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
    unaff_x29 = ppuStack_60;
    unaff_x30 = puStack_58;
    auVar17 = auVar15;
  }
  uStack_70 = auVar15._8_8_;
  lStack_68 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar17._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar17._0_8_;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar4,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar17 = func_0x00f78af4();
  uVar8 = auVar17._8_8_;
  lVar3 = auVar17._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d246e0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar8);
  lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar5 < 0) {
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar8,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar12,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar8,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar17 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar8;
  *(long *)((long)register0x00000008 + -0xa0) = lVar12;
  *(long *)((long)register0x00000008 + -0x98) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x88) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar17._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar17._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147f084 | Atlas.League.LeaguePlayerSave.set_WeeksMasterTotal
// ============================================================

undefined1  [16]
Atlas_League_LeaguePlayerSave__set_WeeksMasterTotal(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if ((bRam0000000003eb48f2 & 1) == 0) {
    func_0x00f78a20(0x3d6f260);
    bRam0000000003eb48f2 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_WM')*/ uRam0000000003d6f260,param_2,0);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar2 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb48f3 & 1) == 0) {
    func_0x00f78a20(0x3d6f258);
    bRam0000000003eb48f3 = 1;
  }
  uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 == 0) {
    auVar14 = func_0x00f78af4();
    puVar12 = &stack0xffffffffffffffa0;
    if ((bRam0000000003eb48f4 & 1) == 0) {
      func_0x00f78a20(0x3d6f258);
      bRam0000000003eb48f4 = 1;
    }
    lVar3 = *(long *)(auVar14._0_8_ + 0x10);
    if (lVar3 != 0) {
      Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar14._8_8_,0);
      uVar2 = *(ulong *)(auVar14._0_8_ + 0x10);
      if (uVar2 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
        *(undefined1 *)(uVar2 + 0x110) = 1;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar2;
        return auVar16;
      }
    }
    puVar13 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
    auVar16 = func_0x00f78af4();
    uVar8 = 1;
    puVar1 = &stack0xffffffffffffff80;
    uVar4 = 0x3eb4000;
    do {
      uVar7 = auVar16._8_8_;
      lVar3 = auVar16._0_8_;
      uVar10 = auVar14._8_8_;
      uVar9 = auVar14._0_8_;
      auVar14._8_8_ = uVar8;
      auVar14._0_8_ = lVar3;
      *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = uVar4;
      *(undefined8 *)(puVar1 + -0x20) = uVar10;
      *(undefined8 *)(puVar1 + -0x18) = uVar9;
      *(undefined1 **)(puVar1 + -0x10) = puVar12;
      *(undefined **)(puVar1 + -8) = puVar13;
      puVar12 = puVar1 + -0x10;
      unaff_x22 = 0x3eb4000;
      unaff_x23 = 0x3d6f220;
      if ((bRam0000000003eb48f6 & 1) == 0) {
        func_0x00f78a20(0x3d6f220);
        bRam0000000003eb48f6 = 1;
      }
      uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar7,0);
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar8,0);
        uVar2 = *(ulong *)(lVar3 + 0x10);
        if (uVar2 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      puVar13 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
      auVar16 = func_0x00f78af4();
      uVar8 = 0;
      puVar1 = puVar1 + -0x40;
      uVar4 = uVar7;
    } while( true );
  }
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,/*STR('L_WGHR')*/ uRam0000000003d6f258,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = 0;
  lVar6 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar14 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  uVar4 = auVar14._8_8_;
  if (-1 < (int)auVar14._0_4_) {
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x110), lVar3 == 0)) {
      auVar14 = func_0x00f78af4();
      uVar4 = auVar14._8_8_;
      lVar3 = auVar14._0_8_;
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      uVar2 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar4);
      lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar3);
      if ((int)(uint)uVar2 < 0) {
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x118) != 0)) {
          auVar14 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar5 + 0x118),uVar4,lVar6,uRam0000000003d3d918);
LAB_014ecdb8:
          *(undefined1 *)(lVar3 + 0x110) = 1;
          return auVar14;
        }
      }
      else if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x118), lVar5 != 0)) {
        if (*(uint *)(lVar5 + 0x18) <= (uint)uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (uVar2 & 0xffffffff) * 0x10 + 0x28);
        if ((lVar5 != 0) && (auVar14 = /*System.String$$Equals*/ func_0x029caa48(lVar5,lVar6,5,0), (auVar14._0_8_ & 1) != 0))
        {
          return auVar14;
        }
        lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar3);
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x118) != 0)) {
          auVar14 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar5 + 0x118),uVar2,uVar4,lVar6,uRam0000000003d3d930)
          ;
          goto LAB_014ecdb8;
        }
      }
      auVar14 = func_0x00f78af4();
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar14._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = lVar3;
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
        lVar6 = extraout_x1_00;
      }
      if ((lVar3 != 0) && (lVar5 = *(long *)(lVar3 + 0x118), lVar5 != 0)) {
        uVar2 = 0;
        do {
          uVar11 = (uint)uVar2;
          if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar11) goto LAB_014ed098;
          if (*(uint *)(lVar5 + 0x18) <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar11 * 0x10 + 0x20);
          if (lVar6 == 0) break;
          auVar16 = /*System.String$$Equals*/ func_0x029caa48(lVar6,auVar14._8_8_,5,0);
          lVar6 = auVar16._8_8_;
          if ((auVar16._0_8_ & 1) != 0) goto LAB_014ed09c;
          uVar2 = (ulong)(uVar11 + 1);
          lVar5 = *(long *)(lVar3 + 0x118);
        } while (lVar5 != 0);
      }
      func_0x00f78af4();
      lVar6 = extraout_x1_01;
LAB_014ed098:
      uVar2 = 0xffffffff;
LAB_014ed09c:
      auVar17._8_8_ = lVar6;
      auVar17._0_8_ = uVar2;
      return auVar17;
    }
    if (*(uint *)(lVar3 + 0x18) <= auVar14._0_4_) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar4 = extraout_x1;
    }
    uVar2 = (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (auVar14._0_8_ & 0xffffffff) * 0x10 + 0x28);
  }
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = uVar2;
  return auVar15;
}



// ============================================================
// RVA: 0x147f0fc | Atlas.League.LeaguePlayerSave.get_WeeksGoldOrHigherInARow
// ============================================================

ulong Atlas_League_LeaguePlayerSave__get_WeeksGoldOrHigherInARow(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if ((bRam0000000003eb48f3 & 1) == 0) {
    func_0x00f78a20(0x3d6f258);
    bRam0000000003eb48f3 = 1;
  }
  uVar4 = /*STR('L_WGHR')*/ uRam0000000003d6f258;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    auVar16 = func_0x00f78af4();
    puVar13 = &stack0xffffffffffffffd0;
    if ((bRam0000000003eb48f4 & 1) == 0) {
      func_0x00f78a20(0x3d6f258);
      bRam0000000003eb48f4 = 1;
    }
    lVar3 = *(long *)(auVar16._0_8_ + 0x10);
    if (lVar3 != 0) {
      Atlas_Save_SaveManager__SetIntData(lVar3,/*STR('L_WGHR')*/ uRam0000000003d6f258,auVar16._8_8_,0);
      uVar5 = *(ulong *)(auVar16._0_8_ + 0x10);
      if (uVar5 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
        *(undefined1 *)(uVar5 + 0x110) = 1;
        return uVar5;
      }
    }
    puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
    auVar15 = func_0x00f78af4();
    uVar9 = 1;
    puVar1 = &stack0xffffffffffffffb0;
    uVar4 = 0x3eb4000;
    do {
      uVar8 = auVar15._8_8_;
      lVar3 = auVar15._0_8_;
      uVar11 = auVar16._8_8_;
      uVar10 = auVar16._0_8_;
      auVar16._8_8_ = uVar9;
      auVar16._0_8_ = lVar3;
      *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = uVar4;
      *(undefined8 *)(puVar1 + -0x20) = uVar11;
      *(undefined8 *)(puVar1 + -0x18) = uVar10;
      *(undefined1 **)(puVar1 + -0x10) = puVar13;
      *(undefined **)(puVar1 + -8) = puVar14;
      puVar13 = puVar1 + -0x10;
      unaff_x22 = 0x3eb4000;
      unaff_x23 = 0x3d6f220;
      if ((bRam0000000003eb48f6 & 1) == 0) {
        func_0x00f78a20(0x3d6f220);
        bRam0000000003eb48f6 = 1;
      }
      uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar8,0);
      if (*(long *)(lVar3 + 0x10) != 0) {
        Atlas_Save_SaveManager__SetIntData(*(long *)(lVar3 + 0x10),uVar4,uVar9,0);
        uVar5 = *(ulong *)(lVar3 + 0x10);
        if (uVar5 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
      puVar14 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
      auVar15 = func_0x00f78af4();
      uVar9 = 0;
      puVar1 = puVar1 + -0x40;
      uVar4 = uVar8;
    } while( true );
  }
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,/*STR('L_WGHR')*/ uRam0000000003d6f258,0,0);
    bRam0000000003eb4c45 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = lVar3;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Save_SaveManager__GetIntDataIndex(uVar4,lVar3);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 0x10 + 0x28);
  }
  auVar16 = func_0x00f78af4();
  uVar4 = auVar16._8_8_;
  lVar3 = auVar16._0_8_;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__GetStringDataIndex(lVar3,uVar4);
  lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
  if ((int)(uint)uVar5 < 0) {
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar6 + 0x118),uVar4,lVar12,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar3 + 0x110) = 1;
      return uVar5;
    }
  }
  else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x118), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (uVar5 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar6 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,lVar12,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar3);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x118) != 0)) {
      uVar5 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar6 + 0x118),uVar5,uVar4,lVar12,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar16 = func_0x00f78af4();
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar16._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x118), lVar12 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar16._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar2 + 1);
      lVar12 = *(long *)(lVar3 + 0x118);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147f158 | Atlas.League.LeaguePlayerSave.set_WeeksGoldOrHigherInARow
// ============================================================

void Atlas_League_LeaguePlayerSave__set_WeeksGoldOrHigherInARow(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 *puVar3;
  
  if ((bRam0000000003eb48f4 & 1) == 0) {
    func_0x00f78a20(0x3d6f258);
    bRam0000000003eb48f4 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x10),/*STR('L_WGHR')*/ uRam0000000003d6f258,param_2,0);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
      *(undefined1 *)(lVar4 + 0x110) = 1;
      return;
    }
  }
  puVar10 = &Atlas_League_LeaguePlayerSave__SaveRewardSeen;
  auVar11 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  uVar6 = 1;
  uVar9 = 0x3eb4000;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    uVar8 = uVar6;
    puVar3 = puVar1;
    uVar7 = auVar11._8_8_;
    lVar5 = auVar11._0_8_;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = uVar9;
    *(undefined8 *)(puVar3 + -0x20) = param_2;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(undefined **)(puVar3 + -8) = puVar10;
    unaff_x22 = 0x3eb4000;
    unaff_x23 = 0x3d6f220;
    if ((bRam0000000003eb48f6 & 1) == 0) {
      func_0x00f78a20(0x3d6f220);
      bRam0000000003eb48f6 = 1;
    }
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,uVar7,0);
    if (*(long *)(lVar5 + 0x10) != 0) {
      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar5 + 0x10),uVar6,uVar8,0);
      lVar4 = *(long *)(lVar5 + 0x10);
      if (lVar4 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    puVar10 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
    auVar11 = func_0x00f78af4();
    puVar1 = puVar3 + -0x40;
    uVar6 = 0;
    param_1 = lVar5;
    param_2 = uVar8;
    uVar9 = uVar7;
    puVar2 = puVar3;
  } while( true );
}



// ============================================================
// RVA: 0x147f1d0 | Atlas.League.LeaguePlayerSave.SaveRewardSeen
// ============================================================

void Atlas_League_LeaguePlayerSave__SaveRewardSeen(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar7 [16];
  
  auVar2._8_8_ = unaff_x21;
  auVar2._0_8_ = unaff_x19;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  puVar3 = (undefined1 *)register0x00000008;
  uVar4 = 1;
  do {
    auVar1 = auVar7;
    uVar6 = uVar4;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = auVar2._8_8_;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = auVar2._0_8_;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    unaff_x22 = 0x3eb4000;
    unaff_x23 = 0x3d6f220;
    if ((bRam0000000003eb48f6 & 1) == 0) {
      func_0x00f78a20(0x3d6f220);
      bRam0000000003eb48f6 = 1;
    }
    uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar1._8_8_,0);
    lVar5 = *(long *)(auVar1._0_8_ + 0x10);
    if (lVar5 != 0) {
      Atlas_Save_SaveManager__SetIntData(lVar5,uVar4,uVar6,0);
      lVar5 = *(long *)(auVar1._0_8_ + 0x10);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x110) = 1;
        return;
      }
    }
    unaff_x30 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
    auVar7 = func_0x00f78af4();
    puVar3 = puVar3 + -0x40;
    uVar4 = 0;
    unaff_x20 = uVar6;
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x147f1d8 | Atlas.League.LeaguePlayerSave.SaveRewardSeenStatus
// ============================================================

void Atlas_League_LeaguePlayerSave__SaveRewardSeenStatus
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar6 [16];
  
  auVar2._8_8_ = unaff_x21;
  auVar2._0_8_ = unaff_x19;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  do {
    auVar1 = auVar6;
    uVar5 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = auVar2._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x22 = 0x3eb4000;
    unaff_x23 = 0x3d6f220;
    if ((bRam0000000003eb48f6 & 1) == 0) {
      func_0x00f78a20(0x3d6f220);
      bRam0000000003eb48f6 = 1;
    }
    uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar1._8_8_,0);
    lVar4 = *(long *)(auVar1._0_8_ + 0x10);
    if (lVar4 != 0) {
      Atlas_Save_SaveManager__SetIntData(lVar4,uVar3,uVar5,0);
      lVar4 = *(long *)(auVar1._0_8_ + 0x10);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x110) = 1;
        return;
      }
    }
    unaff_x30 = &Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
    auVar6 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_3 = 0;
    unaff_x20 = uVar5;
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x147f26c | Atlas.League.LeaguePlayerSave.SaveRewardUnseen
// ============================================================

void Atlas_League_LeaguePlayerSave__SaveRewardUnseen(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar5 [16];
  
  auVar2._8_8_ = unaff_x21;
  auVar2._0_8_ = unaff_x19;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  do {
    auVar1 = auVar5;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = auVar2._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0;
    unaff_x22 = 0x3eb4000;
    unaff_x23 = 0x3d6f220;
    if ((bRam0000000003eb48f6 & 1) == 0) {
      func_0x00f78a20(0x3d6f220);
      bRam0000000003eb48f6 = 1;
    }
    uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,auVar1._8_8_,0);
    lVar4 = *(long *)(auVar1._0_8_ + 0x10);
    if (lVar4 != 0) {
      Atlas_Save_SaveManager__SetIntData(lVar4,uVar3,0,0);
      lVar4 = *(long *)(auVar1._0_8_ + 0x10);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x110) = 1;
        return;
      }
    }
    unaff_x30 = Atlas_League_LeaguePlayerSave__SaveRewardUnseen;
    auVar5 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x147f274 | Atlas.League.LeaguePlayerSave.GetRewardSeen
// ============================================================

ulong Atlas_League_LeaguePlayerSave__GetRewardSeen(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 extraout_w1;
  undefined1 auVar5 [12];
  undefined4 uStack_b4;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb48f7 & 1) == 0) {
    func_0x00f78a20(0x3d6f220);
    bRam0000000003eb48f7 = 1;
  }
  uVar2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_R_')*/ uRam0000000003d6f220,param_2,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = Atlas_Save_SaveManager__GetIntData(*(long *)(param_1 + 0x10),uVar2,0,0);
    return (ulong)(0 < iVar1);
  }
  auVar5 = func_0x00f78af4(0,uVar2);
  uStack_64 = auVar5._8_4_;
  uStack_60 = 0x3d6f220;
  uStack_58 = 0x3eb4000;
  puStack_38 = &Atlas_League_LeaguePlayerSave__GetReplayCountDay;
  uStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48f9 & 1) == 0) {
    func_0x00f78a20(0x3d6f218);
    bRam0000000003eb48f9 = 1;
  }
  uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_64,0);
  uVar2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar2,0);
  lVar3 = *(long *)(auVar5._0_8_ + 0x10);
  if (lVar3 != 0) {
    uVar4 = Atlas_Save_SaveManager__GetIntData(lVar3,uVar2,0,0);
    return uVar4;
  }
  func_0x00f78af4(0,uVar2);
  if ((bRam0000000003eb48fa & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7d010);
    func_0x00f78a20(0x3d6f1e8);
    bRam0000000003eb48fa = 1;
  }
  uStack_b4 = extraout_w1;
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_b4);
  uVar4 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar2,0);
  return uVar4;
}



// ============================================================
// RVA: 0x147f2f8 | Atlas.League.LeaguePlayerSave.GetReplayCountDay
// ============================================================

void Atlas_League_LeaguePlayerSave__GetReplayCountDay(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 extraout_w1;
  undefined4 uStack_84;
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  if ((bRam0000000003eb48f9 & 1) == 0) {
    func_0x00f78a20(0x3d6f218);
    bRam0000000003eb48f9 = 1;
  }
  uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  uVar1 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('L_RC_')*/ uRam0000000003d6f218,uVar1,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Save_SaveManager__GetIntData(*(long *)(param_1 + 0x10),uVar1,0,0);
    return;
  }
  func_0x00f78af4(0,uVar1);
  if ((bRam0000000003eb48fa & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7d010);
    func_0x00f78a20(0x3d6f1e8);
    bRam0000000003eb48fa = 1;
  }
  uStack_84 = extraout_w1;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_84);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x147f388 | Atlas.League.LeaguePlayerSave.ParseLeaderboardAIKey
// ============================================================

void Atlas_League_LeaguePlayerSave__ParseLeaderboardAIKey(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb48fa & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7d010);
    func_0x00f78a20(0x3d6f1e8);
    bRam0000000003eb48fa = 1;
  }
  uStack_44 = param_2;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_44);
  /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}_{1}')*/ uRam0000000003d7d010,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x147f430 | Atlas.League.LeaguePlayerSave.GetLeaderboardForUI
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x147f4f4 | Atlas.League.LeaguePlayerSave.GetPlayerStandingForUI
// ============================================================
// [DECOMPILE_FAILED]

