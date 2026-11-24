// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndScene.<DeInit>d__40

// ============================================================
// RVA: 0x154ec64 | Atlas.FrontEnd.FrontEndScene.<DeInit>d__40..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndScene__DeInit_d__40___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154ec90 | Atlas.FrontEnd.FrontEndScene.<DeInit>d__40.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndScene__DeInit_d__40__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154ec94 | Atlas.FrontEnd.FrontEndScene.<DeInit>d__40.MoveNext
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__DeInit_d__40__MoveNext(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000003eb4f88 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d56dc8);
    func_0x00f78a20(0x3d56dd0);
    func_0x00f78a20(0x3d27d10);
    bRam0000000003eb4f88 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
      /*Atlas.FrontEnd.KartJiggler$$DeInit*/ func_0x015cd0f8(*(long *)(lVar3 + 0x78),0);
      *(undefined8 *)(lVar3 + 0x78) = 0;
      if (*(long *)(lVar3 + 0x10) != 0) {
        /*Core.Cameras.CameraManager$$SetNoActiveCamera*/ func_0x0163aa20(*(long *)(lVar3 + 0x10),0);
        lVar5 = *(long *)(lVar3 + 0x90);
        if (lVar5 != 0) {
          lVar8 = 0;
          uVar4 = 0;
          do {
            if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar4) {
              if (*(long *)(lVar3 + 0x68) != 0) {
                uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x68),0);
                /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar2,1,0);
                return 0;
              }
              break;
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar4) goto code_r0x0154ef5c;
            lVar6 = *(long *)(lVar5 + lVar8 + 0x28);
            lVar5 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ uRam0000000003d27d10);
            puVar1 = puRam0000000003d56dd0;
            *(undefined8 *)(lVar5 + 0x10) = *puRam0000000003d56dd0;
            *(long *)(lVar5 + 0x20) = lVar3;
            *(undefined8 **)(lVar5 + 0x28) = puVar1;
            if (lVar6 == 0) break;
            Atlas_Gameplay_Kart_KartPartLoader__remove_PartLoaded(lVar6,lVar5,0);
            Atlas_FrontEnd_FrontEndScene__DestroyKartAndPedestal(lVar3,uVar4,0);
            lVar5 = *(long *)(lVar3 + 0x90);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= uVar4) goto code_r0x0154ef5c;
            lVar5 = *(long *)(lVar5 + lVar8 + 0x28);
            if (lVar5 == 0) break;
            Atlas_Gameplay_Kart_KartPartLoader__DeInit(lVar5,0);
            lVar5 = *(long *)(lVar3 + 0x90);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= uVar4) goto code_r0x0154ef5c;
            lVar5 = *(long *)(lVar5 + lVar8 + 0x30);
            if (lVar5 == 0) break;
            lVar8 = lVar8 + 0x40;
            uVar4 = uVar4 + 1;
            Atlas_Gameplay_Kart_KartFEAnimator__DeInit(lVar5,0);
            lVar5 = *(long *)(lVar3 + 0x90);
          } while (lVar5 != 0);
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x88) == '\0') {
        return 0;
      }
      lVar5 = *(long *)(lVar3 + 0x48);
      if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138);
      uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar3,uRam0000000003d56dc8,uRam0000000003d2a320);
      if (lVar5 != 0) {
        /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar5,uVar7,uVar2,0);
        if (*(long *)(lVar3 + 0x20) != 0) {
          /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x98),0);
          if (*(long *)(lVar3 + 0x20) != 0) {
            /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x9c),0);
            if (*(long *)(lVar3 + 0x80) != 0) {
              /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar3 + 0x80),0);
              *(undefined8 *)(lVar3 + 0x80) = 0;
              if (*(long *)(lVar3 + 0xb0) != 0) {
                if (*(long *)(lVar3 + 0x40) == 0) goto LAB_0154ef58;
                Core_Application_CoroutineRunner__StopCoroutine
                          (*(long *)(lVar3 + 0x40),*(long *)(lVar3 + 0xb0),0);
              }
              uVar2 = Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene(lVar3,0);
              *(undefined8 *)(param_1 + 0x18) = uVar2;
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0154ef58:
  func_0x00f78af4();
code_r0x0154ef5c:
  uVar2 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar2,0);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154ef68 | Atlas.FrontEnd.FrontEndScene.<DeInit>d__40.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__DeInit_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154ef70 | Atlas.FrontEnd.FrontEndScene.<DeInit>d__40.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__DeInit_d__40__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e68);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154efb0 | Atlas.FrontEnd.FrontEndScene.<DeInit>d__40.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__DeInit_d__40__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



