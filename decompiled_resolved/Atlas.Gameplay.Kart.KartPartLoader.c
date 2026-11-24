// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPartLoader

// ============================================================
// RVA: 0x15c9b14 | Atlas.Gameplay.Kart.KartPartLoader.IsAnyPartLoading
// ============================================================

ulong Atlas_Gameplay_Kart_KartPartLoader__IsAnyPartLoading
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar7 = 0;
  uVar5 = 1;
  lVar6 = 0x20;
  while (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_015c9b8c;
    uVar2 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar4 + lVar6,0);
    if ((uVar2 & 1) != 0) {
      return uVar5;
    }
    bVar1 = uVar7 < 6;
    uVar7 = uVar7 + 1;
    uVar5 = (ulong)bVar1;
    lVar6 = lVar6 + 4;
    if (uVar7 == 7) {
      return uVar5;
    }
  }
  func_0x00f78af4();
LAB_015c9b8c:
  uVar3 = func_0x00f78b24();
  auVar8 = func_0x00f78ac0(uVar3,0);
  uVar7 = auVar8._0_8_;
  *(undefined8 *)(uVar7 + 0x10) = param_3;
  *(long *)(uVar7 + 0x18) = auVar8._8_8_;
  return uVar7;
}



// ============================================================
// RVA: 0x15d0c74 | Atlas.Gameplay.Kart.KartPartLoader.add_PartLoaded
// ============================================================

long Atlas_Gameplay_Kart_KartPartLoader__add_PartLoaded(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5352 & 1) == 0) {
    func_0x00f78a20(0x3d27d10);
    bRam0000000003eb5352 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x50);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ lRam0000000003d27d10))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x50),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5353 & 1) == 0) {
    func_0x00f78a20(0x3d27d10);
    bRam0000000003eb5353 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x50);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ lRam0000000003d27d10))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x10);
}



// ============================================================
// RVA: 0x15d0d14 | Atlas.Gameplay.Kart.KartPartLoader.remove_PartLoaded
// ============================================================

long Atlas_Gameplay_Kart_KartPartLoader__remove_PartLoaded(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb5353 & 1) == 0) {
    func_0x00f78a20(0x3d27d10);
    bRam0000000003eb5353 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ lRam0000000003d27d10))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x50),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return *(long *)(lVar4 + 0x10);
}



// ============================================================
// RVA: 0x15d0db4 | Atlas.Gameplay.Kart.KartPartLoader.get_KartComposite
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPartLoader__get_KartComposite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15d0dbc | Atlas.Gameplay.Kart.KartPartLoader.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d0f2c | Atlas.Gameplay.Kart.KartPartLoader.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d10cc | Atlas.Gameplay.Kart.KartPartLoader.ResetKart
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d1218 | Atlas.Gameplay.Kart.KartPartLoader.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d13d8 | Atlas.Gameplay.Kart.KartPartLoader.ApplyLoadedPart
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d164c | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadKart
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d16ac | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadCharacter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d170c | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadGlider
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d176c | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadWheels
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d1770 | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadWheelParts
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d1810 | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadAntenna
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d1870 | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadBoost
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d18d0 | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadPartIntoSlot
// ============================================================

/* WARNING: Possible PIC construction at 0x015d1a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015d1a30) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */

ulong Atlas_Gameplay_Kart_KartPartLoader__RequestLoadPartIntoSlot
                (long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000003eb535d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb535d = 1;
  }
  if (param_4 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
    if (lVar5 != 0) {
      if (6 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x50) = uVar3;
        goto LAB_015d1960;
      }
      goto LAB_015d1a88;
    }
LAB_015d1a84:
    func_0x00f78af4();
  }
  else {
LAB_015d1960:
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) goto LAB_015d1a84;
    if (param_4 < *(uint *)(lVar5 + 0x18)) {
      lVar6 = (long)(int)param_4;
      uVar3 = *(undefined8 *)(lVar5 + lVar6 * 8 + 0x20);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar3,param_2,0);
      if ((uVar1 & 1) != 0) {
        return (ulong)(uVar1 ^ 1);
      }
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= param_4) goto LAB_015d1a88;
        iVar2 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar5 + lVar6 * 4 + 0x20,0);
        if (iVar2 == 0) {
LAB_015d1a04:
          lVar5 = *(long *)(param_1 + 0x30);
          if (lVar5 != 0) {
            if (param_4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + lVar6 * 8 + 0x20) = param_2;
              goto code_r0x015d1a94;
            }
            goto LAB_015d1a88;
          }
        }
        else {
          lVar5 = *(long *)(param_1 + 0x38);
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) <= param_4) goto LAB_015d1a88;
            if (*(long *)(param_1 + 0x20) != 0) {
              /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(param_1 + 0x20),*(undefined4 *)(lVar5 + lVar6 * 4 + 0x20),0)
              ;
              goto LAB_015d1a04;
            }
          }
        }
      }
      goto LAB_015d1a84;
    }
  }
LAB_015d1a88:
  uVar3 = func_0x00f78b24();
  param_4 = func_0x00f78ac0(uVar3,0);
code_r0x015d1a94:
  if ((bRam0000000003eb535e & 1) == 0) {
    func_0x00f78a20(0x3d68fe8);
    func_0x00f78a20(0x3d6a910);
    func_0x00f78a20(0x3d6d468);
    func_0x00f78a20(0x3d69818);
    func_0x00f78a20(0x3d6efb0);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d76438);
    bRam0000000003eb535e = 1;
  }
  if (param_4 < 7) {
    puVar4 = *(ulong **)(&UNK_03a5f250 + (long)(int)param_4 * 8);
  }
  else {
    puVar4 = (ulong *)0x3d6ba50;
  }
  return *puVar4;
}



// ============================================================
// RVA: 0x15d1a94 | Atlas.Gameplay.Kart.KartPartLoader.GetBucketNameForPart
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart(uint param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000003eb535e & 1) == 0) {
    func_0x00f78a20(0x3d68fe8);
    func_0x00f78a20(0x3d6a910);
    func_0x00f78a20(0x3d6d468);
    func_0x00f78a20(0x3d69818);
    func_0x00f78a20(0x3d6efb0);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d76438);
    bRam0000000003eb535e = 1;
  }
  if (param_1 < 7) {
    puVar1 = *(undefined8 **)(&UNK_03a5f250 + (long)(int)param_1 * 8);
  }
  else {
    puVar1 = (undefined8 *)0x3d6ba50;
  }
  return *puVar1;
}



// ============================================================
// RVA: 0x15d1b3c | Atlas.Gameplay.Kart.KartPartLoader..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_KartPartLoader___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5361 & 1) == 0) {
    func_0x00f78a20(0x3d1ed38);
    func_0x00f78a20(0x3d1ef00);
    bRam0000000003eb5361 = 1;
  }
  uVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,7);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x00f78a34(/*Core.Assets.AssetManagerHandle[]_TypeInfo*/ uRam0000000003d1ed38,7);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78a34(/*Core.Assets.AssetManagerHandle[]_TypeInfo*/ uRam0000000003d1ed38,7);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x1871bfc | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadGenericPart<AntennaDefinition>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1871bfc | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadGenericPart<BoostDefinition>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1871bfc | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadGenericPart<CharacterDefinition>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1871bfc | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadGenericPart<GliderDefinition>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1871bfc | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadGenericPart<KartDefinition>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1871bfc | Atlas.Gameplay.Kart.KartPartLoader.RequestLoadGenericPart<object>
// ============================================================
// [DECOMPILE_FAILED]

