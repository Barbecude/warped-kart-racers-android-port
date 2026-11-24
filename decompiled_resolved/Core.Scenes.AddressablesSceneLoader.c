// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.AddressablesSceneLoader

// ============================================================
// RVA: 0x1663068 | Core.Scenes.AddressablesSceneLoader.get_RequestScenes
// ============================================================

undefined8 Core_Scenes_AddressablesSceneLoader__get_RequestScenes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1663070 | Core.Scenes.AddressablesSceneLoader.TryGetScene
// ============================================================

ulong Core_Scenes_AddressablesSceneLoader__TryGetScene
                (long param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  long lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  int iStack_70;
  undefined4 uStack_68;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5878 & 1) == 0) {
    func_0x00f78a20(0x3d32eb8);
    func_0x00f78a20(0x3d32ec0);
    func_0x00f78a20(0x3d32ec8);
    func_0x00f78a20(0x3d3bcb0);
    bRam0000000003eb5878 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60[0] = 0;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Collections.Generic.List<Scene>$$GetEnumerator*/ func_0x024567f0(&uStack_58,*(long *)(param_1 + 0x18),uRam0000000003d3bcb0);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<Scene>$$MoveNext*/ func_0x01f72ca4(&uStack_58,uRam0000000003d32ec0);
      if ((uVar3 & 1) == 0) {
        iStack_70 = 0x49;
        goto LAB_01663160;
      }
      auStack_60[0] = (undefined4)uStack_48;
      uVar4 = /*UnityEngine.SceneManagement.Scene$$get_name*/ func_0x0325d038(auStack_60,0);
      uVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar4,param_2,0);
    } while ((uVar5 & 1) == 0);
    *param_3 = auStack_60[0];
    iStack_70 = 0x52;
LAB_01663160:
    /*System.Collections.Generic.List.Enumerator<Scene>$$Dispose*/ func_0x01f72ca0(&uStack_58,uRam0000000003d32eb8);
    if (iStack_70 == 0x52) {
      return uVar3;
    }
code_r0x0166317c:
    *param_3 = 0;
    return 0;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    param_2 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<Scene>$$Dispose*/ func_0x01f72ca0(&uStack_58,uRam0000000003eb5000);
    if (param_2 == 0) goto code_r0x0166317c;
    func_0x00f78ac0(param_2,0);
  }
  auVar9 = __Unwind_Resume();
  uStack_a0 = 0x3eb5000;
  puStack_78 = &Core_Scenes_AddressablesSceneLoader__TryGetLastRequestedScene;
  lStack_98 = param_1;
  lStack_90 = param_2;
  puStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5879 & 1) == 0) {
    func_0x00f78a20(0x3d3bcb8);
    func_0x00f78a20(0x3d3bcc0);
    bRam0000000003eb5879 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (lVar7 == 0) {
    auVar10 = func_0x00f78af4();
    lVar7 = auVar10._0_8_;
    uStack_d0 = 0x3eb5000;
    uStack_c8 = 0x3eb5000;
    puStack_a8 = &Core_Scenes_AddressablesSceneLoader__RequestLoadSceneAdditive;
    ppuStack_b0 = &puStack_80;
    auStack_c0 = auVar9;
    if ((bRam0000000003eb587a & 1) == 0) {
      func_0x00f78a20(0x3d32ed0);
      func_0x00f78a20(0x3d32ed8);
      func_0x00f78a20(0x3d32ee0);
      func_0x00f78a20(0x3d3bce8);
      bRam0000000003eb587a = 1;
    }
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (*(int *)(lVar7 + 0x20) == 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      *(undefined4 *)(lVar7 + 0x20) = 1;
      if (auVar10._8_8_ != 0) {
        /*System.Collections.Generic.List<SceneInfo>$$GetEnumerator*/ func_0x02459270(&uStack_e8,auVar10._8_8_,uRam0000000003d3bce8);
        uVar8 = 1;
        while( true ) {
          uVar3 = /*System.Collections.Generic.List.Enumerator<SceneInfo>$$MoveNext*/ func_0x01f72edc(&uStack_e8,uRam0000000003d32ed8);
          if ((uVar3 & 1) == 0) break;
          uVar2 = /*Core.Scenes.AddressablesSceneLoader$$RequestLoadSceneAdditive*/ func_0x016633a8(lVar7,uStack_d8);
          uVar8 = uVar8 & uVar2;
        }
        /*System.Collections.Generic.List.Enumerator<SceneInfo>$$Dispose*/ func_0x01f72ed8(&uStack_e8,uRam0000000003d32ed0);
      }
    }
    return (ulong)uVar8;
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  if (iVar1 < 1) {
    *auVar9._8_8_ = 0;
  }
  else {
    *auVar9._8_8_ = *(undefined4 *)(*(long *)(lVar7 + 0x10) + (ulong)(iVar1 - 1) * 4 + 0x20);
  }
  return (ulong)(0 < iVar1);
}



// ============================================================
// RVA: 0x16631e0 | Core.Scenes.AddressablesSceneLoader.TryGetLastRequestedScene
// ============================================================

bool Core_Scenes_AddressablesSceneLoader__TryGetLastRequestedScene(long param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5879 & 1) == 0) {
    func_0x00f78a20(0x3d3bcb8);
    func_0x00f78a20(0x3d3bcc0);
    bRam0000000003eb5879 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      *param_2 = 0;
    }
    else {
      *param_2 = *(undefined4 *)(*(long *)(lVar4 + 0x10) + (ulong)(iVar1 - 1) * 4 + 0x20);
    }
    return 0 < iVar1;
  }
  auVar6 = func_0x00f78af4();
  lVar4 = auVar6._0_8_;
  if ((bRam0000000003eb587a & 1) == 0) {
    func_0x00f78a20(0x3d32ed0);
    func_0x00f78a20(0x3d32ed8);
    func_0x00f78a20(0x3d32ee0);
    func_0x00f78a20(0x3d3bce8);
    bRam0000000003eb587a = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(int *)(lVar4 + 0x20) == 3) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    *(undefined4 *)(lVar4 + 0x20) = 1;
    if (auVar6._8_8_ != 0) {
      /*System.Collections.Generic.List<SceneInfo>$$GetEnumerator*/ func_0x02459270(&uStack_78,auVar6._8_8_,uRam0000000003d3bce8);
      bVar5 = true;
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<SceneInfo>$$MoveNext*/ func_0x01f72edc(&uStack_78,uRam0000000003d32ed8), (uVar3 & 1) != 0) {
        bVar2 = /*Core.Scenes.AddressablesSceneLoader$$RequestLoadSceneAdditive*/ func_0x016633a8(lVar4,uStack_68);
        bVar5 = (bool)(bVar5 & bVar2);
      }
      /*System.Collections.Generic.List.Enumerator<SceneInfo>$$Dispose*/ func_0x01f72ed8(&uStack_78,uRam0000000003d32ed0);
    }
  }
  return bVar5;
}



// ============================================================
// RVA: 0x166326c | Core.Scenes.AddressablesSceneLoader.RequestLoadSceneAdditive
// ============================================================

uint Core_Scenes_AddressablesSceneLoader__RequestLoadSceneAdditive(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb587a & 1) == 0) {
    func_0x00f78a20(0x3d32ed0);
    func_0x00f78a20(0x3d32ed8);
    func_0x00f78a20(0x3d32ee0);
    func_0x00f78a20(0x3d3bce8);
    bRam0000000003eb587a = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x20) == 3) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    if (param_2 != 0) {
      /*System.Collections.Generic.List<SceneInfo>$$GetEnumerator*/ func_0x02459270(&uStack_48,param_2,uRam0000000003d3bce8);
      uVar3 = 1;
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<SceneInfo>$$MoveNext*/ func_0x01f72edc(&uStack_48,uRam0000000003d32ed8), (uVar2 & 1) != 0) {
        uVar1 = /*Core.Scenes.AddressablesSceneLoader$$RequestLoadSceneAdditive*/ func_0x016633a8(param_1,uStack_38);
        uVar3 = uVar3 & uVar1;
      }
      /*System.Collections.Generic.List.Enumerator<SceneInfo>$$Dispose*/ func_0x01f72ed8(&uStack_48,uRam0000000003d32ed0);
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x16633a8 | Core.Scenes.AddressablesSceneLoader.RequestLoadSceneAdditive
// ============================================================

long Core_Scenes_AddressablesSceneLoader__RequestLoadSceneAdditive
               (long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a7;
  undefined8 uStack_9f;
  undefined8 uStack_97;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb587e & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d3bca0);
    func_0x00f78a20(0x3d3cbc8);
    func_0x00f78a20(0x3d3bc98);
    func_0x00f78a20(0x3d3cbc0);
    func_0x00f78a20(0x3d1dd90);
    func_0x00f78a20(0x3d1e048);
    bRam0000000003eb587e = 1;
  }
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if (((uVar1 & 1) == 0) && (uVar1 = /*Core.Scenes.AddressablesSceneLoader$$HasSceneBeenRequested*/ func_0x016636f8(param_1,param_2), (uVar1 & 1) == 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<AddressablesSceneLoader.SceneData>_TypeInfo*/ uRam0000000003d1e048);
      /*System.Collections.Generic.List<AddressablesSceneLoader.SceneData>$$.ctor*/ func_0x024a117c(uVar3,10,uRam0000000003d3cbc0);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<Scene>_TypeInfo*/ uRam0000000003d1dd90);
      /*System.Collections.Generic.List<Scene>$$.ctor*/ func_0x02455144(uVar3,10,uRam0000000003d3bc98);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
    uStack_5c = uStack_5c & 0xff000000;
    uStack_60 = 0;
    if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 1;
    param_4 = 100;
    /*UnityEngine.AddressableAssets.Addressables$$LoadSceneAsync*/ func_0x02fb8f00(auStack_d0,param_2,1,1,100,0);
    uStack_51 = (undefined1)auStack_d0._8_8_;
    uStack_50 = SUB87(auStack_d0._8_8_,1);
    uStack_5c._3_1_ = (undefined1)auStack_d0._0_8_;
    uStack_58 = SUB87(auStack_d0._0_8_,1);
    uStack_41 = (undefined1)auStack_d0._24_8_;
    uStack_40 = SUB87(auStack_d0._24_8_,1);
    uStack_49 = (undefined1)auStack_d0._16_8_;
    uStack_48 = SUB87(auStack_d0._16_8_,1);
    if (*(long *)(param_1 + 0x10) == 0) goto code_r0x016635a8;
    uStack_a8 = 0;
    uStack_9f = CONCAT17(uStack_51,uStack_58);
    uStack_a7 = CONCAT44(uStack_5c,uStack_60);
    uStack_97 = CONCAT17(uStack_49,uStack_50);
    uStack_8f = uStack_48;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uVar3 = uRam0000000003d3cbc8;
    uStack_b0 = param_2;
    uStack_88 = uStack_41;
    uStack_87 = uStack_40;
    /*System.Collections.Generic.List<AddressablesSceneLoader.SceneData>$$Add*/ func_0x024a1e08(*(long *)(param_1 + 0x10),&uStack_b0);
    param_3 = (undefined1)uVar3;
    if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016635a8;
    uVar3 = uRam0000000003d3bca0;
    /*System.Collections.Generic.List<Scene>$$Add*/ func_0x02455d30(*(long *)(param_1 + 0x18),0);
    param_3 = (undefined1)uVar3;
    lVar2 = 1;
  }
  else {
    lVar2 = 0;
  }
  if (*(long *)PTR_03a5d648 == lStack_38) {
    return lVar2;
  }
  ___stack_chk_fail(lVar2);
code_r0x016635a8:
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb587b & 1) == 0) {
    func_0x00f78a20(0x3d26780);
    bRam0000000003eb587b = 1;
  }
  lVar2 = func_0x00f78aec(/*Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11_TypeInfo*/ uRam0000000003d26780);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(int *)(lVar2 + 0x34) = auVar4._8_4_;
  *(undefined1 *)(lVar2 + 0x30) = param_3;
  *(long *)(lVar2 + 0x20) = auVar4._0_8_;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  return lVar2;
}



// ============================================================
// RVA: 0x16635ac | Core.Scenes.AddressablesSceneLoader.WaitForScenesToLoad
// ============================================================

long Core_Scenes_AddressablesSceneLoader__WaitForScenesToLoad
               (undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((bRam0000000003eb587b & 1) == 0) {
    func_0x00f78a20(0x3d26780);
    bRam0000000003eb587b = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Scenes.AddressablesSceneLoader.<WaitForScenesToLoad>d__11_TypeInfo*/ uRam0000000003d26780);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x34) = param_2;
  *(undefined1 *)(lVar1 + 0x30) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  return lVar1;
}



// ============================================================
// RVA: 0x1663660 | Core.Scenes.AddressablesSceneLoader.UnloadScenesAndWait
// ============================================================

long Core_Scenes_AddressablesSceneLoader__UnloadScenesAndWait(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb587c & 1) == 0) {
    func_0x00f78a20(0x3d26778);
    bRam0000000003eb587c = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Scenes.AddressablesSceneLoader.<UnloadScenesAndWait>d__12_TypeInfo*/ uRam0000000003d26778);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x16636f8 | Core.Scenes.AddressablesSceneLoader.HasSceneBeenRequested
// ============================================================

ulong Core_Scenes_AddressablesSceneLoader__HasSceneBeenRequested(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb587d & 1) == 0) {
    func_0x00f78a20(0x3d33240);
    func_0x00f78a20(0x3d33248);
    func_0x00f78a20(0x3d33250);
    func_0x00f78a20(0x3d3cbd8);
    bRam0000000003eb587d = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    /*System.Collections.Generic.List<AddressablesSceneLoader.SceneData>$$GetEnumerator*/ func_0x024a2a2c(&uStack_90,*(long *)(param_1 + 0x10),uRam0000000003d3cbd8);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<AddressablesSceneLoader.SceneData>$$MoveNext*/ func_0x01f78268(&uStack_90,uRam0000000003d33248);
      if ((uVar2 & 1) == 0) {
        iVar4 = 0x4a;
        goto LAB_016637d0;
      }
      if (lStack_80 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1663800);
        (*pcVar1)();
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_80,param_2,5,0);
    } while ((uVar3 & 1) == 0);
    iVar4 = 0x4c;
LAB_016637d0:
    /*System.Collections.Generic.List.Enumerator<AddressablesSceneLoader.SceneData>$$Dispose*/ func_0x01f78264(&uStack_90,uRam0000000003d33240);
    if (iVar4 != 0x4c) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1663858 | Core.Scenes.AddressablesSceneLoader.PercentageLoaded
// ============================================================

undefined4 Core_Scenes_AddressablesSceneLoader__PercentageLoaded(long param_1)

{
  float fVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 extraout_b0;
  undefined1 uVar6;
  undefined1 extraout_var;
  undefined1 uVar7;
  undefined1 extraout_var_00;
  undefined1 uVar8;
  undefined1 extraout_var_01;
  undefined1 uVar9;
  float unaff_s8;
  float unaff_s10;
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
  
  if ((bRam0000000003eb587f & 1) == 0) {
    func_0x00f78a20(0x3d2bff0);
    func_0x00f78a20(0x3d2c018);
    func_0x00f78a20(0x3d3cbe0);
    func_0x00f78a20(0x3d3cbe8);
    bRam0000000003eb587f = 1;
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
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    uVar3 = 0;
    unaff_s8 = 0.0;
    lVar4 = 0x20;
    unaff_s10 = 0.0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) goto LAB_01663974;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      _memmove(&uStack_c0,*(long *)(lVar5 + 0x10) + lVar4,0x50);
      iVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$IsValid*/ func_0x01b58a18(&uStack_b0,uRam0000000003d2bff0);
      if (iVar2 != 0) {
        unaff_s8 = unaff_s8 + 1.0;
        /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_PercentComplete*/ func_0x01b58b58(&uStack_b0,uRam0000000003d2c018);
        unaff_s10 = unaff_s10 +
                    (float)CONCAT13(extraout_var_01,
                                    CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
      }
      uVar3 = uVar3 + 1;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar4 = lVar4 + 0x50;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
LAB_01663974:
  fVar1 = unaff_s10 / unaff_s8;
  uVar6 = SUB41(fVar1,0);
  uVar7 = (undefined1)((uint)fVar1 >> 8);
  uVar8 = (undefined1)((uint)fVar1 >> 0x10);
  uVar9 = (undefined1)((uint)fVar1 >> 0x18);
  if (unaff_s8 <= 0.0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0x80;
    uVar9 = 0x3f;
  }
  return CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
}



// ============================================================
// RVA: 0x16639a8 | Core.Scenes.AddressablesSceneLoader..ctor
// ============================================================

void Core_Scenes_AddressablesSceneLoader___ctor(void)

{
  return;
}



