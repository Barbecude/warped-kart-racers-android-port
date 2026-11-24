// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.StatCondition

// ============================================================
// RVA: 0x15045bc | Atlas.Stats.StatCondition.ConditionPassed
// ============================================================

/* WARNING: Possible PIC construction at 0x015045dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015045e0) */

uint Atlas_Stats_StatCondition__ConditionPassed(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  
  if (param_2 == 0) {
    auVar7 = func_0x00f78af4();
    lVar3 = auVar7._8_8_;
    param_2 = auVar7._0_8_;
  }
  else {
    lVar3 = *param_1;
  }
  if (lVar3 == 0) {
code_r0x01504680:
    func_0x00f78af4();
code_r0x01504684:
    uVar2 = func_0x00f78b24();
    auVar8 = func_0x00f78ac0(uVar2,0);
    iVar1 = auVar8._8_4_;
    lVar3 = auVar8._0_8_;
    switch(*(undefined4 *)(lVar3 + 8)) {
    case 0:
      return (uint)(*(int *)(lVar3 + 0xc) == iVar1);
    case 1:
      return (uint)(*(int *)(lVar3 + 0xc) != iVar1);
    case 2:
      return (uint)(*(int *)(lVar3 + 0xc) < iVar1);
    case 3:
      return (uint)(*(int *)(lVar3 + 0xc) <= iVar1);
    case 4:
      return (uint)(iVar1 < *(int *)(lVar3 + 0xc));
    case 5:
      return (uint)(iVar1 <= *(int *)(lVar3 + 0xc));
    default:
      return 0;
    }
  }
  if ((int)*(ulong *)(lVar3 + 0x18) < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar6) goto code_r0x01504684;
      if (*(long *)(param_2 + 0x20) == 0) goto code_r0x01504680;
      iVar1 = /*Atlas.Stats.StatsData$$GetStat*/ func_0x01504b20(*(long *)(param_2 + 0x20),*(undefined4 *)(lVar3 + 0x20 + uVar6 * 4));
      uVar5 = iVar1 + uVar5;
      uVar6 = uVar6 + 1;
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1504690 | Atlas.Stats.StatCondition.ConditionPassed
// ============================================================

bool Atlas_Stats_StatCondition__ConditionPassed(long param_1,int param_2)

{
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    return *(int *)(param_1 + 0xc) == param_2;
  case 1:
    return *(int *)(param_1 + 0xc) != param_2;
  case 2:
    return *(int *)(param_1 + 0xc) < param_2;
  case 3:
    return *(int *)(param_1 + 0xc) <= param_2;
  case 4:
    return param_2 < *(int *)(param_1 + 0xc);
  case 5:
    return param_2 <= *(int *)(param_1 + 0xc);
  default:
    return false;
  }
}



// ============================================================
// RVA: 0x150471c | Atlas.Stats.StatCondition.GetPercentageComplete
// ============================================================

undefined8
Atlas_Stats_StatCondition__GetPercentageComplete(undefined8 param_1,int param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
  case 1:
    break;
  case 2:
    if (param_2 < 2) {
      return param_1;
    }
    break;
  case 3:
    if (param_2 < 1) {
      return param_1;
    }
    break;
  default:
  }
  return 0;
}



// ============================================================
// RVA: 0x15047a8 | Atlas.Stats.StatCondition.GetPercentageComplete
// ============================================================

undefined8 Atlas_Stats_StatCondition__GetPercentageComplete(long param_1,undefined8 param_2)

{
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(int *)(param_1 + 0xc) < 2) {
      return param_2;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0xc) < 1) {
      return param_2;
    }
    break;
  default:
  }
  return 0;
}



