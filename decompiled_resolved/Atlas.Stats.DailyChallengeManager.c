// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.DailyChallengeManager

// ============================================================
// RVA: 0x1573c3c | Atlas.Stats.DailyChallengeManager.IsChallengeComplete
// ============================================================

bool Atlas_Stats_DailyChallengeManager__IsChallengeComplete(undefined8 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_18._4_4_ = (undefined4)((ulong)param_1[5] >> 0x20);
  uVar1 = uStack_18._4_4_;
  uStack_18 = param_1[5];
  fVar2 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_40 | 8,uVar1,0);
  return 100.0 <= fVar2;
}



// ============================================================
// RVA: 0x1573c88 | Atlas.Stats.DailyChallengeManager.GetLocalisedFormattedStringForChallenge
// ============================================================

/* WARNING: Possible PIC construction at 0x01573ea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01573eac) */
/* WARNING: Removing unreachable block (ram,0x01573eb4) */
/* WARNING: Removing unreachable block (ram,0x01573eb8) */
/* WARNING: Removing unreachable block (ram,0x01573ec4) */
/* WARNING: Removing unreachable block (ram,0x01573ecc) */
/* WARNING: Removing unreachable block (ram,0x01573ed4) */
/* WARNING: Removing unreachable block (ram,0x01573ee0) */
/* WARNING: Removing unreachable block (ram,0x01573ee8) */
/* WARNING: Removing unreachable block (ram,0x01573ef4) */
/* WARNING: Removing unreachable block (ram,0x01573efc) */
/* WARNING: Removing unreachable block (ram,0x01573f08) */
/* WARNING: Removing unreachable block (ram,0x01573f10) */
/* WARNING: Removing unreachable block (ram,0x01573f1c) */
/* WARNING: Removing unreachable block (ram,0x01573f24) */
/* WARNING: Removing unreachable block (ram,0x01573f30) */
/* WARNING: Removing unreachable block (ram,0x01573f40) */
/* WARNING: Removing unreachable block (ram,0x01573f50) */
/* WARNING: Removing unreachable block (ram,0x01573f54) */
/* WARNING: Removing unreachable block (ram,0x01573f58) */
/* WARNING: Removing unreachable block (ram,0x01573f60) */
/* WARNING: Removing unreachable block (ram,0x01573f98) */
/* WARNING: Removing unreachable block (ram,0x01573fd8) */
/* WARNING: Removing unreachable block (ram,0x01574004) */
/* WARNING: Removing unreachable block (ram,0x01573fe0) */
/* WARNING: Removing unreachable block (ram,0x01574008) */
/* WARNING: Removing unreachable block (ram,0x0157403c) */
/* WARNING: Removing unreachable block (ram,0x0157405c) */
/* WARNING: Removing unreachable block (ram,0x01574064) */
/* WARNING: Removing unreachable block (ram,0x0157406c) */
/* WARNING: Removing unreachable block (ram,0x01574078) */
/* WARNING: Removing unreachable block (ram,0x01574080) */
/* WARNING: Removing unreachable block (ram,0x0157408c) */
/* WARNING: Removing unreachable block (ram,0x01574094) */
/* WARNING: Removing unreachable block (ram,0x015740a0) */
/* WARNING: Removing unreachable block (ram,0x015740a8) */
/* WARNING: Removing unreachable block (ram,0x015740b4) */
/* WARNING: Removing unreachable block (ram,0x015740bc) */
/* WARNING: Removing unreachable block (ram,0x015740c8) */
/* WARNING: Removing unreachable block (ram,0x015740d8) */
/* WARNING: Removing unreachable block (ram,0x015740e8) */
/* WARNING: Removing unreachable block (ram,0x015740ec) */
/* WARNING: Removing unreachable block (ram,0x015740f0) */
/* WARNING: Removing unreachable block (ram,0x015740f8) */
/* WARNING: Removing unreachable block (ram,0x01574128) */
/* WARNING: Removing unreachable block (ram,0x01574104) */
/* WARNING: Removing unreachable block (ram,0x01573fec) */
/* WARNING: Removing unreachable block (ram,0x01573f6c) */
/* WARNING: Removing unreachable block (ram,0x01573ebc) */
/* WARNING: Removing unreachable block (ram,0x01573f80) */

ulong Atlas_Stats_DailyChallengeManager__GetLocalisedFormattedStringForChallenge
                (long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x1;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auStack_b0 [48];
  undefined8 uStack_38;
  
  if ((bRam0000000003eb505d & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d572a8);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb505d = 1;
  }
  uStack_38 = 0;
  uVar7 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  lVar2 = /*Atlas.Stats.DailyChallengeManager$$GetLocKeyForChallenge*/ func_0x015752e0(param_1,*param_2,*(undefined4 *)(param_2 + 3));
  if (lVar2 == 0) {
    return uVar7;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x70),lVar2,&uStack_38,0);
    uVar5 = uStack_38;
    switch(*(undefined4 *)(param_2 + 3)) {
    case 0:
      uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)param_2 + 0x14,0);
      uVar7 = /*System.String$$Format*/ func_0x029bc688(uVar5,uVar3,0);
      return uVar7;
    case 1:
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar2 == 0)) goto LAB_01573e38;
      uVar5 = param_2[4];
      puVar6 = (undefined8 *)0x3d572d8;
      break;
    case 2:
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar2 == 0)) goto LAB_01573e38;
      uVar5 = param_2[4];
      puVar6 = (undefined8 *)0x3d57270;
      break;
    case 3:
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar2 == 0)) goto LAB_01573e38;
      uVar5 = param_2[4];
      puVar6 = (undefined8 *)0x3d572a8;
      break;
    default:
      return uVar7;
    }
    lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,uVar5,*puVar6);
    uVar5 = uStack_38;
    uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)param_2 + 0x14,0);
    if ((lVar2 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      uVar4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0x70),*(undefined8 *)(lVar2 + 0x30),0);
      uVar7 = /*System.String$$Format*/ func_0x029bcac4(uVar5,uVar3,uVar4,0);
      return uVar7;
    }
  }
LAB_01573e38:
  func_0x00f78af4();
  if ((bRam0000000003eb5066 & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb5066 = 1;
  }
  iVar1 = *(int *)(((ulong)auStack_b0 | 8) + 0xc);
  uVar7 = *(ulong *)(extraout_x1 + 0x28) >> 0x20;
  switch(*(undefined4 *)(((ulong)auStack_b0 | 8) + 8)) {
  case 0:
  case 1:
    break;
  case 2:
    if (iVar1 < 2) {
      return uVar7;
    }
    break;
  case 3:
    if (iVar1 < 1) {
      return uVar7;
    }
    break;
  default:
  }
  return 0;
}



// ============================================================
// RVA: 0x1573e3c | Atlas.Stats.DailyChallengeManager.WasCompeltedThisSession
// ============================================================

/* WARNING: Possible PIC construction at 0x01573ea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01573eac) */
/* WARNING: Removing unreachable block (ram,0x01573eb4) */
/* WARNING: Removing unreachable block (ram,0x01573eb8) */
/* WARNING: Removing unreachable block (ram,0x01573ec4) */
/* WARNING: Removing unreachable block (ram,0x01573ecc) */
/* WARNING: Removing unreachable block (ram,0x01573ed4) */
/* WARNING: Removing unreachable block (ram,0x01573ee0) */
/* WARNING: Removing unreachable block (ram,0x01573ee8) */
/* WARNING: Removing unreachable block (ram,0x01573ef4) */
/* WARNING: Removing unreachable block (ram,0x01573efc) */
/* WARNING: Removing unreachable block (ram,0x01573f08) */
/* WARNING: Removing unreachable block (ram,0x01573f10) */
/* WARNING: Removing unreachable block (ram,0x01573f1c) */
/* WARNING: Removing unreachable block (ram,0x01573f24) */
/* WARNING: Removing unreachable block (ram,0x01573f30) */
/* WARNING: Removing unreachable block (ram,0x01573f40) */
/* WARNING: Removing unreachable block (ram,0x01573f50) */
/* WARNING: Removing unreachable block (ram,0x01573f54) */
/* WARNING: Removing unreachable block (ram,0x01573f58) */
/* WARNING: Removing unreachable block (ram,0x01573f60) */
/* WARNING: Removing unreachable block (ram,0x01573f98) */
/* WARNING: Removing unreachable block (ram,0x01573fd8) */
/* WARNING: Removing unreachable block (ram,0x01574004) */
/* WARNING: Removing unreachable block (ram,0x01573fe0) */
/* WARNING: Removing unreachable block (ram,0x01574008) */
/* WARNING: Removing unreachable block (ram,0x0157403c) */
/* WARNING: Removing unreachable block (ram,0x0157405c) */
/* WARNING: Removing unreachable block (ram,0x01574064) */
/* WARNING: Removing unreachable block (ram,0x0157406c) */
/* WARNING: Removing unreachable block (ram,0x01574078) */
/* WARNING: Removing unreachable block (ram,0x01574080) */
/* WARNING: Removing unreachable block (ram,0x0157408c) */
/* WARNING: Removing unreachable block (ram,0x01574094) */
/* WARNING: Removing unreachable block (ram,0x015740a0) */
/* WARNING: Removing unreachable block (ram,0x015740a8) */
/* WARNING: Removing unreachable block (ram,0x015740b4) */
/* WARNING: Removing unreachable block (ram,0x015740bc) */
/* WARNING: Removing unreachable block (ram,0x015740c8) */
/* WARNING: Removing unreachable block (ram,0x015740d8) */
/* WARNING: Removing unreachable block (ram,0x015740e8) */
/* WARNING: Removing unreachable block (ram,0x015740ec) */
/* WARNING: Removing unreachable block (ram,0x015740f0) */
/* WARNING: Removing unreachable block (ram,0x015740f8) */
/* WARNING: Removing unreachable block (ram,0x01574128) */
/* WARNING: Removing unreachable block (ram,0x01574104) */
/* WARNING: Removing unreachable block (ram,0x01573fec) */
/* WARNING: Removing unreachable block (ram,0x01573f6c) */
/* WARNING: Removing unreachable block (ram,0x01573ebc) */
/* WARNING: Removing unreachable block (ram,0x01573f80) */

undefined4
Atlas_Stats_DailyChallengeManager__WasCompeltedThisSession(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_70 [44];
  undefined4 uStack_44;
  
  if ((bRam0000000003eb5066 & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb5066 = 1;
  }
  uStack_44 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
  iVar1 = *(int *)(((ulong)auStack_70 | 8) + 0xc);
  switch(*(undefined4 *)(((ulong)auStack_70 | 8) + 8)) {
  case 0:
  case 1:
    break;
  case 2:
    if (iVar1 < 2) {
      return uStack_44;
    }
    break;
  case 3:
    if (iVar1 < 1) {
      return uStack_44;
    }
    break;
  default:
  }
  return 0;
}



// ============================================================
// RVA: 0x1573fa4 | Atlas.Stats.DailyChallengeManager.GetChallengeXPReward
// ============================================================

undefined4 Atlas_Stats_DailyChallengeManager__GetChallengeXPReward(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uVar2 = /*Atlas.Stats.DailyChallengeManager$$GetChallengeIndex*/ func_0x01575b68(param_1,&uStack_50);
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar7 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar2 < *(uint *)(lVar7 + 0x18)) {
    return *(undefined4 *)(lVar7 + (long)(int)uVar2 * 0x10 + 0x20);
  }
  uVar3 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar3,0);
  puVar6 = auVar9._8_8_;
  lVar7 = auVar9._0_8_;
  if ((bRam0000000003eb5065 & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb5065 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x58);
  if (lVar4 != 0) {
    uVar2 = 0;
    lVar8 = 0x20;
    while ((lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar4,0), lVar4 != 0 &&
           (*(long *)(lVar4 + 0xf0) != 0))) {
      if (*(int *)(*(long *)(lVar4 + 0xf0) + 0x18) <= (int)uVar2) goto code_r0x015740ec;
      if (((*(long *)(lVar7 + 0x58) == 0) ||
          (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x58),0), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0xf0), lVar4 == 0)) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar8);
      if (lVar4 == 0) break;
      uVar5 = /*System.String$$Equals*/ func_0x029bab9c(lVar4,*puVar6,0);
      if ((uVar5 & 1) != 0) goto code_r0x015740f0;
      uVar2 = uVar2 + 1;
      lVar4 = *(long *)(lVar7 + 0x58);
      lVar8 = lVar8 + 0x30;
      if (lVar4 == 0) break;
    }
  }
  do {
    func_0x00f78af4();
code_r0x015740ec:
    uVar2 = 0;
code_r0x015740f0:
    lVar4 = *(long *)(lVar7 + 0xb0);
  } while (lVar4 == 0);
  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
    uVar1 = *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20);
  }
  else {
    uVar3 = func_0x00f78b24();
    puVar6 = (undefined8 *)func_0x00f78ac0(uVar3,0);
    uVar1 = *(undefined4 *)((long)puVar6 + 0x2c);
  }
  switch(*(undefined4 *)(puVar6 + 2)) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(int *)((long)puVar6 + 0x14) < 2) {
      return uVar1;
    }
    break;
  case 3:
    if (*(int *)((long)puVar6 + 0x14) < 1) {
      return uVar1;
    }
    break;
  default:
  }
  return 0;
}



// ============================================================
// RVA: 0x1574014 | Atlas.Stats.DailyChallengeManager.GetPercentCompleteForSessionStartAchievedValue
// ============================================================

undefined4
Atlas_Stats_DailyChallengeManager__GetPercentCompleteForSessionStartAchievedValue
          (long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000003eb5065 & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb5065 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    uVar5 = 0;
    lVar6 = 0x20;
    while ((lVar2 = Atlas_Save_SaveManager__get_SaveData(lVar2,0), lVar2 != 0 &&
           (*(long *)(lVar2 + 0xf0) != 0))) {
      if (*(int *)(*(long *)(lVar2 + 0xf0) + 0x18) <= (int)uVar5) goto LAB_015740ec;
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 == 0))
         || (lVar2 = *(long *)(lVar2 + 0xf0), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + lVar6);
      if (lVar2 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029bab9c(lVar2,*param_2,0);
      if ((uVar3 & 1) != 0) goto LAB_015740f0;
      uVar5 = uVar5 + 1;
      lVar2 = *(long *)(param_1 + 0x58);
      lVar6 = lVar6 + 0x30;
      if (lVar2 == 0) break;
    }
  }
  do {
    func_0x00f78af4();
LAB_015740ec:
    uVar5 = 0;
LAB_015740f0:
    lVar2 = *(long *)(param_1 + 0xb0);
  } while (lVar2 == 0);
  if (uVar5 < *(uint *)(lVar2 + 0x18)) {
    uVar1 = *(undefined4 *)(lVar2 + (long)(int)uVar5 * 4 + 0x20);
  }
  else {
    uVar4 = func_0x00f78b24();
    param_2 = (undefined8 *)func_0x00f78ac0(uVar4,0);
    uVar1 = *(undefined4 *)((long)param_2 + 0x2c);
  }
  switch(*(undefined4 *)(param_2 + 2)) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(int *)((long)param_2 + 0x14) < 2) {
      return uVar1;
    }
    break;
  case 3:
    if (*(int *)((long)param_2 + 0x14) < 1) {
      return uVar1;
    }
    break;
  default:
  }
  return 0;
}



// ============================================================
// RVA: 0x1574134 | Atlas.Stats.DailyChallengeManager.GetPercentageComplete
// ============================================================

undefined4 Atlas_Stats_DailyChallengeManager__GetPercentageComplete(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(int *)(param_1 + 0x14) < 2) {
      return *(undefined4 *)(param_1 + 0x2c);
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x14) < 1) {
      return *(undefined4 *)(param_1 + 0x2c);
    }
    break;
  default:
  }
  return 0;
}



// ============================================================
// RVA: 0x157422c | Atlas.Stats.DailyChallengeManager.Init
// ============================================================

long Atlas_Stats_DailyChallengeManager__Init
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003eb5055 & 1) == 0) {
    func_0x00f78a20(0x3d27038);
    bRam0000000003eb5055 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Stats.DailyChallengeManager.<Init>d__25_TypeInfo*/ uRam0000000003d27038);
  /*Atlas.Stats.DailyChallengeManager.<Init>d__25$$.ctor*/ func_0x0154a8f0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    *(undefined8 *)(lVar1 + 0x30) = param_4;
    *(undefined8 *)(lVar1 + 0x38) = param_5;
    *(undefined8 *)(lVar1 + 0x40) = param_6;
    *(undefined8 *)(lVar1 + 0x48) = param_7;
    *(undefined8 *)(lVar1 + 0x50) = param_8;
    *(undefined8 *)(lVar1 + 0x58) = param_9;
    *(undefined8 *)(lVar1 + 0x60) = param_10;
    *(undefined8 *)(lVar1 + 0x68) = param_2;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  puStack_68 = &Atlas_Stats_DailyChallengeManager__DeInit;
  uStack_90 = param_2;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5056 & 1) == 0) {
    func_0x00f78a20(0x3d433f0);
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb5056 = 1;
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_b0 = uVar3;
  uStack_a8 = uVar4;
  uStack_a0 = uVar5;
  uStack_98 = uVar6;
  lVar2 = /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_b0,uRam0000000003d433f0);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  return lVar2;
}



// ============================================================
// RVA: 0x15742e8 | Atlas.Stats.DailyChallengeManager.DeInit
// ============================================================

void Atlas_Stats_DailyChallengeManager__DeInit(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5056 & 1) == 0) {
    func_0x00f78a20(0x3d433f0);
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb5056 = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_50,uRam0000000003d433f0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// ============================================================
// RVA: 0x15743ac | Atlas.Stats.DailyChallengeManager.OnInitGameContext
// ============================================================

long Atlas_Stats_DailyChallengeManager__OnInitGameContext
               (long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [12];
  
  lVar2 = param_1;
  if ((bRam0000000003eb5057 & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    lVar2 = func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb5057 = 1;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined8 *)(param_1 + 0x90) = param_2;
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (lVar2 = Atlas_Definitions_AtlasDefinitions__GetMainCharacter
                          (*(long *)(param_1 + 0x68),*param_3,0), lVar2 == 0)) {
LAB_0157451c:
      func_0x00f78af4();
LAB_01574520:
      uVar3 = func_0x00f78b24();
      auVar10 = func_0x00f78ac0(uVar3,0);
      lVar5 = auVar10._0_8_;
      lVar2 = lVar5;
      if ((bRam0000000003eb5058 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        lVar2 = func_0x00f78a20(0x3d3d8a0);
        bRam0000000003eb5058 = 1;
      }
      if (*(char *)(lVar5 + 0xb8) != '\0') {
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        *(undefined8 *)(lVar5 + 0x90) = uVar3;
        uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        *(undefined8 *)(lVar5 + 0x98) = uVar3;
        lVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        *(long *)(lVar5 + 0xa0) = lVar2;
        if (auVar10._8_4_ != 0) {
          if (((*(long *)(lVar5 + 0x58) == 0) ||
              (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar5 + 0x58),0), lVar2 == 0))
             || (lVar7 = *(long *)(lVar2 + 0xf0), lVar7 == 0)) {
code_r0x01574634:
            func_0x00f78af4();
code_r0x01574638:
            uVar3 = func_0x00f78b24();
            uVar3 = func_0x00f78ac0(uVar3,0);
            lVar2 = /*Atlas.Stats.DailyChallengeManager$$ShouldCreateNewDailyChallenges*/ func_0x01574690();
            if ((int)lVar2 != 0) {
              iVar1 = /*Atlas.Stats.DailyChallengeManager$$IsFirstTimeGeneratingChallenges*/ func_0x01574758(uVar3);
              if (iVar1 == 0) {
                /*Atlas.Stats.DailyChallengeManager$$CreateAndSetAllDailyChallenges*/ func_0x01574970(uVar3);
              }
              else {
                /*Atlas.Stats.DailyChallengeManager$$CreateAndSetFTUEChallenges*/ func_0x015747f8(uVar3);
              }
            }
            return lVar2;
          }
          if (0 < *(int *)(lVar7 + 0x18)) {
            uVar4 = 0;
            lVar5 = *(long *)(lVar5 + 0xa8);
            do {
              if (lVar5 == 0) goto code_r0x01574634;
              if (*(uint *)(lVar5 + 0x18) <= uVar4) goto code_r0x01574638;
              *(undefined4 *)(lVar5 + 0x20 + uVar4 * 4) = 0;
              uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)*(int *)(lVar7 + 0x18));
          }
        }
      }
      return lVar2;
    }
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(param_1 + 0xa0) = param_3[1];
    if (param_4 != 0) {
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 == 0))
         || (lVar5 = *(long *)(lVar2 + 0xf0), lVar5 == 0)) goto LAB_0157451c;
      uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
      if (0 < (int)*(uint *)(lVar5 + 0x18)) {
        lVar6 = 0;
        lVar7 = 8;
        do {
          uVar8 = lVar7 - 8;
          lVar9 = *(long *)(param_1 + 0xa8);
          lVar2 = *(long *)(param_1 + 0x50);
          if ((uVar4 & 0xffffffff) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((lVar2 == 0) ||
             (lVar2 = /*Atlas.Stats.StatsManager$$GetSummedGlobalStats*/ func_0x01505418(lVar2,*(undefined8 *)(*(long *)(lVar5 + 0x10) + lVar6 + 0x28),
                                      0), lVar9 == 0)) goto LAB_0157451c;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01574520;
          *(int *)(lVar9 + lVar7 * 4) = (int)lVar2;
          lVar9 = *(long *)(param_1 + 0xb0);
          if (*(uint *)(lVar5 + 0x18) <= uVar8) {
            lVar2 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar9 == 0) goto LAB_0157451c;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01574520;
          *(undefined4 *)(lVar9 + lVar7 * 4) =
               *(undefined4 *)(*(long *)(lVar5 + 0x10) + lVar6 + 0x4c);
          uVar4 = (ulong)*(int *)(lVar5 + 0x18);
          lVar9 = lVar7 + -7;
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x30;
        } while (lVar9 < (long)uVar4);
      }
    }
  }
  return lVar2;
}



// ============================================================
// RVA: 0x157452c | Atlas.Stats.DailyChallengeManager.OnDeInitGameContext
// ============================================================

long Atlas_Stats_DailyChallengeManager__OnDeInitGameContext(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = param_1;
  if ((bRam0000000003eb5058 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    lVar2 = func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb5058 = 1;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
    *(undefined8 *)(param_1 + 0x98) = uVar3;
    lVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
    *(long *)(param_1 + 0xa0) = lVar2;
    if (param_2 != 0) {
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 == 0))
         || (lVar4 = *(long *)(lVar2 + 0xf0), lVar4 == 0)) {
LAB_01574634:
        func_0x00f78af4();
LAB_01574638:
        uVar3 = func_0x00f78b24();
        uVar3 = func_0x00f78ac0(uVar3,0);
        lVar2 = /*Atlas.Stats.DailyChallengeManager$$ShouldCreateNewDailyChallenges*/ func_0x01574690();
        if ((int)lVar2 != 0) {
          iVar1 = /*Atlas.Stats.DailyChallengeManager$$IsFirstTimeGeneratingChallenges*/ func_0x01574758(uVar3);
          if (iVar1 == 0) {
            /*Atlas.Stats.DailyChallengeManager$$CreateAndSetAllDailyChallenges*/ func_0x01574970(uVar3);
          }
          else {
            /*Atlas.Stats.DailyChallengeManager$$CreateAndSetFTUEChallenges*/ func_0x015747f8(uVar3);
          }
        }
        return lVar2;
      }
      if (0 < *(int *)(lVar4 + 0x18)) {
        uVar5 = 0;
        lVar6 = *(long *)(param_1 + 0xa8);
        do {
          if (lVar6 == 0) goto LAB_01574634;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01574638;
          *(undefined4 *)(lVar6 + 0x20 + uVar5 * 4) = 0;
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)*(int *)(lVar4 + 0x18));
      }
    }
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1574644 | Atlas.Stats.DailyChallengeManager.PollForChallengeRefresh
// ============================================================

undefined8 Atlas_Stats_DailyChallengeManager__PollForChallengeRefresh(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = /*Atlas.Stats.DailyChallengeManager$$ShouldCreateNewDailyChallenges*/ func_0x01574690();
  if ((int)uVar2 != 0) {
    iVar1 = /*Atlas.Stats.DailyChallengeManager$$IsFirstTimeGeneratingChallenges*/ func_0x01574758(param_1);
    if (iVar1 == 0) {
      /*Atlas.Stats.DailyChallengeManager$$CreateAndSetAllDailyChallenges*/ func_0x01574970(param_1);
    }
    else {
      /*Atlas.Stats.DailyChallengeManager$$CreateAndSetFTUEChallenges*/ func_0x015747f8(param_1);
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1574690 | Atlas.Stats.DailyChallengeManager.ShouldCreateNewDailyChallenges
// ============================================================

/* WARNING: Possible PIC construction at 0x015746e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015746e4) */
/* WARNING: Removing unreachable block (ram,0x01574744) */
/* WARNING: Removing unreachable block (ram,0x015746e8) */
/* WARNING: Removing unreachable block (ram,0x015746fc) */
/* WARNING: Removing unreachable block (ram,0x01574754) */
/* WARNING: Removing unreachable block (ram,0x01574774) */
/* WARNING: Removing unreachable block (ram,0x01574794) */
/* WARNING: Removing unreachable block (ram,0x0157479c) */
/* WARNING: Removing unreachable block (ram,0x015747a8) */
/* WARNING: Removing unreachable block (ram,0x015747b0) */
/* WARNING: Removing unreachable block (ram,0x015747c0) */
/* WARNING: Removing unreachable block (ram,0x015747c8) */
/* WARNING: Removing unreachable block (ram,0x015747d4) */
/* WARNING: Removing unreachable block (ram,0x015747f4) */
/* WARNING: Removing unreachable block (ram,0x01574820) */
/* WARNING: Removing unreachable block (ram,0x01574834) */
/* WARNING: Removing unreachable block (ram,0x0157483c) */
/* WARNING: Removing unreachable block (ram,0x01574848) */
/* WARNING: Removing unreachable block (ram,0x01574854) */
/* WARNING: Removing unreachable block (ram,0x01574868) */
/* WARNING: Removing unreachable block (ram,0x01574874) */
/* WARNING: Removing unreachable block (ram,0x01574878) */
/* WARNING: Removing unreachable block (ram,0x01574888) */
/* WARNING: Removing unreachable block (ram,0x01574898) */
/* WARNING: Removing unreachable block (ram,0x0157489c) */
/* WARNING: Removing unreachable block (ram,0x015748ac) */
/* WARNING: Removing unreachable block (ram,0x015748b8) */
/* WARNING: Removing unreachable block (ram,0x015748cc) */
/* WARNING: Removing unreachable block (ram,0x015748d4) */
/* WARNING: Removing unreachable block (ram,0x015748f4) */
/* WARNING: Removing unreachable block (ram,0x01574900) */
/* WARNING: Removing unreachable block (ram,0x01574908) */
/* WARNING: Removing unreachable block (ram,0x01574938) */
/* WARNING: Removing unreachable block (ram,0x01574960) */
/* WARNING: Removing unreachable block (ram,0x01574964) */
/* WARNING: Removing unreachable block (ram,0x01574998) */
/* WARNING: Removing unreachable block (ram,0x015749f4) */
/* WARNING: Removing unreachable block (ram,0x01574a08) */
/* WARNING: Removing unreachable block (ram,0x01574a1c) */
/* WARNING: Removing unreachable block (ram,0x01574a28) */
/* WARNING: Removing unreachable block (ram,0x01574a2c) */
/* WARNING: Removing unreachable block (ram,0x01574a3c) */
/* WARNING: Removing unreachable block (ram,0x01574a4c) */
/* WARNING: Removing unreachable block (ram,0x01574a50) */
/* WARNING: Removing unreachable block (ram,0x01574a60) */
/* WARNING: Removing unreachable block (ram,0x01574a6c) */
/* WARNING: Removing unreachable block (ram,0x01574a90) */
/* WARNING: Removing unreachable block (ram,0x01574a9c) */
/* WARNING: Removing unreachable block (ram,0x01574aa4) */
/* WARNING: Removing unreachable block (ram,0x01574ab0) */
/* WARNING: Removing unreachable block (ram,0x01574ab4) */
/* WARNING: Removing unreachable block (ram,0x01574abc) */
/* WARNING: Removing unreachable block (ram,0x01574ac8) */
/* WARNING: Removing unreachable block (ram,0x01574ad0) */
/* WARNING: Removing unreachable block (ram,0x01574ae8) */
/* WARNING: Removing unreachable block (ram,0x01574af4) */
/* WARNING: Removing unreachable block (ram,0x01574afc) */
/* WARNING: Removing unreachable block (ram,0x01574b40) */
/* WARNING: Removing unreachable block (ram,0x01574b80) */
/* WARNING: Removing unreachable block (ram,0x01574b94) */
/* WARNING: Removing unreachable block (ram,0x01574ba0) */
/* WARNING: Removing unreachable block (ram,0x01574ba8) */
/* WARNING: Removing unreachable block (ram,0x01574bb8) */
/* WARNING: Removing unreachable block (ram,0x01574bbc) */
/* WARNING: Removing unreachable block (ram,0x01574bc4) */
/* WARNING: Removing unreachable block (ram,0x01574bd0) */
/* WARNING: Removing unreachable block (ram,0x01574be8) */
/* WARNING: Removing unreachable block (ram,0x01574bec) */
/* WARNING: Removing unreachable block (ram,0x01574bf4) */
/* WARNING: Removing unreachable block (ram,0x01574c0c) */
/* WARNING: Removing unreachable block (ram,0x01574c18) */
/* WARNING: Removing unreachable block (ram,0x01574b50) */
/* WARNING: Removing unreachable block (ram,0x01574c40) */
/* WARNING: Removing unreachable block (ram,0x01574b58) */
/* WARNING: Removing unreachable block (ram,0x01574c48) */
/* WARNING: Removing unreachable block (ram,0x01574b68) */
/* WARNING: Removing unreachable block (ram,0x01574c38) */
/* WARNING: Removing unreachable block (ram,0x01574c4c) */
/* WARNING: Removing unreachable block (ram,0x01574b70) */
/* WARNING: Removing unreachable block (ram,0x01574940) */
/* WARNING: Removing unreachable block (ram,0x015747dc) */
/* WARNING: Removing unreachable block (ram,0x015747b8) */
/* WARNING: Removing unreachable block (ram,0x015747e8) */
/* WARNING: Removing unreachable block (ram,0x01574708) */
/* WARNING: Removing unreachable block (ram,0x01574720) */
/* WARNING: Removing unreachable block (ram,0x01574728) */
/* WARNING: Removing unreachable block (ram,0x0157472c) */
/* WARNING: Removing unreachable block (ram,0x02a8fb2c) */

bool Atlas_Stats_DailyChallengeManager__ShouldCreateNewDailyChallenges(long param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar10;
  float fVar11;
  int aiStack_c0 [2];
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  piVar2 = (int *)&stack0xffffffffffffffe0;
  lVar8 = 0x3eb5000;
  if ((bRam0000000003eb505c & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb505c = 1;
  }
  iVar3 = /*Atlas.Stats.DailyChallengeManager$$AreCurrentChallengesFTUE*/ func_0x01574ca0(param_1);
  if (iVar3 == 0) {
    puVar10 = &UNK_015746e4;
    lVar6 = param_1;
  }
  else {
    piVar2 = aiStack_c0;
    if ((bRam0000000003eb5061 & 1) == 0) {
      func_0x00f78a20(0x3d33708);
      func_0x00f78a20(0x3d33710);
      func_0x00f78a20(0x3d33718);
      func_0x00f78a20(0x3d3d898);
      bRam0000000003eb5061 = 1;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    if (((*(long *)(param_1 + 0x58) != 0) &&
        (lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar8 != 0)) &&
       (*(long *)(lVar8 + 0xf0) != 0)) {
      /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_b0,*(long *)(lVar8 + 0xf0),uRam0000000003d3d898);
      do {
        uVar4 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_b0,uRam0000000003d33710);
        if ((uVar4 & 1) == 0) {
          aiStack_c0[0] = 0x43;
          goto code_r0x01574e54;
        }
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        uStack_48 = uStack_78;
        uVar9 = uStack_48;
        uStack_50 = uStack_80;
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_48._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
        uVar7 = uStack_48._4_4_;
        uStack_48 = uVar9;
        fVar11 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_68,uVar7,0);
      } while (100.0 <= fVar11);
      aiStack_c0[0] = 0x45;
code_r0x01574e54:
      /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_b0,uRam0000000003d33708);
      return aiStack_c0[0] != 0x45;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar8 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_b0,uRam0000000003eb5000);
      if (lVar8 == 0) {
        return true;
      }
    }
    else {
      __Unwind_Resume();
      lVar8 = param_1;
    }
    puVar10 = &Atlas_Stats_DailyChallengeManager__AreChallengesValid;
    param_1 = func_0x00f78ac0(lVar8,0);
    lVar6 = 0x3eb5000;
  }
  *(undefined8 *)((long)piVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)piVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)piVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)piVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)piVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)piVar2 + -0x28) = unaff_x21;
  *(long *)((long)piVar2 + -0x20) = lVar6;
  *(long *)((long)piVar2 + -0x18) = lVar8;
  *(undefined1 **)((long)piVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined **)((long)piVar2 + -8) = puVar10;
  if ((bRam0000000003eb5060 & 1) == 0) {
    func_0x00f78a20(0x3d52318);
    func_0x00f78a20(0x3d52328);
    func_0x00f78a20(0x3d52330);
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb5060 = 1;
  }
  *(undefined8 *)((long)piVar2 + -0x98) = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
    lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
    if (lVar8 != 0) {
      if (iVar3 != *(int *)(lVar8 + 0xdc)) {
        return false;
      }
      if (((*(long *)(param_1 + 0x30) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar8 != 0)) &&
         ((*(long *)(param_1 + 0x58) != 0 &&
          ((lVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar6 != 0 &&
           (*(long *)(lVar6 + 0xf0) != 0)))))) {
        if (*(int *)(*(long *)(lVar6 + 0xf0) + 0x18) != *(int *)(lVar8 + 0x18)) {
          return false;
        }
        if (((*(long *)(param_1 + 0x58) != 0) &&
            (lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar8 != 0))
           && (*(long *)(lVar8 + 0xf0) != 0)) {
          /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c((undefined1 *)((long)piVar2 + -0xe8),*(long *)(lVar8 + 0xf0),
                          uRam0000000003d3d898);
          *(undefined8 *)((long)piVar2 + -0x88) = *(undefined8 *)((long)piVar2 + -0xe0);
          *(undefined8 *)((long)piVar2 + -0x90) = *(undefined8 *)((long)piVar2 + -0xe8);
          *(undefined8 *)((long)piVar2 + -0x78) = *(undefined8 *)((long)piVar2 + -0xd0);
          *(undefined8 *)((long)piVar2 + -0x80) = *(undefined8 *)((long)piVar2 + -0xd8);
          *(undefined8 *)((long)piVar2 + -0x68) = *(undefined8 *)((long)piVar2 + -0xc0);
          *(undefined8 *)((long)piVar2 + -0x70) = *(undefined8 *)((long)piVar2 + -200);
          *(undefined8 *)((long)piVar2 + -0x58) = *(undefined8 *)((long)piVar2 + -0xb0);
          *(undefined8 *)((long)piVar2 + -0x60) = *(undefined8 *)((long)piVar2 + -0xb8);
code_r0x01575034:
          do {
            do {
              uVar4 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438((undefined1 *)((long)piVar2 + -0x90),uRam0000000003d33710);
              if ((uVar4 & 1) == 0) {
                uVar7 = 0x10c;
                goto code_r0x015750e4;
              }
              iVar3 = *(int *)((long)piVar2 + -0x68);
              uVar9 = *(undefined8 *)((long)piVar2 + -0x60);
              uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)((long)piVar2 + -0x80),0);
              if ((uVar4 & 1) != 0) goto code_r0x015750d0;
              *(undefined8 *)((long)piVar2 + -0x98) = uVar9;
              uVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)piVar2 + -0x98),0);
            } while ((uVar4 & 1) == 0);
            if (iVar3 == 3) {
              if (*(long *)(param_1 + 0x68) == 0) {
                func_0x00f78af4();
                goto code_r0x01575144;
              }
              uVar4 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(param_1 + 0x68),uVar9,uRam0000000003d52328);
            }
            else if (iVar3 == 2) {
              if (*(long *)(param_1 + 0x68) == 0) {
                func_0x00f78af4();
                goto code_r0x01575144;
              }
              uVar4 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(param_1 + 0x68),uVar9,uRam0000000003d52318);
            }
            else {
              if (iVar3 != 1) goto code_r0x01575034;
              if (*(long *)(param_1 + 0x68) == 0) goto code_r0x01575130;
              uVar4 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(param_1 + 0x68),uVar9,uRam0000000003d52330);
            }
            if ((uVar4 & 1) == 0) {
code_r0x015750d0:
              uVar7 = 0x10e;
code_r0x015750e4:
              *(undefined4 *)((long)piVar2 + -0xa8) = uVar7;
              *(undefined4 *)((long)piVar2 + -0x9c) = 1;
              /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434((undefined1 *)((long)piVar2 + -0x90),uRam0000000003d33708);
              return *(int *)((long)piVar2 + -0xa8) != 0x10e;
            }
          } while( true );
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x01575130:
  func_0x00f78af4();
code_r0x01575144:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1575148);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1574758 | Atlas.Stats.DailyChallengeManager.IsFirstTimeGeneratingChallenges
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__IsFirstTimeGeneratingChallenges(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5059 & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb5059 = 1;
  }
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 != 0)) &&
     (*(long *)(lVar2 + 0xf8) != 0)) {
    if (*(int *)(*(long *)(lVar2 + 0xf8) + 0x18) != 0) {
      return 0;
    }
    if (((*(long *)(param_1 + 0x58) != 0) &&
        (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 != 0)) &&
       (*(long *)(lVar2 + 0xf0) != 0)) {
      return (ulong)(*(int *)(*(long *)(lVar2 + 0xf0) + 0x18) == 0);
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb505b & 1) == 0) {
    func_0x00f78a20(0x3d3d888);
    bRam0000000003eb505b = 1;
  }
  if ((*(long *)(lVar2 + 0x58) != 0) &&
     (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0), lVar3 != 0)) {
    *(undefined2 *)(lVar3 + 0x108) = 0;
    if (*(long *)(lVar2 + 0x58) != 0) {
      lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
      if (((*(long *)(lVar2 + 0x80) != 0) &&
          (lVar4 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar2 + 0x80),0), lVar4 != 0)) && (lVar3 != 0)) {
        *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)(lVar4 + 0x18);
        if (*(long *)(lVar2 + 0x58) != 0) {
          lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
          lVar4 = *(long *)(lVar2 + 0x30);
          if ((lVar4 != 0) && (lVar3 != 0)) {
            *(undefined4 *)(lVar3 + 0xdc) = *(undefined4 *)(lVar4 + 0x18);
            lVar3 = *(long *)(lVar4 + 0x40);
            if (lVar3 != 0) {
              if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                uVar8 = 0;
                uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                puVar9 = (undefined8 *)(lVar3 + 0x20);
                do {
                  if (uVar6 <= uVar8) goto code_r0x01574964;
                  uVar11 = puVar9[1];
                  uVar5 = *puVar9;
                  uVar14 = puVar9[3];
                  uVar13 = puVar9[2];
                  uVar12 = puVar9[5];
                  uVar10 = puVar9[4];
                  if (((*(long *)(lVar2 + 0x58) == 0) ||
                      (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0),
                      lVar4 == 0)) || (*(long *)(lVar4 + 0xf0) == 0)) goto code_r0x01574960;
                  uStack_90 = uVar5;
                  uStack_88 = uVar11;
                  uStack_80 = uVar13;
                  uStack_78 = uVar14;
                  uStack_70 = uVar10;
                  uStack_68 = uVar12;
                  /*System.Collections.Generic.List<SaveData.DailyChallenge>$$Add*/ func_0x025871c0(*(long *)(lVar4 + 0xf0),&uStack_90,uRam0000000003d3d888);
                  uVar8 = uVar8 + 1;
                  uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
                  puVar9 = puVar9 + 7;
                } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
              }
              if (*(long *)(lVar2 + 0x58) != 0) {
                uVar8 = Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar2 + 0x58),0);
                return uVar8;
              }
            }
          }
        }
      }
    }
  }
code_r0x01574960:
  func_0x00f78af4();
code_r0x01574964:
  uVar5 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar5,0);
  if ((bRam0000000003eb506c & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d890);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb506c = 1;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (*(long *)(lVar2 + 0x58) != 0) {
    lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
    if (((*(long *)(lVar2 + 0x80) != 0) &&
        (lVar4 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar2 + 0x80),0), lVar4 != 0)) && (lVar3 != 0)) {
      *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)(lVar4 + 0x18);
      if (*(long *)(lVar2 + 0x58) != 0) {
        lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
        if ((*(long *)(lVar2 + 0x30) != 0) && (lVar3 != 0)) {
          *(undefined4 *)(lVar3 + 0xdc) = *(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x18);
          if ((*(long *)(lVar2 + 0x58) != 0) &&
             (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0), lVar3 != 0))
          {
            uStack_190 = *(undefined8 *)(lVar3 + 0x100);
            uVar5 = /*Atlas.Stats.DailyChallengeManager$$GetYesterdaysDailyChallengeDate*/ func_0x01576210(lVar2);
            uVar8 = /*System.DateTime$$Equals*/ func_0x02a8deb4(&uStack_190,uVar5,0);
            if (((uVar8 & 1) == 0) || (uVar8 = /*Atlas.Stats.DailyChallengeManager$$AnyCurrentChallengesCompleted*/ func_0x01575e98(lVar2), (uVar8 & 1) == 0)) {
              if ((*(long *)(lVar2 + 0x58) == 0) ||
                 (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0),
                 lVar3 == 0)) goto code_r0x01574be8;
              *(undefined2 *)(lVar3 + 0x108) = 0;
            }
            if (((*(long *)(lVar2 + 0x58) != 0) &&
                (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0), lVar3 != 0
                )) && (*(long *)(lVar3 + 0xf8) != 0)) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0xf8),uRam0000000003d3bfb8);
              if (((*(long *)(lVar2 + 0x58) != 0) &&
                  (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0),
                  lVar3 != 0)) && (*(long *)(lVar3 + 0xf0) != 0)) {
                /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_190,*(long *)(lVar3 + 0xf0),uRam0000000003d3d898);
                uStack_148 = uStack_188;
                uStack_150 = uStack_190;
                uStack_138 = uStack_178;
                uStack_140 = uStack_180;
                uStack_128 = uStack_168;
                uStack_130 = uStack_170;
                uStack_118 = uStack_158;
                uStack_120 = uStack_160;
                while (uVar8 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_150,uRam0000000003d33710), uVar5 = uStack_140
                      , (uVar8 & 1) != 0) {
                  if (*(long *)(lVar2 + 0x58) == 0) {
                    func_0x00f78af4();
code_r0x01574c4c:
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1574c50);
                    (*pcVar1)();
                  }
                  lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
                  if (lVar3 == 0) {
                    func_0x00f78af4();
                    goto code_r0x01574c4c;
                  }
                  if (*(long *)(lVar3 + 0xf8) == 0) {
                    func_0x00f78af4();
                    goto code_r0x01574c4c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0xf8),uVar5,uRam0000000003d3bfa0);
                }
                /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_150,uRam0000000003d33708);
                if (((*(long *)(lVar2 + 0x58) != 0) &&
                    (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0),
                    lVar3 != 0)) && (*(long *)(lVar3 + 0xf0) != 0)) {
                  /*System.Collections.Generic.List<SaveData.DailyChallenge>$$Clear*/ func_0x025874f8(*(long *)(lVar3 + 0xf0),uRam0000000003d3d890);
                  lVar3 = *(long *)(lVar2 + 0x30);
                  if (lVar3 != 0) {
                    iVar7 = 0;
                    do {
                      if (*(long *)(lVar3 + 0x30) == 0) break;
                      if (*(int *)(*(long *)(lVar3 + 0x30) + 0x18) <= iVar7) goto code_r0x01574bec;
                      /*Atlas.Stats.DailyChallengeManager$$CreateAndSetDailyChallenge*/ func_0x01576904(lVar2,iVar7);
                      iVar7 = iVar7 + 1;
                      lVar3 = *(long *)(lVar2 + 0x30);
                    } while (lVar3 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x01574be8:
  do {
    do {
      do {
        func_0x00f78af4();
code_r0x01574bec:
      } while (*(long *)(lVar2 + 0x58) == 0);
      lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
      uVar5 = /*Atlas.Stats.DailyChallengeManager$$GetDailyChallengeDate*/ func_0x015751ac(lVar2);
    } while (lVar3 == 0);
    *(undefined8 *)(lVar3 + 0xe8) = uVar5;
  } while (*(long *)(lVar2 + 0x58) == 0);
  uVar8 = Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar2 + 0x58),0);
  return uVar8;
}



// ============================================================
// RVA: 0x15747f8 | Atlas.Stats.DailyChallengeManager.CreateAndSetFTUEChallenges
// ============================================================

void Atlas_Stats_DailyChallengeManager__CreateAndSetFTUEChallenges(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb505b & 1) == 0) {
    func_0x00f78a20(0x3d3d888);
    bRam0000000003eb505b = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 != 0)) {
    *(undefined2 *)(lVar2 + 0x108) = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
      if (((*(long *)(param_1 + 0x80) != 0) &&
          (lVar3 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(param_1 + 0x80),0), lVar3 != 0)) && (lVar2 != 0)) {
        *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar3 + 0x18);
        if (*(long *)(param_1 + 0x58) != 0) {
          lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 != 0) && (lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0xdc) = *(undefined4 *)(lVar3 + 0x18);
            lVar2 = *(long *)(lVar3 + 0x40);
            if (lVar2 != 0) {
              if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
                uVar8 = 0;
                uVar6 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
                puVar9 = (undefined8 *)(lVar2 + 0x20);
                do {
                  if (uVar6 <= uVar8) goto LAB_01574964;
                  uVar11 = puVar9[1];
                  uVar4 = *puVar9;
                  uVar14 = puVar9[3];
                  uVar13 = puVar9[2];
                  uVar12 = puVar9[5];
                  uVar10 = puVar9[4];
                  if (((*(long *)(param_1 + 0x58) == 0) ||
                      (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0),
                      lVar3 == 0)) || (*(long *)(lVar3 + 0xf0) == 0)) goto LAB_01574960;
                  uStack_70 = uVar4;
                  uStack_68 = uVar11;
                  uStack_60 = uVar13;
                  uStack_58 = uVar14;
                  uStack_50 = uVar10;
                  uStack_48 = uVar12;
                  /*System.Collections.Generic.List<SaveData.DailyChallenge>$$Add*/ func_0x025871c0(*(long *)(lVar3 + 0xf0),&uStack_70,uRam0000000003d3d888);
                  uVar8 = uVar8 + 1;
                  uVar6 = (ulong)*(uint *)(lVar2 + 0x18);
                  puVar9 = puVar9 + 7;
                } while ((long)uVar8 < (long)(int)*(uint *)(lVar2 + 0x18));
              }
              if (*(long *)(param_1 + 0x58) != 0) {
                Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x58),0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01574960:
  func_0x00f78af4();
LAB_01574964:
  uVar4 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb506c & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d890);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb506c = 1;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (*(long *)(lVar2 + 0x58) != 0) {
    lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
    if (((*(long *)(lVar2 + 0x80) != 0) &&
        (lVar5 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar2 + 0x80),0), lVar5 != 0)) && (lVar3 != 0)) {
      *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)(lVar5 + 0x18);
      if (*(long *)(lVar2 + 0x58) != 0) {
        lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
        if ((*(long *)(lVar2 + 0x30) != 0) && (lVar3 != 0)) {
          *(undefined4 *)(lVar3 + 0xdc) = *(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x18);
          if ((*(long *)(lVar2 + 0x58) != 0) &&
             (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0), lVar3 != 0))
          {
            uStack_170 = *(undefined8 *)(lVar3 + 0x100);
            uVar4 = /*Atlas.Stats.DailyChallengeManager$$GetYesterdaysDailyChallengeDate*/ func_0x01576210(lVar2);
            uVar8 = /*System.DateTime$$Equals*/ func_0x02a8deb4(&uStack_170,uVar4,0);
            if (((uVar8 & 1) == 0) || (uVar8 = /*Atlas.Stats.DailyChallengeManager$$AnyCurrentChallengesCompleted*/ func_0x01575e98(lVar2), (uVar8 & 1) == 0)) {
              if ((*(long *)(lVar2 + 0x58) == 0) ||
                 (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0),
                 lVar3 == 0)) goto code_r0x01574be8;
              *(undefined2 *)(lVar3 + 0x108) = 0;
            }
            if (((*(long *)(lVar2 + 0x58) != 0) &&
                (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0), lVar3 != 0
                )) && (*(long *)(lVar3 + 0xf8) != 0)) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0xf8),uRam0000000003d3bfb8);
              if (((*(long *)(lVar2 + 0x58) != 0) &&
                  (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0),
                  lVar3 != 0)) && (*(long *)(lVar3 + 0xf0) != 0)) {
                /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_170,*(long *)(lVar3 + 0xf0),uRam0000000003d3d898);
                uStack_128 = uStack_168;
                uStack_130 = uStack_170;
                uStack_118 = uStack_158;
                uStack_120 = uStack_160;
                uStack_108 = uStack_148;
                uStack_110 = uStack_150;
                uStack_f8 = uStack_138;
                uStack_100 = uStack_140;
                while (uVar8 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_130,uRam0000000003d33710), uVar4 = uStack_120
                      , (uVar8 & 1) != 0) {
                  if (*(long *)(lVar2 + 0x58) == 0) {
                    func_0x00f78af4();
code_r0x01574c4c:
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1574c50);
                    (*pcVar1)();
                  }
                  lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
                  if (lVar3 == 0) {
                    func_0x00f78af4();
                    goto code_r0x01574c4c;
                  }
                  if (*(long *)(lVar3 + 0xf8) == 0) {
                    func_0x00f78af4();
                    goto code_r0x01574c4c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0xf8),uVar4,uRam0000000003d3bfa0);
                }
                /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_130,uRam0000000003d33708);
                if (((*(long *)(lVar2 + 0x58) != 0) &&
                    (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0),
                    lVar3 != 0)) && (*(long *)(lVar3 + 0xf0) != 0)) {
                  /*System.Collections.Generic.List<SaveData.DailyChallenge>$$Clear*/ func_0x025874f8(*(long *)(lVar3 + 0xf0),uRam0000000003d3d890);
                  lVar3 = *(long *)(lVar2 + 0x30);
                  if (lVar3 != 0) {
                    iVar7 = 0;
                    do {
                      if (*(long *)(lVar3 + 0x30) == 0) break;
                      if (*(int *)(*(long *)(lVar3 + 0x30) + 0x18) <= iVar7) goto code_r0x01574bec;
                      /*Atlas.Stats.DailyChallengeManager$$CreateAndSetDailyChallenge*/ func_0x01576904(lVar2,iVar7);
                      iVar7 = iVar7 + 1;
                      lVar3 = *(long *)(lVar2 + 0x30);
                    } while (lVar3 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x01574be8:
  do {
    do {
      do {
        func_0x00f78af4();
code_r0x01574bec:
      } while (*(long *)(lVar2 + 0x58) == 0);
      lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x58),0);
      uVar4 = /*Atlas.Stats.DailyChallengeManager$$GetDailyChallengeDate*/ func_0x015751ac(lVar2);
    } while (lVar3 == 0);
    *(undefined8 *)(lVar3 + 0xe8) = uVar4;
  } while (*(long *)(lVar2 + 0x58) == 0);
  Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar2 + 0x58),0);
  return;
}



// ============================================================
// RVA: 0x1574970 | Atlas.Stats.DailyChallengeManager.CreateAndSetAllDailyChallenges
// ============================================================

void Atlas_Stats_DailyChallengeManager__CreateAndSetAllDailyChallenges(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb506c & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d890);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb506c = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
    if (((*(long *)(param_1 + 0x80) != 0) &&
        (lVar3 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(param_1 + 0x80),0), lVar3 != 0)) && (lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar3 + 0x18);
      if (*(long *)(param_1 + 0x58) != 0) {
        lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
        if ((*(long *)(param_1 + 0x30) != 0) && (lVar2 != 0)) {
          *(undefined4 *)(lVar2 + 0xdc) = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18);
          if ((*(long *)(param_1 + 0x58) != 0) &&
             (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 != 0)
             ) {
            uStack_c0 = *(undefined8 *)(lVar2 + 0x100);
            uVar4 = /*Atlas.Stats.DailyChallengeManager$$GetYesterdaysDailyChallengeDate*/ func_0x01576210(param_1);
            uVar5 = /*System.DateTime$$Equals*/ func_0x02a8deb4(&uStack_c0,uVar4,0);
            if (((uVar5 & 1) == 0) || (uVar5 = /*Atlas.Stats.DailyChallengeManager$$AnyCurrentChallengesCompleted*/ func_0x01575e98(param_1), (uVar5 & 1) == 0)) {
              if ((*(long *)(param_1 + 0x58) == 0) ||
                 (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0),
                 lVar2 == 0)) goto LAB_01574be8;
              *(undefined2 *)(lVar2 + 0x108) = 0;
            }
            if (((*(long *)(param_1 + 0x58) != 0) &&
                (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0),
                lVar2 != 0)) && (*(long *)(lVar2 + 0xf8) != 0)) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar2 + 0xf8),uRam0000000003d3bfb8);
              if (((*(long *)(param_1 + 0x58) != 0) &&
                  (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0),
                  lVar2 != 0)) && (*(long *)(lVar2 + 0xf0) != 0)) {
                /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_c0,*(long *)(lVar2 + 0xf0),uRam0000000003d3d898);
                uStack_78 = uStack_b8;
                uStack_80 = uStack_c0;
                uStack_68 = uStack_a8;
                uStack_70 = uStack_b0;
                uStack_58 = uStack_98;
                uStack_60 = uStack_a0;
                uStack_48 = uStack_88;
                uStack_50 = uStack_90;
                while (uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_80,uRam0000000003d33710), uVar4 = uStack_70,
                      (uVar5 & 1) != 0) {
                  if (*(long *)(param_1 + 0x58) == 0) {
                    func_0x00f78af4();
code_r0x01574c4c:
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1574c50);
                    (*pcVar1)();
                  }
                  lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
                  if (lVar2 == 0) {
                    func_0x00f78af4();
                    goto code_r0x01574c4c;
                  }
                  if (*(long *)(lVar2 + 0xf8) == 0) {
                    func_0x00f78af4();
                    goto code_r0x01574c4c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar2 + 0xf8),uVar4,uRam0000000003d3bfa0);
                }
                /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_80,uRam0000000003d33708);
                if (((*(long *)(param_1 + 0x58) != 0) &&
                    (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0),
                    lVar2 != 0)) && (*(long *)(lVar2 + 0xf0) != 0)) {
                  /*System.Collections.Generic.List<SaveData.DailyChallenge>$$Clear*/ func_0x025874f8(*(long *)(lVar2 + 0xf0),uRam0000000003d3d890);
                  lVar2 = *(long *)(param_1 + 0x30);
                  if (lVar2 != 0) {
                    iVar6 = 0;
                    do {
                      if (*(long *)(lVar2 + 0x30) == 0) break;
                      if (*(int *)(*(long *)(lVar2 + 0x30) + 0x18) <= iVar6) goto code_r0x01574bec;
                      /*Atlas.Stats.DailyChallengeManager$$CreateAndSetDailyChallenge*/ func_0x01576904(param_1,iVar6);
                      iVar6 = iVar6 + 1;
                      lVar2 = *(long *)(param_1 + 0x30);
                    } while (lVar2 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01574be8:
  do {
    do {
      do {
        func_0x00f78af4();
code_r0x01574bec:
      } while (*(long *)(param_1 + 0x58) == 0);
      lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
      uVar4 = /*Atlas.Stats.DailyChallengeManager$$GetDailyChallengeDate*/ func_0x015751ac(param_1);
    } while (lVar2 == 0);
    *(undefined8 *)(lVar2 + 0xe8) = uVar4;
  } while (*(long *)(param_1 + 0x58) == 0);
  Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x58),0);
  return;
}



// ============================================================
// RVA: 0x1574c98 | Atlas.Stats.DailyChallengeManager.EnableTracking
// ============================================================

void Atlas_Stats_DailyChallengeManager__EnableTracking(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb8) = param_2;
  return;
}



// ============================================================
// RVA: 0x1574ca0 | Atlas.Stats.DailyChallengeManager.AreCurrentChallengesFTUE
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__AreCurrentChallengesFTUE(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000003eb505a & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb505a = 1;
  }
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar1 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0xf8) != 0)) {
    if (*(int *)(*(long *)(lVar1 + 0xf8) + 0x18) == 0) {
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (lVar1 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar1 == 0))
         || (*(long *)(lVar1 + 0xf0) == 0)) goto LAB_01574d3c;
      uVar2 = (ulong)(*(int *)(*(long *)(lVar1 + 0xf0) + 0x18) != 0);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
LAB_01574d3c:
  lVar1 = func_0x00f78af4();
  return lVar1 + 0x40;
}



// ============================================================
// RVA: 0x1574d48 | Atlas.Stats.DailyChallengeManager.AreAllChallengesComplete
// ============================================================

bool Atlas_Stats_DailyChallengeManager__AreAllChallengesComplete(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int extraout_w1;
  int iVar9;
  float fVar10;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  int iStack_168;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5061 & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb5061 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0xf0) != 0)) {
    /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_b0,*(long *)(lVar4 + 0xf0),uRam0000000003d3d898);
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_b0,uRam0000000003d33710);
      if ((uVar5 & 1) == 0) {
        iVar9 = 0x43;
        goto LAB_01574e54;
      }
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
      uStack_48 = uStack_78;
      uVar1 = uStack_48;
      uStack_50 = uStack_80;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      uStack_48._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
      uVar2 = uStack_48._4_4_;
      uStack_48 = uVar1;
      fVar10 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_68,uVar2,0);
    } while (100.0 <= fVar10);
    iVar9 = 0x45;
LAB_01574e54:
    /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_b0,uRam0000000003d33708);
    return iVar9 != 0x45;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    param_1 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_b0,uRam0000000003eb5000);
    if (param_1 == 0) {
      return true;
    }
  }
  else {
    __Unwind_Resume();
  }
  lVar4 = func_0x00f78ac0(param_1,0);
  if ((bRam0000000003eb5060 & 1) == 0) {
    func_0x00f78a20(0x3d52318);
    func_0x00f78a20(0x3d52328);
    func_0x00f78a20(0x3d52330);
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb5060 = 1;
  }
  uStack_158 = 0;
  if ((*(long *)(lVar4 + 0x30) != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar4 + 0x30) + 0x18);
    lVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x58),0);
    if (lVar7 != 0) {
      if (iVar9 != *(int *)(lVar7 + 0xdc)) {
        return false;
      }
      if (((*(long *)(lVar4 + 0x30) != 0) &&
          (lVar7 = *(long *)(*(long *)(lVar4 + 0x30) + 0x30), lVar7 != 0)) &&
         ((*(long *)(lVar4 + 0x58) != 0 &&
          ((lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x58),0), lVar8 != 0 &&
           (*(long *)(lVar8 + 0xf0) != 0)))))) {
        if (*(int *)(*(long *)(lVar8 + 0xf0) + 0x18) != *(int *)(lVar7 + 0x18)) {
          return false;
        }
        if (((*(long *)(lVar4 + 0x58) != 0) &&
            (lVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x58),0), lVar7 != 0))
           && (*(long *)(lVar7 + 0xf0) != 0)) {
          /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_1a8,*(long *)(lVar7 + 0xf0),uRam0000000003d3d898);
          uStack_148 = uStack_1a0;
          uStack_150 = uStack_1a8;
          uStack_138 = uStack_190;
          uStack_140 = uStack_198;
          uStack_128 = uStack_180;
          uStack_130 = uStack_188;
          uStack_118 = uStack_170;
          uStack_120 = uStack_178;
code_r0x01575034:
          do {
            do {
              uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_150,uRam0000000003d33710);
              uVar1 = uStack_120;
              if ((uVar5 & 1) == 0) {
                iStack_168 = 0x10c;
                goto code_r0x015750e4;
              }
              iVar9 = (int)uStack_128;
              uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uStack_140,0);
              if ((uVar5 & 1) != 0) goto code_r0x015750d0;
              uStack_158 = uVar1;
              uVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_158,0);
            } while ((uVar5 & 1) == 0);
            if (iVar9 == 3) {
              if (*(long *)(lVar4 + 0x68) == 0) {
                func_0x00f78af4();
                goto code_r0x01575144;
              }
              uVar5 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(lVar4 + 0x68),uVar1,uRam0000000003d52328);
            }
            else if (iVar9 == 2) {
              if (*(long *)(lVar4 + 0x68) == 0) {
                func_0x00f78af4();
                goto code_r0x01575144;
              }
              uVar5 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(lVar4 + 0x68),uVar1,uRam0000000003d52318);
            }
            else {
              if (iVar9 != 1) goto code_r0x01575034;
              if (*(long *)(lVar4 + 0x68) == 0) goto code_r0x01575130;
              uVar5 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(lVar4 + 0x68),uVar1,uRam0000000003d52330);
            }
            if ((uVar5 & 1) == 0) {
code_r0x015750d0:
              iStack_168 = 0x10e;
code_r0x015750e4:
              uStack_15c = 1;
              /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_150,uRam0000000003d33708);
              return iStack_168 != 0x10e;
            }
          } while( true );
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x01575130:
  func_0x00f78af4();
code_r0x01575144:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1575148);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x1574ecc | Atlas.Stats.DailyChallengeManager.AreChallengesValid
// ============================================================

bool Atlas_Stats_DailyChallengeManager__AreChallengesValid(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb5060 & 1) == 0) {
    func_0x00f78a20(0x3d52318);
    func_0x00f78a20(0x3d52328);
    func_0x00f78a20(0x3d52330);
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb5060 = 1;
  }
  uStack_98 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
    lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
    if (lVar4 != 0) {
      if (iVar1 != *(int *)(lVar4 + 0xdc)) {
        return false;
      }
      if ((((*(long *)(param_1 + 0x30) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar4 != 0)) &&
          (*(long *)(param_1 + 0x58) != 0)) &&
         ((lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar5 != 0 &&
          (*(long *)(lVar5 + 0xf0) != 0)))) {
        if (*(int *)(*(long *)(lVar5 + 0xf0) + 0x18) != *(int *)(lVar4 + 0x18)) {
          return false;
        }
        if (((*(long *)(param_1 + 0x58) != 0) &&
            (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar4 != 0))
           && (*(long *)(lVar4 + 0xf0) != 0)) {
          /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_e8,*(long *)(lVar4 + 0xf0),uRam0000000003d3d898);
          uStack_88 = uStack_e0;
          uStack_90 = uStack_e8;
          uStack_78 = uStack_d0;
          uStack_80 = uStack_d8;
          uStack_68 = uStack_c0;
          uStack_70 = uStack_c8;
          uStack_58 = uStack_b0;
          uStack_60 = uStack_b8;
LAB_01575034:
          do {
            do {
              uVar6 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_90,uRam0000000003d33710);
              uVar2 = uStack_60;
              if ((uVar6 & 1) == 0) {
                iStack_a8 = 0x10c;
                goto code_r0x015750e4;
              }
              iVar1 = (int)uStack_68;
              uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uStack_80,0);
              if ((uVar6 & 1) != 0) goto LAB_015750d0;
              uStack_98 = uVar2;
              uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
            } while ((uVar6 & 1) == 0);
            if (iVar1 == 3) {
              if (*(long *)(param_1 + 0x68) == 0) {
                func_0x00f78af4();
                goto code_r0x01575144;
              }
              uVar6 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(param_1 + 0x68),uVar2,uRam0000000003d52328);
            }
            else if (iVar1 == 2) {
              if (*(long *)(param_1 + 0x68) == 0) {
                func_0x00f78af4();
                goto code_r0x01575144;
              }
              uVar6 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(param_1 + 0x68),uVar2,uRam0000000003d52318);
            }
            else {
              if (iVar1 != 1) goto LAB_01575034;
              if (*(long *)(param_1 + 0x68) == 0) goto LAB_01575130;
              uVar6 = Atlas_Definitions_AtlasDefinitions__IsContentValid_AntennaDefinition_
                                (*(long *)(param_1 + 0x68),uVar2,uRam0000000003d52330);
            }
            if ((uVar6 & 1) == 0) {
LAB_015750d0:
              iStack_a8 = 0x10e;
code_r0x015750e4:
              uStack_9c = 1;
              /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_90,uRam0000000003d33708);
              return iStack_a8 != 0x10e;
            }
          } while( true );
        }
      }
    }
  }
  func_0x00f78af4();
LAB_01575130:
  func_0x00f78af4();
code_r0x01575144:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1575148);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x15751ac | Atlas.Stats.DailyChallengeManager.GetDailyChallengeDate
// ============================================================

undefined8 Atlas_Stats_DailyChallengeManager__GetDailyChallengeDate(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5067 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb5067 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  uVar1 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_38,0);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.TimeSpan$$op_GreaterThanOrEqual*/ func_0x029f1240(uVar1,uVar3,0);
  uVar1 = /*System.DateTime$$get_Date*/ func_0x02a8e25c(&uStack_38,0);
  if ((uVar2 & 1) == 0) {
    uStack_40 = 0;
    /*System.TimeSpan$$.ctor*/ func_0x029f02c8(&uStack_40,1,0,0,0,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar1,uStack_40,0);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15752dc | Atlas.Stats.DailyChallengeManager.Update
// ============================================================

void Atlas_Stats_DailyChallengeManager__Update(void)

{
  return;
}



// ============================================================
// RVA: 0x15752e0 | Atlas.Stats.DailyChallengeManager.GetLocKeyForChallenge
// ============================================================

/* WARNING: Possible PIC construction at 0x01575314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01575318) */
/* WARNING: Removing unreachable block (ram,0x0157531c) */
/* WARNING: Removing unreachable block (ram,0x01575324) */
/* WARNING: Removing unreachable block (ram,0x0157532c) */
/* WARNING: Removing unreachable block (ram,0x01575338) */
/* WARNING: Removing unreachable block (ram,0x0157533c) */
/* WARNING: Removing unreachable block (ram,0x01575344) */
/* WARNING: Removing unreachable block (ram,0x015753cc) */
/* WARNING: Removing unreachable block (ram,0x01575354) */
/* WARNING: Removing unreachable block (ram,0x01575360) */
/* WARNING: Removing unreachable block (ram,0x01575368) */
/* WARNING: Removing unreachable block (ram,0x01575370) */
/* WARNING: Removing unreachable block (ram,0x0157537c) */
/* WARNING: Removing unreachable block (ram,0x01575384) */
/* WARNING: Removing unreachable block (ram,0x015753f4) */
/* WARNING: Removing unreachable block (ram,0x0157538c) */
/* WARNING: Removing unreachable block (ram,0x01575400) */
/* WARNING: Removing unreachable block (ram,0x01575398) */
/* WARNING: Removing unreachable block (ram,0x015753b4) */
/* WARNING: Removing unreachable block (ram,0x015753c4) */
/* WARNING: Removing unreachable block (ram,0x015753d8) */

ulong Atlas_Stats_DailyChallengeManager__GetLocKeyForChallenge(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x38), lVar7 != 0)) {
    uVar4 = *(uint *)(lVar7 + 0x18);
    uVar6 = (ulong)(0 < (int)uVar4);
    if (0 < (int)uVar4) {
      uVar8 = 0;
      do {
        if (uVar4 <= uVar8) goto code_r0x015754e0;
        lVar5 = *(long *)(lVar7 + (long)(int)uVar8 * 0x28 + 0x20);
        if (lVar5 == 0) goto code_r0x015754dc;
        iVar1 = /*System.String$$Equals*/ func_0x029bab9c(lVar5,param_2,0);
        if (iVar1 != 0) {
          return uVar6;
        }
        uVar8 = uVar8 + 1;
        uVar4 = *(uint *)(lVar7 + 0x18);
        uVar6 = (ulong)((int)uVar8 < (int)uVar4);
      } while ((int)uVar8 < (int)uVar4);
    }
    return uVar6;
  }
code_r0x015754dc:
  func_0x00f78af4();
code_r0x015754e0:
  uVar2 = func_0x00f78b24();
  uVar3 = func_0x00f78ac0(uVar2,0);
  uVar6 = uVar3;
  if ((bRam0000000003eb505e & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb505e = 1;
  }
  if (*(char *)(uVar3 + 0xb8) != '\0') {
    lVar7 = *(long *)(uVar3 + 0x58);
    if (lVar7 != 0) {
      iVar1 = 0;
      do {
        uVar6 = Atlas_Save_SaveManager__get_SaveData(lVar7,0);
        if ((uVar6 == 0) || (*(long *)(uVar6 + 0xf0) == 0)) break;
        if (*(int *)(*(long *)(uVar6 + 0xf0) + 0x18) <= iVar1) {
          return uVar6;
        }
        /*Atlas.Stats.DailyChallengeManager$$UpdateDailyChallenge*/ func_0x01575578(uVar3,iVar1);
        iVar1 = iVar1 + 1;
        lVar7 = *(long *)(uVar3 + 0x58);
      } while (lVar7 != 0);
    }
    uVar6 = func_0x00f78af4();
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1575404 | Atlas.Stats.DailyChallengeManager.TryGetChallengeFromConfig
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__TryGetChallengeFromConfig
                (long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x38), lVar8 != 0)) {
    uVar4 = *(uint *)(lVar8 + 0x18);
    uVar7 = (ulong)(0 < (int)uVar4);
    if (0 < (int)uVar4) {
      uVar9 = 0;
      do {
        if (uVar4 <= uVar9) goto LAB_015754e0;
        lVar5 = lVar8 + (long)(int)uVar9 * 0x28;
        lVar6 = *(long *)(lVar5 + 0x20);
        lVar11 = *(long *)(lVar5 + 0x30);
        lVar10 = *(long *)(lVar5 + 0x28);
        lVar12 = *(long *)(lVar5 + 0x40);
        lVar5 = *(long *)(lVar5 + 0x38);
        if (lVar6 == 0) goto LAB_015754dc;
        iVar1 = /*System.String$$Equals*/ func_0x029bab9c(lVar6,param_2,0);
        if (iVar1 != 0) {
          *param_3 = lVar6;
          param_3[2] = lVar11;
          param_3[1] = lVar10;
          param_3[4] = lVar12;
          param_3[3] = lVar5;
          return uVar7;
        }
        uVar9 = uVar9 + 1;
        uVar4 = *(uint *)(lVar8 + 0x18);
        uVar7 = (ulong)((int)uVar9 < (int)uVar4);
      } while ((int)uVar9 < (int)uVar4);
    }
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    return uVar7;
  }
LAB_015754dc:
  func_0x00f78af4();
LAB_015754e0:
  uVar2 = func_0x00f78b24();
  uVar3 = func_0x00f78ac0(uVar2,0);
  uVar7 = uVar3;
  if ((bRam0000000003eb505e & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb505e = 1;
  }
  if (*(char *)(uVar3 + 0xb8) != '\0') {
    lVar8 = *(long *)(uVar3 + 0x58);
    if (lVar8 != 0) {
      iVar1 = 0;
      do {
        uVar7 = Atlas_Save_SaveManager__get_SaveData(lVar8,0);
        if ((uVar7 == 0) || (*(long *)(uVar7 + 0xf0) == 0)) break;
        if (*(int *)(*(long *)(uVar7 + 0xf0) + 0x18) <= iVar1) {
          return uVar7;
        }
        /*Atlas.Stats.DailyChallengeManager$$UpdateDailyChallenge*/ func_0x01575578(uVar3,iVar1);
        iVar1 = iVar1 + 1;
        lVar8 = *(long *)(uVar3 + 0x58);
      } while (lVar8 != 0);
    }
    uVar7 = func_0x00f78af4();
  }
  return uVar7;
}



// ============================================================
// RVA: 0x15754ec | Atlas.Stats.DailyChallengeManager.UpdateAllDailyChallengeProgress
// ============================================================

void Atlas_Stats_DailyChallengeManager__UpdateAllDailyChallengeProgress(long param_1)

{
  long lVar1;
  int iVar2;
  
  if ((bRam0000000003eb505e & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb505e = 1;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 != 0) {
      iVar2 = 0;
      do {
        lVar1 = Atlas_Save_SaveManager__get_SaveData(lVar1,0);
        if ((lVar1 == 0) || (*(long *)(lVar1 + 0xf0) == 0)) break;
        if (*(int *)(*(long *)(lVar1 + 0xf0) + 0x18) <= iVar2) {
          return;
        }
        /*Atlas.Stats.DailyChallengeManager$$UpdateDailyChallenge*/ func_0x01575578(param_1,iVar2);
        iVar2 = iVar2 + 1;
        lVar1 = *(long *)(param_1 + 0x58);
      } while (lVar1 != 0);
    }
    func_0x00f78af4();
  }
  return;
}



// ============================================================
// RVA: 0x1575578 | Atlas.Stats.DailyChallengeManager.UpdateDailyChallenge
// ============================================================

/* WARNING: Possible PIC construction at 0x015759fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01575a00) */
/* WARNING: Removing unreachable block (ram,0x01575a14) */
/* WARNING: Removing unreachable block (ram,0x01575a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Stats_DailyChallengeManager__UpdateDailyChallenge(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  bool bVar15;
  long lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  uint uStack_284;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined4 uStack_257;
  undefined3 uStack_253;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined4 uStack_227;
  undefined3 uStack_223;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined4 uStack_1f7;
  undefined3 uStack_1f3;
  undefined4 uStack_1e8;
  undefined3 uStack_1e4;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined3 uStack_1b4;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_180;
  undefined8 uStack_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  char cStack_158;
  undefined4 uStack_157;
  undefined3 uStack_153;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb506e & 1) == 0) {
    func_0x00f78a20(0x3d3d8a8);
    func_0x00f78a20(0x3d3d8b0);
    bRam0000000003eb506e = 1;
  }
  if (((*(long *)(param_1 + 0x58) == 0) ||
      (lVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar7 == 0)) ||
     (lVar7 = *(long *)(lVar7 + 0xf0), lVar7 == 0)) goto LAB_0157570c;
  uVar12 = (uint)param_2;
  if (*(uint *)(lVar7 + 0x18) <= uVar12) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar7 = *(long *)(lVar7 + 0x10) + (long)(int)uVar12 * 0x30;
  uVar9 = *(undefined8 *)(lVar7 + 0x20);
  uVar11 = *(undefined8 *)(lVar7 + 0x28);
  uVar14 = *(undefined8 *)(lVar7 + 0x30);
  uStack_b0 = *(undefined8 *)(lVar7 + 0x40);
  uStack_b8 = *(undefined8 *)(lVar7 + 0x38);
  uStack_a8 = *(undefined4 *)(lVar7 + 0x48);
  iVar6 = *(int *)(lVar7 + 0x4c);
  uStack_d0 = uVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar14;
  iStack_a4 = iVar6;
  uStack_70 = uStack_b8;
  uStack_68 = uStack_b0;
  uStack_60 = uStack_a8;
  uVar8 = /*Atlas.Stats.DailyChallengeManager$$DoesCurrentContextPassConditions*/ func_0x01577044(param_1,&uStack_d0);
  if ((int)uVar8 == 0) {
LAB_015756d8:
    if (*(long *)PTR_03a5d648 == lStack_58) {
      return uVar8;
    }
LAB_01575710:
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) {
LAB_0157570c:
      func_0x00f78af4();
      goto LAB_01575710;
    }
    iVar5 = /*Atlas.Stats.StatsManager$$GetSummedGlobalStats*/ func_0x01505418(*(long *)(param_1 + 0x50),uVar11,0);
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 == 0) goto LAB_0157570c;
    if (uVar12 < *(uint *)(lVar7 + 0x18)) {
      if (*(long *)(param_1 + 0x58) != 0) {
        iVar2 = *(int *)(lVar7 + (long)(int)uVar12 * 4 + 0x20);
        lVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0xf0) != 0)) {
          iStack_74 = (iVar5 + iVar6) - iVar2;
          uStack_80 = uStack_68;
          uStack_88 = uStack_70;
          uStack_78 = uStack_60;
          uStack_a0 = uVar9;
          uStack_98 = uVar11;
          uStack_90 = uVar14;
          uVar8 = /*System.Collections.Generic.List<SaveData.DailyChallenge>$$set_Item*/ func_0x02586e34(*(long *)(lVar7 + 0xf0),param_2,&uStack_a0,uRam0000000003d3d8b0);
          goto LAB_015756d8;
        }
      }
      goto LAB_0157570c;
    }
  }
  uVar9 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar9,0);
  lVar7 = auVar18._0_8_;
  if ((bRam0000000003eb505f & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3dfa8);
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    func_0x00f78a20(0x3d3d8b0);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb505f = 1;
  }
  if (*(char *)(lVar7 + 0xb8) == '\0') {
    uVar8 = 0;
  }
  else {
    if (((*(long *)(lVar7 + 0x58) == 0) ||
        (lVar10 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x58),0),
        uVar9 = _UNK_033f8978, lVar10 == 0)) || (lVar10 = *(long *)(lVar10 + 0xf0), lVar10 == 0))
    goto code_r0x01575b64;
    uVar8 = (ulong)*(uint *)(lVar10 + 0x18);
    if ((int)*(uint *)(lVar10 + 0x18) < 1) {
      uStack_284 = 0;
    }
    else {
      lVar16 = 0;
      bVar15 = false;
      uStack_284 = 0;
      uVar13 = 0;
      do {
        if ((uVar8 & 0xffffffff) <= uVar13) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar1 = *(long *)(lVar10 + 0x10) + lVar16;
        uStack_1d8 = *(undefined8 *)(lVar1 + 0x28);
        uStack_1e0 = *(ulong *)(lVar1 + 0x20);
        uStack_1c8 = *(undefined8 *)(lVar1 + 0x38);
        uStack_1d0 = *(undefined8 *)(lVar1 + 0x30);
        uStack_1c0 = *(undefined8 *)(lVar1 + 0x40);
        cVar3 = *(char *)(lVar1 + 0x48);
        uStack_157 = *(undefined4 *)(lVar1 + 0x49);
        uStack_1b8._0_3_ = (undefined3)uStack_157;
        uStack_1b8._3_1_ = (undefined1)*(undefined4 *)(lVar1 + 0x4c);
        uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar1 + 0x4c) >> 8);
        uStack_168 = (undefined4)uStack_1c8;
        uStack_164 = (undefined4)((ulong)uStack_1c8 >> 0x20);
        iStack_170 = (int)uStack_1d0;
        uStack_16c = (undefined4)((ulong)uStack_1d0 >> 0x20);
        uStack_1e8._3_1_ = (undefined1)((uint)uStack_157 >> 0x18);
        uStack_153 = uStack_1b4;
        uVar4 = CONCAT31(uStack_1b4,uStack_1e8._3_1_);
        uStack_1e8 = uStack_157;
        uStack_1e4 = uStack_1b4;
        uStack_1b0 = uStack_1e0;
        uStack_1a8 = uStack_1d8;
        uStack_1a0 = uStack_1d0;
        uStack_198 = uStack_1c8;
        uStack_190 = uStack_1c0;
        uStack_180 = uStack_1e0;
        uStack_178 = uStack_1d8;
        uStack_160 = uStack_1c0;
        cStack_158 = cVar3;
        fVar17 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_178,uVar4,0);
        if ((100.0 <= fVar17) && (cVar3 == '\0')) {
          uStack_218 = uStack_1a8;
          uStack_220 = uStack_1b0;
          uStack_208 = uStack_198;
          uStack_210 = uStack_1a0;
          uStack_200 = uStack_190;
          uStack_1f7 = uStack_1b8;
          uStack_1f3 = uStack_1b4;
          uStack_1f8 = 0;
          iVar6 = Atlas_Stats_DailyChallengeManager__GetChallengeXPReward(lVar7,&uStack_220);
          uStack_178 = uStack_1a8;
          uStack_180 = uStack_1b0;
          uStack_168 = (undefined4)uStack_198;
          uStack_164 = (undefined4)((ulong)uStack_198 >> 0x20);
          iStack_170 = (int)uStack_1a0;
          uStack_16c = (undefined4)((ulong)uStack_1a0 >> 0x20);
          uStack_160 = uStack_190;
          cStack_158 = '\x01';
          uStack_157 = uStack_1b8;
          uStack_153 = uStack_1b4;
          /*System.Collections.Generic.List<SaveData.DailyChallenge>$$set_Item*/ func_0x02586e34(lVar10,uVar13,&uStack_180,uRam0000000003d3d8b0);
          if (*(long *)(lVar7 + 0x58) == 0) goto code_r0x01575b64;
          Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar7 + 0x58),0);
          uStack_248 = uStack_1a8;
          uStack_250 = uStack_1b0;
          uStack_238 = uStack_198;
          uStack_240 = uStack_1a0;
          uStack_230 = uStack_190;
          uStack_227 = uStack_1b8;
          uStack_223 = uStack_1b4;
          uStack_228 = 1;
          uVar11 = Atlas_Stats_DailyChallengeManager__GetLocalisedFormattedStringForChallenge
                             (lVar7,&uStack_250);
          if (auVar18._8_8_ == 0) goto code_r0x01575b64;
          uStack_284 = iVar6 + uStack_284;
          uStack_180 = uVar13 & 0xffffffff;
          uStack_16c = (undefined4)uVar9;
          uStack_168 = (undefined4)((ulong)uVar9 >> 0x20);
          uStack_164 = 0;
          uStack_160 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
          uStack_178 = uVar11;
          iStack_170 = iVar6;
          /*System.Collections.Generic.List<UnlockManager.XPAward.Award>$$Add*/ func_0x025dc574(auVar18._8_8_,&uStack_180,uRam0000000003d3dfa8);
          if ((*(long *)(lVar7 + 0x88) != 0) && (*(char *)(*(long *)(lVar7 + 0x88) + 0x78) != '\0'))
          {
            uStack_278 = uStack_1a8;
            uStack_280 = uStack_1b0;
            uStack_268 = uStack_198;
            uStack_270 = uStack_1a0;
            uStack_260 = uStack_190;
            uStack_257 = uStack_1b8;
            uStack_253 = uStack_1b4;
            uStack_258 = 1;
            auVar18._8_8_ = &uStack_280;
            auVar18._0_8_ = lVar7;
            goto code_r0x01575b68;
          }
          bVar15 = true;
        }
        uVar13 = uVar13 + 1;
        uVar8 = (ulong)*(int *)(lVar10 + 0x18);
        lVar16 = lVar16 + 0x30;
      } while ((long)uVar13 < (long)uVar8);
      if (bVar15) {
        uVar9 = Atlas_Stats_DailyChallengeManager__GetDailyChallengeDate(lVar7);
        if ((*(long *)(lVar7 + 0x58) == 0) ||
           (lVar10 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x58),0), lVar10 == 0))
        goto code_r0x01575b64;
        uVar11 = *(undefined8 *)(lVar10 + 0x100);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*System.DateTime$$op_Inequality*/ func_0x02a8faf4(uVar11,uVar9,0);
        if (iVar6 != 0) {
          if ((*(long *)(lVar7 + 0x58) == 0) ||
             (lVar10 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x58),0), lVar10 == 0)
             ) goto code_r0x01575b64;
          *(short *)(lVar10 + 0x108) = *(short *)(lVar10 + 0x108) + 1;
          if ((*(long *)(lVar7 + 0x58) == 0) ||
             (lVar10 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x58),0), lVar10 == 0)
             ) goto code_r0x01575b64;
          *(undefined8 *)(lVar10 + 0x100) = uVar9;
          if (*(long *)(lVar7 + 0x58) == 0) goto code_r0x01575b64;
          Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar7 + 0x58),0);
        }
        lVar10 = *(long *)(lVar7 + 0x78);
        uVar9 = Atlas_Stats_DailyChallengeManager__AreAllChallengesComplete(lVar7);
        if (((*(long *)(lVar7 + 0x58) == 0) ||
            (lVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x58),0), lVar7 == 0))
           || (lVar10 == 0)) {
code_r0x01575b64:
          auVar18 = func_0x00f78af4();
code_r0x01575b68:
          lVar7 = auVar18._0_8_;
          if ((bRam0000000003eb506a & 1) == 0) {
            func_0x00f78a20(0x3d3d8a0);
            func_0x00f78a20(0x3d3d8a8);
            bRam0000000003eb506a = 1;
          }
          lVar10 = *(long *)(lVar7 + 0x58);
          if (lVar10 != 0) {
            uVar8 = 0;
            lVar16 = 0x20;
            while ((lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar10,0), lVar10 != 0 &&
                   (*(long *)(lVar10 + 0xf0) != 0))) {
              uVar12 = (uint)uVar8;
              if (*(int *)(*(long *)(lVar10 + 0xf0) + 0x18) <= (int)uVar12) {
                return 0;
              }
              if (((*(long *)(lVar7 + 0x58) == 0) ||
                  (lVar10 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x58),0),
                  lVar10 == 0)) || (lVar10 = *(long *)(lVar10 + 0xf0), lVar10 == 0)) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + lVar16);
              if (lVar10 == 0) break;
              uVar13 = /*System.String$$Equals*/ func_0x029bab9c(lVar10,*auVar18._8_8_,0);
              if ((uVar13 & 1) != 0) {
                return uVar8;
              }
              uVar8 = (ulong)(uVar12 + 1);
              lVar10 = *(long *)(lVar7 + 0x58);
              lVar16 = lVar16 + 0x30;
              if (lVar10 == 0) break;
            }
          }
          func_0x00f78af4();
          return 0;
        }
        Atlas_Stats_AchievementManager__CheckDailyChallengeBespokeAchievements
                  (lVar10,uVar9,*(undefined2 *)(lVar7 + 0x108),0);
      }
    }
    uVar8 = (ulong)uStack_284;
  }
  return uVar8;
}



// ============================================================
// RVA: 0x1575720 | Atlas.Stats.DailyChallengeManager.EvaluateDailyChallengeRewards
// ============================================================

/* WARNING: Possible PIC construction at 0x015759fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01575a00) */
/* WARNING: Removing unreachable block (ram,0x01575a14) */
/* WARNING: Removing unreachable block (ram,0x01575a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Atlas_Stats_DailyChallengeManager__EvaluateDailyChallengeRewards(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  uint uStack_1b4;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined4 uStack_187;
  undefined3 uStack_183;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined4 uStack_157;
  undefined3 uStack_153;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined4 uStack_127;
  undefined3 uStack_123;
  undefined4 uStack_118;
  undefined3 uStack_114;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined3 uStack_e4;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  char cStack_88;
  undefined4 uStack_87;
  undefined3 uStack_83;
  
  if ((bRam0000000003eb505f & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3dfa8);
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    func_0x00f78a20(0x3d3d8b0);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb505f = 1;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    return 0;
  }
  if (((*(long *)(param_1 + 0x58) == 0) ||
      (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0),
      uVar7 = _UNK_033f8978, lVar5 == 0)) || (lVar5 = *(long *)(lVar5 + 0xf0), lVar5 == 0))
  goto LAB_01575b64;
  uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
  if ((int)*(uint *)(lVar5 + 0x18) < 1) {
    uStack_1b4 = 0;
  }
  else {
    lVar13 = 0;
    bVar12 = false;
    uStack_1b4 = 0;
    uVar11 = 0;
    do {
      if ((uVar9 & 0xffffffff) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar1 = *(long *)(lVar5 + 0x10) + lVar13;
      uStack_108 = *(undefined8 *)(lVar1 + 0x28);
      uStack_110 = *(ulong *)(lVar1 + 0x20);
      uStack_f8 = *(undefined8 *)(lVar1 + 0x38);
      uStack_100 = *(undefined8 *)(lVar1 + 0x30);
      uStack_f0 = *(undefined8 *)(lVar1 + 0x40);
      cVar2 = *(char *)(lVar1 + 0x48);
      uStack_87 = *(undefined4 *)(lVar1 + 0x49);
      uStack_e8._0_3_ = (undefined3)uStack_87;
      uStack_e8._3_1_ = (undefined1)*(undefined4 *)(lVar1 + 0x4c);
      uStack_e4 = (undefined3)((uint)*(undefined4 *)(lVar1 + 0x4c) >> 8);
      uStack_98 = (undefined4)uStack_f8;
      uStack_94 = (undefined4)((ulong)uStack_f8 >> 0x20);
      iStack_a0 = (int)uStack_100;
      uStack_9c = (undefined4)((ulong)uStack_100 >> 0x20);
      uStack_118._3_1_ = (undefined1)((uint)uStack_87 >> 0x18);
      uStack_83 = uStack_e4;
      uVar3 = CONCAT31(uStack_e4,uStack_118._3_1_);
      uStack_118 = uStack_87;
      uStack_114 = uStack_e4;
      uStack_e0 = uStack_110;
      uStack_d8 = uStack_108;
      uStack_d0 = uStack_100;
      uStack_c8 = uStack_f8;
      uStack_c0 = uStack_f0;
      uStack_b0 = uStack_110;
      uStack_a8 = uStack_108;
      uStack_90 = uStack_f0;
      cStack_88 = cVar2;
      fVar14 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_a8,uVar3,0);
      if ((100.0 <= fVar14) && (cVar2 == '\0')) {
        uStack_148 = uStack_d8;
        uStack_150 = uStack_e0;
        uStack_138 = uStack_c8;
        uStack_140 = uStack_d0;
        uStack_130 = uStack_c0;
        uStack_127 = uStack_e8;
        uStack_123 = uStack_e4;
        uStack_128 = 0;
        iVar4 = Atlas_Stats_DailyChallengeManager__GetChallengeXPReward(param_1,&uStack_150);
        uStack_a8 = uStack_d8;
        uStack_b0 = uStack_e0;
        uStack_98 = (undefined4)uStack_c8;
        uStack_94 = (undefined4)((ulong)uStack_c8 >> 0x20);
        iStack_a0 = (int)uStack_d0;
        uStack_9c = (undefined4)((ulong)uStack_d0 >> 0x20);
        uStack_90 = uStack_c0;
        cStack_88 = '\x01';
        uStack_87 = uStack_e8;
        uStack_83 = uStack_e4;
        /*System.Collections.Generic.List<SaveData.DailyChallenge>$$set_Item*/ func_0x02586e34(lVar5,uVar11,&uStack_b0,uRam0000000003d3d8b0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_01575b64;
        Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x58),0);
        uStack_178 = uStack_d8;
        uStack_180 = uStack_e0;
        uStack_168 = uStack_c8;
        uStack_170 = uStack_d0;
        uStack_160 = uStack_c0;
        uStack_157 = uStack_e8;
        uStack_153 = uStack_e4;
        uStack_158 = 1;
        uVar6 = Atlas_Stats_DailyChallengeManager__GetLocalisedFormattedStringForChallenge
                          (param_1,&uStack_180);
        if (param_2 == 0) goto LAB_01575b64;
        uStack_1b4 = iVar4 + uStack_1b4;
        uStack_b0 = uVar11 & 0xffffffff;
        uStack_9c = (undefined4)uVar7;
        uStack_98 = (undefined4)((ulong)uVar7 >> 0x20);
        uStack_94 = 0;
        uStack_90 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
        uStack_a8 = uVar6;
        iStack_a0 = iVar4;
        /*System.Collections.Generic.List<UnlockManager.XPAward.Award>$$Add*/ func_0x025dc574(param_2,&uStack_b0,uRam0000000003d3dfa8);
        if ((*(long *)(param_1 + 0x88) != 0) &&
           (*(char *)(*(long *)(param_1 + 0x88) + 0x78) != '\0')) {
          uStack_1a8 = uStack_d8;
          uStack_1b0 = uStack_e0;
          uStack_198 = uStack_c8;
          uStack_1a0 = uStack_d0;
          uStack_190 = uStack_c0;
          uStack_187 = uStack_e8;
          uStack_183 = uStack_e4;
          uStack_188 = 1;
          puVar8 = &uStack_1b0;
          goto code_r0x01575b68;
        }
        bVar12 = true;
      }
      uVar11 = uVar11 + 1;
      uVar9 = (ulong)*(int *)(lVar5 + 0x18);
      lVar13 = lVar13 + 0x30;
    } while ((long)uVar11 < (long)uVar9);
    if (!bVar12) {
      return uStack_1b4;
    }
    uVar7 = Atlas_Stats_DailyChallengeManager__GetDailyChallengeDate(param_1);
    if ((*(long *)(param_1 + 0x58) == 0) ||
       (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar5 == 0))
    goto LAB_01575b64;
    uVar6 = *(undefined8 *)(lVar5 + 0x100);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*System.DateTime$$op_Inequality*/ func_0x02a8faf4(uVar6,uVar7,0);
    if (iVar4 != 0) {
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar5 == 0))
      goto LAB_01575b64;
      *(short *)(lVar5 + 0x108) = *(short *)(lVar5 + 0x108) + 1;
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar5 == 0))
      goto LAB_01575b64;
      *(undefined8 *)(lVar5 + 0x100) = uVar7;
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_01575b64;
      Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x58),0);
    }
    lVar5 = *(long *)(param_1 + 0x78);
    uVar7 = Atlas_Stats_DailyChallengeManager__AreAllChallengesComplete(param_1);
    if (((*(long *)(param_1 + 0x58) == 0) ||
        (lVar13 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar13 == 0))
       || (lVar5 == 0)) {
LAB_01575b64:
      auVar15 = func_0x00f78af4();
      puVar8 = auVar15._8_8_;
      param_1 = auVar15._0_8_;
code_r0x01575b68:
      if ((bRam0000000003eb506a & 1) == 0) {
        func_0x00f78a20(0x3d3d8a0);
        func_0x00f78a20(0x3d3d8a8);
        bRam0000000003eb506a = 1;
      }
      lVar5 = *(long *)(param_1 + 0x58);
      if (lVar5 != 0) {
        uVar10 = 0;
        lVar13 = 0x20;
        while ((lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5,0), lVar5 != 0 &&
               (*(long *)(lVar5 + 0xf0) != 0))) {
          if (*(int *)(*(long *)(lVar5 + 0xf0) + 0x18) <= (int)uVar10) {
            return 0;
          }
          if (((*(long *)(param_1 + 0x58) == 0) ||
              (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar5 == 0
              )) || (lVar5 = *(long *)(lVar5 + 0xf0), lVar5 == 0)) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar13);
          if (lVar5 == 0) break;
          uVar9 = /*System.String$$Equals*/ func_0x029bab9c(lVar5,*puVar8,0);
          if ((uVar9 & 1) != 0) {
            return uVar10;
          }
          uVar10 = uVar10 + 1;
          lVar5 = *(long *)(param_1 + 0x58);
          lVar13 = lVar13 + 0x30;
          if (lVar5 == 0) break;
        }
      }
      func_0x00f78af4();
      return 0;
    }
    Atlas_Stats_AchievementManager__CheckDailyChallengeBespokeAchievements
              (lVar5,uVar7,*(undefined2 *)(lVar13 + 0x108),0);
  }
  return uStack_1b4;
}



// ============================================================
// RVA: 0x1575b68 | Atlas.Stats.DailyChallengeManager.GetChallengeIndex
// ============================================================

uint Atlas_Stats_DailyChallengeManager__GetChallengeIndex(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb506a & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb506a = 1;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar3 = 0;
    lVar4 = 0x20;
    while ((lVar1 = Atlas_Save_SaveManager__get_SaveData(lVar1,0), lVar1 != 0 &&
           (*(long *)(lVar1 + 0xf0) != 0))) {
      if (*(int *)(*(long *)(lVar1 + 0xf0) + 0x18) <= (int)uVar3) {
        return 0;
      }
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (lVar1 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar1 == 0))
         || (lVar1 = *(long *)(lVar1 + 0xf0), lVar1 == 0)) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0x10) + lVar4);
      if (lVar1 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029bab9c(lVar1,*param_2,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar1 = *(long *)(param_1 + 0x58);
      lVar4 = lVar4 + 0x30;
      if (lVar1 == 0) break;
    }
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x1575c5c | Atlas.Stats.DailyChallengeManager.CountCompletedChallenges
// ============================================================

int Atlas_Stats_DailyChallengeManager__CountCompletedChallenges(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar2 = 0x3eb5000;
  if ((bRam0000000003eb506b & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb506b = 1;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar3 = 0;
    iVar2 = 0;
    lVar4 = 0x48;
    while ((lVar1 = Atlas_Save_SaveManager__get_SaveData(lVar1,0), lVar1 != 0 &&
           (*(long *)(lVar1 + 0xf0) != 0))) {
      if ((long)*(int *)(*(long *)(lVar1 + 0xf0) + 0x18) <= (long)uVar3) {
        return iVar2;
      }
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (lVar1 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar1 == 0))
         || (lVar1 = *(long *)(lVar1 + 0xf0), lVar1 == 0)) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(char *)(*(long *)(lVar1 + 0x10) + lVar4) != '\0') {
        iVar2 = iVar2 + 1;
      }
      uVar3 = uVar3 + 1;
      lVar1 = *(long *)(param_1 + 0x58);
      lVar4 = lVar4 + 0x30;
      if (lVar1 == 0) break;
    }
  }
  func_0x00f78af4();
  return iVar2;
}



// ============================================================
// RVA: 0x1575d48 | Atlas.Stats.DailyChallengeManager.AnyChallengesCompletedThisSession
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__AnyChallengesCompletedThisSession(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *unaff_x21;
  undefined8 uVar12;
  float fVar13;
  undefined8 uStack_1b8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar10 = 0;
  if ((bRam0000000003eb5062 & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb5062 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0xf0) != 0)) {
    /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_80,*(long *)(lVar4 + 0xf0),uRam0000000003d3d898);
    uVar10 = 0;
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_80,uRam0000000003d33710), (uVar5 & 1) != 0) {
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
      uStack_88 = uStack_48;
      uStack_90 = uStack_50;
      uVar2 = Atlas_Stats_DailyChallengeManager__WasCompeltedThisSession(param_1,&uStack_b0);
      uVar10 = uVar2 | uVar10;
    }
    /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_80,uRam0000000003d33708);
code_r0x01575e40:
    return (ulong)(uVar10 & 1);
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar4 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_80,*unaff_x21);
    if (lVar4 == 0) goto code_r0x01575e40;
    func_0x00f78ac0(lVar4,0);
  }
  lVar4 = __Unwind_Resume();
  if ((bRam0000000003eb5063 & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb5063 = 1;
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (((*(long *)(lVar4 + 0x58) == 0) ||
      (lVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x58),0), lVar7 == 0)) ||
     (*(long *)(lVar7 + 0xf0) == 0)) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar4 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_160,*unaff_x21);
      if (lVar4 == 0) {
        return 1;
      }
    }
    else {
      __Unwind_Resume();
    }
    lVar4 = func_0x00f78ac0(lVar4,0);
    if ((bRam0000000003eb5064 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb5064 = 1;
    }
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = **(ulong **)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xb8);
    uVar5 = Atlas_Stats_DailyChallengeManager__ShouldCreateNewDailyChallenges(lVar4);
    if ((uVar5 & 1) == 0) {
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_1b8 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
      uVar8 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_1b8,0);
      uVar12 = *(undefined8 *)(lVar4 + 0x40);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*System.TimeSpan$$op_GreaterThan*/ func_0x029f1234(uVar8,uVar12,0);
      if (iVar3 == 0) {
        uVar8 = *(undefined8 *)(lVar4 + 0x40);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_1b8 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
        uVar12 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_1b8,0);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      else {
        uVar8 = *(undefined8 *)(lVar4 + 0x48);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_1b8 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
        uVar12 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_1b8,0);
        uVar9 = *(undefined8 *)(lVar4 + 0x40);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar12,uVar9,0);
      }
      uVar11 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar8,uVar12,0);
    }
    return uVar11;
  }
  /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_160,*(long *)(lVar7 + 0xf0),uRam0000000003d3d898);
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_160,uRam0000000003d33710);
    if ((uVar5 & 1) == 0) {
      iVar3 = 0x43;
      goto code_r0x01575fa8;
    }
    uStack_108 = uStack_138;
    uStack_110 = uStack_140;
    uStack_f8 = uStack_128;
    uVar8 = uStack_f8;
    uStack_100 = uStack_130;
    uStack_118 = uStack_148;
    uStack_120 = uStack_150;
    uStack_f8._4_4_ = (undefined4)((ulong)uStack_128 >> 0x20);
    uVar1 = uStack_f8._4_4_;
    uStack_f8 = uVar8;
    fVar13 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_118,uVar1,0);
  } while (fVar13 < 100.0);
  iVar3 = 0x45;
code_r0x01575fa8:
  /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_160,uRam0000000003d33708);
  if (iVar3 != 0x45) {
    uVar5 = 1;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1575e98 | Atlas.Stats.DailyChallengeManager.AnyCurrentChallengesCompleted
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__AnyCurrentChallengesCompleted(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *unaff_x21;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_108;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5063 & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb5063 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (((*(long *)(param_1 + 0x58) == 0) ||
      (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar3 == 0)) ||
     (*(long *)(lVar3 + 0xf0) == 0)) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      param_1 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_b0,*unaff_x21);
      if (param_1 == 0) {
        return 1;
      }
    }
    else {
      __Unwind_Resume();
    }
    lVar3 = func_0x00f78ac0(param_1,0);
    if ((bRam0000000003eb5064 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb5064 = 1;
    }
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = **(ulong **)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xb8);
    uVar4 = Atlas_Stats_DailyChallengeManager__ShouldCreateNewDailyChallenges(lVar3);
    if ((uVar4 & 1) == 0) {
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_108 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
      uVar6 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_108,0);
      uVar9 = *(undefined8 *)(lVar3 + 0x40);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*System.TimeSpan$$op_GreaterThan*/ func_0x029f1234(uVar6,uVar9,0);
      if (iVar2 == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x40);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_108 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
        uVar9 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_108,0);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      else {
        uVar6 = *(undefined8 *)(lVar3 + 0x48);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_108 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
        uVar9 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_108,0);
        uVar7 = *(undefined8 *)(lVar3 + 0x40);
        if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar9,uVar7,0);
      }
      uVar8 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar6,uVar9,0);
    }
    return uVar8;
  }
  /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_b0,*(long *)(lVar3 + 0xf0),uRam0000000003d3d898);
  do {
    uVar4 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_b0,uRam0000000003d33710);
    if ((uVar4 & 1) == 0) {
      iVar2 = 0x43;
      goto LAB_01575fa8;
    }
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uVar6 = uStack_48;
    uStack_50 = uStack_80;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_48._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
    uVar1 = uStack_48._4_4_;
    uStack_48 = uVar6;
    fVar10 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_68,uVar1,0);
  } while (fVar10 < 100.0);
  iVar2 = 0x45;
LAB_01575fa8:
  /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_b0,uRam0000000003d33708);
  if (iVar2 != 0x45) {
    uVar4 = 1;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1576034 | Atlas.Stats.DailyChallengeManager.GetTimeLeftUntilRefresh
// ============================================================

undefined8 Atlas_Stats_DailyChallengeManager__GetTimeLeftUntilRefresh(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5064 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb5064 = 1;
  }
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = **(undefined8 **)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xb8);
  uVar2 = Atlas_Stats_DailyChallengeManager__ShouldCreateNewDailyChallenges(param_1);
  if ((uVar2 & 1) == 0) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_48 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    uVar4 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_48,0);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*System.TimeSpan$$op_GreaterThan*/ func_0x029f1234(uVar4,uVar5,0);
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_48 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
      uVar5 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_48,0);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_48 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
      uVar5 = /*System.DateTime$$get_TimeOfDay*/ func_0x02a8e590(&uStack_48,0);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar5,uVar3,0);
    }
    uVar4 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar4,uVar5,0);
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1576210 | Atlas.Stats.DailyChallengeManager.GetYesterdaysDailyChallengeDate
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__GetYesterdaysDailyChallengeDate(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5068 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5068 = 1;
  }
  uVar1 = Atlas_Stats_DailyChallengeManager__GetDailyChallengeDate(param_1);
  lVar6 = *(long *)(param_1 + 0x48);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = uVar1 & 0x3fffffffffffffff;
  if ((lVar6 <= (long)uVar5) && ((long)(uVar5 + 0xd435d78a0bc8c001) <= lVar6)) {
    return uVar5 - lVar6 | uVar1 & 0xc000000000000000;
  }
  uVar2 = func_0x00f78a24(0x3d73ca0,lVar6,0);
  uVar2 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar2,0);
  func_0x00f78a24(0x3d1fcf8);
  uVar3 = func_0x00f78aec();
  uVar4 = func_0x00f78a24(0x3d7bd90);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar3,uVar4,uVar2,0);
  uVar2 = func_0x00f78a24(0x3d54750);
  auVar7 = func_0x00f78ac0(uVar3,uVar2);
  return (auVar7._0_8_ & 0x3fffffffffffffff) - (auVar7._8_8_ & 0x3fffffffffffffff);
}



// ============================================================
// RVA: 0x1576290 | Atlas.Stats.DailyChallengeManager.IsYesterdaysDailyChallengeDate
// ============================================================

void Atlas_Stats_DailyChallengeManager__IsYesterdaysDailyChallengeDate
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  uVar1 = Atlas_Stats_DailyChallengeManager__GetYesterdaysDailyChallengeDate();
  /*System.DateTime$$Equals*/ func_0x02a8deb4(&uStack_18,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x15762c0 | Atlas.Stats.DailyChallengeManager.MergeDailyChallenges
// ============================================================

void Atlas_Stats_DailyChallengeManager__MergeDailyChallenges(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_188;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int aiStack_f0 [4];
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb5069 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d888);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d890);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3d898);
    func_0x00f78a20(0x3d3bfd0);
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    func_0x00f78a20(0x3d3d8b0);
    bRam0000000003eb5069 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  aiStack_f0[3] = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    uVar8 = *(undefined8 *)(param_2 + 0xe8);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*System.DateTime$$op_LessThan*/ func_0x02a8fb04(uVar7,uVar8,0);
    if (iVar5 == 0) {
      uStack_e0 = *(undefined8 *)(param_1 + 0xe8);
      iVar5 = /*System.DateTime$$Equals*/ func_0x02a8deb4(&uStack_e0,*(undefined8 *)(param_2 + 0xe8),0);
      if (iVar5 == 0) {
code_r0x01576728:
        uVar7 = *(undefined8 *)(param_2 + 0x100);
        uVar8 = *(undefined8 *)(param_1 + 0x100);
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*System.DateTime$$op_GreaterThan*/ func_0x02a8fb2c(uVar7,uVar8,0);
        if (iVar5 != 0) {
          *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
        }
        if (*(ushort *)(param_1 + 0x108) < *(ushort *)(param_2 + 0x108)) {
          *(ushort *)(param_1 + 0x108) = *(ushort *)(param_2 + 0x108);
        }
        return;
      }
      if (*(long *)(param_1 + 0xe0) != 0) {
        iVar5 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(param_1 + 0xe0),*(undefined8 *)(param_2 + 0xe0),5,0);
        if ((iVar5 == 0) || (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)))
        goto code_r0x01576728;
        lVar9 = *(long *)(param_1 + 0xf0);
        if (lVar9 != 0) {
          uVar6 = 0;
          iVar5 = 0;
          lVar11 = 0x20;
          do {
            if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar6) {
              if (iVar5 < 2) goto code_r0x01576728;
              if (*(long *)(param_1 + 0xf8) != 0) {
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0xf8),uRam0000000003d3bfb8);
                if (*(long *)(param_2 + 0xf8) != 0) {
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(param_2 + 0xf8),uRam0000000003d3bfd0);
                  goto code_r0x015767e8;
                }
              }
              break;
            }
            if (*(long *)(param_2 + 0xf0) == 0) break;
            if ((long)uVar6 < (long)*(int *)(*(long *)(param_2 + 0xf0) + 0x18)) {
              if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x10) + lVar11);
              uStack_158 = puVar1[1];
              uStack_160 = *puVar1;
              uStack_148 = puVar1[3];
              uStack_150 = puVar1[2];
              uStack_140 = puVar1[4];
              uStack_138._4_4_ = (undefined4)((ulong)puVar1[5] >> 0x20);
              uVar2 = uStack_138._4_4_;
              uStack_138 = puVar1[5];
              fVar12 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_158,uVar2,0);
              lVar9 = *(long *)(param_2 + 0xf0);
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar9 = *(long *)(lVar9 + 0x10) + lVar11;
              uStack_188 = *(undefined8 *)(lVar9 + 8);
              uStack_178 = *(undefined8 *)(lVar9 + 0x18);
              uStack_180 = *(undefined8 *)(lVar9 + 0x10);
              uStack_170 = *(undefined8 *)(lVar9 + 0x20);
              uStack_168._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
              uVar2 = uStack_168._4_4_;
              uStack_168 = *(undefined8 *)(lVar9 + 0x28);
              fVar13 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8(&uStack_188,uVar2,0);
              if (fVar12 < fVar13) {
                lVar9 = *(long *)(param_2 + 0xf0);
                if (lVar9 == 0) break;
                lVar10 = *(long *)(param_1 + 0xf0);
                if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                if (lVar10 == 0) break;
                puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x10) + lVar11);
                uStack_128 = puVar1[1];
                uStack_130 = *puVar1;
                uStack_118 = puVar1[3];
                uStack_120 = puVar1[2];
                uStack_108 = puVar1[5];
                uStack_110 = puVar1[4];
                /*System.Collections.Generic.List<SaveData.DailyChallenge>$$set_Item*/ func_0x02586e34(lVar10,uVar6,&uStack_130,uRam0000000003d3d8b0);
                iVar5 = iVar5 + 1;
              }
            }
            uVar6 = uVar6 + 1;
            lVar9 = *(long *)(param_1 + 0xf0);
            lVar11 = lVar11 + 0x30;
          } while (lVar9 != 0);
        }
      }
    }
    else if (*(long *)(param_1 + 0xf0) != 0) {
      /*System.Collections.Generic.List<SaveData.DailyChallenge>$$Clear*/ func_0x025874f8(*(long *)(param_1 + 0xf0),uRam0000000003d3d890);
      if (*(long *)(param_2 + 0xf0) != 0) {
        /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_130,*(long *)(param_2 + 0xf0),uRam0000000003d3d898);
        uStack_b8 = uStack_128;
        uStack_c0 = uStack_130;
        uStack_a8 = uStack_118;
        uStack_b0 = uStack_120;
        uStack_98 = uStack_108;
        uStack_a0 = uStack_110;
        uStack_88 = uStack_f8;
        uStack_90 = uStack_100;
        while (uVar6 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_c0,uRam0000000003d33710), (uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0xf0) == 0) {
            func_0x00f78af4();
            goto code_r0x0157684c;
          }
          uStack_128 = uStack_a8;
          uStack_130 = uStack_b0;
          uStack_118 = uStack_98;
          uStack_120 = uStack_a0;
          uStack_108 = uStack_88;
          uStack_110 = uStack_90;
          /*System.Collections.Generic.List<SaveData.DailyChallenge>$$Add*/ func_0x025871c0(*(long *)(param_1 + 0xf0),&uStack_130,uRam0000000003d3d888);
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_c0,uRam0000000003d33708);
        aiStack_f0[3] = 0;
        if (*(long *)(param_1 + 0xf8) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0xf8),uRam0000000003d3bfb8);
          if (*(long *)(param_2 + 0xf8) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(param_2 + 0xf8),uRam0000000003d3bfd0);
            while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d8,uRam0000000003d32f88), iVar5 = aiStack_f0[3],
                  (uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0xf8) == 0) {
                func_0x00f78af4();
                goto code_r0x0157684c;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xf8),uStack_c8,uRam0000000003d3bfa0);
            }
            bVar4 = aiStack_f0[3] != -1;
            aiStack_f0[3] = aiStack_f0[3] + 1;
            aiStack_f0[0] = 0xa2;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,uRam0000000003d32f80);
            if ((bVar4) && (aiStack_f0[iVar5] == 0xa2)) {
              aiStack_f0[3] = iVar5;
            }
            *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
            *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
            *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
            goto code_r0x01576728;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x01576848:
  func_0x00f78af4();
code_r0x0157684c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1576850);
  (*pcVar3)();
code_r0x015767e8:
  uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d8,uRam0000000003d32f88);
  if ((uVar6 & 1) == 0) goto code_r0x01576810;
  if (*(long *)(param_1 + 0xf8) == 0) goto code_r0x01576848;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xf8),uStack_c8,uRam0000000003d3bfa0);
  goto code_r0x015767e8;
code_r0x01576810:
  aiStack_f0[0] = 0x1d0;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,uRam0000000003d32f80);
  aiStack_f0[3] = 0;
  goto code_r0x01576728;
}



// ============================================================
// RVA: 0x1576904 | Atlas.Stats.DailyChallengeManager.CreateAndSetDailyChallenge
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1576abc | Atlas.Stats.DailyChallengeManager.GetDifficultySpecification
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1576b40 | Atlas.Stats.DailyChallengeManager.TrySelectChallenge
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1576d60 | Atlas.Stats.DailyChallengeManager.GetConditionTypeLocKeyPair
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1576ee8 | Atlas.Stats.DailyChallengeManager.GetComparisonValue
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1576f58 | Atlas.Stats.DailyChallengeManager.GetCondition
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1577044 | Atlas.Stats.DailyChallengeManager.DoesCurrentContextPassConditions
// ============================================================

/* WARNING: Possible PIC construction at 0x01577104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01577108) */

undefined8
Atlas_Stats_DailyChallengeManager__DoesCurrentContextPassConditions
          (long *param_1,long param_2,long *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb506f & 1) == 0) {
    func_0x00f78a20(0x3d57518);
    bRam0000000003eb506f = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 == 3) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    param_3 = (long *)param_1[0x14];
    goto code_r0x01577150;
  }
  if (iVar2 == 2) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    param_3 = (long *)param_1[0x13];
    goto code_r0x01577150;
  }
  if (iVar2 != 1) {
    return 1;
  }
  unaff_x20 = param_1;
  unaff_x19 = param_2;
  unaff_x21 = 0x3eb5000;
  unaff_x29 = puVar1;
  if ((param_1[0xd] == 0) || (lVar3 = *(long *)(param_1[0xd] + 0x10), lVar3 == 0)) {
LAB_0157714c:
    unaff_x30 = &Atlas_Stats_DailyChallengeManager__IsConditionValid;
    func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    uVar4 = extraout_x1;
  }
  else {
    unaff_x20 = (long *)param_1[0x12];
    param_3 = &lStack_38;
    iVar2 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar3,unaff_x20,param_3,uRam0000000003d57518);
    if (iVar2 != 0) {
      if (lStack_38 == 0) goto LAB_0157714c;
      uStack_40 = *(undefined8 *)(lStack_38 + 0x50);
      iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_40,0);
      if (iVar2 != 0) {
        if (lStack_38 == 0) goto LAB_0157714c;
        unaff_x20 = *(long **)(lStack_38 + 0x50);
      }
    }
    param_3 = unaff_x20;
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    unaff_x30 = (undefined *)0x1577108;
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    unaff_x20 = param_3;
  }
code_r0x01577150:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar4;
  if ((bRam0000000003eb5070 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb5070 = 1;
  }
  *(long **)((long)register0x00000008 + -0x40) = param_3;
  uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ uRam0000000003d21270,(undefined1 *)((long)register0x00000008 + -0x40));
  uVar4 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384((undefined1 *)((long)register0x00000008 + -0x38),uVar4,0);
  return uVar4;
}



// ============================================================
// RVA: 0x1577150 | Atlas.Stats.DailyChallengeManager.IsConditionValid
// ============================================================

void Atlas_Stats_DailyChallengeManager__IsConditionValid
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if ((bRam0000000003eb5070 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb5070 = 1;
  }
  uStack_40 = param_3;
  uVar1 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ uRam0000000003d21270,&uStack_40);
  /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_38,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x15771c8 | Atlas.Stats.DailyChallengeManager.GetMapCondition
// ============================================================

undefined8
Atlas_Stats_DailyChallengeManager__GetMapCondition
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined1 auVar13 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5077 & 1) == 0) {
    func_0x00f78a20(0x3d3b110);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    bRam0000000003eb5077 = 1;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0xe0),uRam0000000003d3b110);
    param_3 = *(undefined8 *)(param_1 + 0xe0);
    /*Atlas.Stats.DailyChallengeManager$$GetMapConditionList*/ func_0x0157795c(param_1,param_2,param_3);
    lVar10 = *(long *)(param_1 + 0xe0);
    if (lVar10 != 0) {
      param_3 = 0;
      uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar10 + 0x18),0);
      if (*(uint *)(lVar10 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar10 != 0) {
        return *(undefined8 *)(lVar10 + 0x18);
      }
    }
  }
  lVar10 = func_0x00f78af4();
  puStack_38 = &Atlas_Stats_DailyChallengeManager__GetCharacterLoadoutCondition;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5072 & 1) == 0) {
    func_0x00f78a20(0x3d54050);
    func_0x00f78a20(0x3d39f98);
    func_0x00f78a20(0x3d39fa8);
    func_0x00f78a20(0x3d39fb0);
    func_0x00f78a20(0x3d39fb8);
    bRam0000000003eb5072 = 1;
  }
  uStack_78 = 0;
  uVar11 = 0x3eb5000;
  uVar5 = 0x3eb5000;
  if (*(long *)(lVar10 + 0xd8) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar10 + 0xd8),uRam0000000003d39f98);
    param_3 = uRam0000000003d54050;
    /*Atlas.Stats.DailyChallengeManager$$GetLoadoutConditionList<object>*/ func_0x0183d998(lVar10,*(undefined8 *)(lVar10 + 0xd8),uRam0000000003d54050);
    unaff_x22 = *(long *)(lVar10 + 0xd8);
    uVar11 = 0x3d54000;
    if (unaff_x22 != 0) {
      uVar11 = 0;
      uVar12 = 0x3d39fa8;
      do {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        uVar9 = (uint)uVar11;
        uVar5 = uVar12;
        if ((int)uVar2 <= (int)uVar9) {
          param_3 = 0;
          uVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar2,0);
          lVar7 = *(long *)(lVar10 + 0xd8);
          if (lVar7 == 0) break;
          uVar2 = (uint)uVar4;
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            lVar1 = *(long *)(lVar7 + 0x10) + (long)(int)uVar2 * 8;
            lVar8 = lVar7;
          }
          else {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar8 = *(long *)(lVar10 + 0xd8);
            uVar11 = uVar4;
            if (lVar8 == 0) break;
            lVar1 = *(long *)(lVar7 + 0x10) + (long)(int)uVar2 * 8;
          }
          uVar11 = 0;
          lVar7 = *(long *)(lVar1 + 0x20);
          goto code_r0x01577414;
        }
        if (uVar2 <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(*(long *)(unaff_x22 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
        uVar5 = 0x3d39fa8;
        if (lVar7 == 0) break;
        uStack_78 = *(undefined8 *)(lVar7 + 0x70);
        iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_78,0);
        if (iVar3 != 0) {
          if (*(long *)(lVar10 + 0xd8) == 0) break;
          param_3 = uRam0000000003d39fa8;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar10 + 0xd8),uVar11,uRam0000000003d39fa8);
          uVar11 = (ulong)(uVar9 - 1);
        }
        uVar11 = (ulong)((int)uVar11 + 1);
        unaff_x22 = *(long *)(lVar10 + 0xd8);
        uVar5 = uVar12;
      } while (unaff_x22 != 0);
    }
  }
code_r0x015774e0:
  auVar13 = func_0x00f78af4();
  puVar6 = auVar13._8_8_;
  puStack_88 = &Atlas_Stats_DailyChallengeManager__IsChallengeValid;
  lStack_b0 = unaff_x22;
  uStack_a8 = uVar5;
  uStack_a0 = uVar11;
  lStack_98 = lVar10;
  ppuStack_90 = &puStack_40;
  uVar5 = /*Atlas.Stats.DailyChallengeManager$$HasDifficulty*/ func_0x01577548(auVar13._0_8_,param_3,puVar6[4]);
  if ((int)uVar5 != 0) {
    uStack_d8 = puVar6[1];
    uStack_e0 = *puVar6;
    uStack_c8 = puVar6[3];
    uStack_d0 = puVar6[2];
    uStack_c0 = puVar6[4];
    uVar5 = /*Atlas.Stats.DailyChallengeManager$$CanGetCondition*/ func_0x015775b8(uVar5,param_3,param_4,&uStack_e0);
  }
  return uVar5;
code_r0x01577414:
  uVar2 = *(uint *)(lVar8 + 0x18);
  uVar9 = (uint)uVar11;
  unaff_x22 = lVar7;
  if ((int)uVar2 <= (int)uVar9) {
    uVar4 = uVar11;
    if (0 < (int)uVar2) {
      param_3 = 0;
      uVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar2,0);
      lVar10 = *(long *)(lVar10 + 0xd8);
      if (lVar10 == 0) goto code_r0x015774e0;
      if (*(uint *)(lVar10 + 0x18) <= (uint)uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)(uint)uVar4 * 8 + 0x20);
    }
    uVar11 = uVar4;
    unaff_x22 = 0;
    if (lVar7 != 0) {
      return *(undefined8 *)(lVar7 + 0x18);
    }
    goto code_r0x015774e0;
  }
  if (uVar2 <= uVar9) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
  if ((lVar8 == 0) || (*(long *)(lVar10 + 0x60) == 0)) goto code_r0x015774e0;
  param_3 = 0;
  iVar3 = /*Atlas.Stats.UnlockManager$$IsCharacterMaxRank*/ func_0x01523164(*(long *)(lVar10 + 0x60),*(undefined8 *)(lVar8 + 0x18),0);
  if (iVar3 != 0) {
    if (*(long *)(lVar10 + 0xd8) == 0) goto code_r0x015774e0;
    param_3 = uRam0000000003d39fa8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar10 + 0xd8),uVar11,uRam0000000003d39fa8);
    uVar11 = (ulong)(uVar9 - 1);
  }
  uVar11 = (ulong)((int)uVar11 + 1);
  lVar8 = *(long *)(lVar10 + 0xd8);
  if (lVar8 == 0) goto code_r0x015774e0;
  goto code_r0x01577414;
}



// ============================================================
// RVA: 0x1577298 | Atlas.Stats.DailyChallengeManager.GetCharacterLoadoutCondition
// ============================================================

undefined8
Atlas_Stats_DailyChallengeManager__GetCharacterLoadoutCondition
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 unaff_x21;
  undefined8 uVar10;
  long unaff_x22;
  undefined1 auVar11 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5072 & 1) == 0) {
    func_0x00f78a20(0x3d54050);
    func_0x00f78a20(0x3d39f98);
    func_0x00f78a20(0x3d39fa8);
    func_0x00f78a20(0x3d39fb0);
    func_0x00f78a20(0x3d39fb8);
    bRam0000000003eb5072 = 1;
  }
  uStack_48 = 0;
  uVar9 = 0x3eb5000;
  if (*(long *)(param_1 + 0xd8) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0xd8),uRam0000000003d39f98);
    param_3 = uRam0000000003d54050;
    /*Atlas.Stats.DailyChallengeManager$$GetLoadoutConditionList<object>*/ func_0x0183d998(param_1,*(undefined8 *)(param_1 + 0xd8),uRam0000000003d54050);
    unaff_x22 = *(long *)(param_1 + 0xd8);
    uVar9 = 0x3d54000;
    if (unaff_x22 != 0) {
      uVar9 = 0;
      uVar10 = 0x3d39fa8;
      do {
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        uVar8 = (uint)uVar9;
        unaff_x21 = uVar10;
        if ((int)uVar3 <= (int)uVar8) {
          param_3 = 0;
          uVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar3,0);
          lVar6 = *(long *)(param_1 + 0xd8);
          if (lVar6 == 0) break;
          uVar3 = (uint)uVar4;
          if (uVar3 < *(uint *)(lVar6 + 0x18)) {
            lVar1 = *(long *)(lVar6 + 0x10) + (long)(int)uVar3 * 8;
            lVar7 = lVar6;
          }
          else {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar7 = *(long *)(param_1 + 0xd8);
            uVar9 = uVar4;
            if (lVar7 == 0) break;
            lVar1 = *(long *)(lVar6 + 0x10) + (long)(int)uVar3 * 8;
          }
          uVar9 = 0;
          lVar6 = *(long *)(lVar1 + 0x20);
          goto code_r0x01577414;
        }
        if (uVar3 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = *(long *)(*(long *)(unaff_x22 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
        unaff_x21 = 0x3d39fa8;
        if (lVar6 == 0) break;
        uStack_48 = *(undefined8 *)(lVar6 + 0x70);
        iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_48,0);
        if (iVar2 != 0) {
          if (*(long *)(param_1 + 0xd8) == 0) break;
          param_3 = uRam0000000003d39fa8;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(param_1 + 0xd8),uVar9,uRam0000000003d39fa8);
          uVar9 = (ulong)(uVar8 - 1);
        }
        uVar9 = (ulong)((int)uVar9 + 1);
        unaff_x22 = *(long *)(param_1 + 0xd8);
        unaff_x21 = uVar10;
      } while (unaff_x22 != 0);
    }
  }
LAB_015774e0:
  auVar11 = func_0x00f78af4();
  puVar5 = auVar11._8_8_;
  puStack_58 = &Atlas_Stats_DailyChallengeManager__IsChallengeValid;
  lStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  uStack_70 = uVar9;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  uVar10 = /*Atlas.Stats.DailyChallengeManager$$HasDifficulty*/ func_0x01577548(auVar11._0_8_,param_3,puVar5[4]);
  if ((int)uVar10 != 0) {
    uStack_a8 = puVar5[1];
    uStack_b0 = *puVar5;
    uStack_98 = puVar5[3];
    uStack_a0 = puVar5[2];
    uStack_90 = puVar5[4];
    uVar10 = /*Atlas.Stats.DailyChallengeManager$$CanGetCondition*/ func_0x015775b8(uVar10,param_3,param_4,&uStack_b0);
  }
  return uVar10;
code_r0x01577414:
  uVar3 = *(uint *)(lVar7 + 0x18);
  uVar8 = (uint)uVar9;
  unaff_x22 = lVar6;
  if ((int)uVar3 <= (int)uVar8) {
    uVar4 = uVar9;
    if (0 < (int)uVar3) {
      param_3 = 0;
      uVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar3,0);
      param_1 = *(long *)(param_1 + 0xd8);
      if (param_1 == 0) goto LAB_015774e0;
      if (*(uint *)(param_1 + 0x18) <= (uint)uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)(uint)uVar4 * 8 + 0x20);
    }
    uVar9 = uVar4;
    unaff_x22 = 0;
    if (lVar6 != 0) {
      return *(undefined8 *)(lVar6 + 0x18);
    }
    goto LAB_015774e0;
  }
  if (uVar3 <= uVar8) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
  if ((lVar7 == 0) || (*(long *)(param_1 + 0x60) == 0)) goto LAB_015774e0;
  param_3 = 0;
  iVar2 = /*Atlas.Stats.UnlockManager$$IsCharacterMaxRank*/ func_0x01523164(*(long *)(param_1 + 0x60),*(undefined8 *)(lVar7 + 0x18),0);
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_015774e0;
    param_3 = uRam0000000003d39fa8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(param_1 + 0xd8),uVar9,uRam0000000003d39fa8);
    uVar9 = (ulong)(uVar8 - 1);
  }
  uVar9 = (ulong)((int)uVar9 + 1);
  lVar7 = *(long *)(param_1 + 0xd8);
  if (lVar7 == 0) goto LAB_015774e0;
  goto code_r0x01577414;
}



// ============================================================
// RVA: 0x15774e4 | Atlas.Stats.DailyChallengeManager.IsChallengeValid
// ============================================================

void Atlas_Stats_DailyChallengeManager__IsChallengeValid
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  iVar1 = /*Atlas.Stats.DailyChallengeManager$$HasDifficulty*/ func_0x01577548(param_1,param_3,param_2[4]);
  if (iVar1 != 0) {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    uStack_40 = param_2[4];
    /*Atlas.Stats.DailyChallengeManager$$CanGetCondition*/ func_0x015775b8(iVar1,param_3,param_4,&uStack_60);
  }
  return;
}



// ============================================================
// RVA: 0x1577548 | Atlas.Stats.DailyChallengeManager.HasDifficulty
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__HasDifficulty
                (undefined8 param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + 0x18);
    if (iVar2 < 1) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      do {
        if (iVar2 == iVar5) {
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto LAB_015775b4;
        }
      } while ((*(int *)(param_3 + (long)iVar5 * 8 + 0x20) != param_2) &&
              (iVar5 = iVar5 + 1, iVar2 != iVar5));
    }
    return (ulong)(iVar5 < iVar2);
  }
LAB_015775b4:
  func_0x00f78af4();
  if (param_3 != 0) {
    uVar4 = 0;
    uVar7 = (ulong)*(uint *)(param_3 + 0x18);
    uVar6 = (ulong)(int)*(uint *)(param_3 + 0x18);
    uVar1 = uVar6;
    if ((long)uVar6 < 1) {
      uVar1 = 0;
    }
    if (uVar7 == 1 || 0x100000000 < (long)(uVar7 << 0x20)) {
      uVar4 = 0;
      do {
        if (uVar4 == uVar7) {
code_r0x0157765c:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x01577668;
        }
        lVar8 = *(long *)(param_4 + 0x18);
        if (lVar8 == 0) goto code_r0x01577668;
        iVar2 = *(int *)(lVar8 + 0x18);
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            if (iVar2 == iVar5) goto code_r0x0157765c;
            if (*(int *)(param_3 + uVar4 * 4 + 0x20) == *(int *)(lVar8 + (long)iVar5 * 0x10 + 0x20))
            goto code_r0x015775e4;
            iVar5 = iVar5 + 1;
          } while (iVar2 != iVar5);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
    }
code_r0x015775e4:
    return (ulong)((long)uVar4 < (long)uVar6);
  }
code_r0x01577668:
  lVar8 = func_0x00f78af4();
  return lVar8 + 0x38;
}



// ============================================================
// RVA: 0x15775b8 | Atlas.Stats.DailyChallengeManager.CanGetCondition
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__CanGetCondition
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  
  if (param_3 == 0) {
LAB_01577668:
    lVar7 = func_0x00f78af4();
    return lVar7 + 0x38;
  }
  uVar4 = 0;
  uVar6 = (ulong)*(uint *)(param_3 + 0x18);
  uVar5 = (ulong)(int)*(uint *)(param_3 + 0x18);
  uVar1 = uVar5;
  if ((long)uVar5 < 1) {
    uVar1 = 0;
  }
  if (uVar6 == 1 || 0x100000000 < (long)(uVar6 << 0x20)) {
    uVar4 = 0;
    do {
      if (uVar4 == uVar6) {
code_r0x0157765c:
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        goto LAB_01577668;
      }
      lVar7 = *(long *)(param_4 + 0x18);
      if (lVar7 == 0) goto LAB_01577668;
      iVar2 = *(int *)(lVar7 + 0x18);
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          if (iVar2 == iVar8) goto code_r0x0157765c;
          if (*(int *)(param_3 + uVar4 * 4 + 0x20) == *(int *)(lVar7 + (long)iVar8 * 0x10 + 0x20))
          goto code_r0x015775e4;
          iVar8 = iVar8 + 1;
        } while (iVar2 != iVar8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
code_r0x015775e4:
  return (ulong)((long)uVar4 < (long)uVar5);
}



// ============================================================
// RVA: 0x1577674 | Atlas.Stats.DailyChallengeManager.AlreadySelected
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__AlreadySelected(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5075 & 1) == 0) {
    func_0x00f78a20(0x3d33708);
    func_0x00f78a20(0x3d33710);
    func_0x00f78a20(0x3d33718);
    func_0x00f78a20(0x3d3d898);
    bRam0000000003eb5075 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  if (((param_1[0xb] != 0) &&
      (lVar3 = Atlas_Save_SaveManager__get_SaveData(param_1[0xb],0), lVar3 != 0)) &&
     (*(long *)(lVar3 + 0xf0) != 0)) {
    /*System.Collections.Generic.List<SaveData.DailyChallenge>$$GetEnumerator*/ func_0x02587d8c(&uStack_70,*(long *)(lVar3 + 0xf0),uRam0000000003d3d898);
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$MoveNext*/ func_0x01f83438(&uStack_70,uRam0000000003d33710);
      if ((uVar4 & 1) == 0) {
        iStack_80 = 0x57;
code_r0x0157776c:
        uVar8 = 0;
        goto LAB_01577770;
      }
      if (lStack_60 == 0) {
        iStack_80 = 0x59;
        goto code_r0x0157776c;
      }
      iVar2 = /*System.String$$Equals*/ func_0x029bab9c(lStack_60,param_2,0);
    } while (iVar2 == 0);
    iStack_80 = 0x59;
    uVar8 = 1;
LAB_01577770:
    /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_70,uRam0000000003d33708);
    if (iStack_80 != 0x59) {
      uVar8 = 0;
    }
    return (ulong)uVar8;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SaveData.DailyChallenge>$$Dispose*/ func_0x01f83434(&uStack_70,*param_1);
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar9 = func_0x00f78ac0(param_2,0);
  lVar3 = auVar9._8_8_;
  if ((bRam0000000003eb5076 & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    bRam0000000003eb5076 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar6 = *(long *)(auVar9._0_8_ + 0x58);
  if (((lVar6 == 0) || (lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar6,0), lVar6 == 0)) ||
     (*(long *)(lVar6 + 0xf8) == 0)) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar3 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003eb5000);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    lVar3 = func_0x00f78ac0(lVar3,0);
    return lVar3 + 0x28;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*(long *)(lVar6 + 0xf8),uRam0000000003d3bfd0);
  do {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d32f88);
    if ((uVar4 & 1) == 0) {
      iVar2 = 0x46;
      goto code_r0x015778c8;
    }
    if (lVar3 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x157790c);
      (*pcVar1)();
    }
    uVar7 = /*System.String$$Equals*/ func_0x029bab9c(lVar3,uStack_b8,0);
  } while ((uVar7 & 1) == 0);
  iVar2 = 0x48;
code_r0x015778c8:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d32f80);
  if (iVar2 != 0x48) {
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x15777e8 | Atlas.Stats.DailyChallengeManager.WasPreviousChallenge
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__WasPreviousChallenge(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  int iVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5076 & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    bRam0000000003eb5076 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (((*(long *)(param_1 + 0x58) == 0) ||
      (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x58),0), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0xf8) == 0)) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      param_2 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003eb5000);
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    lVar2 = func_0x00f78ac0(param_2,0);
    return lVar2 + 0x28;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(lVar2 + 0xf8),uRam0000000003d3bfd0);
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32f88);
    if ((uVar3 & 1) == 0) {
      iVar6 = 0x46;
      goto LAB_015778c8;
    }
    if (param_2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x157790c);
      (*pcVar1)();
    }
    uVar4 = /*System.String$$Equals*/ func_0x029bab9c(param_2,uStack_38,0);
  } while ((uVar4 & 1) == 0);
  iVar6 = 0x48;
LAB_015778c8:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32f80);
  if (iVar6 != 0x48) {
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x157795c | Atlas.Stats.DailyChallengeManager.GetMapConditionList
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1577a10 | Atlas.Stats.DailyChallengeManager..ctor
// ============================================================

void Atlas_Stats_DailyChallengeManager___ctor(long param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  /*System.TimeSpan$$.ctor*/ func_0x029f02c8(&uStack_28,1,0,0,0,0);
  *(undefined8 *)(param_1 + 0x48) = uStack_28;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  return;
}



// ============================================================
// RVA: 0x183d8f0 | Atlas.Stats.DailyChallengeManager.GetLoadoutCondition<KartDefinition>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x183d8f0 | Atlas.Stats.DailyChallengeManager.GetLoadoutCondition<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x183d998 | Atlas.Stats.DailyChallengeManager.GetLoadoutConditionList<CharacterDefinition>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x183d998 | Atlas.Stats.DailyChallengeManager.GetLoadoutConditionList<object>
// ============================================================
// [DECOMPILE_FAILED]

