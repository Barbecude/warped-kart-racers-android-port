// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeagueManager.<>c

// ============================================================
// RVA: 0x155bac0 | Atlas.League.LeagueManager.<>c..cctor
// ============================================================

void Atlas_League_LeagueManager___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4fad & 1) == 0) {
    func_0x00f78a20(0x3d27e38);
    bRam0000000003eb4fad = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.League.LeagueManager.<>c_TypeInfo*/ lRam0000000003d27e38 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x155bb20 | Atlas.League.LeagueManager.<>c..ctor
// ============================================================

void Atlas_League_LeagueManager___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x155bb28 | Atlas.League.LeagueManager.<>c.<PrepareLeaderboardData>b__54_0
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029ccd04) */
/* WARNING: Removing unreachable block (ram,0x029ccd50) */
/* WARNING: Removing unreachable block (ram,0x029ccd6c) */

ulong Atlas_League_LeagueManager___c___PrepareLeaderboardData_b__54_0
                (undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long extraout_x1;
  long extraout_x1_00;
  uint uVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar2;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = &stack0xfffffffffffffff0;
  if ((param_2 == 0) || (param_3 == 0)) {
    func_0x00f78af4();
    unaff_x29 = &puStack_20;
    puStack_18 = &Atlas_League_LeagueManager___c___PrepareLeaderboardData_b__54_1;
    if ((extraout_x1 == 0) || (param_3 == 0)) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
      if ((extraout_x1_00 == 0) || (param_3 == 0)) {
        uVar5 = func_0x00f78af4();
        return uVar5;
      }
      piVar3 = (int *)(extraout_x1_00 + 0x20);
      iVar6 = *(int *)(param_3 + 0x20);
      if (*piVar3 != iVar6) goto System_Int32__CompareTo;
      if (*(char *)(extraout_x1_00 + 0x10) != '\0') {
        return 1;
      }
      lVar4 = *(long *)(extraout_x1_00 + 0x18);
      lVar7 = *(long *)(param_3 + 0x18);
      register0x00000008 = (BADSPACEBASE *)&puStack_20;
      unaff_x30 = &Atlas_League_LeagueManager___c___PrepareEventPlacementData_b__60_0;
    }
    else {
      iVar6 = *(int *)(extraout_x1 + 0x1c);
      piVar3 = (int *)(param_3 + 0x1c);
      if (iVar6 != *piVar3) {
System_Int32__CompareTo:
        uVar8 = (uint)(iVar6 < *piVar3);
        if (*piVar3 < iVar6) {
          uVar8 = 0xffffffff;
        }
        return (ulong)uVar8;
      }
      if (*(char *)(extraout_x1 + 0x18) != '\0') {
        return 1;
      }
      lVar4 = *(long *)(extraout_x1 + 0x10);
      lVar7 = *(long *)(param_3 + 0x10);
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Atlas_League_LeagueManager___c___PrepareLeaderboardData_b__54_1;
      unaff_x29 = (undefined1 **)puVar2;
      puStack_20 = puVar1;
    }
  }
  else {
    iVar6 = *(int *)(param_2 + 0x1c);
    piVar3 = (int *)(param_3 + 0x1c);
    if (iVar6 != *piVar3) goto System_Int32__CompareTo;
    if (*(char *)(param_2 + 0x18) != '\0') {
      return 0xffffffff;
    }
    lVar4 = *(long *)(param_2 + 0x10);
    lVar7 = *(long *)(param_3 + 0x10);
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb9453 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,lVar7,4,0);
    bRam0000000003eb9453 = 1;
  }
  if (lVar4 == lVar7) {
    uVar5 = 0;
  }
  else if (lVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029ccb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(&UNK_029ccb10 + (ulong)UNK_036fdb5d * 4))();
      return uVar5;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x155bb8c | Atlas.League.LeagueManager.<>c.<PrepareLeaderboardData>b__54_1
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029ccd04) */
/* WARNING: Removing unreachable block (ram,0x029ccd50) */
/* WARNING: Removing unreachable block (ram,0x029ccd6c) */

ulong Atlas_League_LeagueManager___c___PrepareLeaderboardData_b__54_1
                (undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long extraout_x1;
  uint uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar7;
  undefined *unaff_x30;
  
  puVar7 = &stack0xfffffffffffffff0;
  if ((param_2 == 0) || (param_3 == 0)) {
    func_0x00f78af4();
    if ((extraout_x1 == 0) || (param_3 == 0)) {
      uVar3 = func_0x00f78af4();
      return uVar3;
    }
    piVar1 = (int *)(extraout_x1 + 0x20);
    iVar4 = *(int *)(param_3 + 0x20);
    if (*piVar1 != iVar4) goto System_Int32__CompareTo;
    if (*(char *)(extraout_x1 + 0x10) != '\0') {
      return 1;
    }
    lVar2 = *(long *)(extraout_x1 + 0x18);
    lVar5 = *(long *)(param_3 + 0x18);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Atlas_League_LeagueManager___c___PrepareEventPlacementData_b__60_0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x1c);
    piVar1 = (int *)(param_3 + 0x1c);
    if (iVar4 != *piVar1) {
System_Int32__CompareTo:
      uVar6 = (uint)(iVar4 < *piVar1);
      if (*piVar1 < iVar4) {
        uVar6 = 0xffffffff;
      }
      return (ulong)uVar6;
    }
    if (*(char *)(param_2 + 0x18) != '\0') {
      return 1;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    lVar5 = *(long *)(param_3 + 0x10);
    puVar7 = unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar7;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb9453 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,lVar5,4,0);
    bRam0000000003eb9453 = 1;
  }
  if (lVar2 == lVar5) {
    uVar3 = 0;
  }
  else if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029ccb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK_029ccb10 + (ulong)UNK_036fdb5d * 4))();
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x155bbf0 | Atlas.League.LeagueManager.<>c.<PrepareEventPlacementData>b__60_0
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029ccd04) */
/* WARNING: Removing unreachable block (ram,0x029ccd50) */
/* WARNING: Removing unreachable block (ram,0x029ccd6c) */

ulong Atlas_League_LeagueManager___c___PrepareEventPlacementData_b__60_0
                (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  iVar1 = *(int *)(param_3 + 0x20);
  if (*(int *)(param_2 + 0x20) != iVar1) {
    iVar2 = *(int *)(param_2 + 0x20);
    uVar6 = (uint)(iVar1 < iVar2);
    if (iVar2 < iVar1) {
      uVar6 = 0xffffffff;
    }
    return (ulong)uVar6;
  }
  if (*(char *)(param_2 + 0x10) == '\0') {
    lVar3 = *(long *)(param_2 + 0x18);
    lVar5 = *(long *)(param_3 + 0x18);
    if ((bRam0000000003eb9453 & 1) == 0) {
      func_0x00f78a20(0x3d20b50,lVar5,4,0);
      bRam0000000003eb9453 = 1;
    }
    if (lVar3 == lVar5) {
      uVar4 = 0;
    }
    else if (lVar3 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029ccb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&UNK_029ccb10 + (ulong)UNK_036fdb5d * 4))();
        return uVar4;
      }
      uVar4 = 1;
    }
    return uVar4;
  }
  return 1;
}



