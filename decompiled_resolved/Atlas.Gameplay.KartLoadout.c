// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.KartLoadout

// ============================================================
// RVA: 0x15cd854 | Atlas.Gameplay.KartLoadout.ClearLoadout
// ============================================================

void Atlas_Gameplay_KartLoadout__ClearLoadout(undefined8 *param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5339 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb5339 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *param_1 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  param_1[1] = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  param_1[2] = **(undefined8 **)(lVar1 + 0xb8);
  param_1[3] = **(undefined8 **)(lVar1 + 0xb8);
  param_1[4] = **(undefined8 **)(lVar1 + 0xb8);
  param_1[5] = **(undefined8 **)(lVar1 + 0xb8);
  param_1[6] = **(undefined8 **)(lVar1 + 0xb8);
  param_1[7] = **(undefined8 **)(lVar1 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x15cd920 | Atlas.Gameplay.KartLoadout.get_IsLoadoutEmpty
// ============================================================

uint Atlas_Gameplay_KartLoadout__get_IsLoadoutEmpty(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1,0);
  if (((((uVar2 & 1) == 0) && (uVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 8,0), (uVar2 & 1) == 0)) &&
      (uVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0x10,0), (uVar2 & 1) == 0)) &&
     (((uVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0x18,0), (uVar2 & 1) == 0 &&
       (uVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0x20,0), (uVar2 & 1) == 0)) &&
      ((uVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0x28,0), (uVar2 & 1) == 0 &&
       (uVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0x30,0), (uVar2 & 1) == 0)))))) {
    uVar1 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0x38,0);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15cd9c0 | Atlas.Gameplay.KartLoadout.FromNetworkLoadOut
// ============================================================

void Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return;
}



// ============================================================
// RVA: 0x15cd9dc | Atlas.Gameplay.KartLoadout.FromNetworkLoadOut
// ============================================================

ulong Atlas_Gameplay_KartLoadout__FromNetworkLoadOut
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar17;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar17 = 0x3eb5000;
  if ((bRam0000000003eb533a & 1) == 0) {
    func_0x00f78a20(0x3d3ae50);
    func_0x00f78a20(0x3d3ae58);
    func_0x00f78a20(0x3d3ae48);
    func_0x00f78a20(0x3d3b4a0);
    func_0x00f78a20(0x3d3b4a8);
    func_0x00f78a20(0x3d1db08);
    bRam0000000003eb533a = 1;
  }
  if (param_1 != 0) {
    unaff_x22 = 0x3d3a000;
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x18);
    lVar17 = func_0x00f78aec(/*System.Collections.Generic.List<KartLoadout>_TypeInfo*/ uRam0000000003d1db08);
    param_3 = lRam0000000003d3ae48;
    /*System.Collections.Generic.List<KartLoadout>$$.ctor*/ func_0x023edfd8(lVar17,unaff_x21);
    uVar16 = (ulong)*(uint *)(param_1 + 0x18);
    if (0 < (int)*(uint *)(param_1 + 0x18)) {
      unaff_x21 = 0;
      unaff_x22 = 0;
      do {
        if ((uVar16 & 0xffffffff) <= unaff_x22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (lVar17 == 0) goto LAB_015cdb2c;
        lVar15 = *(long *)(param_1 + 0x10) + unaff_x21;
        uStack_50 = *(undefined8 *)(lVar15 + 0x50);
        uStack_48 = *(undefined8 *)(lVar15 + 0x58);
        uStack_68 = *(undefined8 *)(lVar15 + 0x38);
        uStack_70 = *(undefined8 *)(lVar15 + 0x30);
        uStack_58 = *(undefined8 *)(lVar15 + 0x48);
        uStack_60 = *(undefined8 *)(lVar15 + 0x40);
        uStack_78 = *(undefined8 *)(lVar15 + 0x28);
        uStack_80 = *(undefined8 *)(lVar15 + 0x20);
        param_3 = lRam0000000003d3ae50;
        /*System.Collections.Generic.List<KartLoadout>$$Add*/ func_0x023eec3c(lVar17,&uStack_80);
        unaff_x22 = unaff_x22 + 1;
        uVar16 = (ulong)*(int *)(param_1 + 0x18);
        unaff_x21 = unaff_x21 + 0x40;
      } while ((long)unaff_x22 < (long)uVar16);
LAB_015cdb00:
      uVar16 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar17,uRam0000000003d3ae58);
      return uVar16;
    }
    if (lVar17 != 0) goto LAB_015cdb00;
  }
LAB_015cdb2c:
  uVar16 = func_0x00f78af4();
  puStack_a0 = (undefined1 *)&puStack_90;
  puStack_88 = &Atlas_Gameplay_KartLoadout__FromSaveGame;
  if (uVar16 != 0) {
    uVar18 = *(undefined8 *)(uVar16 + 0x80);
    uVar14 = *(undefined8 *)(uVar16 + 0x90);
    uVar3 = *(undefined8 *)(uVar16 + 0x98);
    uVar1 = *(undefined8 *)(uVar16 + 0xa0);
    uVar4 = *(undefined8 *)(uVar16 + 0xa8);
    uVar2 = *(undefined8 *)(uVar16 + 0xb0);
    uVar5 = *(undefined8 *)(uVar16 + 0xb8);
    extraout_x8[1] = *(undefined8 *)(uVar16 + 0x88);
    *extraout_x8 = uVar18;
    extraout_x8[2] = uVar14;
    extraout_x8[3] = uVar1;
    extraout_x8[4] = uVar3;
    extraout_x8[5] = uVar4;
    extraout_x8[6] = uVar2;
    extraout_x8[7] = uVar5;
    return uVar16;
  }
  puStack_90 = &stack0xfffffffffffffff0;
  auVar19 = func_0x00f78af4();
  lVar15 = auVar19._8_8_;
  puVar13 = auVar19._0_8_;
  puStack_98 = &Atlas_Gameplay_KartLoadout__FixInvalidKartLoadout;
  uStack_c0 = unaff_x22;
  uStack_b8 = unaff_x21;
  lStack_b0 = lVar17;
  lStack_a8 = param_1;
  ppuVar6 = &puStack_90;
  if ((bRam0000000003eb533b & 1) == 0) {
    func_0x00f78a20(0x3d57368);
    func_0x00f78a20(0x3d57370);
    func_0x00f78a20(0x3d57378);
    func_0x00f78a20(0x3d57380);
    func_0x00f78a20(0x3d57388);
    func_0x00f78a20(0x3d57390);
    bRam0000000003eb533b = 1;
    ppuVar6 = (undefined1 **)puStack_a0;
  }
  puStack_a0 = (undefined1 *)ppuVar6;
  uStack_f8 = puVar13[1];
  uStack_100 = *puVar13;
  uStack_e8 = puVar13[3];
  uStack_f0 = puVar13[2];
  uStack_d8 = puVar13[5];
  uStack_e0 = puVar13[4];
  uStack_c8 = puVar13[7];
  uStack_d0 = puVar13[6];
  uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_100,0);
  if ((uVar16 & 1) == 0) {
    if (((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) &&
       (lVar17 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar15 + 0x10),uRam0000000003d57378), lVar17 != 0)) {
      uStack_100 = *(undefined8 *)(lVar17 + 0x18);
      goto code_r0x015cdc30;
    }
  }
  else {
code_r0x015cdc30:
    uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((ulong)&uStack_100 | 8,0);
    if ((uVar16 & 1) == 0) {
      if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
         (lVar17 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar15 + 0x10),uRam0000000003d57388), lVar17 == 0))
      goto code_r0x015cdd74;
      uStack_f8 = *(undefined8 *)(lVar17 + 0x18);
    }
    uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_f0,0);
    if ((uVar16 & 1) == 0) {
      if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
         (lVar17 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar15 + 0x10),uRam0000000003d57380), lVar17 == 0))
      goto code_r0x015cdd74;
      uStack_f0 = *(undefined8 *)(lVar17 + 0x18);
    }
    uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_e8,0);
    if ((uVar16 & 1) == 0) {
      if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
         (lVar17 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar15 + 0x10),uRam0000000003d57368), lVar17 == 0))
      goto code_r0x015cdd74;
      uStack_e8 = *(undefined8 *)(lVar17 + 0x18);
    }
    uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_e0,0);
    if ((uVar16 & 1) == 0) {
      if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
         (lVar17 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar15 + 0x10),uRam0000000003d57390), lVar17 == 0))
      goto code_r0x015cdd74;
      uStack_e0 = *(undefined8 *)(lVar17 + 0x18);
    }
    uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_d8,0);
    if ((uVar16 & 1) != 0) {
code_r0x015cdd50:
      extraout_x8_00[1] = uStack_f8;
      *extraout_x8_00 = uStack_100;
      extraout_x8_00[3] = uStack_e8;
      extraout_x8_00[2] = uStack_f0;
      extraout_x8_00[5] = uStack_d8;
      extraout_x8_00[4] = uStack_e0;
      extraout_x8_00[7] = uStack_c8;
      extraout_x8_00[6] = uStack_d0;
      return uVar16;
    }
    if (((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) &&
       (uVar16 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar15 + 0x10),uRam0000000003d57370), uVar16 != 0)) {
      uStack_d8 = *(undefined8 *)(uVar16 + 0x18);
      goto code_r0x015cdd50;
    }
  }
code_r0x015cdd74:
  auVar19 = func_0x00f78af4();
  lVar17 = auVar19._8_8_;
  puVar13 = auVar19._0_8_;
  if ((bRam0000000003eb533c & 1) == 0) {
    func_0x00f78a20(0x3d522d8);
    func_0x00f78a20(0x3d522e0);
    func_0x00f78a20(0x3d522e8);
    func_0x00f78a20(0x3d522f0);
    func_0x00f78a20(0x3d522f8);
    func_0x00f78a20(0x3d52300);
    bRam0000000003eb533c = 1;
  }
  uStack_178 = puVar13[1];
  uStack_180 = *puVar13;
  uStack_168 = puVar13[3];
  uStack_170 = puVar13[2];
  uStack_158 = puVar13[5];
  uStack_160 = puVar13[4];
  uStack_148 = puVar13[7];
  uStack_150 = puVar13[6];
  uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_180,0);
  if ((uVar16 & 1) == 0) {
    if (((param_3 == 0) || (uVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_3,0), lVar17 == 0)) ||
       (lVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar17,uVar14,param_4,uRam0000000003d522e8), lVar15 == 0))
    goto code_r0x015ce00c;
    uStack_180 = *(undefined8 *)(lVar15 + 0x18);
  }
  uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((ulong)&uStack_180 | 8,0);
  if ((uVar16 & 1) == 0) {
    if (((param_3 == 0) || (uVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_3,0), lVar17 == 0)) ||
       (lVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar17,uVar14,param_4,uRam0000000003d522f8), lVar15 == 0))
    goto code_r0x015ce00c;
    uStack_178 = *(undefined8 *)(lVar15 + 0x18);
  }
  uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_170,0);
  if ((uVar16 & 1) == 0) {
    if (((param_3 == 0) || (uVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_3,0), lVar17 == 0)) ||
       (lVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar17,uVar14,param_4,uRam0000000003d522f0), lVar15 == 0))
    goto code_r0x015ce00c;
    uStack_170 = *(undefined8 *)(lVar15 + 0x18);
  }
  uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_168,0);
  if ((uVar16 & 1) == 0) {
    if (((param_3 == 0) || (uVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_3,0), lVar17 == 0)) ||
       (lVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar17,uVar14,param_4,uRam0000000003d522d8), lVar15 == 0))
    goto code_r0x015ce00c;
    uStack_168 = *(undefined8 *)(lVar15 + 0x18);
  }
  uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_160,0);
  if ((uVar16 & 1) == 0) {
    if (((param_3 == 0) || (uVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_3,0), lVar17 == 0)) ||
       (lVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar17,uVar14,param_4,uRam0000000003d52300), lVar15 == 0))
    goto code_r0x015ce00c;
    uStack_160 = *(undefined8 *)(lVar15 + 0x18);
  }
  uVar16 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_158,0);
  if ((uVar16 & 1) == 0) {
    if (((param_3 == 0) || (uVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_3,0), lVar17 == 0)) ||
       (uVar16 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar17,uVar14,param_4,uRam0000000003d522e0), uVar16 == 0)) {
code_r0x015ce00c:
      auVar19 = func_0x00f78af4();
      lVar17 = auVar19._8_8_;
      puVar13 = auVar19._0_8_;
      if (lVar17 == 0) {
        lVar17 = func_0x00f78af4();
        return *(ulong *)(lVar17 + 0x10);
      }
      uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar17,*puVar13,0);
      uVar8 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar17,puVar13[1],0);
      uVar9 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar17,puVar13[2],0);
      uVar10 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar17,puVar13[3],0);
      uVar11 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar17,puVar13[4],0);
      uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar17,puVar13[5],0);
      return (ulong)(uVar12 & uVar11 & uVar10 & uVar9 & uVar8 & uVar7);
    }
    uStack_158 = *(undefined8 *)(uVar16 + 0x18);
  }
  extraout_x8_01[1] = uStack_178;
  *extraout_x8_01 = uStack_180;
  extraout_x8_01[3] = uStack_168;
  extraout_x8_01[2] = uStack_170;
  extraout_x8_01[5] = uStack_158;
  extraout_x8_01[4] = uStack_160;
  extraout_x8_01[7] = uStack_148;
  extraout_x8_01[6] = uStack_150;
  return uVar16;
}



// ============================================================
// RVA: 0x15cdb30 | Atlas.Gameplay.KartLoadout.FromSaveGame
// ============================================================

ulong Atlas_Gameplay_KartLoadout__FromSaveGame
                (undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4,
                undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    uVar17 = *(undefined8 *)(param_2 + 0x80);
    uVar15 = *(undefined8 *)(param_2 + 0x90);
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    uVar1 = *(undefined8 *)(param_2 + 0xa0);
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = *(undefined8 *)(param_2 + 0xb8);
    param_1[1] = *(undefined8 *)(param_2 + 0x88);
    *param_1 = uVar17;
    param_1[2] = uVar15;
    param_1[3] = uVar1;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = uVar2;
    param_1[7] = uVar5;
    return param_2;
  }
  auVar18 = func_0x00f78af4();
  lVar16 = auVar18._8_8_;
  puVar12 = auVar18._0_8_;
  if ((bRam0000000003eb533b & 1) == 0) {
    func_0x00f78a20(0x3d57368);
    func_0x00f78a20(0x3d57370);
    func_0x00f78a20(0x3d57378);
    func_0x00f78a20(0x3d57380);
    func_0x00f78a20(0x3d57388);
    func_0x00f78a20(0x3d57390);
    bRam0000000003eb533b = 1;
  }
  uStack_78 = puVar12[1];
  uStack_80 = *puVar12;
  uStack_68 = puVar12[3];
  uStack_70 = puVar12[2];
  uStack_58 = puVar12[5];
  uStack_60 = puVar12[4];
  uStack_48 = puVar12[7];
  uStack_50 = puVar12[6];
  uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_80,0);
  if ((uVar13 & 1) == 0) {
    if (((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) &&
       (lVar14 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar16 + 0x10),uRam0000000003d57378), lVar14 != 0)) {
      uStack_80 = *(undefined8 *)(lVar14 + 0x18);
      goto code_r0x015cdc30;
    }
  }
  else {
code_r0x015cdc30:
    uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((ulong)&uStack_80 | 8,0);
    if ((uVar13 & 1) == 0) {
      if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
         (lVar14 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar16 + 0x10),uRam0000000003d57388), lVar14 == 0))
      goto code_r0x015cdd74;
      uStack_78 = *(undefined8 *)(lVar14 + 0x18);
    }
    uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_70,0);
    if ((uVar13 & 1) == 0) {
      if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
         (lVar14 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar16 + 0x10),uRam0000000003d57380), lVar14 == 0))
      goto code_r0x015cdd74;
      uStack_70 = *(undefined8 *)(lVar14 + 0x18);
    }
    uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
    if ((uVar13 & 1) == 0) {
      if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
         (lVar14 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar16 + 0x10),uRam0000000003d57368), lVar14 == 0))
      goto code_r0x015cdd74;
      uStack_68 = *(undefined8 *)(lVar14 + 0x18);
    }
    uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_60,0);
    if ((uVar13 & 1) == 0) {
      if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
         (lVar14 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar16 + 0x10),uRam0000000003d57390), lVar14 == 0))
      goto code_r0x015cdd74;
      uStack_60 = *(undefined8 *)(lVar14 + 0x18);
    }
    uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_58,0);
    if ((uVar13 & 1) != 0) {
code_r0x015cdd50:
      extraout_x8[1] = uStack_78;
      *extraout_x8 = uStack_80;
      extraout_x8[3] = uStack_68;
      extraout_x8[2] = uStack_70;
      extraout_x8[5] = uStack_58;
      extraout_x8[4] = uStack_60;
      extraout_x8[7] = uStack_48;
      extraout_x8[6] = uStack_50;
      return uVar13;
    }
    if (((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) &&
       (uVar13 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(lVar16 + 0x10),uRam0000000003d57370), uVar13 != 0)) {
      uStack_58 = *(undefined8 *)(uVar13 + 0x18);
      goto code_r0x015cdd50;
    }
  }
code_r0x015cdd74:
  auVar18 = func_0x00f78af4();
  lVar16 = auVar18._8_8_;
  puVar12 = auVar18._0_8_;
  if ((bRam0000000003eb533c & 1) == 0) {
    func_0x00f78a20(0x3d522d8);
    func_0x00f78a20(0x3d522e0);
    func_0x00f78a20(0x3d522e8);
    func_0x00f78a20(0x3d522f0);
    func_0x00f78a20(0x3d522f8);
    func_0x00f78a20(0x3d52300);
    bRam0000000003eb533c = 1;
  }
  uStack_f8 = puVar12[1];
  uStack_100 = *puVar12;
  uStack_e8 = puVar12[3];
  uStack_f0 = puVar12[2];
  uStack_d8 = puVar12[5];
  uStack_e0 = puVar12[4];
  uStack_c8 = puVar12[7];
  uStack_d0 = puVar12[6];
  uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_100,0);
  if ((uVar13 & 1) == 0) {
    if (((param_4 == 0) || (uVar15 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar16 == 0)) ||
       (lVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar16,uVar15,param_5,uRam0000000003d522e8), lVar14 == 0))
    goto code_r0x015ce00c;
    uStack_100 = *(undefined8 *)(lVar14 + 0x18);
  }
  uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((ulong)&uStack_100 | 8,0);
  if ((uVar13 & 1) == 0) {
    if (((param_4 == 0) || (uVar15 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar16 == 0)) ||
       (lVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar16,uVar15,param_5,uRam0000000003d522f8), lVar14 == 0))
    goto code_r0x015ce00c;
    uStack_f8 = *(undefined8 *)(lVar14 + 0x18);
  }
  uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_f0,0);
  if ((uVar13 & 1) == 0) {
    if (((param_4 == 0) || (uVar15 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar16 == 0)) ||
       (lVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar16,uVar15,param_5,uRam0000000003d522f0), lVar14 == 0))
    goto code_r0x015ce00c;
    uStack_f0 = *(undefined8 *)(lVar14 + 0x18);
  }
  uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_e8,0);
  if ((uVar13 & 1) == 0) {
    if (((param_4 == 0) || (uVar15 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar16 == 0)) ||
       (lVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar16,uVar15,param_5,uRam0000000003d522d8), lVar14 == 0))
    goto code_r0x015ce00c;
    uStack_e8 = *(undefined8 *)(lVar14 + 0x18);
  }
  uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_e0,0);
  if ((uVar13 & 1) == 0) {
    if (((param_4 == 0) || (uVar15 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar16 == 0)) ||
       (lVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar16,uVar15,param_5,uRam0000000003d52300), lVar14 == 0))
    goto code_r0x015ce00c;
    uStack_e0 = *(undefined8 *)(lVar14 + 0x18);
  }
  uVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_d8,0);
  if ((uVar13 & 1) == 0) {
    if (((param_4 == 0) || (uVar15 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar16 == 0)) ||
       (uVar13 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar16,uVar15,param_5,uRam0000000003d522e0), uVar13 == 0)) {
code_r0x015ce00c:
      auVar18 = func_0x00f78af4();
      lVar16 = auVar18._8_8_;
      puVar12 = auVar18._0_8_;
      if (lVar16 != 0) {
        uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar16,*puVar12,0);
        uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar16,puVar12[1],0);
        uVar8 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar16,puVar12[2],0);
        uVar9 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar16,puVar12[3],0);
        uVar10 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar16,puVar12[4],0);
        uVar11 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar16,puVar12[5],0);
        return (ulong)(uVar11 & uVar10 & uVar9 & uVar8 & uVar7 & uVar6);
      }
      lVar16 = func_0x00f78af4();
      return *(ulong *)(lVar16 + 0x10);
    }
    uStack_d8 = *(undefined8 *)(uVar13 + 0x18);
  }
  extraout_x8_00[1] = uStack_f8;
  *extraout_x8_00 = uStack_100;
  extraout_x8_00[3] = uStack_e8;
  extraout_x8_00[2] = uStack_f0;
  extraout_x8_00[5] = uStack_d8;
  extraout_x8_00[4] = uStack_e0;
  extraout_x8_00[7] = uStack_c8;
  extraout_x8_00[6] = uStack_d0;
  return uVar13;
}



// ============================================================
// RVA: 0x15cdb68 | Atlas.Gameplay.KartLoadout.FixInvalidKartLoadout
// ============================================================

ulong Atlas_Gameplay_KartLoadout__FixInvalidKartLoadout
                (undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
                undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *extraout_x8;
  undefined1 auVar12 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb533b & 1) == 0) {
    func_0x00f78a20(0x3d57368);
    func_0x00f78a20(0x3d57370);
    func_0x00f78a20(0x3d57378);
    func_0x00f78a20(0x3d57380);
    func_0x00f78a20(0x3d57388);
    func_0x00f78a20(0x3d57390);
    bRam0000000003eb533b = 1;
  }
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_70,0);
  if ((uVar7 & 1) == 0) {
    if (((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) &&
       (lVar8 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(param_3 + 0x10),uRam0000000003d57378), lVar8 != 0)) {
      uStack_70 = *(undefined8 *)(lVar8 + 0x18);
      goto LAB_015cdc30;
    }
  }
  else {
LAB_015cdc30:
    uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((ulong)&uStack_70 | 8,0);
    if ((uVar7 & 1) == 0) {
      if (((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) ||
         (lVar8 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(param_3 + 0x10),uRam0000000003d57388), lVar8 == 0))
      goto LAB_015cdd74;
      uStack_68 = *(undefined8 *)(lVar8 + 0x18);
    }
    uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_60,0);
    if ((uVar7 & 1) == 0) {
      if (((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) ||
         (lVar8 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(param_3 + 0x10),uRam0000000003d57380), lVar8 == 0))
      goto LAB_015cdd74;
      uStack_60 = *(undefined8 *)(lVar8 + 0x18);
    }
    uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_58,0);
    if ((uVar7 & 1) == 0) {
      if (((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) ||
         (lVar8 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(param_3 + 0x10),uRam0000000003d57368), lVar8 == 0))
      goto LAB_015cdd74;
      uStack_58 = *(undefined8 *)(lVar8 + 0x18);
    }
    uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_50,0);
    if ((uVar7 & 1) == 0) {
      if (((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) ||
         (lVar8 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(param_3 + 0x10),uRam0000000003d57390), lVar8 == 0))
      goto LAB_015cdd74;
      uStack_50 = *(undefined8 *)(lVar8 + 0x18);
    }
    uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_48,0);
    if ((uVar7 & 1) != 0) {
LAB_015cdd50:
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      param_1[5] = uStack_48;
      param_1[4] = uStack_50;
      param_1[7] = uStack_38;
      param_1[6] = uStack_40;
      return uVar7;
    }
    if (((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) &&
       (uVar7 = /*Core.Definitions.GameDefinitions$$GetRandomDefinition<WheelsDefinition>*/ func_0x0185c8e0(*(long *)(param_3 + 0x10),uRam0000000003d57370), uVar7 != 0)) {
      uStack_48 = *(undefined8 *)(uVar7 + 0x18);
      goto LAB_015cdd50;
    }
  }
LAB_015cdd74:
  auVar12 = func_0x00f78af4();
  lVar8 = auVar12._8_8_;
  puVar9 = auVar12._0_8_;
  if ((bRam0000000003eb533c & 1) == 0) {
    func_0x00f78a20(0x3d522d8);
    func_0x00f78a20(0x3d522e0);
    func_0x00f78a20(0x3d522e8);
    func_0x00f78a20(0x3d522f0);
    func_0x00f78a20(0x3d522f8);
    func_0x00f78a20(0x3d52300);
    bRam0000000003eb533c = 1;
  }
  uStack_e8 = puVar9[1];
  uStack_f0 = *puVar9;
  uStack_d8 = puVar9[3];
  uStack_e0 = puVar9[2];
  uStack_c8 = puVar9[5];
  uStack_d0 = puVar9[4];
  uStack_b8 = puVar9[7];
  uStack_c0 = puVar9[6];
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_f0,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar10 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar8 == 0)) ||
       (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar8,uVar10,param_5,uRam0000000003d522e8), lVar11 == 0))
    goto code_r0x015ce00c;
    uStack_f0 = *(undefined8 *)(lVar11 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((ulong)&uStack_f0 | 8,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar10 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar8 == 0)) ||
       (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar8,uVar10,param_5,uRam0000000003d522f8), lVar11 == 0))
    goto code_r0x015ce00c;
    uStack_e8 = *(undefined8 *)(lVar11 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_e0,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar10 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar8 == 0)) ||
       (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar8,uVar10,param_5,uRam0000000003d522f0), lVar11 == 0))
    goto code_r0x015ce00c;
    uStack_e0 = *(undefined8 *)(lVar11 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_d8,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar10 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar8 == 0)) ||
       (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar8,uVar10,param_5,uRam0000000003d522d8), lVar11 == 0))
    goto code_r0x015ce00c;
    uStack_d8 = *(undefined8 *)(lVar11 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_d0,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar10 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar8 == 0)) ||
       (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar8,uVar10,param_5,uRam0000000003d52300), lVar11 == 0))
    goto code_r0x015ce00c;
    uStack_d0 = *(undefined8 *)(lVar11 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_c8,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar10 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), lVar8 == 0)) ||
       (uVar7 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(lVar8,uVar10,param_5,uRam0000000003d522e0), uVar7 == 0)) {
code_r0x015ce00c:
      auVar12 = func_0x00f78af4();
      lVar8 = auVar12._8_8_;
      puVar9 = auVar12._0_8_;
      if (lVar8 != 0) {
        uVar1 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,*puVar9,0);
        uVar2 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,puVar9[1],0);
        uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,puVar9[2],0);
        uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,puVar9[3],0);
        uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,puVar9[4],0);
        uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar8,puVar9[5],0);
        return (ulong)(uVar6 & uVar5 & uVar4 & uVar3 & uVar2 & uVar1);
      }
      lVar8 = func_0x00f78af4();
      return *(ulong *)(lVar8 + 0x10);
    }
    uStack_c8 = *(undefined8 *)(uVar7 + 0x18);
  }
  extraout_x8[1] = uStack_e8;
  *extraout_x8 = uStack_f0;
  extraout_x8[3] = uStack_d8;
  extraout_x8[2] = uStack_e0;
  extraout_x8[5] = uStack_c8;
  extraout_x8[4] = uStack_d0;
  extraout_x8[7] = uStack_b8;
  extraout_x8[6] = uStack_c0;
  return uVar7;
}



// ============================================================
// RVA: 0x15cdd78 | Atlas.Gameplay.KartLoadout.FixInvalidKartLoadoutWithAvailable
// ============================================================

ulong Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
                (undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
                undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb533c & 1) == 0) {
    func_0x00f78a20(0x3d522d8);
    func_0x00f78a20(0x3d522e0);
    func_0x00f78a20(0x3d522e8);
    func_0x00f78a20(0x3d522f0);
    func_0x00f78a20(0x3d522f8);
    func_0x00f78a20(0x3d52300);
    bRam0000000003eb533c = 1;
  }
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_80,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), param_3 == 0)) ||
       (lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(param_3,uVar8,param_5,uRam0000000003d522e8), lVar9 == 0))
    goto LAB_015ce00c;
    uStack_80 = *(undefined8 *)(lVar9 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((ulong)&uStack_80 | 8,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), param_3 == 0)) ||
       (lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(param_3,uVar8,param_5,uRam0000000003d522f8), lVar9 == 0))
    goto LAB_015ce00c;
    uStack_78 = *(undefined8 *)(lVar9 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_70,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), param_3 == 0)) ||
       (lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(param_3,uVar8,param_5,uRam0000000003d522f0), lVar9 == 0))
    goto LAB_015ce00c;
    uStack_70 = *(undefined8 *)(lVar9 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), param_3 == 0)) ||
       (lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(param_3,uVar8,param_5,uRam0000000003d522d8), lVar9 == 0))
    goto LAB_015ce00c;
    uStack_68 = *(undefined8 *)(lVar9 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_60,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), param_3 == 0)) ||
       (lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(param_3,uVar8,param_5,uRam0000000003d52300), lVar9 == 0))
    goto LAB_015ce00c;
    uStack_60 = *(undefined8 *)(lVar9 + 0x18);
  }
  uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_58,0);
  if ((uVar7 & 1) == 0) {
    if (((param_4 == 0) || (uVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0), param_3 == 0)) ||
       (uVar7 = /*Atlas.Definitions.AtlasDefinitions$$GetRandomUnlockedAndAvailableLoadoutDefinition<WheelsDefinition>*/ func_0x0182df3c(param_3,uVar8,param_5,uRam0000000003d522e0), uVar7 == 0)) {
LAB_015ce00c:
      auVar11 = func_0x00f78af4();
      lVar9 = auVar11._8_8_;
      puVar10 = auVar11._0_8_;
      if (lVar9 != 0) {
        uVar1 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,*puVar10,0);
        uVar2 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,puVar10[1],0);
        uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,puVar10[2],0);
        uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,puVar10[3],0);
        uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,puVar10[4],0);
        uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar9,puVar10[5],0);
        return (ulong)(uVar6 & uVar5 & uVar4 & uVar3 & uVar2 & uVar1);
      }
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 0x10);
    }
    uStack_58 = *(undefined8 *)(uVar7 + 0x18);
  }
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  return uVar7;
}



// ============================================================
// RVA: 0x15ce010 | Atlas.Gameplay.KartLoadout.IsLoadoutFullyUnlocked
// ============================================================

ulong Atlas_Gameplay_KartLoadout__IsLoadoutFullyUnlocked(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_2 != 0) {
    uVar1 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(param_2,*param_1,0);
    uVar2 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(param_2,param_1[1],0);
    uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(param_2,param_1[2],0);
    uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(param_2,param_1[3],0);
    uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(param_2,param_1[4],0);
    uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(param_2,param_1[5],0);
    return (ulong)(uVar6 & uVar5 & uVar4 & uVar3 & uVar2 & uVar1);
  }
  lVar7 = func_0x00f78af4();
  return *(ulong *)(lVar7 + 0x10);
}



