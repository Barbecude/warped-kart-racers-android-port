// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12

// ============================================================
// RVA: 0x16636cc | Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12..ctor
// ============================================================

void Core_Scenes_AddressablesSceneLoader__UnloadScenesAndWait_d__12___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x166446c | Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12.System.IDisposable.Dispose
// ============================================================

void Core_Scenes_AddressablesSceneLoader__UnloadScenesAndWait_d__12__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1664470 | Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12.MoveNext
// ============================================================

undefined8 Core_Scenes_AddressablesSceneLoader__UnloadScenesAndWait_d__12__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb588c & 1) == 0) {
    func_0x00f78a20(0x3d43418);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2bff0);
    func_0x00f78a20(0x3d2c028);
    func_0x00f78a20(0x3d2c030);
    func_0x00f78a20(0x3d33240);
    func_0x00f78a20(0x3d33248);
    func_0x00f78a20(0x3d33250);
    func_0x00f78a20(0x3d3bca8);
    func_0x00f78a20(0x3d3cbd0);
    func_0x00f78a20(0x3d3cbd8);
    func_0x00f78a20(0x3d3cbe0);
    func_0x00f78a20(0x3d3cbe8);
    func_0x00f78a20(0x3d3cbf0);
    bRam0000000003eb588c = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      /*System.Collections.Generic.List<AddressablesSceneLoader.SceneData>$$GetEnumerator*/ func_0x024a2a2c(&uStack_260,*(long *)(lVar6 + 0x10),uRam0000000003d3cbd8);
      uStack_f8 = uStack_238;
      uStack_100 = uStack_240;
      uStack_e8 = uStack_228;
      uStack_f0 = uStack_230;
      uStack_d8 = uStack_218;
      uStack_e0 = uStack_220;
      uStack_c8 = uStack_208;
      uStack_d0 = uStack_210;
      uStack_118 = uStack_258;
      uStack_120 = uStack_260;
      uStack_108 = uStack_248;
      uStack_110 = uStack_250;
      uVar4 = 1;
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<AddressablesSceneLoader.SceneData>$$MoveNext*/ func_0x01f78268(&uStack_120,uRam0000000003d33248), (uVar3 & 1) != 0) {
        uStack_148 = uStack_e8;
        uStack_150 = uStack_f0;
        uStack_138 = uStack_d8;
        uStack_140 = uStack_e0;
        uStack_128 = uStack_c8;
        uStack_130 = uStack_d0;
        uStack_168 = uStack_108;
        uStack_170 = uStack_110;
        uStack_158 = uStack_f8;
        uStack_160 = uStack_100;
        uStack_228 = uStack_d8;
        uStack_230 = uStack_e0;
        uStack_218 = uStack_c8;
        uStack_220 = uStack_d0;
        uStack_248 = uStack_f8;
        uStack_250 = uStack_100;
        uStack_238 = uStack_e8;
        uStack_240 = uStack_f0;
        uStack_258 = uStack_108;
        uStack_260 = uStack_110;
        uStack_188 = uStack_d8;
        uStack_190 = uStack_e0;
        uStack_178 = uStack_c8;
        uStack_180 = uStack_d0;
        uVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$IsValid*/ func_0x01b58a18(&uStack_190,uRam0000000003d2bff0);
        if ((uVar3 & 1) != 0) {
          uStack_228 = uStack_138;
          uStack_230 = uStack_140;
          uStack_218 = uStack_128;
          uStack_220 = uStack_130;
          uStack_248 = uStack_158;
          uStack_250 = uStack_160;
          uStack_238 = uStack_148;
          uStack_240 = uStack_150;
          uStack_258 = uStack_168;
          uStack_260 = uStack_170;
          uStack_188 = uStack_138;
          uStack_190 = uStack_140;
          uStack_178 = uStack_128;
          uStack_180 = uStack_130;
          iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_Status*/ func_0x01b58e08(&uStack_190,uRam0000000003d2c030);
          if (iVar1 == 1) {
            uStack_238 = uStack_148;
            uStack_240 = uStack_150;
            uStack_228 = uStack_138;
            uStack_230 = uStack_140;
            uStack_218 = uStack_128;
            uStack_220 = uStack_130;
            uStack_258 = uStack_168;
            uStack_260 = uStack_170;
            uStack_248 = uStack_158;
            uStack_250 = uStack_160;
            if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uStack_1f8 = uStack_228;
            uStack_200 = uStack_230;
            uStack_1e8 = uStack_218;
            uStack_1f0 = uStack_220;
            /*UnityEngine.AddressableAssets.Addressables$$Release<SceneInstance>*/ func_0x0171fdd8(&uStack_200,uRam0000000003d43418);
          }
        }
        uStack_228 = uStack_138;
        uStack_230 = uStack_140;
        uStack_218 = uStack_128;
        uStack_220 = uStack_130;
        uStack_248 = uStack_158;
        uStack_250 = uStack_160;
        uStack_238 = uStack_148;
        uStack_240 = uStack_150;
        uStack_258 = uStack_168;
        uStack_260 = uStack_170;
        uStack_188 = uStack_138;
        uStack_190 = uStack_140;
        uStack_178 = uStack_128;
        uStack_180 = uStack_130;
        uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$IsValid*/ func_0x01b58a18(&uStack_190,uRam0000000003d2bff0);
        uVar4 = (uVar2 ^ 1) & uVar4;
      }
      /*System.Collections.Generic.List.Enumerator<AddressablesSceneLoader.SceneData>$$Dispose*/ func_0x01f78264(&uStack_120,uRam0000000003d33240);
      if (uVar4 == 0) {
LAB_016648b4:
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      if (*(long *)(lVar6 + 0x10) != 0) {
        /*System.Collections.Generic.List<AddressablesSceneLoader.SceneData>$$Clear*/ func_0x024a2160(*(long *)(lVar6 + 0x10),uRam0000000003d3cbd0);
        if (*(long *)(lVar6 + 0x18) != 0) {
          /*System.Collections.Generic.List<Scene>$$Clear*/ func_0x02456018(*(long *)(lVar6 + 0x18),uRam0000000003d3bca8);
          goto LAB_016648a8;
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x20) != 2) {
        return 0;
      }
      *(undefined4 *)(lVar6 + 0x20) = 3;
      lVar5 = *(long *)(lVar6 + 0x10);
      if (lVar5 == 0) {
LAB_016648a8:
        *(undefined4 *)(lVar6 + 0x20) = 0;
        return 0;
      }
      uVar3 = 0;
      lVar7 = 0x20;
      do {
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) goto LAB_016648b4;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        _memmove(&uStack_c0,*(long *)(lVar5 + 0x10) + lVar7,0x50);
        auVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_Result*/ func_0x01b58d5c(&uStack_b0,uRam0000000003d2c028);
        if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.AddressableAssets.Addressables$$UnloadSceneAsync*/ func_0x02fb9550(&uStack_1b0,auVar8._0_8_,auVar8._8_8_,1,0);
        uStack_88 = uStack_1a8;
        uStack_90 = uStack_1b0;
        uStack_78 = uStack_198;
        uStack_80 = uStack_1a0;
        uStack_1d8 = uStack_98;
        uStack_1e0 = uStack_a0;
        uStack_1c8 = uStack_1a8;
        uStack_1d0 = uStack_1b0;
        uStack_1b8 = uStack_198;
        uStack_1c0 = uStack_1a0;
        uStack_1f8 = uStack_b8;
        uStack_200 = uStack_c0;
        uStack_1e8 = uStack_a8;
        uStack_1f0 = uStack_b0;
        uStack_258 = uStack_a8;
        uStack_260 = uStack_b0;
        uStack_248 = uStack_98;
        uStack_250 = uStack_a0;
        /*UnityEngine.AddressableAssets.Addressables$$Release<SceneInstance>*/ func_0x0171fdd8(&uStack_260,uRam0000000003d43418);
        if (*(long *)(lVar6 + 0x10) == 0) break;
        uStack_238 = uStack_98;
        uStack_240 = uStack_a0;
        uStack_228 = uStack_88;
        uStack_230 = uStack_90;
        uStack_218 = uStack_78;
        uStack_220 = uStack_80;
        uStack_258 = uStack_b8;
        uStack_260 = uStack_c0;
        uStack_248 = uStack_a8;
        uStack_250 = uStack_b0;
        /*System.Collections.Generic.List<AddressablesSceneLoader.SceneData>$$set_Item*/ func_0x024a1a68(*(long *)(lVar6 + 0x10),uVar3,&uStack_260,uRam0000000003d3cbf0);
        uVar3 = uVar3 + 1;
        lVar5 = *(long *)(lVar6 + 0x10);
        lVar7 = lVar7 + 0x50;
      } while (lVar5 != 0);
    }
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x1664930 | Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Scenes_AddressablesSceneLoader__UnloadScenesAndWait_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1664938 | Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Scenes_AddressablesSceneLoader__UnloadScenesAndWait_d__12__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61f70);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1664978 | Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Scenes_AddressablesSceneLoader__UnloadScenesAndWait_d__12__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



