// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.SceneLoader

// ============================================================
// RVA: 0x16639d0 | Core.Scenes.SceneLoader.RequestLoadSceneAdditive
// ============================================================

/* WARNING: Possible PIC construction at 0x01663a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01663b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01663a84) */
/* WARNING: Removing unreachable block (ram,0x01663b70) */
/* WARNING: Removing unreachable block (ram,0x01663b7c) */
/* WARNING: Removing unreachable block (ram,0x01663b90) */
/* WARNING: Removing unreachable block (ram,0x01663b98) */
/* WARNING: Removing unreachable block (ram,0x01663b9c) */
/* WARNING: Removing unreachable block (ram,0x01663bb4) */
/* WARNING: Removing unreachable block (ram,0x01663be4) */
/* WARNING: Removing unreachable block (ram,0x01663c2c) */
/* WARNING: Removing unreachable block (ram,0x01663c04) */

ulong Core_Scenes_SceneLoader__RequestLoadSceneAdditive(long *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int extraout_w1;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5880 & 1) == 0) {
    func_0x00f78a20(0x3d32ed0);
    func_0x00f78a20(0x3d32ed8);
    func_0x00f78a20(0x3d32ee0);
    func_0x00f78a20(0x3d3bce8);
    bRam0000000003eb5880 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  plVar7 = param_1;
  if (param_2 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      puVar3 = (undefined8 *)___cxa_begin_catch();
      plVar7 = (long *)*puVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SceneInfo>$$Dispose*/ func_0x01f72ed8(&uStack_48,uRam0000000003eb5000);
      if (plVar7 == (long *)0x0) {
        return 0;
      }
      func_0x00f78ac0(plVar7,0);
    }
    puVar9 = &Core_Scenes_SceneLoader__RequestLoadSceneAdditive;
    auVar10 = __Unwind_Resume();
    uVar5 = auVar10._8_8_;
    param_1 = auVar10._0_8_;
    uStack_70 = 0;
  }
  else {
    unaff_x22 = 0x3d32ed8;
    uVar8 = 0x3d32ed0;
    /*System.Collections.Generic.List<SceneInfo>$$GetEnumerator*/ func_0x02459270(&uStack_48,param_2,uRam0000000003d3bce8);
    uStack_70 = 1;
    uVar2 = /*System.Collections.Generic.List.Enumerator<SceneInfo>$$MoveNext*/ func_0x01f72edc(&uStack_48,uRam0000000003d32ed8);
    if ((uVar2 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<SceneInfo>$$Dispose*/ func_0x01f72ed8(&uStack_48,uRam0000000003d32ed0);
      return 1;
    }
    puVar9 = (undefined *)0x1663a84;
    uVar5 = uStack_38;
  }
  uStack_80 = unaff_x22;
  uStack_78 = uVar8;
  plStack_68 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar9;
  if ((bRam0000000003eb5881 & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bfb0);
    func_0x00f78a20(0x3d3bf98);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24720);
    bRam0000000003eb5881 = 1;
  }
  uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar5,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uStack_a8 = 0x3eb5000;
  puStack_88 = &UNK_01663b70;
  uStack_b0 = unaff_x22;
  plStack_a0 = param_1;
  uStack_98 = uVar5;
  ppuStack_90 = &puStack_60;
  if ((bRam0000000003eb5888 & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    bRam0000000003eb5888 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*param_1,uRam0000000003d3bfd0);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d32f88);
      if ((uVar2 & 1) == 0) {
        iVar6 = 0x45;
        goto code_r0x01663d00;
      }
      if (lStack_b8 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1663d30);
        (*pcVar1)();
      }
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lStack_b8,uVar5,5,0);
    } while ((uVar4 & 1) == 0);
    iVar6 = 0x47;
code_r0x01663d00:
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d32f80);
    if (iVar6 != 0x47) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1663aec | Core.Scenes.SceneLoader.RequestLoadSceneAdditive
// ============================================================

/* WARNING: Possible PIC construction at 0x01663b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01663b70) */
/* WARNING: Removing unreachable block (ram,0x01663b7c) */
/* WARNING: Removing unreachable block (ram,0x01663b90) */
/* WARNING: Removing unreachable block (ram,0x01663b98) */
/* WARNING: Removing unreachable block (ram,0x01663b9c) */
/* WARNING: Removing unreachable block (ram,0x01663bb4) */
/* WARNING: Removing unreachable block (ram,0x01663be4) */
/* WARNING: Removing unreachable block (ram,0x01663c2c) */
/* WARNING: Removing unreachable block (ram,0x01663c04) */

ulong Core_Scenes_SceneLoader__RequestLoadSceneAdditive(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb5881 & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bfb0);
    func_0x00f78a20(0x3d3bf98);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24720);
    bRam0000000003eb5881 = 1;
  }
  uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if ((bRam0000000003eb5888 & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    bRam0000000003eb5888 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*param_1,uRam0000000003d3bfd0);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d32f88);
      if ((uVar2 & 1) == 0) {
        iVar4 = 0x45;
        goto code_r0x01663d00;
      }
      if (lStack_68 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1663d30);
        (*pcVar1)();
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_68,param_2,5,0);
    } while ((uVar3 & 1) == 0);
    iVar4 = 0x47;
code_r0x01663d00:
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d32f80);
    if (iVar4 != 0x47) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1663c30 | Core.Scenes.SceneLoader.HasSceneBeenRequested
// ============================================================

ulong Core_Scenes_SceneLoader__HasSceneBeenRequested(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb5888 & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    bRam0000000003eb5888 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*param_1,uRam0000000003d3bfd0);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32f88);
      if ((uVar2 & 1) == 0) {
        iVar4 = 0x45;
        goto LAB_01663d00;
      }
      if (lStack_38 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1663d30);
        (*pcVar1)();
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_38,param_2,5,0);
    } while ((uVar3 & 1) == 0);
    iVar4 = 0x47;
LAB_01663d00:
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32f80);
    if (iVar4 != 0x47) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1663d88 | Core.Scenes.SceneLoader.UnloadScenes
// ============================================================

long Core_Scenes_SceneLoader__UnloadScenes(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 extraout_w1;
  int extraout_w1_00;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5882 & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3bfd0);
    func_0x00f78a20(0x3d24720);
    bRam0000000003eb5882 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar2 = 0;
  if (*param_1 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*param_1,uRam0000000003d3bfd0);
    while (uVar1 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d32f88), uVar5 = uStack_48,
          (uVar1 & 1) != 0) {
      if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.SceneManagement.SceneManager$$UnloadSceneAsync*/ func_0x0325e278(uVar5,0);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32f80);
    while (*param_1 == 0) {
      func_0x00f78af4();
      if (extraout_w1_00 != 1) goto code_r0x01663ef0;
      plVar3 = (long *)___cxa_begin_catch();
      lVar2 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32f80);
      if (lVar2 != 0) {
        func_0x00f78ac0(lVar2,0);
code_r0x01663ef0:
        puVar4 = (undefined8 *)__Unwind_Resume();
        if ((bRam0000000003eb5883 & 1) == 0) {
          func_0x00f78a20(0x3d28b30);
          bRam0000000003eb5883 = 1;
        }
        lVar2 = func_0x00f78aec(/*Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6_TypeInfo*/ uRam0000000003d28b30);
        /*System.Object$$.ctor*/ func_0x0294d018(lVar2,0);
        *(undefined4 *)(lVar2 + 0x10) = 0;
        uVar5 = *puVar4;
        *(undefined8 *)(lVar2 + 0x28) = puVar4[1];
        *(undefined8 *)(lVar2 + 0x20) = uVar5;
        *(undefined1 *)(lVar2 + 0x30) = extraout_w1;
        return lVar2;
      }
    }
    lVar2 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*param_1,uRam0000000003d3bfb8);
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1663ef4 | Core.Scenes.SceneLoader.UnloadScenesAndWait
// ============================================================

long Core_Scenes_SceneLoader__UnloadScenesAndWait(undefined8 *param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5883 & 1) == 0) {
    func_0x00f78a20(0x3d28b30);
    bRam0000000003eb5883 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Scenes.SceneLoader.<UnloadScenesAndWait>d__6_TypeInfo*/ uRam0000000003d28b30);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar2 = *param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_1[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined1 *)(lVar1 + 0x30) = param_2;
  return lVar1;
}



// ============================================================
// RVA: 0x1663f98 | Core.Scenes.SceneLoader.WaitForScenesToLoad
// ============================================================

long Core_Scenes_SceneLoader__WaitForScenesToLoad(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5884 & 1) == 0) {
    func_0x00f78a20(0x3d28b38);
    bRam0000000003eb5884 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__7_TypeInfo*/ uRam0000000003d28b38);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar2 = *param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_1[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return lVar1;
}



// ============================================================
// RVA: 0x1664034 | Core.Scenes.SceneLoader.WaitForScenesToLoad
// ============================================================

long Core_Scenes_SceneLoader__WaitForScenesToLoad
               (undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5885 & 1) == 0) {
    func_0x00f78a20(0x3d28b40);
    bRam0000000003eb5885 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Scenes.SceneLoader.<WaitForScenesToLoad>d__8_TypeInfo*/ uRam0000000003d28b40);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar2 = *param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_1[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined4 *)(lVar1 + 0x34) = param_2;
  *(undefined1 *)(lVar1 + 0x30) = param_3;
  return lVar1;
}



// ============================================================
// RVA: 0x16640e8 | Core.Scenes.SceneLoader.WaitForScenesToUnload
// ============================================================

long Core_Scenes_SceneLoader__WaitForScenesToUnload(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5886 & 1) == 0) {
    func_0x00f78a20(0x3d28b48);
    bRam0000000003eb5886 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Scenes.SceneLoader.<WaitForScenesToUnload>d__9_TypeInfo*/ uRam0000000003d28b48);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar2 = *param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_1[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return lVar1;
}



// ============================================================
// RVA: 0x1664184 | Core.Scenes.SceneLoader.HaveAllRequestedScenesLoaded
// ============================================================

uint Core_Scenes_SceneLoader__HaveAllRequestedScenesLoaded(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5887 & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    bRam0000000003eb5887 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_50[0] = 0;
  if (*param_1 == 0) {
    uVar3 = 1;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*param_1,uRam0000000003d3bfd0);
    uVar3 = 1;
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32f88), (uVar2 & 1) != 0) {
      /*Core.Scenes.SceneLoader$$TryGetScene*/ func_0x016642d4(uStack_38,auStack_50);
      uVar2 = /*UnityEngine.SceneManagement.Scene$$IsValid*/ func_0x0325cff8(auStack_50,0);
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = /*UnityEngine.SceneManagement.Scene$$get_isLoaded*/ func_0x0325d078(auStack_50,0);
      }
      uVar3 = uVar3 & uVar1;
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32f80);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x16642d4 | Core.Scenes.SceneLoader.TryGetScene
// ============================================================

void Core_Scenes_SceneLoader__TryGetScene(undefined8 param_1,undefined4 *param_2)

{
  undefined4 auStack_38 [2];
  
  if ((bRam0000000003eb5889 & 1) == 0) {
    func_0x00f78a20(0x3d24720);
    bRam0000000003eb5889 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auStack_38[0] = /*UnityEngine.SceneManagement.SceneManager$$GetSceneByName*/ func_0x0325d5c0(param_1,0);
  *param_2 = auStack_38[0];
  /*UnityEngine.SceneManagement.Scene$$IsValid*/ func_0x0325cff8(auStack_38,0);
  return;
}



// ============================================================
// RVA: 0x1664364 | Core.Scenes.SceneLoader.GetAllRequestedScenes
// ============================================================

undefined8 Core_Scenes_SceneLoader__GetAllRequestedScenes(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x166436c | Core.Scenes.SceneLoader.GetLastRequestedScene
// ============================================================

undefined8 Core_Scenes_SceneLoader__GetLastRequestedScene(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb588a & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb588a = 1;
  }
  lVar2 = *param_1;
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x18) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)
             (*(long *)(lVar2 + 0x10) + (ulong)(*(int *)(lVar2 + 0x18) - 1) * 8 + 0x20);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x16643dc | Core.Scenes.SceneLoader.GetRequestedScene
// ============================================================

undefined8 Core_Scenes_SceneLoader__GetRequestedScene(long *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb588b & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb588b = 1;
  }
  uVar1 = 0;
  if ((-1 < (int)param_2) && (lVar2 = *param_1, lVar2 != 0)) {
    if ((int)param_2 < (int)*(uint *)(lVar2 + 0x18)) {
      if (*(uint *)(lVar2 + 0x18) <= param_2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + (ulong)param_2 * 8 + 0x20);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



