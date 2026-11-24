// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndScene.<Init>d__35

// ============================================================
// RVA: 0x154efb8 | Atlas.FrontEnd.FrontEndScene.<Init>d__35..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndScene__Init_d__35___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154efe4 | Atlas.FrontEnd.FrontEndScene.<Init>d__35.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndScene__Init_d__35__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154efe8 | Atlas.FrontEnd.FrontEndScene.<Init>d__35.MoveNext
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__Init_d__35__MoveNext(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((bRam0000000003eb4f89 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d26960);
    func_0x00f78a20(0x3d26968);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d53430);
    func_0x00f78a20(0x3d56dc8);
    func_0x00f78a20(0x3d56dd0);
    func_0x00f78a20(0x3d56dd8);
    func_0x00f78a20(0x3d56de0);
    func_0x00f78a20(0x3d56de8);
    func_0x00f78a20(0x3d56df0);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d22c88);
    func_0x00f78a20(0x3d22c98);
    func_0x00f78a20(0x3d22cc0);
    func_0x00f78a20(0x3d22f80);
    func_0x00f78a20(0x3d27d10);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d70fd0);
    func_0x00f78a20(0x3d6d048);
    bRam0000000003eb4f89 = 1;
  }
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar8 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(lVar8 + 0x38) = uVar6;
      *(undefined8 *)(lVar8 + 0x20) = uVar10;
      *(undefined8 *)(lVar8 + 0x28) = uVar4;
      lVar3 = *(long *)(param_1 + 0x60);
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(param_1 + 0x58);
      *(long *)(lVar8 + 0x48) = lVar3;
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(lVar8 + 0x58) = uVar6;
      if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138);
      uVar6 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar6,lVar8,uRam0000000003d56dc8,uRam0000000003d2a320);
      if (lVar3 != 0) {
        /*Atlas.Settings.AtlasQualitySettings$$RegisterOnSettingChanged*/ func_0x0145ee3c(lVar3,uVar10,uVar6,0);
        Atlas_FrontEnd_FrontEndScene__ApplyOutlineSettings
                  (lVar8,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),0);
        if (*(long *)(lVar8 + 0x10) != 0) {
          lVar3 = /*Core.Cameras.CameraManager$$GetRegisteredCamera*/ func_0x0163a200(*(long *)(lVar8 + 0x10),/*STR('FrontEnd')*/ uRam0000000003d6d048,0);
          *(long *)(lVar8 + 0x68) = lVar3;
          if (lVar3 != 0) {
            uVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d53430);
            *(undefined8 *)(lVar8 + 0x70) = uVar6;
            if (((*(long *)(lVar8 + 0x38) != 0) &&
                (lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10), lVar3 != 0)) &&
               (lVar3 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(lVar3,uRam0000000003d57360), lVar3 != 0)) {
              uVar6 = *(undefined8 *)(lVar3 + 0x100);
              *(undefined8 *)(lVar8 + 0xa8) = *(undefined8 *)(lVar3 + 0x108);
              lVar3 = *(long *)(lVar8 + 0x20);
              uVar10 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
              /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar10,lVar8,uRam0000000003d56de0,0);
              uVar4 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadFailedHandler_TypeInfo*/ uRam0000000003d26960);
              /*Core.Assets.AssetManager.AssetLoadFailedHandler$$.ctor*/ func_0x016384a0(uVar4,lVar8,uRam0000000003d56dd8,0);
              if (lVar3 != 0) {
                uVar2 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar3,uVar6,/*STR('FrontEndContext')*/ uRam0000000003d6d050,uVar10,uVar4,0);
                *(undefined4 *)(lVar8 + 0x98) = uVar2;
                lVar3 = *(long *)(lVar8 + 0x20);
                uVar6 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
                /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar6,lVar8,uRam0000000003d56df0,0);
                uVar10 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadFailedHandler_TypeInfo*/ uRam0000000003d26960);
                /*Core.Assets.AssetManager.AssetLoadFailedHandler$$.ctor*/ func_0x016384a0(uVar10,lVar8,uRam0000000003d56de8,0);
                if (lVar3 != 0) {
                  uVar2 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar3,/*STR('P_VFX_Portal')*/ uRam0000000003d70fd0,/*STR('FrontEndContext')*/ uRam0000000003d6d050,uVar6,
                                          uVar10,0);
                  *(undefined4 *)(lVar8 + 0x9c) = uVar2;
                  lVar3 = func_0x00f78aec(/*Atlas.FrontEnd.KartJiggler_TypeInfo*/ uRam0000000003d22c98);
                  /*Atlas.FrontEnd.KartJiggler$$.ctor*/ func_0x015cd844(lVar3,0);
                  *(long *)(lVar8 + 0x78) = lVar3;
                  if (lVar3 != 0) {
                    /*Atlas.FrontEnd.KartJiggler$$Init*/ func_0x015cd094(lVar3,*(undefined8 *)(lVar8 + 0x10),0);
                    lVar3 = func_0x00f78aec(/*Atlas.Lighting.LightWorld_TypeInfo*/ uRam0000000003d22f80);
                    /*Atlas.Lighting.LightWorld$$.ctor*/ func_0x01486838(lVar3,0);
                    *(long *)(lVar8 + 0x80) = lVar3;
                    if (lVar3 != 0) {
                      /*Atlas.Lighting.LightWorld$$Init*/ func_0x01484c5c(lVar3,*(undefined8 *)(lVar8 + 0x48),0);
                      lVar3 = *(long *)(lVar8 + 0x90);
                      if (lVar3 != 0) {
                        uVar9 = 0;
                        while ((int)uVar9 < *(int *)(lVar3 + 0x18)) {
                          if (*(long *)(lVar8 + 0x30) == 0) goto code_r0x0154f67c;
                          uVar6 = Atlas_Gameplay_Kart_KartCompositeFactory__CreateFrontEndKartComposite
                                            (*(long *)(lVar8 + 0x30),0);
                          if (*(uint *)(lVar3 + 0x18) <= uVar9) goto code_r0x0154f680;
                          lVar11 = (long)(int)uVar9;
                          *(undefined8 *)(lVar3 + lVar11 * 0x40 + 0x20) = uVar6;
                          lVar3 = *(long *)(lVar8 + 0x90);
                          if (lVar3 == 0) goto code_r0x0154f67c;
                          uVar6 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartPartLoader_TypeInfo*/ uRam0000000003d22cc0);
                          Atlas_Gameplay_Kart_KartPartLoader___ctor(uVar6,0);
                          if (*(uint *)(lVar3 + 0x18) <= uVar9) goto code_r0x0154f680;
                          *(undefined8 *)(lVar3 + lVar11 * 0x40 + 0x28) = uVar6;
                          lVar3 = *(long *)(lVar8 + 0x90);
                          if (lVar3 == 0) goto code_r0x0154f67c;
                          if (*(uint *)(lVar3 + 0x18) <= uVar9) goto code_r0x0154f680;
                          if (*(long *)(lVar8 + 0x38) == 0) goto code_r0x0154f67c;
                          lVar3 = lVar3 + lVar11 * 0x40;
                          lVar5 = *(long *)(lVar3 + 0x28);
                          if (lVar5 == 0) goto code_r0x0154f67c;
                          Atlas_Gameplay_Kart_KartPartLoader__Init
                                    (lVar5,*(undefined8 *)(lVar3 + 0x20),
                                     *(undefined8 *)(lVar8 + 0x20),
                                     *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10),0);
                          lVar3 = *(long *)(lVar8 + 0x90);
                          if (lVar3 == 0) goto code_r0x0154f67c;
                          if (*(uint *)(lVar3 + 0x18) <= uVar9) goto code_r0x0154f680;
                          lVar5 = *(long *)(lVar3 + lVar11 * 0x40 + 0x28);
                          lVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ uRam0000000003d27d10);
                          puVar1 = puRam0000000003d56dd0;
                          *(undefined8 *)(lVar3 + 0x10) = *puRam0000000003d56dd0;
                          *(long *)(lVar3 + 0x20) = lVar8;
                          *(undefined8 **)(lVar3 + 0x28) = puVar1;
                          if (lVar5 == 0) goto code_r0x0154f67c;
                          Atlas_Gameplay_Kart_KartPartLoader__add_PartLoaded(lVar5,lVar3,0);
                          lVar3 = *(long *)(lVar8 + 0x90);
                          if (lVar3 == 0) goto code_r0x0154f67c;
                          uVar6 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88);
                          Atlas_Gameplay_Kart_KartFEAnimator___ctor(uVar6,0);
                          if (*(uint *)(lVar3 + 0x18) <= uVar9) goto code_r0x0154f680;
                          *(undefined8 *)(lVar3 + lVar11 * 0x40 + 0x30) = uVar6;
                          lVar3 = *(long *)(lVar8 + 0x90);
                          if (lVar3 == 0) goto code_r0x0154f67c;
                          if (*(uint *)(lVar3 + 0x18) <= uVar9) goto code_r0x0154f680;
                          lVar5 = lVar3 + lVar11 * 0x40;
                          lVar7 = *(long *)(lVar5 + 0x20);
                          if ((lVar7 == 0) || (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0))
                          goto code_r0x0154f67c;
                          uVar9 = uVar9 + 1;
                          Atlas_Gameplay_Kart_KartFEAnimator__Init
                                    (lVar5,*(undefined8 *)(lVar7 + 0x28),
                                     *(undefined8 *)(lVar3 + lVar11 * 0x40 + 0x28),0);
                          lVar3 = *(long *)(lVar8 + 0x90);
                          if (lVar3 == 0) goto code_r0x0154f67c;
                        }
                        if (*(long *)(lVar8 + 0x20) != 0) {
                          uVar6 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar8 + 0x20),
                                                  *(undefined4 *)(lVar8 + 0x98),0);
                          *(undefined8 *)(param_1 + 0x18) = uVar6;
                          *(undefined4 *)(param_1 + 0x10) = 1;
                          return 1;
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
    goto code_r0x0154f67c;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
      uVar6 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x9c),0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      uVar2 = 2;
code_r0x0154f5d0:
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      return 1;
    }
    goto code_r0x0154f67c;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(param_1 + 0x78) != 0) {
      if (lVar8 != 0) {
        uVar6 = Atlas_FrontEnd_FrontEndScene__FindSceneAssetForType
                          (*(undefined8 *)(lVar8 + 0xa8),*(int *)(param_1 + 0x78),0);
        uVar6 = Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive(lVar8,uVar6,0,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        uVar2 = 3;
        goto code_r0x0154f5d0;
      }
      goto code_r0x0154f67c;
    }
    if (lVar8 == 0) goto code_r0x0154f67c;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto code_r0x0154f67c;
    *(undefined4 *)(lVar8 + 0xa0) = *(undefined4 *)(param_1 + 0x78);
  }
  uVar6 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar8,0);
  Atlas_FrontEnd_FrontEndScene__OnIPChanged(lVar8,uVar6,0);
  if (*(long *)(lVar8 + 0x10) != 0) {
    /*Core.Cameras.CameraManager$$SetActiveCamera*/ func_0x0163abf4(*(long *)(lVar8 + 0x10),/*STR('FrontEnd')*/ uRam0000000003d6d048,0);
    *(undefined1 *)(lVar8 + 0x88) = 1;
    return 0;
  }
code_r0x0154f67c:
  func_0x00f78af4();
code_r0x0154f680:
  uVar6 = func_0x00f78b24();
  lVar8 = func_0x00f78ac0(uVar6,0);
  return *(undefined8 *)(lVar8 + 0x18);
}



// ============================================================
// RVA: 0x154f68c | Atlas.FrontEnd.FrontEndScene.<Init>d__35.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__Init_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154f694 | Atlas.FrontEnd.FrontEndScene.<Init>d__35.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__Init_d__35__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e70);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154f6d4 | Atlas.FrontEnd.FrontEndScene.<Init>d__35.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__Init_d__35__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



