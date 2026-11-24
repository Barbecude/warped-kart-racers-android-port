// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.UnlockManager

// ============================================================
// RVA: 0x1518cf0 | Atlas.Stats.UnlockManager.GetChallengesCompletedBitFieldForEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */

uint Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent
               (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint extraout_w1;
  long lVar5;
  
  if ((bRam0000000003eb4e0f & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e0f = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = func_0x00f78af4();
    return (uint)((extraout_w1 & (uVar2 ^ 0xffffffff)) == 0);
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0);
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar3 != 0) && (lVar5 = *(long *)(lVar3 + 0x58), lVar5 != 0)) {
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar2 = 0;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar5 == 0) break;
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar5,param_2,4,0);
      if ((uVar4 & 1) != 0) {
        return uVar2;
      }
      if (iVar1 - 1U == uVar2) {
        return 0xffffffff;
      }
      lVar5 = *(long *)(lVar3 + 0x58);
      uVar2 = uVar2 + 1;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x1518d78 | Atlas.Stats.UnlockManager.ChallengeCompleted
// ============================================================

bool Atlas_Stats_UnlockManager__ChallengeCompleted(uint param_1,uint param_2)

{
  return (param_2 & (param_1 ^ 0xffffffff)) == 0;
}



// ============================================================
// RVA: 0x151dc64 | Atlas.Stats.UnlockManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0151dd68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151dd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151dd84) */
/* WARNING: Removing unreachable block (ram,0x0151de94) */
/* WARNING: Removing unreachable block (ram,0x0151debc) */
/* WARNING: Removing unreachable block (ram,0x0151df78) */
/* WARNING: Removing unreachable block (ram,0x0151df90) */
/* WARNING: Removing unreachable block (ram,0x0151df98) */
/* WARNING: Removing unreachable block (ram,0x0151dfb0) */
/* WARNING: Removing unreachable block (ram,0x0151dfc0) */
/* WARNING: Removing unreachable block (ram,0x0151dfcc) */
/* WARNING: Removing unreachable block (ram,0x0151dfd0) */
/* WARNING: Removing unreachable block (ram,0x0151dfd8) */
/* WARNING: Removing unreachable block (ram,0x0151dfe4) */
/* WARNING: Removing unreachable block (ram,0x0151e004) */
/* WARNING: Removing unreachable block (ram,0x0151e00c) */
/* WARNING: Removing unreachable block (ram,0x0151e02c) */
/* WARNING: Removing unreachable block (ram,0x0151e034) */
/* WARNING: Removing unreachable block (ram,0x0151e044) */
/* WARNING: Removing unreachable block (ram,0x0151e04c) */
/* WARNING: Removing unreachable block (ram,0x0151e078) */
/* WARNING: Removing unreachable block (ram,0x0151e0a4) */
/* WARNING: Removing unreachable block (ram,0x0151e0c4) */
/* WARNING: Removing unreachable block (ram,0x0151e0cc) */
/* WARNING: Removing unreachable block (ram,0x0151e0d4) */
/* WARNING: Removing unreachable block (ram,0x0151e2bc) */
/* WARNING: Removing unreachable block (ram,0x0151e2c0) */
/* WARNING: Removing unreachable block (ram,0x0151e0f0) */
/* WARNING: Removing unreachable block (ram,0x0151e2d4) */
/* WARNING: Removing unreachable block (ram,0x0151e108) */
/* WARNING: Removing unreachable block (ram,0x0151e120) */
/* WARNING: Removing unreachable block (ram,0x0151e130) */
/* WARNING: Removing unreachable block (ram,0x0151e138) */
/* WARNING: Removing unreachable block (ram,0x0151e160) */
/* WARNING: Removing unreachable block (ram,0x0151e144) */
/* WARNING: Removing unreachable block (ram,0x0151e150) */
/* WARNING: Removing unreachable block (ram,0x0151e16c) */
/* WARNING: Removing unreachable block (ram,0x0151e218) */
/* WARNING: Removing unreachable block (ram,0x0151e234) */
/* WARNING: Removing unreachable block (ram,0x0151e24c) */
/* WARNING: Removing unreachable block (ram,0x0151e254) */
/* WARNING: Removing unreachable block (ram,0x0151e27c) */
/* WARNING: Removing unreachable block (ram,0x0151e260) */
/* WARNING: Removing unreachable block (ram,0x0151e26c) */
/* WARNING: Removing unreachable block (ram,0x0151e288) */
/* WARNING: Removing unreachable block (ram,0x0151e294) */
/* WARNING: Removing unreachable block (ram,0x0151e2dc) */
/* WARNING: Removing unreachable block (ram,0x0151e2c4) */
/* WARNING: Removing unreachable block (ram,0x0151e298) */
/* WARNING: Removing unreachable block (ram,0x0151e17c) */
/* WARNING: Removing unreachable block (ram,0x0151e18c) */
/* WARNING: Removing unreachable block (ram,0x0151e194) */
/* WARNING: Removing unreachable block (ram,0x0151e1bc) */
/* WARNING: Removing unreachable block (ram,0x0151e1a0) */
/* WARNING: Removing unreachable block (ram,0x0151e1ac) */
/* WARNING: Removing unreachable block (ram,0x0151e1c8) */
/* WARNING: Removing unreachable block (ram,0x0151e1dc) */
/* WARNING: Removing unreachable block (ram,0x0151e1f4) */
/* WARNING: Removing unreachable block (ram,0x0151e2b0) */
/* WARNING: Removing unreachable block (ram,0x0151e208) */
/* WARNING: Removing unreachable block (ram,0x0151e088) */
/* WARNING: Removing unreachable block (ram,0x0151e2cc) */
/* WARNING: Removing unreachable block (ram,0x0151e2d8) */
/* WARNING: Removing unreachable block (ram,0x0151e090) */
/* WARNING: Removing unreachable block (ram,0x0151dd6c) */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */

void Atlas_Stats_UnlockManager__Init
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  
  puVar5 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e07 & 1) == 0) {
    func_0x00f78a20(0x3d2e388);
    func_0x00f78a20(0x3d1c1e8);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d3de38);
    func_0x00f78a20(0x3d1e3d0);
    bRam0000000003eb4e07 = 1;
  }
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x30) = param_6;
  *(long *)(param_1 + 0x38) = param_7;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    puVar6 = &Atlas_Stats_UnlockManager__CacheArcadeMedals;
    lVar4 = func_0x00f78af4();
    puVar1 = &stack0xffffffffffffffb0;
  }
  else {
    uVar3 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(param_2 + 0x10),uRam0000000003d57360);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<UnlockManager.XPAward>_TypeInfo*/ uRam0000000003d1e3d0);
    /*System.Collections.Generic.List<UnlockManager.XPAward>$$.ctor*/ func_0x025c8244(uVar3,uRam0000000003d3de38);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    param_7 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>_TypeInfo*/ uRam0000000003d1c1e8);
    /*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>$$.ctor*/ func_0x01e38b50(param_7,uRam0000000003d2e388);
    *(long *)(param_1 + 0x58) = param_7;
    puVar6 = (undefined *)0x151dd6c;
    puVar1 = &stack0xffffffffffffffb0;
    lVar4 = param_1;
  }
  do {
    *(long *)(puVar1 + -0x20) = param_7;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    param_7 = *(long *)(lVar4 + 0x68);
    if (param_7 == 0) goto code_r0x0151de64;
    if (*(int *)(param_7 + 0x18) == 0) {
code_r0x0151de58:
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
    }
    else {
      *(undefined4 *)(param_7 + 0x20) = 0;
      uVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x20),0);
      param_1 = lVar4;
      if ((*(uint *)(param_7 + 0x18) & 0xfffffffe) == 0) goto code_r0x0151de58;
      *(undefined4 *)(param_7 + 0x24) = uVar2;
      param_7 = *(long *)(lVar4 + 0x68);
      uVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x20),0);
      if (param_7 != 0) {
        if (2 < *(uint *)(param_7 + 0x18)) {
          *(undefined4 *)(param_7 + 0x28) = uVar2;
          param_7 = *(long *)(lVar4 + 0x68);
          uVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x20),0);
          if (param_7 == 0) goto code_r0x0151de64;
          if ((*(uint *)(param_7 + 0x18) & 0xfffffffc) != 0) {
            *(undefined4 *)(param_7 + 0x2c) = uVar2;
            return;
          }
        }
        goto code_r0x0151de58;
      }
    }
code_r0x0151de64:
    lVar4 = func_0x00f78af4();
    *(long *)(puVar1 + -0x40) = param_7;
    *(long *)(puVar1 + -0x38) = param_1;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
    puVar5 = puVar1 + -0x30;
    puVar6 = &UNK_0151de7c;
    puVar1 = puVar1 + -0x40;
    param_1 = lVar4;
  } while( true );
}



// ============================================================
// RVA: 0x151ddac | Atlas.Stats.UnlockManager.CacheArcadeMedals
// ============================================================

ulong Atlas_Stats_UnlockManager__CacheArcadeMedals(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) goto LAB_0151de64;
  if (*(int *)(lVar8 + 0x18) != 0) {
    *(undefined4 *)(lVar8 + 0x20) = 0;
    uVar4 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),0);
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar8 + 0x24) = uVar4;
      lVar8 = *(long *)(param_1 + 0x68);
      uVar4 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),0);
      if (lVar8 == 0) goto LAB_0151de64;
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(undefined4 *)(lVar8 + 0x28) = uVar4;
        lVar8 = *(long *)(param_1 + 0x68);
        uVar5 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),0)
        ;
        if (lVar8 == 0) goto LAB_0151de64;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
          *(int *)(lVar8 + 0x2c) = (int)uVar5;
          return uVar5;
        }
      }
    }
  }
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
LAB_0151de64:
  lVar8 = func_0x00f78af4();
  Atlas_Stats_UnlockManager__CacheArcadeMedals();
  uVar6 = *(undefined8 *)(lVar8 + 0x10);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  iVar1 = /*Atlas.Helpers.ArcadeHelper$$GetTotalPossibleMedalCount*/ func_0x0144fb24(uVar6,uVar7,0);
  iVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,uVar6,uVar7);
  iVar3 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,uVar6,uVar7);
  uVar9 = (uint)(iVar1 <= iVar2);
  if (iVar1 <= iVar3) {
    uVar9 = 2;
  }
  iVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,uVar6,uVar7);
  if (iVar1 <= iVar2) {
    uVar9 = 3;
  }
  return (ulong)uVar9;
}



// ============================================================
// RVA: 0x151de68 | Atlas.Stats.UnlockManager.CacheCurrentArcadeRank
// ============================================================

undefined1 Atlas_Stats_UnlockManager__CacheCurrentArcadeRank(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  Atlas_Stats_UnlockManager__CacheArcadeMedals();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = /*Atlas.Helpers.ArcadeHelper$$GetTotalPossibleMedalCount*/ func_0x0144fb24(uVar3,uVar4,0);
  iVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,uVar3,uVar4);
  uVar5 = iVar1 <= iVar2;
  iVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,uVar3,uVar4);
  if (iVar1 <= iVar2) {
    uVar5 = 2;
  }
  iVar2 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,uVar3,uVar4);
  if (iVar1 <= iVar2) {
    uVar5 = 3;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x151de94 | Atlas.Stats.UnlockManager.Reset
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0151e2dc) */

void Atlas_Stats_UnlockManager__Reset(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 uStack_80;
  int iStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb4e34 & 1) == 0) {
    func_0x00f78a20(0x3d20508);
    func_0x00f78a20(0x3d2dca0);
    func_0x00f78a20(0x3d2dc88);
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d2dbc0);
    func_0x00f78a20(0x3d32e88);
    func_0x00f78a20(0x3d32e90);
    func_0x00f78a20(0x3d32e98);
    func_0x00f78a20(0x3d57540);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3de48);
    func_0x00f78a20(0x3d3bc30);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb4e34 = 1;
  }
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  iStack_78 = 0;
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    /*System.Collections.Generic.List<UnlockManager.XPAward>$$Clear*/ func_0x025c92a8(*(long *)(param_1 + 0x50),uRam0000000003d3de48);
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar3 = (long *)Atlas_Definitions_MetagameDefinition__get_UnlockedLiveOpsChapterRefs
                                 (*(long *)(param_1 + 0x40),0);
      lVar11 = *plVar3;
      if (lVar11 != 0) {
        uVar8 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar8) {
          uVar12 = 0;
          do {
            if (uVar8 <= uVar12) goto LAB_0151e2c0;
            lVar9 = *(long *)(lVar11 + (long)(int)uVar12 * 0x10 + 0x28);
            if (lVar9 == 0) goto LAB_0151e2bc;
            /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(param_1,*(undefined8 *)(lVar9 + 0x18),1);
            uVar12 = uVar12 + 1;
            uVar8 = *(uint *)(lVar11 + 0x18);
          } while ((int)uVar12 < (int)uVar8);
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          puVar4 = (undefined8 *)
                   Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                             (*(long *)(param_1 + 0x40),0);
          uStack_50 = *puVar4;
          iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_50,0);
          if (iVar2 == 0) {
LAB_0151e0c4:
            if (((*(long *)(param_1 + 0x10) != 0) &&
                (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar11 != 0)) &&
               (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar11,&lStack_48,uRam0000000003d57540), lStack_48 != 0)) {
              plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
              if (plVar3 != (long *)0x0) {
                do {
                  lVar11 = *plVar3;
                  uVar5 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar5 != 0) {
                    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                        puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                        goto code_r0x0151e16c;
                      }
                      piVar10 = piVar10 + 4;
                      uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                  }
                  puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0151e16c:
                  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
                  if ((uVar5 & 1) == 0) {
                    iStack_78 = iStack_78 + 1;
                    uStack_80 = 0x110;
                    if (plVar3 == (long *)0x0) {
                      return;
                    }
                    lVar11 = *plVar3;
                    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar5 == 0) goto code_r0x0151e26c;
                    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    goto code_r0x0151e254;
                  }
                  lVar11 = *plVar3;
                  uVar5 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar5 != 0) {
                    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                        puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                        goto code_r0x0151e1c8;
                      }
                      piVar10 = piVar10 + 4;
                      uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                  }
                  puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x0151e1c8:
                  plVar6 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
                  if (plVar6 != (long *)0x0) {
                    if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.Definitions.CampaignDefinition_TypeInfo*/ lRam0000000003d20508 + 300)) ||
                       (*(long *)(*(long *)(*plVar6 + 200) +
                                  (ulong)*(byte *)(/*Atlas.Definitions.CampaignDefinition_TypeInfo*/ lRam0000000003d20508 + 300) * 8 + -8) !=
                        /*Atlas.Definitions.CampaignDefinition_TypeInfo*/ lRam0000000003d20508)) goto code_r0x0151e2b0;
                  }
                  /*Atlas.Stats.UnlockManager$$UpdateCampaignUnlocksAndUpdateSave*/ func_0x01521fec(param_1,plVar6);
                } while( true );
              }
              func_0x00f78af4();
              goto code_r0x0151e2d8;
            }
          }
          else if (*(long *)(param_1 + 0x40) != 0) {
            lVar11 = Atlas_Definitions_MetagameDefinition__get_SeasonsRotationRef
                               (*(long *)(param_1 + 0x40),0);
            if ((*(long *)(lVar11 + 8) != 0) &&
               (lVar11 = *(long *)(*(long *)(lVar11 + 8) + 0x30), lVar11 != 0)) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar11,uRam0000000003d3bc30);
              uStack_68 = uStack_90;
              uStack_70 = uStack_98;
              lStack_60 = lStack_88;
              while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d32e90), (uVar5 & 1) != 0) {
                if (lStack_60 == 0) goto LAB_0151e2cc;
                /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(param_1,*(undefined8 *)(lStack_60 + 0x10),1);
              }
              uStack_80 = 0xc6;
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d32e88);
              iStack_78 = 0;
              goto LAB_0151e0c4;
            }
          }
        }
      }
    }
  }
LAB_0151e2bc:
  func_0x00f78af4();
LAB_0151e2c0:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
LAB_0151e2cc:
  func_0x00f78af4();
code_r0x0151e2d8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x151e2dc);
  (*pcVar1)();
code_r0x0151e2b0:
  func_0x00f78e5c(plVar6);
  goto code_r0x0151e2d8;
  while( true ) {
    piVar10 = piVar10 + 4;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
code_r0x0151e254:
    if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
      goto code_r0x0151e288;
    }
  }
code_r0x0151e26c:
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0151e288:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}



// ============================================================
// RVA: 0x151e350 | Atlas.Stats.UnlockManager.DeInit
// ============================================================

void Atlas_Stats_UnlockManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// ============================================================
// RVA: 0x151e360 | Atlas.Stats.UnlockManager.AddPlacementXPAwards
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151e478 | Atlas.Stats.UnlockManager.UpdateCharacterXPAndUnlocks
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151e4f0 | Atlas.Stats.UnlockManager.GetXpForCharacter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151e578 | Atlas.Stats.UnlockManager.AddXPAwardToHistory
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151e74c | Atlas.Stats.UnlockManager.AddOrUpdateCharacterProgression
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151e934 | Atlas.Stats.UnlockManager.UpdateCharacterUnlocksAndUpdateSave
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151ea20 | Atlas.Stats.UnlockManager.EvaluateSinglePlayerAwards
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151ee20 | Atlas.Stats.UnlockManager.AddOrUpdateEventProgression
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151efcc | Atlas.Stats.UnlockManager.GetChallengesCompletedCountForCampaign
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151f088 | Atlas.Stats.UnlockManager.UpdateChapterUnlocksAndUpdateSave
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151f1e8 | Atlas.Stats.UnlockManager.EvaluateCharacterXPAwards
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151f2ec | Atlas.Stats.UnlockManager.EvaluateSeasonAwards
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151f480 | Atlas.Stats.UnlockManager.UpdateSeasonUnlocksAndUpdateSave
// ============================================================

/* WARNING: Possible PIC construction at 0x0151f8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151fa20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151fadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151fe6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x0151fe70) */
/* WARNING: Removing unreachable block (ram,0x0151fe74) */
/* WARNING: Removing unreachable block (ram,0x0151fae0) */
/* WARNING: Removing unreachable block (ram,0x0151faf4) */
/* WARNING: Removing unreachable block (ram,0x0151fafc) */
/* WARNING: Removing unreachable block (ram,0x01e39058) */
/* WARNING: Removing unreachable block (ram,0x01e39080) */
/* WARNING: Removing unreachable block (ram,0x01e390ac) */
/* WARNING: Removing unreachable block (ram,0x01e390d4) */
/* WARNING: Removing unreachable block (ram,0x01e390ec) */
/* WARNING: Removing unreachable block (ram,0x01e39110) */
/* WARNING: Removing unreachable block (ram,0x01e39130) */
/* WARNING: Removing unreachable block (ram,0x01e3913c) */
/* WARNING: Removing unreachable block (ram,0x01e3917c) */
/* WARNING: Removing unreachable block (ram,0x01e39180) */
/* WARNING: Removing unreachable block (ram,0x01e391a4) */
/* WARNING: Removing unreachable block (ram,0x01e39240) */
/* WARNING: Removing unreachable block (ram,0x01e391cc) */
/* WARNING: Removing unreachable block (ram,0x01e391ec) */
/* WARNING: Removing unreachable block (ram,0x01e391f8) */
/* WARNING: Removing unreachable block (ram,0x01e39258) */
/* WARNING: Removing unreachable block (ram,0x01e3925c) */
/* WARNING: Removing unreachable block (ram,0x01e39280) */
/* WARNING: Removing unreachable block (ram,0x01e3928c) */
/* WARNING: Removing unreachable block (ram,0x01e39298) */
/* WARNING: Removing unreachable block (ram,0x01e392a8) */
/* WARNING: Removing unreachable block (ram,0x01e392b0) */
/* WARNING: Removing unreachable block (ram,0x01e392f8) */
/* WARNING: Removing unreachable block (ram,0x01e39304) */
/* WARNING: Removing unreachable block (ram,0x01e392b4) */
/* WARNING: Removing unreachable block (ram,0x01e392c4) */
/* WARNING: Removing unreachable block (ram,0x01e392ec) */
/* WARNING: Removing unreachable block (ram,0x01e391fc) */
/* WARNING: Removing unreachable block (ram,0x01e3921c) */
/* WARNING: Removing unreachable block (ram,0x01e39244) */
/* WARNING: Removing unreachable block (ram,0x01e39140) */
/* WARNING: Removing unreachable block (ram,0x01e39168) */
/* WARNING: Removing unreachable block (ram,0x01e39160) */
/* WARNING: Removing unreachable block (ram,0x01e3916c) */
/* WARNING: Removing unreachable block (ram,0x01e390bc) */
/* WARNING: Removing unreachable block (ram,0x01e39090) */
/* WARNING: Removing unreachable block (ram,0x01e39064) */
/* WARNING: Removing unreachable block (ram,0x0151fae4) */
/* WARNING: Removing unreachable block (ram,0x0151fa24) */
/* WARNING: Removing unreachable block (ram,0x0151fa54) */
/* WARNING: Removing unreachable block (ram,0x0151f8f8) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_UnlockManager__UpdateSeasonUnlocksAndUpdateSave
                (long param_1,long param_2,ulong param_3,ulong param_4,long *param_5,long param_6,
                long param_7)

{
  code *pcVar1;
  undefined1 ***pppuVar2;
  uint uVar3;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  uint uVar4;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int extraout_w1;
  ulong uVar16;
  undefined4 uVar17;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *extraout_x8;
  long lVar21;
  ulong unaff_x19;
  long unaff_x20;
  ulong uVar22;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  ulong uVar23;
  undefined8 *******pppppppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_292 [98];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined1 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  long *plStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint auStack_e8 [2];
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  
  uVar16 = param_3;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar16 = 0;
    uVar5 = Atlas_Stats_SeasonsManager__GetStarsForSeason();
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    if ((param_2 != 0) && (lVar19 = *(long *)(param_2 + 0x40), lVar19 != 0)) {
      unaff_x23 = 0;
      unaff_x24 = (ulong)((uint)param_3 ^ 1);
      uVar6 = uVar5;
      do {
        if ((long)*(int *)(lVar19 + 0x18) <= (long)unaff_x23) {
          return uVar6;
        }
        unaff_x22 = uVar5;
        if (*(long *)(param_1 + 0x30) == 0) break;
        uVar16 = 0;
        uVar6 = Atlas_Stats_SeasonsManager__GetRewardThreshold(*(long *)(param_1 + 0x30),unaff_x23);
        if ((int)uVar6 <= (int)uVar5) {
          lVar19 = *(long *)(param_2 + 0x40);
          if (lVar19 == 0) break;
          if (*(uint *)(lVar19 + 0x18) <= unaff_x23) goto code_r0x0151f610;
          unaff_x25 = *(undefined8 *)(lVar19 + unaff_x23 * 8 + 0x20);
          uVar16 = unaff_x24;
          uVar6 = /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(param_1,unaff_x25);
          if (((int)uVar6 != 0) && ((param_3 & 1) == 0)) {
            if (*(long *)(param_1 + 0x38) == 0) break;
            plVar11 = (long *)/*Atlas.Analytics.AtlasAnalyticsManager$$GetFirstSeasonProgression*/ func_0x01457f70(*(long *)(param_1 + 0x38),0);
            if ((*(long *)(param_1 + 0x38) == 0) ||
               (unaff_x26 = plVar11, *(long *)(param_1 + 0x30) == 0)) break;
            unaff_x27 = *(long *)(*(long *)(param_1 + 0x38) + 0x48);
            unaff_x28 = *(undefined8 *)(param_2 + 0x18);
            uVar6 = Atlas_Stats_SeasonsManager__GetNumberOfSeasonReruns(*(long *)(param_1 + 0x30),0)
            ;
            if (unaff_x27 == 0) break;
            param_4 = (ulong)((int)unaff_x23 + 1);
            param_6 = 0;
            param_5 = plVar11;
            /*Atlas.Analytics.AtlasAnalyticsEvents$$EpisodeProgressEvent*/ func_0x01455f70(unaff_x27,unaff_x28);
            uVar16 = uVar6;
            if ((*(long *)(param_1 + 0x38) == 0) ||
               (lVar19 = *(long *)(*(long *)(param_1 + 0x38) + 0x48), lVar19 == 0)) break;
            uVar16 = 0;
            /*Atlas.Analytics.AtlasAnalyticsEvents$$RewardEvent*/ func_0x01455078(lVar19,unaff_x25);
            if (*(long *)(param_1 + 0x18) == 0) break;
            uVar16 = 0;
            uVar6 = Atlas_Stats_StatsManager__IncrementStat(*(long *)(param_1 + 0x18),0x79);
            if (*(long *)(param_2 + 0x40) == 0) break;
            if (unaff_x23 == *(int *)(*(long *)(param_2 + 0x40) + 0x18) - 1) {
              if (*(long *)(param_1 + 0x18) == 0) break;
              uVar16 = 0;
              uVar6 = Atlas_Stats_StatsManager__IncrementStat(*(long *)(param_1 + 0x18),0x7a);
            }
          }
        }
        unaff_x23 = unaff_x23 + 1;
        lVar19 = *(long *)(param_2 + 0x40);
      } while (lVar19 != 0);
    }
  }
  func_0x00f78af4();
  param_3 = unaff_x19;
  param_2 = unaff_x20;
  uVar5 = unaff_x22;
code_r0x0151f610:
  uVar7 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar7,0);
  uVar22 = auVar26._8_8_;
  lVar19 = auVar26._0_8_;
  pppuVar2 = (undefined1 ***)auStack_100;
  puStack_68 = &Atlas_Stats_UnlockManager__EvaluateArcadeXPAwards;
  pppppppuVar24 = &ppppppuStack_70;
  uVar6 = param_4;
  uStack_c0 = unaff_x28;
  lStack_b8 = unaff_x27;
  plStack_b0 = unaff_x26;
  uStack_a8 = unaff_x25;
  uStack_a0 = unaff_x24;
  uStack_98 = unaff_x23;
  uStack_90 = uVar5;
  lStack_88 = param_1;
  lStack_80 = param_2;
  uStack_78 = param_3;
  ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e0c & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d3dfa8);
    func_0x00f78a20(0x3d3dfa0);
    func_0x00f78a20(0x3d1e408);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d26888);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d68910);
    func_0x00f78a20(0x3d68918);
    func_0x00f78a20(0x3d68920);
    func_0x00f78a20(0x3d68928);
    bRam0000000003eb4e0c = 1;
  }
  uStack_f8 = 0;
  uStack_f0 = 0;
  lVar8 = func_0x00f78aec(/*System.Collections.Generic.List<UnlockManager.XPAward.Award>_TypeInfo*/ uRam0000000003d1e408);
  uVar5 = uRam0000000003d3dfa0;
  /*System.Collections.Generic.List<UnlockManager.XPAward.Award>$$.ctor*/ func_0x025db908(lVar8,3);
  if (*(long *)(lVar19 + 0x10) == 0) {
code_r0x0151fa74:
    func_0x00f78af4();
code_r0x0151fa78:
    puVar25 = &Atlas_Stats_UnlockManager__AddArcadeEventMedalToHistory;
    auVar27 = func_0x00f78e5c();
    uVar9 = param_4;
code_r0x0151fa7c:
    uStack_130 = uVar16;
    plStack_128 = param_5;
    uStack_120 = uVar22;
    lStack_118 = lVar19;
    pppppppuStack_110 = pppppppuVar24;
    puStack_108 = puVar25;
    if ((bRam0000000003eb4e36 & 1) == 0) {
      func_0x00f78a20(0x3d2e390);
      func_0x00f78a20(0x3d2e3a8);
      bRam0000000003eb4e36 = 1;
    }
    lVar19 = *(long *)(auVar27._0_8_ + 0x58);
    pppppppuStack_140 = &pppppppuStack_110;
    if (lVar19 != 0) {
      puStack_138 = &UNK_0151fae0;
      if (lVar19 != 0) {
        uVar4 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(uRam0000000003d2e390 + 0x18) + 0xc0) + 0x40))();
        return (ulong)(~uVar4 >> 0x1f);
      }
      uVar16 = uRam0000000003d2e390;
      auVar31 = func_0x00f78af4(0,auVar27._8_8_);
      lVar19 = auVar31._0_8_;
      uStack_170 = 0x3eb4000;
      puStack_148 = &System_Collections_Generic_Dictionary_DefinitionID__Int32Enum___ContainsValue;
      uStack_180 = uVar9;
      lStack_178 = param_7;
      auStack_158 = (undefined1  [8])uVar5;
      puStack_150 = (undefined1 *)&pppppppuStack_140;
      auStack_168 = auVar27;
      plVar11 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uVar16 + 0x18) + 0xc0) + 0x68))();
      iVar18 = *(int *)(lVar19 + 0x20);
      if (0 < iVar18) {
        lVar10 = 0;
        uVar5 = 0;
        do {
          lVar21 = *(long *)(lVar19 + 0x18);
          if (lVar21 == 0) {
code_r0x01e393fc:
            func_0x00f78af4();
code_r0x01e39400:
            uVar7 = func_0x00f78b24();
            auVar26 = func_0x00f78ac0(uVar7,0);
            lVar13 = auVar26._8_8_;
            lVar21 = auVar26._0_8_;
            uStack_188 = &System_Collections_Generic_Dictionary_DefinitionID__Int32Enum___CopyTo;
            lStack_1d0 = lVar8;
            lStack_1c8 = param_6;
            uStack_1c0 = uVar9;
            uStack_1b8 = uVar5;
            lStack_1b0 = lVar10;
            plStack_1a8 = plVar11;
            auStack_1a0._0_8_ = lVar19;
            ppuStack_190 = &puStack_150;
            if (lVar13 == 0) goto code_r0x01e3959c;
            uVar4 = (uint)uVar16;
            auStack_1a0 = auVar31;
            if (((int)uVar4 < 0) || (*(int *)(lVar13 + 0x18) < (int)uVar4)) goto code_r0x01e3951c;
            if (lVar21 == 0) goto code_r0x01e39598;
            uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(uVar6 + 0x18) + 0xc0) + 0x90))
                              (lVar21);
            if ((int)(*(int *)(lVar13 + 0x18) - uVar4) < (int)uVar5) {
              func_0x00f78a24(0x3d1fce8);
              uVar7 = func_0x00f78aec();
              uVar14 = func_0x00f78a24(0x3d6bc10);
              /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar14,0);
              goto code_r0x01e39600;
            }
            uVar3 = *(uint *)(lVar21 + 0x20);
            if ((int)uVar3 < 1) {
              return uVar5;
            }
            lVar19 = *(long *)(lVar21 + 0x18);
            if (lVar19 == 0) goto code_r0x01e39598;
            uVar22 = 0;
            puVar12 = (undefined4 *)(lVar19 + 0x30);
            goto code_r0x01e39494;
          }
          if (*(uint *)(lVar21 + 0x18) <= uVar5) goto code_r0x01e39400;
          if (-1 < *(int *)(lVar21 + lVar10 + 0x20)) {
            if (plVar11 == (long *)0x0) goto code_r0x01e393fc;
            uVar6 = *(ulong *)(*plVar11 + 0x1c0);
            uVar16 = auVar31._8_8_;
            uVar22 = (**(code **)(*plVar11 + 0x1b8))
                               (plVar11,*(undefined4 *)(lVar21 + lVar10 + 0x30));
            if ((uVar22 & 1) != 0) {
              return 1;
            }
            iVar18 = *(int *)(lVar19 + 0x20);
          }
          uVar5 = uVar5 + 1;
          lVar10 = lVar10 + 0x18;
        } while ((long)uVar5 < (long)iVar18);
      }
      return 0;
    }
    auVar26 = func_0x00f78af4();
    lVar19 = auVar26._0_8_;
    pppuVar2 = &ppuStack_190;
    auStack_168._8_8_ = 0x3eb4000;
    puStack_138 = &Atlas_Stats_UnlockManager__DispatchAnalyticsArcadeProgressEvent;
    pppppppuVar24 = &pppppppuStack_140;
    lVar21 = 0x3eb4000;
    uVar16 = 0x3d39cf0;
    uStack_180 = lVar8;
    lStack_178 = param_6;
    uStack_170 = uVar9;
    auStack_168._0_8_ = param_7;
    puStack_148 = (undefined *)uVar5;
    _auStack_158 = auVar27;
    if ((bRam0000000003eb4e0e & 1) == 0) {
      func_0x00f78a20(0x3d1fc80);
      func_0x00f78a20(0x3d57348);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d39cf0);
      func_0x00f78a20(0x3d39d00);
      func_0x00f78a20(0x3d39d08);
      func_0x00f78a20(0x3d1d7c0);
      bRam0000000003eb4e0e = 1;
    }
    uStack_188 = (undefined *)(ulong)(uint)uStack_188;
    ppuStack_190 = (undefined1 **)0x0;
    param_5 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<ArcadeEventDefinition>_TypeInfo*/ uRam0000000003d1d7c0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(param_5,uRam0000000003d39cf0);
    if ((*(long *)(lVar19 + 0x10) == 0) ||
       (lVar8 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10), lVar8 == 0)) {
code_r0x0151fd14:
      func_0x00f78af4();
    }
    else {
      uVar16 = 0x3d1f000;
      /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar8,param_5,uRam0000000003d57348);
      lVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
      *(long *)(lVar19 + 0x60) = lVar8;
      if (param_5 == (long *)0x0) goto code_r0x0151fd14;
      uVar5 = (ulong)*(uint *)(param_5 + 3);
      if (0 < (int)*(uint *)(param_5 + 3)) {
        uVar6 = 0;
        do {
          if ((uVar5 & 0xffffffff) <= uVar6) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar21 = *(long *)(param_5[2] + uVar6 * 8 + 0x20);
          uVar9 = *(ulong *)(lVar19 + 0x20);
          uVar16 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
          Atlas_UI_ArcadeEventMetagameData___ctor(uVar16,lVar21,uVar9,0);
          if (uVar16 == 0) goto code_r0x0151fd14;
          Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest
                    (uVar16,&ppuStack_190,(long)&uStack_188 + 4,0);
          lVar8 = *(long *)(lVar19 + 0x60);
          if (lVar8 == 0) goto code_r0x0151fd14;
          if (*(uint *)(lVar8 + 0x18) <= uStack_188._4_4_) goto code_r0x0151fd18;
          lVar10 = lVar8 + (long)(int)uStack_188._4_4_ * 4;
          *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + 1;
          uVar6 = uVar6 + 1;
          uVar5 = (ulong)(int)param_5[3];
        } while ((long)uVar6 < (long)uVar5);
      }
      if ((*(long *)(lVar19 + 0x38) == 0) || (lVar8 == 0)) goto code_r0x0151fd14;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
        lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 0x48);
        if (lVar19 != 0) {
          uVar16 = /*Atlas.Analytics.AtlasAnalyticsEvents$$ArcadeProgressEvent*/ func_0x0145670c(lVar19,auVar26._8_8_,*(undefined4 *)(lVar8 + 0x2c),
                                   *(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x24),0);
          return uVar16;
        }
        goto code_r0x0151fd14;
      }
    }
code_r0x0151fd18:
    uVar7 = func_0x00f78b24();
    puVar25 = &Atlas_Stats_UnlockManager__GetArcadeRewardId;
    auVar28 = func_0x00f78ac0(uVar7,0);
  }
  else {
    uVar5 = 0;
    uVar9 = Atlas_Definitions_AtlasDefinitions__GetCharacterOwnerOrCharacterIfNone
                      (*(long *)(lVar19 + 0x10),uVar22);
    if (param_5 == (long *)0x0) goto code_r0x0151fa74;
    uVar5 = 0;
    uVar3 = Atlas_UI_ArcadeEventMetagameData__GetMedal(param_5,uVar16);
    uVar4 = 0;
    if ((int)param_4 == 0) {
      uVar4 = uVar3;
    }
    uVar22 = CONCAT44(0,uVar4);
    auVar26._8_8_ = lVar19;
    auVar26._0_8_ = uVar22;
    uVar3 = uVar4 - 1;
    if (uVar3 < 3) {
      uVar23 = (ulong)*(uint *)(&UNK_033f86e8 + (long)(int)uVar3 * 4);
      puVar20 = *(undefined8 **)(&UNK_03a5f238 + (long)(int)uVar3 * 8);
    }
    else {
      puVar20 = (undefined8 *)0x3d68920;
      uVar23 = 0x19;
    }
    if (param_6 == 0) goto code_r0x0151fa74;
    uVar5 = 0;
    uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_6,*puVar20);
    if ((param_7 == 0) || (lVar8 == 0)) goto code_r0x0151fa74;
    uStack_c8 = *(undefined8 *)(param_7 + 0x18);
    uStack_d0 = *(undefined4 *)(param_7 + 0x10);
    auStack_e8[1] = 0;
    uStack_d8 = (undefined4)uVar23;
    uStack_d4 = 4;
    uStack_cc = 0;
    auStack_e8[0] = uVar4;
    uStack_e0 = uVar7;
    /*System.Collections.Generic.List<UnlockManager.XPAward.Award>$$Add*/ func_0x025dc574(lVar8,auStack_e8,uRam0000000003d3dfa8);
    Atlas_Stats_UnlockManager__UpdateCharacterXPAndUnlocks(lVar19,lVar8);
    uVar5 = uVar9;
    uVar6 = uVar23;
    if ((param_4 & 1) == 0) {
      param_4 = (ulong)*(uint *)(param_7 + 0x10);
      uVar7 = *(undefined8 *)(param_7 + 0x20);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
      uVar6 = *(ulong *)(lVar19 + 0x20);
      if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = uVar16;
      /*Atlas.Arcade.ArcadeSave$$SaveResultIfBetter*/ func_0x014549f8(param_4,param_7,uVar16,uVar6,0);
      lVar8 = 0x3d21270;
    }
    param_6 = 0x3d21270;
    if (0 < (int)uVar4) {
      param_5 = (long *)(**(code **)(*param_5 + 0x178))(param_5,*(undefined8 *)(*param_5 + 0x180));
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_5,0);
      auVar27._8_8_ = uVar7;
      auVar27._0_8_ = lVar19;
      puVar25 = &UNK_0151f8f8;
      uVar5 = uVar22;
      uVar9 = param_4;
      param_6 = 0x3d21270;
      goto code_r0x0151fa7c;
    }
    if ((*(long *)(lVar19 + 0x10) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10), lVar10 == 0)) goto code_r0x0151fa74;
    uVar5 = uRam0000000003d57528;
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar10,&uStack_f0);
    if (*(long *)(lVar19 + 0x10) == 0) goto code_r0x0151fa74;
    uVar16 = 0x3d69068;
    lVar10 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
    param_5 = (long *)0x0;
    if (lVar10 == 0) goto code_r0x0151fa74;
    lVar21 = 0x3d1a510;
    param_7 = 0x3d1a510;
    uVar9 = 0x3d25458;
    param_4 = 0x3d25458;
    param_6 = 0x3d215e0;
    lVar8 = 0x3d26888;
    uVar6 = uRam0000000003d574e0;
    /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar10,uVar7,&uStack_f8);
    uVar7 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
    param_5 = (long *)((long)&MACH_HEADER.magic + 1);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
    if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = 0;
    plVar11 = (long *)/*System.Enum$$ToObject*/ func_0x02ac67ac(uVar16,1);
    if (plVar11 == (long *)0x0) goto code_r0x0151fa74;
    param_7 = lVar21;
    param_4 = uVar9;
    param_6 = 0x3d215e0;
    lVar8 = 0x3d26888;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(/*Atlas.Definitions.ArcadeEventDefinition.Medal_TypeInfo*/ lRam0000000003d26888 + 0x40)) goto code_r0x0151fa78;
    puVar12 = (undefined4 *)func_0x00f78ae4();
    auVar28._8_4_ = *puVar12;
    auVar28._0_8_ = lVar19;
    auVar28._12_4_ = 0;
    puVar25 = &UNK_0151fa24;
  }
  uVar5 = auVar28._8_8_;
  lVar19 = auVar28._0_8_;
  *(ulong *)((long)pppuVar2 + -0x30) = uVar16;
  *(long **)((long)pppuVar2 + -0x28) = param_5;
  *(undefined1 (*) [16])((long)pppuVar2 + -0x20) = auVar26;
  *(undefined8 ********)((long)pppuVar2 + -0x10) = pppppppuVar24;
  *(undefined **)((long)pppuVar2 + -8) = puVar25;
  lVar8 = 0x3eb4000;
  if ((bRam0000000003eb4e0d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d69068);
    bRam0000000003eb4e0d = 1;
  }
  *(undefined8 *)((long)pppuVar2 + -0x40) = 0;
  *(undefined8 *)((long)pppuVar2 + -0x38) = 0;
  if ((*(long *)(lVar19 + 0x10) == 0) ||
     (lVar10 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10), lVar10 == 0)) {
code_r0x0151fe90:
    func_0x00f78af4();
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar10,(undefined1 *)((long)pppuVar2 + -0x38),uRam0000000003d57528);
    if (*(long *)(lVar19 + 0x10) == 0) goto code_r0x0151fe90;
    uVar6 = 0x3d69068;
    lVar8 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
    uVar16 = uVar6;
    if (lVar8 == 0) goto code_r0x0151fe90;
    /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar8,uVar7,(undefined1 *)((long)pppuVar2 + -0x40),uRam0000000003d574e0);
    uVar7 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(uVar5,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x20),0);
    uVar5 = /*Atlas.Helpers.ArcadeUnlockHelper$$GetArcadeRewardID*/ func_0x01455174(uVar5,uVar7,*(undefined8 *)((long)pppuVar2 + -0x40),lVar19,0);
    if ((int)(uint)uVar5 < 1) {
      return uVar5;
    }
    if ((*(long *)((long)pppuVar2 + -0x40) == 0) ||
       (lVar10 = *(long *)(*(long *)((long)pppuVar2 + -0x40) + 0x28), uVar16 = 0x3d69068,
       lVar10 == 0)) goto code_r0x0151fe90;
    uVar16 = uVar6;
    if ((uint)uVar5 < *(uint *)(lVar10 + 0x18)) {
      auVar29._8_8_ = *(undefined8 *)(lVar10 + (uVar5 & 0xffffffff) * 8 + 0x20);
      auVar29._0_8_ = lVar19;
      puVar25 = &UNK_0151fe70;
      goto code_r0x0151fea0;
    }
  }
  uVar7 = func_0x00f78b24();
  puVar25 = &Atlas_Stats_UnlockManager__IsUnlocked;
  auVar29 = func_0x00f78ac0(uVar7,0);
code_r0x0151fea0:
  lVar10 = auVar29._8_8_;
  *(ulong *)((long)pppuVar2 + -0x70) = uVar16;
  *(long *)((long)pppuVar2 + -0x68) = lVar8;
  *(ulong *)((long)pppuVar2 + -0x60) = uVar5;
  *(long *)((long)pppuVar2 + -0x58) = lVar19;
  *(undefined1 **)((long)pppuVar2 + -0x50) = (undefined1 *)((long)pppuVar2 + -0x10);
  *(undefined **)((long)pppuVar2 + -0x48) = puVar25;
  if ((bRam0000000003eb4e2b & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2b = 1;
  }
  lVar19 = *(long *)(auVar29._0_8_ + 0x20);
  if (lVar19 != 0) {
    lVar19 = Atlas_Save_SaveManager__get_SaveData(lVar19,0);
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = *(undefined8 *)((long)pppuVar2 + -0x70);
    *(undefined8 *)((long)pppuVar2 + -0x70) = uVar7;
    *(undefined8 *)((long)pppuVar2 + -0x68) = *(undefined8 *)((long)pppuVar2 + -0x68);
    *(undefined8 *)((long)pppuVar2 + -0x60) = *(undefined8 *)((long)pppuVar2 + -0x60);
    *(undefined8 *)((long)pppuVar2 + -0x58) = *(undefined8 *)((long)pppuVar2 + -0x58);
    *(undefined8 *)((long)pppuVar2 + -0x50) = *(undefined8 *)((long)pppuVar2 + -0x50);
    *(undefined8 *)((long)pppuVar2 + -0x48) = *(undefined8 *)((long)pppuVar2 + -0x48);
    if ((bRam0000000003eb4e2c & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      bRam0000000003eb4e2c = 1;
    }
    *(undefined8 *)((long)pppuVar2 + -0x88) = 0;
    *(undefined8 *)((long)pppuVar2 + -0x90) = 0;
    *(undefined8 *)((long)pppuVar2 + -0x78) = 0;
    *(undefined8 *)((long)pppuVar2 + -0x80) = 0;
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x38) != 0)) {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar2 + -0x90),*(long *)(lVar19 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar2 + -0x90),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) {
          uVar17 = 0x40;
          goto code_r0x01521720;
        }
        if (*(long *)((long)pppuVar2 + -0x80) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1521764);
          (*pcVar1)();
        }
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar2 + -0x80),lVar10,4,0);
      } while ((uVar5 & 1) == 0);
      uVar17 = 0x42;
code_r0x01521720:
      *(undefined4 *)((long)pppuVar2 + -0xa0) = uVar17;
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar2 + -0x90),uRam0000000003d33738);
      if (*(int *)((long)pppuVar2 + -0xa0) != 0x42) {
        uVar16 = 0;
      }
      return uVar16;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar11 = (long *)___cxa_begin_catch();
      lVar10 = *plVar11;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar2 + -0x90),uRam0000000003eb4000);
      if (lVar10 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar26 = func_0x00f78ac0(lVar10,0);
    *(ulong *)((long)pppuVar2 + -0xe0) = uVar9;
    *(long *)((long)pppuVar2 + -0xd8) = lVar21;
    *(undefined8 *)((long)pppuVar2 + -0xd0) = uVar7;
    *(undefined8 *)((long)pppuVar2 + -200) = 0x3eb4000;
    *(long *)((long)pppuVar2 + -0xc0) = lVar19;
    *(long *)((long)pppuVar2 + -0xb8) = lVar10;
    *(undefined1 **)((long)pppuVar2 + -0xb0) = (undefined1 *)((long)pppuVar2 + -0x50);
    *(undefined **)((long)pppuVar2 + -0xa8) = &Atlas_Stats_UnlockManager__IsUnlockUnseen;
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    *(undefined8 *)((long)pppuVar2 + -0xf8) = 0;
    *(undefined8 *)((long)pppuVar2 + -0x100) = 0;
    *(undefined8 *)((long)pppuVar2 + -0xe8) = 0;
    *(undefined8 *)((long)pppuVar2 + -0xf0) = 0;
    lVar19 = *(long *)(auVar26._0_8_ + 0x20);
    if (((lVar19 == 0) || (lVar19 = Atlas_Save_SaveManager__get_SaveData(lVar19,0), lVar19 == 0)) ||
       (*(long *)(lVar19 + 0x38) == 0)) {
      auVar30 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8((undefined1 *)((long)pppuVar2 + -0x100),*(long *)(lVar19 + 0x38),
                      uRam0000000003d3d950);
      do {
        uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54((undefined1 *)((long)pppuVar2 + -0x100),uRam0000000003d33740);
        if ((uVar16 & 1) == 0) goto code_r0x015218ec;
        if (*(long *)((long)pppuVar2 + -0xf0) == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar7 = *(undefined8 *)((long)pppuVar2 + -0xe8);
        uVar16 = /*System.String$$Equals*/ func_0x029caa48(*(long *)((long)pppuVar2 + -0xf0),auVar26._8_8_,4,0);
      } while ((uVar16 & 1) == 0);
      *(char *)((long)pppuVar2 + -0x101) = (char)uVar7;
      lVar19 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar2 + -0x101));
      *(undefined1 *)((long)pppuVar2 + -0x102) = 1;
      uVar7 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,(undefined1 *)((long)pppuVar2 + -0x102));
      auVar30._8_8_ = uVar7;
      auVar30._0_8_ = uVar7;
      if (lVar19 != 0) {
        uVar16 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar19,uVar7,0);
        if ((uVar16 & 1) == 0) {
code_r0x015218ec:
          uVar16 = 0;
        }
        else {
          uVar16 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50((undefined1 *)((long)pppuVar2 + -0x100),uRam0000000003d33738);
        return uVar16;
      }
    }
    func_0x00f78af4(auVar30._0_8_,auVar30._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar1)();
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._8_8_;
  *(ulong *)((long)pppuVar2 + -0xa0) = uVar16;
  *(undefined8 *)((long)pppuVar2 + -0x98) = 0x3eb4000;
  *(undefined1 (*) [16])((long)pppuVar2 + -0x90) = auVar29;
  *(undefined1 **)((long)pppuVar2 + -0x80) = (undefined1 *)((long)pppuVar2 + -0x50);
  *(undefined **)((long)pppuVar2 + -0x78) =
       &Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent;
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(ulong *)((long)pppuVar2 + -0xe0) = uVar9;
  *(long *)((long)pppuVar2 + -0xd8) = lVar21;
  *(undefined8 *)((long)pppuVar2 + -0xd0) = 0x3d257d8;
  *(undefined8 *)((long)pppuVar2 + -200) = 0x3eb4000;
  *(undefined1 (*) [16])((long)pppuVar2 + -0xc0) = auVar26;
  *(undefined1 **)((long)pppuVar2 + -0xb0) = (undefined1 *)((long)pppuVar2 + -0x80);
  *(undefined **)((long)pppuVar2 + -0xa8) = &UNK_0151ffa4;
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar19 != 0) && (lVar8 = *(long *)(lVar19 + 0x58), lVar8 != 0)) {
    iVar18 = *(int *)(lVar8 + 0x18);
    if (iVar18 < 1) {
      return 0xffffffff;
    }
    uVar16 = 0;
    do {
      uVar4 = (uint)uVar16;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
      if (lVar8 == 0) break;
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar26._0_8_,4,0);
      if ((uVar5 & 1) != 0) {
        return uVar16;
      }
      if (iVar18 - 1U == uVar4) {
        return 0xffffffff;
      }
      lVar8 = *(long *)(lVar19 + 0x58);
      uVar16 = (ulong)(uVar4 + 1);
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
code_r0x01e39494:
  uVar4 = (uint)uVar16;
  if (*(uint *)(lVar19 + 0x18) <= uVar22) {
code_r0x01e39510:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
code_r0x01e3951c:
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar4);
    uVar7 = func_0x00f78a24(0x3d22910);
    uVar7 = func_0x00f78ae0(uVar7,&uStack_1e0);
    func_0x00f78a24(0x3d1fcf8);
    lVar13 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d79a60);
    uVar15 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar13,uVar14,uVar7,uVar15,0);
    uVar7 = func_0x00f78a24(0x3d2e2a0);
    func_0x00f78ac0(lVar13,uVar7);
code_r0x01e39598:
    func_0x00f78af4();
    auVar31._8_8_ = auStack_1a0._8_8_;
    auVar31._0_8_ = lVar13;
code_r0x01e3959c:
    auStack_1a0._8_8_ = auVar31._8_8_;
    lVar13 = auVar31._0_8_;
    func_0x00f78a24(0x3d1fcf0);
    uVar7 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar7,uVar14,0);
code_r0x01e39600:
    uVar14 = func_0x00f78a24(0x3d2e2a0);
    auVar26 = func_0x00f78ac0(uVar7,uVar14);
    puStack_1e8 = &System_Collections_Generic_Dictionary_DefinitionID__Int32Enum___GetEnumerator;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_200 = lVar13;
    uStack_1f8 = uVar7;
    pppuStack_1f0 = &ppuStack_190;
    uVar16 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, Int32Enum>$$.ctor*/ func_0x01fbb1b8(&uStack_230,auVar26._0_8_,2,
                             *(undefined8 *)
                              (*(long *)(*(long *)(auVar26._8_8_ + 0x18) + 0xc0) + 0xb0));
    extraout_x8[1] = uStack_228;
    *extraout_x8 = uStack_230;
    extraout_x8[3] = uStack_218;
    extraout_x8[2] = uStack_220;
    extraout_x8[4] = uStack_210;
    return uVar16;
  }
  if (-1 < (int)puVar12[-4]) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uVar5 = /*System.Collections.Generic.KeyValuePair<DefinitionID, Int32Enum>$$.ctor*/ func_0x02316528(&uStack_1e0,*(undefined8 *)(puVar12 + -2),*puVar12,
                            *(undefined8 *)(*(long *)(*(long *)(uVar6 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar13 + 0x18) <= uVar4) goto code_r0x01e39510;
    lVar8 = lVar13 + (long)(int)uVar4 * 0x10;
    uVar16 = (ulong)(uVar4 + 1);
    *(undefined8 *)(lVar8 + 0x28) = uStack_1d8;
    *(undefined8 *)(lVar8 + 0x20) = uStack_1e0;
  }
  uVar22 = uVar22 + 1;
  puVar12 = puVar12 + 6;
  if (uVar3 == uVar22) {
    return uVar5;
  }
  goto code_r0x01e39494;
}



// ============================================================
// RVA: 0x151f61c | Atlas.Stats.UnlockManager.EvaluateArcadeXPAwards
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x151fa7c | Atlas.Stats.UnlockManager.AddArcadeEventMedalToHistory
// ============================================================

/* WARNING: Possible PIC construction at 0x0151fadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151fe6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x0151fe70) */
/* WARNING: Removing unreachable block (ram,0x0151fe74) */
/* WARNING: Removing unreachable block (ram,0x0151fae0) */
/* WARNING: Removing unreachable block (ram,0x0151faf4) */
/* WARNING: Removing unreachable block (ram,0x0151fafc) */
/* WARNING: Removing unreachable block (ram,0x01e39058) */
/* WARNING: Removing unreachable block (ram,0x01e39080) */
/* WARNING: Removing unreachable block (ram,0x01e390ac) */
/* WARNING: Removing unreachable block (ram,0x01e390d4) */
/* WARNING: Removing unreachable block (ram,0x01e390ec) */
/* WARNING: Removing unreachable block (ram,0x01e39110) */
/* WARNING: Removing unreachable block (ram,0x01e39130) */
/* WARNING: Removing unreachable block (ram,0x01e3913c) */
/* WARNING: Removing unreachable block (ram,0x01e3917c) */
/* WARNING: Removing unreachable block (ram,0x01e39180) */
/* WARNING: Removing unreachable block (ram,0x01e391a4) */
/* WARNING: Removing unreachable block (ram,0x01e39240) */
/* WARNING: Removing unreachable block (ram,0x01e391cc) */
/* WARNING: Removing unreachable block (ram,0x01e391ec) */
/* WARNING: Removing unreachable block (ram,0x01e391f8) */
/* WARNING: Removing unreachable block (ram,0x01e39258) */
/* WARNING: Removing unreachable block (ram,0x01e3925c) */
/* WARNING: Removing unreachable block (ram,0x01e39280) */
/* WARNING: Removing unreachable block (ram,0x01e3928c) */
/* WARNING: Removing unreachable block (ram,0x01e39298) */
/* WARNING: Removing unreachable block (ram,0x01e392a8) */
/* WARNING: Removing unreachable block (ram,0x01e392b0) */
/* WARNING: Removing unreachable block (ram,0x01e392f8) */
/* WARNING: Removing unreachable block (ram,0x01e39304) */
/* WARNING: Removing unreachable block (ram,0x01e392b4) */
/* WARNING: Removing unreachable block (ram,0x01e392c4) */
/* WARNING: Removing unreachable block (ram,0x01e392ec) */
/* WARNING: Removing unreachable block (ram,0x01e391fc) */
/* WARNING: Removing unreachable block (ram,0x01e3921c) */
/* WARNING: Removing unreachable block (ram,0x01e39244) */
/* WARNING: Removing unreachable block (ram,0x01e39140) */
/* WARNING: Removing unreachable block (ram,0x01e39168) */
/* WARNING: Removing unreachable block (ram,0x01e39160) */
/* WARNING: Removing unreachable block (ram,0x01e3916c) */
/* WARNING: Removing unreachable block (ram,0x01e390bc) */
/* WARNING: Removing unreachable block (ram,0x01e39090) */
/* WARNING: Removing unreachable block (ram,0x01e39064) */
/* WARNING: Removing unreachable block (ram,0x0151fae4) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Removing unreachable block (ram,0x0151fe4c) */
/* WARNING: Removing unreachable block (ram,0x0151fe54) */
/* WARNING: Removing unreachable block (ram,0x0151fe60) */

ulong Atlas_Stats_UnlockManager__AddArcadeEventMedalToHistory
                (long param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int extraout_w1;
  undefined4 uVar11;
  int iVar12;
  long *extraout_x8;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 unaff_x24;
  undefined4 *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uStack_192;
  undefined1 uStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 auStack_120 [16];
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_a0 [16];
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4e36 & 1) == 0) {
    func_0x00f78a20(0x3d2e390);
    func_0x00f78a20(0x3d2e3a8);
    bRam0000000003eb4e36 = 1;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puStack_38 = (undefined *)0x151fae0;
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar4 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(uRam0000000003d2e390 + 0x18) + 0xc0) + 0x40))();
      return (ulong)(~uVar4 >> 0x1f);
    }
    uVar14 = uRam0000000003d2e390;
    auVar19 = func_0x00f78af4(0,param_2);
    lVar16 = auVar19._0_8_;
    puStack_48 = &System_Collections_Generic_Dictionary_DefinitionID__Int32Enum___ContainsValue;
    puStack_50 = (undefined1 *)&puStack_40;
    plVar6 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(uVar14 + 0x18) + 0xc0) + 0x68))
                               ();
    iVar12 = *(int *)(lVar16 + 0x20);
    if (0 < iVar12) {
      lVar15 = 0;
      uVar17 = 0;
      do {
        lVar13 = *(long *)(lVar16 + 0x18);
        if (lVar13 == 0) {
code_r0x01e393fc:
          func_0x00f78af4();
code_r0x01e39400:
          uVar8 = func_0x00f78b24();
          auVar20 = func_0x00f78ac0(uVar8,0);
          lVar13 = auVar20._8_8_;
          lVar15 = auVar20._0_8_;
          uStack_88 = &System_Collections_Generic_Dictionary_DefinitionID__Int32Enum___CopyTo;
          auStack_a0._0_8_ = lVar16;
          ppuStack_90 = &puStack_50;
          if (lVar13 == 0) goto code_r0x01e3959c;
          uVar4 = (uint)uVar14;
          auStack_a0 = auVar19;
          if (((int)uVar4 < 0) || (*(int *)(lVar13 + 0x18) < (int)uVar4)) goto code_r0x01e3951c;
          if (lVar15 == 0) goto code_r0x01e39598;
          uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x90))
                             (lVar15);
          if ((int)(*(int *)(lVar13 + 0x18) - uVar4) < (int)uVar17) {
            func_0x00f78a24(0x3d1fce8);
            uVar8 = func_0x00f78aec();
            uVar9 = func_0x00f78a24(0x3d6bc10);
            /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar9,0);
            goto code_r0x01e39600;
          }
          uVar2 = *(uint *)(lVar15 + 0x20);
          if ((int)uVar2 < 1) {
            return uVar17;
          }
          lVar16 = *(long *)(lVar15 + 0x18);
          if (lVar16 == 0) goto code_r0x01e39598;
          uVar7 = 0;
          puVar18 = (undefined4 *)(lVar16 + 0x30);
          goto code_r0x01e39494;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar17) goto code_r0x01e39400;
        if (-1 < *(int *)(lVar13 + lVar15 + 0x20)) {
          if (plVar6 == (long *)0x0) goto code_r0x01e393fc;
          param_4 = *(long *)(*plVar6 + 0x1c0);
          uVar14 = auVar19._8_8_;
          uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined4 *)(lVar13 + lVar15 + 0x30));
          if ((uVar7 & 1) != 0) {
            return 1;
          }
          iVar12 = *(int *)(lVar16 + 0x20);
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 0x18;
      } while ((long)uVar17 < (long)iVar12);
    }
    return 0;
  }
  auVar19 = func_0x00f78af4();
  lVar15 = auVar19._0_8_;
  puStack_38 = &Atlas_Stats_UnlockManager__DispatchAnalyticsArcadeProgressEvent;
  uVar8 = 0x3eb4000;
  lVar16 = 0x3d39cf0;
  puStack_50 = param_2;
  puStack_48 = (undefined *)param_3;
  if ((bRam0000000003eb4e0e & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d57348);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d39cf0);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d1d7c0);
    bRam0000000003eb4e0e = 1;
  }
  uStack_88 = (undefined *)(ulong)(uint)uStack_88;
  ppuStack_90 = (undefined1 **)0x0;
  lVar13 = func_0x00f78aec(/*System.Collections.Generic.List<ArcadeEventDefinition>_TypeInfo*/ uRam0000000003d1d7c0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar13,uRam0000000003d39cf0);
  if ((*(long *)(lVar15 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar15 + 0x10) + 0x10), lVar5 != 0)) {
    lVar16 = 0x3d1f000;
    /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar5,lVar13,uRam0000000003d57348);
    lVar5 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
    *(long *)(lVar15 + 0x60) = lVar5;
    if (lVar13 != 0) {
      uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
      if (0 < (int)*(uint *)(lVar13 + 0x18)) {
        uVar17 = 0;
        do {
          if ((uVar14 & 0xffffffff) <= uVar17) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + uVar17 * 8 + 0x20);
          unaff_x24 = *(undefined8 *)(lVar15 + 0x20);
          lVar16 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
          Atlas_UI_ArcadeEventMetagameData___ctor(lVar16,uVar8,unaff_x24,0);
          if (lVar16 == 0) goto code_r0x0151fd14;
          Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest
                    (lVar16,&ppuStack_90,(long)&uStack_88 + 4,0);
          lVar5 = *(long *)(lVar15 + 0x60);
          if (lVar5 == 0) goto code_r0x0151fd14;
          if (*(uint *)(lVar5 + 0x18) <= uStack_88._4_4_) goto code_r0x0151fd18;
          lVar1 = lVar5 + (long)(int)uStack_88._4_4_ * 4;
          *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
          uVar17 = uVar17 + 1;
          uVar14 = (ulong)*(int *)(lVar13 + 0x18);
        } while ((long)uVar17 < (long)uVar14);
      }
      if ((*(long *)(lVar15 + 0x38) != 0) && (lVar5 != 0)) {
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto code_r0x0151fd18;
        lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x48);
        if (lVar15 != 0) {
          uVar14 = /*Atlas.Analytics.AtlasAnalyticsEvents$$ArcadeProgressEvent*/ func_0x0145670c(lVar15,auVar19._8_8_,*(undefined4 *)(lVar5 + 0x2c),
                                   *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x24),0);
          return uVar14;
        }
      }
    }
  }
code_r0x0151fd14:
  func_0x00f78af4();
code_r0x0151fd18:
  uVar9 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar9,0);
  uVar14 = auVar19._8_8_;
  lVar15 = auVar19._0_8_;
  auStack_a0._8_8_ = &Atlas_Stats_UnlockManager__GetArcadeRewardId;
  lVar13 = 0x3eb4000;
  auStack_a0._0_8_ = &puStack_40;
  if ((bRam0000000003eb4e0d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d69068);
    bRam0000000003eb4e0d = 1;
  }
  if ((*(long *)(lVar15 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar15 + 0x10) + 0x10), lVar5 != 0)) {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar5,&stack0xffffffffffffff38,uRam0000000003d57528);
    if (*(long *)(lVar15 + 0x10) != 0) {
      lVar16 = 0x3d69068;
      lVar13 = *(long *)(*(long *)(lVar15 + 0x10) + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
      if (lVar13 != 0) {
        /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar13,uVar9,&stack0xffffffffffffff30,uRam0000000003d574e0);
        uVar9 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(uVar14,*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x20)
                                ,0);
        uVar14 = /*Atlas.Helpers.ArcadeUnlockHelper$$GetArcadeRewardID*/ func_0x01455174(uVar14,uVar9,0,lVar15,0);
        if ((int)uVar14 < 1) {
          return uVar14;
        }
      }
    }
  }
  func_0x00f78af4();
  uVar9 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar9,0);
  lVar5 = auVar19._8_8_;
  puStack_d8 = &Atlas_Stats_UnlockManager__IsUnlocked;
  lStack_100 = lVar16;
  lStack_f8 = lVar13;
  pppuStack_f0 = (undefined1 ***)uVar14;
  puStack_e8 = (undefined *)lVar15;
  puStack_e0 = (undefined8 *)auStack_a0;
  if ((bRam0000000003eb4e2b & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2b = 1;
  }
  lVar15 = *(long *)(auVar19._0_8_ + 0x20);
  uStack_170 = unaff_x24;
  uStack_168 = uVar8;
  if (lVar15 != 0) {
    lVar16 = Atlas_Save_SaveManager__get_SaveData(lVar15,0);
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = lStack_100;
    if ((bRam0000000003eb4e2c & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      bRam0000000003eb4e2c = 1;
    }
    auStack_120._8_8_ = 0;
    auStack_120._0_8_ = 0;
    puStack_108 = (undefined *)0x0;
    ppuStack_110 = (undefined8 **)0x0;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x38) != 0)) {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(auStack_120,*(long *)(lVar16 + 0x38),uRam0000000003d3d950);
      do {
        uVar14 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(auStack_120,uRam0000000003d33740);
        if ((uVar14 & 1) == 0) {
          uVar11 = 0x40;
          goto code_r0x01521720;
        }
        if (ppuStack_110 == (undefined8 **)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1521764);
          (*pcVar3)();
        }
        uVar17 = /*System.String$$Equals*/ func_0x029caa48(ppuStack_110,lVar5,4,0);
      } while ((uVar17 & 1) == 0);
      uVar11 = 0x42;
code_r0x01521720:
      lStack_130 = CONCAT44(lStack_130._4_4_,uVar11);
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(auStack_120,uRam0000000003d33738);
      if ((int)lStack_130 != 0x42) {
        uVar14 = 0;
      }
      return uVar14;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar5 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(auStack_120,uRam0000000003eb4000);
      if (lVar5 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar19 = func_0x00f78ac0(lVar5,0);
    lStack_160 = lVar15;
    uStack_158 = 0x3eb4000;
    puStack_138 = &Atlas_Stats_UnlockManager__IsUnlockUnseen;
    auStack_150._0_8_ = lVar16;
    auStack_150._8_8_ = lVar5;
    pppuStack_140 = (undefined8 ***)&puStack_e0;
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    lStack_180 = 0;
    lVar16 = *(long *)(auVar19._0_8_ + 0x20);
    if (((lVar16 == 0) || (lVar16 = Atlas_Save_SaveManager__get_SaveData(lVar16,0), lVar16 == 0)) ||
       (*(long *)(lVar16 + 0x38) == 0)) {
      auVar20 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_190,*(long *)(lVar16 + 0x38),uRam0000000003d3d950);
      do {
        uVar14 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_190,uRam0000000003d33740);
        uVar8 = uStack_178;
        if ((uVar14 & 1) == 0) goto code_r0x015218ec;
        if (lStack_180 == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar14 = /*System.String$$Equals*/ func_0x029caa48(lStack_180,auVar19._8_8_,4,0);
      } while ((uVar14 & 1) == 0);
      uStack_191 = (undefined1)uVar8;
      lVar16 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_191);
      uStack_192 = 1;
      uVar8 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_192);
      auVar20._8_8_ = uVar8;
      auVar20._0_8_ = uVar8;
      if (lVar16 != 0) {
        uVar14 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar16,uVar8,0);
        if ((uVar14 & 1) == 0) {
code_r0x015218ec:
          uVar14 = 0;
        }
        else {
          uVar14 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_190,uRam0000000003d33738);
        return uVar14;
      }
    }
    func_0x00f78af4(auVar20._0_8_,auVar20._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar3)();
  }
  auVar20 = func_0x00f78af4();
  lVar15 = auVar20._8_8_;
  lStack_128 = 0x3eb4000;
  puStack_108 = &Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent;
  lStack_130 = lVar16;
  ppuStack_110 = &puStack_e0;
  auStack_120 = auVar19;
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lStack_160 = 0x3d257d8;
  uStack_158 = 0x3eb4000;
  puStack_138 = &UNK_0151ffa4;
  pppuStack_140 = &ppuStack_110;
  auStack_150 = auVar20;
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar15 != 0) && (lVar16 = *(long *)(lVar15 + 0x58), lVar16 != 0)) {
    iVar12 = *(int *)(lVar16 + 0x18);
    if (iVar12 < 1) {
      return 0xffffffff;
    }
    uVar14 = 0;
    do {
      uVar4 = (uint)uVar14;
      if (*(uint *)(lVar16 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
      if (lVar16 == 0) break;
      uVar17 = /*System.String$$Equals*/ func_0x029caa48(lVar16,auVar20._0_8_,4,0);
      if ((uVar17 & 1) != 0) {
        return uVar14;
      }
      if (iVar12 - 1U == uVar4) {
        return 0xffffffff;
      }
      lVar16 = *(long *)(lVar15 + 0x58);
      uVar14 = (ulong)(uVar4 + 1);
    } while (lVar16 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
code_r0x01e39494:
  uVar4 = (uint)uVar14;
  if (*(uint *)(lVar16 + 0x18) <= uVar7) {
code_r0x01e39510:
    uVar8 = func_0x00f78b24();
    func_0x00f78ac0(uVar8,0);
code_r0x01e3951c:
    puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,uVar4);
    uVar8 = func_0x00f78a24(0x3d22910);
    uVar8 = func_0x00f78ae0(uVar8,&puStack_e0);
    func_0x00f78a24(0x3d1fcf8);
    lVar13 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d79a60);
    uVar10 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar13,uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d2e2a0);
    func_0x00f78ac0(lVar13,uVar8);
code_r0x01e39598:
    func_0x00f78af4();
    auVar19._8_8_ = auStack_a0._8_8_;
    auVar19._0_8_ = lVar13;
code_r0x01e3959c:
    auStack_a0._8_8_ = auVar19._8_8_;
    lVar13 = auVar19._0_8_;
    func_0x00f78a24(0x3d1fcf0);
    uVar8 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar8,uVar9,0);
code_r0x01e39600:
    uVar9 = func_0x00f78a24(0x3d2e2a0);
    auVar19 = func_0x00f78ac0(uVar8,uVar9);
    puStack_e8 = &System_Collections_Generic_Dictionary_DefinitionID__Int32Enum___GetEnumerator;
    ppuStack_110 = (undefined8 **)0x0;
    lStack_128 = 0;
    lStack_130 = 0;
    auStack_120._8_8_ = 0;
    auStack_120._0_8_ = 0;
    lStack_100 = lVar13;
    lStack_f8 = uVar8;
    pppuStack_f0 = &ppuStack_90;
    uVar14 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, Int32Enum>$$.ctor*/ func_0x01fbb1b8(&lStack_130,auVar19._0_8_,2,
                             *(undefined8 *)
                              (*(long *)(*(long *)(auVar19._8_8_ + 0x18) + 0xc0) + 0xb0));
    extraout_x8[1] = lStack_128;
    *extraout_x8 = lStack_130;
    extraout_x8[3] = auStack_120._8_8_;
    extraout_x8[2] = auStack_120._0_8_;
    extraout_x8[4] = (long)ppuStack_110;
    return uVar14;
  }
  if (-1 < (int)puVar18[-4]) {
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined *)0x0;
    uVar17 = /*System.Collections.Generic.KeyValuePair<DefinitionID, Int32Enum>$$.ctor*/ func_0x02316528(&puStack_e0,*(undefined8 *)(puVar18 + -2),*puVar18,
                             *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar13 + 0x18) <= uVar4) goto code_r0x01e39510;
    lVar15 = lVar13 + (long)(int)uVar4 * 0x10;
    uVar14 = (ulong)(uVar4 + 1);
    *(undefined **)(lVar15 + 0x28) = puStack_d8;
    *(undefined8 **)(lVar15 + 0x20) = puStack_e0;
  }
  uVar7 = uVar7 + 1;
  puVar18 = puVar18 + 6;
  if (uVar2 == uVar7) {
    return uVar17;
  }
  goto code_r0x01e39494;
}



// ============================================================
// RVA: 0x151fb24 | Atlas.Stats.UnlockManager.DispatchAnalyticsArcadeProgressEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x0151fe6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x0151fe70) */
/* WARNING: Removing unreachable block (ram,0x0151fe74) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_UnlockManager__DispatchAnalyticsArcadeProgressEvent
                (long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w1;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 unaff_x24;
  ulong uVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined1 ****ppppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long alStack_a0 [3];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  uint uStack_54;
  
  uVar13 = 0x3eb4000;
  lVar12 = 0x3d39cf0;
  if ((bRam0000000003eb4e0e & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d57348);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d39cf0);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d1d7c0);
    bRam0000000003eb4e0e = 1;
  }
  uStack_54 = 0;
  uStack_60 = 0;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ArcadeEventDefinition>_TypeInfo*/ uRam0000000003d1d7c0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar3,uRam0000000003d39cf0);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar4 == 0)) {
LAB_0151fd14:
    func_0x00f78af4();
  }
  else {
    lVar12 = 0x3d1f000;
    /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar4,lVar3,uRam0000000003d57348);
    lVar4 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
    *(long *)(param_1 + 0x60) = lVar4;
    if (lVar3 == 0) goto LAB_0151fd14;
    uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
    if (0 < (int)*(uint *)(lVar3 + 0x18)) {
      uVar14 = 0;
      do {
        if ((uVar8 & 0xffffffff) <= uVar14) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + uVar14 * 8 + 0x20);
        unaff_x24 = *(undefined8 *)(param_1 + 0x20);
        lVar12 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
        Atlas_UI_ArcadeEventMetagameData___ctor(lVar12,uVar13,unaff_x24,0);
        if (lVar12 == 0) goto LAB_0151fd14;
        Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar12,&uStack_60,&uStack_54,0);
        lVar4 = *(long *)(param_1 + 0x60);
        if (lVar4 == 0) goto LAB_0151fd14;
        if (*(uint *)(lVar4 + 0x18) <= uStack_54) goto LAB_0151fd18;
        lVar9 = lVar4 + (long)(int)uStack_54 * 4;
        *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + 1;
        uVar14 = uVar14 + 1;
        uVar8 = (ulong)*(int *)(lVar3 + 0x18);
      } while ((long)uVar14 < (long)uVar8);
    }
    if ((*(long *)(param_1 + 0x38) == 0) || (lVar4 == 0)) goto LAB_0151fd14;
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x48);
      if (lVar9 != 0) {
        uVar8 = /*Atlas.Analytics.AtlasAnalyticsEvents$$ArcadeProgressEvent*/ func_0x0145670c(lVar9,param_2,*(undefined4 *)(lVar4 + 0x2c),
                                *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x24),0);
        return uVar8;
      }
      goto LAB_0151fd14;
    }
  }
LAB_0151fd18:
  uVar5 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar5,0);
  uVar8 = auVar16._8_8_;
  lVar4 = auVar16._0_8_;
  puStack_68 = &Atlas_Stats_UnlockManager__GetArcadeRewardId;
  lVar9 = 0x3eb4000;
  alStack_a0[2] = lVar12;
  lStack_88 = lVar3;
  lStack_80 = param_1;
  uStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e0d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d69068);
    bRam0000000003eb4e0d = 1;
  }
  alStack_a0[0] = 0;
  alStack_a0[1] = 0;
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar3 == 0)) {
code_r0x0151fe90:
    func_0x00f78af4();
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar3,alStack_a0 + 1,uRam0000000003d57528);
    if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x0151fe90;
    lVar3 = 0x3d69068;
    lVar9 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
    lVar12 = lVar3;
    if (lVar9 == 0) goto code_r0x0151fe90;
    /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar9,uVar5,alStack_a0,uRam0000000003d574e0);
    uVar5 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(uVar8,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x20),0);
    uVar8 = /*Atlas.Helpers.ArcadeUnlockHelper$$GetArcadeRewardID*/ func_0x01455174(uVar8,uVar5,alStack_a0[0],lVar4,0);
    if ((int)(uint)uVar8 < 1) {
      return uVar8;
    }
    if ((alStack_a0[0] == 0) ||
       (lVar10 = *(long *)(alStack_a0[0] + 0x28), lVar12 = 0x3d69068, lVar10 == 0))
    goto code_r0x0151fe90;
    lVar12 = lVar3;
    if ((uint)uVar8 < *(uint *)(lVar10 + 0x18)) {
      auVar16._8_8_ = *(undefined8 *)(lVar10 + (uVar8 & 0xffffffff) * 8 + 0x20);
      auVar16._0_8_ = lVar4;
      puVar15 = &UNK_0151fe70;
      goto code_r0x0151fea0;
    }
  }
  uVar5 = func_0x00f78b24();
  puVar15 = &Atlas_Stats_UnlockManager__IsUnlocked;
  auVar16 = func_0x00f78ac0(uVar5,0);
code_r0x0151fea0:
  lVar3 = auVar16._8_8_;
  lStack_d0 = lVar12;
  lStack_c8 = lVar9;
  uStack_c0 = uVar8;
  lStack_b8 = lVar4;
  ppuStack_b0 = &puStack_70;
  puStack_a8 = puVar15;
  if ((bRam0000000003eb4e2b & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2b = 1;
  }
  lVar4 = *(long *)(auVar16._0_8_ + 0x20);
  uStack_140 = unaff_x24;
  uStack_138 = uVar13;
  if (lVar4 != 0) {
    lVar12 = Atlas_Save_SaveManager__get_SaveData(lVar4,0);
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = lStack_d0;
    if ((bRam0000000003eb4e2c & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      bRam0000000003eb4e2c = 1;
    }
    auStack_f0._8_8_ = 0;
    auStack_f0._0_8_ = 0;
    puStack_d8 = (undefined *)0x0;
    pppuStack_e0 = (undefined1 ***)0x0;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(auStack_f0,*(long *)(lVar12 + 0x38),uRam0000000003d3d950);
      do {
        uVar8 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(auStack_f0,uRam0000000003d33740);
        if ((uVar8 & 1) == 0) {
          uVar7 = 0x40;
          goto code_r0x01521720;
        }
        if (pppuStack_e0 == (undefined1 ***)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1521764);
          (*pcVar2)();
        }
        uVar14 = /*System.String$$Equals*/ func_0x029caa48(pppuStack_e0,lVar3,4,0);
      } while ((uVar14 & 1) == 0);
      uVar7 = 0x42;
code_r0x01521720:
      lStack_100 = CONCAT44(lStack_100._4_4_,uVar7);
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(auStack_f0,uRam0000000003d33738);
      if ((int)lStack_100 != 0x42) {
        uVar8 = 0;
      }
      return uVar8;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar3 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(auStack_f0,uRam0000000003eb4000);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar16 = func_0x00f78ac0(lVar3,0);
    lStack_130 = lVar4;
    uStack_128 = 0x3eb4000;
    puStack_108 = &Atlas_Stats_UnlockManager__IsUnlockUnseen;
    auStack_120._0_8_ = lVar12;
    auStack_120._8_8_ = lVar3;
    ppppuStack_110 = (undefined1 ****)&ppuStack_b0;
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    lStack_150 = 0;
    lVar12 = *(long *)(auVar16._0_8_ + 0x20);
    if (((lVar12 == 0) || (lVar12 = Atlas_Save_SaveManager__get_SaveData(lVar12,0), lVar12 == 0)) ||
       (*(long *)(lVar12 + 0x38) == 0)) {
      auVar17 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_160,*(long *)(lVar12 + 0x38),uRam0000000003d3d950);
      do {
        uVar8 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_160,uRam0000000003d33740);
        uVar13 = uStack_148;
        if ((uVar8 & 1) == 0) goto code_r0x015218ec;
        if (lStack_150 == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar8 = /*System.String$$Equals*/ func_0x029caa48(lStack_150,auVar16._8_8_,4,0);
      } while ((uVar8 & 1) == 0);
      uStack_161 = (undefined1)uVar13;
      lVar12 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_161);
      uStack_162 = 1;
      uVar13 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_162);
      auVar17._8_8_ = uVar13;
      auVar17._0_8_ = uVar13;
      if (lVar12 != 0) {
        uVar8 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar12,uVar13,0);
        if ((uVar8 & 1) == 0) {
code_r0x015218ec:
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_160,uRam0000000003d33738);
        return uVar8;
      }
    }
    func_0x00f78af4(auVar17._0_8_,auVar17._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  auVar17 = func_0x00f78af4();
  lVar3 = auVar17._8_8_;
  uStack_f8 = 0x3eb4000;
  puStack_d8 = &Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent;
  lStack_100 = lVar12;
  pppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar16;
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lStack_130 = 0x3d257d8;
  uStack_128 = 0x3eb4000;
  puStack_108 = &UNK_0151ffa4;
  ppppuStack_110 = &pppuStack_e0;
  auStack_120 = auVar17;
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar3 != 0) && (lVar12 = *(long *)(lVar3 + 0x58), lVar12 != 0)) {
    iVar1 = *(int *)(lVar12 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar8 = 0;
    do {
      uVar11 = (uint)uVar8;
      if (*(uint *)(lVar12 + 0x18) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar11 * 0x10 + 0x20);
      if (lVar12 == 0) break;
      uVar14 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar17._0_8_,4,0);
      if ((uVar14 & 1) != 0) {
        return uVar8;
      }
      if (iVar1 - 1U == uVar11) {
        return 0xffffffff;
      }
      lVar12 = *(long *)(lVar3 + 0x58);
      uVar8 = (ulong)(uVar11 + 1);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x151fd24 | Atlas.Stats.UnlockManager.GetArcadeRewardId
// ============================================================

/* WARNING: Possible PIC construction at 0x0151fe6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x0151fe70) */
/* WARNING: Removing unreachable block (ram,0x0151fe74) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_UnlockManager__GetArcadeRewardId(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int extraout_w1;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 unaff_x22;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long alStack_40 [2];
  
  lVar11 = 0x3eb4000;
  if ((bRam0000000003eb4e0d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d69068);
    bRam0000000003eb4e0d = 1;
  }
  alStack_40[0] = 0;
  alStack_40[1] = 0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) {
LAB_0151fe90:
    func_0x00f78af4();
  }
  else {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar2,alStack_40 + 1,uRam0000000003d57528);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0151fe90;
    uVar4 = 0x3d69068;
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
    unaff_x22 = uVar4;
    if (lVar11 == 0) goto LAB_0151fe90;
    /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar11,uVar3,alStack_40,uRam0000000003d574e0);
    uVar3 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                            0);
    param_2 = /*Atlas.Helpers.ArcadeUnlockHelper$$GetArcadeRewardID*/ func_0x01455174(param_2,uVar3,alStack_40[0],param_1,0);
    if ((int)(uint)param_2 < 1) {
      return param_2;
    }
    if ((alStack_40[0] == 0) ||
       (lVar2 = *(long *)(alStack_40[0] + 0x28), unaff_x22 = 0x3d69068, lVar2 == 0))
    goto LAB_0151fe90;
    unaff_x22 = uVar4;
    if ((uint)param_2 < *(uint *)(lVar2 + 0x18)) {
      lVar8 = *(long *)(lVar2 + (param_2 & 0xffffffff) * 8 + 0x20);
      puVar12 = (undefined *)0x151fe70;
      lVar2 = param_1;
      goto code_r0x0151fea0;
    }
  }
  uVar4 = func_0x00f78b24();
  puVar12 = &Atlas_Stats_UnlockManager__IsUnlocked;
  auVar13 = func_0x00f78ac0(uVar4,0);
  lVar8 = auVar13._8_8_;
  lVar2 = auVar13._0_8_;
code_r0x0151fea0:
  uStack_70 = unaff_x22;
  lStack_68 = lVar11;
  uStack_60 = param_2;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar12;
  if ((bRam0000000003eb4e2b & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2b = 1;
  }
  if (*(long *)(lVar2 + 0x20) != 0) {
    lVar11 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar2 + 0x20),0);
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb4e2c & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      bRam0000000003eb4e2c = 1;
    }
    lStack_88 = 0;
    lStack_90 = 0;
    puStack_78 = (undefined *)0x0;
    ppuStack_80 = (undefined1 **)0x0;
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0x38) != 0)) {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&lStack_90,*(long *)(lVar11 + 0x38),uRam0000000003d3d950);
      do {
        uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&lStack_90,uRam0000000003d33740);
        if ((uVar5 & 1) == 0) {
          iVar9 = 0x40;
          goto code_r0x01521720;
        }
        if (ppuStack_80 == (undefined1 **)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1521764);
          (*pcVar1)();
        }
        uVar6 = /*System.String$$Equals*/ func_0x029caa48(ppuStack_80,lVar8,4,0);
      } while ((uVar6 & 1) == 0);
      iVar9 = 0x42;
code_r0x01521720:
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&lStack_90,uRam0000000003d33738);
      if (iVar9 != 0x42) {
        uVar5 = 0;
      }
      return uVar5;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar8 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&lStack_90,uRam0000000003eb4000);
      if (lVar8 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar13 = func_0x00f78ac0(lVar8,0);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    lStack_f0 = 0;
    lVar11 = *(long *)(auVar13._0_8_ + 0x20);
    if (((lVar11 == 0) || (lVar11 = Atlas_Save_SaveManager__get_SaveData(lVar11,0), lVar11 == 0)) ||
       (*(long *)(lVar11 + 0x38) == 0)) {
      auVar13 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_100,*(long *)(lVar11 + 0x38),uRam0000000003d3d950);
      do {
        uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_100,uRam0000000003d33740);
        uVar4 = uStack_e8;
        if ((uVar5 & 1) == 0) goto code_r0x015218ec;
        if (lStack_f0 == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(lStack_f0,auVar13._8_8_,4,0);
      } while ((uVar5 & 1) == 0);
      uStack_101 = (undefined1)uVar4;
      lVar11 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_101);
      uStack_102 = 1;
      uVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_102);
      auVar13._8_8_ = uVar4;
      auVar13._0_8_ = uVar4;
      if (lVar11 != 0) {
        uVar5 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar11,uVar4,0);
        if ((uVar5 & 1) == 0) {
code_r0x015218ec:
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_100,uRam0000000003d33738);
        return uVar5;
      }
    }
    func_0x00f78af4(auVar13._0_8_,auVar13._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar1)();
  }
  auVar13 = func_0x00f78af4();
  lVar11 = auVar13._8_8_;
  puStack_78 = &Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent;
  lStack_90 = lVar2;
  lStack_88 = lVar8;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar11 != 0) && (lVar2 = *(long *)(lVar11 + 0x58), lVar2 != 0)) {
    iVar9 = *(int *)(lVar2 + 0x18);
    if (iVar9 < 1) {
      return 0xffffffff;
    }
    uVar5 = 0;
    do {
      uVar10 = (uint)uVar5;
      if (*(uint *)(lVar2 + 0x18) <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar10 * 0x10 + 0x20);
      if (lVar2 == 0) break;
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar2,auVar13._0_8_,4,0);
      if ((uVar6 & 1) != 0) {
        return uVar5;
      }
      if (iVar9 - 1U == uVar10) {
        return 0xffffffff;
      }
      lVar2 = *(long *)(lVar11 + 0x58);
      uVar5 = (ulong)(uVar10 + 1);
    } while (lVar2 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x151fea0 | Atlas.Stats.UnlockManager.IsUnlocked
// ============================================================

/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */

ulong Atlas_Stats_UnlockManager__IsUnlocked(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4e2b & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2b = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0);
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb4e2c & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      bRam0000000003eb4e2c = 1;
    }
    lStack_48 = 0;
    lStack_50 = 0;
    puStack_38 = (undefined *)0x0;
    puStack_40 = (undefined1 *)0x0;
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x38) != 0)) {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&lStack_50,*(long *)(lVar2 + 0x38),uRam0000000003d3d950);
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&lStack_50,uRam0000000003d33740);
        if ((uVar3 & 1) == 0) {
          iVar7 = 0x40;
          goto code_r0x01521720;
        }
        if (puStack_40 == (undefined1 *)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1521764);
          (*pcVar1)();
        }
        uVar4 = /*System.String$$Equals*/ func_0x029caa48(puStack_40,param_2,4,0);
      } while ((uVar4 & 1) == 0);
      iVar7 = 0x42;
code_r0x01521720:
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&lStack_50,uRam0000000003d33738);
      if (iVar7 != 0x42) {
        uVar3 = 0;
      }
      return uVar3;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      param_2 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&lStack_50,uRam0000000003eb4000);
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar10 = func_0x00f78ac0(param_2,0);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    lVar2 = *(long *)(auVar10._0_8_ + 0x20);
    if (((lVar2 == 0) || (lVar2 = Atlas_Save_SaveManager__get_SaveData(lVar2,0), lVar2 == 0)) ||
       (*(long *)(lVar2 + 0x38) == 0)) {
      auVar10 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_c0,*(long *)(lVar2 + 0x38),uRam0000000003d3d950);
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_c0,uRam0000000003d33740);
        uVar6 = uStack_a8;
        if ((uVar3 & 1) == 0) goto code_r0x015218ec;
        if (lStack_b0 == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_b0,auVar10._8_8_,4,0);
      } while ((uVar3 & 1) == 0);
      uStack_c1 = (undefined1)uVar6;
      lVar2 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_c1);
      uStack_c2 = 1;
      uVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_c2);
      auVar10._8_8_ = uVar6;
      auVar10._0_8_ = uVar6;
      if (lVar2 != 0) {
        uVar3 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar2,uVar6,0);
        if ((uVar3 & 1) == 0) {
code_r0x015218ec:
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_c0,uRam0000000003d33738);
        return uVar3;
      }
    }
    func_0x00f78af4(auVar10._0_8_,auVar10._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar1)();
  }
  auVar10 = func_0x00f78af4();
  lVar2 = auVar10._8_8_;
  puStack_38 = &Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent;
  lStack_50 = param_1;
  lStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar2 != 0) && (lVar9 = *(long *)(lVar2 + 0x58), lVar9 != 0)) {
    iVar7 = *(int *)(lVar9 + 0x18);
    if (iVar7 < 1) {
      return 0xffffffff;
    }
    uVar3 = 0;
    do {
      uVar8 = (uint)uVar3;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar8 * 0x10 + 0x20);
      if (lVar9 == 0) break;
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar9,auVar10._0_8_,4,0);
      if ((uVar4 & 1) != 0) {
        return uVar3;
      }
      if (iVar7 - 1U == uVar8) {
        return 0xffffffff;
      }
      lVar9 = *(long *)(lVar2 + 0x58);
      uVar3 = (ulong)(uVar8 + 1);
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x151ff28 | Atlas.Stats.UnlockManager.GetChallengesCompletedBitFieldForEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */

uint Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent
               (undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x58), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_1,4,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      if (iVar1 - 1U == uVar3) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_2 + 0x58);
      uVar3 = uVar3 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x1520004 | Atlas.Stats.UnlockManager.GetSeenCompletedChallengesBitFieldForEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */

uint Atlas_Stats_UnlockManager__GetSeenCompletedChallengesBitFieldForEvent
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4e10 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e10 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    auVar6 = func_0x00f78af4();
    lVar2 = auVar6._8_8_;
    param_2 = auVar6._0_8_;
  }
  else {
    lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0);
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar2 != 0) && (lVar5 = *(long *)(lVar2 + 0x58), lVar5 != 0)) {
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar4 = 0;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
      if (lVar5 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar5,param_2,4,0);
      if ((uVar3 & 1) != 0) {
        return uVar4;
      }
      if (iVar1 - 1U == uVar4) {
        return 0xffffffff;
      }
      lVar5 = *(long *)(lVar2 + 0x58);
      uVar4 = uVar4 + 1;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x1520124 | Atlas.Stats.UnlockManager.GetEventProgressionIndex
// ============================================================

uint Atlas_Stats_UnlockManager__GetEventProgressionIndex(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x58), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_1,4,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      if (iVar1 - 1U == uVar3) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_2 + 0x58);
      uVar3 = uVar3 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x15201f4 | Atlas.Stats.UnlockManager.GetChallengesCompletedCountForEvent
// ============================================================

int Atlas_Stats_UnlockManager__GetChallengesCompletedCountForEvent(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar5 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e12 & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e12 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    unaff_x30 = &Atlas_Stats_UnlockManager__GetChallengesCompletedCountForEvent;
    auVar5 = func_0x00f78af4();
    uVar3 = auVar5._8_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    uVar4 = auVar5._0_8_;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = puVar1;
  }
  else {
    uVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0);
    uVar4 = param_2;
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4e13 & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e13 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent(uVar4,uVar3);
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
  if ((bRam0000000003eb4e2e & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2e = 1;
  }
  if (((((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       ((*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) != 0 ||
        (func_0x00f78ad0(), (*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0)))) &&
      ((*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) != 0 ||
       (func_0x00f78ad0(), (*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0)))) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return (uVar2 >> 1 & 1) + (uVar2 & 1) + (uVar2 >> 2 & 1);
}



// ============================================================
// RVA: 0x152027c | Atlas.Stats.UnlockManager.GetChallengesCompletedCountForEvent
// ============================================================

int Atlas_Stats_UnlockManager__GetChallengesCompletedCountForEvent
              (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((bRam0000000003eb4e13 & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e13 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent(param_1,param_2);
  if ((bRam0000000003eb4e2e & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2e = 1;
  }
  if ((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) {
    if (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0) {
      func_0x00f78ad0();
      if ((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) == 0) goto code_r0x01520374;
    }
    if (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0) {
      func_0x00f78ad0();
      if ((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) == 0) goto code_r0x01520374;
    }
    if (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0) {
      func_0x00f78ad0();
    }
  }
code_r0x01520374:
  return (uVar1 >> 1 & 1) + (uVar1 & 1) + (uVar1 >> 2 & 1);
}



// ============================================================
// RVA: 0x15202f0 | Atlas.Stats.UnlockManager.ChallengeCompletedCount
// ============================================================

int Atlas_Stats_UnlockManager__ChallengeCompletedCount(uint param_1)

{
  if ((bRam0000000003eb4e2e & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e2e = 1;
  }
  if ((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) {
    if (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0) {
      func_0x00f78ad0();
      if ((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) == 0) goto LAB_01520374;
    }
    if (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0) {
      func_0x00f78ad0();
      if ((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) == 0) goto LAB_01520374;
    }
    if (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0) {
      func_0x00f78ad0();
    }
  }
LAB_01520374:
  return (param_1 >> 1 & 1) + (param_1 & 1) + (param_1 >> 2 & 1);
}



// ============================================================
// RVA: 0x1520398 | Atlas.Stats.UnlockManager.GetSeenChallengesCompletedCountForEvent
// ============================================================

uint Atlas_Stats_UnlockManager__GetSeenChallengesCompletedCountForEvent
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam0000000003eb4e14 & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e14 = 1;
  }
  bVar2 = Atlas_Stats_UnlockManager__GetSeenCompletedChallengesBitFieldForEvent(param_1,param_2);
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = **(long **)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8);
  if (lVar7 == 0) {
LAB_015204a0:
    func_0x00f78af4();
    iVar3 = Atlas_Stats_UnlockManager__GetChallengesCompletedCountForEvent();
    return (uint)(2 < iVar3);
  }
  if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
    uVar5 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar8) {
        uVar4 = func_0x00f78b24();
        func_0x00f78ac0(uVar4,0);
        goto LAB_015204a0;
      }
      bVar1 = *(byte *)(lVar7 + 0x20 + uVar8);
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bVar1 & (bVar2 ^ 0xff)) == 0) {
        uVar6 = uVar6 + 1;
      }
      uVar8 = uVar8 + 1;
      uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  return uVar6;
}



// ============================================================
// RVA: 0x15204a4 | Atlas.Stats.UnlockManager.HaveAllChallengesBeenCompletedForEvent
// ============================================================

bool Atlas_Stats_UnlockManager__HaveAllChallengesBeenCompletedForEvent(void)

{
  int iVar1;
  
  iVar1 = Atlas_Stats_UnlockManager__GetChallengesCompletedCountForEvent();
  return 2 < iVar1;
}



// ============================================================
// RVA: 0x15204c0 | Atlas.Stats.UnlockManager.GetChallengesNotCompletedCountForEvent
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520548 | Atlas.Stats.UnlockManager.GetChallengesNotCompletedCountForEvent
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520654 | Atlas.Stats.UnlockManager.SetAllCompletedChallengesAsSeenForChapter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520724 | Atlas.Stats.UnlockManager.SetAllCompletedChallengesAsSeenForEvent
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520830 | Atlas.Stats.UnlockManager.GetEventProgressionIndex
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15208b8 | Atlas.Stats.UnlockManager.GetChallengesCompletedCountForChapter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520940 | Atlas.Stats.UnlockManager.GetChallengesCompletedCountForChapter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520a38 | Atlas.Stats.UnlockManager.GetSeenCompletedChallengesCountForChapter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520af4 | Atlas.Stats.UnlockManager.GetChallengesNotCompletedCountForChapter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520b7c | Atlas.Stats.UnlockManager.GetChallengesNotCompletedCountForChapter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520c74 | Atlas.Stats.UnlockManager.GetFirstEventWithUncompletedChallenges
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520cfc | Atlas.Stats.UnlockManager.GetFirstEventWithUncompletedChallenges
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520dfc | Atlas.Stats.UnlockManager.GetChallengesCompletedCountForCampaign
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1520e74 | Atlas.Stats.UnlockManager.HasCompletedAllChallengesForCampaign
// ============================================================

bool Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign
               (long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = Atlas_Stats_UnlockManager__GetChallengesCompletedCountForCampaign();
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = Atlas_Definitions_AtlasDefinitions__GetChallengeCountForCampaign
                      (*(long *)(param_1 + 0x10),param_2,0);
    return iVar2 <= iVar1;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4e22 & 1) == 0) {
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e22 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCount*/ func_0x01520f74(uVar3);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return **(int **)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) <= iVar1;
}



// ============================================================
// RVA: 0x1520ec4 | Atlas.Stats.UnlockManager.HasCompletedRequiredChallengesForLeague
// ============================================================

bool Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(undefined8 param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb4e22 & 1) == 0) {
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e22 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCount*/ func_0x01520f74(param_1);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return **(int **)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) <= iVar1;
}



// ============================================================
// RVA: 0x1520f74 | Atlas.Stats.UnlockManager.GetChallengesCompletedCount
// ============================================================

/* WARNING: Possible PIC construction at 0x01521230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01521234) */
/* WARNING: Removing unreachable block (ram,0x01521274) */
/* WARNING: Removing unreachable block (ram,0x0152123c) */
/* WARNING: Removing unreachable block (ram,0x01521240) */
/* WARNING: Removing unreachable block (ram,0x01521288) */
/* WARNING: Removing unreachable block (ram,0x01521248) */
/* WARNING: Removing unreachable block (ram,0x01521258) */
/* WARNING: Removing unreachable block (ram,0x01521260) */
/* WARNING: Removing unreachable block (ram,0x01521278) */

ulong Atlas_Stats_UnlockManager__GetChallengesCompletedCount(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((bRam0000000003eb4e23 & 1) == 0) {
    func_0x00f78a20(0x3d33720);
    func_0x00f78a20(0x3d33728);
    func_0x00f78a20(0x3d33730);
    func_0x00f78a20(0x3d3d8c8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e23 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    /*System.Collections.Generic.List<SaveData.EventProgression>$$GetEnumerator*/ func_0x0258a968(&uStack_60,*(long *)(param_1 + 0x58),uRam0000000003d3d8c8);
    uVar5 = 0;
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<SaveData.EventProgression>$$MoveNext*/ func_0x01f836a0(&uStack_60,uRam0000000003d33728), (uVar2 & 1) != 0) {
      uVar2 = uStack_48 & 0xff;
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = Atlas_Stats_UnlockManager__ChallengeCompletedCount(uVar2);
      uVar5 = (ulong)(uint)(iVar1 + (int)uVar5);
    }
    /*System.Collections.Generic.List.Enumerator<SaveData.EventProgression>$$Dispose*/ func_0x01f8369c(&uStack_60,uRam0000000003d33720);
    return uVar5;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar6 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SaveData.EventProgression>$$Dispose*/ func_0x01f8369c(&uStack_60,uRam0000000003eb4000);
    if (lVar6 == 0) {
      return param_1;
    }
    func_0x00f78ac0(lVar6,0);
  }
  auVar11 = __Unwind_Resume();
  if ((bRam0000000003eb4e24 & 1) == 0) {
    func_0x00f78a20(0x3d2dbc0);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e24 = 1;
  }
  if ((auVar11._0_8_ != 0) && (lVar6 = *(long *)(auVar11._0_8_ + 0x50), lVar6 != 0)) {
    if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar2 = 0;
      uVar4 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      puVar10 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (uVar4 <= uVar2) {
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto code_r0x015211c0;
        }
        uVar8 = *puVar10;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = Atlas_Stats_UnlockManager__GetChallengesCompletedCountForChapter
                          (uVar8,auVar11._8_8_);
        uVar5 = (ulong)(uint)(iVar1 + (int)uVar5);
        uVar2 = uVar2 + 1;
        uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
        puVar10 = puVar10 + 2;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    return uVar5;
  }
code_r0x015211c0:
  auVar11 = func_0x00f78af4();
  lVar6 = auVar11._8_8_;
  if ((bRam0000000003eb4e27 & 1) == 0) {
    func_0x00f78a20(0x3d3d870);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e27 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e48 & 1) == 0) {
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d870);
    bRam0000000003eb4e48 = 1;
  }
  if ((lVar6 != 0) && (lVar9 = *(long *)(lVar6 + 0x50), lVar9 != 0)) {
    iVar1 = *(int *)(lVar9 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar5 = 0;
    do {
      uVar7 = (uint)uVar5;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar7 * 0x18 + 0x20);
      if (lVar9 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar9,auVar11._0_8_,4,0);
      if ((uVar2 & 1) != 0) {
        return uVar5;
      }
      if (iVar1 - 1U == uVar7) {
        return 0xffffffff;
      }
      lVar9 = *(long *)(lVar6 + 0x50);
      uVar5 = (ulong)(uVar7 + 1);
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x15210cc | Atlas.Stats.UnlockManager.GetChallengesCompletedCountForCampaign
// ============================================================

/* WARNING: Possible PIC construction at 0x01521230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01521234) */
/* WARNING: Removing unreachable block (ram,0x01521274) */
/* WARNING: Removing unreachable block (ram,0x0152123c) */
/* WARNING: Removing unreachable block (ram,0x01521240) */
/* WARNING: Removing unreachable block (ram,0x01521288) */
/* WARNING: Removing unreachable block (ram,0x01521248) */
/* WARNING: Removing unreachable block (ram,0x01521258) */
/* WARNING: Removing unreachable block (ram,0x01521260) */
/* WARNING: Removing unreachable block (ram,0x01521278) */

uint Atlas_Stats_UnlockManager__GetChallengesCompletedCountForCampaign
               (long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4e24 & 1) == 0) {
    func_0x00f78a20(0x3d2dbc0);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e24 = 1;
  }
  if ((param_1 != 0) && (lVar5 = *(long *)(param_1 + 0x50), lVar5 != 0)) {
    if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar6 = 0;
      uVar2 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      puVar8 = (undefined8 *)(lVar5 + 0x28);
      do {
        if (uVar2 <= uVar6) {
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto LAB_015211c0;
        }
        uVar4 = *puVar8;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = Atlas_Stats_UnlockManager__GetChallengesCompletedCountForChapter(uVar4,param_2);
        uVar3 = iVar1 + uVar3;
        uVar6 = uVar6 + 1;
        uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
        puVar8 = puVar8 + 2;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return uVar3;
  }
LAB_015211c0:
  auVar9 = func_0x00f78af4();
  lVar5 = auVar9._8_8_;
  if ((bRam0000000003eb4e27 & 1) == 0) {
    func_0x00f78a20(0x3d3d870);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e27 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e48 & 1) == 0) {
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d870);
    bRam0000000003eb4e48 = 1;
  }
  if ((lVar5 != 0) && (lVar7 = *(long *)(lVar5 + 0x50), lVar7 != 0)) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 0x18 + 0x20);
      if (lVar7 == 0) break;
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar7,auVar9._0_8_,4,0);
      if ((uVar6 & 1) != 0) {
        return uVar3;
      }
      if (iVar1 - 1U == uVar3) {
        return 0xffffffff;
      }
      lVar7 = *(long *)(lVar5 + 0x50);
      uVar3 = uVar3 + 1;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x15211c4 | Atlas.Stats.UnlockManager.GetXpForCharacter
// ============================================================

/* WARNING: Possible PIC construction at 0x01521230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01521234) */
/* WARNING: Removing unreachable block (ram,0x01521274) */
/* WARNING: Removing unreachable block (ram,0x0152123c) */
/* WARNING: Removing unreachable block (ram,0x01521240) */
/* WARNING: Removing unreachable block (ram,0x01521288) */
/* WARNING: Removing unreachable block (ram,0x01521248) */
/* WARNING: Removing unreachable block (ram,0x01521258) */
/* WARNING: Removing unreachable block (ram,0x01521260) */
/* WARNING: Removing unreachable block (ram,0x01521278) */

uint Atlas_Stats_UnlockManager__GetXpForCharacter(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4e27 & 1) == 0) {
    func_0x00f78a20(0x3d3d870);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e27 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e48 & 1) == 0) {
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d870);
    bRam0000000003eb4e48 = 1;
  }
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x50), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x18 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_1,4,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      if (iVar1 - 1U == uVar3) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_2 + 0x50);
      uVar3 = uVar3 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x152128c | Atlas.Stats.UnlockManager.GetCharacterProgressionIndex
// ============================================================

uint Atlas_Stats_UnlockManager__GetCharacterProgressionIndex(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4e48 & 1) == 0) {
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d870);
    bRam0000000003eb4e48 = 1;
  }
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x50), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x18 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_1,4,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      if (iVar1 - 1U == uVar3) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_2 + 0x50);
      uVar3 = uVar3 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x1521360 | Atlas.Stats.UnlockManager.GetLastUsedSkinIDForCharacter
// ============================================================

/* WARNING: Possible PIC construction at 0x015213a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01521574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01521598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01521578) */
/* WARNING: Removing unreachable block (ram,0x01521580) */
/* WARNING: Removing unreachable block (ram,0x01521590) */
/* WARNING: Removing unreachable block (ram,0x015213a4) */
/* WARNING: Removing unreachable block (ram,0x015213ac) */
/* WARNING: Removing unreachable block (ram,0x015213b8) */
/* WARNING: Removing unreachable block (ram,0x015213c4) */
/* WARNING: Removing unreachable block (ram,0x015213cc) */
/* WARNING: Removing unreachable block (ram,0x015213d8) */
/* WARNING: Removing unreachable block (ram,0x015213e0) */
/* WARNING: Removing unreachable block (ram,0x015213fc) */
/* WARNING: Removing unreachable block (ram,0x01521404) */
/* WARNING: Removing unreachable block (ram,0x01521410) */
/* WARNING: Removing unreachable block (ram,0x01521454) */
/* WARNING: Removing unreachable block (ram,0x01521418) */
/* WARNING: Removing unreachable block (ram,0x01521428) */
/* WARNING: Removing unreachable block (ram,0x01521430) */
/* WARNING: Removing unreachable block (ram,0x01521440) */
/* WARNING: Removing unreachable block (ram,0x0152159c) */
/* WARNING: Removing unreachable block (ram,0x015215a8) */
/* WARNING: Removing unreachable block (ram,0x015215b4) */
/* WARNING: Removing unreachable block (ram,0x015215bc) */
/* WARNING: Removing unreachable block (ram,0x015215c8) */
/* WARNING: Removing unreachable block (ram,0x015215d0) */
/* WARNING: Removing unreachable block (ram,0x015215ec) */
/* WARNING: Removing unreachable block (ram,0x015215f8) */
/* WARNING: Removing unreachable block (ram,0x01521600) */
/* WARNING: Removing unreachable block (ram,0x01521648) */
/* WARNING: Removing unreachable block (ram,0x01521674) */
/* WARNING: Removing unreachable block (ram,0x015216ac) */
/* WARNING: Removing unreachable block (ram,0x015216b8) */
/* WARNING: Removing unreachable block (ram,0x01521764) */
/* WARNING: Removing unreachable block (ram,0x01521770) */
/* WARNING: Removing unreachable block (ram,0x0152179c) */
/* WARNING: Removing unreachable block (ram,0x01521778) */
/* WARNING: Removing unreachable block (ram,0x015217a0) */
/* WARNING: Removing unreachable block (ram,0x015217b4) */
/* WARNING: Removing unreachable block (ram,0x015217e4) */
/* WARNING: Removing unreachable block (ram,0x01521828) */
/* WARNING: Removing unreachable block (ram,0x01521838) */
/* WARNING: Removing unreachable block (ram,0x01521844) */
/* WARNING: Removing unreachable block (ram,0x01521920) */
/* WARNING: Removing unreachable block (ram,0x0152184c) */
/* WARNING: Removing unreachable block (ram,0x01521870) */
/* WARNING: Removing unreachable block (ram,0x01521880) */
/* WARNING: Removing unreachable block (ram,0x01521918) */
/* WARNING: Removing unreachable block (ram,0x01521888) */
/* WARNING: Removing unreachable block (ram,0x015218a0) */
/* WARNING: Removing unreachable block (ram,0x01521924) */
/* WARNING: Removing unreachable block (ram,0x01521928) */
/* WARNING: Removing unreachable block (ram,0x015218d4) */
/* WARNING: Removing unreachable block (ram,0x015218ec) */
/* WARNING: Removing unreachable block (ram,0x015218e4) */
/* WARNING: Removing unreachable block (ram,0x015218f0) */
/* WARNING: Removing unreachable block (ram,0x01521794) */
/* WARNING: Removing unreachable block (ram,0x015216c0) */
/* WARNING: Removing unreachable block (ram,0x015216e4) */
/* WARNING: Removing unreachable block (ram,0x0152171c) */
/* WARNING: Removing unreachable block (ram,0x015216f8) */
/* WARNING: Removing unreachable block (ram,0x0152175c) */
/* WARNING: Removing unreachable block (ram,0x01521700) */
/* WARNING: Removing unreachable block (ram,0x01521714) */
/* WARNING: Removing unreachable block (ram,0x01521720) */
/* WARNING: Removing unreachable block (ram,0x0152173c) */
/* WARNING: Removing unreachable block (ram,0x01521740) */
/* WARNING: Removing unreachable block (ram,0x01521744) */
/* WARNING: Removing unreachable block (ram,0x0152162c) */

uint Atlas_Stats_UnlockManager__GetLastUsedSkinIDForCharacter
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar8;
  undefined8 unaff_x24;
  undefined *puVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = param_2;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  uVar6 = 0x3eb4000;
  if ((bRam0000000003eb4e28 & 1) == 0) {
    func_0x00f78a20(0x3d3d870);
    bRam0000000003eb4e28 = 1;
  }
  puVar9 = (undefined *)0x15213a4;
  puVar3 = &stack0xffffffffffffffd0;
  while( true ) {
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = auVar10._8_8_;
    *(undefined8 *)(puVar3 + -0x20) = uVar6;
    *(long *)(puVar3 + -0x18) = auVar10._0_8_;
    *(undefined1 **)(puVar3 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)(puVar3 + -8) = puVar9;
    uVar6 = param_3;
    if ((bRam0000000003eb4e47 & 1) == 0) {
      func_0x00f78a20(0x3d257d8);
      bRam0000000003eb4e47 = 1;
      uVar6 = param_3;
    }
    lVar5 = *(long *)(auVar2._0_8_ + 0x20);
    if (lVar5 != 0) break;
    lVar5 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x60);
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) = &Atlas_Stats_UnlockManager__GetMaxRankXP;
    if (*(long *)(lVar5 + 0x40) != 0) {
      uVar6 = Atlas_Definitions_MetagameDefinition__get_RankInfo(*(long *)(lVar5 + 0x40),0);
      Atlas_Definitions_MetagameDefinition_Rankings__GetRankByIndex(puVar3 + -0x58,uVar6,2,0);
      return *(uint *)(puVar3 + -0x58);
    }
    auVar10 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x88) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar3 + -0x80) = auVar2;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Stats_UnlockManager__AddOrUpdateCharacterLastUsedSkin;
    unaff_x22 = 0x3eb4000;
    param_3 = uVar6;
    if ((bRam0000000003eb4e2a & 1) == 0) {
      func_0x00f78a20(0x3d3d870);
      func_0x00f78a20(0x3d3d878);
      bRam0000000003eb4e2a = 1;
    }
    puVar9 = &UNK_01521578;
    puVar3 = puVar3 + -0xc0;
    auVar2 = auVar10;
  }
  lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5,0);
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  if ((bRam0000000003eb4e48 & 1) == 0) {
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d870);
    bRam0000000003eb4e48 = 1;
  }
  if ((lVar5 != 0) && (lVar8 = *(long *)(lVar5 + 0x50), lVar8 != 0)) {
    iVar1 = *(int *)(lVar8 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar7 = 0;
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar7 * 0x18 + 0x20);
      if (lVar8 == 0) break;
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar2._8_8_,4,0);
      if ((uVar4 & 1) != 0) {
        return uVar7;
      }
      if (iVar1 - 1U == uVar7) {
        return 0xffffffff;
      }
      lVar8 = *(long *)(lVar5 + 0x50);
      uVar7 = uVar7 + 1;
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x1521458 | Atlas.Stats.UnlockManager.GetCharacterProgressionIndex
// ============================================================

ulong Atlas_Stats_UnlockManager__GetCharacterProgressionIndex
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int extraout_w1;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 uStack_182;
  undefined1 uStack_181;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_70;
  undefined *puStack_68;
  uint auStack_58 [6];
  
  if ((bRam0000000003eb4e47 & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e47 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = func_0x00f78af4();
    if (*(long *)(lVar4 + 0x40) != 0) {
      uVar5 = Atlas_Definitions_MetagameDefinition__get_RankInfo(*(long *)(lVar4 + 0x40),0);
      Atlas_Definitions_MetagameDefinition_Rankings__GetRankByIndex(auStack_58,uVar5,2,0);
      return (ulong)auStack_58[0];
    }
    auVar11 = func_0x00f78af4();
    uVar5 = auVar11._8_8_;
    lVar4 = auVar11._0_8_;
    puStack_68 = &Atlas_Stats_UnlockManager__AddOrUpdateCharacterLastUsedSkin;
    lVar10 = 0x3eb4000;
    puStack_70 = &stack0xffffffffffffffc0;
    if ((bRam0000000003eb4e2a & 1) == 0) {
      func_0x00f78a20(0x3d3d870);
      func_0x00f78a20(0x3d3d878);
      bRam0000000003eb4e2a = 1;
    }
    iVar2 = Atlas_Stats_UnlockManager__GetCharacterProgressionIndex(lVar4,uVar5);
    if (iVar2 == -1) {
      Atlas_Stats_UnlockManager__AddOrUpdateCharacterProgression(lVar4,uVar5,0);
    }
    uVar5 = Atlas_Stats_UnlockManager__GetCharacterProgressionIndex(lVar4,uVar5);
    if (((*(long *)(lVar4 + 0x20) != 0) &&
        (lVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x20),0), lVar6 != 0)) &&
       (lVar10 = *(long *)(lVar6 + 0x50), lVar10 != 0)) {
      if (*(uint *)(lVar10 + 0x18) <= (uint)uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(lVar10 + 0x10) + (long)(int)(uint)uVar5 * 0x18;
      uStack_b8 = *(undefined8 *)(lVar6 + 0x28);
      uStack_c0 = *(undefined8 *)(lVar6 + 0x20);
      if (((*(long *)(lVar4 + 0x20) != 0) &&
          (lVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x20),0), lVar6 != 0)) &&
         (*(long *)(lVar6 + 0x50) != 0)) {
        uStack_a8 = uStack_b8;
        uStack_b0 = uStack_c0;
        uStack_a0 = param_3;
        /*System.Collections.Generic.List<SaveData.CharacterProgression>$$set_Item*/ func_0x02584130(*(long *)(lVar6 + 0x50),uVar5,&uStack_b0,uRam0000000003d3d878);
        if (*(long *)(lVar4 + 0x20) != 0) {
          uVar9 = Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar4 + 0x20),0);
          return uVar9;
        }
      }
    }
    auVar11 = func_0x00f78af4();
    lVar6 = auVar11._0_8_;
    puStack_c8 = &Atlas_Stats_UnlockManager__IsUnlocked;
    lStack_f0 = lVar10;
    uStack_e8 = uVar5;
    uStack_e0 = param_3;
    lStack_d8 = lVar4;
    ppuStack_d0 = &puStack_70;
    if ((bRam0000000003eb4e2c & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      bRam0000000003eb4e2c = 1;
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    lStack_100 = 0;
    if ((auVar11._8_8_ != 0) && (lVar4 = *(long *)(auVar11._8_8_ + 0x38), lVar4 != 0)) {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_110,lVar4,uRam0000000003d3d950);
      do {
        uVar9 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_110,uRam0000000003d33740);
        if ((uVar9 & 1) == 0) {
          iVar2 = 0x40;
          goto code_r0x01521720;
        }
        if (lStack_100 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1521764);
          (*pcVar1)();
        }
        uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_100,lVar6,4,0);
      } while ((uVar3 & 1) == 0);
      iVar2 = 0x42;
code_r0x01521720:
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_110,uRam0000000003d33738);
      if (iVar2 != 0x42) {
        uVar9 = 0;
      }
      return uVar9;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar6 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_110,uRam0000000003eb4000);
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar11 = func_0x00f78ac0(lVar6,0);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    lStack_170 = 0;
    lVar4 = *(long *)(auVar11._0_8_ + 0x20);
    if (((lVar4 == 0) || (lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar4,0), lVar4 == 0)) ||
       (*(long *)(lVar4 + 0x38) == 0)) {
      auVar11 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_180,*(long *)(lVar4 + 0x38),uRam0000000003d3d950);
      do {
        uVar9 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_180,uRam0000000003d33740);
        uVar5 = uStack_168;
        if ((uVar9 & 1) == 0) goto code_r0x015218ec;
        if (lStack_170 == 0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar9 = /*System.String$$Equals*/ func_0x029caa48(lStack_170,auVar11._8_8_,4,0);
      } while ((uVar9 & 1) == 0);
      uStack_181 = (undefined1)uVar5;
      lVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_181);
      uStack_182 = 1;
      uVar5 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_182);
      auVar11._8_8_ = uVar5;
      auVar11._0_8_ = uVar5;
      if (lVar4 != 0) {
        uVar9 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar4,uVar5,0);
        if ((uVar9 & 1) == 0) {
code_r0x015218ec:
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_180,uRam0000000003d33738);
        return uVar9;
      }
    }
    func_0x00f78af4(auVar11._0_8_,auVar11._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar1)();
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0);
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e48 & 1) == 0) {
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d870);
    bRam0000000003eb4e48 = 1;
  }
  if ((lVar4 != 0) && (lVar10 = *(long *)(lVar4 + 0x50), lVar10 != 0)) {
    iVar2 = *(int *)(lVar10 + 0x18);
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    uVar9 = 0;
    do {
      uVar8 = (uint)uVar9;
      if (*(uint *)(lVar10 + 0x18) <= uVar8) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar8 * 0x18 + 0x20);
      if (lVar10 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar10,param_2,4,0);
      if ((uVar3 & 1) != 0) {
        return uVar9;
      }
      if (iVar2 - 1U == uVar8) {
        return 0xffffffff;
      }
      lVar10 = *(long *)(lVar4 + 0x50);
      uVar9 = (ulong)(uVar8 + 1);
    } while (lVar10 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x15214e0 | Atlas.Stats.UnlockManager.GetMaxRankXP
// ============================================================

ulong Atlas_Stats_UnlockManager__GetMaxRankXP(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int extraout_w1;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_40;
  undefined *puStack_38;
  uint auStack_28 [6];
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = Atlas_Definitions_MetagameDefinition__get_RankInfo(*(long *)(param_1 + 0x40),0);
    Atlas_Definitions_MetagameDefinition_Rankings__GetRankByIndex(auStack_28,uVar3,2,0);
    return (ulong)auStack_28[0];
  }
  auVar10 = func_0x00f78af4();
  uVar3 = auVar10._8_8_;
  lVar6 = auVar10._0_8_;
  puStack_38 = &Atlas_Stats_UnlockManager__AddOrUpdateCharacterLastUsedSkin;
  lVar9 = 0x3eb4000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e2a & 1) == 0) {
    func_0x00f78a20(0x3d3d870);
    func_0x00f78a20(0x3d3d878);
    bRam0000000003eb4e2a = 1;
  }
  iVar2 = Atlas_Stats_UnlockManager__GetCharacterProgressionIndex(lVar6,uVar3);
  if (iVar2 == -1) {
    Atlas_Stats_UnlockManager__AddOrUpdateCharacterProgression(lVar6,uVar3,0);
  }
  uVar3 = Atlas_Stats_UnlockManager__GetCharacterProgressionIndex(lVar6,uVar3);
  if (((*(long *)(lVar6 + 0x20) != 0) &&
      (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0), lVar4 != 0)) &&
     (lVar9 = *(long *)(lVar4 + 0x50), lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0x18) <= (uint)uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar4 = *(long *)(lVar9 + 0x10) + (long)(int)(uint)uVar3 * 0x18;
    uStack_88 = *(undefined8 *)(lVar4 + 0x28);
    uStack_90 = *(undefined8 *)(lVar4 + 0x20);
    if (((*(long *)(lVar6 + 0x20) != 0) &&
        (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0), lVar4 != 0)) &&
       (*(long *)(lVar4 + 0x50) != 0)) {
      uStack_78 = uStack_88;
      uStack_80 = uStack_90;
      uStack_70 = param_3;
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$set_Item*/ func_0x02584130(*(long *)(lVar4 + 0x50),uVar3,&uStack_80,uRam0000000003d3d878);
      if (*(long *)(lVar6 + 0x20) != 0) {
        uVar5 = Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar6 + 0x20),0);
        return uVar5;
      }
    }
  }
  auVar10 = func_0x00f78af4();
  lVar4 = auVar10._0_8_;
  puStack_98 = &Atlas_Stats_UnlockManager__IsUnlocked;
  lStack_c0 = lVar9;
  uStack_b8 = uVar3;
  uStack_b0 = param_3;
  lStack_a8 = lVar6;
  ppuStack_a0 = &puStack_40;
  if ((bRam0000000003eb4e2c & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    bRam0000000003eb4e2c = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  lStack_d0 = 0;
  if ((auVar10._8_8_ != 0) && (lVar6 = *(long *)(auVar10._8_8_ + 0x38), lVar6 != 0)) {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_e0,lVar6,uRam0000000003d3d950);
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_e0,uRam0000000003d33740);
      if ((uVar5 & 1) == 0) {
        iVar2 = 0x40;
        goto code_r0x01521720;
      }
      if (lStack_d0 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1521764);
        (*pcVar1)();
      }
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lStack_d0,lVar4,4,0);
    } while ((uVar7 & 1) == 0);
    iVar2 = 0x42;
code_r0x01521720:
    /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_e0,uRam0000000003d33738);
    if (iVar2 != 0x42) {
      uVar5 = 0;
    }
    return uVar5;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar4 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_e0,uRam0000000003eb4000);
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar10 = func_0x00f78ac0(lVar4,0);
  if ((bRam0000000003eb4e2d & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d29680);
    bRam0000000003eb4e2d = 1;
  }
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  lStack_140 = 0;
  lVar6 = *(long *)(auVar10._0_8_ + 0x20);
  if (((lVar6 == 0) || (lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar6,0), lVar6 == 0)) ||
     (*(long *)(lVar6 + 0x38) == 0)) {
    auVar10 = func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_150,*(long *)(lVar6 + 0x38),uRam0000000003d3d950);
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_150,uRam0000000003d33740);
      uVar3 = uStack_138;
      if ((uVar5 & 1) == 0) goto code_r0x015218ec;
      if (lStack_140 == 0) {
        func_0x00f78af4();
        goto code_r0x01521928;
      }
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lStack_140,auVar10._8_8_,4,0);
    } while ((uVar5 & 1) == 0);
    uStack_151 = (undefined1)uVar3;
    lVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_151);
    uStack_152 = 1;
    uVar3 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_152);
    auVar10._8_8_ = uVar3;
    auVar10._0_8_ = uVar3;
    if (lVar6 != 0) {
      uVar5 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar6,uVar3,0);
      if ((uVar5 & 1) == 0) {
code_r0x015218ec:
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_150,uRam0000000003d33738);
      return uVar5;
    }
  }
  func_0x00f78af4(auVar10._0_8_,auVar10._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1521520 | Atlas.Stats.UnlockManager.AddOrUpdateCharacterLastUsedSkin
// ============================================================

ulong Atlas_Stats_UnlockManager__AddOrUpdateCharacterLastUsedSkin
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int extraout_w1;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar8 = 0x3eb4000;
  if ((bRam0000000003eb4e2a & 1) == 0) {
    func_0x00f78a20(0x3d3d870);
    func_0x00f78a20(0x3d3d878);
    bRam0000000003eb4e2a = 1;
  }
  iVar2 = Atlas_Stats_UnlockManager__GetCharacterProgressionIndex(param_1,param_2);
  if (iVar2 == -1) {
    Atlas_Stats_UnlockManager__AddOrUpdateCharacterProgression(param_1,param_2,0);
  }
  uVar3 = Atlas_Stats_UnlockManager__GetCharacterProgressionIndex(param_1,param_2);
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar4 != 0)) &&
     (lVar8 = *(long *)(lVar4 + 0x50), lVar8 != 0)) {
    if (*(uint *)(lVar8 + 0x18) <= (uint)uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar4 = *(long *)(lVar8 + 0x10) + (long)(int)(uint)uVar3 * 0x18;
    uStack_58 = *(undefined8 *)(lVar4 + 0x28);
    uStack_60 = *(undefined8 *)(lVar4 + 0x20);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar4 != 0)) &&
       (*(long *)(lVar4 + 0x50) != 0)) {
      uStack_48 = uStack_58;
      uStack_50 = uStack_60;
      uStack_40 = param_3;
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$set_Item*/ func_0x02584130(*(long *)(lVar4 + 0x50),uVar3,&uStack_50,uRam0000000003d3d878);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar5 = Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x20),0);
        return uVar5;
      }
    }
  }
  auVar9 = func_0x00f78af4();
  lVar4 = auVar9._0_8_;
  puStack_68 = &Atlas_Stats_UnlockManager__IsUnlocked;
  lStack_90 = lVar8;
  uStack_88 = uVar3;
  uStack_80 = param_3;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e2c & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    bRam0000000003eb4e2c = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  if ((auVar9._8_8_ != 0) && (lVar8 = *(long *)(auVar9._8_8_ + 0x38), lVar8 != 0)) {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_b0,lVar8,uRam0000000003d3d950);
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_b0,uRam0000000003d33740);
      if ((uVar5 & 1) == 0) {
        iVar2 = 0x40;
        goto code_r0x01521720;
      }
      if (lStack_a0 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1521764);
        (*pcVar1)();
      }
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lStack_a0,lVar4,4,0);
    } while ((uVar6 & 1) == 0);
    iVar2 = 0x42;
code_r0x01521720:
    /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_b0,uRam0000000003d33738);
    if (iVar2 != 0x42) {
      uVar5 = 0;
    }
    return uVar5;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar4 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_b0,uRam0000000003eb4000);
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar9 = func_0x00f78ac0(lVar4,0);
  if ((bRam0000000003eb4e2d & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d29680);
    bRam0000000003eb4e2d = 1;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  lStack_110 = 0;
  lVar8 = *(long *)(auVar9._0_8_ + 0x20);
  if (((lVar8 == 0) || (lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar8,0), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x38) == 0)) {
    auVar9 = func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_120,*(long *)(lVar8 + 0x38),uRam0000000003d3d950);
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_120,uRam0000000003d33740);
      uVar3 = uStack_108;
      if ((uVar5 & 1) == 0) goto code_r0x015218ec;
      if (lStack_110 == 0) {
        func_0x00f78af4();
        goto code_r0x01521928;
      }
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lStack_110,auVar9._8_8_,4,0);
    } while ((uVar5 & 1) == 0);
    uStack_121 = (undefined1)uVar3;
    lVar8 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_121);
    uStack_122 = 1;
    uVar3 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_122);
    auVar9._8_8_ = uVar3;
    auVar9._0_8_ = uVar3;
    if (lVar8 != 0) {
      uVar5 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar8,uVar3,0);
      if ((uVar5 & 1) == 0) {
code_r0x015218ec:
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_120,uRam0000000003d33738);
      return uVar5;
    }
  }
  func_0x00f78af4(auVar9._0_8_,auVar9._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x152164c | Atlas.Stats.UnlockManager.IsUnlocked
// ============================================================

ulong Atlas_Stats_UnlockManager__IsUnlocked(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int extraout_w1;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4e2c & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    bRam0000000003eb4e2c = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x38) != 0)) {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_50,*(long *)(param_2 + 0x38),uRam0000000003d3d950);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_50,uRam0000000003d33740);
      if ((uVar2 & 1) == 0) {
        iVar7 = 0x40;
        goto LAB_01521720;
      }
      if (lStack_40 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1521764);
        (*pcVar1)();
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_40,param_1,4,0);
    } while ((uVar3 & 1) == 0);
    iVar7 = 0x42;
LAB_01521720:
    /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_50,uRam0000000003d33738);
    if (iVar7 != 0x42) {
      uVar2 = 0;
    }
    return uVar2;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    param_1 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_50,uRam0000000003eb4000);
    if (param_1 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar8 = func_0x00f78ac0(param_1,0);
  if ((bRam0000000003eb4e2d & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d29680);
    bRam0000000003eb4e2d = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  lVar5 = *(long *)(auVar8._0_8_ + 0x20);
  if (((lVar5 == 0) || (lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5,0), lVar5 == 0)) ||
     (*(long *)(lVar5 + 0x38) == 0)) {
    auVar8 = func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_c0,*(long *)(lVar5 + 0x38),uRam0000000003d3d950);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_c0,uRam0000000003d33740);
      uVar6 = uStack_a8;
      if ((uVar2 & 1) == 0) goto code_r0x015218ec;
      if (lStack_b0 == 0) {
        func_0x00f78af4();
        goto code_r0x01521928;
      }
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lStack_b0,auVar8._8_8_,4,0);
    } while ((uVar2 & 1) == 0);
    uStack_c1 = (undefined1)uVar6;
    lVar5 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_c1);
    uStack_c2 = 1;
    uVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_c2);
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar6;
    if (lVar5 != 0) {
      uVar2 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar5,uVar6,0);
      if ((uVar2 & 1) == 0) {
code_r0x015218ec:
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_c0,uRam0000000003d33738);
      return uVar2;
    }
  }
  func_0x00f78af4(auVar8._0_8_,auVar8._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15217ac | Atlas.Stats.UnlockManager.IsUnlockUnseen
// ============================================================

undefined8 Atlas_Stats_UnlockManager__IsUnlockUnseen(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4e2d & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d29680);
    bRam0000000003eb4e2d = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  if (((*(long *)(param_1 + 0x20) == 0) ||
      (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x38) == 0)) {
    auVar5 = func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_60,*(long *)(lVar2 + 0x38),uRam0000000003d3d950);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_60,uRam0000000003d33740);
      uVar4 = uStack_48;
      if ((uVar3 & 1) == 0) goto code_r0x015218ec;
      if (lStack_50 == 0) {
        func_0x00f78af4();
        goto code_r0x01521928;
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_50,param_2,4,0);
    } while ((uVar3 & 1) == 0);
    uStack_61 = (undefined1)uVar4;
    lVar2 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_61);
    uStack_62 = 1;
    uVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_62);
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar4;
    if (lVar2 != 0) {
      uVar3 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar2,uVar4,0);
      if ((uVar3 & 1) == 0) {
code_r0x015218ec:
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_60,uRam0000000003d33738);
      return uVar4;
    }
  }
  func_0x00f78af4(auVar5._0_8_,auVar5._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15217b4 | Atlas.Stats.UnlockManager.IsUnlockStatusFlagSet
// ============================================================

undefined8
Atlas_Stats_UnlockManager__IsUnlockStatusFlagSet(long param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4e2d & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d29680);
    bRam0000000003eb4e2d = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  if (((*(long *)(param_1 + 0x20) == 0) ||
      (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x38) == 0)) {
    auVar5 = func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_60,*(long *)(lVar2 + 0x38),uRam0000000003d3d950);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_60,uRam0000000003d33740);
      uVar4 = uStack_48;
      if ((uVar3 & 1) == 0) goto LAB_015218ec;
      if (lStack_50 == 0) {
        func_0x00f78af4();
        goto code_r0x01521928;
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_50,param_2,4,0);
    } while ((uVar3 & 1) == 0);
    uStack_61 = (undefined1)uVar4;
    lVar2 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_61);
    uStack_62 = param_3;
    uVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_62);
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar4;
    if (lVar2 != 0) {
      uVar3 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar2,uVar4,0);
      if ((uVar3 & 1) == 0) {
LAB_015218ec:
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_60,uRam0000000003d33738);
      return uVar4;
    }
  }
  func_0x00f78af4(auVar5._0_8_,auVar5._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1521974 | Atlas.Stats.UnlockManager.IsUnlockNew
// ============================================================

undefined8 Atlas_Stats_UnlockManager__IsUnlockNew(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4e2d & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d29680);
    bRam0000000003eb4e2d = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  if (((*(long *)(param_1 + 0x20) == 0) ||
      (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x38) == 0)) {
    auVar5 = func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_60,*(long *)(lVar2 + 0x38),uRam0000000003d3d950);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_60,uRam0000000003d33740);
      uVar4 = uStack_48;
      if ((uVar3 & 1) == 0) goto LAB_015218ec;
      if (lStack_50 == 0) {
        func_0x00f78af4();
        goto code_r0x01521928;
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_50,param_2,4,0);
    } while ((uVar3 & 1) == 0);
    uStack_61 = (undefined1)uVar4;
    lVar2 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_61);
    uStack_62 = 2;
    uVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&uStack_62);
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar4;
    if (lVar2 != 0) {
      uVar3 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar2,uVar4,0);
      if ((uVar3 & 1) == 0) {
LAB_015218ec:
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_60,uRam0000000003d33738);
      return uVar4;
    }
  }
  func_0x00f78af4(auVar5._0_8_,auVar5._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x152192c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x152197c | Atlas.Stats.UnlockManager.TryGetAndRemoveAwardFromHistory
// ============================================================

bool Atlas_Stats_UnlockManager__TryGetAndRemoveAwardFromHistory
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  ulong unaff_x22;
  long lVar3;
  long unaff_x27;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam0000000003eb4e2f & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3dfb8);
    func_0x00f78a20(0x3d3de50);
    func_0x00f78a20(0x3d3c6d8);
    func_0x00f78a20(0x3d3dfc0);
    func_0x00f78a20(0x3d3de58);
    func_0x00f78a20(0x3d3c6f8);
    func_0x00f78a20(0x3d3de60);
    func_0x00f78a20(0x3d3dfc8);
    bRam0000000003eb4e2f = 1;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    lVar4 = 0;
    unaff_x22 = 0;
    do {
      unaff_x27 = (long)(int)*(uint *)(lVar3 + 0x18);
      if (unaff_x27 <= (long)unaff_x22) goto LAB_01521ab4;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(lVar3 + 0x10) + lVar4;
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      lVar3 = *(long *)(lVar3 + 0x30);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar5,param_2,0);
      if (iVar2 != 0) {
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar4 = *(long *)(lVar1 + 0x10);
          uVar6 = *(undefined8 *)(lVar4 + 0x28);
          uVar5 = *(undefined8 *)(lVar4 + 0x20);
          uVar8 = *(undefined8 *)(lVar4 + 0x38);
          uVar7 = *(undefined8 *)(lVar4 + 0x30);
          param_3[4] = *(undefined8 *)(lVar4 + 0x40);
          param_3[1] = uVar6;
          *param_3 = uVar5;
          param_3[3] = uVar8;
          param_3[2] = uVar7;
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x18) == 0) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            *param_4 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x20);
            /*System.Collections.Generic.List<UnlockManager.XPAward.Award>$$RemoveAt*/ func_0x025ddfac(lVar1,0,uRam0000000003d3dfb8);
            /*System.Collections.Generic.List<uint>$$RemoveAt*/ func_0x02480018(lVar3,0,uRam0000000003d3c6d8);
            if (*(int *)(lVar1 + 0x18) != 0) goto LAB_01521b6c;
            if (*(long *)(param_1 + 0x50) != 0) {
              /*System.Collections.Generic.List<UnlockManager.XPAward>$$RemoveAt*/ func_0x025ca97c(*(long *)(param_1 + 0x50),unaff_x22,uRam0000000003d3de50);
              goto LAB_01521b6c;
            }
          }
        }
        break;
      }
      unaff_x22 = unaff_x22 + 1;
      lVar3 = *(long *)(param_1 + 0x50);
      lVar4 = lVar4 + 0x18;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
LAB_01521ab4:
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  *param_4 = 0;
LAB_01521b6c:
  return (long)unaff_x22 < unaff_x27;
}



// ============================================================
// RVA: 0x1521b94 | Atlas.Stats.UnlockManager.TryAndRemoveArcadeMedalFromHistory
// ============================================================

undefined8
Atlas_Stats_UnlockManager__TryAndRemoveArcadeMedalFromHistory(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4e30 & 1) == 0) {
    func_0x00f78a20(0x3d2e390);
    func_0x00f78a20(0x3d2e398);
    bRam0000000003eb4e30 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = /*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>$$ContainsKey*/ func_0x01e39308(*(long *)(param_1 + 0x58),param_2,uRam0000000003d2e390);
    if ((int)uVar1 != 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_01521c2c;
      /*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>$$Remove*/ func_0x01e3a90c(*(long *)(param_1 + 0x58),param_2,uRam0000000003d2e398);
    }
    return uVar1;
  }
LAB_01521c2c:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4e31 & 1) == 0) {
    func_0x00f78a20(0x3d2e388);
    func_0x00f78a20(0x3d1c1e8);
    bRam0000000003eb4e31 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>_TypeInfo*/ uRam0000000003d1c1e8);
  uVar3 = /*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>$$.ctor*/ func_0x01e38b50(uVar1,uRam0000000003d2e388);
  *(undefined8 *)(lVar2 + 0x58) = uVar1;
  return uVar3;
}



// ============================================================
// RVA: 0x1521c30 | Atlas.Stats.UnlockManager.ClearArcadeMedalHistory
// ============================================================

void Atlas_Stats_UnlockManager__ClearArcadeMedalHistory(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4e31 & 1) == 0) {
    func_0x00f78a20(0x3d2e388);
    func_0x00f78a20(0x3d1c1e8);
    bRam0000000003eb4e31 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>_TypeInfo*/ uRam0000000003d1c1e8);
  /*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventDefinition.Medal>$$.ctor*/ func_0x01e38b50(uVar1,uRam0000000003d2e388);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1521ca8 | Atlas.Stats.UnlockManager.GetArcadeMedalFromHistory
// ============================================================

/* WARNING: Possible PIC construction at 0x01521d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
/* WARNING: Removing unreachable block (ram,0x01521d08) */
/* WARNING: Removing unreachable block (ram,0x01521d34) */
/* WARNING: Removing unreachable block (ram,0x01521d0c) */
/* WARNING: Removing unreachable block (ram,0x01521d14) */
/* WARNING: Removing unreachable block (ram,0x01e38fbc) */
/* WARNING: Removing unreachable block (ram,0x01e38fcc) */
/* WARNING: Removing unreachable block (ram,0x01e38fe8) */
/* WARNING: Removing unreachable block (ram,0x01e39014) */
/* WARNING: Removing unreachable block (ram,0x01e39018) */
/* WARNING: Removing unreachable block (ram,0x01e38ff0) */
/* WARNING: Removing unreachable block (ram,0x01e3904c) */
/* WARNING: Removing unreachable block (ram,0x01e39080) */
/* WARNING: Removing unreachable block (ram,0x01e390ac) */
/* WARNING: Removing unreachable block (ram,0x01e390d4) */
/* WARNING: Removing unreachable block (ram,0x01e390ec) */
/* WARNING: Removing unreachable block (ram,0x01e39110) */
/* WARNING: Removing unreachable block (ram,0x01e39130) */
/* WARNING: Removing unreachable block (ram,0x01e3913c) */
/* WARNING: Removing unreachable block (ram,0x01e3917c) */
/* WARNING: Removing unreachable block (ram,0x01e39180) */
/* WARNING: Removing unreachable block (ram,0x01e391a4) */
/* WARNING: Removing unreachable block (ram,0x01e39240) */
/* WARNING: Removing unreachable block (ram,0x01e391cc) */
/* WARNING: Removing unreachable block (ram,0x01e391ec) */
/* WARNING: Removing unreachable block (ram,0x01e391f8) */
/* WARNING: Removing unreachable block (ram,0x01e39258) */
/* WARNING: Removing unreachable block (ram,0x01e3925c) */
/* WARNING: Removing unreachable block (ram,0x01e39280) */
/* WARNING: Removing unreachable block (ram,0x01e3928c) */
/* WARNING: Removing unreachable block (ram,0x01e39298) */
/* WARNING: Removing unreachable block (ram,0x01e392a8) */
/* WARNING: Removing unreachable block (ram,0x01e392b0) */
/* WARNING: Removing unreachable block (ram,0x01e392f8) */
/* WARNING: Removing unreachable block (ram,0x01e39304) */
/* WARNING: Removing unreachable block (ram,0x01e392b4) */
/* WARNING: Removing unreachable block (ram,0x01e392c4) */
/* WARNING: Removing unreachable block (ram,0x01e392ec) */
/* WARNING: Removing unreachable block (ram,0x01e391fc) */
/* WARNING: Removing unreachable block (ram,0x01e3921c) */
/* WARNING: Removing unreachable block (ram,0x01e39244) */
/* WARNING: Removing unreachable block (ram,0x01e39140) */
/* WARNING: Removing unreachable block (ram,0x01e39168) */
/* WARNING: Removing unreachable block (ram,0x01e39160) */
/* WARNING: Removing unreachable block (ram,0x01e3916c) */
/* WARNING: Removing unreachable block (ram,0x01e390bc) */
/* WARNING: Removing unreachable block (ram,0x01e39090) */
/* WARNING: Removing unreachable block (ram,0x01e39064) */
/* WARNING: Removing unreachable block (ram,0x01e38ffc) */
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */

ulong Atlas_Stats_UnlockManager__GetArcadeMedalFromHistory
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *extraout_x8;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong unaff_x22;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined1 **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_ac;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4e32 & 1) == 0) {
    func_0x00f78a20(0x3d2e390);
    func_0x00f78a20(0x3d2e3a0);
    bRam0000000003eb4e32 = 1;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x58) == 0) {
    auVar24 = func_0x00f78af4();
    puStack_38 = &Atlas_Stats_UnlockManager__HasAwardOfType;
    ppuVar21 = &puStack_40;
    if ((bRam0000000003eb4e33 & 1) == 0) {
      func_0x00f78a20(0x3d338a0);
      func_0x00f78a20(0x3d338a8);
      func_0x00f78a20(0x3d338b0);
      func_0x00f78a20(0x3d3dfb0);
      func_0x00f78a20(0x3d3de58);
      func_0x00f78a20(0x3d3de60);
      bRam0000000003eb4e33 = 1;
    }
    uStack_d8._0_4_ = 0;
    iVar5 = (int)uStack_d8;
    uStack_d8._0_4_ = 0;
    lVar17 = *(long *)(auVar24._0_8_ + 0x50);
    if (lVar17 != 0) {
      iVar20 = 0;
      unaff_x22 = 0;
      do {
        uVar6 = *(uint *)(lVar17 + 0x18);
        uVar15 = (uint)unaff_x22;
        if ((int)uVar6 <= (int)uVar15) {
code_r0x01521ef0:
          return (ulong)((int)uVar15 < (int)uVar6);
        }
        if (uVar6 <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar15 * 0x18 + 0x28);
        iVar5 = (int)uStack_d8;
        if (lVar16 == 0) break;
        /*System.Collections.Generic.List<UnlockManager.XPAward.Award>$$GetEnumerator*/ func_0x025dd144(&uStack_118,lVar16,uRam0000000003d3dfb0);
        uVar9 = uStack_f8;
        do {
          uVar4 = /*System.Collections.Generic.List.Enumerator<UnlockManager.XPAward.Award>$$MoveNext*/ func_0x01f887b8(&stack0xffffffffffffff30,uRam0000000003d338a8);
          iStack_ac = (int)((ulong)uVar9 >> 0x20);
        } while (uVar4 != 0 && iStack_ac != auVar24._8_4_);
        *(undefined4 *)((long)&uStack_e0 + (long)iVar20 * 4) = 0x4b;
        iVar5 = (int)uStack_d8;
        iVar20 = (int)uStack_d8 + 1;
        uStack_d8._0_4_ = iVar20;
        /*System.Collections.Generic.List.Enumerator<UnlockManager.XPAward.Award>$$Dispose*/ func_0x01f887b4(&stack0xffffffffffffff30,uRam0000000003d338a0);
        if ((iVar20 != 0) && (*(int *)((long)&uStack_e0 + (long)iVar5 * 4) == 0x4b)) {
          iVar20 = iVar5;
          uStack_d8._0_4_ = iVar5;
        }
        if ((uVar4 & 1) != 0) goto code_r0x01521ef0;
        unaff_x22 = (ulong)(uVar15 + 1);
        lVar17 = *(long *)(auVar24._0_8_ + 0x50);
        iVar5 = (int)uStack_d8;
      } while (lVar17 != 0);
    }
    uStack_d8._0_4_ = iVar5;
    func_0x00f78af4();
    puVar22 = &Atlas_Stats_UnlockManager__AddUnlockedIfNotExist;
    auVar23 = __Unwind_Resume();
    puVar3 = &uStack_120;
    do {
      while( true ) {
        uVar10 = auVar23._8_8_;
        lVar16 = auVar23._0_8_;
        *(ulong *)((long)puVar3 + -0x30) = unaff_x22;
        *(long *)((long)puVar3 + -0x28) = lVar17;
        *(undefined1 (*) [16])((long)puVar3 + -0x20) = auVar24;
        *(undefined1 ***)((long)puVar3 + -0x10) = ppuVar21;
        *(undefined **)((long)puVar3 + -8) = puVar22;
        unaff_x22 = 0x3eb4000;
        uVar9 = param_3;
        if ((bRam0000000003eb4e3b & 1) == 0) {
          func_0x00f78a20(0x3d3d940);
          bRam0000000003eb4e3b = 1;
        }
        uVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar10,0);
        if (((uVar14 & 1) != 0) ||
           (uVar14 = Atlas_Stats_UnlockManager__IsUnlocked(lVar16,uVar10), (uVar14 & 1) != 0)) {
          return 0;
        }
        uVar11 = 3;
        if ((int)param_3 == 0) {
          uVar11 = 0;
        }
        if (((*(long *)(lVar16 + 0x20) != 0) &&
            (lVar17 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar16 + 0x20),0), lVar17 != 0)
            ) && (*(long *)(lVar17 + 0x38) != 0)) {
          uVar9 = uVar11;
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar17 + 0x38),uVar10,uVar11,uRam0000000003d3d940);
          if (*(long *)(lVar16 + 0x20) != 0) {
            Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar16 + 0x20),0);
            return 1;
          }
        }
        auVar24 = func_0x00f78af4();
        lVar12 = auVar24._8_8_;
        lVar13 = auVar24._0_8_;
        auVar24._8_8_ = lVar13;
        auVar24._0_8_ = lVar12;
        auVar2._8_8_ = lVar13;
        auVar2._0_8_ = lVar12;
        auVar1._8_8_ = lVar13;
        auVar1._0_8_ = lVar12;
        *(undefined8 *)((long)puVar3 + -0x60) = 0x3eb4000;
        *(undefined8 *)((long)puVar3 + -0x58) = uVar11;
        *(undefined8 *)((long)puVar3 + -0x50) = uVar10;
        *(long *)((long)puVar3 + -0x48) = lVar16;
        *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
        *(undefined **)((long)puVar3 + -0x38) =
             &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
        ppuVar21 = (undefined1 **)((long)puVar3 + -0x40);
        lVar17 = 0x3eb4000;
        param_3 = uVar9;
        if ((bRam0000000003eb4e38 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d57398);
          func_0x00f78a20(0x3d257d8);
          func_0x00f78a20(0x3d69c18);
          bRam0000000003eb4e38 = 1;
          param_3 = uVar9;
        }
        *(undefined8 *)((long)puVar3 + -0x68) = 0;
        iVar5 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar13,lVar12);
        if (iVar5 == 0) break;
        if (lVar12 == 0) {
code_r0x01522270:
          puVar22 = &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
          auVar23 = func_0x00f78af4();
          puVar3 = (undefined8 *)((long)puVar3 + -0x70);
        }
        else {
          *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)(lVar12 + 0x58);
          iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)puVar3 + -0x68),0);
          if (iVar5 == 0) break;
          auVar23._8_8_ = *(undefined8 *)(lVar12 + 0x58);
          auVar23._0_8_ = lVar13;
          param_3 = 1;
          puVar22 = &UNK_0152208c;
          puVar3 = (undefined8 *)((long)puVar3 + -0x70);
          auVar24 = auVar1;
        }
      }
      iVar5 = Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign(lVar13,lVar12);
      if (iVar5 == 0) {
code_r0x01522148:
        if (*(long *)(lVar13 + 0x20) == 0) goto code_r0x01522270;
        uVar9 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar13 + 0x20),0);
        auVar24._0_8_ = uVar9;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(uVar9);
        if ((int)uVar14 == 0) {
          return uVar14;
        }
        lVar17 = 0x3d21270;
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x22 = 0x3d69c18;
        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        auVar23._8_8_ = uVar9;
        auVar23._0_8_ = lVar13;
        param_3 = 1;
        puVar22 = &UNK_015221cc;
        puVar3 = (undefined8 *)((long)puVar3 + -0x70);
      }
      else {
        if (lVar12 == 0) goto code_r0x01522270;
        *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)(lVar12 + 0x60);
        iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)puVar3 + -0x68),0);
        if (iVar5 == 0) goto code_r0x01522148;
        auVar23._8_8_ = *(undefined8 *)(lVar12 + 0x60);
        auVar23._0_8_ = lVar13;
        param_3 = 1;
        puVar22 = &UNK_01522108;
        puVar3 = (undefined8 *)((long)puVar3 + -0x70);
        auVar24 = auVar2;
      }
    } while( true );
  }
  puStack_38 = (undefined *)0x1521d08;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar6 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(uRam0000000003d2e390 + 0x18) + 0xc0) + 0x40))();
    return (ulong)(~uVar6 >> 0x1f);
  }
  uVar14 = uRam0000000003d2e390;
  auVar24 = func_0x00f78af4(0,param_2);
  lVar17 = auVar24._0_8_;
  plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(uVar14 + 0x18) + 0xc0) + 0x68))()
  ;
  iVar5 = *(int *)(lVar17 + 0x20);
  if (0 < iVar5) {
    lVar16 = 0;
    uVar18 = 0;
    do {
      lVar13 = *(long *)(lVar17 + 0x18);
      if (lVar13 == 0) {
code_r0x01e393fc:
        func_0x00f78af4();
code_r0x01e39400:
        uVar9 = func_0x00f78b24();
        auVar24 = func_0x00f78ac0(uVar9,0);
        lVar16 = auVar24._8_8_;
        lVar13 = auVar24._0_8_;
        if (lVar16 == 0) goto code_r0x01e3959c;
        uVar6 = (uint)uVar14;
        if (((int)uVar6 < 0) || (*(int *)(lVar16 + 0x18) < (int)uVar6)) goto code_r0x01e3951c;
        if (lVar13 == 0) goto code_r0x01e39598;
        uVar18 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x90))
                           (lVar13);
        if ((int)(*(int *)(lVar16 + 0x18) - uVar6) < (int)uVar18) {
          func_0x00f78a24(0x3d1fce8);
          uVar9 = func_0x00f78aec();
          uVar10 = func_0x00f78a24(0x3d6bc10);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar10,0);
          goto code_r0x01e39600;
        }
        uVar15 = *(uint *)(lVar13 + 0x20);
        if ((int)uVar15 < 1) {
          return uVar18;
        }
        lVar17 = *(long *)(lVar13 + 0x18);
        if (lVar17 == 0) goto code_r0x01e39598;
        uVar8 = 0;
        puVar19 = (undefined4 *)(lVar17 + 0x30);
        goto code_r0x01e39494;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar18) goto code_r0x01e39400;
      if (-1 < *(int *)(lVar13 + lVar16 + 0x20)) {
        if (plVar7 == (long *)0x0) goto code_r0x01e393fc;
        param_4 = *(long *)(*plVar7 + 0x1c0);
        uVar14 = auVar24._8_8_;
        uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined4 *)(lVar13 + lVar16 + 0x30));
        if ((uVar8 & 1) != 0) {
          return 1;
        }
        iVar5 = *(int *)(lVar17 + 0x20);
      }
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 0x18;
    } while ((long)uVar18 < (long)iVar5);
  }
  return 0;
code_r0x01e39494:
  uVar6 = (uint)uVar14;
  if (*(uint *)(lVar17 + 0x18) <= uVar8) {
code_r0x01e39510:
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
code_r0x01e3951c:
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
    uVar9 = func_0x00f78a24(0x3d22910);
    uVar9 = func_0x00f78ae0(uVar9,&uStack_e0);
    func_0x00f78a24(0x3d1fcf8);
    lVar16 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d79a60);
    uVar11 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar16,uVar10,uVar9,uVar11,0);
    uVar9 = func_0x00f78a24(0x3d2e2a0);
    func_0x00f78ac0(lVar16,uVar9);
code_r0x01e39598:
    func_0x00f78af4();
    lVar17 = lVar16;
code_r0x01e3959c:
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar10,0);
    lVar16 = lVar17;
code_r0x01e39600:
    uVar10 = func_0x00f78a24(0x3d2e2a0);
    auVar24 = func_0x00f78ac0(uVar9,uVar10);
    puStack_e8 = &System_Collections_Generic_Dictionary_DefinitionID__Int32Enum___GetEnumerator;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_100 = lVar16;
    uStack_f8 = uVar9;
    puStack_f0 = &stack0xffffffffffffff70;
    uVar14 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, Int32Enum>$$.ctor*/ func_0x01fbb1b8(&uStack_130,auVar24._0_8_,2,
                             *(undefined8 *)
                              (*(long *)(*(long *)(auVar24._8_8_ + 0x18) + 0xc0) + 0xb0));
    extraout_x8[1] = uStack_128;
    *extraout_x8 = uStack_130;
    extraout_x8[3] = uStack_118;
    extraout_x8[2] = uStack_120;
    extraout_x8[4] = uStack_110;
    return uVar14;
  }
  if (-1 < (int)puVar19[-4]) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uVar18 = /*System.Collections.Generic.KeyValuePair<DefinitionID, Int32Enum>$$.ctor*/ func_0x02316528(&uStack_e0,*(undefined8 *)(puVar19 + -2),*puVar19,
                             *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar16 + 0x18) <= uVar6) goto code_r0x01e39510;
    lVar13 = lVar16 + (long)(int)uVar6 * 0x10;
    uVar14 = (ulong)(uVar6 + 1);
    *(undefined8 *)(lVar13 + 0x28) = uStack_d8;
    *(undefined8 *)(lVar13 + 0x20) = uStack_e0;
  }
  uVar8 = uVar8 + 1;
  puVar19 = puVar19 + 6;
  if (uVar15 == uVar8) {
    return uVar18;
  }
  goto code_r0x01e39494;
}



// ============================================================
// RVA: 0x1521d48 | Atlas.Stats.UnlockManager.HasAwardOfType
// ============================================================

/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */

ulong Atlas_Stats_UnlockManager__HasAwardOfType(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar13;
  uint uVar14;
  ulong unaff_x22;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lVar9;
  long lVar12;
  
  auVar18._8_8_ = param_1;
  auVar18._0_8_ = param_2;
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e33 & 1) == 0) {
    func_0x00f78a20(0x3d338a0);
    func_0x00f78a20(0x3d338a8);
    func_0x00f78a20(0x3d338b0);
    func_0x00f78a20(0x3d3dfb0);
    func_0x00f78a20(0x3d3de58);
    func_0x00f78a20(0x3d3de60);
    bRam0000000003eb4e33 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  aiStack_b0[2] = 0;
  lVar13 = *(long *)(param_1 + 0x50);
  if (lVar13 != 0) {
    iVar6 = 0;
    unaff_x22 = 0;
    do {
      uVar2 = *(uint *)(lVar13 + 0x18);
      uVar14 = (uint)unaff_x22;
      if ((int)uVar2 <= (int)uVar14) {
LAB_01521ef0:
        return (ulong)((int)uVar14 < (int)uVar2);
      }
      if (uVar2 <= uVar14) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar14 * 0x18 + 0x28);
      if (lVar7 == 0) break;
      /*System.Collections.Generic.List<UnlockManager.XPAward.Award>$$GetEnumerator*/ func_0x025dd144(&uStack_e8,lVar7,uRam0000000003d3dfb0);
      uStack_98 = uStack_e0;
      uStack_a0 = uStack_e8;
      uStack_88 = uStack_d0;
      uStack_90 = uStack_d8;
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      uStack_70 = uStack_b8;
      do {
        uVar5 = /*System.Collections.Generic.List.Enumerator<UnlockManager.XPAward.Award>$$MoveNext*/ func_0x01f887b8(&uStack_a0,uRam0000000003d338a8);
      } while (uVar5 != 0 && uStack_80._4_4_ != (int)param_2);
      aiStack_b0[iVar6] = 0x4b;
      iVar3 = aiStack_b0[2];
      iVar6 = aiStack_b0[2] + 1;
      aiStack_b0[2] = iVar6;
      /*System.Collections.Generic.List.Enumerator<UnlockManager.XPAward.Award>$$Dispose*/ func_0x01f887b4(&uStack_a0,uRam0000000003d338a0);
      if ((iVar6 != 0) && (aiStack_b0[iVar3] == 0x4b)) {
        iVar6 = iVar3;
        aiStack_b0[2] = iVar3;
      }
      if ((uVar5 & 1) != 0) goto LAB_01521ef0;
      unaff_x22 = (ulong)(uVar14 + 1);
      lVar13 = *(long *)(param_1 + 0x50);
    } while (lVar13 != 0);
  }
  func_0x00f78af4();
  puVar16 = &Atlas_Stats_UnlockManager__AddUnlockedIfNotExist;
  auVar17 = __Unwind_Resume();
  puVar4 = auStack_f0;
  do {
    while( true ) {
      uVar11 = auVar17._8_8_;
      lVar7 = auVar17._0_8_;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(long *)(puVar4 + -0x28) = lVar13;
      *(long *)(puVar4 + -0x20) = auVar18._8_8_;
      *(long *)(puVar4 + -0x18) = auVar18._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar15;
      *(undefined **)(puVar4 + -8) = puVar16;
      unaff_x22 = 0x3eb4000;
      uVar10 = param_3;
      if ((bRam0000000003eb4e3b & 1) == 0) {
        func_0x00f78a20(0x3d3d940);
        bRam0000000003eb4e3b = 1;
      }
      uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar11,0);
      if (((uVar8 & 1) != 0) ||
         (uVar8 = Atlas_Stats_UnlockManager__IsUnlocked(lVar7,uVar11), (uVar8 & 1) != 0)) {
        return 0;
      }
      uVar1 = 3;
      if ((int)param_3 == 0) {
        uVar1 = 0;
      }
      if (((*(long *)(lVar7 + 0x20) != 0) &&
          (lVar13 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x20),0), lVar13 != 0))
         && (*(long *)(lVar13 + 0x38) != 0)) {
        uVar10 = uVar1;
        /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar13 + 0x38),uVar11,uVar1,uRam0000000003d3d940);
        if (*(long *)(lVar7 + 0x20) != 0) {
          Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar7 + 0x20),0);
          return 1;
        }
      }
      auVar18 = func_0x00f78af4();
      lVar12 = auVar18._8_8_;
      lVar9 = auVar18._0_8_;
      *(undefined8 *)(puVar4 + -0x60) = 0x3eb4000;
      *(undefined8 *)(puVar4 + -0x58) = uVar1;
      *(undefined8 *)(puVar4 + -0x50) = uVar11;
      *(long *)(puVar4 + -0x48) = lVar7;
      *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x38) =
           &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
      puVar15 = puVar4 + -0x40;
      lVar13 = 0x3eb4000;
      param_3 = uVar10;
      if ((bRam0000000003eb4e38 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57398);
        func_0x00f78a20(0x3d257d8);
        func_0x00f78a20(0x3d69c18);
        bRam0000000003eb4e38 = 1;
        param_3 = uVar10;
      }
      *(undefined8 *)(puVar4 + -0x68) = 0;
      iVar6 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar9,lVar12);
      if (iVar6 == 0) break;
      if (lVar12 == 0) {
code_r0x01522270:
        puVar16 = &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
        auVar17 = func_0x00f78af4();
        puVar4 = puVar4 + -0x70;
      }
      else {
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(lVar12 + 0x58);
        iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar4 + -0x68,0);
        if (iVar6 == 0) break;
        auVar17._8_8_ = *(undefined8 *)(lVar12 + 0x58);
        auVar17._0_8_ = lVar9;
        param_3 = 1;
        puVar16 = &UNK_0152208c;
        puVar4 = puVar4 + -0x70;
      }
    }
    iVar6 = Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign(lVar9,lVar12);
    if (iVar6 == 0) {
code_r0x01522148:
      if (*(long *)(lVar9 + 0x20) == 0) goto code_r0x01522270;
      uVar10 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar9 + 0x20),0);
      auVar18._8_8_ = uVar10;
      auVar18._0_8_ = lVar9;
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(uVar10);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      lVar13 = 0x3d21270;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = 0x3d69c18;
      uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
      auVar17._8_8_ = uVar10;
      auVar17._0_8_ = lVar9;
      param_3 = 1;
      puVar16 = &UNK_015221cc;
      puVar4 = puVar4 + -0x70;
    }
    else {
      if (lVar12 == 0) goto code_r0x01522270;
      *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(lVar12 + 0x60);
      iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar4 + -0x68,0);
      if (iVar6 == 0) goto code_r0x01522148;
      auVar17._8_8_ = *(undefined8 *)(lVar12 + 0x60);
      auVar17._0_8_ = lVar9;
      param_3 = 1;
      puVar16 = &UNK_01522108;
      puVar4 = puVar4 + -0x70;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1521f20 | Atlas.Stats.UnlockManager.AddUnlockedIfNotExist
// ============================================================

undefined8
Atlas_Stats_UnlockManager__AddUnlockedIfNotExist
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar9;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  auVar10._8_8_ = unaff_x20;
  auVar10._0_8_ = unaff_x19;
  do {
    uVar8 = auVar11._8_8_;
    lVar6 = auVar11._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar10._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar10._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x22 = 0x3eb4000;
    uVar7 = param_3;
    if ((bRam0000000003eb4e3b & 1) == 0) {
      func_0x00f78a20(0x3d3d940);
      bRam0000000003eb4e3b = 1;
    }
    uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar8,0);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = Atlas_Stats_UnlockManager__IsUnlocked(lVar6,uVar8), (uVar4 & 1) != 0)) {
      return 0;
    }
    uVar1 = 3;
    if ((int)param_3 == 0) {
      uVar1 = 0;
    }
    if (((*(long *)(lVar6 + 0x20) != 0) &&
        (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0), lVar5 != 0)) &&
       (*(long *)(lVar5 + 0x38) != 0)) {
      uVar7 = uVar1;
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar5 + 0x38),uVar8,uVar1,uRam0000000003d3d940);
      if (*(long *)(lVar6 + 0x20) != 0) {
        Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar6 + 0x20),0);
        return 1;
      }
    }
    auVar10 = func_0x00f78af4();
    lVar9 = auVar10._8_8_;
    lVar5 = auVar10._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
    *(long *)((long)register0x00000008 + -0x48) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    unaff_x21 = 0x3eb4000;
    param_3 = uVar7;
    if ((bRam0000000003eb4e38 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57398);
      func_0x00f78a20(0x3d257d8);
      func_0x00f78a20(0x3d69c18);
      bRam0000000003eb4e38 = 1;
      param_3 = uVar7;
    }
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    iVar3 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar5,lVar9);
    if (iVar3 == 0) goto code_r0x015220cc;
    if (lVar9 == 0) goto code_r0x01522270;
    *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar9 + 0x58);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)register0x00000008 + -0x68),0);
    if (iVar3 == 0) {
code_r0x015220cc:
      iVar3 = Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign(lVar5,lVar9);
      if (iVar3 != 0) {
        if (lVar9 == 0) goto code_r0x01522270;
        *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar9 + 0x60);
        iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)register0x00000008 + -0x68),0);
        if (iVar3 != 0) {
          param_3 = 1;
          iVar3 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist
                            (lVar5,*(undefined8 *)(lVar9 + 0x60));
          if (iVar3 != 0) {
            if ((*(long *)(lVar5 + 0x10) == 0) ||
               (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 == 0))
            goto code_r0x01522270;
            param_3 = uRam0000000003d57398;
            iVar3 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar6,*(undefined8 *)(lVar9 + 0x60));
            if (iVar3 != 0) {
              if (*(long *)(lVar5 + 0x28) == 0) goto code_r0x01522270;
              param_3 = 0;
              Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                        (*(long *)(lVar5 + 0x28),*(undefined8 *)(lVar9 + 0x60));
            }
          }
        }
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        uVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar5 + 0x20),0);
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = lVar5;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(uVar7);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        param_3 = 1;
        uVar7 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar5,uVar7);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        unaff_x21 = 0x3d21270;
        unaff_x22 = 0x3d69c18;
        if (*(long *)(lVar5 + 0x10) != 0) {
          uVar4 = *(ulong *)(*(long *)(lVar5 + 0x10) + 0x10);
          auVar10._8_8_ = uVar4;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          if (uVar4 != 0) {
            param_3 = uRam0000000003d57398;
            uVar7 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(uVar4,uVar7);
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            lVar6 = *(long *)(lVar5 + 0x28);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar4;
            auVar10 = auVar2 << 0x40;
            unaff_x21 = 0x3d21270;
            unaff_x22 = 0x3d69c18;
            if (lVar6 != 0) {
              uVar7 = Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns(lVar6,uVar7,0);
              return uVar7;
            }
          }
        }
      }
    }
    else {
      param_3 = 1;
      iVar3 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar5,*(undefined8 *)(lVar9 + 0x58));
      if (iVar3 == 0) goto code_r0x015220cc;
      if ((*(long *)(lVar5 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 != 0)) {
        param_3 = uRam0000000003d57398;
        iVar3 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar6,*(undefined8 *)(lVar9 + 0x58));
        if (iVar3 != 0) {
          if (*(long *)(lVar5 + 0x28) == 0) goto code_r0x01522270;
          param_3 = 0;
          Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                    (*(long *)(lVar5 + 0x28),*(undefined8 *)(lVar9 + 0x58));
        }
        goto code_r0x015220cc;
      }
    }
code_r0x01522270:
    unaff_x30 = &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
    auVar11 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  } while( true );
}



// ============================================================
// RVA: 0x1521fec | Atlas.Stats.UnlockManager.UpdateCampaignUnlocksAndUpdateSave
// ============================================================

undefined8
Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  long lVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  undefined8 unaff_x21;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = unaff_x20;
  auVar11._0_8_ = unaff_x19;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  do {
    lVar3 = auVar10._8_8_;
    lVar7 = auVar10._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar11._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar11._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar9 = 0x3eb4000;
    uVar6 = param_3;
    if ((bRam0000000003eb4e38 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57398);
      func_0x00f78a20(0x3d257d8);
      func_0x00f78a20(0x3d69c18);
      bRam0000000003eb4e38 = 1;
      uVar6 = param_3;
    }
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    iVar2 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar7,lVar3);
    if (iVar2 == 0) goto LAB_015220cc;
    if (lVar3 == 0) goto code_r0x01521f20;
    *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)(lVar3 + 0x58);
    iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)register0x00000008 + -0x38),0);
    if (iVar2 == 0) {
LAB_015220cc:
      iVar2 = Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign(lVar7,lVar3);
      if (iVar2 != 0) {
        if (lVar3 == 0) goto code_r0x01521f20;
        *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)(lVar3 + 0x60);
        iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)register0x00000008 + -0x38),0);
        if (iVar2 != 0) {
          uVar6 = 1;
          iVar2 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist
                            (lVar7,*(undefined8 *)(lVar3 + 0x60));
          if (iVar2 != 0) {
            if ((*(long *)(lVar7 + 0x10) == 0) ||
               (lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar4 == 0))
            goto code_r0x01521f20;
            uVar6 = uRam0000000003d57398;
            iVar2 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar4,*(undefined8 *)(lVar3 + 0x60));
            if (iVar2 != 0) {
              if (*(long *)(lVar7 + 0x28) == 0) goto code_r0x01521f20;
              uVar6 = 0;
              Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                        (*(long *)(lVar7 + 0x28),*(undefined8 *)(lVar3 + 0x60));
            }
          }
        }
      }
      if (*(long *)(lVar7 + 0x20) != 0) {
        uVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x20),0);
        auVar10._8_8_ = uVar6;
        auVar10._0_8_ = lVar7;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(uVar6);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        uVar6 = 1;
        uVar9 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar7,uVar9);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        uVar9 = 0x3d21270;
        unaff_x22 = 0x3d69c18;
        if (*(long *)(lVar7 + 0x10) != 0) {
          uVar8 = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x10);
          auVar10._8_8_ = uVar8;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          if (uVar8 != 0) {
            uVar6 = uRam0000000003d57398;
            uVar9 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(uVar8,uVar5);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            lVar7 = *(long *)(lVar7 + 0x28);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar8;
            auVar10 = auVar1 << 0x40;
            uVar9 = 0x3d21270;
            unaff_x22 = 0x3d69c18;
            if (lVar7 != 0) {
              uVar6 = Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns(lVar7,uVar5,0);
              return uVar6;
            }
          }
        }
      }
    }
    else {
      uVar6 = 1;
      iVar2 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar7,*(undefined8 *)(lVar3 + 0x58));
      if (iVar2 == 0) goto LAB_015220cc;
      if ((*(long *)(lVar7 + 0x10) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar4 != 0)) {
        uVar6 = uRam0000000003d57398;
        iVar2 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar4,*(undefined8 *)(lVar3 + 0x58));
        if (iVar2 != 0) {
          if (*(long *)(lVar7 + 0x28) == 0) goto code_r0x01521f20;
          uVar6 = 0;
          Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                    (*(long *)(lVar7 + 0x28),*(undefined8 *)(lVar3 + 0x58));
        }
        goto LAB_015220cc;
      }
    }
code_r0x01521f20:
    auVar11 = func_0x00f78af4();
    uVar5 = auVar11._8_8_;
    lVar7 = auVar11._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar9;
    *(long *)((long)register0x00000008 + -0x60) = auVar10._8_8_;
    *(long *)((long)register0x00000008 + -0x58) = auVar10._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    unaff_x22 = 0x3eb4000;
    param_3 = uVar6;
    if ((bRam0000000003eb4e3b & 1) == 0) {
      func_0x00f78a20(0x3d3d940);
      bRam0000000003eb4e3b = 1;
    }
    uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar5,0);
    if (((uVar8 & 1) != 0) ||
       (uVar8 = Atlas_Stats_UnlockManager__IsUnlocked(lVar7,uVar5), (uVar8 & 1) != 0)) {
      return 0;
    }
    unaff_x21 = 3;
    if ((int)uVar6 == 0) {
      unaff_x21 = 0;
    }
    if (((*(long *)(lVar7 + 0x20) != 0) &&
        (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x20),0), lVar3 != 0)) &&
       (*(long *)(lVar3 + 0x38) != 0)) {
      param_3 = unaff_x21;
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar3 + 0x38),uVar5,unaff_x21,uRam0000000003d3d940);
      if (*(long *)(lVar7 + 0x20) != 0) {
        Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar7 + 0x20),0);
        return 1;
      }
    }
    unaff_x30 = Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
    auVar10 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  } while( true );
}



// ============================================================
// RVA: 0x1522274 | Atlas.Stats.UnlockManager.UpdateSaveDataForUnlock
// ============================================================

undefined8
Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar8;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  auVar10._8_8_ = unaff_x20;
  auVar10._0_8_ = unaff_x19;
  do {
    uVar9 = auVar11._8_8_;
    lVar6 = auVar11._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar10._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar10._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x22 = 0x3eb4000;
    uVar7 = param_3;
    if ((bRam0000000003eb4e3b & 1) == 0) {
      func_0x00f78a20(0x3d3d940);
      bRam0000000003eb4e3b = 1;
    }
    uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar9,0);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = Atlas_Stats_UnlockManager__IsUnlocked(lVar6,uVar9), (uVar4 & 1) != 0)) {
      return 0;
    }
    uVar1 = 3;
    if ((int)param_3 == 0) {
      uVar1 = 0;
    }
    if (((*(long *)(lVar6 + 0x20) != 0) &&
        (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0), lVar5 != 0)) &&
       (*(long *)(lVar5 + 0x38) != 0)) {
      uVar7 = uVar1;
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar5 + 0x38),uVar9,uVar1,uRam0000000003d3d940);
      if (*(long *)(lVar6 + 0x20) != 0) {
        Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar6 + 0x20),0);
        return 1;
      }
    }
    auVar10 = func_0x00f78af4();
    lVar8 = auVar10._8_8_;
    lVar5 = auVar10._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar9;
    *(long *)((long)register0x00000008 + -0x48) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) =
         Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    unaff_x21 = 0x3eb4000;
    param_3 = uVar7;
    if ((bRam0000000003eb4e38 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57398);
      func_0x00f78a20(0x3d257d8);
      func_0x00f78a20(0x3d69c18);
      bRam0000000003eb4e38 = 1;
      param_3 = uVar7;
    }
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    iVar3 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar5,lVar8);
    if (iVar3 == 0) goto LAB_015220cc;
    if (lVar8 == 0) goto LAB_01522270;
    *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar8 + 0x58);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)register0x00000008 + -0x68),0);
    if (iVar3 == 0) {
LAB_015220cc:
      iVar3 = Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign(lVar5,lVar8);
      if (iVar3 != 0) {
        if (lVar8 == 0) goto LAB_01522270;
        *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar8 + 0x60);
        iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((undefined1 *)((long)register0x00000008 + -0x68),0);
        if (iVar3 != 0) {
          param_3 = 1;
          iVar3 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist
                            (lVar5,*(undefined8 *)(lVar8 + 0x60));
          if (iVar3 != 0) {
            if ((*(long *)(lVar5 + 0x10) == 0) ||
               (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 == 0)) goto LAB_01522270;
            param_3 = uRam0000000003d57398;
            iVar3 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar6,*(undefined8 *)(lVar8 + 0x60));
            if (iVar3 != 0) {
              if (*(long *)(lVar5 + 0x28) == 0) goto LAB_01522270;
              param_3 = 0;
              Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                        (*(long *)(lVar5 + 0x28),*(undefined8 *)(lVar8 + 0x60));
            }
          }
        }
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        uVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar5 + 0x20),0);
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = lVar5;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(uVar7);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        param_3 = 1;
        uVar7 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar5,uVar7);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        unaff_x21 = 0x3d21270;
        unaff_x22 = 0x3d69c18;
        if (*(long *)(lVar5 + 0x10) != 0) {
          uVar4 = *(ulong *)(*(long *)(lVar5 + 0x10) + 0x10);
          auVar10._8_8_ = uVar4;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          if (uVar4 != 0) {
            param_3 = uRam0000000003d57398;
            uVar7 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(uVar4,uVar7);
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            lVar6 = *(long *)(lVar5 + 0x28);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar4;
            auVar10 = auVar2 << 0x40;
            unaff_x21 = 0x3d21270;
            unaff_x22 = 0x3d69c18;
            if (lVar6 != 0) {
              uVar7 = Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns(lVar6,uVar7,0);
              return uVar7;
            }
          }
        }
      }
    }
    else {
      param_3 = 1;
      iVar3 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar5,*(undefined8 *)(lVar8 + 0x58));
      if (iVar3 == 0) goto LAB_015220cc;
      if ((*(long *)(lVar5 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 != 0)) {
        param_3 = uRam0000000003d57398;
        iVar3 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar6,*(undefined8 *)(lVar8 + 0x58));
        if (iVar3 != 0) {
          if (*(long *)(lVar5 + 0x28) == 0) goto LAB_01522270;
          param_3 = 0;
          Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                    (*(long *)(lVar5 + 0x28),*(undefined8 *)(lVar8 + 0x58));
        }
        goto LAB_015220cc;
      }
    }
LAB_01522270:
    unaff_x30 = Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
    auVar11 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  } while( true );
}



// ============================================================
// RVA: 0x1522278 | Atlas.Stats.UnlockManager.HaveAllCharactersBeenUnlockedForCampaign
// ============================================================

ulong Atlas_Stats_UnlockManager__HaveAllCharactersBeenUnlockedForCampaign
                (long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  int iStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  lVar10 = 0x3eb4000;
  if ((bRam0000000003eb4e39 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d2dbc0);
    func_0x00f78a20(0x3d573a0);
    bRam0000000003eb4e39 = 1;
  }
  if ((param_2 != 0) && (unaff_x23 = *(long *)(param_2 + 0x50), unaff_x23 != 0)) {
    iVar3 = (int)*(ulong *)(unaff_x23 + 0x18);
    unaff_x24 = (ulong)(0 < iVar3);
    if (0 < iVar3) {
      unaff_x25 = 0;
      uVar11 = 0x3d20618;
      uVar9 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= unaff_x25) goto LAB_015223d8;
        param_2 = 0;
        lVar10 = *(long *)(unaff_x23 + unaff_x25 * 0x10 + 0x28);
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= (int)param_2) break;
          unaff_x26 = uVar11;
          if (lVar10 == 0) goto LAB_015223d4;
          uVar5 = Atlas_Definitions_ChapterDefinition__GetRankRewardIdByIndex(lVar10,param_2,0);
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), unaff_x22 = uVar5,
             unaff_x26 = 0x3d20618, lVar6 == 0)) goto LAB_015223d4;
          iVar3 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar6,uVar5,uRam0000000003d573a0);
          if ((iVar3 != 0) &&
             (iVar3 = Atlas_Stats_UnlockManager__IsUnlocked(param_1,uVar5), iVar3 == 0))
          goto LAB_015223b0;
          param_2 = (ulong)((int)param_2 + 1);
        }
        unaff_x25 = unaff_x25 + 1;
        uVar4 = *(uint *)(unaff_x23 + 0x18);
        uVar9 = (ulong)uVar4;
        unaff_x24 = (ulong)((long)unaff_x25 < (long)(int)uVar4);
      } while ((long)unaff_x25 < (long)(int)uVar4);
    }
LAB_015223b0:
    return (ulong)(~(uint)unaff_x24 & 1);
  }
LAB_015223d4:
  uVar11 = unaff_x26;
  func_0x00f78af4();
LAB_015223d8:
  uVar5 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar5,0);
  lVar8 = auVar12._8_8_;
  lVar6 = auVar12._0_8_;
  puStack_68 = &Atlas_Stats_UnlockManager__HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent;
  uStack_90 = unaff_x22;
  lStack_88 = lVar10;
  uStack_80 = param_2;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  auVar13 = auVar12;
  if ((bRam0000000003eb4e3a & 1) == 0) {
    auVar13 = func_0x00f78a20(0x3d57260);
    bRam0000000003eb4e3a = 1;
  }
  uVar5 = 0x3eb4000;
  if (lVar8 != 0) {
    uStack_98 = *(undefined8 *)(lVar8 + 0x58);
    uVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    auVar14 = Atlas_Stats_UnlockManager__IsUnlockStatusFlagSet
                        (lVar6,*(undefined8 *)(lVar8 + 0x58),1);
    auVar13 = auVar14;
    if (*(long *)(lVar6 + 0x10) != 0) {
      lVar10 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar14._8_8_;
      auVar13 = auVar13 << 0x40;
      uVar5 = auVar14._0_8_;
      if (lVar10 != 0) {
        uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(lVar8 + 0x58),uRam0000000003d57260);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar9;
        auVar13 = auVar1 << 0x40;
        if (*(long *)(lVar6 + 0x10) != 0) {
          uVar4 = Atlas_Definitions_AtlasDefinitions__IsContentValid
                            (*(long *)(lVar6 + 0x10),uVar9,0);
          return (ulong)(auVar14._0_4_ & uVar4);
        }
      }
    }
  }
  auVar13 = func_0x00f78af4(auVar13._0_8_,auVar13._8_8_);
  lVar10 = auVar13._0_8_;
  puStack_a8 = &Atlas_Stats_UnlockManager__RemoveUnlockedIfExist;
  uStack_f0 = uVar11;
  uStack_e8 = unaff_x25;
  uStack_e0 = unaff_x24;
  lStack_d8 = unaff_x23;
  uStack_d0 = unaff_x22;
  uStack_c8 = uVar5;
  ppuStack_b0 = &puStack_70;
  if ((bRam0000000003eb4e3c & 1) == 0) {
    lStack_c0 = lVar8;
    lStack_b8 = lVar6;
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d3d958);
    auVar12._8_8_ = lStack_c0;
    auVar12._0_8_ = lStack_b8;
    bRam0000000003eb4e3c = 1;
  }
  lStack_c0 = auVar12._8_8_;
  lStack_b8 = auVar12._0_8_;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_118 = 0;
  if (*(long *)(lVar10 + 0x20) == 0) {
code_r0x01522650:
    lStack_c0 = auVar12._8_8_;
    lStack_b8 = auVar12._0_8_;
    func_0x00f78af4();
  }
  else {
    lVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar10 + 0x20),0);
    auVar14._8_8_ = lStack_c0;
    auVar14._0_8_ = lStack_b8;
    auVar12._8_8_ = lStack_c0;
    auVar12._0_8_ = lStack_b8;
    if ((lVar6 == 0) || (auVar12 = auVar14, *(long *)(lVar6 + 0x38) == 0)) goto code_r0x01522650;
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_140,*(long *)(lVar6 + 0x38),uRam0000000003d3d950);
    uStack_108 = uStack_138;
    uStack_110 = uStack_140;
    uStack_f8 = uStack_128;
    lStack_100 = lStack_130;
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_110,uRam0000000003d33740);
      uVar11 = uStack_f8;
      lVar6 = lStack_100;
      if ((uVar9 & 1) == 0) {
        iStack_120 = 0x7a;
        goto code_r0x01522604;
      }
      if (lStack_100 == 0) {
        func_0x00f78af4();
        goto code_r0x01522678;
      }
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lStack_100,auVar13._8_8_,4,0);
    } while ((uVar7 & 1) == 0);
    if (*(long *)(lVar10 + 0x20) != 0) {
      lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar10 + 0x20),0);
      if (lVar8 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar8 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Collections.Generic.List<SaveData.UnlockedData>$$Remove*/ func_0x025933c8(*(long *)(lVar8 + 0x38),lVar6,uVar11,uRam0000000003d3d958);
        if (*(long *)(lVar10 + 0x20) == 0) {
          func_0x00f78af4();
        }
        else {
          Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar10 + 0x20),0);
          if (*(long *)(lVar10 + 0x20) != 0) {
            Atlas_Save_SaveManager__StartSave(*(long *)(lVar10 + 0x20),0);
            iStack_120 = 0x7c;
code_r0x01522604:
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_110,uRam0000000003d33738);
            if (iStack_120 != 0x7c) {
              uVar9 = 0;
            }
            return uVar9;
          }
          func_0x00f78af4();
        }
      }
      goto code_r0x01522678;
    }
  }
  func_0x00f78af4();
code_r0x01522678:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x152267c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15223e4 | Atlas.Stats.UnlockManager.HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent
// ============================================================

ulong Atlas_Stats_UnlockManager__HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent
                (long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_38;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  if ((bRam0000000003eb4e3a & 1) == 0) {
    auVar11 = func_0x00f78a20(0x3d57260);
    bRam0000000003eb4e3a = 1;
  }
  if (param_2 != 0) {
    uStack_38 = *(undefined8 *)(param_2 + 0x58);
    uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_38,0);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    auVar12 = Atlas_Stats_UnlockManager__IsUnlockStatusFlagSet
                        (param_1,*(undefined8 *)(param_2 + 0x58),1);
    auVar11 = auVar12;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar12._8_8_;
      auVar11 = auVar1 << 0x40;
      if (lVar7 != 0) {
        uVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,*(undefined8 *)(param_2 + 0x58),uRam0000000003d57260);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        auVar11 = auVar2 << 0x40;
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar5 = Atlas_Definitions_AtlasDefinitions__IsContentValid
                            (*(long *)(param_1 + 0x10),uVar6,0);
          return (ulong)(auVar12._0_4_ & uVar5);
        }
      }
    }
  }
  auVar11 = func_0x00f78af4(auVar11._0_8_,auVar11._8_8_);
  lVar7 = auVar11._0_8_;
  if ((bRam0000000003eb4e3c & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d3d958);
    bRam0000000003eb4e3c = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_b8 = 0;
  if (((*(long *)(lVar7 + 0x20) == 0) ||
      (lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x20),0), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x38) == 0)) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_e0,*(long *)(lVar8 + 0x38),uRam0000000003d3d950);
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    do {
      uVar6 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_b0,uRam0000000003d33740);
      uVar3 = uStack_98;
      lVar8 = lStack_a0;
      if ((uVar6 & 1) == 0) {
        iStack_c0 = 0x7a;
        goto code_r0x01522604;
      }
      if (lStack_a0 == 0) {
        func_0x00f78af4();
        goto code_r0x01522678;
      }
      uVar9 = /*System.String$$Equals*/ func_0x029caa48(lStack_a0,auVar11._8_8_,4,0);
    } while ((uVar9 & 1) == 0);
    if (*(long *)(lVar7 + 0x20) != 0) {
      lVar10 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar7 + 0x20),0);
      if (lVar10 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar10 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Collections.Generic.List<SaveData.UnlockedData>$$Remove*/ func_0x025933c8(*(long *)(lVar10 + 0x38),lVar8,uVar3,uRam0000000003d3d958);
        if (*(long *)(lVar7 + 0x20) == 0) {
          func_0x00f78af4();
        }
        else {
          Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar7 + 0x20),0);
          if (*(long *)(lVar7 + 0x20) != 0) {
            Atlas_Save_SaveManager__StartSave(*(long *)(lVar7 + 0x20),0);
            iStack_c0 = 0x7c;
code_r0x01522604:
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_b0,uRam0000000003d33738);
            if (iStack_c0 != 0x7c) {
              uVar6 = 0;
            }
            return uVar6;
          }
          func_0x00f78af4();
        }
      }
      goto code_r0x01522678;
    }
  }
  func_0x00f78af4();
code_r0x01522678:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x152267c);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x15224a4 | Atlas.Stats.UnlockManager.RemoveUnlockedIfExist
// ============================================================

ulong Atlas_Stats_UnlockManager__RemoveUnlockedIfExist(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4e3c & 1) == 0) {
    func_0x00f78a20(0x3d33738);
    func_0x00f78a20(0x3d33740);
    func_0x00f78a20(0x3d33748);
    func_0x00f78a20(0x3d3d950);
    func_0x00f78a20(0x3d3d958);
    bRam0000000003eb4e3c = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_78 = 0;
  if (((*(long *)(param_1 + 0x20) == 0) ||
      (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar3 == 0)) ||
     (*(long *)(lVar3 + 0x38) == 0)) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_a0,*(long *)(lVar3 + 0x38),uRam0000000003d3d950);
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    lStack_60 = lStack_90;
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_70,uRam0000000003d33740);
      uVar1 = uStack_58;
      lVar3 = lStack_60;
      if ((uVar4 & 1) == 0) {
        iStack_80 = 0x7a;
        goto LAB_01522604;
      }
      if (lStack_60 == 0) {
        func_0x00f78af4();
        goto code_r0x01522678;
      }
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lStack_60,param_2,4,0);
    } while ((uVar5 & 1) == 0);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0);
      if (lVar6 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar6 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Collections.Generic.List<SaveData.UnlockedData>$$Remove*/ func_0x025933c8(*(long *)(lVar6 + 0x38),lVar3,uVar1,uRam0000000003d3d958);
        if (*(long *)(param_1 + 0x20) == 0) {
          func_0x00f78af4();
        }
        else {
          Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x20) != 0) {
            Atlas_Save_SaveManager__StartSave(*(long *)(param_1 + 0x20),0);
            iStack_80 = 0x7c;
LAB_01522604:
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_70,uRam0000000003d33738);
            if (iStack_80 != 0x7c) {
              uVar4 = 0;
            }
            return uVar4;
          }
          func_0x00f78af4();
        }
      }
      goto code_r0x01522678;
    }
  }
  func_0x00f78af4();
code_r0x01522678:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x152267c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15226dc | Atlas.Stats.UnlockManager.MarkUnlockSeen
// ============================================================

undefined8 Atlas_Stats_UnlockManager__MarkUnlockSeen(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar9;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  uVar8 = 1;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    uVar7 = auVar10._8_8_;
    lVar4 = auVar10._0_8_;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(ulong *)(puVar2 + -0x48) = unaff_x25;
    *(ulong *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4e3d & 1) == 0) {
      func_0x00f78a20(0x3d3d960);
      func_0x00f78a20(0x3d3d968);
      func_0x00f78a20(0x3d3d970);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e3d = 1;
    }
    lVar5 = *(long *)(lVar4 + 0x20);
    unaff_x20 = uVar8;
    if (lVar5 != 0) {
      unaff_x24 = 0;
      unaff_x21 = 0;
      do {
        lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5,0);
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0x38) == 0)) break;
        uVar9 = (uint)unaff_x21;
        if (*(int *)(*(long *)(lVar5 + 0x38) + 0x18) <= (int)uVar9) {
          return 0;
        }
        if (((*(long *)(lVar4 + 0x20) == 0) ||
            (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x20),0), lVar5 == 0))
           || (unaff_x23 = *(long *)(lVar5 + 0x38), unaff_x23 == 0)) break;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(unaff_x23 + 0x10) + unaff_x24;
        unaff_x23 = *(long *)(lVar5 + 0x20);
        if (unaff_x23 == 0) break;
        unaff_x25 = *(ulong *)(lVar5 + 0x28);
        iVar3 = /*System.String$$Equals*/ func_0x029caa48(unaff_x23,uVar7,4,0);
        if (iVar3 != 0) {
          puVar2[-0x51] = (char)unaff_x25;
          unaff_x24 = 0x3d29680;
          lVar5 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,puVar2 + -0x51);
          puVar2[-0x52] = (char)uVar8;
          uVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,puVar2 + -0x52);
          uVar7 = 0;
          if (lVar5 != 0) {
            uVar9 = (uint)unaff_x25 & 0xff;
            unaff_x24 = (ulong)uVar9;
            uVar7 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar5,uVar6,0);
            uVar1 = uVar9 & ((uint)uVar8 ^ 0xff);
            unaff_x20 = (ulong)uVar1;
            if (uVar1 == uVar9) {
              return uVar7;
            }
            if (((*(long *)(lVar4 + 0x20) != 0) &&
                (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar4 + 0x20),0), lVar5 != 0
                )) && (*(long *)(lVar5 + 0x38) != 0)) {
              /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(lVar5 + 0x38),unaff_x21,unaff_x23,
                              unaff_x25 & 0xffffffffffffff00 | unaff_x20,uRam0000000003d3d970);
              if (*(long *)(lVar4 + 0x20) != 0) {
                Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar4 + 0x20),0);
                return uVar7;
              }
            }
          }
          break;
        }
        unaff_x21 = (ulong)(uVar9 + 1);
        lVar5 = *(long *)(lVar4 + 0x20);
        unaff_x24 = unaff_x24 + 0x10;
      } while (lVar5 != 0);
    }
    unaff_x30 = &Atlas_Stats_UnlockManager__MarkNewAsSeen;
    auVar10 = func_0x00f78af4();
    uVar8 = 2;
    puVar2 = puVar2 + -0x60;
    unaff_x19 = lVar4;
    unaff_x22 = uVar7;
  } while( true );
}



// ============================================================
// RVA: 0x15226e4 | Atlas.Stats.UnlockManager.UnsetUnlockStatus
// ============================================================

undefined8
Atlas_Stats_UnlockManager__UnsetUnlockStatus(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar7;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  do {
    uVar6 = auVar8._8_8_;
    lVar3 = auVar8._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4e3d & 1) == 0) {
      func_0x00f78a20(0x3d3d960);
      func_0x00f78a20(0x3d3d968);
      func_0x00f78a20(0x3d3d970);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e3d = 1;
    }
    lVar4 = *(long *)(lVar3 + 0x20);
    unaff_x20 = param_3;
    if (lVar4 != 0) {
      unaff_x24 = 0;
      unaff_x21 = 0;
      do {
        lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar4,0);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) break;
        uVar7 = (uint)unaff_x21;
        if (*(int *)(*(long *)(lVar4 + 0x38) + 0x18) <= (int)uVar7) {
          return 0;
        }
        if (((*(long *)(lVar3 + 0x20) == 0) ||
            (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar3 + 0x20),0), lVar4 == 0))
           || (unaff_x23 = *(long *)(lVar4 + 0x38), unaff_x23 == 0)) break;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(unaff_x23 + 0x10) + unaff_x24;
        unaff_x23 = *(long *)(lVar4 + 0x20);
        if (unaff_x23 == 0) break;
        unaff_x25 = *(ulong *)(lVar4 + 0x28);
        iVar2 = /*System.String$$Equals*/ func_0x029caa48(unaff_x23,uVar6,4,0);
        if (iVar2 != 0) {
          *(char *)((long)register0x00000008 + -0x51) = (char)unaff_x25;
          unaff_x24 = 0x3d29680;
          lVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,
                                  (undefined1 *)((long)register0x00000008 + -0x51));
          *(char *)((long)register0x00000008 + -0x52) = (char)param_3;
          uVar5 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,
                                  (undefined1 *)((long)register0x00000008 + -0x52));
          uVar6 = 0;
          if (lVar4 != 0) {
            uVar7 = (uint)unaff_x25 & 0xff;
            unaff_x24 = (ulong)uVar7;
            uVar6 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar4,uVar5,0);
            uVar1 = uVar7 & ((uint)param_3 ^ 0xff);
            unaff_x20 = (ulong)uVar1;
            if (uVar1 == uVar7) {
              return uVar6;
            }
            if (((*(long *)(lVar3 + 0x20) != 0) &&
                (lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar3 + 0x20),0), lVar4 != 0
                )) && (*(long *)(lVar4 + 0x38) != 0)) {
              /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(lVar4 + 0x38),unaff_x21,unaff_x23,
                              unaff_x25 & 0xffffffffffffff00 | unaff_x20,uRam0000000003d3d970);
              if (*(long *)(lVar3 + 0x20) != 0) {
                Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar3 + 0x20),0);
                return uVar6;
              }
            }
          }
          break;
        }
        unaff_x21 = (ulong)(uVar7 + 1);
        lVar4 = *(long *)(lVar3 + 0x20);
        unaff_x24 = unaff_x24 + 0x10;
      } while (lVar4 != 0);
    }
    unaff_x30 = &Atlas_Stats_UnlockManager__MarkNewAsSeen;
    auVar8 = func_0x00f78af4();
    param_3 = 2;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = lVar3;
    unaff_x22 = uVar6;
  } while( true );
}



// ============================================================
// RVA: 0x15228c0 | Atlas.Stats.UnlockManager.MarkNewAsSeen
// ============================================================

undefined8 Atlas_Stats_UnlockManager__MarkNewAsSeen(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar7;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  do {
    uVar5 = auVar8._8_8_;
    lVar6 = auVar8._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 2;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4e3d & 1) == 0) {
      func_0x00f78a20(0x3d3d960);
      func_0x00f78a20(0x3d3d968);
      func_0x00f78a20(0x3d3d970);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e3d = 1;
    }
    lVar3 = *(long *)(lVar6 + 0x20);
    if (lVar3 != 0) {
      unaff_x24 = 0;
      unaff_x21 = 0;
      do {
        lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3,0);
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) break;
        uVar7 = (uint)unaff_x21;
        if (*(int *)(*(long *)(lVar3 + 0x38) + 0x18) <= (int)uVar7) {
          return 0;
        }
        if (((*(long *)(lVar6 + 0x20) == 0) ||
            (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0), lVar3 == 0))
           || (unaff_x23 = *(long *)(lVar3 + 0x38), unaff_x23 == 0)) break;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(unaff_x23 + 0x10) + unaff_x24;
        unaff_x23 = *(long *)(lVar3 + 0x20);
        if (unaff_x23 == 0) break;
        unaff_x25 = *(ulong *)(lVar3 + 0x28);
        iVar2 = /*System.String$$Equals*/ func_0x029caa48(unaff_x23,uVar5,4,0);
        if (iVar2 != 0) {
          *(char *)((long)register0x00000008 + -0x51) = (char)unaff_x25;
          unaff_x24 = 0x3d29680;
          lVar3 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,
                                  (undefined1 *)((long)register0x00000008 + -0x51));
          *(undefined1 *)((long)register0x00000008 + -0x52) = 2;
          uVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,
                                  (undefined1 *)((long)register0x00000008 + -0x52));
          uVar5 = 0;
          if (lVar3 != 0) {
            uVar7 = (uint)unaff_x25 & 0xff;
            unaff_x24 = (ulong)uVar7;
            uVar5 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar3,uVar4,0);
            uVar1 = (uint)unaff_x25 & 0xfd;
            unaff_x20 = (ulong)uVar1;
            if (uVar1 == uVar7) {
              return uVar5;
            }
            if (((*(long *)(lVar6 + 0x20) != 0) &&
                (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0), lVar3 != 0
                )) && (*(long *)(lVar3 + 0x38) != 0)) {
              /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(lVar3 + 0x38),unaff_x21,unaff_x23,
                              unaff_x25 & 0xffffffffffffff00 | unaff_x20,uRam0000000003d3d970);
              if (*(long *)(lVar6 + 0x20) != 0) {
                Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar6 + 0x20),0);
                return uVar5;
              }
            }
          }
          break;
        }
        unaff_x21 = (ulong)(uVar7 + 1);
        lVar3 = *(long *)(lVar6 + 0x20);
        unaff_x24 = unaff_x24 + 0x10;
      } while (lVar3 != 0);
    }
    unaff_x30 = Atlas_Stats_UnlockManager__MarkNewAsSeen;
    auVar8 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = lVar6;
    unaff_x22 = uVar5;
  } while( true );
}



// ============================================================
// RVA: 0x15228c8 | Atlas.Stats.UnlockManager.SetUnlockStatus
// ============================================================

/* WARNING: Possible PIC construction at 0x01522afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522b00) */
/* WARNING: Removing unreachable block (ram,0x01522b18) */

ulong Atlas_Stats_UnlockManager__SetUnlockStatus(long param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int extraout_w1;
  int *piVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4e3e & 1) == 0) {
    func_0x00f78a20(0x3d3d960);
    func_0x00f78a20(0x3d3d968);
    func_0x00f78a20(0x3d3d970);
    bRam0000000003eb4e3e = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar11 = 0;
    uVar9 = 0;
    do {
      uVar3 = Atlas_Save_SaveManager__get_SaveData(lVar2,0);
      if ((uVar3 == 0) || (*(long *)(uVar3 + 0x38) == 0)) break;
      if (*(int *)(*(long *)(uVar3 + 0x38) + 0x18) <= (int)uVar9) {
        return uVar3;
      }
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar2 == 0))
         || (lVar2 = *(long *)(lVar2 + 0x38), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(lVar2 + 0x10) + lVar11;
      lVar10 = *(long *)(lVar2 + 0x20);
      if (lVar10 == 0) break;
      uVar13 = *(ulong *)(lVar2 + 0x28);
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar10,param_2,4,0);
      if ((int)uVar3 != 0) {
        uVar12 = (uint)uVar13;
        param_3 = uVar12 & 0xff | param_3;
        if (param_3 == (uVar12 & 0xff)) {
          return uVar3;
        }
        if (((*(long *)(param_1 + 0x20) != 0) &&
            (lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar2 != 0))
           && (*(long *)(lVar2 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(lVar2 + 0x38),uVar9,lVar10,
                          uVar13 & 0xffffffffffffff00 | (ulong)param_3,uRam0000000003d3d970);
          uVar3 = *(ulong *)(param_1 + 0x20);
          if (uVar3 != 0) {
            *(undefined1 *)(uVar3 + 0x110) = 1;
            return uVar3;
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      lVar2 = *(long *)(param_1 + 0x20);
      lVar11 = lVar11 + 0x10;
    } while (lVar2 != 0);
  }
  auVar14 = func_0x00f78af4();
  lVar2 = auVar14._0_8_;
  puStack_58 = &Atlas_Stats_UnlockManager__UnlockAll;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e3f & 1) == 0) {
    func_0x00f78a20(0x3d5fc30);
    func_0x00f78a20(0x3d5fc38);
    func_0x00f78a20(0x3d5fc40);
    func_0x00f78a20(0x3d5fc48);
    func_0x00f78a20(0x3d5fc50);
    bRam0000000003eb4e3f = 1;
  }
  /*Atlas.Stats.UnlockManager$$UnlockAllCampaign*/ func_0x01522b44(lVar2,auVar14._8_8_);
  lVar11 = lRam0000000003d5fc38;
  uStack_e0 = 0x3d5fc48;
  uStack_d8 = 0x3d5fc40;
  uStack_d0 = 0x3d5fc50;
  uStack_c8 = 0x3d5fc30;
  puStack_a8 = &UNK_01522b00;
  ppuStack_b0 = &puStack_60;
  if ((bRam0000000003eb6a87 & 1) == 0) {
    uStack_c0 = auVar14._8_8_;
    lStack_b8 = lVar2;
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    auVar14._8_8_ = uStack_c0;
    auVar14._0_8_ = lStack_b8;
    bRam0000000003eb6a87 = 1;
  }
  uStack_c0 = auVar14._8_8_;
  lStack_b8 = auVar14._0_8_;
  lStack_e8 = 0;
  if ((*(long *)(lVar2 + 0x10) == 0) ||
     (lVar10 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10), lVar10 == 0)) {
code_r0x01a3cf14:
    uStack_c0 = auVar14._8_8_;
    lStack_b8 = auVar14._0_8_;
    func_0x00f78af4();
  }
  else {
    (**(code **)**(undefined8 **)(lVar11 + 0x30))(lVar10,&lStack_e8);
    auVar14._8_8_ = uStack_c0;
    auVar14._0_8_ = lStack_b8;
    if (lStack_e8 == 0) goto code_r0x01a3cf14;
    plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_e8,uRam0000000003d3fe40);
    if (plVar4 != (long *)0x0) {
      do {
        lVar11 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x01a3cda8;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01a3cda8:
        uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar3 & 1) == 0) {
          lVar2 = 0;
          do {
            if (plVar4 != (long *)0x0) {
              lVar11 = *plVar4;
              uVar3 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar8 = piVar8 + 4;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
            }
            if (lVar2 == 0) {
              return uVar3;
            }
            func_0x00f78ac0(lVar2,0);
            if (extraout_w1 != 1) {
              auVar15 = __Unwind_Resume();
              return auVar15._0_8_ + (long)auVar15._8_4_;
            }
            plVar6 = (long *)___cxa_begin_catch();
            lVar2 = *plVar6;
            uVar3 = ___cxa_end_catch();
          } while( true );
        }
        lVar11 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar11 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(lVar2,uVar7,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1522a50 | Atlas.Stats.UnlockManager.UnlockAll
// ============================================================

/* WARNING: Possible PIC construction at 0x01522afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522b00) */
/* WARNING: Removing unreachable block (ram,0x01522b18) */

ulong Atlas_Stats_UnlockManager__UnlockAll(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4e3f & 1) == 0) {
    func_0x00f78a20(0x3d5fc30);
    func_0x00f78a20(0x3d5fc38);
    func_0x00f78a20(0x3d5fc40);
    func_0x00f78a20(0x3d5fc48);
    func_0x00f78a20(0x3d5fc50);
    bRam0000000003eb4e3f = 1;
  }
  /*Atlas.Stats.UnlockManager$$UnlockAllCampaign*/ func_0x01522b44(param_1,param_2);
  lVar7 = lRam0000000003d5fc38;
  uStack_90 = 0x3d5fc48;
  uStack_88 = 0x3d5fc40;
  uStack_80 = 0x3d5fc50;
  uStack_78 = 0x3d5fc30;
  uStack_58 = 0x1522b00;
  uStack_70 = param_2;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a87 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb6a87 = 1;
  }
  lStack_98 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) ||
     ((**(code **)**(undefined8 **)(lVar7 + 0x30))(lVar2,&lStack_98), lStack_98 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_98,uRam0000000003d3fe40);
    if (plVar3 != (long *)0x0) {
      do {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01a3cda8:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          lVar7 = 0;
          do {
            if (plVar3 != (long *)0x0) {
              lVar2 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
            if (lVar7 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(lVar7,0);
            if (extraout_w1 != 1) {
              auVar10 = __Unwind_Resume();
              return auVar10._0_8_ + (long)auVar10._8_4_;
            }
            plVar5 = (long *)___cxa_begin_catch();
            lVar7 = *plVar5;
            uVar8 = ___cxa_end_catch();
          } while( true );
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(param_1,uVar6,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1522b44 | Atlas.Stats.UnlockManager.UnlockAllCampaign
// ============================================================

ulong Atlas_Stats_UnlockManager__UnlockAllCampaign(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w1;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lStack_68;
  
  if ((bRam0000000003eb4e42 & 1) == 0) {
    func_0x00f78a20(0x3d20508);
    func_0x00f78a20(0x3d2dbb8);
    func_0x00f78a20(0x3d57540);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb4e42 = 1;
  }
  lStack_68 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 == 0)) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar3,&lStack_68,uRam0000000003d57540), lStack_68 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
    if (plVar4 != (long *)0x0) {
code_r0x01522c34:
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01522c80;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01522c80:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        lVar3 = 0;
        do {
          if (plVar4 != (long *)0x0) {
            lVar8 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto code_r0x01522de8;
                }
                piVar10 = piVar10 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01522de8:
            uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          }
          if (lVar3 == 0) {
            return uVar9;
          }
          func_0x00f78ac0(lVar3,0);
          if (extraout_w1 != 1) {
            __Unwind_Resume();
            iVar2 = Atlas_Stats_UnlockManager__GetEventProgressionIndex();
            return (ulong)(iVar2 != -1);
          }
          plVar6 = (long *)___cxa_begin_catch();
          lVar3 = *plVar6;
          uVar9 = ___cxa_end_catch();
        } while( true );
      }
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x01522cdc;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01522cdc:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01522e4c;
      }
      if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.Definitions.CampaignDefinition_TypeInfo*/ lRam0000000003d20508 + 300)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CampaignDefinition_TypeInfo*/ lRam0000000003d20508 + 300) * 8 + -8
                   ) != /*Atlas.Definitions.CampaignDefinition_TypeInfo*/ lRam0000000003d20508)) {
        func_0x00f78e5c(plVar6);
        goto code_r0x01522e4c;
      }
      Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(param_1,plVar6[3],param_2);
      lVar3 = plVar6[10];
      if (lVar3 != 0) {
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar9 = 0;
          uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          puVar5 = (undefined8 *)(lVar3 + 0x20);
          do {
            if (uVar7 <= uVar9) {
              uVar11 = func_0x00f78b24();
              func_0x00f78ac0(uVar11,0);
              goto code_r0x01522e4c;
            }
            uVar11 = *puVar5;
            Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(param_1,uVar11,param_2);
            /*Atlas.Stats.UnlockManager$$CompleteAllChallengesChapter*/ func_0x01522fa8(param_1,uVar11);
            uVar9 = uVar9 + 1;
            uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
            puVar5 = puVar5 + 2;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        goto code_r0x01522c34;
      }
      func_0x00f78af4();
      goto code_r0x01522e4c;
    }
  }
  func_0x00f78af4();
code_r0x01522e4c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1522e50);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1522ea0 | Atlas.Stats.UnlockManager.HasEventProgress
// ============================================================

bool Atlas_Stats_UnlockManager__HasEventProgress(void)

{
  int iVar1;
  
  iVar1 = Atlas_Stats_UnlockManager__GetEventProgressionIndex();
  return iVar1 != -1;
}



// ============================================================
// RVA: 0x1522ebc | Atlas.Stats.UnlockManager.GetEventProgressCount
// ============================================================

ulong Atlas_Stats_UnlockManager__GetEventProgressCount
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_40;
  code *pcStack_28;
  
  puVar12 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e40 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    bRam0000000003eb4e40 = 1;
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x58) != 0)) {
    return (ulong)*(uint *)(*(long *)(lVar8 + 0x58) + 0x18);
  }
  auVar14 = func_0x00f78af4();
  uStack_40 = 0x3eb4000;
  pcStack_28 = (code *)&Atlas_Stats_UnlockManager__UnlockDefinition;
  if ((bRam0000000003eb4e41 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4e41 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(auVar14._8_8_,0);
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = auVar14._0_8_;
  puVar3 = &stack0xffffffffffffffe0;
  do {
    uVar10 = auVar13._8_8_;
    lVar8 = auVar13._0_8_;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uStack_40;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(code **)(puVar3 + -8) = pcStack_28;
    unaff_x22 = 0x3eb4000;
    uVar9 = param_3;
    if ((bRam0000000003eb4e3b & 1) == 0) {
      func_0x00f78a20(0x3d3d940);
      bRam0000000003eb4e3b = 1;
    }
    uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar10,0);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = Atlas_Stats_UnlockManager__IsUnlocked(lVar8,uVar10), (uVar5 & 1) != 0)) {
      return 0;
    }
    uVar1 = 3;
    if ((int)param_3 == 0) {
      uVar1 = 0;
    }
    if (((*(long *)(lVar8 + 0x20) != 0) &&
        (lVar6 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar8 + 0x20),0), lVar6 != 0)) &&
       (*(long *)(lVar6 + 0x38) != 0)) {
      uVar9 = uVar1;
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar6 + 0x38),uVar10,uVar1,uRam0000000003d3d940);
      if (*(long *)(lVar8 + 0x20) != 0) {
        Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(lVar8 + 0x20),0);
        return 1;
      }
    }
    auVar14 = func_0x00f78af4();
    lVar11 = auVar14._8_8_;
    lVar6 = auVar14._0_8_;
    *(undefined8 *)(puVar3 + -0x60) = 0x3eb4000;
    *(undefined8 *)(puVar3 + -0x58) = uVar1;
    *(undefined8 *)(puVar3 + -0x50) = uVar10;
    *(long *)(puVar3 + -0x48) = lVar8;
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x38) = Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
    puVar12 = puVar3 + -0x40;
    unaff_x21 = 0x3eb4000;
    param_3 = uVar9;
    if ((bRam0000000003eb4e38 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57398);
      func_0x00f78a20(0x3d257d8);
      func_0x00f78a20(0x3d69c18);
      bRam0000000003eb4e38 = 1;
      param_3 = uVar9;
    }
    *(undefined8 *)(puVar3 + -0x68) = 0;
    iVar4 = Atlas_Stats_UnlockManager__HaveAllCharactersBeenUnlockedForCampaign(lVar6,lVar11);
    if (iVar4 == 0) goto LAB_015220cc;
    if (lVar11 == 0) goto LAB_01522270;
    *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(lVar11 + 0x58);
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar3 + -0x68,0);
    if (iVar4 == 0) {
LAB_015220cc:
      iVar4 = Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign(lVar6,lVar11);
      if (iVar4 != 0) {
        if (lVar11 == 0) goto LAB_01522270;
        *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(lVar11 + 0x60);
        iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar3 + -0x68,0);
        if (iVar4 != 0) {
          param_3 = 1;
          iVar4 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist
                            (lVar6,*(undefined8 *)(lVar11 + 0x60));
          if (iVar4 != 0) {
            if ((*(long *)(lVar6 + 0x10) == 0) ||
               (lVar8 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar8 == 0)) goto LAB_01522270;
            param_3 = uRam0000000003d57398;
            iVar4 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar8,*(undefined8 *)(lVar11 + 0x60));
            if (iVar4 != 0) {
              if (*(long *)(lVar6 + 0x28) == 0) goto LAB_01522270;
              param_3 = 0;
              Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                        (*(long *)(lVar6 + 0x28),*(undefined8 *)(lVar11 + 0x60));
            }
          }
        }
      }
      if (*(long *)(lVar6 + 0x20) != 0) {
        uVar9 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar6 + 0x20),0);
        auVar14._8_8_ = uVar9;
        auVar14._0_8_ = lVar6;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(uVar9);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        param_3 = 1;
        uVar5 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar6,uVar9);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        unaff_x21 = 0x3d21270;
        unaff_x22 = 0x3d69c18;
        if (*(long *)(lVar6 + 0x10) != 0) {
          uVar5 = *(ulong *)(*(long *)(lVar6 + 0x10) + 0x10);
          auVar14._8_8_ = uVar5;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          if (uVar5 != 0) {
            param_3 = uRam0000000003d57398;
            uVar7 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(uVar5,uVar9);
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            lVar8 = *(long *)(lVar6 + 0x28);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar5;
            auVar14 = auVar2 << 0x40;
            unaff_x21 = 0x3d21270;
            unaff_x22 = 0x3d69c18;
            if (lVar8 != 0) {
              uVar5 = Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns(lVar8,uVar9,0);
              return uVar5;
            }
          }
        }
      }
    }
    else {
      param_3 = 1;
      iVar4 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar6,*(undefined8 *)(lVar11 + 0x58))
      ;
      if (iVar4 == 0) goto LAB_015220cc;
      if ((*(long *)(lVar6 + 0x10) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar8 != 0)) {
        param_3 = uRam0000000003d57398;
        iVar4 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar8,*(undefined8 *)(lVar11 + 0x58));
        if (iVar4 != 0) {
          if (*(long *)(lVar6 + 0x28) == 0) goto LAB_01522270;
          param_3 = 0;
          Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                    (*(long *)(lVar6 + 0x28),*(undefined8 *)(lVar11 + 0x58));
        }
        goto LAB_015220cc;
      }
    }
LAB_01522270:
    uStack_40 = auVar14._8_8_;
    param_1 = auVar14._0_8_;
    pcStack_28 = Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
    auVar13 = func_0x00f78af4();
    puVar3 = puVar3 + -0x70;
  } while( true );
}



// ============================================================
// RVA: 0x1522f1c | Atlas.Stats.UnlockManager.UnlockDefinition
// ============================================================

undefined8
Atlas_Stats_UnlockManager__UnlockDefinition(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar8;
  
  auVar10._8_8_ = unaff_x20;
  auVar10._0_8_ = unaff_x19;
  if ((bRam0000000003eb4e41 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4e41 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_2,0);
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar10._8_8_;
    *(long *)(puVar2 + -0x18) = auVar10._0_8_;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x22 = 0x3eb4000;
    uVar9 = param_3;
    if ((bRam0000000003eb4e3b & 1) == 0) {
      func_0x00f78a20(0x3d3d940);
      bRam0000000003eb4e3b = 1;
    }
    uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar7,0);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = Atlas_Stats_UnlockManager__IsUnlocked(param_1,uVar7), (uVar4 & 1) != 0)) {
      return 0;
    }
    uVar1 = 3;
    if ((int)param_3 == 0) {
      uVar1 = 0;
    }
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar5 != 0)) &&
       (*(long *)(lVar5 + 0x38) != 0)) {
      uVar9 = uVar1;
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar5 + 0x38),uVar7,uVar1,uRam0000000003d3d940);
      if (*(long *)(param_1 + 0x20) != 0) {
        Atlas_Save_SaveManager__MarkSaveAsDirty(*(long *)(param_1 + 0x20),0);
        return 1;
      }
    }
    auVar10 = func_0x00f78af4();
    lVar8 = auVar10._8_8_;
    lVar5 = auVar10._0_8_;
    *(undefined8 *)(puVar2 + -0x60) = 0x3eb4000;
    *(undefined8 *)(puVar2 + -0x58) = uVar1;
    *(undefined8 *)(puVar2 + -0x50) = uVar7;
    *(long *)(puVar2 + -0x48) = param_1;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x38) = Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
    unaff_x29 = puVar2 + -0x40;
    unaff_x21 = 0x3eb4000;
    param_3 = uVar9;
    if ((bRam0000000003eb4e38 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57398);
      func_0x00f78a20(0x3d257d8);
      func_0x00f78a20(0x3d69c18);
      bRam0000000003eb4e38 = 1;
      param_3 = uVar9;
    }
    *(undefined8 *)(puVar2 + -0x68) = 0;
    iVar3 = Atlas_Stats_UnlockManager__HaveAllCharactersBeenUnlockedForCampaign(lVar5,lVar8);
    if (iVar3 == 0) goto LAB_015220cc;
    if (lVar8 == 0) goto LAB_01522270;
    *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(lVar8 + 0x58);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar2 + -0x68,0);
    if (iVar3 == 0) {
LAB_015220cc:
      iVar3 = Atlas_Stats_UnlockManager__HasCompletedAllChallengesForCampaign(lVar5,lVar8);
      if (iVar3 != 0) {
        if (lVar8 == 0) goto LAB_01522270;
        *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(lVar8 + 0x60);
        iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar2 + -0x68,0);
        if (iVar3 != 0) {
          param_3 = 1;
          iVar3 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist
                            (lVar5,*(undefined8 *)(lVar8 + 0x60));
          if (iVar3 != 0) {
            if ((*(long *)(lVar5 + 0x10) == 0) ||
               (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 == 0)) goto LAB_01522270;
            param_3 = uRam0000000003d57398;
            iVar3 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar6,*(undefined8 *)(lVar8 + 0x60));
            if (iVar3 != 0) {
              if (*(long *)(lVar5 + 0x28) == 0) goto LAB_01522270;
              param_3 = 0;
              Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                        (*(long *)(lVar5 + 0x28),*(undefined8 *)(lVar8 + 0x60));
            }
          }
        }
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        uVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar5 + 0x20),0);
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = lVar5;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = Atlas_Stats_UnlockManager__HasCompletedRequiredChallengesForLeague(uVar7);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        param_3 = 1;
        uVar7 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar5,uVar7);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        unaff_x21 = 0x3d21270;
        unaff_x22 = 0x3d69c18;
        if (*(long *)(lVar5 + 0x10) != 0) {
          uVar4 = *(ulong *)(*(long *)(lVar5 + 0x10) + 0x10);
          auVar10._8_8_ = uVar4;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          if (uVar4 != 0) {
            param_3 = uRam0000000003d57398;
            uVar7 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(uVar4,uVar7);
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            lVar5 = *(long *)(lVar5 + 0x28);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar4;
            auVar10 = auVar11 << 0x40;
            unaff_x21 = 0x3d21270;
            unaff_x22 = 0x3d69c18;
            if (lVar5 != 0) {
              uVar7 = Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns(lVar5,uVar7,0);
              return uVar7;
            }
          }
        }
      }
    }
    else {
      param_3 = 1;
      iVar3 = Atlas_Stats_UnlockManager__AddUnlockedIfNotExist(lVar5,*(undefined8 *)(lVar8 + 0x58));
      if (iVar3 == 0) goto LAB_015220cc;
      if ((*(long *)(lVar5 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 != 0)) {
        param_3 = uRam0000000003d57398;
        iVar3 = /*Core.Definitions.GameDefinitions$$IsValidID<object>*/ func_0x0185ca34(lVar6,*(undefined8 *)(lVar8 + 0x58));
        if (iVar3 != 0) {
          if (*(long *)(lVar5 + 0x28) == 0) goto LAB_01522270;
          param_3 = 0;
          Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns
                    (*(long *)(lVar5 + 0x28),*(undefined8 *)(lVar8 + 0x58));
        }
        goto LAB_015220cc;
      }
    }
LAB_01522270:
    unaff_x30 = Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
    auVar11 = func_0x00f78af4();
    uVar7 = auVar11._8_8_;
    param_1 = auVar11._0_8_;
    puVar2 = puVar2 + -0x70;
  } while( true );
}



// ============================================================
// RVA: 0x1522fa8 | Atlas.Stats.UnlockManager.CompleteAllChallengesChapter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x152308c | Atlas.Stats.UnlockManager.CompleteAllChallengesForEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x01522afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522b00) */
/* WARNING: Removing unreachable block (ram,0x01522b18) */

ulong Atlas_Stats_UnlockManager__CompleteAllChallengesForEvent
                (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  int extraout_w1;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4e44 & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e44 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ uRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ uRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = **(long **)(/*Atlas.Stats.UnlockManager_TypeInfo*/ uRam0000000003d257d8 + 0xb8);
  if (lVar12 != 0) {
    uVar4 = /*Atlas.Stats.UnlockManager_TypeInfo*/ uRam0000000003d257d8;
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar13 = 0;
      uVar9 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar13) {
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto Atlas_Stats_UnlockManager__SetUnlockStatus;
        }
        uVar4 = Atlas_Stats_UnlockManager__AddOrUpdateEventProgression
                          (param_1,param_2,*(undefined1 *)(lVar12 + 0x20 + uVar13));
        uVar13 = uVar13 + 1;
        uVar9 = (ulong)*(uint *)(lVar12 + 0x18);
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    return uVar4;
  }
Atlas_Stats_UnlockManager__SetUnlockStatus:
  auVar17 = func_0x00f78af4();
  lVar12 = auVar17._0_8_;
  puStack_48 = &Atlas_Stats_UnlockManager__MarkUnlockUnSeen;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e3e & 1) == 0) {
    func_0x00f78a20(0x3d3d960);
    func_0x00f78a20(0x3d3d968);
    func_0x00f78a20(0x3d3d970);
    bRam0000000003eb4e3e = 1;
  }
  lVar3 = *(long *)(lVar12 + 0x20);
  if (lVar3 != 0) {
    lVar15 = 0;
    uVar11 = 0;
    do {
      uVar4 = Atlas_Save_SaveManager__get_SaveData(lVar3,0);
      if ((uVar4 == 0) || (*(long *)(uVar4 + 0x38) == 0)) break;
      if (*(int *)(*(long *)(uVar4 + 0x38) + 0x18) <= (int)uVar11) {
        return uVar4;
      }
      if (((*(long *)(lVar12 + 0x20) == 0) ||
          (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar12 + 0x20),0), lVar3 == 0)) ||
         (lVar3 = *(long *)(lVar3 + 0x38), lVar3 == 0)) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(lVar3 + 0x10) + lVar15;
      lVar14 = *(long *)(lVar3 + 0x20);
      if (lVar14 == 0) break;
      uVar13 = *(ulong *)(lVar3 + 0x28);
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar14,auVar17._8_8_,4,0);
      if ((int)uVar4 != 0) {
        uVar16 = (uint)uVar13;
        uVar1 = uVar16 & 0xff | 1;
        if (uVar1 == (uVar16 & 0xff)) {
          return uVar4;
        }
        if (((*(long *)(lVar12 + 0x20) != 0) &&
            (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar12 + 0x20),0), lVar3 != 0))
           && (*(long *)(lVar3 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(lVar3 + 0x38),uVar11,lVar14,
                          uVar13 & 0xffffffffffffff00 | (ulong)uVar1,uRam0000000003d3d970);
          uVar4 = *(ulong *)(lVar12 + 0x20);
          if (uVar4 != 0) {
            *(undefined1 *)(uVar4 + 0x110) = 1;
            return uVar4;
          }
        }
        break;
      }
      uVar11 = uVar11 + 1;
      lVar3 = *(long *)(lVar12 + 0x20);
      lVar15 = lVar15 + 0x10;
    } while (lVar3 != 0);
  }
  auVar17 = func_0x00f78af4();
  lVar12 = auVar17._0_8_;
  pcStack_98 = Atlas_Stats_UnlockManager__UnlockAll;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb4e3f & 1) == 0) {
    func_0x00f78a20(0x3d5fc30);
    func_0x00f78a20(0x3d5fc38);
    func_0x00f78a20(0x3d5fc40);
    func_0x00f78a20(0x3d5fc48);
    func_0x00f78a20(0x3d5fc50);
    bRam0000000003eb4e3f = 1;
  }
  Atlas_Stats_UnlockManager__UnlockAllCampaign(lVar12,auVar17._8_8_);
  lVar3 = lRam0000000003d5fc38;
  uStack_120 = 0x3d5fc48;
  uStack_118 = 0x3d5fc40;
  uStack_110 = 0x3d5fc50;
  uStack_108 = 0x3d5fc30;
  uStack_e8 = 0x1522b00;
  pppuStack_f0 = &ppuStack_a0;
  if ((bRam0000000003eb6a87 & 1) == 0) {
    uStack_100 = auVar17._8_8_;
    lStack_f8 = lVar12;
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    auVar17._8_8_ = uStack_100;
    auVar17._0_8_ = lStack_f8;
    bRam0000000003eb6a87 = 1;
  }
  uStack_100 = auVar17._8_8_;
  lStack_f8 = auVar17._0_8_;
  lStack_128 = 0;
  if ((*(long *)(lVar12 + 0x10) == 0) ||
     (lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 0x10), lVar15 == 0)) {
code_r0x01a3cf14:
    uStack_100 = auVar17._8_8_;
    lStack_f8 = auVar17._0_8_;
    func_0x00f78af4();
  }
  else {
    (**(code **)**(undefined8 **)(lVar3 + 0x30))(lVar15,&lStack_128);
    auVar17._8_8_ = uStack_100;
    auVar17._0_8_ = lStack_f8;
    if (lStack_128 == 0) goto code_r0x01a3cf14;
    plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_128,uRam0000000003d3fe40);
    if (plVar6 != (long *)0x0) {
      do {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01a3cda8;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01a3cda8:
        uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar4 & 1) == 0) {
          lVar12 = 0;
          do {
            if (plVar6 != (long *)0x0) {
              lVar3 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
              if (uVar4 != 0) {
                piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar10 = piVar10 + 4;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            }
            if (lVar12 == 0) {
              return uVar4;
            }
            func_0x00f78ac0(lVar12,0);
            if (extraout_w1 != 1) {
              auVar18 = __Unwind_Resume();
              return auVar18._0_8_ + (long)auVar18._8_4_;
            }
            plVar8 = (long *)___cxa_begin_catch();
            lVar12 = *plVar8;
            uVar4 = ___cxa_end_catch();
          } while( true );
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar3 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(lVar12,uVar5,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar2)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x152315c | Atlas.Stats.UnlockManager.MarkUnlockUnSeen
// ============================================================

/* WARNING: Possible PIC construction at 0x01522afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01522b00) */
/* WARNING: Removing unreachable block (ram,0x01522b18) */

ulong Atlas_Stats_UnlockManager__MarkUnlockUnSeen(long param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int extraout_w1;
  int *piVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if ((bRam0000000003eb4e3e & 1) == 0) {
    func_0x00f78a20(0x3d3d960);
    func_0x00f78a20(0x3d3d968);
    func_0x00f78a20(0x3d3d970);
    bRam0000000003eb4e3e = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar12 = 0;
    uVar10 = 0;
    do {
      uVar4 = Atlas_Save_SaveManager__get_SaveData(lVar3,0);
      if ((uVar4 == 0) || (*(long *)(uVar4 + 0x38) == 0)) break;
      if (*(int *)(*(long *)(uVar4 + 0x38) + 0x18) <= (int)uVar10) {
        return uVar4;
      }
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar3 == 0))
         || (lVar3 = *(long *)(lVar3 + 0x38), lVar3 == 0)) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(lVar3 + 0x10) + lVar12;
      lVar11 = *(long *)(lVar3 + 0x20);
      if (lVar11 == 0) break;
      uVar14 = *(ulong *)(lVar3 + 0x28);
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar11,param_2,4,0);
      if ((int)uVar4 != 0) {
        uVar13 = (uint)uVar14;
        uVar1 = uVar13 & 0xff | 1;
        if (uVar1 == (uVar13 & 0xff)) {
          return uVar4;
        }
        if (((*(long *)(param_1 + 0x20) != 0) &&
            (lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x20),0), lVar3 != 0))
           && (*(long *)(lVar3 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(lVar3 + 0x38),uVar10,lVar11,
                          uVar14 & 0xffffffffffffff00 | (ulong)uVar1,uRam0000000003d3d970);
          uVar4 = *(ulong *)(param_1 + 0x20);
          if (uVar4 != 0) {
            *(undefined1 *)(uVar4 + 0x110) = 1;
            return uVar4;
          }
        }
        break;
      }
      uVar10 = uVar10 + 1;
      lVar3 = *(long *)(param_1 + 0x20);
      lVar12 = lVar12 + 0x10;
    } while (lVar3 != 0);
  }
  auVar15 = func_0x00f78af4();
  lVar3 = auVar15._0_8_;
  pcStack_58 = Atlas_Stats_UnlockManager__UnlockAll;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e3f & 1) == 0) {
    func_0x00f78a20(0x3d5fc30);
    func_0x00f78a20(0x3d5fc38);
    func_0x00f78a20(0x3d5fc40);
    func_0x00f78a20(0x3d5fc48);
    func_0x00f78a20(0x3d5fc50);
    bRam0000000003eb4e3f = 1;
  }
  Atlas_Stats_UnlockManager__UnlockAllCampaign(lVar3,auVar15._8_8_);
  lVar12 = lRam0000000003d5fc38;
  uStack_e0 = 0x3d5fc48;
  uStack_d8 = 0x3d5fc40;
  uStack_d0 = 0x3d5fc50;
  uStack_c8 = 0x3d5fc30;
  uStack_a8 = 0x1522b00;
  ppuStack_b0 = &puStack_60;
  if ((bRam0000000003eb6a87 & 1) == 0) {
    uStack_c0 = auVar15._8_8_;
    lStack_b8 = lVar3;
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    auVar15._8_8_ = uStack_c0;
    auVar15._0_8_ = lStack_b8;
    bRam0000000003eb6a87 = 1;
  }
  uStack_c0 = auVar15._8_8_;
  lStack_b8 = auVar15._0_8_;
  lStack_e8 = 0;
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar11 == 0)) {
code_r0x01a3cf14:
    uStack_c0 = auVar15._8_8_;
    lStack_b8 = auVar15._0_8_;
    func_0x00f78af4();
  }
  else {
    (**(code **)**(undefined8 **)(lVar12 + 0x30))(lVar11,&lStack_e8);
    auVar15._8_8_ = uStack_c0;
    auVar15._0_8_ = lStack_b8;
    if (lStack_e8 == 0) goto code_r0x01a3cf14;
    plVar5 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_e8,uRam0000000003d3fe40);
    if (plVar5 != (long *)0x0) {
      do {
        lVar12 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01a3cda8:
        uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          lVar3 = 0;
          do {
            if (plVar5 != (long *)0x0) {
              lVar12 = *plVar5;
              uVar4 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar4 != 0) {
                piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar6 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            }
            if (lVar3 == 0) {
              return uVar4;
            }
            func_0x00f78ac0(lVar3,0);
            if (extraout_w1 != 1) {
              auVar16 = __Unwind_Resume();
              return auVar16._0_8_ + (long)auVar16._8_4_;
            }
            plVar7 = (long *)___cxa_begin_catch();
            lVar3 = *plVar7;
            uVar4 = ___cxa_end_catch();
          } while( true );
        }
        lVar12 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar12 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(lVar3,uVar8,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar2)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1523164 | Atlas.Stats.UnlockManager.IsCharacterMaxRank
// ============================================================

bool Atlas_Stats_UnlockManager__IsCharacterMaxRank(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = Atlas_Stats_UnlockManager__GetXpForCharacter();
  iVar1 = Atlas_Stats_UnlockManager__GetMaxRankXP(param_1);
  return (long)iVar1 <= (long)(uVar2 & 0xffffffff);
}



// ============================================================
// RVA: 0x152319c | Atlas.Stats.UnlockManager.CacheArcadeMedals
// ============================================================

void Atlas_Stats_UnlockManager__CacheArcadeMedals(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(param_1 + 0x68);
  uVar1 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),0)
  ;
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else if ((uint)param_2 < *(uint *)(lVar3 + 0x18)) {
    *(undefined4 *)(lVar3 + (long)(int)(uint)param_2 * 4 + 0x20) = uVar1;
    return;
  }
  uVar2 = func_0x00f78b24();
  auVar4 = func_0x00f78ac0(uVar2,0);
  *(long *)(auVar4._0_8_ + 0x78) = auVar4._8_8_;
  return;
}



// ============================================================
// RVA: 0x15231f8 | Atlas.Stats.UnlockManager.StorePreviousArcadeScreenData
// ============================================================

void Atlas_Stats_UnlockManager__StorePreviousArcadeScreenData(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}



// ============================================================
// RVA: 0x1523200 | Atlas.Stats.UnlockManager.GetPreviousArcadeScreenData
// ============================================================

undefined8 Atlas_Stats_UnlockManager__GetPreviousArcadeScreenData(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1523208 | Atlas.Stats.UnlockManager.GetCachedArcadeMedals
// ============================================================

undefined8 Atlas_Stats_UnlockManager__GetCachedArcadeMedals(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1523210 | Atlas.Stats.UnlockManager.GetCachedArcadeRank
// ============================================================

undefined4 Atlas_Stats_UnlockManager__GetCachedArcadeRank(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1523218 | Atlas.Stats.UnlockManager..ctor
// ============================================================

undefined1  [16] Atlas_Stats_UnlockManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4e49 & 1) == 0) {
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4e49 = 1;
  }
  uVar1 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar1,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar1,0);
  if (lVar2 != 0) {
    uVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar2 + 0x18));
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar2 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar1,0);
    if (lVar2 != 0) {
      uVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar2 + 0x18));
      *(undefined8 *)(param_1 + 0x68) = uVar1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_1;
      return auVar5;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4e4a & 1) == 0) {
    func_0x00f78a20(0x3d1f908);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d653f0);
    func_0x00f78a20(0x3d65400);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e4a = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.Stats.UnlockManager.Challenge[]_TypeInfo*/ uRam0000000003d1f908,3);
  /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar1,/*Field$<PrivateImplementationDetails>.D4B29A968C40173638DED8D174C86957AFA211BE479CEE020DBA5DFE127D91CA*/ uRam0000000003d65400,0);
  **(undefined8 **)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) = uVar1;
  lVar2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
  auVar4 = /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(lVar2,/*Field$<PrivateImplementationDetails>.67F97CD57FBAB63018C13EBA31B2DF63BC71EFF185FC0E19E116C63B1954D9EA*/ uRam0000000003d653f0,0);
  lVar3 = *(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8);
  *(long *)(lVar3 + 8) = lVar2;
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if ((int)*(long *)(lVar2 + 0x18) != 0) {
    *(undefined4 *)(lVar3 + 0x10) =
         *(undefined4 *)(lVar2 + ((*(long *)(lVar2 + 0x18) << 0x20) + -0x100000000 >> 0x1e) + 0x20);
    return auVar4;
  }
  uVar1 = func_0x00f78b24();
  auVar4 = func_0x00f78ac0(uVar1,0);
  auVar4._0_8_ = *(undefined8 *)(auVar4._0_8_ + 0x10);
  return auVar4;
}



// ============================================================
// RVA: 0x1523348 | Atlas.Stats.UnlockManager..cctor
// ============================================================

undefined8 Atlas_Stats_UnlockManager___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000003eb4e4a & 1) == 0) {
    func_0x00f78a20(0x3d1f908);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d653f0);
    func_0x00f78a20(0x3d65400);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e4a = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.Stats.UnlockManager.Challenge[]_TypeInfo*/ uRam0000000003d1f908,3);
  /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar1,/*Field$<PrivateImplementationDetails>.D4B29A968C40173638DED8D174C86957AFA211BE479CEE020DBA5DFE127D91CA*/ uRam0000000003d65400,0);
  **(undefined8 **)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) = uVar1;
  lVar2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
  uVar1 = /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(lVar2,/*Field$<PrivateImplementationDetails>.67F97CD57FBAB63018C13EBA31B2DF63BC71EFF185FC0E19E116C63B1954D9EA*/ uRam0000000003d653f0,0);
  lVar3 = *(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8);
  *(long *)(lVar3 + 8) = lVar2;
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if ((int)*(long *)(lVar2 + 0x18) != 0) {
    *(undefined4 *)(lVar3 + 0x10) =
         *(undefined4 *)(lVar2 + ((*(long *)(lVar2 + 0x18) << 0x20) + -0x100000000 >> 0x1e) + 0x20);
    return uVar1;
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  return *(undefined8 *)(lVar2 + 0x10);
}



// ============================================================
// RVA: 0x1a3cc8c | Atlas.Stats.UnlockManager.UnlockAll<AntennaDefinition>
// ============================================================

ulong Atlas_Stats_UnlockManager__UnlockAll_AntennaDefinition_(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  long lStack_48;
  
  if ((bRam0000000003eb6a87 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb6a87 = 1;
  }
  lStack_48 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) ||
     ((**(code **)**(undefined8 **)(param_2 + 0x30))(lVar2,&lStack_48), lStack_48 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
    if (plVar3 != (long *)0x0) {
      do {
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01a3cda8:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          lVar2 = 0;
          do {
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
            if (lVar2 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(lVar2,0);
            if (extraout_w1 != 1) {
              auVar10 = __Unwind_Resume();
              return auVar10._0_8_ + (long)auVar10._8_4_;
            }
            plVar5 = (long *)___cxa_begin_catch();
            lVar2 = *plVar5;
            uVar8 = ___cxa_end_catch();
          } while( true );
        }
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar2 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(param_1,uVar6,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1a3cc8c | Atlas.Stats.UnlockManager.UnlockAll<CharacterDefinition>
// ============================================================

ulong Atlas_Stats_UnlockManager__UnlockAll_AntennaDefinition_(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  long lStack_48;
  
  if ((bRam0000000003eb6a87 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb6a87 = 1;
  }
  lStack_48 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) ||
     ((**(code **)**(undefined8 **)(param_2 + 0x30))(lVar2,&lStack_48), lStack_48 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
    if (plVar3 != (long *)0x0) {
      do {
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01a3cda8:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          lVar2 = 0;
          do {
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
            if (lVar2 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(lVar2,0);
            if (extraout_w1 != 1) {
              auVar10 = __Unwind_Resume();
              return auVar10._0_8_ + (long)auVar10._8_4_;
            }
            plVar5 = (long *)___cxa_begin_catch();
            lVar2 = *plVar5;
            uVar8 = ___cxa_end_catch();
          } while( true );
        }
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar2 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(param_1,uVar6,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1a3cc8c | Atlas.Stats.UnlockManager.UnlockAll<GliderDefinition>
// ============================================================

ulong Atlas_Stats_UnlockManager__UnlockAll_AntennaDefinition_(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  long lStack_48;
  
  if ((bRam0000000003eb6a87 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb6a87 = 1;
  }
  lStack_48 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) ||
     ((**(code **)**(undefined8 **)(param_2 + 0x30))(lVar2,&lStack_48), lStack_48 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
    if (plVar3 != (long *)0x0) {
      do {
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01a3cda8:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          lVar2 = 0;
          do {
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
            if (lVar2 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(lVar2,0);
            if (extraout_w1 != 1) {
              auVar10 = __Unwind_Resume();
              return auVar10._0_8_ + (long)auVar10._8_4_;
            }
            plVar5 = (long *)___cxa_begin_catch();
            lVar2 = *plVar5;
            uVar8 = ___cxa_end_catch();
          } while( true );
        }
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar2 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(param_1,uVar6,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1a3cc8c | Atlas.Stats.UnlockManager.UnlockAll<KartDefinition>
// ============================================================

ulong Atlas_Stats_UnlockManager__UnlockAll_AntennaDefinition_(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  long lStack_48;
  
  if ((bRam0000000003eb6a87 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb6a87 = 1;
  }
  lStack_48 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) ||
     ((**(code **)**(undefined8 **)(param_2 + 0x30))(lVar2,&lStack_48), lStack_48 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
    if (plVar3 != (long *)0x0) {
      do {
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01a3cda8:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          lVar2 = 0;
          do {
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
            if (lVar2 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(lVar2,0);
            if (extraout_w1 != 1) {
              auVar10 = __Unwind_Resume();
              return auVar10._0_8_ + (long)auVar10._8_4_;
            }
            plVar5 = (long *)___cxa_begin_catch();
            lVar2 = *plVar5;
            uVar8 = ___cxa_end_catch();
          } while( true );
        }
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar2 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(param_1,uVar6,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1a3cc8c | Atlas.Stats.UnlockManager.UnlockAll<WheelsDefinition>
// ============================================================

ulong Atlas_Stats_UnlockManager__UnlockAll_AntennaDefinition_(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  long lStack_48;
  
  if ((bRam0000000003eb6a87 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb6a87 = 1;
  }
  lStack_48 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) ||
     ((**(code **)**(undefined8 **)(param_2 + 0x30))(lVar2,&lStack_48), lStack_48 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
    if (plVar3 != (long *)0x0) {
      do {
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01a3cda8:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          lVar2 = 0;
          do {
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
            if (lVar2 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(lVar2,0);
            if (extraout_w1 != 1) {
              auVar10 = __Unwind_Resume();
              return auVar10._0_8_ + (long)auVar10._8_4_;
            }
            plVar5 = (long *)___cxa_begin_catch();
            lVar2 = *plVar5;
            uVar8 = ___cxa_end_catch();
          } while( true );
        }
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar2 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(param_1,uVar6,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



// ============================================================
// RVA: 0x1a3cc8c | Atlas.Stats.UnlockManager.UnlockAll<object>
// ============================================================

ulong Atlas_Stats_UnlockManager__UnlockAll_AntennaDefinition_(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [12];
  long lStack_48;
  
  if ((bRam0000000003eb6a87 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb6a87 = 1;
  }
  lStack_48 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 == 0)) ||
     ((**(code **)**(undefined8 **)(param_2 + 0x30))(lVar2,&lStack_48), lStack_48 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar3 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
    if (plVar3 != (long *)0x0) {
      do {
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01a3cda8;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01a3cda8:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          lVar2 = 0;
          do {
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto code_r0x01a3cee4;
                  }
                  piVar9 = piVar9 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01a3cee4:
              uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            }
            if (lVar2 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(lVar2,0);
            if (extraout_w1 != 1) {
              auVar10 = __Unwind_Resume();
              return auVar10._0_8_ + (long)auVar10._8_4_;
            }
            plVar5 = (long *)___cxa_begin_catch();
            lVar2 = *plVar5;
            uVar8 = ___cxa_end_catch();
          } while( true );
        }
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce04;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01a3ce04:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) goto code_r0x01a3cf0c;
        lVar2 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3ce64;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01a3ce64:
        uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock(param_1,uVar6,1,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01a3cf1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3cf20);
  (*pcVar1)();
code_r0x01a3cf0c:
  func_0x00f78af4();
  goto code_r0x01a3cf1c;
}



