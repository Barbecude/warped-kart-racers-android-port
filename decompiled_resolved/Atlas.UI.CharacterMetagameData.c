// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.CharacterMetagameData

// ============================================================
// RVA: 0x15411dc | Atlas.UI.CharacterMetagameData..ctor
// ============================================================

void Atlas_UI_CharacterMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(param_1,param_2,param_2,param_3,param_4,param_5,0);
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



// ============================================================
// RVA: 0x1541218 | Atlas.UI.CharacterMetagameData..ctor
// ============================================================

void Atlas_UI_CharacterMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((param_3 != (undefined8 *)0x0) && (param_3[4] != 0)) {
    /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(param_1,param_2,param_2,param_3[10],*(undefined8 *)(param_3[4] + 0x10),
                    param_3[0x11],0);
    *(undefined8 *)(param_1 + 0x60) = param_2;
    return;
  }
  auVar6 = func_0x00f78af4();
  uVar2 = auVar6._8_8_;
  lVar1 = auVar6._0_8_;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x20) != 0)) {
    /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(lVar1,uVar2,uVar2,*(undefined8 *)(param_4 + 0x50),
                    *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10),
                    *(undefined8 *)(param_4 + 0x88),0);
    *(undefined8 *)(lVar1 + 0x60) = uVar2;
    *(undefined1 *)(lVar1 + 0x68) = 1;
    *(int *)(lVar1 + 0x6c) = (int)param_3;
    return;
  }
  auVar6 = func_0x00f78af4();
  uVar2 = auVar6._8_8_;
  lVar1 = auVar6._0_8_;
  /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(lVar1,uVar2,uVar2);
  uVar3 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  *(undefined8 *)(lVar1 + 0x48) = param_3[1];
  *(undefined8 *)(lVar1 + 0x40) = uVar3;
  *(undefined8 *)(lVar1 + 0x58) = uVar5;
  *(undefined8 *)(lVar1 + 0x50) = uVar4;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  return;
}



// ============================================================
// RVA: 0x1541264 | Atlas.UI.CharacterMetagameData..ctor
// ============================================================

void Atlas_UI_CharacterMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((param_4 != 0) && (*(long *)(param_4 + 0x20) != 0)) {
    /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(param_1,param_2,param_2,*(undefined8 *)(param_4 + 0x50),
                    *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10),
                    *(undefined8 *)(param_4 + 0x88),0);
    *(undefined8 *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(int *)(param_1 + 0x6c) = (int)param_3;
    return;
  }
  auVar6 = func_0x00f78af4();
  uVar2 = auVar6._8_8_;
  lVar1 = auVar6._0_8_;
  /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(lVar1,uVar2,uVar2);
  uVar3 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  *(undefined8 *)(lVar1 + 0x48) = param_3[1];
  *(undefined8 *)(lVar1 + 0x40) = uVar3;
  *(undefined8 *)(lVar1 + 0x58) = uVar5;
  *(undefined8 *)(lVar1 + 0x50) = uVar4;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  return;
}



// ============================================================
// RVA: 0x15412cc | Atlas.UI.CharacterMetagameData..ctor
// ============================================================

void Atlas_UI_CharacterMetagameData___ctor(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(param_1,param_2,param_2);
  uVar1 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  *(undefined8 *)(param_1 + 0x48) = param_3[1];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



// ============================================================
// RVA: 0x1541310 | Atlas.UI.CharacterMetagameData..ctor
// ============================================================

void Atlas_UI_CharacterMetagameData___ctor(long param_1,undefined8 param_2)

{
  /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x014880c8(param_1,param_2,param_2,0);
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



// ============================================================
// RVA: 0x1541340 | Atlas.UI.CharacterMetagameData.get_IsSkin
// ============================================================

long Atlas_UI_CharacterMetagameData__get_IsSkin(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uStack_18 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x70);
    lVar1 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_18,0);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4f3f & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f3f = 1;
  }
  plVar3 = *(long **)(lVar1 + 0x38);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar3 + 300)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar3[0xd];
    }
  }
  auVar7 = func_0x00f78af4();
  uVar2 = auVar7._8_8_;
  lVar1 = auVar7._0_8_;
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(lVar1 + 0x48) = param_3[1];
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x58) = uVar6;
  *(undefined8 *)(lVar1 + 0x50) = uVar5;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  return lVar1;
}



// ============================================================
// RVA: 0x1541378 | Atlas.UI.CharacterMetagameData.HeadShotRef
// ============================================================

long Atlas_UI_CharacterMetagameData__HeadShotRef
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4f3f & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f3f = 1;
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar3 + 300)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar3[0xd];
    }
  }
  auVar7 = func_0x00f78af4();
  uVar2 = auVar7._8_8_;
  lVar1 = auVar7._0_8_;
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(lVar1 + 0x48) = param_3[1];
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x58) = uVar6;
  *(undefined8 *)(lVar1 + 0x50) = uVar5;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  return lVar1;
}



// ============================================================
// RVA: 0x15413f8 | Atlas.UI.CharacterMetagameData.UpdateDefinitionAndPlayer
// ============================================================

void Atlas_UI_CharacterMetagameData__UpdateDefinitionAndPlayer
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  *(undefined8 *)(param_1 + 0x48) = param_3[1];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x154140c | Atlas.UI.CharacterMetagameData.SkinDisplayName
// ============================================================

/* WARNING: Possible PIC construction at 0x01541434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01541438) */
/* WARNING: Removing unreachable block (ram,0x0154146c) */
/* WARNING: Removing unreachable block (ram,0x01541448) */
/* WARNING: Removing unreachable block (ram,0x01541450) */
/* WARNING: Removing unreachable block (ram,0x01541458) */

ulong Atlas_UI_CharacterMetagameData__SkinDisplayName(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong unaff_x19;
  ulong uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x60) == 0) ||
     (lVar1 = *(long *)(param_1 + 0x20), unaff_x19 = param_1, lVar1 == 0)) {
    lVar2 = func_0x00f78af4();
    puStack_28 = &Atlas_UI_CharacterMetagameData__PlayerName;
    uStack_38 = unaff_x19;
    uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar2 + 0x50),0);
    if ((uVar3 & 1) == 0) {
      return *(ulong *)(lVar2 + 0x50);
    }
    if ((*(long *)(lVar2 + 0x30) == 0) || (lVar1 = *(long *)(lVar2 + 0x20), lVar1 == 0)) {
      lVar1 = func_0x00f78af4();
      return (ulong)(*(int *)(lVar1 + 0x48) == 0);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x30) + 0x30);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80);
    puStack_28 = (undefined *)0x1541438;
  }
  uStack_38 = 0;
  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar1,uVar4,&uStack_38);
  return uStack_38;
}



// ============================================================
// RVA: 0x1541480 | Atlas.UI.CharacterMetagameData.PlayerName
// ============================================================

ulong Atlas_UI_CharacterMetagameData__PlayerName(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x50),0);
  if ((uVar1 & 1) == 0) {
    return *(ulong *)(param_1 + 0x50);
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30),
                    &stack0xffffffffffffffe8);
    return 0;
  }
  lVar2 = func_0x00f78af4();
  return (ulong)(*(int *)(lVar2 + 0x48) == 0);
}



// ============================================================
// RVA: 0x15414d8 | Atlas.UI.CharacterMetagameData.IsLocalHuman
// ============================================================

bool Atlas_UI_CharacterMetagameData__IsLocalHuman(long param_1)

{
  return *(int *)(param_1 + 0x48) == 0;
}



// ============================================================
// RVA: 0x15414e8 | Atlas.UI.CharacterMetagameData.GetCharacterRankSprite
// ============================================================

/* WARNING: Possible PIC construction at 0x01541620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01541788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01541538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0154178c) */
/* WARNING: Removing unreachable block (ram,0x0154179c) */
/* WARNING: Removing unreachable block (ram,0x015417a4) */
/* WARNING: Removing unreachable block (ram,0x015417ac) */
/* WARNING: Removing unreachable block (ram,0x01541624) */
/* WARNING: Removing unreachable block (ram,0x01541628) */
/* WARNING: Removing unreachable block (ram,0x01541644) */
/* WARNING: Removing unreachable block (ram,0x0154166c) */
/* WARNING: Removing unreachable block (ram,0x01541678) */
/* WARNING: Removing unreachable block (ram,0x01541680) */
/* WARNING: Removing unreachable block (ram,0x01541688) */
/* WARNING: Removing unreachable block (ram,0x015416cc) */
/* WARNING: Removing unreachable block (ram,0x01541698) */
/* WARNING: Removing unreachable block (ram,0x015416e8) */
/* WARNING: Removing unreachable block (ram,0x0154169c) */
/* WARNING: Removing unreachable block (ram,0x015416c0) */
/* WARNING: Removing unreachable block (ram,0x0154153c) */

ulong Atlas_UI_CharacterMetagameData__GetCharacterRankSprite(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  puVar2 = auStack_50;
  puVar10 = &stack0xfffffffffffffff0;
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4f40 & 1) == 0) {
    func_0x00f78a20(0x3d57360);
    bRam0000000003eb4f40 = 1;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    puVar11 = &UNK_0154153c;
    uVar6 = param_1;
    goto code_r0x015415d0;
  }
  uVar1 = *(uint *)(param_1 + 0x6c);
  uVar7 = (ulong)uVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(param_1 + 0x18),uRam0000000003d57360);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if ((param_2 & 1) == 0) {
      if (lVar4 != 0) {
        uVar5 = /*Atlas.Definitions.MetagameDefinition$$get_RankInfo*/ func_0x01494698(lVar4,0);
        /*Atlas.Definitions.MetagameDefinition.Rankings$$GetRankByIndex*/ func_0x0155f2a0(auStack_48,uVar5,uVar7,0);
        goto joined_r0x015415b0;
      }
    }
    else if (lVar4 != 0) {
      uVar5 = /*Atlas.Definitions.MetagameDefinition$$get_RankInfo*/ func_0x01494698(lVar4,0);
      /*Atlas.Definitions.MetagameDefinition.Rankings$$GetRankByIndex*/ func_0x0155f2a0(auStack_48,uVar5,uVar7,0);
      lStack_40 = lStack_38;
joined_r0x015415b0:
      if (lStack_40 != 0) {
        return *(ulong *)(lStack_40 + 0x18);
      }
    }
  }
  puVar11 = &Atlas_UI_CharacterMetagameData__GetCharacterRank;
  uVar6 = func_0x00f78af4();
  puVar2 = auStack_50;
code_r0x015415d0:
  do {
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = param_1;
    *(ulong *)(puVar2 + -0x20) = param_2;
    *(ulong *)(puVar2 + -0x18) = uVar7;
    *(undefined1 **)(puVar2 + -0x10) = puVar10;
    *(undefined **)(puVar2 + -8) = puVar11;
    if ((bRam0000000003eb4f41 & 1) == 0) {
      func_0x00f78a20(0x3d57360);
      func_0x00f78a20(0x3d280f8);
      bRam0000000003eb4f41 = 1;
    }
    uVar9 = *(ulong *)(uVar6 + 0x10);
    *(ulong *)(puVar2 + -0x80) = uVar9;
    *(ulong *)(puVar2 + -0x78) = uVar6;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x68) = &UNK_01541624;
    lVar4 = *(long *)(uVar6 + 0x60);
    uVar8 = uVar6;
    if (lVar4 != 0) {
      uVar8 = *(ulong *)(lVar4 + 0x18);
      *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(lVar4 + 0x70);
      iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar2 + -0x88,0);
      if (iVar3 == 0) {
        return uVar8;
      }
      uVar9 = uVar6;
      if (*(long *)(uVar6 + 0x60) != 0) {
        return *(ulong *)(*(long *)(uVar6 + 0x60) + 0x70);
      }
    }
    uVar7 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0xc0) = unaff_x22;
    *(ulong *)(puVar2 + -0xb8) = param_1;
    *(ulong *)(puVar2 + -0xb0) = uVar9;
    *(ulong *)(puVar2 + -0xa8) = uVar8;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
    *(undefined **)(puVar2 + -0x98) = &Atlas_UI_CharacterMetagameData__IsMaxRank;
    puVar10 = puVar2 + -0xa0;
    param_1 = 0x3eb4000;
    param_2 = 0x3d280f8;
    if ((bRam0000000003eb4f42 & 1) == 0) {
      func_0x00f78a20(0x3d280f8);
      bRam0000000003eb4f42 = 1;
    }
    puVar11 = &UNK_0154178c;
    puVar2 = puVar2 + -0xc0;
    uVar6 = uVar7;
  } while( true );
}



// ============================================================
// RVA: 0x15415d0 | Atlas.UI.CharacterMetagameData.GetCharacterRank
// ============================================================

/* WARNING: Possible PIC construction at 0x01541620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01541624) */
/* WARNING: Removing unreachable block (ram,0x01541628) */
/* WARNING: Removing unreachable block (ram,0x01541644) */
/* WARNING: Removing unreachable block (ram,0x0154166c) */
/* WARNING: Removing unreachable block (ram,0x01541678) */
/* WARNING: Removing unreachable block (ram,0x01541680) */
/* WARNING: Removing unreachable block (ram,0x01541688) */
/* WARNING: Removing unreachable block (ram,0x015416cc) */
/* WARNING: Removing unreachable block (ram,0x01541698) */
/* WARNING: Removing unreachable block (ram,0x015416e8) */
/* WARNING: Removing unreachable block (ram,0x0154169c) */
/* WARNING: Removing unreachable block (ram,0x015416c0) */

ulong Atlas_UI_CharacterMetagameData__GetCharacterRank(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4f41 & 1) == 0) {
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d280f8);
    bRam0000000003eb4f41 = 1;
  }
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = 0x1541624;
  lVar3 = *(long *)(param_1 + 0x60);
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar3 + 0x18);
    uStack_88 = *(undefined8 *)(lVar3 + 0x70);
    iVar1 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_88,0);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01541744;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x60) + 0x70);
    }
    return uVar4;
  }
code_r0x01541744:
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4f42 & 1) == 0) {
    func_0x00f78a20(0x3d280f8);
    bRam0000000003eb4f42 = 1;
  }
  iVar1 = Atlas_UI_CharacterMetagameData__GetCharacterRank(uVar2);
  if (((*(ushort *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return (ulong)(iVar1 == **(int **)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0xb8) + -1);
}



// ============================================================
// RVA: 0x15416ec | Atlas.UI.CharacterMetagameData.GetOwnerID
// ============================================================

ulong Atlas_UI_CharacterMetagameData__GetOwnerID(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar3 + 0x18);
    uStack_28 = *(undefined8 *)(lVar3 + 0x70);
    iVar1 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_28,0);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_01541744;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x60) + 0x70);
    }
    return uVar4;
  }
LAB_01541744:
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4f42 & 1) == 0) {
    func_0x00f78a20(0x3d280f8);
    bRam0000000003eb4f42 = 1;
  }
  iVar1 = Atlas_UI_CharacterMetagameData__GetCharacterRank(uVar2);
  if (((*(ushort *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return (ulong)(iVar1 == **(int **)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0xb8) + -1);
}



// ============================================================
// RVA: 0x1541748 | Atlas.UI.CharacterMetagameData.IsMaxRank
// ============================================================

bool Atlas_UI_CharacterMetagameData__IsMaxRank(undefined8 param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb4f42 & 1) == 0) {
    func_0x00f78a20(0x3d280f8);
    bRam0000000003eb4f42 = 1;
  }
  iVar1 = Atlas_UI_CharacterMetagameData__GetCharacterRank(param_1);
  if (((*(ushort *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return iVar1 == **(int **)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0xb8) + -1;
}



// ============================================================
// RVA: 0x15417d0 | Atlas.UI.CharacterMetagameData.GetRankCompletionPercentage
// ============================================================

ulong Atlas_UI_CharacterMetagameData__GetRankCompletionPercentage(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int aiStack_68 [6];
  
  if ((bRam0000000003eb4f43 & 1) == 0) {
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d280f8);
    bRam0000000003eb4f43 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  uVar1 = Atlas_UI_CharacterMetagameData__GetOwnerID(param_1);
  if (lVar7 != 0) {
    uVar2 = /*Atlas.Stats.UnlockManager$$GetXpForCharacter*/ func_0x0151e4f0(lVar7,uVar1,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar3 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(param_1 + 0x18),uRam0000000003d57360);
      iVar6 = 0;
      lVar7 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ uRam0000000003d280f8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ uRam0000000003d280f8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (**(int **)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ uRam0000000003d280f8 + 0xb8) <= iVar6) {
          return /*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ uRam0000000003d280f8;
        }
        if (lVar3 == 0) break;
        uVar1 = /*Atlas.Definitions.MetagameDefinition$$get_RankInfo*/ func_0x01494698(lVar3,0);
        /*Atlas.Definitions.MetagameDefinition.Rankings$$GetRankByIndex*/ func_0x0155f2a0(aiStack_68,uVar1,iVar6,0);
        lVar8 = (long)aiStack_68[0];
        uVar4 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)(long)((uVar2 & 0xffffffff) - (long)(int)lVar7) /
                                (float)(aiStack_68[0] - (int)lVar7),0);
        iVar6 = iVar6 + 1;
        lVar7 = lVar8;
        if ((long)(uVar2 & 0xffffffff) < lVar8) {
          return uVar4;
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4f44 & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f44 = 1;
  }
  plVar5 = *(long **)(lVar7 + 0x38);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar5[0x16];
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4f45 & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f45 = 1;
  }
  plVar5 = *(long **)(lVar7 + 0x38);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar5[0x17];
    }
  }
  lVar7 = func_0x00f78af4();
  if (*(long *)(lVar7 + 0x60) == 0) {
    lVar7 = func_0x00f78af4();
    return *(ulong *)(lVar7 + 0x68);
  }
  return (ulong)*(uint *)(*(long *)(lVar7 + 0x60) + 0xa8);
}



// ============================================================
// RVA: 0x1541918 | Atlas.UI.CharacterMetagameData.get_CharacterSelectGridPos
// ============================================================

ulong Atlas_UI_CharacterMetagameData__get_CharacterSelectGridPos(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000003eb4f44 & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f44 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar2[0x16];
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4f45 & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f45 = 1;
  }
  plVar2 = *(long **)(lVar1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar2[0x17];
    }
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x60) == 0) {
    lVar1 = func_0x00f78af4();
    return *(ulong *)(lVar1 + 0x68);
  }
  return (ulong)*(uint *)(*(long *)(lVar1 + 0x60) + 0xa8);
}



// ============================================================
// RVA: 0x154199c | Atlas.UI.CharacterMetagameData.get_CharacterRankGridPos
// ============================================================

ulong Atlas_UI_CharacterMetagameData__get_CharacterRankGridPos(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000003eb4f45 & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f45 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar2[0x17];
    }
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x60) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar1 + 0x60) + 0xa8);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x68);
}



// ============================================================
// RVA: 0x1541a20 | Atlas.UI.CharacterMetagameData.get_FmodId
// ============================================================

ulong Atlas_UI_CharacterMetagameData__get_FmodId(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    return (ulong)*(uint *)(*(long *)(param_1 + 0x60) + 0xa8);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x68);
}



