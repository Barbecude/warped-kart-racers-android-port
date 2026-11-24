// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Settings.AtlasQualitySettings

// ============================================================
// RVA: 0x145e7c0 | Atlas.Settings.AtlasQualitySettings.get_NativeResolutionWidth
// ============================================================

undefined4 Atlas_Settings_AtlasQualitySettings__get_NativeResolutionWidth(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ============================================================
// RVA: 0x145e7c8 | Atlas.Settings.AtlasQualitySettings.get_NativeResolutionHeight
// ============================================================

undefined4 Atlas_Settings_AtlasQualitySettings__get_NativeResolutionHeight(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x145e7d0 | Atlas.Settings.AtlasQualitySettings.get_CurrentResolutionWidth
// ============================================================

undefined4 Atlas_Settings_AtlasQualitySettings__get_CurrentResolutionWidth(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ============================================================
// RVA: 0x145e7d8 | Atlas.Settings.AtlasQualitySettings.get_CurrentResolutionHeight
// ============================================================

undefined4 Atlas_Settings_AtlasQualitySettings__get_CurrentResolutionHeight(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x145e7e0 | Atlas.Settings.AtlasQualitySettings.get_DropShadowsEnabled
// ============================================================

undefined1 Atlas_Settings_AtlasQualitySettings__get_DropShadowsEnabled(long param_1)

{
  return *(undefined1 *)(param_1 + 0x84);
}



// ============================================================
// RVA: 0x145e7e8 | Atlas.Settings.AtlasQualitySettings.Init
// ============================================================

long Atlas_Settings_AtlasQualitySettings__Init(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb47fe & 1) == 0) {
    func_0x00f78a20(0x3d26a30);
    bRam0000000003eb47fe = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Settings.AtlasQualitySettings.<Init>d__132_TypeInfo*/ uRam0000000003d26a30);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = param_2;
  return lVar1;
}



// ============================================================
// RVA: 0x145e888 | Atlas.Settings.AtlasQualitySettings.DeInit
// ============================================================

void Atlas_Settings_AtlasQualitySettings__DeInit(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long alStack_60 [2];
  undefined1 *puVar2;
  
  if ((bRam0000000003eb47ff & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d52448);
    func_0x00f78a20(0x3d52450);
    func_0x00f78a20(0x3d52458);
    func_0x00f78a20(0x3d52460);
    func_0x00f78a20(0x3d52468);
    func_0x00f78a20(0x3d52470);
    func_0x00f78a20(0x3d52478);
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb47ff = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x20);
  uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d52458,uRam0000000003d2a320);
  if (lVar6 != 0) {
    /*Core.Settings.QualitySettings$$UnRegisterOnSettingChanged*/ func_0x0168df70(lVar6,uVar7,uVar3,0);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x48);
    uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d52478,uRam0000000003d2a320);
    if (lVar6 != 0) {
      /*Core.Settings.QualitySettings$$UnRegisterOnSettingChanged*/ func_0x0168df70(lVar6,uVar7,uVar3,0);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60);
      uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d52468,uRam0000000003d2a320);
      if (lVar6 != 0) {
        /*Core.Settings.QualitySettings$$UnRegisterOnSettingChanged*/ func_0x0168df70(lVar6,uVar7,uVar3,0);
        lVar6 = *(long *)(param_1 + 0x10);
        uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138);
        uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d52460,uRam0000000003d2a320);
        if (lVar6 != 0) {
          /*Core.Settings.QualitySettings$$UnRegisterOnSettingChanged*/ func_0x0168df70(lVar6,uVar7,uVar3,0);
          lVar6 = *(long *)(param_1 + 0x10);
          uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x160);
          uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d52470,uRam0000000003d2a320);
          if (lVar6 != 0) {
            /*Core.Settings.QualitySettings$$UnRegisterOnSettingChanged*/ func_0x0168df70(lVar6,uVar7,uVar3,0);
            lVar6 = *(long *)(param_1 + 0x10);
            uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400);
            uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d52448,uRam0000000003d2a320);
            if (lVar6 != 0) {
              /*Core.Settings.QualitySettings$$UnRegisterOnSettingChanged*/ func_0x0168df70(lVar6,uVar7,uVar3,0);
              lVar6 = *(long *)(param_1 + 0x10);
              uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1e8);
              uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
              /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d52450,uRam0000000003d2a320);
              if (lVar6 != 0) {
                /*Core.Settings.QualitySettings$$UnRegisterOnSettingChanged*/ func_0x0168df70(lVar6,uVar7,uVar3,0);
                if (*(long *)(param_1 + 0x10) != 0) {
                  /*Core.Settings.QualitySettings$$DeInit*/ func_0x0168ca68(*(long *)(param_1 + 0x10),0);
                  *(undefined8 *)(param_1 + 0x10) = 0;
                }
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(undefined8 *)(param_1 + 0x30) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  puVar9 = &Atlas_Settings_AtlasQualitySettings__SetBaseLayerSettings;
  lVar6 = func_0x00f78af4();
  *(undefined1 *)(lVar6 + 0x6c) = 1;
  puVar1 = &stack0xffffffffffffffb0;
  puVar8 = &stack0xfffffffffffffff0;
  do {
    puVar2 = puVar1 + -0x10;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    lVar4 = *(long *)(lVar6 + 0xb0);
    if (*(char *)(lVar6 + 0x6c) == '\0') {
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
        puVar5 = (undefined4 *)(lVar6 + 100);
        goto code_r0x0145ebec;
      }
    }
    else if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      puVar5 = (undefined4 *)(lVar6 + 0x68);
code_r0x0145ebec:
      *(undefined4 *)(lVar4 + 0x2c) = *puVar5;
      return;
    }
    puVar9 = &Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    lVar6 = func_0x00f78af4();
    *(undefined1 *)(lVar6 + 0x6c) = 0;
    puVar1 = puVar1 + -0x10;
    puVar8 = puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x145eba8 | Atlas.Settings.AtlasQualitySettings.SetBaseLayerSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__SetBaseLayerSettings(long param_1)

{
  undefined1 *puVar1;
  long lVar3;
  undefined4 *puVar4;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 *puVar2;
  
  *(undefined1 *)(param_1 + 0x6c) = 1;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    puVar2 = puVar1 + -0x10;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    lVar3 = *(long *)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        puVar4 = (undefined4 *)(param_1 + 100);
        goto code_r0x0145ebec;
      }
    }
    else if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
      puVar4 = (undefined4 *)(param_1 + 0x68);
code_r0x0145ebec:
      *(undefined4 *)(lVar3 + 0x2c) = *puVar4;
      return;
    }
    unaff_x30 = &Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    param_1 = func_0x00f78af4();
    *(undefined1 *)(param_1 + 0x6c) = 0;
    puVar1 = puVar1 + -0x10;
    unaff_x29 = puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x145ebb4 | Atlas.Settings.AtlasQualitySettings.SetMipClampSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__SetMipClampSettings(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    lVar2 = *(long *)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        puVar3 = (undefined4 *)(param_1 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
      puVar3 = (undefined4 *)(param_1 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar2 + 0x2c) = *puVar3;
      return;
    }
    unaff_x30 = &Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    param_1 = func_0x00f78af4();
    *(undefined1 *)(param_1 + 0x6c) = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  } while( true );
}



// ============================================================
// RVA: 0x145ec00 | Atlas.Settings.AtlasQualitySettings.SetFrontEndSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined1 *)(param_1 + 0x6c) = 0;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar2 = *(long *)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        puVar3 = (undefined4 *)(param_1 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
      puVar3 = (undefined4 *)(param_1 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar2 + 0x2c) = *puVar3;
      return;
    }
    unaff_x30 = Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  } while( true );
}



// ============================================================
// RVA: 0x145ec08 | Atlas.Settings.AtlasQualitySettings.BeginBoostLoadingBeforeSettingsLoaded
// ============================================================

void Atlas_Settings_AtlasQualitySettings__BeginBoostLoadingBeforeSettingsLoaded(void)

{
  if ((bRam0000000003eb4800 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4800 = 1;
  }
  /*UnityEngine.QualitySettings$$set_asyncUploadTimeSlice*/ func_0x032514fc(10,0);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pcRam0000000003ebe960 == (code *)0x0) {
    pcRam0000000003ebe960 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0321894c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebe960)(4);
  return;
}



// ============================================================
// RVA: 0x145ec74 | Atlas.Settings.AtlasQualitySettings.SetBackgroundLoadingPriority
// ============================================================

void Atlas_Settings_AtlasQualitySettings__SetBackgroundLoadingPriority(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(&UNK_033f81e0 + (long)(int)param_1 * 4);
    if (pcRam0000000003ebe960 == (code *)0x0) {
      pcRam0000000003ebe960 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x0321894c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe960)(uVar1);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x145ec94 | Atlas.Settings.AtlasQualitySettings.BeginBoostLoading
// ============================================================

void Atlas_Settings_AtlasQualitySettings__BeginBoostLoading(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((bRam0000000003eb4801 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4801 = 1;
  }
  /*UnityEngine.QualitySettings$$set_asyncUploadTimeSlice*/ func_0x032514fc(*(undefined4 *)(param_1 + 0x58),0);
  uVar2 = *(uint *)(param_1 + 0x60);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (uVar2 < 4) {
    uVar1 = *(undefined4 *)(&UNK_033f81e0 + (long)(int)uVar2 * 4);
    if (pcRam0000000003ebe960 == (code *)0x0) {
      pcRam0000000003ebe960 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x0321894c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe960)(uVar1);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x145ed30 | Atlas.Settings.AtlasQualitySettings.EndBoostLoading
// ============================================================

void Atlas_Settings_AtlasQualitySettings__EndBoostLoading(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((bRam0000000003eb4802 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4802 = 1;
  }
  /*UnityEngine.QualitySettings$$set_asyncUploadTimeSlice*/ func_0x032514fc(*(undefined4 *)(param_1 + 0x54),0);
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (uVar2 < 4) {
    uVar1 = *(undefined4 *)(&UNK_033f81e0 + (long)(int)uVar2 * 4);
    if (pcRam0000000003ebe960 == (code *)0x0) {
      pcRam0000000003ebe960 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x0321894c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe960)(uVar1);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x145edcc | Atlas.Settings.AtlasQualitySettings.BeginSuspendDeviceSleep
// ============================================================

void Atlas_Settings_AtlasQualitySettings__BeginSuspendDeviceSleep(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    /*UnityEngine.Screen$$set_sleepTimeout*/ func_0x0325ea98(0xffffffff,0);
    iVar1 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  return;
}



// ============================================================
// RVA: 0x145ee08 | Atlas.Settings.AtlasQualitySettings.SetSuspendDeviceSleep
// ============================================================

void Atlas_Settings_AtlasQualitySettings__SetSuspendDeviceSleep(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (param_2 != 0) {
    uVar1 = 0xffffffff;
  }
  if (pcRam0000000003ec0c98 == (code *)0x0) {
    pcRam0000000003ec0c98 =
         (code *)func_0x00f789d4("UnityEngine.Screen::set_sleepTimeout(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0325ead4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0c98)(uVar1);
  return;
}



// ============================================================
// RVA: 0x145ee1c | Atlas.Settings.AtlasQualitySettings.EndSuspendDeviceSleep
// ============================================================

void Atlas_Settings_AtlasQualitySettings__EndSuspendDeviceSleep(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x70) + -1;
  *(int *)(param_1 + 0x70) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (pcRam0000000003ec0c98 == (code *)0x0) {
    pcRam0000000003ec0c98 =
         (code *)func_0x00f789d4("UnityEngine.Screen::set_sleepTimeout(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0325ead4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0c98)(0xfffffffe);
  return;
}



// ============================================================
// RVA: 0x145ee3c | Atlas.Settings.AtlasQualitySettings.RegisterOnSettingChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

long Atlas_Settings_AtlasQualitySettings__RegisterOnSettingChanged
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  long alStack_a8 [3];
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return 0;
  }
  puVar7 = (undefined4 *)0x0;
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(lVar2 + 0x10) == 0) {
code_r0x0168decc:
    puVar9 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar10 = func_0x00f78af4();
    uVar5 = auVar10._8_8_;
    lVar3 = auVar10._0_8_;
  }
  else {
    puVar7 = puRam0000000003d2ff68;
    lVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar2 + 0x10),param_2,&lStack_38);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    if (lStack_38 == 0) goto code_r0x0168decc;
    puVar9 = &UNK_0168deb8;
    lVar3 = lStack_38;
    uVar5 = param_3;
  }
  uStack_70 = 0x3eb5000;
  lStack_68 = lVar2;
  uStack_60 = param_2;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar9;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar8 = (long *)(lVar3 + 0x30);
  lVar2 = *plVar8;
  while( true ) {
    uVar6 = 0;
    plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar2,uVar5);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    lVar3 = func_0x00ff0f44(plVar8,plVar4,lVar2);
    bVar1 = lVar2 == lVar3;
    lVar2 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar10 = func_0x00f78e5c(plVar4);
  alStack_a8[1] = 0x3d1b598;
  puStack_78 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  alStack_a8[2] = lVar2;
  plStack_90 = plVar8;
  uStack_88 = uVar5;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_a8[0] = 0;
  lVar2 = *(long *)(auVar10._0_8_ + 0x10);
  if (lVar2 != 0) {
    puVar7 = puRam0000000003d2ff68;
    lVar2 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar2,auVar10._8_8_,alStack_a8);
    auVar10._8_8_ = uVar6;
    auVar10._0_8_ = alStack_a8[0];
    if ((int)lVar2 == 0) {
      return lVar2;
    }
    if (alStack_a8[0] != 0) goto code_r0x0168e000;
  }
  auVar10 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar8 = (long *)(auVar10._0_8_ + 0x30);
  lVar2 = *plVar8;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar2,auVar10._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))) {
    lVar3 = func_0x00ff0f44(plVar8,plVar4,lVar2);
    bVar1 = lVar2 == lVar3;
    lVar2 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  func_0x00f78e5c(plVar4);
  lVar2 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)lVar2 != 0) {
    *puVar7 = 0;
    lVar2 = 1;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x145ee50 | Atlas.Settings.AtlasQualitySettings.UnRegisterOnSettingChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

long Atlas_Settings_AtlasQualitySettings__UnRegisterOnSettingChanged
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return 0;
  }
  puVar5 = (undefined4 *)0x0;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  lStack_38 = 0;
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    puVar5 = puRam0000000003d2ff68;
    lVar2 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar2,param_2,&lStack_38);
    if ((int)lVar2 == 0) {
      return lVar2;
    }
    lVar2 = lStack_38;
    if (lStack_38 != 0) goto code_r0x0168e000;
  }
  auVar7 = func_0x00f78af4();
  param_3 = auVar7._8_8_;
  lVar2 = auVar7._0_8_;
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  lVar6 = *(long *)(lVar2 + 0x30);
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,param_3,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))) {
    lVar4 = func_0x00ff0f44((long *)(lVar2 + 0x30),plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return lVar4;
    }
  }
  func_0x00f78e5c(plVar3);
  lVar2 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)lVar2 != 0) {
    *puVar5 = 0;
    lVar2 = 1;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x145ee64 | Atlas.Settings.AtlasQualitySettings.ApplyLoadingSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__ApplyLoadingSettings(long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4803 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4803 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x20),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x28),
                    (undefined4 *)(param_1 + 0x54),0);
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x20),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x30),param_1 + 0x58,
                      0);
      if (*(long *)(param_1 + 0x10) != 0) {
        /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x20),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x38),
                        param_1 + 0x5c,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x20),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x40),
                          param_1 + 0x60,0);
        }
      }
    }
  }
  /*UnityEngine.QualitySettings$$set_asyncUploadTimeSlice*/ func_0x032514fc(*(undefined4 *)(param_1 + 0x54),0);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  if (pcRam0000000003ebe960 == (code *)0x0) {
    pcRam0000000003ebe960 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0321894c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebe960)(uVar1);
  return;
}



// ============================================================
// RVA: 0x145ef78 | Atlas.Settings.AtlasQualitySettings.TryGetIntParameter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e24c) */

undefined8
Atlas_Settings_AtlasQualitySettings__TryGetIntParameter
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
    if ((int)uVar1 != 0) {
      *param_4 = 0;
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x145ef8c | Atlas.Settings.AtlasQualitySettings.ApplyUpdateSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__ApplyUpdateSettings(long param_1)

{
  int iVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000003eb4804 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4804 = 1;
  }
  uStack_38 = 0x1e;
  uStack_34 = 0;
  if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x48),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x58),
                            &uStack_34,0);
    if (iVar1 != 0) {
      /*UnityEngine.QualitySettings$$set_vSyncCount*/ func_0x03251414(uStack_34,0);
    }
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x48),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x50),
                            &uStack_38,0);
    if (iVar1 != 0) {
      /*UnityEngine.Application$$set_targetFrameRate*/ func_0x03218840(uStack_38,0);
    }
  }
  return;
}



// ============================================================
// RVA: 0x145f07c | Atlas.Settings.AtlasQualitySettings.ApplyRenderingSettings
// ============================================================

/* WARNING: Possible PIC construction at 0x0145f1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145f4d0) */
/* WARNING: Removing unreachable block (ram,0x0145f3ac) */
/* WARNING: Removing unreachable block (ram,0x0145f3b4) */
/* WARNING: Removing unreachable block (ram,0x0145f3d8) */
/* WARNING: Removing unreachable block (ram,0x0145f680) */
/* WARNING: Removing unreachable block (ram,0x0145f688) */
/* WARNING: Removing unreachable block (ram,0x0168e2c0) */
/* WARNING: Removing unreachable block (ram,0x0168e2c4) */
/* WARNING: Removing unreachable block (ram,0x0168e2c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Atlas_Settings_AtlasQualitySettings__ApplyRenderingSettings(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  int iStack_90;
  undefined1 uStack_89;
  undefined8 uStack_88;
  int iStack_80;
  byte bStack_79;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  char cStack_69;
  float fStack_68;
  char cStack_61;
  
  if ((bRam0000000003eb4805 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d257b0);
    func_0x00f78a20(0x3d79940);
    func_0x00f78a20(0x3d79948);
    bRam0000000003eb4805 = 1;
  }
  cStack_61 = '\0';
  fStack_68 = 0.0;
  cStack_69 = '\0';
  iStack_70 = 0;
  uStack_78 = 0;
  iStack_74 = 0;
  bStack_79 = 0;
  iStack_80 = 0;
  uStack_88 = 0;
  uStack_89 = 0;
  iStack_90 = 0;
  plVar5 = (long *)/*UnityEngine.Rendering.GraphicsSettings$$get_renderPipelineAsset*/ func_0x03230868(0);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(/*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0 + 300) * 8 + -8)
        == /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0)) goto LAB_0145f15c;
    func_0x00f78e5c(plVar5);
    goto code_r0x0145f6cc;
  }
LAB_0145f15c:
  cStack_61 = '\0';
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar10 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60);
    goto code_r0x0168e28c;
  }
  /*UnityEngine.Screen$$get_currentResolution*/ func_0x0325ead8(0);
  fStack_68 = 1.0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x80),&fStack_68,0);
  }
  uVar11 = *(uint *)(param_1 + 0x74);
  uVar9 = (ulong)uVar11;
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar8 = (ulong)uVar1;
  if (cStack_61 == '\0') {
LAB_0145f34c:
    /*UnityEngine.Screen$$SetResolution*/ func_0x0325ed10(uVar9,uVar8,1);
    *(int *)(param_1 + 0x7c) = (int)uVar9;
    *(int *)(param_1 + 0x80) = (int)uVar8;
    cStack_69 = '\0';
    iStack_74 = 0x100;
    iStack_70 = 0x100;
    if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar10 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60);
      goto code_r0x0168e28c;
    }
    fVar13 = 1.0;
    if (cStack_69 != '\0') {
      fVar14 = (float)iStack_70 / (float)*(int *)(param_1 + 0x7c);
      fVar12 = (float)iStack_74 / (float)*(int *)(param_1 + 0x80);
      bVar2 = true;
      if ((1.0 <= fVar14) && (bVar2 = false, !NAN(fVar12))) {
        bVar2 = fVar12 < 1.0;
      }
      fVar13 = 1.0;
      if ((bVar2) && (fVar13 = fVar14, fVar12 <= fVar14)) {
        fVar13 = fVar12;
      }
    }
    fVar12 = 1.0;
    if (_UNK_033f7d80 <= ABS(1.0 - fVar13)) {
      fVar12 = fVar13;
    }
    uStack_78 = 1;
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xa8),&uStack_78,0);
      lVar6 = *(long *)(param_1 + 0x10);
      bStack_79 = 0;
      if (lVar6 != 0) {
        uVar10 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60);
        goto code_r0x0168e28c;
      }
    }
    bStack_79 = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar5,0,0);
    if (iVar3 != 0) {
      if (plVar5 == (long *)0x0) goto code_r0x0145f6cc;
      /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset$$set_renderScale*/ func_0x03164e60(fVar12,plVar5,0);
      *(undefined4 *)(plVar5 + 0xc) = uStack_78;
      *(byte *)((long)plVar5 + 0x5c) = bStack_79;
      *(uint *)(plVar5 + 0x17) = (uint)bStack_79;
    }
    iStack_80 = 3;
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar3 = 0;
    }
    else {
      /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xa0),&iStack_80,0);
      iVar3 = 3 - iStack_80;
    }
    iVar4 = /*UnityEngine.QualitySettings$$get_masterTextureLimit*/ func_0x03251360(0);
    if (iVar4 != iVar3) {
      /*UnityEngine.QualitySettings$$set_masterTextureLimit*/ func_0x03251394(iVar3,0);
    }
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xb0),param_1 + 0x38,
                      0);
    }
    /*Atlas.Settings.AtlasQualitySettings$$UpdateCameraSetings*/ func_0x0145f6f8(param_1);
    uStack_88._4_4_ = 0x3f800000;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xc0),
                      (long)&uStack_88 + 4,0);
    }
    /*UnityEngine.QualitySettings$$set_lodBias*/ func_0x032512a8(uStack_88._4_4_,0);
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    uVar9 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 200),&uStack_88,0);
      uVar9 = uStack_88 & 0xffffffff;
    }
    /*UnityEngine.QualitySettings$$set_maximumLODLevel*/ func_0x032513d4(uVar9,0);
    uStack_89 = 0;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
      /*UnityEngine.QualitySettings$$set_anisotropicFiltering*/ func_0x03251320(1,0);
      uVar10 = /*Atlas.Settings.AtlasQualitySettings$$UpdateClearCameraSettings*/ func_0x0145f8dc(param_1);
      return uVar10;
    }
    uVar10 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60);
  }
  else {
    if (0.0 < fStack_68) {
      fVar12 = fStack_68 * (float)(int)uVar11;
      fVar13 = -fVar12;
      if (fVar12 != INFINITY) {
        fVar13 = fVar12;
      }
      uVar9 = (ulong)(uint)(int)fVar13;
      fVar12 = fStack_68 * (float)(int)uVar1;
      fVar13 = -fVar12;
      if (fVar12 != INFINITY) {
        fVar13 = fVar12;
      }
      uVar8 = (ulong)(uint)(int)fVar13;
      goto LAB_0145f34c;
    }
    iStack_90 = 0x7fffffff;
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x78),&iStack_90,0);
    }
    lVar6 = /*UnityEngine.SystemInfo$$get_deviceModel*/ func_0x0326d5c0(0);
    if (lVar6 != 0) {
      uVar7 = /*System.String$$Equals*/ func_0x029bab9c(lVar6,/*STR('iPhone9,2')*/ uRam0000000003d79940,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = /*UnityEngine.SystemInfo$$get_deviceModel*/ func_0x0326d5c0(0);
        if (lVar6 == 0) goto code_r0x0145f6cc;
        uVar7 = /*System.String$$Equals*/ func_0x029bab9c(lVar6,/*STR('iPhone9,4')*/ uRam0000000003d79948,0);
        if ((uVar7 & 1) != 0) goto code_r0x0145f2c0;
      }
      else {
code_r0x0145f2c0:
        iStack_90 = 0xf4434;
      }
      if (iStack_90 < (int)(uVar1 * uVar11)) {
        iVar3 = 99;
        uVar11 = 1;
        do {
          uVar9 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(((float)iVar3 / 100.0) * (float)*(int *)(param_1 + 0x74),0);
          uVar8 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(((float)iVar3 / 100.0) * (float)*(int *)(param_1 + 0x78),0);
          if ((int)uVar8 * (int)uVar9 <= iStack_90) break;
          iVar3 = iVar3 + -1;
          bVar2 = uVar11 < 99;
          uVar11 = uVar11 + 1;
        } while (bVar2);
      }
      goto LAB_0145f34c;
    }
code_r0x0145f6cc:
    auVar15 = func_0x00f78af4();
    uVar10 = auVar15._8_8_;
    lVar6 = *(long *)(auVar15._0_8_ + 0x10);
    if (lVar6 == 0) {
      return 0;
    }
  }
code_r0x0168e28c:
  uVar10 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4(lVar6,uVar10);
  if ((int)uVar10 != 0) {
    uVar10 = 0;
  }
  return uVar10;
}



// ============================================================
// RVA: 0x145f6d0 | Atlas.Settings.AtlasQualitySettings.TryGetBoolParameter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e2c0) */
/* WARNING: Removing unreachable block (ram,0x0168e2c4) */
/* WARNING: Removing unreachable block (ram,0x0168e2c8) */

undefined8 Atlas_Settings_AtlasQualitySettings__TryGetBoolParameter(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)uVar1 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x145f6e4 | Atlas.Settings.AtlasQualitySettings.TryGetFloatParameter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

undefined8
Atlas_Settings_AtlasQualitySettings__TryGetFloatParameter
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)uVar1 != 0) {
    *param_4 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x145f6f8 | Atlas.Settings.AtlasQualitySettings.UpdateCameraSetings
// ============================================================

/* WARNING: Possible PIC construction at 0x0145f7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145f890) */
/* WARNING: Removing unreachable block (ram,0x0145f898) */
/* WARNING: Removing unreachable block (ram,0x0145f8bc) */
/* WARNING: Removing unreachable block (ram,0x0145f848) */
/* WARNING: Removing unreachable block (ram,0x0145f850) */
/* WARNING: Removing unreachable block (ram,0x0145f874) */
/* WARNING: Removing unreachable block (ram,0x0145f800) */
/* WARNING: Removing unreachable block (ram,0x0145f808) */
/* WARNING: Removing unreachable block (ram,0x0145f82c) */
/* WARNING: Removing unreachable block (ram,0x0145f7b8) */
/* WARNING: Removing unreachable block (ram,0x0145f7c0) */
/* WARNING: Removing unreachable block (ram,0x0145f7e4) */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Settings_AtlasQualitySettings__UpdateCameraSetings(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  int extraout_w1;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 unaff_x21;
  uint uVar28;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar29;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined1 **ppuVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined1 uVar33;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar34;
  undefined1 extraout_var;
  undefined1 uVar35;
  undefined1 extraout_var_00;
  undefined1 uVar36;
  undefined1 extraout_var_01;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  long lStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [12];
  int iStack_54;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 **ppuVar9;
  
  puVar8 = &stack0xfffffffffffffff0;
  uVar27 = 0x3eb4000;
  if ((bRam0000000003eb480a & 1) == 0) {
    func_0x00f78a20(0x3d6fcc8);
    func_0x00f78a20(0x3d6fcb8);
    func_0x00f78a20(0x3d72de0);
    func_0x00f78a20(0x3d6ccb0);
    func_0x00f78a20(0x3d70190);
    func_0x00f78a20(0x3d701a0);
    func_0x00f78a20(0x3d76438);
    func_0x00f78a20(0x3d68fd0);
    bRam0000000003eb480a = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  /*Core.Cameras.CameraManager$$SetPPAAType*/ func_0x0163aed4(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38),0,0);
  auVar40._8_8_ = /*STR('NearCulling')*/ uRam0000000003d70190;
  auVar40._0_8_ = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar33 = (undefined1)uVar3;
    uVar34 = (undefined1)((uint)uVar3 >> 8);
    uVar35 = (undefined1)((uint)uVar3 >> 0x10);
    uVar36 = (undefined1)((uint)uVar3 >> 0x18);
    uVar22 = 0;
    puVar31 = (undefined *)0x145f7b8;
    puVar10 = &stack0xffffffffffffffe0;
    do {
      uVar21 = auVar40._8_8_;
      lVar25 = auVar40._0_8_;
      *(undefined8 *)(puVar10 + -0x60) = unaff_d9;
      *(undefined8 *)(puVar10 + -0x58) = unaff_d8;
      *(ulong *)(puVar10 + -0x50) = unaff_x26;
      *(long *)(puVar10 + -0x48) = unaff_x25;
      *(undefined8 **)(puVar10 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar10 + -0x38) = unaff_x23;
      *(long **)(puVar10 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar10 + -0x20) = uVar27;
      *(long *)(puVar10 + -0x18) = param_1;
      *(undefined1 **)(puVar10 + -0x10) = puVar8;
      *(undefined **)(puVar10 + -8) = puVar31;
      uVar2 = CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
      if ((bRam0000000003eb56cb & 1) == 0) {
        func_0x00f78a20(0x3d3ce48);
        func_0x00f78a20(0x3d3ce50);
        func_0x00f78a20(0x3d3ce58);
        func_0x00f78a20(0x3d3ce60);
        bRam0000000003eb56cb = 1;
      }
      lVar29 = *(long *)(lVar25 + 0x38);
      puVar7 = unaff_x24;
      if (lVar29 != 0) {
        unaff_x25 = 0;
        uVar15 = 0;
        unaff_x24 = (undefined8 *)0x3d3ce48;
        do {
          uVar28 = (uint)uVar15;
          if ((int)*(uint *)(lVar29 + 0x18) <= (int)uVar28) goto code_r0x0163b0d4;
          if (*(uint *)(lVar29 + 0x18) <= uVar28) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar23 = *(long *)(lVar29 + 0x10) + unaff_x25;
          lVar29 = *(long *)(lVar23 + 0x20);
          puVar7 = unaff_x24;
          if (lVar29 == 0) break;
          uVar1 = *(uint *)(lVar23 + 0x28);
          unaff_x26 = (ulong)uVar1;
          iVar13 = /*System.String$$Equals*/ func_0x029caa48(lVar29,uVar21,5,0);
          if (iVar13 != 0) {
            puVar7 = (undefined8 *)0x3d3ce48;
            if (*(long *)(lVar25 + 0x38) != 0) {
              uVar17 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$set_Item*/ func_0x025041d4(*(long *)(lVar25 + 0x38),uVar15,lVar29,CONCAT44(uVar2,uVar1),
                                       uRam0000000003d3ce60);
              lVar23 = *(long *)(lVar25 + 0x40);
              if (lVar23 != 0) {
                if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar23 + ((long)(unaff_x26 << 0x20) >> 0x1e) + 0x20) = uVar2;
                  return uVar17;
                }
                goto code_r0x0163b1ac;
              }
            }
            break;
          }
          uVar15 = (ulong)(uVar28 + 1);
          lVar29 = *(long *)(lVar25 + 0x38);
          unaff_x25 = unaff_x25 + 0x10;
        } while (lVar29 != 0);
      }
      do {
        do {
          unaff_x24 = puVar7;
          func_0x00f78af4();
code_r0x0163b0d4:
          uVar15 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(uVar21,0);
          puVar7 = unaff_x24;
        } while (*(long *)(lVar25 + 0x38) == 0);
        uVar17 = uVar15 & 0xffffffff | (ulong)uVar2 << 0x20;
        uVar16 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$Add*/ func_0x02504530(*(long *)(lVar25 + 0x38),uVar21,uVar17,*unaff_x24);
        lVar23 = *(long *)(lVar25 + 0x40);
      } while (lVar23 == 0);
      if (*(uint *)(lVar23 + 0x18) <= (uint)uVar15) {
code_r0x0163b1ac:
        uVar27 = func_0x00f78b24();
        auVar40 = func_0x00f78ac0(uVar27,0);
        lVar23 = auVar40._0_8_;
        *(ulong *)(puVar10 + -0x90) = uVar15;
        *(undefined8 *)(puVar10 + -0x88) = uVar21;
        *(ulong *)(puVar10 + -0x80) = uVar22;
        *(long *)(puVar10 + -0x78) = lVar25;
        *(undefined1 **)(puVar10 + -0x70) = puVar10 + -0x10;
        *(undefined **)(puVar10 + -0x68) = &Core_Cameras_CameraManager__SetCameraViewport;
        if ((bRam0000000003eb56cc & 1) == 0) {
          func_0x00f78a20(0x3d204e0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb56cc = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)0x0;
        uVar22 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar23,0);
        if ((uVar22 & 1) != 0) {
          return uVar22;
        }
        if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar25 = **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8);
        if (lVar25 == 0) {
code_r0x0163b2a4:
          func_0x00f78af4();
        }
        else if (auVar40._8_4_ < *(uint *)(lVar25 + 0x18)) {
          if (lVar23 != 0) {
            lVar25 = lVar25 + (long)(int)auVar40._8_4_ * 0x10;
            uVar38 = *(undefined4 *)(lVar25 + 0x28);
            uVar39 = *(undefined4 *)(lVar25 + 0x2c);
            uVar3 = *(undefined4 *)(lVar25 + 0x20);
            uVar37 = *(undefined4 *)(lVar25 + 0x24);
            *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x80);
            *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x78);
            *(undefined8 *)(puVar10 + -0x70) = *(undefined8 *)(puVar10 + -0x70);
            *(undefined8 *)(puVar10 + -0x68) = *(undefined8 *)(puVar10 + -0x68);
            *(undefined4 *)(puVar10 + -0x90) = uVar3;
            *(undefined4 *)(puVar10 + -0x8c) = uVar37;
            *(undefined4 *)(puVar10 + -0x88) = uVar38;
            *(undefined4 *)(puVar10 + -0x84) = uVar39;
            if (pcRam0000000003ebeed8 == (code *)0x0) {
              pcRam0000000003ebeed8 =
                   (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)"
                                           ,0);
            }
            uVar22 = (*pcRam0000000003ebeed8)(lVar23,puVar10 + -0x90);
            return uVar22;
          }
          goto code_r0x0163b2a4;
        }
        uVar27 = func_0x00f78b24();
        uVar22 = func_0x00f78ac0(uVar27,0);
        *(undefined8 **)(puVar10 + -0xd0) = unaff_x24;
        *(long *)(puVar10 + -200) = lVar29;
        *(undefined8 *)(puVar10 + -0xc0) = 0x3d23990;
        *(undefined8 *)(puVar10 + -0xb8) = 0x3d204e0;
        *(long *)(puVar10 + -0xb0) = auVar40._8_8_;
        *(long *)(puVar10 + -0xa8) = lVar23;
        *(undefined1 **)(puVar10 + -0xa0) = puVar10 + -0x70;
        *(undefined **)(puVar10 + -0x98) = &Core_Cameras_CameraManager__CreateCamera;
        if ((bRam0000000003eb56cd & 1) == 0) {
          func_0x00f78a20(0x3d19110);
          func_0x00f78a20(0x3d577e0);
          func_0x00f78a20(0x3d21b60);
          func_0x00f78a20(0x3d1f578);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb56cd = 1;
        }
        plVar18 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
        plVar20 = /*UnityEngine.Camera_var*/ plRam0000000003d19110;
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar19 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar20,0);
        if (plVar18 == (long *)0x0) {
code_r0x0163b494:
          func_0x00f78af4();
code_r0x0163b498:
          uVar27 = func_0x00f78b24();
          plVar19 = plVar20;
        }
        else {
          if ((plVar19 == (long *)0x0) ||
             (lVar25 = func_0x00f78adc(plVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar25 != 0)) {
            plVar20 = plVar19;
            if ((int)plVar18[3] != 0) {
              plVar18[4] = (long)plVar19;
              plVar20 = (long *)func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
              plVar14 = plVar18;
              /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(plVar20,uVar22,plVar18,0);
              if ((plVar20 != (long *)0x0) &&
                 (uVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar20,uRam0000000003d577e0), uVar15 != 0)) {
                /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar15,0,0);
                /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar15,0,0);
                /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar15,0,0);
                /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar15,0,0);
                /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
                /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar15,0);
                plVar14 = (long *)0x0;
                /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar15,2);
                lVar25 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar15,0);
                uVar22 = uVar15;
                if (lVar25 != 0) {
                  *(undefined4 *)(lVar25 + 0x1c) = 0;
                  *(undefined4 *)(lVar25 + 0x20) = 0;
                  /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar25,0,0);
                  /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar25,0,0);
                  *(undefined1 *)(lVar25 + 0x18) = 0;
                  *(undefined1 *)(lVar25 + 0x44) = 0;
                  *(undefined4 *)(lVar25 + 0x48) = 0;
                  return uVar15;
                }
              }
              goto code_r0x0163b494;
            }
            goto code_r0x0163b498;
          }
          uVar27 = func_0x00f78b14();
        }
        auVar4._8_8_ = uVar22;
        auVar4._0_8_ = plVar18;
        auVar40 = func_0x00f78ac0(uVar27,0);
        uVar15 = auVar40._8_8_;
        lVar25 = auVar40._0_8_;
        *(undefined8 **)(puVar10 + -0x110) = unaff_x24;
        *(undefined8 *)(puVar10 + -0x108) = 0x3d1f578;
        *(undefined8 *)(puVar10 + -0x100) = 0x3d25458;
        *(long **)(puVar10 + -0xf8) = plVar19;
        *(long **)(puVar10 + -0xf0) = plVar18;
        *(ulong *)(puVar10 + -0xe8) = uVar22;
        *(undefined1 **)(puVar10 + -0xe0) = puVar10 + -0xa0;
        *(undefined **)(puVar10 + -0xd8) = &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
        plVar20 = plVar14;
        unaff_x22 = (long *)0x3d25458;
        unaff_x23 = 0x3d1f578;
        if (((lVar25 != 0) &&
            (plVar18 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar25,0), plVar19 = plVar14, auVar4 = auVar40,
            uVar15 != 0)) &&
           (lVar29 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar15,0), unaff_x22 = plVar18, unaff_x23 = 0x3d1f578,
           plVar18 != (long *)0x0)) {
          /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(plVar18,0);
          unaff_x23 = 0;
          if (lVar29 != 0) {
            /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar29,0);
            /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar18,0);
            /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar29,0);
            /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(plVar18,0);
            /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar29,0);
            /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar25,0);
            uVar22 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(uVar15,0);
            if (((ulong)plVar14 & 1) != 0) {
              return uVar22;
            }
            /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar25,0);
            /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(uVar15,0);
            /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar25,0);
            uVar27 = *(undefined8 *)(puVar10 + -0xe0);
            uVar32 = *(undefined8 *)(puVar10 + -0xd8);
            uVar21 = *(undefined8 *)(puVar10 + -0xf0);
            uVar26 = *(undefined8 *)(puVar10 + -0xe8);
            puVar11 = puVar10 + -0xd0;
            uVar33 = extraout_b0_00;
            goto UnityEngine_Camera__set_farClipPlane;
          }
        }
        uVar15 = func_0x00f78af4();
        puVar12 = puVar10 + -0x130;
        *(undefined1 (*) [16])(puVar10 + -0x130) = auVar4;
        *(undefined1 **)(puVar10 + -0x120) = puVar10 + -0xe0;
        *(undefined **)(puVar10 + -0x118) = &Core_Cameras_CameraManager__ResetPhysicalCameraSettings
        ;
        puVar8 = puVar10 + -0x120;
        if (uVar15 != 0) {
          lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar15,0);
          /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar15;
          auVar4 = auVar5 << 0x40;
          if (lVar25 != 0) {
            /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar25,0);
            /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
            /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar25,0);
            /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
            /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar25,0);
            /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0,uVar15,0);
            /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc((char)_UNK_033f83fc,uVar15,0);
            uVar33 = 0;
            uVar27 = *(undefined8 *)(puVar10 + -0x120);
            uVar32 = *(undefined8 *)(puVar10 + -0x118);
            puVar11 = puVar10 + -0x110;
            uVar21 = *(undefined8 *)(puVar10 + -0x130);
            uVar26 = *(undefined8 *)(puVar10 + -0x128);
UnityEngine_Camera__set_farClipPlane:
            *(undefined8 *)(puVar11 + -0x30) = unaff_d9;
            *(ulong *)(puVar11 + -0x28) = (ulong)uVar2;
            *(undefined8 *)(puVar11 + -0x20) = uVar21;
            *(undefined8 *)(puVar11 + -0x18) = uVar26;
            *(undefined8 *)(puVar11 + -0x10) = uVar27;
            *(undefined8 *)(puVar11 + -8) = uVar32;
            if (pcRam0000000003ebead0 == (code *)0x0) {
              pcRam0000000003ebead0 =
                   (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
            }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar22 = (*pcRam0000000003ebead0)(uVar33,uVar15);
            return uVar22;
          }
        }
        puVar31 = &Core_Cameras_CameraManager__ApplySettings;
        auVar41 = func_0x00f78af4();
        goto code_r0x0163b65c;
      }
      *(uint *)(lVar23 + (long)(int)(uint)uVar15 * 4 + 0x20) = uVar2;
      if ((int)uVar22 == 0) {
        return uVar16;
      }
      unaff_x22 = *(long **)(puVar10 + -0x30);
      unaff_x21 = *(undefined8 *)(puVar10 + -0x28);
      unaff_x24 = *(undefined8 **)(puVar10 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar10 + -0x38);
      unaff_x26 = *(ulong *)(puVar10 + -0x50);
      unaff_x25 = *(long *)(puVar10 + -0x48);
      unaff_d9 = *(undefined8 *)(puVar10 + -0x60);
      unaff_d8 = *(undefined8 *)(puVar10 + -0x58);
      puVar12 = puVar10 + -0x50;
      *(long **)(puVar10 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
      *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
      *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      puVar8 = puVar10 + -0x10;
      uVar27 = 0x3eb5000;
      uVar22 = uVar17;
      if ((bRam0000000003eb56d0 & 1) == 0) {
        func_0x00f78a20(0x3d33348);
        func_0x00f78a20(0x3d33350);
        func_0x00f78a20(0x3d33358);
        func_0x00f78a20(0x3d3ce20);
        bRam0000000003eb56d0 = 1;
        uVar22 = uVar17;
      }
      *(undefined8 *)(puVar10 + -0x48) = 0;
      *(undefined8 *)(puVar10 + -0x50) = 0;
      *(undefined8 *)(puVar10 + -0x38) = 0;
      *(undefined8 *)(puVar10 + -0x40) = 0;
      if (*(long *)(lVar25 + 0x28) != 0) goto code_r0x0163af50;
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar14 = (long *)___cxa_begin_catch();
        lVar25 = *plVar14;
        ___cxa_end_catch();
        uVar15 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(puVar10 + -0x50,uRam0000000003eb5000);
        if (lVar25 == 0) {
          return uVar15;
        }
        func_0x00f78ac0(lVar25,0);
      }
      puVar31 = &Core_Cameras_CameraManager__UpdateLayerSettings;
      auVar40 = __Unwind_Resume();
      puVar10 = puVar10 + -0x50;
      param_1 = lVar25;
      uVar33 = extraout_b0;
      uVar34 = extraout_var;
      uVar35 = extraout_var_00;
      uVar36 = extraout_var_01;
    } while( true );
  }
  lVar25 = func_0x00f78af4();
  puStack_28 = &Atlas_Settings_AtlasQualitySettings__UpdateClearCameraSettings;
  puStack_30 = puVar8;
  if ((bRam0000000003eb480b & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb480b = 1;
  }
  uVar27 = *(undefined8 *)(lVar25 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar22 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar27,0,0);
  if ((int)uVar22 == 0) {
    return uVar22;
  }
  iStack_54 = 0;
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(lVar25 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(lVar25 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x68),&iStack_54,0);
  }
  lVar29 = *(long *)(lVar25 + 0x30);
  /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  if (lVar29 != 0) {
    uVar22 = /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar29,0);
    if (iStack_54 == 2) {
      if (*(long *)(lVar25 + 0x30) != 0) {
        /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(*(long *)(lVar25 + 0x30),2,0);
        lVar25 = *(long *)(lVar25 + 0x30);
        /*UnityEngine.Color$$get_magenta*/ func_0x03223600(0);
        if (lVar25 != 0) {
          uVar22 = /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar25,0);
          return uVar22;
        }
      }
    }
    else if (iStack_54 == 1) {
      lVar25 = *(long *)(lVar25 + 0x30);
      if (lVar25 != 0) {
        uVar27 = 2;
        goto code_r0x0145fa20;
      }
    }
    else {
      if (iStack_54 != 0) {
        return uVar22;
      }
      lVar25 = *(long *)(lVar25 + 0x30);
      if (lVar25 != 0) {
        uVar27 = 4;
code_r0x0145fa20:
        uVar22 = /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(lVar25,uVar27,0);
        return uVar22;
      }
    }
  }
  uVar22 = func_0x00f78af4();
  pcStack_68 = (code *)&Atlas_Settings_AtlasQualitySettings__ApplyOutlinesSettings;
  if ((bRam0000000003eb4806 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4806 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(uVar22 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar22 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x150),uVar22 + 0x68,0)
    ;
    if (*(long *)(uVar22 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar22 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x158),uVar22 + 100,0
                     );
    }
  }
  puVar8 = auStack_60;
  ppuVar30 = &puStack_30;
  do {
    ppuVar9 = (undefined1 **)(puVar8 + -0x10);
    *(undefined1 ***)(puVar8 + -0x10) = ppuVar30;
    *(code **)(puVar8 + -8) = pcStack_68;
    lVar25 = *(long *)(uVar22 + 0xb0);
    if (*(char *)(uVar22 + 0x6c) == '\0') {
      if ((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x20), lVar25 != 0)) {
        puVar24 = (undefined4 *)(uVar22 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x20), lVar25 != 0)) {
      puVar24 = (undefined4 *)(uVar22 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar25 + 0x2c) = *puVar24;
      return uVar22;
    }
    pcStack_68 = Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    uVar22 = func_0x00f78af4();
    *(undefined1 *)(uVar22 + 0x6c) = 0;
    puVar8 = puVar8 + -0x10;
    ppuVar30 = ppuVar9;
  } while( true );
code_r0x0163af50:
  plVar19 = (long *)0x3d33350;
  auVar4._8_8_ = lVar25;
  auVar4._0_8_ = 0x3d33348;
  /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564(puVar10 + -0x50,*(long *)(lVar25 + 0x28),uRam0000000003d3ce20);
  uVar22 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0(puVar10 + -0x50,uRam0000000003d33350);
  if ((uVar22 & 1) == 0) {
    uVar22 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(puVar10 + -0x50,uRam0000000003d33348);
    return uVar22;
  }
  auVar41._8_8_ = *(undefined8 *)(puVar10 + -0x40);
  auVar41._0_8_ = lVar25;
  plVar20 = *(long **)(puVar10 + -0x38);
  puVar31 = &UNK_0163af90;
code_r0x0163b65c:
  uVar22 = auVar41._0_8_;
  auVar6._8_8_ = plVar20;
  auVar6._0_8_ = uVar22;
  *(long **)(puVar12 + -0x30) = unaff_x22;
  *(long **)(puVar12 + -0x28) = plVar19;
  *(undefined1 (*) [16])(puVar12 + -0x20) = auVar4;
  *(undefined1 **)(puVar12 + -0x10) = puVar8;
  *(undefined **)(puVar12 + -8) = puVar31;
  if (plVar20 == (long *)0x0) {
code_r0x0163b6d0:
    uVar22 = func_0x00f78af4();
    *(ulong *)(puVar12 + -0x80) = unaff_x26;
    *(long *)(puVar12 + -0x78) = unaff_x25;
    *(undefined8 **)(puVar12 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar12 + -0x68) = unaff_x23;
    *(long **)(puVar12 + -0x60) = unaff_x22;
    *(long **)(puVar12 + -0x58) = plVar19;
    *(undefined1 (*) [16])(puVar12 + -0x50) = auVar4;
    *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
    *(undefined **)(puVar12 + -0x38) = &Core_Cameras_CameraManager___ctor;
    if ((bRam0000000003eb56d4 & 1) == 0) {
      func_0x00f78a20(0x3d3ce08);
      func_0x00f78a20(0x3d3ce40);
      func_0x00f78a20(0x3d1e0b0);
      func_0x00f78a20(0x3d1e0a8);
      func_0x00f78a20(0x3d1f3d8);
      bRam0000000003eb56d4 = 1;
    }
    uVar27 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
    /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar27,uRam0000000003d3ce08);
    *(undefined8 *)(uVar22 + 0x28) = uVar27;
    uVar27 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
    /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar27,uRam0000000003d3ce40);
    *(undefined8 *)(uVar22 + 0x38) = uVar27;
    uVar27 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
    *(undefined8 *)(uVar22 + 0x40) = uVar27;
    return uVar22;
  }
  uVar15 = uVar22;
  if (0 < (int)plVar20[3]) {
    plVar19 = (long *)0x0;
    plVar14 = (long *)(plVar20[3] & 0xffffffff);
    unaff_x22 = plVar20 + 4;
    do {
      if (plVar14 <= plVar19) {
        uVar27 = func_0x00f78b24(auVar41._0_8_,auVar41._8_8_);
        func_0x00f78ac0(uVar27,0);
        auVar4 = auVar6;
        goto code_r0x0163b6d0;
      }
      auVar41 = /*Core.Cameras.CameraManager$$ApplySettings*/ func_0x0163a77c(uVar22,unaff_x22[(long)plVar19]);
      uVar15 = auVar41._0_8_;
      plVar19 = (long *)((long)plVar19 + 1);
      plVar14 = (long *)(ulong)*(uint *)(plVar20 + 3);
    } while ((long)plVar19 < (long)(int)*(uint *)(plVar20 + 3));
  }
  return uVar15;
}



// ============================================================
// RVA: 0x145f8dc | Atlas.Settings.AtlasQualitySettings.UpdateClearCameraSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__UpdateClearCameraSettings(long param_1)

{
  undefined1 *puVar1;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [12];
  int iStack_34;
  undefined1 *puVar2;
  
  puVar8 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb480b & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb480b = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar3 == 0) {
    return;
  }
  iStack_34 = 0;
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x68),&iStack_34,0);
  }
  lVar7 = *(long *)(param_1 + 0x30);
  /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  if (lVar7 != 0) {
    /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar7,0);
    if (iStack_34 == 2) {
      if (*(long *)(param_1 + 0x30) != 0) {
        /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(*(long *)(param_1 + 0x30),2,0);
        lVar7 = *(long *)(param_1 + 0x30);
        /*UnityEngine.Color$$get_magenta*/ func_0x03223600(0);
        if (lVar7 != 0) {
          /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar7,0);
          return;
        }
      }
    }
    else if (iStack_34 == 1) {
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 != 0) {
        uVar6 = 2;
        goto LAB_0145fa20;
      }
    }
    else {
      if (iStack_34 != 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 != 0) {
        uVar6 = 4;
LAB_0145fa20:
        /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(lVar7,uVar6,0);
        return;
      }
    }
  }
  lVar7 = func_0x00f78af4();
  pcStack_48 = (code *)&Atlas_Settings_AtlasQualitySettings__ApplyOutlinesSettings;
  if ((bRam0000000003eb4806 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4806 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar1 = auStack_40;
  if (*(long *)(lVar7 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar7 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x150),lVar7 + 0x68,0);
    puVar1 = auStack_40;
    if (*(long *)(lVar7 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar7 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x158),lVar7 + 100,0)
      ;
      puVar1 = auStack_40;
    }
  }
  do {
    puVar2 = puVar1 + -0x10;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(code **)(puVar1 + -8) = pcStack_48;
    lVar4 = *(long *)(lVar7 + 0xb0);
    if (*(char *)(lVar7 + 0x6c) == '\0') {
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
        puVar5 = (undefined4 *)(lVar7 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      puVar5 = (undefined4 *)(lVar7 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar4 + 0x2c) = *puVar5;
      return;
    }
    pcStack_48 = Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    lVar7 = func_0x00f78af4();
    *(undefined1 *)(lVar7 + 0x6c) = 0;
    puVar1 = puVar1 + -0x10;
    puVar8 = puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x145fa40 | Atlas.Settings.AtlasQualitySettings.ApplyOutlinesSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__ApplyOutlinesSettings(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  if ((bRam0000000003eb4806 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4806 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x150),param_1 + 0x68,0
                   );
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x158),param_1 + 100,
                      0);
    }
  }
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar2 = *(long *)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        puVar3 = (undefined4 *)(param_1 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
      puVar3 = (undefined4 *)(param_1 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar2 + 0x2c) = *puVar3;
      return;
    }
    unaff_x30 = Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    param_1 = func_0x00f78af4();
    *(undefined1 *)(param_1 + 0x6c) = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  } while( true );
}



// ============================================================
// RVA: 0x145faf0 | Atlas.Settings.AtlasQualitySettings.ApplyShadowSettings
// ============================================================

/* WARNING: Possible PIC construction at 0x0145f7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145f890) */
/* WARNING: Removing unreachable block (ram,0x0145f898) */
/* WARNING: Removing unreachable block (ram,0x0145f8bc) */
/* WARNING: Removing unreachable block (ram,0x0145f848) */
/* WARNING: Removing unreachable block (ram,0x0145f850) */
/* WARNING: Removing unreachable block (ram,0x0145f874) */
/* WARNING: Removing unreachable block (ram,0x0145f800) */
/* WARNING: Removing unreachable block (ram,0x0145f808) */
/* WARNING: Removing unreachable block (ram,0x0145f82c) */
/* WARNING: Removing unreachable block (ram,0x0145f7b8) */
/* WARNING: Removing unreachable block (ram,0x0145f7c0) */
/* WARNING: Removing unreachable block (ram,0x0145f7e4) */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Settings_AtlasQualitySettings__ApplyShadowSettings(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined1 *puVar8;
  long **pplVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined1 **ppuVar23;
  int extraout_w1;
  undefined8 uVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 unaff_x21;
  code *pcVar30;
  uint uVar31;
  undefined1 **unaff_x22;
  undefined1 **ppuVar32;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined1 ***pppuVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined1 uVar36;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar37;
  undefined1 extraout_var;
  undefined1 uVar38;
  undefined1 extraout_var_00;
  undefined1 uVar39;
  undefined1 extraout_var_01;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  long lStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [12];
  int iStack_a4;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  long *plStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  char cStack_31;
  undefined1 ***pppuVar9;
  
  if ((bRam0000000003eb4807 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d257b0);
    bRam0000000003eb4807 = 1;
  }
  plVar14 = (long *)/*UnityEngine.Rendering.GraphicsSettings$$get_renderPipelineAsset*/ func_0x03230868(0);
  if (plVar14 == (long *)0x0) {
LAB_0145fb90:
    unaff_x21 = 0x3d1feb0;
    cStack_31 = '\x01';
    uStack_3c = 0x800;
    fStack_38 = 1.0;
    uStack_40 = 4;
    if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = (undefined1 **)0x3d23990;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetBoolParameter*/ func_0x0168e28c(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x160),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x168),param_1 + 0x84
                      ,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        /*Core.Settings.QualitySettings$$TryGetBoolParameter*/ func_0x0168e28c(*(long *)(param_1 + 0x10),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x160),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x170),&cStack_31,0
                       );
        if (*(long *)(param_1 + 0x10) != 0) {
          /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x160),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x178),&fStack_38
                          ,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x160),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x180),
                            &uStack_3c,0);
            if (*(long *)(param_1 + 0x10) != 0) {
              /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                              *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x160),
                              *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x188),
                              &uStack_40,0);
            }
          }
        }
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar14,0,0);
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    if (cStack_31 == '\0') {
      fStack_38 = 0.0;
    }
    if (plVar14 != (long *)0x0) {
      /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset$$set_shadowDistance*/ func_0x03165030(SUB41(fStack_38 * *(float *)(param_1 + 0x8c),0),plVar14,0);
      lVar27 = *(long *)(param_1 + 0xa0);
      uStack_44 = uStack_3c;
      uVar16 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_44);
      param_1 = 0;
      if (lVar27 != 0) {
        /*System.Reflection.FieldInfo$$SetValue*/ func_0x02ad04c0(lVar27,plVar14,uVar16,0);
        uVar15 = /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset$$set_shadowCascadeCount*/ func_0x03165068(plVar14,uStack_40,0);
        return uVar15;
      }
    }
  }
  else {
    if ((*(byte *)(/*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0 + 300) <= *(byte *)(*plVar14 + 300)) &&
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(/*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0 + 300) * 8 + -8)
        == /*UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset_TypeInfo*/ lRam0000000003d257b0)) goto LAB_0145fb90;
    func_0x00f78e5c(plVar14);
  }
  lVar27 = func_0x00f78af4();
  puStack_58 = &Atlas_Settings_AtlasQualitySettings__ApplyCullingSettings;
  ppuStack_80 = unaff_x22;
  pcStack_78 = (code *)unaff_x21;
  plStack_70 = plVar14;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4808 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4808 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(lVar27 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar27 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x198),lVar27 + 0x3c,0)
    ;
    if (*(long *)(lVar27 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar27 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1a0),lVar27 + 0x40,
                      0);
      if (*(long *)(lVar27 + 0x10) != 0) {
        /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar27 + 0x10),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1a8),
                        lVar27 + 0x44,0);
        if (*(long *)(lVar27 + 0x10) != 0) {
          /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar27 + 0x10),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1b0),
                          lVar27 + 0x48,0);
          if (*(long *)(lVar27 + 0x10) != 0) {
            /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar27 + 0x10),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1b8),
                            lVar27 + 0x4c,0);
            if (*(long *)(lVar27 + 0x10) != 0) {
              /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(lVar27 + 0x10),
                              *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                              *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1c0),
                              lVar27 + 0x50,0);
            }
          }
        }
      }
    }
  }
  pcVar30 = pcStack_78;
  ppuVar32 = ppuStack_80;
  ppuVar23 = &puStack_60;
  uVar16 = 0x3eb4000;
  if ((bRam0000000003eb480a & 1) == 0) {
    func_0x00f78a20(0x3d6fcc8);
    func_0x00f78a20(0x3d6fcb8);
    func_0x00f78a20(0x3d72de0);
    func_0x00f78a20(0x3d6ccb0);
    func_0x00f78a20(0x3d70190);
    func_0x00f78a20(0x3d701a0);
    func_0x00f78a20(0x3d76438);
    func_0x00f78a20(0x3d68fd0);
    bRam0000000003eb480a = 1;
  }
  if (*(long *)(lVar27 + 0x28) == 0) {
    return 0;
  }
  /*Core.Cameras.CameraManager$$SetPPAAType*/ func_0x0163aed4(*(long *)(lVar27 + 0x28),*(undefined4 *)(lVar27 + 0x38),0,0);
  auVar43._8_8_ = /*STR('NearCulling')*/ uRam0000000003d70190;
  auVar43._0_8_ = *(long *)(lVar27 + 0x28);
  if (*(long *)(lVar27 + 0x28) != 0) {
    uVar3 = *(undefined4 *)(lVar27 + 0x3c);
    uVar36 = (undefined1)uVar3;
    uVar37 = (undefined1)((uint)uVar3 >> 8);
    uVar38 = (undefined1)((uint)uVar3 >> 0x10);
    uVar39 = (undefined1)((uint)uVar3 >> 0x18);
    uVar15 = 0;
    puVar34 = (undefined *)0x145f7b8;
    pplVar10 = &plStack_70;
    do {
      uVar24 = auVar43._8_8_;
      lVar28 = auVar43._0_8_;
      *(undefined8 *)((long)pplVar10 + -0x60) = unaff_d9;
      *(undefined8 *)((long)pplVar10 + -0x58) = unaff_d8;
      *(ulong *)((long)pplVar10 + -0x50) = unaff_x26;
      *(long *)((long)pplVar10 + -0x48) = unaff_x25;
      *(undefined8 **)((long)pplVar10 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pplVar10 + -0x38) = unaff_x23;
      *(undefined1 ***)((long)pplVar10 + -0x30) = ppuVar32;
      *(code **)((long)pplVar10 + -0x28) = pcVar30;
      *(undefined8 *)((long)pplVar10 + -0x20) = uVar16;
      *(long *)((long)pplVar10 + -0x18) = lVar27;
      *(undefined1 ***)((long)pplVar10 + -0x10) = ppuVar23;
      *(undefined **)((long)pplVar10 + -8) = puVar34;
      uVar2 = CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)));
      if ((bRam0000000003eb56cb & 1) == 0) {
        func_0x00f78a20(0x3d3ce48);
        func_0x00f78a20(0x3d3ce50);
        func_0x00f78a20(0x3d3ce58);
        func_0x00f78a20(0x3d3ce60);
        bRam0000000003eb56cb = 1;
      }
      lVar27 = *(long *)(lVar28 + 0x38);
      puVar7 = unaff_x24;
      if (lVar27 != 0) {
        unaff_x25 = 0;
        uVar17 = 0;
        unaff_x24 = (undefined8 *)0x3d3ce48;
        do {
          uVar31 = (uint)uVar17;
          if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar31) goto code_r0x0163b0d4;
          if (*(uint *)(lVar27 + 0x18) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar25 = *(long *)(lVar27 + 0x10) + unaff_x25;
          lVar27 = *(long *)(lVar25 + 0x20);
          puVar7 = unaff_x24;
          if (lVar27 == 0) break;
          uVar1 = *(uint *)(lVar25 + 0x28);
          unaff_x26 = (ulong)uVar1;
          iVar13 = /*System.String$$Equals*/ func_0x029caa48(lVar27,uVar24,5,0);
          if (iVar13 != 0) {
            puVar7 = (undefined8 *)0x3d3ce48;
            if (*(long *)(lVar28 + 0x38) != 0) {
              uVar19 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$set_Item*/ func_0x025041d4(*(long *)(lVar28 + 0x38),uVar17,lVar27,CONCAT44(uVar2,uVar1),
                                       uRam0000000003d3ce60);
              lVar25 = *(long *)(lVar28 + 0x40);
              if (lVar25 != 0) {
                if (uVar1 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar25 + ((long)(unaff_x26 << 0x20) >> 0x1e) + 0x20) = uVar2;
                  return uVar19;
                }
                goto code_r0x0163b1ac;
              }
            }
            break;
          }
          uVar17 = (ulong)(uVar31 + 1);
          lVar27 = *(long *)(lVar28 + 0x38);
          unaff_x25 = unaff_x25 + 0x10;
        } while (lVar27 != 0);
      }
      do {
        do {
          unaff_x24 = puVar7;
          func_0x00f78af4();
code_r0x0163b0d4:
          uVar17 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(uVar24,0);
          puVar7 = unaff_x24;
        } while (*(long *)(lVar28 + 0x38) == 0);
        uVar19 = uVar17 & 0xffffffff | (ulong)uVar2 << 0x20;
        uVar18 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$Add*/ func_0x02504530(*(long *)(lVar28 + 0x38),uVar24,uVar19,*unaff_x24);
        lVar25 = *(long *)(lVar28 + 0x40);
      } while (lVar25 == 0);
      if (*(uint *)(lVar25 + 0x18) <= (uint)uVar17) {
code_r0x0163b1ac:
        uVar16 = func_0x00f78b24();
        auVar43 = func_0x00f78ac0(uVar16,0);
        lVar25 = auVar43._0_8_;
        *(ulong *)((long)pplVar10 + -0x90) = uVar17;
        *(undefined8 *)((long)pplVar10 + -0x88) = uVar24;
        *(ulong *)((long)pplVar10 + -0x80) = uVar15;
        *(long *)((long)pplVar10 + -0x78) = lVar28;
        *(undefined1 **)((long)pplVar10 + -0x70) = (undefined1 *)((long)pplVar10 + -0x10);
        *(undefined **)((long)pplVar10 + -0x68) = &Core_Cameras_CameraManager__SetCameraViewport;
        if ((bRam0000000003eb56cc & 1) == 0) {
          func_0x00f78a20(0x3d204e0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb56cc = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)0x0;
        uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar25,0);
        if ((uVar15 & 1) != 0) {
          return uVar15;
        }
        if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar28 = **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8);
        if (lVar28 == 0) {
code_r0x0163b2a4:
          func_0x00f78af4();
        }
        else if (auVar43._8_4_ < *(uint *)(lVar28 + 0x18)) {
          if (lVar25 != 0) {
            lVar28 = lVar28 + (long)(int)auVar43._8_4_ * 0x10;
            uVar41 = *(undefined4 *)(lVar28 + 0x28);
            uVar42 = *(undefined4 *)(lVar28 + 0x2c);
            uVar3 = *(undefined4 *)(lVar28 + 0x20);
            uVar40 = *(undefined4 *)(lVar28 + 0x24);
            *(undefined8 *)((long)pplVar10 + -0x80) = *(undefined8 *)((long)pplVar10 + -0x80);
            *(undefined8 *)((long)pplVar10 + -0x78) = *(undefined8 *)((long)pplVar10 + -0x78);
            *(undefined8 *)((long)pplVar10 + -0x70) = *(undefined8 *)((long)pplVar10 + -0x70);
            *(undefined8 *)((long)pplVar10 + -0x68) = *(undefined8 *)((long)pplVar10 + -0x68);
            *(undefined4 *)((long)pplVar10 + -0x90) = uVar3;
            *(undefined4 *)((long)pplVar10 + -0x8c) = uVar40;
            *(undefined4 *)((long)pplVar10 + -0x88) = uVar41;
            *(undefined4 *)((long)pplVar10 + -0x84) = uVar42;
            if (pcRam0000000003ebeed8 == (code *)0x0) {
              pcRam0000000003ebeed8 =
                   (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)"
                                           ,0);
            }
            uVar15 = (*pcRam0000000003ebeed8)(lVar25,(undefined1 *)((long)pplVar10 + -0x90));
            return uVar15;
          }
          goto code_r0x0163b2a4;
        }
        uVar16 = func_0x00f78b24();
        uVar15 = func_0x00f78ac0(uVar16,0);
        *(undefined8 **)((long)pplVar10 + -0xd0) = unaff_x24;
        *(long *)((long)pplVar10 + -200) = lVar27;
        *(undefined8 *)((long)pplVar10 + -0xc0) = 0x3d23990;
        *(undefined8 *)((long)pplVar10 + -0xb8) = 0x3d204e0;
        *(long *)((long)pplVar10 + -0xb0) = auVar43._8_8_;
        *(long *)((long)pplVar10 + -0xa8) = lVar25;
        *(undefined1 **)((long)pplVar10 + -0xa0) = (undefined1 *)((long)pplVar10 + -0x70);
        *(undefined **)((long)pplVar10 + -0x98) = &Core_Cameras_CameraManager__CreateCamera;
        if ((bRam0000000003eb56cd & 1) == 0) {
          func_0x00f78a20(0x3d19110);
          func_0x00f78a20(0x3d577e0);
          func_0x00f78a20(0x3d21b60);
          func_0x00f78a20(0x3d1f578);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb56cd = 1;
        }
        plVar20 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
        plVar22 = /*UnityEngine.Camera_var*/ plRam0000000003d19110;
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar21 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar22,0);
        if (plVar20 == (long *)0x0) {
code_r0x0163b494:
          func_0x00f78af4();
code_r0x0163b498:
          uVar16 = func_0x00f78b24();
          plVar21 = plVar22;
        }
        else {
          if ((plVar21 == (long *)0x0) ||
             (lVar27 = func_0x00f78adc(plVar21,*(undefined8 *)(*plVar20 + 0x40)), lVar27 != 0)) {
            plVar22 = plVar21;
            if ((int)plVar20[3] != 0) {
              plVar20[4] = (long)plVar21;
              plVar22 = (long *)func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
              plVar14 = plVar20;
              /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(plVar22,uVar15,plVar20,0);
              if ((plVar22 != (long *)0x0) &&
                 (uVar17 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar22,uRam0000000003d577e0), uVar17 != 0)) {
                /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar17,0,0);
                /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar17,0,0);
                /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar17,0,0);
                /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar17,0,0);
                /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
                /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar17,0);
                plVar14 = (long *)0x0;
                /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar17,2);
                lVar27 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar17,0);
                uVar15 = uVar17;
                if (lVar27 != 0) {
                  *(undefined4 *)(lVar27 + 0x1c) = 0;
                  *(undefined4 *)(lVar27 + 0x20) = 0;
                  /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar27,0,0);
                  /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar27,0,0);
                  *(undefined1 *)(lVar27 + 0x18) = 0;
                  *(undefined1 *)(lVar27 + 0x44) = 0;
                  *(undefined4 *)(lVar27 + 0x48) = 0;
                  return uVar17;
                }
              }
              goto code_r0x0163b494;
            }
            goto code_r0x0163b498;
          }
          uVar16 = func_0x00f78b14();
        }
        auVar4._8_8_ = uVar15;
        auVar4._0_8_ = plVar20;
        auVar43 = func_0x00f78ac0(uVar16,0);
        uVar17 = auVar43._8_8_;
        lVar27 = auVar43._0_8_;
        *(undefined8 **)((long)pplVar10 + -0x110) = unaff_x24;
        *(undefined8 *)((long)pplVar10 + -0x108) = 0x3d1f578;
        *(undefined8 *)((long)pplVar10 + -0x100) = 0x3d25458;
        *(long **)((long)pplVar10 + -0xf8) = plVar21;
        *(long **)((long)pplVar10 + -0xf0) = plVar20;
        *(ulong *)((long)pplVar10 + -0xe8) = uVar15;
        *(undefined1 **)((long)pplVar10 + -0xe0) = (undefined1 *)((long)pplVar10 + -0xa0);
        *(undefined **)((long)pplVar10 + -0xd8) =
             &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
        plVar22 = plVar14;
        ppuVar32 = (undefined1 **)0x3d25458;
        unaff_x23 = 0x3d1f578;
        if (((lVar27 != 0) &&
            (ppuVar23 = (undefined1 **)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar27,0), plVar21 = plVar14,
            auVar4 = auVar43, uVar17 != 0)) &&
           (lVar28 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar17,0), ppuVar32 = ppuVar23, unaff_x23 = 0x3d1f578,
           ppuVar23 != (undefined1 **)0x0)) {
          /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(ppuVar23,0);
          unaff_x23 = 0;
          if (lVar28 != 0) {
            /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar28,0);
            /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(ppuVar23,0);
            /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar28,0);
            /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(ppuVar23,0);
            /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar28,0);
            /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar27,0);
            uVar15 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(uVar17,0);
            if (((ulong)plVar14 & 1) != 0) {
              return uVar15;
            }
            /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar27,0);
            /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(uVar17,0);
            /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar27,0);
            uVar16 = *(undefined8 *)((long)pplVar10 + -0xe0);
            uVar35 = *(undefined8 *)((long)pplVar10 + -0xd8);
            uVar24 = *(undefined8 *)((long)pplVar10 + -0xf0);
            uVar29 = *(undefined8 *)((long)pplVar10 + -0xe8);
            puVar11 = (undefined1 *)((long)pplVar10 + -0xd0);
            uVar36 = extraout_b0_00;
            goto UnityEngine_Camera__set_farClipPlane;
          }
        }
        uVar17 = func_0x00f78af4();
        puVar12 = (undefined1 *)((long)pplVar10 + -0x130);
        *(undefined1 (*) [16])((long)pplVar10 + -0x130) = auVar4;
        *(undefined1 **)((long)pplVar10 + -0x120) = (undefined1 *)((long)pplVar10 + -0xe0);
        *(undefined **)((long)pplVar10 + -0x118) =
             &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
        ppuVar23 = (undefined1 **)((long)pplVar10 + -0x120);
        if (uVar17 != 0) {
          lVar27 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar17,0);
          /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar17;
          auVar4 = auVar5 << 0x40;
          if (lVar27 != 0) {
            /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar27,0);
            /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
            /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar27,0);
            /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
            /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar27,0);
            /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0,uVar17,0);
            /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc((char)_UNK_033f83fc,uVar17,0);
            uVar36 = 0;
            uVar16 = *(undefined8 *)((long)pplVar10 + -0x120);
            uVar35 = *(undefined8 *)((long)pplVar10 + -0x118);
            puVar11 = (undefined1 *)((long)pplVar10 + -0x110);
            uVar24 = *(undefined8 *)((long)pplVar10 + -0x130);
            uVar29 = *(undefined8 *)((long)pplVar10 + -0x128);
UnityEngine_Camera__set_farClipPlane:
            *(undefined8 *)(puVar11 + -0x30) = unaff_d9;
            *(ulong *)(puVar11 + -0x28) = (ulong)uVar2;
            *(undefined8 *)(puVar11 + -0x20) = uVar24;
            *(undefined8 *)(puVar11 + -0x18) = uVar29;
            *(undefined8 *)(puVar11 + -0x10) = uVar16;
            *(undefined8 *)(puVar11 + -8) = uVar35;
            if (pcRam0000000003ebead0 == (code *)0x0) {
              pcRam0000000003ebead0 =
                   (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
            }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar15 = (*pcRam0000000003ebead0)(uVar36,uVar17);
            return uVar15;
          }
        }
        puVar34 = &Core_Cameras_CameraManager__ApplySettings;
        auVar44 = func_0x00f78af4();
        goto code_r0x0163b65c;
      }
      *(uint *)(lVar25 + (long)(int)(uint)uVar17 * 4 + 0x20) = uVar2;
      if ((int)uVar15 == 0) {
        return uVar18;
      }
      ppuVar32 = *(undefined1 ***)((long)pplVar10 + -0x30);
      pcVar30 = *(code **)((long)pplVar10 + -0x28);
      unaff_x24 = *(undefined8 **)((long)pplVar10 + -0x40);
      unaff_x23 = *(undefined8 *)((long)pplVar10 + -0x38);
      unaff_x26 = *(ulong *)((long)pplVar10 + -0x50);
      unaff_x25 = *(long *)((long)pplVar10 + -0x48);
      unaff_d9 = *(undefined8 *)((long)pplVar10 + -0x60);
      unaff_d8 = *(undefined8 *)((long)pplVar10 + -0x58);
      puVar12 = (undefined1 *)((long)pplVar10 + -0x50);
      *(undefined1 ***)((long)pplVar10 + -0x30) = ppuVar32;
      *(code **)((long)pplVar10 + -0x28) = pcVar30;
      *(undefined8 *)((long)pplVar10 + -0x20) = *(undefined8 *)((long)pplVar10 + -0x20);
      *(undefined8 *)((long)pplVar10 + -0x18) = *(undefined8 *)((long)pplVar10 + -0x18);
      *(undefined8 *)((long)pplVar10 + -0x10) = *(undefined8 *)((long)pplVar10 + -0x10);
      *(undefined8 *)((long)pplVar10 + -8) = *(undefined8 *)((long)pplVar10 + -8);
      ppuVar23 = (undefined1 **)((long)pplVar10 + -0x10);
      uVar16 = 0x3eb5000;
      uVar15 = uVar19;
      if ((bRam0000000003eb56d0 & 1) == 0) {
        func_0x00f78a20(0x3d33348);
        func_0x00f78a20(0x3d33350);
        func_0x00f78a20(0x3d33358);
        func_0x00f78a20(0x3d3ce20);
        bRam0000000003eb56d0 = 1;
        uVar15 = uVar19;
      }
      *(undefined8 *)((long)pplVar10 + -0x48) = 0;
      *(undefined8 *)((long)pplVar10 + -0x50) = 0;
      *(undefined8 *)((long)pplVar10 + -0x38) = 0;
      *(undefined8 *)((long)pplVar10 + -0x40) = 0;
      if (*(long *)(lVar28 + 0x28) != 0) goto code_r0x0163af50;
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar14 = (long *)___cxa_begin_catch();
        lVar28 = *plVar14;
        ___cxa_end_catch();
        uVar17 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)pplVar10 + -0x50),uRam0000000003eb5000);
        if (lVar28 == 0) {
          return uVar17;
        }
        func_0x00f78ac0(lVar28,0);
      }
      puVar34 = &Core_Cameras_CameraManager__UpdateLayerSettings;
      auVar43 = __Unwind_Resume();
      pplVar10 = (long **)((long)pplVar10 + -0x50);
      lVar27 = lVar28;
      uVar36 = extraout_b0;
      uVar37 = extraout_var;
      uVar38 = extraout_var_00;
      uVar39 = extraout_var_01;
    } while( true );
  }
  lVar28 = func_0x00f78af4();
  ppuStack_a0 = ppuVar32;
  uStack_98 = pcVar30;
  uStack_90 = 0x3eb4000;
  pcStack_78 = Atlas_Settings_AtlasQualitySettings__UpdateClearCameraSettings;
  pppuVar33 = &ppuStack_80;
  lStack_88 = lVar27;
  ppuStack_80 = ppuVar23;
  if ((bRam0000000003eb480b & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb480b = 1;
  }
  uVar16 = *(undefined8 *)(lVar28 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
  if ((int)uVar15 == 0) {
    return uVar15;
  }
  iStack_a4 = 0;
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(lVar28 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(lVar28 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x68),&iStack_a4,0);
  }
  lVar27 = *(long *)(lVar28 + 0x30);
  /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  if (lVar27 != 0) {
    uVar15 = /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar27,0);
    if (iStack_a4 == 2) {
      if (*(long *)(lVar28 + 0x30) != 0) {
        /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(*(long *)(lVar28 + 0x30),2,0);
        lVar27 = *(long *)(lVar28 + 0x30);
        /*UnityEngine.Color$$get_magenta*/ func_0x03223600(0);
        if (lVar27 != 0) {
          uVar15 = /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar27,0);
          return uVar15;
        }
      }
    }
    else if (iStack_a4 == 1) {
      lVar27 = *(long *)(lVar28 + 0x30);
      if (lVar27 != 0) {
        uVar16 = 2;
        goto LAB_0145fa20;
      }
    }
    else {
      if (iStack_a4 != 0) {
        return uVar15;
      }
      lVar27 = *(long *)(lVar28 + 0x30);
      if (lVar27 != 0) {
        uVar16 = 4;
LAB_0145fa20:
        uVar15 = /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(lVar27,uVar16,0);
        return uVar15;
      }
    }
  }
  uVar15 = func_0x00f78af4();
  pcStack_b8 = Atlas_Settings_AtlasQualitySettings__ApplyOutlinesSettings;
  if ((bRam0000000003eb4806 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4806 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar8 = auStack_b0;
  if (*(long *)(uVar15 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar15 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x150),uVar15 + 0x68,0)
    ;
    puVar8 = auStack_b0;
    if (*(long *)(uVar15 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar15 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x158),uVar15 + 100,0
                     );
      puVar8 = auStack_b0;
    }
  }
  do {
    pppuVar9 = (undefined1 ***)(puVar8 + -0x10);
    *(undefined1 ****)(puVar8 + -0x10) = pppuVar33;
    *(code **)(puVar8 + -8) = pcStack_b8;
    lVar27 = *(long *)(uVar15 + 0xb0);
    if (*(char *)(uVar15 + 0x6c) == '\0') {
      if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x20), lVar27 != 0)) {
        puVar26 = (undefined4 *)(uVar15 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x20), lVar27 != 0)) {
      puVar26 = (undefined4 *)(uVar15 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar27 + 0x2c) = *puVar26;
      return uVar15;
    }
    pcStack_b8 = Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    uVar15 = func_0x00f78af4();
    *(undefined1 *)(uVar15 + 0x6c) = 0;
    puVar8 = puVar8 + -0x10;
    pppuVar33 = pppuVar9;
  } while( true );
code_r0x0163af50:
  plVar21 = (long *)0x3d33350;
  auVar4._8_8_ = lVar28;
  auVar4._0_8_ = 0x3d33348;
  /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564((undefined1 *)((long)pplVar10 + -0x50),*(long *)(lVar28 + 0x28),
                  uRam0000000003d3ce20);
  uVar15 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0((undefined1 *)((long)pplVar10 + -0x50),uRam0000000003d33350);
  if ((uVar15 & 1) == 0) {
    uVar15 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)pplVar10 + -0x50),uRam0000000003d33348);
    return uVar15;
  }
  auVar44._8_8_ = *(undefined8 *)((long)pplVar10 + -0x40);
  auVar44._0_8_ = lVar28;
  plVar22 = *(long **)((long)pplVar10 + -0x38);
  puVar34 = &UNK_0163af90;
code_r0x0163b65c:
  uVar15 = auVar44._0_8_;
  auVar6._8_8_ = plVar22;
  auVar6._0_8_ = uVar15;
  *(undefined1 ***)(puVar12 + -0x30) = ppuVar32;
  *(long **)(puVar12 + -0x28) = plVar21;
  *(undefined1 (*) [16])(puVar12 + -0x20) = auVar4;
  *(undefined1 ***)(puVar12 + -0x10) = ppuVar23;
  *(undefined **)(puVar12 + -8) = puVar34;
  if (plVar22 != (long *)0x0) {
    uVar17 = uVar15;
    if (0 < (int)plVar22[3]) {
      plVar21 = (long *)0x0;
      plVar14 = (long *)(plVar22[3] & 0xffffffff);
      ppuVar32 = (undefined1 **)(plVar22 + 4);
      do {
        if (plVar14 <= plVar21) {
          uVar16 = func_0x00f78b24(auVar44._0_8_,auVar44._8_8_);
          func_0x00f78ac0(uVar16,0);
          auVar4 = auVar6;
          goto code_r0x0163b6d0;
        }
        auVar44 = /*Core.Cameras.CameraManager$$ApplySettings*/ func_0x0163a77c(uVar15,ppuVar32[(long)plVar21]);
        uVar17 = auVar44._0_8_;
        plVar21 = (long *)((long)plVar21 + 1);
        plVar14 = (long *)(ulong)*(uint *)(plVar22 + 3);
      } while ((long)plVar21 < (long)(int)*(uint *)(plVar22 + 3));
    }
    return uVar17;
  }
code_r0x0163b6d0:
  uVar15 = func_0x00f78af4();
  *(ulong *)(puVar12 + -0x80) = unaff_x26;
  *(long *)(puVar12 + -0x78) = unaff_x25;
  *(undefined8 **)(puVar12 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar12 + -0x68) = unaff_x23;
  *(undefined1 ***)(puVar12 + -0x60) = ppuVar32;
  *(long **)(puVar12 + -0x58) = plVar21;
  *(undefined1 (*) [16])(puVar12 + -0x50) = auVar4;
  *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x38) = &Core_Cameras_CameraManager___ctor;
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar16 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar16,uRam0000000003d3ce08);
  *(undefined8 *)(uVar15 + 0x28) = uVar16;
  uVar16 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar16,uRam0000000003d3ce40);
  *(undefined8 *)(uVar15 + 0x38) = uVar16;
  uVar16 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(uVar15 + 0x40) = uVar16;
  return uVar15;
}



// ============================================================
// RVA: 0x145fd40 | Atlas.Settings.AtlasQualitySettings.ApplyCullingSettings
// ============================================================

/* WARNING: Possible PIC construction at 0x0145f7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145f88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145f890) */
/* WARNING: Removing unreachable block (ram,0x0145f898) */
/* WARNING: Removing unreachable block (ram,0x0145f8bc) */
/* WARNING: Removing unreachable block (ram,0x0145f848) */
/* WARNING: Removing unreachable block (ram,0x0145f850) */
/* WARNING: Removing unreachable block (ram,0x0145f874) */
/* WARNING: Removing unreachable block (ram,0x0145f800) */
/* WARNING: Removing unreachable block (ram,0x0145f808) */
/* WARNING: Removing unreachable block (ram,0x0145f82c) */
/* WARNING: Removing unreachable block (ram,0x0145f7b8) */
/* WARNING: Removing unreachable block (ram,0x0145f7c0) */
/* WARNING: Removing unreachable block (ram,0x0145f7e4) */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Settings_AtlasQualitySettings__ApplyCullingSettings(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int extraout_w1;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 unaff_x21;
  uint uVar27;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar28;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined1 *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined1 uVar32;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar33;
  undefined1 extraout_var;
  undefined1 uVar34;
  undefined1 extraout_var_00;
  undefined1 uVar35;
  undefined1 extraout_var_01;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  long lStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [12];
  int aiStack_54 [5];
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puVar9;
  
  if ((bRam0000000003eb4808 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4808 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x198),param_1 + 0x3c,0
                   );
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1a0),param_1 + 0x40
                      ,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1a8),
                        param_1 + 0x44,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                          *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1b0),
                          param_1 + 0x48,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1b8),
                            param_1 + 0x4c,0);
            if (*(long *)(param_1 + 0x10) != 0) {
              /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(param_1 + 0x10),
                              *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 400),
                              *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1c0),
                              param_1 + 0x50,0);
            }
          }
        }
      }
    }
  }
  puVar29 = &stack0xfffffffffffffff0;
  uVar26 = 0x3eb4000;
  if ((bRam0000000003eb480a & 1) == 0) {
    func_0x00f78a20(0x3d6fcc8);
    func_0x00f78a20(0x3d6fcb8);
    func_0x00f78a20(0x3d72de0);
    func_0x00f78a20(0x3d6ccb0);
    func_0x00f78a20(0x3d70190);
    func_0x00f78a20(0x3d701a0);
    func_0x00f78a20(0x3d76438);
    func_0x00f78a20(0x3d68fd0);
    bRam0000000003eb480a = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  /*Core.Cameras.CameraManager$$SetPPAAType*/ func_0x0163aed4(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38),0,0);
  auVar39._8_8_ = /*STR('NearCulling')*/ uRam0000000003d70190;
  auVar39._0_8_ = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar32 = (undefined1)uVar3;
    uVar33 = (undefined1)((uint)uVar3 >> 8);
    uVar34 = (undefined1)((uint)uVar3 >> 0x10);
    uVar35 = (undefined1)((uint)uVar3 >> 0x18);
    uVar21 = 0;
    puVar30 = (undefined *)0x145f7b8;
    puVar8 = &stack0xffffffffffffffe0;
    do {
      uVar20 = auVar39._8_8_;
      lVar24 = auVar39._0_8_;
      *(undefined8 *)(puVar8 + -0x60) = unaff_d9;
      *(undefined8 *)(puVar8 + -0x58) = unaff_d8;
      *(ulong *)(puVar8 + -0x50) = unaff_x26;
      *(long *)(puVar8 + -0x48) = unaff_x25;
      *(undefined8 **)(puVar8 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
      *(long **)(puVar8 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar8 + -0x20) = uVar26;
      *(long *)(puVar8 + -0x18) = param_1;
      *(undefined1 **)(puVar8 + -0x10) = puVar29;
      *(undefined **)(puVar8 + -8) = puVar30;
      uVar2 = CONCAT13(uVar35,CONCAT12(uVar34,CONCAT11(uVar33,uVar32)));
      if ((bRam0000000003eb56cb & 1) == 0) {
        func_0x00f78a20(0x3d3ce48);
        func_0x00f78a20(0x3d3ce50);
        func_0x00f78a20(0x3d3ce58);
        func_0x00f78a20(0x3d3ce60);
        bRam0000000003eb56cb = 1;
      }
      lVar28 = *(long *)(lVar24 + 0x38);
      puVar7 = unaff_x24;
      if (lVar28 != 0) {
        unaff_x25 = 0;
        uVar14 = 0;
        unaff_x24 = (undefined8 *)0x3d3ce48;
        do {
          uVar27 = (uint)uVar14;
          if ((int)*(uint *)(lVar28 + 0x18) <= (int)uVar27) goto code_r0x0163b0d4;
          if (*(uint *)(lVar28 + 0x18) <= uVar27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar22 = *(long *)(lVar28 + 0x10) + unaff_x25;
          lVar28 = *(long *)(lVar22 + 0x20);
          puVar7 = unaff_x24;
          if (lVar28 == 0) break;
          uVar1 = *(uint *)(lVar22 + 0x28);
          unaff_x26 = (ulong)uVar1;
          iVar12 = /*System.String$$Equals*/ func_0x029caa48(lVar28,uVar20,5,0);
          if (iVar12 != 0) {
            puVar7 = (undefined8 *)0x3d3ce48;
            if (*(long *)(lVar24 + 0x38) != 0) {
              uVar16 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$set_Item*/ func_0x025041d4(*(long *)(lVar24 + 0x38),uVar14,lVar28,CONCAT44(uVar2,uVar1),
                                       uRam0000000003d3ce60);
              lVar22 = *(long *)(lVar24 + 0x40);
              if (lVar22 != 0) {
                if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar22 + ((long)(unaff_x26 << 0x20) >> 0x1e) + 0x20) = uVar2;
                  return uVar16;
                }
                goto code_r0x0163b1ac;
              }
            }
            break;
          }
          uVar14 = (ulong)(uVar27 + 1);
          lVar28 = *(long *)(lVar24 + 0x38);
          unaff_x25 = unaff_x25 + 0x10;
        } while (lVar28 != 0);
      }
      do {
        do {
          unaff_x24 = puVar7;
          func_0x00f78af4();
code_r0x0163b0d4:
          uVar14 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(uVar20,0);
          puVar7 = unaff_x24;
        } while (*(long *)(lVar24 + 0x38) == 0);
        uVar16 = uVar14 & 0xffffffff | (ulong)uVar2 << 0x20;
        uVar15 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$Add*/ func_0x02504530(*(long *)(lVar24 + 0x38),uVar20,uVar16,*unaff_x24);
        lVar22 = *(long *)(lVar24 + 0x40);
      } while (lVar22 == 0);
      if (*(uint *)(lVar22 + 0x18) <= (uint)uVar14) {
code_r0x0163b1ac:
        uVar26 = func_0x00f78b24();
        auVar39 = func_0x00f78ac0(uVar26,0);
        lVar22 = auVar39._0_8_;
        *(ulong *)(puVar8 + -0x90) = uVar14;
        *(undefined8 *)(puVar8 + -0x88) = uVar20;
        *(ulong *)(puVar8 + -0x80) = uVar21;
        *(long *)(puVar8 + -0x78) = lVar24;
        *(undefined1 **)(puVar8 + -0x70) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x68) = &Core_Cameras_CameraManager__SetCameraViewport;
        if ((bRam0000000003eb56cc & 1) == 0) {
          func_0x00f78a20(0x3d204e0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb56cc = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar13 = (long *)0x0;
        uVar21 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar22,0);
        if ((uVar21 & 1) != 0) {
          return uVar21;
        }
        if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar24 = **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8);
        if (lVar24 == 0) {
code_r0x0163b2a4:
          func_0x00f78af4();
        }
        else if (auVar39._8_4_ < *(uint *)(lVar24 + 0x18)) {
          if (lVar22 != 0) {
            lVar24 = lVar24 + (long)(int)auVar39._8_4_ * 0x10;
            uVar37 = *(undefined4 *)(lVar24 + 0x28);
            uVar38 = *(undefined4 *)(lVar24 + 0x2c);
            uVar3 = *(undefined4 *)(lVar24 + 0x20);
            uVar36 = *(undefined4 *)(lVar24 + 0x24);
            *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0x80);
            *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0x78);
            *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x70);
            *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x68);
            *(undefined4 *)(puVar8 + -0x90) = uVar3;
            *(undefined4 *)(puVar8 + -0x8c) = uVar36;
            *(undefined4 *)(puVar8 + -0x88) = uVar37;
            *(undefined4 *)(puVar8 + -0x84) = uVar38;
            if (pcRam0000000003ebeed8 == (code *)0x0) {
              pcRam0000000003ebeed8 =
                   (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)"
                                           ,0);
            }
            uVar21 = (*pcRam0000000003ebeed8)(lVar22,puVar8 + -0x90);
            return uVar21;
          }
          goto code_r0x0163b2a4;
        }
        uVar26 = func_0x00f78b24();
        uVar21 = func_0x00f78ac0(uVar26,0);
        *(undefined8 **)(puVar8 + -0xd0) = unaff_x24;
        *(long *)(puVar8 + -200) = lVar28;
        *(undefined8 *)(puVar8 + -0xc0) = 0x3d23990;
        *(undefined8 *)(puVar8 + -0xb8) = 0x3d204e0;
        *(long *)(puVar8 + -0xb0) = auVar39._8_8_;
        *(long *)(puVar8 + -0xa8) = lVar22;
        *(undefined1 **)(puVar8 + -0xa0) = puVar8 + -0x70;
        *(undefined **)(puVar8 + -0x98) = &Core_Cameras_CameraManager__CreateCamera;
        if ((bRam0000000003eb56cd & 1) == 0) {
          func_0x00f78a20(0x3d19110);
          func_0x00f78a20(0x3d577e0);
          func_0x00f78a20(0x3d21b60);
          func_0x00f78a20(0x3d1f578);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb56cd = 1;
        }
        plVar17 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
        plVar19 = /*UnityEngine.Camera_var*/ plRam0000000003d19110;
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar18 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar19,0);
        if (plVar17 == (long *)0x0) {
code_r0x0163b494:
          func_0x00f78af4();
code_r0x0163b498:
          uVar26 = func_0x00f78b24();
          plVar18 = plVar19;
        }
        else {
          if ((plVar18 == (long *)0x0) ||
             (lVar24 = func_0x00f78adc(plVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar24 != 0)) {
            plVar19 = plVar18;
            if ((int)plVar17[3] != 0) {
              plVar17[4] = (long)plVar18;
              plVar19 = (long *)func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
              plVar13 = plVar17;
              /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(plVar19,uVar21,plVar17,0);
              if ((plVar19 != (long *)0x0) &&
                 (uVar14 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar19,uRam0000000003d577e0), uVar14 != 0)) {
                /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar14,0,0);
                /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar14,0,0);
                /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar14,0,0);
                /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar14,0,0);
                /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
                /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar14,0);
                plVar13 = (long *)0x0;
                /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar14,2);
                lVar24 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar14,0);
                uVar21 = uVar14;
                if (lVar24 != 0) {
                  *(undefined4 *)(lVar24 + 0x1c) = 0;
                  *(undefined4 *)(lVar24 + 0x20) = 0;
                  /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar24,0,0);
                  /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar24,0,0);
                  *(undefined1 *)(lVar24 + 0x18) = 0;
                  *(undefined1 *)(lVar24 + 0x44) = 0;
                  *(undefined4 *)(lVar24 + 0x48) = 0;
                  return uVar14;
                }
              }
              goto code_r0x0163b494;
            }
            goto code_r0x0163b498;
          }
          uVar26 = func_0x00f78b14();
        }
        auVar4._8_8_ = uVar21;
        auVar4._0_8_ = plVar17;
        auVar39 = func_0x00f78ac0(uVar26,0);
        uVar14 = auVar39._8_8_;
        lVar24 = auVar39._0_8_;
        *(undefined8 **)(puVar8 + -0x110) = unaff_x24;
        *(undefined8 *)(puVar8 + -0x108) = 0x3d1f578;
        *(undefined8 *)(puVar8 + -0x100) = 0x3d25458;
        *(long **)(puVar8 + -0xf8) = plVar18;
        *(long **)(puVar8 + -0xf0) = plVar17;
        *(ulong *)(puVar8 + -0xe8) = uVar21;
        *(undefined1 **)(puVar8 + -0xe0) = puVar8 + -0xa0;
        *(undefined **)(puVar8 + -0xd8) = &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
        plVar19 = plVar13;
        unaff_x22 = (long *)0x3d25458;
        unaff_x23 = 0x3d1f578;
        if (((lVar24 != 0) &&
            (plVar17 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar24,0), plVar18 = plVar13, auVar4 = auVar39,
            uVar14 != 0)) &&
           (lVar28 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar14,0), unaff_x22 = plVar17, unaff_x23 = 0x3d1f578,
           plVar17 != (long *)0x0)) {
          /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(plVar17,0);
          unaff_x23 = 0;
          if (lVar28 != 0) {
            /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar28,0);
            /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar17,0);
            /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar28,0);
            /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(plVar17,0);
            /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar28,0);
            /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar24,0);
            uVar21 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(uVar14,0);
            if (((ulong)plVar13 & 1) != 0) {
              return uVar21;
            }
            /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar24,0);
            /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(uVar14,0);
            /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar24,0);
            uVar26 = *(undefined8 *)(puVar8 + -0xe0);
            uVar31 = *(undefined8 *)(puVar8 + -0xd8);
            uVar20 = *(undefined8 *)(puVar8 + -0xf0);
            uVar25 = *(undefined8 *)(puVar8 + -0xe8);
            puVar10 = puVar8 + -0xd0;
            uVar32 = extraout_b0_00;
            goto UnityEngine_Camera__set_farClipPlane;
          }
        }
        uVar14 = func_0x00f78af4();
        puVar11 = puVar8 + -0x130;
        *(undefined1 (*) [16])(puVar8 + -0x130) = auVar4;
        *(undefined1 **)(puVar8 + -0x120) = puVar8 + -0xe0;
        *(undefined **)(puVar8 + -0x118) = &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
        puVar29 = puVar8 + -0x120;
        if (uVar14 != 0) {
          lVar24 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar14,0);
          /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar14;
          auVar4 = auVar5 << 0x40;
          if (lVar24 != 0) {
            /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar24,0);
            /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
            /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar24,0);
            /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
            /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar24,0);
            /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0,uVar14,0);
            /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc((char)_UNK_033f83fc,uVar14,0);
            uVar32 = 0;
            uVar26 = *(undefined8 *)(puVar8 + -0x120);
            uVar31 = *(undefined8 *)(puVar8 + -0x118);
            puVar10 = puVar8 + -0x110;
            uVar20 = *(undefined8 *)(puVar8 + -0x130);
            uVar25 = *(undefined8 *)(puVar8 + -0x128);
UnityEngine_Camera__set_farClipPlane:
            *(undefined8 *)(puVar10 + -0x30) = unaff_d9;
            *(ulong *)(puVar10 + -0x28) = (ulong)uVar2;
            *(undefined8 *)(puVar10 + -0x20) = uVar20;
            *(undefined8 *)(puVar10 + -0x18) = uVar25;
            *(undefined8 *)(puVar10 + -0x10) = uVar26;
            *(undefined8 *)(puVar10 + -8) = uVar31;
            if (pcRam0000000003ebead0 == (code *)0x0) {
              pcRam0000000003ebead0 =
                   (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
            }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar21 = (*pcRam0000000003ebead0)(uVar32,uVar14);
            return uVar21;
          }
        }
        puVar30 = &Core_Cameras_CameraManager__ApplySettings;
        auVar40 = func_0x00f78af4();
        goto code_r0x0163b65c;
      }
      *(uint *)(lVar22 + (long)(int)(uint)uVar14 * 4 + 0x20) = uVar2;
      if ((int)uVar21 == 0) {
        return uVar15;
      }
      unaff_x22 = *(long **)(puVar8 + -0x30);
      unaff_x21 = *(undefined8 *)(puVar8 + -0x28);
      unaff_x24 = *(undefined8 **)(puVar8 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar8 + -0x38);
      unaff_x26 = *(ulong *)(puVar8 + -0x50);
      unaff_x25 = *(long *)(puVar8 + -0x48);
      unaff_d9 = *(undefined8 *)(puVar8 + -0x60);
      unaff_d8 = *(undefined8 *)(puVar8 + -0x58);
      puVar11 = puVar8 + -0x50;
      *(long **)(puVar8 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
      *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
      *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
      puVar29 = puVar8 + -0x10;
      uVar26 = 0x3eb5000;
      uVar21 = uVar16;
      if ((bRam0000000003eb56d0 & 1) == 0) {
        func_0x00f78a20(0x3d33348);
        func_0x00f78a20(0x3d33350);
        func_0x00f78a20(0x3d33358);
        func_0x00f78a20(0x3d3ce20);
        bRam0000000003eb56d0 = 1;
        uVar21 = uVar16;
      }
      *(undefined8 *)(puVar8 + -0x48) = 0;
      *(undefined8 *)(puVar8 + -0x50) = 0;
      *(undefined8 *)(puVar8 + -0x38) = 0;
      *(undefined8 *)(puVar8 + -0x40) = 0;
      if (*(long *)(lVar24 + 0x28) != 0) goto code_r0x0163af50;
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar13 = (long *)___cxa_begin_catch();
        lVar24 = *plVar13;
        ___cxa_end_catch();
        uVar14 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(puVar8 + -0x50,uRam0000000003eb5000);
        if (lVar24 == 0) {
          return uVar14;
        }
        func_0x00f78ac0(lVar24,0);
      }
      puVar30 = &Core_Cameras_CameraManager__UpdateLayerSettings;
      auVar39 = __Unwind_Resume();
      puVar8 = puVar8 + -0x50;
      param_1 = lVar24;
      uVar32 = extraout_b0;
      uVar33 = extraout_var;
      uVar34 = extraout_var_00;
      uVar35 = extraout_var_01;
    } while( true );
  }
  lVar24 = func_0x00f78af4();
  uStack_40 = 0x3eb4000;
  puVar29 = &stack0xffffffffffffffd0;
  lStack_38 = param_1;
  if ((bRam0000000003eb480b & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb480b = 1;
  }
  uVar26 = *(undefined8 *)(lVar24 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar21 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar26,0,0);
  if ((int)uVar21 == 0) {
    return uVar21;
  }
  aiStack_54[0] = 0;
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(lVar24 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(lVar24 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x68),aiStack_54,0);
  }
  lVar28 = *(long *)(lVar24 + 0x30);
  /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  if (lVar28 != 0) {
    uVar21 = /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar28,0);
    if (aiStack_54[0] == 2) {
      if (*(long *)(lVar24 + 0x30) != 0) {
        /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(*(long *)(lVar24 + 0x30),2,0);
        lVar24 = *(long *)(lVar24 + 0x30);
        /*UnityEngine.Color$$get_magenta*/ func_0x03223600(0);
        if (lVar24 != 0) {
          uVar21 = /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar24,0);
          return uVar21;
        }
      }
    }
    else if (aiStack_54[0] == 1) {
      lVar24 = *(long *)(lVar24 + 0x30);
      if (lVar24 != 0) {
        uVar26 = 2;
        goto LAB_0145fa20;
      }
    }
    else {
      if (aiStack_54[0] != 0) {
        return uVar21;
      }
      lVar24 = *(long *)(lVar24 + 0x30);
      if (lVar24 != 0) {
        uVar26 = 4;
LAB_0145fa20:
        uVar21 = /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(lVar24,uVar26,0);
        return uVar21;
      }
    }
  }
  uVar21 = func_0x00f78af4();
  pcStack_68 = Atlas_Settings_AtlasQualitySettings__ApplyOutlinesSettings;
  if ((bRam0000000003eb4806 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4806 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar8 = auStack_60;
  if (*(long *)(uVar21 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar21 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x150),uVar21 + 0x68,0)
    ;
    puVar8 = auStack_60;
    if (*(long *)(uVar21 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar21 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x158),uVar21 + 100,0
                     );
      puVar8 = auStack_60;
    }
  }
  do {
    puVar9 = puVar8 + -0x10;
    *(undefined1 **)(puVar8 + -0x10) = puVar29;
    *(code **)(puVar8 + -8) = pcStack_68;
    lVar24 = *(long *)(uVar21 + 0xb0);
    if (*(char *)(uVar21 + 0x6c) == '\0') {
      if ((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x20), lVar24 != 0)) {
        puVar23 = (undefined4 *)(uVar21 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x20), lVar24 != 0)) {
      puVar23 = (undefined4 *)(uVar21 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar24 + 0x2c) = *puVar23;
      return uVar21;
    }
    pcStack_68 = Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    uVar21 = func_0x00f78af4();
    *(undefined1 *)(uVar21 + 0x6c) = 0;
    puVar8 = puVar8 + -0x10;
    puVar29 = puVar9;
  } while( true );
code_r0x0163af50:
  plVar18 = (long *)0x3d33350;
  auVar4._8_8_ = lVar24;
  auVar4._0_8_ = 0x3d33348;
  /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564(puVar8 + -0x50,*(long *)(lVar24 + 0x28),uRam0000000003d3ce20);
  uVar21 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0(puVar8 + -0x50,uRam0000000003d33350);
  if ((uVar21 & 1) == 0) {
    uVar21 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(puVar8 + -0x50,uRam0000000003d33348);
    return uVar21;
  }
  auVar40._8_8_ = *(undefined8 *)(puVar8 + -0x40);
  auVar40._0_8_ = lVar24;
  plVar19 = *(long **)(puVar8 + -0x38);
  puVar30 = &UNK_0163af90;
code_r0x0163b65c:
  uVar21 = auVar40._0_8_;
  auVar6._8_8_ = plVar19;
  auVar6._0_8_ = uVar21;
  *(long **)(puVar11 + -0x30) = unaff_x22;
  *(long **)(puVar11 + -0x28) = plVar18;
  *(undefined1 (*) [16])(puVar11 + -0x20) = auVar4;
  *(undefined1 **)(puVar11 + -0x10) = puVar29;
  *(undefined **)(puVar11 + -8) = puVar30;
  if (plVar19 != (long *)0x0) {
    uVar14 = uVar21;
    if (0 < (int)plVar19[3]) {
      plVar18 = (long *)0x0;
      plVar13 = (long *)(plVar19[3] & 0xffffffff);
      unaff_x22 = plVar19 + 4;
      do {
        if (plVar13 <= plVar18) {
          uVar26 = func_0x00f78b24(auVar40._0_8_,auVar40._8_8_);
          func_0x00f78ac0(uVar26,0);
          auVar4 = auVar6;
          goto code_r0x0163b6d0;
        }
        auVar40 = /*Core.Cameras.CameraManager$$ApplySettings*/ func_0x0163a77c(uVar21,unaff_x22[(long)plVar18]);
        uVar14 = auVar40._0_8_;
        plVar18 = (long *)((long)plVar18 + 1);
        plVar13 = (long *)(ulong)*(uint *)(plVar19 + 3);
      } while ((long)plVar18 < (long)(int)*(uint *)(plVar19 + 3));
    }
    return uVar14;
  }
code_r0x0163b6d0:
  uVar21 = func_0x00f78af4();
  *(ulong *)(puVar11 + -0x80) = unaff_x26;
  *(long *)(puVar11 + -0x78) = unaff_x25;
  *(undefined8 **)(puVar11 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar11 + -0x68) = unaff_x23;
  *(long **)(puVar11 + -0x60) = unaff_x22;
  *(long **)(puVar11 + -0x58) = plVar18;
  *(undefined1 (*) [16])(puVar11 + -0x50) = auVar4;
  *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
  *(undefined **)(puVar11 + -0x38) = &Core_Cameras_CameraManager___ctor;
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar26 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar26,uRam0000000003d3ce08);
  *(undefined8 *)(uVar21 + 0x28) = uVar26;
  uVar26 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar26,uRam0000000003d3ce40);
  *(undefined8 *)(uVar21 + 0x38) = uVar26;
  uVar26 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(uVar21 + 0x40) = uVar26;
  return uVar21;
}



// ============================================================
// RVA: 0x145fe7c | Atlas.Settings.AtlasQualitySettings.ApplyDebugSettings
// ============================================================

void Atlas_Settings_AtlasQualitySettings__ApplyDebugSettings(void)

{
  return;
}



// ============================================================
// RVA: 0x145fe80 | Atlas.Settings.AtlasQualitySettings.SetDrawOutlinesAfterTransparencyPass
// ============================================================

/* WARNING: Possible PIC construction at 0x0168e824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e828) */
/* WARNING: Removing unreachable block (ram,0x0168e95c) */

long Atlas_Settings_AtlasQualitySettings__SetDrawOutlinesAfterTransparencyPass
               (long param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int extraout_w1;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int aiStack_110 [4];
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  lVar10 = *(long *)(param_1 + 0xb0);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
    *(undefined1 *)(*(long *)(lVar10 + 0x20) + 0x28) = param_2;
    if (param_3 != 0) {
      *(undefined1 *)(lVar10 + 0x18) = 1;
    }
    return param_1;
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4809 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4809 = 1;
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    return **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  puVar7 = &uStack_170;
  if ((bRam0000000003eb5a93 & 1) == 0) {
    func_0x00f78a20(0x3d2ff60,0);
    func_0x00f78a20(0x3d33678);
    func_0x00f78a20(0x3d34f88);
    func_0x00f78a20(0x3d34f90);
    func_0x00f78a20(0x3d33680);
    func_0x00f78a20(0x3d33688);
    func_0x00f78a20(0x3d34f98);
    func_0x00f78a20(0x3d39400);
    func_0x00f78a20(0x3d3d6d8);
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d67970);
    func_0x00f78a20(0x3d65ed8);
    bRam0000000003eb5a93 = 1;
  }
  uStack_b0 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  aiStack_110[2] = 0;
  plVar4 = (long *)func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(plVar4,0x400,0);
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) goto code_r0x0168e96c;
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_148,lVar10,uRam0000000003d2ff60);
  uStack_98 = uStack_140;
  uStack_a0 = uStack_148;
  lStack_88 = lStack_130;
  uStack_90 = uStack_138;
  uStack_80 = uStack_128;
  iVar11 = 0;
  while (uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_a0,uRam0000000003d34f90), (uVar5 & 1) != 0) {
    if (lStack_88 == 0) {
      func_0x00f78af4();
code_r0x0168e968:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x168e96c);
      (*pcVar3)();
    }
    if (*(long *)(lStack_88 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x0168e968;
    }
    /*System.Collections.Generic.List<QualitySettings.Parameter>$$GetEnumerator*/ func_0x02571a94(&uStack_148,*(long *)(lStack_88 + 0x20),uRam0000000003d3d6d8);
    uStack_d8 = uStack_140;
    uStack_e0 = uStack_148;
    lStack_c8 = lStack_130;
    uStack_d0 = uStack_138;
    uStack_b8 = uStack_120;
    uStack_c0 = uStack_128;
    uStack_b0 = uStack_118;
    uVar5 = /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$MoveNext*/ func_0x01f8205c(&uStack_e0,uRam0000000003d33680);
    uVar8 = uStack_d0;
    if ((uVar5 & 1) != 0) {
      uStack_f8 = uStack_c0;
      lStack_100 = lStack_c8;
      uStack_e8 = uStack_b0;
      uStack_f0 = uStack_b8;
      if (plVar4 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x0168e968;
      }
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar4,uStack_d0,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar4,/*STR(': ')*/ uRam0000000003d67970,0);
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_170 = uVar8;
      uStack_160 = uStack_f8;
      lStack_168 = lStack_100;
      uStack_150 = uStack_e8;
      uStack_158 = uStack_f0;
      goto code_r0x0168e9c4;
    }
    aiStack_110[iVar11] = 0x8b;
    iVar2 = aiStack_110[2];
    iVar1 = aiStack_110[2] + 1;
    aiStack_110[2] = iVar1;
    /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$Dispose*/ func_0x01f82058(&uStack_e0,uRam0000000003d33678);
    iVar11 = 0;
    if ((iVar1 != 0) && (iVar11 = iVar1, aiStack_110[iVar2] == 0x8b)) {
      aiStack_110[2] = iVar2;
      iVar11 = iVar2;
    }
  }
  aiStack_110[iVar11] = 0xa4;
  aiStack_110[2] = aiStack_110[2] + 1;
  /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_a0,uRam0000000003d34f88);
  do {
    if (plVar4 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return lVar10;
    }
code_r0x0168e96c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0168e9c0;
    plVar6 = (long *)___cxa_begin_catch();
    lVar10 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_a0,uRam0000000003d34f88);
  } while (lVar10 == 0);
  func_0x00f78ac0(lVar10,0);
code_r0x0168e9c0:
  puVar7 = (undefined8 *)__Unwind_Resume();
code_r0x0168e9c4:
  if ((bRam0000000003eb5a94 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    bRam0000000003eb5a94 = 1;
  }
  fVar12 = *(float *)((long)puVar7 + 8);
  if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5a97 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6cca0);
    func_0x00f78a20(0x3d751c8);
    bRam0000000003eb5a97 = 1;
  }
  if (*(char *)((long)puVar7 + 0xc) == '\0') {
    if (*(char *)((long)puVar7 + 0xd) == '\0') {
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(puVar7);
      uVar9 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&stack0xfffffffffffffe58);
      lVar10 = /*System.String$$Format*/ func_0x029bc688(uVar8,uVar9,0);
    }
    else {
      lVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xfffffffffffffe5c,0);
    }
  }
  else {
    if (fVar12 <= 0.0) {
      plVar4 = (long *)0x3d6cca0;
    }
    else {
      plVar4 = (long *)0x3d751c8;
    }
    lVar10 = *plVar4;
  }
  return lVar10;
}



// ============================================================
// RVA: 0x145feb4 | Atlas.Settings.AtlasQualitySettings.CreateSettingsString
// ============================================================

/* WARNING: Possible PIC construction at 0x0168e824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e828) */
/* WARNING: Removing unreachable block (ram,0x0168e95c) */

undefined8 Atlas_Settings_AtlasQualitySettings__CreateSettingsString(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int extraout_w1;
  int iVar11;
  float fVar12;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int aiStack_100 [4];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb4809 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4809 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  puVar9 = &uStack_160;
  if ((bRam0000000003eb5a93 & 1) == 0) {
    func_0x00f78a20(0x3d2ff60,0);
    func_0x00f78a20(0x3d33678);
    func_0x00f78a20(0x3d34f88);
    func_0x00f78a20(0x3d34f90);
    func_0x00f78a20(0x3d33680);
    func_0x00f78a20(0x3d33688);
    func_0x00f78a20(0x3d34f98);
    func_0x00f78a20(0x3d39400);
    func_0x00f78a20(0x3d3d6d8);
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d67970);
    func_0x00f78a20(0x3d65ed8);
    bRam0000000003eb5a93 = 1;
  }
  uStack_a0 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  aiStack_100[2] = 0;
  plVar5 = (long *)func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(plVar5,0x400,0);
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 == 0) goto code_r0x0168e96c;
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_138,lVar4,uRam0000000003d2ff60);
  uStack_88 = uStack_130;
  uStack_90 = uStack_138;
  lStack_78 = lStack_120;
  uStack_80 = uStack_128;
  uStack_70 = uStack_118;
  iVar11 = 0;
  while (uVar6 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_90,uRam0000000003d34f90), (uVar6 & 1) != 0) {
    if (lStack_78 == 0) {
      func_0x00f78af4();
code_r0x0168e968:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x168e96c);
      (*pcVar3)();
    }
    if (*(long *)(lStack_78 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x0168e968;
    }
    /*System.Collections.Generic.List<QualitySettings.Parameter>$$GetEnumerator*/ func_0x02571a94(&uStack_138,*(long *)(lStack_78 + 0x20),uRam0000000003d3d6d8);
    uStack_c8 = uStack_130;
    uStack_d0 = uStack_138;
    lStack_b8 = lStack_120;
    uStack_c0 = uStack_128;
    uStack_a8 = uStack_110;
    uStack_b0 = uStack_118;
    uStack_a0 = uStack_108;
    uVar6 = /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$MoveNext*/ func_0x01f8205c(&uStack_d0,uRam0000000003d33680);
    uVar7 = uStack_c0;
    if ((uVar6 & 1) != 0) {
      uStack_e8 = uStack_b0;
      lStack_f0 = lStack_b8;
      uStack_d8 = uStack_a0;
      uStack_e0 = uStack_a8;
      if (plVar5 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x0168e968;
      }
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar5,uStack_c0,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar5,/*STR(': ')*/ uRam0000000003d67970,0);
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_160 = uVar7;
      uStack_150 = uStack_e8;
      lStack_158 = lStack_f0;
      uStack_140 = uStack_d8;
      uStack_148 = uStack_e0;
      goto code_r0x0168e9c4;
    }
    aiStack_100[iVar11] = 0x8b;
    iVar2 = aiStack_100[2];
    iVar1 = aiStack_100[2] + 1;
    aiStack_100[2] = iVar1;
    /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$Dispose*/ func_0x01f82058(&uStack_d0,uRam0000000003d33678);
    iVar11 = 0;
    if ((iVar1 != 0) && (iVar11 = iVar1, aiStack_100[iVar2] == 0x8b)) {
      aiStack_100[2] = iVar2;
      iVar11 = iVar2;
    }
  }
  aiStack_100[iVar11] = 0xa4;
  aiStack_100[2] = aiStack_100[2] + 1;
  /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_90,uRam0000000003d34f88);
  do {
    if (plVar5 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return uVar7;
    }
code_r0x0168e96c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0168e9c0;
    plVar8 = (long *)___cxa_begin_catch();
    lVar4 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_90,uRam0000000003d34f88);
  } while (lVar4 == 0);
  func_0x00f78ac0(lVar4,0);
code_r0x0168e9c0:
  puVar9 = (undefined8 *)__Unwind_Resume();
code_r0x0168e9c4:
  if ((bRam0000000003eb5a94 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    bRam0000000003eb5a94 = 1;
  }
  fVar12 = *(float *)((long)puVar9 + 8);
  if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5a97 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6cca0);
    func_0x00f78a20(0x3d751c8);
    bRam0000000003eb5a97 = 1;
  }
  if (*(char *)((long)puVar9 + 0xc) == '\0') {
    if (*(char *)((long)puVar9 + 0xd) == '\0') {
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(puVar9);
      uVar10 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&stack0xfffffffffffffe68);
      uVar7 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar10,0);
    }
    else {
      uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xfffffffffffffe6c,0);
    }
  }
  else {
    if (fVar12 <= 0.0) {
      puVar9 = (undefined8 *)0x3d6cca0;
    }
    else {
      puVar9 = (undefined8 *)0x3d751c8;
    }
    uVar7 = *puVar9;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x145ff1c | Atlas.Settings.AtlasQualitySettings.SetCameraManager
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0145fa14) */
/* WARNING: Removing unreachable block (ram,0x0145fa1c) */
/* WARNING: Removing unreachable block (ram,0x0145f9e0) */
/* WARNING: Removing unreachable block (ram,0x0145f9e8) */
/* WARNING: Removing unreachable block (ram,0x0145fa04) */

ulong Atlas_Settings_AtlasQualitySettings__SetCameraManager
                (long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auVar8 [16];
  code *pcVar9;
  undefined1 *puVar2;
  
  *(long *)(param_1 + 0x28) = param_2;
  if (param_2 == 0) {
    auVar8 = func_0x00f78af4();
    lVar6 = auVar8._0_8_;
    uVar3 = 0;
    if ((*(long *)(lVar6 + 0x10) != 0) &&
       (uVar3 = /*Core.Settings.QualitySettings$$IsQualityLevelValid*/ func_0x0168cdd8(*(long *)(lVar6 + 0x10),auVar8._8_8_,0), (int)uVar3 != 0)) {
      *(int *)(lVar6 + 0x18) = auVar8._8_4_;
      if (*(long *)(lVar6 + 0x10) == 0) {
        lVar6 = func_0x00f78af4();
        return (ulong)*(uint *)(lVar6 + 0x18);
      }
      /*Core.Settings.QualitySettings$$SetQualityLevel*/ func_0x0168cac0(*(long *)(lVar6 + 0x10),auVar8._8_8_,param_3,0);
      uVar3 = 1;
    }
    return uVar3;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  Atlas_Settings_AtlasQualitySettings__UpdateCameraSetings();
  puVar7 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb480b & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb480b = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetIntParameter*/ func_0x0168e218(*(long *)(param_1 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x60),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x68),
                    &stack0xffffffffffffffcc,0);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  if (lVar6 != 0) {
    /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar6,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar3 = /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(*(long *)(param_1 + 0x30),4,0);
      return uVar3;
    }
  }
  uVar3 = func_0x00f78af4();
  pcVar9 = Atlas_Settings_AtlasQualitySettings__ApplyOutlinesSettings;
  if ((bRam0000000003eb4806 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb4806 = 1;
  }
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar1 = &stack0xffffffffffffffc0;
  if (*(long *)(uVar3 + 0x10) != 0) {
    /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar3 + 0x10),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x150),uVar3 + 0x68,0);
    puVar1 = &stack0xffffffffffffffc0;
    if (*(long *)(uVar3 + 0x10) != 0) {
      /*Core.Settings.QualitySettings$$TryGetFloatParameter*/ func_0x0168e0a0(*(long *)(uVar3 + 0x10),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x158),uVar3 + 100,0)
      ;
      puVar1 = &stack0xffffffffffffffc0;
    }
  }
  do {
    puVar2 = puVar1 + -0x10;
    *(undefined1 **)(puVar1 + -0x10) = puVar7;
    *(code **)(puVar1 + -8) = pcVar9;
    lVar6 = *(long *)(uVar3 + 0xb0);
    if (*(char *)(uVar3 + 0x6c) == '\0') {
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
        puVar4 = (undefined4 *)(uVar3 + 100);
        goto LAB_0145ebec;
      }
    }
    else if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
      puVar4 = (undefined4 *)(uVar3 + 0x68);
LAB_0145ebec:
      *(undefined4 *)(lVar6 + 0x2c) = *puVar4;
      return uVar3;
    }
    pcVar9 = Atlas_Settings_AtlasQualitySettings__SetFrontEndSettings;
    uVar3 = func_0x00f78af4();
    *(undefined1 *)(uVar3 + 0x6c) = 0;
    puVar1 = puVar1 + -0x10;
    puVar7 = puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x145ff54 | Atlas.Settings.AtlasQualitySettings.TrySetQualityLevel
// ============================================================

ulong Atlas_Settings_AtlasQualitySettings__TrySetQualityLevel
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar1 = /*Core.Settings.QualitySettings$$IsQualityLevelValid*/ func_0x0168cdd8(*(long *)(param_1 + 0x10),param_2,0), (int)uVar1 != 0)) {
    *(int *)(param_1 + 0x18) = (int)param_2;
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar2 = func_0x00f78af4();
      return (ulong)*(uint *)(lVar2 + 0x18);
    }
    /*Core.Settings.QualitySettings$$SetQualityLevel*/ func_0x0168cac0(*(long *)(param_1 + 0x10),param_2,param_3,0);
    uVar1 = 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x145ffb8 | Atlas.Settings.AtlasQualitySettings.GetQualityLevel
// ============================================================

undefined4 Atlas_Settings_AtlasQualitySettings__GetQualityLevel(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x145ffc0 | Atlas.Settings.AtlasQualitySettings..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Settings_AtlasQualitySettings___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb480c & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb480c = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(param_1 + 0x54) = _UNK_033f81d8;
  *(undefined4 *)(param_1 + 0x60) = 3;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 100) = uVar1;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  return param_1;
}



// ============================================================
// RVA: 0x146004c | Atlas.Settings.AtlasQualitySettings..cctor
// ============================================================

void Atlas_Settings_AtlasQualitySettings___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb480d & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d72860);
    func_0x00f78a20(0x3d67410);
    func_0x00f78a20(0x3d6d060);
    func_0x00f78a20(0x3d6d7f0);
    func_0x00f78a20(0x3d70f18);
    func_0x00f78a20(0x3d6fcc0);
    func_0x00f78a20(0x3d6f870);
    func_0x00f78a20(0x3d6ab30);
    func_0x00f78a20(0x3d71030);
    func_0x00f78a20(0x3d6f918);
    func_0x00f78a20(0x3d6fed8);
    func_0x00f78a20(0x3d721c8);
    func_0x00f78a20(0x3d6f080);
    func_0x00f78a20(0x3d72858);
    func_0x00f78a20(0x3d6be68);
    func_0x00f78a20(0x3d722b0);
    func_0x00f78a20(0x3d67420);
    func_0x00f78a20(0x3d6bf60);
    func_0x00f78a20(0x3d75e80);
    func_0x00f78a20(0x3d76180);
    func_0x00f78a20(0x3d75d10);
    func_0x00f78a20(0x3d6ab58);
    func_0x00f78a20(0x3d688a8);
    func_0x00f78a20(0x3d6aa20);
    func_0x00f78a20(0x3d6b340);
    func_0x00f78a20(0x3d6bf70);
    func_0x00f78a20(0x3d70168);
    func_0x00f78a20(0x3d69568);
    func_0x00f78a20(0x3d72de8);
    func_0x00f78a20(0x3d75ed8);
    func_0x00f78a20(0x3d69498);
    func_0x00f78a20(0x3d6cda0);
    func_0x00f78a20(0x3d76378);
    func_0x00f78a20(0x3d6b888);
    func_0x00f78a20(0x3d6bf78);
    func_0x00f78a20(0x3d6d058);
    func_0x00f78a20(0x3d68fd8);
    func_0x00f78a20(0x3d69a50);
    func_0x00f78a20(0x3d71f60);
    func_0x00f78a20(0x3d67408);
    func_0x00f78a20(0x3d76430);
    func_0x00f78a20(0x3d67418);
    func_0x00f78a20(0x3d761c8);
    func_0x00f78a20(0x3d70170);
    func_0x00f78a20(0x3d75488);
    func_0x00f78a20(0x3d70198);
    func_0x00f78a20(0x3d6cf58);
    func_0x00f78a20(0x3d722a8);
    func_0x00f78a20(0x3d6bb80);
    func_0x00f78a20(0x3d70160);
    func_0x00f78a20(0x3d70dc0);
    func_0x00f78a20(0x3d6f1c8);
    func_0x00f78a20(0x3d69330);
    func_0x00f78a20(0x3d6d5a0);
    func_0x00f78a20(0x3d697d0);
    func_0x00f78a20(0x3d69a48);
    func_0x00f78a20(0x3d6ccb8);
    func_0x00f78a20(0x3d68d30);
    func_0x00f78a20(0x3d713e8);
    func_0x00f78a20(0x3d70508);
    func_0x00f78a20(0x3d73628);
    func_0x00f78a20(0x3d6f5e0);
    func_0x00f78a20(0x3d6be90);
    func_0x00f78a20(0x3d722b8);
    func_0x00f78a20(0x3d74ee0);
    func_0x00f78a20(0x3d6f1d0);
    func_0x00f78a20(0x3d69788);
    func_0x00f78a20(0x3d71da8);
    func_0x00f78a20(0x3d736d0);
    func_0x00f78a20(0x3d6bf68);
    func_0x00f78a20(0x3d688b8);
    func_0x00f78a20(0x3d697c8);
    func_0x00f78a20(0x3d6ab60);
    func_0x00f78a20(0x3d737b8);
    func_0x00f78a20(0x3d6d078);
    func_0x00f78a20(0x3d695f8);
    func_0x00f78a20(0x3d6a978);
    func_0x00f78a20(0x3d69600);
    bRam0000000003eb480d = 1;
  }
  uVar1 = /*UnityEngine.Application$$get_streamingAssetsPath*/ func_0x03218730(0);
  uVar1 = /*System.String$$Concat*/ func_0x029bdb88(uVar1,/*STR('/QualitySettings.cfg')*/ uRam0000000003d67418,0);
  **(undefined8 **)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Application$$get_streamingAssetsPath*/ func_0x03218730(0);
  uVar1 = /*System.String$$Concat*/ func_0x029bdb88(uVar1,/*STR('/QualitySettingsStripped.cfg')*/ uRam0000000003d67420,0);
  *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 8) = uVar1;
  uVar1 = /*UnityEngine.Application$$get_streamingAssetsPath*/ func_0x03218730(0);
  uVar1 = /*System.String$$Concat*/ func_0x029bdb88(uVar1,/*STR('/DeviceQualitySettings.cfg')*/ uRam0000000003d67408,0);
  *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*UnityEngine.Application$$get_streamingAssetsPath*/ func_0x03218730(0);
  uVar2 = /*System.String$$Concat*/ func_0x029bdb88(uVar1,/*STR('/DeviceQualitySettingsStripped.cfg')*/ uRam0000000003d67410,0);
  uVar1 = /*STR('Loading')*/ uRam0000000003d6f5e0;
  lVar3 = *(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8);
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  uVar1 = /*STR('BoostAsyncUploadTimeSlice')*/ uRam0000000003d697c8;
  *(undefined8 *)(lVar3 + 0x28) = /*STR('AsyncUploadTimeSlice')*/ uRam0000000003d69330;
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  uVar1 = /*STR('BoostBackgroundLoadingPriority')*/ uRam0000000003d697d0;
  *(undefined8 *)(lVar3 + 0x38) = /*STR('BackgroundLoadingPriority')*/ uRam0000000003d69568;
  *(undefined8 *)(lVar3 + 0x40) = uVar1;
  uVar1 = /*STR('TargetFPS')*/ uRam0000000003d73628;
  *(undefined8 *)(lVar3 + 0x48) = /*STR('Update')*/ uRam0000000003d75d10;
  *(undefined8 *)(lVar3 + 0x50) = uVar1;
  uVar1 = /*STR('Rendering')*/ uRam0000000003d71da8;
  *(undefined8 *)(lVar3 + 0x58) = /*STR('VSyncCount')*/ uRam0000000003d75ed8;
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = /*STR('NativeScalingEnabled')*/ uRam0000000003d70160;
  *(undefined8 *)(lVar3 + 0x68) = /*STR('ClearMode')*/ uRam0000000003d6aa20;
  *(undefined8 *)(lVar3 + 0x70) = uVar1;
  uVar1 = /*STR('NativeScalingFactorOverride')*/ uRam0000000003d70168;
  *(undefined8 *)(lVar3 + 0x78) = /*STR('NativeScalingMaxPixels')*/ uRam0000000003d70170;
  *(undefined8 *)(lVar3 + 0x80) = uVar1;
  uVar1 = /*STR('SceneScalingMaxWidth')*/ uRam0000000003d722b8;
  *(undefined8 *)(lVar3 + 0x88) = /*STR('SceneScalingEnabled')*/ uRam0000000003d722a8;
  *(undefined8 *)(lVar3 + 0x90) = uVar1;
  uVar1 = /*STR('TextureQuality')*/ uRam0000000003d737b8;
  *(undefined8 *)(lVar3 + 0x98) = /*STR('SceneScalingMaxHeight')*/ uRam0000000003d722b0;
  *(undefined8 *)(lVar3 + 0xa0) = uVar1;
  uVar1 = /*STR('PPAAType')*/ uRam0000000003d70f18;
  *(undefined8 *)(lVar3 + 0xa8) = /*STR('MSAACount')*/ uRam0000000003d6f870;
  *(undefined8 *)(lVar3 + 0xb0) = uVar1;
  uVar1 = /*STR('LODBias')*/ uRam0000000003d6f1c8;
  *(undefined8 *)(lVar3 + 0xb8) = /*STR('HDREnabled')*/ uRam0000000003d6d5a0;
  *(undefined8 *)(lVar3 + 0xc0) = uVar1;
  uVar1 = /*STR('ForceAniso')*/ uRam0000000003d6cf58;
  *(undefined8 *)(lVar3 + 200) = /*STR('LODMaxLevel')*/ uRam0000000003d6f1d0;
  *(undefined8 *)(lVar3 + 0xd0) = uVar1;
  uVar1 = /*STR('BloomEnabled')*/ uRam0000000003d69788;
  *(undefined8 *)(lVar3 + 0xd8) = /*STR('PostProcessing')*/ uRam0000000003d713e8;
  *(undefined8 *)(lVar3 + 0xe0) = uVar1;
  uVar1 = /*STR('FilmGrainEnabled')*/ uRam0000000003d6cda0;
  *(undefined8 *)(lVar3 + 0xe8) = /*STR('ChromaticAberrationEnabled')*/ uRam0000000003d6a978;
  *(undefined8 *)(lVar3 + 0xf0) = uVar1;
  uVar1 = /*STR('MotionBlurEnabled')*/ uRam0000000003d6fed8;
  *(undefined8 *)(lVar3 + 0xf8) = /*STR('DepthOfFieldEnabled')*/ uRam0000000003d6bb80;
  *(undefined8 *)(lVar3 + 0x100) = uVar1;
  uVar1 = /*STR('ShadowsMidtonesHighlightsEnabled')*/ uRam0000000003d72860;
  *(undefined8 *)(lVar3 + 0x108) = /*STR('PaniniProjectionEnabled')*/ uRam0000000003d71030;
  *(undefined8 *)(lVar3 + 0x110) = uVar1;
  uVar1 = /*STR('VignetteEnabled')*/ uRam0000000003d76180;
  *(undefined8 *)(lVar3 + 0x118) = /*STR('TonemappingEnabled')*/ uRam0000000003d74ee0;
  *(undefined8 *)(lVar3 + 0x120) = uVar1;
  uVar1 = /*STR('ColorCurvesEnabled')*/ uRam0000000003d6ab60;
  *(undefined8 *)(lVar3 + 0x128) = /*STR('ColorAdjustmentsEnabled')*/ uRam0000000003d6ab58;
  *(undefined8 *)(lVar3 + 0x130) = uVar1;
  uVar1 = /*STR('BaseLayerMipBias')*/ uRam0000000003d695f8;
  *(undefined8 *)(lVar3 + 0x138) = /*STR('Outlines')*/ uRam0000000003d70dc0;
  *(undefined8 *)(lVar3 + 0x140) = uVar1;
  uVar1 = /*STR('BaseLayerMipClamp')*/ uRam0000000003d69600;
  *(undefined8 *)(lVar3 + 0x148) = /*STR('FrontEndMipBias')*/ uRam0000000003d6d058;
  *(undefined8 *)(lVar3 + 0x150) = uVar1;
  uVar1 = /*STR('Shadows')*/ uRam0000000003d72858;
  *(undefined8 *)(lVar3 + 0x158) = /*STR('FrontEndMipClamp')*/ uRam0000000003d6d060;
  *(undefined8 *)(lVar3 + 0x160) = uVar1;
  uVar1 = /*STR('DynamicShadowsEnabled')*/ uRam0000000003d6bf70;
  *(undefined8 *)(lVar3 + 0x168) = /*STR('DropShadowsEnabled')*/ uRam0000000003d6be90;
  *(undefined8 *)(lVar3 + 0x170) = uVar1;
  uVar1 = /*STR('DynamicShadowsResolution')*/ uRam0000000003d6bf78;
  *(undefined8 *)(lVar3 + 0x178) = /*STR('DynamicShadowsDistanceModifier')*/ uRam0000000003d6bf68;
  *(undefined8 *)(lVar3 + 0x180) = uVar1;
  uVar1 = /*STR('Culling')*/ uRam0000000003d6b340;
  *(undefined8 *)(lVar3 + 0x188) = /*STR('DynamicShadowsCascades')*/ uRam0000000003d6bf60;
  *(undefined8 *)(lVar3 + 400) = uVar1;
  uVar1 = /*STR('MidDist')*/ uRam0000000003d6fcc0;
  *(undefined8 *)(lVar3 + 0x198) = /*STR('NearDist')*/ uRam0000000003d70198;
  *(undefined8 *)(lVar3 + 0x1a0) = uVar1;
  uVar1 = /*STR('WheelDist')*/ uRam0000000003d76430;
  *(undefined8 *)(lVar3 + 0x1a8) = /*STR('FarDist')*/ uRam0000000003d6ccb8;
  *(undefined8 *)(lVar3 + 0x1b0) = uVar1;
  uVar1 = /*STR('AntennaDist')*/ uRam0000000003d68fd8;
  *(undefined8 *)(lVar3 + 0x1b8) = /*STR('SteeringWheelDist')*/ uRam0000000003d72de8;
  *(undefined8 *)(lVar3 + 0x1c0) = uVar1;
  uVar1 = /*STR('DriftEnabled')*/ uRam0000000003d6be68;
  *(undefined8 *)(lVar3 + 0x1c8) = /*STR('VFX')*/ uRam0000000003d75e80;
  *(undefined8 *)(lVar3 + 0x1d0) = uVar1;
  uVar1 = /*STR('TyreSmokeEnabled')*/ uRam0000000003d75488;
  *(undefined8 *)(lVar3 + 0x1d8) = /*STR('KickupEnabled')*/ uRam0000000003d6f080;
  *(undefined8 *)(lVar3 + 0x1e0) = uVar1;
  uVar1 = /*STR('HideCharacters')*/ uRam0000000003d6d7f0;
  *(undefined8 *)(lVar3 + 0x1e8) = /*STR('Debug')*/ uRam0000000003d6b888;
  *(undefined8 *)(lVar3 + 0x1f0) = uVar1;
  uVar1 = /*STR('CMFarClip')*/ uRam0000000003d69a48;
  *(undefined8 *)(lVar3 + 0x1f8) = /*STR('CMNearClip')*/ uRam0000000003d69a50;
  *(undefined8 *)(lVar3 + 0x200) = uVar1;
  *(undefined8 *)(lVar3 + 0x208) = /*STR('Audio')*/ uRam0000000003d69498;
  *(undefined8 *)(lVar3 + 0x210) = /*STR('FullPlayerEngine')*/ uRam0000000003d6d078;
  *(undefined8 *)(lVar3 + 0x218) = /*STR('VoiceOver')*/ uRam0000000003d761c8;
  *(undefined8 *)(lVar3 + 0x220) = /*STR('AIVoiceOver')*/ uRam0000000003d688b8;
  *(undefined8 *)(lVar3 + 0x228) = /*STR('Terrain')*/ uRam0000000003d736d0;
  *(undefined8 *)(lVar3 + 0x230) = /*STR('AIEngines')*/ uRam0000000003d688a8;
  *(undefined8 *)(lVar3 + 0x238) = /*STR('Collisions')*/ uRam0000000003d6ab30;
  *(undefined8 *)(lVar3 + 0x240) = /*STR('Reverbs')*/ uRam0000000003d71f60;
  *(undefined8 *)(lVar3 + 0x248) = /*STR('Ambiences')*/ uRam0000000003d68d30;
  *(undefined8 *)(lVar3 + 0x250) = /*STR('Weapons')*/ uRam0000000003d76378;
  *(undefined8 *)(lVar3 + 600) = /*STR('SOS')*/ uRam0000000003d721c8;
  *(undefined8 *)(lVar3 + 0x260) = /*STR('MapSounds')*/ uRam0000000003d6f918;
  *(undefined8 *)(lVar3 + 0x268) = /*STR('NoSounds')*/ uRam0000000003d70508;
  *(undefined1 *)(lVar3 + 0x270) = 0;
  return;
}



// ============================================================
// RVA: 0x182fb00 | Atlas.Settings.AtlasQualitySettings.GetRenderingFeature<OutlineFeature>
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */

ulong Atlas_Settings_AtlasQualitySettings__GetRenderingFeature_OutlineFeature_
                (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int extraout_w1;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *unaff_x22;
  int iVar13;
  long *unaff_x23;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int aiStack_70 [4];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb63dc & 1) == 0) {
    func_0x00f78a20(0x3d32f08);
    func_0x00f78a20(0x3d32f10);
    func_0x00f78a20(0x3d1c780);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bd98);
    bRam0000000003eb63dc = 1;
  }
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  aiStack_70[2] = 0;
  if (*(long *)(param_1 + 0xa8) == 0) {
    func_0x00f78af4();
    goto code_r0x0182fd44;
  }
  unaff_x23 = (long *)0x3d1c780;
  unaff_x22 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_88,*(long *)(param_1 + 0xa8),uRam0000000003d3bd98);
  uStack_58 = uStack_80;
  lStack_60 = lStack_88;
  uStack_50 = uStack_78;
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_60,uRam0000000003d32f08);
    uVar14 = uStack_50;
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      aiStack_70[0] = 0x45;
      goto code_r0x0182fc90;
    }
    lVar11 = **(long **)(param_2 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    lVar11 = func_0x00f78adc(uVar14,lVar11);
  } while (lVar11 == 0);
  lVar11 = **(long **)(param_2 + 0x30);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  lVar11 = func_0x00f78adc(uVar14,lVar11);
  lVar12 = **(long **)(param_2 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = func_0x00f78adc(lVar11,lVar12);
    if (uVar5 == 0) {
      func_0x00f78e5c(lVar11,lVar12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x182fc64);
      (*pcVar4)();
    }
  }
  aiStack_70[0] = 0x4f;
code_r0x0182fc90:
  bVar3 = false;
  lVar11 = 0;
  param_1 = 0;
  aiStack_70[2] = 1;
  do {
    lStack_88 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lStack_88 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lStack_88 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lStack_88 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x0182fcec;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(&lStack_88);
code_r0x0182fcec:
    (*(code *)*puVar6)(aiStack_70,puVar6[1]);
    if (param_1 == 0) {
      if (bVar3) {
        uVar5 = 0;
      }
      else if (aiStack_70[lVar11] != 0x4f) {
        uVar5 = 0;
      }
      return uVar5;
    }
code_r0x0182fd44:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar7 = (long *)___cxa_begin_catch();
    param_1 = *plVar7;
    ___cxa_end_catch();
    uVar5 = 0;
    lVar11 = -1;
    bVar3 = true;
  } while( true );
  auVar15 = __Unwind_Resume();
  puStack_98 = &Atlas_UI_AtlasUIManager__RegisterScreen_VotingScreen_;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb63dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb63dd = 1;
  }
  lVar11 = *(long *)(auVar15._0_8_ + 0x10);
  uVar14 = **(undefined8 **)(param_5 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (lVar11 == 0) {
    auVar15 = func_0x00f78af4();
    plVar7 = auVar15._0_8_;
    puStack_e8 = &UnityEngine_AttributeHelperEngine__GetCustomAttributeOfType_object_;
    ppuStack_f0 = &puStack_a0;
    if ((bRam0000000003eb63de & 1) == 0) {
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb63de = 1;
    }
    uVar14 = **(undefined8 **)(auVar15._8_8_ + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
    if (plVar7 != (long *)0x0) {
      lVar11 = (**(code **)(*plVar7 + 0x1f8))(plVar7,uVar14,1,*(undefined8 *)(*plVar7 + 0x200));
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) != 0)) {
        lVar12 = *(long *)(lVar11 + 0x20);
        lVar11 = *(long *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        if (lVar12 != 0) {
          uVar5 = func_0x00f78adc(lVar12,lVar11);
          if (uVar5 != 0) {
            return uVar5;
          }
          func_0x00f78e5c(lVar12,lVar11);
        }
      }
      return 0;
    }
    auVar15 = func_0x00f78af4();
    lVar11 = auVar15._0_8_;
    uVar5 = 0;
    if (lVar11 != 0) {
      lVar12 = **(long **)(auVar15._8_8_ + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      uVar5 = func_0x00f78adc(lVar11,lVar12);
      if (uVar5 == 0) {
        uVar14 = func_0x00f78a24(0x3d1f218);
        lVar12 = func_0x00f78a34(uVar14,2);
        uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
        if (lVar12 == 0) {
          uVar14 = func_0x00f78af4();
        }
        func_0x0003dd20(lVar12,uVar14);
        func_0x0005b9c0(lVar12,0,uVar14);
        uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
        lVar11 = func_0x00f78a24(0x3d25458);
        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
           (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
          func_0x00f78a24(0x3d25458);
          func_0x00f78ad0();
        }
        uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
        func_0x00055e5c(lVar12);
        func_0x0003dd20(lVar12,uVar14);
        func_0x0005b9c0(lVar12,1,uVar14);
        uVar14 = func_0x00f78a24(0x3d71130);
        uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
        func_0x00f78a24(0x3d1fce8);
        uVar8 = func_0x00f78aec();
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
        uVar14 = func_0x00f78a24(0x3d52720);
        auVar15 = func_0x00f78ac0(uVar8,uVar14);
        lVar11 = auVar15._0_8_;
        uVar5 = 0;
        if (lVar11 != 0) {
          lVar12 = **(long **)(auVar15._8_8_ + 0x30);
          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar12);
          }
          uVar5 = func_0x00f78adc(lVar11,lVar12);
          if (uVar5 == 0) {
            uVar14 = func_0x00f78a24(0x3d1f218);
            lVar12 = func_0x00f78a34(uVar14,2);
            uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
            if (lVar12 == 0) {
              uVar14 = func_0x00f78af4();
            }
            func_0x0003dd20(lVar12,uVar14);
            func_0x0005b9c0(lVar12,0,uVar14);
            uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
            lVar11 = func_0x00f78a24(0x3d25458);
            if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
               (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
              func_0x00f78a24(0x3d25458);
              func_0x00f78ad0();
            }
            uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
            func_0x00055e5c(lVar12);
            func_0x0003dd20(lVar12,uVar14);
            func_0x0005b9c0(lVar12,1,uVar14);
            uVar14 = func_0x00f78a24(0x3d71130);
            uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
            func_0x00f78a24(0x3d1fce8);
            uVar8 = func_0x00f78aec();
            /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
            uVar14 = func_0x00f78a24(0x3d52728);
            auVar15 = func_0x00f78ac0(uVar8,uVar14);
            lVar11 = auVar15._0_8_;
            uVar5 = 0;
            if (lVar11 != 0) {
              lVar12 = **(long **)(auVar15._8_8_ + 0x30);
              if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar12);
              }
              uVar5 = func_0x00f78adc(lVar11,lVar12);
              if (uVar5 == 0) {
                uVar14 = func_0x00f78a24(0x3d1f218);
                lVar12 = func_0x00f78a34(uVar14,2);
                uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                if (lVar12 == 0) {
                  uVar14 = func_0x00f78af4();
                }
                func_0x0003dd20(lVar12,uVar14);
                func_0x0005b9c0(lVar12,0,uVar14);
                uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                lVar11 = func_0x00f78a24(0x3d25458);
                if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                   (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
                  func_0x00f78a24(0x3d25458);
                  func_0x00f78ad0();
                }
                uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                func_0x00055e5c(lVar12);
                func_0x0003dd20(lVar12,uVar14);
                func_0x0005b9c0(lVar12,1,uVar14);
                uVar14 = func_0x00f78a24(0x3d71130);
                uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                func_0x00f78a24(0x3d1fce8);
                uVar8 = func_0x00f78aec();
                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                uVar14 = func_0x00f78a24(0x3d52730);
                auVar15 = func_0x00f78ac0(uVar8,uVar14);
                lVar11 = auVar15._0_8_;
                uVar5 = 0;
                if (lVar11 != 0) {
                  lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar12);
                  }
                  uVar5 = func_0x00f78adc(lVar11,lVar12);
                  if (uVar5 == 0) {
                    uVar14 = func_0x00f78a24(0x3d1f218);
                    lVar12 = func_0x00f78a34(uVar14,2);
                    uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                    if (lVar12 == 0) {
                      uVar14 = func_0x00f78af4();
                    }
                    func_0x0003dd20(lVar12,uVar14);
                    func_0x0005b9c0(lVar12,0,uVar14);
                    uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                    lVar11 = func_0x00f78a24(0x3d25458);
                    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
                      func_0x00f78a24(0x3d25458);
                      func_0x00f78ad0();
                    }
                    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                    func_0x00055e5c(lVar12);
                    func_0x0003dd20(lVar12,uVar14);
                    func_0x0005b9c0(lVar12,1,uVar14);
                    uVar14 = func_0x00f78a24(0x3d71130);
                    uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                    func_0x00f78a24(0x3d1fce8);
                    uVar8 = func_0x00f78aec();
                    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                    uVar14 = func_0x00f78a24(0x3d52738);
                    auVar15 = func_0x00f78ac0(uVar8,uVar14);
                    lVar11 = auVar15._0_8_;
                    uVar5 = 0;
                    if (lVar11 != 0) {
                      lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                        func_0x00fac028(lVar12);
                      }
                      uVar5 = func_0x00f78adc(lVar11,lVar12);
                      if (uVar5 == 0) {
                        uVar14 = func_0x00f78a24(0x3d1f218);
                        lVar12 = func_0x00f78a34(uVar14,2);
                        uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                        if (lVar12 == 0) {
                          uVar14 = func_0x00f78af4();
                        }
                        func_0x0003dd20(lVar12,uVar14);
                        func_0x0005b9c0(lVar12,0,uVar14);
                        uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                        lVar11 = func_0x00f78a24(0x3d25458);
                        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                           (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
                          func_0x00f78a24(0x3d25458);
                          func_0x00f78ad0();
                        }
                        uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                        func_0x00055e5c(lVar12);
                        func_0x0003dd20(lVar12,uVar14);
                        func_0x0005b9c0(lVar12,1,uVar14);
                        uVar14 = func_0x00f78a24(0x3d71130);
                        uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                        func_0x00f78a24(0x3d1fce8);
                        uVar8 = func_0x00f78aec();
                        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                        uVar14 = func_0x00f78a24(0x3d52740);
                        auVar15 = func_0x00f78ac0(uVar8,uVar14);
                        lVar11 = auVar15._0_8_;
                        uVar5 = 0;
                        if (lVar11 != 0) {
                          lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                            func_0x00fac028(lVar12);
                          }
                          uVar5 = func_0x00f78adc(lVar11,lVar12);
                          if (uVar5 == 0) {
                            uVar14 = func_0x00f78a24(0x3d1f218);
                            lVar12 = func_0x00f78a34(uVar14,2);
                            uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                            if (lVar12 == 0) {
                              uVar14 = func_0x00f78af4();
                            }
                            func_0x0003dd20(lVar12,uVar14);
                            func_0x0005b9c0(lVar12,0,uVar14);
                            uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                            lVar11 = func_0x00f78a24(0x3d25458);
                            if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                               (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0))
                            {
                              func_0x00f78a24(0x3d25458);
                              func_0x00f78ad0();
                            }
                            uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                            func_0x00055e5c(lVar12);
                            func_0x0003dd20(lVar12,uVar14);
                            func_0x0005b9c0(lVar12,1,uVar14);
                            uVar14 = func_0x00f78a24(0x3d71130);
                            uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                            func_0x00f78a24(0x3d1fce8);
                            uVar8 = func_0x00f78aec();
                            /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                            uVar14 = func_0x00f78a24(0x3d52748);
                            auVar15 = func_0x00f78ac0(uVar8,uVar14);
                            lVar11 = auVar15._0_8_;
                            uVar5 = 0;
                            if (lVar11 != 0) {
                              lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                              if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar12);
                              }
                              uVar5 = func_0x00f78adc(lVar11,lVar12);
                              if (uVar5 == 0) {
                                uVar14 = func_0x00f78a24(0x3d1f218);
                                lVar12 = func_0x00f78a34(uVar14,2);
                                uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                                if (lVar12 == 0) {
                                  uVar14 = func_0x00f78af4();
                                }
                                func_0x0003dd20(lVar12,uVar14);
                                func_0x0005b9c0(lVar12,0,uVar14);
                                uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                                lVar11 = func_0x00f78a24(0x3d25458);
                                if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                                   (lVar11 = func_0x00f78a24(0x3d25458),
                                   *(int *)(lVar11 + 0xe0) == 0)) {
                                  func_0x00f78a24(0x3d25458);
                                  func_0x00f78ad0();
                                }
                                uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                                func_0x00055e5c(lVar12);
                                func_0x0003dd20(lVar12,uVar14);
                                func_0x0005b9c0(lVar12,1,uVar14);
                                uVar14 = func_0x00f78a24(0x3d71130);
                                uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                                func_0x00f78a24(0x3d1fce8);
                                uVar8 = func_0x00f78aec();
                                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                                uVar14 = func_0x00f78a24(0x3d52750);
                                auVar15 = func_0x00f78ac0(uVar8,uVar14);
                                lVar11 = auVar15._0_8_;
                                uVar5 = 0;
                                if (lVar11 != 0) {
                                  lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                                  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                    func_0x00fac028(lVar12);
                                  }
                                  uVar5 = func_0x00f78adc(lVar11,lVar12);
                                  if (uVar5 == 0) {
                                    uVar14 = func_0x00f78a24(0x3d1f218);
                                    lVar12 = func_0x00f78a34(uVar14,2);
                                    uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                                    if (lVar12 == 0) {
                                      uVar14 = func_0x00f78af4();
                                    }
                                    func_0x0003dd20(lVar12,uVar14);
                                    func_0x0005b9c0(lVar12,0,uVar14);
                                    uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                                    lVar11 = func_0x00f78a24(0x3d25458);
                                    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                                       (lVar11 = func_0x00f78a24(0x3d25458),
                                       *(int *)(lVar11 + 0xe0) == 0)) {
                                      func_0x00f78a24(0x3d25458);
                                      func_0x00f78ad0();
                                    }
                                    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                                    func_0x00055e5c(lVar12);
                                    func_0x0003dd20(lVar12,uVar14);
                                    func_0x0005b9c0(lVar12,1,uVar14);
                                    uVar14 = func_0x00f78a24(0x3d71130);
                                    uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                                    func_0x00f78a24(0x3d1fce8);
                                    uVar8 = func_0x00f78aec();
                                    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                                    uVar14 = func_0x00f78a24(0x3d52758);
                                    auVar15 = func_0x00f78ac0(uVar8,uVar14);
                                    lVar11 = auVar15._0_8_;
                                    uVar5 = 0;
                                    if (lVar11 != 0) {
                                      lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                                      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                        func_0x00fac028(lVar12);
                                      }
                                      uVar5 = func_0x00f78adc(lVar11,lVar12);
                                      if (uVar5 == 0) {
                                        uVar14 = func_0x00f78a24(0x3d1f218);
                                        lVar12 = func_0x00f78a34(uVar14,2);
                                        uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                                        if (lVar12 == 0) {
                                          uVar14 = func_0x00f78af4();
                                        }
                                        func_0x0003dd20(lVar12,uVar14);
                                        func_0x0005b9c0(lVar12,0,uVar14);
                                        uVar14 = *(undefined8 *)
                                                  (*(long *)(auVar15._8_8_ + 0x30) + 8);
                                        lVar11 = func_0x00f78a24(0x3d25458);
                                        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                                           (lVar11 = func_0x00f78a24(0x3d25458),
                                           *(int *)(lVar11 + 0xe0) == 0)) {
                                          func_0x00f78a24(0x3d25458);
                                          func_0x00f78ad0();
                                        }
                                        uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                                        func_0x00055e5c(lVar12);
                                        func_0x0003dd20(lVar12,uVar14);
                                        func_0x0005b9c0(lVar12,1,uVar14);
                                        uVar14 = func_0x00f78a24(0x3d71130);
                                        uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                                        func_0x00f78a24(0x3d1fce8);
                                        uVar8 = func_0x00f78aec();
                                        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                                        uVar14 = func_0x00f78a24(0x3d52760);
                                        lVar11 = func_0x00f78ac0(uVar8,uVar14);
                                        lVar12 = **(long **)(lVar11 + 0x30);
                                        uVar2 = *(ushort *)(lVar12 + 0x132);
                                        if ((uVar2 & 1) == 0) {
                                          func_0x00fac028(lVar12);
                                          uVar2 = *(ushort *)(lVar12 + 0x132);
                                        }
                                        if ((uVar2 >> 10 & 1) != 0) {
                                          lVar12 = **(long **)(lVar11 + 0x30);
                                          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                            func_0x00fac028(lVar12);
                                          }
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            lVar12 = **(long **)(lVar11 + 0x30);
                                            if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                              func_0x00fac028(lVar12);
                                            }
                                            func_0x00f78ad0(lVar12);
                                          }
                                        }
                                        lVar11 = **(long **)(lVar11 + 0x30);
                                        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
                                          func_0x00fac028(lVar11);
                                        }
                                        return **(ulong **)(lVar11 + 0xb8);
                                      }
                                    }
                                    return uVar5;
                                  }
                                }
                                return uVar5;
                              }
                            }
                            return uVar5;
                          }
                        }
                        return uVar5;
                      }
                    }
                    return uVar5;
                  }
                }
                return uVar5;
              }
            }
            return uVar5;
          }
        }
        return uVar5;
      }
    }
    return uVar5;
  }
  if ((bRam0000000003ebc649 & 1) == 0) {
    func_0x00f78a20(0x3d3dde0);
    bRam0000000003ebc649 = 1;
  }
  lVar11 = *(long *)(lVar11 + 0x78);
  if (lVar11 != 0) {
    ppuStack_f0 = auVar15._8_8_;
    puStack_e8 = (undefined *)uVar14;
    uVar5 = /*System.Collections.Generic.List<UIManager.ScreenInfo>$$Add*/ func_0x025c361c(lVar11,&ppuStack_f0,uRam0000000003d3dde0);
    return uVar5;
  }
  auVar15 = func_0x00f78af4();
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar11 = *(long *)(auVar15._0_8_ + 0x78);
  if (lVar11 != 0) {
    iVar1 = *(int *)(lVar11 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar13 = 1;
    uVar5 = 1;
    do {
      if (*(uint *)(lVar11 + 0x18) <= iVar13 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
      if (lVar11 == 0) break;
      uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar11,auVar15._8_8_,5,0);
      if ((uVar9 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(iVar13 < iVar1);
      if (iVar1 == iVar13) {
        return uVar5;
      }
      lVar11 = *(long *)(auVar15._0_8_ + 0x78);
      iVar13 = iVar13 + 1;
    } while (lVar11 != 0);
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x182fb00 | Atlas.Settings.AtlasQualitySettings.GetRenderingFeature<object>
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */

ulong Atlas_Settings_AtlasQualitySettings__GetRenderingFeature_OutlineFeature_
                (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int extraout_w1;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *unaff_x22;
  int iVar13;
  long *unaff_x23;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int aiStack_70 [4];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb63dc & 1) == 0) {
    func_0x00f78a20(0x3d32f08);
    func_0x00f78a20(0x3d32f10);
    func_0x00f78a20(0x3d1c780);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bd98);
    bRam0000000003eb63dc = 1;
  }
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  aiStack_70[2] = 0;
  if (*(long *)(param_1 + 0xa8) == 0) {
    func_0x00f78af4();
    goto code_r0x0182fd44;
  }
  unaff_x23 = (long *)0x3d1c780;
  unaff_x22 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_88,*(long *)(param_1 + 0xa8),uRam0000000003d3bd98);
  uStack_58 = uStack_80;
  lStack_60 = lStack_88;
  uStack_50 = uStack_78;
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_60,uRam0000000003d32f08);
    uVar14 = uStack_50;
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      aiStack_70[0] = 0x45;
      goto code_r0x0182fc90;
    }
    lVar11 = **(long **)(param_2 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    lVar11 = func_0x00f78adc(uVar14,lVar11);
  } while (lVar11 == 0);
  lVar11 = **(long **)(param_2 + 0x30);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  lVar11 = func_0x00f78adc(uVar14,lVar11);
  lVar12 = **(long **)(param_2 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = func_0x00f78adc(lVar11,lVar12);
    if (uVar5 == 0) {
      func_0x00f78e5c(lVar11,lVar12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x182fc64);
      (*pcVar4)();
    }
  }
  aiStack_70[0] = 0x4f;
code_r0x0182fc90:
  bVar3 = false;
  lVar11 = 0;
  param_1 = 0;
  aiStack_70[2] = 1;
  do {
    lStack_88 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lStack_88 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lStack_88 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lStack_88 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x0182fcec;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(&lStack_88);
code_r0x0182fcec:
    (*(code *)*puVar6)(aiStack_70,puVar6[1]);
    if (param_1 == 0) {
      if (bVar3) {
        uVar5 = 0;
      }
      else if (aiStack_70[lVar11] != 0x4f) {
        uVar5 = 0;
      }
      return uVar5;
    }
code_r0x0182fd44:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar7 = (long *)___cxa_begin_catch();
    param_1 = *plVar7;
    ___cxa_end_catch();
    uVar5 = 0;
    lVar11 = -1;
    bVar3 = true;
  } while( true );
  auVar15 = __Unwind_Resume();
  puStack_98 = &Atlas_UI_AtlasUIManager__RegisterScreen_VotingScreen_;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb63dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb63dd = 1;
  }
  lVar11 = *(long *)(auVar15._0_8_ + 0x10);
  uVar14 = **(undefined8 **)(param_5 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (lVar11 == 0) {
    auVar15 = func_0x00f78af4();
    plVar7 = auVar15._0_8_;
    puStack_e8 = &UnityEngine_AttributeHelperEngine__GetCustomAttributeOfType_object_;
    ppuStack_f0 = &puStack_a0;
    if ((bRam0000000003eb63de & 1) == 0) {
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb63de = 1;
    }
    uVar14 = **(undefined8 **)(auVar15._8_8_ + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
    if (plVar7 != (long *)0x0) {
      lVar11 = (**(code **)(*plVar7 + 0x1f8))(plVar7,uVar14,1,*(undefined8 *)(*plVar7 + 0x200));
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) != 0)) {
        lVar12 = *(long *)(lVar11 + 0x20);
        lVar11 = *(long *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        if (lVar12 != 0) {
          uVar5 = func_0x00f78adc(lVar12,lVar11);
          if (uVar5 != 0) {
            return uVar5;
          }
          func_0x00f78e5c(lVar12,lVar11);
        }
      }
      return 0;
    }
    auVar15 = func_0x00f78af4();
    lVar11 = auVar15._0_8_;
    uVar5 = 0;
    if (lVar11 != 0) {
      lVar12 = **(long **)(auVar15._8_8_ + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      uVar5 = func_0x00f78adc(lVar11,lVar12);
      if (uVar5 == 0) {
        uVar14 = func_0x00f78a24(0x3d1f218);
        lVar12 = func_0x00f78a34(uVar14,2);
        uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
        if (lVar12 == 0) {
          uVar14 = func_0x00f78af4();
        }
        func_0x0003dd20(lVar12,uVar14);
        func_0x0005b9c0(lVar12,0,uVar14);
        uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
        lVar11 = func_0x00f78a24(0x3d25458);
        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
           (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
          func_0x00f78a24(0x3d25458);
          func_0x00f78ad0();
        }
        uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
        func_0x00055e5c(lVar12);
        func_0x0003dd20(lVar12,uVar14);
        func_0x0005b9c0(lVar12,1,uVar14);
        uVar14 = func_0x00f78a24(0x3d71130);
        uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
        func_0x00f78a24(0x3d1fce8);
        uVar8 = func_0x00f78aec();
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
        uVar14 = func_0x00f78a24(0x3d52720);
        auVar15 = func_0x00f78ac0(uVar8,uVar14);
        lVar11 = auVar15._0_8_;
        uVar5 = 0;
        if (lVar11 != 0) {
          lVar12 = **(long **)(auVar15._8_8_ + 0x30);
          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar12);
          }
          uVar5 = func_0x00f78adc(lVar11,lVar12);
          if (uVar5 == 0) {
            uVar14 = func_0x00f78a24(0x3d1f218);
            lVar12 = func_0x00f78a34(uVar14,2);
            uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
            if (lVar12 == 0) {
              uVar14 = func_0x00f78af4();
            }
            func_0x0003dd20(lVar12,uVar14);
            func_0x0005b9c0(lVar12,0,uVar14);
            uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
            lVar11 = func_0x00f78a24(0x3d25458);
            if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
               (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
              func_0x00f78a24(0x3d25458);
              func_0x00f78ad0();
            }
            uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
            func_0x00055e5c(lVar12);
            func_0x0003dd20(lVar12,uVar14);
            func_0x0005b9c0(lVar12,1,uVar14);
            uVar14 = func_0x00f78a24(0x3d71130);
            uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
            func_0x00f78a24(0x3d1fce8);
            uVar8 = func_0x00f78aec();
            /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
            uVar14 = func_0x00f78a24(0x3d52728);
            auVar15 = func_0x00f78ac0(uVar8,uVar14);
            lVar11 = auVar15._0_8_;
            uVar5 = 0;
            if (lVar11 != 0) {
              lVar12 = **(long **)(auVar15._8_8_ + 0x30);
              if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar12);
              }
              uVar5 = func_0x00f78adc(lVar11,lVar12);
              if (uVar5 == 0) {
                uVar14 = func_0x00f78a24(0x3d1f218);
                lVar12 = func_0x00f78a34(uVar14,2);
                uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                if (lVar12 == 0) {
                  uVar14 = func_0x00f78af4();
                }
                func_0x0003dd20(lVar12,uVar14);
                func_0x0005b9c0(lVar12,0,uVar14);
                uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                lVar11 = func_0x00f78a24(0x3d25458);
                if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                   (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
                  func_0x00f78a24(0x3d25458);
                  func_0x00f78ad0();
                }
                uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                func_0x00055e5c(lVar12);
                func_0x0003dd20(lVar12,uVar14);
                func_0x0005b9c0(lVar12,1,uVar14);
                uVar14 = func_0x00f78a24(0x3d71130);
                uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                func_0x00f78a24(0x3d1fce8);
                uVar8 = func_0x00f78aec();
                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                uVar14 = func_0x00f78a24(0x3d52730);
                auVar15 = func_0x00f78ac0(uVar8,uVar14);
                lVar11 = auVar15._0_8_;
                uVar5 = 0;
                if (lVar11 != 0) {
                  lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar12);
                  }
                  uVar5 = func_0x00f78adc(lVar11,lVar12);
                  if (uVar5 == 0) {
                    uVar14 = func_0x00f78a24(0x3d1f218);
                    lVar12 = func_0x00f78a34(uVar14,2);
                    uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                    if (lVar12 == 0) {
                      uVar14 = func_0x00f78af4();
                    }
                    func_0x0003dd20(lVar12,uVar14);
                    func_0x0005b9c0(lVar12,0,uVar14);
                    uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                    lVar11 = func_0x00f78a24(0x3d25458);
                    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
                      func_0x00f78a24(0x3d25458);
                      func_0x00f78ad0();
                    }
                    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                    func_0x00055e5c(lVar12);
                    func_0x0003dd20(lVar12,uVar14);
                    func_0x0005b9c0(lVar12,1,uVar14);
                    uVar14 = func_0x00f78a24(0x3d71130);
                    uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                    func_0x00f78a24(0x3d1fce8);
                    uVar8 = func_0x00f78aec();
                    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                    uVar14 = func_0x00f78a24(0x3d52738);
                    auVar15 = func_0x00f78ac0(uVar8,uVar14);
                    lVar11 = auVar15._0_8_;
                    uVar5 = 0;
                    if (lVar11 != 0) {
                      lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                        func_0x00fac028(lVar12);
                      }
                      uVar5 = func_0x00f78adc(lVar11,lVar12);
                      if (uVar5 == 0) {
                        uVar14 = func_0x00f78a24(0x3d1f218);
                        lVar12 = func_0x00f78a34(uVar14,2);
                        uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                        if (lVar12 == 0) {
                          uVar14 = func_0x00f78af4();
                        }
                        func_0x0003dd20(lVar12,uVar14);
                        func_0x0005b9c0(lVar12,0,uVar14);
                        uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                        lVar11 = func_0x00f78a24(0x3d25458);
                        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                           (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
                          func_0x00f78a24(0x3d25458);
                          func_0x00f78ad0();
                        }
                        uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                        func_0x00055e5c(lVar12);
                        func_0x0003dd20(lVar12,uVar14);
                        func_0x0005b9c0(lVar12,1,uVar14);
                        uVar14 = func_0x00f78a24(0x3d71130);
                        uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                        func_0x00f78a24(0x3d1fce8);
                        uVar8 = func_0x00f78aec();
                        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                        uVar14 = func_0x00f78a24(0x3d52740);
                        auVar15 = func_0x00f78ac0(uVar8,uVar14);
                        lVar11 = auVar15._0_8_;
                        uVar5 = 0;
                        if (lVar11 != 0) {
                          lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                            func_0x00fac028(lVar12);
                          }
                          uVar5 = func_0x00f78adc(lVar11,lVar12);
                          if (uVar5 == 0) {
                            uVar14 = func_0x00f78a24(0x3d1f218);
                            lVar12 = func_0x00f78a34(uVar14,2);
                            uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                            if (lVar12 == 0) {
                              uVar14 = func_0x00f78af4();
                            }
                            func_0x0003dd20(lVar12,uVar14);
                            func_0x0005b9c0(lVar12,0,uVar14);
                            uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                            lVar11 = func_0x00f78a24(0x3d25458);
                            if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                               (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0))
                            {
                              func_0x00f78a24(0x3d25458);
                              func_0x00f78ad0();
                            }
                            uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                            func_0x00055e5c(lVar12);
                            func_0x0003dd20(lVar12,uVar14);
                            func_0x0005b9c0(lVar12,1,uVar14);
                            uVar14 = func_0x00f78a24(0x3d71130);
                            uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                            func_0x00f78a24(0x3d1fce8);
                            uVar8 = func_0x00f78aec();
                            /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                            uVar14 = func_0x00f78a24(0x3d52748);
                            auVar15 = func_0x00f78ac0(uVar8,uVar14);
                            lVar11 = auVar15._0_8_;
                            uVar5 = 0;
                            if (lVar11 != 0) {
                              lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                              if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                func_0x00fac028(lVar12);
                              }
                              uVar5 = func_0x00f78adc(lVar11,lVar12);
                              if (uVar5 == 0) {
                                uVar14 = func_0x00f78a24(0x3d1f218);
                                lVar12 = func_0x00f78a34(uVar14,2);
                                uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                                if (lVar12 == 0) {
                                  uVar14 = func_0x00f78af4();
                                }
                                func_0x0003dd20(lVar12,uVar14);
                                func_0x0005b9c0(lVar12,0,uVar14);
                                uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                                lVar11 = func_0x00f78a24(0x3d25458);
                                if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                                   (lVar11 = func_0x00f78a24(0x3d25458),
                                   *(int *)(lVar11 + 0xe0) == 0)) {
                                  func_0x00f78a24(0x3d25458);
                                  func_0x00f78ad0();
                                }
                                uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                                func_0x00055e5c(lVar12);
                                func_0x0003dd20(lVar12,uVar14);
                                func_0x0005b9c0(lVar12,1,uVar14);
                                uVar14 = func_0x00f78a24(0x3d71130);
                                uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                                func_0x00f78a24(0x3d1fce8);
                                uVar8 = func_0x00f78aec();
                                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                                uVar14 = func_0x00f78a24(0x3d52750);
                                auVar15 = func_0x00f78ac0(uVar8,uVar14);
                                lVar11 = auVar15._0_8_;
                                uVar5 = 0;
                                if (lVar11 != 0) {
                                  lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                                  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                    func_0x00fac028(lVar12);
                                  }
                                  uVar5 = func_0x00f78adc(lVar11,lVar12);
                                  if (uVar5 == 0) {
                                    uVar14 = func_0x00f78a24(0x3d1f218);
                                    lVar12 = func_0x00f78a34(uVar14,2);
                                    uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                                    if (lVar12 == 0) {
                                      uVar14 = func_0x00f78af4();
                                    }
                                    func_0x0003dd20(lVar12,uVar14);
                                    func_0x0005b9c0(lVar12,0,uVar14);
                                    uVar14 = *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8);
                                    lVar11 = func_0x00f78a24(0x3d25458);
                                    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                                       (lVar11 = func_0x00f78a24(0x3d25458),
                                       *(int *)(lVar11 + 0xe0) == 0)) {
                                      func_0x00f78a24(0x3d25458);
                                      func_0x00f78ad0();
                                    }
                                    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                                    func_0x00055e5c(lVar12);
                                    func_0x0003dd20(lVar12,uVar14);
                                    func_0x0005b9c0(lVar12,1,uVar14);
                                    uVar14 = func_0x00f78a24(0x3d71130);
                                    uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                                    func_0x00f78a24(0x3d1fce8);
                                    uVar8 = func_0x00f78aec();
                                    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                                    uVar14 = func_0x00f78a24(0x3d52758);
                                    auVar15 = func_0x00f78ac0(uVar8,uVar14);
                                    lVar11 = auVar15._0_8_;
                                    uVar5 = 0;
                                    if (lVar11 != 0) {
                                      lVar12 = **(long **)(auVar15._8_8_ + 0x30);
                                      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                        func_0x00fac028(lVar12);
                                      }
                                      uVar5 = func_0x00f78adc(lVar11,lVar12);
                                      if (uVar5 == 0) {
                                        uVar14 = func_0x00f78a24(0x3d1f218);
                                        lVar12 = func_0x00f78a34(uVar14,2);
                                        uVar14 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
                                        if (lVar12 == 0) {
                                          uVar14 = func_0x00f78af4();
                                        }
                                        func_0x0003dd20(lVar12,uVar14);
                                        func_0x0005b9c0(lVar12,0,uVar14);
                                        uVar14 = *(undefined8 *)
                                                  (*(long *)(auVar15._8_8_ + 0x30) + 8);
                                        lVar11 = func_0x00f78a24(0x3d25458);
                                        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
                                           (lVar11 = func_0x00f78a24(0x3d25458),
                                           *(int *)(lVar11 + 0xe0) == 0)) {
                                          func_0x00f78a24(0x3d25458);
                                          func_0x00f78ad0();
                                        }
                                        uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                                        func_0x00055e5c(lVar12);
                                        func_0x0003dd20(lVar12,uVar14);
                                        func_0x0005b9c0(lVar12,1,uVar14);
                                        uVar14 = func_0x00f78a24(0x3d71130);
                                        uVar14 = /*UnityEngine.UnityString$$Format*/ func_0x032a556c(uVar14,lVar12,0);
                                        func_0x00f78a24(0x3d1fce8);
                                        uVar8 = func_0x00f78aec();
                                        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar14,0);
                                        uVar14 = func_0x00f78a24(0x3d52760);
                                        lVar11 = func_0x00f78ac0(uVar8,uVar14);
                                        lVar12 = **(long **)(lVar11 + 0x30);
                                        uVar2 = *(ushort *)(lVar12 + 0x132);
                                        if ((uVar2 & 1) == 0) {
                                          func_0x00fac028(lVar12);
                                          uVar2 = *(ushort *)(lVar12 + 0x132);
                                        }
                                        if ((uVar2 >> 10 & 1) != 0) {
                                          lVar12 = **(long **)(lVar11 + 0x30);
                                          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                            func_0x00fac028(lVar12);
                                          }
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            lVar12 = **(long **)(lVar11 + 0x30);
                                            if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                              func_0x00fac028(lVar12);
                                            }
                                            func_0x00f78ad0(lVar12);
                                          }
                                        }
                                        lVar11 = **(long **)(lVar11 + 0x30);
                                        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
                                          func_0x00fac028(lVar11);
                                        }
                                        return **(ulong **)(lVar11 + 0xb8);
                                      }
                                    }
                                    return uVar5;
                                  }
                                }
                                return uVar5;
                              }
                            }
                            return uVar5;
                          }
                        }
                        return uVar5;
                      }
                    }
                    return uVar5;
                  }
                }
                return uVar5;
              }
            }
            return uVar5;
          }
        }
        return uVar5;
      }
    }
    return uVar5;
  }
  if ((bRam0000000003ebc649 & 1) == 0) {
    func_0x00f78a20(0x3d3dde0);
    bRam0000000003ebc649 = 1;
  }
  lVar11 = *(long *)(lVar11 + 0x78);
  if (lVar11 != 0) {
    ppuStack_f0 = auVar15._8_8_;
    puStack_e8 = (undefined *)uVar14;
    uVar5 = /*System.Collections.Generic.List<UIManager.ScreenInfo>$$Add*/ func_0x025c361c(lVar11,&ppuStack_f0,uRam0000000003d3dde0);
    return uVar5;
  }
  auVar15 = func_0x00f78af4();
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar11 = *(long *)(auVar15._0_8_ + 0x78);
  if (lVar11 != 0) {
    iVar1 = *(int *)(lVar11 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar13 = 1;
    uVar5 = 1;
    do {
      if (*(uint *)(lVar11 + 0x18) <= iVar13 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
      if (lVar11 == 0) break;
      uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar11,auVar15._8_8_,5,0);
      if ((uVar9 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(iVar13 < iVar1);
      if (iVar1 == iVar13) {
        return uVar5;
      }
      lVar11 = *(long *)(auVar15._0_8_ + 0x78);
      iVar13 = iVar13 + 1;
    } while (lVar11 != 0);
  }
  func_0x00f78af4();
  return 0;
}



