// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.RewardScreenExtensions

// ============================================================
// RVA: 0x14e3f20 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequenceIfRewardUnseen
// ============================================================

undefined8
Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen
          (undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4bf5 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    bRam0000000003eb4bf5 = 1;
  }
  if (((param_2 != 0) && (param_3 != 0)) && (*(long *)(param_2 + 0x50) != 0)) {
    uVar1 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_2 + 0x50),*(undefined8 *)(param_3 + 0x30),0);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if (*(long *)(param_2 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_2 + 0x50),*(undefined8 *)(param_3 + 0x30),0);
      lVar2 = *(long *)(param_2 + 0x10);
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar2 != 0) {
        /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar2,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                        *(undefined4 *)(param_3 + 0x20),param_3,0);
        return uVar1;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x70);
}



// ============================================================
// RVA: 0x18de4b8 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequence<object, object>
// ============================================================

ulong Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequence_object__object_
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 ***pppuVar13;
  undefined1 auVar14 [16];
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 **ppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 **ppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 **ppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_60;
  undefined *puStack_58;
  
  lVar8 = param_3;
  lVar7 = param_4;
  lVar10 = param_5;
  if ((bRam0000000003eb666f & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb666f = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    lVar8 = 0;
    /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_4 + 0x50),param_2);
    lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
    Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
    if ((param_3 != 0) && (lVar4 != 0)) {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_3 + 0x40);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x48);
      uVar5 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3);
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      *(undefined8 *)(lVar4 + 0x30) = param_2;
      *(undefined8 *)(lVar4 + 0x38) = param_1;
      lVar9 = *(long *)(param_4 + 0x10);
      if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar9 != 0) {
        /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar9,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                        *(undefined4 *)(param_3 + 0x48),lVar4,0);
        return 1;
      }
    }
  }
  auVar14 = func_0x00f78af4();
  uVar11 = auVar14._8_8_;
  uVar5 = auVar14._0_8_;
  puStack_58 = &
               Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_SingleplayerChapterBehaviour__SingleplayerChapterScreen_TransitionData_
  ;
  uVar12 = 0x3eb6000;
  puStack_60 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb6670 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb6670 = 1;
  }
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x50) != 0)) {
    uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar7 + 0x50),uVar11,0);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    if (*(long *)(lVar7 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(lVar7 + 0x50),uVar11,0);
      lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
      Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
      if ((lVar8 != 0) && (lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar8 + 0x40);
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar8 + 0x48);
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x30))(lVar8);
        *(undefined8 *)(lVar4 + 0x28) = uVar6;
        *(undefined8 *)(lVar4 + 0x30) = uVar11;
        *(undefined8 *)(lVar4 + 0x38) = uVar5;
        lVar10 = *(long *)(lVar7 + 0x10);
        uVar5 = 0x3d1feb8;
        if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = 0;
        if (lVar10 != 0) {
          /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar10,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                          *(undefined4 *)(lVar8 + 0x48),lVar4,0);
          return uVar12;
        }
      }
    }
  }
  lVar10 = func_0x00f78af4();
  puStack_a8 = &
               System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
  ;
  uStack_d0 = uVar5;
  uStack_c8 = uVar12;
  lStack_c0 = lVar7;
  lStack_b8 = lVar8;
  ppuStack_b0 = &puStack_60;
  if ((bRam0000000003eb6671 & 1) == 0) {
    func_0x00f78a20(0x3d24598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6671 = 1;
  }
  uVar11 = **(undefined8 **)(lVar10 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    uStack_f8 = 0x3d25458;
    puStack_d8 = &
                 System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
    ;
    uStack_100 = uVar5;
    uStack_f0 = uVar11;
    lStack_e8 = lVar10;
    ppuStack_e0 = &ppuStack_b0;
    if ((bRam0000000003eb6672 & 1) == 0) {
      func_0x00f78a20(0x3d24598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb6672 = 1;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
    if (lVar8 == 0) {
      lVar8 = func_0x00f78af4();
      uStack_128 = 0x3d25458;
      puStack_108 = &
                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
      ;
      uStack_130 = uVar5;
      uStack_120 = uVar11;
      lStack_118 = lVar7;
      ppuStack_110 = &ppuStack_e0;
      if ((bRam0000000003eb6673 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6673 = 1;
      }
      uVar11 = **(undefined8 **)(lVar8 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        uStack_158 = 0x3d25458;
        puStack_138 = &
                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
        ;
        uStack_160 = uVar5;
        uStack_150 = uVar11;
        lStack_148 = lVar8;
        ppuStack_140 = &ppuStack_110;
        if ((bRam0000000003eb6674 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6674 = 1;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
        if (lVar8 == 0) {
          lVar8 = func_0x00f78af4();
          uStack_188 = 0x3d25458;
          puStack_168 = &
                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
          ;
          uStack_190 = uVar5;
          uStack_180 = uVar11;
          lStack_178 = lVar7;
          ppuStack_170 = &ppuStack_140;
          if ((bRam0000000003eb6675 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6675 = 1;
          }
          uVar11 = **(undefined8 **)(lVar8 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
          if (lVar7 == 0) {
            lVar7 = func_0x00f78af4();
            uStack_1b8 = 0x3d25458;
            puStack_198 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
            ;
            uStack_1c0 = uVar5;
            uStack_1b0 = uVar11;
            lStack_1a8 = lVar8;
            ppuStack_1a0 = &ppuStack_170;
            if ((bRam0000000003eb6676 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6676 = 1;
            }
            uVar11 = **(undefined8 **)(lVar7 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
            if (lVar8 == 0) {
              lVar8 = func_0x00f78af4();
              uStack_1e8 = 0x3d25458;
              puStack_1c8 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
              ;
              uStack_1f0 = uVar5;
              uStack_1e0 = uVar11;
              lStack_1d8 = lVar7;
              ppuStack_1d0 = &ppuStack_1a0;
              if ((bRam0000000003eb6677 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6677 = 1;
              }
              uVar11 = **(undefined8 **)(lVar8 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
              if (lVar7 == 0) {
                lVar7 = func_0x00f78af4();
                uStack_218 = 0x3d25458;
                puStack_1f8 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                ;
                uStack_220 = uVar5;
                uStack_210 = uVar11;
                lStack_208 = lVar8;
                ppuStack_200 = &ppuStack_1d0;
                if ((bRam0000000003eb6678 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6678 = 1;
                }
                uVar11 = **(undefined8 **)(lVar7 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
                if (lVar8 == 0) {
                  lVar8 = func_0x00f78af4();
                  uStack_248 = 0x3d25458;
                  puStack_228 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                  ;
                  uStack_250 = uVar5;
                  uStack_240 = uVar11;
                  lStack_238 = lVar7;
                  ppuStack_230 = &ppuStack_200;
                  if ((bRam0000000003eb6679 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6679 = 1;
                  }
                  uVar11 = **(undefined8 **)(lVar8 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
                  if (lVar7 == 0) {
                    lVar7 = func_0x00f78af4();
                    uStack_278 = 0x3d25458;
                    puStack_258 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                    ;
                    uStack_280 = uVar5;
                    uStack_270 = uVar11;
                    lStack_268 = lVar8;
                    ppuStack_260 = &ppuStack_230;
                    if ((bRam0000000003eb667a & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb667a = 1;
                    }
                    uVar11 = **(undefined8 **)(lVar7 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
                    if (lVar8 == 0) {
                      lVar8 = func_0x00f78af4();
                      uStack_2a8 = 0x3d25458;
                      puStack_288 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                      ;
                      uStack_2b0 = uVar5;
                      uStack_2a0 = uVar11;
                      lStack_298 = lVar7;
                      ppuStack_290 = &ppuStack_260;
                      if ((bRam0000000003eb667b & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb667b = 1;
                      }
                      uVar11 = **(undefined8 **)(lVar8 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
                      if (lVar7 == 0) {
                        lVar7 = func_0x00f78af4();
                        uStack_2d8 = 0x3d25458;
                        puStack_2b8 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                        ;
                        pppuVar13 = &ppuStack_2c0;
                        uStack_2e0 = uVar5;
                        uStack_2d0 = uVar11;
                        lStack_2c8 = lVar8;
                        ppuStack_2c0 = &ppuStack_290;
                        if ((bRam0000000003eb667c & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667c = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar7 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (lVar8 == 0) {
                          lVar7 = func_0x00f78af4();
                          puStack_2e8 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                          ;
                          if ((bRam0000000003eb667d & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667d = 1;
                          }
                          uVar5 = **(undefined8 **)(lVar7 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          if (lVar8 == 0) {
                            lVar7 = func_0x00f78af4();
                            lVar8 = **(long **)(lVar7 + 0x30);
                            uVar1 = *(ushort *)(lVar8 + 0x132);
                            if ((uVar1 & 1) == 0) {
                              func_0x00fac028(lVar8);
                              uVar1 = *(ushort *)(lVar8 + 0x132);
                            }
                            if ((uVar1 >> 10 & 1) != 0) {
                              lVar8 = **(long **)(lVar7 + 0x30);
                              if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar8);
                              }
                              if (*(int *)(lVar8 + 0xe0) == 0) {
                                lVar8 = **(long **)(lVar7 + 0x30);
                                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar8);
                                }
                                func_0x00f78ad0(lVar8);
                              }
                            }
                            lVar7 = **(long **)(lVar7 + 0x30);
                            if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
                              func_0x00fac028(lVar7);
                            }
                            return (ulong)**(byte **)(lVar7 + 0xb8);
                          }
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar8,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar7 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_2e0;
                        }
                        else {
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar8,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar7 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_2b0;
                          pppuVar13 = (undefined8 ***)ppuStack_2c0;
                          puStack_2e8 = puStack_2b8;
                        }
                      }
                      else {
                        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar7,0);
                        if (iVar3 == 0) {
                          return 1;
                        }
                        uVar5 = **(undefined8 **)(lVar8 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        puVar2 = &uStack_280;
                        pppuVar13 = (undefined8 ***)ppuStack_290;
                        puStack_2e8 = puStack_288;
                      }
                    }
                    else {
                      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar8,0);
                      if (iVar3 == 0) {
                        return 1;
                      }
                      uVar5 = **(undefined8 **)(lVar7 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      puVar2 = &uStack_250;
                      pppuVar13 = (undefined8 ***)ppuStack_260;
                      puStack_2e8 = puStack_258;
                    }
                  }
                  else {
                    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar7,0);
                    if (iVar3 == 0) {
                      return 1;
                    }
                    uVar5 = **(undefined8 **)(lVar8 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    puVar2 = &uStack_220;
                    pppuVar13 = (undefined8 ***)ppuStack_230;
                    puStack_2e8 = puStack_228;
                  }
                }
                else {
                  iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar8,0);
                  if (iVar3 == 0) {
                    return 1;
                  }
                  uVar5 = **(undefined8 **)(lVar7 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  puVar2 = &uStack_1f0;
                  pppuVar13 = (undefined8 ***)ppuStack_200;
                  puStack_2e8 = puStack_1f8;
                }
              }
              else {
                iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar7,0);
                if (iVar3 == 0) {
                  return 1;
                }
                uVar5 = **(undefined8 **)(lVar8 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                puVar2 = &uStack_1c0;
                pppuVar13 = (undefined8 ***)ppuStack_1d0;
                puStack_2e8 = puStack_1c8;
              }
            }
            else {
              iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar8,0);
              if (iVar3 == 0) {
                return 1;
              }
              uVar5 = **(undefined8 **)(lVar7 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              puVar2 = &uStack_190;
              pppuVar13 = (undefined8 ***)ppuStack_1a0;
              puStack_2e8 = puStack_198;
            }
          }
          else {
            iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar7,0);
            if (iVar3 == 0) {
              return 1;
            }
            uVar5 = **(undefined8 **)(lVar8 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puVar2 = &uStack_160;
            pppuVar13 = (undefined8 ***)ppuStack_170;
            puStack_2e8 = puStack_168;
          }
        }
        else {
          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar8,0);
          if (iVar3 == 0) {
            return 1;
          }
          uVar5 = **(undefined8 **)(lVar7 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          puVar2 = &uStack_130;
          pppuVar13 = (undefined8 ***)ppuStack_140;
          puStack_2e8 = puStack_138;
        }
      }
      else {
        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar7,0);
        if (iVar3 == 0) {
          return 1;
        }
        uVar5 = **(undefined8 **)(lVar8 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        puVar2 = &uStack_100;
        pppuVar13 = (undefined8 ***)ppuStack_110;
        puStack_2e8 = puStack_108;
      }
    }
    else {
      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar8,0);
      if (iVar3 == 0) {
        return 1;
      }
      uVar5 = **(undefined8 **)(lVar7 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
      puVar2 = &uStack_d0;
      pppuVar13 = (undefined8 ***)ppuStack_e0;
      puStack_2e8 = puStack_d8;
    }
  }
  else {
    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar7,0);
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = **(undefined8 **)(lVar10 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar7 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
    puVar2 = (undefined8 *)&stack0xffffffffffffff60;
    pppuVar13 = (undefined8 ***)ppuStack_b0;
    puStack_2e8 = puStack_a8;
  }
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar13;
  *(undefined **)((long)puVar2 + -8) = puStack_2e8;
  lVar7 = func_0x00fe01c8(*(undefined8 *)(lVar7 + 0x10),1);
  return (ulong)(*(byte *)(lVar7 + 0x132) >> 5 & 1);
}



// ============================================================
// RVA: 0x18de5e0 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequenceIfRewardUnseen<ArcadeMapSelectBehaviour, ArcadeMapSelectScreen.TransitionData>
// ============================================================

ulong Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData_
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3eb6000;
  if ((bRam0000000003eb6670 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb6670 = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_4 + 0x50),param_2,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(param_4 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_4 + 0x50),param_2,0);
      lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
      Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
      if ((param_3 != 0) && (lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_3 + 0x40);
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x48);
        uVar5 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(undefined8 *)(lVar4 + 0x30) = param_2;
        *(undefined8 *)(lVar4 + 0x38) = param_1;
        lVar6 = *(long *)(param_4 + 0x10);
        param_1 = 0x3d1feb8;
        if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = 0;
        if (lVar6 != 0) {
          /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                          *(undefined4 *)(param_3 + 0x48),lVar4,0);
          return uVar7;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_58 = &
               System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
  ;
  uStack_80 = param_1;
  uStack_78 = uVar7;
  lStack_70 = param_4;
  lStack_68 = param_3;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb6671 & 1) == 0) {
    func_0x00f78a20(0x3d24598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6671 = 1;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    uStack_a8 = 0x3d25458;
    puStack_88 = &
                 System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
    ;
    uStack_b0 = param_1;
    uStack_a0 = uVar5;
    lStack_98 = lVar4;
    ppuStack_90 = &ppuStack_60;
    if ((bRam0000000003eb6672 & 1) == 0) {
      func_0x00f78a20(0x3d24598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb6672 = 1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_d8 = 0x3d25458;
      puStack_b8 = &
                   System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
      ;
      uStack_e0 = param_1;
      uStack_d0 = uVar5;
      lStack_c8 = lVar6;
      ppuStack_c0 = &ppuStack_90;
      if ((bRam0000000003eb6673 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6673 = 1;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        uStack_108 = 0x3d25458;
        puStack_e8 = &
                     System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
        ;
        uStack_110 = param_1;
        uStack_100 = uVar5;
        lStack_f8 = lVar4;
        ppuStack_f0 = &ppuStack_c0;
        if ((bRam0000000003eb6674 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6674 = 1;
        }
        uVar5 = **(undefined8 **)(lVar6 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        if (lVar4 == 0) {
          lVar4 = func_0x00f78af4();
          uStack_138 = 0x3d25458;
          puStack_118 = &
                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
          ;
          uStack_140 = param_1;
          uStack_130 = uVar5;
          lStack_128 = lVar6;
          ppuStack_120 = &ppuStack_f0;
          if ((bRam0000000003eb6675 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6675 = 1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          if (lVar6 == 0) {
            lVar6 = func_0x00f78af4();
            uStack_168 = 0x3d25458;
            puStack_148 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
            ;
            uStack_170 = param_1;
            uStack_160 = uVar5;
            lStack_158 = lVar4;
            ppuStack_150 = &ppuStack_120;
            if ((bRam0000000003eb6676 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6676 = 1;
            }
            uVar5 = **(undefined8 **)(lVar6 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            if (lVar4 == 0) {
              lVar4 = func_0x00f78af4();
              uStack_198 = 0x3d25458;
              puStack_178 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
              ;
              uStack_1a0 = param_1;
              uStack_190 = uVar5;
              lStack_188 = lVar6;
              ppuStack_180 = &ppuStack_150;
              if ((bRam0000000003eb6677 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6677 = 1;
              }
              uVar5 = **(undefined8 **)(lVar4 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              if (lVar6 == 0) {
                lVar6 = func_0x00f78af4();
                uStack_1c8 = 0x3d25458;
                puStack_1a8 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                ;
                uStack_1d0 = param_1;
                uStack_1c0 = uVar5;
                lStack_1b8 = lVar4;
                ppuStack_1b0 = &ppuStack_180;
                if ((bRam0000000003eb6678 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6678 = 1;
                }
                uVar5 = **(undefined8 **)(lVar6 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                if (lVar4 == 0) {
                  lVar4 = func_0x00f78af4();
                  uStack_1f8 = 0x3d25458;
                  puStack_1d8 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                  ;
                  uStack_200 = param_1;
                  uStack_1f0 = uVar5;
                  lStack_1e8 = lVar6;
                  ppuStack_1e0 = &ppuStack_1b0;
                  if ((bRam0000000003eb6679 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6679 = 1;
                  }
                  uVar5 = **(undefined8 **)(lVar4 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  if (lVar6 == 0) {
                    lVar6 = func_0x00f78af4();
                    uStack_228 = 0x3d25458;
                    puStack_208 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                    ;
                    uStack_230 = param_1;
                    uStack_220 = uVar5;
                    lStack_218 = lVar4;
                    ppuStack_210 = &ppuStack_1e0;
                    if ((bRam0000000003eb667a & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb667a = 1;
                    }
                    uVar5 = **(undefined8 **)(lVar6 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    if (lVar4 == 0) {
                      lVar4 = func_0x00f78af4();
                      uStack_258 = 0x3d25458;
                      puStack_238 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                      ;
                      uStack_260 = param_1;
                      uStack_250 = uVar5;
                      lStack_248 = lVar6;
                      ppuStack_240 = &ppuStack_210;
                      if ((bRam0000000003eb667b & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb667b = 1;
                      }
                      uVar5 = **(undefined8 **)(lVar4 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      if (lVar6 == 0) {
                        lVar6 = func_0x00f78af4();
                        uStack_288 = 0x3d25458;
                        puStack_268 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                        ;
                        pppuVar8 = &ppuStack_270;
                        uStack_290 = param_1;
                        uStack_280 = uVar5;
                        lStack_278 = lVar4;
                        ppuStack_270 = &ppuStack_240;
                        if ((bRam0000000003eb667c & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667c = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar6 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (lVar4 == 0) {
                          lVar4 = func_0x00f78af4();
                          puStack_298 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                          ;
                          if ((bRam0000000003eb667d & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667d = 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          if (lVar6 == 0) {
                            lVar4 = func_0x00f78af4();
                            lVar6 = **(long **)(lVar4 + 0x30);
                            uVar1 = *(ushort *)(lVar6 + 0x132);
                            if ((uVar1 & 1) == 0) {
                              func_0x00fac028(lVar6);
                              uVar1 = *(ushort *)(lVar6 + 0x132);
                            }
                            if ((uVar1 >> 10 & 1) != 0) {
                              lVar6 = **(long **)(lVar4 + 0x30);
                              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar6);
                              }
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                lVar6 = **(long **)(lVar4 + 0x30);
                                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar6);
                                }
                                func_0x00f78ad0(lVar6);
                              }
                            }
                            lVar4 = **(long **)(lVar4 + 0x30);
                            if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                              func_0x00fac028(lVar4);
                            }
                            return (ulong)**(byte **)(lVar4 + 0xb8);
                          }
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_290;
                        }
                        else {
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar6 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_260;
                          pppuVar8 = (undefined8 ***)ppuStack_270;
                          puStack_298 = puStack_268;
                        }
                      }
                      else {
                        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                        if (iVar3 == 0) {
                          return 1;
                        }
                        uVar5 = **(undefined8 **)(lVar4 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        puVar2 = &uStack_230;
                        pppuVar8 = (undefined8 ***)ppuStack_240;
                        puStack_298 = puStack_238;
                      }
                    }
                    else {
                      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                      if (iVar3 == 0) {
                        return 1;
                      }
                      uVar5 = **(undefined8 **)(lVar6 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      puVar2 = &uStack_200;
                      pppuVar8 = (undefined8 ***)ppuStack_210;
                      puStack_298 = puStack_208;
                    }
                  }
                  else {
                    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                    if (iVar3 == 0) {
                      return 1;
                    }
                    uVar5 = **(undefined8 **)(lVar4 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    puVar2 = &uStack_1d0;
                    pppuVar8 = (undefined8 ***)ppuStack_1e0;
                    puStack_298 = puStack_1d8;
                  }
                }
                else {
                  iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                  if (iVar3 == 0) {
                    return 1;
                  }
                  uVar5 = **(undefined8 **)(lVar6 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  puVar2 = &uStack_1a0;
                  pppuVar8 = (undefined8 ***)ppuStack_1b0;
                  puStack_298 = puStack_1a8;
                }
              }
              else {
                iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                if (iVar3 == 0) {
                  return 1;
                }
                uVar5 = **(undefined8 **)(lVar4 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                puVar2 = &uStack_170;
                pppuVar8 = (undefined8 ***)ppuStack_180;
                puStack_298 = puStack_178;
              }
            }
            else {
              iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
              if (iVar3 == 0) {
                return 1;
              }
              uVar5 = **(undefined8 **)(lVar6 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              puVar2 = &uStack_140;
              pppuVar8 = (undefined8 ***)ppuStack_150;
              puStack_298 = puStack_148;
            }
          }
          else {
            iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
            if (iVar3 == 0) {
              return 1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puVar2 = &uStack_110;
            pppuVar8 = (undefined8 ***)ppuStack_120;
            puStack_298 = puStack_118;
          }
        }
        else {
          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
          if (iVar3 == 0) {
            return 1;
          }
          uVar5 = **(undefined8 **)(lVar6 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          puVar2 = &uStack_e0;
          pppuVar8 = (undefined8 ***)ppuStack_f0;
          puStack_298 = puStack_e8;
        }
      }
      else {
        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
        if (iVar3 == 0) {
          return 1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        puVar2 = &uStack_b0;
        pppuVar8 = (undefined8 ***)ppuStack_c0;
        puStack_298 = puStack_b8;
      }
    }
    else {
      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
      if (iVar3 == 0) {
        return 1;
      }
      uVar5 = **(undefined8 **)(lVar6 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
      puVar2 = &uStack_80;
      pppuVar8 = (undefined8 ***)ppuStack_90;
      puStack_298 = puStack_88;
    }
  }
  else {
    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
    puVar2 = (undefined8 *)&stack0xffffffffffffffb0;
    pppuVar8 = (undefined8 ***)ppuStack_60;
    puStack_298 = puStack_58;
  }
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar2 + -8) = puStack_298;
  lVar4 = func_0x00fe01c8(*(undefined8 *)(lVar4 + 0x10),1);
  return (ulong)(*(byte *)(lVar4 + 0x132) >> 5 & 1);
}



// ============================================================
// RVA: 0x18de5e0 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequenceIfRewardUnseen<PostArcadeScreenBehaviour, PostArcadeScreen.TransitionData>
// ============================================================

ulong Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData_
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3eb6000;
  if ((bRam0000000003eb6670 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb6670 = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_4 + 0x50),param_2,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(param_4 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_4 + 0x50),param_2,0);
      lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
      Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
      if ((param_3 != 0) && (lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_3 + 0x40);
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x48);
        uVar5 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(undefined8 *)(lVar4 + 0x30) = param_2;
        *(undefined8 *)(lVar4 + 0x38) = param_1;
        lVar6 = *(long *)(param_4 + 0x10);
        param_1 = 0x3d1feb8;
        if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = 0;
        if (lVar6 != 0) {
          /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                          *(undefined4 *)(param_3 + 0x48),lVar4,0);
          return uVar7;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_58 = &
               System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
  ;
  uStack_80 = param_1;
  uStack_78 = uVar7;
  lStack_70 = param_4;
  lStack_68 = param_3;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb6671 & 1) == 0) {
    func_0x00f78a20(0x3d24598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6671 = 1;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    uStack_a8 = 0x3d25458;
    puStack_88 = &
                 System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
    ;
    uStack_b0 = param_1;
    uStack_a0 = uVar5;
    lStack_98 = lVar4;
    ppuStack_90 = &ppuStack_60;
    if ((bRam0000000003eb6672 & 1) == 0) {
      func_0x00f78a20(0x3d24598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb6672 = 1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_d8 = 0x3d25458;
      puStack_b8 = &
                   System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
      ;
      uStack_e0 = param_1;
      uStack_d0 = uVar5;
      lStack_c8 = lVar6;
      ppuStack_c0 = &ppuStack_90;
      if ((bRam0000000003eb6673 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6673 = 1;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        uStack_108 = 0x3d25458;
        puStack_e8 = &
                     System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
        ;
        uStack_110 = param_1;
        uStack_100 = uVar5;
        lStack_f8 = lVar4;
        ppuStack_f0 = &ppuStack_c0;
        if ((bRam0000000003eb6674 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6674 = 1;
        }
        uVar5 = **(undefined8 **)(lVar6 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        if (lVar4 == 0) {
          lVar4 = func_0x00f78af4();
          uStack_138 = 0x3d25458;
          puStack_118 = &
                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
          ;
          uStack_140 = param_1;
          uStack_130 = uVar5;
          lStack_128 = lVar6;
          ppuStack_120 = &ppuStack_f0;
          if ((bRam0000000003eb6675 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6675 = 1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          if (lVar6 == 0) {
            lVar6 = func_0x00f78af4();
            uStack_168 = 0x3d25458;
            puStack_148 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
            ;
            uStack_170 = param_1;
            uStack_160 = uVar5;
            lStack_158 = lVar4;
            ppuStack_150 = &ppuStack_120;
            if ((bRam0000000003eb6676 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6676 = 1;
            }
            uVar5 = **(undefined8 **)(lVar6 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            if (lVar4 == 0) {
              lVar4 = func_0x00f78af4();
              uStack_198 = 0x3d25458;
              puStack_178 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
              ;
              uStack_1a0 = param_1;
              uStack_190 = uVar5;
              lStack_188 = lVar6;
              ppuStack_180 = &ppuStack_150;
              if ((bRam0000000003eb6677 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6677 = 1;
              }
              uVar5 = **(undefined8 **)(lVar4 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              if (lVar6 == 0) {
                lVar6 = func_0x00f78af4();
                uStack_1c8 = 0x3d25458;
                puStack_1a8 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                ;
                uStack_1d0 = param_1;
                uStack_1c0 = uVar5;
                lStack_1b8 = lVar4;
                ppuStack_1b0 = &ppuStack_180;
                if ((bRam0000000003eb6678 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6678 = 1;
                }
                uVar5 = **(undefined8 **)(lVar6 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                if (lVar4 == 0) {
                  lVar4 = func_0x00f78af4();
                  uStack_1f8 = 0x3d25458;
                  puStack_1d8 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                  ;
                  uStack_200 = param_1;
                  uStack_1f0 = uVar5;
                  lStack_1e8 = lVar6;
                  ppuStack_1e0 = &ppuStack_1b0;
                  if ((bRam0000000003eb6679 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6679 = 1;
                  }
                  uVar5 = **(undefined8 **)(lVar4 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  if (lVar6 == 0) {
                    lVar6 = func_0x00f78af4();
                    uStack_228 = 0x3d25458;
                    puStack_208 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                    ;
                    uStack_230 = param_1;
                    uStack_220 = uVar5;
                    lStack_218 = lVar4;
                    ppuStack_210 = &ppuStack_1e0;
                    if ((bRam0000000003eb667a & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb667a = 1;
                    }
                    uVar5 = **(undefined8 **)(lVar6 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    if (lVar4 == 0) {
                      lVar4 = func_0x00f78af4();
                      uStack_258 = 0x3d25458;
                      puStack_238 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                      ;
                      uStack_260 = param_1;
                      uStack_250 = uVar5;
                      lStack_248 = lVar6;
                      ppuStack_240 = &ppuStack_210;
                      if ((bRam0000000003eb667b & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb667b = 1;
                      }
                      uVar5 = **(undefined8 **)(lVar4 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      if (lVar6 == 0) {
                        lVar6 = func_0x00f78af4();
                        uStack_288 = 0x3d25458;
                        puStack_268 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                        ;
                        pppuVar8 = &ppuStack_270;
                        uStack_290 = param_1;
                        uStack_280 = uVar5;
                        lStack_278 = lVar4;
                        ppuStack_270 = &ppuStack_240;
                        if ((bRam0000000003eb667c & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667c = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar6 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (lVar4 == 0) {
                          lVar4 = func_0x00f78af4();
                          puStack_298 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                          ;
                          if ((bRam0000000003eb667d & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667d = 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          if (lVar6 == 0) {
                            lVar4 = func_0x00f78af4();
                            lVar6 = **(long **)(lVar4 + 0x30);
                            uVar1 = *(ushort *)(lVar6 + 0x132);
                            if ((uVar1 & 1) == 0) {
                              func_0x00fac028(lVar6);
                              uVar1 = *(ushort *)(lVar6 + 0x132);
                            }
                            if ((uVar1 >> 10 & 1) != 0) {
                              lVar6 = **(long **)(lVar4 + 0x30);
                              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar6);
                              }
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                lVar6 = **(long **)(lVar4 + 0x30);
                                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar6);
                                }
                                func_0x00f78ad0(lVar6);
                              }
                            }
                            lVar4 = **(long **)(lVar4 + 0x30);
                            if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                              func_0x00fac028(lVar4);
                            }
                            return (ulong)**(byte **)(lVar4 + 0xb8);
                          }
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_290;
                        }
                        else {
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar6 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_260;
                          pppuVar8 = (undefined8 ***)ppuStack_270;
                          puStack_298 = puStack_268;
                        }
                      }
                      else {
                        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                        if (iVar3 == 0) {
                          return 1;
                        }
                        uVar5 = **(undefined8 **)(lVar4 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        puVar2 = &uStack_230;
                        pppuVar8 = (undefined8 ***)ppuStack_240;
                        puStack_298 = puStack_238;
                      }
                    }
                    else {
                      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                      if (iVar3 == 0) {
                        return 1;
                      }
                      uVar5 = **(undefined8 **)(lVar6 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      puVar2 = &uStack_200;
                      pppuVar8 = (undefined8 ***)ppuStack_210;
                      puStack_298 = puStack_208;
                    }
                  }
                  else {
                    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                    if (iVar3 == 0) {
                      return 1;
                    }
                    uVar5 = **(undefined8 **)(lVar4 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    puVar2 = &uStack_1d0;
                    pppuVar8 = (undefined8 ***)ppuStack_1e0;
                    puStack_298 = puStack_1d8;
                  }
                }
                else {
                  iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                  if (iVar3 == 0) {
                    return 1;
                  }
                  uVar5 = **(undefined8 **)(lVar6 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  puVar2 = &uStack_1a0;
                  pppuVar8 = (undefined8 ***)ppuStack_1b0;
                  puStack_298 = puStack_1a8;
                }
              }
              else {
                iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                if (iVar3 == 0) {
                  return 1;
                }
                uVar5 = **(undefined8 **)(lVar4 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                puVar2 = &uStack_170;
                pppuVar8 = (undefined8 ***)ppuStack_180;
                puStack_298 = puStack_178;
              }
            }
            else {
              iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
              if (iVar3 == 0) {
                return 1;
              }
              uVar5 = **(undefined8 **)(lVar6 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              puVar2 = &uStack_140;
              pppuVar8 = (undefined8 ***)ppuStack_150;
              puStack_298 = puStack_148;
            }
          }
          else {
            iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
            if (iVar3 == 0) {
              return 1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puVar2 = &uStack_110;
            pppuVar8 = (undefined8 ***)ppuStack_120;
            puStack_298 = puStack_118;
          }
        }
        else {
          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
          if (iVar3 == 0) {
            return 1;
          }
          uVar5 = **(undefined8 **)(lVar6 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          puVar2 = &uStack_e0;
          pppuVar8 = (undefined8 ***)ppuStack_f0;
          puStack_298 = puStack_e8;
        }
      }
      else {
        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
        if (iVar3 == 0) {
          return 1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        puVar2 = &uStack_b0;
        pppuVar8 = (undefined8 ***)ppuStack_c0;
        puStack_298 = puStack_b8;
      }
    }
    else {
      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
      if (iVar3 == 0) {
        return 1;
      }
      uVar5 = **(undefined8 **)(lVar6 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
      puVar2 = &uStack_80;
      pppuVar8 = (undefined8 ***)ppuStack_90;
      puStack_298 = puStack_88;
    }
  }
  else {
    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
    puVar2 = (undefined8 *)&stack0xffffffffffffffb0;
    pppuVar8 = (undefined8 ***)ppuStack_60;
    puStack_298 = puStack_58;
  }
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar2 + -8) = puStack_298;
  lVar4 = func_0x00fe01c8(*(undefined8 *)(lVar4 + 0x10),1);
  return (ulong)(*(byte *)(lVar4 + 0x132) >> 5 & 1);
}



// ============================================================
// RVA: 0x18de5e0 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequenceIfRewardUnseen<PostEventScreenBehaviour, PostEventScreen.TransitionData>
// ============================================================

ulong Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData_
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3eb6000;
  if ((bRam0000000003eb6670 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb6670 = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_4 + 0x50),param_2,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(param_4 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_4 + 0x50),param_2,0);
      lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
      Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
      if ((param_3 != 0) && (lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_3 + 0x40);
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x48);
        uVar5 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(undefined8 *)(lVar4 + 0x30) = param_2;
        *(undefined8 *)(lVar4 + 0x38) = param_1;
        lVar6 = *(long *)(param_4 + 0x10);
        param_1 = 0x3d1feb8;
        if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = 0;
        if (lVar6 != 0) {
          /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                          *(undefined4 *)(param_3 + 0x48),lVar4,0);
          return uVar7;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_58 = &
               System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
  ;
  uStack_80 = param_1;
  uStack_78 = uVar7;
  lStack_70 = param_4;
  lStack_68 = param_3;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb6671 & 1) == 0) {
    func_0x00f78a20(0x3d24598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6671 = 1;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    uStack_a8 = 0x3d25458;
    puStack_88 = &
                 System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
    ;
    uStack_b0 = param_1;
    uStack_a0 = uVar5;
    lStack_98 = lVar4;
    ppuStack_90 = &ppuStack_60;
    if ((bRam0000000003eb6672 & 1) == 0) {
      func_0x00f78a20(0x3d24598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb6672 = 1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_d8 = 0x3d25458;
      puStack_b8 = &
                   System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
      ;
      uStack_e0 = param_1;
      uStack_d0 = uVar5;
      lStack_c8 = lVar6;
      ppuStack_c0 = &ppuStack_90;
      if ((bRam0000000003eb6673 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6673 = 1;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        uStack_108 = 0x3d25458;
        puStack_e8 = &
                     System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
        ;
        uStack_110 = param_1;
        uStack_100 = uVar5;
        lStack_f8 = lVar4;
        ppuStack_f0 = &ppuStack_c0;
        if ((bRam0000000003eb6674 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6674 = 1;
        }
        uVar5 = **(undefined8 **)(lVar6 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        if (lVar4 == 0) {
          lVar4 = func_0x00f78af4();
          uStack_138 = 0x3d25458;
          puStack_118 = &
                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
          ;
          uStack_140 = param_1;
          uStack_130 = uVar5;
          lStack_128 = lVar6;
          ppuStack_120 = &ppuStack_f0;
          if ((bRam0000000003eb6675 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6675 = 1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          if (lVar6 == 0) {
            lVar6 = func_0x00f78af4();
            uStack_168 = 0x3d25458;
            puStack_148 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
            ;
            uStack_170 = param_1;
            uStack_160 = uVar5;
            lStack_158 = lVar4;
            ppuStack_150 = &ppuStack_120;
            if ((bRam0000000003eb6676 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6676 = 1;
            }
            uVar5 = **(undefined8 **)(lVar6 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            if (lVar4 == 0) {
              lVar4 = func_0x00f78af4();
              uStack_198 = 0x3d25458;
              puStack_178 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
              ;
              uStack_1a0 = param_1;
              uStack_190 = uVar5;
              lStack_188 = lVar6;
              ppuStack_180 = &ppuStack_150;
              if ((bRam0000000003eb6677 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6677 = 1;
              }
              uVar5 = **(undefined8 **)(lVar4 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              if (lVar6 == 0) {
                lVar6 = func_0x00f78af4();
                uStack_1c8 = 0x3d25458;
                puStack_1a8 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                ;
                uStack_1d0 = param_1;
                uStack_1c0 = uVar5;
                lStack_1b8 = lVar4;
                ppuStack_1b0 = &ppuStack_180;
                if ((bRam0000000003eb6678 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6678 = 1;
                }
                uVar5 = **(undefined8 **)(lVar6 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                if (lVar4 == 0) {
                  lVar4 = func_0x00f78af4();
                  uStack_1f8 = 0x3d25458;
                  puStack_1d8 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                  ;
                  uStack_200 = param_1;
                  uStack_1f0 = uVar5;
                  lStack_1e8 = lVar6;
                  ppuStack_1e0 = &ppuStack_1b0;
                  if ((bRam0000000003eb6679 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6679 = 1;
                  }
                  uVar5 = **(undefined8 **)(lVar4 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  if (lVar6 == 0) {
                    lVar6 = func_0x00f78af4();
                    uStack_228 = 0x3d25458;
                    puStack_208 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                    ;
                    uStack_230 = param_1;
                    uStack_220 = uVar5;
                    lStack_218 = lVar4;
                    ppuStack_210 = &ppuStack_1e0;
                    if ((bRam0000000003eb667a & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb667a = 1;
                    }
                    uVar5 = **(undefined8 **)(lVar6 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    if (lVar4 == 0) {
                      lVar4 = func_0x00f78af4();
                      uStack_258 = 0x3d25458;
                      puStack_238 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                      ;
                      uStack_260 = param_1;
                      uStack_250 = uVar5;
                      lStack_248 = lVar6;
                      ppuStack_240 = &ppuStack_210;
                      if ((bRam0000000003eb667b & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb667b = 1;
                      }
                      uVar5 = **(undefined8 **)(lVar4 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      if (lVar6 == 0) {
                        lVar6 = func_0x00f78af4();
                        uStack_288 = 0x3d25458;
                        puStack_268 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                        ;
                        pppuVar8 = &ppuStack_270;
                        uStack_290 = param_1;
                        uStack_280 = uVar5;
                        lStack_278 = lVar4;
                        ppuStack_270 = &ppuStack_240;
                        if ((bRam0000000003eb667c & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667c = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar6 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (lVar4 == 0) {
                          lVar4 = func_0x00f78af4();
                          puStack_298 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                          ;
                          if ((bRam0000000003eb667d & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667d = 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          if (lVar6 == 0) {
                            lVar4 = func_0x00f78af4();
                            lVar6 = **(long **)(lVar4 + 0x30);
                            uVar1 = *(ushort *)(lVar6 + 0x132);
                            if ((uVar1 & 1) == 0) {
                              func_0x00fac028(lVar6);
                              uVar1 = *(ushort *)(lVar6 + 0x132);
                            }
                            if ((uVar1 >> 10 & 1) != 0) {
                              lVar6 = **(long **)(lVar4 + 0x30);
                              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar6);
                              }
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                lVar6 = **(long **)(lVar4 + 0x30);
                                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar6);
                                }
                                func_0x00f78ad0(lVar6);
                              }
                            }
                            lVar4 = **(long **)(lVar4 + 0x30);
                            if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                              func_0x00fac028(lVar4);
                            }
                            return (ulong)**(byte **)(lVar4 + 0xb8);
                          }
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_290;
                        }
                        else {
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar6 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_260;
                          pppuVar8 = (undefined8 ***)ppuStack_270;
                          puStack_298 = puStack_268;
                        }
                      }
                      else {
                        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                        if (iVar3 == 0) {
                          return 1;
                        }
                        uVar5 = **(undefined8 **)(lVar4 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        puVar2 = &uStack_230;
                        pppuVar8 = (undefined8 ***)ppuStack_240;
                        puStack_298 = puStack_238;
                      }
                    }
                    else {
                      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                      if (iVar3 == 0) {
                        return 1;
                      }
                      uVar5 = **(undefined8 **)(lVar6 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      puVar2 = &uStack_200;
                      pppuVar8 = (undefined8 ***)ppuStack_210;
                      puStack_298 = puStack_208;
                    }
                  }
                  else {
                    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                    if (iVar3 == 0) {
                      return 1;
                    }
                    uVar5 = **(undefined8 **)(lVar4 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    puVar2 = &uStack_1d0;
                    pppuVar8 = (undefined8 ***)ppuStack_1e0;
                    puStack_298 = puStack_1d8;
                  }
                }
                else {
                  iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                  if (iVar3 == 0) {
                    return 1;
                  }
                  uVar5 = **(undefined8 **)(lVar6 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  puVar2 = &uStack_1a0;
                  pppuVar8 = (undefined8 ***)ppuStack_1b0;
                  puStack_298 = puStack_1a8;
                }
              }
              else {
                iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                if (iVar3 == 0) {
                  return 1;
                }
                uVar5 = **(undefined8 **)(lVar4 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                puVar2 = &uStack_170;
                pppuVar8 = (undefined8 ***)ppuStack_180;
                puStack_298 = puStack_178;
              }
            }
            else {
              iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
              if (iVar3 == 0) {
                return 1;
              }
              uVar5 = **(undefined8 **)(lVar6 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              puVar2 = &uStack_140;
              pppuVar8 = (undefined8 ***)ppuStack_150;
              puStack_298 = puStack_148;
            }
          }
          else {
            iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
            if (iVar3 == 0) {
              return 1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puVar2 = &uStack_110;
            pppuVar8 = (undefined8 ***)ppuStack_120;
            puStack_298 = puStack_118;
          }
        }
        else {
          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
          if (iVar3 == 0) {
            return 1;
          }
          uVar5 = **(undefined8 **)(lVar6 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          puVar2 = &uStack_e0;
          pppuVar8 = (undefined8 ***)ppuStack_f0;
          puStack_298 = puStack_e8;
        }
      }
      else {
        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
        if (iVar3 == 0) {
          return 1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        puVar2 = &uStack_b0;
        pppuVar8 = (undefined8 ***)ppuStack_c0;
        puStack_298 = puStack_b8;
      }
    }
    else {
      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
      if (iVar3 == 0) {
        return 1;
      }
      uVar5 = **(undefined8 **)(lVar6 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
      puVar2 = &uStack_80;
      pppuVar8 = (undefined8 ***)ppuStack_90;
      puStack_298 = puStack_88;
    }
  }
  else {
    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
    puVar2 = (undefined8 *)&stack0xffffffffffffffb0;
    pppuVar8 = (undefined8 ***)ppuStack_60;
    puStack_298 = puStack_58;
  }
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar2 + -8) = puStack_298;
  lVar4 = func_0x00fe01c8(*(undefined8 *)(lVar4 + 0x10),1);
  return (ulong)(*(byte *)(lVar4 + 0x132) >> 5 & 1);
}



// ============================================================
// RVA: 0x18de5e0 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequenceIfRewardUnseen<SeasonsScreenBehaviour, SeasonsScreen.TransitionData>
// ============================================================

ulong Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData_
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3eb6000;
  if ((bRam0000000003eb6670 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb6670 = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_4 + 0x50),param_2,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(param_4 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_4 + 0x50),param_2,0);
      lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
      Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
      if ((param_3 != 0) && (lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_3 + 0x40);
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x48);
        uVar5 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(undefined8 *)(lVar4 + 0x30) = param_2;
        *(undefined8 *)(lVar4 + 0x38) = param_1;
        lVar6 = *(long *)(param_4 + 0x10);
        param_1 = 0x3d1feb8;
        if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = 0;
        if (lVar6 != 0) {
          /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                          *(undefined4 *)(param_3 + 0x48),lVar4,0);
          return uVar7;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_58 = &
               System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
  ;
  uStack_80 = param_1;
  uStack_78 = uVar7;
  lStack_70 = param_4;
  lStack_68 = param_3;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb6671 & 1) == 0) {
    func_0x00f78a20(0x3d24598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6671 = 1;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    uStack_a8 = 0x3d25458;
    puStack_88 = &
                 System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
    ;
    uStack_b0 = param_1;
    uStack_a0 = uVar5;
    lStack_98 = lVar4;
    ppuStack_90 = &ppuStack_60;
    if ((bRam0000000003eb6672 & 1) == 0) {
      func_0x00f78a20(0x3d24598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb6672 = 1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_d8 = 0x3d25458;
      puStack_b8 = &
                   System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
      ;
      uStack_e0 = param_1;
      uStack_d0 = uVar5;
      lStack_c8 = lVar6;
      ppuStack_c0 = &ppuStack_90;
      if ((bRam0000000003eb6673 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6673 = 1;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        uStack_108 = 0x3d25458;
        puStack_e8 = &
                     System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
        ;
        uStack_110 = param_1;
        uStack_100 = uVar5;
        lStack_f8 = lVar4;
        ppuStack_f0 = &ppuStack_c0;
        if ((bRam0000000003eb6674 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6674 = 1;
        }
        uVar5 = **(undefined8 **)(lVar6 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        if (lVar4 == 0) {
          lVar4 = func_0x00f78af4();
          uStack_138 = 0x3d25458;
          puStack_118 = &
                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
          ;
          uStack_140 = param_1;
          uStack_130 = uVar5;
          lStack_128 = lVar6;
          ppuStack_120 = &ppuStack_f0;
          if ((bRam0000000003eb6675 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6675 = 1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          if (lVar6 == 0) {
            lVar6 = func_0x00f78af4();
            uStack_168 = 0x3d25458;
            puStack_148 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
            ;
            uStack_170 = param_1;
            uStack_160 = uVar5;
            lStack_158 = lVar4;
            ppuStack_150 = &ppuStack_120;
            if ((bRam0000000003eb6676 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6676 = 1;
            }
            uVar5 = **(undefined8 **)(lVar6 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            if (lVar4 == 0) {
              lVar4 = func_0x00f78af4();
              uStack_198 = 0x3d25458;
              puStack_178 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
              ;
              uStack_1a0 = param_1;
              uStack_190 = uVar5;
              lStack_188 = lVar6;
              ppuStack_180 = &ppuStack_150;
              if ((bRam0000000003eb6677 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6677 = 1;
              }
              uVar5 = **(undefined8 **)(lVar4 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              if (lVar6 == 0) {
                lVar6 = func_0x00f78af4();
                uStack_1c8 = 0x3d25458;
                puStack_1a8 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                ;
                uStack_1d0 = param_1;
                uStack_1c0 = uVar5;
                lStack_1b8 = lVar4;
                ppuStack_1b0 = &ppuStack_180;
                if ((bRam0000000003eb6678 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6678 = 1;
                }
                uVar5 = **(undefined8 **)(lVar6 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                if (lVar4 == 0) {
                  lVar4 = func_0x00f78af4();
                  uStack_1f8 = 0x3d25458;
                  puStack_1d8 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                  ;
                  uStack_200 = param_1;
                  uStack_1f0 = uVar5;
                  lStack_1e8 = lVar6;
                  ppuStack_1e0 = &ppuStack_1b0;
                  if ((bRam0000000003eb6679 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6679 = 1;
                  }
                  uVar5 = **(undefined8 **)(lVar4 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  if (lVar6 == 0) {
                    lVar6 = func_0x00f78af4();
                    uStack_228 = 0x3d25458;
                    puStack_208 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                    ;
                    uStack_230 = param_1;
                    uStack_220 = uVar5;
                    lStack_218 = lVar4;
                    ppuStack_210 = &ppuStack_1e0;
                    if ((bRam0000000003eb667a & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb667a = 1;
                    }
                    uVar5 = **(undefined8 **)(lVar6 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    if (lVar4 == 0) {
                      lVar4 = func_0x00f78af4();
                      uStack_258 = 0x3d25458;
                      puStack_238 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                      ;
                      uStack_260 = param_1;
                      uStack_250 = uVar5;
                      lStack_248 = lVar6;
                      ppuStack_240 = &ppuStack_210;
                      if ((bRam0000000003eb667b & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb667b = 1;
                      }
                      uVar5 = **(undefined8 **)(lVar4 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      if (lVar6 == 0) {
                        lVar6 = func_0x00f78af4();
                        uStack_288 = 0x3d25458;
                        puStack_268 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                        ;
                        pppuVar8 = &ppuStack_270;
                        uStack_290 = param_1;
                        uStack_280 = uVar5;
                        lStack_278 = lVar4;
                        ppuStack_270 = &ppuStack_240;
                        if ((bRam0000000003eb667c & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667c = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar6 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (lVar4 == 0) {
                          lVar4 = func_0x00f78af4();
                          puStack_298 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                          ;
                          if ((bRam0000000003eb667d & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667d = 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          if (lVar6 == 0) {
                            lVar4 = func_0x00f78af4();
                            lVar6 = **(long **)(lVar4 + 0x30);
                            uVar1 = *(ushort *)(lVar6 + 0x132);
                            if ((uVar1 & 1) == 0) {
                              func_0x00fac028(lVar6);
                              uVar1 = *(ushort *)(lVar6 + 0x132);
                            }
                            if ((uVar1 >> 10 & 1) != 0) {
                              lVar6 = **(long **)(lVar4 + 0x30);
                              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar6);
                              }
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                lVar6 = **(long **)(lVar4 + 0x30);
                                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar6);
                                }
                                func_0x00f78ad0(lVar6);
                              }
                            }
                            lVar4 = **(long **)(lVar4 + 0x30);
                            if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                              func_0x00fac028(lVar4);
                            }
                            return (ulong)**(byte **)(lVar4 + 0xb8);
                          }
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_290;
                        }
                        else {
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar6 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_260;
                          pppuVar8 = (undefined8 ***)ppuStack_270;
                          puStack_298 = puStack_268;
                        }
                      }
                      else {
                        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                        if (iVar3 == 0) {
                          return 1;
                        }
                        uVar5 = **(undefined8 **)(lVar4 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        puVar2 = &uStack_230;
                        pppuVar8 = (undefined8 ***)ppuStack_240;
                        puStack_298 = puStack_238;
                      }
                    }
                    else {
                      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                      if (iVar3 == 0) {
                        return 1;
                      }
                      uVar5 = **(undefined8 **)(lVar6 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      puVar2 = &uStack_200;
                      pppuVar8 = (undefined8 ***)ppuStack_210;
                      puStack_298 = puStack_208;
                    }
                  }
                  else {
                    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                    if (iVar3 == 0) {
                      return 1;
                    }
                    uVar5 = **(undefined8 **)(lVar4 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    puVar2 = &uStack_1d0;
                    pppuVar8 = (undefined8 ***)ppuStack_1e0;
                    puStack_298 = puStack_1d8;
                  }
                }
                else {
                  iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                  if (iVar3 == 0) {
                    return 1;
                  }
                  uVar5 = **(undefined8 **)(lVar6 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  puVar2 = &uStack_1a0;
                  pppuVar8 = (undefined8 ***)ppuStack_1b0;
                  puStack_298 = puStack_1a8;
                }
              }
              else {
                iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                if (iVar3 == 0) {
                  return 1;
                }
                uVar5 = **(undefined8 **)(lVar4 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                puVar2 = &uStack_170;
                pppuVar8 = (undefined8 ***)ppuStack_180;
                puStack_298 = puStack_178;
              }
            }
            else {
              iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
              if (iVar3 == 0) {
                return 1;
              }
              uVar5 = **(undefined8 **)(lVar6 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              puVar2 = &uStack_140;
              pppuVar8 = (undefined8 ***)ppuStack_150;
              puStack_298 = puStack_148;
            }
          }
          else {
            iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
            if (iVar3 == 0) {
              return 1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puVar2 = &uStack_110;
            pppuVar8 = (undefined8 ***)ppuStack_120;
            puStack_298 = puStack_118;
          }
        }
        else {
          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
          if (iVar3 == 0) {
            return 1;
          }
          uVar5 = **(undefined8 **)(lVar6 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          puVar2 = &uStack_e0;
          pppuVar8 = (undefined8 ***)ppuStack_f0;
          puStack_298 = puStack_e8;
        }
      }
      else {
        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
        if (iVar3 == 0) {
          return 1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        puVar2 = &uStack_b0;
        pppuVar8 = (undefined8 ***)ppuStack_c0;
        puStack_298 = puStack_b8;
      }
    }
    else {
      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
      if (iVar3 == 0) {
        return 1;
      }
      uVar5 = **(undefined8 **)(lVar6 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
      puVar2 = &uStack_80;
      pppuVar8 = (undefined8 ***)ppuStack_90;
      puStack_298 = puStack_88;
    }
  }
  else {
    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
    puVar2 = (undefined8 *)&stack0xffffffffffffffb0;
    pppuVar8 = (undefined8 ***)ppuStack_60;
    puStack_298 = puStack_58;
  }
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar2 + -8) = puStack_298;
  lVar4 = func_0x00fe01c8(*(undefined8 *)(lVar4 + 0x10),1);
  return (ulong)(*(byte *)(lVar4 + 0x132) >> 5 & 1);
}



// ============================================================
// RVA: 0x18de5e0 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>
// ============================================================

ulong Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData_
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3eb6000;
  if ((bRam0000000003eb6670 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb6670 = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_4 + 0x50),param_2,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(param_4 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_4 + 0x50),param_2,0);
      lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
      Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
      if ((param_3 != 0) && (lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_3 + 0x40);
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x48);
        uVar5 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(undefined8 *)(lVar4 + 0x30) = param_2;
        *(undefined8 *)(lVar4 + 0x38) = param_1;
        lVar6 = *(long *)(param_4 + 0x10);
        param_1 = 0x3d1feb8;
        if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = 0;
        if (lVar6 != 0) {
          /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                          *(undefined4 *)(param_3 + 0x48),lVar4,0);
          return uVar7;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_58 = &
               System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
  ;
  uStack_80 = param_1;
  uStack_78 = uVar7;
  lStack_70 = param_4;
  lStack_68 = param_3;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb6671 & 1) == 0) {
    func_0x00f78a20(0x3d24598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6671 = 1;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    uStack_a8 = 0x3d25458;
    puStack_88 = &
                 System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
    ;
    uStack_b0 = param_1;
    uStack_a0 = uVar5;
    lStack_98 = lVar4;
    ppuStack_90 = &ppuStack_60;
    if ((bRam0000000003eb6672 & 1) == 0) {
      func_0x00f78a20(0x3d24598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb6672 = 1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_d8 = 0x3d25458;
      puStack_b8 = &
                   System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
      ;
      uStack_e0 = param_1;
      uStack_d0 = uVar5;
      lStack_c8 = lVar6;
      ppuStack_c0 = &ppuStack_90;
      if ((bRam0000000003eb6673 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6673 = 1;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        uStack_108 = 0x3d25458;
        puStack_e8 = &
                     System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
        ;
        uStack_110 = param_1;
        uStack_100 = uVar5;
        lStack_f8 = lVar4;
        ppuStack_f0 = &ppuStack_c0;
        if ((bRam0000000003eb6674 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6674 = 1;
        }
        uVar5 = **(undefined8 **)(lVar6 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        if (lVar4 == 0) {
          lVar4 = func_0x00f78af4();
          uStack_138 = 0x3d25458;
          puStack_118 = &
                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
          ;
          uStack_140 = param_1;
          uStack_130 = uVar5;
          lStack_128 = lVar6;
          ppuStack_120 = &ppuStack_f0;
          if ((bRam0000000003eb6675 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6675 = 1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          if (lVar6 == 0) {
            lVar6 = func_0x00f78af4();
            uStack_168 = 0x3d25458;
            puStack_148 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
            ;
            uStack_170 = param_1;
            uStack_160 = uVar5;
            lStack_158 = lVar4;
            ppuStack_150 = &ppuStack_120;
            if ((bRam0000000003eb6676 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6676 = 1;
            }
            uVar5 = **(undefined8 **)(lVar6 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            if (lVar4 == 0) {
              lVar4 = func_0x00f78af4();
              uStack_198 = 0x3d25458;
              puStack_178 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
              ;
              uStack_1a0 = param_1;
              uStack_190 = uVar5;
              lStack_188 = lVar6;
              ppuStack_180 = &ppuStack_150;
              if ((bRam0000000003eb6677 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6677 = 1;
              }
              uVar5 = **(undefined8 **)(lVar4 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              if (lVar6 == 0) {
                lVar6 = func_0x00f78af4();
                uStack_1c8 = 0x3d25458;
                puStack_1a8 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                ;
                uStack_1d0 = param_1;
                uStack_1c0 = uVar5;
                lStack_1b8 = lVar4;
                ppuStack_1b0 = &ppuStack_180;
                if ((bRam0000000003eb6678 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6678 = 1;
                }
                uVar5 = **(undefined8 **)(lVar6 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                if (lVar4 == 0) {
                  lVar4 = func_0x00f78af4();
                  uStack_1f8 = 0x3d25458;
                  puStack_1d8 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                  ;
                  uStack_200 = param_1;
                  uStack_1f0 = uVar5;
                  lStack_1e8 = lVar6;
                  ppuStack_1e0 = &ppuStack_1b0;
                  if ((bRam0000000003eb6679 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6679 = 1;
                  }
                  uVar5 = **(undefined8 **)(lVar4 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  if (lVar6 == 0) {
                    lVar6 = func_0x00f78af4();
                    uStack_228 = 0x3d25458;
                    puStack_208 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                    ;
                    uStack_230 = param_1;
                    uStack_220 = uVar5;
                    lStack_218 = lVar4;
                    ppuStack_210 = &ppuStack_1e0;
                    if ((bRam0000000003eb667a & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb667a = 1;
                    }
                    uVar5 = **(undefined8 **)(lVar6 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    if (lVar4 == 0) {
                      lVar4 = func_0x00f78af4();
                      uStack_258 = 0x3d25458;
                      puStack_238 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                      ;
                      uStack_260 = param_1;
                      uStack_250 = uVar5;
                      lStack_248 = lVar6;
                      ppuStack_240 = &ppuStack_210;
                      if ((bRam0000000003eb667b & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb667b = 1;
                      }
                      uVar5 = **(undefined8 **)(lVar4 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      if (lVar6 == 0) {
                        lVar6 = func_0x00f78af4();
                        uStack_288 = 0x3d25458;
                        puStack_268 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                        ;
                        pppuVar8 = &ppuStack_270;
                        uStack_290 = param_1;
                        uStack_280 = uVar5;
                        lStack_278 = lVar4;
                        ppuStack_270 = &ppuStack_240;
                        if ((bRam0000000003eb667c & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667c = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar6 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (lVar4 == 0) {
                          lVar4 = func_0x00f78af4();
                          puStack_298 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                          ;
                          if ((bRam0000000003eb667d & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667d = 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          if (lVar6 == 0) {
                            lVar4 = func_0x00f78af4();
                            lVar6 = **(long **)(lVar4 + 0x30);
                            uVar1 = *(ushort *)(lVar6 + 0x132);
                            if ((uVar1 & 1) == 0) {
                              func_0x00fac028(lVar6);
                              uVar1 = *(ushort *)(lVar6 + 0x132);
                            }
                            if ((uVar1 >> 10 & 1) != 0) {
                              lVar6 = **(long **)(lVar4 + 0x30);
                              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar6);
                              }
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                lVar6 = **(long **)(lVar4 + 0x30);
                                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar6);
                                }
                                func_0x00f78ad0(lVar6);
                              }
                            }
                            lVar4 = **(long **)(lVar4 + 0x30);
                            if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                              func_0x00fac028(lVar4);
                            }
                            return (ulong)**(byte **)(lVar4 + 0xb8);
                          }
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_290;
                        }
                        else {
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar6 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_260;
                          pppuVar8 = (undefined8 ***)ppuStack_270;
                          puStack_298 = puStack_268;
                        }
                      }
                      else {
                        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                        if (iVar3 == 0) {
                          return 1;
                        }
                        uVar5 = **(undefined8 **)(lVar4 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        puVar2 = &uStack_230;
                        pppuVar8 = (undefined8 ***)ppuStack_240;
                        puStack_298 = puStack_238;
                      }
                    }
                    else {
                      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                      if (iVar3 == 0) {
                        return 1;
                      }
                      uVar5 = **(undefined8 **)(lVar6 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      puVar2 = &uStack_200;
                      pppuVar8 = (undefined8 ***)ppuStack_210;
                      puStack_298 = puStack_208;
                    }
                  }
                  else {
                    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                    if (iVar3 == 0) {
                      return 1;
                    }
                    uVar5 = **(undefined8 **)(lVar4 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    puVar2 = &uStack_1d0;
                    pppuVar8 = (undefined8 ***)ppuStack_1e0;
                    puStack_298 = puStack_1d8;
                  }
                }
                else {
                  iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                  if (iVar3 == 0) {
                    return 1;
                  }
                  uVar5 = **(undefined8 **)(lVar6 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  puVar2 = &uStack_1a0;
                  pppuVar8 = (undefined8 ***)ppuStack_1b0;
                  puStack_298 = puStack_1a8;
                }
              }
              else {
                iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                if (iVar3 == 0) {
                  return 1;
                }
                uVar5 = **(undefined8 **)(lVar4 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                puVar2 = &uStack_170;
                pppuVar8 = (undefined8 ***)ppuStack_180;
                puStack_298 = puStack_178;
              }
            }
            else {
              iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
              if (iVar3 == 0) {
                return 1;
              }
              uVar5 = **(undefined8 **)(lVar6 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              puVar2 = &uStack_140;
              pppuVar8 = (undefined8 ***)ppuStack_150;
              puStack_298 = puStack_148;
            }
          }
          else {
            iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
            if (iVar3 == 0) {
              return 1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puVar2 = &uStack_110;
            pppuVar8 = (undefined8 ***)ppuStack_120;
            puStack_298 = puStack_118;
          }
        }
        else {
          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
          if (iVar3 == 0) {
            return 1;
          }
          uVar5 = **(undefined8 **)(lVar6 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          puVar2 = &uStack_e0;
          pppuVar8 = (undefined8 ***)ppuStack_f0;
          puStack_298 = puStack_e8;
        }
      }
      else {
        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
        if (iVar3 == 0) {
          return 1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        puVar2 = &uStack_b0;
        pppuVar8 = (undefined8 ***)ppuStack_c0;
        puStack_298 = puStack_b8;
      }
    }
    else {
      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
      if (iVar3 == 0) {
        return 1;
      }
      uVar5 = **(undefined8 **)(lVar6 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
      puVar2 = &uStack_80;
      pppuVar8 = (undefined8 ***)ppuStack_90;
      puStack_298 = puStack_88;
    }
  }
  else {
    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
    puVar2 = (undefined8 *)&stack0xffffffffffffffb0;
    pppuVar8 = (undefined8 ***)ppuStack_60;
    puStack_298 = puStack_58;
  }
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar2 + -8) = puStack_298;
  lVar4 = func_0x00fe01c8(*(undefined8 *)(lVar4 + 0x10),1);
  return (ulong)(*(byte *)(lVar4 + 0x132) >> 5 & 1);
}



// ============================================================
// RVA: 0x18de5e0 | Atlas.UI.Screens.RewardScreenExtensions.RunRewardSequenceIfRewardUnseen<object, object>
// ============================================================

ulong Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData_
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3eb6000;
  if ((bRam0000000003eb6670 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d289a8);
    bRam0000000003eb6670 = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_4 + 0x50),param_2,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(param_4 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_4 + 0x50),param_2,0);
      lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
      Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar4,0);
      if ((param_3 != 0) && (lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_3 + 0x40);
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x48);
        uVar5 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(undefined8 *)(lVar4 + 0x30) = param_2;
        *(undefined8 *)(lVar4 + 0x38) = param_1;
        lVar6 = *(long *)(param_4 + 0x10);
        param_1 = 0x3d1feb8;
        if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = 0;
        if (lVar6 != 0) {
          /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                          *(undefined4 *)(param_3 + 0x48),lVar4,0);
          return uVar7;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_58 = &
               System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
  ;
  uStack_80 = param_1;
  uStack_78 = uVar7;
  lStack_70 = param_4;
  lStack_68 = param_3;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb6671 & 1) == 0) {
    func_0x00f78a20(0x3d24598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6671 = 1;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    uStack_a8 = 0x3d25458;
    puStack_88 = &
                 System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
    ;
    uStack_b0 = param_1;
    uStack_a0 = uVar5;
    lStack_98 = lVar4;
    ppuStack_90 = &ppuStack_60;
    if ((bRam0000000003eb6672 & 1) == 0) {
      func_0x00f78a20(0x3d24598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb6672 = 1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_d8 = 0x3d25458;
      puStack_b8 = &
                   System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
      ;
      uStack_e0 = param_1;
      uStack_d0 = uVar5;
      lStack_c8 = lVar6;
      ppuStack_c0 = &ppuStack_90;
      if ((bRam0000000003eb6673 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6673 = 1;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        uStack_108 = 0x3d25458;
        puStack_e8 = &
                     System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
        ;
        uStack_110 = param_1;
        uStack_100 = uVar5;
        lStack_f8 = lVar4;
        ppuStack_f0 = &ppuStack_c0;
        if ((bRam0000000003eb6674 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6674 = 1;
        }
        uVar5 = **(undefined8 **)(lVar6 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        if (lVar4 == 0) {
          lVar4 = func_0x00f78af4();
          uStack_138 = 0x3d25458;
          puStack_118 = &
                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
          ;
          uStack_140 = param_1;
          uStack_130 = uVar5;
          lStack_128 = lVar6;
          ppuStack_120 = &ppuStack_f0;
          if ((bRam0000000003eb6675 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6675 = 1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          if (lVar6 == 0) {
            lVar6 = func_0x00f78af4();
            uStack_168 = 0x3d25458;
            puStack_148 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
            ;
            uStack_170 = param_1;
            uStack_160 = uVar5;
            lStack_158 = lVar4;
            ppuStack_150 = &ppuStack_120;
            if ((bRam0000000003eb6676 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6676 = 1;
            }
            uVar5 = **(undefined8 **)(lVar6 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            if (lVar4 == 0) {
              lVar4 = func_0x00f78af4();
              uStack_198 = 0x3d25458;
              puStack_178 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
              ;
              uStack_1a0 = param_1;
              uStack_190 = uVar5;
              lStack_188 = lVar6;
              ppuStack_180 = &ppuStack_150;
              if ((bRam0000000003eb6677 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6677 = 1;
              }
              uVar5 = **(undefined8 **)(lVar4 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              if (lVar6 == 0) {
                lVar6 = func_0x00f78af4();
                uStack_1c8 = 0x3d25458;
                puStack_1a8 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                ;
                uStack_1d0 = param_1;
                uStack_1c0 = uVar5;
                lStack_1b8 = lVar4;
                ppuStack_1b0 = &ppuStack_180;
                if ((bRam0000000003eb6678 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6678 = 1;
                }
                uVar5 = **(undefined8 **)(lVar6 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                if (lVar4 == 0) {
                  lVar4 = func_0x00f78af4();
                  uStack_1f8 = 0x3d25458;
                  puStack_1d8 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                  ;
                  uStack_200 = param_1;
                  uStack_1f0 = uVar5;
                  lStack_1e8 = lVar6;
                  ppuStack_1e0 = &ppuStack_1b0;
                  if ((bRam0000000003eb6679 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6679 = 1;
                  }
                  uVar5 = **(undefined8 **)(lVar4 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  if (lVar6 == 0) {
                    lVar6 = func_0x00f78af4();
                    uStack_228 = 0x3d25458;
                    puStack_208 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                    ;
                    uStack_230 = param_1;
                    uStack_220 = uVar5;
                    lStack_218 = lVar4;
                    ppuStack_210 = &ppuStack_1e0;
                    if ((bRam0000000003eb667a & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb667a = 1;
                    }
                    uVar5 = **(undefined8 **)(lVar6 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    if (lVar4 == 0) {
                      lVar4 = func_0x00f78af4();
                      uStack_258 = 0x3d25458;
                      puStack_238 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                      ;
                      uStack_260 = param_1;
                      uStack_250 = uVar5;
                      lStack_248 = lVar6;
                      ppuStack_240 = &ppuStack_210;
                      if ((bRam0000000003eb667b & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb667b = 1;
                      }
                      uVar5 = **(undefined8 **)(lVar4 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      if (lVar6 == 0) {
                        lVar6 = func_0x00f78af4();
                        uStack_288 = 0x3d25458;
                        puStack_268 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                        ;
                        pppuVar8 = &ppuStack_270;
                        uStack_290 = param_1;
                        uStack_280 = uVar5;
                        lStack_278 = lVar4;
                        ppuStack_270 = &ppuStack_240;
                        if ((bRam0000000003eb667c & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667c = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar6 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (lVar4 == 0) {
                          lVar4 = func_0x00f78af4();
                          puStack_298 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                          ;
                          if ((bRam0000000003eb667d & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667d = 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          if (lVar6 == 0) {
                            lVar4 = func_0x00f78af4();
                            lVar6 = **(long **)(lVar4 + 0x30);
                            uVar1 = *(ushort *)(lVar6 + 0x132);
                            if ((uVar1 & 1) == 0) {
                              func_0x00fac028(lVar6);
                              uVar1 = *(ushort *)(lVar6 + 0x132);
                            }
                            if ((uVar1 >> 10 & 1) != 0) {
                              lVar6 = **(long **)(lVar4 + 0x30);
                              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar6);
                              }
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                lVar6 = **(long **)(lVar4 + 0x30);
                                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar6);
                                }
                                func_0x00f78ad0(lVar6);
                              }
                            }
                            lVar4 = **(long **)(lVar4 + 0x30);
                            if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                              func_0x00fac028(lVar4);
                            }
                            return (ulong)**(byte **)(lVar4 + 0xb8);
                          }
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar4 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_290;
                        }
                        else {
                          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                          if (iVar3 == 0) {
                            return 1;
                          }
                          uVar5 = **(undefined8 **)(lVar6 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          puVar2 = &uStack_260;
                          pppuVar8 = (undefined8 ***)ppuStack_270;
                          puStack_298 = puStack_268;
                        }
                      }
                      else {
                        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                        if (iVar3 == 0) {
                          return 1;
                        }
                        uVar5 = **(undefined8 **)(lVar4 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        puVar2 = &uStack_230;
                        pppuVar8 = (undefined8 ***)ppuStack_240;
                        puStack_298 = puStack_238;
                      }
                    }
                    else {
                      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                      if (iVar3 == 0) {
                        return 1;
                      }
                      uVar5 = **(undefined8 **)(lVar6 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      puVar2 = &uStack_200;
                      pppuVar8 = (undefined8 ***)ppuStack_210;
                      puStack_298 = puStack_208;
                    }
                  }
                  else {
                    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                    if (iVar3 == 0) {
                      return 1;
                    }
                    uVar5 = **(undefined8 **)(lVar4 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    puVar2 = &uStack_1d0;
                    pppuVar8 = (undefined8 ***)ppuStack_1e0;
                    puStack_298 = puStack_1d8;
                  }
                }
                else {
                  iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
                  if (iVar3 == 0) {
                    return 1;
                  }
                  uVar5 = **(undefined8 **)(lVar6 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                  lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  puVar2 = &uStack_1a0;
                  pppuVar8 = (undefined8 ***)ppuStack_1b0;
                  puStack_298 = puStack_1a8;
                }
              }
              else {
                iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
                if (iVar3 == 0) {
                  return 1;
                }
                uVar5 = **(undefined8 **)(lVar4 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                puVar2 = &uStack_170;
                pppuVar8 = (undefined8 ***)ppuStack_180;
                puStack_298 = puStack_178;
              }
            }
            else {
              iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
              if (iVar3 == 0) {
                return 1;
              }
              uVar5 = **(undefined8 **)(lVar6 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
              lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              puVar2 = &uStack_140;
              pppuVar8 = (undefined8 ***)ppuStack_150;
              puStack_298 = puStack_148;
            }
          }
          else {
            iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
            if (iVar3 == 0) {
              return 1;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puVar2 = &uStack_110;
            pppuVar8 = (undefined8 ***)ppuStack_120;
            puStack_298 = puStack_118;
          }
        }
        else {
          iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
          if (iVar3 == 0) {
            return 1;
          }
          uVar5 = **(undefined8 **)(lVar6 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
          lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          puVar2 = &uStack_e0;
          pppuVar8 = (undefined8 ***)ppuStack_f0;
          puStack_298 = puStack_e8;
        }
      }
      else {
        iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
        if (iVar3 == 0) {
          return 1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
        lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        puVar2 = &uStack_b0;
        pppuVar8 = (undefined8 ***)ppuStack_c0;
        puStack_298 = puStack_b8;
      }
    }
    else {
      iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar4,0);
      if (iVar3 == 0) {
        return 1;
      }
      uVar5 = **(undefined8 **)(lVar6 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
      puVar2 = &uStack_80;
      pppuVar8 = (undefined8 ***)ppuStack_90;
      puStack_298 = puStack_88;
    }
  }
  else {
    iVar3 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar6,0);
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    lVar4 = func_0x00f78adc(uVar5,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
    puVar2 = (undefined8 *)&stack0xffffffffffffffb0;
    pppuVar8 = (undefined8 ***)ppuStack_60;
    puStack_298 = puStack_58;
  }
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar2 + -8) = puStack_298;
  lVar4 = func_0x00fe01c8(*(undefined8 *)(lVar4 + 0x10),1);
  return (ulong)(*(byte *)(lVar4 + 0x132) >> 5 & 1);
}



