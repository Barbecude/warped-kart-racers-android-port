// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Settings.AtlasQualitySettings.<Init>d__132

// ============================================================
// RVA: 0x145e85c | Atlas.Settings.AtlasQualitySettings.<Init>d__132..ctor
// ============================================================

void Atlas_Settings_AtlasQualitySettings__Init_d__132___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x146091c | Atlas.Settings.AtlasQualitySettings.<Init>d__132.System.IDisposable.Dispose
// ============================================================

void Atlas_Settings_AtlasQualitySettings__Init_d__132__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1460920 | Atlas.Settings.AtlasQualitySettings.<Init>d__132.MoveNext
// ============================================================

ulong Atlas_Settings_AtlasQualitySettings__Init_d__132__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x21;
  undefined8 uVar9;
  uint uStack_64;
  
  if ((bRam0000000003eb480e & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d52448);
    func_0x00f78a20(0x3d52450);
    func_0x00f78a20(0x3d52458);
    func_0x00f78a20(0x3d52460);
    func_0x00f78a20(0x3d52468);
    func_0x00f78a20(0x3d52470);
    func_0x00f78a20(0x3d52478);
    func_0x00f78a20(0x3d52440);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d21318);
    func_0x00f78a20(0x3d1ddb0);
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a108);
    func_0x00f78a20(0x3d257b0);
    func_0x00f78a20(0x3d7a3e0);
    func_0x00f78a20(0x3d7b318);
    bRam0000000003eb480e = 1;
  }
  uStack_64 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = **(undefined8 **)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8);
    unaff_x21 = (long *)(*(undefined8 **)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8))[2];
    uVar3 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x74) = uVar3;
      uVar3 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      *(undefined4 *)(lVar8 + 0x78) = uVar3;
      *(undefined4 *)(lVar8 + 0x7c) = *(undefined4 *)(lVar8 + 0x74);
      *(undefined4 *)(lVar8 + 0x80) = uVar3;
      uVar9 = func_0x00f78aec(/*Core.Settings.QualitySettings_TypeInfo*/ uRam0000000003d23f68);
      /*Core.Settings.QualitySettings$$.ctor*/ func_0x0168f4c0(uVar9,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
      uVar9 = func_0x00f78aec(/*Core.Settings.DeviceQualitySettings_TypeInfo*/ uRam0000000003d21318);
      /*Core.Settings.DeviceQualitySettings$$.ctor*/ func_0x0168c9e4(uVar9,0);
      *(undefined8 *)(param_1 + 0x30) = uVar9;
      if (*(long *)(lVar8 + 0x10) != 0) {
        /*Core.Settings.QualitySettings$$Init*/ func_0x0168c9ec(*(long *)(lVar8 + 0x10),0);
        if (*(long *)(param_1 + 0x30) != 0) {
          /*Core.Settings.DeviceQualitySettings$$Init*/ func_0x0168b1dc(*(long *)(param_1 + 0x30),0);
          uVar5 = /*System.IO.File$$ReadAllText*/ func_0x02ad1220(uVar5,0);
          *(undefined8 *)(param_1 + 0x38) = uVar5;
          uVar5 = /*System.IO.File$$ReadAllText*/ func_0x02ad1220(unaff_x21,0);
          *(undefined8 *)(param_1 + 0x40) = uVar5;
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x10) = 1;
          goto LAB_01460f98;
        }
      }
    }
    goto LAB_01460fd8;
  }
  if (iVar1 != 1) goto LAB_01460f98;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
    /*Core.Settings.QualitySettings$$LoadFromConfigFileString*/ func_0x0168ce44(*(long *)(lVar8 + 0x10),*(undefined8 *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x30) != 0) {
      /*Core.Settings.DeviceQualitySettings$$LoadFromConfigFileString*/ func_0x0168c210(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),0);
      unaff_x21 = /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_var*/ plRam0000000003d1a108;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x408))
                          (plVar4,/*STR('m_MainLightShadowmapResolution')*/ uRam0000000003d7a3e0,0x24,*(undefined8 *)(*plVar4 + 0x410));
        *(undefined8 *)(lVar8 + 0xa0) = uVar5;
        plVar4 = (long *)/*UnityEngine.Rendering.GraphicsSettings$$get_renderPipelineAsset*/ func_0x03230868(0);
        if (plVar4 != (long *)0x0) {
          unaff_x21 = plVar4;
          if ((*(byte *)(*plVar4 + 300) < *(byte *)(/*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0 + 300)) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0 + 300) * 8
                       + -8) != /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0)) goto LAB_01460fdc;
          *(undefined1 *)(lVar8 + 0x85) = *(undefined1 *)((long)plVar4 + 0x5c);
          *(int *)(lVar8 + 0x88) = (int)plVar4[0x17];
          *(undefined4 *)(lVar8 + 0x8c) = *(undefined4 *)((long)plVar4 + 0x84);
          *(int *)(lVar8 + 0x90) = (int)plVar4[0x11];
          uVar3 = /*UnityEngine.QualitySettings$$get_anisotropicFiltering*/ func_0x032512ec(0);
          *(undefined4 *)(lVar8 + 0x94) = uVar3;
          uVar3 = /*UnityEngine.QualitySettings$$get_asyncUploadTimeSlice*/ func_0x032514c8(0);
          *(undefined4 *)(lVar8 + 0x98) = uVar3;
          /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset$$GetRenderer*/ func_0x0315bb50(plVar4,0,0);
          lVar6 = /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset$$get_scriptableRenderer*/ func_0x03162ed4(plVar4,0);
          if ((lVar6 == 0) || (lVar6 = /*System.Object$$GetType*/ func_0x02959198(lVar6,0), lVar6 == 0)) goto LAB_01460fd8;
          plVar7 = (long *)/*System.Type$$GetProperty*/ func_0x02a03448(lVar6,/*STR('rendererFeatures')*/ uRam0000000003d7b318,0x24,0);
          if (plVar7 == (long *)0x0) {
LAB_01460bfc:
            plVar4 = (long *)0x0;
          }
          else {
            uVar5 = /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset$$get_scriptableRenderer*/ func_0x03162ed4(plVar4,0);
            plVar4 = (long *)(**(code **)(*plVar7 + 0x2e8))
                                       (plVar7,uVar5,0,*(undefined8 *)(*plVar7 + 0x2f0));
            if (plVar4 == (long *)0x0) goto LAB_01460bfc;
            if (*(byte *)(*plVar4 + 300) < *(byte *)(/*System.Collections.Generic.List<ScriptableRendererFeature>_TypeInfo*/ lRam0000000003d1ddb0 + 300)) goto LAB_01460bfc;
            if (*(long *)(*(long *)(*plVar4 + 200) +
                          (ulong)*(byte *)(/*System.Collections.Generic.List<ScriptableRendererFeature>_TypeInfo*/ lRam0000000003d1ddb0 + 300) * 8 + -8) !=
                /*System.Collections.Generic.List<ScriptableRendererFeature>_TypeInfo*/ lRam0000000003d1ddb0) {
              plVar4 = (long *)0x0;
            }
          }
          *(long **)(lVar8 + 0xa8) = plVar4;
          uVar5 = Atlas_Settings_AtlasQualitySettings__GetRenderingFeature_OutlineFeature_
                            (lVar8,uRam0000000003d52440);
          *(undefined8 *)(lVar8 + 0xb0) = uVar5;
          lVar6 = *(long *)(lVar8 + 0x10);
          if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x20);
          uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar8,uRam0000000003d52458,uRam0000000003d2a320);
          unaff_x21 = (long *)0x0;
          if (lVar6 != 0) {
            /*Core.Settings.QualitySettings$$RegisterOnSettingChanged*/ func_0x0168de40(lVar6,uVar9,uVar5,0);
            lVar6 = *(long *)(lVar8 + 0x10);
            uVar9 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x48);
            uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar8,uRam0000000003d52478,uRam0000000003d2a320);
            unaff_x21 = (long *)0x0;
            if (lVar6 != 0) {
              /*Core.Settings.QualitySettings$$RegisterOnSettingChanged*/ func_0x0168de40(lVar6,uVar9,uVar5,0);
              lVar6 = *(long *)(lVar8 + 0x10);
              uVar9 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60);
              uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
              /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar8,uRam0000000003d52468,uRam0000000003d2a320);
              unaff_x21 = (long *)0x0;
              if (lVar6 != 0) {
                /*Core.Settings.QualitySettings$$RegisterOnSettingChanged*/ func_0x0168de40(lVar6,uVar9,uVar5,0);
                lVar6 = *(long *)(lVar8 + 0x10);
                uVar9 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138);
                uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
                /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar8,uRam0000000003d52460,uRam0000000003d2a320);
                unaff_x21 = (long *)0x0;
                if (lVar6 != 0) {
                  /*Core.Settings.QualitySettings$$RegisterOnSettingChanged*/ func_0x0168de40(lVar6,uVar9,uVar5,0);
                  lVar6 = *(long *)(lVar8 + 0x10);
                  uVar9 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x160);
                  uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
                  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar8,uRam0000000003d52470,uRam0000000003d2a320);
                  unaff_x21 = (long *)0x0;
                  if (lVar6 != 0) {
                    /*Core.Settings.QualitySettings$$RegisterOnSettingChanged*/ func_0x0168de40(lVar6,uVar9,uVar5,0);
                    lVar6 = *(long *)(lVar8 + 0x10);
                    uVar9 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400);
                    uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
                    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar8,uRam0000000003d52448,uRam0000000003d2a320);
                    unaff_x21 = (long *)0x0;
                    if (lVar6 != 0) {
                      /*Core.Settings.QualitySettings$$RegisterOnSettingChanged*/ func_0x0168de40(lVar6,uVar9,uVar5,0);
                      unaff_x21 = *(long **)(lVar8 + 0x10);
                      uVar9 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1e8);
                      uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
                      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar8,uRam0000000003d52450,uRam0000000003d2a320);
                      if (unaff_x21 != (long *)0x0) {
                        /*Core.Settings.QualitySettings$$RegisterOnSettingChanged*/ func_0x0168de40(unaff_x21,uVar9,uVar5,0);
                        if (*(long *)(param_1 + 0x30) != 0) {
                          /*Core.Settings.DeviceQualitySettings$$TryGetParametersForDevice*/ func_0x0168bce0(*(long *)(param_1 + 0x30),&uStack_64,0);
                          if (*(long *)(param_1 + 0x30) != 0) {
                            /*Core.Settings.DeviceQualitySettings$$DeInit*/ func_0x0168b254(*(long *)(param_1 + 0x30),0);
                            *(undefined8 *)(param_1 + 0x30) = 0;
                            uVar2 = *(uint *)(param_1 + 0x28);
                            if (4 < *(uint *)(param_1 + 0x28)) {
                              uVar2 = uStack_64;
                            }
                            uStack_64 = uVar2;
                            Atlas_Settings_AtlasQualitySettings__TrySetQualityLevel
                                      (lVar8,uStack_64,0);
LAB_01460f98:
                            return (ulong)(iVar1 == 0);
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
    }
  }
LAB_01460fd8:
  func_0x00f78af4();
LAB_01460fdc:
  lVar8 = func_0x00f78e5c(unaff_x21);
  return *(ulong *)(lVar8 + 0x18);
}



// ============================================================
// RVA: 0x1460fe4 | Atlas.Settings.AtlasQualitySettings.<Init>d__132.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Settings_AtlasQualitySettings__Init_d__132__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1460fec | Atlas.Settings.AtlasQualitySettings.<Init>d__132.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Settings_AtlasQualitySettings__Init_d__132__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62218);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x146102c | Atlas.Settings.AtlasQualitySettings.<Init>d__132.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Settings_AtlasQualitySettings__Init_d__132__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



