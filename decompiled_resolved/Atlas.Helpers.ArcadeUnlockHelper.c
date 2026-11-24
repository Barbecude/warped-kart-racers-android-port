// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Helpers.ArcadeUnlockHelper

// ============================================================
// RVA: 0x1454ea0 | Atlas.Helpers.ArcadeUnlockHelper.UnlockArcadeReward
// ============================================================

/* WARNING: Possible PIC construction at 0x01454f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01454f40) */
/* WARNING: Removing unreachable block (ram,0x01454f44) */
/* WARNING: Removing unreachable block (ram,0x01454f4c) */
/* WARNING: Removing unreachable block (ram,0x01454f58) */
/* WARNING: Removing unreachable block (ram,0x01454f78) */
/* WARNING: Removing unreachable block (ram,0x01454f80) */
/* WARNING: Removing unreachable block (ram,0x01454f9c) */
/* WARNING: Removing unreachable block (ram,0x01454fa4) */
/* WARNING: Removing unreachable block (ram,0x01454fa8) */
/* WARNING: Removing unreachable block (ram,0x01453140) */
/* WARNING: Removing unreachable block (ram,0x01453174) */
/* WARNING: Removing unreachable block (ram,0x01453188) */
/* WARNING: Removing unreachable block (ram,0x014531dc) */
/* WARNING: Removing unreachable block (ram,0x0145322c) */
/* WARNING: Removing unreachable block (ram,0x0145330c) */
/* WARNING: Removing unreachable block (ram,0x0145333c) */
/* WARNING: Removing unreachable block (ram,0x01453344) */
/* WARNING: Removing unreachable block (ram,0x01453348) */
/* WARNING: Removing unreachable block (ram,0x01453364) */
/* WARNING: Removing unreachable block (ram,0x0145336c) */
/* WARNING: Removing unreachable block (ram,0x01453370) */
/* WARNING: Removing unreachable block (ram,0x01453380) */
/* WARNING: Removing unreachable block (ram,0x014533b4) */
/* WARNING: Removing unreachable block (ram,0x01453504) */
/* WARNING: Removing unreachable block (ram,0x0145352c) */
/* WARNING: Removing unreachable block (ram,0x01453564) */
/* WARNING: Removing unreachable block (ram,0x01453588) */
/* WARNING: Removing unreachable block (ram,0x01453590) */
/* WARNING: Removing unreachable block (ram,0x01453594) */
/* WARNING: Removing unreachable block (ram,0x01453490) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014531a8) */

ulong Atlas_Helpers_ArcadeUnlockHelper__UnlockArcadeReward
                (ulong param_1,ulong param_2,long param_3,long param_4,long param_5,long param_6,
                undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  auVar13._8_8_ = param_1;
  auVar13._0_8_ = param_2;
  uVar5 = param_1;
  lVar7 = param_4;
  if ((bRam0000000003eb479c & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d1fcc0);
    bRam0000000003eb479c = 1;
  }
  if ((int)(uint)param_2 < 0) {
    return uVar5;
  }
  if ((param_1 == 0) || (lVar10 = *(long *)(param_1 + 0x28), lVar10 == 0)) {
LAB_01454fe4:
    func_0x00f78af4();
LAB_01454fe8:
    param_6 = param_3;
    uVar6 = func_0x00f78b24();
    puVar12 = &Atlas_Helpers_ArcadeUnlockHelper__CanBeUnlocked;
    auVar13 = func_0x00f78ac0(uVar6,0);
  }
  else {
    if (*(uint *)(lVar10 + 0x18) <= (uint)param_2) goto LAB_01454fe8;
    if (param_4 == 0) goto LAB_01454fe4;
    uVar5 = Atlas_Stats_UnlockManager__IsUnlocked
                      (param_4,*(undefined8 *)(lVar10 + (param_2 & 0xffffffff) * 8 + 0x20),0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    puVar12 = (undefined *)0x1454f40;
    lVar7 = param_5;
  }
  lVar10 = auVar13._8_8_;
  uVar4 = auVar13._0_4_;
  uStack_70 = param_2;
  lStack_68 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar12;
  if (5 < uVar4) {
    iVar3 = -1;
code_r0x01455038:
    if (uVar4 < 6) {
      uVar9 = *(undefined4 *)(&UNK_033f8124 + (long)(int)uVar4 * 4);
    }
    else {
      uVar9 = 0;
    }
    iVar2 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(uVar9,param_6,lVar7);
    return (ulong)(iVar3 <= iVar2);
  }
  if ((1 << (ulong)(uVar4 & 0x1f) & 0x15U) == 0) {
    if (lVar10 != 0) {
      iVar3 = *(int *)(lVar10 + 0x24);
      goto code_r0x01455038;
    }
  }
  else if (lVar10 != 0) {
    iVar3 = *(int *)(lVar10 + 0x20);
    goto code_r0x01455038;
  }
  auVar13 = func_0x00f78af4();
  lVar10 = auVar13._8_8_;
  lVar7 = auVar13._0_8_;
  pcStack_78 = Atlas_Analytics_AtlasAnalyticsEvents__RewardEvent;
  lStack_a0 = param_4;
  uStack_98 = param_7;
  uStack_90 = param_2;
  lStack_88 = param_5;
  ppuStack_80 = &puStack_60;
  if ((bRam0000000003eb47a8 & 1) == 0) {
    func_0x00f78a20(0x3d3cc00);
    func_0x00f78a20(0x3d3cc10);
    func_0x00f78a20(0x3d71f80);
    func_0x00f78a20(0x3d6ed40);
    bRam0000000003eb47a8 = 1;
  }
  if (*(long *)(lVar7 + 0x20) != 0) {
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(*(long *)(lVar7 + 0x20),uRam0000000003d3cc10);
    lVar11 = *(long *)(lVar7 + 0x20);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&uStack_d8,/*STR('Item')*/ uRam0000000003d6ed40,lVar10,0);
    param_6 = lVar10;
    if (lVar11 != 0) {
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar11,&uStack_c0,uRam0000000003d3cc00);
      uVar5 = Atlas_Analytics_AtlasAnalyticsEvents__PostEvent
                        (lVar7,/*STR('Reward')*/ uRam0000000003d71f80,*(undefined8 *)(lVar7 + 0x20));
      return uVar5;
    }
  }
  iVar3 = func_0x00f78af4();
  if (param_6 != 0) {
    if (extraout_w1 < *(int *)(param_6 + 0x24)) {
      uVar1 = (iVar3 - 1U) * 2;
      if (2 < iVar3 - 1U) {
        uVar1 = 0xffffffff;
      }
      uVar4 = 0xffffffff;
      if (*(int *)(param_6 + 0x20) <= extraout_w1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (iVar3 - 1U) * 2 | 1;
      if (2 < iVar3 - 1U) {
        uVar4 = 0xffffffff;
      }
    }
    return (ulong)uVar4;
  }
  iVar3 = func_0x00f78af4();
  if ((bRam0000000003eb479d & 1) == 0) {
    func_0x00f78a20(0x3d1fcb8);
    bRam0000000003eb479d = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.Helpers.ArcadeRewardsData_TypeInfo*/ uRam0000000003d1fcb8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar5,0);
  if (uVar5 == 0) {
    uVar4 = func_0x00f78af4();
    if (uVar4 < 6) {
      return (ulong)*(uint *)(&UNK_033f8124 + (long)(int)uVar4 * 4);
    }
    return 0;
  }
  *(int *)(uVar5 + 0x10) = iVar3;
  uVar9 = 2;
  switch(iVar3) {
  case 0:
  case 1:
    uVar8 = 1;
    *(undefined4 *)(uVar5 + 0x14) = 1;
    if (iVar3 == 0) goto code_r0x01455288;
    goto code_r0x01455284;
  case 2:
    goto code_r0x01455270;
  case 3:
    break;
  case 4:
    iVar3 = 3;
    goto code_r0x01455270;
  case 5:
    uVar9 = 3;
    break;
  default:
    uVar9 = 0;
  }
  *(undefined4 *)(uVar5 + 0x14) = uVar9;
code_r0x01455284:
  uVar8 = 0;
code_r0x01455288:
  *(undefined1 *)(uVar5 + 0x18) = uVar8;
  return uVar5;
code_r0x01455270:
  *(int *)(uVar5 + 0x14) = iVar3;
  uVar8 = 1;
  goto code_r0x01455288;
}



// ============================================================
// RVA: 0x1454ff4 | Atlas.Helpers.ArcadeUnlockHelper.CanBeUnlocked
// ============================================================

ulong Atlas_Helpers_ArcadeUnlockHelper__CanBeUnlocked
                (uint param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int extraout_w1;
  long lVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (5 < param_1) {
    iVar3 = -1;
LAB_01455038:
    if (param_1 < 6) {
      uVar9 = *(undefined4 *)(&UNK_033f8124 + (long)(int)param_1 * 4);
    }
    else {
      uVar9 = 0;
    }
    iVar2 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(uVar9,param_3,param_4);
    return (ulong)(iVar3 <= iVar2);
  }
  if ((1 << (ulong)(param_1 & 0x1f) & 0x15U) == 0) {
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + 0x24);
      goto LAB_01455038;
    }
  }
  else if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x20);
    goto LAB_01455038;
  }
  auVar11 = func_0x00f78af4();
  lVar7 = auVar11._8_8_;
  lVar5 = auVar11._0_8_;
  if ((bRam0000000003eb47a8 & 1) == 0) {
    func_0x00f78a20(0x3d3cc00);
    func_0x00f78a20(0x3d3cc10);
    func_0x00f78a20(0x3d71f80);
    func_0x00f78a20(0x3d6ed40);
    bRam0000000003eb47a8 = 1;
  }
  if (*(long *)(lVar5 + 0x20) != 0) {
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(*(long *)(lVar5 + 0x20),uRam0000000003d3cc10);
    lVar10 = *(long *)(lVar5 + 0x20);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    /*Core.Analytics.AnalyticsManager.CustomParams$$.ctor*/ func_0x016333c8(&uStack_88,/*STR('Item')*/ uRam0000000003d6ed40,lVar7,0);
    param_3 = lVar7;
    if (lVar10 != 0) {
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      uStack_60 = uStack_78;
      /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar10,&uStack_70,uRam0000000003d3cc00);
      uVar6 = Atlas_Analytics_AtlasAnalyticsEvents__PostEvent
                        (lVar5,/*STR('Reward')*/ uRam0000000003d71f80,*(undefined8 *)(lVar5 + 0x20));
      return uVar6;
    }
  }
  iVar3 = func_0x00f78af4();
  if (param_3 != 0) {
    if (extraout_w1 < *(int *)(param_3 + 0x24)) {
      uVar1 = (iVar3 - 1U) * 2;
      if (2 < iVar3 - 1U) {
        uVar1 = 0xffffffff;
      }
      uVar4 = 0xffffffff;
      if (*(int *)(param_3 + 0x20) <= extraout_w1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (iVar3 - 1U) * 2 | 1;
      if (2 < iVar3 - 1U) {
        uVar4 = 0xffffffff;
      }
    }
    return (ulong)uVar4;
  }
  iVar3 = func_0x00f78af4();
  if ((bRam0000000003eb479d & 1) == 0) {
    func_0x00f78a20(0x3d1fcb8);
    bRam0000000003eb479d = 1;
  }
  uVar6 = func_0x00f78aec(/*Atlas.Helpers.ArcadeRewardsData_TypeInfo*/ uRam0000000003d1fcb8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar6,0);
  if (uVar6 == 0) {
    uVar4 = func_0x00f78af4();
    if (5 < uVar4) {
      return 0;
    }
    return (ulong)*(uint *)(&UNK_033f8124 + (long)(int)uVar4 * 4);
  }
  *(int *)(uVar6 + 0x10) = iVar3;
  uVar9 = 2;
  switch(iVar3) {
  case 0:
  case 1:
    uVar8 = 1;
    *(undefined4 *)(uVar6 + 0x14) = 1;
    if (iVar3 == 0) goto code_r0x01455288;
    goto code_r0x01455284;
  case 2:
    goto code_r0x01455270;
  case 3:
    break;
  case 4:
    iVar3 = 3;
    goto code_r0x01455270;
  case 5:
    uVar9 = 3;
    break;
  default:
    uVar9 = 0;
  }
  *(undefined4 *)(uVar6 + 0x14) = uVar9;
code_r0x01455284:
  uVar8 = 0;
code_r0x01455288:
  *(undefined1 *)(uVar6 + 0x18) = uVar8;
  return uVar6;
code_r0x01455270:
  *(int *)(uVar6 + 0x14) = iVar3;
  uVar8 = 1;
  goto code_r0x01455288;
}



// ============================================================
// RVA: 0x1455174 | Atlas.Helpers.ArcadeUnlockHelper.GetArcadeRewardID
// ============================================================

ulong Atlas_Helpers_ArcadeUnlockHelper__GetArcadeRewardID(int param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  if (param_3 != 0) {
    if (param_2 < *(int *)(param_3 + 0x24)) {
      uVar1 = (param_1 - 1U) * 2;
      if (2 < param_1 - 1U) {
        uVar1 = 0xffffffff;
      }
      uVar3 = 0xffffffff;
      if (*(int *)(param_3 + 0x20) <= param_2) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = (param_1 - 1U) * 2 | 1;
      if (2 < param_1 - 1U) {
        uVar3 = 0xffffffff;
      }
    }
    return (ulong)uVar3;
  }
  iVar2 = func_0x00f78af4();
  if ((bRam0000000003eb479d & 1) == 0) {
    func_0x00f78a20(0x3d1fcb8);
    bRam0000000003eb479d = 1;
  }
  uVar4 = func_0x00f78aec(/*Atlas.Helpers.ArcadeRewardsData_TypeInfo*/ uRam0000000003d1fcb8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar4,0);
  if (uVar4 == 0) {
    uVar3 = func_0x00f78af4();
    if (5 < uVar3) {
      return 0;
    }
    return (ulong)*(uint *)(&UNK_033f8124 + (long)(int)uVar3 * 4);
  }
  *(int *)(uVar4 + 0x10) = iVar2;
  uVar6 = 2;
  switch(iVar2) {
  case 0:
  case 1:
    uVar5 = 1;
    *(undefined4 *)(uVar4 + 0x14) = 1;
    if (iVar2 == 0) goto code_r0x01455288;
    goto code_r0x01455284;
  case 2:
    goto code_r0x01455270;
  case 3:
    break;
  case 4:
    iVar2 = 3;
    goto code_r0x01455270;
  case 5:
    uVar6 = 3;
    break;
  default:
    uVar6 = 0;
  }
  *(undefined4 *)(uVar4 + 0x14) = uVar6;
code_r0x01455284:
  uVar5 = 0;
code_r0x01455288:
  *(undefined1 *)(uVar4 + 0x18) = uVar5;
  return uVar4;
code_r0x01455270:
  *(int *)(uVar4 + 0x14) = iVar2;
  uVar5 = 1;
  goto code_r0x01455288;
}



// ============================================================
// RVA: 0x14551d4 | Atlas.Helpers.ArcadeUnlockHelper.GetRewardData
// ============================================================

ulong Atlas_Helpers_ArcadeUnlockHelper__GetRewardData(int param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000003eb479d & 1) == 0) {
    func_0x00f78a20(0x3d1fcb8);
    bRam0000000003eb479d = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.Helpers.ArcadeRewardsData_TypeInfo*/ uRam0000000003d1fcb8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar2,0);
  if (uVar2 == 0) {
    uVar1 = func_0x00f78af4();
    if (5 < uVar1) {
      return 0;
    }
    return (ulong)*(uint *)(&UNK_033f8124 + (long)(int)uVar1 * 4);
  }
  *(int *)(uVar2 + 0x10) = param_1;
  uVar4 = 2;
  switch(param_1) {
  case 0:
  case 1:
    uVar3 = 1;
    *(undefined4 *)(uVar2 + 0x14) = 1;
    if (param_1 == 0) goto code_r0x01455288;
    goto code_r0x01455284;
  case 2:
    goto code_r0x01455270;
  case 3:
    break;
  case 4:
    param_1 = 3;
    goto code_r0x01455270;
  case 5:
    uVar4 = 3;
    break;
  default:
    uVar4 = 0;
  }
  *(undefined4 *)(uVar2 + 0x14) = uVar4;
code_r0x01455284:
  uVar3 = 0;
code_r0x01455288:
  *(undefined1 *)(uVar2 + 0x18) = uVar3;
  return uVar2;
code_r0x01455270:
  *(int *)(uVar2 + 0x14) = param_1;
  uVar3 = 1;
  goto code_r0x01455288;
}



// ============================================================
// RVA: 0x14552a4 | Atlas.Helpers.ArcadeUnlockHelper.GetRewardMedal
// ============================================================

undefined4 Atlas_Helpers_ArcadeUnlockHelper__GetRewardMedal(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&UNK_033f8124 + (long)(int)param_1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x14552c4 | Atlas.Helpers.ArcadeUnlockHelper.GetRewardIsHalfway
// ============================================================

bool Atlas_Helpers_ArcadeUnlockHelper__GetRewardIsHalfway(uint param_1)

{
  return (param_1 & 1) == 0 && param_1 < 5;
}



// ============================================================
// RVA: 0x14552d4 | Atlas.Helpers.ArcadeUnlockHelper..ctor
// ============================================================

void Atlas_Helpers_ArcadeUnlockHelper___ctor(void)

{
  return;
}



