// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Helpers.ArcadeHelper

// ============================================================
// RVA: 0x144fb24 | Atlas.Helpers.ArcadeHelper.GetTotalPossibleMedalCount
// ============================================================

/* WARNING: Possible PIC construction at 0x0144fb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144fc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144fcf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144fec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144fff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014500dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01450114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014500e0) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0144fffc) */
/* WARNING: Removing unreachable block (ram,0x014500a8) */
/* WARNING: Removing unreachable block (ram,0x01450000) */
/* WARNING: Removing unreachable block (ram,0x01450084) */
/* WARNING: Removing unreachable block (ram,0x01450010) */
/* WARNING: Removing unreachable block (ram,0x01450020) */
/* WARNING: Removing unreachable block (ram,0x01450028) */
/* WARNING: Removing unreachable block (ram,0x01450030) */
/* WARNING: Removing unreachable block (ram,0x0145006c) */
/* WARNING: Removing unreachable block (ram,0x01450080) */
/* WARNING: Removing unreachable block (ram,0x01450088) */
/* WARNING: Removing unreachable block (ram,0x0144fec8) */
/* WARNING: Removing unreachable block (ram,0x0144fecc) */
/* WARNING: Removing unreachable block (ram,0x0144fedc) */
/* WARNING: Removing unreachable block (ram,0x0144fee8) */
/* WARNING: Removing unreachable block (ram,0x0144fef0) */
/* WARNING: Removing unreachable block (ram,0x0144fef8) */
/* WARNING: Removing unreachable block (ram,0x0144ff30) */
/* WARNING: Removing unreachable block (ram,0x0144ff40) */
/* WARNING: Removing unreachable block (ram,0x0144ff60) */
/* WARNING: Removing unreachable block (ram,0x0144fcf8) */
/* WARNING: Removing unreachable block (ram,0x0144fda4) */
/* WARNING: Removing unreachable block (ram,0x0144fde8) */
/* WARNING: Removing unreachable block (ram,0x0144fe44) */
/* WARNING: Removing unreachable block (ram,0x0144fe60) */
/* WARNING: Removing unreachable block (ram,0x0144fe68) */
/* WARNING: Removing unreachable block (ram,0x0144fe6c) */
/* WARNING: Removing unreachable block (ram,0x0144fe88) */
/* WARNING: Removing unreachable block (ram,0x0144fe90) */
/* WARNING: Removing unreachable block (ram,0x0144fe94) */
/* WARNING: Removing unreachable block (ram,0x0144ff80) */
/* WARNING: Removing unreachable block (ram,0x0144ff84) */
/* WARNING: Removing unreachable block (ram,0x0144ff90) */
/* WARNING: Removing unreachable block (ram,0x0144ffc4) */
/* WARNING: Removing unreachable block (ram,0x0144fff0) */
/* WARNING: Removing unreachable block (ram,0x0144fea4) */
/* WARNING: Removing unreachable block (ram,0x0144fcfc) */
/* WARNING: Removing unreachable block (ram,0x0144fd80) */
/* WARNING: Removing unreachable block (ram,0x0144fd0c) */
/* WARNING: Removing unreachable block (ram,0x0144fd1c) */
/* WARNING: Removing unreachable block (ram,0x0144fd24) */
/* WARNING: Removing unreachable block (ram,0x0144fd2c) */
/* WARNING: Removing unreachable block (ram,0x0144fd68) */
/* WARNING: Removing unreachable block (ram,0x0144fd7c) */
/* WARNING: Removing unreachable block (ram,0x0144fd84) */
/* WARNING: Removing unreachable block (ram,0x0144fc5c) */
/* WARNING: Removing unreachable block (ram,0x0144fc88) */
/* WARNING: Removing unreachable block (ram,0x0144fcc0) */
/* WARNING: Removing unreachable block (ram,0x0144fcec) */
/* WARNING: Removing unreachable block (ram,0x0144fc60) */
/* WARNING: Removing unreachable block (ram,0x0144fb5c) */
/* WARNING: Removing unreachable block (ram,0x0144fb70) */
/* WARNING: Removing unreachable block (ram,0x0144fb60) */
/* WARNING: Removing unreachable block (ram,0x01450118) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */

undefined8 Atlas_Helpers_ArcadeHelper__GetTotalPossibleMedalCount(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  
  puVar5 = &stack0xfffffffffffffff0;
  lVar4 = 0x3eb4000;
  if ((bRam0000000003eb476c & 1) == 0) {
    func_0x00f78a20(0x3d39d00);
    bRam0000000003eb476c = 1;
  }
  puVar6 = (undefined *)0x144fb5c;
  puVar1 = &stack0xffffffffffffffe0;
  lVar2 = param_1;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = lVar4;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    unaff_x22 = 0x3d1d7c0;
    if ((bRam0000000003eb4771 & 1) == 0) {
      func_0x00f78a20(0x3d57348);
      func_0x00f78a20(0x3d39cf0);
      func_0x00f78a20(0x3d1d7c0);
      bRam0000000003eb4771 = 1;
    }
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ArcadeEventDefinition>_TypeInfo*/ uRam0000000003d1d7c0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d39cf0);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) break;
    auVar7 = func_0x00f78af4();
    param_1 = auVar7._8_8_;
    lVar4 = auVar7._0_8_;
    *(undefined8 *)(puVar1 + -0x60) = 0x3d1d7c0;
    *(undefined8 *)(puVar1 + -0x58) = 0x3d39cf0;
    *(undefined8 *)(puVar1 + -0x50) = uVar3;
    *(long *)(puVar1 + -0x48) = lVar2;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_Helpers_ArcadeHelper__GetTotalMedalCount;
    puVar5 = puVar1 + -0x40;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb476d & 1) == 0) {
      func_0x00f78a20(0x3d39d00);
      bRam0000000003eb476d = 1;
    }
    puVar6 = &UNK_0144fc5c;
    puVar1 = puVar1 + -0x60;
    lVar2 = lVar4;
  }
  /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(*(long *)(lVar2 + 0x10),uVar3,uRam0000000003d57348);
  return uVar3;
}



// ============================================================
// RVA: 0x144fb74 | Atlas.Helpers.ArcadeHelper.GetArcadeEvents
// ============================================================

/* WARNING: Possible PIC construction at 0x0144fc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014500dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01450114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014500e0) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0144fc74) */
/* WARNING: Removing unreachable block (ram,0x01450118) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */

ulong Atlas_Helpers_ArcadeHelper__GetArcadeEvents
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_x1;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 unaff_x24;
  ulong uVar11;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_120 [12];
  uint uStack_114;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [12];
  int iStack_b4;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4771 & 1) == 0) {
    func_0x00f78a20(0x3d57348);
    func_0x00f78a20(0x3d39cf0);
    func_0x00f78a20(0x3d1d7c0);
    bRam0000000003eb4771 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ArcadeEventDefinition>_TypeInfo*/ uRam0000000003d1d7c0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d39cf0);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(*(long *)(param_1 + 0x10),uVar3,uRam0000000003d57348);
    return uVar3;
  }
  auVar15 = func_0x00f78af4();
  uStack_60 = 0x3d1d7c0;
  uStack_58 = 0x3d39cf0;
  puStack_38 = &Atlas_Helpers_ArcadeHelper__GetTotalMedalCount;
  uStack_50 = uVar3;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb476d & 1) == 0) {
    func_0x00f78a20(0x3d39d00);
    bRam0000000003eb476d = 1;
  }
  lVar4 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(auVar15._0_8_);
  if (lVar4 == 0) {
    puVar14 = &Atlas_Helpers_ArcadeHelper__GetTotalMedalCountOfType;
    iVar2 = func_0x00f78af4();
    auVar15._8_8_ = param_3;
    auVar15._0_8_ = extraout_x1;
  }
  else {
    iVar2 = 0;
    puVar14 = &UNK_0144fc74;
  }
  puVar7 = auVar15._8_8_;
  puVar8 = puVar7;
  ppuStack_70 = &puStack_40;
  puStack_68 = puVar14;
  if ((bRam0000000003eb4770 & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    bRam0000000003eb4770 = 1;
  }
  iStack_b4 = 0;
  lVar4 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(auVar15._0_8_);
  if (lVar4 != 0) {
    uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
    if ((int)*(uint *)(lVar4 + 0x18) < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar11 = 0;
      do {
        if ((uVar3 & 0xffffffff) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + uVar11 * 8 + 0x20);
        lVar5 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
        Atlas_UI_MetagameData___ctor(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar12;
        *(uint **)(lVar5 + 0x18) = puVar7;
        Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar5,auStack_c0,&iStack_b4);
        uVar9 = (uint)uVar10;
        if (iStack_b4 == iVar2) {
          uVar9 = uVar9 + 1;
        }
        uVar10 = (ulong)uVar9;
        uVar11 = uVar11 + 1;
        uVar3 = (ulong)*(int *)(lVar4 + 0x18);
      } while ((long)uVar11 < (long)uVar3);
    }
    return uVar10;
  }
  auVar15 = func_0x00f78af4();
  puVar7 = auVar15._8_8_;
  lVar5 = auVar15._0_8_;
  puStack_c8 = &Atlas_Helpers_ArcadeHelper__GetTotalMedalCounts;
  pppuVar13 = &ppuStack_d0;
  lVar4 = 0x3d25458;
  ppuStack_d0 = &ppuStack_70;
  if ((bRam0000000003eb476e & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb476e = 1;
  }
  uVar12 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  uVar3 = 0x3d215e0;
  uStack_114 = 0;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar12,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar10,0);
  if (lVar6 != 0) {
    uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar6 + 0x18));
    lVar6 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(lVar5);
    if (lVar6 != 0) {
      uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
      if (0 < (int)*(uint *)(lVar6 + 0x18)) {
        uVar3 = 0;
        unaff_x24 = 0x3d1fc80;
        do {
          if ((uVar11 & 0xffffffff) <= uVar3) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          unaff_x25 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + uVar3 * 8 + 0x20);
          lVar4 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
          Atlas_UI_MetagameData___ctor(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = unaff_x25;
          *(uint **)(lVar4 + 0x18) = puVar7;
          puVar8 = &uStack_114;
          Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar4,auStack_120);
          lVar5 = lVar6;
          if (uVar10 == 0) goto code_r0x0144ff80;
          if (*(uint *)(uVar10 + 0x18) <= uStack_114) goto code_r0x0144ff84;
          lVar4 = uVar10 + (long)(int)uStack_114 * 4;
          *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
          uVar3 = uVar3 + 1;
          uVar11 = (ulong)*(int *)(lVar6 + 0x18);
        } while ((long)uVar3 < (long)uVar11);
      }
      return uVar10;
    }
  }
code_r0x0144ff80:
  func_0x00f78af4();
code_r0x0144ff84:
  uVar12 = func_0x00f78b24();
  puVar14 = &Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType;
  auVar16 = func_0x00f78ac0(uVar12,0);
  puVar1 = auStack_120;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = uVar3;
    *(long *)(puVar1 + -0x30) = lVar4;
    *(ulong *)(puVar1 + -0x28) = uVar10;
    *(long *)(puVar1 + -0x20) = lVar5;
    *(uint **)(puVar1 + -0x18) = puVar7;
    *(undefined8 ****)(puVar1 + -0x10) = pppuVar13;
    *(undefined **)(puVar1 + -8) = puVar14;
    lVar4 = 0x3eb4000;
    if ((bRam0000000003eb476f & 1) == 0) {
      func_0x00f78a20(0x3d1fc80);
      func_0x00f78a20(0x3d39d00);
      func_0x00f78a20(0x3d39d08);
      bRam0000000003eb476f = 1;
    }
    *(undefined4 *)(puVar1 + -0x54) = 0;
    lVar5 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(auVar16._8_8_);
    if (lVar5 != 0) break;
    auVar15 = func_0x00f78af4();
    puVar7 = auVar15._8_8_;
    lVar5 = auVar15._0_8_;
    *(undefined8 *)(puVar1 + -0xa0) = unaff_x24;
    *(ulong *)(puVar1 + -0x98) = uVar3;
    *(undefined8 *)(puVar1 + -0x90) = 0x3eb4000;
    *(long *)(puVar1 + -0x88) = auVar16._8_8_;
    *(long *)(puVar1 + -0x80) = auVar16._0_8_;
    *(uint **)(puVar1 + -0x78) = puVar8;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &Atlas_Helpers_ArcadeHelper__GetCurrentRank;
    pppuVar13 = (undefined8 ***)(puVar1 + -0x70);
    uVar10 = Atlas_Helpers_ArcadeHelper__GetTotalPossibleMedalCount();
    auVar16._8_8_ = lVar5;
    auVar16._0_8_ = 1;
    puVar14 = &UNK_014500e0;
    puVar1 = puVar1 + -0xa0;
    puVar8 = puVar7;
  }
  uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
  if ((int)*(uint *)(lVar5 + 0x18) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    do {
      if ((uVar3 & 0xffffffff) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + uVar11 * 8 + 0x20);
      lVar4 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
      Atlas_UI_MetagameData___ctor(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar12;
      *(uint **)(lVar4 + 0x18) = puVar8;
      Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar4,puVar1 + -0x60,puVar1 + -0x54);
      uVar9 = (uint)uVar10;
      if (auVar16._0_4_ <= *(int *)(puVar1 + -0x54)) {
        uVar9 = uVar9 + 1;
      }
      uVar10 = (ulong)uVar9;
      uVar11 = uVar11 + 1;
      uVar3 = (ulong)*(int *)(lVar5 + 0x18);
    } while ((long)uVar11 < (long)uVar3);
  }
  return uVar10;
}



// ============================================================
// RVA: 0x144fc1c | Atlas.Helpers.ArcadeHelper.GetTotalMedalCount
// ============================================================

/* WARNING: Possible PIC construction at 0x0144fc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014500dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01450114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014500e0) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0144fc74) */
/* WARNING: Removing unreachable block (ram,0x01450118) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */

ulong Atlas_Helpers_ArcadeHelper__GetTotalMedalCount(undefined8 param_1,uint *param_2,uint *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x1;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 unaff_x24;
  ulong uVar11;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar12;
  undefined1 ***pppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_f0 [12];
  uint uStack_e4;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [12];
  int iStack_84;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb476d & 1) == 0) {
    func_0x00f78a20(0x3d39d00);
    bRam0000000003eb476d = 1;
  }
  lVar3 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(param_1);
  if (lVar3 == 0) {
    puVar14 = &Atlas_Helpers_ArcadeHelper__GetTotalMedalCountOfType;
    iVar2 = func_0x00f78af4();
    param_1 = extraout_x1;
  }
  else {
    iVar2 = 0;
    puVar14 = (undefined *)0x144fc74;
    param_3 = param_2;
  }
  puVar6 = param_3;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar14;
  if ((bRam0000000003eb4770 & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    bRam0000000003eb4770 = 1;
  }
  iStack_84 = 0;
  lVar3 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(param_1);
  if (lVar3 != 0) {
    uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
    if ((int)*(uint *)(lVar3 + 0x18) < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar11 = 0;
      do {
        if ((uVar7 & 0xffffffff) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar12 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + uVar11 * 8 + 0x20);
        lVar4 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
        Atlas_UI_MetagameData___ctor(lVar4,0);
        *(undefined8 *)(lVar4 + 0x10) = uVar12;
        *(uint **)(lVar4 + 0x18) = param_3;
        Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar4,auStack_90,&iStack_84);
        uVar9 = (uint)uVar10;
        if (iStack_84 == iVar2) {
          uVar9 = uVar9 + 1;
        }
        uVar10 = (ulong)uVar9;
        uVar11 = uVar11 + 1;
        uVar7 = (ulong)*(int *)(lVar3 + 0x18);
      } while ((long)uVar11 < (long)uVar7);
    }
    return uVar10;
  }
  auVar15 = func_0x00f78af4();
  puVar8 = auVar15._8_8_;
  lVar4 = auVar15._0_8_;
  puStack_98 = &Atlas_Helpers_ArcadeHelper__GetTotalMedalCounts;
  pppuVar13 = &ppuStack_a0;
  lVar3 = 0x3d25458;
  ppuStack_a0 = &puStack_40;
  if ((bRam0000000003eb476e & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb476e = 1;
  }
  uVar12 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  uVar7 = 0x3d215e0;
  uStack_e4 = 0;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar12,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar10,0);
  if (lVar5 != 0) {
    uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar5 + 0x18));
    lVar5 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(lVar4);
    if (lVar5 != 0) {
      uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
      if (0 < (int)*(uint *)(lVar5 + 0x18)) {
        uVar7 = 0;
        unaff_x24 = 0x3d1fc80;
        do {
          if ((uVar11 & 0xffffffff) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          unaff_x25 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + uVar7 * 8 + 0x20);
          lVar3 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
          Atlas_UI_MetagameData___ctor(lVar3,0);
          *(undefined8 *)(lVar3 + 0x10) = unaff_x25;
          *(uint **)(lVar3 + 0x18) = puVar8;
          puVar6 = &uStack_e4;
          Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar3,auStack_f0);
          lVar4 = lVar5;
          if (uVar10 == 0) goto code_r0x0144ff80;
          if (*(uint *)(uVar10 + 0x18) <= uStack_e4) goto code_r0x0144ff84;
          lVar3 = uVar10 + (long)(int)uStack_e4 * 4;
          *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
          uVar7 = uVar7 + 1;
          uVar11 = (ulong)*(int *)(lVar5 + 0x18);
        } while ((long)uVar7 < (long)uVar11);
      }
      return uVar10;
    }
  }
code_r0x0144ff80:
  func_0x00f78af4();
code_r0x0144ff84:
  uVar12 = func_0x00f78b24();
  puVar14 = &Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType;
  auVar15 = func_0x00f78ac0(uVar12,0);
  puVar1 = auStack_f0;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = uVar7;
    *(long *)(puVar1 + -0x30) = lVar3;
    *(ulong *)(puVar1 + -0x28) = uVar10;
    *(long *)(puVar1 + -0x20) = lVar4;
    *(uint **)(puVar1 + -0x18) = puVar8;
    *(undefined1 ****)(puVar1 + -0x10) = pppuVar13;
    *(undefined **)(puVar1 + -8) = puVar14;
    lVar3 = 0x3eb4000;
    if ((bRam0000000003eb476f & 1) == 0) {
      func_0x00f78a20(0x3d1fc80);
      func_0x00f78a20(0x3d39d00);
      func_0x00f78a20(0x3d39d08);
      bRam0000000003eb476f = 1;
    }
    *(undefined4 *)(puVar1 + -0x54) = 0;
    lVar4 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(auVar15._8_8_);
    if (lVar4 != 0) break;
    auVar16 = func_0x00f78af4();
    puVar8 = auVar16._8_8_;
    lVar4 = auVar16._0_8_;
    *(undefined8 *)(puVar1 + -0xa0) = unaff_x24;
    *(ulong *)(puVar1 + -0x98) = uVar7;
    *(undefined8 *)(puVar1 + -0x90) = 0x3eb4000;
    *(long *)(puVar1 + -0x88) = auVar15._8_8_;
    *(long *)(puVar1 + -0x80) = auVar15._0_8_;
    *(uint **)(puVar1 + -0x78) = puVar6;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &Atlas_Helpers_ArcadeHelper__GetCurrentRank;
    pppuVar13 = (undefined1 ***)(puVar1 + -0x70);
    uVar10 = Atlas_Helpers_ArcadeHelper__GetTotalPossibleMedalCount();
    auVar15._8_8_ = lVar4;
    auVar15._0_8_ = 1;
    puVar14 = &UNK_014500e0;
    puVar1 = puVar1 + -0xa0;
    puVar6 = puVar8;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
  if ((int)*(uint *)(lVar4 + 0x18) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    do {
      if ((uVar7 & 0xffffffff) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + uVar11 * 8 + 0x20);
      lVar3 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
      Atlas_UI_MetagameData___ctor(lVar3,0);
      *(undefined8 *)(lVar3 + 0x10) = uVar12;
      *(uint **)(lVar3 + 0x18) = puVar6;
      Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar3,puVar1 + -0x60,puVar1 + -0x54);
      uVar9 = (uint)uVar10;
      if (auVar15._0_4_ <= *(int *)(puVar1 + -0x54)) {
        uVar9 = uVar9 + 1;
      }
      uVar10 = (ulong)uVar9;
      uVar11 = uVar11 + 1;
      uVar7 = (ulong)*(int *)(lVar4 + 0x18);
    } while ((long)uVar11 < (long)uVar7);
  }
  return uVar10;
}



// ============================================================
// RVA: 0x144fc8c | Atlas.Helpers.ArcadeHelper.GetTotalMedalCountOfType
// ============================================================

/* WARNING: Possible PIC construction at 0x014500dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01450114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014500e0) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x01450118) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */

ulong Atlas_Helpers_ArcadeHelper__GetTotalMedalCountOfType
                (int param_1,undefined8 param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 unaff_x24;
  ulong uVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_c0 [12];
  uint uStack_b4;
  undefined1 auStack_60 [12];
  int iStack_54;
  undefined1 *puVar3;
  
  puVar7 = param_3;
  if ((bRam0000000003eb4770 & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    bRam0000000003eb4770 = 1;
  }
  iStack_54 = 0;
  lVar4 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(param_2);
  if (lVar4 != 0) {
    uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
    if ((int)*(uint *)(lVar4 + 0x18) < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      uVar12 = 0;
      do {
        if ((uVar8 & 0xffffffff) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + uVar12 * 8 + 0x20);
        lVar5 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
        Atlas_UI_MetagameData___ctor(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar13;
        *(uint **)(lVar5 + 0x18) = param_3;
        Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar5,auStack_60,&iStack_54);
        uVar10 = (uint)uVar11;
        if (iStack_54 == param_1) {
          uVar10 = uVar10 + 1;
        }
        uVar11 = (ulong)uVar10;
        uVar12 = uVar12 + 1;
        uVar8 = (ulong)*(int *)(lVar4 + 0x18);
      } while ((long)uVar12 < (long)uVar8);
    }
    return uVar11;
  }
  auVar15 = func_0x00f78af4();
  puVar9 = auVar15._8_8_;
  lVar5 = auVar15._0_8_;
  lVar4 = 0x3d25458;
  if ((bRam0000000003eb476e & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb476e = 1;
  }
  uVar13 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  uVar8 = 0x3d215e0;
  uStack_b4 = 0;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar11,0);
  if (lVar6 != 0) {
    uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar6 + 0x18));
    lVar6 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(lVar5);
    if (lVar6 != 0) {
      uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
      if (0 < (int)*(uint *)(lVar6 + 0x18)) {
        uVar8 = 0;
        unaff_x24 = 0x3d1fc80;
        do {
          if ((uVar12 & 0xffffffff) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          unaff_x25 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + uVar8 * 8 + 0x20);
          lVar4 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
          Atlas_UI_MetagameData___ctor(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = unaff_x25;
          *(uint **)(lVar4 + 0x18) = puVar9;
          puVar7 = &uStack_b4;
          Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar4,auStack_c0);
          lVar5 = lVar6;
          if (uVar11 == 0) goto code_r0x0144ff80;
          if (*(uint *)(uVar11 + 0x18) <= uStack_b4) goto code_r0x0144ff84;
          lVar4 = uVar11 + (long)(int)uStack_b4 * 4;
          *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
          uVar8 = uVar8 + 1;
          uVar12 = (ulong)*(int *)(lVar6 + 0x18);
        } while ((long)uVar8 < (long)uVar12);
      }
      return uVar11;
    }
  }
code_r0x0144ff80:
  func_0x00f78af4();
code_r0x0144ff84:
  uVar13 = func_0x00f78b24();
  puVar14 = &Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType;
  auVar15 = func_0x00f78ac0(uVar13,0);
  puVar1 = auStack_c0;
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar3 = puVar1;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = uVar8;
    *(long *)(puVar3 + -0x30) = lVar4;
    *(ulong *)(puVar3 + -0x28) = uVar11;
    *(long *)(puVar3 + -0x20) = lVar5;
    *(uint **)(puVar3 + -0x18) = puVar9;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x70;
    *(undefined **)(puVar3 + -8) = puVar14;
    lVar4 = 0x3eb4000;
    if ((bRam0000000003eb476f & 1) == 0) {
      func_0x00f78a20(0x3d1fc80);
      func_0x00f78a20(0x3d39d00);
      func_0x00f78a20(0x3d39d08);
      bRam0000000003eb476f = 1;
    }
    *(undefined4 *)(puVar3 + -0x54) = 0;
    lVar5 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(auVar15._8_8_);
    if (lVar5 != 0) break;
    auVar16 = func_0x00f78af4();
    puVar9 = auVar16._8_8_;
    lVar5 = auVar16._0_8_;
    *(undefined8 *)(puVar3 + -0xa0) = unaff_x24;
    *(ulong *)(puVar3 + -0x98) = uVar8;
    *(undefined8 *)(puVar3 + -0x90) = 0x3eb4000;
    *(long *)(puVar3 + -0x88) = auVar15._8_8_;
    *(long *)(puVar3 + -0x80) = auVar15._0_8_;
    *(uint **)(puVar3 + -0x78) = puVar7;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Helpers_ArcadeHelper__GetCurrentRank;
    uVar11 = Atlas_Helpers_ArcadeHelper__GetTotalPossibleMedalCount();
    auVar15._8_8_ = lVar5;
    auVar15._0_8_ = 1;
    puVar14 = &UNK_014500e0;
    puVar1 = puVar3 + -0xa0;
    puVar7 = puVar9;
    puVar2 = puVar3;
  }
  uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
  if ((int)*(uint *)(lVar5 + 0x18) < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    do {
      if ((uVar8 & 0xffffffff) <= uVar12) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + uVar12 * 8 + 0x20);
      lVar4 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
      Atlas_UI_MetagameData___ctor(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar13;
      *(uint **)(lVar4 + 0x18) = puVar7;
      Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar4,puVar3 + -0x60,puVar3 + -0x54);
      uVar10 = (uint)uVar11;
      if (auVar15._0_4_ <= *(int *)(puVar3 + -0x54)) {
        uVar10 = uVar10 + 1;
      }
      uVar11 = (ulong)uVar10;
      uVar12 = uVar12 + 1;
      uVar8 = (ulong)*(int *)(lVar5 + 0x18);
    } while ((long)uVar12 < (long)uVar8);
  }
  return uVar11;
}



// ============================================================
// RVA: 0x144fda8 | Atlas.Helpers.ArcadeHelper.GetTotalMedalCounts
// ============================================================

/* WARNING: Possible PIC construction at 0x014500dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01450114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014500e0) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x01450118) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */

ulong Atlas_Helpers_ArcadeHelper__GetTotalMedalCounts(long param_1,uint *param_2,uint *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_60 [12];
  uint uStack_54;
  
  puVar9 = &stack0xfffffffffffffff0;
  lVar4 = 0x3d25458;
  if ((bRam0000000003eb476e & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb476e = 1;
  }
  uVar5 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  uVar8 = 0x3d215e0;
  uStack_54 = 0;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar2,0);
  if (lVar3 != 0) {
    uVar2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar3 + 0x18));
    lVar3 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(param_1);
    if (lVar3 != 0) {
      uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
      if (0 < (int)*(uint *)(lVar3 + 0x18)) {
        uVar8 = 0;
        unaff_x24 = 0x3d1fc80;
        do {
          if ((uVar6 & 0xffffffff) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          unaff_x25 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + uVar8 * 8 + 0x20);
          lVar4 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
          Atlas_UI_MetagameData___ctor(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = unaff_x25;
          *(uint **)(lVar4 + 0x18) = param_2;
          param_3 = &uStack_54;
          Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar4,auStack_60);
          param_1 = lVar3;
          if (uVar2 == 0) goto LAB_0144ff80;
          if (*(uint *)(uVar2 + 0x18) <= uStack_54) goto LAB_0144ff84;
          lVar4 = uVar2 + (long)(int)uStack_54 * 4;
          *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
          uVar8 = uVar8 + 1;
          uVar6 = (ulong)*(int *)(lVar3 + 0x18);
        } while ((long)uVar8 < (long)uVar6);
      }
      return uVar2;
    }
  }
LAB_0144ff80:
  func_0x00f78af4();
LAB_0144ff84:
  uVar5 = func_0x00f78b24();
  puVar10 = &Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType;
  auVar11 = func_0x00f78ac0(uVar5,0);
  puVar1 = auStack_60;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = uVar8;
    *(long *)(puVar1 + -0x30) = lVar4;
    *(ulong *)(puVar1 + -0x28) = uVar2;
    *(long *)(puVar1 + -0x20) = param_1;
    *(uint **)(puVar1 + -0x18) = param_2;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    lVar4 = 0x3eb4000;
    if ((bRam0000000003eb476f & 1) == 0) {
      func_0x00f78a20(0x3d1fc80);
      func_0x00f78a20(0x3d39d00);
      func_0x00f78a20(0x3d39d08);
      bRam0000000003eb476f = 1;
    }
    *(undefined4 *)(puVar1 + -0x54) = 0;
    lVar3 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(auVar11._8_8_);
    if (lVar3 != 0) break;
    auVar12 = func_0x00f78af4();
    param_2 = auVar12._8_8_;
    param_1 = auVar12._0_8_;
    *(undefined8 *)(puVar1 + -0xa0) = unaff_x24;
    *(ulong *)(puVar1 + -0x98) = uVar8;
    *(undefined8 *)(puVar1 + -0x90) = 0x3eb4000;
    *(long *)(puVar1 + -0x88) = auVar11._8_8_;
    *(long *)(puVar1 + -0x80) = auVar11._0_8_;
    *(uint **)(puVar1 + -0x78) = param_3;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &Atlas_Helpers_ArcadeHelper__GetCurrentRank;
    puVar9 = puVar1 + -0x70;
    uVar2 = Atlas_Helpers_ArcadeHelper__GetTotalPossibleMedalCount();
    auVar11._8_8_ = param_1;
    auVar11._0_8_ = 1;
    puVar10 = &UNK_014500e0;
    puVar1 = puVar1 + -0xa0;
    param_3 = param_2;
  }
  uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
  if ((int)*(uint *)(lVar3 + 0x18) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar6 = 0;
    do {
      if ((uVar8 & 0xffffffff) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + uVar6 * 8 + 0x20);
      lVar4 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
      Atlas_UI_MetagameData___ctor(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
      *(uint **)(lVar4 + 0x18) = param_3;
      Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar4,puVar1 + -0x60,puVar1 + -0x54);
      uVar7 = (uint)uVar2;
      if (auVar11._0_4_ <= *(int *)(puVar1 + -0x54)) {
        uVar7 = uVar7 + 1;
      }
      uVar2 = (ulong)uVar7;
      uVar6 = uVar6 + 1;
      uVar8 = (ulong)*(int *)(lVar3 + 0x18);
    } while ((long)uVar6 < (long)uVar8);
  }
  return uVar2;
}



// ============================================================
// RVA: 0x144ff90 | Atlas.Helpers.ArcadeHelper.GetMedalsOfAndAboveType
// ============================================================

uint Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType
               (int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_60 [12];
  int iStack_54;
  
  if ((bRam0000000003eb476f & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d39d08);
    bRam0000000003eb476f = 1;
  }
  iStack_54 = 0;
  lVar4 = Atlas_Helpers_ArcadeHelper__GetArcadeEvents(param_2);
  if (lVar4 == 0) {
    auVar11 = func_0x00f78af4();
    uVar6 = auVar11._8_8_;
    uVar10 = auVar11._0_8_;
    iVar1 = Atlas_Helpers_ArcadeHelper__GetTotalPossibleMedalCount();
    iVar2 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(1,uVar10,uVar6);
    iVar3 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(2,uVar10,uVar6);
    uVar8 = (uint)(iVar1 <= iVar2);
    if (iVar1 <= iVar3) {
      uVar8 = 2;
    }
    iVar2 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(3,uVar10,uVar6);
    if (iVar1 <= iVar2) {
      uVar8 = 3;
    }
    return uVar8;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
  if ((int)*(uint *)(lVar4 + 0x18) < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    do {
      if ((uVar7 & 0xffffffff) <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + uVar9 * 8 + 0x20);
      lVar5 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
      Atlas_UI_MetagameData___ctor(lVar5,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar10;
      *(undefined8 *)(lVar5 + 0x18) = param_3;
      Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar5,auStack_60,&iStack_54);
      if (param_1 <= iStack_54) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = uVar9 + 1;
      uVar7 = (ulong)*(int *)(lVar4 + 0x18);
    } while ((long)uVar9 < (long)uVar7);
  }
  return uVar8;
}



// ============================================================
// RVA: 0x14500ac | Atlas.Helpers.ArcadeHelper.GetCurrentRank
// ============================================================

undefined1 Atlas_Helpers_ArcadeHelper__GetCurrentRank(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar1 = Atlas_Helpers_ArcadeHelper__GetTotalPossibleMedalCount();
  iVar2 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(1,param_1,param_2);
  uVar3 = iVar1 <= iVar2;
  iVar2 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(2,param_1,param_2);
  if (iVar1 <= iVar2) {
    uVar3 = 2;
  }
  iVar2 = Atlas_Helpers_ArcadeHelper__GetMedalsOfAndAboveType(3,param_1,param_2);
  if (iVar1 <= iVar2) {
    uVar3 = 3;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1450134 | Atlas.Helpers.ArcadeHelper.GetNextRank
// ============================================================

int Atlas_Helpers_ArcadeHelper__GetNextRank(void)

{
  int iVar1;
  
  iVar1 = Atlas_Helpers_ArcadeHelper__GetCurrentRank();
  if (iVar1 < 3) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// ============================================================
// RVA: 0x1450150 | Atlas.Helpers.ArcadeHelper.GetAllRewards
// ============================================================

long * Atlas_Helpers_ArcadeHelper__GetAllRewards(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam0000000003eb4772 & 1) == 0) {
    func_0x00f78a20(0x3d1ed28);
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4772 = 1;
  }
  plVar1 = (long *)func_0x00f78a34(/*Atlas.Definitions.AssetDefinition[]_TypeInfo*/ uRam0000000003d1ed28,7);
  if (((param_2 != 0) &&
      (uVar2 = Atlas_Definitions_ArcadeDefinition__GetHalfwayReward(param_2,1),
      param_1 != (long *)0x0)) &&
     (plVar3 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(param_1,uVar2,0), plVar1 != (long *)0x0)) {
    if (plVar3 == (long *)0x0) {
LAB_01450254:
      if ((int)plVar1[3] != 0) {
        plVar1[4] = (long)plVar3;
        uVar2 = Atlas_Definitions_ArcadeDefinition__GetAllReward(param_2,1);
        plVar3 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(param_1,uVar2,0);
        if (plVar3 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8
                       + -8) == /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) {
            lVar4 = func_0x00f78adc(plVar3,*(undefined8 *)(*plVar1 + 0x40));
            if (lVar4 == 0) goto LAB_014505a8;
            if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
               (*(long *)(*(long *)(*plVar3 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) ==
                /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto LAB_014502f0;
          }
          goto LAB_01450598;
        }
LAB_014502f0:
        if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
          plVar1[5] = (long)plVar3;
          uVar2 = Atlas_Definitions_ArcadeDefinition__GetHalfwayReward(param_2,2);
          plVar3 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(param_1,uVar2,0);
          if (plVar3 != (long *)0x0) {
            if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
               (*(long *)(*(long *)(*plVar3 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) ==
                /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) {
              lVar4 = func_0x00f78adc(plVar3,*(undefined8 *)(*plVar1 + 0x40));
              if (lVar4 == 0) goto LAB_014505a8;
              if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
                 (*(long *)(*(long *)(*plVar3 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) ==
                  /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto LAB_01450390;
            }
            goto LAB_01450598;
          }
LAB_01450390:
          if (2 < *(uint *)(plVar1 + 3)) {
            plVar1[6] = (long)plVar3;
            uVar2 = Atlas_Definitions_ArcadeDefinition__GetAllReward(param_2,2);
            plVar3 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(param_1,uVar2,0);
            if (plVar3 != (long *)0x0) {
              if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
                 (*(long *)(*(long *)(*plVar3 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) ==
                  /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) {
                lVar4 = func_0x00f78adc(plVar3,*(undefined8 *)(*plVar1 + 0x40));
                if (lVar4 == 0) goto LAB_014505a8;
                if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
                   (*(long *)(*(long *)(*plVar3 + 200) +
                              (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) ==
                    /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto LAB_01450430;
              }
              goto LAB_01450598;
            }
LAB_01450430:
            if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
              plVar1[7] = (long)plVar3;
              uVar2 = Atlas_Definitions_ArcadeDefinition__GetHalfwayReward(param_2,3);
              plVar3 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(param_1,uVar2,0);
              if (plVar3 != (long *)0x0) {
                if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
                   (*(long *)(*(long *)(*plVar3 + 200) +
                              (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) ==
                    /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) {
                  lVar4 = func_0x00f78adc(plVar3,*(undefined8 *)(*plVar1 + 0x40));
                  if (lVar4 == 0) goto LAB_014505a8;
                  if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
                     (*(long *)(*(long *)(*plVar3 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) ==
                      /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto LAB_014504d0;
                }
                goto LAB_01450598;
              }
LAB_014504d0:
              if (4 < *(uint *)(plVar1 + 3)) {
                plVar1[8] = (long)plVar3;
                uVar2 = Atlas_Definitions_ArcadeDefinition__GetAllReward(param_2,3);
                param_1 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(param_1,uVar2,0);
                if (param_1 != (long *)0x0) {
                  if ((*(byte *)(*param_1 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) ||
                     (*(long *)(*(long *)(*param_1 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                      /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto LAB_014505b8;
                  lVar4 = func_0x00f78adc(param_1,*(undefined8 *)(*plVar1 + 0x40));
                  if (lVar4 == 0) goto LAB_014505a8;
                  if ((*(byte *)(*param_1 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) ||
                     (*(long *)(*(long *)(*param_1 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                      /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto LAB_014505b8;
                }
                if (5 < *(uint *)(plVar1 + 3)) {
                  plVar1[9] = (long)param_1;
                  return plVar1;
                }
              }
            }
          }
        }
      }
LAB_014505a0:
      uVar2 = func_0x00f78b24();
    }
    else {
      if ((*(byte *)(*plVar3 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8
                   ) != /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) {
LAB_01450598:
        func_0x00f78e5c(plVar3);
        goto LAB_014505a0;
      }
      lVar4 = func_0x00f78adc(plVar3,*(undefined8 *)(*plVar1 + 0x40));
      if (lVar4 != 0) {
        if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar3 + 300)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 +
                     -8) == /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto LAB_01450254;
        goto LAB_01450598;
      }
LAB_014505a8:
      uVar2 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar2,0);
  }
  func_0x00f78af4();
LAB_014505b8:
  plVar1 = (long *)func_0x00f78e5c(param_1);
  return plVar1;
}



// ============================================================
// RVA: 0x14505c0 | Atlas.Helpers.ArcadeHelper.Log
// ============================================================

void Atlas_Helpers_ArcadeHelper__Log(void)

{
  return;
}



// ============================================================
// RVA: 0x14505c4 | Atlas.Helpers.ArcadeHelper.IsRewardUnlocked
// ============================================================

ulong Atlas_Helpers_ArcadeHelper__IsRewardUnlocked(long param_1,uint param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  int extraout_w1;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((param_1 != 0) && (lVar14 = *(long *)(param_1 + 0x28), lVar14 != 0)) {
    if (*(uint *)(lVar14 + 0x18) <= param_2) goto LAB_01450604;
    if (param_3 != 0) {
      lVar14 = *(long *)(lVar14 + (long)(int)param_2 * 8 + 0x20);
      if ((bRam0000000003eb4e2b & 1) == 0) {
        func_0x00f78a20(0x3d257d8,lVar14,0);
        bRam0000000003eb4e2b = 1;
      }
      if (*(long *)(param_3 + 0x20) != 0) {
        lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_3 + 0x20),0);
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
        pcStack_38 = (code *)0x0;
        puStack_40 = (undefined1 *)0x0;
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&lStack_50,*(long *)(lVar8 + 0x38),uRam0000000003d3d950);
          do {
            uVar9 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&lStack_50,uRam0000000003d33740);
            if ((uVar9 & 1) == 0) {
              iVar13 = 0x40;
              goto LAB_01521720;
            }
            if (puStack_40 == (undefined1 *)0x0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1521764);
              (*pcVar6)();
            }
            uVar10 = /*System.String$$Equals*/ func_0x029caa48(puStack_40,lVar14,4,0);
          } while ((uVar10 & 1) == 0);
          iVar13 = 0x42;
LAB_01521720:
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&lStack_50,uRam0000000003d33738);
          if (iVar13 != 0x42) {
            uVar9 = 0;
          }
          return uVar9;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar11 = (long *)___cxa_begin_catch();
          lVar14 = *plVar11;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&lStack_50,uRam0000000003eb4000);
          if (lVar14 == 0) {
            return 0;
          }
        }
        else {
          __Unwind_Resume();
        }
        auVar17 = func_0x00f78ac0(lVar14,0);
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
        lVar14 = *(long *)(auVar17._0_8_ + 0x20);
        if (((lVar14 == 0) || (lVar14 = Atlas_Save_SaveManager__get_SaveData(lVar14,0), lVar14 == 0)
            ) || (*(long *)(lVar14 + 0x38) == 0)) {
          auVar17 = func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_c0,*(long *)(lVar14 + 0x38),uRam0000000003d3d950);
          do {
            uVar9 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_c0,uRam0000000003d33740);
            if ((uVar9 & 1) == 0) goto LAB_015218ec;
            if (lStack_b0 == 0) {
              func_0x00f78af4();
              goto code_r0x01521928;
            }
            uVar9 = /*System.String$$Equals*/ func_0x029caa48(lStack_b0,auVar17._8_8_,4,0);
          } while ((uVar9 & 1) == 0);
          lVar14 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff3f);
          uVar12 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff3e);
          auVar17._8_8_ = uVar12;
          auVar17._0_8_ = uVar12;
          if (lVar14 != 0) {
            uVar9 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar14,uVar12,0);
            if ((uVar9 & 1) == 0) {
LAB_015218ec:
              uVar9 = 0;
            }
            else {
              uVar9 = 1;
            }
            /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_c0,uRam0000000003d33738);
            return uVar9;
          }
        }
        func_0x00f78af4(auVar17._0_8_,auVar17._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x152192c);
        (*pcVar6)();
      }
      auVar17 = func_0x00f78af4();
      lVar8 = auVar17._8_8_;
      pcStack_38 = Atlas_Stats_UnlockManager__GetChallengesCompletedBitFieldForEvent;
      uVar12 = 0x3d257d8;
      lStack_50 = param_3;
      lStack_48 = lVar14;
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
      uVar7 = Atlas_Stats_UnlockManager__GetEventProgressionIndex(auVar17._0_8_,lVar8);
      if (uVar7 == 0xffffffff) {
        return 0;
      }
      if ((lVar8 != 0) && (lVar14 = *(long *)(lVar8 + 0x58), lVar14 != 0)) {
        if ((int)*(uint *)(lVar14 + 0x18) < 1) {
          return 0;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        return (ulong)*(byte *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar7 * 0x10 + 0x28);
      }
      auVar16 = func_0x00f78af4();
      lVar14 = auVar16._0_8_;
      uVar15 = 0x3eb4000;
      if ((bRam0000000003eb4e10 & 1) == 0) {
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        func_0x00f78a20(0x3d257d8);
        bRam0000000003eb4e10 = 1;
      }
      if (*(long *)(lVar14 + 0x20) != 0) {
        uVar12 = 0x3d25000;
        uVar15 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar14 + 0x20),0);
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = Atlas_Stats_UnlockManager__GetEventProgressionIndex(auVar16._8_8_,uVar15);
        auVar4._8_8_ = uVar9;
        auVar4._0_8_ = lVar14;
        auVar3._8_8_ = uVar9;
        auVar3._0_8_ = lVar14;
        auVar2._8_8_ = uVar9;
        auVar2._0_8_ = lVar14;
        auVar1._8_8_ = uVar9;
        auVar1._0_8_ = lVar14;
        auVar16._8_8_ = uVar9;
        auVar16._0_8_ = lVar14;
        uVar7 = (uint)uVar9;
        if (uVar7 == 0xffffffff) {
          return 0;
        }
        if (((*(long *)(lVar14 + 0x20) != 0) &&
            (lVar8 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar14 + 0x20),0),
            auVar16 = auVar1, lVar8 != 0)) && (auVar16 = auVar2, *(long *)(lVar8 + 0x58) != 0)) {
          if (*(int *)(*(long *)(lVar8 + 0x58) + 0x18) < 1) {
            return 0;
          }
          auVar16 = auVar3;
          if ((*(long *)(lVar14 + 0x20) != 0) &&
             (lVar14 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar14 + 0x20),0),
             auVar16 = auVar4, lVar14 != 0)) {
            lVar14 = *(long *)(lVar14 + 0x58);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar9;
            auVar16 = auVar5 << 0x40;
            if (lVar14 != 0) {
              if (*(uint *)(lVar14 + 0x18) <= uVar7) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              return (ulong)*(byte *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar7 * 0x10 + 0x29);
            }
          }
        }
      }
      auVar17 = func_0x00f78af4();
      lVar14 = auVar17._8_8_;
      uStack_c0 = uVar12;
      uStack_b8 = uVar15;
      if ((bRam0000000003eb4e46 & 1) == 0) {
        lStack_b0 = auVar16._8_8_;
        uStack_a8 = auVar16._0_8_;
        func_0x00f78a20(0x3d3d8d0);
        func_0x00f78a20(0x3d3d8d8);
        auVar16._8_8_ = lStack_b0;
        auVar16._0_8_ = uStack_a8;
        bRam0000000003eb4e46 = 1;
      }
      if ((lVar14 != 0) && (lVar8 = *(long *)(lVar14 + 0x58), lVar8 != 0)) {
        iVar13 = *(int *)(lVar8 + 0x18);
        if (iVar13 < 1) {
          return 0xffffffff;
        }
        uVar9 = 0;
        do {
          lStack_b0 = auVar16._8_8_;
          uStack_a8 = auVar16._0_8_;
          uVar7 = (uint)uVar9;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            auVar16._8_8_ = lStack_b0;
            auVar16._0_8_ = uStack_a8;
          }
          lStack_b0 = auVar16._8_8_;
          uStack_a8 = auVar16._0_8_;
          lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar7 * 0x10 + 0x20);
          if (lVar8 == 0) break;
          uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar17._0_8_,4,0);
          auVar16._8_8_ = lStack_b0;
          auVar16._0_8_ = uStack_a8;
          if ((uVar10 & 1) != 0) {
            return uVar9;
          }
          if (iVar13 - 1U == uVar7) {
            return 0xffffffff;
          }
          lVar8 = *(long *)(lVar14 + 0x58);
          uVar9 = (ulong)(uVar7 + 1);
        } while (lVar8 != 0);
      }
      lStack_b0 = auVar16._8_8_;
      uStack_a8 = auVar16._0_8_;
      func_0x00f78af4();
      return 0xffffffff;
    }
  }
  func_0x00f78af4();
LAB_01450604:
  uVar12 = func_0x00f78b24();
  uVar9 = func_0x00f78ac0(uVar12,0);
  return uVar9;
}



// ============================================================
// RVA: 0x1450610 | Atlas.Helpers.ArcadeHelper..ctor
// ============================================================

void Atlas_Helpers_ArcadeHelper___ctor(void)

{
  return;
}



