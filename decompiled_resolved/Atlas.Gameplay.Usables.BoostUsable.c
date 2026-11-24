// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.BoostUsable

// ============================================================
// RVA: 0x153e17c | Atlas.Gameplay.Usables.BoostUsable.get_BoostUsableDefinition
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableDefinition
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4f1d & 1) == 0) {
    func_0x00f78a20(0x3d20288);
    bRam0000000003eb4f1d = 1;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    lVar2 = **(long **)(param_1 + 0x30);
    if ((*(byte *)(lVar2 + 300) < *(byte *)(/*Atlas.Definitions.BoostUsableDefinition_TypeInfo*/ lRam0000000003d20288 + 300)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.BoostUsableDefinition_TypeInfo*/ lRam0000000003d20288 + 300) * 8 + -8) !=
        /*Atlas.Definitions.BoostUsableDefinition_TypeInfo*/ lRam0000000003d20288)) {
      lVar2 = func_0x00f78e5c();
      if ((bRam0000000003eb4f1e & 1) == 0) {
        func_0x00f78a20(0x3d20280);
        bRam0000000003eb4f1e = 1;
      }
      if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
        lVar2 = **(long **)(lVar2 + 0x48);
        if ((*(byte *)(lVar2 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.BoostUsableBehaviour_TypeInfo*/ lRam0000000003d20280 + 300)) ||
           (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.BoostUsableBehaviour_TypeInfo*/ lRam0000000003d20280 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Usables.BoostUsableBehaviour_TypeInfo*/ lRam0000000003d20280)) {
          auVar3 = func_0x00f78e5c();
          if ((bRam0000000003eb4f1f & 1) == 0) {
            func_0x00f78a20(0x3d1ff30);
            func_0x00f78a20(0x3d79168);
            bRam0000000003eb4f1f = 1;
          }
          /*Atlas.Gameplay.Usables.Usable$$Init*/ func_0x01523840(auVar3._0_8_,auVar3._8_8_,param_3,param_4,param_5,0);
          uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
          /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,/*STR('event:/Weapons/Boost')*/ uRam0000000003d79168,1,0,0);
          *(undefined8 *)(auVar3._0_8_ + 0xc0) = uVar1;
          return;
        }
      }
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x153e1f8 | Atlas.Gameplay.Usables.BoostUsable.get_BoostUsableBehaviour
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4f1e & 1) == 0) {
    func_0x00f78a20(0x3d20280);
    bRam0000000003eb4f1e = 1;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    lVar2 = **(long **)(param_1 + 0x48);
    if ((*(byte *)(lVar2 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.BoostUsableBehaviour_TypeInfo*/ lRam0000000003d20280 + 300)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.BoostUsableBehaviour_TypeInfo*/ lRam0000000003d20280 + 300) * 8 + -8) !=
        /*Atlas.Gameplay.Usables.BoostUsableBehaviour_TypeInfo*/ lRam0000000003d20280)) {
      auVar3 = func_0x00f78e5c();
      if ((bRam0000000003eb4f1f & 1) == 0) {
        func_0x00f78a20(0x3d1ff30);
        func_0x00f78a20(0x3d79168);
        bRam0000000003eb4f1f = 1;
      }
      /*Atlas.Gameplay.Usables.Usable$$Init*/ func_0x01523840(auVar3._0_8_,auVar3._8_8_,param_3,param_4,param_5,0);
      uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
      /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,/*STR('event:/Weapons/Boost')*/ uRam0000000003d79168,1,0,0);
      *(undefined8 *)(auVar3._0_8_ + 0xc0) = uVar1;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x153e274 | Atlas.Gameplay.Usables.BoostUsable.Init
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f1f & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d79168);
    bRam0000000003eb4f1f = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$Init*/ func_0x01523840(param_1,param_2,param_3,param_4,param_5,0);
  uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
  /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,/*STR('event:/Weapons/Boost')*/ uRam0000000003d79168,1,0,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  return;
}



// ============================================================
// RVA: 0x153e334 | Atlas.Gameplay.Usables.BoostUsable.DeInit
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  /*Atlas.Gameplay.Usables.Usable$$DeInit*/ func_0x01523854(param_1,0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(param_1 + 0xc0),0);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return;
}



// ============================================================
// RVA: 0x153e384 | Atlas.Gameplay.Usables.BoostUsable.OnTearDownParamsInternal
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable__OnTearDownParamsInternal(long param_1)

{
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// ============================================================
// RVA: 0x153e394 | Atlas.Gameplay.Usables.BoostUsable.OnExitPool
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0153e418) */
/* WARNING: Removing unreachable block (ram,0x0153e420) */
/* WARNING: Removing unreachable block (ram,0x0153e434) */
/* WARNING: Removing unreachable block (ram,0x0153e448) */
/* WARNING: Removing unreachable block (ram,0x0153e45c) */
/* WARNING: Removing unreachable block (ram,0x0153e474) */

undefined8
Atlas_Gameplay_Usables_BoostUsable__OnExitPool
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4f20 & 1) == 0) {
    func_0x00f78a20(0x3d697c0);
    bRam0000000003eb4f20 = 1;
  }
  auVar3 = /*Atlas.Gameplay.Usables.Usable$$OnExitPool*/ func_0x015239c4(param_1,param_2,param_3,0,0,0,0);
  lVar1 = func_0x00f78af4(auVar3._0_8_,auVar3._8_8_);
  uVar2 = /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$SetInHandVFX*/ func_0x0153ec78();
  *(undefined1 *)(lVar1 + 0x74) = 0;
  *(undefined4 *)(lVar1 + 0x70) = 0;
  return uVar2;
}



// ============================================================
// RVA: 0x153e3a4 | Atlas.Gameplay.Usables.BoostUsable.OnExitPool
// ============================================================

long Atlas_Gameplay_Usables_BoostUsable__OnExitPool
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4f20 & 1) == 0) {
    func_0x00f78a20(0x3d697c0);
    bRam0000000003eb4f20 = 1;
  }
  auVar4 = /*Atlas.Gameplay.Usables.Usable$$OnExitPool*/ func_0x015239c4(param_1,param_2,param_3,param_4,param_5,param_6,0);
  if ((param_4 != 0) && (lVar3 = *(long *)(param_4 + 0x70), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar3 + 0x90);
    *(long *)(param_1 + 0xe0) = lVar3;
    auVar5 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(param_1);
    lVar3 = auVar5._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar5._8_8_;
    auVar4 = auVar4 << 0x40;
    if (lVar3 != 0) {
      auVar4 = /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$SetInHandVFX*/ func_0x0153ec78();
      *(undefined1 *)(lVar3 + 0x74) = 0;
      *(undefined4 *)(lVar3 + 0x70) = 0;
      if (param_2 != 0) {
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 100);
        auVar6 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(param_1);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar6._8_8_;
        auVar4 = auVar5 << 0x40;
        if (auVar6._0_8_ != 0) {
          uVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(auVar6._0_8_,0);
          *(ulong *)(param_1 + 200) = uVar1;
          lVar3 = *(long *)(param_1 + 0xc0);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar1;
          auVar4 = auVar6 << 0x40;
          if (lVar3 != 0) {
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x3f800000,lVar3,uVar1,/*STR('Boost')*/ uRam0000000003d697c0,0);
            return lVar3;
          }
        }
      }
    }
  }
  lVar3 = func_0x00f78af4(auVar4._0_8_,auVar4._8_8_);
  lVar2 = /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$SetInHandVFX*/ func_0x0153ec78();
  *(undefined1 *)(lVar3 + 0x74) = 0;
  *(undefined4 *)(lVar3 + 0x70) = 0;
  return lVar2;
}



// ============================================================
// RVA: 0x153e4cc | Atlas.Gameplay.Usables.BoostUsable.OnEnterPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_BoostUsable__OnEnterPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int extraout_w1;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(param_1 + 0x6c),lVar3,0);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar3,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                        *(undefined4 *)(param_1 + 0x88),lVar3,0);
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if (iVar1 != 0) {
            if (lVar3 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar3 + 0x46) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            *(undefined1 *)(lVar3 + 0x44) = 0;
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_1 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar9 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar9;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar9 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar9 = *(long *)(lVar9 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
    if (lVar10 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_b0 = lVar9;
  uStack_a8 = param_3;
  lStack_a0 = lVar3;
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar6;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_b8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_b8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_c0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_100,lVar3,uRam0000000003d3d2e8);
          bVar8 = false;
          while (uVar5 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_100,uRam0000000003d334f0), uVar4 = uStack_f0,
                (uVar5 & 1) != 0) {
            uStack_128 = uStack_e0;
            uStack_130 = uStack_e8;
            uStack_118 = uStack_d0;
            uStack_120 = uStack_d8;
            uStack_110 = uStack_c8;
            uStack_138 = uStack_f0;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_b8,uVar6,0);
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
              bVar8 = true;
            }
            uStack_138 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c0,uVar4,0);
            if (!bVar8 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x153e4e0 | Atlas.Gameplay.Usables.BoostUsable.DeSpawn
// ============================================================

/* WARNING: Possible PIC construction at 0x0153e65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153e6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145aa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ae70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145ae74) */
/* WARNING: Removing unreachable block (ram,0x0145ae78) */
/* WARNING: Removing unreachable block (ram,0x0145ace8) */
/* WARNING: Removing unreachable block (ram,0x0145acec) */
/* WARNING: Removing unreachable block (ram,0x0145ac58) */
/* WARNING: Removing unreachable block (ram,0x0145ac60) */
/* WARNING: Removing unreachable block (ram,0x0145ac74) */
/* WARNING: Removing unreachable block (ram,0x0145ac7c) */
/* WARNING: Removing unreachable block (ram,0x0145ac84) */
/* WARNING: Removing unreachable block (ram,0x0145aa58) */
/* WARNING: Removing unreachable block (ram,0x0145aa5c) */
/* WARNING: Removing unreachable block (ram,0x0145a8b4) */
/* WARNING: Removing unreachable block (ram,0x0145a8b8) */
/* WARNING: Removing unreachable block (ram,0x0145a6fc) */
/* WARNING: Removing unreachable block (ram,0x0145a700) */
/* WARNING: Removing unreachable block (ram,0x0145a54c) */
/* WARNING: Removing unreachable block (ram,0x0145a550) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145a398) */
/* WARNING: Removing unreachable block (ram,0x0145a39c) */
/* WARNING: Removing unreachable block (ram,0x0145a3c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6bc) */
/* WARNING: Removing unreachable block (ram,0x0153e6c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6e0) */
/* WARNING: Removing unreachable block (ram,0x0153e6f8) */
/* WARNING: Removing unreachable block (ram,0x0153e710) */
/* WARNING: Removing unreachable block (ram,0x0153e728) */
/* WARNING: Removing unreachable block (ram,0x0153e73c) */
/* WARNING: Removing unreachable block (ram,0x0153e74c) */
/* WARNING: Removing unreachable block (ram,0x0153e75c) */
/* WARNING: Removing unreachable block (ram,0x0153e760) */
/* WARNING: Removing unreachable block (ram,0x0153e784) */
/* WARNING: Removing unreachable block (ram,0x0153e78c) */
/* WARNING: Removing unreachable block (ram,0x0153e794) */
/* WARNING: Removing unreachable block (ram,0x0153e7a4) */
/* WARNING: Removing unreachable block (ram,0x0153e7ac) */
/* WARNING: Removing unreachable block (ram,0x0153e7c8) */
/* WARNING: Removing unreachable block (ram,0x0153e7e4) */
/* WARNING: Removing unreachable block (ram,0x0153e7e8) */
/* WARNING: Removing unreachable block (ram,0x0153e7f4) */
/* WARNING: Removing unreachable block (ram,0x0153e7f8) */
/* WARNING: Removing unreachable block (ram,0x0153e80c) */
/* WARNING: Removing unreachable block (ram,0x0153e814) */
/* WARNING: Removing unreachable block (ram,0x0153e818) */
/* WARNING: Removing unreachable block (ram,0x0153e828) */
/* WARNING: Removing unreachable block (ram,0x0153e82c) */
/* WARNING: Removing unreachable block (ram,0x0153e9a8) */
/* WARNING: Removing unreachable block (ram,0x0153e9c4) */
/* WARNING: Removing unreachable block (ram,0x0153e9d8) */
/* WARNING: Removing unreachable block (ram,0x0153ea28) */
/* WARNING: Removing unreachable block (ram,0x0153e9e0) */
/* WARNING: Removing unreachable block (ram,0x0153ea1c) */
/* WARNING: Removing unreachable block (ram,0x0153ea04) */
/* WARNING: Removing unreachable block (ram,0x0145a258) */
/* WARNING: Removing unreachable block (ram,0x0145a28c) */
/* WARNING: Removing unreachable block (ram,0x0145a2d0) */
/* WARNING: Removing unreachable block (ram,0x0145a424) */
/* WARNING: Removing unreachable block (ram,0x0145a458) */
/* WARNING: Removing unreachable block (ram,0x0145a49c) */
/* WARNING: Removing unreachable block (ram,0x0145a5c4) */
/* WARNING: Removing unreachable block (ram,0x0145a5f8) */
/* WARNING: Removing unreachable block (ram,0x0145a63c) */
/* WARNING: Removing unreachable block (ram,0x0145a774) */
/* WARNING: Removing unreachable block (ram,0x0145a7a8) */
/* WARNING: Removing unreachable block (ram,0x0145a7ec) */
/* WARNING: Removing unreachable block (ram,0x0145a930) */
/* WARNING: Removing unreachable block (ram,0x0145a964) */
/* WARNING: Removing unreachable block (ram,0x0145a9a8) */
/* WARNING: Removing unreachable block (ram,0x0145aad0) */
/* WARNING: Removing unreachable block (ram,0x0145aaf8) */
/* WARNING: Removing unreachable block (ram,0x0145ab0c) */
/* WARNING: Removing unreachable block (ram,0x0145aba0) */
/* WARNING: Removing unreachable block (ram,0x0145abd8) */
/* WARNING: Removing unreachable block (ram,0x0145ac1c) */
/* WARNING: Removing unreachable block (ram,0x0145ac20) */
/* WARNING: Removing unreachable block (ram,0x0145ac30) */
/* WARNING: Removing unreachable block (ram,0x0145ad60) */
/* WARNING: Removing unreachable block (ram,0x0145ac34) */
/* WARNING: Removing unreachable block (ram,0x0145ad44) */
/* WARNING: Removing unreachable block (ram,0x0145ac44) */
/* WARNING: Removing unreachable block (ram,0x0145ad64) */
/* WARNING: Removing unreachable block (ram,0x0145ad9c) */
/* WARNING: Removing unreachable block (ram,0x0145ade0) */
/* WARNING: Removing unreachable block (ram,0x0145aed4) */
/* WARNING: Removing unreachable block (ram,0x0145ade8) */
/* WARNING: Removing unreachable block (ram,0x0145adfc) */
/* WARNING: Removing unreachable block (ram,0x0145ae04) */
/* WARNING: Removing unreachable block (ram,0x0145ae0c) */
/* WARNING: Removing unreachable block (ram,0x0145aef4) */
/* WARNING: Removing unreachable block (ram,0x0145af28) */
/* WARNING: Removing unreachable block (ram,0x0145af6c) */
/* WARNING: Removing unreachable block (ram,0x0145b0a4) */
/* WARNING: Removing unreachable block (ram,0x0145b0d8) */
/* WARNING: Removing unreachable block (ram,0x0145b11c) */
/* WARNING: Removing unreachable block (ram,0x0145b254) */
/* WARNING: Removing unreachable block (ram,0x0145b290) */
/* WARNING: Removing unreachable block (ram,0x0145b2d4) */
/* WARNING: Removing unreachable block (ram,0x0145b2dc) */
/* WARNING: Removing unreachable block (ram,0x0145b414) */
/* WARNING: Removing unreachable block (ram,0x0145b444) */
/* WARNING: Removing unreachable block (ram,0x0145b458) */
/* WARNING: Removing unreachable block (ram,0x0145b558) */
/* WARNING: Removing unreachable block (ram,0x0145b588) */
/* WARNING: Removing unreachable block (ram,0x0145b5cc) */
/* WARNING: Removing unreachable block (ram,0x0145b5d4) */
/* WARNING: Removing unreachable block (ram,0x0145b6bc) */
/* WARNING: Removing unreachable block (ram,0x0145b5dc) */
/* WARNING: Removing unreachable block (ram,0x0145b5f0) */
/* WARNING: Removing unreachable block (ram,0x0145b6d8) */
/* WARNING: Removing unreachable block (ram,0x0145b6ec) */
/* WARNING: Removing unreachable block (ram,0x0145b724) */
/* WARNING: Removing unreachable block (ram,0x0145b738) */
/* WARNING: Removing unreachable block (ram,0x0145b75c) */
/* WARNING: Removing unreachable block (ram,0x0145b764) */
/* WARNING: Removing unreachable block (ram,0x0145b774) */
/* WARNING: Removing unreachable block (ram,0x0145b784) */
/* WARNING: Removing unreachable block (ram,0x0145b790) */
/* WARNING: Removing unreachable block (ram,0x0145b798) */
/* WARNING: Removing unreachable block (ram,0x0145b79c) */
/* WARNING: Removing unreachable block (ram,0x0145b7b0) */
/* WARNING: Removing unreachable block (ram,0x0145b7b4) */
/* WARNING: Removing unreachable block (ram,0x0145b7c4) */
/* WARNING: Removing unreachable block (ram,0x0145b7cc) */
/* WARNING: Removing unreachable block (ram,0x0145b7d8) */
/* WARNING: Removing unreachable block (ram,0x0145b7e0) */
/* WARNING: Removing unreachable block (ram,0x0145b82c) */
/* WARNING: Removing unreachable block (ram,0x0145b834) */
/* WARNING: Removing unreachable block (ram,0x0145b83c) */
/* WARNING: Removing unreachable block (ram,0x0145b844) */
/* WARNING: Removing unreachable block (ram,0x0145b848) */
/* WARNING: Removing unreachable block (ram,0x0145b84c) */
/* WARNING: Removing unreachable block (ram,0x0145b850) */
/* WARNING: Removing unreachable block (ram,0x0145b85c) */
/* WARNING: Removing unreachable block (ram,0x0145b864) */
/* WARNING: Removing unreachable block (ram,0x0145b870) */
/* WARNING: Removing unreachable block (ram,0x0145b874) */
/* WARNING: Removing unreachable block (ram,0x0145b878) */
/* WARNING: Removing unreachable block (ram,0x0145b87c) */
/* WARNING: Removing unreachable block (ram,0x0145b888) */
/* WARNING: Removing unreachable block (ram,0x0145b890) */
/* WARNING: Removing unreachable block (ram,0x0145b894) */
/* WARNING: Removing unreachable block (ram,0x0145b92c) */
/* WARNING: Removing unreachable block (ram,0x0145b930) */
/* WARNING: Removing unreachable block (ram,0x0145b96c) */
/* WARNING: Removing unreachable block (ram,0x0145b9b0) */
/* WARNING: Removing unreachable block (ram,0x0145b9b4) */
/* WARNING: Removing unreachable block (ram,0x0145b9cc) */
/* WARNING: Removing unreachable block (ram,0x0145bac4) */
/* WARNING: Removing unreachable block (ram,0x0145b9d8) */
/* WARNING: Removing unreachable block (ram,0x0145b9ec) */
/* WARNING: Removing unreachable block (ram,0x0145b9f4) */
/* WARNING: Removing unreachable block (ram,0x0145b9fc) */
/* WARNING: Removing unreachable block (ram,0x0145bae0) */
/* WARNING: Removing unreachable block (ram,0x0145bb04) */
/* WARNING: Removing unreachable block (ram,0x0145bb18) */
/* WARNING: Removing unreachable block (ram,0x0145bb88) */
/* WARNING: Removing unreachable block (ram,0x0145bb20) */
/* WARNING: Removing unreachable block (ram,0x0145bb38) */
/* WARNING: Removing unreachable block (ram,0x0145bb98) */
/* WARNING: Removing unreachable block (ram,0x0145bba4) */
/* WARNING: Removing unreachable block (ram,0x0145bb40) */
/* WARNING: Removing unreachable block (ram,0x0145bbac) */
/* WARNING: Removing unreachable block (ram,0x0145bbd4) */
/* WARNING: Removing unreachable block (ram,0x0145bbe8) */
/* WARNING: Removing unreachable block (ram,0x0145bbec) */
/* WARNING: Removing unreachable block (ram,0x0145bc6c) */
/* WARNING: Removing unreachable block (ram,0x0145bbfc) */
/* WARNING: Removing unreachable block (ram,0x0145bc14) */
/* WARNING: Removing unreachable block (ram,0x0145bc1c) */
/* WARNING: Removing unreachable block (ram,0x0145bc24) */
/* WARNING: Removing unreachable block (ram,0x0145bc2c) */
/* WARNING: Removing unreachable block (ram,0x0145bc7c) */
/* WARNING: Removing unreachable block (ram,0x0145bcb0) */
/* WARNING: Removing unreachable block (ram,0x0145bcf4) */
/* WARNING: Removing unreachable block (ram,0x0145bcf8) */
/* WARNING: Removing unreachable block (ram,0x0145bd10) */
/* WARNING: Removing unreachable block (ram,0x0145be08) */
/* WARNING: Removing unreachable block (ram,0x0145bd1c) */
/* WARNING: Removing unreachable block (ram,0x0145bd30) */
/* WARNING: Removing unreachable block (ram,0x0145bd38) */
/* WARNING: Removing unreachable block (ram,0x0145bd40) */
/* WARNING: Removing unreachable block (ram,0x0145be24) */
/* WARNING: Removing unreachable block (ram,0x0145be58) */
/* WARNING: Removing unreachable block (ram,0x0145be9c) */
/* WARNING: Removing unreachable block (ram,0x0145bea0) */
/* WARNING: Removing unreachable block (ram,0x0145beb8) */
/* WARNING: Removing unreachable block (ram,0x0145bfb0) */
/* WARNING: Removing unreachable block (ram,0x0145bec4) */
/* WARNING: Removing unreachable block (ram,0x0145bed8) */
/* WARNING: Removing unreachable block (ram,0x0145bee0) */
/* WARNING: Removing unreachable block (ram,0x0145bee8) */
/* WARNING: Removing unreachable block (ram,0x0145bef0) */
/* WARNING: Removing unreachable block (ram,0x0145bd48) */
/* WARNING: Removing unreachable block (ram,0x0145bc30) */
/* WARNING: Removing unreachable block (ram,0x0145bb48) */
/* WARNING: Removing unreachable block (ram,0x0145ba04) */
/* WARNING: Removing unreachable block (ram,0x0145b898) */
/* WARNING: Removing unreachable block (ram,0x0145b740) */
/* WARNING: Removing unreachable block (ram,0x0145b6e4) */
/* WARNING: Removing unreachable block (ram,0x0145b5f8) */
/* WARNING: Removing unreachable block (ram,0x0145b5fc) */
/* WARNING: Removing unreachable block (ram,0x0145b45c) */
/* WARNING: Removing unreachable block (ram,0x0145b46c) */
/* WARNING: Removing unreachable block (ram,0x0145b480) */
/* WARNING: Removing unreachable block (ram,0x0145b484) */
/* WARNING: Removing unreachable block (ram,0x0145b488) */
/* WARNING: Removing unreachable block (ram,0x0145b48c) */
/* WARNING: Removing unreachable block (ram,0x0145b490) */
/* WARNING: Removing unreachable block (ram,0x0145b494) */
/* WARNING: Removing unreachable block (ram,0x0145b4b4) */
/* WARNING: Removing unreachable block (ram,0x0145b4bc) */
/* WARNING: Removing unreachable block (ram,0x0145b4c4) */
/* WARNING: Removing unreachable block (ram,0x0145b544) */
/* WARNING: Removing unreachable block (ram,0x0145b4e8) */
/* WARNING: Removing unreachable block (ram,0x0145b4f4) */
/* WARNING: Removing unreachable block (ram,0x0145b4fc) */
/* WARNING: Removing unreachable block (ram,0x0145b504) */
/* WARNING: Removing unreachable block (ram,0x0145b2e0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f8) */
/* WARNING: Removing unreachable block (ram,0x0145b2fc) */
/* WARNING: Removing unreachable block (ram,0x0145b300) */
/* WARNING: Removing unreachable block (ram,0x0145b318) */
/* WARNING: Removing unreachable block (ram,0x0145b3f0) */
/* WARNING: Removing unreachable block (ram,0x0145b3f4) */
/* WARNING: Removing unreachable block (ram,0x0145b324) */
/* WARNING: Removing unreachable block (ram,0x0145b338) */
/* WARNING: Removing unreachable block (ram,0x0145b340) */
/* WARNING: Removing unreachable block (ram,0x0145b348) */
/* WARNING: Removing unreachable block (ram,0x0145b120) */
/* WARNING: Removing unreachable block (ram,0x0145b130) */
/* WARNING: Removing unreachable block (ram,0x0145b148) */
/* WARNING: Removing unreachable block (ram,0x0145b238) */
/* WARNING: Removing unreachable block (ram,0x0145b154) */
/* WARNING: Removing unreachable block (ram,0x0145b168) */
/* WARNING: Removing unreachable block (ram,0x0145b170) */
/* WARNING: Removing unreachable block (ram,0x0145b178) */
/* WARNING: Removing unreachable block (ram,0x0145af70) */
/* WARNING: Removing unreachable block (ram,0x0145af80) */
/* WARNING: Removing unreachable block (ram,0x0145af98) */
/* WARNING: Removing unreachable block (ram,0x0145b088) */
/* WARNING: Removing unreachable block (ram,0x0145afa4) */
/* WARNING: Removing unreachable block (ram,0x0145afb8) */
/* WARNING: Removing unreachable block (ram,0x0145afc0) */
/* WARNING: Removing unreachable block (ram,0x0145afc8) */
/* WARNING: Removing unreachable block (ram,0x0145ae10) */
/* WARNING: Removing unreachable block (ram,0x0145ab10) */
/* WARNING: Removing unreachable block (ram,0x0145ab28) */
/* WARNING: Removing unreachable block (ram,0x0145ab90) */
/* WARNING: Removing unreachable block (ram,0x0145ab34) */
/* WARNING: Removing unreachable block (ram,0x0145ab48) */
/* WARNING: Removing unreachable block (ram,0x0145ab50) */
/* WARNING: Removing unreachable block (ram,0x0145ab58) */
/* WARNING: Removing unreachable block (ram,0x0145a9ac) */
/* WARNING: Removing unreachable block (ram,0x0145a9c4) */
/* WARNING: Removing unreachable block (ram,0x0145aab4) */
/* WARNING: Removing unreachable block (ram,0x0145a9d0) */
/* WARNING: Removing unreachable block (ram,0x0145a9fc) */
/* WARNING: Removing unreachable block (ram,0x0145aa04) */
/* WARNING: Removing unreachable block (ram,0x0145aa0c) */
/* WARNING: Removing unreachable block (ram,0x0145a7f0) */
/* WARNING: Removing unreachable block (ram,0x0145a7f8) */
/* WARNING: Removing unreachable block (ram,0x0145a800) */
/* WARNING: Removing unreachable block (ram,0x0145a804) */
/* WARNING: Removing unreachable block (ram,0x0145a808) */
/* WARNING: Removing unreachable block (ram,0x0145a820) */
/* WARNING: Removing unreachable block (ram,0x0145a914) */
/* WARNING: Removing unreachable block (ram,0x0145a82c) */
/* WARNING: Removing unreachable block (ram,0x0145a840) */
/* WARNING: Removing unreachable block (ram,0x0145a848) */
/* WARNING: Removing unreachable block (ram,0x0145a850) */
/* WARNING: Removing unreachable block (ram,0x0145a640) */
/* WARNING: Removing unreachable block (ram,0x0145a650) */
/* WARNING: Removing unreachable block (ram,0x0145a668) */
/* WARNING: Removing unreachable block (ram,0x0145a758) */
/* WARNING: Removing unreachable block (ram,0x0145a674) */
/* WARNING: Removing unreachable block (ram,0x0145a688) */
/* WARNING: Removing unreachable block (ram,0x0145a690) */
/* WARNING: Removing unreachable block (ram,0x0145a698) */
/* WARNING: Removing unreachable block (ram,0x0145a4a0) */
/* WARNING: Removing unreachable block (ram,0x0145a4b8) */
/* WARNING: Removing unreachable block (ram,0x0145a5a8) */
/* WARNING: Removing unreachable block (ram,0x0145a4c4) */
/* WARNING: Removing unreachable block (ram,0x0145a4f0) */
/* WARNING: Removing unreachable block (ram,0x0145a4f8) */
/* WARNING: Removing unreachable block (ram,0x0145a500) */
/* WARNING: Removing unreachable block (ram,0x0145a2d4) */
/* WARNING: Removing unreachable block (ram,0x0145a2ec) */
/* WARNING: Removing unreachable block (ram,0x0145a408) */
/* WARNING: Removing unreachable block (ram,0x0145a2f8) */
/* WARNING: Removing unreachable block (ram,0x0145a324) */
/* WARNING: Removing unreachable block (ram,0x0145a32c) */
/* WARNING: Removing unreachable block (ram,0x0145a334) */
/* WARNING: Removing unreachable block (ram,0x0145a36c) */
/* WARNING: Removing unreachable block (ram,0x0145a370) */
/* WARNING: Removing unreachable block (ram,0x0145a378) */
/* WARNING: Removing unreachable block (ram,0x014fe3e8) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bfcc) */
/* WARNING: Removing unreachable block (ram,0x0145bffc) */
/* WARNING: Removing unreachable block (ram,0x0145c010) */
/* WARNING: Removing unreachable block (ram,0x0145c014) */
/* WARNING: Removing unreachable block (ram,0x0145c024) */
/* WARNING: Removing unreachable block (ram,0x0145c034) */
/* WARNING: Removing unreachable block (ram,0x0145c03c) */
/* WARNING: Removing unreachable block (ram,0x0145c048) */
/* WARNING: Removing unreachable block (ram,0x0145c054) */
/* WARNING: Removing unreachable block (ram,0x0145c068) */
/* WARNING: Removing unreachable block (ram,0x0145c070) */
/* WARNING: Removing unreachable block (ram,0x0145c078) */
/* WARNING: Removing unreachable block (ram,0x0145c080) */
/* WARNING: Removing unreachable block (ram,0x0145c084) */
/* WARNING: Removing unreachable block (ram,0x0145c088) */
/* WARNING: Removing unreachable block (ram,0x0145c08c) */
/* WARNING: Removing unreachable block (ram,0x0145c090) */
/* WARNING: Removing unreachable block (ram,0x0145c094) */
/* WARNING: Removing unreachable block (ram,0x0145c09c) */
/* WARNING: Removing unreachable block (ram,0x0145c0a8) */
/* WARNING: Removing unreachable block (ram,0x0145c0b0) */
/* WARNING: Removing unreachable block (ram,0x0145c0bc) */
/* WARNING: Removing unreachable block (ram,0x0145c0c0) */
/* WARNING: Removing unreachable block (ram,0x0145c0c4) */
/* WARNING: Removing unreachable block (ram,0x0145c0c8) */
/* WARNING: Removing unreachable block (ram,0x0145c138) */
/* WARNING: Removing unreachable block (ram,0x0145c148) */
/* WARNING: Removing unreachable block (ram,0x0145c150) */
/* WARNING: Removing unreachable block (ram,0x0145c158) */
/* WARNING: Removing unreachable block (ram,0x0145c160) */
/* WARNING: Removing unreachable block (ram,0x0145c164) */
/* WARNING: Removing unreachable block (ram,0x0145c0e0) */
/* WARNING: Removing unreachable block (ram,0x0145c18c) */
/* WARNING: Removing unreachable block (ram,0x0145c19c) */
/* WARNING: Removing unreachable block (ram,0x0145c1a4) */
/* WARNING: Removing unreachable block (ram,0x0145c1a8) */
/* WARNING: Removing unreachable block (ram,0x0145c1ac) */
/* WARNING: Removing unreachable block (ram,0x0145c0e8) */
/* WARNING: Removing unreachable block (ram,0x0145c1e0) */
/* WARNING: Removing unreachable block (ram,0x0145c1ec) */
/* WARNING: Removing unreachable block (ram,0x0145c1f4) */
/* WARNING: Removing unreachable block (ram,0x0145c1fc) */
/* WARNING: Removing unreachable block (ram,0x0145c208) */
/* WARNING: Removing unreachable block (ram,0x0145c0ec) */
/* WARNING: Removing unreachable block (ram,0x0145c0fc) */
/* WARNING: Removing unreachable block (ram,0x0145c104) */
/* WARNING: Removing unreachable block (ram,0x0145c108) */
/* WARNING: Removing unreachable block (ram,0x0145c21c) */
/* WARNING: Removing unreachable block (ram,0x0145c24c) */
/* WARNING: Removing unreachable block (ram,0x0145c26c) */
/* WARNING: Removing unreachable block (ram,0x0145c280) */
/* WARNING: Removing unreachable block (ram,0x0145c288) */
/* WARNING: Removing unreachable block (ram,0x0145c28c) */
/* WARNING: Removing unreachable block (ram,0x0145c2a4) */
/* WARNING: Removing unreachable block (ram,0x0145c2ac) */
/* WARNING: Removing unreachable block (ram,0x0145c2b4) */
/* WARNING: Removing unreachable block (ram,0x0145c2bc) */
/* WARNING: Removing unreachable block (ram,0x0145c2c0) */
/* WARNING: Removing unreachable block (ram,0x0145c2c8) */
/* WARNING: Removing unreachable block (ram,0x0145c2cc) */
/* WARNING: Removing unreachable block (ram,0x0145c2dc) */
/* WARNING: Removing unreachable block (ram,0x0145c2e0) */
/* WARNING: Removing unreachable block (ram,0x0145c2e8) */
/* WARNING: Removing unreachable block (ram,0x0145c2ec) */
/* WARNING: Removing unreachable block (ram,0x0145c10c) */
/* WARNING: Removing unreachable block (ram,0x0145c1d4) */
/* WARNING: Removing unreachable block (ram,0x014fe2a8) */
/* WARNING: Removing unreachable block (ram,0x014fe2f8) */
/* WARNING: Removing unreachable block (ram,0x014fe330) */
/* WARNING: Removing unreachable block (ram,0x014fe3a0) */
/* WARNING: Removing unreachable block (ram,0x014fe3a4) */
/* WARNING: Removing unreachable block (ram,0x014fe334) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Removing unreachable block (ram,0x014fe428) */
/* WARNING: Removing unreachable block (ram,0x014fe470) */
/* WARNING: Removing unreachable block (ram,0x014fe484) */
/* WARNING: Removing unreachable block (ram,0x014fe48c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a4) */
/* WARNING: Removing unreachable block (ram,0x014fe494) */
/* WARNING: Removing unreachable block (ram,0x014fe584) */
/* WARNING: Removing unreachable block (ram,0x014fe588) */
/* WARNING: Removing unreachable block (ram,0x014fe49c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a8) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe650) */
/* WARNING: Removing unreachable block (ram,0x014fe664) */
/* WARNING: Removing unreachable block (ram,0x014fe66c) */
/* WARNING: Removing unreachable block (ram,0x014fe670) */
/* WARNING: Removing unreachable block (ram,0x014fe6a4) */
/* WARNING: Removing unreachable block (ram,0x014fe6b8) */
/* WARNING: Removing unreachable block (ram,0x014fe6c0) */
/* WARNING: Removing unreachable block (ram,0x014fe6c8) */
/* WARNING: Removing unreachable block (ram,0x014fe7e4) */
/* WARNING: Removing unreachable block (ram,0x014fe6e0) */
/* WARNING: Removing unreachable block (ram,0x014fe6e4) */
/* WARNING: Removing unreachable block (ram,0x014fe720) */
/* WARNING: Removing unreachable block (ram,0x014fe724) */
/* WARNING: Removing unreachable block (ram,0x014fe7ec) */
/* WARNING: Removing unreachable block (ram,0x014fe800) */
/* WARNING: Removing unreachable block (ram,0x014fe808) */
/* WARNING: Removing unreachable block (ram,0x014fe820) */
/* WARNING: Removing unreachable block (ram,0x014fe828) */
/* WARNING: Removing unreachable block (ram,0x014fe84c) */
/* WARNING: Removing unreachable block (ram,0x014fe85c) */
/* WARNING: Removing unreachable block (ram,0x014fe844) */
/* WARNING: Removing unreachable block (ram,0x014fe860) */
/* WARNING: Removing unreachable block (ram,0x014fe864) */
/* WARNING: Removing unreachable block (ram,0x014fe898) */
/* WARNING: Removing unreachable block (ram,0x014fe8a0) */
/* WARNING: Removing unreachable block (ram,0x014fe8f8) */
/* WARNING: Removing unreachable block (ram,0x014fe8a8) */
/* WARNING: Removing unreachable block (ram,0x014fe8d4) */
/* WARNING: Removing unreachable block (ram,0x014fe8b8) */
/* WARNING: Removing unreachable block (ram,0x014fe86c) */
/* WARNING: Removing unreachable block (ram,0x014fe890) */
/* WARNING: Removing unreachable block (ram,0x014fe8dc) */
/* WARNING: Removing unreachable block (ram,0x014fe874) */
/* WARNING: Removing unreachable block (ram,0x014fe888) */
/* WARNING: Removing unreachable block (ram,0x014fe878) */
/* WARNING: Removing unreachable block (ram,0x014fe734) */
/* WARNING: Removing unreachable block (ram,0x014fe8f0) */
/* WARNING: Removing unreachable block (ram,0x014fe73c) */
/* WARNING: Removing unreachable block (ram,0x014fe74c) */
/* WARNING: Removing unreachable block (ram,0x014fe754) */
/* WARNING: Removing unreachable block (ram,0x014fe75c) */
/* WARNING: Removing unreachable block (ram,0x014fe774) */
/* WARNING: Removing unreachable block (ram,0x014fe784) */
/* WARNING: Removing unreachable block (ram,0x014fe788) */
/* WARNING: Removing unreachable block (ram,0x014fe78c) */
/* WARNING: Removing unreachable block (ram,0x014fe8fc) */
/* WARNING: Removing unreachable block (ram,0x014fe900) */
/* WARNING: Removing unreachable block (ram,0x014fe7a8) */
/* WARNING: Removing unreachable block (ram,0x014fe680) */
/* WARNING: Removing unreachable block (ram,0x014fe684) */
/* WARNING: Recovered jumptable eliminated as dead code */

long * Atlas_Gameplay_Usables_BoostUsable__DeSpawn
                 (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,long param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar15;
  long extraout_x1;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar19;
  long *unaff_x24;
  long lVar20;
  long *unaff_x25;
  undefined1 *puVar21;
  undefined *puVar22;
  float fVar23;
  float extraout_s0;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 unaff_d8;
  float fVar28;
  undefined8 unaff_d9;
  float fVar29;
  undefined8 unaff_d10;
  float fVar30;
  undefined8 unaff_d11;
  undefined1 auVar31 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4f21 & 1) == 0) {
    func_0x00f78a20(0x3d5fef0);
    bRam0000000003eb4f21 = 1;
  }
  lVar16 = lRam0000000003d5fef0;
  lVar5 = param_4[2];
  if (lVar5 == 0) {
    auVar31 = func_0x00f78af4();
    plVar14 = auVar31._8_8_;
    plVar8 = auVar31._0_8_;
    puVar2 = &stack0xffffffffffffffb0;
    puVar21 = &stack0xffffffffffffffd0;
    uVar9 = 0x3eb4000;
    if ((bRam0000000003eb4f22 & 1) == 0) {
      func_0x00f78a20(0x3d22618);
      bRam0000000003eb4f22 = 1;
    }
    plVar6 = (long *)/*Atlas.Gameplay.Usables.Usable$$Update*/ func_0x01523f78(plVar8,plVar14,0);
    if ((char)plVar8[3] == '\0') {
      return plVar6;
    }
    if (plVar14 == (long *)0x0) {
      puVar22 = &Atlas_Gameplay_Usables_BoostUsable__InUseVisuals;
      plVar14 = (long *)func_0x00f78af4();
      uVar18 = 0;
      fVar23 = extraout_s0;
    }
    else {
      lVar16 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar13 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x0153e5f0;
          }
          piVar17 = piVar17 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)func_0x00fac1f0(plVar14,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153e5f0:
      fVar23 = (float)(*(code *)*puVar13)(plVar14,puVar13[1]);
      puVar22 = &Atlas_Gameplay_Usables_BoostUsable__Update;
      uVar18 = 0x3eb4000;
      puVar2 = &stack0xffffffffffffffe0;
      plVar14 = plVar8;
      plVar8 = param_4;
      uVar9 = unaff_x21;
      puVar21 = &stack0xfffffffffffffff0;
    }
    puVar3 = puVar2 + -0x30;
    *(undefined8 *)(puVar2 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar2 + -0x28) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x20) = uVar18;
    *(long **)(puVar2 + -0x18) = plVar8;
    *(undefined1 **)(puVar2 + -0x10) = puVar21;
    *(undefined **)(puVar2 + -8) = puVar22;
    puVar21 = puVar2 + -0x10;
    fVar24 = *(float *)(plVar14 + 0x1a);
    *(float *)(plVar14 + 0x1a) = fVar24 - fVar23;
    if (0.0 < fVar24 - fVar23) {
      lVar16 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(plVar14);
      if (lVar16 != 0) {
        *(undefined8 *)(puVar2 + -0x50) = unaff_d11;
        *(undefined8 *)(puVar2 + -0x48) = unaff_d10;
        *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x30);
        *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = uVar9;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        if ((bRam0000000003eb4f29 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4f29 = 1;
        }
        *(float *)(lVar16 + 0x70) = *(float *)(lVar16 + 0x70) + fVar23;
        uVar9 = *(undefined8 *)(lVar16 + 0x50);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
        if ((int)plVar8 == 0) {
          return plVar8;
        }
        fVar24 = *(float *)(lVar16 + 0x70);
        fVar27 = fVar24 / *(float *)(lVar16 + 0x60);
        iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar27,0);
        fVar23 = 1.0;
        if (iVar4 == 0 && fVar27 <= 1.0) {
          fVar23 = fVar27;
        }
        iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar23,0);
        fVar29 = *(float *)(lVar16 + 0x78);
        fVar28 = *(float *)(lVar16 + 0x7c);
        fVar30 = *(float *)(lVar16 + 0x80);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        fVar27 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        if (*(long *)(lVar16 + 0x50) != 0) {
          fVar26 = 0.0;
          if (iVar4 == 0 && 0.0 <= fVar23) {
            fVar26 = fVar23;
          }
          fVar30 = fVar30 + fVar26 * (param_3 - fVar30);
          fVar28 = fVar28 + fVar26 * (fVar24 - fVar28);
          lVar16 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar16 + 0x50),0);
          uVar25 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar29 + fVar26 * (fVar27 - fVar29),0);
          if (lVar16 != 0) {
            *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
            *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
            *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
            *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
            *(undefined4 *)(puVar2 + -0x30) = uVar25;
            *(float *)(puVar2 + -0x2c) = fVar28;
            *(float *)(puVar2 + -0x28) = fVar30;
            if (pcRam0000000003ec19a8 == (code *)0x0) {
              pcRam0000000003ec19a8 =
                   (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                           ,0);
            }
            plVar8 = (long *)(*pcRam0000000003ec19a8)(lVar16,puVar2 + -0x30);
            return plVar8;
          }
        }
        plVar8 = (long *)func_0x00f78af4();
        return plVar8;
      }
    }
    else {
      lVar16 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(plVar14);
      if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x50), lVar16 != 0)) {
        uVar15 = 0;
        puVar22 = &UNK_0153e660;
        goto code_r0x0322ef1c;
      }
    }
    uVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x60) = unaff_d9;
    *(ulong *)(puVar2 + -0x58) = (ulong)(uint)fVar23;
    *(undefined8 *)(puVar2 + -0x50) = uVar18;
    *(long **)(puVar2 + -0x48) = plVar14;
    *(undefined1 **)(puVar2 + -0x40) = puVar21;
    *(undefined **)(puVar2 + -0x38) = &Atlas_Gameplay_Usables_BoostUsable__Use;
    puVar21 = puVar2 + -0x40;
    /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(uVar15,0);
    lVar5 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(uVar15);
    if (lVar5 == 0) {
      lVar5 = func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0x80) = uVar18;
      *(undefined8 *)(puVar2 + -0x78) = uVar15;
      *(undefined1 **)(puVar2 + -0x70) = puVar21;
      *(undefined **)(puVar2 + -0x68) = &Atlas_Gameplay_Usables_BoostUsableBehaviour__OnUse;
      /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
      puVar21 = *(undefined1 **)(puVar2 + -0x70);
      puVar22 = *(undefined **)(puVar2 + -0x68);
      lVar16 = *(long *)(puVar2 + -0x80);
      uVar15 = *(undefined8 *)(puVar2 + -0x78);
    }
    else {
      /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
      puVar22 = &UNK_0153e6bc;
      lVar16 = lVar5;
    }
    puVar3 = puVar2 + -0x60;
    *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x88) = uVar9;
    *(long *)(puVar2 + -0x80) = lVar16;
    *(undefined8 *)(puVar2 + -0x78) = uVar15;
    *(undefined1 **)(puVar2 + -0x70) = puVar21;
    *(undefined **)(puVar2 + -0x68) = puVar22;
    if ((bRam0000000003eb4f28 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f28 = 1;
    }
    uVar9 = *(undefined8 *)(lVar5 + 0x68);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
    if ((int)plVar8 == 0) {
      return plVar8;
    }
    lVar16 = *(long *)(lVar5 + 0x68);
    if (lVar16 == 0) {
      plVar8 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar2 + -0xb8) = 0x3d23990;
      *(undefined8 *)(puVar2 + -0xb0) = uVar9;
      *(long *)(puVar2 + -0xa8) = lVar5;
      *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
      *(undefined **)(puVar2 + -0x98) = &Atlas_Gameplay_Usables_BoostUsableBehaviour___ctor;
      if ((bRam0000000003eb4e52 & 1) == 0) {
        func_0x00f78a20(0x3d25750,0);
        bRam0000000003eb4e52 = 1;
      }
      lVar16 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
      /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(lVar16,0);
      plVar8[7] = lVar16;
      *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)(puVar2 + -0xc0);
      *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xb8);
      *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xb0);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xa8);
      *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xa0);
      *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0x98);
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return plVar8;
    }
    uVar15 = 1;
    puVar21 = *(undefined1 **)(puVar2 + -0x70);
    puVar22 = *(undefined **)(puVar2 + -0x68);
    uVar18 = *(undefined8 *)(puVar2 + -0x80);
    plVar14 = *(long **)(puVar2 + -0x78);
    unaff_x22 = *(undefined8 *)(puVar2 + -0x90);
    uVar9 = *(undefined8 *)(puVar2 + -0x88);
code_r0x0322ef1c:
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = uVar9;
    *(undefined8 *)(puVar3 + -0x20) = uVar18;
    *(long **)(puVar3 + -0x18) = plVar14;
    *(undefined1 **)(puVar3 + -0x10) = puVar21;
    *(undefined **)(puVar3 + -8) = puVar22;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*pcRam0000000003ebf4c0)(lVar16,uVar15);
    return plVar8;
  }
  lVar12 = lRam0000000003d5fef0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_4 == (long *)0x0) goto code_r0x01a3f500;
  lVar19 = param_4[9];
  lVar20 = *(long *)(*(long *)(lVar16 + 0x30) + 8);
  if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar20);
  }
  if (lVar19 == 0) {
code_r0x01a3f450:
    lVar7 = 0;
  }
  else {
    lVar7 = func_0x00f78adc(lVar19,lVar20);
    if (lVar7 == 0) {
      func_0x00f78e5c(lVar19,lVar20);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_4 + 0x218))(param_4,*(undefined8 *)(*param_4 + 0x220));
  lVar19 = *(long *)(lVar5 + 0x18);
  unaff_x24 = *(long **)(*(long *)(lVar16 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if ((plVar8 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)), lVar19 != 0))
  {
    param_7 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18);
    (*(code *)*param_7)(lVar19,uVar9);
    lVar12 = lVar7;
    if (*(long *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20))
                                 (*(long *)(lVar5 + 0x10),param_4);
      return plVar8;
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar19 = 0x3eb6000;
  lVar16 = lVar12;
  puVar13 = param_7;
  lVar5 = param_8;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_7 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_7,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar11 = puStack_c0,
        (uVar10 & 1) != 0) {
    lVar19 = **(long **)(param_8 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (puVar11 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar20 = func_0x00f78adc(puVar11,lVar19);
    if (lVar20 == 0) {
      func_0x00f78e5c(puVar11,lVar19);
      goto code_r0x01a3f6f0;
    }
    param_7 = puVar11;
    if ((*(long *)(lVar20 + 0x28) == extraout_x1) && (*(char *)(lVar20 + 0x18) != '\0')) {
      if (lVar12 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar16 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar12);
    }
  }
  param_8 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x24) {
          puVar11 = (undefined8 *)(lStack_e8 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar17 = piVar17 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar16 = 0;
    puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar8 = (long *)(*(code *)*puVar11)(&uStack_e0,puVar11[1]);
    if (param_8 == 0) {
      return plVar8;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_8,0);
    if (extraout_w1 != 1) break;
    plVar8 = (long *)___cxa_begin_catch();
    param_8 = *plVar8;
    ___cxa_end_catch();
  } while( true );
  auVar31 = __Unwind_Resume();
  lStack_148 = auVar31._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar20 = lVar16;
  puVar11 = puVar13;
  puStack_120 = param_7;
  lStack_118 = extraout_x1;
  lStack_110 = lVar12;
  lStack_108 = param_8;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lStack_148 + 0x20) != 0) &&
     (lVar7 = (*(code *)**(undefined8 **)puVar13[6])(), param_8 = lVar16, lVar12 = auVar31._8_8_,
     param_7 = puVar13, lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*(code *)**(undefined8 **)(puVar13[6] + 8))
                               (lStack_148,auVar31._8_8_,lVar16,*(undefined8 *)(lVar7 + 0x10));
    return plVar8;
  }
  auVar31 = func_0x00f78af4();
  lVar7 = auVar31._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar8 = (long *)0x3eb6000;
  lVar16 = lVar20;
  plStack_160 = unaff_x24;
  lStack_158 = lVar19;
  puStack_150 = param_7;
  lStack_140 = lVar12;
  lStack_138 = param_8;
  pppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar31._0_8_ + 0x18) == 0) ||
       (lVar12 = (**(code **)**(undefined8 **)(lVar5 + 0x30))(), lVar12 == 0)) ||
      (lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8))(), lVar12 == 0)) ||
     (lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(), lVar12 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x30));
    if ((uVar10 & 1) == 0) {
      puVar11 = (undefined8 *)0x0;
      do {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x30) + 0x38);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
        lStack_198 = lVar5;
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *plVar8) {
              puVar13 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar17 = piVar17 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        lVar16 = 0;
        puVar13 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar14 = (long *)(*(code *)*puVar13)(&uStack_190,puVar13[1]);
        if (puVar11 == (undefined8 *)0x0) {
          return plVar14;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar11,0);
        if (extraout_w1_00 != 1) {
          auVar31 = __Unwind_Resume();
          lVar12 = auVar31._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar16 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar12,auVar31._8_8_,*(undefined8 *)(lVar12 + 0x38),
                       *(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_10,
                       param_11,lVar7,lVar20,puVar11,lVar5);
            return plVar8;
          }
          puVar13 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar13;
          func_0x00f78a30();
          return plVar8;
        }
        puVar11 = (undefined8 *)___cxa_begin_catch();
        puVar11 = (undefined8 *)*puVar11;
        ___cxa_end_catch();
      } while( true );
    }
    lVar12 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x20));
    if (lVar20 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar20,0);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar12 + 0x48) = puVar11;
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar16 = *(long *)(lVar7 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar12,lVar20,lVar16,0);
  } while( true );
}



// ============================================================
// RVA: 0x153e538 | Atlas.Gameplay.Usables.BoostUsable.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x0153e65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153e6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145aa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ae70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145ae74) */
/* WARNING: Removing unreachable block (ram,0x0145ae78) */
/* WARNING: Removing unreachable block (ram,0x0145ace8) */
/* WARNING: Removing unreachable block (ram,0x0145acec) */
/* WARNING: Removing unreachable block (ram,0x0145ac58) */
/* WARNING: Removing unreachable block (ram,0x0145ac60) */
/* WARNING: Removing unreachable block (ram,0x0145ac74) */
/* WARNING: Removing unreachable block (ram,0x0145ac7c) */
/* WARNING: Removing unreachable block (ram,0x0145ac84) */
/* WARNING: Removing unreachable block (ram,0x0145aa58) */
/* WARNING: Removing unreachable block (ram,0x0145aa5c) */
/* WARNING: Removing unreachable block (ram,0x0145a8b4) */
/* WARNING: Removing unreachable block (ram,0x0145a8b8) */
/* WARNING: Removing unreachable block (ram,0x0145a6fc) */
/* WARNING: Removing unreachable block (ram,0x0145a700) */
/* WARNING: Removing unreachable block (ram,0x0145a54c) */
/* WARNING: Removing unreachable block (ram,0x0145a550) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145a398) */
/* WARNING: Removing unreachable block (ram,0x0145a39c) */
/* WARNING: Removing unreachable block (ram,0x0145a3c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6bc) */
/* WARNING: Removing unreachable block (ram,0x0153e6c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6e0) */
/* WARNING: Removing unreachable block (ram,0x0153e6f8) */
/* WARNING: Removing unreachable block (ram,0x0153e710) */
/* WARNING: Removing unreachable block (ram,0x0153e728) */
/* WARNING: Removing unreachable block (ram,0x0153e73c) */
/* WARNING: Removing unreachable block (ram,0x0153e74c) */
/* WARNING: Removing unreachable block (ram,0x0153e75c) */
/* WARNING: Removing unreachable block (ram,0x0153e760) */
/* WARNING: Removing unreachable block (ram,0x0153e784) */
/* WARNING: Removing unreachable block (ram,0x0153e78c) */
/* WARNING: Removing unreachable block (ram,0x0153e794) */
/* WARNING: Removing unreachable block (ram,0x0153e7a4) */
/* WARNING: Removing unreachable block (ram,0x0153e7ac) */
/* WARNING: Removing unreachable block (ram,0x0153e7c8) */
/* WARNING: Removing unreachable block (ram,0x0153e7e4) */
/* WARNING: Removing unreachable block (ram,0x0153e7e8) */
/* WARNING: Removing unreachable block (ram,0x0153e7f4) */
/* WARNING: Removing unreachable block (ram,0x0153e7f8) */
/* WARNING: Removing unreachable block (ram,0x0153e80c) */
/* WARNING: Removing unreachable block (ram,0x0153e814) */
/* WARNING: Removing unreachable block (ram,0x0153e818) */
/* WARNING: Removing unreachable block (ram,0x0153e828) */
/* WARNING: Removing unreachable block (ram,0x0153e82c) */
/* WARNING: Removing unreachable block (ram,0x0153e9a8) */
/* WARNING: Removing unreachable block (ram,0x0153e9c4) */
/* WARNING: Removing unreachable block (ram,0x0153e9d8) */
/* WARNING: Removing unreachable block (ram,0x0153ea28) */
/* WARNING: Removing unreachable block (ram,0x0153e9e0) */
/* WARNING: Removing unreachable block (ram,0x0153ea1c) */
/* WARNING: Removing unreachable block (ram,0x0153ea04) */
/* WARNING: Removing unreachable block (ram,0x0145a258) */
/* WARNING: Removing unreachable block (ram,0x0145a28c) */
/* WARNING: Removing unreachable block (ram,0x0145a2d0) */
/* WARNING: Removing unreachable block (ram,0x0145a424) */
/* WARNING: Removing unreachable block (ram,0x0145a458) */
/* WARNING: Removing unreachable block (ram,0x0145a49c) */
/* WARNING: Removing unreachable block (ram,0x0145a5c4) */
/* WARNING: Removing unreachable block (ram,0x0145a5f8) */
/* WARNING: Removing unreachable block (ram,0x0145a63c) */
/* WARNING: Removing unreachable block (ram,0x0145a774) */
/* WARNING: Removing unreachable block (ram,0x0145a7a8) */
/* WARNING: Removing unreachable block (ram,0x0145a7ec) */
/* WARNING: Removing unreachable block (ram,0x0145a930) */
/* WARNING: Removing unreachable block (ram,0x0145a964) */
/* WARNING: Removing unreachable block (ram,0x0145a9a8) */
/* WARNING: Removing unreachable block (ram,0x0145aad0) */
/* WARNING: Removing unreachable block (ram,0x0145aaf8) */
/* WARNING: Removing unreachable block (ram,0x0145ab0c) */
/* WARNING: Removing unreachable block (ram,0x0145aba0) */
/* WARNING: Removing unreachable block (ram,0x0145abd8) */
/* WARNING: Removing unreachable block (ram,0x0145ac1c) */
/* WARNING: Removing unreachable block (ram,0x0145ac20) */
/* WARNING: Removing unreachable block (ram,0x0145ac30) */
/* WARNING: Removing unreachable block (ram,0x0145ad60) */
/* WARNING: Removing unreachable block (ram,0x0145ac34) */
/* WARNING: Removing unreachable block (ram,0x0145ad44) */
/* WARNING: Removing unreachable block (ram,0x0145ac44) */
/* WARNING: Removing unreachable block (ram,0x0145ad64) */
/* WARNING: Removing unreachable block (ram,0x0145ad9c) */
/* WARNING: Removing unreachable block (ram,0x0145ade0) */
/* WARNING: Removing unreachable block (ram,0x0145aed4) */
/* WARNING: Removing unreachable block (ram,0x0145ade8) */
/* WARNING: Removing unreachable block (ram,0x0145adfc) */
/* WARNING: Removing unreachable block (ram,0x0145ae04) */
/* WARNING: Removing unreachable block (ram,0x0145ae0c) */
/* WARNING: Removing unreachable block (ram,0x0145aef4) */
/* WARNING: Removing unreachable block (ram,0x0145af28) */
/* WARNING: Removing unreachable block (ram,0x0145af6c) */
/* WARNING: Removing unreachable block (ram,0x0145b0a4) */
/* WARNING: Removing unreachable block (ram,0x0145b0d8) */
/* WARNING: Removing unreachable block (ram,0x0145b11c) */
/* WARNING: Removing unreachable block (ram,0x0145b254) */
/* WARNING: Removing unreachable block (ram,0x0145b290) */
/* WARNING: Removing unreachable block (ram,0x0145b2d4) */
/* WARNING: Removing unreachable block (ram,0x0145b2dc) */
/* WARNING: Removing unreachable block (ram,0x0145b414) */
/* WARNING: Removing unreachable block (ram,0x0145b444) */
/* WARNING: Removing unreachable block (ram,0x0145b458) */
/* WARNING: Removing unreachable block (ram,0x0145b558) */
/* WARNING: Removing unreachable block (ram,0x0145b588) */
/* WARNING: Removing unreachable block (ram,0x0145b5cc) */
/* WARNING: Removing unreachable block (ram,0x0145b5d4) */
/* WARNING: Removing unreachable block (ram,0x0145b6bc) */
/* WARNING: Removing unreachable block (ram,0x0145b5dc) */
/* WARNING: Removing unreachable block (ram,0x0145b5f0) */
/* WARNING: Removing unreachable block (ram,0x0145b6d8) */
/* WARNING: Removing unreachable block (ram,0x0145b6ec) */
/* WARNING: Removing unreachable block (ram,0x0145b724) */
/* WARNING: Removing unreachable block (ram,0x0145b738) */
/* WARNING: Removing unreachable block (ram,0x0145b75c) */
/* WARNING: Removing unreachable block (ram,0x0145b764) */
/* WARNING: Removing unreachable block (ram,0x0145b774) */
/* WARNING: Removing unreachable block (ram,0x0145b784) */
/* WARNING: Removing unreachable block (ram,0x0145b790) */
/* WARNING: Removing unreachable block (ram,0x0145b798) */
/* WARNING: Removing unreachable block (ram,0x0145b79c) */
/* WARNING: Removing unreachable block (ram,0x0145b7b0) */
/* WARNING: Removing unreachable block (ram,0x0145b7b4) */
/* WARNING: Removing unreachable block (ram,0x0145b7c4) */
/* WARNING: Removing unreachable block (ram,0x0145b7cc) */
/* WARNING: Removing unreachable block (ram,0x0145b7d8) */
/* WARNING: Removing unreachable block (ram,0x0145b7e0) */
/* WARNING: Removing unreachable block (ram,0x0145b82c) */
/* WARNING: Removing unreachable block (ram,0x0145b834) */
/* WARNING: Removing unreachable block (ram,0x0145b83c) */
/* WARNING: Removing unreachable block (ram,0x0145b844) */
/* WARNING: Removing unreachable block (ram,0x0145b848) */
/* WARNING: Removing unreachable block (ram,0x0145b84c) */
/* WARNING: Removing unreachable block (ram,0x0145b850) */
/* WARNING: Removing unreachable block (ram,0x0145b85c) */
/* WARNING: Removing unreachable block (ram,0x0145b864) */
/* WARNING: Removing unreachable block (ram,0x0145b870) */
/* WARNING: Removing unreachable block (ram,0x0145b874) */
/* WARNING: Removing unreachable block (ram,0x0145b878) */
/* WARNING: Removing unreachable block (ram,0x0145b87c) */
/* WARNING: Removing unreachable block (ram,0x0145b888) */
/* WARNING: Removing unreachable block (ram,0x0145b890) */
/* WARNING: Removing unreachable block (ram,0x0145b894) */
/* WARNING: Removing unreachable block (ram,0x0145b92c) */
/* WARNING: Removing unreachable block (ram,0x0145b930) */
/* WARNING: Removing unreachable block (ram,0x0145b96c) */
/* WARNING: Removing unreachable block (ram,0x0145b9b0) */
/* WARNING: Removing unreachable block (ram,0x0145b9b4) */
/* WARNING: Removing unreachable block (ram,0x0145b9cc) */
/* WARNING: Removing unreachable block (ram,0x0145bac4) */
/* WARNING: Removing unreachable block (ram,0x0145b9d8) */
/* WARNING: Removing unreachable block (ram,0x0145b9ec) */
/* WARNING: Removing unreachable block (ram,0x0145b9f4) */
/* WARNING: Removing unreachable block (ram,0x0145b9fc) */
/* WARNING: Removing unreachable block (ram,0x0145bae0) */
/* WARNING: Removing unreachable block (ram,0x0145bb04) */
/* WARNING: Removing unreachable block (ram,0x0145bb18) */
/* WARNING: Removing unreachable block (ram,0x0145bb88) */
/* WARNING: Removing unreachable block (ram,0x0145bb20) */
/* WARNING: Removing unreachable block (ram,0x0145bb38) */
/* WARNING: Removing unreachable block (ram,0x0145bb98) */
/* WARNING: Removing unreachable block (ram,0x0145bba4) */
/* WARNING: Removing unreachable block (ram,0x0145bb40) */
/* WARNING: Removing unreachable block (ram,0x0145bbac) */
/* WARNING: Removing unreachable block (ram,0x0145bbd4) */
/* WARNING: Removing unreachable block (ram,0x0145bbe8) */
/* WARNING: Removing unreachable block (ram,0x0145bbec) */
/* WARNING: Removing unreachable block (ram,0x0145bc6c) */
/* WARNING: Removing unreachable block (ram,0x0145bbfc) */
/* WARNING: Removing unreachable block (ram,0x0145bc14) */
/* WARNING: Removing unreachable block (ram,0x0145bc1c) */
/* WARNING: Removing unreachable block (ram,0x0145bc24) */
/* WARNING: Removing unreachable block (ram,0x0145bc2c) */
/* WARNING: Removing unreachable block (ram,0x0145bc7c) */
/* WARNING: Removing unreachable block (ram,0x0145bcb0) */
/* WARNING: Removing unreachable block (ram,0x0145bcf4) */
/* WARNING: Removing unreachable block (ram,0x0145bcf8) */
/* WARNING: Removing unreachable block (ram,0x0145bd10) */
/* WARNING: Removing unreachable block (ram,0x0145be08) */
/* WARNING: Removing unreachable block (ram,0x0145bd1c) */
/* WARNING: Removing unreachable block (ram,0x0145bd30) */
/* WARNING: Removing unreachable block (ram,0x0145bd38) */
/* WARNING: Removing unreachable block (ram,0x0145bd40) */
/* WARNING: Removing unreachable block (ram,0x0145be24) */
/* WARNING: Removing unreachable block (ram,0x0145be58) */
/* WARNING: Removing unreachable block (ram,0x0145be9c) */
/* WARNING: Removing unreachable block (ram,0x0145bea0) */
/* WARNING: Removing unreachable block (ram,0x0145beb8) */
/* WARNING: Removing unreachable block (ram,0x0145bfb0) */
/* WARNING: Removing unreachable block (ram,0x0145bec4) */
/* WARNING: Removing unreachable block (ram,0x0145bed8) */
/* WARNING: Removing unreachable block (ram,0x0145bee0) */
/* WARNING: Removing unreachable block (ram,0x0145bee8) */
/* WARNING: Removing unreachable block (ram,0x0145bef0) */
/* WARNING: Removing unreachable block (ram,0x0145bd48) */
/* WARNING: Removing unreachable block (ram,0x0145bc30) */
/* WARNING: Removing unreachable block (ram,0x0145bb48) */
/* WARNING: Removing unreachable block (ram,0x0145ba04) */
/* WARNING: Removing unreachable block (ram,0x0145b898) */
/* WARNING: Removing unreachable block (ram,0x0145b740) */
/* WARNING: Removing unreachable block (ram,0x0145b6e4) */
/* WARNING: Removing unreachable block (ram,0x0145b5f8) */
/* WARNING: Removing unreachable block (ram,0x0145b5fc) */
/* WARNING: Removing unreachable block (ram,0x0145b45c) */
/* WARNING: Removing unreachable block (ram,0x0145b46c) */
/* WARNING: Removing unreachable block (ram,0x0145b480) */
/* WARNING: Removing unreachable block (ram,0x0145b484) */
/* WARNING: Removing unreachable block (ram,0x0145b488) */
/* WARNING: Removing unreachable block (ram,0x0145b48c) */
/* WARNING: Removing unreachable block (ram,0x0145b490) */
/* WARNING: Removing unreachable block (ram,0x0145b494) */
/* WARNING: Removing unreachable block (ram,0x0145b4b4) */
/* WARNING: Removing unreachable block (ram,0x0145b4bc) */
/* WARNING: Removing unreachable block (ram,0x0145b4c4) */
/* WARNING: Removing unreachable block (ram,0x0145b544) */
/* WARNING: Removing unreachable block (ram,0x0145b4e8) */
/* WARNING: Removing unreachable block (ram,0x0145b4f4) */
/* WARNING: Removing unreachable block (ram,0x0145b4fc) */
/* WARNING: Removing unreachable block (ram,0x0145b504) */
/* WARNING: Removing unreachable block (ram,0x0145b2e0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f8) */
/* WARNING: Removing unreachable block (ram,0x0145b2fc) */
/* WARNING: Removing unreachable block (ram,0x0145b300) */
/* WARNING: Removing unreachable block (ram,0x0145b318) */
/* WARNING: Removing unreachable block (ram,0x0145b3f0) */
/* WARNING: Removing unreachable block (ram,0x0145b3f4) */
/* WARNING: Removing unreachable block (ram,0x0145b324) */
/* WARNING: Removing unreachable block (ram,0x0145b338) */
/* WARNING: Removing unreachable block (ram,0x0145b340) */
/* WARNING: Removing unreachable block (ram,0x0145b348) */
/* WARNING: Removing unreachable block (ram,0x0145b120) */
/* WARNING: Removing unreachable block (ram,0x0145b130) */
/* WARNING: Removing unreachable block (ram,0x0145b148) */
/* WARNING: Removing unreachable block (ram,0x0145b238) */
/* WARNING: Removing unreachable block (ram,0x0145b154) */
/* WARNING: Removing unreachable block (ram,0x0145b168) */
/* WARNING: Removing unreachable block (ram,0x0145b170) */
/* WARNING: Removing unreachable block (ram,0x0145b178) */
/* WARNING: Removing unreachable block (ram,0x0145af70) */
/* WARNING: Removing unreachable block (ram,0x0145af80) */
/* WARNING: Removing unreachable block (ram,0x0145af98) */
/* WARNING: Removing unreachable block (ram,0x0145b088) */
/* WARNING: Removing unreachable block (ram,0x0145afa4) */
/* WARNING: Removing unreachable block (ram,0x0145afb8) */
/* WARNING: Removing unreachable block (ram,0x0145afc0) */
/* WARNING: Removing unreachable block (ram,0x0145afc8) */
/* WARNING: Removing unreachable block (ram,0x0145ae10) */
/* WARNING: Removing unreachable block (ram,0x0145ab10) */
/* WARNING: Removing unreachable block (ram,0x0145ab28) */
/* WARNING: Removing unreachable block (ram,0x0145ab90) */
/* WARNING: Removing unreachable block (ram,0x0145ab34) */
/* WARNING: Removing unreachable block (ram,0x0145ab48) */
/* WARNING: Removing unreachable block (ram,0x0145ab50) */
/* WARNING: Removing unreachable block (ram,0x0145ab58) */
/* WARNING: Removing unreachable block (ram,0x0145a9ac) */
/* WARNING: Removing unreachable block (ram,0x0145a9c4) */
/* WARNING: Removing unreachable block (ram,0x0145aab4) */
/* WARNING: Removing unreachable block (ram,0x0145a9d0) */
/* WARNING: Removing unreachable block (ram,0x0145a9fc) */
/* WARNING: Removing unreachable block (ram,0x0145aa04) */
/* WARNING: Removing unreachable block (ram,0x0145aa0c) */
/* WARNING: Removing unreachable block (ram,0x0145a7f0) */
/* WARNING: Removing unreachable block (ram,0x0145a7f8) */
/* WARNING: Removing unreachable block (ram,0x0145a800) */
/* WARNING: Removing unreachable block (ram,0x0145a804) */
/* WARNING: Removing unreachable block (ram,0x0145a808) */
/* WARNING: Removing unreachable block (ram,0x0145a820) */
/* WARNING: Removing unreachable block (ram,0x0145a914) */
/* WARNING: Removing unreachable block (ram,0x0145a82c) */
/* WARNING: Removing unreachable block (ram,0x0145a840) */
/* WARNING: Removing unreachable block (ram,0x0145a848) */
/* WARNING: Removing unreachable block (ram,0x0145a850) */
/* WARNING: Removing unreachable block (ram,0x0145a640) */
/* WARNING: Removing unreachable block (ram,0x0145a650) */
/* WARNING: Removing unreachable block (ram,0x0145a668) */
/* WARNING: Removing unreachable block (ram,0x0145a758) */
/* WARNING: Removing unreachable block (ram,0x0145a674) */
/* WARNING: Removing unreachable block (ram,0x0145a688) */
/* WARNING: Removing unreachable block (ram,0x0145a690) */
/* WARNING: Removing unreachable block (ram,0x0145a698) */
/* WARNING: Removing unreachable block (ram,0x0145a4a0) */
/* WARNING: Removing unreachable block (ram,0x0145a4b8) */
/* WARNING: Removing unreachable block (ram,0x0145a5a8) */
/* WARNING: Removing unreachable block (ram,0x0145a4c4) */
/* WARNING: Removing unreachable block (ram,0x0145a4f0) */
/* WARNING: Removing unreachable block (ram,0x0145a4f8) */
/* WARNING: Removing unreachable block (ram,0x0145a500) */
/* WARNING: Removing unreachable block (ram,0x0145a2d4) */
/* WARNING: Removing unreachable block (ram,0x0145a2ec) */
/* WARNING: Removing unreachable block (ram,0x0145a408) */
/* WARNING: Removing unreachable block (ram,0x0145a2f8) */
/* WARNING: Removing unreachable block (ram,0x0145a324) */
/* WARNING: Removing unreachable block (ram,0x0145a32c) */
/* WARNING: Removing unreachable block (ram,0x0145a334) */
/* WARNING: Removing unreachable block (ram,0x0145a36c) */
/* WARNING: Removing unreachable block (ram,0x0145a370) */
/* WARNING: Removing unreachable block (ram,0x0145a378) */
/* WARNING: Removing unreachable block (ram,0x014fe3e8) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bfcc) */
/* WARNING: Removing unreachable block (ram,0x0145bffc) */
/* WARNING: Removing unreachable block (ram,0x0145c010) */
/* WARNING: Removing unreachable block (ram,0x0145c014) */
/* WARNING: Removing unreachable block (ram,0x0145c024) */
/* WARNING: Removing unreachable block (ram,0x0145c034) */
/* WARNING: Removing unreachable block (ram,0x0145c03c) */
/* WARNING: Removing unreachable block (ram,0x0145c048) */
/* WARNING: Removing unreachable block (ram,0x0145c054) */
/* WARNING: Removing unreachable block (ram,0x0145c068) */
/* WARNING: Removing unreachable block (ram,0x0145c070) */
/* WARNING: Removing unreachable block (ram,0x0145c078) */
/* WARNING: Removing unreachable block (ram,0x0145c080) */
/* WARNING: Removing unreachable block (ram,0x0145c084) */
/* WARNING: Removing unreachable block (ram,0x0145c088) */
/* WARNING: Removing unreachable block (ram,0x0145c08c) */
/* WARNING: Removing unreachable block (ram,0x0145c090) */
/* WARNING: Removing unreachable block (ram,0x0145c094) */
/* WARNING: Removing unreachable block (ram,0x0145c09c) */
/* WARNING: Removing unreachable block (ram,0x0145c0a8) */
/* WARNING: Removing unreachable block (ram,0x0145c0b0) */
/* WARNING: Removing unreachable block (ram,0x0145c0bc) */
/* WARNING: Removing unreachable block (ram,0x0145c0c0) */
/* WARNING: Removing unreachable block (ram,0x0145c0c4) */
/* WARNING: Removing unreachable block (ram,0x0145c0c8) */
/* WARNING: Removing unreachable block (ram,0x0145c138) */
/* WARNING: Removing unreachable block (ram,0x0145c148) */
/* WARNING: Removing unreachable block (ram,0x0145c150) */
/* WARNING: Removing unreachable block (ram,0x0145c158) */
/* WARNING: Removing unreachable block (ram,0x0145c160) */
/* WARNING: Removing unreachable block (ram,0x0145c164) */
/* WARNING: Removing unreachable block (ram,0x0145c0e0) */
/* WARNING: Removing unreachable block (ram,0x0145c18c) */
/* WARNING: Removing unreachable block (ram,0x0145c19c) */
/* WARNING: Removing unreachable block (ram,0x0145c1a4) */
/* WARNING: Removing unreachable block (ram,0x0145c1a8) */
/* WARNING: Removing unreachable block (ram,0x0145c1ac) */
/* WARNING: Removing unreachable block (ram,0x0145c0e8) */
/* WARNING: Removing unreachable block (ram,0x0145c1e0) */
/* WARNING: Removing unreachable block (ram,0x0145c1ec) */
/* WARNING: Removing unreachable block (ram,0x0145c1f4) */
/* WARNING: Removing unreachable block (ram,0x0145c1fc) */
/* WARNING: Removing unreachable block (ram,0x0145c208) */
/* WARNING: Removing unreachable block (ram,0x0145c0ec) */
/* WARNING: Removing unreachable block (ram,0x0145c0fc) */
/* WARNING: Removing unreachable block (ram,0x0145c104) */
/* WARNING: Removing unreachable block (ram,0x0145c108) */
/* WARNING: Removing unreachable block (ram,0x0145c21c) */
/* WARNING: Removing unreachable block (ram,0x0145c24c) */
/* WARNING: Removing unreachable block (ram,0x0145c26c) */
/* WARNING: Removing unreachable block (ram,0x0145c280) */
/* WARNING: Removing unreachable block (ram,0x0145c288) */
/* WARNING: Removing unreachable block (ram,0x0145c28c) */
/* WARNING: Removing unreachable block (ram,0x0145c2a4) */
/* WARNING: Removing unreachable block (ram,0x0145c2ac) */
/* WARNING: Removing unreachable block (ram,0x0145c2b4) */
/* WARNING: Removing unreachable block (ram,0x0145c2bc) */
/* WARNING: Removing unreachable block (ram,0x0145c2c0) */
/* WARNING: Removing unreachable block (ram,0x0145c2c8) */
/* WARNING: Removing unreachable block (ram,0x0145c2cc) */
/* WARNING: Removing unreachable block (ram,0x0145c2dc) */
/* WARNING: Removing unreachable block (ram,0x0145c2e0) */
/* WARNING: Removing unreachable block (ram,0x0145c2e8) */
/* WARNING: Removing unreachable block (ram,0x0145c2ec) */
/* WARNING: Removing unreachable block (ram,0x0145c10c) */
/* WARNING: Removing unreachable block (ram,0x0145c1d4) */
/* WARNING: Removing unreachable block (ram,0x014fe2a8) */
/* WARNING: Removing unreachable block (ram,0x014fe2f8) */
/* WARNING: Removing unreachable block (ram,0x014fe330) */
/* WARNING: Removing unreachable block (ram,0x014fe3a0) */
/* WARNING: Removing unreachable block (ram,0x014fe3a4) */
/* WARNING: Removing unreachable block (ram,0x014fe334) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Removing unreachable block (ram,0x014fe428) */
/* WARNING: Removing unreachable block (ram,0x014fe470) */
/* WARNING: Removing unreachable block (ram,0x014fe484) */
/* WARNING: Removing unreachable block (ram,0x014fe48c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a4) */
/* WARNING: Removing unreachable block (ram,0x014fe494) */
/* WARNING: Removing unreachable block (ram,0x014fe584) */
/* WARNING: Removing unreachable block (ram,0x014fe588) */
/* WARNING: Removing unreachable block (ram,0x014fe49c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a8) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe650) */
/* WARNING: Removing unreachable block (ram,0x014fe664) */
/* WARNING: Removing unreachable block (ram,0x014fe66c) */
/* WARNING: Removing unreachable block (ram,0x014fe670) */
/* WARNING: Removing unreachable block (ram,0x014fe6a4) */
/* WARNING: Removing unreachable block (ram,0x014fe6b8) */
/* WARNING: Removing unreachable block (ram,0x014fe6c0) */
/* WARNING: Removing unreachable block (ram,0x014fe6c8) */
/* WARNING: Removing unreachable block (ram,0x014fe7e4) */
/* WARNING: Removing unreachable block (ram,0x014fe6e0) */
/* WARNING: Removing unreachable block (ram,0x014fe6e4) */
/* WARNING: Removing unreachable block (ram,0x014fe720) */
/* WARNING: Removing unreachable block (ram,0x014fe724) */
/* WARNING: Removing unreachable block (ram,0x014fe7ec) */
/* WARNING: Removing unreachable block (ram,0x014fe800) */
/* WARNING: Removing unreachable block (ram,0x014fe808) */
/* WARNING: Removing unreachable block (ram,0x014fe820) */
/* WARNING: Removing unreachable block (ram,0x014fe828) */
/* WARNING: Removing unreachable block (ram,0x014fe84c) */
/* WARNING: Removing unreachable block (ram,0x014fe85c) */
/* WARNING: Removing unreachable block (ram,0x014fe844) */
/* WARNING: Removing unreachable block (ram,0x014fe860) */
/* WARNING: Removing unreachable block (ram,0x014fe864) */
/* WARNING: Removing unreachable block (ram,0x014fe898) */
/* WARNING: Removing unreachable block (ram,0x014fe8a0) */
/* WARNING: Removing unreachable block (ram,0x014fe8f8) */
/* WARNING: Removing unreachable block (ram,0x014fe8a8) */
/* WARNING: Removing unreachable block (ram,0x014fe8d4) */
/* WARNING: Removing unreachable block (ram,0x014fe8b8) */
/* WARNING: Removing unreachable block (ram,0x014fe86c) */
/* WARNING: Removing unreachable block (ram,0x014fe890) */
/* WARNING: Removing unreachable block (ram,0x014fe8dc) */
/* WARNING: Removing unreachable block (ram,0x014fe874) */
/* WARNING: Removing unreachable block (ram,0x014fe888) */
/* WARNING: Removing unreachable block (ram,0x014fe878) */
/* WARNING: Removing unreachable block (ram,0x014fe734) */
/* WARNING: Removing unreachable block (ram,0x014fe8f0) */
/* WARNING: Removing unreachable block (ram,0x014fe73c) */
/* WARNING: Removing unreachable block (ram,0x014fe74c) */
/* WARNING: Removing unreachable block (ram,0x014fe754) */
/* WARNING: Removing unreachable block (ram,0x014fe75c) */
/* WARNING: Removing unreachable block (ram,0x014fe774) */
/* WARNING: Removing unreachable block (ram,0x014fe784) */
/* WARNING: Removing unreachable block (ram,0x014fe788) */
/* WARNING: Removing unreachable block (ram,0x014fe78c) */
/* WARNING: Removing unreachable block (ram,0x014fe8fc) */
/* WARNING: Removing unreachable block (ram,0x014fe900) */
/* WARNING: Removing unreachable block (ram,0x014fe7a8) */
/* WARNING: Removing unreachable block (ram,0x014fe680) */
/* WARNING: Removing unreachable block (ram,0x014fe684) */
/* WARNING: Recovered jumptable eliminated as dead code */

long Atlas_Gameplay_Usables_BoostUsable__Update
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar10;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  float fVar13;
  float extraout_s0;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d8;
  float fVar18;
  undefined8 unaff_d9;
  float fVar19;
  undefined8 unaff_d10;
  float fVar20;
  undefined8 unaff_d11;
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar11 = &stack0xfffffffffffffff0;
  uVar10 = 0x3eb4000;
  if ((bRam0000000003eb4f22 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4f22 = 1;
  }
  lVar4 = /*Atlas.Gameplay.Usables.Usable$$Update*/ func_0x01523f78(param_4,param_5,0);
  if (*(char *)(param_4 + 0x18) == '\0') {
    return lVar4;
  }
  if (param_5 == (long *)0x0) {
    unaff_x30 = &Atlas_Gameplay_Usables_BoostUsable__InUseVisuals;
    lVar4 = func_0x00f78af4();
    unaff_x20 = 0;
    fVar13 = extraout_s0;
  }
  else {
    lVar4 = *param_5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0153e5f0;
        }
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_0153e5f0:
    fVar13 = (float)(*(code *)*puVar5)(param_5,puVar5[1]);
    puVar1 = (undefined1 *)register0x00000008;
    lVar4 = param_4;
    param_4 = unaff_x19;
    uVar10 = unaff_x21;
    puVar11 = unaff_x29;
  }
  puVar2 = puVar1 + -0x30;
  *(undefined8 *)(puVar1 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar1 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = param_4;
  *(undefined1 **)(puVar1 + -0x10) = puVar11;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  puVar11 = puVar1 + -0x10;
  fVar14 = *(float *)(lVar4 + 0xd0) - fVar13;
  *(float *)(lVar4 + 0xd0) = fVar14;
  if (0.0 < fVar14) {
    lVar6 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(lVar4);
    if (lVar6 != 0) {
      *(undefined8 *)(puVar1 + -0x50) = unaff_d11;
      *(undefined8 *)(puVar1 + -0x48) = unaff_d10;
      *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x30);
      *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x28);
      *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = uVar10;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      if ((bRam0000000003eb4f29 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4f29 = 1;
      }
      *(float *)(lVar6 + 0x70) = *(float *)(lVar6 + 0x70) + fVar13;
      uVar10 = *(undefined8 *)(lVar6 + 0x50);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
      if ((int)lVar4 != 0) {
        fVar14 = *(float *)(lVar6 + 0x70);
        fVar17 = fVar14 / *(float *)(lVar6 + 0x60);
        iVar3 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar17,0);
        fVar13 = 1.0;
        if (iVar3 == 0 && fVar17 <= 1.0) {
          fVar13 = fVar17;
        }
        iVar3 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar13,0);
        fVar19 = *(float *)(lVar6 + 0x78);
        fVar18 = *(float *)(lVar6 + 0x7c);
        fVar20 = *(float *)(lVar6 + 0x80);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        fVar17 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        if (*(long *)(lVar6 + 0x50) != 0) {
          fVar16 = 0.0;
          if (iVar3 == 0 && 0.0 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar20 = fVar20 + fVar16 * (param_3 - fVar20);
          fVar18 = fVar18 + fVar16 * (fVar14 - fVar18);
          lVar4 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x50),0);
          uVar15 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar19 + fVar16 * (fVar17 - fVar19),0);
          if (lVar4 != 0) {
            *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
            *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
            *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
            *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
            *(undefined4 *)(puVar1 + -0x30) = uVar15;
            *(float *)(puVar1 + -0x2c) = fVar18;
            *(float *)(puVar1 + -0x28) = fVar20;
            if (pcRam0000000003ec19a8 == (code *)0x0) {
              pcRam0000000003ec19a8 =
                   (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                           ,0);
            }
            lVar4 = (*pcRam0000000003ec19a8)(lVar4,puVar1 + -0x30);
            return lVar4;
          }
        }
        lVar4 = func_0x00f78af4();
        return lVar4;
      }
      return lVar4;
    }
  }
  else {
    lVar6 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(lVar4);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x50), lVar6 != 0)) {
      uVar7 = 0;
      puVar12 = &UNK_0153e660;
      goto code_r0x0322ef1c;
    }
  }
  uVar7 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x60) = unaff_d9;
  *(ulong *)(puVar1 + -0x58) = (ulong)(uint)fVar13;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x20;
  *(long *)(puVar1 + -0x48) = lVar4;
  *(undefined1 **)(puVar1 + -0x40) = puVar11;
  *(undefined **)(puVar1 + -0x38) = &Atlas_Gameplay_Usables_BoostUsable__Use;
  puVar11 = puVar1 + -0x40;
  /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(uVar7,0);
  lVar4 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(uVar7);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x80) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x78) = uVar7;
    *(undefined1 **)(puVar1 + -0x70) = puVar11;
    *(undefined **)(puVar1 + -0x68) = &Atlas_Gameplay_Usables_BoostUsableBehaviour__OnUse;
    /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
    puVar11 = *(undefined1 **)(puVar1 + -0x70);
    puVar12 = *(undefined **)(puVar1 + -0x68);
    lVar6 = *(long *)(puVar1 + -0x80);
    uVar7 = *(undefined8 *)(puVar1 + -0x78);
  }
  else {
    /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
    puVar12 = &UNK_0153e6bc;
    lVar6 = lVar4;
  }
  puVar2 = puVar1 + -0x60;
  *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x88) = uVar10;
  *(long *)(puVar1 + -0x80) = lVar6;
  *(undefined8 *)(puVar1 + -0x78) = uVar7;
  *(undefined1 **)(puVar1 + -0x70) = puVar11;
  *(undefined **)(puVar1 + -0x68) = puVar12;
  if ((bRam0000000003eb4f28 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f28 = 1;
  }
  uVar10 = *(undefined8 *)(lVar4 + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  lVar6 = *(long *)(lVar4 + 0x68);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xb8) = 0x3d23990;
    *(undefined8 *)(puVar1 + -0xb0) = uVar10;
    *(long *)(puVar1 + -0xa8) = lVar4;
    *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x70;
    *(undefined **)(puVar1 + -0x98) = &Atlas_Gameplay_Usables_BoostUsableBehaviour___ctor;
    if ((bRam0000000003eb4e52 & 1) == 0) {
      func_0x00f78a20(0x3d25750,0);
      bRam0000000003eb4e52 = 1;
    }
    uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar10,0);
    *(undefined8 *)(lVar6 + 0x38) = uVar10;
    *(undefined8 *)(puVar1 + -0xc0) = *(undefined8 *)(puVar1 + -0xc0);
    *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xb8);
    *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xb0);
    *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xa8);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xa0);
    *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -0x98);
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar6;
  }
  uVar7 = 1;
  puVar11 = *(undefined1 **)(puVar1 + -0x70);
  puVar12 = *(undefined **)(puVar1 + -0x68);
  unaff_x20 = *(undefined8 *)(puVar1 + -0x80);
  lVar4 = *(long *)(puVar1 + -0x78);
  unaff_x22 = *(undefined8 *)(puVar1 + -0x90);
  uVar10 = *(undefined8 *)(puVar1 + -0x88);
code_r0x0322ef1c:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = uVar10;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = lVar4;
  *(undefined1 **)(puVar2 + -0x10) = puVar11;
  *(undefined **)(puVar2 + -8) = puVar12;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*pcRam0000000003ebf4c0)(lVar6,uVar7);
  return lVar4;
}



// ============================================================
// RVA: 0x153e614 | Atlas.Gameplay.Usables.BoostUsable.InUseVisuals
// ============================================================

/* WARNING: Possible PIC construction at 0x0153e65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153e6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145aa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ae70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145ae74) */
/* WARNING: Removing unreachable block (ram,0x0145ae78) */
/* WARNING: Removing unreachable block (ram,0x0145ace8) */
/* WARNING: Removing unreachable block (ram,0x0145acec) */
/* WARNING: Removing unreachable block (ram,0x0145ac58) */
/* WARNING: Removing unreachable block (ram,0x0145ac60) */
/* WARNING: Removing unreachable block (ram,0x0145ac74) */
/* WARNING: Removing unreachable block (ram,0x0145ac7c) */
/* WARNING: Removing unreachable block (ram,0x0145ac84) */
/* WARNING: Removing unreachable block (ram,0x0145aa58) */
/* WARNING: Removing unreachable block (ram,0x0145aa5c) */
/* WARNING: Removing unreachable block (ram,0x0145a8b4) */
/* WARNING: Removing unreachable block (ram,0x0145a8b8) */
/* WARNING: Removing unreachable block (ram,0x0145a6fc) */
/* WARNING: Removing unreachable block (ram,0x0145a700) */
/* WARNING: Removing unreachable block (ram,0x0145a54c) */
/* WARNING: Removing unreachable block (ram,0x0145a550) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145a398) */
/* WARNING: Removing unreachable block (ram,0x0145a39c) */
/* WARNING: Removing unreachable block (ram,0x0145a3c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6bc) */
/* WARNING: Removing unreachable block (ram,0x0153e6c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6e0) */
/* WARNING: Removing unreachable block (ram,0x0153e6f8) */
/* WARNING: Removing unreachable block (ram,0x0153e710) */
/* WARNING: Removing unreachable block (ram,0x0153e728) */
/* WARNING: Removing unreachable block (ram,0x0153e73c) */
/* WARNING: Removing unreachable block (ram,0x0153e74c) */
/* WARNING: Removing unreachable block (ram,0x0153e75c) */
/* WARNING: Removing unreachable block (ram,0x0153e760) */
/* WARNING: Removing unreachable block (ram,0x0153e784) */
/* WARNING: Removing unreachable block (ram,0x0153e78c) */
/* WARNING: Removing unreachable block (ram,0x0153e794) */
/* WARNING: Removing unreachable block (ram,0x0153e7a4) */
/* WARNING: Removing unreachable block (ram,0x0153e7ac) */
/* WARNING: Removing unreachable block (ram,0x0153e7c8) */
/* WARNING: Removing unreachable block (ram,0x0153e7e4) */
/* WARNING: Removing unreachable block (ram,0x0153e7e8) */
/* WARNING: Removing unreachable block (ram,0x0153e7f4) */
/* WARNING: Removing unreachable block (ram,0x0153e7f8) */
/* WARNING: Removing unreachable block (ram,0x0153e80c) */
/* WARNING: Removing unreachable block (ram,0x0153e814) */
/* WARNING: Removing unreachable block (ram,0x0153e818) */
/* WARNING: Removing unreachable block (ram,0x0153e828) */
/* WARNING: Removing unreachable block (ram,0x0153e82c) */
/* WARNING: Removing unreachable block (ram,0x0153e9a8) */
/* WARNING: Removing unreachable block (ram,0x0153e9c4) */
/* WARNING: Removing unreachable block (ram,0x0153e9d8) */
/* WARNING: Removing unreachable block (ram,0x0153ea28) */
/* WARNING: Removing unreachable block (ram,0x0153e9e0) */
/* WARNING: Removing unreachable block (ram,0x0153ea1c) */
/* WARNING: Removing unreachable block (ram,0x0153ea04) */
/* WARNING: Removing unreachable block (ram,0x0145a258) */
/* WARNING: Removing unreachable block (ram,0x0145a28c) */
/* WARNING: Removing unreachable block (ram,0x0145a2d0) */
/* WARNING: Removing unreachable block (ram,0x0145a424) */
/* WARNING: Removing unreachable block (ram,0x0145a458) */
/* WARNING: Removing unreachable block (ram,0x0145a49c) */
/* WARNING: Removing unreachable block (ram,0x0145a5c4) */
/* WARNING: Removing unreachable block (ram,0x0145a5f8) */
/* WARNING: Removing unreachable block (ram,0x0145a63c) */
/* WARNING: Removing unreachable block (ram,0x0145a774) */
/* WARNING: Removing unreachable block (ram,0x0145a7a8) */
/* WARNING: Removing unreachable block (ram,0x0145a7ec) */
/* WARNING: Removing unreachable block (ram,0x0145a930) */
/* WARNING: Removing unreachable block (ram,0x0145a964) */
/* WARNING: Removing unreachable block (ram,0x0145a9a8) */
/* WARNING: Removing unreachable block (ram,0x0145aad0) */
/* WARNING: Removing unreachable block (ram,0x0145aaf8) */
/* WARNING: Removing unreachable block (ram,0x0145ab0c) */
/* WARNING: Removing unreachable block (ram,0x0145aba0) */
/* WARNING: Removing unreachable block (ram,0x0145abd8) */
/* WARNING: Removing unreachable block (ram,0x0145ac1c) */
/* WARNING: Removing unreachable block (ram,0x0145ac20) */
/* WARNING: Removing unreachable block (ram,0x0145ac30) */
/* WARNING: Removing unreachable block (ram,0x0145ad60) */
/* WARNING: Removing unreachable block (ram,0x0145ac34) */
/* WARNING: Removing unreachable block (ram,0x0145ad44) */
/* WARNING: Removing unreachable block (ram,0x0145ac44) */
/* WARNING: Removing unreachable block (ram,0x0145ad64) */
/* WARNING: Removing unreachable block (ram,0x0145ad9c) */
/* WARNING: Removing unreachable block (ram,0x0145ade0) */
/* WARNING: Removing unreachable block (ram,0x0145aed4) */
/* WARNING: Removing unreachable block (ram,0x0145ade8) */
/* WARNING: Removing unreachable block (ram,0x0145adfc) */
/* WARNING: Removing unreachable block (ram,0x0145ae04) */
/* WARNING: Removing unreachable block (ram,0x0145ae0c) */
/* WARNING: Removing unreachable block (ram,0x0145aef4) */
/* WARNING: Removing unreachable block (ram,0x0145af28) */
/* WARNING: Removing unreachable block (ram,0x0145af6c) */
/* WARNING: Removing unreachable block (ram,0x0145b0a4) */
/* WARNING: Removing unreachable block (ram,0x0145b0d8) */
/* WARNING: Removing unreachable block (ram,0x0145b11c) */
/* WARNING: Removing unreachable block (ram,0x0145b254) */
/* WARNING: Removing unreachable block (ram,0x0145b290) */
/* WARNING: Removing unreachable block (ram,0x0145b2d4) */
/* WARNING: Removing unreachable block (ram,0x0145b2dc) */
/* WARNING: Removing unreachable block (ram,0x0145b414) */
/* WARNING: Removing unreachable block (ram,0x0145b444) */
/* WARNING: Removing unreachable block (ram,0x0145b458) */
/* WARNING: Removing unreachable block (ram,0x0145b558) */
/* WARNING: Removing unreachable block (ram,0x0145b588) */
/* WARNING: Removing unreachable block (ram,0x0145b5cc) */
/* WARNING: Removing unreachable block (ram,0x0145b5d4) */
/* WARNING: Removing unreachable block (ram,0x0145b6bc) */
/* WARNING: Removing unreachable block (ram,0x0145b5dc) */
/* WARNING: Removing unreachable block (ram,0x0145b5f0) */
/* WARNING: Removing unreachable block (ram,0x0145b6d8) */
/* WARNING: Removing unreachable block (ram,0x0145b6ec) */
/* WARNING: Removing unreachable block (ram,0x0145b724) */
/* WARNING: Removing unreachable block (ram,0x0145b738) */
/* WARNING: Removing unreachable block (ram,0x0145b75c) */
/* WARNING: Removing unreachable block (ram,0x0145b764) */
/* WARNING: Removing unreachable block (ram,0x0145b774) */
/* WARNING: Removing unreachable block (ram,0x0145b784) */
/* WARNING: Removing unreachable block (ram,0x0145b790) */
/* WARNING: Removing unreachable block (ram,0x0145b798) */
/* WARNING: Removing unreachable block (ram,0x0145b79c) */
/* WARNING: Removing unreachable block (ram,0x0145b7b0) */
/* WARNING: Removing unreachable block (ram,0x0145b7b4) */
/* WARNING: Removing unreachable block (ram,0x0145b7c4) */
/* WARNING: Removing unreachable block (ram,0x0145b7cc) */
/* WARNING: Removing unreachable block (ram,0x0145b7d8) */
/* WARNING: Removing unreachable block (ram,0x0145b7e0) */
/* WARNING: Removing unreachable block (ram,0x0145b82c) */
/* WARNING: Removing unreachable block (ram,0x0145b834) */
/* WARNING: Removing unreachable block (ram,0x0145b83c) */
/* WARNING: Removing unreachable block (ram,0x0145b844) */
/* WARNING: Removing unreachable block (ram,0x0145b848) */
/* WARNING: Removing unreachable block (ram,0x0145b84c) */
/* WARNING: Removing unreachable block (ram,0x0145b850) */
/* WARNING: Removing unreachable block (ram,0x0145b85c) */
/* WARNING: Removing unreachable block (ram,0x0145b864) */
/* WARNING: Removing unreachable block (ram,0x0145b870) */
/* WARNING: Removing unreachable block (ram,0x0145b874) */
/* WARNING: Removing unreachable block (ram,0x0145b878) */
/* WARNING: Removing unreachable block (ram,0x0145b87c) */
/* WARNING: Removing unreachable block (ram,0x0145b888) */
/* WARNING: Removing unreachable block (ram,0x0145b890) */
/* WARNING: Removing unreachable block (ram,0x0145b894) */
/* WARNING: Removing unreachable block (ram,0x0145b92c) */
/* WARNING: Removing unreachable block (ram,0x0145b930) */
/* WARNING: Removing unreachable block (ram,0x0145b96c) */
/* WARNING: Removing unreachable block (ram,0x0145b9b0) */
/* WARNING: Removing unreachable block (ram,0x0145b9b4) */
/* WARNING: Removing unreachable block (ram,0x0145b9cc) */
/* WARNING: Removing unreachable block (ram,0x0145bac4) */
/* WARNING: Removing unreachable block (ram,0x0145b9d8) */
/* WARNING: Removing unreachable block (ram,0x0145b9ec) */
/* WARNING: Removing unreachable block (ram,0x0145b9f4) */
/* WARNING: Removing unreachable block (ram,0x0145b9fc) */
/* WARNING: Removing unreachable block (ram,0x0145bae0) */
/* WARNING: Removing unreachable block (ram,0x0145bb04) */
/* WARNING: Removing unreachable block (ram,0x0145bb18) */
/* WARNING: Removing unreachable block (ram,0x0145bb88) */
/* WARNING: Removing unreachable block (ram,0x0145bb20) */
/* WARNING: Removing unreachable block (ram,0x0145bb38) */
/* WARNING: Removing unreachable block (ram,0x0145bb98) */
/* WARNING: Removing unreachable block (ram,0x0145bba4) */
/* WARNING: Removing unreachable block (ram,0x0145bb40) */
/* WARNING: Removing unreachable block (ram,0x0145bbac) */
/* WARNING: Removing unreachable block (ram,0x0145bbd4) */
/* WARNING: Removing unreachable block (ram,0x0145bbe8) */
/* WARNING: Removing unreachable block (ram,0x0145bbec) */
/* WARNING: Removing unreachable block (ram,0x0145bc6c) */
/* WARNING: Removing unreachable block (ram,0x0145bbfc) */
/* WARNING: Removing unreachable block (ram,0x0145bc14) */
/* WARNING: Removing unreachable block (ram,0x0145bc1c) */
/* WARNING: Removing unreachable block (ram,0x0145bc24) */
/* WARNING: Removing unreachable block (ram,0x0145bc2c) */
/* WARNING: Removing unreachable block (ram,0x0145bc7c) */
/* WARNING: Removing unreachable block (ram,0x0145bcb0) */
/* WARNING: Removing unreachable block (ram,0x0145bcf4) */
/* WARNING: Removing unreachable block (ram,0x0145bcf8) */
/* WARNING: Removing unreachable block (ram,0x0145bd10) */
/* WARNING: Removing unreachable block (ram,0x0145be08) */
/* WARNING: Removing unreachable block (ram,0x0145bd1c) */
/* WARNING: Removing unreachable block (ram,0x0145bd30) */
/* WARNING: Removing unreachable block (ram,0x0145bd38) */
/* WARNING: Removing unreachable block (ram,0x0145bd40) */
/* WARNING: Removing unreachable block (ram,0x0145be24) */
/* WARNING: Removing unreachable block (ram,0x0145be58) */
/* WARNING: Removing unreachable block (ram,0x0145be9c) */
/* WARNING: Removing unreachable block (ram,0x0145bea0) */
/* WARNING: Removing unreachable block (ram,0x0145beb8) */
/* WARNING: Removing unreachable block (ram,0x0145bfb0) */
/* WARNING: Removing unreachable block (ram,0x0145bec4) */
/* WARNING: Removing unreachable block (ram,0x0145bed8) */
/* WARNING: Removing unreachable block (ram,0x0145bee0) */
/* WARNING: Removing unreachable block (ram,0x0145bee8) */
/* WARNING: Removing unreachable block (ram,0x0145bef0) */
/* WARNING: Removing unreachable block (ram,0x0145bd48) */
/* WARNING: Removing unreachable block (ram,0x0145bc30) */
/* WARNING: Removing unreachable block (ram,0x0145bb48) */
/* WARNING: Removing unreachable block (ram,0x0145ba04) */
/* WARNING: Removing unreachable block (ram,0x0145b898) */
/* WARNING: Removing unreachable block (ram,0x0145b740) */
/* WARNING: Removing unreachable block (ram,0x0145b6e4) */
/* WARNING: Removing unreachable block (ram,0x0145b5f8) */
/* WARNING: Removing unreachable block (ram,0x0145b5fc) */
/* WARNING: Removing unreachable block (ram,0x0145b45c) */
/* WARNING: Removing unreachable block (ram,0x0145b46c) */
/* WARNING: Removing unreachable block (ram,0x0145b480) */
/* WARNING: Removing unreachable block (ram,0x0145b484) */
/* WARNING: Removing unreachable block (ram,0x0145b488) */
/* WARNING: Removing unreachable block (ram,0x0145b48c) */
/* WARNING: Removing unreachable block (ram,0x0145b490) */
/* WARNING: Removing unreachable block (ram,0x0145b494) */
/* WARNING: Removing unreachable block (ram,0x0145b4b4) */
/* WARNING: Removing unreachable block (ram,0x0145b4bc) */
/* WARNING: Removing unreachable block (ram,0x0145b4c4) */
/* WARNING: Removing unreachable block (ram,0x0145b544) */
/* WARNING: Removing unreachable block (ram,0x0145b4e8) */
/* WARNING: Removing unreachable block (ram,0x0145b4f4) */
/* WARNING: Removing unreachable block (ram,0x0145b4fc) */
/* WARNING: Removing unreachable block (ram,0x0145b504) */
/* WARNING: Removing unreachable block (ram,0x0145b2e0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f8) */
/* WARNING: Removing unreachable block (ram,0x0145b2fc) */
/* WARNING: Removing unreachable block (ram,0x0145b300) */
/* WARNING: Removing unreachable block (ram,0x0145b318) */
/* WARNING: Removing unreachable block (ram,0x0145b3f0) */
/* WARNING: Removing unreachable block (ram,0x0145b3f4) */
/* WARNING: Removing unreachable block (ram,0x0145b324) */
/* WARNING: Removing unreachable block (ram,0x0145b338) */
/* WARNING: Removing unreachable block (ram,0x0145b340) */
/* WARNING: Removing unreachable block (ram,0x0145b348) */
/* WARNING: Removing unreachable block (ram,0x0145b120) */
/* WARNING: Removing unreachable block (ram,0x0145b130) */
/* WARNING: Removing unreachable block (ram,0x0145b148) */
/* WARNING: Removing unreachable block (ram,0x0145b238) */
/* WARNING: Removing unreachable block (ram,0x0145b154) */
/* WARNING: Removing unreachable block (ram,0x0145b168) */
/* WARNING: Removing unreachable block (ram,0x0145b170) */
/* WARNING: Removing unreachable block (ram,0x0145b178) */
/* WARNING: Removing unreachable block (ram,0x0145af70) */
/* WARNING: Removing unreachable block (ram,0x0145af80) */
/* WARNING: Removing unreachable block (ram,0x0145af98) */
/* WARNING: Removing unreachable block (ram,0x0145b088) */
/* WARNING: Removing unreachable block (ram,0x0145afa4) */
/* WARNING: Removing unreachable block (ram,0x0145afb8) */
/* WARNING: Removing unreachable block (ram,0x0145afc0) */
/* WARNING: Removing unreachable block (ram,0x0145afc8) */
/* WARNING: Removing unreachable block (ram,0x0145ae10) */
/* WARNING: Removing unreachable block (ram,0x0145ab10) */
/* WARNING: Removing unreachable block (ram,0x0145ab28) */
/* WARNING: Removing unreachable block (ram,0x0145ab90) */
/* WARNING: Removing unreachable block (ram,0x0145ab34) */
/* WARNING: Removing unreachable block (ram,0x0145ab48) */
/* WARNING: Removing unreachable block (ram,0x0145ab50) */
/* WARNING: Removing unreachable block (ram,0x0145ab58) */
/* WARNING: Removing unreachable block (ram,0x0145a9ac) */
/* WARNING: Removing unreachable block (ram,0x0145a9c4) */
/* WARNING: Removing unreachable block (ram,0x0145aab4) */
/* WARNING: Removing unreachable block (ram,0x0145a9d0) */
/* WARNING: Removing unreachable block (ram,0x0145a9fc) */
/* WARNING: Removing unreachable block (ram,0x0145aa04) */
/* WARNING: Removing unreachable block (ram,0x0145aa0c) */
/* WARNING: Removing unreachable block (ram,0x0145a7f0) */
/* WARNING: Removing unreachable block (ram,0x0145a7f8) */
/* WARNING: Removing unreachable block (ram,0x0145a800) */
/* WARNING: Removing unreachable block (ram,0x0145a804) */
/* WARNING: Removing unreachable block (ram,0x0145a808) */
/* WARNING: Removing unreachable block (ram,0x0145a820) */
/* WARNING: Removing unreachable block (ram,0x0145a914) */
/* WARNING: Removing unreachable block (ram,0x0145a82c) */
/* WARNING: Removing unreachable block (ram,0x0145a840) */
/* WARNING: Removing unreachable block (ram,0x0145a848) */
/* WARNING: Removing unreachable block (ram,0x0145a850) */
/* WARNING: Removing unreachable block (ram,0x0145a640) */
/* WARNING: Removing unreachable block (ram,0x0145a650) */
/* WARNING: Removing unreachable block (ram,0x0145a668) */
/* WARNING: Removing unreachable block (ram,0x0145a758) */
/* WARNING: Removing unreachable block (ram,0x0145a674) */
/* WARNING: Removing unreachable block (ram,0x0145a688) */
/* WARNING: Removing unreachable block (ram,0x0145a690) */
/* WARNING: Removing unreachable block (ram,0x0145a698) */
/* WARNING: Removing unreachable block (ram,0x0145a4a0) */
/* WARNING: Removing unreachable block (ram,0x0145a4b8) */
/* WARNING: Removing unreachable block (ram,0x0145a5a8) */
/* WARNING: Removing unreachable block (ram,0x0145a4c4) */
/* WARNING: Removing unreachable block (ram,0x0145a4f0) */
/* WARNING: Removing unreachable block (ram,0x0145a4f8) */
/* WARNING: Removing unreachable block (ram,0x0145a500) */
/* WARNING: Removing unreachable block (ram,0x0145a2d4) */
/* WARNING: Removing unreachable block (ram,0x0145a2ec) */
/* WARNING: Removing unreachable block (ram,0x0145a408) */
/* WARNING: Removing unreachable block (ram,0x0145a2f8) */
/* WARNING: Removing unreachable block (ram,0x0145a324) */
/* WARNING: Removing unreachable block (ram,0x0145a32c) */
/* WARNING: Removing unreachable block (ram,0x0145a334) */
/* WARNING: Removing unreachable block (ram,0x0145a36c) */
/* WARNING: Removing unreachable block (ram,0x0145a370) */
/* WARNING: Removing unreachable block (ram,0x0145a378) */
/* WARNING: Removing unreachable block (ram,0x014fe3e8) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bfcc) */
/* WARNING: Removing unreachable block (ram,0x0145bffc) */
/* WARNING: Removing unreachable block (ram,0x0145c010) */
/* WARNING: Removing unreachable block (ram,0x0145c014) */
/* WARNING: Removing unreachable block (ram,0x0145c024) */
/* WARNING: Removing unreachable block (ram,0x0145c034) */
/* WARNING: Removing unreachable block (ram,0x0145c03c) */
/* WARNING: Removing unreachable block (ram,0x0145c048) */
/* WARNING: Removing unreachable block (ram,0x0145c054) */
/* WARNING: Removing unreachable block (ram,0x0145c068) */
/* WARNING: Removing unreachable block (ram,0x0145c070) */
/* WARNING: Removing unreachable block (ram,0x0145c078) */
/* WARNING: Removing unreachable block (ram,0x0145c080) */
/* WARNING: Removing unreachable block (ram,0x0145c084) */
/* WARNING: Removing unreachable block (ram,0x0145c088) */
/* WARNING: Removing unreachable block (ram,0x0145c08c) */
/* WARNING: Removing unreachable block (ram,0x0145c090) */
/* WARNING: Removing unreachable block (ram,0x0145c094) */
/* WARNING: Removing unreachable block (ram,0x0145c09c) */
/* WARNING: Removing unreachable block (ram,0x0145c0a8) */
/* WARNING: Removing unreachable block (ram,0x0145c0b0) */
/* WARNING: Removing unreachable block (ram,0x0145c0bc) */
/* WARNING: Removing unreachable block (ram,0x0145c0c0) */
/* WARNING: Removing unreachable block (ram,0x0145c0c4) */
/* WARNING: Removing unreachable block (ram,0x0145c0c8) */
/* WARNING: Removing unreachable block (ram,0x0145c138) */
/* WARNING: Removing unreachable block (ram,0x0145c148) */
/* WARNING: Removing unreachable block (ram,0x0145c150) */
/* WARNING: Removing unreachable block (ram,0x0145c158) */
/* WARNING: Removing unreachable block (ram,0x0145c160) */
/* WARNING: Removing unreachable block (ram,0x0145c164) */
/* WARNING: Removing unreachable block (ram,0x0145c0e0) */
/* WARNING: Removing unreachable block (ram,0x0145c18c) */
/* WARNING: Removing unreachable block (ram,0x0145c19c) */
/* WARNING: Removing unreachable block (ram,0x0145c1a4) */
/* WARNING: Removing unreachable block (ram,0x0145c1a8) */
/* WARNING: Removing unreachable block (ram,0x0145c1ac) */
/* WARNING: Removing unreachable block (ram,0x0145c0e8) */
/* WARNING: Removing unreachable block (ram,0x0145c1e0) */
/* WARNING: Removing unreachable block (ram,0x0145c1ec) */
/* WARNING: Removing unreachable block (ram,0x0145c1f4) */
/* WARNING: Removing unreachable block (ram,0x0145c1fc) */
/* WARNING: Removing unreachable block (ram,0x0145c208) */
/* WARNING: Removing unreachable block (ram,0x0145c0ec) */
/* WARNING: Removing unreachable block (ram,0x0145c0fc) */
/* WARNING: Removing unreachable block (ram,0x0145c104) */
/* WARNING: Removing unreachable block (ram,0x0145c108) */
/* WARNING: Removing unreachable block (ram,0x0145c21c) */
/* WARNING: Removing unreachable block (ram,0x0145c24c) */
/* WARNING: Removing unreachable block (ram,0x0145c26c) */
/* WARNING: Removing unreachable block (ram,0x0145c280) */
/* WARNING: Removing unreachable block (ram,0x0145c288) */
/* WARNING: Removing unreachable block (ram,0x0145c28c) */
/* WARNING: Removing unreachable block (ram,0x0145c2a4) */
/* WARNING: Removing unreachable block (ram,0x0145c2ac) */
/* WARNING: Removing unreachable block (ram,0x0145c2b4) */
/* WARNING: Removing unreachable block (ram,0x0145c2bc) */
/* WARNING: Removing unreachable block (ram,0x0145c2c0) */
/* WARNING: Removing unreachable block (ram,0x0145c2c8) */
/* WARNING: Removing unreachable block (ram,0x0145c2cc) */
/* WARNING: Removing unreachable block (ram,0x0145c2dc) */
/* WARNING: Removing unreachable block (ram,0x0145c2e0) */
/* WARNING: Removing unreachable block (ram,0x0145c2e8) */
/* WARNING: Removing unreachable block (ram,0x0145c2ec) */
/* WARNING: Removing unreachable block (ram,0x0145c10c) */
/* WARNING: Removing unreachable block (ram,0x0145c1d4) */
/* WARNING: Removing unreachable block (ram,0x014fe2a8) */
/* WARNING: Removing unreachable block (ram,0x014fe2f8) */
/* WARNING: Removing unreachable block (ram,0x014fe330) */
/* WARNING: Removing unreachable block (ram,0x014fe3a0) */
/* WARNING: Removing unreachable block (ram,0x014fe3a4) */
/* WARNING: Removing unreachable block (ram,0x014fe334) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Removing unreachable block (ram,0x014fe428) */
/* WARNING: Removing unreachable block (ram,0x014fe470) */
/* WARNING: Removing unreachable block (ram,0x014fe484) */
/* WARNING: Removing unreachable block (ram,0x014fe48c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a4) */
/* WARNING: Removing unreachable block (ram,0x014fe494) */
/* WARNING: Removing unreachable block (ram,0x014fe584) */
/* WARNING: Removing unreachable block (ram,0x014fe588) */
/* WARNING: Removing unreachable block (ram,0x014fe49c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a8) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe650) */
/* WARNING: Removing unreachable block (ram,0x014fe664) */
/* WARNING: Removing unreachable block (ram,0x014fe66c) */
/* WARNING: Removing unreachable block (ram,0x014fe670) */
/* WARNING: Removing unreachable block (ram,0x014fe6a4) */
/* WARNING: Removing unreachable block (ram,0x014fe6b8) */
/* WARNING: Removing unreachable block (ram,0x014fe6c0) */
/* WARNING: Removing unreachable block (ram,0x014fe6c8) */
/* WARNING: Removing unreachable block (ram,0x014fe7e4) */
/* WARNING: Removing unreachable block (ram,0x014fe6e0) */
/* WARNING: Removing unreachable block (ram,0x014fe6e4) */
/* WARNING: Removing unreachable block (ram,0x014fe720) */
/* WARNING: Removing unreachable block (ram,0x014fe724) */
/* WARNING: Removing unreachable block (ram,0x014fe7ec) */
/* WARNING: Removing unreachable block (ram,0x014fe800) */
/* WARNING: Removing unreachable block (ram,0x014fe808) */
/* WARNING: Removing unreachable block (ram,0x014fe820) */
/* WARNING: Removing unreachable block (ram,0x014fe828) */
/* WARNING: Removing unreachable block (ram,0x014fe84c) */
/* WARNING: Removing unreachable block (ram,0x014fe85c) */
/* WARNING: Removing unreachable block (ram,0x014fe844) */
/* WARNING: Removing unreachable block (ram,0x014fe860) */
/* WARNING: Removing unreachable block (ram,0x014fe864) */
/* WARNING: Removing unreachable block (ram,0x014fe898) */
/* WARNING: Removing unreachable block (ram,0x014fe8a0) */
/* WARNING: Removing unreachable block (ram,0x014fe8f8) */
/* WARNING: Removing unreachable block (ram,0x014fe8a8) */
/* WARNING: Removing unreachable block (ram,0x014fe8d4) */
/* WARNING: Removing unreachable block (ram,0x014fe8b8) */
/* WARNING: Removing unreachable block (ram,0x014fe86c) */
/* WARNING: Removing unreachable block (ram,0x014fe890) */
/* WARNING: Removing unreachable block (ram,0x014fe8dc) */
/* WARNING: Removing unreachable block (ram,0x014fe874) */
/* WARNING: Removing unreachable block (ram,0x014fe888) */
/* WARNING: Removing unreachable block (ram,0x014fe878) */
/* WARNING: Removing unreachable block (ram,0x014fe734) */
/* WARNING: Removing unreachable block (ram,0x014fe8f0) */
/* WARNING: Removing unreachable block (ram,0x014fe73c) */
/* WARNING: Removing unreachable block (ram,0x014fe74c) */
/* WARNING: Removing unreachable block (ram,0x014fe754) */
/* WARNING: Removing unreachable block (ram,0x014fe75c) */
/* WARNING: Removing unreachable block (ram,0x014fe774) */
/* WARNING: Removing unreachable block (ram,0x014fe784) */
/* WARNING: Removing unreachable block (ram,0x014fe788) */
/* WARNING: Removing unreachable block (ram,0x014fe78c) */
/* WARNING: Removing unreachable block (ram,0x014fe8fc) */
/* WARNING: Removing unreachable block (ram,0x014fe900) */
/* WARNING: Removing unreachable block (ram,0x014fe7a8) */
/* WARNING: Removing unreachable block (ram,0x014fe680) */
/* WARNING: Removing unreachable block (ram,0x014fe684) */
/* WARNING: Recovered jumptable eliminated as dead code */

long Atlas_Gameplay_Usables_BoostUsable__InUseVisuals(float param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puStack_68;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  puVar1 = &stack0xffffffffffffffd0;
  fVar7 = *(float *)(param_2 + 0xd0) - param_1;
  *(float *)(param_2 + 0xd0) = fVar7;
  if (0.0 < fVar7) {
    lVar3 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(param_2);
    if (lVar3 != 0) {
      if ((bRam0000000003eb4f29 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4f29 = 1;
      }
      *(float *)(lVar3 + 0x70) = *(float *)(lVar3 + 0x70) + param_1;
      uVar5 = *(undefined8 *)(lVar3 + 0x50);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      if ((int)lVar4 != 0) {
        fVar9 = *(float *)(lVar3 + 0x70) / *(float *)(lVar3 + 0x60);
        iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar9,0);
        fVar7 = 1.0;
        if (iVar2 == 0 && fVar9 <= 1.0) {
          fVar7 = fVar9;
        }
        iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar7,0);
        fVar10 = *(float *)(lVar3 + 0x78);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        fVar9 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        if (*(long *)(lVar3 + 0x50) != 0) {
          fVar8 = 0.0;
          if (iVar2 == 0 && 0.0 <= fVar7) {
            fVar8 = fVar7;
          }
          lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar3 + 0x50),0);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar10 + fVar8 * (fVar9 - fVar10),0);
          if (lVar3 != 0) {
            if (pcRam0000000003ec19a8 == (code *)0x0) {
              pcRam0000000003ec19a8 =
                   (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                           ,0);
            }
            lVar3 = (*pcRam0000000003ec19a8)(lVar3,&stack0xffffffffffffffd0);
            return lVar3;
          }
        }
        lVar3 = func_0x00f78af4();
        return lVar3;
      }
      return lVar4;
    }
  }
  else {
    lVar3 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(param_2);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) {
      uVar5 = 0;
      puStack_68 = (undefined *)0x153e660;
      pppppuVar6 = (undefined8 *****)&stack0xfffffffffffffff0;
      goto code_r0x0322ef1c;
    }
  }
  param_2 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_BoostUsable__Use;
  pppppuVar6 = &ppppuStack_40;
  ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
  /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(param_2,0);
  lVar3 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(param_2);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    puStack_68 = &Atlas_Gameplay_Usables_BoostUsableBehaviour__OnUse;
    /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
  }
  else {
    /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
    puStack_68 = &UNK_0153e6bc;
    unaff_x20 = lVar3;
  }
  puVar1 = &stack0xffffffffffffffa0;
  if ((bRam0000000003eb4f28 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f28 = 1;
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if ((int)lVar4 == 0) {
    return lVar4;
  }
  lVar3 = *(long *)(lVar3 + 0x68);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003eb4e52 & 1) == 0) {
      func_0x00f78a20(0x3d25750,0);
      bRam0000000003eb4e52 = 1;
    }
    uVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar5,0);
    *(undefined8 *)(lVar3 + 0x38) = uVar5;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar3;
  }
  uVar5 = 1;
code_r0x0322ef1c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = param_2;
  *(undefined8 ******)(puVar1 + -0x10) = pppppuVar6;
  *(undefined **)(puVar1 + -8) = puStack_68;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*pcRam0000000003ebf4c0)(lVar3,uVar5);
  return lVar3;
}



// ============================================================
// RVA: 0x153e684 | Atlas.Gameplay.Usables.BoostUsable.Use
// ============================================================

/* WARNING: Possible PIC construction at 0x0153e6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145a8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145aa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ae70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145ae74) */
/* WARNING: Removing unreachable block (ram,0x0145ae78) */
/* WARNING: Removing unreachable block (ram,0x0145ace8) */
/* WARNING: Removing unreachable block (ram,0x0145acec) */
/* WARNING: Removing unreachable block (ram,0x0145ac58) */
/* WARNING: Removing unreachable block (ram,0x0145ac60) */
/* WARNING: Removing unreachable block (ram,0x0145ac74) */
/* WARNING: Removing unreachable block (ram,0x0145ac7c) */
/* WARNING: Removing unreachable block (ram,0x0145ac84) */
/* WARNING: Removing unreachable block (ram,0x0145aa58) */
/* WARNING: Removing unreachable block (ram,0x0145aa5c) */
/* WARNING: Removing unreachable block (ram,0x0145a8b4) */
/* WARNING: Removing unreachable block (ram,0x0145a8b8) */
/* WARNING: Removing unreachable block (ram,0x0145a6fc) */
/* WARNING: Removing unreachable block (ram,0x0145a700) */
/* WARNING: Removing unreachable block (ram,0x0145a54c) */
/* WARNING: Removing unreachable block (ram,0x0145a550) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145a398) */
/* WARNING: Removing unreachable block (ram,0x0145a39c) */
/* WARNING: Removing unreachable block (ram,0x0145a3c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6bc) */
/* WARNING: Removing unreachable block (ram,0x0153e6c8) */
/* WARNING: Removing unreachable block (ram,0x0153e6e0) */
/* WARNING: Removing unreachable block (ram,0x0153e6f8) */
/* WARNING: Removing unreachable block (ram,0x0153e710) */
/* WARNING: Removing unreachable block (ram,0x0153e728) */
/* WARNING: Removing unreachable block (ram,0x0153e73c) */
/* WARNING: Removing unreachable block (ram,0x0153e74c) */
/* WARNING: Removing unreachable block (ram,0x0153e75c) */
/* WARNING: Removing unreachable block (ram,0x0153e760) */
/* WARNING: Removing unreachable block (ram,0x0153e784) */
/* WARNING: Removing unreachable block (ram,0x0153e78c) */
/* WARNING: Removing unreachable block (ram,0x0153e794) */
/* WARNING: Removing unreachable block (ram,0x0153e7a4) */
/* WARNING: Removing unreachable block (ram,0x0153e7ac) */
/* WARNING: Removing unreachable block (ram,0x0153e7c8) */
/* WARNING: Removing unreachable block (ram,0x0153e7e4) */
/* WARNING: Removing unreachable block (ram,0x0153e7e8) */
/* WARNING: Removing unreachable block (ram,0x0153e7f4) */
/* WARNING: Removing unreachable block (ram,0x0153e7f8) */
/* WARNING: Removing unreachable block (ram,0x0153e80c) */
/* WARNING: Removing unreachable block (ram,0x0153e814) */
/* WARNING: Removing unreachable block (ram,0x0153e818) */
/* WARNING: Removing unreachable block (ram,0x0153e828) */
/* WARNING: Removing unreachable block (ram,0x0153e82c) */
/* WARNING: Removing unreachable block (ram,0x0153e9a8) */
/* WARNING: Removing unreachable block (ram,0x0153e9c4) */
/* WARNING: Removing unreachable block (ram,0x0153e9d8) */
/* WARNING: Removing unreachable block (ram,0x0153ea28) */
/* WARNING: Removing unreachable block (ram,0x0153ea60) */
/* WARNING: Removing unreachable block (ram,0x0153ea74) */
/* WARNING: Removing unreachable block (ram,0x0153ea90) */
/* WARNING: Removing unreachable block (ram,0x0153ea98) */
/* WARNING: Removing unreachable block (ram,0x0153ea9c) */
/* WARNING: Removing unreachable block (ram,0x0153eb90) */
/* WARNING: Removing unreachable block (ram,0x0153eab0) */
/* WARNING: Removing unreachable block (ram,0x0153eacc) */
/* WARNING: Removing unreachable block (ram,0x0153ead0) */
/* WARNING: Removing unreachable block (ram,0x0153eadc) */
/* WARNING: Removing unreachable block (ram,0x0153eae0) */
/* WARNING: Removing unreachable block (ram,0x0153eb10) */
/* WARNING: Removing unreachable block (ram,0x0153eb14) */
/* WARNING: Removing unreachable block (ram,0x0153eb18) */
/* WARNING: Removing unreachable block (ram,0x0153eb28) */
/* WARNING: Removing unreachable block (ram,0x0153eb2c) */
/* WARNING: Removing unreachable block (ram,0x0153eba8) */
/* WARNING: Removing unreachable block (ram,0x0153eb70) */
/* WARNING: Removing unreachable block (ram,0x03275bf0) */
/* WARNING: Removing unreachable block (ram,0x03275c18) */
/* WARNING: Removing unreachable block (ram,0x03275c2c) */
/* WARNING: Removing unreachable block (ram,0x0153e9e0) */
/* WARNING: Removing unreachable block (ram,0x0153ea1c) */
/* WARNING: Removing unreachable block (ram,0x0153ea04) */
/* WARNING: Removing unreachable block (ram,0x0145a258) */
/* WARNING: Removing unreachable block (ram,0x0145a28c) */
/* WARNING: Removing unreachable block (ram,0x0145a2d0) */
/* WARNING: Removing unreachable block (ram,0x0145a424) */
/* WARNING: Removing unreachable block (ram,0x0145a458) */
/* WARNING: Removing unreachable block (ram,0x0145a49c) */
/* WARNING: Removing unreachable block (ram,0x0145a5c4) */
/* WARNING: Removing unreachable block (ram,0x0145a5f8) */
/* WARNING: Removing unreachable block (ram,0x0145a63c) */
/* WARNING: Removing unreachable block (ram,0x0145a774) */
/* WARNING: Removing unreachable block (ram,0x0145a7a8) */
/* WARNING: Removing unreachable block (ram,0x0145a7ec) */
/* WARNING: Removing unreachable block (ram,0x0145a930) */
/* WARNING: Removing unreachable block (ram,0x0145a964) */
/* WARNING: Removing unreachable block (ram,0x0145a9a8) */
/* WARNING: Removing unreachable block (ram,0x0145aad0) */
/* WARNING: Removing unreachable block (ram,0x0145aaf8) */
/* WARNING: Removing unreachable block (ram,0x0145ab0c) */
/* WARNING: Removing unreachable block (ram,0x0145aba0) */
/* WARNING: Removing unreachable block (ram,0x0145abd8) */
/* WARNING: Removing unreachable block (ram,0x0145ac1c) */
/* WARNING: Removing unreachable block (ram,0x0145ac20) */
/* WARNING: Removing unreachable block (ram,0x0145ac30) */
/* WARNING: Removing unreachable block (ram,0x0145ad60) */
/* WARNING: Removing unreachable block (ram,0x0145ac34) */
/* WARNING: Removing unreachable block (ram,0x0145ad44) */
/* WARNING: Removing unreachable block (ram,0x0145ac44) */
/* WARNING: Removing unreachable block (ram,0x0145ad64) */
/* WARNING: Removing unreachable block (ram,0x0145ad9c) */
/* WARNING: Removing unreachable block (ram,0x0145ade0) */
/* WARNING: Removing unreachable block (ram,0x0145aed4) */
/* WARNING: Removing unreachable block (ram,0x0145ade8) */
/* WARNING: Removing unreachable block (ram,0x0145adfc) */
/* WARNING: Removing unreachable block (ram,0x0145ae04) */
/* WARNING: Removing unreachable block (ram,0x0145ae0c) */
/* WARNING: Removing unreachable block (ram,0x0145aef4) */
/* WARNING: Removing unreachable block (ram,0x0145af28) */
/* WARNING: Removing unreachable block (ram,0x0145af6c) */
/* WARNING: Removing unreachable block (ram,0x0145b0a4) */
/* WARNING: Removing unreachable block (ram,0x0145b0d8) */
/* WARNING: Removing unreachable block (ram,0x0145b11c) */
/* WARNING: Removing unreachable block (ram,0x0145b254) */
/* WARNING: Removing unreachable block (ram,0x0145b290) */
/* WARNING: Removing unreachable block (ram,0x0145b2d4) */
/* WARNING: Removing unreachable block (ram,0x0145b2dc) */
/* WARNING: Removing unreachable block (ram,0x0145b414) */
/* WARNING: Removing unreachable block (ram,0x0145b444) */
/* WARNING: Removing unreachable block (ram,0x0145b458) */
/* WARNING: Removing unreachable block (ram,0x0145b558) */
/* WARNING: Removing unreachable block (ram,0x0145b588) */
/* WARNING: Removing unreachable block (ram,0x0145b5cc) */
/* WARNING: Removing unreachable block (ram,0x0145b5d4) */
/* WARNING: Removing unreachable block (ram,0x0145b6bc) */
/* WARNING: Removing unreachable block (ram,0x0145b5dc) */
/* WARNING: Removing unreachable block (ram,0x0145b5f0) */
/* WARNING: Removing unreachable block (ram,0x0145b6d8) */
/* WARNING: Removing unreachable block (ram,0x0145b6ec) */
/* WARNING: Removing unreachable block (ram,0x0145b724) */
/* WARNING: Removing unreachable block (ram,0x0145b738) */
/* WARNING: Removing unreachable block (ram,0x0145b75c) */
/* WARNING: Removing unreachable block (ram,0x0145b764) */
/* WARNING: Removing unreachable block (ram,0x0145b774) */
/* WARNING: Removing unreachable block (ram,0x0145b784) */
/* WARNING: Removing unreachable block (ram,0x0145b790) */
/* WARNING: Removing unreachable block (ram,0x0145b798) */
/* WARNING: Removing unreachable block (ram,0x0145b79c) */
/* WARNING: Removing unreachable block (ram,0x0145b7b0) */
/* WARNING: Removing unreachable block (ram,0x0145b7b4) */
/* WARNING: Removing unreachable block (ram,0x0145b7c4) */
/* WARNING: Removing unreachable block (ram,0x0145b7cc) */
/* WARNING: Removing unreachable block (ram,0x0145b7d8) */
/* WARNING: Removing unreachable block (ram,0x0145b7e0) */
/* WARNING: Removing unreachable block (ram,0x0145b82c) */
/* WARNING: Removing unreachable block (ram,0x0145b834) */
/* WARNING: Removing unreachable block (ram,0x0145b83c) */
/* WARNING: Removing unreachable block (ram,0x0145b844) */
/* WARNING: Removing unreachable block (ram,0x0145b848) */
/* WARNING: Removing unreachable block (ram,0x0145b84c) */
/* WARNING: Removing unreachable block (ram,0x0145b850) */
/* WARNING: Removing unreachable block (ram,0x0145b85c) */
/* WARNING: Removing unreachable block (ram,0x0145b864) */
/* WARNING: Removing unreachable block (ram,0x0145b870) */
/* WARNING: Removing unreachable block (ram,0x0145b874) */
/* WARNING: Removing unreachable block (ram,0x0145b878) */
/* WARNING: Removing unreachable block (ram,0x0145b87c) */
/* WARNING: Removing unreachable block (ram,0x0145b888) */
/* WARNING: Removing unreachable block (ram,0x0145b890) */
/* WARNING: Removing unreachable block (ram,0x0145b894) */
/* WARNING: Removing unreachable block (ram,0x0145b92c) */
/* WARNING: Removing unreachable block (ram,0x0145b930) */
/* WARNING: Removing unreachable block (ram,0x0145b96c) */
/* WARNING: Removing unreachable block (ram,0x0145b9b0) */
/* WARNING: Removing unreachable block (ram,0x0145b9b4) */
/* WARNING: Removing unreachable block (ram,0x0145b9cc) */
/* WARNING: Removing unreachable block (ram,0x0145bac4) */
/* WARNING: Removing unreachable block (ram,0x0145b9d8) */
/* WARNING: Removing unreachable block (ram,0x0145b9ec) */
/* WARNING: Removing unreachable block (ram,0x0145b9f4) */
/* WARNING: Removing unreachable block (ram,0x0145b9fc) */
/* WARNING: Removing unreachable block (ram,0x0145bae0) */
/* WARNING: Removing unreachable block (ram,0x0145bb04) */
/* WARNING: Removing unreachable block (ram,0x0145bb18) */
/* WARNING: Removing unreachable block (ram,0x0145bb88) */
/* WARNING: Removing unreachable block (ram,0x0145bb20) */
/* WARNING: Removing unreachable block (ram,0x0145bb38) */
/* WARNING: Removing unreachable block (ram,0x0145bb98) */
/* WARNING: Removing unreachable block (ram,0x0145bba4) */
/* WARNING: Removing unreachable block (ram,0x0145bb40) */
/* WARNING: Removing unreachable block (ram,0x0145bbac) */
/* WARNING: Removing unreachable block (ram,0x0145bbd4) */
/* WARNING: Removing unreachable block (ram,0x0145bbe8) */
/* WARNING: Removing unreachable block (ram,0x0145bbec) */
/* WARNING: Removing unreachable block (ram,0x0145bc6c) */
/* WARNING: Removing unreachable block (ram,0x0145bbfc) */
/* WARNING: Removing unreachable block (ram,0x0145bc14) */
/* WARNING: Removing unreachable block (ram,0x0145bc1c) */
/* WARNING: Removing unreachable block (ram,0x0145bc24) */
/* WARNING: Removing unreachable block (ram,0x0145bc2c) */
/* WARNING: Removing unreachable block (ram,0x0145bc7c) */
/* WARNING: Removing unreachable block (ram,0x0145bcb0) */
/* WARNING: Removing unreachable block (ram,0x0145bcf4) */
/* WARNING: Removing unreachable block (ram,0x0145bcf8) */
/* WARNING: Removing unreachable block (ram,0x0145bd10) */
/* WARNING: Removing unreachable block (ram,0x0145be08) */
/* WARNING: Removing unreachable block (ram,0x0145bd1c) */
/* WARNING: Removing unreachable block (ram,0x0145bd30) */
/* WARNING: Removing unreachable block (ram,0x0145bd38) */
/* WARNING: Removing unreachable block (ram,0x0145bd40) */
/* WARNING: Removing unreachable block (ram,0x0145be24) */
/* WARNING: Removing unreachable block (ram,0x0145be58) */
/* WARNING: Removing unreachable block (ram,0x0145be9c) */
/* WARNING: Removing unreachable block (ram,0x0145bea0) */
/* WARNING: Removing unreachable block (ram,0x0145beb8) */
/* WARNING: Removing unreachable block (ram,0x0145bfb0) */
/* WARNING: Removing unreachable block (ram,0x0145bec4) */
/* WARNING: Removing unreachable block (ram,0x0145bed8) */
/* WARNING: Removing unreachable block (ram,0x0145bee0) */
/* WARNING: Removing unreachable block (ram,0x0145bee8) */
/* WARNING: Removing unreachable block (ram,0x0145bef0) */
/* WARNING: Removing unreachable block (ram,0x0145bd48) */
/* WARNING: Removing unreachable block (ram,0x0145bc30) */
/* WARNING: Removing unreachable block (ram,0x0145bb48) */
/* WARNING: Removing unreachable block (ram,0x0145ba04) */
/* WARNING: Removing unreachable block (ram,0x0145b898) */
/* WARNING: Removing unreachable block (ram,0x0145b740) */
/* WARNING: Removing unreachable block (ram,0x0145b6e4) */
/* WARNING: Removing unreachable block (ram,0x0145b5f8) */
/* WARNING: Removing unreachable block (ram,0x0145b5fc) */
/* WARNING: Removing unreachable block (ram,0x0145b45c) */
/* WARNING: Removing unreachable block (ram,0x0145b46c) */
/* WARNING: Removing unreachable block (ram,0x0145b480) */
/* WARNING: Removing unreachable block (ram,0x0145b484) */
/* WARNING: Removing unreachable block (ram,0x0145b488) */
/* WARNING: Removing unreachable block (ram,0x0145b48c) */
/* WARNING: Removing unreachable block (ram,0x0145b490) */
/* WARNING: Removing unreachable block (ram,0x0145b494) */
/* WARNING: Removing unreachable block (ram,0x0145b4b4) */
/* WARNING: Removing unreachable block (ram,0x0145b4bc) */
/* WARNING: Removing unreachable block (ram,0x0145b4c4) */
/* WARNING: Removing unreachable block (ram,0x0145b544) */
/* WARNING: Removing unreachable block (ram,0x0145b4e8) */
/* WARNING: Removing unreachable block (ram,0x0145b4f4) */
/* WARNING: Removing unreachable block (ram,0x0145b4fc) */
/* WARNING: Removing unreachable block (ram,0x0145b504) */
/* WARNING: Removing unreachable block (ram,0x0145b2e0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f8) */
/* WARNING: Removing unreachable block (ram,0x0145b2fc) */
/* WARNING: Removing unreachable block (ram,0x0145b300) */
/* WARNING: Removing unreachable block (ram,0x0145b318) */
/* WARNING: Removing unreachable block (ram,0x0145b3f0) */
/* WARNING: Removing unreachable block (ram,0x0145b3f4) */
/* WARNING: Removing unreachable block (ram,0x0145b324) */
/* WARNING: Removing unreachable block (ram,0x0145b338) */
/* WARNING: Removing unreachable block (ram,0x0145b340) */
/* WARNING: Removing unreachable block (ram,0x0145b348) */
/* WARNING: Removing unreachable block (ram,0x0145b120) */
/* WARNING: Removing unreachable block (ram,0x0145b130) */
/* WARNING: Removing unreachable block (ram,0x0145b148) */
/* WARNING: Removing unreachable block (ram,0x0145b238) */
/* WARNING: Removing unreachable block (ram,0x0145b154) */
/* WARNING: Removing unreachable block (ram,0x0145b168) */
/* WARNING: Removing unreachable block (ram,0x0145b170) */
/* WARNING: Removing unreachable block (ram,0x0145b178) */
/* WARNING: Removing unreachable block (ram,0x0145af70) */
/* WARNING: Removing unreachable block (ram,0x0145af80) */
/* WARNING: Removing unreachable block (ram,0x0145af98) */
/* WARNING: Removing unreachable block (ram,0x0145b088) */
/* WARNING: Removing unreachable block (ram,0x0145afa4) */
/* WARNING: Removing unreachable block (ram,0x0145afb8) */
/* WARNING: Removing unreachable block (ram,0x0145afc0) */
/* WARNING: Removing unreachable block (ram,0x0145afc8) */
/* WARNING: Removing unreachable block (ram,0x0145ae10) */
/* WARNING: Removing unreachable block (ram,0x0145ab10) */
/* WARNING: Removing unreachable block (ram,0x0145ab28) */
/* WARNING: Removing unreachable block (ram,0x0145ab90) */
/* WARNING: Removing unreachable block (ram,0x0145ab34) */
/* WARNING: Removing unreachable block (ram,0x0145ab48) */
/* WARNING: Removing unreachable block (ram,0x0145ab50) */
/* WARNING: Removing unreachable block (ram,0x0145ab58) */
/* WARNING: Removing unreachable block (ram,0x0145a9ac) */
/* WARNING: Removing unreachable block (ram,0x0145a9c4) */
/* WARNING: Removing unreachable block (ram,0x0145aab4) */
/* WARNING: Removing unreachable block (ram,0x0145a9d0) */
/* WARNING: Removing unreachable block (ram,0x0145a9fc) */
/* WARNING: Removing unreachable block (ram,0x0145aa04) */
/* WARNING: Removing unreachable block (ram,0x0145aa0c) */
/* WARNING: Removing unreachable block (ram,0x0145a7f0) */
/* WARNING: Removing unreachable block (ram,0x0145a7f8) */
/* WARNING: Removing unreachable block (ram,0x0145a800) */
/* WARNING: Removing unreachable block (ram,0x0145a804) */
/* WARNING: Removing unreachable block (ram,0x0145a808) */
/* WARNING: Removing unreachable block (ram,0x0145a820) */
/* WARNING: Removing unreachable block (ram,0x0145a914) */
/* WARNING: Removing unreachable block (ram,0x0145a82c) */
/* WARNING: Removing unreachable block (ram,0x0145a840) */
/* WARNING: Removing unreachable block (ram,0x0145a848) */
/* WARNING: Removing unreachable block (ram,0x0145a850) */
/* WARNING: Removing unreachable block (ram,0x0145a640) */
/* WARNING: Removing unreachable block (ram,0x0145a650) */
/* WARNING: Removing unreachable block (ram,0x0145a668) */
/* WARNING: Removing unreachable block (ram,0x0145a758) */
/* WARNING: Removing unreachable block (ram,0x0145a674) */
/* WARNING: Removing unreachable block (ram,0x0145a688) */
/* WARNING: Removing unreachable block (ram,0x0145a690) */
/* WARNING: Removing unreachable block (ram,0x0145a698) */
/* WARNING: Removing unreachable block (ram,0x0145a4a0) */
/* WARNING: Removing unreachable block (ram,0x0145a4b8) */
/* WARNING: Removing unreachable block (ram,0x0145a5a8) */
/* WARNING: Removing unreachable block (ram,0x0145a4c4) */
/* WARNING: Removing unreachable block (ram,0x0145a4f0) */
/* WARNING: Removing unreachable block (ram,0x0145a4f8) */
/* WARNING: Removing unreachable block (ram,0x0145a500) */
/* WARNING: Removing unreachable block (ram,0x0145a2d4) */
/* WARNING: Removing unreachable block (ram,0x0145a2ec) */
/* WARNING: Removing unreachable block (ram,0x0145a408) */
/* WARNING: Removing unreachable block (ram,0x0145a2f8) */
/* WARNING: Removing unreachable block (ram,0x0145a324) */
/* WARNING: Removing unreachable block (ram,0x0145a32c) */
/* WARNING: Removing unreachable block (ram,0x0145a334) */
/* WARNING: Removing unreachable block (ram,0x0145a36c) */
/* WARNING: Removing unreachable block (ram,0x0145a370) */
/* WARNING: Removing unreachable block (ram,0x0145a378) */
/* WARNING: Removing unreachable block (ram,0x014fe3e8) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bfcc) */
/* WARNING: Removing unreachable block (ram,0x0145bffc) */
/* WARNING: Removing unreachable block (ram,0x0145c010) */
/* WARNING: Removing unreachable block (ram,0x0145c014) */
/* WARNING: Removing unreachable block (ram,0x0145c024) */
/* WARNING: Removing unreachable block (ram,0x0145c034) */
/* WARNING: Removing unreachable block (ram,0x0145c03c) */
/* WARNING: Removing unreachable block (ram,0x0145c048) */
/* WARNING: Removing unreachable block (ram,0x0145c054) */
/* WARNING: Removing unreachable block (ram,0x0145c068) */
/* WARNING: Removing unreachable block (ram,0x0145c070) */
/* WARNING: Removing unreachable block (ram,0x0145c078) */
/* WARNING: Removing unreachable block (ram,0x0145c080) */
/* WARNING: Removing unreachable block (ram,0x0145c084) */
/* WARNING: Removing unreachable block (ram,0x0145c088) */
/* WARNING: Removing unreachable block (ram,0x0145c08c) */
/* WARNING: Removing unreachable block (ram,0x0145c090) */
/* WARNING: Removing unreachable block (ram,0x0145c094) */
/* WARNING: Removing unreachable block (ram,0x0145c09c) */
/* WARNING: Removing unreachable block (ram,0x0145c0a8) */
/* WARNING: Removing unreachable block (ram,0x0145c0b0) */
/* WARNING: Removing unreachable block (ram,0x0145c0bc) */
/* WARNING: Removing unreachable block (ram,0x0145c0c0) */
/* WARNING: Removing unreachable block (ram,0x0145c0c4) */
/* WARNING: Removing unreachable block (ram,0x0145c0c8) */
/* WARNING: Removing unreachable block (ram,0x0145c138) */
/* WARNING: Removing unreachable block (ram,0x0145c148) */
/* WARNING: Removing unreachable block (ram,0x0145c150) */
/* WARNING: Removing unreachable block (ram,0x0145c158) */
/* WARNING: Removing unreachable block (ram,0x0145c160) */
/* WARNING: Removing unreachable block (ram,0x0145c164) */
/* WARNING: Removing unreachable block (ram,0x0145c0e0) */
/* WARNING: Removing unreachable block (ram,0x0145c18c) */
/* WARNING: Removing unreachable block (ram,0x0145c19c) */
/* WARNING: Removing unreachable block (ram,0x0145c1a4) */
/* WARNING: Removing unreachable block (ram,0x0145c1a8) */
/* WARNING: Removing unreachable block (ram,0x0145c1ac) */
/* WARNING: Removing unreachable block (ram,0x0145c0e8) */
/* WARNING: Removing unreachable block (ram,0x0145c1e0) */
/* WARNING: Removing unreachable block (ram,0x0145c1ec) */
/* WARNING: Removing unreachable block (ram,0x0145c1f4) */
/* WARNING: Removing unreachable block (ram,0x0145c1fc) */
/* WARNING: Removing unreachable block (ram,0x0145c208) */
/* WARNING: Removing unreachable block (ram,0x0145c0ec) */
/* WARNING: Removing unreachable block (ram,0x0145c0fc) */
/* WARNING: Removing unreachable block (ram,0x0145c104) */
/* WARNING: Removing unreachable block (ram,0x0145c108) */
/* WARNING: Removing unreachable block (ram,0x0145c21c) */
/* WARNING: Removing unreachable block (ram,0x0145c24c) */
/* WARNING: Removing unreachable block (ram,0x0145c26c) */
/* WARNING: Removing unreachable block (ram,0x0145c280) */
/* WARNING: Removing unreachable block (ram,0x0145c288) */
/* WARNING: Removing unreachable block (ram,0x0145c28c) */
/* WARNING: Removing unreachable block (ram,0x0145c2a4) */
/* WARNING: Removing unreachable block (ram,0x0145c2ac) */
/* WARNING: Removing unreachable block (ram,0x0145c2b4) */
/* WARNING: Removing unreachable block (ram,0x0145c2bc) */
/* WARNING: Removing unreachable block (ram,0x0145c2c0) */
/* WARNING: Removing unreachable block (ram,0x0145c2c8) */
/* WARNING: Removing unreachable block (ram,0x0145c2cc) */
/* WARNING: Removing unreachable block (ram,0x0145c2dc) */
/* WARNING: Removing unreachable block (ram,0x0145c2e0) */
/* WARNING: Removing unreachable block (ram,0x0145c2e8) */
/* WARNING: Removing unreachable block (ram,0x0145c2ec) */
/* WARNING: Removing unreachable block (ram,0x0145c10c) */
/* WARNING: Removing unreachable block (ram,0x0145c1d4) */
/* WARNING: Removing unreachable block (ram,0x014fe2a8) */
/* WARNING: Removing unreachable block (ram,0x014fe2f8) */
/* WARNING: Removing unreachable block (ram,0x014fe330) */
/* WARNING: Removing unreachable block (ram,0x014fe3a0) */
/* WARNING: Removing unreachable block (ram,0x014fe3a4) */
/* WARNING: Removing unreachable block (ram,0x014fe334) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Removing unreachable block (ram,0x014fe428) */
/* WARNING: Removing unreachable block (ram,0x014fe470) */
/* WARNING: Removing unreachable block (ram,0x014fe484) */
/* WARNING: Removing unreachable block (ram,0x014fe48c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a4) */
/* WARNING: Removing unreachable block (ram,0x014fe494) */
/* WARNING: Removing unreachable block (ram,0x014fe584) */
/* WARNING: Removing unreachable block (ram,0x014fe588) */
/* WARNING: Removing unreachable block (ram,0x014fe49c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a8) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe650) */
/* WARNING: Removing unreachable block (ram,0x014fe664) */
/* WARNING: Removing unreachable block (ram,0x014fe66c) */
/* WARNING: Removing unreachable block (ram,0x014fe670) */
/* WARNING: Removing unreachable block (ram,0x014fe6a4) */
/* WARNING: Removing unreachable block (ram,0x014fe6b8) */
/* WARNING: Removing unreachable block (ram,0x014fe6c0) */
/* WARNING: Removing unreachable block (ram,0x014fe6c8) */
/* WARNING: Removing unreachable block (ram,0x014fe7e4) */
/* WARNING: Removing unreachable block (ram,0x014fe6e0) */
/* WARNING: Removing unreachable block (ram,0x014fe6e4) */
/* WARNING: Removing unreachable block (ram,0x014fe720) */
/* WARNING: Removing unreachable block (ram,0x014fe724) */
/* WARNING: Removing unreachable block (ram,0x014fe7ec) */
/* WARNING: Removing unreachable block (ram,0x014fe800) */
/* WARNING: Removing unreachable block (ram,0x014fe808) */
/* WARNING: Removing unreachable block (ram,0x014fe820) */
/* WARNING: Removing unreachable block (ram,0x014fe828) */
/* WARNING: Removing unreachable block (ram,0x014fe84c) */
/* WARNING: Removing unreachable block (ram,0x014fe85c) */
/* WARNING: Removing unreachable block (ram,0x014fe844) */
/* WARNING: Removing unreachable block (ram,0x014fe860) */
/* WARNING: Removing unreachable block (ram,0x014fe864) */
/* WARNING: Removing unreachable block (ram,0x014fe898) */
/* WARNING: Removing unreachable block (ram,0x014fe8a0) */
/* WARNING: Removing unreachable block (ram,0x014fe8f8) */
/* WARNING: Removing unreachable block (ram,0x014fe8a8) */
/* WARNING: Removing unreachable block (ram,0x014fe8d4) */
/* WARNING: Removing unreachable block (ram,0x014fe8b8) */
/* WARNING: Removing unreachable block (ram,0x014fe86c) */
/* WARNING: Removing unreachable block (ram,0x014fe890) */
/* WARNING: Removing unreachable block (ram,0x014fe8dc) */
/* WARNING: Removing unreachable block (ram,0x014fe874) */
/* WARNING: Removing unreachable block (ram,0x014fe888) */
/* WARNING: Removing unreachable block (ram,0x014fe878) */
/* WARNING: Removing unreachable block (ram,0x014fe734) */
/* WARNING: Removing unreachable block (ram,0x014fe8f0) */
/* WARNING: Removing unreachable block (ram,0x014fe73c) */
/* WARNING: Removing unreachable block (ram,0x014fe74c) */
/* WARNING: Removing unreachable block (ram,0x014fe754) */
/* WARNING: Removing unreachable block (ram,0x014fe75c) */
/* WARNING: Removing unreachable block (ram,0x014fe774) */
/* WARNING: Removing unreachable block (ram,0x014fe784) */
/* WARNING: Removing unreachable block (ram,0x014fe788) */
/* WARNING: Removing unreachable block (ram,0x014fe78c) */
/* WARNING: Removing unreachable block (ram,0x014fe8fc) */
/* WARNING: Removing unreachable block (ram,0x014fe900) */
/* WARNING: Removing unreachable block (ram,0x014fe7a8) */
/* WARNING: Removing unreachable block (ram,0x014fe680) */
/* WARNING: Removing unreachable block (ram,0x014fe684) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined1  [16] Atlas_Gameplay_Usables_BoostUsable__Use(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(param_1,0);
  lVar1 = Atlas_Gameplay_Usables_BoostUsable__get_BoostUsableBehaviour(param_1);
  if (lVar1 == 0) {
    lVar1 = func_0x00f78af4();
    /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
  }
  else {
    /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
  }
  if ((bRam0000000003eb4f28 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f28 = 1;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if (auVar3._0_4_ != 0) {
    lVar1 = *(long *)(lVar1 + 0x68);
    if (lVar1 != 0) {
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar3 = (*pcRam0000000003ebf4c0)(lVar1,1);
      return auVar3;
    }
    auVar3._0_8_ = func_0x00f78af4();
    if ((bRam0000000003eb4e52 & 1) == 0) {
      func_0x00f78a20(0x3d25750,0);
      bRam0000000003eb4e52 = 1;
    }
    uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar2,0);
    *(undefined8 *)(auVar3._0_8_ + 0x38) = uVar2;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar3._8_8_ = 0;
    return auVar3;
  }
  return auVar3;
}



// ============================================================
// RVA: 0x153e9a8 | Atlas.Gameplay.Usables.BoostUsable.PlayUseSound
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x153ebac | Atlas.Gameplay.Usables.BoostUsable.PlayIdleSound
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable__PlayIdleSound(void)

{
  return;
}



// ============================================================
// RVA: 0x153ebb0 | Atlas.Gameplay.Usables.BoostUsable.PlayExplodeSound
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable__PlayExplodeSound(void)

{
  return;
}



// ============================================================
// RVA: 0x153ebb4 | Atlas.Gameplay.Usables.BoostUsable..ctor
// ============================================================

void Atlas_Gameplay_Usables_BoostUsable___ctor(void)

{
  return;
}



