// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.AtlasActorGroupCreator

// ============================================================
// RVA: 0x1455390 | Atlas.AtlasActorGroupCreator.CreateGroups
// ============================================================

/* WARNING: Possible PIC construction at 0x014554b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014554d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014554f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01455514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01455534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145555c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01455538) */
/* WARNING: Removing unreachable block (ram,0x01455518) */
/* WARNING: Removing unreachable block (ram,0x014554f8) */
/* WARNING: Removing unreachable block (ram,0x014554d8) */
/* WARNING: Removing unreachable block (ram,0x014554b8) */
/* WARNING: Removing unreachable block (ram,0x01455560) */

ulong Atlas_AtlasActorGroupCreator__CreateGroups(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb479f & 1) == 0) {
    func_0x00f78a20(0x3d43300);
    func_0x00f78a20(0x3d43308);
    func_0x00f78a20(0x3d43310);
    func_0x00f78a20(0x3d43318);
    func_0x00f78a20(0x3d43320);
    func_0x00f78a20(0x3d43328);
    func_0x00f78a20(0x3d43330);
    func_0x00f78a20(0x3d43338);
    func_0x00f78a20(0x3d43340);
    func_0x00f78a20(0x3d43348);
    func_0x00f78a20(0x3d43350);
    func_0x00f78a20(0x3d43358);
    bRam0000000003eb479f = 1;
  }
  lVar2 = lRam0000000003d43328;
  if (param_1 == 0) {
    auVar7 = func_0x00f78af4();
    *(long *)(auVar7._0_8_ + 0x18) = auVar7._8_8_;
    return auVar7._0_8_;
  }
  uVar6 = 0x3d43000;
  uStack_a0 = 0x3d43000;
  uStack_98 = 0x3d43000;
  uStack_90 = 0x3d43000;
  uStack_88 = 0x3d43000;
  uStack_80 = 0x3d43000;
  uStack_68 = 0x14554b8;
  uVar5 = 0x3eb5000;
  lVar4 = lRam0000000003d43328;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(lVar2 + 0x30))(param_1);
    if (lVar1 != 0) {
code_r0x0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    lVar4 = 0xc;
    /*Core.Actors.ActorGroup$$.ctor*/ func_0x0162eef4(lVar2,uVar6,0xc,0);
    uVar5 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),lVar2,uRam0000000003d39c48);
      goto code_r0x0171ed90;
    }
  }
  auVar7 = func_0x00f78af4();
  uStack_c0 = 0xc;
  puStack_a8 = &Core_Actors_ActorManager__TryAddToGroup_object_;
  ppuStack_d0 = &ppuStack_b0;
  if (auVar7._8_8_ == 0) {
    uVar3 = 0;
  }
  else {
    lStack_b8 = param_1;
    ppuStack_b0 = &puStack_70;
    if (auVar7._0_8_ == 0) {
      auVar7 = func_0x00f78af4();
      uStack_e0 = 0xc;
      puStack_c8 = &Core_Actors_ActorManager__TryRemoveAllFromGroup_object_;
      ppuStack_f0 = &ppuStack_d0;
      lStack_d8 = param_1;
      if (auVar7._0_8_ != 0) {
        lVar2 = (**(code **)**(undefined8 **)(auVar7._8_8_ + 0x30))();
        if (lVar2 != 0) {
          /*Core.Actors.ActorGroup$$RemoveAll*/ func_0x01630120(lVar2,0);
        }
        return (ulong)(lVar2 != 0);
      }
      auVar7 = func_0x00f78af4();
      uStack_100 = 0xc;
      puStack_e8 = &Core_Actors_ActorManager__TryRemoveFromGroup_object_;
      ppuStack_110 = &ppuStack_f0;
      lStack_f8 = param_1;
      if (auVar7._0_8_ != 0) {
        lVar2 = (**(code **)**(undefined8 **)(lVar4 + 0x30))();
        if (lVar2 != 0) {
          /*Core.Actors.ActorGroup$$MarkForRemove*/ func_0x016300bc(lVar2,auVar7._8_8_,0);
        }
        return (ulong)(lVar2 != 0);
      }
      auVar7 = func_0x00f78af4();
      lStack_150 = auVar7._8_8_;
      lVar4 = auVar7._0_8_;
      uStack_120 = 0xc;
      puStack_108 = &Core_Actors_ActorManager__TryRemoveGroup_object_;
      lStack_130 = lVar2;
      uStack_128 = uVar5;
      lStack_118 = param_1;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar4 != 0) {
        lStack_150 = (**(code **)**(undefined8 **)(lStack_150 + 0x30))(lVar4);
        if (-1 < (int)(uint)lStack_150) {
          if (*(long *)(lVar4 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar4 + 0x18),lStack_150,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)lStack_150 >> 0x1f);
      }
code_r0x0171ef30:
      auVar7 = func_0x00f78af4();
      uStack_170 = 0x3d43000;
      uStack_158 = 0x3eb5000;
      puStack_138 = &UnityEngine_AddressableAssets_Addressables__LoadAsset_object_;
      uStack_168 = uVar6;
      lStack_160 = lVar2;
      lStack_148 = lVar4;
      ppuStack_140 = &ppuStack_110;
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = (**(code **)**(undefined8 **)(auVar7._8_8_ + 0x30))(&uStack_190,auVar7._0_8_);
      extraout_x8[1] = uStack_188;
      *extraout_x8 = uStack_190;
      extraout_x8[3] = uStack_178;
      extraout_x8[2] = uStack_180;
      return uVar3;
    }
    lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8))();
    uVar3 = 0;
    if (lVar2 != 0) {
      /*Core.Actors.ActorGroup$$Add*/ func_0x01630058(lVar2,auVar7._8_8_,0);
      uVar3 = 1;
    }
  }
  return uVar3;
}



