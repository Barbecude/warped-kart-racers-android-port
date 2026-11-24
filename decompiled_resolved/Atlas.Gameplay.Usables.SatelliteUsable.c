// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.SatelliteUsable

// ============================================================
// RVA: 0x14e68c8 | Atlas.Gameplay.Usables.SatelliteUsable.get_SatelliteUsableDefinition
// ============================================================

void Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4c11 & 1) == 0) {
    func_0x00f78a20(0x3d246b8);
    bRam0000000003eb4c11 = 1;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    lVar1 = **(long **)(param_1 + 0x30);
    if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Definitions.SatelliteUsableDefinition_TypeInfo*/ lRam0000000003d246b8 + 300)) ||
       (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SatelliteUsableDefinition_TypeInfo*/ lRam0000000003d246b8 + 300) * 8 + -8) !=
        /*Atlas.Definitions.SatelliteUsableDefinition_TypeInfo*/ lRam0000000003d246b8)) {
      lVar1 = func_0x00f78e5c();
      if ((bRam0000000003eb4c12 & 1) == 0) {
        func_0x00f78a20(0x3d246b0);
        bRam0000000003eb4c12 = 1;
      }
      if (*(long **)(lVar1 + 0x48) != (long *)0x0) {
        lVar1 = **(long **)(lVar1 + 0x48);
        if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.SatelliteUsableBehaviour_TypeInfo*/ lRam0000000003d246b0 + 300)) ||
           (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.SatelliteUsableBehaviour_TypeInfo*/ lRam0000000003d246b0 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Usables.SatelliteUsableBehaviour_TypeInfo*/ lRam0000000003d246b0)) {
          auVar2 = func_0x00f78e5c();
          lVar1 = auVar2._0_8_;
          *(long *)(lVar1 + 0x10) = auVar2._8_8_;
          *(undefined8 *)(lVar1 + 0x20) = param_3;
          *(undefined8 *)(lVar1 + 0x58) = param_4;
          *(undefined8 *)(lVar1 + 0x38) = param_5;
          return;
        }
      }
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14e6944 | Atlas.Gameplay.Usables.SatelliteUsable.get_SatelliteUsableBehaviour
// ============================================================

void Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4c12 & 1) == 0) {
    func_0x00f78a20(0x3d246b0);
    bRam0000000003eb4c12 = 1;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    lVar1 = **(long **)(param_1 + 0x48);
    if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.SatelliteUsableBehaviour_TypeInfo*/ lRam0000000003d246b0 + 300)) ||
       (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.SatelliteUsableBehaviour_TypeInfo*/ lRam0000000003d246b0 + 300) * 8 + -8) !=
        /*Atlas.Gameplay.Usables.SatelliteUsableBehaviour_TypeInfo*/ lRam0000000003d246b0)) {
      auVar2 = func_0x00f78e5c();
      lVar1 = auVar2._0_8_;
      *(long *)(lVar1 + 0x10) = auVar2._8_8_;
      *(undefined8 *)(lVar1 + 0x20) = param_3;
      *(undefined8 *)(lVar1 + 0x58) = param_4;
      *(undefined8 *)(lVar1 + 0x38) = param_5;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14e69c0 | Atlas.Gameplay.Usables.SatelliteUsable.Init
// ============================================================

void Atlas_Gameplay_Usables_SatelliteUsable__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  return;
}



// ============================================================
// RVA: 0x14e69c8 | Atlas.Gameplay.Usables.SatelliteUsable.DeInit
// ============================================================

void Atlas_Gameplay_Usables_SatelliteUsable__DeInit(long param_1)

{
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  /*Atlas.Gameplay.Usables.Usable$$DeInit*/ func_0x01523854(param_1,0);
  if (*(long *)(param_1 + 0xd0) != 0) {
    /*Atlas.Audio.WeaponAudio$$DeInit*/ func_0x01530270(*(long *)(param_1 + 0xd0),0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  return;
}



// ============================================================
// RVA: 0x14e6a14 | Atlas.Gameplay.Usables.SatelliteUsable.OnTearDownParamsInternal
// ============================================================

void Atlas_Gameplay_Usables_SatelliteUsable__OnTearDownParamsInternal(void)

{
  return;
}



// ============================================================
// RVA: 0x14e6a18 | Atlas.Gameplay.Usables.SatelliteUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6b4c) */
/* WARNING: Removing unreachable block (ram,0x014e6a98) */
/* WARNING: Removing unreachable block (ram,0x014e6a9c) */
/* WARNING: Removing unreachable block (ram,0x014e6ab0) */
/* WARNING: Removing unreachable block (ram,0x014e6ac8) */
/* WARNING: Removing unreachable block (ram,0x014e6ad0) */
/* WARNING: Removing unreachable block (ram,0x014e6adc) */
/* WARNING: Removing unreachable block (ram,0x014e6ae0) */
/* WARNING: Removing unreachable block (ram,0x014e6b0c) */
/* WARNING: Removing unreachable block (ram,0x014e6b14) */
/* WARNING: Removing unreachable block (ram,0x014e6b1c) */
/* WARNING: Removing unreachable block (ram,0x014e6b68) */
/* WARNING: Removing unreachable block (ram,0x014e6b24) */
/* WARNING: Removing unreachable block (ram,0x014e6b3c) */
/* WARNING: Removing unreachable block (ram,0x014e6b44) */
/* WARNING: Removing unreachable block (ram,0x014e6b6c) */
/* WARNING: Removing unreachable block (ram,0x014e6b88) */
/* WARNING: Removing unreachable block (ram,0x014e6ba8) */
/* WARNING: Removing unreachable block (ram,0x014e6bc4) */
/* WARNING: Removing unreachable block (ram,0x014e6bd0) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x01523890) */
/* WARNING: Removing unreachable block (ram,0x015238ac) */
/* WARNING: Removing unreachable block (ram,0x015238c0) */
/* WARNING: Removing unreachable block (ram,0x015238c8) */
/* WARNING: Removing unreachable block (ram,0x015238d0) */
/* WARNING: Removing unreachable block (ram,0x015238e8) */
/* WARNING: Removing unreachable block (ram,0x015238f0) */
/* WARNING: Removing unreachable block (ram,0x01523908) */
/* WARNING: Removing unreachable block (ram,0x01523910) */
/* WARNING: Removing unreachable block (ram,0x01523938) */
/* WARNING: Removing unreachable block (ram,0x01523950) */
/* WARNING: Removing unreachable block (ram,0x01523958) */
/* WARNING: Removing unreachable block (ram,0x0152395c) */
/* WARNING: Removing unreachable block (ram,0x01523970) */
/* WARNING: Removing unreachable block (ram,0x01523974) */
/* WARNING: Removing unreachable block (ram,0x01523980) */
/* WARNING: Removing unreachable block (ram,0x015239b0) */
/* WARNING: Removing unreachable block (ram,0x01523988) */
/* WARNING: Removing unreachable block (ram,0x014e6b98) */
/* WARNING: Removing unreachable block (ram,0x014e6b9c) */
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

void Atlas_Gameplay_Usables_SatelliteUsable__OnExitPool
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4c13 & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb4c13 = 1;
  }
  puStack_58 = &UNK_014e6a98;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (param_2 != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
    param_2 = *(long *)(param_2 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_2,0);
    if (lVar8 != 0) {
      uVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar2,uRam0000000003d572a0);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      puVar9 = &UNK_01523aa4;
      lVar8 = param_1;
      goto code_r0x01523ba8;
    }
  }
  puVar9 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar8 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_e0 = param_2;
  uStack_d8 = param_3;
  lStack_d0 = param_1;
  ppuStack_b0 = &puStack_60;
  puStack_a8 = puVar9;
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
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (*(long *)(lVar8 + 0x28) == 0) {
    return;
  }
  lVar6 = *(long *)(lVar8 + 0x90);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + 0x38);
    uVar10 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar8 + 0xb0) = uVar11;
    *(undefined8 *)(lVar8 + 0xa8) = uVar10;
    *(undefined8 *)(lVar8 + 0xa0) = uVar4;
    *(undefined8 *)(lVar8 + 0x98) = uVar2;
    if (*(long *)(lVar6 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x28) + 0x28);
    if (lVar6 != 0) {
      uStack_e8 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_e8,uRam0000000003d57270), lVar6 != 0)) {
        uStack_f0 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar8 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar8 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_130,lVar6,uRam0000000003d3d2e8);
          bVar7 = false;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_130,uRam0000000003d334f0), uVar2 = uStack_120,
                (uVar3 & 1) != 0) {
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_140 = uStack_f8;
            uStack_168 = uStack_120;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e8,uVar4,0);
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
              bVar7 = true;
            }
            uStack_168 = uVar2;
            uVar2 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f0,uVar2,0);
            if (!bVar7 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar8 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
    if (lVar8 == 0) {
      return;
    }
    func_0x00f78ac0(lVar8,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14e6a28 | Atlas.Gameplay.Usables.SatelliteUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6b4c) */
/* WARNING: Removing unreachable block (ram,0x014e6a98) */
/* WARNING: Removing unreachable block (ram,0x014e6a9c) */
/* WARNING: Removing unreachable block (ram,0x014e6ab0) */
/* WARNING: Removing unreachable block (ram,0x014e6ac8) */
/* WARNING: Removing unreachable block (ram,0x014e6ad0) */
/* WARNING: Removing unreachable block (ram,0x014e6adc) */
/* WARNING: Removing unreachable block (ram,0x014e6ae0) */
/* WARNING: Removing unreachable block (ram,0x014e6b0c) */
/* WARNING: Removing unreachable block (ram,0x014e6b14) */
/* WARNING: Removing unreachable block (ram,0x014e6b1c) */
/* WARNING: Removing unreachable block (ram,0x014e6b68) */
/* WARNING: Removing unreachable block (ram,0x014e6b24) */
/* WARNING: Removing unreachable block (ram,0x014e6b3c) */
/* WARNING: Removing unreachable block (ram,0x014e6b44) */
/* WARNING: Removing unreachable block (ram,0x014e6b6c) */
/* WARNING: Removing unreachable block (ram,0x014e6b88) */
/* WARNING: Removing unreachable block (ram,0x014e6ba8) */
/* WARNING: Removing unreachable block (ram,0x014e6bc4) */
/* WARNING: Removing unreachable block (ram,0x014e6bd0) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x01523890) */
/* WARNING: Removing unreachable block (ram,0x015238ac) */
/* WARNING: Removing unreachable block (ram,0x015238c0) */
/* WARNING: Removing unreachable block (ram,0x015238c8) */
/* WARNING: Removing unreachable block (ram,0x015238d0) */
/* WARNING: Removing unreachable block (ram,0x015238e8) */
/* WARNING: Removing unreachable block (ram,0x015238f0) */
/* WARNING: Removing unreachable block (ram,0x01523908) */
/* WARNING: Removing unreachable block (ram,0x01523910) */
/* WARNING: Removing unreachable block (ram,0x01523938) */
/* WARNING: Removing unreachable block (ram,0x01523950) */
/* WARNING: Removing unreachable block (ram,0x01523958) */
/* WARNING: Removing unreachable block (ram,0x0152395c) */
/* WARNING: Removing unreachable block (ram,0x01523970) */
/* WARNING: Removing unreachable block (ram,0x01523974) */
/* WARNING: Removing unreachable block (ram,0x01523980) */
/* WARNING: Removing unreachable block (ram,0x015239b0) */
/* WARNING: Removing unreachable block (ram,0x01523988) */
/* WARNING: Removing unreachable block (ram,0x014e6b98) */
/* WARNING: Removing unreachable block (ram,0x014e6b9c) */
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

void Atlas_Gameplay_Usables_SatelliteUsable__OnExitPool
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4c13 & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb4c13 = 1;
  }
  uStack_58 = 0x14e6a98;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (param_2 != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
    param_2 = *(long *)(param_2 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_2,0);
    if (lVar8 != 0) {
      uVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar2,uRam0000000003d572a0);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      puVar9 = &UNK_01523aa4;
      lVar8 = param_1;
      goto code_r0x01523ba8;
    }
  }
  puVar9 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar8 = func_0x00f78af4();
code_r0x01523ba8:
  lStack_e0 = param_2;
  uStack_d8 = param_3;
  lStack_d0 = param_1;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  ppuStack_b0 = &puStack_60;
  puStack_a8 = puVar9;
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
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (*(long *)(lVar8 + 0x28) == 0) {
    return;
  }
  lVar6 = *(long *)(lVar8 + 0x90);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + 0x38);
    uVar10 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar8 + 0xb0) = uVar11;
    *(undefined8 *)(lVar8 + 0xa8) = uVar10;
    *(undefined8 *)(lVar8 + 0xa0) = uVar4;
    *(undefined8 *)(lVar8 + 0x98) = uVar2;
    if (*(long *)(lVar6 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x28) + 0x28);
    if (lVar6 != 0) {
      uStack_e8 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_e8,uRam0000000003d57270), lVar6 != 0)) {
        uStack_f0 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar8 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar8 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_130,lVar6,uRam0000000003d3d2e8);
          bVar7 = false;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_130,uRam0000000003d334f0), uVar2 = uStack_120,
                (uVar3 & 1) != 0) {
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_140 = uStack_f8;
            uStack_168 = uStack_120;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e8,uVar4,0);
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
              bVar7 = true;
            }
            uStack_168 = uVar2;
            uVar2 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f0,uVar2,0);
            if (!bVar7 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar8 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
    if (lVar8 == 0) {
      return;
    }
    func_0x00f78ac0(lVar8,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14e6b6c | Atlas.Gameplay.Usables.SatelliteUsable.TryGetPostProcessingBehaviour
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

long Atlas_Gameplay_Usables_SatelliteUsable__TryGetPostProcessingBehaviour
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  int extraout_w1;
  bool bVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  lVar2 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
  if (lVar2 != 0) {
    return *(long *)(lVar2 + 0x200);
  }
  lVar2 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Usables_SatelliteUsable__OnEnterPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar2 + 0xd0) != 0) {
    param_3 = 0;
    /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(*(long *)(lVar2 + 0xd0),0);
  }
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar2 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar2 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar2 + 100),*(undefined4 *)(lVar2 + 0x68),
                    *(undefined4 *)(lVar2 + 0x6c),lVar3,0);
    if ((*(long *)(lVar2 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar2 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x74),
                      *(undefined4 *)(lVar2 + 0x78),*(undefined4 *)(lVar2 + 0x7c),lVar3,0);
      if ((*(long *)(lVar2 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar2 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar2 + 0x80),*(undefined4 *)(lVar2 + 0x84),
                        *(undefined4 *)(lVar2 + 0x88),lVar3,0);
        *(undefined1 *)(lVar2 + 0x19) = 0;
        *(undefined8 *)(lVar2 + 0x98) = 0;
        *(undefined8 *)(lVar2 + 0x90) = 0;
        *(undefined8 *)(lVar2 + 0xa8) = 0;
        *(undefined8 *)(lVar2 + 0xa0) = 0;
        *(undefined8 *)(lVar2 + 0xb8) = 0;
        *(undefined8 *)(lVar2 + 0xb0) = 0;
        if (*(long *)(lVar2 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(lVar2 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if ((int)lVar4 != 0) {
            if (lVar3 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar3 + 0x46) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            *(undefined1 *)(lVar3 + 0x44) = 0;
          }
          if (*(long *)(lVar2 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar2 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar2 + 0x48) = 0;
            *(undefined1 *)(lVar2 + 0x18) = 0;
            *(undefined8 *)(lVar2 + 0x28) = 0;
            *(undefined8 *)(lVar2 + 0x30) = 0;
            *(undefined4 *)(lVar2 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar2 + 0x60) = 0;
            return lVar4;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar3 = auVar14._8_8_;
  lVar2 = auVar14._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_50 = &puStack_30;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar2 + 0x19) = 1;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(long *)(lVar2 + 0x30) = lVar3;
  *(undefined8 *)(lVar2 + 0x48) = param_3;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  if ((*(long *)(lVar2 + 0x58) != 0) && (lVar3 != 0)) {
    lVar4 = *(long *)(*(long *)(lVar2 + 0x58) + 0x10);
    lVar3 = *(long *)(lVar3 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar3,0);
    if (lVar4 != 0) {
      uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,uVar5,uRam0000000003d572a0);
      *(undefined8 *)(lVar2 + 0x90) = uVar5;
      puVar11 = &UNK_01523aa4;
      lVar4 = lVar2;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar4 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar6 = lVar4;
  lStack_d0 = lVar3;
  uStack_c8 = param_3;
  lStack_c0 = lVar2;
  pppuStack_a0 = &ppuStack_50;
  puStack_98 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    lVar6 = func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (*(long *)(lVar4 + 0x28) == 0) {
    return lVar6;
  }
  lVar2 = *(long *)(lVar4 + 0x90);
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    uVar13 = *(undefined8 *)(lVar2 + 0x38);
    uVar12 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar4 + 0xb0) = uVar13;
    *(undefined8 *)(lVar4 + 0xa8) = uVar12;
    *(undefined8 *)(lVar4 + 0xa0) = uVar8;
    *(undefined8 *)(lVar4 + 0x98) = uVar5;
    if (*(long *)(lVar2 + 0x48) == 0) {
      return lVar6;
    }
    if (*(int *)(*(long *)(lVar2 + 0x48) + 0x18) == 0) {
      return lVar6;
    }
    lVar2 = *(long *)(*(long *)(lVar4 + 0x28) + 0x28);
    if (lVar2 != 0) {
      uStack_d8 = *(undefined8 *)(lVar2 + 0xc0);
      if (((*(long *)(lVar4 + 0x58) != 0) &&
          (lVar2 = *(long *)(*(long *)(lVar4 + 0x58) + 0x10), lVar2 != 0)) &&
         (lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,uStack_d8,uRam0000000003d57270), lVar2 != 0)) {
        uStack_e0 = *(undefined8 *)(lVar2 + 0x70);
        if ((*(long *)(lVar4 + 0x90) != 0) &&
           (lVar2 = *(long *)(*(long *)(lVar4 + 0x90) + 0x48), lVar2 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_120,lVar2,uRam0000000003d3d2e8);
          bVar10 = false;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_120,uRam0000000003d334f0), uVar5 = uStack_110,
                (uVar7 & 1) != 0) {
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_138 = uStack_f0;
            uStack_140 = uStack_f8;
            uStack_130 = uStack_e8;
            uStack_158 = uStack_110;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_158);
            uVar7 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_d8,uVar8,0);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(lVar4 + 0xa0) = uStack_148;
              *(undefined8 *)(lVar4 + 0x98) = uStack_150;
              *(undefined8 *)(lVar4 + 0xb0) = uStack_138;
              *(undefined8 *)(lVar4 + 0xa8) = uStack_140;
              *(undefined8 *)(lVar4 + 0xb8) = uStack_130;
              bVar10 = true;
            }
            uStack_158 = uVar5;
            uVar5 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_158);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e0,uVar5,0);
            if (!bVar10 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar4 + 0xa0) = uStack_148;
              *(undefined8 *)(lVar4 + 0x98) = uStack_150;
              *(undefined8 *)(lVar4 + 0xb0) = uStack_138;
              *(undefined8 *)(lVar4 + 0xa8) = uStack_140;
              *(undefined8 *)(lVar4 + 0xb8) = uStack_130;
            }
          }
          lVar2 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_120,uRam0000000003d334e8);
          return lVar2;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar3 = *plVar9;
    ___cxa_end_catch();
    lVar2 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_120,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return lVar2;
    }
    func_0x00f78ac0(lVar3,0);
  }
  lVar2 = __Unwind_Resume();
  return lVar2;
}



// ============================================================
// RVA: 0x14e6bac | Atlas.Gameplay.Usables.SatelliteUsable.OnEnterPool
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

void Atlas_Gameplay_Usables_SatelliteUsable__OnEnterPool
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
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    param_3 = 0;
    /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(*(long *)(param_1 + 0xd0),0);
  }
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
// RVA: 0x14e6be4 | Atlas.Gameplay.Usables.SatelliteUsable.DeSpawn
// ============================================================

/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_SatelliteUsable__DeSpawn
                 (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  long lVar14;
  int *piVar15;
  long unaff_x22;
  long lVar16;
  long *unaff_x24;
  long lVar17;
  long *unaff_x25;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  long lStack_198;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long alStack_e8 [2];
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  
  if ((bRam0000000003eb4c14 & 1) == 0) {
    func_0x00f78a20(0x3d5ff20);
    bRam0000000003eb4c14 = 1;
  }
  lVar14 = lRam0000000003d5ff20;
  lVar5 = param_1[2];
  if (lVar5 == 0) {
    auVar23 = func_0x00f78af4();
    plVar7 = auVar23._8_8_;
    lVar5 = auVar23._0_8_;
    lVar14 = 0x3eb4000;
    if ((bRam0000000003eb4c15 & 1) == 0) {
      func_0x00f78a20(0x3d22618);
      func_0x00f78a20(0x3d3ae30);
      func_0x00f78a20(0x3d3ae38);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4c15 = 1;
    }
    plVar13 = (long *)/*Atlas.Gameplay.Usables.Usable$$Update*/ func_0x01523f78(lVar5,plVar7,0);
    if (*(char *)(lVar5 + 0x18) != '\0') {
      if (*(long *)(lVar5 + 0xf8) == 0) {
        return plVar13;
      }
      if (*(int *)(*(long *)(lVar5 + 0xf8) + 0x18) < 1) {
        return plVar13;
      }
      fVar20 = *(float *)(lVar5 + 0xe0);
      if (0.0 <= fVar20) {
        if (plVar7 == (long *)0x0) goto code_r0x014e72fc;
        lVar11 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar12 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014e6d40;
            }
            piVar15 = piVar15 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014e6d40:
        fVar19 = (float)(*(code *)*puVar12)(plVar7,puVar12[1]);
        fVar20 = fVar20 - fVar19;
        *(float *)(lVar5 + 0xe0) = fVar20;
        if (fVar20 < 0.0) {
          if (*(long *)(lVar5 + 0xf8) == 0) goto code_r0x014e72fc;
          if (*(int *)(lVar5 + 0x108) < *(int *)(*(long *)(lVar5 + 0xf8) + 0x18)) {
            lVar11 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar5,0);
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x40) == 0)) goto code_r0x014e72fc;
            lVar14 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(*(long *)(lVar11 + 0x40),1,0);
            if (lVar14 == 0) {
              return (long *)0x0;
            }
            lVar11 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar5,0);
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x1d0) == 0)) goto code_r0x014e72fc;
            unaff_x22 = *(long *)(*(long *)(lVar11 + 0x1d0) + 0x40);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar13 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x22,0,0);
            if (((ulong)plVar13 & 1) != 0) {
              return plVar13;
            }
            fVar20 = *(float *)(lVar14 + 0x70);
            iVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar14,0);
            if (unaff_x22 == 0) goto code_r0x014e72fc;
            lVar11 = *(long *)(lVar5 + 0xf8);
            lVar14 = 0;
            if (lVar11 == 0) goto code_r0x014e72fc;
            fVar19 = *(float *)(unaff_x22 + 0x58);
            uVar4 = *(uint *)(lVar5 + 0x108);
            if (*(uint *)(lVar11 + 0x18) <= uVar4) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar14 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
            if (*(long *)(lVar5 + 0x28) != lVar14) {
              if ((lVar14 == 0) || (lVar11 = *(long *)(lVar14 + 0x90), lVar11 == 0))
              goto code_r0x014e72fc;
              fVar21 = *(float *)(lVar11 + 0x70);
              iVar3 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar11,0);
              fVar22 = *(float *)(unaff_x22 + 0x58);
              lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar5);
              if (lVar11 == 0) goto code_r0x014e72fc;
              fVar21 = fVar21 * fVar22 + fVar22 * (float)(iVar3 + -1);
              lVar11 = /*Atlas.Definitions.SatelliteUsableDefinition$$GetTriggerEffectFromDistanceToFirst*/ func_0x014e77b8((fVar20 * fVar19 + fVar19 * (float)(iVar2 + -1)) - fVar21,
                                       fVar21,lVar11,0);
              if ((*(long *)(lVar14 + 0x10) == 0) ||
                 (lVar16 = *(long *)(*(long *)(lVar14 + 0x10) + 0x60), lVar16 == 0))
              goto code_r0x014e72fc;
              unaff_x22 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield
                                    (lVar16,0);
              uVar8 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar5);
              if (*(long *)(lVar14 + 0x10) == 0) goto code_r0x014e72fc;
              uVar18 = *(undefined8 *)(lVar5 + 0x28);
              lVar16 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar14 + 0x10),0);
              /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar16 + 0x13c),*(undefined4 *)(lVar16 + 0x140),
                              *(undefined4 *)(lVar16 + 0x144),0);
              iVar2 = Atlas_Gameplay_Kart_KartComposite__OnUsableHit(lVar14,lVar11,uVar8,uVar18,0);
              if (iVar2 != 0) {
                if ((lVar11 == 0) || (*(long *)(lVar14 + 0x30) == 0)) goto code_r0x014e72fc;
                Atlas_Gameplay_Kart_KartVisualAnimation__TriggerLaserWheelSpark
                          (*(long *)(lVar14 + 0x30),1,0);
                if (*(int *)(lVar14 + 0x50) == 0) {
                  *(undefined1 *)(lVar5 + 0x128) = 1;
                }
              }
              if (*(long *)(lVar14 + 0x70) != 0) {
                /*Atlas.Audio.KartAudio$$LaserStrike*/ func_0x015c0fbc(*(long *)(lVar14 + 0x70),unaff_x22,0);
              }
            }
            *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)(lVar5 + 0x100);
            *(int *)(lVar5 + 0x108) = *(int *)(lVar5 + 0x108) + 1;
          }
        }
      }
      fVar20 = *(float *)(lVar5 + 0xe4);
      if (0.0 <= fVar20) {
        if (plVar7 == (long *)0x0) goto code_r0x014e72fc;
        lVar14 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014e6fc4;
            }
            piVar15 = piVar15 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014e6fc4:
        fVar19 = (float)(*(code *)*puVar12)(plVar7,puVar12[1]);
        fVar20 = fVar20 - fVar19;
        *(float *)(lVar5 + 0xe4) = fVar20;
        if (fVar20 < 0.0) {
          lVar14 = *(long *)(lVar5 + 0xf8);
          if (lVar14 == 0) goto code_r0x014e72fc;
          uVar4 = *(uint *)(lVar5 + 0x104);
          unaff_x22 = (long)(int)uVar4;
          if ((int)uVar4 < (int)*(uint *)(lVar14 + 0x18)) {
            if (*(uint *)(lVar14 + 0x18) <= uVar4) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar11 = *(long *)(*(long *)(lVar14 + 0x10) + unaff_x22 * 8 + 0x20);
            if (*(long *)(lVar5 + 0x28) != lVar11) {
              if (((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) ||
                 (lVar16 = *(long *)(*(long *)(lVar11 + 0x10) + 0x60), lVar16 == 0))
              goto code_r0x014e72fc;
              lVar11 = *(long *)(lVar11 + 0x30);
              uVar8 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield
                                (lVar16,0);
              lVar14 = 0;
              if (lVar11 == 0) goto code_r0x014e72fc;
              Atlas_Gameplay_Kart_KartVisualAnimation__TriggerSatelliteHitVFX(lVar11,uVar8,0);
            }
            *(undefined4 *)(lVar5 + 0xe4) = *(undefined4 *)(lVar5 + 0x100);
            *(int *)(lVar5 + 0x104) = *(int *)(lVar5 + 0x104) + 1;
          }
        }
      }
      lVar14 = *(long *)(lVar5 + 0xd8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
      if (iVar2 != 0) {
        if ((*(long *)(lVar5 + 0x28) == 0) ||
           (lVar11 = *(long *)(*(long *)(lVar5 + 0x28) + 0x90), lVar11 == 0)) goto code_r0x014e72fc;
        if (*(char *)(lVar11 + 0x98) == '\0') {
          uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar5 + 0x110),0);
          if (((uVar9 & 1) == 0) && (fVar20 = *(float *)(lVar5 + 0xe8), 0.0 <= fVar20)) {
            if (plVar7 == (long *)0x0) goto code_r0x014e72fc;
            fVar19 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,plVar7);
            fVar20 = fVar20 - fVar19;
            *(float *)(lVar5 + 0xe8) = fVar20;
            if (fVar20 < 0.0) {
              if (*(long *)(lVar5 + 0xd8) == 0) goto code_r0x014e72fc;
              /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(lVar5 + 0xd8),*(undefined8 *)(lVar5 + 0x110),1,0);
              if (*(long *)(lVar5 + 0x130) != 0) {
                lVar11 = *(long *)(*(long *)(lVar5 + 0x130) + 0x18);
                if (lVar11 == 0) goto code_r0x014e72fc;
                lVar14 = *(long *)(lVar5 + 0xd0);
                uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
                if (lVar14 == 0) goto code_r0x014e72fc;
                /*Atlas.Audio.WeaponAudio$$InTransit*/ func_0x0152fed0(lVar14,uVar8,0);
              }
            }
          }
          uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar5 + 0x120),0);
          if (((uVar9 & 1) == 0) && (fVar20 = *(float *)(lVar5 + 0xf0), 0.0 <= fVar20)) {
            if (plVar7 == (long *)0x0) goto code_r0x014e72fc;
            fVar19 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,plVar7);
            fVar20 = fVar20 - fVar19;
            *(float *)(lVar5 + 0xf0) = fVar20;
            if (fVar20 < 0.0) {
              if (*(long *)(lVar5 + 0xd8) == 0) goto code_r0x014e72fc;
              /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(lVar5 + 0xd8),*(undefined8 *)(lVar5 + 0x120),1,0);
            }
          }
          uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar5 + 0x118),0);
          if (((uVar9 & 1) == 0) && (fVar20 = *(float *)(lVar5 + 0xec), 0.0 <= fVar20)) {
            if (plVar7 == (long *)0x0) goto code_r0x014e72fc;
            fVar19 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,plVar7);
            fVar20 = fVar20 - fVar19;
            *(float *)(lVar5 + 0xec) = fVar20;
            if ((fVar20 < 0.0) && (*(char *)(lVar5 + 0x128) != '\0')) {
              if (*(long *)(lVar5 + 0xd8) == 0) goto code_r0x014e72fc;
              /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(lVar5 + 0xd8),*(undefined8 *)(lVar5 + 0x118),1,0);
            }
          }
        }
      }
    }
    lVar14 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour(lVar5);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar13 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
    if ((int)plVar13 == 0) {
      return plVar13;
    }
    plVar13 = (long *)Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour(lVar5);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar12 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x014e72c4;
          }
          piVar15 = piVar15 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014e72c4:
      fVar20 = (float)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar13 != (long *)0x0) {
        plVar7 = plVar13;
        if ((bRam0000000003eb4c1a & 1) == 0) {
          plVar7 = (long *)func_0x00f78a20(0x3d23990,0);
          bRam0000000003eb4c1a = 1;
        }
        if (((*(char *)((long)plVar13 + 100) == '\0') || (*(float *)(plVar13 + 0xd) < 0.0)) ||
           (fVar20 = *(float *)(plVar13 + 0xd) - fVar20, *(float *)(plVar13 + 0xd) = fVar20,
           0.0 <= fVar20)) {
          return plVar7;
        }
        *(undefined4 *)(plVar13 + 0xd) = 0xbf800000;
        lVar14 = plVar13[10];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
        if ((int)plVar7 != 0) {
          lVar14 = plVar13[10];
          if (lVar14 != 0) {
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar7 = (long *)(*pcRam0000000003ebf4c0)(lVar14,0);
            return plVar7;
          }
          plVar7 = (long *)func_0x00f78af4();
          if ((bRam0000000003eb4e52 & 1) == 0) {
            func_0x00f78a20(0x3d25750,0);
            bRam0000000003eb4e52 = 1;
          }
          lVar14 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
          /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(lVar14,0);
          plVar7[7] = lVar14;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if ((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) == 0) {
            return plVar7;
          }
          if (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) != 0) {
            return plVar7;
          }
          func_0x00f78ad0();
          return plVar7;
        }
        return plVar7;
      }
    }
code_r0x014e72fc:
    lVar5 = func_0x00f78af4();
    puStack_c0 = (undefined8 *)unaff_x22;
    lStack_b8 = lVar14;
    if ((bRam0000000003eb4c16 & 1) == 0) {
      func_0x00f78a20(0x3d3ae38);
      bRam0000000003eb4c16 = 1;
    }
    /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(lVar5,0);
    if (*(long *)(lVar5 + 0xd0) != 0) {
      /*Atlas.Audio.WeaponAudio$$Use*/ func_0x0152fe60(*(long *)(lVar5 + 0xd0),0);
      lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour(lVar5);
      if (lVar11 != 0) {
        /*Atlas.Gameplay.Usables.SatelliteUsableBehaviour$$SetInUseVFX*/ func_0x014e7514(lVar11,0);
        lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar5);
        if (lVar11 != 0) {
          *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)(lVar11 + 0x68);
          plVar7 = (long *)Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                     (lVar5);
          if (plVar7 != (long *)0x0) {
            *(undefined4 *)(lVar5 + 0xe4) = *(undefined4 *)((long)plVar7 + 0x6c);
            if (*(long *)(lVar5 + 0x28) != 0) {
              if (*(int *)(*(long *)(lVar5 + 0x28) + 0x50) == 0) {
                return plVar7;
              }
              *(undefined4 *)(lVar5 + 0xe8) = 0;
              lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar5);
              if (lVar11 != 0) {
                *(undefined4 *)(lVar5 + 0xec) = *(undefined4 *)(lVar11 + 0x90);
                lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                   (lVar5);
                if (lVar11 != 0) {
                  *(undefined8 *)(lVar5 + 0x110) = *(undefined8 *)(lVar11 + 0x78);
                  lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                     (lVar5);
                  if (lVar11 != 0) {
                    *(undefined8 *)(lVar5 + 0x118) = *(undefined8 *)(lVar11 + 0x98);
                    lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                       (lVar5);
                    if (lVar11 != 0) {
                      *(undefined8 *)(lVar5 + 0x120) = *(undefined8 *)(lVar11 + 0x88);
                      lVar11 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                         (lVar5);
                      if (lVar11 != 0) {
                        *(undefined4 *)(lVar5 + 0xf0) = *(undefined4 *)(lVar11 + 0x80);
                        plVar7 = (long *)Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex
                                                   (*(undefined8 *)(lVar5 + 0xf8),0);
                        uVar4 = (uint)plVar7;
                        if ((int)uVar4 < 0) {
                          return plVar7;
                        }
                        lVar11 = *(long *)(lVar5 + 0xf8);
                        lVar14 = 0;
                        if (lVar11 != 0) {
                          plVar13 = plVar7;
                          if (*(uint *)(lVar11 + 0x18) <= uVar4) {
                            plVar13 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                          }
                          *(undefined8 *)(lVar5 + 0x130) =
                               *(undefined8 *)
                                (*(long *)(lVar11 + 0x10) + ((ulong)plVar7 & 0xffffffff) * 8 + 0x20)
                          ;
                          fVar20 = *(float *)(lVar5 + 0x100) * (float)(int)uVar4;
                          *(ulong *)(lVar5 + 0xe8) =
                               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0xe8) >> 0x20) +
                                        fVar20,(float)*(undefined8 *)(lVar5 + 0xe8) + fVar20);
                          *(float *)(lVar5 + 0xf0) = fVar20 + *(float *)(lVar5 + 0xf0);
                          return plVar13;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    plVar7 = (long *)func_0x00f78af4();
    alStack_e8[1] = 0x3eb4000;
    puStack_c8 = &Atlas_Gameplay_Usables_SatelliteUsable___ctor;
    if ((bRam0000000003eb4c17 & 1) == 0) {
      lStack_f0 = unaff_x22;
      alStack_e8[0] = lVar14;
      puStack_d8 = (undefined8 *)lVar5;
      puStack_d0 = &stack0xffffffffffffff60;
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb4c17 = 1;
    }
    auVar23 = NEON_fmov(0xbf800000,4);
    plVar7[0x1d] = auVar23._8_8_;
    plVar7[0x1c] = auVar23._0_8_;
    *(undefined4 *)(plVar7 + 0x1e) = 0xbf800000;
    *(undefined4 *)(plVar7 + 0x20) = 0x3dcccccd;
    lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    plVar7[0x22] = lVar14;
    plVar7[0x23] = lVar14;
    plVar7[0x24] = lVar14;
    return plVar7;
  }
  lVar11 = lRam0000000003d5ff20;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_1 == (long *)0x0) goto code_r0x01a3f500;
  lVar16 = param_1[9];
  lVar17 = *(long *)(*(long *)(lVar14 + 0x30) + 8);
  if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar17);
  }
  if (lVar16 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar16,lVar17);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar16,lVar17);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
  lVar16 = *(long *)(lVar5 + 0x18);
  unaff_x24 = *(long **)(*(long *)(lVar14 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)), lVar16 != 0))
  {
    param_4 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18);
    (*(code *)*param_4)(lVar16,uVar8);
    lVar11 = lVar6;
    if (*(long *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                                 (*(long *)(lVar5 + 0x10),param_1);
      return plVar7;
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  lVar16 = 0x3eb6000;
  lVar14 = lVar11;
  puVar12 = param_4;
  lVar5 = param_5;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(alStack_e8,param_4,uRam0000000003d3a7d0);
  puStack_c0 = puStack_d8;
  while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&puStack_d0,uRam0000000003d325c8), puVar10 = puStack_c0,
        (uVar9 & 1) != 0) {
    lVar16 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    if (puVar10 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar17 = func_0x00f78adc(puVar10,lVar16);
    if (lVar17 == 0) {
      func_0x00f78e5c(puVar10,lVar16);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar10;
    if ((*(long *)(lVar17 + 0x28) == extraout_x1) && (*(char *)(lVar17 + 0x18) != '\0')) {
      if (lVar11 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar11);
    }
  }
  param_5 = 0;
  do {
    alStack_e8[0] = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(alStack_e8[0] + 0x12a);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(alStack_e8[0] + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x24) {
          puVar10 = (undefined8 *)(alStack_e8[0] + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar15 = piVar15 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    lVar14 = 0;
    puVar10 = (undefined8 *)func_0x00fac1f0(alStack_e8);
code_r0x01a3f69c:
    plVar7 = (long *)(*(code *)*puVar10)(alStack_e8 + 1,puVar10[1]);
    if (param_5 == 0) {
      return plVar7;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar7 = (long *)___cxa_begin_catch();
    param_5 = *plVar7;
    ___cxa_end_catch();
  } while( true );
  auVar23 = __Unwind_Resume();
  lStack_148 = auVar23._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar17 = lVar14;
  puVar10 = puVar12;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar11;
  lStack_108 = param_5;
  puStack_100 = &stack0xffffffffffffffa0;
  if ((*(long *)(lStack_148 + 0x20) != 0) &&
     (lVar6 = (*(code *)**(undefined8 **)puVar12[6])(), param_5 = lVar14, lVar11 = auVar23._8_8_,
     param_4 = puVar12, lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*(code *)**(undefined8 **)(puVar12[6] + 8))
                               (lStack_148,auVar23._8_8_,lVar14,*(undefined8 *)(lVar6 + 0x10));
    return plVar7;
  }
  auVar23 = func_0x00f78af4();
  lVar6 = auVar23._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar7 = (long *)0x3eb6000;
  lVar14 = lVar17;
  plStack_160 = unaff_x24;
  lStack_158 = lVar16;
  puStack_150 = param_4;
  lStack_140 = lVar11;
  lStack_138 = param_5;
  ppuStack_130 = &puStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar23._0_8_ + 0x18) == 0) ||
       (lVar11 = (**(code **)**(undefined8 **)(lVar5 + 0x30))(), lVar11 == 0)) ||
      (lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8))(), lVar11 == 0)) ||
     (lVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(), lVar11 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar7 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x18))(&lStack_198);
  uStack_170 = uStack_188;
  do {
    uVar9 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(auStack_180,*(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x30));
    if ((uVar9 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
      do {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x30) + 0x38);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
        lStack_198 = lVar5;
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *plVar7) {
              puVar12 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar15 = piVar15 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        lVar14 = 0;
        puVar12 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar13 = (long *)(*(code *)*puVar12)(auStack_190,puVar12[1]);
        if (puVar10 == (undefined8 *)0x0) {
          return plVar13;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar10,0);
        if (extraout_w1_00 != 1) {
          auVar23 = __Unwind_Resume();
          lVar11 = auVar23._0_8_;
          plVar7 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar7 == (long *)0x0) {
            puVar12 = (undefined8 *)func_0x00f78af4();
            plVar7 = (long *)*puVar12;
            func_0x00f78a30();
            return plVar7;
          }
          (**(code **)(*plVar7 + 0x1e8))
                    (plVar7,lVar11,auVar23._8_8_,*(undefined8 *)(lVar11 + 0x38),
                     *(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(*plVar7 + 0x1f0),param_7,param_8
                     ,lVar6,lVar17,puVar10,lVar5);
          return plVar7;
        }
        puVar10 = (undefined8 *)___cxa_begin_catch();
        puVar10 = (undefined8 *)*puVar10;
        ___cxa_end_catch();
      } while( true );
    }
    lVar11 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(auStack_180,*(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x20));
    if (lVar17 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar17,0);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar11 + 0x48) = puVar10;
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar6 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar11,lVar17,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x14e6c3c | Atlas.Gameplay.Usables.SatelliteUsable.Update
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_SatelliteUsable__Update(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if ((bRam0000000003eb4c15 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c15 = 1;
  }
  auVar18 = /*Atlas.Gameplay.Usables.Usable$$Update*/ func_0x01523f78(param_1,param_2,0);
  if (*(char *)(param_1 + 0x18) == '\0') {
LAB_014e7208:
    uVar7 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour(param_1);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar18 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if (auVar18._0_4_ == 0) {
      return auVar18;
    }
    uVar10 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour(param_1);
    if (param_2 != (long *)0x0) {
      lVar9 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014e72c4;
          }
          piVar12 = piVar12 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014e72c4:
      fVar15 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      if (uVar10 != 0) {
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar10;
        if ((bRam0000000003eb4c1a & 1) == 0) {
          auVar19 = func_0x00f78a20(0x3d23990,0);
          bRam0000000003eb4c1a = 1;
        }
        if (((*(char *)(uVar10 + 100) == '\0') || (*(float *)(uVar10 + 0x68) < 0.0)) ||
           (fVar15 = *(float *)(uVar10 + 0x68) - fVar15, *(float *)(uVar10 + 0x68) = fVar15,
           0.0 <= fVar15)) {
          return auVar19;
        }
        *(undefined4 *)(uVar10 + 0x68) = 0xbf800000;
        uVar7 = *(undefined8 *)(uVar10 + 0x50);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar18 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
        if (auVar18._0_4_ == 0) {
          return auVar18;
        }
        lVar9 = *(long *)(uVar10 + 0x50);
        if (lVar9 != 0) {
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar18 = (*pcRam0000000003ebf4c0)(lVar9,0);
          return auVar18;
        }
        uVar10 = func_0x00f78af4();
        if ((bRam0000000003eb4e52 & 1) == 0) {
          func_0x00f78a20(0x3d25750,0);
          bRam0000000003eb4e52 = 1;
        }
        uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
        /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar7,0);
        *(undefined8 *)(uVar10 + 0x38) = uVar7;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto System_Object___ctor;
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0xf8) == 0) {
      return auVar18;
    }
    if (*(int *)(*(long *)(param_1 + 0xf8) + 0x18) < 1) {
      return auVar18;
    }
    fVar15 = *(float *)(param_1 + 0xe0);
    if (fVar15 < 0.0) {
LAB_014e6f60:
      fVar15 = *(float *)(param_1 + 0xe4);
      if (0.0 <= fVar15) {
        if (param_2 == (long *)0x0) goto LAB_014e72fc;
        lVar9 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014e6fc4;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014e6fc4:
        fVar14 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
        fVar15 = fVar15 - fVar14;
        *(float *)(param_1 + 0xe4) = fVar15;
        if (fVar15 < 0.0) {
          lVar9 = *(long *)(param_1 + 0xf8);
          if (lVar9 == 0) goto LAB_014e72fc;
          uVar3 = *(uint *)(param_1 + 0x104);
          if ((int)uVar3 < (int)*(uint *)(lVar9 + 0x18)) {
            if (*(uint *)(lVar9 + 0x18) <= uVar3) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
            if (*(long *)(param_1 + 0x28) != lVar9) {
              if (((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) &&
                 (lVar5 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar5 != 0)) {
                lVar9 = *(long *)(lVar9 + 0x30);
                uVar7 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield
                                  (lVar5,0);
                if (lVar9 != 0) {
                  Atlas_Gameplay_Kart_KartVisualAnimation__TriggerSatelliteHitVFX(lVar9,uVar7,0);
                  goto code_r0x014e7054;
                }
              }
              goto LAB_014e72fc;
            }
code_r0x014e7054:
            *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x100);
            *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
          }
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 0xd8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if (iVar1 != 0) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x90), lVar9 == 0)) goto LAB_014e72fc;
        if (*(char *)(lVar9 + 0x98) == '\0') {
          uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x110),0);
          if (((uVar10 & 1) == 0) && (fVar15 = *(float *)(param_1 + 0xe8), 0.0 <= fVar15)) {
            if (param_2 != (long *)0x0) {
              fVar14 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,param_2);
              fVar15 = fVar15 - fVar14;
              *(float *)(param_1 + 0xe8) = fVar15;
              if (0.0 <= fVar15) goto code_r0x014e7140;
              if (*(long *)(param_1 + 0xd8) != 0) {
                /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x110),1,0);
                if (*(long *)(param_1 + 0x130) == 0) goto code_r0x014e7140;
                lVar9 = *(long *)(*(long *)(param_1 + 0x130) + 0x18);
                if (lVar9 != 0) {
                  lVar5 = *(long *)(param_1 + 0xd0);
                  uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
                  if (lVar5 != 0) {
                    /*Atlas.Audio.WeaponAudio$$InTransit*/ func_0x0152fed0(lVar5,uVar7,0);
                    goto code_r0x014e7140;
                  }
                }
              }
            }
            goto LAB_014e72fc;
          }
code_r0x014e7140:
          uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x120),0);
          if (((uVar10 & 1) == 0) && (fVar15 = *(float *)(param_1 + 0xf0), 0.0 <= fVar15)) {
            if (param_2 == (long *)0x0) goto LAB_014e72fc;
            fVar14 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,param_2);
            fVar15 = fVar15 - fVar14;
            *(float *)(param_1 + 0xf0) = fVar15;
            if (fVar15 < 0.0) {
              if (*(long *)(param_1 + 0xd8) == 0) goto LAB_014e72fc;
              /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x120),1,0);
            }
          }
          uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x118),0);
          if (((uVar10 & 1) == 0) && (fVar15 = *(float *)(param_1 + 0xec), 0.0 <= fVar15)) {
            if (param_2 == (long *)0x0) goto LAB_014e72fc;
            fVar14 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,param_2);
            fVar15 = fVar15 - fVar14;
            *(float *)(param_1 + 0xec) = fVar15;
            if ((fVar15 < 0.0) && (*(char *)(param_1 + 0x128) != '\0')) {
              if (*(long *)(param_1 + 0xd8) == 0) goto LAB_014e72fc;
              /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x118),1,0);
            }
          }
        }
      }
      goto LAB_014e7208;
    }
    if (param_2 != (long *)0x0) {
      lVar9 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_014e6d40;
          }
          piVar12 = piVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014e6d40:
      fVar14 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      fVar15 = fVar15 - fVar14;
      *(float *)(param_1 + 0xe0) = fVar15;
      if (0.0 <= fVar15) goto LAB_014e6f60;
      if (*(long *)(param_1 + 0xf8) != 0) {
        if (*(int *)(*(long *)(param_1 + 0xf8) + 0x18) <= *(int *)(param_1 + 0x108))
        goto LAB_014e6f60;
        lVar9 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x40) != 0)) {
          auVar19 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(*(long *)(lVar9 + 0x40),1,0);
          lVar9 = auVar19._0_8_;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = auVar19._8_8_;
          if (lVar9 == 0) {
            return auVar18 << 0x40;
          }
          lVar5 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x1d0) != 0)) {
            lVar5 = *(long *)(*(long *)(lVar5 + 0x1d0) + 0x40);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auVar18 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
            if ((auVar18._0_8_ & 1) != 0) {
              return auVar18;
            }
            fVar15 = *(float *)(lVar9 + 0x70);
            iVar1 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar9,0);
            if ((lVar5 != 0) && (lVar9 = *(long *)(param_1 + 0xf8), lVar9 != 0)) {
              fVar14 = *(float *)(lVar5 + 0x58);
              uVar3 = *(uint *)(param_1 + 0x108);
              if (*(uint *)(lVar9 + 0x18) <= uVar3) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
              if (*(long *)(param_1 + 0x28) == lVar9) {
code_r0x014e6f4c:
                *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x100);
                *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
                goto LAB_014e6f60;
              }
              if ((lVar9 != 0) && (lVar6 = *(long *)(lVar9 + 0x90), lVar6 != 0)) {
                fVar16 = *(float *)(lVar6 + 0x70);
                iVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar6,0);
                fVar17 = *(float *)(lVar5 + 0x58);
                lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                  (param_1);
                if (lVar5 != 0) {
                  fVar16 = fVar16 * fVar17 + fVar17 * (float)(iVar2 + -1);
                  lVar5 = /*Atlas.Definitions.SatelliteUsableDefinition$$GetTriggerEffectFromDistanceToFirst*/ func_0x014e77b8((fVar15 * fVar14 + fVar14 * (float)(iVar1 + -1)) - fVar16,
                                          fVar16,lVar5,0);
                  if ((*(long *)(lVar9 + 0x10) != 0) &&
                     (lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar6 != 0)) {
                    uVar7 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield
                                      (lVar6,0);
                    uVar8 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                      (param_1);
                    if (*(long *)(lVar9 + 0x10) != 0) {
                      uVar13 = *(undefined8 *)(param_1 + 0x28);
                      lVar6 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar9 + 0x10),0);
                      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x13c),*(undefined4 *)(lVar6 + 0x140),
                                      *(undefined4 *)(lVar6 + 0x144),0);
                      iVar1 = Atlas_Gameplay_Kart_KartComposite__OnUsableHit
                                        (lVar9,lVar5,uVar8,uVar13,0);
                      if (iVar1 != 0) {
                        if ((lVar5 == 0) || (*(long *)(lVar9 + 0x30) == 0)) goto LAB_014e72fc;
                        Atlas_Gameplay_Kart_KartVisualAnimation__TriggerLaserWheelSpark
                                  (*(long *)(lVar9 + 0x30),1,0);
                        if (*(int *)(lVar9 + 0x50) == 0) {
                          *(undefined1 *)(param_1 + 0x128) = 1;
                        }
                      }
                      if (*(long *)(lVar9 + 0x70) != 0) {
                        /*Atlas.Audio.KartAudio$$LaserStrike*/ func_0x015c0fbc(*(long *)(lVar9 + 0x70),uVar7,0);
                      }
                      goto code_r0x014e6f4c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014e72fc:
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb4c16 & 1) == 0) {
    func_0x00f78a20(0x3d3ae38);
    bRam0000000003eb4c16 = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(lVar9,0);
  if (*(long *)(lVar9 + 0xd0) != 0) {
    /*Atlas.Audio.WeaponAudio$$Use*/ func_0x0152fe60(*(long *)(lVar9 + 0xd0),0);
    lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour(lVar9);
    if (lVar5 != 0) {
      /*Atlas.Gameplay.Usables.SatelliteUsableBehaviour$$SetInUseVFX*/ func_0x014e7514(lVar5,0);
      lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar9);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar9 + 0xe0) = *(undefined4 *)(lVar5 + 0x68);
        auVar18 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar9);
        if (auVar18._0_8_ != 0) {
          *(undefined4 *)(lVar9 + 0xe4) = *(undefined4 *)(auVar18._0_8_ + 0x6c);
          if (*(long *)(lVar9 + 0x28) != 0) {
            if (*(int *)(*(long *)(lVar9 + 0x28) + 0x50) == 0) {
              return auVar18;
            }
            *(undefined4 *)(lVar9 + 0xe8) = 0;
            lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar9);
            if (lVar5 != 0) {
              *(undefined4 *)(lVar9 + 0xec) = *(undefined4 *)(lVar5 + 0x90);
              lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar9);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar9 + 0x110) = *(undefined8 *)(lVar5 + 0x78);
                lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(lVar9)
                ;
                if (lVar5 != 0) {
                  *(undefined8 *)(lVar9 + 0x118) = *(undefined8 *)(lVar5 + 0x98);
                  lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                    (lVar9);
                  if (lVar5 != 0) {
                    *(undefined8 *)(lVar9 + 0x120) = *(undefined8 *)(lVar5 + 0x88);
                    lVar5 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                      (lVar9);
                    if (lVar5 != 0) {
                      *(undefined4 *)(lVar9 + 0xf0) = *(undefined4 *)(lVar5 + 0x80);
                      auVar18 = Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex
                                          (*(undefined8 *)(lVar9 + 0xf8),0);
                      uVar10 = auVar18._0_8_;
                      uVar3 = auVar18._0_4_;
                      if ((int)uVar3 < 0) {
                        return auVar18;
                      }
                      lVar5 = *(long *)(lVar9 + 0xf8);
                      if (lVar5 != 0) {
                        if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                          auVar18 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                        }
                        *(undefined8 *)(lVar9 + 0x130) =
                             *(undefined8 *)
                              (*(long *)(lVar5 + 0x10) + (uVar10 & 0xffffffff) * 8 + 0x20);
                        fVar15 = *(float *)(lVar9 + 0x100) * (float)(int)uVar3;
                        *(ulong *)(lVar9 + 0xe8) =
                             CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0xe8) >> 0x20) + fVar15
                                      ,(float)*(undefined8 *)(lVar9 + 0xe8) + fVar15);
                        *(float *)(lVar9 + 0xf0) = fVar15 + *(float *)(lVar9 + 0xf0);
                        return auVar18;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4c17 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4c17 = 1;
  }
  auVar18 = NEON_fmov(0xbf800000,4);
  *(long *)(uVar10 + 0xe8) = auVar18._8_8_;
  *(long *)(uVar10 + 0xe0) = auVar18._0_8_;
  *(undefined4 *)(uVar10 + 0xf0) = 0xbf800000;
  *(undefined4 *)(uVar10 + 0x100) = 0x3dcccccd;
  uVar7 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(uVar10 + 0x110) = uVar7;
  *(undefined8 *)(uVar10 + 0x118) = uVar7;
  *(undefined8 *)(uVar10 + 0x120) = uVar7;
System_Object___ctor:
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar10;
  return auVar20;
}



// ============================================================
// RVA: 0x14e7300 | Atlas.Gameplay.Usables.SatelliteUsable.Use
// ============================================================

ulong Atlas_Gameplay_Usables_SatelliteUsable__Use(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4c16 & 1) == 0) {
    func_0x00f78a20(0x3d3ae38);
    bRam0000000003eb4c16 = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(param_1,0);
  if (*(long *)(param_1 + 0xd0) != 0) {
    /*Atlas.Audio.WeaponAudio$$Use*/ func_0x0152fe60(*(long *)(param_1 + 0xd0),0);
    lVar2 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableBehaviour(param_1);
    if (lVar2 != 0) {
      /*Atlas.Gameplay.Usables.SatelliteUsableBehaviour$$SetInUseVFX*/ func_0x014e7514(lVar2,0);
      lVar2 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(param_1);
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(lVar2 + 0x68);
        uVar3 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(param_1);
        if (uVar3 != 0) {
          *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(uVar3 + 0x6c);
          if (*(long *)(param_1 + 0x28) != 0) {
            if (*(int *)(*(long *)(param_1 + 0x28) + 0x50) == 0) {
              return uVar3;
            }
            *(undefined4 *)(param_1 + 0xe8) = 0;
            lVar2 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(param_1);
            if (lVar2 != 0) {
              *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar2 + 0x90);
              lVar2 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition(param_1)
              ;
              if (lVar2 != 0) {
                *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar2 + 0x78);
                lVar2 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                  (param_1);
                if (lVar2 != 0) {
                  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar2 + 0x98);
                  lVar2 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                    (param_1);
                  if (lVar2 != 0) {
                    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(lVar2 + 0x88);
                    lVar2 = Atlas_Gameplay_Usables_SatelliteUsable__get_SatelliteUsableDefinition
                                      (param_1);
                    if (lVar2 != 0) {
                      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar2 + 0x80);
                      uVar4 = Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex
                                        (*(undefined8 *)(param_1 + 0xf8),0);
                      uVar1 = (uint)uVar4;
                      uVar3 = uVar4;
                      if (-1 < (int)uVar1) {
                        lVar2 = *(long *)(param_1 + 0xf8);
                        if (lVar2 == 0) goto LAB_014e747c;
                        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                          uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                        }
                        *(undefined8 *)(param_1 + 0x130) =
                             *(undefined8 *)
                              (*(long *)(lVar2 + 0x10) + (uVar4 & 0xffffffff) * 8 + 0x20);
                        fVar6 = *(float *)(param_1 + 0x100) * (float)(int)uVar1;
                        *(ulong *)(param_1 + 0xe8) =
                             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) +
                                      fVar6,(float)*(undefined8 *)(param_1 + 0xe8) + fVar6);
                        *(float *)(param_1 + 0xf0) = fVar6 + *(float *)(param_1 + 0xf0);
                      }
                      return uVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014e747c:
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c17 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4c17 = 1;
  }
  auVar7 = NEON_fmov(0xbf800000,4);
  *(long *)(uVar3 + 0xe8) = auVar7._8_8_;
  *(long *)(uVar3 + 0xe0) = auVar7._0_8_;
  *(undefined4 *)(uVar3 + 0xf0) = 0xbf800000;
  *(undefined4 *)(uVar3 + 0x100) = 0x3dcccccd;
  uVar5 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(uVar3 + 0x110) = uVar5;
  *(undefined8 *)(uVar3 + 0x118) = uVar5;
  *(undefined8 *)(uVar3 + 0x120) = uVar5;
  return uVar3;
}



// ============================================================
// RVA: 0x14e7480 | Atlas.Gameplay.Usables.SatelliteUsable..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_SatelliteUsable___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4c17 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4c17 = 1;
  }
  auVar2 = NEON_fmov(0xbf800000,4);
  *(long *)(param_1 + 0xe8) = auVar2._8_8_;
  *(long *)(param_1 + 0xe0) = auVar2._0_8_;
  *(undefined4 *)(param_1 + 0xf0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3dcccccd;
  uVar1 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



